// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/multiserver_app.cpp

// Line 30: range 000000000D7CC405-000000000D7CC7E2
bool __cdecl checkIsInServerList(common::tools::PTree *pt, uint32_t cur_app_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  bool v6; // r14
  int v7; // r14d
  int v8; // r13d
  bool result; // al
  bool v10; // [rsp+3h] [rbp-11Dh]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-101h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+30h] [rbp-F0h]
  std::pair<std::string,common::tools::PTree> *__in; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *name; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *server_pt; // [rsp+48h] [rbp-D8h]
  std::list<std::pair<std::string,common::tools::PTree>> v18; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 13 app_id_str:42";
  *(_QWORD *)(v2 + 16) = checkIsInServerList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::PTree::getAllChild[abi:cxx11](&v18, pt);
  __for_range = &v18;
  __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin(&v18)._M_node;
  __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(&v18)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
    name = std::get<0ul,std::string,common::tools::PTree>(__in);
    server_pt = std::get<1ul,std::string,common::tools::PTree>(__in);
    if ( !std::operator==<char>(name, "StatLog") )
    {
      if ( std::operator!=<char>(name, off_1BA23340) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/multiserver_app.cpp",
          "checkIsInServerList",
          39);
        v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v19,
               (const char (*)[17])"invalid pt name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, name);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v19, "<xmlattr>.app_id", &__a);
        common::tools::PTree::get<std::string>((std::string *)(v2 + 32), server_pt, (const std::string *)&v19);
        std::string::~string(&v19);
        std::allocator<char>::~allocator(&__a);
        std::string::basic_string(&v19, v2 + 32);
        v6 = cur_app_id == common::tools::AppIdUtils::getAppId((std::string *)&v19);
        std::string::~string(&v19);
        if ( v6 )
        {
          v10 = 1;
          v7 = 0;
        }
        else
        {
          v7 = 1;
        }
        std::string::~string((void *)(v2 + 32));
        if ( v7 != 1 )
        {
          v8 = 0;
          goto LABEL_16;
        }
      }
    }
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
  }
  v8 = 1;
LABEL_16:
  std::list<std::pair<std::string,common::tools::PTree>>::~list(&v18);
  if ( v8 == 1 )
    v10 = 0;
  result = v10;
  if ( v20 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 51: range 000000000D7CC7E4-000000000D7CC865
void __cdecl MultiserverApp::MultiserverApp(MultiserverApp *const this)
{
  __int64 *v1; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<MultiserverApp>::Singleton(this);
  v1 = &`vtable for'MultiserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->gap0 = v1;
  GCGSkillConfigImplMgr::init();
};

// Line 59: range 000000000D7CC866-000000000D7CD560
int32_t __cdecl MultiserverApp::addAllServicesToBox(MultiserverApp *const this, common::tools::PTree *pt)
{
  common::tools::PTree *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Ah] [rbp-176h] BYREF
  bool has_any_service; // [rsp+1Bh] [rbp-175h]
  uint32_t app_id; // [rsp+1Ch] [rbp-174h]
  std::string child_name; // [rsp+20h] [rbp-170h] BYREF
  char v11[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (common::tools::PTree *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::tools::PTree *)v3;
  }
  v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v2[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"8 32 8 17 mailservice_pt:64 64 8 15 mpservice_p"
                                                                         "t:73 96 8 18 offline_msg_ptr:82 128 8 13 social"
                                                                         "_ptr:91 160 8 13 match_ptr:100 192 8 18 offline"
                                                                         "_op_ptr:109 224 8 19 activity_op_ptr:118 256 8 11 gcg_ptr:127";
  v2[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)MultiserverApp::addAllServicesToBox;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -202116352;
  app_id = AppBase::getAppId((AppBase *const)this);
  has_any_service = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Mailservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( checkIsInServerList(v2 + 4, app_id) )
  {
    if ( ServiceBox::addService<MailService>() )
    {
      v5 = -1;
      goto LABEL_46;
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/multiserver_app.cpp",
      "addAllServicesToBox",
      68);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[16])off_1BA23620);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    has_any_service = 1;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Mpservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( !checkIsInServerList(v2 + 8, app_id) )
  {
LABEL_12:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.OfflineMsgservice", &__a);
    common::tools::PTree::getChild(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    if ( checkIsInServerList(v2 + 12, app_id) )
    {
      if ( ServiceBox::addService<OfflineMsgService>() )
      {
        v5 = -1;
LABEL_44:
        common::tools::PTree::~PTree(v2 + 12);
        goto LABEL_45;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        86);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[22])off_1BA23740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      has_any_service = 1;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Socialservice", &__a);
    common::tools::PTree::getChild(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    if ( checkIsInServerList(v2 + 16, app_id) )
    {
      if ( ServiceBox::addService<SocialService>() )
      {
        v5 = -1;
LABEL_43:
        common::tools::PTree::~PTree(v2 + 16);
        goto LABEL_44;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        95);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[18])off_1BA237C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      has_any_service = 1;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Matchservice", &__a);
    common::tools::PTree::getChild(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    if ( checkIsInServerList(v2 + 20, app_id) )
    {
      if ( ServiceBox::addService<MatchService>() )
      {
        v5 = -1;
LABEL_42:
        common::tools::PTree::~PTree(v2 + 20);
        goto LABEL_43;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        104);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[17])off_1BA23800);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      has_any_service = 1;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.OfflineOpservice", &__a);
    common::tools::PTree::getChild(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    if ( checkIsInServerList(v2 + 24, app_id) )
    {
      if ( ServiceBox::addService<OfflineOpService>() )
      {
        v5 = -1;
LABEL_41:
        common::tools::PTree::~PTree(v2 + 24);
        goto LABEL_42;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        113);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[21])off_1BA238A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      has_any_service = 1;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Activityservice", &__a);
    common::tools::PTree::getChild(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    if ( checkIsInServerList(v2 + 28, app_id) )
    {
      if ( ServiceBox::addService<ActivityService>() )
      {
        v5 = -1;
LABEL_40:
        common::tools::PTree::~PTree(v2 + 28);
        goto LABEL_41;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        122);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[20])off_1BA23940);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      has_any_service = 1;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.GCGservice", &__a);
    common::tools::PTree::getChild(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    if ( checkIsInServerList(v2 + 32, app_id) )
    {
      if ( ServiceBox::addService<GCGService>() )
      {
        v5 = -1;
LABEL_39:
        common::tools::PTree::~PTree(v2 + 32);
        goto LABEL_40;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        131);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[15])off_1BA239C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      has_any_service = 1;
    }
    if ( !has_any_service )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/multiserver_app.cpp",
        "addAllServicesToBox",
        136);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[26])"no service in multiserver");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    goto LABEL_39;
  }
  if ( !ServiceBox::addService<MpService>() )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/multiserver_app.cpp",
      "addAllServicesToBox",
      77);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[14])off_1BA236A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    has_any_service = 1;
    goto LABEL_12;
  }
  v5 = -1;
LABEL_45:
  common::tools::PTree::~PTree(v2 + 8);
LABEL_46:
  common::tools::PTree::~PTree(v2 + 4);
  result = v5;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 145: range 000000000D7CD562-000000000D7CDBAB
int32_t __cdecl MultiserverApp::checkConfig(MultiserverApp *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::tools::PTree *p_second; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-1B5h] BYREF
  std::set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-1B4h] BYREF
  uint32_t i; // [rsp+20h] [rbp-1B0h]
  uint32_t value_count; // [rsp+24h] [rbp-1ACh]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self __y; // [rsp+28h] [rbp-1A8h] BYREF
  const google::protobuf::EnumDescriptor *enum_desc; // [rsp+30h] [rbp-1A0h]
  const google::protobuf::EnumValueDescriptor *enum_value_desc; // [rsp+38h] [rbp-198h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-190h] BYREF
  char v16[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 12 redis_pt:169 64 8 8 iter:172 96 24 14 db_pt_list:170 160 48 19 redis_index_set:154 240"
                        " 48 23 xml_redis_index_set:171";
  *(_QWORD *)(v2 + 16) = MultiserverApp::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  enum_desc = proto::RedisIndex_descriptor();
  if ( enum_desc )
  {
    value_count = google::protobuf::EnumDescriptor::value_count(enum_desc);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 160));
    for ( i = 0; i < value_count; ++i )
    {
      enum_value_desc = google::protobuf::EnumDescriptor::value(enum_desc, i);
      if ( !enum_value_desc )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/multiserver_app.cpp",
          "checkConfig",
          160);
        common::milog::MiLogStream::operator()(&v15, "enum_value_desc is null");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v5 = -1;
        goto LABEL_20;
      }
      if ( google::protobuf::EnumValueDescriptor::number(enum_value_desc) )
      {
        __x = google::protobuf::EnumValueDescriptor::number(enum_value_desc);
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 160), &__x);
      }
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v15, "Root.RedisConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v15);
    std::string::~string(&v15);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 96),
      (const common::tools::PTree *const)(v2 + 32));
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 240));
    *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 64) = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 96));
    while ( 1 )
    {
      __y._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 96))._M_node;
      if ( !std::operator!=(
              (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 64),
              &__y) )
        break;
      p_second = &std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator->((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 64))->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v15, "<xmlattr>.index", &__a);
      __x = common::tools::PTree::get<unsigned int>(p_second, (const std::string *)&v15);
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 240), &__x);
      std::string::~string(&v15);
      std::allocator<char>::~allocator(&__a);
      std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(
        (std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 64),
        0);
    }
    if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
           (const std::set<unsigned int> *)(v2 + 240),
           (const std::set<unsigned int> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/multiserver_app.cpp",
        "checkConfig",
        179);
      common::milog::MiLogStream::operator()(&v15, "XMLConfig redis index not matches");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 240));
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 96));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
LABEL_20:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 160));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/multiserver_app.cpp",
      "checkConfig",
      150);
    common::milog::MiLogStream::operator()(&v15, "enum_desc is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 187: range 000000000D7CDBAC-000000000D7CDBDF
int32_t __cdecl MultiserverApp::fini(MultiserverApp *const this)
{
  if ( AppBase::fini((AppBase *const)this) )
    return -1;
  GCGSkillConfigImplMgr::destroy();
  return 0;
};
