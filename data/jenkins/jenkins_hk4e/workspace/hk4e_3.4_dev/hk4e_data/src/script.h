// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script.h

// Line 25: range 000000000CE3DEBE-000000000CE3DF2A
void __cdecl LuaContent::LuaContent(LuaContent *const this)
{
  luabind::adl::object::object(&this->lua_obj);
  std::string::basic_string(&this->lua_content);
  std::string::basic_string(&this->lua_content_md5);
  std::string::basic_string(&this->file_path);
  std::string::basic_string(&this->relative_file_path);
  std::map<unsigned int,std::string>::map(&this->line_2_file_path_map);
};

// Line 25: range 000000000F9BAB28-000000000F9BAC50
void __cdecl LuaContent::LuaContent(LuaContent *const this, const LuaContent *a2)
{
  luabind::adl::object::object(&this->lua_obj, &a2->lua_obj);
  std::string::basic_string(&this->lua_content, &a2->lua_content);
  std::string::basic_string(&this->lua_content_md5, &a2->lua_content_md5);
  std::string::basic_string(&this->file_path, &a2->file_path);
  std::string::basic_string(&this->relative_file_path, &a2->relative_file_path);
  std::map<unsigned int,std::string>::map(&this->line_2_file_path_map, &a2->line_2_file_path_map);
};

// Line 25: range 000000000CE3DF2C-000000000CE3DF98
void __cdecl LuaContent::~LuaContent(LuaContent *const this)
{
  std::map<unsigned int,std::string>::~map(&this->line_2_file_path_map);
  std::string::~string(&this->relative_file_path);
  std::string::~string(&this->file_path);
  std::string::~string(&this->lua_content_md5);
  std::string::~string(&this->lua_content);
  luabind::adl::object::~object(&this->lua_obj);
};

// Line 35: range 000000000F790254-000000000F79028E
void __cdecl LuaCommonContent::LuaCommonContent(LuaCommonContent *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->lua_content_md5);
  std::string::basic_string(&this->file_path);
};

// Line 35: range 000000000F9BEE38-000000000F9BEECB
void __cdecl LuaCommonContent::LuaCommonContent(LuaCommonContent *const this, const LuaCommonContent *a2)
{
  std::string::basic_string(this, a2);
  std::string::basic_string(&this->lua_content_md5, &a2->lua_content_md5);
  std::string::basic_string(&this->file_path, &a2->file_path);
};

// Line 35: range 000000000F790290-000000000F7902CA
void __cdecl LuaCommonContent::~LuaCommonContent(LuaCommonContent *const this)
{
  std::string::~string(&this->file_path);
  std::string::~string(&this->lua_content_md5);
  std::string::~string(this);
};

// Line 42: range 000000000F7F14A8-000000000F7F1505
void __cdecl LuaUnknownExecption::~LuaUnknownExecption(LuaUnknownExecption *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'LuaUnknownExecption + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::string::~string(&this->message_);
  std::exception::~exception((std::exception *)this);
};

// Line 42: range 000000000F7F1506-000000000F7F1530
void __cdecl LuaUnknownExecption::~LuaUnknownExecption(LuaUnknownExecption *const this)
{
  LuaUnknownExecption::~LuaUnknownExecption(this);
  operator delete(this, 0x28uLL);
};

// Line 46: range 000000000F7764C4-000000000F776632
void __cdecl LuaUnknownExecption::LuaUnknownExecption(LuaUnknownExecption *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // rdx
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LuaUnknownExecption::LuaUnknownExecption;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::exception::exception((std::exception *const)this);
  v5 = &`vtable for'LuaUnknownExecption + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v5;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->message_,
    "unkown lua error.",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 000000000F776634-000000000F776651
const char *__cdecl LuaUnknownExecption::what(const LuaUnknownExecption *const this)
{
  return (const char *)std::string::c_str(&this->message_);
};

// Line 54: range 000000000D4A2A26-000000000D4A2A60
void __cdecl LuaScript::~LuaScript(LuaScript *const this)
{
  LuaContent::~LuaContent(&this->lua_content_);
  std::shared_ptr<lua_State>::~shared_ptr(&this->lua_state_);
  std::enable_shared_from_this<LuaScript>::~enable_shared_from_this(this);
};

// Line 71: range 000000000CDFEC62-000000000CDFECAE
uint32_t __cdecl LuaScript::getActiveTime(const LuaScript *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->active_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->active_time_);
  }
  return this->active_time_;
};

// Line 77: range 000000000CDFECB0-000000000CDFECC1
const std::string *__cdecl LuaScript::getFilePath[abi:cxx11](const LuaScript *const this)
{
  return &this->lua_content_.file_path;
};

// Line 133: range 000000000D4937E6-000000000D493810
void __cdecl LuaScriptMgr::~LuaScriptMgr(LuaScriptMgr *const this)
{
  std::map<std::string,std::shared_ptr<LuaScript>>::~map(&this->lua_script_cache_map_);
  std::shared_ptr<lua_State>::~shared_ptr(&this->lua_state_ptr_);
};
