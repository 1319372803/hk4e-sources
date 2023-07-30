// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/robot/robot.cpp

// Line 29: range 0000000000471DD0-0000000000471E29
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Robot *robot)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  const User *user; // [rsp+18h] [rbp-8h]

  user = Robot::getUser(robot);
  v2 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(stream, (const char (*)[6])"[uid:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &user->uid);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])"]");
  return stream;
};

// Line 36: range 0000000000471E2A-00000000004721D4
int32_t __cdecl Robot::init(
        Robot *const this,
        RobotConf *conf,
        User *user,
        const std::string *lua_file,
        uint32_t round)
{
  char v6; // al
  bool is_open_log; // cl
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  if ( this->status_ )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "init",
      39);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v13, (const char (*)[22])"robot has been inited");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    if ( std::string::empty(&conf->host) )
      goto LABEL_9;
    if ( *(_BYTE *)(((unsigned __int64)&conf->port >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&conf->port >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(&conf->port);
    }
    if ( conf->port )
      v6 = 0;
    else
LABEL_9:
      v6 = 1;
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "init",
        46);
      common::milog::MiLogStream::operator()(&v13, "error init para.");
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    else
    {
      RobotConf::operator=(&this->conf_, conf);
      User::operator=(&this->user_, user);
      if ( *(_BYTE *)(((unsigned __int64)&conf->is_open_log >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)conf + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&conf->is_open_log >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&conf->is_open_log);
      }
      is_open_log = conf->is_open_log;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_log_open_);
      }
      this->is_log_open_ = is_open_log;
      if ( *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->round_);
      }
      this->round_ = round;
      Robot::registerScriptFunc(&this->script_);
      if ( LuaScript::loadRobotLuaFile(&this->script_, lua_file) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/robot/robot.cpp",
          "init",
          59);
        v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v13,
               (const char (*)[25])"loadLuaFile fails, path:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, lua_file);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return 1;
      }
      else
      {
        v9 = *(unsigned __int8 *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
        if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
          __asan_report_store4(&this->status_);
        this->status_ = STATUS_INITED;
        return 0;
      }
    }
  }
};

// Line 67: range 00000000004721D6-000000000047292F
void __cdecl Robot::onRecv(Robot *const this, char *data, uint32_t len, uint32_t flags, uint8_t channel)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::minet::Packet *v8; // rcx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::minet::PacketPtr v10; // rdi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  bool v23; // al
  ReporterReqRspHelper *v24; // rax
  common::minet::PacketSenderCoroExec *v25; // r14
  unsigned __int64 v26; // rdx
  common::milog::MiLogStream *v27; // r14
  common::minet::Coroutine *v28; // rax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  int32_t ret; // [rsp+28h] [rbp-108h]
  int32_t ret_0; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+60h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 2 9 cmd_id:77 64 16 13 packet_ptr:69 96 32 13 packet_str:76";
  *(_QWORD *)(v5 + 16) = Robot::onRecv;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234688015;
  v7[536862722] = -219021312;
  v7[536862724] = -202116109;
  Robot::encryptPacketData(this, data, len);
  common::minet::PacketUtils::createPacket(v5 + 64, data, len);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v5 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "onRecv",
      72);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v35, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->user_);
    }
    common::minet::Packet::setUserId(v8, this->user_.uid);
    std::string::basic_string((std::string *const)(v5 + 96));
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    *(_WORD *)(v5 + 48) = common::minet::Packet::getCmdId(v9);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v5 + 64));
    v10._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v5 + 96);
    v10._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
    ret = ProtoUtils::convertPacketToString(v10, (std::string *)(v5 + 96));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_log_open_);
    }
    if ( this->is_log_open_
      && !ret
      && *(_WORD *)(v5 + 48) != 275
      && *(_WORD *)(v5 + 48) != 191
      && *(_WORD *)(v5 + 48) != 245 )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/robot/robot.cpp",
        "onRecv",
        80);
      v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v35, (const char (*)[10])"robot_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->robot_id_);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v12,
              (const char (*)[21])", recv packet from: ");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &this->conf_.host);
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])", rpc id:");
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      val = common::minet::Packet::getRpcId(v16);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" cmd: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
              v18,
              (const unsigned __int16 *)(v5 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", content:\n");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    if ( Robot::isRspResumeCoro(this)
      && ProtoUtils::getCmdType(*(unsigned __int16 *)(v5 + 48)) == PROTO_CMD_RSP
      && Robot::isAwaitingCmdId(this, *(_WORD *)(v5 + 48)) )
    {
      v23 = *(_WORD *)(v5 + 48) == 135
         && (v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64)),
             !common::minet::Packet::getRpcId(v22))
         || *(_WORD *)(v5 + 48) == 159;
      if ( !v23 && std::operator!=<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
      {
        if ( *(char *)(((unsigned __int64)&this->conf_.is_use_req_rsp_helper >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->conf_.is_use_req_rsp_helper);
        if ( this->conf_.is_use_req_rsp_helper )
        {
          v24 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
          ReporterReqRspHelper::recv(v24, *(_WORD *)(v5 + 48));
        }
        v25 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v5 + 64));
        ret_0 = common::minet::PacketSenderCoroExec::onRecvPacket(
                  v25,
                  (common::minet::PacketPtr)__PAIR128__(v26, &packet_ptr));
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        if ( ret_0 )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/robot/robot.cpp",
            "onRecv",
            95);
          v27 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v35,
                  (const char (*)[26])"onRecvPacket error state:");
          v28 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
          val = common::minet::Coroutine::getState(v28);
          common::milog::MiLogStream::operator<<<common::minet::Coroutine::State,(common::minet::Coroutine::State*)0>(
            v27,
            (const common::minet::Coroutine::State *)&val);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
      }
    }
    else
    {
      Robot::processPacket(this, (common::minet::PacketPtr *)(v5 + 64));
      Robot::processPacketOnce(this, (common::minet::PacketPtr *)(v5 + 64));
    }
    std::string::~string((std::string *const)(v5 + 96));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 64));
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 107: range 0000000000472930-00000000004730F0
int32_t __cdecl Robot::processPacket(Robot *const this, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::string *v6; // rax
  common::minet::Packet *v7; // rax
  int32_t v8; // r14d
  std::__shared_ptr_access<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  ReporterNZeroHelper *v13; // rax
  luabind::adl::object *v14; // rax
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> *packet_ptra; // [rsp+0h] [rbp-200h]
  Robot *thisa; // [rsp+8h] [rbp-1F8h]
  std::allocator<char> v18; // [rsp+12h] [rbp-1EEh] BYREF
  std::allocator<char> __a; // [rsp+13h] [rbp-1EDh] BYREF
  std::unordered_map<unsigned int,luabind::adl::object>::key_type __k; // [rsp+14h] [rbp-1ECh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object> >,false> __y; // [rsp+18h] [rbp-1E8h] BYREF
  RobotRecvFunc *func; // [rsp+20h] [rbp-1E0h]
  std::pair<std::string,luabind::adl::object> *__in; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<0,std::pair<std::string,luabind::adl::object> >::type *cmd_name; // [rsp+30h] [rbp-1D0h]
  std::tuple_element<1,std::pair<std::string,luabind::adl::object> >::type *lua_func; // [rsp+38h] [rbp-1C8h]
  luabind::adl::call_proxy<luabind::adl::object,boost::tuples::tuple<const luabind::adl::object*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > v26; // [rsp+40h] [rbp-1C0h] BYREF
  std::string table_name; // [rsp+50h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-190h] BYREF
  char v29[368]; // [rsp+90h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 2 10 cmd_id:108 64 8 6 it:132 96 8 7 it2:139 128 16 11 msg_ptr:111 160 16 15 proto_table:12"
                        "3 192 32 12 cmd_name:109 256 32 13 proto_str:117";
  *(_QWORD *)(v2 + 16) = Robot::processPacket;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_WORD *)(v2 + 48) = common::minet::Packet::getCmdId(v5);
  v6 = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v2 + 48));
  std::operator+<char>((std::string *)(v2 + 192), "proto.", v6);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  common::minet::Packet::getConstMessage(
    (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(v2 + 128),
    v7);
  if ( std::operator==<google::protobuf::Message const>(
         (const std::shared_ptr<const google::protobuf::Message> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "processPacket",
      114);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v28,
      (const char (*)[43])"packet_ptr->getConstMessage return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v8 = -1;
  }
  else
  {
    std::string::basic_string((std::string *const)(v2 + 256));
    v9 = std::__shared_ptr_access<google::protobuf::Message const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( !google::protobuf::MessageLite::SerializeToString(v9, (std::string *)(v2 + 256)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "processPacket",
        120);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v28,
              (const char (*)[34])"SerializeToString fails, cmd_id: ");
      common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
        v10,
        (const unsigned __int16 *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v8 = -1;
    }
    else
    {
      luabind::adl::object::object((luabind::adl::object *const)(v2 + 160));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "decode", &__a);
      std::allocator<char>::allocator(&v18);
      std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v18);
      v11 = LuaScript::execTableFunc<luabind::adl::object,std::string &,std::string &>(
              &this->script_,
              &table_name,
              (const std::string *)&v28,
              (luabind::adl::object *)(v2 + 160),
              (std::string *)(v2 + 192),
              (std::string *)(v2 + 256),
              (std::string *)packet_ptr,
              (std::string *)this) != 0;
      std::string::~string(&table_name);
      std::allocator<char>::~allocator(&v18);
      std::string::~string((std::string *const)&v28);
      std::allocator<char>::~allocator(&__a);
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/robot/robot.cpp",
          "processPacket",
          126);
        v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v28,
                (const char (*)[42])"executeFunc proto.decode fails, cmd_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v2 + 192));
        common::milog::MiLogStream::~MiLogStream(&v28);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->conf_.is_use_not_zero_helper >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)thisa - 7) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->conf_.is_use_not_zero_helper >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&thisa->conf_.is_use_not_zero_helper);
        }
        if ( thisa->conf_.is_use_not_zero_helper )
        {
          v13 = MultiThreadSingleton<ReporterNZeroHelper>::instance();
          ReporterNZeroHelper::recv(v13, *(_WORD *)(v2 + 48), (const luabind::adl::object *)(v2 + 160));
        }
        __k = *(unsigned __int16 *)(v2 + 48);
        v14 = std::unordered_map<unsigned int,luabind::adl::object>::operator[](&thisa->lua_recv_cmd_id_map_, &__k);
        luabind::adl::object::operator=(v14, (const luabind::adl::object *)(v2 + 160));
        __k = *(unsigned __int16 *)(v2 + 48);
        *(std::unordered_map<unsigned int,std::pair<std::string,luabind::adl::object>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<std::string,luabind::adl::object>>::find(&thisa->lua_recv_func_map_, &__k);
        __y._M_cur = std::unordered_map<unsigned int,std::pair<std::string,luabind::adl::object>>::end(&thisa->lua_recv_func_map_)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object> >,false> *)(v2 + 64),
               &__y) )
        {
          __in = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object> >,false,false> *const)(v2 + 64))->second;
          cmd_name = std::get<0ul,std::string,luabind::adl::object>(__in);
          lua_func = std::get<1ul,std::string,luabind::adl::object>(__in);
          luabind::adl::object_interface<luabind::adl::object>::operator()<luabind::adl::object>(
            (luabind::adl::object_interface<luabind::adl::object> *const)&v26,
            lua_func);
          luabind::adl::call_proxy<luabind::adl::object,boost::tuples::tuple<luabind::adl::object const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~call_proxy(&v26);
          v8 = 0;
        }
        else
        {
          *(std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::iterator *)(v2 + 96) = std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::find(&g_robot_recv_map, (const std::unordered_map<short unsigned int,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)>>::key_type *)(v2 + 48));
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object> >,false>::__node_type *)std::unordered_map<unsigned short,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>::end(&g_robot_recv_map)._M_cur;
          if ( std::__detail::operator!=<std::pair<unsigned short const,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<short unsigned int const,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> >,false> *)(v2 + 96),
                 (const std::__detail::_Node_iterator_base<std::pair<short unsigned int const,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> >,false> *)&__y) )
          {
            func = &std::__detail::_Node_iterator<std::pair<unsigned short const,std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<short unsigned int const,std::function<void(Robot&,std::shared_ptr<common::minet::Packet>&)> >,false,false> *const)(v2 + 96))->second;
            std::function<void ()(Robot &,std::shared_ptr<common::minet::Packet> &)>::operator()(
              func,
              thisa,
              packet_ptra);
          }
          v8 = 0;
        }
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v2 + 160));
    }
    std::string::~string((std::string *const)(v2 + 256));
  }
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 128));
  std::string::~string((std::string *const)(v2 + 192));
  result = v8;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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

// Line 149: range 00000000004730F2-00000000004736FB
int32_t __cdecl Robot::processPacketOnce(Robot *const this, common::minet::PacketPtr *packet_ptr)
{
  int32_t v2; // r14d
  std::string *v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::minet::Packet *v7; // rax
  _BOOL4 v8; // r15d
  std::__shared_ptr_access<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  bool v12; // r15
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  std::string *v15; // [rsp+0h] [rbp-180h]
  std::allocator<char> v16; // [rsp+2Ah] [rbp-156h] BYREF
  std::allocator<char> __a; // [rsp+2Bh] [rbp-155h] BYREF
  std::unordered_map<unsigned int,std::pair<std::string,std::string >>::key_type __x; // [rsp+2Ch] [rbp-154h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<std::string,std::string > >,false> __y; // [rsp+30h] [rbp-150h] BYREF
  std::pair<std::string,std::string > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<std::string,std::string > >::type *cmd_name; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<std::string,std::string > >::type *lua_func; // [rsp+48h] [rbp-138h]
  std::string table_name; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-110h] BYREF
  std::string v25[7]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = v25;
  v15 = v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = (std::string *)v4;
  }
  v3->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v3->_M_string_length = (std::string::size_type)"4 48 2 10 cmd_id:150 64 8 6 it:151 96 16 11 msg_ptr:154 128 32 13 proto_str:160";
  v3->_anon_0._M_allocated_capacity = (std::string::size_type)Robot::processPacketOnce;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_WORD *)v3[1]._anon_0._M_local_buf = common::minet::Packet::getCmdId(v6);
  __x = LOWORD(v3[1]._anon_0._M_allocated_capacity);
  v3[2]._M_dataplus._M_p = (std::string::pointer)std::unordered_map<unsigned int,std::pair<std::string,std::string>>::find(
                                                   &this->lua_recv_map_,
                                                   &__x)._M_cur;
  __y._M_cur = std::unordered_map<unsigned int,std::pair<std::string,std::string>>::end(&this->lua_recv_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::pair<std::string,std::string>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<std::string,std::string > >,false> *)&v3[2],
          &__y) )
    goto LABEL_14;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  common::minet::Packet::getConstMessage(
    (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)&v3[3],
    v7);
  if ( std::operator==<google::protobuf::Message const>(
         (const std::shared_ptr<const google::protobuf::Message> *)&v3[3],
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "processPacketOnce",
      157);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v24,
      (const char (*)[43])"packet_ptr->getConstMessage return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v2 = -1;
    v8 = 0;
  }
  else
  {
    std::string::basic_string(v3 + 4);
    v9 = std::__shared_ptr_access<google::protobuf::Message const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[3]);
    if ( !google::protobuf::MessageLite::SerializeToString(v9, v3 + 4) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "processPacketOnce",
        163);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v24,
              (const char (*)[34])"SerializeToString fails, cmd_id: ");
      common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
        v10,
        (const unsigned __int16 *)&v3[1]._anon_0);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = -1;
      v11 = 0;
    }
    else
    {
      __in = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<std::string,std::string>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<std::string,std::string > >,false,false> *const)&v3[2])->second;
      cmd_name = std::get<0ul,std::string,std::string>(__in);
      lua_func = std::get<1ul,std::string,std::string>(__in);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "decode", &__a);
      std::allocator<char>::allocator(&v16);
      std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v16);
      v12 = LuaScript::execTableFunc<luabind::adl::object,std::string &,std::string &>(
              &this->script_,
              &table_name,
              (const std::string *)&v24,
              &this->recv_proto,
              cmd_name,
              v3 + 4,
              v25,
              (std::string *)&this->recv_proto) != 0;
      std::string::~string(&table_name);
      std::allocator<char>::~allocator(&v16);
      std::string::~string((std::string *const)&v24);
      std::allocator<char>::~allocator(&__a);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/robot/robot.cpp",
          "processPacketOnce",
          169);
        v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v24,
                (const char (*)[42])"executeFunc proto.decode fails, cmd_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, cmd_name);
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::unordered_map<unsigned int,std::pair<std::string,std::string>>::erase(
          &this->lua_recv_map_,
          (std::unordered_map<unsigned int,std::pair<std::string,std::string >>::iterator)v3[2]._M_dataplus._M_p);
        v2 = -1;
        v11 = 0;
      }
      else
      {
        Robot::setHasRecv(this, 1u);
        std::unordered_map<unsigned int,std::pair<std::string,std::string>>::erase(
          &this->lua_recv_map_,
          (std::unordered_map<unsigned int,std::pair<std::string,std::string >>::iterator)v3[2]._M_dataplus._M_p);
        v11 = 1;
      }
    }
    std::string::~string(v3 + 4);
    v8 = v11 == 1;
  }
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v3[3]);
  if ( v8 )
LABEL_14:
    v2 = 0;
  result = v2;
  if ( v15 == v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    v3->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 181: range 00000000004736FC-0000000000473D36
int32_t __cdecl Robot::sendNotify(
        Robot *const this,
        const std::string *req_name,
        const luabind::adl::object *req_table)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  bool v8; // r14
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  google::protobuf::Message *v13; // rax
  int32_t result; // eax
  const std::string *v15; // [rsp+0h] [rbp-160h]
  std::allocator<char> v17; // [rsp+2Eh] [rbp-132h] BYREF
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  std::string table_name; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-110h] BYREF
  char v21[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 10 cmd_id:182 64 16 11 msg_ptr:194 96 16 14 packet_ptr:205 128 32 12 req_data:188";
  *(_QWORD *)(v3 + 16) = Robot::sendNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = ProtoUtils::getCmdId(req_name);
  if ( *(_DWORD *)(v3 + 48) )
  {
    std::string::basic_string((std::string *const)(v3 + 128));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "encode", &__a);
    std::allocator<char>::allocator(&v17);
    std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v17);
    v8 = LuaScript::execTableFunc<std::string,std::string const&,luabind::adl::object const&>(
           &this->script_,
           &table_name,
           (const std::string *)&v20,
           (std::string *)(v3 + 128),
           req_name,
           req_table,
           v15,
           req_table) != 0;
    std::string::~string(&table_name);
    std::allocator<char>::~allocator(&v17);
    std::string::~string((std::string *const)&v20);
    std::allocator<char>::~allocator(&__a);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "sendNotify",
        191);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v20,
             (const char (*)[42])"executeFunc proto.encode fails, req_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, req_name);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = -1;
    }
    else
    {
      ProtoUtils::createMessage(v3 + 64, *(_DWORD *)(v3 + 48));
      if ( std::operator==<google::protobuf::Message>(
             (const std::shared_ptr<google::protobuf::Message> *)(v3 + 64),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/robot/robot.cpp",
          "sendNotify",
          197);
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v20,
                (const char (*)[30])"createMessage fials, cmd_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v11, v3 + 128) != 1 )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/robot/robot.cpp",
            "sendNotify",
            202);
          v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v20,
                  (const char (*)[32])"ParseFromString fails, cmd_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v20);
          v7 = -1;
        }
        else
        {
          v13 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          common::minet::PacketUtils::createPacket(v3 + 96, *(_DWORD *)(v3 + 48), v13);
          if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/robot/robot.cpp",
              "sendNotify",
              208);
            common::milog::MiLogStream::operator()(&v20, "createPacket fails");
            common::milog::MiLogStream::~MiLogStream(&v20);
            v7 = -1;
          }
          else
          {
            v7 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v3 + 96));
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
        }
      }
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 64));
    }
    std::string::~string((std::string *const)(v3 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "sendNotify",
      185);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v20,
           (const char (*)[26])"getCmdId fails, req_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, req_name);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  result = v7;
  if ( v21 == (char *)v3 )
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

// Line 216: range 0000000000473D38-00000000004750C1
void __cdecl Robot::sendAndRecv(
        Robot *const this,
        const std::string *req_name,
        const luabind::adl::object *req_table,
        luabind::adl::object *rsp_table,
        int32_t *ret)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rdx
  bool v9; // r14
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  google::protobuf::Message *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  common::minet::Coroutine *v20; // rax
  common::minet::Coroutine::State State; // eax
  __int64 v22; // rax
  common::minet::PacketSenderCoroExec *v23; // r14
  unsigned __int64 v24; // rdx
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::minet::Packet *v34; // rax
  std::__shared_ptr_access<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  bool v37; // r14
  common::milog::MiLogStream *v38; // rax
  ReporterNZeroHelper *v39; // rax
  const std::string *v40; // [rsp+0h] [rbp-250h]
  std::string *v41; // [rsp+0h] [rbp-250h]
  std::string *retb; // [rsp+8h] [rbp-248h]
  int32_t *retc; // [rsp+8h] [rbp-248h]
  std::allocator<char> v47; // [rsp+36h] [rbp-21Ah] BYREF
  std::allocator<char> __a; // [rsp+37h] [rbp-219h] BYREF
  const std::string *rsp_name; // [rsp+38h] [rbp-218h]
  std::string table_name; // [rsp+40h] [rbp-210h] BYREF
  common::milog::MiLogStream v51; // [rsp+60h] [rbp-1F0h] BYREF
  char v52[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v5 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 2 14 rsp_cmd_id:266 64 4 10 cmd_id:217 80 4 12 coro_ret:258 96 16 11 msg_ptr:231 128 16 18"
                        " req_packet_ptr:244 160 16 18 rsp_packet_ptr:259 192 16 15 rsp_msg_ptr:281 224 32 12 req_data:22"
                        "4 288 32 18 proto_rsp_name:280 352 32 12 rsp_data:288";
  *(_QWORD *)(v5 + 16) = Robot::sendAndRecv;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234688015;
  v7[536862722] = -234556924;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -202116109;
  *(_DWORD *)(v5 + 64) = ProtoUtils::getCmdId(req_name);
  if ( *(_DWORD *)(v5 + 64) )
  {
    std::string::basic_string((std::string *const)(v5 + 224));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v51, "encode", &__a);
    std::allocator<char>::allocator(&v47);
    std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v47);
    v9 = LuaScript::execTableFunc<std::string,std::string const&,luabind::adl::object const&>(
           &this->script_,
           &table_name,
           (const std::string *)&v51,
           (std::string *)(v5 + 224),
           req_name,
           req_table,
           v40,
           (const luabind::adl::object *)ret) != 0;
    std::string::~string(&table_name);
    std::allocator<char>::~allocator(&v47);
    std::string::~string((std::string *const)&v51);
    std::allocator<char>::~allocator(&__a);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        stru_DEC03C0.gap0,
        227);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v51,
              (const char (*)[42])"executeFunc proto.encode fails, req_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, req_name);
      common::milog::MiLogStream::~MiLogStream(&v51);
      if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(retb);
      }
      LODWORD(retb->_M_dataplus._M_p) = -1;
    }
    else
    {
      ProtoUtils::createMessage(v5 + 96, *(_DWORD *)(v5 + 64));
      if ( std::operator==<google::protobuf::Message>(
             (const std::shared_ptr<google::protobuf::Message> *)(v5 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/robot/robot.cpp",
          stru_DEC03C0.gap0,
          234);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v51,
                (const char (*)[30])"createMessage fials, cmd_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::~MiLogStream(&v51);
        if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(retb);
        }
        LODWORD(retb->_M_dataplus._M_p) = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v12, v5 + 224) != 1 )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/robot/robot.cpp",
            stru_DEC03C0.gap0,
            240);
          v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v51,
                  (const char (*)[32])"ParseFromString fails, cmd_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
          common::milog::MiLogStream::~MiLogStream(&v51);
          if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(retb);
          }
          LODWORD(retb->_M_dataplus._M_p) = -1;
        }
        else
        {
          v14 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          common::minet::PacketUtils::createPacket(v5 + 128, *(_DWORD *)(v5 + 64), v14);
          if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v5 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/robot/robot.cpp",
              stru_DEC03C0.gap0,
              247);
            v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v51,
                    (const char (*)[34])"req_packet_ptr is null, req_name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, req_name);
            common::milog::MiLogStream::~MiLogStream(&v51);
            if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(retb);
            }
            LODWORD(retb->_M_dataplus._M_p) = -1;
          }
          else if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/robot/robot.cpp",
              stru_DEC03C0.gap0,
              253);
            v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v51,
                    (const char (*)[34])"coro_exec_ptr_ is null, req_name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, req_name);
            common::milog::MiLogStream::~MiLogStream(&v51);
            if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(retb);
            }
            LODWORD(retb->_M_dataplus._M_p) = -1;
          }
          else
          {
            v17 = std::operator<<<std::char_traits<char>>(&std::cout, "cmd:");
            v18 = std::ostream::operator<<(v17, *(unsigned int *)(v5 + 64));
            v19 = std::operator<<<std::char_traits<char>>(v18, ",state:");
            v20 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
            State = common::minet::Coroutine::getState(v20);
            v22 = std::ostream::operator<<(v19, (unsigned int)State);
            std::ostream::operator<<(v22, &std::endl<char,std::char_traits<char>>);
            v23 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)(v5 + 192),
              (const std::shared_ptr<common::minet::Packet> *)(v5 + 128));
            *(_DWORD *)(v5 + 80) = common::minet::PacketSenderCoroExec::sendPacket(
                                     v23,
                                     (common::minet::PacketPtr)__PAIR128__(v24, v5 + 192));
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 192));
            std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
            common::minet::PacketSenderCoroExec::getRspPacketPtr((common::minet::PacketSenderCoroExec *const)(v5 + 160));
            if ( *(_DWORD *)(v5 + 80)
              || std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v5 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/robot/robot.cpp",
                stru_DEC03C0.gap0,
                262);
              v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v51,
                      (const char (*)[29])"sendProto fails, is_timeout:");
              v27 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
              isTimeout = common::minet::TimeoutCoroExec::isTimeout(v27);
              v29 = common::milog::MiLogStream::operator<<(v26, isTimeout);
              v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v29,
                      (const char (*)[12])", coro_ret:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v5 + 80));
              common::milog::MiLogStream::~MiLogStream(&v51);
              if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(retb);
              }
              LODWORD(retb->_M_dataplus._M_p) = -1;
            }
            else
            {
              v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
              *(_WORD *)(v5 + 48) = common::minet::Packet::getCmdId(v31);
              if ( *(_WORD *)(v5 + 48) )
              {
                rsp_name = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v5 + 48));
                if ( std::string::empty(rsp_name) )
                {
                  common::milog::MiLogStream::create(
                    &v51,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/robot/robot.cpp",
                    stru_DEC03C0.gap0,
                    276);
                  v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          &v51,
                          (const char (*)[20])"invalid rsp_cmd_id:");
                  common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                    v33,
                    (const unsigned __int16 *)(v5 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v51);
                  if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(retb);
                  }
                  LODWORD(retb->_M_dataplus._M_p) = -1;
                }
                else
                {
                  std::operator+<char>((std::string *)(v5 + 288), "proto.", rsp_name);
                  v34 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
                  common::minet::Packet::getConstMessage(
                    (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 192),
                    v34);
                  if ( std::operator==<google::protobuf::Message const>(
                         (const std::shared_ptr<const google::protobuf::Message> *)(v5 + 192),
                         0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v51,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/robot/robot.cpp",
                      stru_DEC03C0.gap0,
                      284);
                    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v51,
                      (const char (*)[43])"packet_ptr->getConstMessage return nullptr");
                    common::milog::MiLogStream::~MiLogStream(&v51);
                    if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store4(retb);
                    }
                    LODWORD(retb->_M_dataplus._M_p) = -1;
                  }
                  else
                  {
                    std::string::basic_string((std::string *const)(v5 + 352));
                    v35 = std::__shared_ptr_access<google::protobuf::Message const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                    if ( !google::protobuf::MessageLite::SerializeToString(v35, (std::string *)(v5 + 352)) )
                    {
                      common::milog::MiLogStream::create(
                        &v51,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/robot/robot.cpp",
                        stru_DEC03C0.gap0,
                        291);
                      v36 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                              &v51,
                              (const char (*)[34])"SerializeToString fails, cmd_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v5 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v51);
                      if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3)
                                                                               + 0x7FFF8000) )
                      {
                        __asan_report_store4(retb);
                      }
                      LODWORD(retb->_M_dataplus._M_p) = -1;
                    }
                    else
                    {
                      std::allocator<char>::allocator(&__a);
                      std::string::basic_string<std::allocator<char>>((std::string *const)&v51, "decode", &__a);
                      std::allocator<char>::allocator(&v47);
                      std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v47);
                      v37 = LuaScript::execTableFunc<luabind::adl::object,std::string &,std::string &>(
                              &this->script_,
                              &table_name,
                              (const std::string *)&v51,
                              rsp_table,
                              (std::string *)(v5 + 288),
                              (std::string *)(v5 + 352),
                              v41,
                              retb) != 0;
                      std::string::~string(&table_name);
                      std::allocator<char>::~allocator(&v47);
                      std::string::~string((std::string *const)&v51);
                      std::allocator<char>::~allocator(&__a);
                      if ( v37 )
                      {
                        common::milog::MiLogStream::create(
                          &v51,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/robot/robot.cpp",
                          stru_DEC03C0.gap0,
                          297);
                        v38 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                &v51,
                                (const char (*)[42])"executeFunc proto.decode fails, rsp_name:");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, rsp_name);
                        common::milog::MiLogStream::~MiLogStream(&v51);
                        if ( *(_BYTE *)(((unsigned __int64)retc >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)retc & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retc >> 3)
                                                                                 + 0x7FFF8000) )
                        {
                          __asan_report_store4(retc);
                        }
                        *retc = -1;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)retc >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)retc & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retc >> 3)
                                                                                 + 0x7FFF8000) )
                        {
                          __asan_report_store4(retc);
                        }
                        *retc = 0;
                        if ( *(_BYTE *)(((unsigned __int64)&this->conf_.is_use_not_zero_helper >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)this - 7) & 7) >= *(_BYTE *)(((unsigned __int64)&this->conf_.is_use_not_zero_helper >> 3)
                                                                           + 0x7FFF8000) )
                        {
                          __asan_report_load1(&this->conf_.is_use_not_zero_helper);
                        }
                        if ( this->conf_.is_use_not_zero_helper )
                        {
                          v39 = MultiThreadSingleton<ReporterNZeroHelper>::instance();
                          ReporterNZeroHelper::recv(v39, *(_WORD *)(v5 + 48), rsp_table);
                        }
                      }
                    }
                    std::string::~string((std::string *const)(v5 + 352));
                  }
                  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v5 + 192));
                  std::string::~string((std::string *const)(v5 + 288));
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/robot/robot.cpp",
                  stru_DEC03C0.gap0,
                  269);
                v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        &v51,
                        (const char (*)[20])"invalid rsp_cmd_id:");
                common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                  v32,
                  (const unsigned __int16 *)(v5 + 48));
                common::milog::MiLogStream::~MiLogStream(&v51);
                if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(retb);
                }
                LODWORD(retb->_M_dataplus._M_p) = -1;
              }
            }
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 160));
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 128));
        }
      }
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v5 + 96));
    }
    std::string::~string((std::string *const)(v5 + 224));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      stru_DEC03C0.gap0,
      220);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v51,
           (const char (*)[26])"getCmdId fails, req_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, req_name);
    common::milog::MiLogStream::~MiLogStream(&v51);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = -1;
  }
  if ( v52 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 306: range 00000000004750C2-0000000000475297
void __cdecl Robot::sendReq(
        Robot *const this,
        const std::string *req_name,
        const luabind::adl::object *req_table,
        const std::string *rsp_name,
        luabind::adl::object *rsp_table,
        int32_t *ret)
{
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  uint16_t cmd_id; // [rsp+3Eh] [rbp-32h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  cmd_id = ProtoUtils::getCmdId(rsp_name);
  if ( ProtoUtils::getCmdType(cmd_id) == PROTO_CMD_RSP )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 122) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store2(&this->awaiting_cmd_id_);
    }
    this->awaiting_cmd_id_ = cmd_id;
    Robot::sendAndRecv(this, req_name, req_table, rsp_table, ret);
    if ( *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 122) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store2(&this->awaiting_cmd_id_);
    }
    this->awaiting_cmd_id_ = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "sendReq",
      310);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v13, (const char (*)[10])"rsp_name:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, rsp_name);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" is not response");
    common::milog::MiLogStream::~MiLogStream(&v13);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = -1;
  }
};

// Line 320: range 0000000000475298-0000000000475462
void __cdecl Robot::encryptPacketData(Robot *const this, char *data, uint32_t len)
{
  std::string::reference v3; // rax
  char *v4; // rdx
  char v5; // di
  unsigned __int64 v6; // rcx
  char v7; // si
  unsigned __int64 v8; // rcx
  char v9; // di
  uint32_t i; // [rsp+28h] [rbp-38h]
  uint32_t key_len; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-30h] BYREF

  if ( std::string::empty(&this->user_.secret_key) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/robot/robot.cpp",
      "encryptPacketData",
      323);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v15,
      (const char (*)[26])"user_.secret_key is empty");
    common::milog::MiLogStream::~MiLogStream(&v15);
    Robot::encryptFirstPacketData(this, data, len);
  }
  else
  {
    key_len = std::string::length(&this->user_.secret_key);
    for ( i = 0; i != len; ++i )
    {
      v3 = std::string::operator[](&this->user_.secret_key, i % key_len);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v3);
      }
      v5 = *v4;
      v6 = (unsigned __int64)&data[i];
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      {
        v5 = i + (_BYTE)data;
        __asan_report_load1(&data[i]);
      }
      v7 = *(_BYTE *)v6;
      v8 = (unsigned __int64)&data[i];
      v9 = v7 ^ v5;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        v9 = i + (_BYTE)data;
        __asan_report_store1(&data[i]);
      }
      *(_BYTE *)v8 = v9;
    }
  }
};

// Line 336: range 0000000000475464-00000000004755A7
void __cdecl Robot::encryptFirstPacketData(Robot *const this, char *data, uint32_t len)
{
  std::string::reference v3; // rax
  char *v4; // rdx
  char v5; // di
  unsigned __int64 v6; // rcx
  char v7; // si
  unsigned __int64 v8; // rcx
  char v9; // di
  uint32_t i; // [rsp+28h] [rbp-8h]
  uint32_t key_len; // [rsp+2Ch] [rbp-4h]

  key_len = std::string::length(&Config::config_ptr->first_packet_secret_key);
  if ( key_len )
  {
    for ( i = 0; i != len; ++i )
    {
      v3 = std::string::operator[](&Config::config_ptr->first_packet_secret_key, i % key_len);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v3);
      }
      v5 = *v4;
      v6 = (unsigned __int64)&data[i];
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      {
        v5 = i + (_BYTE)data;
        __asan_report_load1(&data[i]);
      }
      v7 = *(_BYTE *)v6;
      v8 = (unsigned __int64)&data[i];
      v9 = v7 ^ v5;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
        && (char)((i + (_BYTE)data) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        v9 = i + (_BYTE)data;
        __asan_report_store1(&data[i]);
      }
      *(_BYTE *)v8 = v9;
    }
  }
};

// Line 350: range 00000000004755A8-0000000000475A05
void __cdecl Robot::genSecretKey(Robot *const this, uint64_t secret_key_seed, std::string *secret_key)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  uint32_t i; // [rsp+2Ch] [rbp-1B84h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-1B80h] BYREF
  char v13[7008]; // [rsp+50h] [rbp-1B60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_7(6976LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 10 random:368 80 8 12 rand_num:384 112 2504 7 rng:375 2752 4096 18 secret_key_buf:366";
  *(_QWORD *)(v3 + 16) = Robot::genSecretKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862801] = -234881024;
  v5[536862802] = -218959118;
  v5[536862803] = -218959118;
  v5[536862804] = -218959118;
  v5[536862805] = -218959118;
  v5[536862934] = -202116109;
  v5[536862935] = -202116109;
  v5[536862936] = -202116109;
  v5[536862937] = -202116109;
  *(_QWORD *)(v3 + 2752) = 0LL;
  *(_QWORD *)(v3 + 2760) = 0LL;
  memset((void *)(v3 + 2768), 0, 0xFF0uLL);
  *(_QWORD *)(v3 + 48) = 0LL;
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(
    (std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112),
    secret_key_seed);
  *(_QWORD *)(v3 + 48) = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()((std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112));
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/robot/robot.cpp",
    "genSecretKey",
    372);
  v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"random :");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v12);
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(
    (std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112),
    *(_QWORD *)(v3 + 48));
  *(_QWORD *)(v3 + 48) = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()((std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112));
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/robot/robot.cpp",
    "genSecretKey",
    377);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"random :");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v12);
  for ( i = 0; i <= 0x1FF; ++i )
  {
    *(_QWORD *)(v3 + 48) = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()((std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112));
    *(_QWORD *)(v3 + 80) = common::tools::NetUtils::htonll(*(_QWORD *)(v3 + 48));
    v8 = v3 + 2752 + 8LL * i;
    v9 = *(_QWORD *)(v3 + 80);
    if ( (char)((v3 - 64 + 8 * i) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v8 + 7) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 8 * i + 7) & 7) >= *(_BYTE *)(((v8 + 7) >> 3) + 0x7FFF8000) )
    {
      v9 = v3 + 2752 + 8LL * i;
      __asan_report_store_n(v8, 8LL);
    }
    *(_QWORD *)v8 = v9;
  }
  std::string::clear(secret_key);
  std::string::assign(secret_key, (const char *)(v3 + 2752), 0x1000uLL);
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8144) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF814C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8154) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8358) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8360) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_7(v3, 6976LL, v13);
  }
};

// Line 394: range 0000000000475A06-0000000000476467
std::string *__cdecl Robot::getProtoShortDebugString(
        std::string *retstr,
        Robot *const this,
        const std::string *msg_name,
        const luabind::adl::object *msg_table)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rdx
  bool v8; // r14
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  google::protobuf::Message *v13; // rsi
  const std::string *msg_nameb; // [rsp+8h] [rbp-178h]
  std::allocator<char> v18; // [rsp+2Eh] [rbp-152h] BYREF
  std::allocator<char> __a; // [rsp+2Fh] [rbp-151h] BYREF
  std::string __lhs; // [rsp+30h] [rbp-150h] BYREF
  std::string v21; // [rsp+50h] [rbp-130h] BYREF
  std::string table_name; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v23; // [rsp+90h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 cmd_id:395 64 16 11 msg_ptr:407 96 32 12 req_data:401";
  *(_QWORD *)(v4 + 16) = Robot::getProtoShortDebugString;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = ProtoUtils::getCmdId(msg_name);
  if ( *(_DWORD *)(v4 + 48) )
  {
    std::string::basic_string((std::string *const)(v4 + 96));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v23, "encode", &__a);
    std::allocator<char>::allocator(&v18);
    std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v18);
    v8 = LuaScript::execTableFunc<std::string,std::string const&,luabind::adl::object const&>(
           &this->script_,
           &table_name,
           (const std::string *)&v23,
           (std::string *)(v4 + 96),
           msg_name,
           msg_table,
           (const std::string *)msg_table,
           (const luabind::adl::object *)msg_name) != 0;
    std::string::~string(&table_name);
    std::allocator<char>::~allocator(&v18);
    std::string::~string((std::string *const)&v23);
    std::allocator<char>::~allocator(&__a);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "getProtoShortDebugString",
        404);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v23,
             (const char (*)[42])"executeFunc proto.encode fails, msg_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, msg_nameb);
      common::milog::MiLogStream::~MiLogStream(&v23);
      std::literals::string_literals::operator"" s[abi:cxx11](
        (std::string *)&v23,
        "executeFunc proto.encode fail, msg_name:",
        0x28uLL);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      std::operator+<char>(retstr, (std::string *)&v23, msg_nameb);
      std::string::~string((std::string *const)&v23);
      goto LABEL_24;
    }
    ProtoUtils::createMessage(v4 + 64, *(_DWORD *)(v4 + 48));
    if ( std::operator==<google::protobuf::Message>((const std::shared_ptr<google::protobuf::Message> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "getProtoShortDebugString",
        410);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v23,
              (const char (*)[30])"createMessage fials, cmd_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      std::to_string((std::string *)&v23, *(_DWORD *)(v4 + 48));
      std::literals::string_literals::operator"" s[abi:cxx11](&__lhs, "createMessage fail, msg_name:", 0x1DuLL);
      std::operator+<char>(&v21, &__lhs, msg_nameb);
      std::operator+<char>(&table_name, &v21, " cmd_id:");
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
    }
    else
    {
      v11 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v11, v4 + 96) == 1 )
      {
        v13 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                                + 15) >> 3)
                                                              + 0x7FFF8000) )
        {
          v13 = (google::protobuf::Message *)32;
          __asan_report_store_n(retstr, 32LL);
        }
        google::protobuf::Message::ShortDebugString[abi:cxx11](retstr, v13);
        goto LABEL_23;
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "getProtoShortDebugString",
        415);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v23,
              (const char (*)[32])"ParseFromString fails, cmd_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      std::to_string((std::string *)&v23, *(_DWORD *)(v4 + 48));
      std::literals::string_literals::operator"" s[abi:cxx11](&__lhs, "ParseFromString fail, msg_name:", 0x1FuLL);
      std::operator+<char>(&v21, &__lhs, msg_nameb);
      std::operator+<char>(&table_name, &v21, " cmd_id:");
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
    }
    std::operator+<char>(retstr, &table_name, (std::string *)&v23);
    std::string::~string(&table_name);
    std::string::~string(&v21);
    std::string::~string(&__lhs);
    std::string::~string((std::string *const)&v23);
LABEL_23:
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 64));
LABEL_24:
    std::string::~string((std::string *const)(v4 + 96));
    goto LABEL_25;
  }
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/robot/robot.cpp",
    "getProtoShortDebugString",
    398);
  v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v23,
         (const char (*)[26])"getCmdId fails, msg_name:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, msg_name);
  common::milog::MiLogStream::~MiLogStream(&v23);
  std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)&v23, "getCmdId fail, msg_name:", 0x18uLL);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, (std::string *)&v23, msg_name);
  std::string::~string((std::string *const)&v23);
LABEL_25:
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
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

// Line 422: range 0000000000476468-0000000000476823
std::string *__cdecl Robot::getSerializedMessage(
        std::string *retstr,
        Robot *const this,
        const std::string *msg_name,
        const luabind::adl::object *msg_table)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  const std::string *msg_nameb; // [rsp+8h] [rbp-F8h]
  std::allocator<char> v13; // [rsp+2Eh] [rbp-D2h] BYREF
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::string table_name; // [rsp+30h] [rbp-D0h] BYREF
  std::string func_name; // [rsp+50h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 11 msg_str:423";
  *(_QWORD *)(v4 + 16) = Robot::getSerializedMessage;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  std::string::basic_string((std::string *const)(v4 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&func_name, "encode", &__a);
  std::allocator<char>::allocator(&v13);
  std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v13);
  v7 = LuaScript::execTableFunc<std::string,std::string const&,luabind::adl::object const&>(
         &this->script_,
         &table_name,
         &func_name,
         (std::string *)(v4 + 32),
         msg_name,
         msg_table,
         (const std::string *)msg_table,
         (const luabind::adl::object *)msg_name) != 0;
  std::string::~string(&table_name);
  std::allocator<char>::~allocator(&v13);
  std::string::~string(&func_name);
  std::allocator<char>::~allocator(&__a);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&func_name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "getSerializedMessage",
      426);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)&func_name,
           (const char (*)[42])"executeFunc proto.encode fails, msg_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, msg_nameb);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func_name);
    std::literals::string_literals::operator"" s[abi:cxx11](
      &func_name,
      "executeFunc proto.encode fail, msg_name:",
      0x28uLL);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::operator+<char>(retstr, &func_name, msg_nameb);
    std::string::~string(&func_name);
  }
  else
  {
    std::string::basic_string(retstr, (std::string *)(v4 + 32));
  }
  std::string::~string((std::string *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
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

// Line 433: range 0000000000476824-000000000047687F
void __cdecl Robot::setRevertMessageByte(Robot *const this, int32_t byte_index)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revert_message_byte_index_);
  }
  this->revert_message_byte_index_ = byte_index;
};

// Line 438: range 0000000000476880-00000000004768C9
uint32_t __cdecl Robot::getRtt(const Robot *const this)
{
  common::minet::kcp_client *v1; // rax

  if ( !std::operator!=<common::minet::kcp_client>(&this->client_, 0LL) )
    return 0;
  v1 = std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->client_);
  return common::minet::kcp_client::get_rtt(v1);
};

// Line 447: range 00000000004768CA-0000000000476C6E
__int64 __fastcall Robot::connect(Robot *const this, const char *host_name, uint16_t port)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  uint32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-C1h] BYREF
  std::shared_ptr<common::minet::kcp_client> __r; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 2 8 port:446 64 8 13 host_name:446";
  *(_QWORD *)(v3 + 16) = Robot::connect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = host_name;
  *(_WORD *)(v3 + 48) = port;
  if ( *(_QWORD *)(v3 + 64) && *(_WORD *)(v3 + 48) )
  {
    v7 = *(unsigned __int16 *)(v3 + 48);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v16, *(const char **)(v3 + 64), &__a);
    common::minet::KcpClientMgr::connect(
      (unsigned __int64)&__r,
      &kcp_client_mgr,
      (const std::string *)&v16,
      v7,
      0,
      0x499602D2u);
    std::shared_ptr<common::minet::kcp_client>::operator=(&this->client_, &__r);
    std::shared_ptr<common::minet::kcp_client>::~shared_ptr(&__r);
    std::string::~string((std::string *const)&v16);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->status_);
    }
    this->status_ = STATUS_CONNECTING;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/robot/robot.cpp",
      "connect",
      484);
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"connecting to ");
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])":");
    v11 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
            v10,
            (const unsigned __int16 *)(v3 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", robot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->robot_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 1LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "connect",
      450);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v16, (const char (*)[14])"invalid input");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0LL;
  }
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

// Line 489: range 0000000000476C70-0000000000476CEC
bool __cdecl Robot::connect(Robot *const this)
{
  uint16_t port; // bx
  const char *v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->conf_.port);
  }
  port = this->conf_.port;
  v2 = std::string::c_str(&this->conf_.host);
  return Robot::connect(this, v2, port);
};

// Line 494: range 0000000000476CEE-0000000000476E72
void __cdecl Robot::stop(Robot *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::minet::kcp_client *v2; // rcx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  if ( this->status_ == STATUS_RUNNING )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->status_);
    }
    this->status_ = STATUS_STOPING;
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/robot/robot.cpp",
      "stop",
      498);
    v1 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v3, (const char (*)[17])"stop robot, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->user_.uid);
    common::milog::MiLogStream::~MiLogStream(&v3);
    v2 = std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->client_);
    if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->token_);
    }
    common::minet::kcp_client::disconnect(v2, this->token_, 1u);
  }
};

// Line 504: range 0000000000476E74-000000000047701F
int32_t __cdecl Robot::send(Robot *const this, const char *data, uint32_t len, uint32_t flags, uint8_t channel)
{
  common::milog::MiLogStream *v6; // rax
  common::minet::kcp_client *v7; // rdx
  common::minet::KcpPacket *packet; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( data && len )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->status_);
    }
    if ( this->status_ == STATUS_RUNNING )
    {
      packet = common::minet::kcp_client::kcp_packet_create(data, len);
      v7 = std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->client_);
      common::minet::kcp_client::send_packet(v7, packet);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "send",
        512);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"invalid status:");
      common::milog::MiLogStream::operator<<<Robot::Status,(Robot::Status*)0>(v6, &this->status_);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "send",
      507);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v10, (const char (*)[13])"invalid args");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 535: range 0000000000477020-0000000000477807
int32_t __cdecl Robot::sendPacket(Robot *const this, common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rcx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ReporterReqRspHelper *v7; // rax
  const std::string *v8; // rax
  char v9; // r14
  common::minet::PacketPtr v10; // rdi
  bool v11; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t v22; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t BodyLen; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  char v28; // al
  unsigned __int64 v29; // rcx
  char v30; // si
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint8_t EnetChannelId; // di
  int32_t result; // eax
  uint32_t len; // [rsp+28h] [rbp-178h]
  char *data; // [rsp+30h] [rbp-170h]
  size_t n; // [rsp+38h] [rbp-168h]
  std::shared_ptr<common::minet::Packet> v39; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-150h] BYREF
  char v41[304]; // [rsp+70h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 2 10 cmd_id:539 64 32 14 packet_str:538 128 32 12 req_name:541 192 32 12 data_str:545";
  *(_QWORD *)(v2 + 16) = Robot::sendPacket;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->client_sequence_id_);
  }
  common::minet::Packet::setClientSequenceId(v5, ++this->client_sequence_id_);
  std::string::basic_string((std::string *const)(v2 + 64));
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_WORD *)(v2 + 48) = common::minet::Packet::getCmdId(v6);
  if ( *(char *)(((unsigned __int64)&this->conf_.is_use_req_rsp_helper >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->conf_.is_use_req_rsp_helper);
  if ( this->conf_.is_use_req_rsp_helper )
  {
    v7 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
    ReporterReqRspHelper::send(v7, *(_WORD *)(v2 + 48));
  }
  v8 = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v2 + 48));
  std::string::basic_string((std::string *const)(v2 + 128), v8);
  v9 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_log_open_);
  }
  v11 = 0;
  if ( this->is_log_open_ )
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v39, packet_ptr);
    v9 = 1;
    v10._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 64);
    v10._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&v39;
    if ( !(unsigned int)ProtoUtils::convertPacketToString(v10, (std::string *)(v2 + 64)) )
      v11 = 1;
  }
  if ( v9 )
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v39);
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/robot/robot.cpp",
      "sendPacket",
      543);
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v40, (const char (*)[10])"robot_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->robot_id_);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])", send packet (");
    v15 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
            v14,
            (const unsigned __int16 *)(v2 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])":");
    v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v2 + 128));
    v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])") to ");
    v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &this->conf_.host);
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", content:\n");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  std::string::basic_string((std::string *const)(v2 + 192));
  v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  if ( common::minet::Packet::serializeToString(v21, (std::string *)(v2 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "sendPacket",
      548);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v40, (const char (*)[24])"serializeToString fails");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v22 = -1;
  }
  else
  {
    data = (char *)std::string::c_str((const std::string *const)(v2 + 192));
    len = std::string::length((const std::string *const)(v2 + 192));
    if ( *(_WORD *)(v2 + 48) == 172 )
    {
      Robot::encryptFirstPacketData(this, data, len);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->revert_message_byte_index_);
      }
      if ( this->revert_message_byte_index_ >= 0 )
      {
        v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
        BodyLen = common::minet::Packet::getBodyLen(v23);
        n = BodyLen;
        if ( BodyLen )
        {
          v25 = len - 2 - (unsigned __int64)BodyLen;
          if ( *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->revert_message_byte_index_);
          }
          v26 = this->revert_message_byte_index_ % n;
          v27 = (unsigned __int64)&data[v26 + v25];
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0 && (char)(v27 & 7) >= *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            __asan_report_load1(v27);
          v28 = *(_BYTE *)v27;
          v29 = (unsigned __int64)&data[v26 + len - 2 - n];
          v30 = ~v28;
          if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0 && (char)(v29 & 7) >= *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
            __asan_report_store1(v29);
          *(_BYTE *)v29 = v30;
        }
      }
      Robot::encryptPacketData(this, data, len);
    }
    v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    EnetChannelId = common::minet::Packet::getEnetChannelId(v31);
    v22 = Robot::send(this, data, len, 0, EnetChannelId);
  }
  std::string::~string((std::string *const)(v2 + 192));
  std::string::~string((std::string *const)(v2 + 128));
  std::string::~string((std::string *const)(v2 + 64));
  result = v22;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 582: range 0000000000477808-0000000000477D25
void __cdecl Robot::runEnet(Robot *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::tools::TimerMgr *v4; // rdx
  common::minet::kcp_client *v5; // rax
  int v6; // eax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  uint64_t now_ms; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 7 evt:592";
  *(_QWORD *)(v1 + 16) = Robot::runEnet;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( std::operator!=<common::tools::TimerMgr>(&this->timer_mgr_ptr_, 0LL) )
  {
    now_ms = common::tools::TimeUtils::getNowMs();
    v4 = std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_mgr_ptr_);
    common::tools::TimerMgr::update(v4, now_ms);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  if ( this->status_ == STATUS_CONNECTING || this->status_ == STATUS_RUNNING || this->status_ == STATUS_STOPING )
  {
    while ( 1 )
    {
      v5 = std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->client_);
      if ( !common::minet::kcp_client::try_deque_event(v5, (common::minet::KcpEvent *)(v1 + 32)) )
        break;
      v6 = *(_DWORD *)(v1 + 32);
      if ( v6 == 3 )
      {
        v13 = *(_QWORD *)(v1 + 48);
        if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v13 + 8);
        }
        LODWORD(v14) = *(_DWORD *)(v13 + 8);
        v15 = *(_QWORD *)(v1 + 48);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          v14 = *(_QWORD *)(v1 + 48);
          v15 = __asan_report_load8(v14);
        }
        Robot::onRecv(this, *(char **)v15, v14, 0, 0);
        common::minet::kcp_client::kcp_packet_destroy(*(common::minet::KcpPacket **)(v1 + 48));
      }
      else if ( v6 <= 3 )
      {
        if ( v6 )
        {
          if ( v6 >= 0 && (unsigned int)(v6 - 1) <= 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->status_);
            }
            if ( this->status_ == STATUS_RUNNING )
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/robot/robot.cpp",
                "runEnet",
                609);
              v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v18,
                      (const char (*)[29])"server disconnected, reason:");
              v12 = proto::ENetReason_Name[abi:cxx11]((proto::ENetReason)*(_DWORD *)(v1 + 40));
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
              common::milog::MiLogStream::~MiLogStream(&v18);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->status_);
            }
            this->status_ = STATUS_STOPPED;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->status_);
          }
          this->status_ = STATUS_RUNNING;
          v7 = *(_DWORD *)(v1 + 36);
          if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->token_);
          }
          this->token_ = v7;
          Robot::startLogic(this);
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/robot/robot.cpp",
            "runEnet",
            602);
          v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 &v18,
                 (const char (*)[23])"Connect Succeed, data:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v1 + 40));
          v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" token:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 36));
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
      }
    }
  }
  if ( v19 == (char *)v1 )
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
};

// Line 651: range 0000000000478380-00000000004784D1
void __cdecl Robot::startLogic(Robot *const this)
{
  std::shared_ptr<common::minet::Coroutine> *v1; // r9
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  std::shared_ptr<common::tools::TimerMgr> *v3; // [rsp+0h] [rbp-60h]
  Robot *thisa; // [rsp+8h] [rbp-58h]
  std::shared_ptr<common::minet::Coroutine> v5; // [rsp+18h] [rbp-48h] BYREF
  std::function<void()> v6; // [rsp+30h] [rbp-30h] BYREF

  if ( !std::operator!=<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
  {
    std::make_shared<common::minet::Coroutine,unsigned int &>((unsigned int *)&v5._M_refcount, &this->robot_id_);
    std::shared_ptr<common::minet::Coroutine>::operator=(
      &this->coro_ptr_,
      (std::shared_ptr<common::minet::Coroutine> *)&v5._M_refcount);
    std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)&v5._M_refcount);
    v5._M_ptr = (std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
    std::make_shared<common::minet::PacketSenderCoroExec,Robot::startLogic(void)::{lambda(std::shared_ptr<common::minet::Packet> &)#1},std::shared_ptr&<common::minet::Coroutine>,std::shared_ptr&<common::tools::TimerMgr>,unsigned int &>(
      (Robot::startLogic::<lambda(common::minet::PacketPtr&)> *)&v5._M_refcount,
      &v5,
      (std::shared_ptr<common::tools::TimerMgr> *)&this->coro_ptr_,
      (unsigned int *)&this->timer_mgr_ptr_,
      (Robot::startLogic::<lambda(common::minet::PacketPtr&)> *)&this->conf_.timeout_ms,
      v1,
      v3,
      (unsigned int *)this);
    std::shared_ptr<common::minet::PacketSenderCoroExec>::operator=(
      &thisa->coro_exec_ptr_,
      (std::shared_ptr<common::minet::PacketSenderCoroExec> *)&v5._M_refcount);
    std::shared_ptr<common::minet::PacketSenderCoroExec>::~shared_ptr((std::shared_ptr<common::minet::PacketSenderCoroExec> *const)&v5._M_refcount);
    if ( std::operator!=<common::minet::PacketSenderCoroExec>(&thisa->coro_exec_ptr_, 0LL) )
    {
      v2 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->coro_exec_ptr_);
      std::function<void ()(void)>::function<Robot::startLogic(void)::{lambda(void)#2},void,void>(
        &v6,
        (Robot::startLogic::<lambda()>)thisa);
      common::minet::TimeoutCoroExec::start(v2, &v6);
      std::function<void ()(void)>::~function(&v6);
    }
  }
};

// Line 657: range 0000000000477D26-0000000000477D73
int32_t __cdecl Robot::startLogic(void)::{lambda(std::shared_ptr<common::minet::Packet> &)#1}::operator()(
        const Robot::startLogic::<lambda(common::minet::PacketPtr&)> *const __closure,
        common::minet::PacketPtr *packet_ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Robot::sendPacket(__closure->__this, packet_ptr);
  return 0;
};

// Line 665: range 0000000000477D74-000000000047837F
void __cdecl Robot::startLogic(void)::{lambda(void)#2}::operator()(
        const Robot::startLogic::<lambda()> *const __closure)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  Robot *this; // r14
  int32_t v5; // ecx
  Robot *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  Robot *v8; // rdx
  char v9; // cl
  common::milog::MiLogStream *v10; // r13
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  Robot *v16; // rdx
  char v17; // cl
  const std::string *v18; // rax
  common::milog::MiLogStream v19; // [rsp+10h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 7 req:672";
  *(_QWORD *)(v1 + 16) = Robot::startLogic(void)::{lambda(void)#2}::operator();
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  v5 = Robot::execScript(__closure->__this, &__closure->__this->script_);
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->retcode_);
  }
  this->retcode_ = v5;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v6 = __closure->__this;
  if ( *(char *)(((unsigned __int64)&__closure->__this->conf_.is_force_exit >> 3) + 0x7FFF8000) < 0 )
    v6 = (Robot *)__asan_report_load1(&__closure->__this->conf_.is_force_exit);
  if ( v6->conf_.is_force_exit )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/robot/robot.cpp",
      "operator()",
      671);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v19,
      (const char (*)[25])"ready run force exit ...");
    common::milog::MiLogStream::~MiLogStream(&v19);
    proto::PlayerForceExitReq::PlayerForceExitReq((proto::PlayerForceExitReq *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    if ( Robot::sendProto<proto::PlayerForceExitReq>(__closure->__this, (proto::PlayerForceExitReq *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "operator()",
        675);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v19, (const char (*)[16])"sendProto fails");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      operator<<(v7, __closure->__this);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    Robot::asyncWait(__closure->__this, 0xBB8u);
    proto::PlayerForceExitReq::~PlayerForceExitReq((proto::PlayerForceExitReq *const)(v1 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Robot::stop(__closure->__this);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v8 = __closure->__this;
  v9 = *(_BYTE *)(((unsigned __int64)&__closure->__this->is_finished_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && ((LOBYTE(__closure->__this) + 125) & 7) >= v9 )
    __asan_report_store1(&__closure->__this->is_finished_);
  v8->is_finished_ = 1;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/robot/robot.cpp",
    "operator()",
    681);
  v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v19, (const char (*)[14])"robot script:");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v11 = LuaScript::getFilePath[abi:cxx11](&__closure->__this->script_);
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" finished, uid:");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__closure->__this->user_.uid);
  v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", retcode:");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v16 = __closure->__this;
  v17 = *(_BYTE *)(((unsigned __int64)&__closure->__this->retcode_ >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)(((LOBYTE(__closure->__this) - 52) & 7) + 3) >= v17 )
    __asan_report_load4(&__closure->__this->retcode_);
  v18 = proto::Retcode_Name[abi:cxx11]((proto::Retcode)v16->retcode_);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v18);
  common::milog::MiLogStream::~MiLogStream(&v19);
  if ( v20 == (char *)v1 )
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
};

// Line 688: range 00000000004784D2-0000000000478778
int32_t __cdecl Robot::execScript(Robot *const this, LuaScript *script)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const boost::reference_wrapper<Robot> *v5; // r9
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-C9h] BYREF
  boost::reference_wrapper<Robot> v12; // [rsp+18h] [rbp-C8h] BYREF
  Robot *v13; // [rsp+20h] [rbp-C0h]
  Robot *o; // [rsp+28h] [rbp-B8h]
  std::function<void(const std::string&,const std::string&,const std::exception&)> p_log_func; // [rsp+30h] [rbp-B0h] BYREF
  std::string func_name; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 ret:689";
  *(_QWORD *)(v2 + 16) = Robot::execScript;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  v13 = this;
  o = this;
  v12.t_ = boost::addressof<Robot>(this);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&func_name, "run", &__a);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::function(&p_log_func, 0LL);
  v6 = LuaScript::executeFunc<int,boost::reference_wrapper<Robot> const>(
         script,
         &p_log_func,
         &func_name,
         (int *)(v2 + 32),
         &v12,
         v5) != 0;
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  std::string::~string(&func_name);
  std::allocator<char>::~allocator(&__a);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&func_name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "execScript",
      692);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&func_name,
           (const char (*)[27])"exec func 'run' in script:");
    v8 = LuaScript::getFilePath[abi:cxx11](script);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func_name);
    *(_DWORD *)(v2 + 32) = -1;
  }
  result = *(_DWORD *)(v2 + 32);
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

// Line 700: range 000000000047877A-0000000000478B14
void __cdecl Robot::createTestSuite(
        Robot *const this,
        std::string *p_name,
        std::string *p_description,
        std::string *p_category)
{
  Reporter *v4; // rbx
  Reporter *v5; // rbx
  Reporter *v6; // rbx
  std::allocator<char> __a; // [rsp+2Fh] [rbp-251h] BYREF
  std::string __lhs; // [rsp+30h] [rbp-250h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-230h] BYREF
  std::string v12; // [rsp+70h] [rbp-210h] BYREF
  std::string p_fullname; // [rsp+90h] [rbp-1F0h] BYREF
  TestSuite v14; // [rsp+B0h] [rbp-1D0h] BYREF

  v4 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&p_fullname, p_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->robot_id_);
  }
  std::to_string(&__rhs, this->robot_id_);
  std::operator+<char>(&__lhs, p_name, "_robotId:");
  std::operator+<char>(&v12, &__lhs, &__rhs);
  Reporter::newCurSuite(&v14, v4, &v12, &p_fullname);
  TestSuite::~TestSuite(&v14);
  std::string::~string(&v12);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&p_fullname);
  if ( std::operator!=<char>(p_description, byte_DE2A700) )
  {
    v5 = MultiThreadSingleton<Reporter>::instance();
    std::string::basic_string(&p_fullname, p_description);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v12, "Description", &__a);
    Reporter::addCurSuitePro(v5, &v12, &p_fullname);
    std::string::~string(&v12);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&p_fullname);
  }
  if ( std::operator!=<char>(p_category, byte_DE2A700) )
  {
    v6 = MultiThreadSingleton<Reporter>::instance();
    std::string::basic_string(&p_fullname, p_category);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v12, "Category", &__a);
    Reporter::addCurSuitePro(v6, &v12, &p_fullname);
    std::string::~string(&v12);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&p_fullname);
  }
};

// Line 713: range 0000000000478B16-0000000000478DED
void __cdecl Robot::createTestCase(
        Robot *const this,
        std::string *p_name,
        std::string *p_description,
        std::string *p_category)
{
  Reporter *v4; // rbx
  Reporter *v5; // rbx
  Reporter *v6; // rbx
  std::allocator<char> __a; // [rsp+2Fh] [rbp-1C1h] BYREF
  std::string v10; // [rsp+30h] [rbp-1C0h] BYREF
  std::string p_fullname; // [rsp+50h] [rbp-1A0h] BYREF
  TestCase v12; // [rsp+70h] [rbp-180h] BYREF

  v4 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&p_fullname, p_name);
  std::string::basic_string(&v10, p_name);
  Reporter::newCurCase(&v12, v4, &v10, &p_fullname);
  TestCase::~TestCase(&v12);
  std::string::~string(&v10);
  std::string::~string(&p_fullname);
  if ( std::operator!=<char>(p_description, byte_DE2A700) )
  {
    v5 = MultiThreadSingleton<Reporter>::instance();
    std::string::basic_string(&p_fullname, p_description);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v10, "Description", &__a);
    Reporter::addCurCasePro(v5, &v10, &p_fullname);
    std::string::~string(&v10);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&p_fullname);
  }
  if ( std::operator!=<char>(p_category, byte_DE2A700) )
  {
    v6 = MultiThreadSingleton<Reporter>::instance();
    std::string::basic_string(&p_fullname, p_category);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v10, "Category", &__a);
    Reporter::addCurCasePro(v6, &v10, &p_fullname);
    std::string::~string(&v10);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&p_fullname);
  }
};

// Line 726: range 0000000000478DEE-0000000000478FC6
void __cdecl Robot::endCase(Robot *const this, int32_t ret)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *v5; // rax
  Reporter *v6; // r14
  Reporter *v7; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-B1h] BYREF
  std::string p_result; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (std::string *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 10 result:727";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)Robot::endCase;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a);
  if ( ret )
    v5 = "Failed";
  else
    v5 = "Passed";
  std::string::basic_string<std::allocator<char>>(v2 + 1, v5, &__a);
  std::allocator<char>::~allocator(&__a);
  v6 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&p_result, v2 + 1);
  Reporter::endCurCase(v6, &p_result);
  std::string::~string(&p_result);
  v7 = MultiThreadSingleton<Reporter>::instance();
  Reporter::addCurCase2CurSuite(v7);
  std::string::~string(v2 + 1);
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 733: range 0000000000478FC8-0000000000478FF0
void __cdecl Robot::endSuite(Robot *const this)
{
  Reporter *v1; // rax
  Reporter *v2; // rax

  v1 = MultiThreadSingleton<Reporter>::instance();
  Reporter::endCurSuite(v1);
  v2 = MultiThreadSingleton<Reporter>::instance();
  Reporter::addCurSuite(v2);
};

// Line 739: range 0000000000478FF2-00000000004790B9
void __cdecl Robot::setCaseFailure(Robot *const this, std::string *p_msg)
{
  Reporter *v2; // rbx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-51h] BYREF
  std::string p_stackTrace; // [rsp+20h] [rbp-50h] BYREF
  std::string v5; // [rsp+40h] [rbp-30h] BYREF

  v2 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&v5, p_msg);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&p_stackTrace, byte_DE2A700, &__a);
  Reporter::setCurCaseFailure(v2, &p_stackTrace, &v5);
  std::string::~string(&p_stackTrace);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&v5);
};

// Line 744: range 00000000004790BA-0000000000479181
void __cdecl Robot::setSuiteFailure(Robot *const this, std::string *p_msg)
{
  Reporter *v2; // rbx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-51h] BYREF
  std::string p_stackTrace; // [rsp+20h] [rbp-50h] BYREF
  std::string v5; // [rsp+40h] [rbp-30h] BYREF

  v2 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&v5, p_msg);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&p_stackTrace, byte_DE2A700, &__a);
  Reporter::setCurSuiteFailure(v2, &p_stackTrace, &v5);
  std::string::~string(&p_stackTrace);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&v5);
};

// Line 749: range 0000000000479182-0000000000479225
void __cdecl Robot::addCasePro(Robot *const this, std::string *p_name, std::string *p_value)
{
  Reporter *v3; // rbx
  std::string v5; // [rsp+20h] [rbp-50h] BYREF
  std::string v6; // [rsp+40h] [rbp-30h] BYREF

  v3 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&v6, p_value);
  std::string::basic_string(&v5, p_name);
  Reporter::addCurCasePro(v3, &v5, &v6);
  std::string::~string(&v5);
  std::string::~string(&v6);
};

// Line 754: range 0000000000479226-00000000004792C9
void __cdecl Robot::addSuitePro(Robot *const this, std::string *p_name, std::string *p_value)
{
  Reporter *v3; // rbx
  std::string v5; // [rsp+20h] [rbp-50h] BYREF
  std::string v6; // [rsp+40h] [rbp-30h] BYREF

  v3 = MultiThreadSingleton<Reporter>::instance();
  std::string::basic_string(&v6, p_value);
  std::string::basic_string(&v5, p_name);
  Reporter::addCurSuitePro(v3, &v5, &v6);
  std::string::~string(&v5);
  std::string::~string(&v6);
};

// Line 760: range 00000000004792CA-00000000004792FC
void __cdecl Robot::onExit(Robot *const this)
{
  std::__shared_ptr<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2>::reset(&this->coro_exec_ptr_);
  std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::reset(&this->coro_ptr_);
};

// Line 767: range 00000000004792FE-0000000000479589
__int64 __fastcall Robot::asyncWait(Robot *const this, uint32_t timeout)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 ret:773 64 4 11 timeout:766";
  *(_QWORD *)(v2 + 16) = Robot::asyncWait;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = timeout;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "asyncWait",
      770);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v11, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    *(_DWORD *)(v2 + 48) = common::minet::TimeoutCoroExec::asyncSleep(v6, *(_DWORD *)(v2 + 64));
    if ( *(_DWORD *)(v2 + 48) == 2 )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "asyncWait",
        778);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v11,
             (const char (*)[26])"asyncWait fails, timeout:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" ret:");
      v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 48));
      operator<<(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0xFFFFFFFFLL;
    }
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

// Line 786: range 000000000047958A-00000000004795B6
void __cdecl Robot::delayExecLogicFunc(Robot *const this, RobotLogicFunc *p_functor)
{
  std::list<std::function<int ()(Robot &)>>::emplace_back<std::function<int ()(Robot &)>&>(
    &this->logic_func_que_,
    p_functor,
    (std::function<int(Robot&)> *)&this->logic_func_que_);
};

// Line 792: range 00000000004795B8-000000000047976A
int32_t __cdecl Robot::execLogicFunc(Robot *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  RobotLogicFunc *functor; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 ret:796";
  *(_QWORD *)(v1 + 16) = Robot::execLogicFunc;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  while ( !std::list<std::function<int ()(Robot &)>>::empty(&this->logic_func_que_) )
  {
    functor = std::list<std::function<int ()(Robot &)>>::front(&this->logic_func_que_);
    *(_DWORD *)(v1 + 32) = std::function<int ()(Robot &)>::operator()(functor, this);
    std::list<std::function<int ()(Robot &)>>::pop_front(&this->logic_func_que_);
    if ( *(_DWORD *)(v1 + 32) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.cpp",
        "execLogicFunc",
        800);
      v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v7,
             (const char (*)[34])"execLogicFunc functor fails, ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v4, (const int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v7);
      result = *(_DWORD *)(v1 + 32);
      goto LABEL_9;
    }
  }
  result = 0;
LABEL_9:
  if ( v8 == (char *)v1 )
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

// Line 809: range 000000000047976C-00000000004798E0
EntityPtr __cdecl Robot::findEntity(Robot *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  EntityPtr result; // rax
  std::shared_ptr<Avatar> __r; // [rsp+20h] [rbp-70h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 entity_ptr:810";
  *(_QWORD *)(v2 + 16) = Robot::findEntity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Scene::findEntity((const Scene *const)(v2 + 32), entity_id + 1376);
  if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 32), 0LL) )
  {
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, (std::shared_ptr<Entity> *)(v2 + 32));
  }
  else
  {
    Player::findAvatarByEntityId((Player *const)&__r, entity_id + 896);
    std::shared_ptr<Entity>::shared_ptr<Avatar,void>((std::shared_ptr<Entity> *const)this, &__r);
    std::shared_ptr<Avatar>::~shared_ptr(&__r);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 817: range 00000000004798E2-0000000000479948
std::vector<float> *__cdecl Robot::getConstValue(std::vector<float> *retstr, data::ConstValueType type)
{
  std::vector<float>::vector(retstr);
  ConstValueExcelConfigMgr::findConstValue<float>(
    &Config::config_ptr->design_config.txt_config_mgr.const_value_config_mgr,
    type,
    retstr);
  return retstr;
};

// Line 824: range 000000000047994A-00000000004799C6
void __cdecl Robot::logDebug(const std::string *log_str)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/robot/robot.cpp",
    "logDebug",
    825);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v1, log_str);
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 829: range 00000000004799C8-0000000000479A44
void __cdecl Robot::logInfo(const std::string *log_str)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/robot/robot.cpp",
    "logInfo",
    830);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v1, log_str);
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 834: range 0000000000479A46-0000000000479AC2
void __cdecl Robot::logWarning(const std::string *log_str)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/robot/robot.cpp",
    "logWarning",
    835);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v1, log_str);
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 839: range 0000000000479AC4-0000000000479B40
void __cdecl Robot::logError(const std::string *log_str)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/robot/robot.cpp",
    "logError",
    840);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v1, log_str);
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 846: range 0000000000479CC4-000000000047A012
int32_t __cdecl initProtoLua(lua_State_0 *lua_state_ptr)
{
  std::map<std::string,std::string> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r13d
  std::pair<const std::string,std::string > *i; // r13
  int32_t result; // eax
  std::less<std::string > __comp; // [rsp+2Ah] [rbp-156h] BYREF
  std::allocator<std::pair<const std::string,std::string > > __a; // [rsp+2Bh] [rbp-155h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-154h]
  google::protobuf::DescriptorPool v10; // [rsp+30h] [rbp-150h] BYREF
  std::pair<const std::string,std::string > v11; // [rsp+90h] [rbp-F0h] BYREF
  char v12[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v1 = (std::map<std::string,std::string> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<std::string,std::string> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 12 path_map:852";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)initProtoLua;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( lua_state_ptr )
  {
    std::pair<std::string const,std::string>::pair<char const(&)[6],char const(&)[8],true>(
      (std::pair<const std::string,std::string > *const)&v10.tables_,
      (const char (*)[6])"proto",
      (const char (*)[8])"./proto");
    std::pair<std::string const,std::string>::pair<char const(&)[1],char const(&)[8],true>(
      &v11,
      (const char (*)[1])byte_DE2A700,
      (const char (*)[8])"./proto");
    std::allocator<std::pair<std::string const,std::string>>::allocator(&__a);
    std::map<std::string,std::string>::map(
      v1 + 1,
      (std::initializer_list<std::pair<const std::string,std::string > >)__PAIR128__(
                                                                           2LL,
                                                                           (google::protobuf::DescriptorPool *)&v10.tables_),
      &__comp,
      &__a);
    std::allocator<std::pair<std::string const,std::string>>::~allocator(&__a);
    for ( i = (std::pair<const std::string,std::string > *)v12;
          i != (std::pair<const std::string,std::string > *)&v10.tables_;
          std::pair<std::string const,std::string>::~pair(i) )
    {
      --i;
    }
    protolua::initLib(lua_state_ptr, v1 + 1);
    std::function<int ()(std::string const&)>::function<initProtoLua(lua_State *)::{lambda(std::string const&)#1},void,void>(
      (std::function<int(const std::string&)> *const)&v10,
      (initProtoLua::<lambda(const string&)>)lua_state_ptr);
    ret = ProtoUtils::foreachProtoFile(&v10);
    std::function<int ()(std::string const&)>::~function((std::function<int(const std::string&)> *const)&v10);
    v4 = ret;
    std::map<std::string,std::string>::~map(v1 + 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "initProtoLua",
      849);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
      (common::milog::MiLogStream *const)&v10,
      (const char (*)[22])"lua_state_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v10);
    v4 = -1;
  }
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 859: range 0000000000479B42-0000000000479CC3
int __cdecl initProtoLua(lua_State *)::{lambda(std::string const&)#1}::operator()(
        const initProtoLua::<lambda(const string&)> *const __closure,
        const std::string *file_name)
{
  __int64 v2; // rdx
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v5; // rdx
  const google::protobuf::FileDescriptor *file_desc_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  v2 = google::protobuf::DescriptorPool::generated_pool((google::protobuf::DescriptorPool *)__closure);
  file_desc_ptr = (const google::protobuf::FileDescriptor *)google::protobuf::DescriptorPool::FindFileByName(
                                                              v2,
                                                              file_name);
  if ( file_desc_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    if ( !protolua::parseFile(file_desc_ptr, __closure->__lua_state_ptr) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/robot/robot.cpp",
        "operator()",
        870);
      v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v7,
             (const char (*)[29])"parse_file fails, file_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, file_name);
      common::milog::MiLogStream::~MiLogStream(&v7);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/robot/robot.cpp",
      "operator()",
      865);
    v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v7,
           (const char (*)[33])"FindFileByName fails, file_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, file_name);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 880: range 000000000047A014-000000000047D05D
int32_t __cdecl Robot::registerScriptFunc(LuaScript *script)
{
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v2; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v3; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v4; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v5; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v6; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v7; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v8; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v9; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v10; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v11; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v12; // rax
  boost::arg<4> v13; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v14; // rbx
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v15; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v16; // rax
  boost::arg<4> v17; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v18; // rbx
  boost::arg<5> v19; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v20; // rbx
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v21; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v22; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v23; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v24; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v25; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v26; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v27; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v28; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v29; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v30; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v31; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v32; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v33; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v34; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v35; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v36; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v37; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v38; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v39; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v40; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v41; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v42; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v43; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v44; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v45; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v46; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v47; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v48; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v49; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v50; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v51; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v52; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v53; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v54; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v55; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v56; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v57; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v58; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v59; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v60; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v61; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v62; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v63; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v64; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v65; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v66; // rax
  boost::arg<3> v67; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v68; // rbx
  boost::arg<3> v69; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v70; // rbx
  boost::arg<3> v71; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v72; // rbx
  boost::arg<3> v73; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v74; // rbx
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v75; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v76; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v77; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v78; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v79; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v80; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v81; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v82; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v83; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v84; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v85; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v86; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v87; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v88; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v89; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v90; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v91; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v92; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v93; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v94; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v95; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v96; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v97; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v98; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v99; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v100; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v101; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v102; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v103; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v104; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v105; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v106; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v107; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v108; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v109; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v110; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v111; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v112; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v113; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v114; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v115; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v116; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v117; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v118; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v119; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v120; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v121; // rax
  boost::arg<2> v122; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v123; // rbx
  boost::arg<2> v124; // di
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v125; // rbx
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v126; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v127; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v128; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v129; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v130; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v131; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v132; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v133; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v134; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v135; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v136; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v137; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v138; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v139; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v140; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v141; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v142; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v143; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v144; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v145; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v146; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v147; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v148; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v149; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v150; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v151; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v152; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v153; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v154; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v155; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v156; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v157; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v158; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v159; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v160; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v161; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v162; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v163; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v164; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v165; // rax
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v166; // rax
  luabind::scope *v167; // rax
  luabind::scope *v168; // rax
  luabind::scope *v169; // rax
  luabind::scope *v170; // rax
  luabind::scope *v171; // rax
  const luabind::scope *v172; // rax
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v173; // rax
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v174; // rax
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v175; // rax
  luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v176; // rbx
  boost::arg<3> v177; // di
  luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v178; // rbx
  luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v179; // rax
  luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v180; // rax
  luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v181; // rax
  luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v182; // rax
  luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v183; // rax
  luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v184; // rax
  luabind::scope *v185; // rax
  const luabind::scope *v186; // rax
  luabind::value_vector *v187; // rax
  luabind::value_vector *v188; // rax
  luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v189; // rax
  luabind::value_vector *v190; // rax
  luabind::value_vector *v191; // rax
  luabind::value_vector *v192; // rax
  luabind::value_vector *v193; // rax
  luabind::value_vector *v194; // rax
  luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v195; // rax
  luabind::value_vector *v196; // rax
  luabind::value_vector *v197; // rax
  luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v198; // rax
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type> v199; // [rsp+A2Fh] [rbp-181h] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type> v200; // [rsp+A30h] [rbp-180h] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type> v201; // [rsp+A31h] [rbp-17Fh] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type> v202; // [rsp+A32h] [rbp-17Eh] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type> v203; // [rsp+A33h] [rbp-17Dh] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type> v204; // [rsp+A34h] [rbp-17Ch] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type> v205; // [rsp+A35h] [rbp-17Bh] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type> v206; // [rsp+A36h] [rbp-17Ah] BYREF
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type> v207; // [rsp+A37h] [rbp-179h] BYREF
  luabind::scope v208; // [rsp+A38h] [rbp-178h] BYREF
  luabind::scope s; // [rsp+A40h] [rbp-170h] BYREF
  luabind::scope v210; // [rsp+A48h] [rbp-168h] BYREF
  luabind::scope v211; // [rsp+A50h] [rbp-160h] BYREF
  luabind::scope v212; // [rsp+A58h] [rbp-158h] BYREF
  luabind::scope v213; // [rsp+A60h] [rbp-150h] BYREF
  char name[8]; // [rsp+A68h] [rbp-148h] BYREF
  luabind::scope v215; // [rsp+A70h] [rbp-140h] BYREF
  lua_State_0 *lua_state_ptr; // [rsp+A78h] [rbp-138h]
  luabind::module_ v217; // [rsp+A80h] [rbp-130h] BYREF
  luabind::value v218; // [rsp+A90h] [rbp-120h] BYREF
  luabind::value v219; // [rsp+AA0h] [rbp-110h] BYREF
  luabind::value v220; // [rsp+AB0h] [rbp-100h] BYREF
  luabind::value v221; // [rsp+AC0h] [rbp-F0h] BYREF
  luabind::value rhs; // [rsp+AD0h] [rbp-E0h] BYREF
  luabind::value v223; // [rsp+AE0h] [rbp-D0h] BYREF
  luabind::value v224; // [rsp+AF0h] [rbp-C0h] BYREF
  luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v225; // [rsp+B00h] [rbp-B0h] BYREF
  luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v226; // [rsp+B20h] [rbp-90h] BYREF
  luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v227; // [rsp+B40h] [rbp-70h] BYREF
  common::milog::MiLogStream v228; // [rsp+B60h] [rbp-50h] BYREF

  lua_state_ptr = LuaScript::getLuaState(script);
  if ( lua_state_ptr )
  {
    luabind::set_pcall_callback((luabind::pcall_callback_fun)ScriptUtil::luabindErrorHandler);
    if ( initProtoLua(lua_state_ptr) )
    {
      common::milog::MiLogStream::create(
        &v228,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/robot/robot.cpp",
        "registerScriptFunc",
        890);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v228, (const char (*)[19])"initProtoLua fails");
      common::milog::MiLogStream::~MiLogStream(&v228);
      return -1;
    }
    else
    {
      Player::registerScriptFunc(lua_state_ptr);
      Scene::registerScriptFunc(lua_state_ptr);
      Quest::registerScriptFunc(lua_state_ptr);
      RobotReporter::registerScriptFunc(lua_state_ptr);
      v224 = (luabind::value)luabind::module(lua_state_ptr, 0LL);
      luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        &v227,
        "Robot");
      v2 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Robot::*)(void)const>(
             &v227,
             "getUid",
             (unsigned int (*)(const Robot *))Robot::getUid);
      v3 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Robot::*)(void)const>(
             v2,
             "getRtt",
             (unsigned int (*)(const Robot *))Robot::getRtt);
      v4 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<Scene & (Robot::*)(void)>(
             v3,
             "getScene",
             (Scene *(*)(Robot *))Robot::getScene);
      v5 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<Player & (Robot::*)(void)>(
             v4,
             "getPlayer",
             (Player *(*)(Robot *))Robot::getPlayer);
      v6 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<RobotReporter & (Robot::*)(void)>(
             v5,
             "getReporter",
             (RobotReporter *(*)(Robot *))Robot::getReporter);
      v7 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Robot::*)(void)>(
             v6,
             "getRound",
             (unsigned int (*)(Robot *))Robot::getRound);
      v8 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<bool (Robot::*)(void)const>(
             v7,
             "isLogOpen",
             (bool (*)(const Robot *))Robot::isLogOpen);
      v9 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(bool)>(
             v8,
             "setLogOpen",
             (void (*)(Robot *, bool))Robot::setLogOpen);
      v10 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v9,
              "execLogicFunc",
              (int (*)(Robot *))Robot::execLogicFunc);
      v11 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,bool)>(
              v10,
              "changeGameTime",
              (int (*)(Robot *, unsigned int, bool))Robot::changeGameTime);
      v12 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&,luabind::adl::object const&)>(
              v11,
              "registerRecvFunc",
              (int (*)(Robot *, const std::string *, const luabind::adl::object *))Robot::registerRecvFunc);
      v13.gap0[0] = (char)v12;
      v14 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&)>(
              v12,
              stru_DEB4800.gap0,
              (int (*)(Robot *, const std::string *))Robot::registerRecvFuncOnce);
      luabind::pure_out_value<5>((boost::arg<5>)v13.gap0[0]);
      luabind::pure_out_value<4>(v13);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>>(
        &v199,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEB4800);
      v15 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string const&,unsigned int,luabind::adl::object &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v14,
              "waitNotify",
              (void (*)(Robot *, const std::string *, unsigned int, luabind::adl::object *, int *))Robot::waitNotify,
              0);
      v16 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Robot::*)(void)>(
              v15,
              "getHasRecv",
              (unsigned int (*)(Robot *))Robot::getHasRecv);
      v17.gap0[0] = (char)v16;
      v18 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<luabind::adl::object (Robot::*)(void)>(
              v16,
              stru_DEC18C0.gap0,
              (luabind::adl::object (*)(Robot *))Robot::getRecvProto);
      luabind::pure_out_value<5>((boost::arg<5>)v17.gap0[0]);
      luabind::pure_out_value<4>(v17);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>>(
        &v200,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEC18C0);
      v19.gap0[0] = (char)v18;
      v20 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string const&,luabind::adl::object const&,luabind::adl::object&,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v18,
              stru_DEC03C0.gap0,
              (void (*)(Robot *, const std::string *, const luabind::adl::object *, luabind::adl::object *, int *))Robot::sendAndRecv,
              0);
      luabind::pure_out_value<6>((boost::arg<6>)v19.gap0[0]);
      luabind::pure_out_value<5>(v19);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<6,luabind::detail::null_type>>(
        &v201,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<6,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEC03C0);
      v21 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string const&,luabind::adl::object const&,std::string const&,luabind::adl::object&,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<6,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v20,
              "sendReq",
              (void (*)(Robot *, const std::string *, const luabind::adl::object *, const std::string *, luabind::adl::object *, int *))Robot::sendReq,
              0);
      v22 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v21,
              "protoRandomCheck",
              (int (*)(Robot *))Robot::protoRandomCheck);
      v23 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::string (Robot::*)(std::string const&,luabind::adl::object const&)>(
              v22,
              "getProtoShortDebugString",
              (std::string *(*)(std::string *__return_ptr __struct_ptr, Robot *, const std::string *, const luabind::adl::object *))Robot::getProtoShortDebugString);
      v24 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::string (Robot::*)(std::string const&,luabind::adl::object const&)>(
              v23,
              "getSerializedMessage",
              (std::string *(*)(std::string *__return_ptr __struct_ptr, Robot *, const std::string *, const luabind::adl::object *))Robot::getSerializedMessage);
      v25 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(int)>(
              v24,
              "setRevertMessageByte",
              (void (*)(Robot *, int))Robot::setRevertMessageByte);
      v26 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string,std::string,std::string)>(
              v25,
              "createTestSuite",
              (void (*)(Robot *, std::string, std::string, std::string))Robot::createTestSuite);
      v27 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string,std::string,std::string)>(
              v26,
              "createTestCase",
              (void (*)(Robot *, std::string, std::string, std::string))Robot::createTestCase);
      v28 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(int)>(
              v27,
              "endCase",
              (void (*)(Robot *, int))Robot::endCase);
      v29 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(void)>(
              v28,
              "endSuite",
              (void (*)(Robot *))Robot::endSuite);
      v30 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string)>(
              v29,
              "setSuiteFailure",
              (void (*)(Robot *, std::string))Robot::setSuiteFailure);
      v31 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string)>(
              v30,
              "setCaseFailure",
              (void (*)(Robot *, std::string))Robot::setCaseFailure);
      v32 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string,std::string)>(
              v31,
              "addCasePro",
              (void (*)(Robot *, std::string, std::string))Robot::addCasePro);
      v33 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(std::string,std::string)>(
              v32,
              "addSuitePro",
              (void (*)(Robot *, std::string, std::string))Robot::addSuitePro);
      v34 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(unsigned int)>(
              v33,
              "sleep",
              (void (*)(Robot *, unsigned int))Robot::sleep);
      v35 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
              v34,
              "ping",
              (int (*)(Robot *, unsigned int))Robot::ping);
      v36 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&)>(
              v35,
              "execScriptList",
              (int (*)(Robot *, const std::string *))Robot::execScriptList);
      v37 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v36,
              "getPlayerToken",
              (int (*)(Robot *))Robot::getPlayerToken);
      v38 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v37,
              "playerLogin",
              (int (*)(Robot *, const luabind::adl::object *))Robot::playerLogin);
      v39 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v38,
              "playerLogout",
              (int (*)(Robot *))Robot::playerLogout);
      v40 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v39,
              "setPlayerBornData",
              (int (*)(Robot *, const luabind::adl::object *))Robot::setPlayerBornData);
      v41 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v40,
              "enterScene",
              (int (*)(Robot *))Robot::enterScene);
      v42 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
              v41,
              "joinOtherScene",
              (int (*)(Robot *, unsigned int))Robot::joinOtherScene);
      v43 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v42,
              "leaveScene",
              (int (*)(Robot *))Robot::leaveScene);
      v44 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&)>(
              v43,
              "gmTalk",
              (int (*)(Robot *, const std::string *))Robot::gmTalk);
      v45 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v44,
              "avatarMove",
              (int (*)(Robot *, const luabind::adl::object *))Robot::avatarMove);
      v46 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,luabind::adl::object const&)>(
              v45,
              "entityMove",
              (int (*)(Robot *, unsigned int, const luabind::adl::object *))Robot::entityMove);
      v47 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v46,
              "npcTalk",
              (int (*)(Robot *, const luabind::adl::object *))Robot::npcTalk);
      v48 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,bool)>(
              v47,
              "changeGameTime",
              (int (*)(Robot *, unsigned int, bool))Robot::changeGameTime);
      v49 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v48,
              "getSceneTransPoint",
              (int (*)(Robot *, const luabind::adl::object *))Robot::getSceneTransPoint);
      v50 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v49,
              "enterTransPointRegionNotify",
              (int (*)(Robot *, const luabind::adl::object *))Robot::enterTransPointRegionNotify);
      v51 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v50,
              "exitTransPointRegionNotify",
              (int (*)(Robot *, const luabind::adl::object *))Robot::exitTransPointRegionNotify);
      v52 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v51,
              "sceneTransToPoint",
              (int (*)(Robot *, const luabind::adl::object *))Robot::sceneTransToPoint);
      v53 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v52,
              "getSceneArea",
              (int (*)(Robot *, const luabind::adl::object *))Robot::getSceneArea);
      v54 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v53,
              "setUpAvatarTeam",
              (int (*)(Robot *, const luabind::adl::object *))Robot::setUpAvatarTeam);
      v55 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v54,
              "chooseCurAvatarTeam",
              (int (*)(Robot *, const luabind::adl::object *))Robot::chooseCurAvatarTeam);
      v56 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v55,
              "changeAvatar",
              (int (*)(Robot *, const luabind::adl::object *))Robot::changeAvatar);
      v57 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v56,
              "avatarDieAnimationEnd",
              (int (*)(Robot *, const luabind::adl::object *))Robot::avatarDieAnimationEnd);
      v58 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v57,
              "getSceneNpcPosition",
              (int (*)(Robot *, const luabind::adl::object *))Robot::getSceneNpcPosition);
      v59 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v58,
              "useItem",
              (int (*)(Robot *, const luabind::adl::object *))Robot::useItem);
      v60 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v59,
              "dropItem",
              (int (*)(Robot *, const luabind::adl::object *))Robot::dropItem);
      v61 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v60,
              "pickItem",
              (int (*)(Robot *, const luabind::adl::object *))Robot::pickItem);
      v62 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v61,
              "wearEquip",
              (int (*)(Robot *, const luabind::adl::object *))Robot::wearEquip);
      v63 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v62,
              "takeoffEquip",
              (int (*)(Robot *, const luabind::adl::object *))Robot::takeoffEquip);
      v64 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v63,
              "drownMonster",
              (int (*)(Robot *, const luabind::adl::object *))Robot::drownMonster);
      v65 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v64,
              "gadgetInteract",
              (int (*)(Robot *, const luabind::adl::object *))Robot::gadgetInteract);
      v66 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v65,
              "evtBeingHit",
              (int (*)(Robot *, const luabind::adl::object *))Robot::evtBeingHit);
      v67.gap0[0] = (char)v66;
      v68 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v66,
              stru_DEB7840.gap0,
              (int (*)(Robot *, const luabind::adl::object *))Robot::addQuestContentProgress);
      luabind::pure_out_value<4>((boost::arg<4>)v67.gap0[0]);
      luabind::pure_out_value<3>(v67);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>>(
        &v202,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEB7840);
      v69.gap0[0] = (char)v68;
      v70 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(unsigned int,std::vector<unsigned int> &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v68,
              stru_DEC1B40.gap0,
              (void (*)(Robot *, unsigned int, std::vector<unsigned int> *, int *))Robot::getDungeonEntryPointList,
              0);
      luabind::pure_out_value<4>((boost::arg<4>)v69.gap0[0]);
      luabind::pure_out_value<3>(v69);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>>(
        &v203,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEC1B40);
      v71.gap0[0] = (char)v70;
      v72 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(unsigned int,std::vector<unsigned int> &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v70,
              stru_DEC1B80.gap0,
              (void (*)(Robot *, unsigned int, std::vector<unsigned int> *, int *))Robot::getDungeonWayPointList,
              0);
      luabind::pure_out_value<4>((boost::arg<4>)v71.gap0[0]);
      luabind::pure_out_value<3>(v71);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>>(
        &v204,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEC1B80);
      v73.gap0[0] = (char)v72;
      v74 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(unsigned int,std::vector<unsigned int> &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v72,
              stru_DEB78C0.gap0,
              (void (*)(Robot *, unsigned int, std::vector<unsigned int> *, int *))Robot::getDungeonEntryInfo,
              0);
      luabind::pure_out_value<4>((boost::arg<4>)v73.gap0[0]);
      luabind::pure_out_value<3>(v73);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>>(
        &v205,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEB78C0);
      v75 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(unsigned int,std::vector<unsigned int> &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>>(
              v74,
              "getSceneTransPointList",
              (void (*)(Robot *, unsigned int, std::vector<unsigned int> *, int *))Robot::getSceneTransPointList,
              0);
      v76 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v75,
              "playerEnterDungeon",
              (int (*)(Robot *, const luabind::adl::object *))Robot::playerEnterDungeon);
      v77 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v76,
              "playerQuitDungeon",
              (int (*)(Robot *))Robot::playerQuitDungeon);
      v78 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v77,
              "dungeonWayPointActivate",
              (int (*)(Robot *, const luabind::adl::object *))Robot::dungeonWayPointActivate);
      v79 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v78,
              "avatarPromote",
              (int (*)(Robot *, const luabind::adl::object *))Robot::avatarPromote);
      v80 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v79,
              "unlockTalent",
              (int (*)(Robot *, const luabind::adl::object *))Robot::unlockTalent);
      v81 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v80,
              "dungeonDieOption",
              (int (*)(Robot *, const luabind::adl::object *))Robot::dungeonDieOption);
      v82 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v81,
              "springUse",
              (int (*)(Robot *, const luabind::adl::object *))Robot::springUse);
      v83 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v82,
              "setPlayerProp",
              (int (*)(Robot *, const luabind::adl::object *))Robot::setPlayerProp);
      v84 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v83,
              "refreshBackgroundAvatar",
              (int (*)(Robot *))Robot::refreshBackgroundAvatar);
      v85 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v84,
              "selectWorktopOption",
              (int (*)(Robot *, const luabind::adl::object *))Robot::selectWorktopOption);
      v86 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v85,
              "getOnlinePlayerList",
              (int (*)(Robot *))Robot::getOnlinePlayerList);
      v87 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v86,
              "getQuestTalkHistory",
              (int (*)(Robot *, const luabind::adl::object *))Robot::getQuestTalkHistory);
      v88 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v87,
              "executeGroupTrigger",
              (int (*)(Robot *, const luabind::adl::object *))Robot::executeGroupTrigger);
      v89 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v88,
              "levelupCity",
              (int (*)(Robot *, const luabind::adl::object *))Robot::levelupCity);
      v90 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&)>(
              v89,
              "setPlayerName",
              (int (*)(Robot *, const std::string *))Robot::setPlayerName);
      v91 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v90,
              "avatarChangeElementType",
              (int (*)(Robot *, const luabind::adl::object *))Robot::avatarChangeElementType);
      v92 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v91,
              "randomGoto",
              (int (*)(Robot *))Robot::randomGoto);
      v93 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v92,
              "randomMove",
              (int (*)(Robot *))Robot::randomMove);
      v94 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v93,
              "unlockTransPoint",
              (int (*)(Robot *, const luabind::adl::object *))Robot::unlockTransPoint);
      v95 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v94,
              "playerCook",
              (int (*)(Robot *, const luabind::adl::object *))Robot::playerCook);
      v96 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v95,
              "playerCompoundMaterial",
              (int (*)(Robot *, const luabind::adl::object *))Robot::playerCompoundMaterial);
      v97 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
              v96,
              "getCompoundData",
              (int (*)(Robot *))Robot::getCompoundData);
      v98 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v97,
              "takeCompoundOutput",
              (int (*)(Robot *, const luabind::adl::object *))Robot::takeCompoundOutput);
      v99 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
              v98,
              "executeGadgetLua",
              (int (*)(Robot *, const luabind::adl::object *))Robot::executeGadgetLua);
      v100 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v99,
               "finishDungeon",
               (int (*)(Robot *))Robot::finishDungeon);
      v101 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v100,
               "getGachaInfo",
               (int (*)(Robot *))Robot::getGachaInfo);
      v102 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int,unsigned int,std::string const&)>(
               v101,
               "doGacha",
               (int (*)(Robot *, unsigned int, unsigned int, unsigned int, const std::string *))Robot::doGacha);
      v103 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int,unsigned int)>(
               v102,
               "gachaWish",
               (int (*)(Robot *, unsigned int, unsigned int, unsigned int))Robot::gachaWish);
      v104 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v103,
               "gachaOpenWish",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::gachaOpenWish);
      v105 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v104,
               "completeTalk",
               (int (*)(Robot *, unsigned int))Robot::completeTalk);
      v106 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int,unsigned int)>(
               v105,
               "doCombine",
               (int (*)(Robot *, unsigned int, unsigned int, unsigned int))Robot::doCombine);
      v107 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v106,
               "doItemGiving",
               (int (*)(Robot *, const luabind::adl::object *))Robot::doItemGiving);
      v108 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v107,
               "playerChat",
               (int (*)(Robot *, const luabind::adl::object *))Robot::playerChat);
      v109 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v108,
               "playerApplyEnterMp",
               (int (*)(Robot *, unsigned int))Robot::playerApplyEnterMp);
      v110 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v109,
               "joinPlayerScene",
               (int (*)(Robot *, unsigned int))Robot::joinPlayerScene);
      v111 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&,luabind::adl::object const&)>(
               v110,
               "sendNotify",
               (int (*)(Robot *, const std::string *, const luabind::adl::object *))Robot::sendNotify);
      v112 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v111,
               "hitClientTrivial",
               (int (*)(Robot *, const luabind::adl::object *))Robot::hitClientTrivial);
      v113 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v112,
               "focusAvatar",
               (int (*)(Robot *, const luabind::adl::object *))Robot::focusAvatar);
      v114 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v113,
               "getActivitySchedule",
               (int (*)(Robot *))Robot::getActivitySchedule);
      v115 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v114,
               "getActivityInfo",
               (int (*)(Robot *, const luabind::adl::object *))Robot::getActivityInfo);
      v116 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v115,
               "seaLampFlyLamp",
               (int (*)(Robot *, const luabind::adl::object *))Robot::seaLampFlyLamp);
      v117 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v116,
               "activityTakeWatcherReward",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::activityTakeWatcherReward);
      v118 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v117,
               "recharge",
               (int (*)(Robot *, const luabind::adl::object *))Robot::recharge);
      v119 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v118,
               "getShopmallData",
               (int (*)(Robot *))Robot::getShopmallData);
      v120 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v119,
               "getShop",
               (int (*)(Robot *, unsigned int))Robot::getShop);
      v121 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,luabind::adl::object const&,unsigned int)>(
               v120,
               "buyGoods",
               (int (*)(Robot *, unsigned int, const luabind::adl::object *, unsigned int))Robot::buyGoods);
      v122.gap0[0] = (char)v121;
      v123 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v121,
               stru_DEBA840.gap0,
               (int (*)(Robot *))Robot::getPlayerFriendList);
      luabind::pure_out_value<3>((boost::arg<3>)v122.gap0[0]);
      luabind::pure_out_value<2>(v122);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>>(
        &v206,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEBA840);
      v124.gap0[0] = (char)v123;
      v125 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(luabind::adl::object &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type>>>(
               v123,
               stru_DEB9E40.gap0,
               (void (*)(Robot *, luabind::adl::object *, int *))Robot::getPlayerDataBin,
               0);
      luabind::pure_out_value<3>((boost::arg<3>)v124.gap0[0]);
      luabind::pure_out_value<2>(v124);
      luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type>::operator+<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>>(
        &v207,
        (luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>)&stru_DEB9E40);
      v126 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Robot::*)(luabind::adl::object &,int &),luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type>>>(
               v125,
               "getEmptyPlayerDataBin",
               (void (*)(Robot *, luabind::adl::object *, int *))Robot::getEmptyPlayerDataBin,
               0);
      v127 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v126,
               "mpPlayOwnerCheck",
               (int (*)(Robot *, unsigned int))Robot::mpPlayOwnerCheck);
      v128 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v127,
               "mpPlayOwnerStartInvite",
               (int (*)(Robot *, unsigned int))Robot::mpPlayOwnerStartInvite);
      v129 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,bool)>(
               v128,
               "mpPlayGuestReplyInvite",
               (int (*)(Robot *, unsigned int, bool))Robot::mpPlayGuestReplyInvite);
      v130 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v129,
               "mcoinExchangeHcoin",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::mcoinExchangeHcoin);
      v131 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v130,
               "getCityReputationInfo",
               (int (*)(Robot *, unsigned int))Robot::getCityReputationInfo);
      v132 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v131,
               "takeCityReputationLevelReward",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::takeCityReputationLevelReward);
      v133 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,luabind::adl::object const&)>(
               v132,
               "takeCityReputationParentQuest",
               (int (*)(Robot *, unsigned int, const luabind::adl::object *))Robot::takeCityReputationParentQuest);
      v134 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v133,
               "acceptCityReputationRequest",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::acceptCityReputationRequest);
      v135 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v134,
               "cancelCityReputationRequest",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::cancelCityReputationRequest);
      v136 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v135,
               "getCityReputationMapInfo",
               (int (*)(Robot *))Robot::getCityReputationMapInfo);
      v137 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,luabind::adl::object const&)>(
               v136,
               "takeCityReputationExploreReward",
               (int (*)(Robot *, unsigned int, const luabind::adl::object *))Robot::takeCityReputationExploreReward);
      v138 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v137,
               "playerOffering",
               (int (*)(Robot *, unsigned int))Robot::playerOffering);
      v139 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v138,
               "takeOfferingLevelReward",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::takeOfferingLevelReward);
      v140 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v139,
               "attachAvatarWidget",
               (int (*)(Robot *, unsigned int))Robot::attachAvatarWidget);
      v141 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v140,
               "dettachAvatarWidget",
               (int (*)(Robot *, unsigned int))Robot::dettachAvatarWidget);
      v142 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Robot::*)(unsigned int,unsigned int)>(
               v141,
               "getEntityIdByGroupIdConfigId",
               (unsigned int (*)(Robot *, unsigned int, unsigned int))Robot::getEntityIdByGroupIdConfigId);
      v143 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v142,
               "printEntityGroupIdConfigIdUnionKeyMap",
               (int (*)(Robot *))Robot::printEntityGroupIdConfigIdUnionKeyMap);
      v144 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&,unsigned int)>(
               v143,
               "validateAppearEntityList",
               (int (*)(Robot *, const luabind::adl::object *, unsigned int))Robot::validateAppearEntityList);
      v145 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v144,
               "mechanicusUnlockGear",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::mechanicusUnlockGear);
      v146 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v145,
               "mechanicusLevelupGear",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::mechanicusLevelupGear);
      v147 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v146,
               "mechanicusEnterDungeon",
               (int (*)(Robot *, unsigned int))Robot::mechanicusEnterDungeon);
      v148 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v147,
               "adjustWorldLevel",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::adjustWorldLevel);
      v149 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(std::string const&,std::string const&)>(
               v148,
               "testUnionCmd",
               (int (*)(Robot *, const std::string *, const std::string *))Robot::testUnionCmd);
      v150 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v149,
               "backMyWorld",
               (int (*)(Robot *))Robot::backMyWorld);
      v151 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v150,
               "tryEnterHome",
               (int (*)(Robot *, unsigned int))Robot::tryEnterHome);
      v152 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v151,
               "sendHomeGetBasicInfoReq",
               (int (*)(Robot *))Robot::sendHomeGetBasicInfoReq);
      v153 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(bool)>(
               v152,
               "changeHomeEditMode",
               (int (*)(Robot *, bool))Robot::changeHomeEditMode);
      v154 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v153,
               "changeHomeModule",
               (int (*)(Robot *, unsigned int))Robot::changeHomeModule);
      v155 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v154,
               "getHomeArrangementInfo",
               (int (*)(Robot *, const luabind::adl::object *))Robot::getHomeArrangementInfo);
      v156 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(bool,unsigned int)>(
               v155,
               "updateHomeArrangementInfo",
               (int (*)(Robot *, bool, unsigned int))Robot::updateHomeArrangementInfo);
      v157 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v156,
               "chooseHomeModule",
               (int (*)(Robot *, unsigned int))Robot::chooseHomeModule);
      v158 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v157,
               "talkHomeAvatar",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::talkHomeAvatar);
      v159 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(bool,luabind::adl::object const&,luabind::adl::object const&,luabind::adl::object const&)>(
               v158,
               "updateHomeArrangementForAvatarTest",
               (int (*)(Robot *, bool, const luabind::adl::object *, const luabind::adl::object *, const luabind::adl::object *))Robot::updateHomeArrangementForAvatarTest);
      v160 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v159,
               "getHomeEventReward",
               (int (*)(Robot *, unsigned int))Robot::getHomeEventReward);
      v161 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int,unsigned int)>(
               v160,
               "summonHomeAvatarEvent",
               (int (*)(Robot *, unsigned int, unsigned int))Robot::summonHomeAvatarEvent);
      v162 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v161,
               "avatarRelativeMove",
               (int (*)(Robot *, const luabind::adl::object *))Robot::avatarRelativeMove);
      v163 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&)>(
               v162,
               "entityRelativeMove",
               (int (*)(Robot *, const luabind::adl::object *))Robot::entityRelativeMove);
      v164 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(void)>(
               v163,
               "unionCmdMove",
               (int (*)(Robot *))Robot::unionCmdMove);
      v165 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(unsigned int)>(
               v164,
               "unionCmdMoveByEntityId",
               (int (*)(Robot *, unsigned int))Robot::unionCmdMoveByEntityId);
      v166 = luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Robot::*)(luabind::adl::object const&,luabind::adl::object const&,bool)>(
               v165,
               "unionCmdAbility",
               (int (*)(Robot *, const luabind::adl::object *, const luabind::adl::object *, bool))Robot::unionCmdAbility);
      luabind::scope::scope(&v215, v166);
      luabind::module_::operator[](&v224, &v215);
      luabind::scope::~scope(&v215);
      luabind::class_<Robot,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v227);
      v224 = (luabind::value)luabind::module(lua_state_ptr, 0LL);
      luabind::def<std::string const& (*)(int)>(name, (const std::string *(*)(int))"getRetcodeName");
      luabind::def<std::string const& (*)(unsigned int)>(
        (const char *)&v213,
        (const std::string *(*)(unsigned int))"getCmdName");
      luabind::def<void (*)(std::string const&)>((const char *)&v212, (void (*)(const std::string *))"logError");
      luabind::def<void (*)(std::string const&)>((const char *)&v211, (void (*)(const std::string *))"logWarning");
      luabind::def<void (*)(std::string const&)>((const char *)&v210, (void (*)(const std::string *))"logInfo");
      luabind::def<void (*)(std::string const&)>((const char *)&s, (void (*)(const std::string *))"logDebug");
      luabind::def<std::vector<float> (*)(data::ConstValueType)>(
        (const char *)&v208,
        (std::vector<float> *(*)(std::vector<float> *__return_ptr __struct_ptr, data::ConstValueType))"getConstValue");
      v167 = luabind::scope::operator,(&v208, (luabind::scope)&s);
      v168 = luabind::scope::operator,(v167, (luabind::scope)&v210);
      v169 = luabind::scope::operator,(v168, (luabind::scope)&v211);
      v170 = luabind::scope::operator,(v169, (luabind::scope)&v212);
      v171 = luabind::scope::operator,(v170, (luabind::scope)&v213);
      v172 = luabind::scope::operator,(v171, (luabind::scope)name);
      luabind::scope::scope(&v215, v172);
      luabind::module_::operator[](&v224, &v215);
      luabind::scope::~scope(&v215);
      luabind::scope::~scope(&v208);
      luabind::scope::~scope(&s);
      luabind::scope::~scope(&v210);
      luabind::scope::~scope(&v211);
      luabind::scope::~scope(&v212);
      luabind::scope::~scope(&v213);
      luabind::scope::~scope((luabind::scope *const)name);
      v224 = (luabind::value)luabind::module(lua_state_ptr, 0LL);
      luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        (luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227,
        "Vector3");
      v173 = luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readwrite<Vector3,float>(
               (luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227,
               "x",
               0LL);
      v174 = luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readwrite<Vector3,float>(
               v173,
               "y",
               0LL);
      v175 = luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readwrite<Vector3,float>(
               v174,
               "z",
               0LL);
      luabind::scope::scope((luabind::scope *const)name, v175);
      luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        &v226,
        off_DEC1F20);
      luabind::pure_out_value<3>((boost::arg<3>)&v226);
      v176 = luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (common::tools::TxtFile::Row::*)(std::string const&,double &)const,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>(
               &v226,
               "assignToNum",
               (int (*)(const common::tools::TxtFile::Row *, const std::string *, double *))common::tools::TxtFile::Row::assignToNum<double>,
               0);
      luabind::pure_out_value<3>((boost::arg<3>)&v226);
      v177.gap0[0] = (char)v176;
      v178 = luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (common::tools::TxtFile::Row::*)(std::string const&,unsigned int &)const,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>(
               v176,
               "assignToEnum",
               (int (*)(const common::tools::TxtFile::Row *, const std::string *, unsigned int *))common::tools::TxtFile::Row::assignToEnum<unsigned int>,
               0);
      luabind::pure_out_value<3>(v177);
      v179 = luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (common::tools::TxtFile::Row::*)(std::string const&,std::string&)const,luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type>>(
               v178,
               "assignToStr",
               (int (*)(const common::tools::TxtFile::Row *, const std::string *, std::string *))common::tools::TxtFile::Row::assignToStr,
               0);
      v180 = luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<bool (common::tools::TxtFile::Row::*)(std::string const&)const>(
               v179,
               "hasKey",
               (bool (*)(const common::tools::TxtFile::Row *, const std::string *))common::tools::TxtFile::Row::hasKey);
      luabind::scope::scope(&v213, v180);
      luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        &v225,
        "TxtFile");
      v181 = luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (common::tools::TxtFile::*)(char const*)>(
               &v225,
               "load",
               (int (*)(common::tools::TxtFile *, const char *))common::tools::TxtFile::load);
      v182 = luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (common::tools::TxtFile::*)(void)>(
               v181,
               "rowNum",
               (unsigned int (*)(common::tools::TxtFile *))common::tools::TxtFile::rowNum);
      v183 = luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<common::tools::TxtFile::Row const* (common::tools::TxtFile::*)(unsigned int)>(
               v182,
               sig.gap0,
               (const common::tools::TxtFile::Row *(*)(common::tools::TxtFile *, unsigned int))common::tools::TxtFile::row);
      v184 = luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type>(
               v183,
               (luabind::constructor<luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type,luabind::detail::null_type>)&sig);
      v185 = luabind::scope::operator,(v184, (luabind::scope)&v213);
      v186 = luabind::scope::operator,(v185, (luabind::scope)name);
      luabind::scope::scope(&v215, v186);
      luabind::module_::operator[](&v224, &v215);
      luabind::scope::~scope(&v215);
      luabind::class_<common::tools::TxtFile,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v225);
      luabind::scope::~scope(&v213);
      luabind::class_<common::tools::TxtFile::Row,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v226);
      luabind::scope::~scope((luabind::scope *const)name);
      luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227);
      v220 = (luabind::value)luabind::module(lua_state_ptr, 0LL);
      luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        (luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227,
        "InBattleMechanicusStageType");
      *(luabind::detail::enum_maker<luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)name = luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227, "constants");
      luabind::value::value<proto::InBattleMechanicusStageType>(
        &v224,
        "IN_BATTLE_MECHANICUS_STAGE_KILL",
        IN_BATTLE_MECHANICUS_STAGE_KILL);
      luabind::value::value<proto::InBattleMechanicusStageType>(
        &v223,
        "IN_BATTLE_MECHANICUS_STAGE_CARD_FLIP",
        IN_BATTLE_MECHANICUS_STAGE_CARD_FLIP);
      luabind::value::value<proto::InBattleMechanicusStageType>(
        &rhs,
        "IN_BATTLE_MECHANICUS_STAGE_BUILD",
        IN_BATTLE_MECHANICUS_STAGE_BUILD);
      luabind::value::value<proto::InBattleMechanicusStageType>(
        &v221,
        "IN_BATTLE_MECHANICUS_STAGE_NONE",
        IN_BATTLE_MECHANICUS_STAGE_NONE);
      luabind::value::operator,((luabind::value_vector *)&v228, &v221, &rhs);
      v187 = luabind::value_vector::operator,((luabind::value_vector *const)&v228, &v223);
      v188 = luabind::value_vector::operator,(v187, &v224);
      v189 = luabind::detail::enum_maker<luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
               (luabind::detail::enum_maker<luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)name,
               v188);
      luabind::scope::scope(&v215, v189);
      luabind::module_::operator[](&v220, &v215);
      luabind::scope::~scope(&v215);
      luabind::value_vector::~value_vector((luabind::value_vector *const)&v228);
      luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::InBattleMechanicusStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227);
      v217 = luabind::module(lua_state_ptr, 0LL);
      luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        (luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227,
        "FoundationOpType");
      *(luabind::detail::enum_maker<luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)name = luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227, "constants");
      luabind::value::value<proto::FoundationOpType>(&v224, "FOUNDATION_OP_UNLOCK", FOUNDATION_OP_UNLOCK);
      luabind::value::value<proto::FoundationOpType>(&v223, "FOUNDATION_OP_LOCK", FOUNDATION_OP_LOCK);
      luabind::value::value<proto::FoundationOpType>(&rhs, "FOUNDATION_OP_ROTATE", FOUNDATION_OP_ROTATE);
      luabind::value::value<proto::FoundationOpType>(&v221, "FOUNDATION_OP_REBUILD", FOUNDATION_OP_REBUILD);
      luabind::value::value<proto::FoundationOpType>(&v220, "FOUNDATION_OP_DEMOLITION", FOUNDATION_OP_DEMOLITION);
      luabind::value::value<proto::FoundationOpType>(&v219, "FOUNDATION_OP_BUILD", FOUNDATION_OP_BUILD);
      luabind::value::value<proto::FoundationOpType>(&v218, "FOUNDATION_OP_NONE", FOUNDATION_OP_NONE);
      luabind::value::operator,((luabind::value_vector *)&v228, &v218, &v219);
      v190 = luabind::value_vector::operator,((luabind::value_vector *const)&v228, &v220);
      v191 = luabind::value_vector::operator,(v190, &v221);
      v192 = luabind::value_vector::operator,(v191, &rhs);
      v193 = luabind::value_vector::operator,(v192, &v223);
      v194 = luabind::value_vector::operator,(v193, &v224);
      v195 = luabind::detail::enum_maker<luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
               (luabind::detail::enum_maker<luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)name,
               v194);
      luabind::scope::scope(&v215, v195);
      luabind::module_::operator[](&v217, &v215);
      luabind::scope::~scope(&v215);
      luabind::value_vector::~value_vector((luabind::value_vector *const)&v228);
      luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::FoundationOpType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227);
      v220 = (luabind::value)luabind::module(lua_state_ptr, 0LL);
      luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
        (luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227,
        "FoundationStatus");
      *(luabind::detail::enum_maker<luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)name = luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227, "constants");
      luabind::value::value<proto::FoundationStatus>(&v224, "FOUNDATION_STATUS_BUILT", FOUNDATION_STATUS_BUILT);
      luabind::value::value<proto::FoundationStatus>(&v223, "FOUNDATION_STATUS_BUILDING", FOUNDATION_STATUS_BUILDING);
      luabind::value::value<proto::FoundationStatus>(&rhs, "FOUNDATION_STATUS_INIT", FOUNDATION_STATUS_INIT);
      luabind::value::value<proto::FoundationStatus>(&v221, "FOUNDATION_STATUS_NONE", FOUNDATION_STATUS_NONE);
      luabind::value::operator,((luabind::value_vector *)&v228, &v221, &rhs);
      v196 = luabind::value_vector::operator,((luabind::value_vector *const)&v228, &v223);
      v197 = luabind::value_vector::operator,(v196, &v224);
      v198 = luabind::detail::enum_maker<luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
               (luabind::detail::enum_maker<luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)name,
               v197);
      luabind::scope::scope(&v215, v198);
      luabind::module_::operator[](&v220, &v215);
      luabind::scope::~scope(&v215);
      luabind::value_vector::~value_vector((luabind::value_vector *const)&v228);
      luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::FoundationStatus,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v227);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v228,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.cpp",
      "registerScriptFunc",
      884);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v228, (const char (*)[22])"lua_state_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v228);
    return -1;
  }
};

// Line 1138: range 000000000047D05E-000000000047D142
LuaStatePtr __cdecl Robot::createLuaState()
{
  std::shared_ptr<lua_State> *v0; // rdi
  lua_State *v1; // rsi
  common::milog::MiLogStream *v2; // rax
  LuaStatePtr result; // rax
  lua_State_0 *lua_state_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  lua_state_ptr = luaL_newstate();
  if ( lua_state_ptr )
  {
    luaL_openlibs(lua_state_ptr);
    luabind::open(lua_state_ptr, v1);
    std::shared_ptr<lua_State>::shared_ptr<lua_State,void (*)(lua_State*),void>(
      v0,
      lua_state_ptr,
      (void (*)(lua_State *))LuaConfigMgr::destroyLuaState);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/robot/robot.cpp",
      "createLuaState",
      1142);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v2, (const char (*)[21])"luaL_newstate failed");
    common::milog::MiLogStream::~MiLogStream(&v5);
    std::shared_ptr<lua_State>::shared_ptr(v0, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  return result;
};
