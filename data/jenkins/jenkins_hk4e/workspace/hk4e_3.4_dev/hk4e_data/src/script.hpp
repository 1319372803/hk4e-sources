// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script.hpp

// Line 21: range 000000000F7F1532-000000000F7F2349
__int64 __fastcall LuaScript::executeFunc<luabind::adl::object,std::string const&,unsigned int &>(
        LuaScript *const this,
        LuaLogFunc *p_log_func,
        const std::string *func_name,
        luabind::adl::object *ret,
        std::string *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned int v9; // r14d
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  unsigned int *v14; // r14
  const std::string *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 result; // rax
  char v22[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(640LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 32 8 9 <unknown> 64 16 7 func:30 96 16 9 <unknown> 128 16 9 <unknown> 160 32 9 <unknown> 224 "
                        "32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 40 9 <unknown> 560 48 9 <unknown>";
  *(_QWORD *)(v6 + 16) = LuaScript::executeFunc<luabind::adl::object,std::string const&,unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862726] = -218959118;
  v8[536862728] = -218959118;
  v8[536862730] = -218959118;
  v8[536862732] = -218959118;
  v8[536862734] = -218959118;
  v8[536862736] = -218959360;
  v8[536862737] = 62194;
  v8[536862739] = -202116109;
  if ( (unsigned __int8)std::string::empty() )
  {
    if ( *(char *)(((v6 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.hpp",
      "executeFunc",
      25);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v6 + 160),
      (const char (*)[14])"invalid input");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 160));
    v9 = -1;
  }
  else
  {
    luabind::adl::object::object((luabind::adl::object *const)(v6 + 64));
    if ( *(_WORD *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaScript::getLuaObject((const LuaScript *const)(v6 + 96));
    v10 = ScriptUtil::getTableValue(
            &ScriptUtil::no_exception_instance,
            (const luabind::adl::object *)(v6 + 96),
            func_name,
            (luabind::adl::object *)(v6 + 64)) != 0;
    luabind::adl::object::~object((luabind::adl::object *const)(v6 + 96));
    *(_WORD *)(((v6 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( v10 )
    {
      *(_DWORD *)(((v6 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v6 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 1) & 7) >= *(_BYTE *)(((v6 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/script.hpp",
        "executeFunc",
        33);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v6 + 224),
              (const char (*)[33])"SCRIPT_UTIL.getTableValue fails:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, func_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 224));
      *(_DWORD *)(((v6 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v9 = -1;
    }
    else if ( luabind::type<luabind::adl::object>((const luabind::adl::object *)(v6 + 64)) == 6 )
    {
      *(_WORD *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
      v13 = ((v6 + 560) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_WORD *)(v13 + 4) = 0;
      v14 = std::forward<unsigned int &>(a6);
      v15 = std::forward<std::string const&>(a5);
      if ( *(char *)(((v6 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 607) >> 3) + 0x7FFF8000) )
      {
        v15 = (const std::string *)(v6 + 560);
        __asan_report_store_n(v6 + 560, 48LL);
      }
      luabind::call_function<luabind::adl::object,std::string,unsigned int>(
        (boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *)(v6 + 560),
        (const luabind::adl::object *)(v6 + 64),
        v15,
        v14);
      if ( *(_WORD *)(((v6 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object((luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v6 + 128));
      luabind::adl::object::operator=(ret, (luabind::adl::object *)(v6 + 128));
      luabind::adl::object::~object((luabind::adl::object *const)(v6 + 128));
      *(_WORD *)(((v6 + 128) >> 3) + 0x7FFF8000) = -1800;
      luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller((luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v6 + 560));
      v16 = ((v6 + 560) >> 3) + 2147450880;
      *(_DWORD *)v16 = -117901064;
      *(_WORD *)(v16 + 4) = -1800;
      v9 = 0;
    }
    else
    {
      *(_DWORD *)(((v6 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v6 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/script.hpp",
        "executeFunc",
        38);
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v6 + 288),
              (const char (*)[22])"cannot find function:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, func_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 288));
      *(_DWORD *)(((v6 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v9 = -1;
    }
    luabind::adl::object::~object((luabind::adl::object *const)(v6 + 64));
  }
  result = v9;
  if ( v22 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 000000000CED3FFE-000000000CED429F
int32_t __cdecl LuaScript::getGlobalVector<luabind::adl::object>(
        const LuaScript *const this,
        const std::string *name,
        std::vector<luabind::adl::object> *vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 variable:186 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LuaScript::getGlobalVector<luabind::adl::object>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  luabind::adl::object::object((luabind::adl::object *const)(v3 + 32));
  if ( LuaScript::getGlobalVariable(this, name, (luabind::adl::object *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.hpp",
      "getGlobalVector",
      189);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[31])"getGlobalVariable fails, name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, name);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else if ( ScriptUtil::getTableValueAsVector<luabind::adl::object>(
              &ScriptUtil::no_exception_instance,
              (const luabind::adl::object *)(v3 + 32),
              vec) )
  {
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v3 + 32));
  result = v7;
  if ( v10 == (char *)v3 )
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

// Line 184: range 000000000F7EA122-000000000F7EA3C3
int32_t __cdecl LuaScript::getGlobalVector<unsigned int>(
        const LuaScript *const this,
        const std::string *name,
        std::vector<unsigned int> *vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 variable:186 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LuaScript::getGlobalVector<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  luabind::adl::object::object((luabind::adl::object *const)(v3 + 32));
  if ( LuaScript::getGlobalVariable(this, name, (luabind::adl::object *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.hpp",
      "getGlobalVector",
      189);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[31])"getGlobalVariable fails, name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, name);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else if ( ScriptUtil::getTableValueAsVector<unsigned int>(
              &ScriptUtil::no_exception_instance,
              (const luabind::adl::object *)(v3 + 32),
              vec) )
  {
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v3 + 32));
  result = v7;
  if ( v10 == (char *)v3 )
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
