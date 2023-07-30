// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/auto_recover_item_proxy.cpp

// Line 22: range 0000000016C98F1A-0000000016C99252
// local variable allocation has failed, the output may be wrong!
void __cdecl AutoRecoverItemProxy::AutoRecoverItemProxy(
        AutoRecoverItemProxy *const this,
        proto::VirtualItem item_type,
        PlayerPtr *p_player_ptr)
{
  uint32_t *p_value; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  AutoRecoverItemProxy **v10; // r8
  const std::_Placeholder<1> *v11; // r9
  AutoRecoverItemProxy *v14; // [rsp+28h] [rbp-78h] BYREF
  std::weak_ptr<Player> v15; // [rsp+30h] [rbp-70h] BYREF
  void (*__f[2])(AutoRecoverItemProxy *, unsigned __int64); // [rsp+40h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (AutoRecoverItemProxy::*)(long unsigned int),AutoRecoverItemProxy*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-30h] BYREF

  std::enable_shared_from_this<AutoRecoverItemProxy>::enable_shared_from_this(this);
  p_value = &this->value_;
  if ( *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_, *(_QWORD *)&item_type, p_value);
  }
  this->value_ = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->next_refresh_time_, v4, v5);
  this->next_refresh_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_, v4, &this->type_);
  }
  this->type_ = item_type;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->const_value_type_, v6, v7);
  this->const_value_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_state_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_state_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_state_type_, v6, &this->open_state_type_);
  }
  this->open_state_type_ = 0;
  v8 = (((_BYTE)this + 36) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->last_bought_time_, v8, v9);
  this->last_bought_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bought_num_, v8, &this->bought_num_);
  }
  this->bought_num_ = 0;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->player_wtr_, p_player_ptr);
  std::weak_ptr<Player>::lock(&v15);
  v14 = this;
  __f[0] = (void (*)(AutoRecoverItemProxy *, unsigned __int64))AutoRecoverItemProxy::onRefresh;
  __f[1] = 0LL;
  std::bind<void (AutoRecoverItemProxy::*)(unsigned long),AutoRecoverItemProxy*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v14,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v10,
    v11);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (AutoRecoverItemProxy::*)(unsigned long) ()(AutoRecoverItemProxy*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->refresh_timer_, (PlayerPtr *)&v15, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v15);
};

// Line 25: range 0000000016C99254-0000000016C9939E
int32_t __cdecl AutoRecoverItemProxy::fromBin(
        AutoRecoverItemProxy *const this,
        const proto::AutoRecoverItemBin *bin_data)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // rdx
  char v5; // al
  uint32_t bought_time; // ecx
  char v7; // dl
  __int64 v8; // rdx
  uint32_t refresh_time; // ecx
  char v10; // dl
  __int64 v11; // rdx
  const proto::AutoRecoverItemBin *bin_dataa; // [rsp+0h] [rbp-10h]

  bin_dataa = bin_data;
  v2 = proto::AutoRecoverItemBin::value(bin_data);
  v3 = *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin_data) = v3 != 0;
    __asan_report_store4(&this->value_, bin_data, v2);
  }
  this->value_ = v2;
  v4 = proto::AutoRecoverItemBin::bought_num(bin_dataa);
  v5 = *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(bin_data) = v5 != 0;
    __asan_report_store4(&this->bought_num_, bin_data, v4);
  }
  this->bought_num_ = v4;
  bought_time = proto::AutoRecoverItemBin::last_bought_time(bin_dataa);
  v7 = *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000);
  LOBYTE(bin_data) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->last_bought_time_, bin_data, v8);
  this->last_bought_time_ = bought_time;
  refresh_time = proto::AutoRecoverItemBin::next_refresh_time(bin_dataa);
  v10 = *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000);
  LOBYTE(bin_data) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->next_refresh_time_, bin_data, v11);
  this->next_refresh_time_ = refresh_time;
  return 0;
};

// Line 34: range 0000000016C993A0-0000000016C994E6
int32_t __cdecl AutoRecoverItemProxy::toBin(AutoRecoverItemProxy *const this, proto::AutoRecoverItemBin *bin_data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value_);
  }
  proto::AutoRecoverItemBin::set_value(bin_data, this->value_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bought_num_);
  }
  proto::AutoRecoverItemBin::set_bought_num(bin_data, this->bought_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_bought_time_);
  }
  proto::AutoRecoverItemBin::set_last_bought_time(bin_data, this->last_bought_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->next_refresh_time_);
  }
  proto::AutoRecoverItemBin::set_next_refresh_time(bin_data, this->next_refresh_time_);
  return 0;
};

// Line 43: range 0000000016C994E8-0000000016C99830
int32_t __cdecl AutoRecoverItemProxy::init(
        AutoRecoverItemProxy *const this,
        data::ConstValueType const_value_type,
        uint32_t open_state_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rdx
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  unsigned int *open_state_typea; // [rsp+0h] [rbp-E0h]
  uint32_t open_state_typeb; // [rsp+0h] [rbp-E0h]
  AutoRecoverItemProxy *thisb; // [rsp+8h] [rbp-D8h]
  std::shared_ptr<Config> v19; // [rsp+10h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+40h] [rbp-A0h] BYREF

  HIDWORD(open_state_typea) = const_value_type;
  LODWORD(open_state_typea) = open_state_type;
  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 19 recover_interval:45 64 4 12 max_limit:45 80 4 20 max_recover_limit:45 96 4 17 num_per_bought:45";
  *(_QWORD *)(v3 + 16) = AutoRecoverItemProxy::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->const_value_type_, (((_BYTE)this + 28) & 7u) + 3, v6);
  this->const_value_type_ = const_value_type;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 96) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  v8 = (unsigned int)this->const_value_type_;
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    (data::ConstValueType)v8,
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 80),
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 96),
    open_state_typea,
    (unsigned int *)this,
    (unsigned int *)v19._M_ptr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisb->open_state_type_, v8, &thisb->open_state_type_);
  }
  thisb->open_state_type_ = open_state_typeb;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/item/auto_recover_item_proxy.cpp",
    "init",
    48);
  v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v20, (const char (*)[21])"[AUTO RECOVER] init ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
  v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])" ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v20);
  result = 0;
  if ( v21 == (char *)v3 )
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

// Line 54: range 0000000016C99832-0000000016C99840
int32_t __cdecl AutoRecoverItemProxy::clear(AutoRecoverItemProxy *const this)
{
  return 0;
};

// Line 59: range 0000000016C99842-0000000016C9A2AD
int32_t __cdecl AutoRecoverItemProxy::onLogin(AutoRecoverItemProxy *const this, bool is_first_login)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  int32_t v6; // r14d
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rcx
  common::milog::MiLogStream *v9; // rax
  int v10; // ecx
  const unsigned int *v11; // rax
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  Player *v14; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerUnixTimer *p_refresh_timer; // rdi
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  unsigned int *v20; // [rsp+0h] [rbp-160h]
  AutoRecoverItemProxy *thisb; // [rsp+8h] [rbp-158h]
  unsigned int *v23; // [rsp+10h] [rbp-150h]
  unsigned int __a; // [rsp+1Ch] [rbp-144h] BYREF
  unsigned int __b; // [rsp+20h] [rbp-140h] BYREF
  uint32_t now; // [rsp+24h] [rbp-13Ch]
  uint32_t remain_count; // [rsp+28h] [rbp-138h]
  uint32_t recover_count; // [rsp+2Ch] [rbp-134h]
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-130h] BYREF
  char v30[272]; // [rsp+50h] [rbp-110h] BYREF

  BYTE4(v20) = is_first_login;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 19 recover_interval:60 48 4 12 max_limit:60 64 4 20 max_recover_limit:60 80 4 17 num_per_"
                        "bought:60 96 16 13 player_ptr:62 128 16 14 item_param:104 160 24 17 action_reason:103";
  *(_QWORD *)(v2 + 16) = AutoRecoverItemProxy::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    this->const_value_type_,
    (unsigned int *)(v2 + 48),
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 80),
    v20,
    (unsigned int *)this,
    v23);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  AutoRecoverItemProxy::getOwner((AutoRecoverItemProxy *const)(v2 + 96));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onLogin",
      65);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v29, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v6 = -1;
    goto LABEL_55;
  }
  v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  BasicComp = Player::getBasicComp(v7);
  if ( *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisb->open_state_type_);
  }
  if ( !PlayerBasicComp::isStateOpen(BasicComp, thisb->open_state_type_) )
  {
    v6 = 0;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisb->value_);
  }
  if ( thisb->value_ >= *(_DWORD *)(v2 + 64) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onLogin",
      76);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v29,
           (const char (*)[34])"[AUTO RECOVER] cur value is full ");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(v9, &thisb->type_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v6 = 0;
    goto LABEL_55;
  }
  now = common::tools::TimeUtils::getNow();
  if ( !*(_DWORD *)(v2 + 32) )
  {
    v6 = -1;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&thisb->next_refresh_time_);
  }
  if ( thisb->next_refresh_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisb->next_refresh_time_);
    }
    if ( now >= thisb->next_refresh_time_ )
    {
      v10 = *(_DWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisb->value_);
      }
      remain_count = v10 - thisb->value_;
      recover_count = 1;
      if ( !*(_DWORD *)(v2 + 32) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/auto_recover_item_proxy.cpp",
          "onLogin",
          98);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v29,
          (const char (*)[44])"[AUTO RECOVER] recover_interval cannot be 0");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v6 = -1;
        goto LABEL_55;
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisb->next_refresh_time_);
      }
      __b = (now - thisb->next_refresh_time_) / 0x3C / *(_DWORD *)(v2 + 32);
      __a = remain_count - recover_count;
      v11 = std::min<unsigned int>(&__a, &__b);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      recover_count += *v12;
      ActionReason::ActionReason((ActionReason *const)(v2 + 160), ACTION_REASON_AUTO_RECOVER, ITEM_LIMIT_UNLIMITED);
      *(_DWORD *)(v2 + 128) = 0;
      *(_DWORD *)(v2 + 132) = 0;
      *(_DWORD *)(v2 + 136) = 0;
      *(_DWORD *)(v2 + 140) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&thisb->type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisb->type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisb->type_);
      }
      *(_DWORD *)(v2 + 128) = thisb->type_;
      *(_DWORD *)(v2 + 132) = recover_count;
      if ( recover_count == remain_count )
      {
        v13 = (*(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v13 )
          __asan_report_store4(&thisb->next_refresh_time_, (((_BYTE)thisb + 20) & 7u) + 3, v13);
        thisb->next_refresh_time_ = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&thisb->next_refresh_time_);
        }
        thisb->next_refresh_time_ += 60 * recover_count * *(_DWORD *)(v2 + 32);
      }
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      ItemComp = Player::getItemComp(v14);
      PlayerItemComp::addItem(ItemComp, (const ItemParam *)(v2 + 128), (const ActionReason *)(v2 + 160), 0LL);
    }
  }
  else
  {
    thisb->next_refresh_time_ = now + 60 * *(_DWORD *)(v2 + 32);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&thisb->next_refresh_time_);
  }
  if ( !thisb->next_refresh_time_ || common::tools::MiTimer::isActive(&thisb->refresh_timer_) )
    goto LABEL_51;
  p_refresh_timer = &thisb->refresh_timer_;
  if ( *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    p_refresh_timer = (PlayerUnixTimer *)&thisb->next_refresh_time_;
    __asan_report_load4(&thisb->next_refresh_time_);
  }
  if ( PlayerUnixTimer::startS(
         p_refresh_timer,
         thisb->next_refresh_time_ - now,
         0,
         "./src/player/item/auto_recover_item_proxy.cpp",
         "onLogin",
         120) )
  {
    v17 = 1;
  }
  else
  {
LABEL_51:
    v17 = 0;
  }
  if ( v17 )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onLogin",
      122);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v29,
      (const char (*)[41])"[AUTO RECOVER] refresh timer start error");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v6 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onLogin",
      126);
    v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v29,
            (const char (*)[24])"[AUTO RECOVER] onLogin ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &thisb->value_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v6 = 0;
  }
LABEL_55:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  result = v6;
  if ( v30 == (char *)v2 )
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
  return result;
};

// Line 131: range 0000000016C9A2AE-0000000016C9A340
void __cdecl AutoRecoverItemProxy::resetBoughtCount(AutoRecoverItemProxy *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bought_num_, v1, &this->bought_num_);
  }
  this->bought_num_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_bought_time_, (((_BYTE)this + 36) & 7u) + 3, v2);
  this->last_bought_time_ = 0;
};

// Line 137: range 0000000016C9A342-0000000016C9A9C9
int32_t __cdecl AutoRecoverItemProxy::onOpenStateChange(AutoRecoverItemProxy *const this, uint32_t state)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  int v7; // r15d
  Player *v8; // rax
  PlayerItemComp *ItemComp; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  int32_t result; // eax
  unsigned int *v16; // [rsp+0h] [rbp-150h]
  unsigned int *v17; // [rsp+8h] [rbp-148h]
  unsigned int *v18; // [rsp+10h] [rbp-140h]
  uint32_t statea; // [rsp+14h] [rbp-13Ch]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-130h] BYREF
  unsigned int v22[68]; // [rsp+40h] [rbp-110h] BYREF

  HIDWORD(v18) = state;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 20 recover_interval:138 48 4 13 max_limit:138 64 4 21 max_recover_limit:138 80 4 18 num_p"
                        "er_bought:138 96 16 14 player_ptr:148 128 16 14 item_param:156 160 24 17 action_reason:155";
  *(_QWORD *)(v3 + 16) = AutoRecoverItemProxy::onOpenStateChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    this->const_value_type_,
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 32),
    (unsigned int *)(v3 + 80),
    v16,
    v22,
    v18);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( statea )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->type_);
    }
    if ( this->type_ != ITEM_VIRTUAL_RESIN )
      goto LABEL_39;
    if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->value_);
    }
    if ( *(_DWORD *)(v3 + 64) + this->value_ > *(_DWORD *)(v3 + 48) )
    {
      v2 = -1;
      goto LABEL_34;
    }
    AutoRecoverItemProxy::getOwner((AutoRecoverItemProxy *const)(v3 + 96));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/auto_recover_item_proxy.cpp",
        "onOpenStateChange",
        151);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v2 = -1;
      v7 = 0;
    }
    else
    {
      ActionReason::ActionReason((ActionReason *const)(v3 + 160), ACTION_REASON_QUEST_REWARD, ITEM_LIMIT_UNLIMITED);
      *(_DWORD *)(v3 + 128) = 0;
      *(_DWORD *)(v3 + 132) = 0;
      *(_DWORD *)(v3 + 136) = 0;
      *(_DWORD *)(v3 + 140) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->type_);
      }
      *(_DWORD *)(v3 + 128) = this->type_;
      *(_DWORD *)(v3 + 132) = *(_DWORD *)(v3 + 64);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      ItemComp = Player::getItemComp(v8);
      PlayerItemComp::addItem(ItemComp, (const ItemParam *)(v3 + 128), (const ActionReason *)(v3 + 160), 0LL);
      v7 = 1;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
    if ( v7 == 1 )
    {
LABEL_39:
      if ( common::tools::MiTimer::isActive(&this->refresh_timer_) )
      {
        v2 = 0;
      }
      else
      {
        v10 = (*(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v10 )
          __asan_report_store4(&this->next_refresh_time_, (((_BYTE)this + 20) & 7u) + 3, v10);
        this->next_refresh_time_ = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->value_);
        }
        if ( this->value_ < *(_DWORD *)(v3 + 64) )
        {
          v11 = (unsigned int)(60 * *(_DWORD *)(v3 + 32));
          if ( PlayerUnixTimer::startS(
                 &this->refresh_timer_,
                 v11,
                 0,
                 "./src/player/item/auto_recover_item_proxy.cpp",
                 "onOpenStateChange",
                 174) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/item/auto_recover_item_proxy.cpp",
              "onOpenStateChange",
              176);
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v21,
              (const char (*)[26])"refresh timer start error");
            common::milog::MiLogStream::~MiLogStream(&v21);
            v2 = -1;
          }
          else
          {
            v12 = common::tools::TimeUtils::getNow() + 60 * *(_DWORD *)(v3 + 32);
            v13 = *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000);
            LOBYTE(v11) = v13 != 0;
            v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v13);
            if ( (_BYTE)v14 )
              __asan_report_store4(&this->next_refresh_time_, v11, v14);
            this->next_refresh_time_ = v12;
            v2 = 1;
          }
        }
        else
        {
          v2 = 1;
        }
      }
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_34:
  result = v2;
  if ( v17 == (unsigned int *)v3 )
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

// Line 187: range 0000000016C9A9CA-0000000016C9AC19
int32_t __cdecl AutoRecoverItemProxy::getCurBuyCount(AutoRecoverItemProxy *const this, uint32_t *count)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  time_t v7; // rcx
  time_t v8; // rsi
  uint32_t bought_num; // ecx
  char v10; // dl
  __int64 v11; // rdx
  uint32_t next_day_offset; // [rsp+18h] [rbp-18h]
  uint32_t now; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  next_day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  now = common::tools::TimeUtils::getNow();
  v4 = ((unsigned __int8)count & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)count & 7)
                                                                                               + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(count, v4, v5);
  *count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_bought_time_);
  }
  if ( this->last_bought_time_ )
  {
    v7 = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_bought_time_);
    }
    v8 = v7;
    if ( common::tools::TimeUtils::isSameDay(this->last_bought_time_, v7, next_day_offset) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->bought_num_);
      }
      bought_num = this->bought_num_;
      v10 = *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v10 != 0;
      v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)count & 7) + 3) >= v10);
      if ( (_BYTE)v11 )
        __asan_report_store4(count, v8, v11);
      *count = bought_num;
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->bought_num_, v8, &this->bought_num_);
      }
      this->bought_num_ = 0;
      return 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->bought_num_, (((_BYTE)this + 36) & 7u) + 3, &this->bought_num_);
    }
    this->bought_num_ = 0;
    return 0;
  }
};

// Line 209: range 0000000016C9AC1A-0000000016C9B617
int32_t __cdecl AutoRecoverItemProxy::buyOnce(AutoRecoverItemProxy *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  int32_t v5; // r14d
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerItemComp *ItemComp; // rax
  Player *v13; // rax
  PlayerItemComp *v14; // rax
  Player *v15; // rax
  PlayerItemComp *v16; // r14
  common::milog::MiLogStream *v17; // rax
  uint32_t Now; // edi
  __int64 v19; // rdx
  Player *v20; // rax
  PlayerItemComp *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  unsigned int *v24; // [rsp+0h] [rbp-1B0h]
  AutoRecoverItemProxy *thisb; // [rsp+8h] [rbp-1A8h]
  unsigned int *v27; // [rsp+10h] [rbp-1A0h]
  SubItemReason reason; // [rsp+18h] [rbp-198h] BYREF
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-190h] BYREF
  char v30[368]; // [rsp+40h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 48 4 20 recover_interval:210 64 4 13 max_limit:210 80 4 21 max_recover_limit:210 96 4 18 num_"
                        "per_bought:210 112 4 18 cur_bought_num:217 128 4 8 cost:230 144 4 7 ret:231 160 16 14 player_ptr"
                        ":211 192 16 14 item_param:239 224 16 15 bought_item:248 256 24 17 action_reason:247";
  *(_QWORD *)(v1 + 16) = AutoRecoverItemProxy::buyOnce;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862727] = -219021312;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 224));
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 224))->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    this->const_value_type_,
    (unsigned int *)(v1 + 64),
    (unsigned int *)(v1 + 80),
    (unsigned int *)(v1 + 48),
    (unsigned int *)(v1 + 96),
    v24,
    (unsigned int *)this,
    v27);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 224));
  AutoRecoverItemProxy::getOwner((AutoRecoverItemProxy *const)(v1 + 160));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 160)) )
  {
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(v1 + 112) = 0;
    if ( AutoRecoverItemProxy::getCurBuyCount(thisb, (uint32_t *)(v1 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/auto_recover_item_proxy.cpp",
        "buyOnce",
        220);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v29,
        (const char (*)[37])"[AUTO RECOVER] getCurBuyCount failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      BasicComp = Player::getBasicComp(v6);
      if ( *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisb->open_state_type_);
      }
      if ( !PlayerBasicComp::isStateOpen(BasicComp, thisb->open_state_type_) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/item/auto_recover_item_proxy.cpp",
          "buyOnce",
          226);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v29,
          (const char (*)[38])"[AUTO RECOVER] open state is not open");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = 668;
      }
      else
      {
        *(_DWORD *)(v1 + 128) = 0;
        *(_DWORD *)(v1 + 144) = AutoRecoverItemProxy::getBuyCost(thisb, *(_DWORD *)(v1 + 112), (uint32_t *)(v1 + 128));
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/item/auto_recover_item_proxy.cpp",
          "buyOnce",
          232);
        v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v29,
               (const char (*)[28])"[AUTO RECOVER] getBuyCost: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v8,
               (const unsigned int *)(v1 + 112));
        v10 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v9, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 128));
        common::milog::MiLogStream::~MiLogStream(&v29);
        if ( *(_DWORD *)(v1 + 144) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/auto_recover_item_proxy.cpp",
            "buyOnce",
            235);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v29,
            (const char (*)[33])"[AUTO RECOVER] getBuyCost failed");
          common::milog::MiLogStream::~MiLogStream(&v29);
          v5 = *(_DWORD *)(v1 + 144);
        }
        else
        {
          *(_QWORD *)(v1 + 192) = 0LL;
          *(_QWORD *)(v1 + 200) = 0LL;
          *(_DWORD *)(v1 + 192) = 201;
          *(_DWORD *)(v1 + 196) = *(_DWORD *)(v1 + 128);
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          ItemComp = Player::getItemComp(v11);
          *(_DWORD *)(v1 + 144) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v1 + 192));
          if ( *(_DWORD *)(v1 + 144) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/item/auto_recover_item_proxy.cpp",
              "buyOnce",
              243);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v29,
              (const char (*)[35])"[AUTO RECOVER] checkSubItem failed");
            common::milog::MiLogStream::~MiLogStream(&v29);
            v5 = *(_DWORD *)(v1 + 144);
          }
          else
          {
            ActionReason::ActionReason((ActionReason *const)(v1 + 256), ACTION_REASON_BUY_RESIN, ITEM_LIMIT_UNLIMITED);
            *(_QWORD *)(v1 + 224) = 0LL;
            *(_QWORD *)(v1 + 232) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&thisb->type_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisb->type_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&thisb->type_);
            }
            *(_DWORD *)(v1 + 224) = thisb->type_;
            *(_DWORD *)(v1 + 228) = *(_DWORD *)(v1 + 96);
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            v14 = Player::getItemComp(v13);
            *(_DWORD *)(v1 + 144) = PlayerItemComp::checkAddItem(
                                      v14,
                                      (const ItemParam *)(v1 + 224),
                                      (const ActionReason *)(v1 + 256));
            if ( *(_DWORD *)(v1 + 144) )
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/item/auto_recover_item_proxy.cpp",
                "buyOnce",
                252);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v29,
                (const char (*)[35])"[AUTO RECOVER] checkAddItem failed");
              common::milog::MiLogStream::~MiLogStream(&v29);
              v5 = *(_DWORD *)(v1 + 144);
            }
            else
            {
              v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
              v16 = Player::getItemComp(v15);
              SubItemReason::SubItemReason(&reason, (const ActionReason *)(v1 + 256));
              *(_DWORD *)(v1 + 144) = PlayerItemComp::subItem(v16, (const ItemParam *)(v1 + 192), &reason);
              if ( *(_DWORD *)(v1 + 144) )
              {
                common::milog::MiLogStream::create(
                  &v29,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/item/auto_recover_item_proxy.cpp",
                  "buyOnce",
                  259);
                v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v29,
                        (const char (*)[36])"[AUTO RECOVER] subItem failed. ret:");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v1 + 144));
                common::milog::MiLogStream::~MiLogStream(&v29);
                v5 = *(_DWORD *)(v1 + 144);
              }
              else
              {
                Now = common::tools::TimeUtils::getNow();
                v19 = (*(_BYTE *)(((unsigned __int64)&thisb->last_bought_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)thisb + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->last_bought_time_ >> 3) + 0x7FFF8000));
                if ( (_BYTE)v19 )
                {
                  Now = (_DWORD)thisb + 36;
                  __asan_report_store4(&thisb->last_bought_time_, (((_BYTE)thisb + 36) & 7u) + 3, v19);
                }
                thisb->last_bought_time_ = Now;
                if ( *(_BYTE *)(((unsigned __int64)&thisb->bought_num_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&thisb->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&thisb->bought_num_);
                }
                ++thisb->bought_num_;
                v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
                v21 = Player::getItemComp(v20);
                *(_DWORD *)(v1 + 144) = PlayerItemComp::addItem(
                                          v21,
                                          (const ItemParam *)(v1 + 224),
                                          (const ActionReason *)(v1 + 256),
                                          0LL);
                if ( *(_DWORD *)(v1 + 144) )
                {
                  common::milog::MiLogStream::create(
                    &v29,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/item/auto_recover_item_proxy.cpp",
                    "buyOnce",
                    269);
                  v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v29,
                          (const char (*)[36])"[AUTO RECOVER] addItem failed. ret:");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v1 + 144));
                  common::milog::MiLogStream::~MiLogStream(&v29);
                  v5 = *(_DWORD *)(v1 + 144);
                }
                else
                {
                  v5 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 160));
  result = v5;
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 277: range 0000000016C9B618-0000000016C9B9FB
__int64 __fastcall AutoRecoverItemProxy::getBuyCost(
        AutoRecoverItemProxy *const this,
        uint32_t bought_num,
        unsigned __int64 cost)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  bool v7; // r14
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // r14
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // rsi
  std::vector<unsigned int>::reference v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 bought_num:276 64 24 12 cost_vec:278";
  *(_QWORD *)(v3 + 16) = AutoRecoverItemProxy::getBuyCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = bought_num;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->const_value_type_);
  }
  v7 = ConstValueExcelConfigMgr::getAutoRecoverCostConfigVec(
         p_const_value_config_mgr,
         this->const_value_type_,
         (std::vector<unsigned int> *)(v3 + 64)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( v7 )
  {
    v8 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "getBuyCost",
      284);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v22,
           (const char (*)[26])"[AUTO RECOVER] vec_size: ");
    val = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 64));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v10 = *(unsigned int *)(v3 + 48);
    if ( v10 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 64)) )
    {
      v12 = *(unsigned int *)(v3 + 48);
      v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 64), v12);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)((cost >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)((char)((cost & 7) + 3) >= v16);
      if ( (_BYTE)v17 )
        __asan_report_store4(cost, v12, v17);
      *(_DWORD *)cost = v15;
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/auto_recover_item_proxy.cpp",
        "getBuyCost",
        287);
      v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v22,
              (const char (*)[42])"[AUTO RECOVER] bought_num exceed vec size");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = 669;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = v8;
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
  return result;
};

// Line 296: range 0000000016C9B9FC-0000000016C9C25B
void __cdecl AutoRecoverItemProxy::onRefresh(AutoRecoverItemProxy *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rcx
  Player *v10; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 v15; // rdx
  Player *v16; // rax
  PlayerItemComp *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  AutoRecoverItemProxy *thisb; // [rsp+8h] [rbp-138h]
  unsigned int *v23; // [rsp+10h] [rbp-130h]
  uint32_t now; // [rsp+1Ch] [rbp-124h]
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-120h] BYREF
  char v26[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 20 recover_interval:297 48 4 13 max_limit:297 64 4 21 max_recover_limit:297 80 4 18 num_p"
                        "er_bought:297 96 16 14 player_ptr:310 128 16 14 item_param:327 160 24 17 action_reason:325";
  *(_QWORD *)(v2 + 16) = AutoRecoverItemProxy::onRefresh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    this->const_value_type_,
    (unsigned int *)(v2 + 48),
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 80),
    (unsigned int *)now_ms,
    (unsigned int *)this,
    v23);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( common::tools::MiTimer::isActive(&thisb->refresh_timer_) )
    common::tools::MiTimer::cancel(&thisb->refresh_timer_);
  if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisb->value_);
  }
  if ( thisb->value_ < *(_DWORD *)(v2 + 64) )
  {
    AutoRecoverItemProxy::getOwner((AutoRecoverItemProxy *const)(v2 + 96));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/auto_recover_item_proxy.cpp",
        "onRefresh",
        313);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v25,
             (const char (*)[34])"[AUTO RECOVER] player_ptr is NULL");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(v7, &thisb->type_);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v8);
      if ( *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisb->open_state_type_);
      }
      if ( !PlayerBasicComp::isStateOpen(BasicComp, thisb->open_state_type_) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/item/auto_recover_item_proxy.cpp",
          "onRefresh",
          319);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v25,
          (const char (*)[23])"open state is not open");
        common::milog::MiLogStream::~MiLogStream(&v25);
        AutoRecoverItemProxy::clearRefresh(thisb);
      }
      else
      {
        now = common::tools::TimeUtils::getNow();
        ActionReason::ActionReason((ActionReason *const)(v2 + 160), ACTION_REASON_AUTO_RECOVER, ITEM_LIMIT_UNLIMITED);
        *(_BYTE *)(v2 + 174) = 0;
        *(_DWORD *)(v2 + 128) = 0;
        *(_DWORD *)(v2 + 132) = 0;
        *(_DWORD *)(v2 + 136) = 0;
        *(_DWORD *)(v2 + 140) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&thisb->type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisb->type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisb->type_);
        }
        *(_DWORD *)(v2 + 128) = thisb->type_;
        *(_DWORD *)(v2 + 132) = 1;
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        ItemComp = Player::getItemComp(v10);
        if ( PlayerItemComp::checkAddItem(ItemComp, (const ItemParam *)(v2 + 128), (const ActionReason *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/auto_recover_item_proxy.cpp",
            "onRefresh",
            333);
          v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v25,
                  (const char (*)[39])"[AUTO RECOVER] check add item failed: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 128));
          v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v13, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 132));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          v15 = (*(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)thisb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v15 )
            __asan_report_store4(&thisb->next_refresh_time_, (((_BYTE)thisb + 20) & 7u) + 3, v15);
          thisb->next_refresh_time_ = 0;
          if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&thisb->value_);
          }
          if ( *(_DWORD *)(v2 + 132) + thisb->value_ >= *(_DWORD *)(v2 + 64)
            || (thisb->next_refresh_time_ = now + 60 * *(_DWORD *)(v2 + 32),
                !PlayerUnixTimer::startS(
                   &thisb->refresh_timer_,
                   60 * *(_DWORD *)(v2 + 32),
                   0,
                   "./src/player/item/auto_recover_item_proxy.cpp",
                   "onRefresh",
                   341)) )
          {
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v17 = Player::getItemComp(v16);
            PlayerItemComp::addItem(v17, (const ItemParam *)(v2 + 128), (const ActionReason *)(v2 + 160), 0LL);
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/item/auto_recover_item_proxy.cpp",
              "onRefresh",
              348);
            v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v25,
                    (const char (*)[26])"[AUTO RECOVER] onRefresh ");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 132));
            v20 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v19, (const char (*)[3])", ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &thisb->value_);
            common::milog::MiLogStream::~MiLogStream(&v25);
          }
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onRefresh",
      305);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v25,
           (const char (*)[35])"[AUTO RECOVER] cur value is full: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &thisb->value_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    AutoRecoverItemProxy::clearRefresh(thisb);
  }
  if ( v26 == (char *)v2 )
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

// Line 353: range 0000000016C9C25C-0000000016C9C2D4
void __cdecl AutoRecoverItemProxy::clearRefresh(AutoRecoverItemProxy *const this)
{
  __int64 v1; // rdx

  if ( common::tools::MiTimer::isActive(&this->refresh_timer_) )
    common::tools::MiTimer::cancel(&this->refresh_timer_);
  v1 = (*(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->next_refresh_time_, (((_BYTE)this + 20) & 7u) + 3, v1);
  this->next_refresh_time_ = 0;
};

// Line 362: range 0000000016C9C2D6-0000000016C9C623
__int64 __fastcall AutoRecoverItemProxy::onAddValue(AutoRecoverItemProxy *const this, uint32_t add_value)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  unsigned int *v14; // [rsp+0h] [rbp-E0h]
  AutoRecoverItemProxy *thisb; // [rsp+8h] [rbp-D8h]
  std::shared_ptr<Config> v17; // [rsp+10h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  HIDWORD(v14) = add_value;
  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 20 recover_interval:363 48 4 13 max_limit:363 64 4 21 max_recover_limit:363 80 4 18 num_p"
                        "er_bought:363 96 4 13 add_value:361";
  *(_QWORD *)(v2 + 16) = AutoRecoverItemProxy::onAddValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  *(_DWORD *)(v2 + 96) = add_value;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    this->const_value_type_,
    (unsigned int *)(v2 + 48),
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 80),
    v14,
    (unsigned int *)this,
    (unsigned int *)v17._M_ptr);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  v6 = *(_DWORD *)(v2 + 96);
  if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisb->value_);
  }
  v7 = v6;
  v8 = SAFE_ADD<unsigned int,unsigned int>(thisb->value_, v6);
  v9 = *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&thisb->value_, v7, v8);
  }
  thisb->value_ = v8;
  if ( thisb->value_ >= *(_DWORD *)(v2 + 64) )
    AutoRecoverItemProxy::clearRefresh(thisb);
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/item/auto_recover_item_proxy.cpp",
    "onAddValue",
    371);
  v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v18,
          (const char (*)[27])"[AUTO RECOVER] onAddValue ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 96));
  v12 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v11, (const char (*)[3])", ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &thisb->value_);
  common::milog::MiLogStream::~MiLogStream(&v18);
  result = 0LL;
  if ( v19 == (char *)v2 )
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

// Line 376: range 0000000016C9C624-0000000016C9CC3C
__int64 __fastcall AutoRecoverItemProxy::onSubValue(AutoRecoverItemProxy *const this, uint32_t sub_value)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ConstValueExcelConfigMgr *p_const_value_config_mgr; // rdi
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rcx
  char v10; // al
  __int64 v11; // rsi
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 result; // rax
  unsigned int *v21; // [rsp+0h] [rbp-100h]
  AutoRecoverItemProxy *thisb; // [rsp+8h] [rbp-F8h]
  common::milog::MiLogStream v24; // [rsp+10h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+30h] [rbp-D0h] BYREF

  HIDWORD(v21) = sub_value;
  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 20 recover_interval:377 64 4 13 max_limit:377 80 4 21 max_recover_limit:377 96 4 18 num_p"
                        "er_bought:377 112 4 13 sub_value:375 128 16 14 player_ptr:385";
  *(_QWORD *)(v2 + 16) = AutoRecoverItemProxy::onSubValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 112) = sub_value;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.const_value_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value_type_ >> 3) + 0x7FFF8000) )
  {
    p_const_value_config_mgr = (const ConstValueExcelConfigMgr *)&this->const_value_type_;
    __asan_report_load4(&this->const_value_type_);
  }
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    p_const_value_config_mgr,
    this->const_value_type_,
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 80),
    (unsigned int *)(v2 + 48),
    (unsigned int *)(v2 + 96),
    v21,
    (unsigned int *)this,
    &v24.log_->max_log_len_._M_i);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisb->value_);
  }
  if ( thisb->value_ < *(_DWORD *)(v2 + 112) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onSubValue",
      381);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"sub_value illegal ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 112));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = -1;
    goto LABEL_29;
  }
  AutoRecoverItemProxy::getOwner((AutoRecoverItemProxy *const)(v2 + 128));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisb->value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisb->value_);
    }
    thisb->value_ -= *(_DWORD *)(v2 + 112);
    if ( thisb->value_ >= *(_DWORD *)(v2 + 80) )
      goto LABEL_19;
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    BasicComp = Player::getBasicComp(v8);
    if ( *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisb->open_state_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisb->open_state_type_);
    }
    if ( PlayerBasicComp::isStateOpen(BasicComp, thisb->open_state_type_) )
      v10 = 1;
    else
LABEL_19:
      v10 = 0;
    if ( v10 && !common::tools::MiTimer::isActive(&thisb->refresh_timer_) )
    {
      v11 = (unsigned int)(60 * *(_DWORD *)(v2 + 48));
      if ( PlayerUnixTimer::startS(
             &thisb->refresh_timer_,
             v11,
             0,
             "./src/player/item/auto_recover_item_proxy.cpp",
             "onSubValue",
             396) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/auto_recover_item_proxy.cpp",
          "onSubValue",
          398);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v24,
          (const char (*)[26])"refresh timer start error");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v7 = -1;
        goto LABEL_28;
      }
      v12 = common::tools::TimeUtils::getNow() + 60 * *(_DWORD *)(v2 + 48);
      v13 = *(_BYTE *)(((unsigned __int64)&thisb->next_refresh_time_ >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v13 != 0;
      v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)thisb + 20) & 7) + 3) >= v13);
      if ( (_BYTE)v14 )
        __asan_report_store4(&thisb->next_refresh_time_, v11, v14);
      thisb->next_refresh_time_ = v12;
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/auto_recover_item_proxy.cpp",
      "onSubValue",
      405);
    v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v24,
            (const char (*)[28])"[AUTO RECOVER] onSubValue: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &thisb->value_);
    v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" sub_value: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 112));
    v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v18,
            (const char (*)[21])" max recover limit: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = 0;
    goto LABEL_28;
  }
  v7 = -1;
LABEL_28:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
LABEL_29:
  result = v7;
  if ( v25 == (char *)v2 )
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

// Line 410: range 0000000016C9CC3E-0000000016C9CFE1
void __cdecl AutoRecoverItemProxy::onDailyRefresh(AutoRecoverItemProxy *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  time_t Now; // rcx
  time_t v6; // rsi
  Player *v7; // rax
  uint32_t next_day_offset; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-C0h] BYREF
  char v10[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:411 64 32 10 notify:422";
  *(_QWORD *)(v1 + 16) = AutoRecoverItemProxy::onDailyRefresh;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  AutoRecoverItemProxy::getOwner((AutoRecoverItemProxy *const)(v1 + 32));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    next_day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v9);
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bought_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_bought_time_);
    }
    v6 = Now;
    if ( !common::tools::TimeUtils::isSameDay(this->last_bought_time_, Now, next_day_offset) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->bought_num_, v6, &this->bought_num_);
      }
      this->bought_num_ = 0;
    }
    proto::ResinChangeNotify::ResinChangeNotify((proto::ResinChangeNotify *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->value_);
    }
    proto::ResinChangeNotify::set_cur_value((proto::ResinChangeNotify *const)(v1 + 64), this->value_);
    if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->next_refresh_time_);
    }
    proto::ResinChangeNotify::set_next_add_timestamp(
      (proto::ResinChangeNotify *const)(v1 + 64),
      this->next_refresh_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bought_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->bought_num_);
    }
    proto::ResinChangeNotify::set_cur_buy_count((proto::ResinChangeNotify *const)(v1 + 64), this->bought_num_);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::sendProto(v7, (const google::protobuf::Message *)(v1 + 64));
    proto::ResinChangeNotify::~ResinChangeNotify((proto::ResinChangeNotify *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
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
