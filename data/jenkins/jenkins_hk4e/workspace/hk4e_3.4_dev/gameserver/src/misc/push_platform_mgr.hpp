// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/push_platform_mgr.hpp

// Line 29: range 00000000156BBF2C-00000000156BC0B3
void __fastcall jsonValueOperateTags<unsigned int,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[9],unsigned int &,std::_Bind&<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        Json::Value *json_obj,
        const char *operate,
        unsigned int tag,
        unsigned __int64 p_genTagStringFunc,
        const char (*a5)[9],
        unsigned int *a6,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_2)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> v13; // [rsp+30h] [rbp-40h] BYREF
  std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> v14; // [rsp+50h] [rbp-20h] BYREF

  if ( *(char *)((p_genTagStringFunc >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_genTagStringFunc + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((p_genTagStringFunc + 23) & 7) >= *(_BYTE *)(((p_genTagStringFunc + 23) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p_genTagStringFunc, 24LL);
  }
  v7 = *(_QWORD *)(p_genTagStringFunc + 8);
  v13._M_f = *(std::string (**)(PushPlatformManager *, unsigned int))p_genTagStringFunc;
  *(_QWORD *)v13.gap8 = v7;
  v13._M_bound_args._M_head_impl = *(PushPlatformManager **)(p_genTagStringFunc + 16);
  jsonValueOperateTags<unsigned int,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    json_obj,
    operate,
    tag,
    &v13);
  if ( *(char *)(((unsigned __int64)args_2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)args_2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(args_2, 24LL);
  }
  v8 = *(_QWORD *)args_2->gap8;
  v14._M_f = args_2->_M_f;
  *(_QWORD *)v14.gap8 = v8;
  v14._M_bound_args._M_head_impl = args_2->_M_bound_args._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    json_obj,
    (const char *)a5,
    *a6,
    &v14);
};

// Line 29: range 00000000156BBDA4-00000000156BBF2B
void __fastcall jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>&>(
        Json::Value *json_obj,
        const char *operate,
        unsigned int tag,
        unsigned __int64 p_genTagStringFunc,
        const char (*a5)[12],
        unsigned int *a6,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_2)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> v13; // [rsp+30h] [rbp-40h] BYREF
  std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> v14; // [rsp+50h] [rbp-20h] BYREF

  if ( *(char *)((p_genTagStringFunc >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_genTagStringFunc + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((p_genTagStringFunc + 23) & 7) >= *(_BYTE *)(((p_genTagStringFunc + 23) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p_genTagStringFunc, 24LL);
  }
  v7 = *(_QWORD *)(p_genTagStringFunc + 8);
  v13._M_f = *(const std::string *(**)(PushPlatformManager *, unsigned int))p_genTagStringFunc;
  *(_QWORD *)v13.gap8 = v7;
  v13._M_bound_args._M_head_impl = *(PushPlatformManager **)(p_genTagStringFunc + 16);
  jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    json_obj,
    operate,
    tag,
    &v13);
  if ( *(char *)(((unsigned __int64)args_2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)args_2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(args_2, 24LL);
  }
  v8 = *(_QWORD *)args_2->gap8;
  v14._M_f = args_2->_M_f;
  *(_QWORD *)v14.gap8 = v8;
  v14._M_bound_args._M_head_impl = args_2->_M_bound_args._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    json_obj,
    (const char *)a5,
    *a6,
    &v14);
};

// Line 38: range 00000000156BBAB8-00000000156BBC5B
void __fastcall jsonValueOperateTags<unsigned int,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        Json::Value_0 *json_obj,
        const char *operate,
        unsigned int tag,
        std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *p_genTagStringFunc)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Json::Value_0 *v7; // r14
  char v9; // [rsp+8h] [rbp-D8h]
  std::string v11; // [rsp+20h] [rbp-C0h] BYREF
  Json::Value_0 v12; // [rsp+40h] [rbp-A0h] BYREF
  char v13[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 6 tag:38";
  *(_QWORD *)(v4 + 16) = jsonValueOperateTags<unsigned int,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = tag;
  if ( operate )
  {
    v7 = Json::Value::operator[](json_obj, operate);
    std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>::operator()<unsigned int &,std::string>(
      &v11,
      p_genTagStringFunc,
      (unsigned int *)(v4 + 32),
      (unsigned int *)p_genTagStringFunc);
    Json::Value::Value(&v12, &v11);
    Json::Value::append(v7, &v12, (int)p_genTagStringFunc, v9);
    Json::Value::~Value(&v12);
    std::string::~string(&v11);
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 38: range 000000001574B395-000000001574B50A
void __fastcall jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        Json::Value_0 *json_obj,
        const char *operate,
        unsigned int tag,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *p_genTagStringFunc)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Json::Value_0 *v7; // r14
  const std::string *v8; // rax
  char v10; // [rsp+8h] [rbp-B8h]
  Json::Value_0 v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 6 tag:38";
  *(_QWORD *)(v4 + 16) = jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = tag;
  if ( operate )
  {
    v7 = Json::Value::operator[](json_obj, operate);
    v8 = std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>::operator()<unsigned int &,std::string const&>(
           p_genTagStringFunc,
           (unsigned int *)(v4 + 32),
           (unsigned int *)(v4 + 32));
    Json::Value::Value(&v12, v8);
    Json::Value::append(v7, &v12, (int)p_genTagStringFunc, v10);
    Json::Value::~Value(&v12);
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 0000000015668386-00000000156689C7
Json::Value_0 *__fastcall PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &,char const(&)[9],unsigned int &,std::_Bind&<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        Json::Value_0 *retstr,
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        const char (*a5)[9],
        unsigned int *a6,
        std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_2,
        const char (*args_3)[9],
        unsigned int *args_4,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_5)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Json::Value_0 *v14; // rax
  Json::Value_0 *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Json::Value_0 *v17; // rax
  Json::Value_0 *v18; // rax
  __int64 v19; // rdx
  Json::Value *v20; // rax
  Json::Value_0 *v21; // rax
  Json::Value_0 *v22; // rax
  time_t now; // [rsp+38h] [rbp-138h]
  std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> p_genTagStringFunc; // [rsp+40h] [rbp-130h] BYREF
  std::string v30; // [rsp+60h] [rbp-110h] BYREF
  Json::Value_0 other; // [rsp+80h] [rbp-F0h] BYREF
  char v32[192]; // [rsp+B0h] [rbp-C0h] BYREF

  v10 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(160LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 16 13 config_ptr:49 80 40 10 op_json:55";
  *(_QWORD *)(v10 + 16) = PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &,char const(&)[9],unsigned int &,std::_Bind&<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = 61937;
  v12[536862722] = 62194;
  v12[536862723] = -218103808;
  v12[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v10 + 48));
  now = common::tools::TimeUtils::getNow();
  Json::Value::Value(retstr, 0LL);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&v13->app_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->app_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Json::Value::Value((Json::Value *)&other, v13->app_id);
  v14 = Json::Value::operator[](retstr, "app_id");
  Json::Value::operator=(v14, &other);
  Json::Value::~Value(&other);
  Json::Value::Value(v10 + 80, 0LL);
  Json::Value::Value((Json::Value *)&other, channel_id);
  v15 = Json::Value::operator[]((Json::Value_0 *const)(v10 + 80), "channel_id");
  Json::Value::operator=(v15, &other);
  Json::Value::~Value(&other);
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 48));
  Json::Value::Value(&other, &v16->region_name);
  v17 = Json::Value::operator[]((Json::Value_0 *const)(v10 + 80), "region");
  Json::Value::operator=(v17, &other);
  Json::Value::~Value(&other);
  common::tools::StringUtils::numToStr<unsigned int>(&v30, uid);
  Json::Value::Value(&other, &v30);
  v18 = Json::Value::operator[]((Json::Value_0 *const)(v10 + 80), "alias");
  Json::Value::operator=(v18, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v30);
  if ( *(char *)(((unsigned __int64)args_2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)args_2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(args_2, 24LL);
  }
  v19 = *(_QWORD *)args_2->gap8;
  p_genTagStringFunc._M_f = args_2->_M_f;
  *(_QWORD *)p_genTagStringFunc.gap8 = v19;
  p_genTagStringFunc._M_bound_args._M_head_impl = args_2->_M_bound_args._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  jsonValueOperateTags<unsigned int,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[9],unsigned int &,std::_Bind&<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    (Json::Value *)(v10 + 80),
    (const char *)a5,
    *a6,
    (unsigned __int64)&p_genTagStringFunc,
    args_3,
    args_4,
    args_5);
  v20 = (Json::Value *)Json::Value::operator[](retstr, "user_tags");
  Json::Value::append(v20, (const Json::Value *)(v10 + 80));
  Json::Value::Value((Json::Value *)&other, now);
  v21 = Json::Value::operator[](retstr, "ts");
  Json::Value::operator=(v21, &other);
  Json::Value::~Value(&other);
  PushPlatformManager::genSignStr[abi:cxx11](&v30, this, now);
  Json::Value::Value(&other, &v30);
  v22 = Json::Value::operator[](retstr, "sign");
  Json::Value::operator=(v22, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v30);
  Json::Value::~Value((Json::Value_0 *const)(v10 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v10 + 48));
  if ( v32 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 47: range 0000000015667456-0000000015667A81
Json::Value_0 *__fastcall PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &>(
        Json::Value_0 *retstr,
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        const char (*a5)[9],
        unsigned int *a6,
        std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_2)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Json::Value_0 *v11; // rax
  Json::Value_0 *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Json::Value_0 *v14; // rax
  Json::Value_0 *v15; // rax
  __int64 v16; // rdx
  Json::Value *v17; // rax
  Json::Value_0 *v18; // rax
  Json::Value_0 *v19; // rax
  time_t now; // [rsp+38h] [rbp-138h]
  std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> p_genTagStringFunc; // [rsp+40h] [rbp-130h] BYREF
  std::string v27; // [rsp+60h] [rbp-110h] BYREF
  Json::Value_0 other; // [rsp+80h] [rbp-F0h] BYREF
  char v29[192]; // [rsp+B0h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 16 13 config_ptr:49 80 40 10 op_json:55";
  *(_QWORD *)(v7 + 16) = PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = 61937;
  v9[536862722] = 62194;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v7 + 48));
  now = common::tools::TimeUtils::getNow();
  Json::Value::Value(retstr, 0LL);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&v10->app_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->app_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Json::Value::Value((Json::Value *)&other, v10->app_id);
  v11 = Json::Value::operator[](retstr, "app_id");
  Json::Value::operator=(v11, &other);
  Json::Value::~Value(&other);
  Json::Value::Value(v7 + 80, 0LL);
  Json::Value::Value((Json::Value *)&other, channel_id);
  v12 = Json::Value::operator[]((Json::Value_0 *const)(v7 + 80), "channel_id");
  Json::Value::operator=(v12, &other);
  Json::Value::~Value(&other);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 48));
  Json::Value::Value(&other, &v13->region_name);
  v14 = Json::Value::operator[]((Json::Value_0 *const)(v7 + 80), "region");
  Json::Value::operator=(v14, &other);
  Json::Value::~Value(&other);
  common::tools::StringUtils::numToStr<unsigned int>(&v27, uid);
  Json::Value::Value(&other, &v27);
  v15 = Json::Value::operator[]((Json::Value_0 *const)(v7 + 80), "alias");
  Json::Value::operator=(v15, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v27);
  if ( *(char *)(((unsigned __int64)args_2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)args_2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(args_2, 24LL);
  }
  v16 = *(_QWORD *)args_2->gap8;
  p_genTagStringFunc._M_f = args_2->_M_f;
  *(_QWORD *)p_genTagStringFunc.gap8 = v16;
  p_genTagStringFunc._M_bound_args._M_head_impl = args_2->_M_bound_args._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  jsonValueOperateTags<unsigned int,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    (Json::Value_0 *)(v7 + 80),
    (const char *)a5,
    *a6,
    &p_genTagStringFunc);
  v17 = (Json::Value *)Json::Value::operator[](retstr, "user_tags");
  Json::Value::append(v17, (const Json::Value *)(v7 + 80));
  Json::Value::Value((Json::Value *)&other, now);
  v18 = Json::Value::operator[](retstr, "ts");
  Json::Value::operator=(v18, &other);
  Json::Value::~Value(&other);
  PushPlatformManager::genSignStr[abi:cxx11](&v27, this, now);
  Json::Value::Value(&other, &v27);
  v19 = Json::Value::operator[](retstr, "sign");
  Json::Value::operator=(v19, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v27);
  Json::Value::~Value((Json::Value_0 *const)(v7 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 48));
  if ( v29 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 47: range 0000000015667D44-0000000015668385
Json::Value_0 *__fastcall PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &>(
        Json::Value_0 *retstr,
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        const char (*a5)[9],
        unsigned int *a6,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_2,
        const char (*args_3)[12],
        unsigned int *args_4,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_5)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Json::Value_0 *v14; // rax
  Json::Value_0 *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Json::Value_0 *v17; // rax
  Json::Value_0 *v18; // rax
  __int64 v19; // rdx
  Json::Value *v20; // rax
  Json::Value_0 *v21; // rax
  Json::Value_0 *v22; // rax
  time_t now; // [rsp+38h] [rbp-138h]
  std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> p_genTagStringFunc; // [rsp+40h] [rbp-130h] BYREF
  std::string v30; // [rsp+60h] [rbp-110h] BYREF
  Json::Value_0 other; // [rsp+80h] [rbp-F0h] BYREF
  char v32[192]; // [rsp+B0h] [rbp-C0h] BYREF

  v10 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(160LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 16 13 config_ptr:49 80 40 10 op_json:55";
  *(_QWORD *)(v10 + 16) = PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = 61937;
  v12[536862722] = 62194;
  v12[536862723] = -218103808;
  v12[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v10 + 48));
  now = common::tools::TimeUtils::getNow();
  Json::Value::Value(retstr, 0LL);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&v13->app_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->app_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Json::Value::Value((Json::Value *)&other, v13->app_id);
  v14 = Json::Value::operator[](retstr, "app_id");
  Json::Value::operator=(v14, &other);
  Json::Value::~Value(&other);
  Json::Value::Value(v10 + 80, 0LL);
  Json::Value::Value((Json::Value *)&other, channel_id);
  v15 = Json::Value::operator[]((Json::Value_0 *const)(v10 + 80), "channel_id");
  Json::Value::operator=(v15, &other);
  Json::Value::~Value(&other);
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 48));
  Json::Value::Value(&other, &v16->region_name);
  v17 = Json::Value::operator[]((Json::Value_0 *const)(v10 + 80), "region");
  Json::Value::operator=(v17, &other);
  Json::Value::~Value(&other);
  common::tools::StringUtils::numToStr<unsigned int>(&v30, uid);
  Json::Value::Value(&other, &v30);
  v18 = Json::Value::operator[]((Json::Value_0 *const)(v10 + 80), "alias");
  Json::Value::operator=(v18, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v30);
  if ( *(char *)(((unsigned __int64)args_2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)args_2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&args_2->_M_bound_args._M_head_impl + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(args_2, 24LL);
  }
  v19 = *(_QWORD *)args_2->gap8;
  p_genTagStringFunc._M_f = args_2->_M_f;
  *(_QWORD *)p_genTagStringFunc.gap8 = v19;
  p_genTagStringFunc._M_bound_args._M_head_impl = args_2->_M_bound_args._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  jsonValueOperateTags<unsigned int,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>&>(
    (Json::Value *)(v10 + 80),
    (const char *)a5,
    *a6,
    (unsigned __int64)&p_genTagStringFunc,
    args_3,
    args_4,
    args_5);
  v20 = (Json::Value *)Json::Value::operator[](retstr, "user_tags");
  Json::Value::append(v20, (const Json::Value *)(v10 + 80));
  Json::Value::Value((Json::Value *)&other, now);
  v21 = Json::Value::operator[](retstr, "ts");
  Json::Value::operator=(v21, &other);
  Json::Value::~Value(&other);
  PushPlatformManager::genSignStr[abi:cxx11](&v30, this, now);
  Json::Value::Value(&other, &v30);
  v22 = Json::Value::operator[](retstr, "sign");
  Json::Value::operator=(v22, &other);
  Json::Value::~Value(&other);
  std::string::~string(&v30);
  Json::Value::~Value((Json::Value_0 *const)(v10 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v10 + 48));
  if ( v32 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 70: range 00000000155F096C-00000000155F0C6C
void __fastcall PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        const char (*a4)[9],
        unsigned int *a5,
        std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *a6,
        const char (*args_3)[9],
        unsigned int *args_4,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isPushPlatformClosed; // r14
  Json::Value *v14; // rax
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-100h] BYREF
  Json::Value __t; // [rsp+60h] [rbp-E0h] BYREF
  char v22[176]; // [rsp+90h] [rbp-B0h] BYREF

  v9 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "1 48 40 13 json_value:86";
  *(_QWORD *)(v9 + 16) = PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = 61937;
  v11[536862722] = -218103808;
  v11[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  isPushPlatformClosed = FeatureSwitchMgr::isPushPlatformClosed(&v12->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( !isPushPlatformClosed )
  {
    if ( common::tools::SafeQueue<Json::Value>::size(&this->push_content_queue_) <= 0x270F )
    {
      PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &,char const(&)[9],unsigned int &,std::_Bind&<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        (Json::Value_0 *)&__t,
        this,
        uid,
        channel_id,
        a4,
        a5,
        a6,
        args_3,
        args_4,
        args_5);
      v14 = std::move<Json::Value>(&__t);
      Json::Value::Value((Json::Value *)(v9 + 48), v14);
      Json::Value::~Value((Json::Value_0 *const)&__t);
      common::tools::SafeQueue<Json::Value>::emplace<Json::Value&>(
        &this->push_content_queue_,
        (Json::Value *)(v9 + 48),
        (Json::Value *)&this->push_content_queue_);
      Json::Value::~Value((Json::Value_0 *const)(v9 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/misc/push_platform_mgr.hpp",
        "asyncSetPlayerTags",
        81);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v20,
        (const char (*)[43])"push platform, players' tags queue is full");
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  if ( v22 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 00000000155F0306-00000000155F0601
void __fastcall PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        const char (*a4)[9],
        unsigned int *a5,
        std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isPushPlatformClosed; // r14
  Json::Value *v11; // rax
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-100h] BYREF
  Json::Value __t; // [rsp+60h] [rbp-E0h] BYREF
  char v19[176]; // [rsp+90h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 40 13 json_value:86";
  *(_QWORD *)(v6 + 16) = PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  isPushPlatformClosed = FeatureSwitchMgr::isPushPlatformClosed(&v9->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( !isPushPlatformClosed )
  {
    if ( common::tools::SafeQueue<Json::Value>::size(&this->push_content_queue_) <= 0x270F )
    {
      PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &>(
        (Json::Value_0 *)&__t,
        this,
        uid,
        channel_id,
        a4,
        a5,
        a6);
      v11 = std::move<Json::Value>(&__t);
      Json::Value::Value((Json::Value *)(v6 + 48), v11);
      Json::Value::~Value((Json::Value_0 *const)&__t);
      common::tools::SafeQueue<Json::Value>::emplace<Json::Value&>(
        &this->push_content_queue_,
        (Json::Value *)(v6 + 48),
        (Json::Value *)&this->push_content_queue_);
      Json::Value::~Value((Json::Value_0 *const)(v6 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/misc/push_platform_mgr.hpp",
        "asyncSetPlayerTags",
        81);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v17,
        (const char (*)[43])"push platform, players' tags queue is full");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 00000000155F066A-00000000155F096A
void __fastcall PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        const char (*a4)[9],
        unsigned int *a5,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *a6,
        const char (*args_3)[12],
        unsigned int *args_4,
        std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *args_5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isPushPlatformClosed; // r14
  Json::Value *v14; // rax
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-100h] BYREF
  Json::Value __t; // [rsp+60h] [rbp-E0h] BYREF
  char v22[176]; // [rsp+90h] [rbp-B0h] BYREF

  v9 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "1 48 40 13 json_value:86";
  *(_QWORD *)(v9 + 16) = PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = 61937;
  v11[536862722] = -218103808;
  v11[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  isPushPlatformClosed = FeatureSwitchMgr::isPushPlatformClosed(&v12->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( !isPushPlatformClosed )
  {
    if ( common::tools::SafeQueue<Json::Value>::size(&this->push_content_queue_) <= 0x270F )
    {
      PushPlatformManager::genJsonValue<char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)> &>(
        (Json::Value_0 *)&__t,
        this,
        uid,
        channel_id,
        a4,
        a5,
        a6,
        args_3,
        args_4,
        args_5);
      v14 = std::move<Json::Value>(&__t);
      Json::Value::Value((Json::Value *)(v9 + 48), v14);
      Json::Value::~Value((Json::Value_0 *const)&__t);
      common::tools::SafeQueue<Json::Value>::emplace<Json::Value&>(
        &this->push_content_queue_,
        (Json::Value *)(v9 + 48),
        (Json::Value *)&this->push_content_queue_);
      Json::Value::~Value((Json::Value_0 *const)(v9 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/misc/push_platform_mgr.hpp",
        "asyncSetPlayerTags",
        81);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v20,
        (const char (*)[43])"push platform, players' tags queue is full");
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  if ( v22 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
