// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/lru_cache.h

// Line 25: range 000000000E0BF3C6-000000000E0BF3F4
void __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::~LruCache(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this)
{
  std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::~unordered_map(&this->key_iterator_map_);
  std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::~list(&this->pair_list_);
};

// Line 25: range 000000000E0BF35E-000000000E0BF38C
void __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::~LruCache(common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this);

// Line 25: range 000000000E0BF2F6-000000000E0BF324
void __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::~LruCache(
        common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this)
{
  std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::~unordered_map(&this->key_iterator_map_);
  std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::~list(&this->pair_list_);
};

// Line 32: range 000000000DD7353C-000000000DD73685
void __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::LruCache(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_live_time_);
  }
  this->max_live_time_ = 0;
  std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::list(&this->pair_list_);
  std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::unordered_map(&this->key_iterator_map_);
  std::mutex::mutex(&this->cache_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->get_count_);
  }
  this->get_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count_);
  }
  this->hit_count_ = 0;
};

// Line 32: range 000000000DD73260-000000000DD733A9
void __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::LruCache(
        common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_live_time_);
  }
  this->max_live_time_ = 0;
  std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::list(&this->pair_list_);
  std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::unordered_map(&this->key_iterator_map_);
  std::mutex::mutex(&this->cache_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->get_count_);
  }
  this->get_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count_);
  }
  this->hit_count_ = 0;
};

// Line 32: range 000000000DD72F84-000000000DD730CD
void __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::LruCache(common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this);

// Line 35: range 000000000DF4D38C-000000000DF4D3D5
void __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::setMaxSize(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this,
        uint32_t max_size)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = max_size;
};

// Line 35: range 000000000DF4D2EA-000000000DF4D333
void __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::setMaxSize(
        common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this,
        uint32_t max_size)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = max_size;
};

// Line 35: range 000000000DF4D248-000000000DF4D291
void __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::setMaxSize(
        common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this,
        uint32_t max_size)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_size_ = max_size;
};

// Line 40: range 000000000DF4D3D6-000000000DF4D42C
void __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::setMaxLiveTime(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this,
        uint32_t max_live_time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_live_time_);
  }
  this->max_live_time_ = max_live_time;
};

// Line 40: range 000000000DF4D334-000000000DF4D38A
void __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::setMaxLiveTime(
        common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this,
        uint32_t max_live_time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_live_time_);
  }
  this->max_live_time_ = max_live_time;
};

// Line 40: range 000000000DF4D292-000000000DF4D2E8
void __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::setMaxLiveTime(
        common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this,
        uint32_t max_live_time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_live_time_);
  }
  this->max_live_time_ = max_live_time;
};

// Line 45: range 000000000DF63972-000000000DF63D44
void __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::put(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this,
        const std::string *key,
        const proto::HomeBlueprintDetailRedisData *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer v6; // rax
  std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> *v7; // rax
  std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>> *p_pair_list; // rdx
  unsigned int Now; // esi
  std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::size_type v10; // r14
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >::pointer v13; // rax
  unsigned int __a; // [rsp+24h] [rbp-10Ch] BYREF
  std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> *time_pair; // [rsp+28h] [rbp-108h]
  std::pair<std::string,proto::HomeBlueprintDetailRedisData> __x; // [rsp+30h] [rbp-100h] BYREF
  char v18[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 7 lock:47 64 8 7 iter:49 96 8 7 last:67";
  *(_QWORD *)(v3 + 16) = common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::put;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->cache_mu_);
  *(std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,true> *)(v3 + 96)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true> *const)(v3 + 64));
    std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > *const)(v3 + 96),
      &v6->second.first);
    std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::const_iterator *)(v3 + 96));
  }
  std::pair<std::string,proto::HomeBlueprintDetailRedisData>::pair<std::string,proto::HomeBlueprintDetailRedisData,true>(
    &__x,
    key,
    value);
  std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::push_front(&this->pair_list_, &__x);
  std::pair<std::string,proto::HomeBlueprintDetailRedisData>::~pair(&__x);
  v7 = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::operator[](
         &this->key_iterator_map_,
         key);
  time_pair = v7;
  p_pair_list = &this->pair_list_;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7);
  time_pair->first = std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::begin(p_pair_list);
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&time_pair->second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&time_pair->second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&time_pair->second);
  }
  time_pair->second = Now;
  v10 = std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::size(&this->pair_list_);
  __a = 1;
  v11 = (unsigned int *)std::max<unsigned int>(&__a, &this->max_size_);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  if ( v10 >= *v12 )
  {
    *(std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::iterator *)(v3 + 96) = std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::operator--(
      (std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > *const)(v3 + 96),
      0);
    v13 = std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::operator->((const std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > *const)(v3 + 96));
    std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::erase(
      &this->key_iterator_map_,
      &v13->first);
    std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::pop_back(&this->pair_list_);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
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

// Line 45: range 000000000DF5CBA2-000000000DF5CF74
void __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::put(
        common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this,
        const unsigned __int64 *key,
        const proto::CustomDungeonBriefRedisData *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer v6; // rax
  std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> *v7; // rax
  std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>> *p_pair_list; // rdx
  unsigned int Now; // esi
  std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>>::size_type v10; // r14
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >::pointer v13; // rax
  unsigned int __a; // [rsp+24h] [rbp-12Ch] BYREF
  std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> *time_pair; // [rsp+28h] [rbp-128h]
  std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> __x; // [rsp+30h] [rbp-120h] BYREF
  char v18[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 7 lock:47 64 8 7 iter:49 96 8 7 last:67";
  *(_QWORD *)(v3 + 16) = common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::put;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->cache_mu_);
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> *)(v3 + 96)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false> *const)(v3 + 64));
    std::_List_const_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > *const)(v3 + 96),
      &v6->second.first);
    std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>>::const_iterator *)(v3 + 96));
  }
  std::pair<unsigned long,proto::CustomDungeonBriefRedisData>::pair<unsigned long,proto::CustomDungeonBriefRedisData,true>(
    &__x,
    key,
    value);
  std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::push_front(&this->pair_list_, &__x);
  std::pair<unsigned long,proto::CustomDungeonBriefRedisData>::~pair(&__x);
  v7 = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::operator[](
         &this->key_iterator_map_,
         key);
  time_pair = v7;
  p_pair_list = &this->pair_list_;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7);
  time_pair->first = std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::begin(p_pair_list);
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&time_pair->second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&time_pair->second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&time_pair->second);
  }
  time_pair->second = Now;
  v10 = std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::size(&this->pair_list_);
  __a = 1;
  v11 = (unsigned int *)std::max<unsigned int>(&__a, &this->max_size_);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  if ( v10 >= *v12 )
  {
    *(std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>>::iterator *)(v3 + 96) = std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::operator--(
      (std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > *const)(v3 + 96),
      0);
    v13 = std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::operator->((const std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > *const)(v3 + 96));
    std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::erase(
      &this->key_iterator_map_,
      &v13->first);
    std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::pop_back(&this->pair_list_);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
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

// Line 45: range 000000000DF55A7E-000000000DF55E50
void __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::put(
        common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this,
        const unsigned __int64 *key,
        const proto::ServerCustomDungeon *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer v6; // rax
  std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> *v7; // rax
  std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>> *p_pair_list; // rdx
  unsigned int Now; // esi
  std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>>::size_type v10; // r14
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >::pointer v13; // rax
  unsigned int __a; // [rsp+24h] [rbp-11Ch] BYREF
  std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> *time_pair; // [rsp+28h] [rbp-118h]
  std::pair<long unsigned int,proto::ServerCustomDungeon> __x; // [rsp+30h] [rbp-110h] BYREF
  char v18[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 7 lock:47 64 8 7 iter:49 96 8 7 last:67";
  *(_QWORD *)(v3 + 16) = common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::put;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->cache_mu_);
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::find(&this->key_iterator_map_, key);
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::end(&this->key_iterator_map_);
  if ( std::__detail::operator!=<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false> *)(v3 + 96)) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false> *const)(v3 + 64));
    std::_List_const_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > *const)(v3 + 96),
      &v6->second.first);
    std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::erase(
      &this->pair_list_,
      *(std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>>::const_iterator *)(v3 + 96));
  }
  std::pair<unsigned long,proto::ServerCustomDungeon>::pair<unsigned long,proto::ServerCustomDungeon,true>(
    &__x,
    key,
    value);
  std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::push_front(&this->pair_list_, &__x);
  std::pair<unsigned long,proto::ServerCustomDungeon>::~pair(&__x);
  v7 = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::operator[](
         &this->key_iterator_map_,
         key);
  time_pair = v7;
  p_pair_list = &this->pair_list_;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7);
  time_pair->first = std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::begin(p_pair_list);
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&time_pair->second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&time_pair->second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&time_pair->second);
  }
  time_pair->second = Now;
  v10 = std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::size(&this->pair_list_);
  __a = 1;
  v11 = (unsigned int *)std::max<unsigned int>(&__a, &this->max_size_);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  if ( v10 >= *v12 )
  {
    *(std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>>::iterator *)(v3 + 96) = std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::end(&this->pair_list_);
    std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::operator--(
      (std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > *const)(v3 + 96),
      0);
    v13 = std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::operator->((const std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > *const)(v3 + 96));
    std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::erase(
      &this->key_iterator_map_,
      &v13->first);
    std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::pop_back(&this->pair_list_);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
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

// Line 74: range 000000000DF634D2-000000000DF63945
bool __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::get(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this,
        const std::string *key,
        proto::HomeBlueprintDetailRedisData *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  time_t Now; // r14
  uint32_t max_live_time; // r15d
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer v9; // rax
  char v10; // al
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer v12; // rax
  proto::HomeBlueprintDetailRedisData *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer v14; // rax
  bool result; // al
  std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >::iterator __x; // [rsp+28h] [rbp-A8h] BYREF
  std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > __position; // [rsp+30h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,true> __y; // [rsp+38h] [rbp-98h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 lock:76 64 8 7 iter:80";
  *(_QWORD *)(v3 + 16) = common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::get;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->cache_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->get_count_);
  }
  ++this->get_count_;
  *(std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,true> *)(v3 + 64),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_live_time_);
    }
    if ( !this->max_live_time_ )
      goto LABEL_17;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_live_time_);
    }
    max_live_time = this->max_live_time_;
    v9 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.second >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer)__asan_report_load4(&v9->second.second);
    }
    if ( Now > max_live_time + v9->second.second )
      v10 = 1;
    else
LABEL_17:
      v10 = 0;
    if ( v10 )
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true> *const)(v3 + 64));
      std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::_List_const_iterator(
        (std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > *const)&__y,
        &v11->second.first);
      std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::erase(
        &this->pair_list_,
        (std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::const_iterator)__y._M_cur);
      std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::erase(
        &this->key_iterator_map_,
        *(std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int>>::iterator *)(v3 + 64));
      v6 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->hit_count_);
      }
      ++this->hit_count_;
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true> *const)(v3 + 64));
      p_second = &std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::operator->(&v12->second.first)->second;
      proto::HomeBlueprintDetailRedisData::operator=(value, p_second);
      v14 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true> *const)(v3 + 64));
      std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::_List_const_iterator(
        (std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > *const)&__y,
        &v14->second.first);
      __x._M_node = std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::begin(&this->pair_list_)._M_node;
      std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::_List_const_iterator(
        &__position,
        &__x);
      std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::splice(
        &this->pair_list_,
        __position,
        &this->pair_list_,
        (std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::const_iterator)__y._M_cur);
      v6 = 1;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  result = v6;
  if ( v20 == (char *)v3 )
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

// Line 74: range 000000000DF55516-000000000DF55989
bool __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::get(
        common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this,
        const unsigned __int64 *key,
        proto::ServerCustomDungeon *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  time_t Now; // r14
  uint32_t max_live_time; // r15d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer v9; // rax
  char v10; // al
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer v11; // rax
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer v12; // rax
  proto::ServerCustomDungeon *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer v14; // rax
  bool result; // al
  std::_List_const_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >::iterator __x; // [rsp+28h] [rbp-A8h] BYREF
  std::_List_const_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > __position; // [rsp+30h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false> __y; // [rsp+38h] [rbp-98h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 lock:76 64 8 7 iter:80";
  *(_QWORD *)(v3 + 16) = common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::get;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->cache_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->get_count_);
  }
  ++this->get_count_;
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_live_time_);
    }
    if ( !this->max_live_time_ )
      goto LABEL_17;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_live_time_);
    }
    max_live_time = this->max_live_time_;
    v9 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.second >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer)__asan_report_load4(&v9->second.second);
    }
    if ( Now > max_live_time + v9->second.second )
      v10 = 1;
    else
LABEL_17:
      v10 = 0;
    if ( v10 )
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false> *const)(v3 + 64));
      std::_List_const_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::_List_const_iterator(
        (std::_List_const_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > *const)&__y,
        &v11->second.first);
      std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::erase(
        &this->pair_list_,
        (std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>>::const_iterator)__y._M_cur);
      std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::erase(
        &this->key_iterator_map_,
        *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int>>::iterator *)(v3 + 64));
      v6 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->hit_count_);
      }
      ++this->hit_count_;
      v12 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false> *const)(v3 + 64));
      p_second = &std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::operator->(&v12->second.first)->second;
      proto::ServerCustomDungeon::operator=(value, p_second);
      v14 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false> *const)(v3 + 64));
      std::_List_const_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::_List_const_iterator(
        (std::_List_const_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > *const)&__y,
        &v14->second.first);
      __x._M_node = std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::begin(&this->pair_list_)._M_node;
      std::_List_const_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::_List_const_iterator(
        &__position,
        &__x);
      std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::splice(
        &this->pair_list_,
        __position,
        &this->pair_list_,
        (std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>>::const_iterator)__y._M_cur);
      v6 = 1;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  result = v6;
  if ( v20 == (char *)v3 )
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

// Line 104: range 000000000DF63FC2-000000000DF641B4
void __cdecl common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::remove(
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *const this,
        const std::string *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,true> __y; // [rsp+18h] [rbp-98h] BYREF
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:106 64 8 8 iter:108";
  *(_QWORD *)(v2 + 16) = common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::remove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->cache_mu_);
  *(std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,true> *)(v2 + 64),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int> >,false,true> *const)(v2 + 64));
    std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> > *const)&__y,
      &v5->second.first);
    std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::erase(
      &this->pair_list_,
      (std::list<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>::const_iterator)__y._M_cur);
    std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData>>,unsigned int>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<std::string,std::pair<std::_List_iterator<std::pair<std::string,proto::HomeBlueprintDetailRedisData> >,unsigned int>>::iterator *)(v2 + 64));
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
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

// Line 104: range 000000000DF58338-000000000DF5852A
void __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::remove(
        common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this,
        const unsigned __int64 *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:106 64 8 8 iter:108";
  *(_QWORD *)(v2 + 16) = common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::remove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->cache_mu_);
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> *)(v2 + 64),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false> *const)(v2 + 64));
    std::_List_const_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > *const)&__y,
      &v5->second.first);
    std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::erase(
      &this->pair_list_,
      (std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>>::const_iterator)__y._M_cur);
    std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int>>::iterator *)(v2 + 64));
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
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

// Line 104: range 000000000DF58144-000000000DF58336
void __cdecl common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::remove(
        common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *const this,
        const unsigned __int64 *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:106 64 8 8 iter:108";
  *(_QWORD *)(v2 + 16) = common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::remove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->cache_mu_);
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false> *)(v2 + 64),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int> >,false,false> *const)(v2 + 64));
    std::_List_const_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>::_List_const_iterator(
      (std::_List_const_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> > *const)&__y,
      &v5->second.first);
    std::list<std::pair<unsigned long,proto::ServerCustomDungeon>>::erase(
      &this->pair_list_,
      (std::list<std::pair<long unsigned int,proto::ServerCustomDungeon>>::const_iterator)__y._M_cur);
    std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::ServerCustomDungeon>>,unsigned int>>::erase(
      &this->key_iterator_map_,
      *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::ServerCustomDungeon> >,unsigned int>>::iterator *)(v2 + 64));
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
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

// Line 130: range 000000000DF5D698-000000000DF5D7EF
bool __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::isExist(
        const common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this,
        const unsigned __int64 *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  bool result; // al
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> __x; // [rsp+10h] [rbp-80h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> __y; // [rsp+18h] [rbp-78h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:132";
  *(_QWORD *)(v2 + 16) = common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::isExist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->cache_mu_);
  __y._M_cur = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  __x._M_cur = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::find(
                 &this->key_iterator_map_,
                 key)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false>(
         &__x,
         &__y);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
  result = v5;
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

// Line 357: range 000000000DF5C70E-000000000DF5CB81
bool __cdecl common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::get(
        common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *const this,
        const unsigned __int64 *key,
        proto::CustomDungeonBriefRedisData *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  time_t Now; // r14
  uint32_t max_live_time; // r15d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer v9; // rax
  char v10; // al
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer v11; // rax
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer v12; // rax
  proto::CustomDungeonBriefRedisData *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer v14; // rax
  bool result; // al
  std::_List_const_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >::iterator __x; // [rsp+28h] [rbp-A8h] BYREF
  std::_List_const_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > __position; // [rsp+30h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> __y; // [rsp+38h] [rbp-98h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 lock:76 64 8 7 iter:80";
  *(_QWORD *)(v3 + 16) = common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::get;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->cache_mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->get_count_);
  }
  ++this->get_count_;
  *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::find(&this->key_iterator_map_, key);
  __y._M_cur = std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::end(&this->key_iterator_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_live_time_);
    }
    if ( !this->max_live_time_ )
      goto LABEL_17;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_live_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_live_time_);
    }
    max_live_time = this->max_live_time_;
    v9 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.second >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false>::pointer)__asan_report_load4(&v9->second.second);
    }
    if ( Now > max_live_time + v9->second.second )
      v10 = 1;
    else
LABEL_17:
      v10 = 0;
    if ( v10 )
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false> *const)(v3 + 64));
      std::_List_const_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::_List_const_iterator(
        (std::_List_const_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > *const)&__y,
        &v11->second.first);
      std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::erase(
        &this->pair_list_,
        (std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>>::const_iterator)__y._M_cur);
      std::unordered_map<unsigned long,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>::erase(
        &this->key_iterator_map_,
        *(std::unordered_map<long unsigned int,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int>>::iterator *)(v3 + 64));
      v6 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->hit_count_);
      }
      ++this->hit_count_;
      v12 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false> *const)(v3 + 64));
      p_second = &std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::operator->(&v12->second.first)->second;
      proto::CustomDungeonBriefRedisData::operator=(value, p_second);
      v14 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::pair<std::_List_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::pair<std::_List_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> >,unsigned int> >,false,false> *const)(v3 + 64));
      std::_List_const_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::_List_const_iterator(
        (std::_List_const_iterator<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData> > *const)&__y,
        &v14->second.first);
      __x._M_node = std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::begin(&this->pair_list_)._M_node;
      std::_List_const_iterator<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::_List_const_iterator(
        &__position,
        &__x);
      std::list<std::pair<unsigned long,proto::CustomDungeonBriefRedisData>>::splice(
        &this->pair_list_,
        __position,
        &this->pair_list_,
        (std::list<std::pair<long unsigned int,proto::CustomDungeonBriefRedisData>>::const_iterator)__y._M_cur);
      v6 = 1;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  result = v6;
  if ( v20 == (char *)v3 )
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
