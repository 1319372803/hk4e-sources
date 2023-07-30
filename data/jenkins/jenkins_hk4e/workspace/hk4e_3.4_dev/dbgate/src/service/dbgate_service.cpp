// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/dbgate_service.cpp

// Line 31: range 000000000C5D7E5A-000000000C5D894A
int32_t __cdecl DbgateService::init(DbgateService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::string *p_path; // rsi
  unsigned int v7; // edx
  char v8; // al
  std::string *v9; // rsi
  unsigned int v10; // ecx
  char v11; // dl
  uint32_t token_thread_num; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >> *v19; // rax
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *v20; // rcx
  common::tools::PTree *v21; // r14
  common::tools::PTree *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t v26; // r14d
  int v27; // r14d
  int v28; // r14d
  int v29; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-135h] BYREF
  int i; // [rsp+1Ch] [rbp-134h]
  std::string path; // [rsp+20h] [rbp-130h] BYREF
  std::string v35; // [rsp+40h] [rbp-110h] BYREF
  std::string v36; // [rsp+60h] [rbp-F0h] BYREF
  std::string child_name; // [rsp+80h] [rbp-D0h] BYREF
  char v38[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 25 config_player_db_count:72 48 4 23 config_home_db_count:73 64 8 12 dbgate_pt:33 96 16 2"
                        "1 mysql_extra_pt_opt:71";
  *(_QWORD *)(v2 + 16) = DbgateService::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Dbgate", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 64)) )
  {
    v5 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.token_thread_num", &__a);
    p_path = &path;
    v7 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v2 + 64), &path, 0);
    v8 = *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(p_path) = v8 != 0;
      __asan_report_store4(&this->token_thread_num_, p_path);
    }
    this->token_thread_num_ = v7;
    std::string::~string(&path);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v35, "<xmlattr>.token_queue_max_size", &__a);
    v9 = &v35;
    v10 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v2 + 64), &v35, 0);
    v11 = *(_BYTE *)(((unsigned __int64)&this->token_queue_max_size_ >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v11 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(&this->token_queue_max_size_, v9);
    }
    this->token_queue_max_size_ = v10;
    std::string::~string(&v35);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->token_thread_num_);
    }
    token_thread_num = this->token_thread_num_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( token_thread_num < this->thread_num_ )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/dbgate_service.cpp",
        "init",
        50);
      v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&child_name,
              (const char (*)[25])"dbgate token_thread_num:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->token_thread_num_);
      v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v17,
              (const char (*)[24])" token_queue_max_size_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->token_queue_max_size_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->token_thread_num_);
      }
      if ( this->token_thread_num_ )
      {
        for ( i = 0; ; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->token_thread_num_);
          }
          if ( this->token_thread_num_ <= i )
            break;
          v19 = std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>>>::operator[](
                  &this->packet_queue_vec_,
                  i);
          v20 = std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>>::operator->(v19);
          if ( *(_BYTE *)(((unsigned __int64)&this->token_queue_max_size_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_queue_max_size_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->token_queue_max_size_);
          }
          common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::setMaxSize(v20, this->token_queue_max_size_);
        }
      }
      if ( RegisterRateMgr::init(&this->register_rate_mgr, (common::tools::PTree *)(v2 + 64)) )
      {
        v5 = -1;
      }
      else if ( ServiceBase::addHandler<LoginHandler>(this) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/dbgate_service.cpp",
          "init",
          68);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "add handler<LoginHandler> failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v5 = -1;
      }
      else
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&child_name, "Root.MysqlExtraConf", &__a);
        common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 96), pt, &child_name);
        std::string::~string(&child_name);
        std::allocator<char>::~allocator(&__a);
        *(_DWORD *)(v2 + 32) = 0;
        *(_DWORD *)(v2 + 48) = 0;
        if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 96)) )
        {
          v21 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&v36, "<xmlattr>.player_db_count", &__a);
          *(_DWORD *)(v2 + 32) = common::tools::PTree::get<unsigned int>(v21, &v36, 0);
          std::string::~string(&v36);
          std::allocator<char>::~allocator(&__a);
          v22 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.home_db_count", &__a);
          *(_DWORD *)(v2 + 48) = common::tools::PTree::get<unsigned int>(v22, &child_name, 0);
          std::string::~string(&child_name);
          std::allocator<char>::~allocator(&__a);
        }
        if ( *(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 48) )
        {
          if ( MysqlOpPlayerData::init(*(_DWORD *)(v2 + 32)) )
          {
            v5 = -1;
          }
          else if ( MysqlOpHomeData::init(*(_DWORD *)(v2 + 48)) )
          {
            v5 = -1;
          }
          else
          {
            v26 = MysqlOpPlayerData::checkMysqlTableExistance();
            v27 = MysqlOpMisc::checkMysqlTableExistance() | v26;
            v28 = MysqlOpOrder::checkMysqlTableExistance() | v27;
            v29 = MysqlOpPlayerPsnOnlineIdData::checkMysqlTableExistance() | v28;
            if ( v29 | MysqlOpHomeData::checkMysqlTableExistance() )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&child_name,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/service/dbgate_service.cpp",
                "init",
                103);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)&child_name,
                (const char (*)[30])"checkMysqlTableExistance fail");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/dbgate_service.cpp",
            "init",
            83);
          v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  (common::milog::MiLogStream *const)&child_name,
                  (const char (*)[17])"player_db_count:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 32));
          v25 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v24,
                  (const char (*)[29])" is not equal home_db_count:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v5 = -1;
        }
        std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/dbgate_service.cpp",
        "init",
        46);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)&child_name,
              (const char (*)[44])"token_thread_num_ to big,token_thread_num_:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->token_thread_num_);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" thread_num_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->thread_num_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 64));
  result = v5;
  if ( v38 == (char *)v2 )
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

// Line 112: range 000000000C5D894C-000000000C5D8A08
int32_t __cdecl DbgateService::defaultProcessPacketFunc(
        DbgateService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const std::string *v3; // rax
  const char *v4; // rax
  uint32_t cmd_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v2);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/dbgate_service.cpp",
    "defaultProcessPacketFunc",
    114);
  v3 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
  v4 = (const char *)std::string::c_str(v3);
  common::milog::MiLogStream::operator()(&v7, "can not find func for cmd_id=%u, name=%s", cmd_id, v4);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 121: range 000000000C5D8A0A-000000000C5D8C53
int32_t __cdecl DbgateService::getPacketQueueIndex(DbgateService *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t PacketQueueIndex; // ebx
  unsigned __int64 v3; // rdx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t token_thread_num; // ebx
  common::minet::Packet *v6; // rax
  uint32_t ThreadOffset; // edx
  uint32_t thread_num; // esi
  uint64_t index; // [rsp+18h] [rbp-28h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-20h] BYREF

  if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->token_thread_num_);
  }
  if ( this->token_thread_num_ )
  {
    v4 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getCmdId(v4) == 172 )
    {
      index = std::__atomic_base<unsigned long>::operator++(&this->next_packet_queue_index, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->token_thread_num_);
      }
      return index % this->token_thread_num_;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->token_thread_num_);
      }
      token_thread_num = this->token_thread_num_;
      v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      ThreadOffset = common::minet::Packet::getThreadOffset(v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->thread_num_);
      }
      thread_num = this->thread_num_;
      if ( *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->token_thread_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->token_thread_num_);
      }
      return token_thread_num + ThreadOffset % (thread_num - this->token_thread_num_);
    }
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    PacketQueueIndex = ServiceBase::getPacketQueueIndex(this, (common::minet::PacketPtr)__PAIR128__(v3, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  return PacketQueueIndex;
};

// Line 143: range 000000000C5D8C54-000000000C5D8C62
uint32_t __cdecl DbgateService::getServiceType(DbgateService *const this)
{
  return 5;
};

// Line 150: range 000000000C5D8C64-000000000C5D8EAA
ConfigPtr __cdecl DbgateService::getConfig(DbgateService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v8; // [rsp+8h] [rbp-98h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v8 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (DbgateService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:152";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)DbgateService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/dbgate_service.cpp",
      "getConfig",
      157);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v10,
      (const char (*)[27])"config_base_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 32LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 32LL);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&__r, v5);
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::dynamic_pointer_cast<Config,ConfigBase>(v8);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v8;
  return result;
};

// Line 169: range 000000000C5D8EAC-000000000C5D8F43
int32_t __cdecl DbgateService::onWorkThreadStart(DbgateService *const this, uint32_t thread_index)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( mysqlpp::Connection::thread_start() )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/service/dbgate_service.cpp",
    "onWorkThreadStart",
    172);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v3, (const char (*)[19])"thread_start fails");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 180: range 000000000C5D8F44-000000000C5D8F5E
int32_t __cdecl DbgateService::onWorkThreadStop(DbgateService *const this, uint32_t thread_index)
{
  mysqlpp::Connection::thread_end();
  return 0;
};

// Line 186: range 000000000C5D8F60-000000000C5D8FD7
void __cdecl DbgateService::onEverySecond(DbgateService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // rdx
  std::shared_ptr<MonitorReport> monitor_report_ptr; // [rsp+10h] [rbp-20h] BYREF

  if ( !thread_index )
  {
    std::shared_ptr<MonitorReport>::shared_ptr(&monitor_report_ptr, &ResourceBox::monitor_report_ptr);
    ExternalMonitorReportMgr::reportToMonitor(
      &this->external_monitor_report_mgr,
      (std::shared_ptr<MonitorReport>)__PAIR128__(v2, &monitor_report_ptr));
    std::shared_ptr<MonitorReport>::~shared_ptr(&monitor_report_ptr);
  }
};
