// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script_utils.cpp

// Line 20: range 000000000CD3C6E6-000000000CD3D504
int __cdecl ScriptUtil::luabindErrorHandler(lua_State_0 *lua_state_ptr)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int v4; // eax
  std::ostream *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rax
  int v13; // ebx
  char v15[1264]; // [rsp+10h] [rbp-4F0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1216LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "15 32 8 9 <unknown> 64 16 6 msg:29 96 16 9 <unknown> 128 16 9 <unknown> 160 16 9 <unknown> 192 2"
                        "4 9 <unknown> 256 24 9 <unknown> 320 32 9 <unknown> 384 32 12 traceback:34 448 32 9 <unknown> 51"
                        "2 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 376 6 str:30";
  *(_QWORD *)(v1 + 16) = ScriptUtil::luabindErrorHandler;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -234881024;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -218959118;
  v3[536862741] = -218959118;
  v3[536862743] = -218959118;
  v3[536862755] = -218103808;
  v3[536862756] = -202116109;
  v3[536862757] = -202116109;
  if ( lua_state_ptr )
  {
    luabind::from_stack::from_stack((luabind::from_stack *const)(v1 + 96), lua_state_ptr, -1);
    luabind::adl::object::object((luabind::adl::object *const)(v1 + 64), (const luabind::from_stack *)(v1 + 96));
    *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -1800;
    __asan_unpoison_stack_memory(v1 + 768, 376LL);
    std::ostringstream::basic_ostringstream(v1 + 768);
    v5 = (std::ostream *)std::operator<<<std::char_traits<char>>(v1 + 768, "lua> run-time error:\n");
    luabind::adl::operator<<<luabind::adl::object>(
      v5,
      (const luabind::adl::object_interface<luabind::adl::object> *)(v1 + 64));
    *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
    *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    v6 = ((v1 + 256) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    v7 = ((v1 + 192) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::globals((lua_State_0 *)(v1 + 128));
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 215) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 23) & 7) >= *(_BYTE *)(((v1 + 215) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 24LL);
    }
    luabind::adl::object::operator[]<char [6]>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v1 + 192),
      (const luabind::adl::object *const)(v1 + 128),
      (const char (*)[6])"debug");
    if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 279) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 87) & 7) >= *(_BYTE *)(((v1 + 279) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 256, 24LL);
    }
    luabind::adl::index_proxy<luabind::adl::object>::operator[]<char [10]>(
      (luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *)(v1 + 256),
      (luabind::adl::index_proxy<luabind::adl::object> *const)(v1 + 192),
      (const char (*)[10])"traceback");
    if ( *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const)(v1 + 160));
    if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 448, 32LL);
    }
    luabind::call_function<std::string>(
      (boost::mpl::if_<boost::is_void<std::string >,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *)(v1 + 448),
      (const luabind::adl::object *)(v1 + 160));
    if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 384, 32LL);
    }
    luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator std::string(
      (std::string *)(v1 + 384),
      (luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v1 + 448));
    luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller((luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v1 + 448));
    *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -117901064;
    luabind::adl::object::~object((luabind::adl::object *const)(v1 + 160));
    *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -1800;
    luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::~index_proxy((luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const)(v1 + 256));
    v8 = ((v1 + 256) >> 3) + 2147450880;
    *(_WORD *)v8 = -1800;
    *(_BYTE *)(v8 + 2) = -8;
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v1 + 192));
    v9 = ((v1 + 192) >> 3) + 2147450880;
    *(_WORD *)v9 = -1800;
    *(_BYTE *)(v9 + 2) = -8;
    luabind::adl::object::~object((luabind::adl::object *const)(v1 + 128));
    *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -1800;
    *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 95) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 512, 32LL);
    }
    std::operator+<char>((std::string *)(v1 + 512), "lua> ", (const std::string *)(v1 + 384));
    std::string::operator=(v1 + 384, v1 + 512);
    std::string::~string((void *)(v1 + 512));
    *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script_utils.cpp",
      "luabindErrorHandler",
      36);
    *(_DWORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 671) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 671) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 640, 32LL);
    }
    std::ostringstream::str(v1 + 640, v1 + 768);
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            (common::milog::MiLogStream *const)(v1 + 576),
            (const std::string *)(v1 + 640));
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])"\n");
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = 0;
    v12 = std::string::c_str(v1 + 384);
    if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v1 + 32, "\n");
    *(_QWORD *)(v1 + 32) = v12;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v1 + 32));
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v1 + 640));
    *(_DWORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 576));
    *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = -117901064;
    std::string::~string((void *)(v1 + 384));
    std::ostringstream::~ostringstream(v1 + 768);
    luabind::adl::object::~object((luabind::adl::object *const)(v1 + 64));
    v4 = 1;
  }
  else
  {
    if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script_utils.cpp",
      "luabindErrorHandler",
      23);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v1 + 320),
      (const char (*)[14])"invalid input");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
    v4 = -1;
  }
  v13 = v4;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8090) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862733) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450924 - (((_DWORD)v3 + 2147450932) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1216LL, v15);
  }
  return v13;
};

// Line 47: range 000000000CD3D506-000000000CD3DD32
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        luabind::adl::object *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r12
  int32_t result; // eax
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r12
  unsigned __int64 v17; // rax
  char v20[368]; // [rsp+20h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 16 9 <unknown> 64 24 9 <unknown> 128 24 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v8 = (unsigned __int8)this & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(this, v8, v9);
    if ( this->has_exception_ )
    {
      exception = __cxa_allocate_exception(0x10uLL);
      if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 256, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 256), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v4 + 256);
      std::string::~string((void *)(v4 + 256));
      *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v4 + 256);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    result = -1;
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 87) & 7) >= *(_BYTE *)(((v4 + 87) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 64),
      table,
      name);
    v12 = luabind::type<luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 64)) == 0;
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 64));
    v13 = ((v4 + 64) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    if ( v12 )
    {
      v14 = (unsigned __int8)this & 7;
      v15 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_load1(this, v14, v15);
      if ( this->has_exception_ )
      {
        v16 = __cxa_allocate_exception(0x10uLL);
        *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 192), "can't find:", name);
        if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 256, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 256), (std::string *)(v4 + 192), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 256);
        std::string::~string((void *)(v4 + 256));
        *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 192));
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 192);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      result = -1;
    }
    else
    {
      *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) = 0;
      v17 = ((v4 + 128) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 105) & 7) >= *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 24LL);
      }
      luabind::adl::object::operator[]<std::string>(
        (luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 128),
        table,
        name);
      if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 32));
      luabind::adl::object::operator=(val, (luabind::adl::object *)(v4 + 32));
      luabind::adl::object::~object((luabind::adl::object *const)(v4 + 32));
      *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) = -1800;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 128));
      result = 0;
    }
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 70: range 000000000CD3DD34-000000000CD3E427
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name_a,
        const std::string *name_b,
        luabind::adl::object *val)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  void *exception; // r12
  int32_t TableValue; // r14d
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r12
  int32_t result; // eax
  char v21[304]; // [rsp+30h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 16 8 obj_a:79 64 24 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ScriptUtil::getTableValue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862725] = -218959118;
  v7[536862727] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v9 = (unsigned __int8)this & 7;
    v10 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v10 )
      __asan_report_load1(this, v9, v10);
    if ( this->has_exception_ )
    {
      exception = __cxa_allocate_exception(0x10uLL);
      if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 192, 32LL);
      }
      std::operator+<char>((std::string *)(v5 + 192), "table is nil, can't find:", name_a);
      std::invalid_argument::invalid_argument(exception, v5 + 192);
      std::string::~string((void *)(v5 + 192));
      *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v5 + 192);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    TableValue = -1;
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 87) & 7) >= *(_BYTE *)(((v5 + 87) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v5 + 64),
      table,
      name_a);
    if ( *(_WORD *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v5 + 32));
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v5 + 64));
    v13 = ((v5 + 64) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    if ( luabind::type<luabind::adl::object>((const luabind::adl::object *)(v5 + 32)) == 5 )
    {
      TableValue = ScriptUtil::getTableValue(this, (const luabind::adl::object *)(v5 + 32), name_b, val);
    }
    else
    {
      v14 = (unsigned __int8)this & 7;
      v15 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_load1(this, v14, v15);
      if ( this->has_exception_ )
      {
        v16 = __cxa_allocate_exception(0x10uLL);
        *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 128, 32LL);
        }
        std::operator+<char>((std::string *)(v5 + 128), "can't find:", name_a);
        if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 192, 32LL);
        }
        std::operator+<char>((std::string *)(v5 + 192), (std::string *)(v5 + 128), " in table");
        std::invalid_argument::invalid_argument(v16, v5 + 192);
        std::string::~string((void *)(v5 + 192));
        *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v5 + 128));
        *(_DWORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v5 + 128);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      TableValue = -1;
    }
    luabind::adl::object::~object((luabind::adl::object *const)(v5 + 32));
  }
  result = TableValue;
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CD3E428-000000000CD3E6F3
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const LuaScript *script,
        const std::string *table_name,
        const std::string *name,
        luabind::adl::object *val)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  int32_t TableValue; // r14d
  int32_t result; // eax
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 8 table:94 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ScriptUtil::getTableValue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862723] = -202116109;
  luabind::adl::object::object((luabind::adl::object *const)(v5 + 32));
  if ( LuaScript::getGlobalVariable(script, table_name, (luabind::adl::object *)(v5 + 32)) )
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script_utils.cpp",
      "getTableValue",
      97);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[37])"getGlobalVariable fails, table_name:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, table_name);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", file:");
    v11 = LuaScript::getFilePath[abi:cxx11](script);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    *(_DWORD *)(((v5 + 64) >> 3) + 0x7FFF8000) = -117901064;
    TableValue = -1;
  }
  else
  {
    TableValue = ScriptUtil::getTableValue(this, (const luabind::adl::object *)(v5 + 32), name, val);
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v5 + 32));
  result = TableValue;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 104: range 000000000CD3E6F4-000000000CD3F3F5
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector2 *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r12
  int32_t v11; // r14d
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  bool v19; // r14
  bool v20; // r14
  int32_t result; // eax
  char v24[528]; // [rsp+20h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 16 7 obj:121 96 24 9 <unknown> 160 24 9 <unknown> 224 32 "
                        "9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v8 = (unsigned __int8)this & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(this, v8, v9);
    if ( this->has_exception_ )
    {
      exception = __cxa_allocate_exception(0x10uLL);
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 416), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v4 + 416);
      std::string::~string((void *)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v4 + 416);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v11 = -1;
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 96),
      table,
      name);
    v12 = luabind::type<luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 96)) == 0;
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 96));
    v13 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    if ( v12 )
    {
      v14 = (unsigned __int8)this & 7;
      v15 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_load1(this, v14, v15);
      if ( this->has_exception_ )
      {
        v16 = __cxa_allocate_exception(0x10uLL);
        *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 352, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 352), "can't find:", name);
        if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 416, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 416), (std::string *)(v4 + 352), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 416);
        std::string::~string((void *)(v4 + 416));
        *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 352));
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 352);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
      *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
      v17 = ((v4 + 160) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 183) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 23) & 7) >= *(_BYTE *)(((v4 + 183) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 160, 24LL);
      }
      luabind::adl::object::operator[]<std::string>(
        (luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 160),
        table,
        name);
      if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 64));
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 160));
      v18 = ((v4 + 160) >> 3) + 2147450880;
      *(_WORD *)v18 = -1800;
      *(_BYTE *)(v18 + 2) = -8;
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 224),
        "x",
        (const std::allocator<char> *)(v4 + 32));
      v19 = ScriptUtil::getTableValue<float>(
              this,
              (const luabind::adl::object *)(v4 + 64),
              (const std::string *)(v4 + 224),
              (float *)val) != 0;
      std::string::~string((void *)(v4 + 224));
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v4 + 32);
      *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v19 )
      {
        *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 32 + 95) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/script_utils.cpp",
          "getTableValue",
          124);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
          (common::milog::MiLogStream *const)(v4 + 288),
          (const char (*)[12])"x not exist");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
        *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v11 = -1;
      }
      else
      {
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 352),
          "z",
          (const std::allocator<char> *)(v4 + 48));
        v20 = ScriptUtil::getTableValue<float>(
                this,
                (const luabind::adl::object *)(v4 + 64),
                (const std::string *)(v4 + 352),
                &val->y) != 0;
        std::string::~string((void *)(v4 + 352));
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 48);
        *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v20 )
        {
          *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/script_utils.cpp",
            "getTableValue",
            129);
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
            (common::milog::MiLogStream *const)(v4 + 416),
            (const char (*)[12])"z not exist");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
          *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v11 = -1;
        }
        else
        {
          v11 = 0;
        }
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v4 + 64));
    }
  }
  result = v11;
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 136: range 000000000CD3F3F6-000000000CD3F6C1
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const LuaScript *script,
        const std::string *table_name,
        const std::string *name,
        Vector2 *val)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  int32_t TableValue; // r14d
  int32_t result; // eax
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 9 table:137 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ScriptUtil::getTableValue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862723] = -202116109;
  luabind::adl::object::object((luabind::adl::object *const)(v5 + 32));
  if ( LuaScript::getGlobalVariable(script, table_name, (luabind::adl::object *)(v5 + 32)) )
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script_utils.cpp",
      "getTableValue",
      140);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[37])"getGlobalVariable fails, table_name:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, table_name);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", file:");
    v11 = LuaScript::getFilePath[abi:cxx11](script);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    *(_DWORD *)(((v5 + 64) >> 3) + 0x7FFF8000) = -117901064;
    TableValue = -1;
  }
  else
  {
    TableValue = ScriptUtil::getTableValue(this, (const luabind::adl::object *)(v5 + 32), name, val);
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v5 + 32));
  result = TableValue;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 147: range 000000000CD3F6C2-000000000CD40665
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector3 *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r12
  int32_t v11; // r14d
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  bool v19; // r14
  bool v20; // r14
  bool v21; // r14
  int32_t result; // eax
  char v25[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 16 7 obj:164 128 24 9 <unknown> 192 24 "
                        "9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                        " <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234753535;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v8 = (unsigned __int8)this & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(this, v8, v9);
    if ( this->has_exception_ )
    {
      exception = __cxa_allocate_exception(0x10uLL);
      if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 576, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 576), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v4 + 576);
      std::string::~string((void *)(v4 + 576));
      *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v4 + 576);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v11 = -1;
  }
  else
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 105) & 7) >= *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 128),
      table,
      name);
    v12 = luabind::type<luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 128)) == 0;
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 128));
    v13 = ((v4 + 128) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    if ( v12 )
    {
      v14 = (unsigned __int8)this & 7;
      v15 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_load1(this, v14, v15);
      if ( this->has_exception_ )
      {
        v16 = __cxa_allocate_exception(0x10uLL);
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 512, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 512), "can't find:", name);
        if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 576, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 576), (std::string *)(v4 + 512), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 576);
        std::string::~string((void *)(v4 + 576));
        *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 512));
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 512);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
      *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
      v17 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 215) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 41) & 7) >= *(_BYTE *)(((v4 + 215) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 192, 24LL);
      }
      luabind::adl::object::operator[]<std::string>(
        (luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192),
        table,
        name);
      if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 96));
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v18 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v18 = -1800;
      *(_BYTE *)(v18 + 2) = -8;
      *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v4 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 256),
        "x",
        (const std::allocator<char> *)(v4 + 48));
      v19 = ScriptUtil::getTableValue<float>(
              this,
              (const luabind::adl::object *)(v4 + 96),
              (const std::string *)(v4 + 256),
              &val->x) != 0;
      std::string::~string((void *)(v4 + 256));
      *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v4 + 48);
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v19 )
      {
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/script_utils.cpp",
          "getTableValue",
          167);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
          (common::milog::MiLogStream *const)(v4 + 320),
          (const char (*)[12])"x not exist");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v11 = -1;
      }
      else
      {
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 384),
          "y",
          (const std::allocator<char> *)(v4 + 64));
        v20 = ScriptUtil::getTableValue<float>(
                this,
                (const luabind::adl::object *)(v4 + 96),
                (const std::string *)(v4 + 384),
                &val->y) != 0;
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 64);
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v20 )
        {
          *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/script_utils.cpp",
            "getTableValue",
            172);
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
            (common::milog::MiLogStream *const)(v4 + 448),
            (const char (*)[12])"y not exist");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
          *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v11 = -1;
        }
        else
        {
          *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v4 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v4 + 512),
            "z",
            (const std::allocator<char> *)(v4 + 80));
          v21 = ScriptUtil::getTableValue<float>(
                  this,
                  (const luabind::adl::object *)(v4 + 96),
                  (const std::string *)(v4 + 512),
                  &val->z) != 0;
          std::string::~string((void *)(v4 + 512));
          *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v4 + 80);
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v21 )
          {
            *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 576, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 576),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/script_utils.cpp",
              "getTableValue",
              177);
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)(v4 + 576),
              (const char (*)[12])"z not exist");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
            *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
            v11 = -1;
          }
          else
          {
            v11 = 0;
          }
        }
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v4 + 96));
    }
  }
  result = v11;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 000000000CD40666-000000000CD40931
int32_t __cdecl ScriptUtil::getTableValue(
        ScriptUtil *const this,
        const LuaScript *script,
        const std::string *table_name,
        const std::string *name,
        Vector3 *val)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  int32_t TableValue; // r14d
  int32_t result; // eax
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 9 table:185 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ScriptUtil::getTableValue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862723] = -202116109;
  luabind::adl::object::object((luabind::adl::object *const)(v5 + 32));
  if ( LuaScript::getGlobalVariable(script, table_name, (luabind::adl::object *)(v5 + 32)) )
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script_utils.cpp",
      "getTableValue",
      188);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[37])"getGlobalVariable fails, table_name:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, table_name);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", file:");
    v11 = LuaScript::getFilePath[abi:cxx11](script);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    *(_DWORD *)(((v5 + 64) >> 3) + 0x7FFF8000) = -117901064;
    TableValue = -1;
  }
  else
  {
    TableValue = ScriptUtil::getTableValue(this, (const luabind::adl::object *)(v5 + 32), name, val);
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v5 + 32));
  result = TableValue;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 195: range 000000000CD40932-000000000CD4098B
luabind::adl::object __cdecl ScriptUtil::createTable(ScriptUtil *const this, const LuaScript *script)
{
  const LuaScript *v2; // rdx
  luabind::adl::object result; // 0:rax.12

  LuaScript::getLuaState(v2);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = luabind::newtable((lua_State_0 *)this);
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};
