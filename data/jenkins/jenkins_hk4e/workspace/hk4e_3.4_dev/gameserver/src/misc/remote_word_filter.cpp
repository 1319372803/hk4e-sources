// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/remote_word_filter.cpp

// Line 22: range 000000001557EF0E-000000001557FA70
common::minet::http_client::HttpRequest *__cdecl RemoteWordFilter::buildQueryHttpReq(
        common::minet::http_client::HttpRequest *retstr,
        const std::string *str,
        Player *player,
        uint32_t text_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  bool *p_remote_word_filter_is_ssl; // rax
  bool remote_word_filter_is_ssl; // cl
  std::string *p_remote_word_filter_host; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Json::Value_0 *v14; // rax
  Json::Value_0 *v15; // rax
  Json::Value_0 *v16; // rax
  Json::Value_0 *v17; // rax
  unsigned int Uid; // eax
  Json::Value_0 *v19; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v21; // rax
  Json::Value_0 *v22; // rax
  Json::Value_0 *v23; // rax
  Json::Value_0 *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const std::string *v26; // rax
  Json::Value_0 *v27; // rax
  World *v28; // r14
  Json::Value_0 *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-221h] BYREF
  Json::String v35; // [rsp+30h] [rbp-220h] BYREF
  std::string s; // [rsp+50h] [rbp-200h] BYREF
  std::string v37; // [rsp+70h] [rbp-1E0h] BYREF
  Json::Value_0 other; // [rsp+90h] [rbp-1C0h] BYREF
  char v39[400]; // [rsp+C0h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 16 13 config_ptr:23 80 16 12 world_ptr:43 112 40 7 body:30 192 40 6 ext:36 272 48 9 writer:52";
  *(_QWORD *)(v4 + 16) = RemoteWordFilter::buildQueryHttpReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862730] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 48));
  common::minet::http_client::HttpRequest::HttpRequest(retstr);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
  p_remote_word_filter_is_ssl = &v7->remote_word_filter_is_ssl;
  if ( *(_BYTE *)(((unsigned __int64)p_remote_word_filter_is_ssl >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_remote_word_filter_is_ssl & 7) >= *(_BYTE *)(((unsigned __int64)p_remote_word_filter_is_ssl >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(p_remote_word_filter_is_ssl);
  }
  remote_word_filter_is_ssl = v7->remote_word_filter_is_ssl;
  if ( *(char *)(((unsigned __int64)&retstr->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&retstr->is_ssl);
  retstr->is_ssl = remote_word_filter_is_ssl;
  p_remote_word_filter_host = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48))->remote_word_filter_host;
  std::string::operator=(retstr, p_remote_word_filter_host);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
  std::string::operator=(&retstr->port, &v11->remote_word_filter_port);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
  std::string::operator=(&retstr->uri, &v12->remote_word_filter_uri);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&retstr->method);
  }
  retstr->method = HTTP_POST;
  Json::Value::Value(v4 + 112, 0LL);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
  Config::findRegionGameBiz[abi:cxx11](&v37, v13);
  Json::Value::Value(&other, &v37);
  v14 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 112), "gameBiz");
  Json::Value::operator=(v14, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v37);
  Json::Value::Value((Json::Value *)&other, "release");
  v15 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 112), "region");
  Json::Value::operator=(v15, &other);
  Json::Value::~Value(&other);
  Json::Value::Value((Json::Value *)&other, 1);
  v16 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 112), "numberCheck");
  Json::Value::operator=(v16, &other);
  Json::Value::~Value(&other);
  Json::Value::Value(&other, str);
  v17 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 112), "text");
  Json::Value::operator=(v17, &other);
  Json::Value::~Value(&other);
  Json::Value::Value(v4 + 192, 0LL);
  Uid = Player::getUid(player);
  Json::Value::Value((Json::Value *)&other, Uid);
  v19 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 192), off_2580A440);
  Json::Value::operator=(v19, &other);
  Json::Value::~Value(&other);
  BasicComp = Player::getBasicComp(player);
  v21 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  Json::Value::Value(&other, v21);
  v22 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 192), "nickname");
  Json::Value::operator=(v22, &other);
  Json::Value::~Value(&other);
  Json::Value::Value((Json::Value *)&other, 0);
  v23 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 192), "vip_point");
  Json::Value::operator=(v23, &other);
  Json::Value::~Value(&other);
  Json::Value::Value((Json::Value *)&other, text_type);
  v24 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 192), "text_type");
  Json::Value::operator=(v24, &other);
  Json::Value::~Value(&other);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 80));
  v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
  v26 = ConfigBase::getRegionName[abi:cxx11](v25);
  Json::Value::Value(&other, v26);
  v27 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 192), "region_name");
  Json::Value::operator=(v27, &other);
  Json::Value::~Value(&other);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 80));
  Player::getSceneComp(player);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 80));
  if ( std::operator!=<World>((const std::shared_ptr<World> *)(v4 + 80), 0LL) )
  {
    v28 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    std::function<ForeachPolicy ()(Player &)>::function<RemoteWordFilter::buildQueryHttpReq(std::string const&,Player &,unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v37,
      (RemoteWordFilter::buildQueryHttpReq::<lambda(Player&)>)(v4 + 192));
    World::foreachPlayer(v28, (std::function<ForeachPolicy(Player&)> *)&v37);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v37);
  }
  Json::FastWriter::FastWriter((Json::FastWriter *const)(v4 + 272));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_257A0340, &__a);
  Json::FastWriter::write[abi:cxx11](&v35, (Json::FastWriter *const)(v4 + 272), (const Json::Value *)(v4 + 192));
  common::tools::StringUtils::trim(&v37, &v35, &s, 1);
  Json::Value::Value(&other, &v37);
  v29 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 112), off_2580A580);
  Json::Value::operator=(v29, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v37);
  std::string::~string(&v35);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  Json::FastWriter::write[abi:cxx11](&v37, (Json::FastWriter *const)(v4 + 272), (const Json::Value *)(v4 + 112));
  std::string::operator=(&retstr->body, &v37);
  std::string::~string(&v37);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v37,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/misc/remote_word_filter.cpp",
    "buildQueryHttpReq",
    56);
  v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)&v37,
          (const char (*)[20])"[WORD_FILTER] json:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &retstr->body);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
  Json::FastWriter::~FastWriter((Json::FastWriter *const)(v4 + 272));
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 80));
  Json::Value::~Value((Json::Value_0 *const)(v4 + 192));
  Json::Value::~Value((Json::Value_0 *const)(v4 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 48));
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return retstr;
};

// Line 46: range 000000001557EE62-000000001557EF0D
ForeachPolicy __cdecl RemoteWordFilter::buildQueryHttpReq(std::string const&,Player &,unsigned int)::{lambda(Player &)#1}::operator()(
        const RemoteWordFilter::buildQueryHttpReq::<lambda(Player&)> *const __closure,
        Player *player)
{
  Json::Value_0 *v2; // rbx
  unsigned int Uid; // eax
  Json::Value_0 v5; // [rsp+10h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = Json::Value::operator[]((Json::Value_0 *const)__closure->__ext, "mp_uids");
  Uid = Player::getUid(player);
  Json::Value::Value((Json::Value *)&v5, Uid);
  Json::Value::append(v2, &v5, (int)player, (char)__closure);
  Json::Value::~Value(&v5);
  return 0;
};

// Line 62: range 000000001557FA72-0000000015580139
std::pair<RemoteWordFilter::ActionType,std::string > *__cdecl RemoteWordFilter::processQueryRsp[abi:cxx11](
        std::pair<RemoteWordFilter::ActionType,std::string > *retstr,
        common::minet::http_client::HttpResponse *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  std::pair<RemoteWordFilter::ActionType,char const*> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::pair<RemoteWordFilter::ActionType,char const*> v9; // rax
  Json::Value *v10; // rax
  std::pair<RemoteWordFilter::ActionType,char const*> v11; // rax
  Json::Value_0 *v12; // rax
  Json::Value *v13; // rax
  Json::Value_0 *v14; // rax
  Json::Value_0 *v15; // rax
  char *val; // [rsp+20h] [rbp-250h] BYREF
  std::pair<RemoteWordFilter::ActionType,char const*> __p; // [rsp+30h] [rbp-240h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-230h] BYREF
  char v20[528]; // [rsp+60h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 type:84 64 40 7 jval:72 144 272 9 reader:71";
  *(_QWORD *)(v2 + 16) = RemoteWordFilter::processQueryRsp[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)rsp_0 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rsp_0 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( rsp_0->status == 200 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/misc/remote_word_filter.cpp",
      "processQueryRsp",
      69);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])off_2580A780);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &rsp_0->body);
    common::milog::MiLogStream::~MiLogStream(&v19);
    Json::Reader::Reader((Json::Reader *)(v2 + 144));
    Json::Value::Value(v2 + 64, 0LL);
    if ( !Json::Reader::parse((Json::Reader *const)(v2 + 144), &rsp_0->body, (Json::Value *)(v2 + 64), 1) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/misc/remote_word_filter.cpp",
        "processQueryRsp",
        75);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v19,
             (const char (*)[19])"parse json failed:");
      val = (char *)std::string::c_str(&rsp_0->body);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      *(_DWORD *)(v2 + 48) = 4;
      v9 = std::make_pair<RemoteWordFilter::ActionType,char const(&)[1]>(
             (RemoteWordFilter::ActionType *)(v2 + 48),
             (const char (*)[1])byte_257A0640);
      __p.first = v9.first;
      __p.second = v9.second;
      std::pair<RemoteWordFilter::ActionType,std::string>::pair<RemoteWordFilter::ActionType,char const*,true>(
        retstr,
        &__p);
    }
    else
    {
      v10 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 64), "retcode");
      if ( (unsigned int)Json::Value::asUInt(v10) )
      {
        *(_DWORD *)(v2 + 48) = 4;
        v11 = std::make_pair<RemoteWordFilter::ActionType,char const(&)[1]>(
                (RemoteWordFilter::ActionType *)(v2 + 48),
                (const char (*)[1])byte_257A0640);
        __p.first = v11.first;
        __p.second = v11.second;
        std::pair<RemoteWordFilter::ActionType,std::string>::pair<RemoteWordFilter::ActionType,char const*,true>(
          retstr,
          &__p);
      }
      else
      {
        v12 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 64), "data");
        v13 = (Json::Value *)Json::Value::operator[](v12, "shieldType");
        *(_DWORD *)(v2 + 48) = Json::Value::asUInt(v13);
        v14 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 64), "data");
        v15 = Json::Value::operator[](v14, "text");
        Json::Value::asString[abi:cxx11]((Json::String *)&v19, v15);
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->second._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._anon_0._M_allocated_capacity
                                                                + 15) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 40LL);
        }
        std::make_pair<RemoteWordFilter::ActionType &,std::string>(
          retstr,
          (RemoteWordFilter::ActionType *)(v2 + 48),
          (std::string *)&v19);
        std::string::~string(&v19);
      }
    }
    Json::Value::~Value((Json::Value_0 *const)(v2 + 64));
    Json::Reader::~Reader((Json::Reader *const)(v2 + 144));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/remote_word_filter.cpp",
      "processQueryRsp",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v19,
           (const char (*)[40])"remote word filter http failed, status=");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &rsp_0->status);
    common::milog::MiLogStream::~MiLogStream(&v19);
    *(_DWORD *)(v2 + 48) = 4;
    v6 = std::make_pair<RemoteWordFilter::ActionType,char const(&)[1]>(
           (RemoteWordFilter::ActionType *)(v2 + 48),
           (const char (*)[1])byte_257A0640);
    __p.first = v6.first;
    __p.second = v6.second;
    std::pair<RemoteWordFilter::ActionType,std::string>::pair<RemoteWordFilter::ActionType,char const*,true>(
      retstr,
      &__p);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 95: range 000000001558013A-0000000015580154
proto::AsyncHttpType __cdecl RemoteWordFilter::getHttpTypeByCmdId(uint32_t cmd_id)
{
  return cmd_id == 105;
};
