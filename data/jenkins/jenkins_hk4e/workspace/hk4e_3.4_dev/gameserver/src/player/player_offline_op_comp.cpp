// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_offline_op_comp.cpp

// Line 23: range 00000000179B39E8-00000000179B3DB7
int32_t __cdecl PlayerOfflineOpComp::init(PlayerOfflineOpComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerOfflineOpComp *OfflineOpComp; // r14
  PlayerOfflineOpComp *v5; // r14
  int32_t result; // eax
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-C4h] BYREF
  std::enable_shared_from_this<PlayerCompBase> v8; // [rsp+20h] [rbp-C0h] BYREF
  std::function<void(const proto::SendOfflineOpRsp&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 8 s_ptr:25 64 16 8 w_ptr:25";
  *(_QWORD *)(v1 + 16) = PlayerOfflineOpComp::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v8);
  std::dynamic_pointer_cast<PlayerOfflineOpComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v8);
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr<PlayerOfflineOpComp,void>(
    (std::weak_ptr<PlayerOfflineOpComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerOfflineOpComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr(
    (std::weak_ptr<PlayerOfflineOpComp> *const)&v8,
    (const std::weak_ptr<PlayerOfflineOpComp> *)(v1 + 64));
  std::function<void ()(proto::SendOfflineOpRsp const&)>::function<PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1},void,void>(
    &p_func,
    (PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *)&v8);
  op_type = OFFLINE_OP_TEST;
  PlayerOfflineOpComp::registerSendRspCallBack(OfflineOpComp, &op_type, &p_func);
  std::function<void ()(proto::SendOfflineOpRsp const&)>::~function(&p_func);
  PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp((PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *const)&v8);
  std::weak_ptr<PlayerOfflineOpComp>::~weak_ptr((std::weak_ptr<PlayerOfflineOpComp> *const)(v1 + 64));
  std::shared_ptr<PlayerOfflineOpComp>::~shared_ptr((std::shared_ptr<PlayerOfflineOpComp> *const)(v1 + 32));
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v8);
  std::dynamic_pointer_cast<PlayerOfflineOpComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v8);
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr<PlayerOfflineOpComp,void>(
    (std::weak_ptr<PlayerOfflineOpComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerOfflineOpComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr(
    (std::weak_ptr<PlayerOfflineOpComp> *const)&v8,
    (const std::weak_ptr<PlayerOfflineOpComp> *)(v1 + 64));
  std::function<void ()(proto::OfflineOpBin const&)>::function<PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2},void,void>(
    (std::function<void(const proto::OfflineOpBin&)> *const)&p_func,
    (PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *)&v8);
  op_type = OFFLINE_OP_TEST;
  PlayerOfflineOpComp::registerExecOfflineOp(v5, &op_type, (PlayerOfflineOpComp::ExecFunc *)&p_func);
  std::function<void ()(proto::OfflineOpBin const&)>::~function((std::function<void(const proto::OfflineOpBin&)> *const)&p_func);
  PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin((PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *const)&v8);
  std::weak_ptr<PlayerOfflineOpComp>::~weak_ptr((std::weak_ptr<PlayerOfflineOpComp> *const)(v1 + 64));
  std::shared_ptr<PlayerOfflineOpComp>::~shared_ptr((std::shared_ptr<PlayerOfflineOpComp> *const)(v1 + 32));
  result = 0;
  if ( v10 == (char *)v1 )
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

// Line 24: range 00000000179E7E94-00000000179E7EB9
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 24: range 00000000179E7F84-00000000179E7FA9
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        const PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 24: range 00000000179B375C-00000000179B3884
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator()(
        const PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *const __closure,
        const proto::SendOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerOfflineOpComp *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 s_ptr:24";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlayerOfflineOpComp>::lock((const std::weak_ptr<PlayerOfflineOpComp> *const)(v2 + 32));
  if ( std::operator!=<PlayerOfflineOpComp>((const std::shared_ptr<PlayerOfflineOpComp> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerOfflineOpComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerOfflineOpComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerOfflineOpComp::onTestSendOfflineOpRsp(v5, rsp_0);
  }
  std::shared_ptr<PlayerOfflineOpComp>::~shared_ptr((std::shared_ptr<PlayerOfflineOpComp> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 24: range 00000000179B3886-00000000179B38A0
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp(
        PlayerOfflineOpComp::init::<lambda(const proto::SendOfflineOpRsp&)> *const this)
{
  std::weak_ptr<PlayerOfflineOpComp>::~weak_ptr(&this->__w_ptr);
};

// Line 25: range 00000000179E809C-00000000179E80C1
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *const this,
        PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 25: range 00000000179E818C-00000000179E81B1
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *const this,
        const PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlayerOfflineOpComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 25: range 00000000179B38A2-00000000179B39CA
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2}::operator()(
        const PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *const __closure,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerOfflineOpComp *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 s_ptr:25";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlayerOfflineOpComp>::lock((const std::weak_ptr<PlayerOfflineOpComp> *const)(v2 + 32));
  if ( std::operator!=<PlayerOfflineOpComp>((const std::shared_ptr<PlayerOfflineOpComp> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerOfflineOpComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerOfflineOpComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerOfflineOpComp::onTestOfflineOpExec(v5, bin);
  }
  std::shared_ptr<PlayerOfflineOpComp>::~shared_ptr((std::shared_ptr<PlayerOfflineOpComp> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 25: range 00000000179B39CC-00000000179B39E6
void __cdecl PlayerOfflineOpComp::init(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin(
        PlayerOfflineOpComp::init::<lambda(const proto::OfflineOpBin&)> *const this)
{
  std::weak_ptr<PlayerOfflineOpComp>::~weak_ptr(&this->__w_ptr);
};

// Line 31: range 00000000179B3DB8-00000000179B3FCE
int32_t __cdecl PlayerOfflineOpComp::fromBin(
        PlayerOfflineOpComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  const proto::PlayerOfflineOpBin *v2; // rax
  google::protobuf::Map<unsigned int,unsigned int>::const_reference v3; // rax
  common::milog::MiLogStream *v4; // rdx
  unsigned int v5; // ebx
  const unsigned int *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  unsigned int *v8; // rdx
  char v9; // cl
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-80h]
  const unsigned int *p_type; // [rsp+18h] [rbp-78h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-50h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  std::unordered_map<unsigned int,unsigned int>::clear(&this->cur_index_map_);
  v2 = proto::PlayerDataBin::offline_op_bin(player_data_bin);
  __for_range = proto::PlayerOfflineOpBin::index_map(v2);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    v3 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    p_type = (const unsigned int *)v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( !proto::OfflineOpType_IsValid(*p_type) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_op_comp.cpp",
        "fromBin",
        37);
      v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v15, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, p_type);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    if ( *(_BYTE *)(((unsigned __int64)(p_type + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_type + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_type + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type + 1);
    }
    v5 = p_type[1];
    v6 = p_type;
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->cur_index_map_, p_type);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v7, v6, v7);
    }
    *v8 = v5;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 45: range 00000000179B3FD0-00000000179B41F2
int32_t __cdecl PlayerOfflineOpComp::toBin(PlayerOfflineOpComp *const this, proto::PlayerDataBin *player_data_bin)
{
  common::milog::MiLogStream *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  proto::PlayerOfflineOpBin *bin; // [rsp+20h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int> *index_map; // [rsp+28h] [rbp-58h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *index; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  bin = proto::PlayerDataBin::mutable_offline_op_bin(player_data_bin);
  proto::PlayerOfflineOpBin::clear_index_map(bin);
  index_map = proto::PlayerOfflineOpBin::mutable_index_map(bin);
  __for_range = &this->cur_index_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->cur_index_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->cur_index_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    type = std::get<0ul,unsigned int const,unsigned int>(v14);
    index = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    if ( !proto::OfflineOpType_IsValid(*type) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_op_comp.cpp",
        "toBin",
        53);
      v2 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v17, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, type);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(index);
    }
    v3 = *index;
    v4 = type;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](index_map, type);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, v5);
    }
    *v6 = v3;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 61: range 00000000179B41F4-00000000179B4212
void __cdecl PlayerOfflineOpComp::clear(PlayerOfflineOpComp *const this)
{
  std::unordered_map<unsigned int,unsigned int>::clear(&this->cur_index_map_);
};

// Line 66: range 00000000179B4214-00000000179B424F
int32_t __cdecl PlayerOfflineOpComp::onLogin(PlayerOfflineOpComp *const this, bool is_new_player)
{
  PlayerOfflineOpComp::removeOfflineOpRedisData(this);
  PlayerOfflineOpComp::getOfflineOpRedisData(this);
  PlayerOfflineOpComp::initTimerInterval(this);
  return 0;
};

// Line 74: range 00000000179B4250-00000000179B44A5
void __cdecl PlayerOfflineOpComp::initTimerInterval(PlayerOfflineOpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GameserverService *v4; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t timer_save_time_interval; // ecx
  char v8; // al
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 config_ptr:75";
  *(_QWORD *)(v1 + 16) = PlayerOfflineOpComp::initTimerInterval;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->timer_save_time_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->timer_save_time_interval);
  }
  if ( v5->timer_save_time_interval )
  {
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->timer_save_time_interval >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v6->timer_save_time_interval);
    }
    timer_save_time_interval = v6->timer_save_time_interval;
    v8 = *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v4) = v8 != 0;
      __asan_report_store4(&this->timer_interval_, v4, &this->timer_interval_);
    }
    this->timer_interval_ = timer_save_time_interval;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "initTimerInterval",
      78);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v9,
      (const char (*)[42])"config_ptr->timer_save_time_interval is 0");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 85: range 00000000179B44A6-00000000179B4713
void __cdecl PlayerOfflineOpComp::addSaveTimer(PlayerOfflineOpComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  PlayerUnixTimer *p_timer; // rdi
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->timer_interval_);
  }
  if ( this->timer_interval_ )
  {
    if ( common::tools::MiTimer::isActive(&this->timer_) )
      common::tools::MiTimer::cancel(&this->timer_);
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_op_comp.cpp",
      "addSaveTimer",
      96);
    v1 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v7, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    p_timer = &this->timer_;
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->timer_interval_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_timer = (PlayerUnixTimer *)&this->timer_interval_;
      __asan_report_load4(&this->timer_interval_);
    }
    if ( PlayerUnixTimer::startS(
           p_timer,
           this->timer_interval_,
           0,
           "./src/player/player_offline_op_comp.cpp",
           "addSaveTimer",
           97) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_op_comp.cpp",
        "addSaveTimer",
        99);
      v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v7, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v4,
        (const char (*)[40])" PlayerOfflineOpComp timer startS fails");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
};

// Line 104: range 00000000179B4714-00000000179B47D1
void __cdecl PlayerOfflineOpComp::onTimer(PlayerOfflineOpComp *const this, uint64_t now_ms)
{
  uint32_t last_save_time; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  last_save_time = Player::getLastSaveTime(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->need_save_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_save_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->need_save_time_);
  }
  if ( last_save_time <= this->need_save_time_ )
  {
    PlayerOfflineOpComp::addSaveTimer(this);
  }
  else
  {
    this->need_save_time_ = last_save_time;
    PlayerOfflineOpComp::onPlayerSaveSuccess(this);
  }
};

// Line 121: range 00000000179B47D2-00000000179B4B43
void __cdecl PlayerOfflineOpComp::onPlayerSaveSuccess(PlayerOfflineOpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::const_iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  uint32_t *v8; // rdx
  std::allocator<unsigned int> __a; // [rsp+13h] [rbp-EDh] BYREF
  uint32_t type; // [rsp+14h] [rbp-ECh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 11 op_type:135 64 24 15 op_type_vec:132";
  *(_QWORD *)(v1 + 16) = PlayerOfflineOpComp::onPlayerSaveSuccess;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "onPlayerSaveSuccess",
    125);
  v4 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v14, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 48) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( std::unordered_set<unsigned int>::size(&this->type_dirty_set_) )
  {
    std::allocator<unsigned int>::allocator(&__a);
    M_cur = std::unordered_set<unsigned int>::cend(&this->type_dirty_set_)._M_cur;
    v6._M_cur = std::unordered_set<unsigned int>::cbegin(&this->type_dirty_set_)._M_cur;
    std::vector<unsigned int>::vector<std::__detail::_Node_const_iterator<unsigned int,true,false>,void>(
      (std::vector<unsigned int> *const)(v1 + 64),
      v6,
      (std::__detail::_Node_const_iterator<unsigned int,true,false>)M_cur,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    __for_range = (std::vector<unsigned int> *)(v1 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      type = *v8;
      *(_DWORD *)(v1 + 48) = type;
      PlayerOfflineOpComp::removeOfflineOpRedisData(this, (const proto::OfflineOpType *)(v1 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  }
  if ( v15 == (char *)v1 )
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

// Line 141: range 00000000179B4B44-00000000179B4EE8
void __fastcall PlayerOfflineOpComp::sendOfflineOp(
        PlayerOfflineOpComp *const this,
        uint32_t uid,
        proto::OfflineOpType op_type,
        proto::OfflineOpData *offline_op_data)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  google::protobuf::uint32 Now; // eax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  proto::OfflineOpData *op_data; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-F0h] BYREF
  std::string output; // [rsp+50h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 4 7 uid:140 48 40 7 req:150";
  *(_QWORD *)(v4 + 16) = PlayerOfflineOpComp::sendOfflineOp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 32) = uid;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "sendOfflineOp",
    143);
  v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v17, (const char (*)[6])"uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" target uid: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" data: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&output, offline_op_data);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &output);
  std::string::~string(&output);
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( proto::OfflineOpData::max_length(offline_op_data) )
  {
    proto::SendOfflineOpReq::SendOfflineOpReq((proto::SendOfflineOpReq *const)(v4 + 48));
    proto::SendOfflineOpReq::set_uid((proto::SendOfflineOpReq *const)(v4 + 48), *(_DWORD *)(v4 + 32));
    Now = common::tools::TimeUtils::getNow();
    proto::SendOfflineOpReq::set_time((proto::SendOfflineOpReq *const)(v4 + 48), Now);
    proto::SendOfflineOpReq::set_op_type((proto::SendOfflineOpReq *const)(v4 + 48), op_type);
    op_data = proto::SendOfflineOpReq::mutable_op_data((proto::SendOfflineOpReq *const)(v4 + 48));
    proto::OfflineOpData::CopyFrom(op_data, offline_op_data);
    PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::SendOfflineOpReq>(
      this,
      (const proto::SendOfflineOpReq *)(v4 + 48));
    proto::SendOfflineOpReq::~SendOfflineOpReq((proto::SendOfflineOpReq *const)(v4 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&output,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "sendOfflineOp",
      147);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)&output,
      (const char (*)[23])off_26269500);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&output);
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 160: range 00000000179B4EEA-00000000179B50BA
void __cdecl PlayerOfflineOpComp::registerSendRspCallBack(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type,
        PlayerOfflineOpComp::SendCallBackFunc *p_func)
{
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>> *p_send_cb_func_map; // rcx
  common::milog::MiLogStream *v4; // rbx
  const std::string *v5; // rax
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>> *v6; // rcx
  std::function<void(const proto::SendOfflineOpRsp&)> *v7; // rdx
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>>::key_type __x; // [rsp+2Ch] [rbp-44h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false> v10; // [rsp+30h] [rbp-40h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false> __y; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  __y._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::end(&this->send_cb_func_map_)._M_cur;
  p_send_cb_func_map = &this->send_cb_func_map_;
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  __x = *op_type;
  v10._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::find(
                 p_send_cb_func_map,
                 &__x)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::function<void ()(proto::SendOfflineOpRsp const&)>>,false>(
         &v10,
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "registerSendRspCallBack",
      163);
    v4 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v12, (const char (*)[13])"repeat type:");
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    v5 = proto::OfflineOpType_Name[abi:cxx11]((proto::OfflineOpType)*op_type);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, v5);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v6 = &this->send_cb_func_map_;
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    __x = *op_type;
    v7 = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::operator[](v6, &__x);
    std::function<void ()(proto::SendOfflineOpRsp const&)>::operator=(v7, p_func);
  }
};

// Line 170: range 00000000179B50BC-00000000179B5294
void __cdecl PlayerOfflineOpComp::registerExecOfflineOp(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type,
        PlayerOfflineOpComp::ExecFunc *p_func)
{
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>> *p_exec_func_map; // rcx
  common::milog::MiLogStream *v4; // rbx
  const std::string *v5; // rax
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>> *v6; // rcx
  std::function<void(const proto::OfflineOpBin&)> *v7; // rdx
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>>::key_type __x; // [rsp+2Ch] [rbp-44h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false> v10; // [rsp+30h] [rbp-40h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false> __y; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  __y._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::end(&this->exec_func_map_)._M_cur;
  p_exec_func_map = &this->exec_func_map_;
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  __x = *op_type;
  v10._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::find(
                 p_exec_func_map,
                 &__x)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::function<void ()(proto::OfflineOpBin const&)>>,false>(
         &v10,
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "registerExecOfflineOp",
      173);
    v4 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v12, (const char (*)[13])"repeat type:");
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    v5 = proto::OfflineOpType_Name[abi:cxx11]((proto::OfflineOpType)*op_type);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, v5);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v6 = &this->exec_func_map_;
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    __x = *op_type;
    v7 = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::operator[](v6, &__x);
    std::function<void ()(proto::OfflineOpBin const&)>::operator=(v7, p_func);
  }
};

// Line 180: range 00000000179B5296-00000000179B544D
void __cdecl PlayerOfflineOpComp::unregisterSendRspCallBack(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type)
{
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>> *p_send_cb_func_map; // rcx
  common::milog::MiLogStream *v3; // rbx
  const std::string *v4; // rax
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>> *v5; // rcx
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false> v7; // [rsp+20h] [rbp-40h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false> __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __y._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::end(&this->send_cb_func_map_)._M_cur;
  p_send_cb_func_map = &this->send_cb_func_map_;
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  __x = *op_type;
  v7._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::find(
                p_send_cb_func_map,
                &__x)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::function<void ()(proto::SendOfflineOpRsp const&)>>,false>(
         &v7,
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "unregisterSendRspCallBack",
      183);
    v3 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v9, (const char (*)[17])off_26269640);
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    v4 = proto::OfflineOpType_Name[abi:cxx11]((proto::OfflineOpType)*op_type);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, v4);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = &this->send_cb_func_map_;
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    __x = *op_type;
    std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::erase(v5, &__x);
  }
};

// Line 190: range 00000000179B544E-00000000179B560D
void __cdecl PlayerOfflineOpComp::unregisterExecOfflineOp(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type)
{
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>> *p_exec_func_map; // rcx
  common::milog::MiLogStream *v3; // rbx
  const std::string *v4; // rax
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>> *v5; // rcx
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false> v7; // [rsp+20h] [rbp-40h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false> __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __y._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::end(&this->exec_func_map_)._M_cur;
  p_exec_func_map = &this->exec_func_map_;
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  __x = *op_type;
  v7._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::find(
                p_exec_func_map,
                &__x)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::function<void ()(proto::OfflineOpBin const&)>>,false>(
         &v7,
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "unregisterExecOfflineOp",
      193);
    v3 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v9, (const char (*)[17])off_26269640);
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    v4 = proto::OfflineOpType_Name[abi:cxx11]((proto::OfflineOpType)*op_type);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, v4);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = &this->exec_func_map_;
    if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(op_type);
    }
    __x = *op_type;
    std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::erase(v5, &__x);
  }
};

// Line 201: range 00000000179B560E-00000000179B579B
__int64 __fastcall PlayerOfflineOpComp::getCurIndex(PlayerOfflineOpComp *const this, uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:200 64 8 8 iter:202";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::getCurIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->cur_index_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::cend(&this->cur_index_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
  if ( v9 == (char *)v2 )
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

// Line 211: range 00000000179B579C-00000000179B58ED
void __fastcall PlayerOfflineOpComp::setDirtyFlag(PlayerOfflineOpComp *const this, uint32_t type, bool flag)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t Now; // edi
  __int64 v7; // rdx
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 type:210";
  *(_QWORD *)(v3 + 16) = PlayerOfflineOpComp::setDirtyFlag;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  if ( flag )
  {
    std::unordered_set<unsigned int>::insert(
      &this->type_dirty_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
    Now = common::tools::TimeUtils::getNow();
    v7 = (*(_BYTE *)(((unsigned __int64)&this->need_save_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_save_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
    {
      Now = (_DWORD)this + 348;
      __asan_report_store4(&this->need_save_time_, (((_BYTE)this + 92) & 7u) + 3, v7);
    }
    this->need_save_time_ = Now;
    PlayerOfflineOpComp::addSaveTimer(this);
  }
  else
  {
    std::unordered_set<unsigned int>::erase(
      &this->type_dirty_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v3 + 32));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 225: range 00000000179B58EE-00000000179B5A22
void __fastcall PlayerOfflineOpComp::setCurIndex(PlayerOfflineOpComp *const this, uint32_t type, uint32_t index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 type:224";
  *(_QWORD *)(v3 + 16) = PlayerOfflineOpComp::setCurIndex;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  v6 = (char *)(v3 + 32);
  v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->cur_index_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(v6) = v9 != 0;
    __asan_report_store4(v7, v6, v7);
  }
  *v8 = index;
  PlayerOfflineOpComp::setDirtyFlag(this, *(_DWORD *)(v3 + 32), 1);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 00000000179B5A24-00000000179B5A51
void __cdecl PlayerOfflineOpComp::getOfflineOpRedisData(PlayerOfflineOpComp *const this)
{
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-4h] BYREF

  op_type = OFFLINE_OP_NONE;
  PlayerOfflineOpComp::getOfflineOpRedisData(this, &op_type, 0);
};

// Line 236: range 00000000179B5A52-00000000179B5CA4
void __fastcall PlayerOfflineOpComp::getOfflineOpRedisData(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type,
        uint32_t index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 index:235 64 32 9 proto:240";
  *(_QWORD *)(v3 + 16) = PlayerOfflineOpComp::getOfflineOpRedisData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = index;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "getOfflineOpRedisData",
    238);
  v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
         (common::milog::MiLogStream *const)(v3 + 64),
         (const char (*)[6])"type:");
  v7 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(v6, op_type);
  v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" index: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  proto::GetOfflineOpReq::GetOfflineOpReq((proto::GetOfflineOpReq *const)(v3 + 64));
  proto::GetOfflineOpReq::set_index((proto::GetOfflineOpReq *const)(v3 + 64), *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  proto::GetOfflineOpReq::set_op_type((proto::GetOfflineOpReq *const)(v3 + 64), *op_type);
  PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::GetOfflineOpReq>(
    this,
    (const proto::GetOfflineOpReq *)(v3 + 64));
  proto::GetOfflineOpReq::~GetOfflineOpReq((proto::GetOfflineOpReq *const)(v3 + 64));
  if ( v10 == (char *)v3 )
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
};

// Line 247: range 00000000179B5CA6-00000000179B6006
void __cdecl PlayerOfflineOpComp::removeOfflineOpRedisData(PlayerOfflineOpComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *index; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-88h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 11 op_type:255";
  *(_QWORD *)(v1 + 16) = PlayerOfflineOpComp::removeOfflineOpRedisData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->cur_index_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->cur_index_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->cur_index_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    __in = *v5;
    type = std::get<0ul,unsigned int const,unsigned int>(&__in);
    index = std::get<1ul,unsigned int const,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    if ( !proto::OfflineOpType_IsValid(*type) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_op_comp.cpp",
        "removeOfflineOpRedisData",
        252);
      v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, type);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      *(_DWORD *)(v1 + 32) = *type;
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index);
      }
      PlayerOfflineOpComp::removeOfflineOpRedisData(this, (const proto::OfflineOpType *)(v1 + 32), *index);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 261: range 00000000179B6008-00000000179B62B5
void __fastcall PlayerOfflineOpComp::removeOfflineOpRedisData(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type,
        uint32_t index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 index:260 64 32 9 proto:263";
  *(_QWORD *)(v3 + 16) = PlayerOfflineOpComp::removeOfflineOpRedisData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = index;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "removeOfflineOpRedisData",
    262);
  v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
         (common::milog::MiLogStream *const)(v3 + 64),
         (const char (*)[6])"type:");
  v7 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(v6, op_type);
  v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" index: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  proto::RemoveOfflineOpReq::RemoveOfflineOpReq((proto::RemoveOfflineOpReq *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  proto::RemoveOfflineOpReq::set_op_type((proto::RemoveOfflineOpReq *const)(v3 + 64), *op_type);
  proto::RemoveOfflineOpReq::set_index((proto::RemoveOfflineOpReq *const)(v3 + 64), *(_DWORD *)(v3 + 48));
  PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::RemoveOfflineOpReq>(
    this,
    (const proto::RemoveOfflineOpReq *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  PlayerOfflineOpComp::setDirtyFlag(this, *op_type, 0);
  proto::RemoveOfflineOpReq::~RemoveOfflineOpReq((proto::RemoveOfflineOpReq *const)(v3 + 64));
  if ( v10 == (char *)v3 )
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
};

// Line 273: range 00000000179B62B6-00000000179B6334
void __cdecl PlayerOfflineOpComp::removeOfflineOpRedisData(
        PlayerOfflineOpComp *const this,
        const proto::OfflineOpType *op_type)
{
  uint32_t index; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)op_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)op_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(op_type);
  }
  index = PlayerOfflineOpComp::getCurIndex(this, *op_type);
  if ( index )
    PlayerOfflineOpComp::removeOfflineOpRedisData(this, op_type, index);
};

// Line 282: range 0000000017A27376-0000000017A27763
void __cdecl PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::GetOfflineOpReq>(
        PlayerOfflineOpComp *const this,
        const proto::GetOfflineOpReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:284";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::GetOfflineOpReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetOfflineOpReq>((const proto::GetOfflineOpReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_op_comp.cpp",
      "sendProtoToOfflineOpService",
      287);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v7, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v8, Uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 0x12u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14 = v13(v11, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_op_comp.cpp",
        "sendProtoToOfflineOpService",
        297);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v17,
              (const char (*)[24])"sendPacket fails, cmd: ");
      common::milog::MiLogStream::operator<<<proto::GetOfflineOpReq_CmdId,(proto::GetOfflineOpReq_CmdId*)0>(
        v15,
        &proto::GetOfflineOpReq::CMD_ID);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 282: range 0000000017A27764-0000000017A27B51
void __cdecl PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::RemoveOfflineOpReq>(
        PlayerOfflineOpComp *const this,
        const proto::RemoveOfflineOpReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:284";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::RemoveOfflineOpReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::RemoveOfflineOpReq>((const proto::RemoveOfflineOpReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_op_comp.cpp",
      "sendProtoToOfflineOpService",
      287);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v7, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v8, Uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 0x12u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14 = v13(v11, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_op_comp.cpp",
        "sendProtoToOfflineOpService",
        297);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v17,
              (const char (*)[24])"sendPacket fails, cmd: ");
      common::milog::MiLogStream::operator<<<proto::RemoveOfflineOpReq_CmdId,(proto::RemoveOfflineOpReq_CmdId*)0>(
        v15,
        &proto::RemoveOfflineOpReq::CMD_ID);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 282: range 0000000017A26B7E-0000000017A26F6B
void __cdecl PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::SendOfflineOpReq>(
        PlayerOfflineOpComp *const this,
        const proto::SendOfflineOpReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:284";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::sendProtoToOfflineOpService<proto::SendOfflineOpReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::SendOfflineOpReq>((const proto::SendOfflineOpReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_op_comp.cpp",
      "sendProtoToOfflineOpService",
      287);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v7, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v8, Uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 0x12u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14 = v13(v11, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_op_comp.cpp",
        "sendProtoToOfflineOpService",
        297);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v17,
              (const char (*)[24])"sendPacket fails, cmd: ");
      common::milog::MiLogStream::operator<<<proto::SendOfflineOpReq_CmdId,(proto::SendOfflineOpReq_CmdId*)0>(
        v15,
        &proto::SendOfflineOpReq::CMD_ID);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 302: range 00000000179B6336-00000000179B65F2
void __cdecl PlayerOfflineOpComp::onSendOfflineOpRsp(
        PlayerOfflineOpComp *const this,
        const proto::SendOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r13
  std::function<void(const proto::SendOfflineOpRsp&)> *p_second; // rdx
  std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>>::key_type __x; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v12[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:306";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::onSendOfflineOpRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "onSendOfflineOpRsp",
    304);
  v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v10, (const char (*)[6])"rsp: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &rsp_0->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  __x = proto::SendOfflineOpRsp::op_type(rsp_0);
  *(std::unordered_map<unsigned int,std::function<void(const proto::SendOfflineOpRsp&)>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::find(&this->send_cb_func_map_, &__x);
  __y._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::SendOfflineOpRsp const&)>>::cend(&this->send_cb_func_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::function<void ()(proto::SendOfflineOpRsp const&)>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_op_comp.cpp",
      "onSendOfflineOpRsp",
      309);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[45])off_262698E0);
    __x = proto::SendOfflineOpRsp::op_type(rsp_0);
    common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
      v6,
      (const proto::OfflineOpType *)&__x);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  }
  else
  {
    p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::function<void ()(proto::SendOfflineOpRsp const&)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::function<void(const proto::SendOfflineOpRsp&)> >,false,false> *const)(v2 + 32))->second;
    std::function<void ()(proto::SendOfflineOpRsp const&)>::operator()(p_second, rsp_0);
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 317: range 00000000179B65F4-00000000179B68E6
void __fastcall PlayerOfflineOpComp::execOfflineOp(
        PlayerOfflineOpComp *const this,
        proto::OfflineOpType op_type,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false,false>::pointer v10; // rax
  std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>>::key_type __x; // [rsp+24h] [rbp-DCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false> __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 op_type:316 64 8 8 iter:321";
  *(_QWORD *)(v3 + 16) = PlayerOfflineOpComp::execOfflineOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = op_type;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "execOfflineOp",
    319);
  v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v14, (const char (*)[10])"op_type: ");
  v7 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
         v6,
         (const proto::OfflineOpType *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" bin: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &bin->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v14);
  __x = *(_DWORD *)(v3 + 48);
  *(std::unordered_map<unsigned int,std::function<void(const proto::OfflineOpBin&)>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::find(&this->exec_func_map_, &__x);
  __y._M_cur = std::unordered_map<unsigned int,std::function<void ()(proto::OfflineOpBin const&)>>::cend(&this->exec_func_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::function<void ()(proto::OfflineOpBin const&)>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_op_comp.cpp",
      "execOfflineOp",
      325);
    v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[45])off_262698E0);
    common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
      v9,
      (const proto::OfflineOpType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::function<void ()(proto::OfflineOpBin const&)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::function<void(const proto::OfflineOpBin&)> >,false,false> *const)(v3 + 64));
    std::function<void ()(proto::OfflineOpBin const&)>::operator()(&v10->second, bin);
  }
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
};

// Line 333: range 00000000179B68E8-00000000179B7006
void __cdecl PlayerOfflineOpComp::onGetOfflineOpRsp(
        PlayerOfflineOpComp *const this,
        const proto::GetOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int v6; // eax
  std::vector<proto::OfflineOpRedisData>::reference v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  const proto::OfflineOpBin *v19; // rdx
  unsigned int v20; // [rsp+14h] [rbp-14Ch] BYREF
  proto::OfflineOpType op_type; // [rsp+18h] [rbp-148h]
  uint32_t index; // [rsp+1Ch] [rbp-144h]
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+30h] [rbp-130h]
  std::vector<proto::OfflineOpRedisData> *__for_range_0; // [rsp+38h] [rbp-128h]
  const proto::OfflineOpRedisData *redis_data; // [rsp+40h] [rbp-120h]
  const std::string *bin_str; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-F0h] BYREF
  std::string val; // [rsp+90h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 cur_index:356 64 24 12 data_vec:341";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::onGetOfflineOpRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "onGetOfflineOpRsp",
    335);
  v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])"rsp: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &rsp_0->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( proto::GetOfflineOpRsp::bin_str_list_size(rsp_0) )
  {
    std::vector<proto::OfflineOpRedisData>::vector((std::vector<proto::OfflineOpRedisData> *const)(v2 + 64));
    v6 = proto::GetOfflineOpRsp::bin_str_list_size(rsp_0);
    std::vector<proto::OfflineOpRedisData>::reserve((std::vector<proto::OfflineOpRedisData> *const)(v2 + 64), v6);
    __for_range = proto::GetOfflineOpRsp::bin_str_list[abi:cxx11](rsp_0);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      bin_str = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      v7 = std::vector<proto::OfflineOpRedisData>::emplace_back<>((std::vector<proto::OfflineOpRedisData> *const)(v2 + 64));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v7, bin_str) != 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_offline_op_comp.cpp",
          "onGetOfflineOpRsp",
          347);
        v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[23])"ParseFromString fail. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        std::vector<proto::OfflineOpRedisData>::pop_back((std::vector<proto::OfflineOpRedisData> *const)(v2 + 64));
      }
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<proto::OfflineOpRedisData> *)(v2 + 64);
    __for_begin.it_ = (void *const *)std::vector<proto::OfflineOpRedisData>::begin((std::vector<proto::OfflineOpRedisData> *const)(v2 + 64))._M_current;
    __for_end.it_ = (void *const *)std::vector<proto::OfflineOpRedisData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<proto::OfflineOpRedisData *,std::vector<proto::OfflineOpRedisData>>(
              (const __gnu_cxx::__normal_iterator<proto::OfflineOpRedisData*,std::vector<proto::OfflineOpRedisData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<proto::OfflineOpRedisData*,std::vector<proto::OfflineOpRedisData> > *)&__for_end) )
    {
      redis_data = __gnu_cxx::__normal_iterator<proto::OfflineOpRedisData *,std::vector<proto::OfflineOpRedisData>>::operator*((const __gnu_cxx::__normal_iterator<proto::OfflineOpRedisData*,std::vector<proto::OfflineOpRedisData> > *const)&__for_begin);
      op_type = proto::OfflineOpRedisData::op_type(redis_data);
      index = proto::OfflineOpRedisData::index(redis_data);
      *(_DWORD *)(v2 + 48) = PlayerOfflineOpComp::getCurIndex(this, op_type);
      if ( index > *(_DWORD *)(v2 + 48) )
      {
        if ( index != *(_DWORD *)(v2 + 48) + 1 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_op_comp.cpp",
            "onGetOfflineOpRsp",
            364);
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v30, (const char (*)[9])"index :(");
          v20 = proto::OfflineOpRedisData::index(redis_data);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v20);
          v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v15,
                  (const char (*)[25])") skip some number cur:(");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])") ");
          google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &redis_data->google::protobuf::Message);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        v19 = proto::OfflineOpRedisData::op_bin(redis_data);
        PlayerOfflineOpComp::execOfflineOp(this, op_type, v19);
        PlayerOfflineOpComp::setCurIndex(this, op_type, index);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_op_comp.cpp",
          "onGetOfflineOpRsp",
          359);
        v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v29, (const char (*)[9])"index :(");
        v20 = proto::OfflineOpRedisData::index(redis_data);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v20);
        v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v10,
                (const char (*)[24])") not larger than cur:(");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v12, (const char (*)[3])") ");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &redis_data->google::protobuf::Message);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      __gnu_cxx::__normal_iterator<proto::OfflineOpRedisData *,std::vector<proto::OfflineOpRedisData>>::operator++((__gnu_cxx::__normal_iterator<proto::OfflineOpRedisData*,std::vector<proto::OfflineOpRedisData> > *const)&__for_begin);
    }
    PlayerOfflineOpComp::addSaveTimer(this);
    std::vector<proto::OfflineOpRedisData>::~vector((std::vector<proto::OfflineOpRedisData> *const)(v2 + 64));
  }
  if ( v32 == (char *)v2 )
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

// Line 373: range 00000000179B7008-00000000179B7140
void __cdecl PlayerOfflineOpComp::onRemoveOfflineOpRsp(
        PlayerOfflineOpComp *const this,
        const proto::RemoveOfflineOpRsp *rsp_0)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  uint32_t v7; // ecx
  int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::OfflineOpType v9; // [rsp+18h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "onRemoveOfflineOpRsp",
    374);
  v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v11, (const char (*)[9])"retcode:");
  val = proto::RemoveOfflineOpRsp::retcode(rsp_0);
  v3 = common::milog::MiLogStream::operator<<<int,(int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v3, (const char (*)[7])" type:");
  v9 = proto::RemoveOfflineOpRsp::op_type(rsp_0);
  v5 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(v4, &v9);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" index:");
  v10 = proto::RemoveOfflineOpRsp::index(rsp_0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &v10);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( proto::RemoveOfflineOpRsp::retcode(rsp_0) )
  {
    v7 = proto::RemoveOfflineOpRsp::op_type(rsp_0);
    PlayerOfflineOpComp::setDirtyFlag(this, v7, 1);
  }
};

// Line 383: range 00000000179B7142-00000000179B7421
void __cdecl PlayerOfflineOpComp::onNewOfflineOpNotify(
        PlayerOfflineOpComp *const this,
        const proto::NewOfflineOpNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 op_type:384 64 4 9 index:385";
  *(_QWORD *)(v2 + 16) = PlayerOfflineOpComp::onNewOfflineOpNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = proto::NewOfflineOpNotify::op_type(notify);
  *(_DWORD *)(v2 + 64) = proto::NewOfflineOpNotify::index(notify);
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "onNewOfflineOpNotify",
    387);
  v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v14, (const char (*)[6])"type:");
  v6 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
         v5,
         (const proto::OfflineOpType *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( (unsigned int)PlayerOfflineOpComp::getCurIndex(this, *(_DWORD *)(v2 + 48)) <= *(_DWORD *)(v2 + 64) )
  {
    PlayerOfflineOpComp::getOfflineOpRedisData(this, (const proto::OfflineOpType *)(v2 + 48), *(_DWORD *)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_op_comp.cpp",
      "onNewOfflineOpNotify",
      390);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v14,
           (const char (*)[35])"index < getCurIndex(op_type) type:");
    v9 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
           v8,
           (const proto::OfflineOpType *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" index:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" curIndex:");
    val = PlayerOfflineOpComp::getCurIndex(this, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  if ( v15 == (char *)v2 )
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

// Line 397: range 00000000179B7422-00000000179B74E4
void __cdecl PlayerOfflineOpComp::onTestSendOfflineOpRsp(
        PlayerOfflineOpComp *const this,
        const proto::SendOfflineOpRsp *rsp_0)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_op_comp.cpp",
    "onTestSendOfflineOpRsp",
    398);
  v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v3,
         (const char (*)[30])"OFFLINE_OP_TEST callback ret:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &rsp_0->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 402: range 00000000179B74E6-00000000179B76A0
void __cdecl PlayerOfflineOpComp::onTestOfflineOpExec(PlayerOfflineOpComp *const this, const proto::OfflineOpBin *bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rbx
  proto::OfflineOpBin::DetailCase val; // [rsp+1Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-50h] BYREF
  std::string output; // [rsp+40h] [rbp-30h] BYREF

  if ( proto::OfflineOpBin::detail_case(bin) == kTestOp )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_op_comp.cpp",
      "onTestOfflineOpExec",
      408);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"EXEC OFFLINE_OP_TEST ");
    google::protobuf::Message::DebugString[abi:cxx11](&output, &bin->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &output);
    std::string::~string(&output);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_op_comp.cpp",
      "onTestOfflineOpExec",
      405);
    v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v7, (const char (*)[20])"detail case error :");
    val = proto::OfflineOpBin::detail_case(bin);
    v3 = common::milog::MiLogStream::operator<<<proto::OfflineOpBin::DetailCase,(proto::OfflineOpBin::DetailCase*)0>(
           v2,
           &val);
    v4 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])" ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &bin->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &output);
    std::string::~string(&output);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 412: range 00000000179B76A2-00000000179B788F
void __cdecl PlayerOfflineOpComp::onSendTestOfflineOp(
        PlayerOfflineOpComp *const this,
        uint32_t uid,
        const std::string *msg,
        uint32_t max_length)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  proto::OfflineOpDefaultContext *v7; // rax
  proto::OfflineOpBin *offline_op_bin; // [rsp+28h] [rbp-B8h]
  proto::OfflineOpTestOp *test_op; // [rsp+30h] [rbp-B0h]
  proto::OfflineOpContext *offline_op_context; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 40 19 offline_op_data:413";
  *(_QWORD *)(v4 + 16) = PlayerOfflineOpComp::onSendTestOfflineOp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  proto::OfflineOpData::OfflineOpData((proto::OfflineOpData *const)(v4 + 48));
  offline_op_bin = proto::OfflineOpData::mutable_bin((proto::OfflineOpData *const)(v4 + 48));
  test_op = proto::OfflineOpBin::mutable_test_op(offline_op_bin);
  proto::OfflineOpTestOp::set_msg(test_op, msg);
  offline_op_context = proto::OfflineOpData::mutable_context((proto::OfflineOpData *const)(v4 + 48));
  v7 = proto::OfflineOpContext::mutable_default_context(offline_op_context);
  proto::OfflineOpDefaultContext::set_tag(v7, uid);
  proto::OfflineOpData::set_max_length((proto::OfflineOpData *const)(v4 + 48), max_length);
  PlayerOfflineOpComp::sendOfflineOp(this, uid, OFFLINE_OP_TEST, (proto::OfflineOpData *)(v4 + 48));
  proto::OfflineOpData::~OfflineOpData((proto::OfflineOpData *const)(v4 + 48));
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
