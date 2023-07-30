// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp

// Line 20: range 0000000013BAB0E0-0000000013BAB315
data::ConfigTalentMixinPtr __cdecl data::createConfigTalentMixin(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigTalentMixinPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > >::_Base_ptr)"2 32 8 5 it:21 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > >::_Base_ptr)data::createConfigTalentMixin;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::find(
                    &data::g_ConfigTalentMixinMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::end(&data::g_ConfigTalentMixinMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigTalentMixin>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigTalentMixin>::shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 27: range 0000000013BAB316-0000000013BAB324
void __cdecl data::ConfigTalentMixin::foreachMember(
        data::ConfigTalentMixin *const this,
        std::function<void(std::any&)> *p_func)
{
  ;
};

// Line 31: range 0000000013BAB326-0000000013BAB370
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::ConfigTalentMixin::clone(data::ConfigTalentMixin *const this)
{
  data::ConfigTalentMixin *v1; // rsi
  std::shared_ptr<data::ConfigTalentMixin> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigTalentMixin,data::ConfigTalentMixin&>(
    (common::tools::perf::allocator<data::ConfigTalentMixin,data::ConfigTalentMixin> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 35: range 0000000013BAB372-0000000013BAB3C3
bool __cdecl data::ConfigTalentMixin::fromJson(data::ConfigTalentMixin *const this, const Json::Value *jval)
{
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
  this->is_json_loaded = 1;
  return 1;
};

// Line 40: range 0000000013BAB3C4-0000000013BABD19
data::ConfigTalentMixinPtr __cdecl data::ConfigTalentMixin::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigTalentMixinPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v14[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 6 ptr:53 96 32 9 <unknown> 160 32 9 <unknown> 224 32 12 type_name:47 28"
                        "8 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigTalentMixin::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        50);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[45])"fromJson for: ConfigTalentMixin $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigTalentMixin>::shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          56);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigTalentMixin>::shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
        {
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            61);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigTalentMixin>::shared_ptr(
            (std::shared_ptr<data::ConfigTalentMixin> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 24, v1, v12);
          *(_BYTE *)(v10 + 24) = 1;
          std::shared_ptr<data::ConfigTalentMixin>::shared_ptr(
            (std::shared_ptr<data::ConfigTalentMixin> *const)jval,
            (std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      44);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[50])"jsonValueFind for: ConfigTalentMixin $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigTalentMixin>::shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 69: range 0000000013BABD1A-0000000013BABD2D
int32_t __cdecl data::ConfigTalentMixin::getHashValue(const data::ConfigTalentMixin *const this)
{
  return 0;
};

// Line 75: range 0000000013BABD2E-0000000013BAC08F
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigTalentMixinGroup *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 elem_ptr:81 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigTalentMixin::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 32), 0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "vecFromJson",
          84);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[44])"elem_ptr is nullptr: ConfigTalentMixinGroup");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigTalentMixin>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigTalentMixin>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
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

// Line 94: range 0000000013BAC090-0000000013BAC34B
int32_t __cdecl data::getVecHashValue(const data::ConfigTalentMixinGroup *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigTalentMixin> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 hash_code:95 64 8 14 __for_begin:96 96 8 12 __for_end:96";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigTalentMixin>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigTalentMixin>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigTalentMixin>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigTalentMixin>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigTalentMixin> const*,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigTalentMixin>*,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigTalentMixin>*,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigTalentMixin> const*,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigTalentMixin>*,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigTalentMixin>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 64LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 64LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigTalentMixin> const*,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigTalentMixin>*,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 107: range 0000000013BAC34C-0000000013BACF39
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigTalentMixinGroupMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  unsigned __int64 v10; // rax
  const Json::Value *v11; // rax
  unsigned __int64 v12; // rax
  std::vector<std::shared_ptr<data::ConfigTalentMixin>> *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> >,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 7 cit:109 80 16 9 <unknown> 112 24 9 value:119 176 32 7 key:112 240 32 9 <unknown> 304 "
                        "32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 12 tmp_jval:108 576 40 12 key_jval:1"
                        "11 656 40 14 value_jval:118";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 496), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 496));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 496));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 576));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 47) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "mapFromJson",
        115);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 111) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 656), v11);
      v12 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      std::vector<std::shared_ptr<data::ConfigTalentMixin>>::vector((std::vector<std::shared_ptr<data::ConfigTalentMixin>> *const)(v3 + 112));
      if ( !data::vecFromJson((const Json::Value *)(v3 + 656), (data::ConfigTalentMixinGroup *)(v3 + 112)) )
      {
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "mapFromJson",
          122);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::emplace<std::string&,std::vector<std::shared_ptr<data::ConfigTalentMixin>>&>(
                m,
                (std::string *)(v3 + 176),
                (std::vector<std::shared_ptr<data::ConfigTalentMixin>> *)(v3 + 112),
                (std::string *)(v3 + 176),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "mapFromJson",
            127);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 176));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::vector<std::shared_ptr<data::ConfigTalentMixin>>::~vector((std::vector<std::shared_ptr<data::ConfigTalentMixin>> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v18 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 136: range 0000000013BACF3A-0000000013BAD1E1
int32_t __cdecl data::getMapHashValue(const data::ConfigTalentMixinGroupMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t VecHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> >,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:137 64 8 15 __for_begin:138 96 8 13 __for_end:138";
  *(_QWORD *)(v2 + 16) = data::getMapHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> >,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> > >::type *)std::get<1ul,std::string const,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    VecHashValue = data::getVecHashValue(val);
    common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::shared_ptr<data::ConfigTalentMixin>> >,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 152: range 0000000013C243AC-0000000013C245ED
void __cdecl data::AddAbilityRegister::AddAbilityRegister(data::AddAbilityRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::AddAbilityRegister::AddAbilityRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::AddAbility>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "AddAbility",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::AddAbility>(
    v4,
    (std::shared_ptr<data::AddAbility> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::AddAbility>::~shared_ptr((std::shared_ptr<data::AddAbility> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 155: range 0000000013BAD1E2-0000000013BAD3B2
void __cdecl data::AddAbility::foreachMember(data::AddAbility *const this, std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 ability_name_any:157 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddAbility::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigTalentMixin::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->ability_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 162: range 0000000013BAD3B4-0000000013BAD4C4
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::AddAbility::clone(data::AddAbility *const this)
{
  data::AddAbility *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddAbility::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::AddAbility,data::AddAbility&>(
    (common::tools::perf::allocator<data::AddAbility,data::AddAbility> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::AddAbility,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::AddAbility> *)(v2 + 32));
  std::shared_ptr<data::AddAbility>::~shared_ptr((std::shared_ptr<data::AddAbility> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 166: range 0000000013BAD4C6-0000000013BAD509
data::AddAbilityPtr __cdecl data::AddAbilityFactory::create(data::AddAbilityFactory *const this)
{
  data::AddAbilityPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::AddAbility>();
  result._M_ptr = (std::__shared_ptr<data::AddAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 168: range 0000000013BAD50A-0000000013BAD98E
bool __cdecl data::AddAbility::fromJson(data::AddAbility *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_ability_name; // rsi
  const Json::Value *ability_name_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddAbility::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      171);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "abilityName",
      (const std::allocator<char> *)(v2 + 48));
    p_ability_name = (std::string *)(v2 + 128);
    ability_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ability_name_ptr
      && (p_ability_name = &this->ability_name, !fromJson<std::string>(ability_name_ptr, &this->ability_name)) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        183);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[33])"fromJson for: abilityName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_ability_name, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 190: range 0000000013BAD990-0000000013BAE4D6
data::AddAbilityPtr __cdecl data::AddAbility::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::AddAbilityPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:203 96 16 7 ptr:209 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:197 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddAbility::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        200);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[38])"fromJson for: AddAbility $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::AddAbility>::shared_ptr((std::shared_ptr<data::AddAbility> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          206);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::AddAbility>::shared_ptr((std::shared_ptr<data::AddAbility> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::AddAbility,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::AddAbility>((const std::shared_ptr<data::AddAbility> *)(v2 + 96), 0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            212);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[29])"cast to AddAbilityPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::AddAbility>::shared_ptr((std::shared_ptr<data::AddAbility> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::AddAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              217);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::AddAbility>::shared_ptr((std::shared_ptr<data::AddAbility> *const)jval, 0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::AddAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::AddAbility>::shared_ptr(
              (std::shared_ptr<data::AddAbility> *const)jval,
              (std::shared_ptr<data::AddAbility> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::AddAbility>::~shared_ptr((std::shared_ptr<data::AddAbility> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      194);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[43])"jsonValueFind for: AddAbility $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::AddAbility>::shared_ptr((std::shared_ptr<data::AddAbility> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::AddAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 225: range 0000000013BAE4D8-0000000013BAE618
int32_t __cdecl data::AddAbility::getHashValue(const data::AddAbility *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:226";
  *(_QWORD *)(v2 + 16) = data::AddAbility::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->ability_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 235: range 0000000013C2462A-0000000013C2486B
void __cdecl data::ModifyAbilityRegister::ModifyAbilityRegister(data::ModifyAbilityRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ModifyAbilityRegister::ModifyAbilityRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifyAbility>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ModifyAbility",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::ModifyAbility>(
    v4,
    (std::shared_ptr<data::ModifyAbility> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ModifyAbility>::~shared_ptr((std::shared_ptr<data::ModifyAbility> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 238: range 0000000013BAE61A-0000000013BAE98B
void __cdecl data::ModifyAbility::foreachMember(
        data::ModifyAbility *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 20 ability_name_any:240 64 16 21 param_special_any:242 96 16 19 param_delta_any:244 128 "
                        "16 19 param_ratio_any:246 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifyAbility::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 160), p_func);
  data::ConfigTalentMixin::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 160));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->ability_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 64),
    &this->param_special);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::DynamicArgument &,data::DynamicArgument,std::any::_Manager_external<data::DynamicArgument>,true,true>(
    (std::any *const)(v2 + 96),
    &this->param_delta);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::DynamicArgument &,data::DynamicArgument,std::any::_Manager_external<data::DynamicArgument>,true,true>(
    (std::any *const)(v2 + 128),
    &this->param_ratio);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 251: range 0000000013BAE98C-0000000013BAEA9C
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::ModifyAbility::clone(data::ModifyAbility *const this)
{
  data::ModifyAbility *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifyAbility::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifyAbility,data::ModifyAbility&>(
    (common::tools::perf::allocator<data::ModifyAbility,data::ModifyAbility> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::ModifyAbility,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::ModifyAbility> *)(v2 + 32));
  std::shared_ptr<data::ModifyAbility>::~shared_ptr((std::shared_ptr<data::ModifyAbility> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 255: range 0000000013BAEA9E-0000000013BAEAE1
data::ModifyAbilityPtr __cdecl data::ModifyAbilityFactory::create(data::ModifyAbilityFactory *const this)
{
  data::ModifyAbilityPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ModifyAbility>();
  result._M_ptr = (std::__shared_ptr<data::ModifyAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 257: range 0000000013BAEAE2-0000000013BAF71F
bool __cdecl data::ModifyAbility::fromJson(data::ModifyAbility *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  const Json::Value *v6; // rsi
  const Json::Value *ability_name_ptr; // [rsp+10h] [rbp-2E0h]
  const Json::Value *param_special_ptr; // [rsp+18h] [rbp-2D8h]
  const Json::Value *param_delta_ptr; // [rsp+20h] [rbp-2D0h]
  const Json::Value *param_ratio_ptr; // [rsp+28h] [rbp-2C8h]
  char v12[704]; // [rsp+30h] [rbp-2C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifyAbility::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      260);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "abilityName",
      (const std::allocator<char> *)(v2 + 32));
    ability_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( ability_name_ptr && !fromJson<std::string>(ability_name_ptr, &this->ability_name) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        272);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[33])"fromJson for: abilityName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        "paramSpecial",
        (const std::allocator<char> *)(v2 + 48));
      param_special_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( param_special_ptr && !fromJson<std::string>(param_special_ptr, &this->param_special) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "fromJson",
          284);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[34])"fromJson for: paramSpecial fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          "paramDelta",
          (const std::allocator<char> *)(v2 + 64));
        param_delta_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( param_delta_ptr && !data::DynamicArgument::fromJson(&this->param_delta, param_delta_ptr) )
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "fromJson",
            296);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 480),
            (const char (*)[32])"fromJson for: paramDelta fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 544),
            "paramRatio",
            (const std::allocator<char> *)(v2 + 80));
          v6 = (const Json::Value *)(v2 + 544);
          param_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
          std::string::~string((void *)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( param_ratio_ptr
            && (v6 = param_ratio_ptr, !data::DynamicArgument::fromJson(&this->param_ratio, param_ratio_ptr)) )
          {
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "fromJson",
              308);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[32])"fromJson for: paramRatio fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
            this->is_json_loaded = 1;
            result = 1;
          }
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 315: range 0000000013BAF720-0000000013BB0266
data::ModifyAbilityPtr __cdecl data::ModifyAbility::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ModifyAbilityPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:328 96 16 7 ptr:334 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:322 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifyAbility::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        325);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[41])"fromJson for: ModifyAbility $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ModifyAbility>::shared_ptr((std::shared_ptr<data::ModifyAbility> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          331);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ModifyAbility>::shared_ptr((std::shared_ptr<data::ModifyAbility> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ModifyAbility,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::ModifyAbility>((const std::shared_ptr<data::ModifyAbility> *)(v2 + 96), 0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            337);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[32])"cast to ModifyAbilityPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ModifyAbility>::shared_ptr((std::shared_ptr<data::ModifyAbility> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ModifyAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              342);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ModifyAbility>::shared_ptr((std::shared_ptr<data::ModifyAbility> *const)jval, 0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ModifyAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ModifyAbility>::shared_ptr(
              (std::shared_ptr<data::ModifyAbility> *const)jval,
              (std::shared_ptr<data::ModifyAbility> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ModifyAbility>::~shared_ptr((std::shared_ptr<data::ModifyAbility> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      319);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[46])"jsonValueFind for: ModifyAbility $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ModifyAbility>::shared_ptr((std::shared_ptr<data::ModifyAbility> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ModifyAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 350: range 0000000013BB0268-0000000013BB0402
int32_t __cdecl data::ModifyAbility::getHashValue(const data::ModifyAbility *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t result; // eax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:351";
  *(_QWORD *)(v2 + 16) = data::ModifyAbility::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->ability_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->param_special, (int32_t *)(v2 + 32));
  v7 = data::DynamicArgument::getHashValue(&this->param_delta);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::DynamicArgument::getHashValue(&this->param_ratio);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v10 == (char *)v2 )
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

// Line 363: range 0000000013C248A8-0000000013C24AE9
void __cdecl data::UnlockTalentParamRegister::UnlockTalentParamRegister(data::UnlockTalentParamRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::UnlockTalentParamRegister::UnlockTalentParamRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::UnlockTalentParam>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "UnlockTalentParam",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::UnlockTalentParam>(
    v4,
    (std::shared_ptr<data::UnlockTalentParam> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::UnlockTalentParam>::~shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 366: range 0000000013BB0404-0000000013BB065A
void __cdecl data::UnlockTalentParam::foreachMember(
        data::UnlockTalentParam *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 20 ability_name_any:368 64 16 20 talent_param_any:370 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockTalentParam::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigTalentMixin::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->ability_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 64),
    &this->talent_param);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 375: range 0000000013BB065C-0000000013BB076C
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::UnlockTalentParam::clone(data::UnlockTalentParam *const this)
{
  data::UnlockTalentParam *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockTalentParam::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::UnlockTalentParam,data::UnlockTalentParam&>(
    (common::tools::perf::allocator<data::UnlockTalentParam,data::UnlockTalentParam> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::UnlockTalentParam,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::UnlockTalentParam> *)(v2 + 32));
  std::shared_ptr<data::UnlockTalentParam>::~shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 379: range 0000000013BB076E-0000000013BB07B1
data::UnlockTalentParamPtr __cdecl data::UnlockTalentParamFactory::create(data::UnlockTalentParamFactory *const this)
{
  data::UnlockTalentParamPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::UnlockTalentParam>();
  result._M_ptr = (std::__shared_ptr<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 381: range 0000000013BB07B2-0000000013BB0EBA
bool __cdecl data::UnlockTalentParam::fromJson(data::UnlockTalentParam *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_talent_param; // rsi
  const Json::Value *ability_name_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *talent_param_ptr; // [rsp+18h] [rbp-1A8h]
  char v10[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockTalentParam::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      384);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "abilityName",
      (const std::allocator<char> *)(v2 + 32));
    ability_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( ability_name_ptr && !fromJson<std::string>(ability_name_ptr, &this->ability_name) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        396);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[33])"fromJson for: abilityName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        "talentParam",
        (const std::allocator<char> *)(v2 + 48));
      p_talent_param = (std::string *)(v2 + 256);
      talent_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( talent_param_ptr
        && (p_talent_param = &this->talent_param, !fromJson<std::string>(talent_param_ptr, &this->talent_param)) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "fromJson",
          408);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[33])"fromJson for: talentParam fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_talent_param, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 415: range 0000000013BB0EBC-0000000013BB1A02
data::UnlockTalentParamPtr __cdecl data::UnlockTalentParam::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::UnlockTalentParamPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:428 96 16 7 ptr:434 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:422 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockTalentParam::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        425);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[45])"fromJson for: UnlockTalentParam $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::UnlockTalentParam>::shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          431);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::UnlockTalentParam>::shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::UnlockTalentParam,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::UnlockTalentParam>((const std::shared_ptr<data::UnlockTalentParam> *)(v2 + 96), 0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            437);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[36])"cast to UnlockTalentParamPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::UnlockTalentParam>::shared_ptr(
            (std::shared_ptr<data::UnlockTalentParam> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              442);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::UnlockTalentParam>::shared_ptr(
              (std::shared_ptr<data::UnlockTalentParam> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::UnlockTalentParam>::shared_ptr(
              (std::shared_ptr<data::UnlockTalentParam> *const)jval,
              (std::shared_ptr<data::UnlockTalentParam> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::UnlockTalentParam>::~shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      419);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[50])"jsonValueFind for: UnlockTalentParam $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::UnlockTalentParam>::shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 450: range 0000000013BB1A04-0000000013BB1B5C
int32_t __cdecl data::UnlockTalentParam::getHashValue(const data::UnlockTalentParam *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:451";
  *(_QWORD *)(v2 + 16) = data::UnlockTalentParam::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->ability_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talent_param, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 461: range 0000000013C24B62-0000000013C24DA3
void __cdecl data::UnlockControllerConditionsRegister::UnlockControllerConditionsRegister(
        data::UnlockControllerConditionsRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::UnlockControllerConditionsRegister::UnlockControllerConditionsRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::UnlockControllerConditions>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "UnlockControllerConditions",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::UnlockControllerConditions>(
    v4,
    (std::shared_ptr<data::UnlockControllerConditions> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::UnlockControllerConditions>::~shared_ptr((std::shared_ptr<data::UnlockControllerConditions> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 464: range 0000000013BB1B5E-0000000013BB1D2E
void __cdecl data::UnlockControllerConditions::foreachMember(
        data::UnlockControllerConditions *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 condition_name_any:466 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockControllerConditions::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigTalentMixin::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->condition_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 471: range 0000000013BB1D30-0000000013BB1E40
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::UnlockControllerConditions::clone(
        data::UnlockControllerConditions *const this)
{
  data::UnlockControllerConditions *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockControllerConditions::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::UnlockControllerConditions,data::UnlockControllerConditions&>(
    (common::tools::perf::allocator<data::UnlockControllerConditions,data::UnlockControllerConditions> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::UnlockControllerConditions,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::UnlockControllerConditions> *)(v2 + 32));
  std::shared_ptr<data::UnlockControllerConditions>::~shared_ptr((std::shared_ptr<data::UnlockControllerConditions> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 475: range 0000000013BB1E42-0000000013BB1E85
data::UnlockControllerConditionsPtr __cdecl data::UnlockControllerConditionsFactory::create(
        data::UnlockControllerConditionsFactory *const this)
{
  data::UnlockControllerConditionsPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::UnlockControllerConditions>();
  result._M_ptr = (std::__shared_ptr<data::UnlockControllerConditions,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 477: range 0000000013BB1E86-0000000013BB230A
bool __cdecl data::UnlockControllerConditions::fromJson(
        data::UnlockControllerConditions *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_condition_name; // rsi
  const Json::Value *condition_name_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockControllerConditions::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      480);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "conditionName",
      (const std::allocator<char> *)(v2 + 48));
    p_condition_name = (std::string *)(v2 + 128);
    condition_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( condition_name_ptr
      && (p_condition_name = &this->condition_name, !fromJson<std::string>(condition_name_ptr, &this->condition_name)) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        492);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[35])"fromJson for: conditionName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_condition_name, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 499: range 0000000013BB230C-0000000013BB2E52
data::UnlockControllerConditionsPtr __cdecl data::UnlockControllerConditions::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::UnlockControllerConditionsPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:512 96 16 7 ptr:518 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:506 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::UnlockControllerConditions::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        509);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[54])"fromJson for: UnlockControllerConditions $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::UnlockControllerConditions>::shared_ptr(
        (std::shared_ptr<data::UnlockControllerConditions> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          515);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::UnlockControllerConditions>::shared_ptr(
          (std::shared_ptr<data::UnlockControllerConditions> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::UnlockControllerConditions,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::UnlockControllerConditions>(
               (const std::shared_ptr<data::UnlockControllerConditions> *)(v2 + 96),
               0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            521);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[45])"cast to UnlockControllerConditionsPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::UnlockControllerConditions>::shared_ptr(
            (std::shared_ptr<data::UnlockControllerConditions> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::UnlockControllerConditions,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::UnlockControllerConditions,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              526);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::UnlockControllerConditions>::shared_ptr(
              (std::shared_ptr<data::UnlockControllerConditions> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::UnlockControllerConditions,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::UnlockControllerConditions,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::UnlockControllerConditions>::shared_ptr(
              (std::shared_ptr<data::UnlockControllerConditions> *const)jval,
              (std::shared_ptr<data::UnlockControllerConditions> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::UnlockControllerConditions>::~shared_ptr((std::shared_ptr<data::UnlockControllerConditions> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      503);
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[59])"jsonValueFind for: UnlockControllerConditions $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::UnlockControllerConditions>::shared_ptr(
      (std::shared_ptr<data::UnlockControllerConditions> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::UnlockControllerConditions,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 534: range 0000000013BB2E54-0000000013BB2F94
int32_t __cdecl data::UnlockControllerConditions::getHashValue(const data::UnlockControllerConditions *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:535";
  *(_QWORD *)(v2 + 16) = data::UnlockControllerConditions::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->condition_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 544: range 0000000013C24DE0-0000000013C25021
void __cdecl data::ModifySkillCDRegister::ModifySkillCDRegister(data::ModifySkillCDRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ModifySkillCDRegister::ModifySkillCDRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifySkillCD>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ModifySkillCD",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::ModifySkillCD>(
    v4,
    (std::shared_ptr<data::ModifySkillCD> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ModifySkillCD>::~shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 547: range 0000000013BB2F96-0000000013BB3274
void __cdecl data::ModifySkillCD::foreachMember(
        data::ModifySkillCD *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 16 skill_id_any:549 64 16 16 cd_delta_any:551 96 16 16 cd_ratio_any:553 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCD::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigTalentMixin::foreachMember(
    (data::ConfigTalentMixin *const)this,
    (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->skill_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->cd_delta);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 96), &this->cd_ratio);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 558: range 0000000013BB3276-0000000013BB3386
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::ModifySkillCD::clone(data::ModifySkillCD *const this)
{
  data::ModifySkillCD *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCD::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifySkillCD,data::ModifySkillCD&>(
    (common::tools::perf::allocator<data::ModifySkillCD,data::ModifySkillCD> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::ModifySkillCD,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::ModifySkillCD> *)(v2 + 32));
  std::shared_ptr<data::ModifySkillCD>::~shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 562: range 0000000013BB3388-0000000013BB33CB
data::ModifySkillCDPtr __cdecl data::ModifySkillCDFactory::create(data::ModifySkillCDFactory *const this)
{
  data::ModifySkillCDPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ModifySkillCD>();
  result._M_ptr = (std::__shared_ptr<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 564: range 0000000013BB33CC-0000000013BB3D7F
bool __cdecl data::ModifySkillCD::fromJson(data::ModifySkillCD *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  float *p_cd_ratio; // rsi
  const Json::Value *skill_id_ptr; // [rsp+18h] [rbp-258h]
  const Json::Value *cd_delta_ptr; // [rsp+20h] [rbp-250h]
  const Json::Value *cd_ratio_ptr; // [rsp+28h] [rbp-248h]
  char v11[576]; // [rsp+30h] [rbp-240h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCD::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson((data::ConfigTalentMixin *const)this, jval) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      567);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "skillID",
      (const std::allocator<char> *)(v2 + 48));
    skill_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( skill_id_ptr && !fromJson<unsigned int>(skill_id_ptr, &this->skill_id) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        579);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[29])"fromJson for: skillID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        "cdDelta",
        (const std::allocator<char> *)(v2 + 64));
      cd_delta_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( cd_delta_ptr && !fromJson<float>(cd_delta_ptr, &this->cd_delta) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "fromJson",
          591);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[29])"fromJson for: cdDelta fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          "cdRatio",
          (const std::allocator<char> *)(v2 + 80));
        p_cd_ratio = (float *)(v2 + 416);
        cd_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( cd_ratio_ptr && (p_cd_ratio = &this->cd_ratio, !fromJson<float>(cd_ratio_ptr, &this->cd_ratio)) )
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "fromJson",
            603);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v2 + 480),
            (const char (*)[29])"fromJson for: cdRatio fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_cd_ratio, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 610: range 0000000013BB3D80-0000000013BB48C6
data::ModifySkillCDPtr __cdecl data::ModifySkillCD::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ModifySkillCDPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:623 96 16 7 ptr:629 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:617 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCD::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        620);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[41])"fromJson for: ModifySkillCD $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ModifySkillCD>::shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          626);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ModifySkillCD>::shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ModifySkillCD,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::ModifySkillCD>((const std::shared_ptr<data::ModifySkillCD> *)(v2 + 96), 0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            632);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[32])"cast to ModifySkillCDPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ModifySkillCD>::shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              637);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ModifySkillCD>::shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)jval, 0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ModifySkillCD>::shared_ptr(
              (std::shared_ptr<data::ModifySkillCD> *const)jval,
              (std::shared_ptr<data::ModifySkillCD> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ModifySkillCD>::~shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      614);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[46])"jsonValueFind for: ModifySkillCD $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ModifySkillCD>::shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 645: range 0000000013BB48C8-0000000013BB4ADF
int32_t __cdecl data::ModifySkillCD::getHashValue(const data::ModifySkillCD *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:646";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCD::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue((const data::ConfigTalentMixin *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id);
  }
  common::tools::HashUtils::appendHash(this->skill_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd_delta);
  }
  common::tools::HashUtils::appendHash(this->cd_delta, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cd_ratio);
  }
  common::tools::HashUtils::appendHash(this->cd_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 657: range 0000000013C2505E-0000000013C2529F
void __cdecl data::ModifySkillCostRegister::ModifySkillCostRegister(data::ModifySkillCostRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ModifySkillCostRegister::ModifySkillCostRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifySkillCost>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ModifySkillCost",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::ModifySkillCost>(
    v4,
    (std::shared_ptr<data::ModifySkillCost> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ModifySkillCost>::~shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 660: range 0000000013BB4AE0-0000000013BB4DBE
void __cdecl data::ModifySkillCost::foreachMember(
        data::ModifySkillCost *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 16 skill_id_any:662 64 16 18 cost_delta_any:664 96 16 18 cost_ratio_any:666 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCost::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigTalentMixin::foreachMember(
    (data::ConfigTalentMixin *const)this,
    (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->skill_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 64),
    &this->cost_delta);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 96),
    &this->cost_ratio);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 671: range 0000000013BB4DC0-0000000013BB4ED0
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::ModifySkillCost::clone(data::ModifySkillCost *const this)
{
  data::ModifySkillCost *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCost::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifySkillCost,data::ModifySkillCost&>(
    (common::tools::perf::allocator<data::ModifySkillCost,data::ModifySkillCost> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::ModifySkillCost,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::ModifySkillCost> *)(v2 + 32));
  std::shared_ptr<data::ModifySkillCost>::~shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 675: range 0000000013BB4ED2-0000000013BB4F15
data::ModifySkillCostPtr __cdecl data::ModifySkillCostFactory::create(data::ModifySkillCostFactory *const this)
{
  data::ModifySkillCostPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ModifySkillCost>();
  result._M_ptr = (std::__shared_ptr<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 677: range 0000000013BB4F16-0000000013BB58C9
bool __cdecl data::ModifySkillCost::fromJson(data::ModifySkillCost *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  float *p_cost_ratio; // rsi
  const Json::Value *skill_id_ptr; // [rsp+18h] [rbp-258h]
  const Json::Value *cost_delta_ptr; // [rsp+20h] [rbp-250h]
  const Json::Value *cost_ratio_ptr; // [rsp+28h] [rbp-248h]
  char v11[576]; // [rsp+30h] [rbp-240h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCost::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson((data::ConfigTalentMixin *const)this, jval) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      680);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "skillID",
      (const std::allocator<char> *)(v2 + 48));
    skill_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( skill_id_ptr && !fromJson<unsigned int>(skill_id_ptr, &this->skill_id) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        692);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[29])"fromJson for: skillID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        "costDelta",
        (const std::allocator<char> *)(v2 + 64));
      cost_delta_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( cost_delta_ptr && !fromJson<float>(cost_delta_ptr, &this->cost_delta) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "fromJson",
          704);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[31])"fromJson for: costDelta fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          "costRatio",
          (const std::allocator<char> *)(v2 + 80));
        p_cost_ratio = (float *)(v2 + 416);
        cost_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( cost_ratio_ptr && (p_cost_ratio = &this->cost_ratio, !fromJson<float>(cost_ratio_ptr, &this->cost_ratio)) )
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "fromJson",
            716);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 480),
            (const char (*)[31])"fromJson for: costRatio fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_cost_ratio, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 723: range 0000000013BB58CA-0000000013BB6410
data::ModifySkillCostPtr __cdecl data::ModifySkillCost::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ModifySkillCostPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:736 96 16 7 ptr:742 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:730 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCost::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        733);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[43])"fromJson for: ModifySkillCost $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ModifySkillCost>::shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          739);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ModifySkillCost>::shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ModifySkillCost,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::ModifySkillCost>((const std::shared_ptr<data::ModifySkillCost> *)(v2 + 96), 0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            745);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[34])"cast to ModifySkillCostPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ModifySkillCost>::shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              750);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ModifySkillCost>::shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)jval, 0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ModifySkillCost>::shared_ptr(
              (std::shared_ptr<data::ModifySkillCost> *const)jval,
              (std::shared_ptr<data::ModifySkillCost> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ModifySkillCost>::~shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      727);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[48])"jsonValueFind for: ModifySkillCost $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ModifySkillCost>::shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 758: range 0000000013BB6412-0000000013BB6629
int32_t __cdecl data::ModifySkillCost::getHashValue(const data::ModifySkillCost *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:759";
  *(_QWORD *)(v2 + 16) = data::ModifySkillCost::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue((const data::ConfigTalentMixin *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id);
  }
  common::tools::HashUtils::appendHash(this->skill_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cost_delta);
  }
  common::tools::HashUtils::appendHash(this->cost_delta, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cost_ratio);
  }
  common::tools::HashUtils::appendHash(this->cost_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 770: range 0000000013C252DC-0000000013C2551D
void __cdecl data::ModifySkillPointRegister::ModifySkillPointRegister(data::ModifySkillPointRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ModifySkillPointRegister::ModifySkillPointRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifySkillPoint>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ModifySkillPoint",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::ModifySkillPoint>(
    v4,
    (std::shared_ptr<data::ModifySkillPoint> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ModifySkillPoint>::~shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 773: range 0000000013BB662A-0000000013BB6880
void __cdecl data::ModifySkillPoint::foreachMember(
        data::ModifySkillPoint *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 16 skill_id_any:775 64 16 19 point_delta_any:777 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillPoint::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigTalentMixin::foreachMember(
    (data::ConfigTalentMixin *const)this,
    (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->skill_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>((std::any *const)(v2 + 64), &this->point_delta);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 782: range 0000000013BB6882-0000000013BB6992
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::ModifySkillPoint::clone(data::ModifySkillPoint *const this)
{
  data::ModifySkillPoint *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillPoint::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ModifySkillPoint,data::ModifySkillPoint&>(
    (common::tools::perf::allocator<data::ModifySkillPoint,data::ModifySkillPoint> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::ModifySkillPoint,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::ModifySkillPoint> *)(v2 + 32));
  std::shared_ptr<data::ModifySkillPoint>::~shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 786: range 0000000013BB6994-0000000013BB69D7
data::ModifySkillPointPtr __cdecl data::ModifySkillPointFactory::create(data::ModifySkillPointFactory *const this)
{
  data::ModifySkillPointPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ModifySkillPoint>();
  result._M_ptr = (std::__shared_ptr<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 788: range 0000000013BB69D8-0000000013BB70E0
bool __cdecl data::ModifySkillPoint::fromJson(data::ModifySkillPoint *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  int32_t *p_point_delta; // rsi
  const Json::Value *skill_id_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *point_delta_ptr; // [rsp+18h] [rbp-1A8h]
  char v10[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillPoint::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson((data::ConfigTalentMixin *const)this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      791);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "skillID",
      (const std::allocator<char> *)(v2 + 32));
    skill_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( skill_id_ptr && !fromJson<unsigned int>(skill_id_ptr, &this->skill_id) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        803);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[29])"fromJson for: skillID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        "pointDelta",
        (const std::allocator<char> *)(v2 + 48));
      p_point_delta = (int32_t *)(v2 + 256);
      point_delta_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( point_delta_ptr && (p_point_delta = &this->point_delta, !fromJson<int>(point_delta_ptr, &this->point_delta)) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "fromJson",
          815);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[32])"fromJson for: pointDelta fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_point_delta, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 822: range 0000000013BB70E2-0000000013BB7C28
data::ModifySkillPointPtr __cdecl data::ModifySkillPoint::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ModifySkillPointPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:835 96 16 7 ptr:841 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:829 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ModifySkillPoint::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        832);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[44])"fromJson for: ModifySkillPoint $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ModifySkillPoint>::shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          838);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ModifySkillPoint>::shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ModifySkillPoint,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::ModifySkillPoint>((const std::shared_ptr<data::ModifySkillPoint> *)(v2 + 96), 0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            844);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[35])"cast to ModifySkillPointPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ModifySkillPoint>::shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              849);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ModifySkillPoint>::shared_ptr(
              (std::shared_ptr<data::ModifySkillPoint> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ModifySkillPoint>::shared_ptr(
              (std::shared_ptr<data::ModifySkillPoint> *const)jval,
              (std::shared_ptr<data::ModifySkillPoint> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ModifySkillPoint>::~shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      826);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[49])"jsonValueFind for: ModifySkillPoint $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ModifySkillPoint>::shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 857: range 0000000013BB7C2A-0000000013BB7DEC
int32_t __cdecl data::ModifySkillPoint::getHashValue(const data::ModifySkillPoint *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:858";
  *(_QWORD *)(v2 + 16) = data::ModifySkillPoint::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue((const data::ConfigTalentMixin *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id);
  }
  common::tools::HashUtils::appendHash(this->skill_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->point_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->point_delta);
  }
  common::tools::HashUtils::appendHash(this->point_delta, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 865: range 0000000013BB7DED-0000000013BB8088
const char *__cdecl data::enumValToStr(data::TalentType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  char v7; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::enumValToStr;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  if ( e == AvatarSkill )
  {
    result = "AvatarSkill";
  }
  else
  {
    if ( e <= AvatarSkill )
    {
      switch ( e )
      {
        case InherentProudSkill:
          result = "InherentProudSkill";
          goto LABEL_19;
        case None_76:
          result = "None";
          goto LABEL_19;
        case CoreProudSkill:
          result = "CoreProudSkill";
          goto LABEL_19;
      }
    }
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "enumValToStr",
      877);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = e;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = byte_1ABBC960;
  }
LABEL_19:
  if ( v8 == (char *)v1 )
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
  return result;
};

// Line 883: range 0000000013BB8089-0000000013BB8A0D
bool __cdecl data::enumStrToVal(const std::string *s, data::TalentType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalentType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalentType> >::pointer v11; // rax
  data::TalentType second; // ecx
  char v13; // dl
  data::TalentType *ea; // [rsp+10h] [rbp-260h]
  char v15[592]; // [rsp+20h] [rbp-250h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 8 6 it:896 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "enumStrToVal",
      886);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalentType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalentType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::TalentType>::pair<char const(&)[5],data::TalentType,true>(
        (std::pair<const std::string,data::TalentType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::TalentType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::TalentType>::pair<char const(&)[15],data::TalentType,true>(
        (std::pair<const std::string,data::TalentType> *const)(v2 + 360),
        (const char (*)[15])"CoreProudSkill",
        (data::TalentType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "CoreProudSkill");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::TalentType>::pair<char const(&)[19],data::TalentType,true>(
        (std::pair<const std::string,data::TalentType> *const)(v2 + 400),
        (const char (*)[19])"InherentProudSkill",
        (data::TalentType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "InherentProudSkill");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::TalentType>::pair<char const(&)[12],data::TalentType,true>(
        (std::pair<const std::string,data::TalentType> *const)(v2 + 440),
        (const char (*)[12])"AvatarSkill",
        (data::TalentType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::TalentType>>::allocator((std::allocator<std::pair<const std::string,data::TalentType> > *const)(v2 + 48));
      std::map<std::string,data::TalentType>::map(
        &data::enumStrToVal(std::string const&,data::TalentType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalentType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::TalentType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalentType &)::m);
      e = (data::TalentType *)&data::enumStrToVal(std::string const&,data::TalentType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalentType>::~map,
        &data::enumStrToVal(std::string const&,data::TalentType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalentType>>::~allocator((std::allocator<std::pair<const std::string,data::TalentType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalentType> *)(v2 + 480);
            i != (std::pair<const std::string,data::TalentType> *)(v2 + 320);
            std::pair<std::string const,data::TalentType>::~pair(i) )
      {
        --i;
      }
      v7 = (_DWORD *)(((v2 + 320) >> 3) + 2147450880);
      *v7 = -117901064;
      v7[1] = -117901064;
      v7[2] = -117901064;
      v7[3] = -117901064;
      v7[4] = -117901064;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::TalentType>::iterator *)(v2 + 128) = std::map<std::string,data::TalentType>::find(
                                                                        &data::enumStrToVal(std::string const&,data::TalentType &)::m,
                                                                        s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::TalentType>::iterator *)(v2 + 160) = std::map<std::string,data::TalentType>::end(&data::enumStrToVal(std::string const&,data::TalentType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalentType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalentType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "enumStrToVal",
        899);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalentType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalentType> > *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->second);
      }
      second = v11->second;
      v13 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v13 )
      {
        LOBYTE(v8) = v13 != 0;
        __asan_report_store4(ea, v8);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 907: range 0000000013BB8A0E-0000000013BB8A67
const char *__cdecl data::getDescription(data::TalentType e)
{
  if ( e == AvatarSkill )
    return (const char *)&unk_1ACA6400;
  if ( e <= AvatarSkill )
  {
    switch ( e )
    {
      case InherentProudSkill:
        return (const char *)&unk_1ACA63C0;
      case None_76:
        return "None";
      case CoreProudSkill:
        return (const char *)&unk_1ACA6380;
    }
  }
  return "unknown enum value!";
};

// Line 927: range 0000000013C25CA6-0000000013C25EE7
void __cdecl data::AddTalentExtraLevelRegister::AddTalentExtraLevelRegister(
        data::AddTalentExtraLevelRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigTalentMixin> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::AddTalentExtraLevelRegister::AddTalentExtraLevelRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::AddTalentExtraLevel>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "AddTalentExtraLevel",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::operator[](
         &data::g_ConfigTalentMixinMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigTalentMixin>::operator=<data::AddTalentExtraLevel>(
    v4,
    (std::shared_ptr<data::AddTalentExtraLevel> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::AddTalentExtraLevel>::~shared_ptr((std::shared_ptr<data::AddTalentExtraLevel> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
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
};

// Line 930: range 0000000013BB8A68-0000000013BB8D46
void __cdecl data::AddTalentExtraLevel::foreachMember(
        data::AddTalentExtraLevel *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 19 talent_type_any:932 64 16 20 talent_index_any:934 96 16 19 extra_level_any:936 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddTalentExtraLevel::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigTalentMixin::foreachMember(
    (data::ConfigTalentMixin *const)this,
    (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::TalentType &,data::TalentType,std::any::_Manager_internal<data::TalentType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->talent_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 64),
    &this->talent_index);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 96),
    &this->extra_level);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 941: range 0000000013BB8D48-0000000013BB8E58
std::shared_ptr<data::ConfigTalentMixin> __cdecl data::AddTalentExtraLevel::clone(
        data::AddTalentExtraLevel *const this)
{
  data::AddTalentExtraLevel *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigTalentMixin> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddTalentExtraLevel::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::AddTalentExtraLevel,data::AddTalentExtraLevel&>(
    (common::tools::perf::allocator<data::AddTalentExtraLevel,data::AddTalentExtraLevel> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<data::AddTalentExtraLevel,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    (std::shared_ptr<data::AddTalentExtraLevel> *)(v2 + 32));
  std::shared_ptr<data::AddTalentExtraLevel>::~shared_ptr((std::shared_ptr<data::AddTalentExtraLevel> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 945: range 0000000013BB8E5A-0000000013BB8E9D
data::AddTalentExtraLevelPtr __cdecl data::AddTalentExtraLevelFactory::create(
        data::AddTalentExtraLevelFactory *const this)
{
  data::AddTalentExtraLevelPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::AddTalentExtraLevel>();
  result._M_ptr = (std::__shared_ptr<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 947: range 0000000013BB8E9E-0000000013BB9962
bool __cdecl data::AddTalentExtraLevel::fromJson(data::AddTalentExtraLevel *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  uint32_t *p_extra_level; // rsi
  Json::Value *talent_type_ptr; // [rsp+18h] [rbp-2A8h]
  const Json::Value *talent_index_ptr; // [rsp+20h] [rbp-2A0h]
  const Json::Value *extra_level_ptr; // [rsp+28h] [rbp-298h]
  char v12[656]; // [rsp+30h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddTalentExtraLevel::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  if ( !data::ConfigTalentMixin::fromJson((data::ConfigTalentMixin *const)this, jval) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "fromJson",
      950);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[39])"fromJson for: ConfigTalentMixin fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "talentType",
      (const std::allocator<char> *)(v2 + 48));
    talent_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !talent_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)talent_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->talent_type);
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "fromJson",
        962);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[32])"fromJson for: talentType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "talentIndex",
        (const std::allocator<char> *)(v2 + 64));
      talent_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( talent_index_ptr && !fromJson<unsigned int>(talent_index_ptr, &this->talent_index) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "fromJson",
          974);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[33])"fromJson for: talentIndex fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "extraLevel",
          (const std::allocator<char> *)(v2 + 80));
        p_extra_level = (uint32_t *)(v2 + 480);
        extra_level_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( extra_level_ptr
          && (p_extra_level = &this->extra_level, !fromJson<unsigned int>(extra_level_ptr, &this->extra_level)) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "fromJson",
            986);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[32])"fromJson for: extraLevel fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_extra_level, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 993: range 0000000013BB9964-0000000013BBA4AA
data::AddTalentExtraLevelPtr __cdecl data::AddTalentExtraLevel::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::AddTalentExtraLevelPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1006 96 16 8 ptr:1012 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1000 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AddTalentExtraLevel::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
        "parseFromJson",
        1003);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[47])"fromJson for: AddTalentExtraLevel $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::AddTalentExtraLevel>::shared_ptr(
        (std::shared_ptr<data::AddTalentExtraLevel> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigTalentMixin((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
          "parseFromJson",
          1009);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigTalentMixin fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::AddTalentExtraLevel>::shared_ptr(
          (std::shared_ptr<data::AddTalentExtraLevel> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::AddTalentExtraLevel,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v2 + 96));
        if ( std::operator==<data::AddTalentExtraLevel>(
               (const std::shared_ptr<data::AddTalentExtraLevel> *)(v2 + 96),
               0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
            "parseFromJson",
            1015);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[38])"cast to AddTalentExtraLevelPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::AddTalentExtraLevel>::shared_ptr(
            (std::shared_ptr<data::AddTalentExtraLevel> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
              "parseFromJson",
              1020);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::AddTalentExtraLevel>::shared_ptr(
              (std::shared_ptr<data::AddTalentExtraLevel> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::AddTalentExtraLevel>::shared_ptr(
              (std::shared_ptr<data::AddTalentExtraLevel> *const)jval,
              (std::shared_ptr<data::AddTalentExtraLevel> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::AddTalentExtraLevel>::~shared_ptr((std::shared_ptr<data::AddTalentExtraLevel> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.cpp",
      "parseFromJson",
      997);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[52])"jsonValueFind for: AddTalentExtraLevel $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::AddTalentExtraLevel>::shared_ptr((std::shared_ptr<data::AddTalentExtraLevel> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1028: range 0000000013BBA4AC-0000000013BBA6BF
int32_t __cdecl data::AddTalentExtraLevel::getHashValue(const data::AddTalentExtraLevel *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1029";
  *(_QWORD *)(v2 + 16) = data::AddTalentExtraLevel::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigTalentMixin::getHashValue((const data::ConfigTalentMixin *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->talent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->talent_type);
  }
  common::tools::HashUtils::appendHash(this->talent_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->talent_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talent_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->talent_index);
  }
  common::tools::HashUtils::appendHash(this->talent_index, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->extra_level);
  }
  common::tools::HashUtils::appendHash(this->extra_level, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
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

// Line 1036: range 0000000013BC963B-0000000013BC964F
void __cdecl GLOBAL__sub_I_merge_merge_ActivityRogueDiaryExcelConfig_gen_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1036: range 0000000013BC61C2-0000000013BC963A
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  __int64 v2; // rax
  _DWORD *v3; // r12
  const boost::system::error_category *system_category; // rcx
  const boost::system::error_category *netdb_category; // rcx
  const boost::system::error_category *addrinfo_category; // rcx
  const boost::system::error_category *misc_category; // rcx
  std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > *i; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > *j; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > *k; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > *m; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > *n; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > *ii; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > *jj; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > *kk; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > *mm; // rbx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > *nn; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > *i1; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > *i2; // rbx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > *i3; // rbx
  unsigned __int64 v45; // rax
  _BYTE *v46; // rcx
  char v47; // dl
  std::shared_ptr<data::AddTalentExtraLevelFactory> *v48; // rsi
  __int64 v49; // rdx
  _BYTE *v50; // rcx
  char v51; // dl
  __int64 v52; // rdx
  const char *v53; // rcx
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > > __l; // [rsp+10h] [rbp-880h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > > v55; // [rsp+20h] [rbp-870h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > > v56; // [rsp+30h] [rbp-860h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > > v57; // [rsp+40h] [rbp-850h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > > v58; // [rsp+50h] [rbp-840h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > > v59; // [rsp+60h] [rbp-830h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > > v60; // [rsp+70h] [rbp-820h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > > v61; // [rsp+80h] [rbp-810h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > > v62; // [rsp+90h] [rbp-800h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > > v63; // [rsp+A0h] [rbp-7F0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > > v64; // [rsp+B0h] [rbp-7E0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > > v65; // [rsp+C0h] [rbp-7D0h]
  unsigned __int64 v66; // [rsp+D0h] [rbp-7C0h]
  char v67[1968]; // [rsp+E0h] [rbp-7B0h] BYREF

  v66 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1920LL);
    if ( v2 )
      v66 = v2;
  }
  *(_QWORD *)v66 = 1102416563LL;
  *(_QWORD *)(v66 + 8) = "52 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                         "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <un"
                         "known> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown"
                         "> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384"
                         " 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 16 9"
                         " <unknown> 496 16 9 <unknown> 528 16 9 <unknown> 560 16 9 <unknown> 592 16 9 <unknown> 624 16 9"
                         " <unknown> 656 16 9 <unknown> 688 16 9 <unknown> 720 16 9 <unknown> 752 16 9 <unknown> 784 16 9"
                         " <unknown> 816 16 9 <unknown> 848 16 9 <unknown> 880 48 9 <unknown> 960 48 9 <unknown> 1040 48 "
                         "9 <unknown> 1120 48 9 <unknown> 1200 48 9 <unknown> 1280 48 9 <unknown> 1360 48 9 <unknown> 144"
                         "0 48 9 <unknown> 1520 48 9 <unknown> 1600 48 9 <unknown> 1680 48 9 <unknown> 1760 48 9 <unknown"
                         "> 1840 48 9 <unknown>";
  *(_QWORD *)(v66 + 16) = __static_initialization_and_destruction_0;
  v3 = (_DWORD *)(v66 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234753535;
  v3[536862724] = -234753535;
  v3[536862725] = -234753535;
  v3[536862726] = -234753535;
  v3[536862727] = -234753535;
  v3[536862728] = -234753535;
  v3[536862729] = -234753535;
  v3[536862730] = -234753535;
  v3[536862731] = -234753535;
  v3[536862732] = -234753535;
  v3[536862733] = -234753535;
  v3[536862734] = 61953;
  v3[536862735] = 62194;
  v3[536862736] = 62194;
  v3[536862737] = 62194;
  v3[536862738] = 62194;
  v3[536862739] = 62194;
  v3[536862740] = 62194;
  v3[536862741] = 62194;
  v3[536862742] = 62194;
  v3[536862743] = 62194;
  v3[536862744] = 62194;
  v3[536862745] = 62194;
  v3[536862746] = 62194;
  v3[536862747] = 62194;
  v3[536862749] = -218959118;
  v3[536862751] = -219021312;
  v3[536862752] = 62194;
  v3[536862754] = -218959118;
  v3[536862756] = -219021312;
  v3[536862757] = 62194;
  v3[536862759] = -218959118;
  v3[536862761] = -219021312;
  v3[536862762] = 62194;
  v3[536862764] = -218959118;
  v3[536862766] = -219021312;
  v3[536862767] = 62194;
  v3[536862769] = -218959118;
  v3[536862771] = -219021312;
  v3[536862772] = 62194;
  v3[536862774] = -218959118;
  v3[536862776] = -219021312;
  v3[536862777] = 62194;
  v3[536862779] = -202116109;
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_ActivityRogueDiaryExcelConfig.gen.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::system_category, &std::__ioinit);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::netdb_category, &std::__ioinit);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::addrinfo_category, &std::__ioinit);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::misc_category, &std::__ioinit);
      boost::asio::error::misc_category = misc_category;
      if ( *(_WORD *)(((v66 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigPreQuestSkipBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestSkipBase>>::pair<char const(&)[23],std::shared_ptr<data::ConfigPreQuestSkipBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > *const)(v66 + 880),
        (const char (*)[23])"ConfigPreQuestSkipBase",
        (std::shared_ptr<data::ConfigPreQuestSkipBase> *)(v66 + 464));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestSkipBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > > *const)(v66 + 64));
      std::map<std::string,std::shared_ptr<data::ConfigPreQuestSkipBase>>::map(
        &data::g_ConfigPreQuestSkipBaseMap[abi:cxx11],
        (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > >)__PAIR128__(1LL, v66 + 880),
        (const std::less<std::string > *)(v66 + 48),
        (const std::map<std::string,std::shared_ptr<data::ConfigPreQuestSkipBase>>::allocator_type *)(v66 + 64));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestSkipBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > > *const)(v66 + 64));
      *(_BYTE *)(((v66 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > *)(v66 + 928);
            i != (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestSkipBase> > *)(v66 + 880);
            std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestSkipBase>>::~pair(i) )
      {
        --i;
      }
      v9 = ((v66 + 880) >> 3) + 2147450880;
      *(_DWORD *)v9 = -117901064;
      *(_WORD *)(v9 + 4) = -1800;
      std::shared_ptr<data::ConfigPreQuestSkipBase>::~shared_ptr((std::shared_ptr<data::ConfigPreQuestSkipBase> *const)(v66 + 464));
      *(_WORD *)(((v66 + 464) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigPreQuestSkipBase>>::~map,
        &data::g_ConfigPreQuestSkipBaseMap[abi:cxx11],
        &_dso_handle);
      v10 = ((v66 + 960) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      *(_WORD *)(((v66 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 496) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigPreQuestPredicateBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestPredicateBase>>::pair<char const(&)[28],std::shared_ptr<data::ConfigPreQuestPredicateBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > *const)(v66 + 960),
        (const char (*)[28])"ConfigPreQuestPredicateBase",
        (std::shared_ptr<data::ConfigPreQuestPredicateBase> *)(v66 + 496));
      __l._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > >::iterator)(v66 + 960);
      __l._M_len = 1LL;
      *(_BYTE *)(((v66 + 80) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestPredicateBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > > *const)(v66 + 96));
      std::map<std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase>>::map(
        &data::g_ConfigPreQuestPredicateBaseMap[abi:cxx11],
        __l,
        (const std::less<std::string > *)(v66 + 80),
        (const std::map<std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase>>::allocator_type *)(v66 + 96));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestPredicateBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > > *const)(v66 + 96));
      *(_BYTE *)(((v66 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 80) >> 3) + 0x7FFF8000) = -8;
      for ( j = (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > *)(v66 + 1008);
            j != (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase> > *)(v66 + 960);
            std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestPredicateBase>>::~pair(j) )
      {
        --j;
      }
      v12 = ((v66 + 960) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_WORD *)(v12 + 4) = -1800;
      std::shared_ptr<data::ConfigPreQuestPredicateBase>::~shared_ptr((std::shared_ptr<data::ConfigPreQuestPredicateBase> *const)(v66 + 496));
      *(_WORD *)(((v66 + 496) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigPreQuestPredicateBase>>::~map,
        &data::g_ConfigPreQuestPredicateBaseMap[abi:cxx11],
        &_dso_handle);
      v13 = ((v66 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_WORD *)(v13 + 4) = 0;
      *(_WORD *)(((v66 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 528) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigPreQuestActionBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestActionBase>>::pair<char const(&)[25],std::shared_ptr<data::ConfigPreQuestActionBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > *const)(v66 + 1040),
        (const char (*)[25])"ConfigPreQuestActionBase",
        (std::shared_ptr<data::ConfigPreQuestActionBase> *)(v66 + 528));
      v55._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > >::iterator)(v66 + 1040);
      v55._M_len = 1LL;
      *(_BYTE *)(((v66 + 112) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestActionBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > > *const)(v66 + 128));
      std::map<std::string,std::shared_ptr<data::ConfigPreQuestActionBase>>::map(
        &data::g_ConfigPreQuestActionBaseMap[abi:cxx11],
        v55,
        (const std::less<std::string > *)(v66 + 112),
        (const std::map<std::string,std::shared_ptr<data::ConfigPreQuestActionBase>>::allocator_type *)(v66 + 128));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestActionBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > > *const)(v66 + 128));
      *(_BYTE *)(((v66 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( k = (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > *)(v66 + 1088);
            k != (std::pair<const std::string,std::shared_ptr<data::ConfigPreQuestActionBase> > *)(v66 + 1040);
            std::pair<std::string const,std::shared_ptr<data::ConfigPreQuestActionBase>>::~pair(k) )
      {
        --k;
      }
      v15 = ((v66 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v15 = -117901064;
      *(_WORD *)(v15 + 4) = -1800;
      std::shared_ptr<data::ConfigPreQuestActionBase>::~shared_ptr((std::shared_ptr<data::ConfigPreQuestActionBase> *const)(v66 + 528));
      *(_WORD *)(((v66 + 528) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigPreQuestActionBase>>::~map,
        &data::g_ConfigPreQuestActionBaseMap[abi:cxx11],
        &_dso_handle);
      data::ConfigPreQuestBehaviourBaseRegister::ConfigPreQuestBehaviourBaseRegister(&data::g_ConfigPreQuestBehaviourBaseRegister);
      data::ConfigPreQuestDisplayBaseRegister::ConfigPreQuestDisplayBaseRegister(&data::g_ConfigPreQuestDisplayBaseRegister);
      data::ConfigRedBannerLockRegister::ConfigRedBannerLockRegister(&data::g_ConfigRedBannerLockRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRedBannerLockFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRedBannerLockFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRedBannerLockFactory>::~shared_ptr,
        &data::ConfigRedBannerLockFactory::instance_ptr,
        &_dso_handle);
      data::ConfigYellowBannerWithButtonRegister::ConfigYellowBannerWithButtonRegister(&data::g_ConfigYellowBannerWithButtonRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigYellowBannerWithButtonFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigYellowBannerWithButtonFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigYellowBannerWithButtonFactory>::~shared_ptr,
        &data::ConfigYellowBannerWithButtonFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGotoQuestButtonRegister::ConfigGotoQuestButtonRegister(&data::g_ConfigGotoQuestButtonRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGotoQuestButtonFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGotoQuestButtonFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGotoQuestButtonFactory>::~shared_ptr,
        &data::ConfigGotoQuestButtonFactory::instance_ptr,
        &_dso_handle);
      data::ConfigShowBlackTipRegister::ConfigShowBlackTipRegister(&data::g_ConfigShowBlackTipRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigShowBlackTipFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigShowBlackTipFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigShowBlackTipFactory>::~shared_ptr,
        &data::ConfigShowBlackTipFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGotoQuestPageRegister::ConfigGotoQuestPageRegister(&data::g_ConfigGotoQuestPageRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGotoQuestPageFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGotoQuestPageFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGotoQuestPageFactory>::~shared_ptr,
        &data::ConfigGotoQuestPageFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGotoPersonalLinePageRegister::ConfigGotoPersonalLinePageRegister(&data::g_ConfigGotoPersonalLinePageRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGotoPersonalLinePageFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGotoPersonalLinePageFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGotoPersonalLinePageFactory>::~shared_ptr,
        &data::ConfigGotoPersonalLinePageFactory::instance_ptr,
        &_dso_handle);
      data::ConfigGotoQuestAcceptionMarkPageRegister::ConfigGotoQuestAcceptionMarkPageRegister(&data::g_ConfigGotoQuestAcceptionMarkPageRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigGotoQuestAcceptionMarkPageFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigGotoQuestAcceptionMarkPageFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigGotoQuestAcceptionMarkPageFactory>::~shared_ptr,
        &data::ConfigGotoQuestAcceptionMarkPageFactory::instance_ptr,
        &_dso_handle);
      data::ConfigSkipByQuickOpenRegister::ConfigSkipByQuickOpenRegister(&data::g_ConfigSkipByQuickOpenRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigSkipByQuickOpenFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigSkipByQuickOpenFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigSkipByQuickOpenFactory>::~shared_ptr,
        &data::ConfigSkipByQuickOpenFactory::instance_ptr,
        &_dso_handle);
      data::ConfigPredicateByPlayerLevelRegister::ConfigPredicateByPlayerLevelRegister(&data::g_ConfigPredicateByPlayerLevelRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigPredicateByPlayerLevelFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigPredicateByPlayerLevelFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigPredicateByPlayerLevelFactory>::~shared_ptr,
        &data::ConfigPredicateByPlayerLevelFactory::instance_ptr,
        &_dso_handle);
      v16 = ((v66 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v16 = 0;
      *(_WORD *)(v16 + 4) = 0;
      *(_WORD *)(((v66 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 560) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::pair<char const(&)[34],std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > *const)(v66 + 1120),
        (const char (*)[34])"ConfigBattleFervorUpdatePredicate",
        (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v66 + 560));
      v56._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > >::iterator)(v66 + 1120);
      v56._M_len = 1LL;
      *(_BYTE *)(((v66 + 144) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > > *const)(v66 + 160));
      std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::map(
        &data::g_ConfigBattleFervorUpdatePredicateMap[abi:cxx11],
        v56,
        (const std::less<std::string > *)(v66 + 144),
        (const std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::allocator_type *)(v66 + 160));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > > *const)(v66 + 160));
      *(_BYTE *)(((v66 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 144) >> 3) + 0x7FFF8000) = -8;
      for ( m = (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > *)(v66 + 1168);
            m != (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > *)(v66 + 1120);
            std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::~pair(m) )
      {
        --m;
      }
      v18 = ((v66 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)(v66 + 560));
      *(_WORD *)(((v66 + 560) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::~map,
        &data::g_ConfigBattleFervorUpdatePredicateMap[abi:cxx11],
        &_dso_handle);
      data::ConfigBattleFervorUpdatePredicate_FactorRangeRegister::ConfigBattleFervorUpdatePredicate_FactorRangeRegister(&data::g_ConfigBattleFervorUpdatePredicate_FactorRangeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister(&data::g_ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory::instance_ptr,
        &_dso_handle);
      v19 = ((v66 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v19 = 0;
      *(_WORD *)(v19 + 4) = 0;
      *(_WORD *)(((v66 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 592) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::pair<char const(&)[32],std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > *const)(v66 + 1200),
        (const char (*)[32])"ConfigBattleFervorUpdateTrigger",
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v66 + 592));
      v57._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > >::iterator)(v66 + 1200);
      v57._M_len = 1LL;
      *(_BYTE *)(((v66 + 176) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 192) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > > *const)(v66 + 192));
      std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::map(
        &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
        v57,
        (const std::less<std::string > *)(v66 + 176),
        (const std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::allocator_type *)(v66 + 192));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > > *const)(v66 + 192));
      *(_BYTE *)(((v66 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 176) >> 3) + 0x7FFF8000) = -8;
      for ( n = (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > *)(v66 + 1248);
            n != (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > *)(v66 + 1200);
            std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::~pair(n) )
      {
        --n;
      }
      v21 = ((v66 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v21 = -117901064;
      *(_WORD *)(v21 + 4) = -1800;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v66 + 592));
      *(_WORD *)(((v66 + 592) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::~map,
        &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
        &_dso_handle);
      data::ConfigBattleFervorUpateTrigger_ByTickRegister::ConfigBattleFervorUpateTrigger_ByTickRegister(&data::g_ConfigBattleFervorUpateTrigger_ByTickRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpateTrigger_ByTickFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpateTrigger_ByTickFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTickFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpateTrigger_ByTickFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister(&data::g_ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister(&data::g_ConfigBattleFervorUpdateTrigger_ByAttackTagRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorUpdateTrigger_ByElementArtRegister::ConfigBattleFervorUpdateTrigger_ByElementArtRegister(&data::g_ConfigBattleFervorUpdateTrigger_ByElementArtRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister(&data::g_ConfigBattleFervorUpdateTrigger_ByElementBurstRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorUpdateTrigger_ByMonsterRegister::ConfigBattleFervorUpdateTrigger_ByMonsterRegister(&data::g_ConfigBattleFervorUpdateTrigger_ByMonsterRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory>::~shared_ptr,
        &data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory::instance_ptr,
        &_dso_handle);
      v22 = ((v66 + 1280) >> 3) + 2147450880;
      *(_DWORD *)v22 = 0;
      *(_WORD *)(v22 + 4) = 0;
      *(_WORD *)(((v66 + 624) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 624) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorFactor>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorFactor>>::pair<char const(&)[25],std::shared_ptr<data::ConfigBattleFervorFactor>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > *const)(v66 + 1280),
        (const char (*)[25])"ConfigBattleFervorFactor",
        (std::shared_ptr<data::ConfigBattleFervorFactor> *)(v66 + 624));
      v58._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > >::iterator)(v66 + 1280);
      v58._M_len = 1LL;
      *(_BYTE *)(((v66 + 208) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 224) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorFactor>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > > *const)(v66 + 224));
      std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::map(
        &data::g_ConfigBattleFervorFactorMap[abi:cxx11],
        v58,
        (const std::less<std::string > *)(v66 + 208),
        (const std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::allocator_type *)(v66 + 224));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorFactor>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > > *const)(v66 + 224));
      *(_BYTE *)(((v66 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 208) >> 3) + 0x7FFF8000) = -8;
      for ( ii = (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > *)(v66 + 1328);
            ii != (std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > *)(v66 + 1280);
            std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorFactor>>::~pair(ii) )
      {
        --ii;
      }
      v24 = ((v66 + 1280) >> 3) + 2147450880;
      *(_DWORD *)v24 = -117901064;
      *(_WORD *)(v24 + 4) = -1800;
      std::shared_ptr<data::ConfigBattleFervorFactor>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor> *const)(v66 + 624));
      *(_WORD *)(((v66 + 624) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::~map,
        &data::g_ConfigBattleFervorFactorMap[abi:cxx11],
        &_dso_handle);
      data::ConfigBattleFervorFactor_ByTriggerRegister::ConfigBattleFervorFactor_ByTriggerRegister(&data::g_ConfigBattleFervorFactor_ByTriggerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorFactor_ByTriggerFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByTriggerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorFactor_ByTriggerFactory>::~shared_ptr,
        &data::ConfigBattleFervorFactor_ByTriggerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBattleFervorFactor_ByMonsterRegister::ConfigBattleFervorFactor_ByMonsterRegister(&data::g_ConfigBattleFervorFactor_ByMonsterRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBattleFervorFactor_ByMonsterFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByMonsterFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBattleFervorFactor_ByMonsterFactory>::~shared_ptr,
        &data::ConfigBattleFervorFactor_ByMonsterFactory::instance_ptr,
        &_dso_handle);
      v25 = ((v66 + 1360) >> 3) + 2147450880;
      *(_DWORD *)v25 = 0;
      *(_WORD *)(v25 + 4) = 0;
      *(_WORD *)(((v66 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 656) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigClimateInfoBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigClimateInfoBase>>::pair<char const(&)[22],std::shared_ptr<data::ConfigClimateInfoBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > *const)(v66 + 1360),
        (const char (*)[22])"ConfigClimateInfoBase",
        (std::shared_ptr<data::ConfigClimateInfoBase> *)(v66 + 656));
      v59._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > >::iterator)(v66 + 1360);
      v59._M_len = 1LL;
      *(_BYTE *)(((v66 + 240) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 256) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigClimateInfoBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > > *const)(v66 + 256));
      std::map<std::string,std::shared_ptr<data::ConfigClimateInfoBase>>::map(
        &data::g_ConfigClimateInfoBaseMap[abi:cxx11],
        v59,
        (const std::less<std::string > *)(v66 + 240),
        (const std::map<std::string,std::shared_ptr<data::ConfigClimateInfoBase>>::allocator_type *)(v66 + 256));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigClimateInfoBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > > *const)(v66 + 256));
      *(_BYTE *)(((v66 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 240) >> 3) + 0x7FFF8000) = -8;
      for ( jj = (std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > *)(v66 + 1408);
            jj != (std::pair<const std::string,std::shared_ptr<data::ConfigClimateInfoBase> > *)(v66 + 1360);
            std::pair<std::string const,std::shared_ptr<data::ConfigClimateInfoBase>>::~pair(jj) )
      {
        --jj;
      }
      v27 = ((v66 + 1360) >> 3) + 2147450880;
      *(_DWORD *)v27 = -117901064;
      *(_WORD *)(v27 + 4) = -1800;
      std::shared_ptr<data::ConfigClimateInfoBase>::~shared_ptr((std::shared_ptr<data::ConfigClimateInfoBase> *const)(v66 + 656));
      *(_WORD *)(((v66 + 656) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigClimateInfoBase>>::~map,
        &data::g_ConfigClimateInfoBaseMap[abi:cxx11],
        &_dso_handle);
      data::ConfigClimateInfoRegister::ConfigClimateInfoRegister(&data::g_ConfigClimateInfoRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigClimateInfoFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigClimateInfoFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigClimateInfoFactory>::~shared_ptr,
        &data::ConfigClimateInfoFactory::instance_ptr,
        &_dso_handle);
      v28 = ((v66 + 1440) >> 3) + 2147450880;
      *(_DWORD *)v28 = 0;
      *(_WORD *)(v28 + 4) = 0;
      *(_WORD *)(((v66 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 688) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopBaseNode>();
      std::pair<std::string const,std::shared_ptr<data::ConfigCoopBaseNode>>::pair<char const(&)[19],std::shared_ptr<data::ConfigCoopBaseNode>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > *const)(v66 + 1440),
        (const char (*)[19])"ConfigCoopBaseNode",
        (std::shared_ptr<data::ConfigCoopBaseNode> *)(v66 + 688));
      v60._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > >::iterator)(v66 + 1440);
      v60._M_len = 1LL;
      *(_BYTE *)(((v66 + 272) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 288) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigCoopBaseNode>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > > *const)(v66 + 288));
      std::map<std::string,std::shared_ptr<data::ConfigCoopBaseNode>>::map(
        &data::g_ConfigCoopBaseNodeMap[abi:cxx11],
        v60,
        (const std::less<std::string > *)(v66 + 272),
        (const std::map<std::string,std::shared_ptr<data::ConfigCoopBaseNode>>::allocator_type *)(v66 + 288));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigCoopBaseNode>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > > *const)(v66 + 288));
      *(_BYTE *)(((v66 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 272) >> 3) + 0x7FFF8000) = -8;
      for ( kk = (std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > *)(v66 + 1488);
            kk != (std::pair<const std::string,std::shared_ptr<data::ConfigCoopBaseNode> > *)(v66 + 1440);
            std::pair<std::string const,std::shared_ptr<data::ConfigCoopBaseNode>>::~pair(kk) )
      {
        --kk;
      }
      v30 = ((v66 + 1440) >> 3) + 2147450880;
      *(_DWORD *)v30 = -117901064;
      *(_WORD *)(v30 + 4) = -1800;
      std::shared_ptr<data::ConfigCoopBaseNode>::~shared_ptr((std::shared_ptr<data::ConfigCoopBaseNode> *const)(v66 + 688));
      *(_WORD *)(((v66 + 688) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigCoopBaseNode>>::~map,
        &data::g_ConfigCoopBaseNodeMap[abi:cxx11],
        &_dso_handle);
      data::ConfigCoopTalkNodeRegister::ConfigCoopTalkNodeRegister(&data::g_ConfigCoopTalkNodeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCoopTalkNodeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopTalkNodeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCoopTalkNodeFactory>::~shared_ptr,
        &data::ConfigCoopTalkNodeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCoopCondNodeRegister::ConfigCoopCondNodeRegister(&data::g_ConfigCoopCondNodeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCoopCondNodeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopCondNodeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCoopCondNodeFactory>::~shared_ptr,
        &data::ConfigCoopCondNodeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCoopSelectNodeRegister::ConfigCoopSelectNodeRegister(&data::g_ConfigCoopSelectNodeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCoopSelectNodeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopSelectNodeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCoopSelectNodeFactory>::~shared_ptr,
        &data::ConfigCoopSelectNodeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCoopActionNodeRegister::ConfigCoopActionNodeRegister(&data::g_ConfigCoopActionNodeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCoopActionNodeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopActionNodeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCoopActionNodeFactory>::~shared_ptr,
        &data::ConfigCoopActionNodeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigCoopEndNodeRegister::ConfigCoopEndNodeRegister(&data::g_ConfigCoopEndNodeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigCoopEndNodeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigCoopEndNodeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigCoopEndNodeFactory>::~shared_ptr,
        &data::ConfigCoopEndNodeFactory::instance_ptr,
        &_dso_handle);
      v31 = ((v66 + 1520) >> 3) + 2147450880;
      *(_DWORD *)v31 = 0;
      *(_WORD *)(v31 + 4) = 0;
      *(_WORD *)(((v66 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 720) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBaseCutscene>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBaseCutscene>>::pair<char const(&)[19],std::shared_ptr<data::ConfigBaseCutscene>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > *const)(v66 + 1520),
        (const char (*)[19])"ConfigBaseCutscene",
        (std::shared_ptr<data::ConfigBaseCutscene> *)(v66 + 720));
      v61._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > >::iterator)(v66 + 1520);
      v61._M_len = 1LL;
      *(_BYTE *)(((v66 + 304) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 320) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseCutscene>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > > *const)(v66 + 320));
      std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::map(
        &data::g_ConfigBaseCutsceneMap[abi:cxx11],
        v61,
        (const std::less<std::string > *)(v66 + 304),
        (const std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::allocator_type *)(v66 + 320));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseCutscene>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > > *const)(v66 + 320));
      *(_BYTE *)(((v66 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 304) >> 3) + 0x7FFF8000) = -8;
      for ( mm = (std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > *)(v66 + 1568);
            mm != (std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > *)(v66 + 1520);
            std::pair<std::string const,std::shared_ptr<data::ConfigBaseCutscene>>::~pair(mm) )
      {
        --mm;
      }
      v33 = ((v66 + 1520) >> 3) + 2147450880;
      *(_DWORD *)v33 = -117901064;
      *(_WORD *)(v33 + 4) = -1800;
      std::shared_ptr<data::ConfigBaseCutscene>::~shared_ptr((std::shared_ptr<data::ConfigBaseCutscene> *const)(v66 + 720));
      *(_WORD *)(((v66 + 720) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::~map,
        &data::g_ConfigBaseCutsceneMap[abi:cxx11],
        &_dso_handle);
      data::ConfigTimelineRegister::ConfigTimelineRegister(&data::g_ConfigTimelineRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigTimelineFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigTimelineFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigTimelineFactory>::~shared_ptr,
        &data::ConfigTimelineFactory::instance_ptr,
        &_dso_handle);
      v34 = ((v66 + 1600) >> 3) + 2147450880;
      *(_DWORD *)v34 = 0;
      *(_WORD *)(v34 + 4) = 0;
      *(_WORD *)(((v66 + 752) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 752) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVideoCommonEvent>();
      std::pair<std::string const,std::shared_ptr<data::ConfigVideoCommonEvent>>::pair<char const(&)[23],std::shared_ptr<data::ConfigVideoCommonEvent>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > *const)(v66 + 1600),
        (const char (*)[23])"ConfigVideoCommonEvent",
        (std::shared_ptr<data::ConfigVideoCommonEvent> *)(v66 + 752));
      v62._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > >::iterator)(v66 + 1600);
      v62._M_len = 1LL;
      *(_BYTE *)(((v66 + 336) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 352) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigVideoCommonEvent>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > > *const)(v66 + 352));
      std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::map(
        &data::g_ConfigVideoCommonEventMap[abi:cxx11],
        v62,
        (const std::less<std::string > *)(v66 + 336),
        (const std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::allocator_type *)(v66 + 352));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigVideoCommonEvent>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > > *const)(v66 + 352));
      *(_BYTE *)(((v66 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 336) >> 3) + 0x7FFF8000) = -8;
      for ( nn = (std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > *)(v66 + 1648);
            nn != (std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > *)(v66 + 1600);
            std::pair<std::string const,std::shared_ptr<data::ConfigVideoCommonEvent>>::~pair(nn) )
      {
        --nn;
      }
      v36 = ((v66 + 1600) >> 3) + 2147450880;
      *(_DWORD *)v36 = -117901064;
      *(_WORD *)(v36 + 4) = -1800;
      std::shared_ptr<data::ConfigVideoCommonEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoCommonEvent> *const)(v66 + 752));
      *(_WORD *)(((v66 + 752) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::~map,
        &data::g_ConfigVideoCommonEventMap[abi:cxx11],
        &_dso_handle);
      data::ConfigVideoPlayAudioEventRegister::ConfigVideoPlayAudioEventRegister(&data::g_ConfigVideoPlayAudioEventRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigVideoPlayAudioEventFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVideoPlayAudioEventFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigVideoPlayAudioEventFactory>::~shared_ptr,
        &data::ConfigVideoPlayAudioEventFactory::instance_ptr,
        &_dso_handle);
      data::ConfigVideoShowNameCardDialogEventRegister::ConfigVideoShowNameCardDialogEventRegister(&data::g_ConfigVideoShowNameCardDialogEventRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigVideoShowNameCardDialogEventFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVideoShowNameCardDialogEventFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigVideoShowNameCardDialogEventFactory>::~shared_ptr,
        &data::ConfigVideoShowNameCardDialogEventFactory::instance_ptr,
        &_dso_handle);
      v37 = ((v66 + 1680) >> 3) + 2147450880;
      *(_DWORD *)v37 = 0;
      *(_WORD *)(v37 + 4) = 0;
      *(_WORD *)(((v66 + 784) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 784) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::DebugBlletinInfo>();
      std::pair<std::string const,std::shared_ptr<data::DebugBlletinInfo>>::pair<char const(&)[17],std::shared_ptr<data::DebugBlletinInfo>,true>(
        (std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > *const)(v66 + 1680),
        (const char (*)[17])"DebugBlletinInfo",
        (std::shared_ptr<data::DebugBlletinInfo> *)(v66 + 784));
      v63._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > >::iterator)(v66 + 1680);
      v63._M_len = 1LL;
      *(_BYTE *)(((v66 + 368) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 384) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::DebugBlletinInfo>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > > *const)(v66 + 384));
      std::map<std::string,std::shared_ptr<data::DebugBlletinInfo>>::map(
        &data::g_DebugBlletinInfoMap[abi:cxx11],
        v63,
        (const std::less<std::string > *)(v66 + 368),
        (const std::map<std::string,std::shared_ptr<data::DebugBlletinInfo>>::allocator_type *)(v66 + 384));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::DebugBlletinInfo>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > > *const)(v66 + 384));
      *(_BYTE *)(((v66 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 368) >> 3) + 0x7FFF8000) = -8;
      for ( i1 = (std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > *)(v66 + 1728);
            i1 != (std::pair<const std::string,std::shared_ptr<data::DebugBlletinInfo> > *)(v66 + 1680);
            std::pair<std::string const,std::shared_ptr<data::DebugBlletinInfo>>::~pair(i1) )
      {
        --i1;
      }
      v39 = ((v66 + 1680) >> 3) + 2147450880;
      *(_DWORD *)v39 = -117901064;
      *(_WORD *)(v39 + 4) = -1800;
      std::shared_ptr<data::DebugBlletinInfo>::~shared_ptr((std::shared_ptr<data::DebugBlletinInfo> *const)(v66 + 784));
      *(_WORD *)(((v66 + 784) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::DebugBlletinInfo>>::~map,
        &data::g_DebugBlletinInfoMap[abi:cxx11],
        &_dso_handle);
      data::DebugBoardInfoRegister::DebugBoardInfoRegister(&data::g_DebugBoardInfoRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::DebugBoardInfoFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::DebugBoardInfoFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::DebugBoardInfoFactory>::~shared_ptr,
        &data::DebugBoardInfoFactory::instance_ptr,
        &_dso_handle);
      v40 = ((v66 + 1760) >> 3) + 2147450880;
      *(_DWORD *)v40 = 0;
      *(_WORD *)(v40 + 4) = 0;
      *(_WORD *)(((v66 + 816) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 816) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::AudioSettingSlider>();
      std::pair<std::string const,std::shared_ptr<data::AudioSettingSlider>>::pair<char const(&)[19],std::shared_ptr<data::AudioSettingSlider>,true>(
        (std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > *const)(v66 + 1760),
        (const char (*)[19])"AudioSettingSlider",
        (std::shared_ptr<data::AudioSettingSlider> *)(v66 + 816));
      v64._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > >::iterator)(v66 + 1760);
      v64._M_len = 1LL;
      *(_BYTE *)(((v66 + 400) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 416) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::AudioSettingSlider>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > > *const)(v66 + 416));
      std::map<std::string,std::shared_ptr<data::AudioSettingSlider>>::map(
        &data::g_AudioSettingSliderMap[abi:cxx11],
        v64,
        (const std::less<std::string > *)(v66 + 400),
        (const std::map<std::string,std::shared_ptr<data::AudioSettingSlider>>::allocator_type *)(v66 + 416));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::AudioSettingSlider>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > > *const)(v66 + 416));
      *(_BYTE *)(((v66 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 400) >> 3) + 0x7FFF8000) = -8;
      for ( i2 = (std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > *)(v66 + 1808);
            i2 != (std::pair<const std::string,std::shared_ptr<data::AudioSettingSlider> > *)(v66 + 1760);
            std::pair<std::string const,std::shared_ptr<data::AudioSettingSlider>>::~pair(i2) )
      {
        --i2;
      }
      v42 = ((v66 + 1760) >> 3) + 2147450880;
      *(_DWORD *)v42 = -117901064;
      *(_WORD *)(v42 + 4) = -1800;
      std::shared_ptr<data::AudioSettingSlider>::~shared_ptr((std::shared_ptr<data::AudioSettingSlider> *const)(v66 + 816));
      *(_WORD *)(((v66 + 816) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::AudioSettingSlider>>::~map,
        &data::g_AudioSettingSliderMap[abi:cxx11],
        &_dso_handle);
      data::AudioSettingSlider_SimpleRegister::AudioSettingSlider_SimpleRegister(&data::g_AudioSettingSlider_SimpleRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::AudioSettingSlider_SimpleFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::AudioSettingSlider_SimpleFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::AudioSettingSlider_SimpleFactory>::~shared_ptr,
        &data::AudioSettingSlider_SimpleFactory::instance_ptr,
        &_dso_handle);
      data::AudioSettingSlider_PostEventRegister::AudioSettingSlider_PostEventRegister(&data::g_AudioSettingSlider_PostEventRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::AudioSettingSlider_PostEventFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::AudioSettingSlider_PostEventFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::AudioSettingSlider_PostEventFactory>::~shared_ptr,
        &data::AudioSettingSlider_PostEventFactory::instance_ptr,
        &_dso_handle);
      data::AudioSettingSlider_PostVoiceRegister::AudioSettingSlider_PostVoiceRegister(&data::g_AudioSettingSlider_PostVoiceRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::AudioSettingSlider_PostVoiceFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::AudioSettingSlider_PostVoiceFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::AudioSettingSlider_PostVoiceFactory>::~shared_ptr,
        &data::AudioSettingSlider_PostVoiceFactory::instance_ptr,
        &_dso_handle);
      v43 = ((v66 + 1840) >> 3) + 2147450880;
      *(_DWORD *)v43 = 0;
      *(_WORD *)(v43 + 4) = 0;
      *(_WORD *)(((v66 + 848) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v66 + 848) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigTalentMixin>();
      std::pair<std::string const,std::shared_ptr<data::ConfigTalentMixin>>::pair<char const(&)[18],std::shared_ptr<data::ConfigTalentMixin>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > *const)(v66 + 1840),
        (const char (*)[18])"ConfigTalentMixin",
        (std::shared_ptr<data::ConfigTalentMixin> *)(v66 + 848));
      v65._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > >::iterator)(v66 + 1840);
      v65._M_len = 1LL;
      *(_BYTE *)(((v66 + 432) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v66 + 448) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigTalentMixin>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > > *const)(v66 + 448));
      std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::map(
        &data::g_ConfigTalentMixinMap[abi:cxx11],
        v65,
        (const std::less<std::string > *)(v66 + 432),
        (const std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::allocator_type *)(v66 + 448));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigTalentMixin>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > > *const)(v66 + 448));
      *(_BYTE *)(((v66 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v66 + 432) >> 3) + 0x7FFF8000) = -8;
      for ( i3 = (std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > *)(v66 + 1888);
            i3 != (std::pair<const std::string,std::shared_ptr<data::ConfigTalentMixin> > *)(v66 + 1840);
            std::pair<std::string const,std::shared_ptr<data::ConfigTalentMixin>>::~pair(i3) )
      {
        --i3;
      }
      v45 = ((v66 + 1840) >> 3) + 2147450880;
      *(_DWORD *)v45 = -117901064;
      *(_WORD *)(v45 + 4) = -1800;
      std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)(v66 + 848));
      *(_WORD *)(((v66 + 848) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigTalentMixin>>::~map,
        &data::g_ConfigTalentMixinMap[abi:cxx11],
        &_dso_handle);
      data::AddAbilityRegister::AddAbilityRegister(&data::g_AddAbilityRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::AddAbilityFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::AddAbilityFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::AddAbilityFactory>::~shared_ptr,
        &data::AddAbilityFactory::instance_ptr,
        &_dso_handle);
      data::ModifyAbilityRegister::ModifyAbilityRegister(&data::g_ModifyAbilityRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ModifyAbilityFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ModifyAbilityFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ModifyAbilityFactory>::~shared_ptr,
        &data::ModifyAbilityFactory::instance_ptr,
        &_dso_handle);
      data::UnlockTalentParamRegister::UnlockTalentParamRegister(&data::g_UnlockTalentParamRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::UnlockTalentParamFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::UnlockTalentParamFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::UnlockTalentParamFactory>::~shared_ptr,
        &data::UnlockTalentParamFactory::instance_ptr,
        &_dso_handle);
      data::UnlockControllerConditionsRegister::UnlockControllerConditionsRegister(&data::g_UnlockControllerConditionsRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::UnlockControllerConditionsFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::UnlockControllerConditionsFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::UnlockControllerConditionsFactory>::~shared_ptr,
        &data::UnlockControllerConditionsFactory::instance_ptr,
        &_dso_handle);
      data::ModifySkillCDRegister::ModifySkillCDRegister(&data::g_ModifySkillCDRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ModifySkillCDFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ModifySkillCDFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ModifySkillCDFactory>::~shared_ptr,
        &data::ModifySkillCDFactory::instance_ptr,
        &_dso_handle);
      data::ModifySkillCostRegister::ModifySkillCostRegister(&data::g_ModifySkillCostRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ModifySkillCostFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ModifySkillCostFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ModifySkillCostFactory>::~shared_ptr,
        &data::ModifySkillCostFactory::instance_ptr,
        &_dso_handle);
      data::ModifySkillPointRegister::ModifySkillPointRegister(&data::g_ModifySkillPointRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ModifySkillPointFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ModifySkillPointFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ModifySkillPointFactory>::~shared_ptr,
        &data::ModifySkillPointFactory::instance_ptr,
        &_dso_handle);
      data::AddTalentExtraLevelRegister::AddTalentExtraLevelRegister(&data::g_AddTalentExtraLevelRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::AddTalentExtraLevelFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::AddTalentExtraLevelFactory>();
      v48 = &data::AddTalentExtraLevelFactory::instance_ptr;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::AddTalentExtraLevelFactory>::~shared_ptr,
        &data::AddTalentExtraLevelFactory::instance_ptr,
        &_dso_handle);
      v46 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      v47 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                     + 0x7FFF8000);
      LOBYTE(v48) = v47 != 0;
      v49 = (v47 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v47);
      if ( (_BYTE)v49 )
        __asan_report_load1(
          &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
          v48,
          v49);
      if ( !*v46 )
      {
        v50 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v51 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v48) = v51 != 0;
        v52 = (v51 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v51);
        if ( (_BYTE)v52 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v48,
            v52);
        *v50 = 1;
        v53 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v48);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v53;
      }
    }
    __asan_after_dynamic_init();
  }
  if ( v67 == (char *)v66 )
  {
    *(_QWORD *)((v66 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF80E8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 240) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v66 = 1172321806LL;
    __asan_stack_free_5(v66, 1920LL, v67);
  }
};
