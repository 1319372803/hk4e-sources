// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/config/config.cpp

// Line 22: range 000000000C6DCFAA-000000000C6DD65E
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  ConfigBasePtr v6; // rdx
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  Config::Address *v22; // r8
  Flag<ConfigOption> flag; // [rsp+24h] [rbp-11Ch] BYREF
  std::map<std::string,data::DbRegionConfig>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::map<std::string,data::DbRegionConfig>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::map<std::string,data::DbRegionConfig> *__for_range; // [rsp+38h] [rbp-108h]
  const std::pair<const std::string,data::DbRegionConfig> *v28; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,const std::pair<const std::string,data::DbRegionConfig> >::type *region; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,const std::pair<const std::string,data::DbRegionConfig> >::type *config; // [rsp+50h] [rbp-F0h]
  const std::string *muipserver_url; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<ConfigBase> prev_config_ptr; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 7 addr:49";
  *(_QWORD *)(v3 + 16) = Config::loadConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::shared_ptr<ConfigBase>::shared_ptr(&prev_config_ptr, p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)&prev_config_ptr;
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr(&prev_config_ptr);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      25);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v33,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = -1;
  }
  else
  {
    Flag<ConfigOption>::Flag(&flag);
    v10 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( DbConfigMgr::loadConfig(&this->db_config_mgr, 0x10000u, v10, &flag) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        32);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v33, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v11, "init db_config_mgr failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
    }
    else if ( DbConfigMgr::rewriteConfig(&this->db_config_mgr) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        37);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v33, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v12, "db_config_mgr.rewriteConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
    }
    else
    {
      std::map<std::string,Config::Address>::clear(&this->muipserver_address_map);
      __for_range = &this->db_config_mgr.db_deploy_config_mgr.db_region_config_map;
      __for_begin._M_node = std::map<std::string,data::DbRegionConfig>::begin(&this->db_config_mgr.db_deploy_config_mgr.db_region_config_map)._M_node;
      __for_end._M_node = std::map<std::string,data::DbRegionConfig>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v28 = std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator*(&__for_begin);
        region = std::get<0ul,std::string const,data::DbRegionConfig>(v28);
        config = (std::tuple_element<1,const std::pair<const std::string,data::DbRegionConfig> >::type *)std::get<1ul,std::string const,data::DbRegionConfig>(v28);
        muipserver_url = &config->muipserver_url;
        if ( !(unsigned __int8)std::string::empty(&config->muipserver_url) )
        {
          Config::Address::Address((Config::Address *const)(v3 + 48));
          if ( Config::parseUrl(this, muipserver_url, (std::string *)(v3 + 48), (uint16_t *)(v3 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/config/config.cpp",
              "loadConfig",
              52);
            v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v33, (const char (*)[8])"region ");
            v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, region);
            v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" parseUrl ");
            v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, muipserver_url);
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/config/config.cpp",
              "loadConfig",
              55);
            v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v33, (const char (*)[9])"region: ");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, region);
            v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ip: ");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v19,
                    (const std::string *)(v3 + 48));
            v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" port: ");
            common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
              v21,
              (const unsigned __int16 *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v33);
            std::map<std::string,Config::Address>::emplace<std::string const&,Config::Address&>(
              &this->muipserver_address_map,
              region,
              (Config::Address *)(v3 + 48),
              (const std::string *)&this->muipserver_address_map,
              v22);
          }
          Config::Address::~Address((Config::Address *const)(v3 + 48));
        }
        std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator++(&__for_begin);
      }
      result = 0;
    }
  }
  if ( v34 == (char *)v3 )
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

// Line 63: range 000000000C6DD660-000000000C6DD67A
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  HttpProxyApp *v1; // rax

  v1 = Singleton<HttpProxyApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 68: range 000000000C6DD67C-000000000C6DDA92
int32_t __cdecl Config::parseUrl(Config *const this, const std::string *url, std::string *ip_0, uint16_t *port)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-1D0h] BYREF
  char v16[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 264 13 url_parser:70";
  *(_QWORD *)(v4 + 16) = Config::parseUrl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862729] = -218103808;
  v6[536862730] = -202116109;
  v6[536862731] = -202116109;
  LUrlParser::clParseURL::ParseURL((LUrlParser::clParseURL_0 *)(v4 + 48), url);
  if ( !LUrlParser::clParseURL::IsValid((const LUrlParser::clParseURL *const)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/config/config.cpp",
      "parseUrl",
      73);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v15,
           (const char (*)[21])"ParseURL error URL: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, url);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
    goto LABEL_15;
  }
  if ( std::operator!=<char>((const std::string *)(v4 + 56), "http") )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/config/config.cpp",
      "parseUrl",
      78);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v15,
           (const char (*)[31])"error URL, just Support http: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, url);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
    goto LABEL_15;
  }
  std::string::operator=(ip_0, v4 + 88);
  if ( (unsigned __int8)std::string::empty(v4 + 120) )
  {
    if ( *(_BYTE *)(((unsigned __int64)port >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)port & 7) + 1) >= *(_BYTE *)(((unsigned __int64)port >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(port);
    }
    *port = 80;
  }
  else if ( common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v4 + 120), port, 1) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/config/config.cpp",
      "parseUrl",
      88);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v15, (const char (*)[6])"Url: ");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, url);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])" port is invalid");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
    goto LABEL_15;
  }
  v8 = 0;
LABEL_15:
  LUrlParser::clParseURL::~clParseURL((LUrlParser::clParseURL *const)(v4 + 48));
  result = v8;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 95: range 000000000C6DDA94-000000000C6DDC5D
int32_t __cdecl Config::findMuipServerAddress(
        const Config *const this,
        const std::string *region,
        std::string *ip_0,
        uint16_t *port)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Config::Address *p_second; // rdx
  std::_Rb_tree_const_iterator<std::pair<const std::string,Config::Address> >::pointer v8; // rax
  uint16_t v9; // cx
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<const std::string,Config::Address> >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 7 iter:96";
  *(_QWORD *)(v4 + 16) = Config::findMuipServerAddress;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(std::map<std::string,Config::Address>::const_iterator *)(v4 + 32) = std::map<std::string,Config::Address>::find(
                                                                          &this->muipserver_address_map,
                                                                          region);
  __y._M_node = std::map<std::string,Config::Address>::cend(&this->muipserver_address_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const std::string,Config::Address> >::_Self *)(v4 + 32),
         &__y) )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<std::string const,Config::Address>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,Config::Address> > *const)(v4 + 32))->second;
    std::string::operator=(ip_0, p_second);
    v8 = std::_Rb_tree_const_iterator<std::pair<std::string const,Config::Address>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,Config::Address> > *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second.port >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->second.port >> 3) + 0x7FFF8000) <= 1 )
    {
      v8 = (std::_Rb_tree_const_iterator<std::pair<const std::string,Config::Address> >::pointer)__asan_report_load2(&v8->second.port);
    }
    v9 = v8->second.port;
    if ( *(_BYTE *)(((unsigned __int64)port >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)port & 7) + 1) >= *(_BYTE *)(((unsigned __int64)port >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(port);
    }
    *port = v9;
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
