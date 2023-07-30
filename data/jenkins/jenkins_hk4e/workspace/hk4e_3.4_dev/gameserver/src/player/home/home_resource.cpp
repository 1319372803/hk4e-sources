// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/home_resource.cpp

// Line 36: range 0000000016C7346E-0000000016C7350B
void __cdecl HomeResource::Resource::init(HomeResource::Resource *const this)
{
  uint32_t Now; // edi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  if ( !this->last_refresh_time_ )
  {
    Now = common::tools::TimeUtils::getNow();
    v2 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
    {
      Now = (_DWORD)this + 4;
      __asan_report_store4(&this->last_refresh_time_, (((_BYTE)this + 4) & 7u) + 3, v2);
    }
    this->last_refresh_time_ = Now;
  }
};

// Line 44: range 0000000016C7350C-0000000016C73563
void __cdecl HomeResource::Resource::forceInit(HomeResource::Resource *const this)
{
  uint32_t Now; // edi
  __int64 v2; // rdx

  Now = common::tools::TimeUtils::getNow();
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
  {
    Now = (_DWORD)this + 4;
    __asan_report_store4(&this->last_refresh_time_, (((_BYTE)this + 4) & 7u) + 3, v2);
  }
  this->last_refresh_time_ = Now;
};

// Line 49: range 0000000016C73564-0000000016C73917
void __cdecl HomeResource::Resource::update(HomeResource::Resource *const this)
{
  uint32_t store_value; // ecx
  uint32_t v2; // edi
  __int64 v3; // rdx
  uint32_t v4; // ecx
  unsigned int v5; // ecx
  uint32_t v6; // ecx
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rdx
  uint32_t v10; // ecx
  uint32_t now; // [rsp+18h] [rbp-38h]
  unsigned int rate; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  store_value = this->store_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_limit);
  }
  if ( store_value < this->store_limit )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->interval);
    }
    if ( this->interval )
    {
      now = common::tools::TimeUtils::getNow();
      if ( now >= HomeResource::Resource::getNextRefreshTime(this) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&this->last_refresh_time_);
        }
        v4 = now - this->last_refresh_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->interval);
        }
        rate = v4 / this->interval;
        this->last_refresh_time_ += rate * this->interval;
        if ( *(_BYTE *)(((unsigned __int64)&this->increace >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->increace >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->increace);
        }
        v5 = SAFE_MULTIPLY<unsigned int,unsigned int>(rate, this->increace);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(this);
        }
        v8 = v5;
        v6 = SAFE_ADD<unsigned int,unsigned int>(this->store_value_, v5);
        v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
        LOBYTE(v8) = v7 != 0;
        v9 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v7);
        if ( (_BYTE)v9 )
          __asan_report_store4(this, v8, v9);
        this->store_value_ = v6;
        v10 = this->store_value_;
        if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->store_limit);
        }
        if ( v10 >= this->store_limit )
          this->store_value_ = this->store_limit;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/home_resource.cpp",
        "update",
        59);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v14, (const char (*)[14])"interval is 0");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  else
  {
    this->store_value_ = this->store_limit;
    v2 = common::tools::TimeUtils::getNow();
    v3 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
    {
      v2 = (_DWORD)this + 4;
      __asan_report_store4(&this->last_refresh_time_, (((_BYTE)this + 4) & 7u) + 3, v3);
    }
    this->last_refresh_time_ = v2;
  }
};

// Line 77: range 0000000016C73918-0000000016C73A5A
void __cdecl HomeResource::Resource::forceUpdate(HomeResource::Resource *const this, uint32_t count)
{
  unsigned int v2; // ecx
  uint32_t v3; // ecx
  char v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  uint32_t store_value; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->increace >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->increace >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->increace);
  }
  v2 = SAFE_MULTIPLY<unsigned int,unsigned int>(this->increace, count);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v5 = v2;
  v3 = SAFE_ADD<unsigned int,unsigned int>(this->store_value_, v2);
  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v4 != 0;
  v6 = (v4 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v4);
  if ( (_BYTE)v6 )
    __asan_report_store4(this, v5, v6);
  this->store_value_ = v3;
  store_value = this->store_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_limit);
  }
  if ( store_value >= this->store_limit )
    this->store_value_ = this->store_limit;
};

// Line 86: range 0000000016C73A5C-0000000016C73B8F
uint32_t __cdecl HomeResource::Resource::takeAndRefresh(HomeResource::Resource *const this)
{
  uint32_t Now; // edi
  __int64 v2; // rdx
  uint32_t result; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  result = this->store_value_;
  this->store_value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_limit);
  }
  if ( result >= this->store_limit )
  {
    Now = common::tools::TimeUtils::getNow();
    v2 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
    {
      Now = (_DWORD)this + 4;
      __asan_report_store4(&this->last_refresh_time_, (((_BYTE)this + 4) & 7u) + 3, v2);
    }
    this->last_refresh_time_ = Now;
    if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->store_limit);
    }
    return this->store_limit;
  }
  return result;
};

// Line 98: range 0000000016C73B90-0000000016C73CB2
uint32_t __cdecl HomeResource::Resource::getNextRefreshTime(const HomeResource::Resource *const this)
{
  uint32_t store_value; // ecx
  uint32_t last_refresh_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  store_value = this->store_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_limit);
  }
  if ( store_value >= this->store_limit )
    return std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  last_refresh_time = this->last_refresh_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->interval);
  }
  return last_refresh_time + this->interval;
};

// Line 107: range 0000000016C73CB4-0000000016C73D67
int32_t __cdecl HomeResource::Resource::fromBin(
        HomeResource::Resource *const this,
        const proto::HomeResourceBin *resource_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t refresh_time; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::HomeResourceBin *resource_bina; // [rsp+0h] [rbp-10h]

  resource_bina = resource_bin;
  v2 = proto::HomeResourceBin::store_value(resource_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(resource_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, resource_bin, v4);
  this->store_value_ = v2;
  refresh_time = proto::HomeResourceBin::last_refresh_time(resource_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000);
  LOBYTE(resource_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->last_refresh_time_, resource_bin, v7);
  this->last_refresh_time_ = refresh_time;
  return 0;
};

// Line 114: range 0000000016C73D68-0000000016C73E19
int32_t __cdecl HomeResource::Resource::toBin(
        const HomeResource::Resource *const this,
        proto::HomeResourceBin *resource_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::HomeResourceBin::set_store_value(resource_bin, this->store_value_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  proto::HomeResourceBin::set_last_refresh_time(resource_bin, this->last_refresh_time_);
  return 0;
};

// Line 121: range 0000000016C73E1A-0000000016C73EE7
int32_t __cdecl HomeResource::Resource::toClient(
        const HomeResource::Resource *const this,
        proto::HomeResource *home_resource)
{
  uint32_t NextRefreshTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::HomeResource::set_store_value(home_resource, this->store_value_);
  if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_limit);
  }
  proto::HomeResource::set_store_limit(home_resource, this->store_limit);
  NextRefreshTime = HomeResource::Resource::getNextRefreshTime(this);
  proto::HomeResource::set_next_refresh_time(home_resource, NextRefreshTime);
  return 0;
};

// Line 129: range 0000000016C73EE8-0000000016C73FC3
uint32_t __cdecl HomeResource::Resource::getStoreValue(HomeResource::Resource *const this)
{
  uint32_t store_value; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  store_value = this->store_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_limit);
  }
  if ( store_value >= this->store_limit )
    this->store_value_ = this->store_limit;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->store_value_;
};

// Line 138: range 0000000016C73FC4-0000000016C74138
void __cdecl HomeResource::HomeResource(HomeResource *const this, Player *player)
{
  HomeResource **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  HomeResource *v4; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(HomeResource *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (HomeResource::*)(long unsigned int),HomeResource*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  std::enable_shared_from_this<HomeResource>::enable_shared_from_this(this);
  HomeResource::Resource::Resource(&this->res_home_coin_);
  HomeResource::Resource::Resource(&this->res_fetter_exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v4 = this;
  __f[0] = (void (*)(HomeResource *, unsigned __int64))HomeResource::onTimer;
  __f[1] = 0LL;
  std::bind<void (HomeResource::*)(unsigned long),HomeResource*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v4,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v2,
    v3);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (HomeResource::*)(unsigned long) ()(HomeResource*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};

// Line 145: range 0000000016C7413A-0000000016C74158
int32_t __cdecl HomeResource::init(HomeResource *const this)
{
  HomeResource::initEventObservers(this);
  return 0;
};

// Line 151: range 0000000016C7415A-0000000016C741B4
int32_t __cdecl HomeResource::fromBin(HomeResource *const this, const proto::PlayerHomeResourceBin *home_resource_bin)
{
  const proto::HomeResourceBin *v2; // rax
  const proto::HomeResourceBin *v3; // rax

  v2 = proto::PlayerHomeResourceBin::home_coin_bin(home_resource_bin);
  HomeResource::Resource::fromBin(&this->res_home_coin_, v2);
  v3 = proto::PlayerHomeResourceBin::fetter_exp_bin(home_resource_bin);
  HomeResource::Resource::fromBin(&this->res_fetter_exp_, v3);
  return 0;
};

// Line 158: range 0000000016C741B6-0000000016C74210
int32_t __cdecl HomeResource::toBin(HomeResource *const this, proto::PlayerHomeResourceBin *home_resource_bin)
{
  proto::HomeResourceBin *v2; // rax
  proto::HomeResourceBin *v3; // rax

  v2 = proto::PlayerHomeResourceBin::mutable_home_coin_bin(home_resource_bin);
  HomeResource::Resource::toBin(&this->res_home_coin_, v2);
  v3 = proto::PlayerHomeResourceBin::mutable_fetter_exp_bin(home_resource_bin);
  HomeResource::Resource::toBin(&this->res_fetter_exp_, v3);
  return 0;
};

// Line 166: range 0000000016C74212-0000000016C7488C
int32_t __cdecl HomeResource::initResource(HomeResource *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerHomeComp *HomeComp; // rax
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  PlayerHomeComp *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 v11; // rsi
  uint32_t home_coin_store_limit; // ecx
  char v13; // al
  uint32_t home_coin_produce_rate; // ecx
  char v15; // al
  uint32_t HomeCoinProductInterval; // ecx
  char v17; // dl
  __int64 v18; // rdx
  uint32_t home_fetter_exp_store_limit; // ecx
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  uint32_t companionship_exp_produce_rate; // ecx
  char v24; // dl
  __int64 v25; // rdx
  __int64 HomeFetterExpProductInterval; // rdx
  char v27; // al
  const data::HomeworldLevelExcelConfig *home_level_config_ptr; // [rsp+18h] [rbp-A8h]
  const data::HomeWorldComfortLevelExcelConfig *home_comfort_config_ptr; // [rsp+20h] [rbp-A0h]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v31; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-80h] BYREF
  char v33[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 comfort_level:174";
  *(_QWORD *)(v1 + 16) = HomeResource::initResource;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  home_level_config_ptr = PlayerHomeComp::getHomeLevelConfig(HomeComp);
  if ( home_level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getHomeComp(this->player_);
    *(_DWORD *)(v1 + 32) = PlayerHomeComp::getHomeComfortLevel(v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    home_comfort_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldComfortLevelExcelConfig(
                                &v8->design_config.txt_config_mgr.home_config_mgr,
                                *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( home_comfort_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.const_value_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v31);
      v11 = (((_BYTE)home_level_config_ptr + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&home_level_config_ptr->home_coin_store_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)home_level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_level_config_ptr->home_coin_store_limit >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&home_level_config_ptr->home_coin_store_limit);
      }
      home_coin_store_limit = home_level_config_ptr->home_coin_store_limit;
      v13 = *(_BYTE *)(((unsigned __int64)&this->res_home_coin_.store_limit >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(&this->res_home_coin_.store_limit, v11, &this->res_home_coin_.store_limit);
      }
      this->res_home_coin_.store_limit = home_coin_store_limit;
      if ( *(_BYTE *)(((unsigned __int64)&home_comfort_config_ptr->home_coin_produce_rate >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&home_comfort_config_ptr->home_coin_produce_rate >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&home_comfort_config_ptr->home_coin_produce_rate);
      }
      home_coin_produce_rate = home_comfort_config_ptr->home_coin_produce_rate;
      v15 = *(_BYTE *)(((unsigned __int64)&this->res_home_coin_.increace >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v11) = v15 != 0;
        __asan_report_store4(&this->res_home_coin_.increace, v11, &this->res_home_coin_.increace);
      }
      this->res_home_coin_.increace = home_coin_produce_rate;
      HomeCoinProductInterval = ConstValueExcelConfigMgr::getHomeCoinProductInterval(const_value_config_mgr);
      v17 = *(_BYTE *)(((unsigned __int64)&this->res_home_coin_.interval >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v17 != 0;
      v18 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v17);
      if ( (_BYTE)v18 )
        __asan_report_store4(&this->res_home_coin_.interval, v11, v18);
      this->res_home_coin_.interval = HomeCoinProductInterval;
      if ( *(_BYTE *)(((unsigned __int64)&home_level_config_ptr->home_fetter_exp_store_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&home_level_config_ptr->home_fetter_exp_store_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&home_level_config_ptr->home_fetter_exp_store_limit);
      }
      home_fetter_exp_store_limit = home_level_config_ptr->home_fetter_exp_store_limit;
      v20 = *(_BYTE *)(((unsigned __int64)&this->res_fetter_exp_.store_limit >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v20 != 0;
      v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v20);
      if ( (_BYTE)v21 )
        __asan_report_store4(&this->res_fetter_exp_.store_limit, v11, v21);
      this->res_fetter_exp_.store_limit = home_fetter_exp_store_limit;
      v22 = (((_BYTE)home_comfort_config_ptr + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&home_comfort_config_ptr->companionship_exp_produce_rate >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)home_comfort_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_comfort_config_ptr->companionship_exp_produce_rate >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&home_comfort_config_ptr->companionship_exp_produce_rate);
      }
      companionship_exp_produce_rate = home_comfort_config_ptr->companionship_exp_produce_rate;
      v24 = *(_BYTE *)(((unsigned __int64)&this->res_fetter_exp_.increace >> 3) + 0x7FFF8000);
      LOBYTE(v22) = v24 != 0;
      v25 = (v24 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v24);
      if ( (_BYTE)v25 )
        __asan_report_store4(&this->res_fetter_exp_.increace, v22, v25);
      this->res_fetter_exp_.increace = companionship_exp_produce_rate;
      HomeFetterExpProductInterval = ConstValueExcelConfigMgr::getHomeFetterExpProductInterval(const_value_config_mgr);
      v27 = *(_BYTE *)(((unsigned __int64)&this->res_fetter_exp_.interval >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v22) = v27 != 0;
        __asan_report_store4(&this->res_fetter_exp_.interval, v22, HomeFetterExpProductInterval);
      }
      this->res_fetter_exp_.interval = HomeFetterExpProductInterval;
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/home_resource.cpp",
        "initResource",
        178);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v32,
             (const char (*)[52])"findHomeWorldComfortLevelExcelConfig error. level: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_resource.cpp",
      "initResource",
      170);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v32,
           (const char (*)[25])"getHomeLevelConfig error");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = -1;
  }
  if ( v33 == (char *)v1 )
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

// Line 193: range 0000000016C7488E-0000000016C74B4D
void __cdecl HomeResource::initEventObservers(HomeResource *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<HomeResource> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<HomeResource> v5; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:194 64 16 12 this_wtr:200";
  *(_QWORD *)(p_pending_que + 16) = HomeResource::initEventObservers;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<HomeResource>((HomeResource *)(p_pending_que + 32));
  if ( std::operator==<HomeResource>(0LL, (const std::shared_ptr<HomeResource> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/home_resource.cpp",
      "initEventObservers",
      197);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[44])"dynamic_pointer_cast to HomeResource failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<HomeResource>::weak_ptr<HomeResource,void>(
      (std::weak_ptr<HomeResource> *const)(p_pending_que + 64),
      (const std::shared_ptr<HomeResource> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<HomeResource> *)Player::getEventComp(this->player_);
    std::weak_ptr<HomeResource>::weak_ptr(&v5, (const std::weak_ptr<HomeResource> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<HomeResource,HomeLevelEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(HomeResource *, const HomeLevelEvent *))&v5);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<HomeResource>::~weak_ptr(&v5);
    std::weak_ptr<HomeResource>::~weak_ptr((std::weak_ptr<HomeResource> *const)(p_pending_que + 64));
  }
  std::shared_ptr<HomeResource>::~shared_ptr((std::shared_ptr<HomeResource> *const)(p_pending_que + 32));
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 206: range 0000000016C74B4E-0000000016C74BB7
int32_t __cdecl HomeResource::onLogin(HomeResource *const this, bool isNewPlayer)
{
  PlayerBasicComp *BasicComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x5DCu) )
    HomeResource::checkAndSetNextTimer(this);
  return 0;
};

// Line 215: range 0000000016C74BB8-0000000016C74C51
void __cdecl HomeResource::onHomeStateOpen(HomeResource *const this)
{
  uint32_t HomeCoinBaseValue; // eax
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v3[2]; // [rsp+20h] [rbp-20h] BYREF

  HomeResource::initResource(this);
  HomeResource::Resource::init(&this->res_home_coin_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  HomeCoinBaseValue = ConstValueExcelConfigMgr::getHomeCoinBaseValue(const_value_config_mgr);
  HomeResource::Resource::setStoreValue(&this->res_home_coin_, HomeCoinBaseValue);
  HomeResource::checkAndSetNextTimer(this);
};

// Line 224: range 0000000016C74C52-0000000016C74C9D
void __cdecl HomeResource::onHomeAvatarStateOpen(HomeResource *const this)
{
  HomeResource::initResource(this);
  HomeResource::Resource::forceInit(&this->res_fetter_exp_);
  HomeResource::Resource::setStoreValue(&this->res_fetter_exp_, 0);
  HomeResource::checkAndSetNextTimer(this);
};

// Line 233: range 0000000016C74C9E-0000000016C7501B
int32_t __cdecl HomeResource::checkAndSetNextTimer(HomeResource *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t result; // eax
  const unsigned int *v6; // rax
  _DWORD *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rcx
  unsigned int __b; // [rsp+18h] [rbp-88h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 21 next_trigger_time:248";
  *(_QWORD *)(v1 + 16) = HomeResource::checkAndSetNextTimer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( HomeResource::initResource(this) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_resource.cpp",
      "checkAndSetNextTimer",
      236);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v12,
           (const char (*)[20])"initResource error ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else
  {
    if ( common::tools::MiTimer::isActive(&this->timer_) )
      common::tools::MiTimer::cancel(&this->timer_);
    HomeResource::updateHomeResource(this);
    HomeResource::notifyHomeResource(this);
    now = common::tools::TimeUtils::getNow();
    *(_DWORD *)(v1 + 32) = HomeResource::Resource::getNextRefreshTime(&this->res_home_coin_);
    __b = HomeResource::Resource::getNextRefreshTime(&this->res_fetter_exp_);
    v6 = std::min<unsigned int>((const unsigned int *)(v1 + 32), &__b);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v1 + 32) = *v7;
    v8 = std::numeric_limits<unsigned int>::max() != *(_DWORD *)(v1 + 32) && now < *(_DWORD *)(v1 + 32);
    if ( v8
      && PlayerUnixTimer::startS(
           &this->timer_,
           *(_DWORD *)(v1 + 32) - now,
           0,
           "./src/player/home/home_resource.cpp",
           "checkAndSetNextTimer",
           252) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/home_resource.cpp",
        "checkAndSetNextTimer",
        254);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v12,
             (const char (*)[22])" start timer failed !");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    result = 0;
  }
  if ( v13 == (char *)v1 )
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

// Line 261: range 0000000016C7501C-0000000016C75046
int32_t __cdecl HomeResource::notifyAllData(HomeResource *const this)
{
  HomeResource::updateHomeResource(this);
  HomeResource::notifyHomeResource(this);
  return 0;
};

// Line 268: range 0000000016C75048-0000000016C75617
int32_t __cdecl HomeResource::onTakeHomeCoin(HomeResource *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  uint32_t store_value; // [rsp+14h] [rbp-FCh]
  PlayerItemComp *item_comp; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 ret:292 64 16 14 item_param:287 96 24 10 reason:286";
  *(_QWORD *)(v1 + 16) = HomeResource::onTakeHomeCoin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x5DCu) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/home_resource.cpp",
      "onTakeHomeCoin",
      271);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v13,
           (const char (*)[32])"OPEN_STATE_HOME is locked. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 141;
    goto LABEL_25;
  }
  if ( HomeResource::initResource(this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_resource.cpp",
      "onTakeHomeCoin",
      276);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v13,
           (const char (*)[20])"initResource error ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
    goto LABEL_25;
  }
  store_value = HomeResource::Resource::getStoreValue(&this->res_home_coin_);
  if ( !store_value )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_resource.cpp",
      "onTakeHomeCoin",
      282);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v13, (const char (*)[17])"store_value is 0");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_13;
  }
  ActionReason::ActionReason((ActionReason *const)(v1 + 96), ACTION_REASON_HOME_COIN_COLLECT, ITEM_LIMIT_HOME_RESOURCE);
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 64) = 204;
  *(_DWORD *)(v1 + 68) = store_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  item_comp = Player::getItemComp(this->player_);
  *(_DWORD *)(v1 + 48) = PlayerItemComp::checkAddItem(
                           item_comp,
                           (const ItemParam *)(v1 + 64),
                           (const ActionReason *)(v1 + 96));
  if ( *(_DWORD *)(v1 + 48) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_resource.cpp",
      "onTakeHomeCoin",
      295);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v13, (const char (*)[39])off_25F184E0);
    v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v1 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = *(_DWORD *)(v1 + 48);
  }
  else
  {
    HomeResource::Resource::takeAndRefresh(&this->res_home_coin_);
    PlayerItemComp::addItem(item_comp, (const ItemParam *)(v1 + 64), (const ActionReason *)(v1 + 96), 0LL);
    HomeResource::checkAndSetNextTimer(this);
    result = 0;
  }
LABEL_25:
  if ( v14 == (char *)v1 )
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
  return result;
};

// Line 306: range 0000000016C75618-0000000016C7596E
int32_t __cdecl HomeResource::onTakeFetterExp(HomeResource *const this)
{
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v4; // rcx
  PlayerHomeComp *HomeComp; // rax
  HomeAvatar *HomeAvatar; // rax
  PlayerWatcherComp *WatcherComp; // rax
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  uint32_t store_value; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x5DCu) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/home_resource.cpp",
      "onTakeFetterExp",
      309);
    v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v10,
           (const char (*)[32])"OPEN_STATE_HOME is locked. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 141;
  }
  if ( HomeResource::initResource(this) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_resource.cpp",
      "onTakeFetterExp",
      314);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v10,
           (const char (*)[20])"initResource error ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_10:
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  store_value = HomeResource::Resource::getStoreValue(&this->res_fetter_exp_);
  if ( !store_value )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_resource.cpp",
      "onTakeFetterExp",
      320);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"store_value is 0");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_10;
  }
  HomeResource::Resource::takeAndRefresh(&this->res_fetter_exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  HomeAvatar = PlayerHomeComp::getHomeAvatar(HomeComp);
  HomeAvatar::addAvatarsFetter(HomeAvatar, store_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = Player::getWatcherComp(this->player_);
  PlayerWatcherComp::triggerHomeAvatarFetterGet(WatcherComp);
  HomeResource::checkAndSetNextTimer(this);
  return 0;
};

// Line 332: range 0000000016C75970-0000000016C759B2
void __cdecl HomeResource::onTimer(HomeResource *const this, uint64_t now_ms)
{
  HomeResource::initResource(this);
  HomeResource::updateHomeResource(this);
  HomeResource::notifyHomeResource(this);
  HomeResource::checkAndSetNextTimer(this);
};

// Line 341: range 0000000016C759B4-0000000016C759E2
void __cdecl HomeResource::updateHomeResource(HomeResource *const this)
{
  HomeResource::Resource::update(&this->res_home_coin_);
  HomeResource::Resource::update(&this->res_fetter_exp_);
};

// Line 347: range 0000000016C759E4-0000000016C75A2B
void __cdecl HomeResource::onGMForceUpdateHomeResource(HomeResource *const this, uint32_t count)
{
  HomeResource::Resource::forceUpdate(&this->res_home_coin_, count);
  HomeResource::Resource::forceUpdate(&this->res_fetter_exp_, count);
  HomeResource::notifyHomeResource(this);
};

// Line 355: range 0000000016C75A2C-0000000016C75BE5
void __cdecl HomeResource::notifyHomeResource(HomeResource *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::HomeResource *v4; // rax
  proto::HomeResource *v5; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 notify:356";
  *(_QWORD *)(v1 + 16) = HomeResource::notifyHomeResource;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::HomeResourceNotify::HomeResourceNotify((proto::HomeResourceNotify *const)(v1 + 48));
  v4 = proto::HomeResourceNotify::mutable_home_coin((proto::HomeResourceNotify *const)(v1 + 48));
  HomeResource::Resource::toClient(&this->res_home_coin_, v4);
  v5 = proto::HomeResourceNotify::mutable_fetter_exp((proto::HomeResourceNotify *const)(v1 + 48));
  HomeResource::Resource::toClient(&this->res_fetter_exp_, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::HomeResourceNotify::~HomeResourceNotify((proto::HomeResourceNotify *const)(v1 + 48));
  if ( v6 == (char *)v1 )
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

// Line 363: range 0000000016C75BE6-0000000016C75C10
void __cdecl HomeResource::onHomeLevelChange(HomeResource *const this, const HomeLevelEvent *event)
{
  HomeResource::initResource(this);
  HomeResource::notifyHomeResource(this);
};
