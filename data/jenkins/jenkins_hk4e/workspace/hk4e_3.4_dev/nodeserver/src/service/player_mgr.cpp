// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/player_mgr.cpp

// Line 17: range 000000000385AD96-000000000385B0EE
uint32_t __cdecl FineGrainedCategory::toIndex(
        proto::PlatformType platform,
        std::string *p_country_code,
        bool exclude_sub_account)
{
  __gnu_cxx::__normal_iterator<char*,std::string >::reference v3; // rax
  char *v4; // rdx
  const char *v5; // rax
  __gnu_cxx::__normal_iterator<char*,std::string >::reference v6; // rax
  char *v7; // rdx
  const char *v8; // rax
  proto::PlatformType platforma; // [rsp+Ch] [rbp-64h]
  bool valid; // [rsp+19h] [rbp-57h]
  uint32_t country_index; // [rsp+1Ch] [rbp-54h]
  std::string::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::string::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::string *__for_range; // [rsp+30h] [rbp-40h]
  std::string *__for_range_0; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  platforma = platform;
  valid = 1;
  if ( std::string::size(p_country_code) == 2 )
  {
    __for_range = p_country_code;
    __for_begin._M_current = (char *)std::string::begin(p_country_code);
    __for_end._M_current = (char *)std::string::end(p_country_code);
    while ( __gnu_cxx::operator!=<char *,std::string>(&__for_begin, &__for_end) )
    {
      v3 = __gnu_cxx::__normal_iterator<char *,std::string>::operator*(&__for_begin);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v3);
      }
      if ( *v4 <= 64 || *v4 > 90 )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/player_mgr.cpp",
          "toIndex",
          30);
        v5 = (const char *)std::string::c_str(p_country_code);
        common::milog::MiLogStream::operator()(&v18, "country code invalid char. %s ==> ZZ", v5);
        common::milog::MiLogStream::~MiLogStream(&v18);
        valid = 0;
        break;
      }
      __gnu_cxx::__normal_iterator<char *,std::string>::operator++(&__for_begin);
    }
  }
  else
  {
    valid = 0;
  }
  if ( !valid )
    std::string::operator=(p_country_code, "ZZ");
  country_index = 0;
  __for_range_0 = p_country_code;
  __for_begin._M_current = (char *)std::string::begin(p_country_code);
  __for_end._M_current = (char *)std::string::end(__for_range_0);
  while ( __gnu_cxx::operator!=<char *,std::string>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<char *,std::string>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v6);
    }
    country_index = *v7 + 26 * country_index - 65;
    __gnu_cxx::__normal_iterator<char *,std::string>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/player_mgr.cpp",
    "toIndex",
    49);
  v8 = (const char *)std::string::c_str(p_country_code);
  common::milog::MiLogStream::operator()(&v18, "country code: %s ==> index %u", v8, country_index);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( (unsigned int)platform > (CLOUD_THIRD_PARTY_PC|IOS) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/player_mgr.cpp",
      "toIndex",
      53);
    common::milog::MiLogStream::operator()(&v18, "invalid platform: %u default to 0", (unsigned int)platform);
    common::milog::MiLogStream::~MiLogStream(&v18);
    platforma = EDITOR;
  }
  return (4 * country_index) | (platforma << 12) | exclude_sub_account;
};

// Line 61: range 000000000385B0F0-000000000385B5B2
std::string *__cdecl FineGrainedCategory::toString[abi:cxx11](std::string *retstr, uint32_t index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  uint32_t v5; // r14d
  unsigned __int64 v6; // rax
  _BYTE *v7; // rdx
  uint32_t v8; // r14d
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdx
  const char *v11; // rax
  const std::string *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  std::allocator<char> __a; // [rsp+16h] [rbp-29Ah] BYREF
  bool exclude_sub_account; // [rsp+17h] [rbp-299h]
  proto::PlatformType platform; // [rsp+18h] [rbp-298h]
  uint32_t country; // [rsp+1Ch] [rbp-294h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-290h] BYREF
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 15 country_code:64 112 392 5 ss:71";
  *(_QWORD *)(v2 + 16) = FineGrainedCategory::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  platform = (unsigned __int16)index >> 12;
  country = (index >> 2) & 0x3FF;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 48), "ZZ", &__a);
  std::allocator<char>::~allocator(&__a);
  v5 = country / 0x1A + 65;
  v6 = std::string::operator[](v2 + 48, 0LL);
  v7 = (_BYTE *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_store1(v6);
  *v7 = v5;
  v8 = country % 0x1A + 65;
  v9 = std::string::operator[](v2 + 48, 1LL);
  v10 = (_BYTE *)v9;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    __asan_report_store1(v9);
  *v10 = v8;
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/player_mgr.cpp",
    "toString",
    67);
  v11 = (const char *)std::string::c_str(v2 + 48);
  common::milog::MiLogStream::operator()(&v22, "country code %u => %s", country, v11);
  common::milog::MiLogStream::~MiLogStream(&v22);
  exclude_sub_account = (index & 3) != 0;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 112);
  v12 = proto::PlatformType_Name[abi:cxx11](platform);
  v13 = std::operator<<<char>(v2 + 128, v12);
  v14 = std::operator<<<std::char_traits<char>>(v13, "|");
  v15 = std::operator<<<char>(v14, v2 + 48);
  v16 = std::operator<<<std::char_traits<char>>(v15, "|");
  std::ostream::operator<<(v16, exclude_sub_account);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 112);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 112);
  std::string::~string((void *)(v2 + 48));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 78: range 000000000385B5B4-000000000385B7BB
uint32_t __cdecl PlayerMgr::findPlayerGameserverId(PlayerMgr *const this, uint32_t uid)
{
  uint32_t gameserver_id; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::shared_ptr<Player> *v6; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_gameserver_id; // rax
  int v9; // r15d
  uint32_t result; // eax
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 player_ptr:83 64 24 13 player_opt:79";
  *(_QWORD *)(v3 + 16) = PlayerMgr::findPlayerGameserverId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  common::tools::SafeMap<std::shared_ptr<Player>,1229u>::find(
    (std::optional<std::shared_ptr<Player> > *)(v3 + 64),
    &this->player_map_,
    uid);
  if ( !std::optional<std::shared_ptr<Player>>::has_value((const std::optional<std::shared_ptr<Player> > *const)(v3 + 64)) )
    goto LABEL_11;
  v6 = std::optional<std::shared_ptr<Player>>::value((std::optional<std::shared_ptr<Player> > *const)(v3 + 64));
  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 32), v6);
  if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 32)) )
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_gameserver_id = &v7->gameserver_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gameserver_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_gameserver_id);
    }
    gameserver_id = v7->gameserver_id;
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  if ( v9 == 1 )
LABEL_11:
    gameserver_id = 0;
  std::optional<std::shared_ptr<Player>>::~optional((std::optional<std::shared_ptr<Player> > *const)(v3 + 64));
  result = gameserver_id;
  if ( v11 == (char *)v3 )
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

// Line 93: range 000000000385B7BC-000000000385BDDC
void __cdecl PlayerMgr::onPlayerNumChange(PlayerMgr *const this, bool is_add, Player *player)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::array<std::atomic<int>,65537>::size_type v6; // r15
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::array<std::atomic<int>,65537>::reference v10; // rax
  volatile signed __int32 *p_M_i; // rdx
  std::array<std::atomic<int>,65537>::reference v12; // rax
  volatile signed __int32 *v13; // rdx
  std::array<std::atomic<int>,65537>::size_type v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::array<std::atomic<int>,65537>::reference v18; // rax
  volatile signed __int32 *v19; // rdx
  std::array<std::atomic<int>,65537>::reference v20; // rax
  volatile signed __int32 *v21; // rdx
  signed int platform; // [rsp+2Ch] [rbp-D4h]
  std::string p_country_code; // [rsp+70h] [rbp-90h] BYREF
  char v25[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 fine_grained_index:96";
  *(_QWORD *)(v3 + 16) = PlayerMgr::onPlayerNumChange;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&player->platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player->platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&player->platform_type);
  }
  platform = player->platform_type;
  std::string::basic_string(&p_country_code, &player->country_code);
  *(_DWORD *)(v3 + 32) = FineGrainedCategory::toIndex((proto::PlatformType)platform, &p_country_code, 0);
  std::string::~string(&p_country_code);
  v6 = *(unsigned int *)(v3 + 32);
  if ( v6 < std::array<std::atomic<int>,65537ul>::size(&this->fine_grained_player_num_arr_) )
  {
    if ( is_add )
    {
      v10 = std::array<std::atomic<int>,65537ul>::operator[](
              &this->fine_grained_player_num_arr_,
              *(unsigned int *)(v3 + 32));
      p_M_i = &v10->_M_i;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v10, 1LL);
      }
      _InterlockedExchangeAdd(p_M_i, 1u);
    }
    else
    {
      v12 = std::array<std::atomic<int>,65537ul>::operator[](
              &this->fine_grained_player_num_arr_,
              *(unsigned int *)(v3 + 32));
      v13 = &v12->_M_i;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12, 1LL);
      }
      _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
    }
    if ( *(_BYTE *)(((unsigned __int64)&player->is_sub_account >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)player + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&player->is_sub_account >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&player->is_sub_account);
    }
    if ( !player->is_sub_account )
    {
      std::string::basic_string(&p_country_code, &player->country_code);
      *(_DWORD *)(v3 + 32) = FineGrainedCategory::toIndex((proto::PlatformType)platform, &p_country_code, 1);
      std::string::~string(&p_country_code);
      v14 = *(unsigned int *)(v3 + 32);
      if ( v14 < std::array<std::atomic<int>,65537ul>::size(&this->fine_grained_player_num_arr_) )
      {
        if ( is_add )
        {
          v18 = std::array<std::atomic<int>,65537ul>::operator[](
                  &this->fine_grained_player_num_arr_,
                  *(unsigned int *)(v3 + 32));
          v19 = &v18->_M_i;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v18, 1LL);
          }
          _InterlockedExchangeAdd(v19, 1u);
        }
        else
        {
          v20 = std::array<std::atomic<int>,65537ul>::operator[](
                  &this->fine_grained_player_num_arr_,
                  *(unsigned int *)(v3 + 32));
          v21 = &v20->_M_i;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v20, 1LL);
          }
          _InterlockedExchangeAdd(v21, 0xFFFFFFFF);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_country_code,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/player_mgr.cpp",
          "onPlayerNumChange",
          116);
        v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                (common::milog::MiLogStream *const)&p_country_code,
                (const char (*)[33])"index error! fine_grained_index:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v16,
                (const char (*)[29])" FineGrainedCategory::RANGE:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &FineGrainedCategory::RANGE);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_country_code);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_country_code,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/player_mgr.cpp",
      "onPlayerNumChange",
      99);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)&p_country_code,
           (const char (*)[33])"index error! fine_grained_index:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v8,
           (const char (*)[29])" FineGrainedCategory::RANGE:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &FineGrainedCategory::RANGE);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_country_code);
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 132: range 000000000385BE2A-000000000385C8EA
int32_t __cdecl PlayerMgr::addPlayer(PlayerMgr *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  char v6; // al
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  std::shared_ptr<Player> *v9; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_gameserver_id; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::array<std::atomic<int>,15>::size_type platform_type; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::array<std::atomic<int>,15>::reference v15; // rax
  volatile signed __int32 *p_M_i; // rdx
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  bool *p_is_sub_account; // rax
  std::atomic<int> *p_sub_account_online_player_num; // rdx
  Player *v27; // rdx
  std::shared_ptr<Player> *v28; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  uint32_t *v30; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::array<std::atomic<int>,15>::size_type v32; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::array<std::atomic<int>,15>::reference v34; // rax
  volatile signed __int32 *v35; // rdx
  unsigned __int64 v36; // rsi
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::atomic<unsigned int> *p_total_player_num_per_time; // rdx
  char v45; // cl
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rdx
  bool *v47; // rax
  std::atomic<int> *v48; // rdx
  Player *v49; // rdx
  int32_t result; // eax
  PlayerMgr::addPlayer::<lambda(std::set<unsigned int>&)> uid; // [rsp+1Ch] [rbp-124h]
  common::milog::MiLogStream v53; // [rsp+70h] [rbp-D0h] BYREF
  char v54[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 player_ptr_old:144 64 24 14 player_opt:141";
  *(_QWORD *)(v2 + 16) = PlayerMgr::addPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( std::operator==<Player>(0LL, p_player_ptr) )
    goto LABEL_8;
  v5 = (unsigned __int64)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) <= 3 )
    v5 = __asan_report_load4(v5);
  if ( *(_DWORD *)v5 )
    v6 = 0;
  else
LABEL_8:
    v6 = 1;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/player_mgr.cpp",
      "addPlayer",
      136);
    common::milog::MiLogStream::operator()(&v53, "can not add empty player");
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
  }
  else
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) <= 3 )
      v8 = __asan_report_load4(v8);
    uid.__uid = *(_DWORD *)v8;
    common::tools::SafeMap<std::shared_ptr<Player>,1229u>::find(
      (std::optional<std::shared_ptr<Player> > *)(v2 + 64),
      &this->player_map_,
      *(_DWORD *)v8);
    if ( std::optional<std::shared_ptr<Player>>::has_value((const std::optional<std::shared_ptr<Player> > *const)(v2 + 64)) )
    {
      v9 = std::optional<std::shared_ptr<Player>>::value((std::optional<std::shared_ptr<Player> > *const)(v2 + 64));
      std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 32), v9);
      if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32)) )
      {
        std::function<void ()(std::set<unsigned int> &)>::function<PlayerMgr::addPlayer(std::shared_ptr<Player>)::{lambda(std::set<unsigned int> &)#1},void,void>(
          (std::function<void(std::set<unsigned int>&)> *const)&v53,
          uid);
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        p_gameserver_id = &v10->gameserver_id;
        if ( *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_gameserver_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(p_gameserver_id);
        }
        common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
          &this->gameserver_player_uid_map_,
          v10->gameserver_id,
          (std::function<void(std::set<unsigned int>&)> *)&v53);
        std::function<void ()(std::set<unsigned int> &)>::~function((std::function<void(std::set<unsigned int>&)> *const)&v53);
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v12->platform_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->platform_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->platform_type);
        }
        platform_type = v12->platform_type;
        if ( platform_type >= std::array<std::atomic<int>,15ul>::size(&this->platform_player_num_arr_) )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/player_mgr.cpp",
            "addPlayer",
            157);
          v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v53,
                  (const char (*)[28])"index error! platform_type:");
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v18->platform_type);
          v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
          v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->uid);
          v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v22,
                  (const char (*)[26])" proto::PlatformType_MAX:");
          common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
            v23,
            &proto::PlatformType_MAX);
          common::milog::MiLogStream::~MiLogStream(&v53);
        }
        else
        {
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v14->platform_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v14->platform_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v14 = (std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->platform_type);
          }
          v15 = std::array<std::atomic<int>,15ul>::operator[](&this->platform_player_num_arr_, v14->platform_type);
          p_M_i = &v15->_M_i;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v15, 1LL);
          }
          _InterlockedExchangeAdd(p_M_i, 0xFFFFFFFF);
        }
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        p_is_sub_account = &v24->is_sub_account;
        if ( *(_BYTE *)(((unsigned __int64)p_is_sub_account >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_sub_account & 7) >= *(_BYTE *)(((unsigned __int64)p_is_sub_account >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_sub_account);
        }
        if ( v24->is_sub_account )
        {
          p_sub_account_online_player_num = &this->sub_account_online_player_num_;
          if ( *(_BYTE *)(((unsigned __int64)&this->sub_account_online_player_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_account_online_player_num_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_store4(&this->sub_account_online_player_num_, 1LL);
          }
          _InterlockedExchangeAdd(&p_sub_account_online_player_num->_M_i, 0xFFFFFFFF);
        }
        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        PlayerMgr::onPlayerNumChange(this, 0, v27);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    }
    v28 = common::tools::SafeMap<std::shared_ptr<Player>,1229u>::operator[](&this->player_map_, uid.__uid);
    std::shared_ptr<Player>::operator=(v28, p_player_ptr);
    std::function<void ()(std::set<unsigned int> &)>::function<PlayerMgr::addPlayer(std::shared_ptr<Player>)::{lambda(std::set<unsigned int> &)#2},void,void>(
      (std::function<void(std::set<unsigned int>&)> *const)&v53,
      uid);
    v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v30 = &v29->gameserver_id;
    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v30);
    }
    common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
      &this->gameserver_player_uid_map_,
      v29->gameserver_id,
      (std::function<void(std::set<unsigned int>&)> *)&v53);
    std::function<void ()(std::set<unsigned int> &)>::~function((std::function<void(std::set<unsigned int>&)> *const)&v53);
    v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v31->platform_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v31->platform_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v31 = (std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v31->platform_type);
    }
    v32 = v31->platform_type;
    if ( v32 >= std::array<std::atomic<int>,15ul>::size(&this->platform_player_num_arr_) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/player_mgr.cpp",
        "addPlayer",
        179);
      v37 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v53,
              (const char (*)[28])"index error! platform_type:");
      v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &v38->platform_type);
      v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])" uid:");
      v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &v41->uid);
      v43 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v42,
              (const char (*)[26])" proto::PlatformType_MAX:");
      v36 = (unsigned __int64)&proto::PlatformType_MAX;
      common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(v43, &proto::PlatformType_MAX);
      common::milog::MiLogStream::~MiLogStream(&v53);
    }
    else
    {
      v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v33->platform_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v33->platform_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v33 = (std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v33->platform_type);
      }
      v34 = std::array<std::atomic<int>,15ul>::operator[](&this->platform_player_num_arr_, v33->platform_type);
      v35 = &v34->_M_i;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v34, 1LL);
      }
      v36 = (unsigned int)_InterlockedExchangeAdd(v35, 1u);
    }
    if ( !std::optional<std::shared_ptr<Player>>::has_value((const std::optional<std::shared_ptr<Player> > *const)(v2 + 64)) )
    {
      p_total_player_num_per_time = &this->total_player_num_per_time_;
      v45 = *(_BYTE *)(((unsigned __int64)&this->total_player_num_per_time_ >> 3) + 0x7FFF8000);
      if ( v45 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v45 )
      {
        LOBYTE(v36) = v45 != 0;
        __asan_report_store4(&this->total_player_num_per_time_, v36);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)p_total_player_num_per_time, 1u);
    }
    v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v47 = &v46->is_sub_account;
    if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v47 & 7) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v47);
    }
    if ( v46->is_sub_account )
    {
      v48 = &this->sub_account_online_player_num_;
      if ( *(_BYTE *)(((unsigned __int64)&this->sub_account_online_player_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_account_online_player_num_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(&this->sub_account_online_player_num_, 1LL);
      }
      _InterlockedExchangeAdd(&v48->_M_i, 1u);
    }
    v49 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    PlayerMgr::onPlayerNumChange(this, 1, v49);
    v7 = 0;
    std::optional<std::shared_ptr<Player>>::~optional((std::optional<std::shared_ptr<Player> > *const)(v2 + 64));
  }
  result = v7;
  if ( v54 == (char *)v2 )
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

// Line 147: range 000000000385BDDE-000000000385BE03
void __cdecl PlayerMgr::addPlayer(std::shared_ptr<Player>)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const PlayerMgr::addPlayer::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *uid_set)
{
  std::set<unsigned int>::erase(uid_set, &__closure->__uid);
};

// Line 169: range 000000000385BE04-000000000385BE29
void __cdecl PlayerMgr::addPlayer(std::shared_ptr<Player>)::{lambda(std::set<unsigned int> &)#2}::operator()(
        const PlayerMgr::addPlayer::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *uid_set)
{
  std::set<unsigned int>::insert(uid_set, &__closure->__uid);
};

// Line 198: range 000000000385C912-000000000385CEFD
int32_t __cdecl PlayerMgr::delPlayer(PlayerMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<Player> *v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_gameserver_id; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::array<std::atomic<int>,15>::size_type platform_type; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::array<std::atomic<int>,15>::reference v11; // rax
  volatile signed __int32 *p_M_i; // rdx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  bool *p_is_sub_account; // rax
  std::atomic<int> *p_sub_account_online_player_num; // rdx
  Player *v23; // rdx
  int32_t result; // eax
  std::function<void(std::set<unsigned int>&)> p_func; // [rsp+30h] [rbp-110h] BYREF
  char v26[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 player_ptr:203 64 24 8 iter:199 128 24 14 player_opt:200";
  *(_QWORD *)(v2 + 16) = PlayerMgr::delPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  common::tools::SafeMap<std::shared_ptr<Player>,1229u>::find(
    (std::optional<std::shared_ptr<Player> > *)(v2 + 64),
    &this->player_map_,
    uid);
  common::tools::SafeMap<std::shared_ptr<Player>,1229u>::find(
    (std::optional<std::shared_ptr<Player> > *)(v2 + 128),
    &this->player_map_,
    uid);
  if ( std::optional<std::shared_ptr<Player>>::has_value((const std::optional<std::shared_ptr<Player> > *const)(v2 + 128)) )
  {
    v5 = std::optional<std::shared_ptr<Player>>::value((std::optional<std::shared_ptr<Player> > *const)(v2 + 128));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 32), v5);
    if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32)) )
    {
      std::function<void ()(std::set<unsigned int> &)>::function<PlayerMgr::delPlayer(unsigned int)::{lambda(std::set<unsigned int> &)#1},void,void>(
        &p_func,
        (PlayerMgr::delPlayer::<lambda(std::set<unsigned int>&)>)uid);
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_gameserver_id = &v6->gameserver_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gameserver_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(p_gameserver_id);
      }
      common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
        &this->gameserver_player_uid_map_,
        v6->gameserver_id,
        &p_func);
      std::function<void ()(std::set<unsigned int> &)>::~function(&p_func);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->platform_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->platform_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->platform_type);
      }
      platform_type = v8->platform_type;
      if ( platform_type >= std::array<std::atomic<int>,15ul>::size(&this->platform_player_num_arr_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/player_mgr.cpp",
          "delPlayer",
          216);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[28])"index error! platform_type:");
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->platform_type);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->uid);
        v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v18,
                (const char (*)[26])" proto::PlatformType_MAX:");
        common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
          v19,
          &proto::PlatformType_MAX);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      }
      else
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v10->platform_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->platform_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = (std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->platform_type);
        }
        v11 = std::array<std::atomic<int>,15ul>::operator[](&this->platform_player_num_arr_, v10->platform_type);
        p_M_i = &v11->_M_i;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v11, 1LL);
        }
        _InterlockedExchangeAdd(p_M_i, 0xFFFFFFFF);
      }
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_is_sub_account = &v20->is_sub_account;
      if ( *(_BYTE *)(((unsigned __int64)p_is_sub_account >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_sub_account & 7) >= *(_BYTE *)(((unsigned __int64)p_is_sub_account >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_sub_account);
      }
      if ( v20->is_sub_account )
      {
        p_sub_account_online_player_num = &this->sub_account_online_player_num_;
        if ( *(_BYTE *)(((unsigned __int64)&this->sub_account_online_player_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_account_online_player_num_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_store4(&this->sub_account_online_player_num_, 1LL);
        }
        _InterlockedExchangeAdd(&p_sub_account_online_player_num->_M_i, 0xFFFFFFFF);
      }
      v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlayerMgr::onPlayerNumChange(this, 0, v23);
    }
    common::tools::SafeMap<std::shared_ptr<Player>,1229u>::erase(&this->player_map_, uid);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  std::optional<std::shared_ptr<Player>>::~optional((std::optional<std::shared_ptr<Player> > *const)(v2 + 128));
  std::optional<std::shared_ptr<Player>>::~optional((std::optional<std::shared_ptr<Player> > *const)(v2 + 64));
  result = 0;
  if ( v26 == (char *)v2 )
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

// Line 206: range 000000000385C8EC-000000000385C911
void __cdecl PlayerMgr::delPlayer(unsigned int)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const PlayerMgr::delPlayer::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *uid_set)
{
  std::set<unsigned int>::erase(uid_set, &__closure->__uid);
};

// Line 232: range 000000000385D04E-000000000385D0BC
void __cdecl PlayerMgr::getGameserverPlayerNum(
        PlayerMgr *const this,
        google::protobuf::Map<unsigned int,unsigned int> *proto_player_num_map)
{
  std::function<void(unsigned int,std::set<unsigned int>&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<void ()(unsigned int,std::set<unsigned int> &)>::function<PlayerMgr::getGameserverPlayerNum(google::protobuf::Map<unsigned int,unsigned int> &)::{lambda(unsigned int,std::set<unsigned int> &)#1},void,void>(
    &p_func,
    (PlayerMgr::getGameserverPlayerNum::<lambda(uint32_t, std::set<unsigned int>&)>)proto_player_num_map);
  common::tools::SafeMap<std::set<unsigned int>,1229u>::foreach(&this->gameserver_player_uid_map_, &p_func);
  std::function<void ()(unsigned int,std::set<unsigned int> &)>::~function(&p_func);
};

// Line 233: range 000000000385CEFE-000000000385D04D
void __fastcall PlayerMgr::getGameserverPlayerNum(google::protobuf::Map<unsigned int,unsigned int> &)::{lambda(unsigned int,std::set<unsigned int> &)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t gameserver_app_id,
        std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  char *v7; // rsi
  unsigned int *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 gameserver_app_id:233";
  *(_QWORD *)(v3 + 16) = PlayerMgr::getGameserverPlayerNum(google::protobuf::Map<unsigned int,unsigned int> &)::{lambda(unsigned int,std::set<unsigned int> &)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gameserver_app_id;
  v6 = std::set<unsigned int>::size(uid_set);
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v7 = (char *)(v3 + 32);
  v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
         *(google::protobuf::Map<unsigned int,unsigned int> *const *)__closure,
         (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v9 = v8;
  v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
  {
    LOBYTE(v7) = v10 != 0;
    __asan_report_store4(v8, v7);
  }
  *v9 = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 242: range 000000000385D0BE-000000000385D281
__int64 __fastcall PlayerMgr::getPlatformPlayerNum(PlayerMgr *const this, uint32_t platform_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::array<std::atomic<int>,15>::size_type v5; // r15
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::array<std::atomic<int>,15>::reference v8; // rax
  std::__atomic_base<int>::__int_type value; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 platform_type:241";
  *(_QWORD *)(v2 + 16) = PlayerMgr::getPlatformPlayerNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = platform_type;
  v5 = *(unsigned int *)(v2 + 32);
  if ( v5 < std::array<std::atomic<int>,15ul>::size(&this->platform_player_num_arr_) )
  {
    v8 = std::array<std::atomic<int>,15ul>::operator[](&this->platform_player_num_arr_, *(unsigned int *)(v2 + 32));
    value = std::__atomic_base<int>::operator int(v8);
    result = 0LL;
    if ( value >= 0 )
      result = (unsigned int)value;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/player_mgr.cpp",
      "getPlatformPlayerNum",
      245);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v10,
           (const char (*)[31])"platform_type not exist, type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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

// Line 254: range 000000000385D282-000000000385D445
__int64 __fastcall PlayerMgr::getFineGrainedPlayerNum(PlayerMgr *const this, uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::array<std::atomic<int>,65537>::size_type v5; // r15
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::array<std::atomic<int>,65537>::reference v8; // rax
  std::__atomic_base<int>::__int_type value; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 index:253";
  *(_QWORD *)(v2 + 16) = PlayerMgr::getFineGrainedPlayerNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = index;
  v5 = *(unsigned int *)(v2 + 32);
  if ( v5 < std::array<std::atomic<int>,65537ul>::size(&this->fine_grained_player_num_arr_) )
  {
    v8 = std::array<std::atomic<int>,65537ul>::operator[](
           &this->fine_grained_player_num_arr_,
           *(unsigned int *)(v2 + 32));
    value = std::__atomic_base<int>::operator int(v8);
    result = 0LL;
    if ( value >= 0 )
      result = (unsigned int)value;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/player_mgr.cpp",
      "getFineGrainedPlayerNum",
      257);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v10,
           (const char (*)[41])"FineGrainedPlayerNum index out of bound:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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

// Line 266: range 000000000385D466-000000000385D4D8
void __cdecl PlayerMgr::onServiceSessionConnect(PlayerMgr *const this, uint32_t service_type, uint32_t service_app_id)
{
  std::function<void(std::set<unsigned int>&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  if ( service_type == 3 )
  {
    std::function<void ()(std::set<unsigned int> &)>::function<PlayerMgr::onServiceSessionConnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1},void,void>(
      &p_func,
      (PlayerMgr::onServiceSessionConnect::<lambda(std::set<unsigned int>&)>)3);
    common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
      &this->gameserver_player_uid_map_,
      service_app_id,
      &p_func);
    std::function<void ()(std::set<unsigned int> &)>::~function(&p_func);
  }
};

// Line 271: range 000000000385D446-000000000385D464
void __cdecl PlayerMgr::onServiceSessionConnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const PlayerMgr::onServiceSessionConnect::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *uid_set)
{
  std::set<unsigned int>::clear(uid_set);
};

// Line 280: range 000000000385D4FA-000000000385D794
void __cdecl PlayerMgr::onServiceSessionDisconnect(
        PlayerMgr *const this,
        uint32_t service_type,
        uint32_t service_app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  std::function<void(std::set<unsigned int>&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 15 uid_set_opt:285";
  *(_QWORD *)(v3 + 16) = PlayerMgr::onServiceSessionDisconnect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( service_type == 3 )
  {
    common::tools::SafeMap<std::set<unsigned int>,1229u>::find(
      (std::optional<std::set<unsigned int> > *)(v3 + 32),
      &this->gameserver_player_uid_map_,
      service_app_id);
    if ( std::optional<std::set<unsigned int>>::has_value((const std::optional<std::set<unsigned int> > *const)(v3 + 32)) )
    {
      __for_range = std::optional<std::set<unsigned int>>::value((std::optional<std::set<unsigned int> > *const)(v3 + 32));
      __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        PlayerMgr::delPlayer(this, *v7);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      std::function<void ()(std::set<unsigned int> &)>::function<PlayerMgr::onServiceSessionDisconnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1},void,void>(
        &p_func,
        (PlayerMgr::onServiceSessionDisconnect::<lambda(std::set<unsigned int>&)>)&__for_end);
      common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
        &this->gameserver_player_uid_map_,
        service_app_id,
        &p_func);
      std::function<void ()(std::set<unsigned int> &)>::~function(&p_func);
    }
    std::optional<std::set<unsigned int>>::~optional((std::optional<std::set<unsigned int> > *const)(v3 + 32));
  }
  if ( v13 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 293: range 000000000385D4DA-000000000385D4F8
void __cdecl PlayerMgr::onServiceSessionDisconnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const PlayerMgr::onServiceSessionDisconnect::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *uid_set)
{
  std::set<unsigned int>::clear(uid_set);
};

// Line 303: range 000000000385D796-000000000385D7B5
uint32_t __cdecl PlayerMgr::getPlayerLoginPerSecond(PlayerMgr *const this)
{
  return std::__atomic_base<unsigned int>::operator unsigned int(&this->login_per_second_);
};

// Line 308: range 000000000385D7B6-000000000385D99E
void __cdecl PlayerMgr::update(PlayerMgr *const this, uint32_t now)
{
  std::__atomic_base<unsigned int>::__int_type v2; // eax
  common::milog::MiLogStream *v3; // rbx
  std::atomic<unsigned int> *v4; // rdx
  unsigned int val; // [rsp+18h] [rbp-48h] BYREF
  int32_t second; // [rsp+1Ch] [rbp-44h]
  std::memory_order_0 __m; // [rsp+20h] [rbp-40h]
  std::memory_order_0 v8; // [rsp+24h] [rbp-3Ch]
  std::atomic<unsigned int> *p_login_per_second; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  second = now - std::__atomic_base<unsigned int>::operator unsigned int(&this->last_login_report_time_);
  if ( second > 0 )
  {
    v2 = std::__atomic_base<unsigned int>::operator unsigned int(&this->total_player_num_per_time_);
    std::__atomic_base<unsigned int>::operator=(&this->login_per_second_, v2 / second);
    std::__atomic_base<unsigned int>::operator=(&this->total_player_num_per_time_, 0);
    std::__atomic_base<unsigned int>::operator=(&this->last_login_report_time_, now);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/player_mgr.cpp",
      "update",
      320);
    v3 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"login_per_second_:");
    p_login_per_second = &this->login_per_second_;
    __m = memory_order_seq_cst;
    v8 = std::operator&(memory_order_seq_cst, __memory_order_mask);
    v4 = p_login_per_second;
    if ( *(_BYTE *)(((unsigned __int64)p_login_per_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_login_per_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_login_per_second >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(p_login_per_second);
    }
    val = v4->_M_i;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/player_mgr.cpp",
      "update",
      312);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"update too fast");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
};

// Line 322: range 000000000387AAF4-000000000387AB17
void __cdecl GLOBAL__sub_I_merge_merge_main_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 322: range 000000000386123E-000000000387A3FF
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);

// Line 322: range 000000000387AA06-000000000387AAF3
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        }
        *v3 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};
