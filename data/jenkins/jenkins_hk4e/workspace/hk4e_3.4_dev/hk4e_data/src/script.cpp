// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script.cpp

// Line 34: range 000000000CDF892E-000000000CDF89A2
void __cdecl _tls_init_1()
{
  if ( *(_BYTE *)(__readfsqword(0) - 5648) != 1 )
  {
    *(_BYTE *)(__readfsqword(0) - 5648) = 1;
    LuaScriptMgr::LuaScriptMgr((LuaScriptMgr *)((char *)&LuaScriptMgr::tl_lua_script_mgr + __readfsqword(0)));
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))LuaScriptMgr::~LuaScriptMgr,
      (char *)&LuaScriptMgr::tl_lua_script_mgr + __readfsqword(0),
      &_dso_handle);
  }
};

// Line 42: range 000000000CD1F812-000000000CD1F8F9
void __cdecl LuaScript::LuaScript(LuaScript *const this, std::shared_ptr<lua_State> *p_lua_state_ptr)
{
  std::enable_shared_from_this<LuaScript>::enable_shared_from_this(this);
  std::shared_ptr<lua_State>::shared_ptr(&this->lua_state_);
  LuaContent::LuaContent(&this->lua_content_);
  if ( *(_BYTE *)(((unsigned __int64)&this->active_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_time_, p_lua_state_ptr);
  }
  this->active_time_ = 0;
  std::shared_ptr<lua_State>::operator=(&this->lua_state_, p_lua_state_ptr);
  LuaScript::updateActiveTime(this);
};

// Line 52: range 000000000CD1F8FA-000000000CD1FAD2
std::string *__cdecl LuaScript::getLuaRelativeFilePath(
        std::string *retstr,
        LuaScript *const this,
        const std::string *file_path)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::string *v6; // rdi
  size_t pos; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LuaScript::getLuaRelativeFilePath;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  pos = std::string::find(file_path, &HK4EDesignConfig::lua_base_behind_dir[abi:cxx11], 0LL);
  if ( pos == -1LL )
  {
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(retstr, byte_1A0D8BA0, (const std::allocator<char> *)(v3 + 32));
    std::allocator<char>::~allocator(v3 + 32);
  }
  else
  {
    v6 = (std::string *)(std::string::length(&HK4EDesignConfig::lua_base_behind_dir[abi:cxx11]) + pos);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      v6 = retstr;
      __asan_report_store_n(retstr, 32LL);
    }
    std::string::substr(retstr, file_path, v6, -1LL);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 62: range 000000000CD1FAD4-000000000CD2023F
int32_t __cdecl LuaScript::loadLuaFile(
        LuaScript *const this,
        const std::string *file_path,
        const LuaConfigMgr *lua_config_mgr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  lua_State_0 *LuaState; // rdi
  common::milog::MiLogStream *v10; // rax
  lua_State_0 *v11; // rax
  size_t v12; // r14
  const char *v13; // rax
  __int64 Config; // rax
  char v15; // dl
  char *v16; // rsi
  _BOOL8 v17; // rdx
  std::map<unsigned int,std::string> *v18; // rax
  int32_t result; // eax
  char v22[464]; // [rsp+20h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 16 6 obj:71 80 32 21 relative_file_path:63 144 32 9 <unknown> 208 32 10 raw_str:69 272 32 9"
                        " <unknown> 336 48 23 line_2_file_path_map:70";
  *(_QWORD *)(v3 + 16) = LuaScript::loadLuaFile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 80, 32LL);
  }
  LuaScript::getLuaRelativeFilePath((std::string *)(v3 + 80), this, file_path);
  if ( std::operator==<char>((const std::string *)(v3 + 80), byte_1A0D8BA0) )
  {
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 144, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.cpp",
      "loadLuaFile",
      66);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           (common::milog::MiLogStream *const)(v3 + 144),
           (const char (*)[47])"read relative_file_path fails, load lua fails,");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, file_path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v3 + 208);
    std::map<unsigned int,std::string>::map((std::map<unsigned int,std::string> *const)(v3 + 336));
    LuaState = LuaScript::getLuaState(this);
    if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    {
      LuaState = (lua_State_0 *)(v3 + 48);
      __asan_report_store16();
    }
    LuaScript::loadLuaFileAsModule(
      (LuaScript *const)(v3 + 48),
      (lua_State_0 *)this,
      (const std::string *)LuaState,
      (std::string *)file_path,
      (const LuaConfigMgr *)(v3 + 208),
      (std::map<unsigned int,std::string> *)lua_config_mgr);
    if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v3 + 48))
      || luabind::type<luabind::adl::object>((const luabind::adl::object *)(v3 + 48)) != 5 )
    {
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/script.cpp",
        "loadLuaFile",
        74);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 272),
              (const char (*)[16])"load lua fails,");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, file_path);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v11 = LuaScript::getLuaState(this);
      ScriptUtil::luabindErrorHandler(v11);
      v7 = -1;
    }
    else
    {
      std::string::operator=(&this->lua_content_.file_path, file_path);
      std::string::operator=(&this->lua_content_.lua_content, v3 + 208);
      v12 = std::string::size(v3 + 208);
      v13 = (const char *)std::string::data(v3 + 208);
      common::tools::StringUtils::md5(&this->lua_content_.lua_content_md5, v13, v12);
      luabind::adl::object::operator=(&this->lua_content_.lua_obj, (const luabind::adl::object *)(v3 + 48));
      v16 = (char *)(v3 + 80);
      std::string::operator=(&this->lua_content_.relative_file_path, v3 + 80);
      Config = (__int64)LuaConfigMgr::getConfig(lua_config_mgr);
      v15 = *(_BYTE *)(((unsigned __int64)(Config + 99968) >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v15 != 0;
      v17 = v15 < 0;
      if ( v17 )
        Config = __asan_report_load1(Config + 99968, v16, v17);
      if ( *(_BYTE *)(Config + 99968) )
      {
        v18 = std::move<std::map<unsigned int,std::string> &>((std::map<unsigned int,std::string> *)(v3 + 336));
        std::map<unsigned int,std::string>::operator=(&this->lua_content_.line_2_file_path_map, v18);
      }
      v7 = 0;
    }
    luabind::adl::object::~object((luabind::adl::object *const)(v3 + 48));
    std::map<unsigned int,std::string>::~map((std::map<unsigned int,std::string> *const)(v3 + 336));
    std::string::~string((void *)(v3 + 208));
  }
  std::string::~string((void *)(v3 + 80));
  result = v7;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 92: range 000000000CD20240-000000000CD20870
int32_t __cdecl LuaScript::loadNormalLuaFile(
        LuaScript *const this,
        const std::string *file_path,
        const LuaConfigMgr *lua_config_mgr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  lua_State_0 *LuaState; // rdi
  common::milog::MiLogStream *v10; // rdx
  lua_State_0 *v11; // rax
  size_t v12; // r14
  const char *v13; // rax
  int32_t result; // eax
  char v16[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 7 obj:100 64 32 21 relative_file_path:93 128 32 9 <unknown> 192 32 10 raw_str:99 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LuaScript::loadNormalLuaFile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 64, 32LL);
  }
  LuaScript::getLuaRelativeFilePath((std::string *)(v3 + 64), this, file_path);
  if ( std::operator==<char>((const std::string *)(v3 + 64), byte_1A0D8BA0) )
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.cpp",
      "loadNormalLuaFile",
      96);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[47])"read relative_file_path fails, load lua fails,");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, file_path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v3 + 192);
    LuaState = LuaScript::getLuaState(this);
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    {
      LuaState = (lua_State_0 *)(v3 + 32);
      __asan_report_store16();
    }
    LuaScript::loadNormalLuaFile(
      (LuaScript *const)(v3 + 32),
      (lua_State_0 *)this,
      (const std::string *)LuaState,
      (std::string *)file_path);
    if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v3 + 32))
      || luabind::type<luabind::adl::object>((const luabind::adl::object *)(v3 + 32)) != 5 )
    {
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/script.cpp",
        "loadNormalLuaFile",
        103);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"load lua fails,");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, file_path);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v11 = LuaScript::getLuaState(this);
      ScriptUtil::luabindErrorHandler(v11);
      v7 = -1;
    }
    else
    {
      std::string::operator=(&this->lua_content_.file_path, file_path);
      std::string::operator=(&this->lua_content_.lua_content, v3 + 192);
      v12 = std::string::size(v3 + 192);
      v13 = (const char *)std::string::data(v3 + 192);
      common::tools::StringUtils::md5(&this->lua_content_.lua_content_md5, v13, v12);
      luabind::adl::object::operator=(&this->lua_content_.lua_obj, (const luabind::adl::object *)(v3 + 32));
      std::string::operator=(&this->lua_content_.relative_file_path, v3 + 64);
      v7 = 0;
    }
    luabind::adl::object::~object((luabind::adl::object *const)(v3 + 32));
    std::string::~string((void *)(v3 + 192));
  }
  std::string::~string((void *)(v3 + 64));
  result = v7;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 116: range 000000000CD20872-000000000CD20C4D
int32_t __cdecl LuaScript::loadRobotLuaFile(LuaScript *const this, const std::string *file_path)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  lua_State_0 *LuaState; // rdi
  common::milog::MiLogStream *v7; // rdx
  lua_State_0 *v8; // rax
  int32_t v9; // r14d
  size_t v10; // r14
  const char *v11; // rax
  int32_t result; // eax
  char v14[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 7 obj:119 64 32 11 raw_str:118 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScript::loadRobotLuaFile;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::string::basic_string(v2 + 64);
  LuaState = LuaScript::getLuaState(this);
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
  {
    LuaState = (lua_State_0 *)(v2 + 32);
    __asan_report_store16();
  }
  LuaScript::loadRobotLuaFileAsModule(
    (LuaScript *const)(v2 + 32),
    (lua_State_0 *)this,
    (const std::string *)LuaState,
    (std::string *)file_path);
  if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v2 + 32))
    || luabind::type<luabind::adl::object>((const luabind::adl::object *)(v2 + 32)) != 5 )
  {
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.cpp",
      "loadRobotLuaFile",
      122);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"load lua fails,");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, file_path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v8 = LuaScript::getLuaState(this);
    ScriptUtil::luabindErrorHandler(v8);
    v9 = -1;
  }
  else
  {
    std::string::operator=(&this->lua_content_.file_path, file_path);
    std::string::operator=(&this->lua_content_.lua_content, v2 + 64);
    v10 = std::string::size(v2 + 64);
    v11 = (const char *)std::string::data(v2 + 64);
    common::tools::StringUtils::md5(&this->lua_content_.lua_content_md5, v11, v10);
    luabind::adl::object::operator=(&this->lua_content_.lua_obj, (const luabind::adl::object *)(v2 + 32));
    v9 = 0;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  std::string::~string((void *)(v2 + 64));
  result = v9;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 134: range 000000000CD20C4E-000000000CD2100D
int32_t __cdecl LuaScript::loadLuaStr(LuaScript *const this, const std::string *script_string)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  lua_State_0 *LuaState; // rdi
  common::milog::MiLogStream *v7; // rdx
  lua_State_0 *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  char v12[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 7 obj:136 64 32 11 raw_str:135 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScript::loadLuaStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::string::basic_string(v2 + 64);
  LuaState = LuaScript::getLuaState(this);
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
  {
    LuaState = (lua_State_0 *)(v2 + 32);
    __asan_report_store16();
  }
  LuaScript::loadLuaStrAsModule(
    (LuaScript *const)(v2 + 32),
    (lua_State_0 *)this,
    (const std::string *)LuaState,
    (std::string *)script_string);
  if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v2 + 32))
    || luabind::type<luabind::adl::object>((const luabind::adl::object *)(v2 + 32)) != 5 )
  {
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.cpp",
      "loadLuaStr",
      139);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[28])"load lua fails from string:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, script_string);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v8 = LuaScript::getLuaState(this);
    ScriptUtil::luabindErrorHandler(v8);
    v9 = -1;
  }
  else
  {
    std::string::clear(&this->lua_content_.file_path);
    std::string::operator=(&this->lua_content_.lua_content, v2 + 64);
    std::string::clear(&this->lua_content_.lua_content_md5);
    luabind::adl::object::operator=(&this->lua_content_.lua_obj, (const luabind::adl::object *)(v2 + 32));
    std::string::clear(&this->lua_content_.relative_file_path);
    v9 = 0;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  std::string::~string((void *)(v2 + 64));
  result = v9;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 152: range 000000000CD2100E-000000000CD21993
int32_t __cdecl LuaScript::loadLuaContext(LuaScript *const this, const LuaContent *content)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t LuaStr; // r14d
  std::string *p_file_path; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  char v18[464]; // [rsp+10h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 22 relative_file_path:173 224 32 9 <unknown> 288 32"
                        " 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScript::loadLuaContext;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(&content->lua_content) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "loadLuaContext",
      155);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[32])"lua_content is empty,file_path:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &content->file_path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    LuaStr = -1;
  }
  else if ( (unsigned __int8)std::string::empty(&content->file_path) )
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
      1u,
      "./src/script.cpp",
      "loadLuaContext",
      162);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[29])"loadLuaContext load from str");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    LuaStr = LuaScript::loadLuaStr(this, &content->lua_content);
  }
  else if ( std::operator==<char>(&content->relative_file_path, &this->lua_content_.relative_file_path)
         && std::operator==<char>(&content->lua_content_md5, &this->lua_content_.lua_content_md5) )
  {
    LuaStr = 0;
  }
  else
  {
    p_file_path = &content->file_path;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      p_file_path = (std::string *)32;
      __asan_report_store_n(v2 + 160, 32LL);
    }
    LuaScript::getLuaRelativeFilePath((std::string *)(v2 + 160), this, p_file_path);
    if ( std::operator==<char>((const std::string *)(v2 + 160), byte_1A0D8BA0) )
    {
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
        "./src/script.cpp",
        "loadLuaContext",
        176);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[47])"read relative_file_path fails, load lua fails,");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &content->file_path);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      LuaStr = -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(&this->lua_content_.file_path) != 1 )
      {
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/script.cpp",
          "loadLuaContext",
          182);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[31])"md5 change reload lua, my md5:");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v10,
                &this->lua_content_.lua_content_md5);
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" other md5:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &content->lua_content_md5);
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" file_path:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &content->file_path);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( LuaScript::loadLuaStr(this, &content->lua_content) )
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
          4u,
          "./src/script.cpp",
          "loadLuaContext",
          188);
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[29])"loadLuaStr failed,file_path:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &content->file_path);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        LuaStr = -1;
      }
      else
      {
        std::string::operator=(&this->lua_content_.file_path, &content->file_path);
        std::string::operator=(&this->lua_content_.lua_content_md5, &content->lua_content_md5);
        std::string::operator=(&this->lua_content_.relative_file_path, v2 + 160);
        LuaStr = 0;
      }
    }
    std::string::~string((void *)(v2 + 160));
  }
  result = LuaStr;
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 200: range 000000000CD21994-000000000CD21A35
void __cdecl LuaScript::copyContent(LuaScript *const this, LuaContent *content)
{
  std::string::operator=(&content->file_path, &this->lua_content_.file_path);
  std::string::operator=(&content->lua_content, &this->lua_content_.lua_content);
  std::string::operator=(&content->lua_content_md5, &this->lua_content_.lua_content_md5);
  std::string::operator=(&content->relative_file_path, &this->lua_content_.relative_file_path);
  std::map<unsigned int,std::string>::operator=(
    &content->line_2_file_path_map,
    &this->lua_content_.line_2_file_path_map);
};

// Line 209: range 000000000CD21A36-000000000CD21A8A
void __cdecl LuaScript::updateActiveTime(LuaScript *const this)
{
  __int64 Now; // rsi

  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->active_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_time_, Now);
  }
  this->active_time_ = Now;
};

// Line 214: range 000000000CD21A8C-000000000CD21AA9
lua_State_0 *__cdecl LuaScript::getLuaState(const LuaScript *const this)
{
  return std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get(&this->lua_state_);
};

// Line 219: range 000000000CD21AAA-000000000CD21AD6
luabind::adl::object __cdecl LuaScript::getLuaObject(const LuaScript *const this)
{
  const luabind::adl::object *v1; // rsi
  luabind::adl::object result; // 0:rax.12

  luabind::adl::object::object((luabind::adl::object *const)this, v1 + 2);
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 225: range 000000000CD21AD8-000000000CD23940
luabind::adl::object __cdecl LuaScript::loadLuaFileAsModule(
        LuaScript *const this,
        lua_State_0 *L,
        const std::string *file_path,
        std::string *raw_str,
        const LuaConfigMgr *lua_config_mgr,
        std::map<unsigned int,std::string> *line_2_file_path_map)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  HK4EDesignConfig *Config; // rax
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v16; // rsi
  const char *v17; // rsi
  common::milog::MiLogStream *v18; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int v22; // r14d
  __int64 v23; // rax
  char v24; // dl
  _BOOL8 v25; // rdx
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v26; // rsi
  std::map<unsigned int,std::string>::mapped_type *v27; // rax
  __gnu_cxx::__normal_iterator<char*,std::string > v28; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v29; // rax
  __int64 v30; // rsi
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r14d
  common::milog::MiLogStream *v42; // r14
  unsigned __int64 v43; // rax
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *M_current; // r15
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::const_iterator v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  unsigned __int64 v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  __int64 v52; // rax
  char v57[2448]; // [rsp+50h] [rbp-990h] BYREF
  std::map<unsigned int,std::string> *line_2_file_path_mapa; // [rsp+9F0h] [rbp+10h]
  luabind::adl::object result; // 0:rax.12

  v6 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_6(2400LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 4 12 line_num:243 96 4 15 line_to_add:264 112 8 9 <unkno"
                        "wn> 144 24 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 8 line:241 400 32 17 require"
                        "_match:247 464 32 23 common_lua_base_dir:252 528 32 5 s:253 592 32 9 <unknown> 656 32 9 <unknown"
                        "> 720 32 9 <unknown> 784 32 7 key:262 848 32 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1"
                        "040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 11 lua_str:286 1232 32 9 <unknown> 1296 376 7 tmp"
                        ":236 1744 520 14 lua_stream:229";
  *(_QWORD *)(v6 + 16) = LuaScript::loadLuaFileAsModule;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234556927;
  v8[536862723] = 61956;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862725] = -218959360;
  v8[536862726] = 62194;
  v8[536862727] = -219021312;
  v8[536862728] = 62194;
  v8[536862729] = -219021312;
  v8[536862730] = 62194;
  v8[536862731] = -219021312;
  v8[536862732] = 62194;
  v8[536862733] = -219021312;
  v8[536862734] = 62194;
  v8[536862735] = -219021312;
  v8[536862736] = 62194;
  v8[536862737] = -219021312;
  v8[536862738] = 62194;
  v8[536862739] = -219021312;
  v8[536862740] = 62194;
  v8[536862741] = -219021312;
  v8[536862742] = 62194;
  v8[536862743] = -219021312;
  v8[536862744] = 62194;
  v8[536862745] = -219021312;
  v8[536862746] = 62194;
  v8[536862747] = -219021312;
  v8[536862748] = 62194;
  v8[536862749] = -219021312;
  v8[536862750] = 62194;
  v8[536862751] = -219021312;
  v8[536862752] = 62194;
  v8[536862753] = -219021312;
  v8[536862754] = 62194;
  v8[536862755] = -219021312;
  v8[536862756] = 62194;
  v8[536862757] = -219021312;
  v8[536862758] = 62194;
  v8[536862759] = -219021312;
  v8[536862760] = 62194;
  v8[536862772] = -218959360;
  v8[536862773] = -218959118;
  v8[536862774] = 62194;
  v8[536862790] = -218103808;
  v8[536862791] = -202116109;
  v8[536862792] = -202116109;
  v8[536862793] = -202116109;
  v8[536862794] = -202116109;
  if ( !(_BYTE)`guard variable for'LuaScript::loadLuaFileAsModule(lua_State *,std::string const&,std::string&,LuaConfigMgr const&,std::map<unsigned int,std::string> &)::require
    && __cxa_guard_acquire(&`guard variable for'LuaScript::loadLuaFileAsModule(lua_State *,std::string const&,std::string&,LuaConfigMgr const&,std::map<unsigned int,std::string> &)::require) )
  {
    std::basic_regex<char,std::regex_traits<char>>::basic_regex(
      (std::basic_regex<char,std::regex_traits<char> > *const)&LuaScript::loadLuaFileAsModule(lua_State *,std::string const&,std::string&,LuaConfigMgr const&,std::map<unsigned int,std::string> &)::require,
      "require\\s*\"(.*)\"",
      (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
    __cxa_guard_release(&`guard variable for'LuaScript::loadLuaFileAsModule(lua_State *,std::string const&,std::string&,LuaConfigMgr const&,std::map<unsigned int,std::string> &)::require);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::basic_regex<char,std::regex_traits<char>>::~basic_regex,
      (void *)&LuaScript::loadLuaFileAsModule(lua_State *,std::string const&,std::string&,LuaConfigMgr const&,std::map<unsigned int,std::string> &)::require,
      &_dso_handle);
  }
  v9 = raw_str;
  std::ifstream::basic_ifstream(v6 + 1744, raw_str, 4LL);
  if ( (unsigned __int8)std::ifstream::is_open(v6 + 1744) != 1 )
  {
    if ( *(char *)(((v6 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 17) & 7) >= *(_BYTE *)(((v6 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "loadLuaFileAsModule",
      232);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v6 + 208),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v10, (const char (*)[82])byte_1A185100);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, raw_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 208));
    *(_DWORD *)(((v6 + 208) >> 3) + 0x7FFF8000) = -117901064;
    luabind::adl::object::object((luabind::adl::object *const)this);
    goto LABEL_77;
  }
  std::ostringstream::basic_ostringstream(v6 + 1296);
  if ( common::tools::StringUtils::removeBOM((std::ifstream *)(v6 + 1744)) )
  {
    if ( *(char *)(((v6 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 47) & 7) >= *(_BYTE *)(((v6 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/script.cpp",
      "loadLuaFileAsModule",
      239);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)(v6 + 272),
            (const char (*)[22])"lua file is with bom:");
    v9 = raw_str;
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, raw_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 272));
    *(_DWORD *)(((v6 + 272) >> 3) + 0x7FFF8000) = -117901064;
  }
  *(_DWORD *)(((v6 + 336) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v6 + 336);
  *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v6 + 80, v9);
  *(_DWORD *)(v6 + 80) = 0;
  while ( 1 )
  {
    v13 = std::getline<char,std::char_traits<char>,std::allocator<char>>(v6 + 1744, v6 + 336);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v14 = *(_QWORD *)v13 - 24LL;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)v13 - 24LL);
    if ( !(unsigned __int8)std::ios::operator bool(*(_QWORD *)v14 + v13) )
      break;
    if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v6 + 80);
    ++*(_DWORD *)(v6 + 80);
    *(_DWORD *)(((v6 + 400) >> 3) + 0x7FFF8000) = 0;
    std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400));
    if ( !std::regex_search<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
            (const std::string *)(v6 + 336),
            (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v6 + 400),
            &LuaScript::loadLuaFileAsModule(lua_State *,std::string const&,std::string&,LuaConfigMgr const&,std::map<unsigned int,std::string> &)::require,
            (std::regex_constants::match_flag_type)0) )
    {
      if ( std::string::find(v6 + 336, "require", 0LL) != -1 )
      {
        *(_DWORD *)(((v6 + 1104) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 1104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 1135) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 111) & 7) >= *(_BYTE *)(((v6 + 1135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 1104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 1104),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/script.cpp",
          "loadLuaFileAsModule",
          278);
        v49 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                (common::milog::MiLogStream *const)(v6 + 1104),
                (const char (*)[51])byte_1A185400);
        v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, raw_str);
        v51 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])" line:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, (const std::string *)(v6 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1104));
        *(_DWORD *)(((v6 + 1104) >> 3) + 0x7FFF8000) = -117901064;
        luabind::adl::object::object((luabind::adl::object *const)this);
        v41 = 0;
        goto LABEL_69;
      }
      v52 = std::operator<<<char>(v6 + 1296, v6 + 336);
      std::ostream::operator<<(v52, &std::endl<char,std::char_traits<char>>);
      goto LABEL_68;
    }
    if ( std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400)) <= 1 )
    {
      *(_DWORD *)(((v6 + 1040) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v6 + 1040) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 1071) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 + 47) & 7) >= *(_BYTE *)(((v6 + 1071) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 1040, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 1040),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/script.cpp",
        "loadLuaFileAsModule",
        273);
      v42 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v6 + 1040),
              (const char (*)[21])"[REQUIRE LUA] failed");
      v43 = ((v6 + 144) >> 3) + 2147450880;
      *(_WORD *)v43 = 0;
      *(_BYTE *)(v43 + 2) = 0;
      *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v6 + 64));
      M_current = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::end((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400))._M_current;
      v45._M_current = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::begin((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400))._M_current;
      std::vector<std::string>::vector<__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> const*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>,void>(
        (std::vector<std::string> *const)(v6 + 144),
        v45,
        (__gnu_cxx::__normal_iterator<const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >)M_current,
        (const std::vector<std::string>::allocator_type *)(v6 + 64));
      v46 = common::milog::MiLogStream::operator<<<std::string>(v42, (const std::vector<std::string> *)(v6 + 144));
      v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v46, (const char (*)[12])" file_path:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, raw_str);
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 144));
      v48 = ((v6 + 144) >> 3) + 2147450880;
      *(_WORD *)v48 = -1800;
      *(_BYTE *)(v48 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v6 + 64));
      *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1040));
      *(_DWORD *)(((v6 + 1040) >> 3) + 0x7FFF8000) = -117901064;
LABEL_68:
      v41 = 1;
      goto LABEL_69;
    }
    *(_DWORD *)(((v6 + 464) >> 3) + 0x7FFF8000) = 0;
    Config = LuaConfigMgr::getConfig((LuaConfigMgr *const)line_2_file_path_map);
    std::string::basic_string(v6 + 464, &Config->common_lua_base_dir);
    *(_DWORD *)(((v6 + 528) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v6 + 592) >> 3) + 0x7FFF8000) = 0;
    v16 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
            (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400),
            1uLL);
    if ( *(char *)(((v6 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 111) & 7) >= *(_BYTE *)(((v6 + 623) >> 3) + 0x7FFF8000) )
    {
      v16 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
      __asan_report_store_n(v6 + 592, 32LL);
    }
    std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator std::string(
      (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v6 + 592),
      v16);
    if ( *(char *)(((v6 + 528) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 559) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 47) & 7) >= *(_BYTE *)(((v6 + 559) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 528, 32LL);
    }
    LuaConfigMgr::getLuaRequireString(
      (std::string *)(v6 + 528),
      (const LuaConfigMgr *const)line_2_file_path_map,
      (const std::string *)(v6 + 592),
      (const std::string *)(v6 + 464));
    std::string::~string((void *)(v6 + 592));
    *(_DWORD *)(((v6 + 592) >> 3) + 0x7FFF8000) = -117901064;
    v17 = byte_1A0D8BA0;
    if ( std::operator==<char>((const std::string *)(v6 + 528), byte_1A0D8BA0) )
    {
      *(_DWORD *)(((v6 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v6 + 656) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 687) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 81) & 7) >= *(_BYTE *)(((v6 + 687) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 656, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 656),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/script.cpp",
        "loadLuaFileAsModule",
        256);
      v18 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
              (common::milog::MiLogStream *const)(v6 + 656),
              (const char (*)[86])byte_1A1851C0);
      *(_DWORD *)(((v6 + 720) >> 3) + 0x7FFF8000) = 0;
      v19 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
              (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400),
              1uLL);
      if ( *(char *)(((v6 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 17) & 7) >= *(_BYTE *)(((v6 + 751) >> 3) + 0x7FFF8000) )
      {
        v19 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
        __asan_report_store_n(v6 + 720, 32LL);
      }
      std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator std::string(
        (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v6 + 720),
        v19);
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v6 + 720));
      v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" file_path:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, raw_str);
      std::string::~string((void *)(v6 + 720));
      *(_DWORD *)(((v6 + 720) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 656));
      *(_DWORD *)(((v6 + 656) >> 3) + 0x7FFF8000) = -117901064;
      luabind::adl::object::object((luabind::adl::object *const)this);
      v22 = 0;
    }
    else
    {
      v23 = (__int64)LuaConfigMgr::getConfig((const LuaConfigMgr *const)line_2_file_path_map);
      v24 = *(_BYTE *)(((unsigned __int64)(v23 + 99968) >> 3) + 0x7FFF8000);
      LOBYTE(v17) = v24 != 0;
      v25 = v24 < 0;
      if ( v25 )
        v23 = __asan_report_load1(v23 + 99968, v17, v25);
      if ( *(_BYTE *)(v23 + 99968) )
      {
        *(_DWORD *)(((v6 + 784) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v6 + 912) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v6 + 848) >> 3) + 0x7FFF8000) = 0;
        v26 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
                (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400),
                1uLL);
        if ( *(char *)(((v6 + 848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 879) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 111) & 7) >= *(_BYTE *)(((v6 + 879) >> 3) + 0x7FFF8000) )
        {
          v26 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
          __asan_report_store_n(v6 + 848, 32LL);
        }
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator std::string(
          (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v6 + 848),
          v26);
        if ( *(char *)(((v6 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 81) & 7) >= *(_BYTE *)(((v6 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 912, 32LL);
        }
        std::operator+<char>((std::string *)(v6 + 912), (const std::string *)(v6 + 464), (std::string *)(v6 + 848));
        if ( *(char *)(((v6 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 47) & 7) >= *(_BYTE *)(((v6 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 784, 32LL);
        }
        std::operator+<char>((std::string *)(v6 + 784), (std::string *)(v6 + 912), ".lua");
        std::string::~string((void *)(v6 + 912));
        *(_DWORD *)(((v6 + 912) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v6 + 848));
        *(_DWORD *)(((v6 + 848) >> 3) + 0x7FFF8000) = -117901064;
        v27 = std::map<unsigned int,std::string>::operator[](
                line_2_file_path_mapa,
                (const std::map<unsigned int,std::string>::key_type *)(v6 + 80));
        std::string::operator=(v27, v6 + 784);
        *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = 4;
        *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v6 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v6 + 48, v6 + 784, v6 + 48);
        *(_BYTE *)(v6 + 48) = 10;
        v28._M_current = (char *)std::string::end(v6 + 528);
        v29._M_current = (char *)std::string::begin(v6 + 528);
        v30 = (unsigned int)std::count<__gnu_cxx::__normal_iterator<char *,std::string>,char>(
                              v29,
                              v28,
                              (const char *)(v6 + 48));
        if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v6 + 96, v30);
        *(_DWORD *)(v6 + 96) = v30;
        *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v6 + 976) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 976) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 1007) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 17) & 7) >= *(_BYTE *)(((v6 + 1007) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 976, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 976),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/script.cpp",
          "loadLuaFileAsModule",
          265);
        v31 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)(v6 + 976),
                (const char (*)[25])"[LUA STATIC] file_path: ");
        v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, raw_str);
        v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])"require: ");
        v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, (const std::string *)(v6 + 784));
        v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])", line: ");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v6 + 80));
        v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])"line_to_add: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v6 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 976));
        *(_DWORD *)(((v6 + 976) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v6 + 96);
        v38 = *(_DWORD *)(v6 + 96);
        if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v6 + 80);
        *(_DWORD *)(v6 + 80) += v38 + 1;
        std::string::~string((void *)(v6 + 784));
        *(_DWORD *)(((v6 + 784) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      v39 = std::ostream::operator<<(v6 + 1296, &std::endl<char,std::char_traits<char>>);
      v40 = std::operator<<<char>(v39, v6 + 528);
      std::ostream::operator<<(v40, &std::endl<char,std::char_traits<char>>);
      v22 = 1;
    }
    std::string::~string((void *)(v6 + 528));
    std::string::~string((void *)(v6 + 464));
    *(_DWORD *)(((v6 + 464) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v6 + 528) >> 3) + 0x7FFF8000) = -117901064;
    if ( v22 == 1 )
      goto LABEL_68;
    v41 = 0;
LABEL_69:
    std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v6 + 400));
    *(_DWORD *)(((v6 + 400) >> 3) + 0x7FFF8000) = -117901064;
    if ( v41 != 1 )
      goto LABEL_76;
  }
  *(_DWORD *)(((v6 + 1168) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v6 + 1168) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 1199) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 - 81) & 7) >= *(_BYTE *)(((v6 + 1199) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 1168, 32LL);
  }
  std::ostringstream::str(v6 + 1168, v6 + 1296);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  LuaScript::loadLuaStrAsModule(this, L, file_path, (std::string *)(v6 + 1168));
  std::string::~string((void *)(v6 + 1168));
LABEL_76:
  std::string::~string((void *)(v6 + 336));
  std::ostringstream::~ostringstream(v6 + 1296);
LABEL_77:
  std::ifstream::~ifstream(v6 + 1744);
  if ( v57 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8124) = 0LL;
    result.m_handle.m_index = ((_DWORD)v8 + 2147450888) & 0xFFFFFFF8;
    memset(
      (void *)((unsigned __int64)(v8 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v8 + 2147450880 - result.m_handle.m_index + 300) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    __asan_stack_free_6(v6, 2400LL, v57);
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 298: range 000000000CD23942-000000000CD239A4
luabind::adl::object __cdecl LuaScript::loadRobotLuaFileAsModule(
        LuaScript *const this,
        lua_State_0 *L,
        const std::string *file_path,
        std::string *raw_str)
{
  luabind::adl::object result; // 0:rax.12

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = LuaScript::loadNormalLuaFile(this, L, file_path, raw_str);
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 303: range 000000000CD239A6-000000000CD242B0
luabind::adl::object __cdecl LuaScript::loadNormalLuaFile(
        LuaScript *const this,
        lua_State_0 *L,
        const std::string *file_path,
        std::string *raw_str)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  __int64 v10; // rax
  char v13[1488]; // [rsp+40h] [rbp-5D0h] BYREF
  luabind::adl::object result; // 0:rax.12

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1440LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 8 9 <unknown> 80 32 9 <unknown> 144 32 9 <unknown> 208 32 11 lua_str:319 272 32 9 <unknown>"
                        " 336 376 7 tmp:313 784 520 14 lua_stream:306";
  *(_QWORD *)(v4 + 16) = LuaScript::loadNormalLuaFile;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862742] = -218959360;
  v6[536862743] = -218959118;
  v6[536862744] = 62194;
  v6[536862760] = -218103808;
  v6[536862761] = -202116109;
  v6[536862762] = -202116109;
  v6[536862763] = -202116109;
  v6[536862764] = -202116109;
  std::ifstream::basic_ifstream(v4 + 784, raw_str, 4LL);
  if ( (unsigned __int8)std::ifstream::is_open(v4 + 784) != 1 )
  {
    if ( *(char *)(((v4 + 80) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 111) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 111) & 7) >= *(_BYTE *)(((v4 + 111) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 80, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 80),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "loadNormalLuaFile",
      309);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 80),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v7, (const char (*)[82])byte_1A185100);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, raw_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 80));
    *(_DWORD *)(((v4 + 80) >> 3) + 0x7FFF8000) = -117901064;
    luabind::adl::object::object((luabind::adl::object *const)this);
  }
  else
  {
    std::ostringstream::basic_ostringstream(v4 + 336);
    if ( common::tools::StringUtils::removeBOM((std::ifstream *)(v4 + 784)) )
    {
      if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/script.cpp",
        "loadNormalLuaFile",
        316);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             (common::milog::MiLogStream *const)(v4 + 144),
             (const char (*)[22])"lua file is with bom:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, raw_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 144));
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = -117901064;
    }
    v10 = std::ifstream::rdbuf(v4 + 784);
    std::ostream::operator<<(v4 + 336, v10);
    *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 79) & 7) >= *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 208, 32LL);
    }
    std::ostringstream::str(v4 + 208, v4 + 336);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaScript::loadLuaStrAsModule(this, L, file_path, (std::string *)(v4 + 208));
    std::string::~string((void *)(v4 + 208));
    std::ostringstream::~ostringstream(v4 + 336);
  }
  std::ifstream::~ifstream(v4 + 784);
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80AC) = 0LL;
    result.m_handle.m_index = ((_DWORD)v6 + 2147450888) & 0xFFFFFFF8;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - result.m_handle.m_index + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1440LL, v13);
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 331: range 000000000CD242B2-000000000CD24ED2
luabind::adl::object __cdecl LuaScript::loadLuaStrAsModule(
        LuaScript *const this,
        lua_State_0 *L,
        const std::string *lua_str,
        std::string *raw_str)
{
  std::string *v4; // r8
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // rax
  int v10; // r14d
  common::milog::MiLogStream *v11; // r14
  std::string *raw_stra; // [rsp+8h] [rbp-428h]
  char v15[1008]; // [rsp+40h] [rbp-3F0h] BYREF
  luabind::adl::object result; // 0:rax.12

  raw_stra = v4;
  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(960LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 48 8 9 <unknown> 80 16 7 obj:338 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 "
                        "32 9 <unknown> 368 32 9 <unknown> 432 40 9 <unknown> 512 376 7 tmp:334";
  *(_QWORD *)(v5 + 16) = LuaScript::loadLuaStrAsModule;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = -219021312;
  v7[536862725] = 62194;
  v7[536862726] = -219021312;
  v7[536862727] = 62194;
  v7[536862728] = -219021312;
  v7[536862729] = 62194;
  v7[536862730] = -219021312;
  v7[536862731] = 62194;
  v7[536862732] = -219021312;
  v7[536862733] = 62194;
  v7[536862734] = -234881024;
  v7[536862735] = -218959118;
  v7[536862747] = -218103808;
  v7[536862748] = -202116109;
  v7[536862749] = -202116109;
  std::ostringstream::basic_ostringstream(v5 + 512);
  std::operator<<<char>(v5 + 512, &LuaScript::LUA_NAMESPACE_WRAPPER_HEAD[abi:cxx11]);
  std::operator<<<char>(v5 + 512, raw_str);
  std::operator<<<char>(v5 + 512, &LuaScript::LUA_NAMESPACE_WRAPPER_TAIL[abi:cxx11]);
  if ( *(char *)(((v5 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 143) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 113) & 7) >= *(_BYTE *)(((v5 + 143) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 112, 32LL);
  }
  std::ostringstream::str(v5 + 112, v5 + 512);
  if ( *(char *)(((v5 + 432) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 471) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 80 + 39) & 7) >= *(_BYTE *)(((v5 + 471) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 432, 40LL);
  }
  luabind::call_function<luabind::adl::object,std::string>(
    (boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *)(v5 + 432),
    (lua_State_0 *)lua_str,
    "load",
    (const std::string *)(v5 + 112));
  if ( *(_WORD *)(((v5 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object((luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v5 + 80));
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller((luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v5 + 432));
  v8 = ((v5 + 432) >> 3) + 2147450880;
  *(_DWORD *)v8 = -117901064;
  *(_BYTE *)(v8 + 4) = -8;
  std::string::~string((void *)(v5 + 112));
  *(_DWORD *)(((v5 + 112) >> 3) + 0x7FFF8000) = -117901064;
  if ( luabind::adl::object::is_valid((const luabind::adl::object *const)(v5 + 80))
    && luabind::type<luabind::adl::object>((const luabind::adl::object *)(v5 + 80)) == 6 )
  {
    std::string::operator=(raw_stra, raw_str);
    *(_DWORD *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 80 + 31) & 7) >= *(_BYTE *)(((v5 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 176, 32LL);
    }
    luabind::call_function<luabind::adl::object>(
      (boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *)(v5 + 176),
      (const luabind::adl::object *)(v5 + 80));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object((luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)this);
    luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller((luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const)(v5 + 176));
    *(_DWORD *)(((v5 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v10 = 0;
  }
  else
  {
    *(_DWORD *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 79) & 7) >= *(_BYTE *)(((v5 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "loadLuaStrAsModule",
      344);
    v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            (common::milog::MiLogStream *const)(v5 + 240),
            (const char (*)[21])"load failed,content:");
    *(_DWORD *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 304, 32LL);
    }
    std::ostringstream::str(v5 + 304, v5 + 512);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v5 + 304));
    std::string::~string((void *)(v5 + 304));
    *(_DWORD *)(((v5 + 304) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 240));
    *(_DWORD *)(((v5 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v10 = 1;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v5 + 80));
  std::ostringstream::~ostringstream(v5 + 512);
  __asan_poison_stack_memory(v5 + 512, 376LL);
  *(_WORD *)(((v5 + 80) >> 3) + 0x7FFF8000) = -1800;
  if ( v10 == 1 )
    luabind::adl::object::object((luabind::adl::object *const)this);
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8070) = 0LL;
    result.m_handle.m_index = ((_DWORD)v7 + 2147450888) & 0xFFFFFFF8;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - result.m_handle.m_index + 120) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    result.m_handle.m_index = -168430091;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 355: range 000000000CD24ED4-000000000CD25483
bool __cdecl LuaScript::hasFunction(LuaScript *const this, const std::string *func_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  unsigned __int64 v6; // rax
  char v7; // r14
  char v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  bool result; // al
  char v12; // [rsp+Fh] [rbp-161h]
  char v13[336]; // [rsp+20h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 7 obj:356 64 16 8 func:362 96 24 9 <unknown> 160 24 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScript::hasFunction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  LuaScript::getLuaObject((const LuaScript *const)(v2 + 32));
  if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v2 + 32)) )
  {
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
      "./src/script.cpp",
      "hasFunction",
      359);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[23])"lua table is not valid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = 0;
  }
  else
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v2 + 96),
      (const luabind::adl::object *const)(v2 + 32),
      func_name);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 64));
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 96));
    v6 = ((v2 + 96) >> 3) + 2147450880;
    *(_WORD *)v6 = -1800;
    *(_BYTE *)(v6 + 2) = -8;
    v7 = 0;
    v8 = 0;
    if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v2 + 64)) )
      goto LABEL_19;
    v9 = ((v2 + 160) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 183) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 73) & 7) >= *(_BYTE *)(((v2 + 183) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v2 + 160),
      (const luabind::adl::object *const)(v2 + 32),
      func_name);
    v7 = 1;
    v8 = 1;
    if ( luabind::type<luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v2 + 160)) == 6 )
      v12 = 1;
    else
LABEL_19:
      v12 = 0;
    if ( v8 )
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 160));
    if ( v7 )
    {
      v10 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v10 = -1800;
      *(_BYTE *)(v10 + 2) = -8;
    }
    v5 = v12 != 0;
    luabind::adl::object::~object((luabind::adl::object *const)(v2 + 64));
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 370: range 000000000CD25484-000000000CD258ED
int32_t __cdecl LuaScript::getGlobalVariable(
        const LuaScript *const this,
        const std::string *name,
        luabind::adl::object *variable)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  int32_t result; // eax
  char v10[272]; // [rsp+20h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 7 obj:371 64 16 9 <unknown> 96 24 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LuaScript::getGlobalVariable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  LuaScript::getLuaObject((const LuaScript *const)(v3 + 32));
  if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/script.cpp",
      "getGlobalVariable",
      374);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[23])"lua table is not valid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v3 + 96),
      (const luabind::adl::object *const)(v3 + 32),
      name);
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v3 + 64));
    luabind::adl::object::operator=(variable, (luabind::adl::object *)(v3 + 64));
    luabind::adl::object::~object((luabind::adl::object *const)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v3 + 96));
    v7 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v7 = -1800;
    *(_BYTE *)(v7 + 2) = -8;
    v6 = 0;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 381: range 000000000CD258EE-000000000CD25AB1
void __cdecl LuaScriptMgr::LuaScriptMgr(LuaScriptMgr *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  uint32_t v4; // ecx
  char v5; // al
  uint32_t now; // [rsp+1Ch] [rbp-14h]

  std::shared_ptr<lua_State>::shared_ptr(&this->lua_state_ptr_);
  std::map<std::string,std::shared_ptr<LuaScript>>::map(&this->lua_script_cache_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_gc_time_, v1);
  }
  this->last_gc_time_ = 0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->find_cnt_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->find_cnt_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->find_cnt_, v2);
  }
  this->find_cnt_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_cnt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_cnt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_cnt_, v2);
  }
  this->hit_cnt_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->miss_cnt_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->miss_cnt_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->miss_cnt_, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->miss_cnt_ = 0;
  now = common::tools::TimeUtils::getNow();
  v3 = LuaScriptMgr::gc_interval;
  v4 = common::tools::RandomUtils::rand<unsigned int>(0, LuaScriptMgr::gc_interval) + now;
  v5 = *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->last_gc_time_, v3);
  }
  this->last_gc_time_ = v4;
};

// Line 389: range 000000000CD25AB2-000000000CD2614A
void __cdecl LuaScriptMgr::checkGC(LuaScriptMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  lua_State_0 *v6; // rax
  __int64 v7; // rsi
  int v8; // edx
  char v9; // al
  lua_State_0 *v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  char v13; // al
  lua_State_0 *v14; // rax
  __int64 v15; // rsi
  int v16; // edx
  char v17; // al
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  uint32_t now; // [rsp+1Ch] [rbp-134h]
  char v37[304]; // [rsp+20h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 33 lua_script_cache_map_old_size:395 64 4 33 lua_script_cache_map_new_size:397 80 4 24 me"
                        "mory_use_before_gc:400 96 4 11 gc_cost:404 112 4 23 memory_use_after_gc:407 128 8 9 <unknown> 16"
                        "0 16 9 timer:402 192 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = LuaScriptMgr::checkGC;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -218959360;
  v3[536862725] = -219021312;
  v3[536862727] = -202116109;
  if ( !std::operator==<lua_State>(&this->lua_state_ptr_, 0LL) )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_gc_time_);
    }
    if ( now > this->last_gc_time_ + LuaScriptMgr::gc_interval )
    {
      v4 = (unsigned int)std::map<std::string,std::shared_ptr<LuaScript>>::size(&this->lua_script_cache_map_);
      if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 48, v4);
      *(_DWORD *)(v1 + 48) = v4;
      LuaScriptMgr::clearLuaScriptCacheMap(this);
      v5 = (unsigned int)std::map<std::string,std::shared_ptr<LuaScript>>::size(&this->lua_script_cache_map_);
      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 64, v5);
      *(_DWORD *)(v1 + 64) = v5;
      v6 = std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get(&this->lua_state_ptr_);
      v7 = 3LL;
      v8 = lua_gc(v6, 3, 0);
      v9 = *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(v7) = v9 != 0;
        __asan_report_store4(v1 + 80, v7);
      }
      *(_DWORD *)(v1 + 80) = v8;
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 160));
      v10 = std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get(&this->lua_state_ptr_);
      v11 = 2LL;
      lua_gc(v10, 2, 0);
      v12 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 160));
      v13 = *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v1 + 96, v11);
      }
      *(_DWORD *)(v1 + 96) = v12;
      v14 = std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get(&this->lua_state_ptr_);
      v15 = 3LL;
      v16 = lua_gc(v14, 3, 0);
      v17 = *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(v1 + 112, v15);
      }
      *(_DWORD *)(v1 + 112) = v16;
      if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/script.cpp",
        "checkGC",
        409);
      v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)(v1 + 192),
              (const char (*)[30])"[lua_gc] after gc. luaState: ");
      v19 = (__int64)std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get(&this->lua_state_ptr_);
      if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
        v19 = __asan_report_store8(v1 + 128, "[lua_gc] after gc. luaState: ");
      *(_QWORD *)(v1 + 128) = v19;
      v20 = common::milog::MiLogStream::operator<<<lua_State *,(lua_State **)0>(v18, (lua_State *const *)(v1 + 128));
      v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" cost: ");
      v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v1 + 96));
      v23 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v22,
              (const char (*)[27])" us memory_use_before_gc: ");
      v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v1 + 80));
      v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v24,
              (const char (*)[25])" k memory_use_after_gc: ");
      v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v1 + 112));
      v27 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              v26,
              (const char (*)[35])" k lua_script_cache_map_old_size: ");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v1 + 48));
      v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v28,
              (const char (*)[33])" lua_script_cache_map_new_size: ");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v1 + 64));
      v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])" find_cnt_: ");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->find_cnt_);
      v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])" hit_cnt_: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->hit_cnt_);
      v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])" miss_cnt_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->miss_cnt_);
      *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
      *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_gc_time_, &this->miss_cnt_);
      }
      this->last_gc_time_ = now;
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 160));
    }
  }
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 424: range 000000000CD2614C-000000000CD2676D
void __cdecl LuaScriptMgr::clearLuaScriptCacheMap(LuaScriptMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::map<std::string,std::shared_ptr<LuaScript>>::iterator v4; // rsi
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::map<std::string,std::shared_ptr<LuaScript>> *p_lua_script_cache_map; // rdx
  std::map<std::string,std::shared_ptr<LuaScript>> *v8; // rdx
  bool v9; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::pointer v10; // rax
  std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::map<std::string,std::shared_ptr<LuaScript>> *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  uint32_t now; // [rsp+1Ch] [rbp-124h]
  char v15[288]; // [rsp+20h] [rbp-120h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 18 cache_map_size:425 48 4 27 active_time_clear_count:444 64 8 6 it:446 96 8 9 <unknown> "
                        "128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = LuaScriptMgr::clearLuaScriptCacheMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  v4._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::_Base_ptr)(unsigned int)std::map<std::string,std::shared_ptr<LuaScript>>::size(&this->lua_script_cache_map_);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 32, v4._M_node);
  *(_DWORD *)(v1 + 32) = v4._M_node;
  if ( !LuaScriptMgr::lua_script_cache_map_start_clear_num
    || *(_DWORD *)(v1 + 32) >= LuaScriptMgr::lua_script_cache_map_start_clear_num )
  {
    if ( !LuaScriptMgr::lua_script_cache_map_clear_num )
      goto LABEL_15;
    if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v1 + 32);
    if ( *(_DWORD *)(v1 + 32) >= LuaScriptMgr::lua_script_cache_map_clear_num )
    {
      std::map<std::string,std::shared_ptr<LuaScript>>::clear(&this->lua_script_cache_map_);
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/script.cpp",
        "clearLuaScriptCacheMap",
        437);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[28])"lua_script_cache_map_ size:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v6,
        (const char (*)[33])" more than clear num! clear now!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    }
    else
    {
LABEL_15:
      if ( LuaScriptMgr::lua_script_cache_map_clear_time )
      {
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48, v4._M_node);
        *(_DWORD *)(v1 + 48) = 0;
        now = common::tools::TimeUtils::getNow();
        p_lua_script_cache_map = &this->lua_script_cache_map_;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 64, v4._M_node);
        *(std::map<std::string,std::shared_ptr<LuaScript>>::iterator *)(v1 + 64) = std::map<std::string,std::shared_ptr<LuaScript>>::begin(p_lua_script_cache_map);
        while ( 1 )
        {
          *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
          v8 = &this->lua_script_cache_map_;
          if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v1 + 96, v4._M_node);
          *(std::map<std::string,std::shared_ptr<LuaScript>>::iterator *)(v1 + 96) = std::map<std::string,std::shared_ptr<LuaScript>>::end(v8);
          v9 = std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::_Self *)(v1 + 64),
                 (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::_Self *)(v1 + 96));
          *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( !v9 )
            break;
          v10 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<LuaScript>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > > *const)(v1 + 64));
          v11 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10->second);
          if ( now <= LuaScriptMgr::lua_script_cache_map_clear_time + LuaScript::getActiveTime(v11) )
          {
            v4._M_node = 0LL;
            std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<LuaScript>>>::operator++(
              (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > > *const)(v1 + 64),
              0);
          }
          else
          {
            v12 = &this->lua_script_cache_map_;
            if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v1 + 64, v1 + 96);
            v4._M_node = *(std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::_Base_ptr *)(v1 + 64);
            *(std::map<std::string,std::shared_ptr<LuaScript>>::iterator *)(v1 + 64) = std::map<std::string,std::shared_ptr<LuaScript>>::erase[abi:cxx11](
                                                                                         v12,
                                                                                         v4);
            if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v1 + 48);
            ++*(_DWORD *)(v1 + 48);
          }
        }
        *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/script.cpp",
          "clearLuaScriptCacheMap",
          458);
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)(v1 + 192),
                (const char (*)[26])"active_time_clear_count: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
      }
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 463: range 000000000CD2676E-000000000CD267D6
void __cdecl LuaScriptMgr::clear(LuaScriptMgr *const this)
{
  __int64 v1; // rsi

  std::map<std::string,std::shared_ptr<LuaScript>>::clear(&this->lua_script_cache_map_);
  std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::reset(&this->lua_state_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_gc_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_gc_time_, v1);
  }
  this->last_gc_time_ = 0;
};

// Line 470: range 000000000CD267D8-000000000CD26A60
std::shared_ptr<lua_State> __cdecl LuaScriptMgr::getLuaState(LuaScriptMgr *const this)
{
  std::shared_ptr<lua_State> *v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::shared_ptr<lua_State> result; // rax
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScriptMgr::getLuaState;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  if ( std::operator==<lua_State>(v1, 0LL) )
  {
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaConfigMgr::createLuaState();
    std::shared_ptr<lua_State>::operator=(v1, (std::shared_ptr<lua_State> *)(v2 + 32));
    std::shared_ptr<lua_State>::~shared_ptr((std::shared_ptr<lua_State> *const)(v2 + 32));
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
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
      1u,
      "./src/script.cpp",
      "getLuaState",
      474);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[30])"create thread local lua state");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  }
  std::shared_ptr<lua_State>::shared_ptr(&this->lua_state_ptr_, v1);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 481: range 000000000CD26A62-000000000CD27932
LuaScriptPtr __cdecl LuaScriptMgr::createFromLuaContent(const LuaContent *context)
{
  const LuaContent *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  LuaScriptPtr result; // rax
  std::map<std::string,std::shared_ptr<LuaScript>> *p_lua_script_cache_map; // rdx
  const std::map<std::string,std::shared_ptr<LuaScript>>::key_type *p_relative_file_path; // rcx
  __int64 v9; // rsi
  const std::map<std::string,std::shared_ptr<LuaScript>>::key_type *v10; // rsi
  std::map<std::string,std::shared_ptr<LuaScript>> *v11; // rdx
  bool v12; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::pointer v13; // rax
  LuaScript *v14; // rax
  common::milog::MiLogStream *v15; // rax
  LuaScript *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::shared_ptr<LuaScript> *v18; // rax
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  const LuaContent *contexta; // [rsp+0h] [rbp-2A0h]
  bool new_create; // [rsp+17h] [rbp-289h]
  LuaScriptMgr *lua_script_mgr; // [rsp+18h] [rbp-288h]
  char v29[640]; // [rsp+20h] [rbp-280h] BYREF

  contexta = v1;
  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 4 18 cache_map_size:529 64 8 8 iter:496 96 8 9 <unknown> 128 16 18 lua_script_ptr:495 160 "
                        "16 9 <unknown> 192 16 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 3"
                        "2 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScriptMgr::createFromLuaContent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  if ( (unsigned __int8)std::string::empty(&v1->lua_content) )
  {
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "createFromLuaContent",
      484);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[32])"lua_content is empty,file_path:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &v1->file_path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)context, 0LL);
  }
  else if ( (unsigned __int8)std::string::empty(&v1->file_path) )
  {
    std::string::basic_string(v2 + 288, &v1->lua_content);
    if ( *(_WORD *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaScriptMgr::createFromString((const std::string *)context);
    std::string::~string((void *)(v2 + 288));
  }
  else
  {
    lua_script_mgr = LuaScriptMgr::getLuaScriptMgr();
    if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(_QWORD *)(v2 + 128) = 0LL;
    *(_QWORD *)(v2 + 136) = 0LL;
    p_lua_script_cache_map = &lua_script_mgr->lua_script_cache_map_;
    p_relative_file_path = &v1->relative_file_path;
    v9 = *(unsigned __int8 *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v2 + 64, v9);
    v10 = p_relative_file_path;
    *(std::map<std::string,std::shared_ptr<LuaScript>>::iterator *)(v2 + 64) = std::map<std::string,std::shared_ptr<LuaScript>>::find(
                                                                                 p_lua_script_cache_map,
                                                                                 p_relative_file_path);
    new_create = 0;
    v11 = &lua_script_mgr->lua_script_cache_map_;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v10);
    *(std::map<std::string,std::shared_ptr<LuaScript>>::iterator *)(v2 + 96) = std::map<std::string,std::shared_ptr<LuaScript>>::end(v11);
    v12 = std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > >::_Self *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      v13 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<LuaScript>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<LuaScript> > > *const)(v2 + 64));
      std::shared_ptr<LuaScript>::operator=((std::shared_ptr<LuaScript> *const)(v2 + 128), &v13->second);
      v14 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      LuaScript::updateActiveTime(v14);
      if ( *(_BYTE *)(((unsigned __int64)&lua_script_mgr->find_cnt_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)lua_script_mgr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lua_script_mgr->find_cnt_ >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&lua_script_mgr->find_cnt_);
      }
      ++lua_script_mgr->find_cnt_;
      if ( *(_BYTE *)(((unsigned __int64)&lua_script_mgr->hit_cnt_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&lua_script_mgr->hit_cnt_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&lua_script_mgr->hit_cnt_);
      }
      ++lua_script_mgr->hit_cnt_;
    }
    else
    {
      new_create = 1;
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      LuaScriptMgr::getLuaState((LuaScriptMgr *const)(v2 + 160));
      if ( *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<LuaScript,std::shared_ptr<lua_State>>(
        (common::tools::perf::allocator<LuaScript,LuaScript> *)(v2 + 192),
        (std::shared_ptr<lua_State> *)(v2 + 160));
      std::shared_ptr<LuaScript>::operator=(
        (std::shared_ptr<LuaScript> *const)(v2 + 128),
        (std::shared_ptr<LuaScript> *)(v2 + 192));
      std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 192));
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
      std::shared_ptr<lua_State>::~shared_ptr((std::shared_ptr<lua_State> *const)(v2 + 160));
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
      if ( *(_BYTE *)(((unsigned __int64)&lua_script_mgr->find_cnt_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)lua_script_mgr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lua_script_mgr->find_cnt_ >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&lua_script_mgr->find_cnt_);
      }
      ++lua_script_mgr->find_cnt_;
      if ( *(_BYTE *)(((unsigned __int64)&lua_script_mgr->miss_cnt_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)lua_script_mgr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lua_script_mgr->miss_cnt_ >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&lua_script_mgr->miss_cnt_);
      }
      ++lua_script_mgr->miss_cnt_;
    }
    if ( std::operator==<LuaScript>((const std::shared_ptr<LuaScript> *)(v2 + 128), 0LL) )
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
        4u,
        "./src/script.cpp",
        "createFromLuaContent",
        515);
      v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[25])"create LuaScript failed:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &contexta->file_path);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)context, 0LL);
    }
    else
    {
      v16 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( LuaScript::loadLuaContext(v16, contexta) )
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
          4u,
          "./src/script.cpp",
          "createFromLuaContent",
          521);
        v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[23])"loadLuaContext failed:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &contexta->file_path);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)context, 0LL);
      }
      else
      {
        if ( new_create )
        {
          v18 = std::map<std::string,std::shared_ptr<LuaScript>>::operator[](
                  &lua_script_mgr->lua_script_cache_map_,
                  &contexta->relative_file_path);
          std::shared_ptr<LuaScript>::operator=(v18, (const std::shared_ptr<LuaScript> *)(v2 + 128));
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v19 = (unsigned int)std::map<std::string,std::shared_ptr<LuaScript>>::size(&lua_script_mgr->lua_script_cache_map_);
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 48, v19);
          *(_DWORD *)(v2 + 48) = v19;
          if ( *(_DWORD *)(v2 + 48) < LuaScriptMgr::lua_script_cache_map_error_num )
          {
            if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 48);
            if ( *(_DWORD *)(v2 + 48) >= LuaScriptMgr::lua_script_cache_map_warn_num )
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
                "./src/script.cpp",
                "createFromLuaContent",
                536);
              v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      (common::milog::MiLogStream *const)(v2 + 544),
                      (const char (*)[28])"lua_script_cache_map_ size:");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      (const unsigned int *)(v2 + 48));
              v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v24,
                      (const char (*)[19])" is more than num:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                &LuaScriptMgr::lua_script_cache_map_warn_num);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
              *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/script.cpp",
              "createFromLuaContent",
              532);
            v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)(v2 + 480),
                    (const char (*)[28])"lua_script_cache_map_ size:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v2 + 48));
            v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v21,
                    (const char (*)[19])" is more than num:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v22,
              &LuaScriptMgr::lua_script_cache_map_error_num);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
            *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
          }
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        }
        std::shared_ptr<LuaScript>::shared_ptr(
          (std::shared_ptr<LuaScript> *const)context,
          (std::shared_ptr<LuaScript> *)(v2 + 128));
      }
    }
    std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 128));
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<LuaScript,(__gnu_cxx::_Lock_policy)2>::element_type *)context;
  return result;
};

// Line 543: range 000000000CD27934-000000000CD27F8E
LuaScriptPtr __cdecl LuaScriptMgr::createFromFilePath(const std::string *file_path, const LuaConfigMgr *lua_config_mgr)
{
  const LuaConfigMgr *v2; // rdx
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaScriptPtr result; // rax
  common::milog::MiLogStream *v7; // rdx
  LuaScript *v8; // rcx
  common::milog::MiLogStream *v9; // rdx
  const LuaConfigMgr *lua_config_mgra; // [rsp+8h] [rbp-168h]
  char v11[320]; // [rsp+30h] [rbp-140h] BYREF

  lua_config_mgra = v2;
  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 18 lua_script_ptr:551 64 16 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LuaScriptMgr::createFromFilePath;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  if ( (unsigned __int8)std::string::empty(lua_config_mgr) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "createFromFilePath",
      546);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v3 + 96),
      (const char (*)[26])"file path cannot be empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)file_path, 0LL);
  }
  else
  {
    LuaScriptMgr::getLuaScriptMgr();
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaScriptMgr::getLuaState((LuaScriptMgr *const)(v3 + 64));
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<LuaScript,std::shared_ptr<lua_State>>(
      (common::tools::perf::allocator<LuaScript,LuaScript> *)(v3 + 32),
      (std::shared_ptr<lua_State> *)(v3 + 64));
    std::shared_ptr<lua_State>::~shared_ptr((std::shared_ptr<lua_State> *const)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( std::operator==<LuaScript>((const std::shared_ptr<LuaScript> *)(v3 + 32), 0LL) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/script.cpp",
        "createFromFilePath",
        554);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[25])"create LuaScript failed:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &lua_config_mgr->lua_parser_file);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)file_path, 0LL);
    }
    else
    {
      v8 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( LuaScript::loadLuaFile(v8, &lua_config_mgr->lua_parser_file, lua_config_mgra) )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/script.cpp",
          "createFromFilePath",
          560);
        v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[20])"loadLuaFile failed:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &lua_config_mgr->lua_parser_file);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)file_path, 0LL);
      }
      else
      {
        std::shared_ptr<LuaScript>::shared_ptr(
          (std::shared_ptr<LuaScript> *const)file_path,
          (std::shared_ptr<LuaScript> *)(v3 + 32));
      }
    }
    std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v3 + 32));
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<LuaScript,(__gnu_cxx::_Lock_policy)2>::element_type *)file_path;
  return result;
};

// Line 568: range 000000000CD27F90-000000000CD285DC
LuaScriptPtr __cdecl LuaScriptMgr::createFromString(const std::string *p_lua_str)
{
  const std::string *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaScriptPtr result; // rax
  common::milog::MiLogStream *v6; // rdx
  LuaScript *v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  char v9[320]; // [rsp+20h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 18 lua_script_ptr:576 64 16 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScriptMgr::createFromString;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( (unsigned __int8)std::string::empty() )
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
      4u,
      "./src/script.cpp",
      "createFromString",
      571);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[26])"file path cannot be empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)p_lua_str, 0LL);
  }
  else
  {
    LuaScriptMgr::getLuaScriptMgr();
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaScriptMgr::getLuaState((LuaScriptMgr *const)(v2 + 64));
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<LuaScript,std::shared_ptr<lua_State>>(
      (common::tools::perf::allocator<LuaScript,LuaScript> *)(v2 + 32),
      (std::shared_ptr<lua_State> *)(v2 + 64));
    std::shared_ptr<lua_State>::~shared_ptr((std::shared_ptr<lua_State> *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( std::operator==<LuaScript>((const std::shared_ptr<LuaScript> *)(v2 + 32), 0LL) )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/script.cpp",
        "createFromString",
        579);
      v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[25])"create LuaScript failed:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)p_lua_str, 0LL);
    }
    else
    {
      v7 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( LuaScript::loadLuaStr(v7, v1) )
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
          4u,
          "./src/script.cpp",
          "createFromString",
          585);
        v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[20])"loadLuaFile failed:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)p_lua_str, 0LL);
      }
      else
      {
        std::shared_ptr<LuaScript>::shared_ptr(
          (std::shared_ptr<LuaScript> *const)p_lua_str,
          (std::shared_ptr<LuaScript> *)(v2 + 32));
      }
    }
    std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 32));
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<LuaScript,(__gnu_cxx::_Lock_policy)2>::element_type *)p_lua_str;
  return result;
};

// Line 592: range 000000000CD285DE-000000000CD292ED
int32_t __cdecl LuaScriptMgr::getCommonLuaContentFromFile(const std::string *file_path, LuaCommonContent *content)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  _BOOL4 v8; // r15d
  common::milog::MiLogStream *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  __int64 v16; // rax
  size_t v17; // r15
  const char *v18; // rax
  char v20[1680]; // [rsp+30h] [rbp-690h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1632LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 8 9 <unknown> 80 32 9 <unknown> 144 32 9 <unknown> 208 32 9 <unknown> 272 32 8 line:613 33"
                        "6 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 376 7 tmp:608 976 520 14 lua_stream:601";
  *(_QWORD *)(v3 + 16) = LuaScriptMgr::getCommonLuaContentFromFile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862748] = -218959360;
  v5[536862749] = -218959118;
  v5[536862750] = 62194;
  v5[536862766] = -218103808;
  v5[536862767] = -202116109;
  v5[536862768] = -202116109;
  v5[536862769] = -202116109;
  v5[536862770] = -202116109;
  if ( (unsigned __int8)std::string::empty() )
  {
    if ( *(char *)(((v3 + 80) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 80, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 80),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "getCommonLuaContentFromFile",
      595);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v3 + 80),
      (const char (*)[26])"file path cannot be empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 80));
    v2 = -1;
  }
  else
  {
    std::ifstream::basic_ifstream(v3 + 976, file_path, 4LL);
    if ( (unsigned __int8)std::ifstream::is_open(v3 + 976) != 1 )
    {
      if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/script.cpp",
        "getCommonLuaContentFromFile",
        604);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 144),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v6, (const char (*)[82])byte_1A185100);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, file_path);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
      *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    else
    {
      std::ostringstream::basic_ostringstream(v3 + 528);
      if ( common::tools::StringUtils::removeBOM((std::ifstream *)(v3 + 976)) )
      {
        if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 208, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 208),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/script.cpp",
          "getCommonLuaContentFromFile",
          611);
        v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               (common::milog::MiLogStream *const)(v3 + 208),
               (const char (*)[22])"lua file is with bom:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, file_path);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
        *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      }
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 272);
      while ( 1 )
      {
        v10 = std::getline<char,std::char_traits<char>,std::allocator<char>>(v3 + 976, v3 + 272);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10);
        v11 = *(_QWORD *)v10 - 24LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(_QWORD *)v10 - 24LL);
        if ( !(unsigned __int8)std::ios::operator bool(*(_QWORD *)v11 + v10) )
          break;
        if ( std::string::find(v3 + 272, "require", 0LL) != -1 )
        {
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/script.cpp",
            "getCommonLuaContentFromFile",
            618);
          v12 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[64])byte_1A1863C0);
          v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, file_path);
          v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" line:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 272));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
          goto LABEL_30;
        }
        v16 = std::operator<<<char>(v3 + 528, v3 + 272);
        std::ostream::operator<<(v16, &std::endl<char,std::char_traits<char>>);
      }
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      std::ostringstream::str(v3 + 400, v3 + 528);
      std::string::operator=(content, v3 + 400);
      std::string::~string((void *)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      std::string::operator=(&content->file_path, file_path);
      v17 = std::string::size(content);
      v18 = (const char *)std::string::data(content);
      common::tools::StringUtils::md5(&content->lua_content_md5, v18, v17);
      v15 = 1;
LABEL_30:
      std::string::~string((void *)(v3 + 272));
      std::ostringstream::~ostringstream(v3 + 528);
      v8 = v15 == 1;
    }
    std::ifstream::~ifstream(v3 + 976);
    if ( v8 )
      v2 = 0;
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 204) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1632LL, v20);
  }
  return v2;
};

// Line 639: range 000000000CD292EE-000000000CD29335
uint32_t __cdecl LuaScriptMgr::getLuaStateMemoryAccount(LuaScriptMgr *const this)
{
  lua_State_0 *v2; // rax

  if ( std::operator==<lua_State>(&this->lua_state_ptr_, 0LL) )
    return 0;
  v2 = std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get(&this->lua_state_ptr_);
  return lua_gc(v2, 3, 0);
};

// Line 646: range 000000000CD29336-000000000CD2952C
LuaScriptMgr *__cdecl LuaScriptMgr::getLuaScriptMgr()
{
  unsigned __int64 v0; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  common::minet::Coroutine *v3; // rax
  LuaScriptMgr *v4; // r14
  LuaScriptMgr *v5; // rdi
  LuaScriptMgr *result; // rax
  std::__shared_ptr_access<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *lua_script_mgr; // [rsp+8h] [rbp-98h]
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v0 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(96LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "2 32 16 12 coro_ptr:648 64 16 9 <unknown>";
  *(_QWORD *)(v0 + 16) = LuaScriptMgr::getLuaScriptMgr;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -219021312;
  v2[536862722] = -202178560;
  if ( *(_WORD *)(((v0 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v0 + 32), 0LL) )
  {
    v3 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v0 + 32));
    common::minet::Coroutine::getContext(v3);
    if ( *(_WORD *)(((v0 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::minet::CoroutineContext::get<std::shared_ptr<LuaScriptMgr>>((common::minet::CoroutineContext *const)(v0 + 64));
    lua_script_mgr = std::__shared_ptr_access<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v0 + 64));
    std::shared_ptr<LuaScriptMgr>::~shared_ptr((std::shared_ptr<LuaScriptMgr> *const)(v0 + 64));
    *(_WORD *)(((v0 + 64) >> 3) + 0x7FFF8000) = -1800;
    LuaScriptMgr::checkGC(lua_script_mgr);
    v4 = lua_script_mgr;
  }
  else
  {
    v5 = (LuaScriptMgr *)ZTWN12LuaScriptMgr17tl_lua_script_mgrE();
    LuaScriptMgr::checkGC(v5);
    v4 = (LuaScriptMgr *)ZTWN12LuaScriptMgr17tl_lua_script_mgrE();
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v0 + 32));
  result = v4;
  if ( v8 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 663: range 000000000CD2952E-000000000CD2A9A9
int32_t __cdecl LuaScriptMgr::appendPacakgeRequirePath(const std::string *path)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  _BOOL4 v8; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int32_t result; // eax
  lua_State_0 *L; // [rsp+10h] [rbp-440h]
  char v19[1072]; // [rsp+20h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 16 9 <unknown> 64 16 11 globals:679 96 16 15 package_obj:680 128 16 12 path_obj:686 160 16"
                        " 9 <unknown> 192 24 9 <unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 24 9 <unknown> 448 32 "
                        "9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 12 path_str:692 768 "
                        "32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaScriptMgr::appendPacakgeRequirePath;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -202116109;
  if ( (unsigned __int8)std::string::empty() )
  {
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/script.cpp",
      "appendPacakgeRequirePath",
      666);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v2 + 448),
      (const char (*)[23])" path cannot be empty.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    v1 = -1;
  }
  else
  {
    LuaScriptMgr::getLuaScriptMgr();
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    LuaScriptMgr::getLuaState((LuaScriptMgr *const)(v2 + 32));
    L = std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<lua_State,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32));
    std::shared_ptr<lua_State>::~shared_ptr((std::shared_ptr<lua_State> *const)(v2 + 32));
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( L )
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::globals((lua_State_0 *)(v2 + 64));
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      v5 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v5 = 0;
      *(_BYTE *)(v5 + 2) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 215) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 23) & 7) >= *(_BYTE *)(((v2 + 215) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 24LL);
      }
      luabind::adl::object::operator[]<char [8]>(
        (luabind::adl::index_proxy<luabind::adl::object> *)(v2 + 192),
        (const luabind::adl::object *const)(v2 + 64),
        (const char (*)[8])"package");
      if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 96));
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 192));
      v6 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v6 = -1800;
      *(_BYTE *)(v6 + 2) = -8;
      if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v2 + 96))
        || luabind::type<luabind::adl::object>((const luabind::adl::object *)(v2 + 96)) != 5 )
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/script.cpp",
          "appendPacakgeRequirePath",
          683);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[30])" package_obj table not found:");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v8 = 0;
      }
      else
      {
        *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        v9 = ((v2 + 256) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 23) & 7) >= *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 24LL);
        }
        luabind::adl::object::operator[]<char [5]>(
          (luabind::adl::index_proxy<luabind::adl::object> *)(v2 + 256),
          (const luabind::adl::object *const)(v2 + 96),
          (const char (*)[5])"path");
        if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 128));
        luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 256));
        v10 = ((v2 + 256) >> 3) + 2147450880;
        *(_WORD *)v10 = -1800;
        *(_BYTE *)(v10 + 2) = -8;
        if ( !luabind::adl::object::is_valid((const luabind::adl::object *const)(v2 + 128))
          || luabind::type<luabind::adl::object>((const luabind::adl::object *)(v2 + 128)) != 4 )
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/script.cpp",
            "appendPacakgeRequirePath",
            689);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[24])" path string not found:");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          v1 = -1;
          v12 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 704, 32LL);
          }
          luabind::object_cast<std::string,luabind::adl::object>(
            (std::string *)(v2 + 704),
            (const luabind::adl::object *)(v2 + 128));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          std::operator+<char>((std::string *)(v2 + 768), (const std::string *)(v2 + 704), ";");
          if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 832, 32LL);
          }
          std::operator+<char>((std::string *)(v2 + 832), (std::string *)(v2 + 768), path);
          if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 896, 32LL);
          }
          std::operator+<char>((std::string *)(v2 + 896), (std::string *)(v2 + 832), "?.lua");
          v13 = ((v2 + 384) >> 3) + 2147450880;
          *(_WORD *)v13 = 0;
          *(_BYTE *)(v13 + 2) = 0;
          v14 = ((v2 + 320) >> 3) + 2147450880;
          *(_WORD *)v14 = 0;
          *(_BYTE *)(v14 + 2) = 0;
          *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          luabind::globals((lua_State_0 *)(v2 + 160));
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 343) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 87) & 7) >= *(_BYTE *)(((v2 + 343) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 24LL);
          }
          luabind::adl::object::operator[]<char [8]>(
            (luabind::adl::index_proxy<luabind::adl::object> *)(v2 + 320),
            (const luabind::adl::object *const)(v2 + 160),
            (const char (*)[8])"package");
          if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 407) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 407) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 384, 24LL);
          }
          luabind::adl::index_proxy<luabind::adl::object>::operator[]<char [5]>(
            (luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *)(v2 + 384),
            (luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 320),
            (const char (*)[5])"path");
          luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::operator=<std::string>(
            (luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const)(v2 + 384),
            (const std::string *)(v2 + 896));
          luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::~index_proxy((luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const)(v2 + 384));
          v15 = ((v2 + 384) >> 3) + 2147450880;
          *(_WORD *)v15 = -1800;
          *(_BYTE *)(v15 + 2) = -8;
          luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v2 + 320));
          v16 = ((v2 + 320) >> 3) + 2147450880;
          *(_WORD *)v16 = -1800;
          *(_BYTE *)(v16 + 2) = -8;
          luabind::adl::object::~object((luabind::adl::object *const)(v2 + 160));
          *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
          std::string::~string((void *)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::string::~string((void *)(v2 + 704));
          v12 = 1;
        }
        luabind::adl::object::~object((luabind::adl::object *const)(v2 + 128));
        v8 = v12 == 1;
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v2 + 96));
      luabind::adl::object::~object((luabind::adl::object *const)(v2 + 64));
      if ( v8 )
        v1 = 0;
    }
    else
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
        4u,
        "./src/script.cpp",
        "appendPacakgeRequirePath",
        673);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
        (common::milog::MiLogStream *const)(v2 + 512),
        (const char (*)[16])" NULL lua state");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      v1 = -1;
    }
  }
  result = v1;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
