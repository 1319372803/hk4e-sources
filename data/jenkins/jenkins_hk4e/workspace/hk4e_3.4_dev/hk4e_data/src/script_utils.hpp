// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script_utils.hpp

// Line 18: range 000000000D1E0112-000000000D1E0F8E
int32_t __cdecl ScriptUtil::getTableValue<bool>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  bool v18; // cl
  char v19; // dl
  __int64 v20; // rdx
  int32_t result; // eax
  char v24[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<bool>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<bool,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      LOBYTE(table) = v19 != 0;
      v20 = (v19 != 0) & (unsigned __int8)(((unsigned __int8)val & 7) >= v19);
      if ( (_BYTE)v20 )
        __asan_report_store1(val, table, v20);
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 18: range 000000000F90D124-000000000F90DFA3
int32_t __cdecl ScriptUtil::getTableValue<data::EventType>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::EventType *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  data::EventType v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<data::EventType>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<data::EventType,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000F8A95D4-000000000F8AA453
int32_t __cdecl ScriptUtil::getTableValue<data::GadgetState>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::GadgetState *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  data::GadgetState v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<data::GadgetState>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<data::GadgetState,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000F95D326-000000000F95E1A5
int32_t __cdecl ScriptUtil::getTableValue<data::GadgetType>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::GadgetType *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  data::GadgetType v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<data::GadgetType>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<data::GadgetType,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000F9F9F08-000000000F9FAD87
int32_t __cdecl ScriptUtil::getTableValue<data::PlatformRotType>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::PlatformRotType *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  data::PlatformRotType v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<data::PlatformRotType>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<data::PlatformRotType,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000F8A2F52-000000000F8A3DD1
int32_t __cdecl ScriptUtil::getTableValue<data::RegionShape>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::RegionShape *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  data::RegionShape v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<data::RegionShape>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<data::RegionShape,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000F7DD8DC-000000000F7DE75B
int32_t __cdecl ScriptUtil::getTableValue<data::VisionLevelType>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::VisionLevelType *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  data::VisionLevelType v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<data::VisionLevelType>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<data::VisionLevelType,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000CEE89FE-000000000CEE987F
int32_t __cdecl ScriptUtil::getTableValue<float>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        float *val)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  void *exception; // r14
  int32_t v12; // ebx
  bool v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  void *v17; // r14
  unsigned __int64 v18; // rax
  int v19; // ecx
  char v20; // dl
  int32_t result; // eax
  char v24[624]; // [rsp+40h] [rbp-270h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(576LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ScriptUtil::getTableValue<float>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862726] = -234881024;
  v7[536862727] = -218959118;
  v7[536862729] = -218959118;
  v7[536862731] = -218959118;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862737] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v9 = (unsigned __int8)this & 7;
    v10 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v10 )
      __asan_report_load1(this, v9, v10);
    if ( this->has_exception_ )
    {
      exception = __cxa_allocate_exception(0x10uLL);
      if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 256, 32LL);
      }
      std::operator+<char>((std::string *)(v5 + 256), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v5 + 256);
      std::string::~string((void *)(v5 + 256));
      *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v5 + 256);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v12 = -1;
  }
  else
  {
    if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 105) & 7) >= *(_BYTE *)(((v5 + 151) >> 3) + 0x7FFF8000) )
    {
      *(double *)v4.m128i_i64 = __asan_report_store_n(v5 + 128, 24LL);
    }
    luabind::adl::object::operator[]<std::string>(
      (luabind::adl::index_proxy<luabind::adl::object> *)(v5 + 128),
      table,
      name);
    v13 = luabind::type<luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v5 + 128)) == 0;
    luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v5 + 128));
    v14 = ((v5 + 128) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    if ( v13 )
    {
      v15 = (unsigned __int8)this & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_load1(this, v15, v16);
      if ( this->has_exception_ )
      {
        v17 = __cxa_allocate_exception(0x10uLL);
        *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v5 + 320), "can't find:", name);
        if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v5 + 384), (std::string *)(v5 + 320), " in table");
        std::invalid_argument::invalid_argument(v17, v5 + 384);
        std::string::~string((void *)(v5 + 384));
        *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v5 + 320));
        *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v5 + 320);
        _cxa_throw(
          v17,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v12 = -1;
    }
    else
    {
      v18 = ((v5 + 192) >> 3) + 2147450880;
      *(_WORD *)v18 = 0;
      *(_BYTE *)(v18 + 2) = 0;
      if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 215) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 41) & 7) >= *(_BYTE *)(((v5 + 215) >> 3) + 0x7FFF8000) )
      {
        *(double *)v4.m128i_i64 = __asan_report_store_n(v5 + 192, 24LL);
      }
      luabind::adl::object::operator[]<std::string>(
        (luabind::adl::index_proxy<luabind::adl::object> *)(v5 + 192),
        table,
        name);
      *(float *)v4.m128i_i32 = luabind::object_cast<float,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v5 + 192));
      v19 = _mm_cvtsi128_si32(v4);
      v20 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v20 )
      {
        LOBYTE(table) = v20 != 0;
        __asan_report_store4(val, table);
      }
      *(_DWORD *)val = v19;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v5 + 192));
      v12 = 0;
    }
  }
  result = v12;
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 18: range 000000000FA08D8E-000000000FA09C0D
int32_t __cdecl ScriptUtil::getTableValue<proto::GadgetBornType>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        proto::GadgetBornType *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  proto::GadgetBornType v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<proto::GadgetBornType>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<proto::GadgetBornType,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000F994530-000000000F9953AF
int32_t __cdecl ScriptUtil::getTableValue<proto::GroupLoadStrategy>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        proto::GroupLoadStrategy *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  proto::GroupLoadStrategy v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<proto::GroupLoadStrategy>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<proto::GroupLoadStrategy,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 18: range 000000000D3FCC9A-000000000D3FDBB0
int32_t __cdecl ScriptUtil::getTableValue<std::string>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  int32_t result; // eax
  char v21[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<std::string>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
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
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      luabind::object_cast<std::string,luabind::adl::index_proxy<luabind::adl::object>>(
        (std::string *)(v4 + 448),
        (const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      std::string::operator=(val, v4 + 448);
      std::string::~string((void *)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v21 == (char *)v4 )
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

// Line 18: range 000000000F9FB3BA-000000000F9FC2E2
int32_t __cdecl ScriptUtil::getTableValue<std::vector<std::string>>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::vector<std::string> *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int32_t result; // eax
  char v23[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "24 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<std::vector<std::string>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
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
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 320), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v4 + 320);
      std::string::~string((void *)(v4 + 320));
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v4 + 320);
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
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), "can't find:", name);
        if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 448, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 448), (std::string *)(v4 + 384), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 448);
        std::string::~string((void *)(v4 + 448));
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 384);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
      v17 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      v18 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v18 = 0;
      *(_BYTE *)(v18 + 2) = 0;
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
      if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 279) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 23) & 7) >= *(_BYTE *)(((v4 + 279) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 256, 24LL);
      }
      luabind::object_cast<std::vector<std::string>,luabind::adl::index_proxy<luabind::adl::object>>(
        (std::vector<std::string> *)(v4 + 256),
        (const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      std::vector<std::string>::operator=(val, (std::vector<std::string> *)(v4 + 256));
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 256));
      v19 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v19 = -1800;
      *(_BYTE *)(v19 + 2) = -8;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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

// Line 48: range 000000000FA0574C-000000000FA05A35
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[8]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[17]>::type *args_4,
        std::string *args_5,
        std::remove_reference<char const (&)[16]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[14]>::type *args_8,
        bool *args_9)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // r13
  bool *v17; // r14
  const char (*v18)[17]; // r15
  const char *v19; // rax
  __int64 result; // rax
  char *v21; // [rsp+0h] [rbp-130h]
  unsigned int *v22; // [rsp+8h] [rbp-128h]
  const char (*v23)[14]; // [rsp+10h] [rbp-120h]
  unsigned int *v24; // [rsp+18h] [rbp-118h]
  std::string *v25; // [rsp+20h] [rbp-110h]
  char (*v26)[16]; // [rsp+28h] [rbp-108h]
  bool *v27; // [rsp+30h] [rbp-100h]
  char (*v28)[14]; // [rsp+38h] [rbp-F8h]
  int32_t ret; // [rsp+7Ch] [rbp-B4h]
  unsigned int reta; // [rsp+7Ch] [rbp-B4h]
  char v35[12][14]; // [rsp+80h] [rbp-B0h] BYREF

  v14 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v14 = v15;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v14 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v16 = (_DWORD *)(v14 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234753551;
  v16[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v17 = std::forward<bool &>(args_9);
  v28 = (char (*)[14])std::forward<char const(&)[14]>(args_8);
  v27 = std::forward<bool &>(args_7);
  v26 = (char (*)[16])std::forward<char const(&)[16]>(args_6);
  v25 = std::forward<std::string &>(args_5);
  v18 = std::forward<char const(&)[17]>(args_4);
  v24 = std::forward<unsigned int &>(args_3);
  v23 = std::forward<char const(&)[14]>(args_2);
  v22 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v14 + 48);
  v19 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v14 + 64),
    v19,
    (const std::allocator<char> *)(v14 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v14 + 64),
           v22,
           v23,
           v24,
           v18,
           v25,
           v26,
           v27,
           v28,
           v17,
           v35,
           v22,
           (const char (*)[17])v23,
           (std::string *)v24,
           (const char (*)[16])&v25->_M_dataplus._M_p,
           (bool *)v26,
           (const char (*)[14])v27,
           (bool *)v28) | ret;
  std::string::~string((void *)(v14 + 64));
  *(_DWORD *)(((v14 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v14 + 48);
  result = reta;
  if ( v21 == (char *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v14 = 1172321806LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 59: range 000000000CFD3912-000000000CFD3B62
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[11],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[12]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        bool *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  const char (*v11)[11]; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  char *v15; // [rsp+0h] [rbp-100h]
  bool *v16; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v23[16][11]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[11],bool &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v16 = std::forward<bool &>(args_3);
  v11 = std::forward<char const(&)[11]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[12]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],bool &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v16,
           v23,
           v16) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v15 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 65: range 000000000D3A18E4-000000000D3A1DB6
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[5]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[15]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[16]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[21]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[11]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[16]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[8]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[4]>::type *args_18,
        unsigned __int64 *args_19,
        std::remove_reference<char const (&)[12]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[13]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[18]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[16]>::type *args_26,
        bool *args_27)
{
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  _DWORD *v34; // r13
  const char (*v35)[15]; // r15
  unsigned int *v36; // r14
  const char *v37; // rax
  __int64 result; // rax
  char *v39; // [rsp+0h] [rbp-1C0h]
  char (*v40)[10]; // [rsp+8h] [rbp-1B8h]
  unsigned int *v41; // [rsp+10h] [rbp-1B0h]
  unsigned int *v42; // [rsp+18h] [rbp-1A8h]
  const char (*v43)[9]; // [rsp+20h] [rbp-1A0h]
  unsigned int *v44; // [rsp+28h] [rbp-198h]
  const char (*v45)[16]; // [rsp+30h] [rbp-190h]
  unsigned int *v46; // [rsp+38h] [rbp-188h]
  const char (*v47)[21]; // [rsp+40h] [rbp-180h]
  unsigned int *v48; // [rsp+48h] [rbp-178h]
  const char (*v49)[11]; // [rsp+50h] [rbp-170h]
  unsigned int *v50; // [rsp+58h] [rbp-168h]
  const char (*v51)[16]; // [rsp+60h] [rbp-160h]
  unsigned int *v52; // [rsp+68h] [rbp-158h]
  const char (*v53)[8]; // [rsp+70h] [rbp-150h]
  unsigned int *v54; // [rsp+78h] [rbp-148h]
  const char (*v55)[4]; // [rsp+80h] [rbp-140h]
  unsigned __int64 *v56; // [rsp+88h] [rbp-138h]
  const char (*v57)[12]; // [rsp+90h] [rbp-130h]
  unsigned int *v58; // [rsp+98h] [rbp-128h]
  const char (*v59)[13]; // [rsp+A0h] [rbp-120h]
  unsigned int *v60; // [rsp+A8h] [rbp-118h]
  const char (*v61)[18]; // [rsp+B0h] [rbp-110h]
  unsigned int *v62; // [rsp+B8h] [rbp-108h]
  const char (*v63)[16]; // [rsp+C0h] [rbp-100h]
  bool *v64; // [rsp+C8h] [rbp-F8h]
  int32_t ret; // [rsp+10Ch] [rbp-B4h]
  unsigned int reta; // [rsp+10Ch] [rbp-B4h]
  char v71[17][10]; // [rsp+110h] [rbp-B0h] BYREF

  v32 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v33 = __asan_stack_malloc_1(128LL);
    if ( v33 )
      v32 = v33;
  }
  *(_QWORD *)v32 = 1102416563LL;
  *(_QWORD *)(v32 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v32 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v34 = (_DWORD *)(v32 >> 3);
  v34[536862720] = -235802127;
  v34[536862721] = -234753551;
  v34[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v64 = std::forward<bool &>(args_27);
  v63 = std::forward<char const(&)[16]>(args_26);
  v62 = std::forward<unsigned int &>(args_25);
  v61 = std::forward<char const(&)[18]>(args_24);
  v60 = std::forward<unsigned int &>(args_23);
  v59 = std::forward<char const(&)[13]>(args_22);
  v58 = std::forward<unsigned int &>(args_21);
  v57 = std::forward<char const(&)[12]>(args_20);
  v56 = std::forward<unsigned long &>(args_19);
  v55 = std::forward<char const(&)[4]>(args_18);
  v54 = std::forward<unsigned int &>(args_17);
  v53 = std::forward<char const(&)[8]>(args_16);
  v52 = std::forward<unsigned int &>(args_15);
  v51 = std::forward<char const(&)[16]>(args_14);
  v50 = std::forward<unsigned int &>(args_13);
  v49 = std::forward<char const(&)[11]>(args_12);
  v48 = std::forward<unsigned int &>(args_11);
  v47 = std::forward<char const(&)[21]>(args_10);
  v46 = std::forward<unsigned int &>(args_9);
  v45 = std::forward<char const(&)[16]>(args_8);
  v44 = std::forward<unsigned int &>(args_7);
  v43 = std::forward<char const(&)[9]>(args_6);
  v42 = std::forward<unsigned int &>(args_5);
  v35 = std::forward<char const(&)[15]>(args_4);
  v41 = std::forward<unsigned int &>(args_3);
  v40 = (char (*)[10])std::forward<char const(&)[10]>(args_2);
  v36 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v32 + 48);
  v37 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v32 + 64),
    v37,
    (const std::allocator<char> *)(v32 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v32 + 64),
           v36,
           v40,
           v41,
           v35,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v71,
           (unsigned int *)v40,
           (const char (*)[15])v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64) | ret;
  std::string::~string((void *)(v32 + 64));
  *(_DWORD *)(((v32 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v32 + 48);
  result = reta;
  if ( v39 == (char *)v32 )
  {
    *(_QWORD *)((v32 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v32 = 1172321806LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000F7E7DC6-000000000F7E8CEE
int32_t __cdecl ScriptUtil::getTableValue<std::vector<luabind::adl::object>>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::vector<luabind::adl::object> *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int32_t result; // eax
  char v23[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "24 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<std::vector<luabind::adl::object>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
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
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 320), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v4 + 320);
      std::string::~string((void *)(v4 + 320));
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v4 + 320);
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
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), "can't find:", name);
        if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 448, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 448), (std::string *)(v4 + 384), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 448);
        std::string::~string((void *)(v4 + 448));
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 384);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
      v17 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      v18 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v18 = 0;
      *(_BYTE *)(v18 + 2) = 0;
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
      if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 279) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 23) & 7) >= *(_BYTE *)(((v4 + 279) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 256, 24LL);
      }
      luabind::object_cast<std::vector<luabind::adl::object>,luabind::adl::index_proxy<luabind::adl::object>>(
        (std::vector<luabind::adl::object> *)(v4 + 256),
        (const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      std::vector<luabind::adl::object>::operator=(val, (std::vector<luabind::adl::object> *)(v4 + 256));
      std::vector<luabind::adl::object>::~vector((std::vector<luabind::adl::object> *const)(v4 + 256));
      v19 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v19 = -1800;
      *(_BYTE *)(v19 + 2) = -8;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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

// Line 74: range 000000000F7EB5E8-000000000F7EC510
int32_t __cdecl ScriptUtil::getTableValue<std::vector<unsigned int>>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::vector<unsigned int> *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int32_t result; // eax
  char v23[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "24 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<std::vector<unsigned int>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
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
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      std::operator+<char>((std::string *)(v4 + 320), "table is nil, can't find:", name);
      std::invalid_argument::invalid_argument(exception, v4 + 320);
      std::string::~string((void *)(v4 + 320));
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
      __asan_handle_no_return(v4 + 320);
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
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), "can't find:", name);
        if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 448, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 448), (std::string *)(v4 + 384), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 448);
        std::string::~string((void *)(v4 + 448));
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 384);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
      v17 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      v18 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v18 = 0;
      *(_BYTE *)(v18 + 2) = 0;
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
      if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 279) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 23) & 7) >= *(_BYTE *)(((v4 + 279) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 256, 24LL);
      }
      luabind::object_cast<std::vector<unsigned int>,luabind::adl::index_proxy<luabind::adl::object>>(
        (std::vector<unsigned int> *)(v4 + 256),
        (const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      std::vector<unsigned int>::operator=(val, (std::vector<unsigned int> *)(v4 + 256));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 256));
      v19 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v19 = -1800;
      *(_BYTE *)(v19 + 2) = -8;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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

// Line 75: range 000000000F7E98BA-000000000F7E9B6F
__int64 __fastcall ScriptUtil::getTableValue<Vector2,char const(&)[5],Vector2&,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &,char const(&)[14],Vector2&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector2 *val,
        std::remove_reference<char const (&)[5]>::type *a5,
        Vector2 *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        Vector3 *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        Vector3 *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        Vector2 *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  Vector3 *v15; // r15
  const char (*v16)[9]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  Vector2 *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[9]; // [rsp+10h] [rbp-110h]
  Vector3 *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[14]; // [rsp+20h] [rbp-100h]
  Vector2 *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[19][9]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<Vector2,char const(&)[5],Vector2&,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &,char const(&)[14],Vector2&>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v24 = std::forward<Vector2 &>(args_7);
  v23 = std::forward<char const(&)[14]>(args_6);
  v15 = std::forward<Vector3 &>(args_5);
  v16 = std::forward<char const(&)[9]>(args_4);
  v22 = std::forward<Vector3 &>(args_3);
  v21 = std::forward<char const(&)[9]>(args_2);
  v20 = std::forward<Vector2 &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<Vector2,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &,char const(&)[14],Vector2&>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           (Vector3 *)v20,
           v21,
           v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F845758-000000000F8459DB
__int64 __fastcall ScriptUtil::getTableValue<Vector2,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &,char const(&)[14],Vector2&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector2 *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        Vector3 *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        Vector3 *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        Vector2 *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  Vector2 *v13; // r15
  const char (*v14)[14]; // r14
  const char *v15; // rax
  __int64 result; // rax
  char *v17; // [rsp+0h] [rbp-110h]
  Vector3 *v18; // [rsp+8h] [rbp-108h]
  const char (*v19)[9]; // [rsp+10h] [rbp-100h]
  Vector3 *v20; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v27[19][9]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<Vector2,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &,char const(&)[14],Vector2&>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v13 = std::forward<Vector2 &>(args_5);
  v14 = std::forward<char const(&)[14]>(args_4);
  v20 = std::forward<Vector3 &>(args_3);
  v19 = std::forward<char const(&)[9]>(args_2);
  v18 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<Vector3,char const(&)[9],Vector3&,char const(&)[14],Vector2 &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v18,
           v19,
           v20,
           v14,
           v13,
           v27,
           v18,
           (const char (*)[14])v19,
           (Vector2 *)v20) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v17 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F915E62-000000000F916081
__int64 __fastcall ScriptUtil::getTableValue<Vector3,char const(&)[14],Vector2 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector3 *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        Vector2 *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  Vector2 *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<Vector3,char const(&)[14],Vector2 &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v9 = std::forward<Vector2 &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F7E9B70-000000000F7E9D8F
__int64 __fastcall ScriptUtil::getTableValue<Vector3,char const(&)[4],Vector3&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector3 *val,
        std::remove_reference<char const (&)[4]>::type *a5,
        Vector3 *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  Vector3 *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<Vector3,char const(&)[4],Vector3&>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v9 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[4]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F8AE128-000000000F8AE378
__int64 __fastcall ScriptUtil::getTableValue<Vector3,char const(&)[9],Vector3&,char const(&)[14],Vector2 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector3 *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        Vector3 *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        Vector2 *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[14]>::type *v11; // r15
  Vector3 *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  Vector2 *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<Vector3,char const(&)[9],Vector3&,char const(&)[14],Vector2 &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v15 = std::forward<Vector2 &>(args_3);
  v11 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_2);
  v12 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<Vector3,char const(&)[14],Vector2 &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F8460D2-000000000F8462F1
__int64 __fastcall ScriptUtil::getTableValue<Vector3,char const(&)[9],Vector3&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        Vector3 *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        Vector3 *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  Vector3 *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<Vector3,char const(&)[9],Vector3&>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v9 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F9B77C2-000000000F9B7EC4
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[11]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[12]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[18]>::type *args_4,
        data::PlatformRotType *args_5,
        std::remove_reference<char const (&)[6]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[19]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[14]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[10]>::type *args_14,
        proto::GadgetBornType *args_15,
        std::remove_reference<char const (&)[9]>::type *args_16,
        std::string *args_17,
        std::remove_reference<char const (&)[5]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[12]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[15]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[21]>::type *args_24,
        bool *args_25,
        std::remove_reference<char const (&)[10]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[19]>::type *args_28,
        bool *args_29,
        std::remove_reference<char const (&)[17]>::type *args_30,
        bool *args_31,
        std::remove_reference<char const (&)[20]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[21]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[8]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[9]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[11]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[11]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[14]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[14]>::type *args_46,
        bool *args_47)
{
  unsigned __int64 v52; // rbx
  __int64 v53; // rax
  _DWORD *v54; // r13
  const char (*v55)[18]; // r15
  unsigned int v56; // r14d
  const char *v57; // rax
  __int64 result; // rax
  unsigned int v59; // [rsp+8h] [rbp-258h]
  unsigned int v60; // [rsp+10h] [rbp-250h]
  data::PlatformRotType *v61; // [rsp+18h] [rbp-248h]
  const char (*v62)[6]; // [rsp+20h] [rbp-240h]
  unsigned int *v63; // [rsp+28h] [rbp-238h]
  const char (*v64)[9]; // [rsp+30h] [rbp-230h]
  unsigned int *v65; // [rsp+38h] [rbp-228h]
  const char (*v66)[19]; // [rsp+40h] [rbp-220h]
  bool *v67; // [rsp+48h] [rbp-218h]
  const char (*v68)[14]; // [rsp+50h] [rbp-210h]
  unsigned int *v69; // [rsp+58h] [rbp-208h]
  const char (*v70)[10]; // [rsp+60h] [rbp-200h]
  proto::GadgetBornType *v71; // [rsp+68h] [rbp-1F8h]
  const char (*v72)[9]; // [rsp+70h] [rbp-1F0h]
  std::string *v73; // [rsp+78h] [rbp-1E8h]
  const char (*v74)[5]; // [rsp+80h] [rbp-1E0h]
  unsigned int *v75; // [rsp+88h] [rbp-1D8h]
  const char (*v76)[12]; // [rsp+90h] [rbp-1D0h]
  unsigned int *v77; // [rsp+98h] [rbp-1C8h]
  const char (*v78)[15]; // [rsp+A0h] [rbp-1C0h]
  unsigned int *v79; // [rsp+A8h] [rbp-1B8h]
  const char (*v80)[21]; // [rsp+B0h] [rbp-1B0h]
  bool *v81; // [rsp+B8h] [rbp-1A8h]
  const char (*v82)[10]; // [rsp+C0h] [rbp-1A0h]
  unsigned int *v83; // [rsp+C8h] [rbp-198h]
  const char (*v84)[19]; // [rsp+D0h] [rbp-190h]
  bool *v85; // [rsp+D8h] [rbp-188h]
  const char (*v86)[17]; // [rsp+E0h] [rbp-180h]
  bool *v87; // [rsp+E8h] [rbp-178h]
  const char (*v88)[20]; // [rsp+F0h] [rbp-170h]
  unsigned int *v89; // [rsp+F8h] [rbp-168h]
  const char (*v90)[21]; // [rsp+100h] [rbp-160h]
  unsigned int *v91; // [rsp+108h] [rbp-158h]
  const char (*v92)[8]; // [rsp+110h] [rbp-150h]
  unsigned int *v93; // [rsp+118h] [rbp-148h]
  const char (*v94)[9]; // [rsp+120h] [rbp-140h]
  unsigned int *v95; // [rsp+128h] [rbp-138h]
  const char (*v96)[11]; // [rsp+130h] [rbp-130h]
  unsigned int *v97; // [rsp+138h] [rbp-128h]
  const char (*v98)[11]; // [rsp+140h] [rbp-120h]
  unsigned int *v99; // [rsp+148h] [rbp-118h]
  const char (*v100)[14]; // [rsp+150h] [rbp-110h]
  unsigned int *v101; // [rsp+158h] [rbp-108h]
  const char (*v102)[14]; // [rsp+160h] [rbp-100h]
  bool *v103; // [rsp+168h] [rbp-F8h]
  int32_t ret; // [rsp+1ACh] [rbp-B4h]
  unsigned int reta; // [rsp+1ACh] [rbp-B4h]
  char v110[176]; // [rsp+1B0h] [rbp-B0h] BYREF

  v52 = (unsigned __int64)v110;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v53 = __asan_stack_malloc_1(128LL);
    if ( v53 )
      v52 = v53;
  }
  *(_QWORD *)v52 = 1102416563LL;
  *(_QWORD *)(v52 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v52 + 16) = ScriptUtil::getTableValue<bool,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v54 = (_DWORD *)(v52 >> 3);
  v54[536862720] = -235802127;
  v54[536862721] = -234753551;
  v54[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v103 = std::forward<bool &>(args_47);
  v102 = std::forward<char const(&)[14]>(args_46);
  v101 = std::forward<unsigned int &>(args_45);
  v100 = std::forward<char const(&)[14]>(args_44);
  v99 = std::forward<unsigned int &>(args_43);
  v98 = std::forward<char const(&)[11]>(args_42);
  v97 = std::forward<unsigned int &>(args_41);
  v96 = std::forward<char const(&)[11]>(args_40);
  v95 = std::forward<unsigned int &>(args_39);
  v94 = std::forward<char const(&)[9]>(args_38);
  v93 = std::forward<unsigned int &>(args_37);
  v92 = std::forward<char const(&)[8]>(args_36);
  v91 = std::forward<unsigned int &>(args_35);
  v90 = std::forward<char const(&)[21]>(args_34);
  v89 = std::forward<unsigned int &>(args_33);
  v88 = std::forward<char const(&)[20]>(args_32);
  v87 = std::forward<bool &>(args_31);
  v86 = std::forward<char const(&)[17]>(args_30);
  v85 = std::forward<bool &>(args_29);
  v84 = std::forward<char const(&)[19]>(args_28);
  v83 = std::forward<unsigned int &>(args_27);
  v82 = std::forward<char const(&)[10]>(args_26);
  v81 = std::forward<bool &>(args_25);
  v80 = std::forward<char const(&)[21]>(args_24);
  v79 = std::forward<unsigned int &>(args_23);
  v78 = std::forward<char const(&)[15]>(args_22);
  v77 = std::forward<unsigned int &>(args_21);
  v76 = std::forward<char const(&)[12]>(args_20);
  v75 = std::forward<unsigned int &>(args_19);
  v74 = std::forward<char const(&)[5]>(args_18);
  v73 = std::forward<std::string &>(args_17);
  v72 = std::forward<char const(&)[9]>(args_16);
  v71 = std::forward<proto::GadgetBornType &>(args_15);
  v70 = std::forward<char const(&)[10]>(args_14);
  v69 = std::forward<unsigned int &>(args_13);
  v68 = std::forward<char const(&)[14]>(args_12);
  v67 = std::forward<bool &>(args_11);
  v66 = std::forward<char const(&)[19]>(args_10);
  v65 = std::forward<unsigned int &>(args_9);
  v64 = std::forward<char const(&)[9]>(args_8);
  v63 = std::forward<unsigned int &>(args_7);
  v62 = std::forward<char const(&)[6]>(args_6);
  v61 = std::forward<data::PlatformRotType &>(args_5);
  v55 = std::forward<char const(&)[18]>(args_4);
  v60 = (unsigned int)std::forward<bool &>(args_3);
  v59 = (unsigned int)std::forward<char const(&)[12]>(args_2);
  v56 = (unsigned int)std::forward<bool &>(a6);
  std::allocator<char>::allocator(v52 + 48);
  v57 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v52 + 64),
    v57,
    (const std::allocator<char> *)(v52 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v52 + 64,
           v56,
           v59,
           v60,
           v55,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103) | ret;
  std::string::~string((void *)(v52 + 64));
  *(_DWORD *)(((v52 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v52 + 48);
  result = reta;
  if ( v110 == (char *)v52 )
  {
    *(_QWORD *)((v52 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v52 = 1172321806LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9D3048-000000000F9D3712
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[12]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[18]>::type *args_2,
        data::PlatformRotType *args_3,
        std::remove_reference<char const (&)[6]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[19]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[14]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[10]>::type *args_12,
        proto::GadgetBornType *args_13,
        std::remove_reference<char const (&)[9]>::type *args_14,
        std::string *args_15,
        std::remove_reference<char const (&)[5]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[12]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[15]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[21]>::type *args_22,
        bool *args_23,
        std::remove_reference<char const (&)[10]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[19]>::type *args_26,
        bool *args_27,
        std::remove_reference<char const (&)[17]>::type *args_28,
        bool *args_29,
        std::remove_reference<char const (&)[20]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[21]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[8]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[9]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[11]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[11]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[14]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[14]>::type *args_44,
        bool *args_45)
{
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  _DWORD *v52; // r13
  const char (*v53)[6]; // r15
  unsigned int v54; // r14d
  const char *v55; // rax
  __int64 result; // rax
  unsigned int v57; // [rsp+8h] [rbp-248h]
  unsigned int v58; // [rsp+10h] [rbp-240h]
  unsigned int *v59; // [rsp+18h] [rbp-238h]
  const char (*v60)[9]; // [rsp+20h] [rbp-230h]
  unsigned int *v61; // [rsp+28h] [rbp-228h]
  const char (*v62)[19]; // [rsp+30h] [rbp-220h]
  bool *v63; // [rsp+38h] [rbp-218h]
  const char (*v64)[14]; // [rsp+40h] [rbp-210h]
  unsigned int *v65; // [rsp+48h] [rbp-208h]
  const char (*v66)[10]; // [rsp+50h] [rbp-200h]
  proto::GadgetBornType *v67; // [rsp+58h] [rbp-1F8h]
  const char (*v68)[9]; // [rsp+60h] [rbp-1F0h]
  std::string *v69; // [rsp+68h] [rbp-1E8h]
  const char (*v70)[5]; // [rsp+70h] [rbp-1E0h]
  unsigned int *v71; // [rsp+78h] [rbp-1D8h]
  const char (*v72)[12]; // [rsp+80h] [rbp-1D0h]
  unsigned int *v73; // [rsp+88h] [rbp-1C8h]
  const char (*v74)[15]; // [rsp+90h] [rbp-1C0h]
  unsigned int *v75; // [rsp+98h] [rbp-1B8h]
  const char (*v76)[21]; // [rsp+A0h] [rbp-1B0h]
  bool *v77; // [rsp+A8h] [rbp-1A8h]
  const char (*v78)[10]; // [rsp+B0h] [rbp-1A0h]
  unsigned int *v79; // [rsp+B8h] [rbp-198h]
  const char (*v80)[19]; // [rsp+C0h] [rbp-190h]
  bool *v81; // [rsp+C8h] [rbp-188h]
  const char (*v82)[17]; // [rsp+D0h] [rbp-180h]
  bool *v83; // [rsp+D8h] [rbp-178h]
  const char (*v84)[20]; // [rsp+E0h] [rbp-170h]
  unsigned int *v85; // [rsp+E8h] [rbp-168h]
  const char (*v86)[21]; // [rsp+F0h] [rbp-160h]
  unsigned int *v87; // [rsp+F8h] [rbp-158h]
  const char (*v88)[8]; // [rsp+100h] [rbp-150h]
  unsigned int *v89; // [rsp+108h] [rbp-148h]
  const char (*v90)[9]; // [rsp+110h] [rbp-140h]
  unsigned int *v91; // [rsp+118h] [rbp-138h]
  const char (*v92)[11]; // [rsp+120h] [rbp-130h]
  unsigned int *v93; // [rsp+128h] [rbp-128h]
  const char (*v94)[11]; // [rsp+130h] [rbp-120h]
  unsigned int *v95; // [rsp+138h] [rbp-118h]
  const char (*v96)[14]; // [rsp+140h] [rbp-110h]
  unsigned int *v97; // [rsp+148h] [rbp-108h]
  const char (*v98)[14]; // [rsp+150h] [rbp-100h]
  bool *v99; // [rsp+158h] [rbp-F8h]
  int32_t ret; // [rsp+19Ch] [rbp-B4h]
  unsigned int reta; // [rsp+19Ch] [rbp-B4h]
  char v106[176]; // [rsp+1A0h] [rbp-B0h] BYREF

  v50 = (unsigned __int64)v106;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v51 = __asan_stack_malloc_1(128LL);
    if ( v51 )
      v50 = v51;
  }
  *(_QWORD *)v50 = 1102416563LL;
  *(_QWORD *)(v50 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v50 + 16) = ScriptUtil::getTableValue<bool,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v52 = (_DWORD *)(v50 >> 3);
  v52[536862720] = -235802127;
  v52[536862721] = -234753551;
  v52[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v99 = std::forward<bool &>(args_45);
  v98 = std::forward<char const(&)[14]>(args_44);
  v97 = std::forward<unsigned int &>(args_43);
  v96 = std::forward<char const(&)[14]>(args_42);
  v95 = std::forward<unsigned int &>(args_41);
  v94 = std::forward<char const(&)[11]>(args_40);
  v93 = std::forward<unsigned int &>(args_39);
  v92 = std::forward<char const(&)[11]>(args_38);
  v91 = std::forward<unsigned int &>(args_37);
  v90 = std::forward<char const(&)[9]>(args_36);
  v89 = std::forward<unsigned int &>(args_35);
  v88 = std::forward<char const(&)[8]>(args_34);
  v87 = std::forward<unsigned int &>(args_33);
  v86 = std::forward<char const(&)[21]>(args_32);
  v85 = std::forward<unsigned int &>(args_31);
  v84 = std::forward<char const(&)[20]>(args_30);
  v83 = std::forward<bool &>(args_29);
  v82 = std::forward<char const(&)[17]>(args_28);
  v81 = std::forward<bool &>(args_27);
  v80 = std::forward<char const(&)[19]>(args_26);
  v79 = std::forward<unsigned int &>(args_25);
  v78 = std::forward<char const(&)[10]>(args_24);
  v77 = std::forward<bool &>(args_23);
  v76 = std::forward<char const(&)[21]>(args_22);
  v75 = std::forward<unsigned int &>(args_21);
  v74 = std::forward<char const(&)[15]>(args_20);
  v73 = std::forward<unsigned int &>(args_19);
  v72 = std::forward<char const(&)[12]>(args_18);
  v71 = std::forward<unsigned int &>(args_17);
  v70 = std::forward<char const(&)[5]>(args_16);
  v69 = std::forward<std::string &>(args_15);
  v68 = std::forward<char const(&)[9]>(args_14);
  v67 = std::forward<proto::GadgetBornType &>(args_13);
  v66 = std::forward<char const(&)[10]>(args_12);
  v65 = std::forward<unsigned int &>(args_11);
  v64 = std::forward<char const(&)[14]>(args_10);
  v63 = std::forward<bool &>(args_9);
  v62 = std::forward<char const(&)[19]>(args_8);
  v61 = std::forward<unsigned int &>(args_7);
  v60 = std::forward<char const(&)[9]>(args_6);
  v59 = std::forward<unsigned int &>(args_5);
  v53 = std::forward<char const(&)[6]>(args_4);
  v58 = (unsigned int)std::forward<data::PlatformRotType &>(args_3);
  v57 = (unsigned int)std::forward<char const(&)[18]>(args_2);
  v54 = (unsigned int)std::forward<bool &>(a6);
  std::allocator<char>::allocator(v50 + 48);
  v55 = (const char *)std::forward<char const(&)[12]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v50 + 64),
    v55,
    (const std::allocator<char> *)(v50 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v50 + 64,
           v54,
           v57,
           v58,
           v53,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99) | ret;
  std::string::~string((void *)(v50 + 64));
  *(_DWORD *)(((v50 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v50 + 48);
  result = reta;
  if ( v106 == (char *)v50 )
  {
    *(_QWORD *)((v50 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v50 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v50 = 1172321806LL;
    *(_QWORD *)((v50 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v50 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0BD4C-000000000FA0BF6B
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        bool *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  bool *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<bool,char const(&)[14],bool &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v9 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<bool>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F9137E4-000000000F913BD3
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        proto::GroupLoadStrategy *a6,
        std::remove_reference<char const (&)[29]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[21]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[20]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[23]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[25]>::type *args_10,
        std::vector<std::string> *args_11,
        std::remove_reference<char const (&)[12]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[30]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[41]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[23]>::type *args_18,
        bool *args_19)
{
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  _DWORD *v26; // r13
  const char (*v27)[29]; // r15
  proto::GroupLoadStrategy *v28; // r14
  const char *v29; // rax
  __int64 result; // rax
  char *v31; // [rsp+0h] [rbp-180h]
  bool *v32; // [rsp+8h] [rbp-178h]
  const char (*v33)[21]; // [rsp+10h] [rbp-170h]
  bool *v34; // [rsp+18h] [rbp-168h]
  const char (*v35)[20]; // [rsp+20h] [rbp-160h]
  bool *v36; // [rsp+28h] [rbp-158h]
  const char (*v37)[23]; // [rsp+30h] [rbp-150h]
  bool *v38; // [rsp+38h] [rbp-148h]
  const char (*v39)[25]; // [rsp+40h] [rbp-140h]
  std::vector<std::string> *v40; // [rsp+48h] [rbp-138h]
  const char (*v41)[12]; // [rsp+50h] [rbp-130h]
  unsigned int *v42; // [rsp+58h] [rbp-128h]
  const char (*v43)[30]; // [rsp+60h] [rbp-120h]
  unsigned int *v44; // [rsp+68h] [rbp-118h]
  const char (*v45)[41]; // [rsp+70h] [rbp-110h]
  unsigned int *v46; // [rsp+78h] [rbp-108h]
  const char (*v47)[23]; // [rsp+80h] [rbp-100h]
  bool *v48; // [rsp+88h] [rbp-F8h]
  int32_t ret; // [rsp+CCh] [rbp-B4h]
  unsigned int reta; // [rsp+CCh] [rbp-B4h]
  char v55[6][29]; // [rsp+D0h] [rbp-B0h] BYREF

  v24 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_1(128LL);
    if ( v25 )
      v24 = v25;
  }
  *(_QWORD *)v24 = 1102416563LL;
  *(_QWORD *)(v24 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v24 + 16) = ScriptUtil::getTableValue<bool,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v26 = (_DWORD *)(v24 >> 3);
  v26[536862720] = -235802127;
  v26[536862721] = -234753551;
  v26[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v48 = std::forward<bool &>(args_19);
  v47 = std::forward<char const(&)[23]>(args_18);
  v46 = std::forward<unsigned int &>(args_17);
  v45 = std::forward<char const(&)[41]>(args_16);
  v44 = std::forward<unsigned int &>(args_15);
  v43 = std::forward<char const(&)[30]>(args_14);
  v42 = std::forward<unsigned int &>(args_13);
  v41 = std::forward<char const(&)[12]>(args_12);
  v40 = std::forward<std::vector<std::string> &>(args_11);
  v39 = std::forward<char const(&)[25]>(args_10);
  v38 = std::forward<bool &>(args_9);
  v37 = std::forward<char const(&)[23]>(args_8);
  v36 = std::forward<bool &>(args_7);
  v35 = std::forward<char const(&)[20]>(args_6);
  v34 = std::forward<bool &>(args_5);
  v33 = std::forward<char const(&)[21]>(args_4);
  v32 = std::forward<bool &>(args_3);
  v27 = std::forward<char const(&)[29]>(args_2);
  v28 = std::forward<proto::GroupLoadStrategy &>(a6);
  std::allocator<char>::allocator(v24 + 48);
  v29 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v24 + 64),
    v29,
    (const std::allocator<char> *)(v24 + 48));
  reta = ScriptUtil::getTableValue<proto::GroupLoadStrategy,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v24 + 64),
           v28,
           v27,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v55,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48) | ret;
  std::string::~string((void *)(v24 + 64));
  *(_DWORD *)(((v24 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v24 + 48);
  result = reta;
  if ( v31 == (char *)v24 )
  {
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v24 = 1172321806LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA03F4E-000000000FA04500
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[14]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        proto::GadgetBornType *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        std::string *args_5,
        std::remove_reference<char const (&)[5]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[12]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[15]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[21]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[10]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[19]>::type *args_16,
        bool *args_17,
        std::remove_reference<char const (&)[17]>::type *args_18,
        bool *args_19,
        std::remove_reference<char const (&)[20]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[21]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[8]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[9]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[11]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[11]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[14]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[14]>::type *args_34,
        bool *args_35)
{
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  _DWORD *v42; // r13
  const char (*v43)[9]; // r15
  unsigned int v44; // r14d
  const char *v45; // rax
  __int64 result; // rax
  unsigned int v47; // [rsp+8h] [rbp-1F8h]
  unsigned int v48; // [rsp+10h] [rbp-1F0h]
  std::string *v49; // [rsp+18h] [rbp-1E8h]
  const char (*v50)[5]; // [rsp+20h] [rbp-1E0h]
  unsigned int *v51; // [rsp+28h] [rbp-1D8h]
  const char (*v52)[12]; // [rsp+30h] [rbp-1D0h]
  unsigned int *v53; // [rsp+38h] [rbp-1C8h]
  const char (*v54)[15]; // [rsp+40h] [rbp-1C0h]
  unsigned int *v55; // [rsp+48h] [rbp-1B8h]
  const char (*v56)[21]; // [rsp+50h] [rbp-1B0h]
  bool *v57; // [rsp+58h] [rbp-1A8h]
  const char (*v58)[10]; // [rsp+60h] [rbp-1A0h]
  unsigned int *v59; // [rsp+68h] [rbp-198h]
  const char (*v60)[19]; // [rsp+70h] [rbp-190h]
  bool *v61; // [rsp+78h] [rbp-188h]
  const char (*v62)[17]; // [rsp+80h] [rbp-180h]
  bool *v63; // [rsp+88h] [rbp-178h]
  const char (*v64)[20]; // [rsp+90h] [rbp-170h]
  unsigned int *v65; // [rsp+98h] [rbp-168h]
  const char (*v66)[21]; // [rsp+A0h] [rbp-160h]
  unsigned int *v67; // [rsp+A8h] [rbp-158h]
  const char (*v68)[8]; // [rsp+B0h] [rbp-150h]
  unsigned int *v69; // [rsp+B8h] [rbp-148h]
  const char (*v70)[9]; // [rsp+C0h] [rbp-140h]
  unsigned int *v71; // [rsp+C8h] [rbp-138h]
  const char (*v72)[11]; // [rsp+D0h] [rbp-130h]
  unsigned int *v73; // [rsp+D8h] [rbp-128h]
  const char (*v74)[11]; // [rsp+E0h] [rbp-120h]
  unsigned int *v75; // [rsp+E8h] [rbp-118h]
  const char (*v76)[14]; // [rsp+F0h] [rbp-110h]
  unsigned int *v77; // [rsp+F8h] [rbp-108h]
  const char (*v78)[14]; // [rsp+100h] [rbp-100h]
  bool *v79; // [rsp+108h] [rbp-F8h]
  int32_t ret; // [rsp+14Ch] [rbp-B4h]
  unsigned int reta; // [rsp+14Ch] [rbp-B4h]
  char v86[176]; // [rsp+150h] [rbp-B0h] BYREF

  v40 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v41 = __asan_stack_malloc_1(128LL);
    if ( v41 )
      v40 = v41;
  }
  *(_QWORD *)v40 = 1102416563LL;
  *(_QWORD *)(v40 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v40 + 16) = ScriptUtil::getTableValue<bool,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v42 = (_DWORD *)(v40 >> 3);
  v42[536862720] = -235802127;
  v42[536862721] = -234753551;
  v42[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v79 = std::forward<bool &>(args_35);
  v78 = std::forward<char const(&)[14]>(args_34);
  v77 = std::forward<unsigned int &>(args_33);
  v76 = std::forward<char const(&)[14]>(args_32);
  v75 = std::forward<unsigned int &>(args_31);
  v74 = std::forward<char const(&)[11]>(args_30);
  v73 = std::forward<unsigned int &>(args_29);
  v72 = std::forward<char const(&)[11]>(args_28);
  v71 = std::forward<unsigned int &>(args_27);
  v70 = std::forward<char const(&)[9]>(args_26);
  v69 = std::forward<unsigned int &>(args_25);
  v68 = std::forward<char const(&)[8]>(args_24);
  v67 = std::forward<unsigned int &>(args_23);
  v66 = std::forward<char const(&)[21]>(args_22);
  v65 = std::forward<unsigned int &>(args_21);
  v64 = std::forward<char const(&)[20]>(args_20);
  v63 = std::forward<bool &>(args_19);
  v62 = std::forward<char const(&)[17]>(args_18);
  v61 = std::forward<bool &>(args_17);
  v60 = std::forward<char const(&)[19]>(args_16);
  v59 = std::forward<unsigned int &>(args_15);
  v58 = std::forward<char const(&)[10]>(args_14);
  v57 = std::forward<bool &>(args_13);
  v56 = std::forward<char const(&)[21]>(args_12);
  v55 = std::forward<unsigned int &>(args_11);
  v54 = std::forward<char const(&)[15]>(args_10);
  v53 = std::forward<unsigned int &>(args_9);
  v52 = std::forward<char const(&)[12]>(args_8);
  v51 = std::forward<unsigned int &>(args_7);
  v50 = std::forward<char const(&)[5]>(args_6);
  v49 = std::forward<std::string &>(args_5);
  v43 = std::forward<char const(&)[9]>(args_4);
  v48 = (unsigned int)std::forward<proto::GadgetBornType &>(args_3);
  v47 = (unsigned int)std::forward<char const(&)[10]>(args_2);
  v44 = (unsigned int)std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v40 + 48);
  v45 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v40 + 64),
    v45,
    (const std::allocator<char> *)(v40 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v40 + 64,
           v44,
           v47,
           v48,
           v43,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79) | ret;
  std::string::~string((void *)(v40 + 64));
  *(_DWORD *)(((v40 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v40 + 48);
  result = reta;
  if ( v86 == (char *)v40 )
  {
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v40 = 1172321806LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0D94E-000000000FA0DD05
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[17]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[20]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[21]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[8]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[11]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[11]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[14]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[14]>::type *args_16,
        bool *args_17)
{
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // r13
  const char (*v25)[20]; // r15
  bool *v26; // r14
  const char *v27; // rax
  __int64 result; // rax
  char *v29; // [rsp+0h] [rbp-170h]
  unsigned int *v30; // [rsp+8h] [rbp-168h]
  const char (*v31)[21]; // [rsp+10h] [rbp-160h]
  unsigned int *v32; // [rsp+18h] [rbp-158h]
  const char (*v33)[8]; // [rsp+20h] [rbp-150h]
  unsigned int *v34; // [rsp+28h] [rbp-148h]
  const char (*v35)[9]; // [rsp+30h] [rbp-140h]
  unsigned int *v36; // [rsp+38h] [rbp-138h]
  const char (*v37)[11]; // [rsp+40h] [rbp-130h]
  unsigned int *v38; // [rsp+48h] [rbp-128h]
  const char (*v39)[11]; // [rsp+50h] [rbp-120h]
  unsigned int *v40; // [rsp+58h] [rbp-118h]
  const char (*v41)[14]; // [rsp+60h] [rbp-110h]
  unsigned int *v42; // [rsp+68h] [rbp-108h]
  const char (*v43)[14]; // [rsp+70h] [rbp-100h]
  bool *v44; // [rsp+78h] [rbp-F8h]
  int32_t ret; // [rsp+BCh] [rbp-B4h]
  unsigned int reta; // [rsp+BCh] [rbp-B4h]
  char v51[8][20]; // [rsp+C0h] [rbp-B0h] BYREF

  v22 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_1(128LL);
    if ( v23 )
      v22 = v23;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v22 + 16) = ScriptUtil::getTableValue<bool,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v24 = (_DWORD *)(v22 >> 3);
  v24[536862720] = -235802127;
  v24[536862721] = -234753551;
  v24[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v44 = std::forward<bool &>(args_17);
  v43 = std::forward<char const(&)[14]>(args_16);
  v42 = std::forward<unsigned int &>(args_15);
  v41 = std::forward<char const(&)[14]>(args_14);
  v40 = std::forward<unsigned int &>(args_13);
  v39 = std::forward<char const(&)[11]>(args_12);
  v38 = std::forward<unsigned int &>(args_11);
  v37 = std::forward<char const(&)[11]>(args_10);
  v36 = std::forward<unsigned int &>(args_9);
  v35 = std::forward<char const(&)[9]>(args_8);
  v34 = std::forward<unsigned int &>(args_7);
  v33 = std::forward<char const(&)[8]>(args_6);
  v32 = std::forward<unsigned int &>(args_5);
  v31 = std::forward<char const(&)[21]>(args_4);
  v30 = std::forward<unsigned int &>(args_3);
  v25 = std::forward<char const(&)[20]>(args_2);
  v26 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v22 + 48);
  v27 = (const char *)std::forward<char const(&)[17]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v22 + 64),
    v27,
    (const std::allocator<char> *)(v22 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v22 + 64),
           v26,
           v25,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v51,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44) | ret;
  std::string::~string((void *)(v22 + 64));
  *(_DWORD *)(((v22 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v22 + 48);
  result = reta;
  if ( v29 == (char *)v22 )
  {
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v22 = 1172321806LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9E6354-000000000F9E69E6
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[18]>::type *a5,
        std::remove_reference<data::PlatformRotType&>::type *a6,
        std::remove_reference<char const (&)[6]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[19]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[14]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[10]>::type *args_10,
        proto::GadgetBornType *args_11,
        std::remove_reference<char const (&)[9]>::type *args_12,
        std::string *args_13,
        std::remove_reference<char const (&)[5]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[12]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[15]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[21]>::type *args_20,
        bool *args_21,
        std::remove_reference<char const (&)[10]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[19]>::type *args_24,
        bool *args_25,
        std::remove_reference<char const (&)[17]>::type *args_26,
        bool *args_27,
        std::remove_reference<char const (&)[20]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[21]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[8]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[9]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[11]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[11]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[14]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[14]>::type *args_42,
        bool *args_43)
{
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  _DWORD *v50; // r13
  const char (*v51)[9]; // r15
  unsigned int v52; // r14d
  const char *v53; // rax
  __int64 result; // rax
  unsigned int v55; // [rsp+8h] [rbp-238h]
  unsigned int v56; // [rsp+10h] [rbp-230h]
  unsigned int *v57; // [rsp+18h] [rbp-228h]
  const char (*v58)[19]; // [rsp+20h] [rbp-220h]
  bool *v59; // [rsp+28h] [rbp-218h]
  const char (*v60)[14]; // [rsp+30h] [rbp-210h]
  unsigned int *v61; // [rsp+38h] [rbp-208h]
  const char (*v62)[10]; // [rsp+40h] [rbp-200h]
  proto::GadgetBornType *v63; // [rsp+48h] [rbp-1F8h]
  const char (*v64)[9]; // [rsp+50h] [rbp-1F0h]
  std::string *v65; // [rsp+58h] [rbp-1E8h]
  const char (*v66)[5]; // [rsp+60h] [rbp-1E0h]
  unsigned int *v67; // [rsp+68h] [rbp-1D8h]
  const char (*v68)[12]; // [rsp+70h] [rbp-1D0h]
  unsigned int *v69; // [rsp+78h] [rbp-1C8h]
  const char (*v70)[15]; // [rsp+80h] [rbp-1C0h]
  unsigned int *v71; // [rsp+88h] [rbp-1B8h]
  const char (*v72)[21]; // [rsp+90h] [rbp-1B0h]
  bool *v73; // [rsp+98h] [rbp-1A8h]
  const char (*v74)[10]; // [rsp+A0h] [rbp-1A0h]
  unsigned int *v75; // [rsp+A8h] [rbp-198h]
  const char (*v76)[19]; // [rsp+B0h] [rbp-190h]
  bool *v77; // [rsp+B8h] [rbp-188h]
  const char (*v78)[17]; // [rsp+C0h] [rbp-180h]
  bool *v79; // [rsp+C8h] [rbp-178h]
  const char (*v80)[20]; // [rsp+D0h] [rbp-170h]
  unsigned int *v81; // [rsp+D8h] [rbp-168h]
  const char (*v82)[21]; // [rsp+E0h] [rbp-160h]
  unsigned int *v83; // [rsp+E8h] [rbp-158h]
  const char (*v84)[8]; // [rsp+F0h] [rbp-150h]
  unsigned int *v85; // [rsp+F8h] [rbp-148h]
  const char (*v86)[9]; // [rsp+100h] [rbp-140h]
  unsigned int *v87; // [rsp+108h] [rbp-138h]
  const char (*v88)[11]; // [rsp+110h] [rbp-130h]
  unsigned int *v89; // [rsp+118h] [rbp-128h]
  const char (*v90)[11]; // [rsp+120h] [rbp-120h]
  unsigned int *v91; // [rsp+128h] [rbp-118h]
  const char (*v92)[14]; // [rsp+130h] [rbp-110h]
  unsigned int *v93; // [rsp+138h] [rbp-108h]
  const char (*v94)[14]; // [rsp+140h] [rbp-100h]
  bool *v95; // [rsp+148h] [rbp-F8h]
  int32_t ret; // [rsp+18Ch] [rbp-B4h]
  unsigned int reta; // [rsp+18Ch] [rbp-B4h]
  char v102[176]; // [rsp+190h] [rbp-B0h] BYREF

  v48 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v49 = __asan_stack_malloc_1(128LL);
    if ( v49 )
      v48 = v49;
  }
  *(_QWORD *)v48 = 1102416563LL;
  *(_QWORD *)(v48 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v48 + 16) = ScriptUtil::getTableValue<bool,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v50 = (_DWORD *)(v48 >> 3);
  v50[536862720] = -235802127;
  v50[536862721] = -234753551;
  v50[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v95 = std::forward<bool &>(args_43);
  v94 = std::forward<char const(&)[14]>(args_42);
  v93 = std::forward<unsigned int &>(args_41);
  v92 = std::forward<char const(&)[14]>(args_40);
  v91 = std::forward<unsigned int &>(args_39);
  v90 = std::forward<char const(&)[11]>(args_38);
  v89 = std::forward<unsigned int &>(args_37);
  v88 = std::forward<char const(&)[11]>(args_36);
  v87 = std::forward<unsigned int &>(args_35);
  v86 = std::forward<char const(&)[9]>(args_34);
  v85 = std::forward<unsigned int &>(args_33);
  v84 = std::forward<char const(&)[8]>(args_32);
  v83 = std::forward<unsigned int &>(args_31);
  v82 = std::forward<char const(&)[21]>(args_30);
  v81 = std::forward<unsigned int &>(args_29);
  v80 = std::forward<char const(&)[20]>(args_28);
  v79 = std::forward<bool &>(args_27);
  v78 = std::forward<char const(&)[17]>(args_26);
  v77 = std::forward<bool &>(args_25);
  v76 = std::forward<char const(&)[19]>(args_24);
  v75 = std::forward<unsigned int &>(args_23);
  v74 = std::forward<char const(&)[10]>(args_22);
  v73 = std::forward<bool &>(args_21);
  v72 = std::forward<char const(&)[21]>(args_20);
  v71 = std::forward<unsigned int &>(args_19);
  v70 = std::forward<char const(&)[15]>(args_18);
  v69 = std::forward<unsigned int &>(args_17);
  v68 = std::forward<char const(&)[12]>(args_16);
  v67 = std::forward<unsigned int &>(args_15);
  v66 = std::forward<char const(&)[5]>(args_14);
  v65 = std::forward<std::string &>(args_13);
  v64 = std::forward<char const(&)[9]>(args_12);
  v63 = std::forward<proto::GadgetBornType &>(args_11);
  v62 = std::forward<char const(&)[10]>(args_10);
  v61 = std::forward<unsigned int &>(args_9);
  v60 = std::forward<char const(&)[14]>(args_8);
  v59 = std::forward<bool &>(args_7);
  v58 = std::forward<char const(&)[19]>(args_6);
  v57 = std::forward<unsigned int &>(args_5);
  v51 = std::forward<char const(&)[9]>(args_4);
  v56 = (unsigned int)std::forward<unsigned int &>(args_3);
  v55 = (unsigned int)std::forward<char const(&)[6]>(args_2);
  v52 = (unsigned int)std::forward<data::PlatformRotType &>(a6);
  std::allocator<char>::allocator(v48 + 48);
  v53 = (const char *)std::forward<char const(&)[18]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v48 + 64),
    v53,
    (const std::allocator<char> *)(v48 + 48));
  reta = ScriptUtil::getTableValue<data::PlatformRotType,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v48 + 64,
           v52,
           v55,
           v56,
           v51,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95) | ret;
  std::string::~string((void *)(v48 + 64));
  *(_DWORD *)(((v48 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v48 + 48);
  result = reta;
  if ( v102 == (char *)v48 )
  {
    *(_QWORD *)((v48 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v48 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v48 = 1172321806LL;
    *(_QWORD *)((v48 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v48 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9B8A3A-000000000F9B8D87
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[20]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[23]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[25]>::type *args_4,
        std::vector<std::string> *args_5,
        std::remove_reference<char const (&)[12]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[30]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[41]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[23]>::type *args_12,
        bool *args_13)
{
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  _DWORD *v20; // r13
  bool *v21; // r15
  bool *v22; // r14
  const char *v23; // rax
  __int64 result; // rax
  char *v25; // [rsp+0h] [rbp-150h]
  char (*v26)[23]; // [rsp+8h] [rbp-148h]
  bool *v27; // [rsp+10h] [rbp-140h]
  char (*v28)[25]; // [rsp+18h] [rbp-138h]
  std::vector<std::string> *v29; // [rsp+20h] [rbp-130h]
  char (*v30)[12]; // [rsp+28h] [rbp-128h]
  unsigned int *v31; // [rsp+30h] [rbp-120h]
  char (*v32)[30]; // [rsp+38h] [rbp-118h]
  unsigned int *v33; // [rsp+40h] [rbp-110h]
  char (*v34)[41]; // [rsp+48h] [rbp-108h]
  unsigned int *v35; // [rsp+50h] [rbp-100h]
  char (*v36)[23]; // [rsp+58h] [rbp-F8h]
  int32_t ret; // [rsp+9Ch] [rbp-B4h]
  unsigned int reta; // [rsp+9Ch] [rbp-B4h]
  char v43[7][23]; // [rsp+A0h] [rbp-B0h] BYREF

  v18 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v18 = v19;
  }
  *(_QWORD *)v18 = 1102416563LL;
  *(_QWORD *)(v18 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v18 + 16) = ScriptUtil::getTableValue<bool,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v20 = (_DWORD *)(v18 >> 3);
  v20[536862720] = -235802127;
  v20[536862721] = -234753551;
  v20[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v21 = std::forward<bool &>(args_13);
  v36 = (char (*)[23])std::forward<char const(&)[23]>(args_12);
  v35 = std::forward<unsigned int &>(args_11);
  v34 = (char (*)[41])std::forward<char const(&)[41]>(args_10);
  v33 = std::forward<unsigned int &>(args_9);
  v32 = (char (*)[30])std::forward<char const(&)[30]>(args_8);
  v31 = std::forward<unsigned int &>(args_7);
  v30 = (char (*)[12])std::forward<char const(&)[12]>(args_6);
  v29 = std::forward<std::vector<std::string> &>(args_5);
  v28 = (char (*)[25])std::forward<char const(&)[25]>(args_4);
  v27 = std::forward<bool &>(args_3);
  v26 = (char (*)[23])std::forward<char const(&)[23]>(args_2);
  v22 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v18 + 48);
  v23 = (const char *)std::forward<char const(&)[20]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v18 + 64),
    v23,
    (const std::allocator<char> *)(v18 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v18 + 64),
           v22,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v21,
           v43,
           (bool *)v26,
           (const char (*)[25])v27,
           (std::vector<std::string> *)v28,
           (const char (*)[12])v29,
           (unsigned int *)v30,
           (const char (*)[30])v31,
           (unsigned int *)v32,
           (const char (*)[41])v33,
           (unsigned int *)v34,
           (const char (*)[23])v35,
           (bool *)v36) | ret;
  std::string::~string((void *)(v18 + 64));
  *(_DWORD *)(((v18 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v18 + 48);
  result = reta;
  if ( v25 == (char *)v18 )
  {
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v18 = 1172321806LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0DD06-000000000FA0E085
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[20]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[21]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[11]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[11]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[14]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[14]>::type *args_14,
        bool *args_15)
{
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  _DWORD *v22; // r13
  const char (*v23)[21]; // r15
  unsigned int *v24; // r14
  const char *v25; // rax
  __int64 result; // rax
  char *v27; // [rsp+0h] [rbp-160h]
  unsigned int *v28; // [rsp+8h] [rbp-158h]
  const char (*v29)[8]; // [rsp+10h] [rbp-150h]
  unsigned int *v30; // [rsp+18h] [rbp-148h]
  const char (*v31)[9]; // [rsp+20h] [rbp-140h]
  unsigned int *v32; // [rsp+28h] [rbp-138h]
  const char (*v33)[11]; // [rsp+30h] [rbp-130h]
  unsigned int *v34; // [rsp+38h] [rbp-128h]
  const char (*v35)[11]; // [rsp+40h] [rbp-120h]
  unsigned int *v36; // [rsp+48h] [rbp-118h]
  const char (*v37)[14]; // [rsp+50h] [rbp-110h]
  unsigned int *v38; // [rsp+58h] [rbp-108h]
  const char (*v39)[14]; // [rsp+60h] [rbp-100h]
  bool *v40; // [rsp+68h] [rbp-F8h]
  int32_t ret; // [rsp+ACh] [rbp-B4h]
  unsigned int reta; // [rsp+ACh] [rbp-B4h]
  char v47[8][21]; // [rsp+B0h] [rbp-B0h] BYREF

  v20 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_1(128LL);
    if ( v21 )
      v20 = v21;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v20 + 16) = ScriptUtil::getTableValue<bool,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v22 = (_DWORD *)(v20 >> 3);
  v22[536862720] = -235802127;
  v22[536862721] = -234753551;
  v22[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v40 = std::forward<bool &>(args_15);
  v39 = std::forward<char const(&)[14]>(args_14);
  v38 = std::forward<unsigned int &>(args_13);
  v37 = std::forward<char const(&)[14]>(args_12);
  v36 = std::forward<unsigned int &>(args_11);
  v35 = std::forward<char const(&)[11]>(args_10);
  v34 = std::forward<unsigned int &>(args_9);
  v33 = std::forward<char const(&)[11]>(args_8);
  v32 = std::forward<unsigned int &>(args_7);
  v31 = std::forward<char const(&)[9]>(args_6);
  v30 = std::forward<unsigned int &>(args_5);
  v29 = std::forward<char const(&)[8]>(args_4);
  v28 = std::forward<unsigned int &>(args_3);
  v23 = std::forward<char const(&)[21]>(args_2);
  v24 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v20 + 48);
  v25 = (const char *)std::forward<char const(&)[20]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v20 + 64),
    v25,
    (const std::allocator<char> *)(v20 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v20 + 64),
           v24,
           v23,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v47,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40) | ret;
  std::string::~string((void *)(v20 + 64));
  *(_DWORD *)(((v20 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v20 + 48);
  result = reta;
  if ( v27 == (char *)v20 )
  {
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v20 = 1172321806LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9953B0-000000000F99572F
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[21]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[20]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[23]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[25]>::type *args_6,
        std::vector<std::string> *args_7,
        std::remove_reference<char const (&)[12]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[30]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[41]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[23]>::type *args_14,
        bool *args_15)
{
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  _DWORD *v22; // r13
  std::remove_reference<char const (&)[20]>::type *v23; // r15
  bool *v24; // r14
  const char *v25; // rax
  __int64 result; // rax
  bool *v27; // [rsp+8h] [rbp-158h]
  char (*v28)[23]; // [rsp+10h] [rbp-150h]
  bool *v29; // [rsp+18h] [rbp-148h]
  char (*v30)[25]; // [rsp+20h] [rbp-140h]
  std::vector<std::string> *v31; // [rsp+28h] [rbp-138h]
  char (*v32)[12]; // [rsp+30h] [rbp-130h]
  unsigned int *v33; // [rsp+38h] [rbp-128h]
  char (*v34)[30]; // [rsp+40h] [rbp-120h]
  unsigned int *v35; // [rsp+48h] [rbp-118h]
  char (*v36)[41]; // [rsp+50h] [rbp-110h]
  unsigned int *v37; // [rsp+58h] [rbp-108h]
  char (*v38)[23]; // [rsp+60h] [rbp-100h]
  bool *v39; // [rsp+68h] [rbp-F8h]
  int32_t ret; // [rsp+ACh] [rbp-B4h]
  unsigned int reta; // [rsp+ACh] [rbp-B4h]
  char v46[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v20 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_1(128LL);
    if ( v21 )
      v20 = v21;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v20 + 16) = ScriptUtil::getTableValue<bool,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v22 = (_DWORD *)(v20 >> 3);
  v22[536862720] = -235802127;
  v22[536862721] = -234753551;
  v22[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v39 = std::forward<bool &>(args_15);
  v38 = (char (*)[23])std::forward<char const(&)[23]>(args_14);
  v37 = std::forward<unsigned int &>(args_13);
  v36 = (char (*)[41])std::forward<char const(&)[41]>(args_12);
  v35 = std::forward<unsigned int &>(args_11);
  v34 = (char (*)[30])std::forward<char const(&)[30]>(args_10);
  v33 = std::forward<unsigned int &>(args_9);
  v32 = (char (*)[12])std::forward<char const(&)[12]>(args_8);
  v31 = std::forward<std::vector<std::string> &>(args_7);
  v30 = (char (*)[25])std::forward<char const(&)[25]>(args_6);
  v29 = std::forward<bool &>(args_5);
  v28 = (char (*)[23])std::forward<char const(&)[23]>(args_4);
  v27 = std::forward<bool &>(args_3);
  v23 = (std::remove_reference<char const (&)[20]>::type *)std::forward<char const(&)[20]>(args_2);
  v24 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v20 + 48);
  v25 = (const char *)std::forward<char const(&)[21]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v20 + 64),
    v25,
    (const std::allocator<char> *)(v20 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v20 + 64),
           v24,
           v23,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39) | ret;
  std::string::~string((void *)(v20 + 64));
  *(_DWORD *)(((v20 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v20 + 48);
  result = reta;
  if ( v46 == (char *)v20 )
  {
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v20 = 1172321806LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F8ABFE0-000000000F8AC40A
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[23]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        proto::GroupLoadStrategy *args_3,
        std::remove_reference<char const (&)[29]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[21]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[20]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[23]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[25]>::type *args_12,
        std::vector<std::string> *args_13,
        std::remove_reference<char const (&)[12]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[30]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[41]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[23]>::type *args_20,
        bool *args_21)
{
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // r13
  std::remove_reference<char const (&)[14]>::type *v29; // r15
  bool *v30; // r14
  const char *v31; // rax
  __int64 result; // rax
  proto::GroupLoadStrategy *v33; // [rsp+8h] [rbp-188h]
  char (*v34)[29]; // [rsp+10h] [rbp-180h]
  bool *v35; // [rsp+18h] [rbp-178h]
  char (*v36)[21]; // [rsp+20h] [rbp-170h]
  bool *v37; // [rsp+28h] [rbp-168h]
  char (*v38)[20]; // [rsp+30h] [rbp-160h]
  bool *v39; // [rsp+38h] [rbp-158h]
  char (*v40)[23]; // [rsp+40h] [rbp-150h]
  bool *v41; // [rsp+48h] [rbp-148h]
  char (*v42)[25]; // [rsp+50h] [rbp-140h]
  std::vector<std::string> *v43; // [rsp+58h] [rbp-138h]
  char (*v44)[12]; // [rsp+60h] [rbp-130h]
  unsigned int *v45; // [rsp+68h] [rbp-128h]
  char (*v46)[30]; // [rsp+70h] [rbp-120h]
  unsigned int *v47; // [rsp+78h] [rbp-118h]
  char (*v48)[41]; // [rsp+80h] [rbp-110h]
  unsigned int *v49; // [rsp+88h] [rbp-108h]
  char (*v50)[23]; // [rsp+90h] [rbp-100h]
  bool *v51; // [rsp+98h] [rbp-F8h]
  int32_t ret; // [rsp+DCh] [rbp-B4h]
  unsigned int reta; // [rsp+DCh] [rbp-B4h]
  char v58[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v26 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_1(128LL);
    if ( v27 )
      v26 = v27;
  }
  *(_QWORD *)v26 = 1102416563LL;
  *(_QWORD *)(v26 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v26 + 16) = ScriptUtil::getTableValue<bool,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v28 = (_DWORD *)(v26 >> 3);
  v28[536862720] = -235802127;
  v28[536862721] = -234753551;
  v28[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v51 = std::forward<bool &>(args_21);
  v50 = (char (*)[23])std::forward<char const(&)[23]>(args_20);
  v49 = std::forward<unsigned int &>(args_19);
  v48 = (char (*)[41])std::forward<char const(&)[41]>(args_18);
  v47 = std::forward<unsigned int &>(args_17);
  v46 = (char (*)[30])std::forward<char const(&)[30]>(args_16);
  v45 = std::forward<unsigned int &>(args_15);
  v44 = (char (*)[12])std::forward<char const(&)[12]>(args_14);
  v43 = std::forward<std::vector<std::string> &>(args_13);
  v42 = (char (*)[25])std::forward<char const(&)[25]>(args_12);
  v41 = std::forward<bool &>(args_11);
  v40 = (char (*)[23])std::forward<char const(&)[23]>(args_10);
  v39 = std::forward<bool &>(args_9);
  v38 = (char (*)[20])std::forward<char const(&)[20]>(args_8);
  v37 = std::forward<bool &>(args_7);
  v36 = (char (*)[21])std::forward<char const(&)[21]>(args_6);
  v35 = std::forward<bool &>(args_5);
  v34 = (char (*)[29])std::forward<char const(&)[29]>(args_4);
  v33 = std::forward<proto::GroupLoadStrategy &>(args_3);
  v29 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_2);
  v30 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v26 + 48);
  v31 = (const char *)std::forward<char const(&)[23]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v26 + 64),
    v31,
    (const std::allocator<char> *)(v26 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v26 + 64),
           v30,
           v29,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51) | ret;
  std::string::~string((void *)(v26 + 64));
  *(_DWORD *)(((v26 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v26 + 48);
  result = reta;
  if ( v58 == (char *)v26 )
  {
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v26 = 1172321806LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9D3F86-000000000F9D42A1
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[23]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[25]>::type *args_2,
        std::vector<std::string> *args_3,
        std::remove_reference<char const (&)[12]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[30]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[41]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[23]>::type *args_10,
        bool *args_11)
{
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r13
  bool *v19; // r14
  const char (*v20)[23]; // r15
  const char *v21; // rax
  __int64 result; // rax
  char *v23; // [rsp+0h] [rbp-140h]
  bool *v24; // [rsp+8h] [rbp-138h]
  const char (*v25)[25]; // [rsp+10h] [rbp-130h]
  std::vector<std::string> *v26; // [rsp+18h] [rbp-128h]
  const char (*v27)[12]; // [rsp+20h] [rbp-120h]
  unsigned int *v28; // [rsp+28h] [rbp-118h]
  const char (*v29)[30]; // [rsp+30h] [rbp-110h]
  unsigned int *v30; // [rsp+38h] [rbp-108h]
  const char (*v31)[41]; // [rsp+40h] [rbp-100h]
  unsigned int *v32; // [rsp+48h] [rbp-F8h]
  int32_t ret; // [rsp+8Ch] [rbp-B4h]
  unsigned int reta; // [rsp+8Ch] [rbp-B4h]
  char v39[7][25]; // [rsp+90h] [rbp-B0h] BYREF

  v16 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v16 = v17;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v16 + 16) = ScriptUtil::getTableValue<bool,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v18 = (_DWORD *)(v16 >> 3);
  v18[536862720] = -235802127;
  v18[536862721] = -234753551;
  v18[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v19 = std::forward<bool &>(args_11);
  v20 = std::forward<char const(&)[23]>(args_10);
  v32 = std::forward<unsigned int &>(args_9);
  v31 = std::forward<char const(&)[41]>(args_8);
  v30 = std::forward<unsigned int &>(args_7);
  v29 = std::forward<char const(&)[30]>(args_6);
  v28 = std::forward<unsigned int &>(args_5);
  v27 = std::forward<char const(&)[12]>(args_4);
  v26 = std::forward<std::vector<std::string> &>(args_3);
  v25 = std::forward<char const(&)[25]>(args_2);
  v24 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v16 + 48);
  v21 = (const char *)std::forward<char const(&)[23]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v16 + 64),
    v21,
    (const std::allocator<char> *)(v16 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v16 + 64),
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v20,
           v19,
           v39,
           (std::vector<std::string> *)v24,
           (const char (*)[12])v25,
           (unsigned int *)v26,
           (const char (*)[30])v27,
           v28,
           (const char (*)[41])v29,
           v30,
           (const char (*)[23])v31,
           (bool *)v32) | ret;
  std::string::~string((void *)(v16 + 64));
  *(_DWORD *)(((v16 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v16 + 48);
  result = reta;
  if ( v23 == (char *)v16 )
  {
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9E6ADA-000000000F9E6DC3
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[25]>::type *a5,
        std::vector<std::string> *a6,
        std::remove_reference<char const (&)[12]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[30]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[41]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[23]>::type *args_8,
        bool *args_9)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // r13
  bool *v17; // r14
  const char (*v18)[30]; // r15
  const char *v19; // rax
  __int64 result; // rax
  char *v21; // [rsp+0h] [rbp-130h]
  std::vector<std::string> *v22; // [rsp+8h] [rbp-128h]
  const char (*v23)[12]; // [rsp+10h] [rbp-120h]
  unsigned int *v24; // [rsp+18h] [rbp-118h]
  unsigned int *v25; // [rsp+20h] [rbp-110h]
  char (*v26)[41]; // [rsp+28h] [rbp-108h]
  unsigned int *v27; // [rsp+30h] [rbp-100h]
  char (*v28)[23]; // [rsp+38h] [rbp-F8h]
  int32_t ret; // [rsp+7Ch] [rbp-B4h]
  unsigned int reta; // [rsp+7Ch] [rbp-B4h]
  char v35[14][12]; // [rsp+80h] [rbp-B0h] BYREF

  v14 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v14 = v15;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v14 + 16) = ScriptUtil::getTableValue<bool,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v16 = (_DWORD *)(v14 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234753551;
  v16[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v17 = std::forward<bool &>(args_9);
  v28 = (char (*)[23])std::forward<char const(&)[23]>(args_8);
  v27 = std::forward<unsigned int &>(args_7);
  v26 = (char (*)[41])std::forward<char const(&)[41]>(args_6);
  v25 = std::forward<unsigned int &>(args_5);
  v18 = std::forward<char const(&)[30]>(args_4);
  v24 = std::forward<unsigned int &>(args_3);
  v23 = std::forward<char const(&)[12]>(args_2);
  v22 = std::forward<std::vector<std::string> &>(a6);
  std::allocator<char>::allocator(v14 + 48);
  v19 = (const char *)std::forward<char const(&)[25]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v14 + 64),
    v19,
    (const std::allocator<char> *)(v14 + 48));
  reta = ScriptUtil::getTableValue<std::vector<std::string>,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v14 + 64),
           v22,
           v23,
           v24,
           v18,
           v25,
           v26,
           v27,
           v28,
           v17,
           v35,
           (unsigned int *)v22,
           (const char (*)[30])v23,
           v24,
           (const char (*)[41])v25,
           (unsigned int *)v26,
           (const char (*)[23])v27,
           (bool *)v28) | ret;
  std::string::~string((void *)(v14 + 64));
  *(_DWORD *)(((v14 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v14 + 48);
  result = reta;
  if ( v21 == (char *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v14 = 1172321806LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83BA22-000000000F83BF9C
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[8]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        std::string *args_7,
        std::remove_reference<char const (&)[5]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[10]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[15]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[9]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[16]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[21]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[11]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[16]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[8]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[14]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[17]>::type *args_28,
        std::string *args_29,
        std::remove_reference<char const (&)[16]>::type *args_30,
        bool *args_31,
        std::remove_reference<char const (&)[14]>::type *args_32,
        bool *args_33)
{
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  _DWORD *v40; // r13
  const char (*v41)[8]; // r15
  unsigned int v42; // r14d
  const char *v43; // rax
  __int64 result; // rax
  unsigned int v45; // [rsp+8h] [rbp-1E8h]
  unsigned int v46; // [rsp+10h] [rbp-1E0h]
  unsigned int *v47; // [rsp+18h] [rbp-1D8h]
  const char (*v48)[9]; // [rsp+20h] [rbp-1D0h]
  std::string *v49; // [rsp+28h] [rbp-1C8h]
  const char (*v50)[5]; // [rsp+30h] [rbp-1C0h]
  unsigned int *v51; // [rsp+38h] [rbp-1B8h]
  const char (*v52)[10]; // [rsp+40h] [rbp-1B0h]
  unsigned int *v53; // [rsp+48h] [rbp-1A8h]
  const char (*v54)[15]; // [rsp+50h] [rbp-1A0h]
  unsigned int *v55; // [rsp+58h] [rbp-198h]
  const char (*v56)[9]; // [rsp+60h] [rbp-190h]
  unsigned int *v57; // [rsp+68h] [rbp-188h]
  const char (*v58)[16]; // [rsp+70h] [rbp-180h]
  unsigned int *v59; // [rsp+78h] [rbp-178h]
  const char (*v60)[21]; // [rsp+80h] [rbp-170h]
  unsigned int *v61; // [rsp+88h] [rbp-168h]
  const char (*v62)[11]; // [rsp+90h] [rbp-160h]
  unsigned int *v63; // [rsp+98h] [rbp-158h]
  const char (*v64)[16]; // [rsp+A0h] [rbp-150h]
  unsigned int *v65; // [rsp+A8h] [rbp-148h]
  const char (*v66)[8]; // [rsp+B0h] [rbp-140h]
  unsigned int *v67; // [rsp+B8h] [rbp-138h]
  const char (*v68)[14]; // [rsp+C0h] [rbp-130h]
  unsigned int *v69; // [rsp+C8h] [rbp-128h]
  const char (*v70)[17]; // [rsp+D0h] [rbp-120h]
  std::string *v71; // [rsp+D8h] [rbp-118h]
  const char (*v72)[16]; // [rsp+E0h] [rbp-110h]
  bool *v73; // [rsp+E8h] [rbp-108h]
  const char (*v74)[14]; // [rsp+F0h] [rbp-100h]
  bool *v75; // [rsp+F8h] [rbp-F8h]
  int32_t ret; // [rsp+13Ch] [rbp-B4h]
  unsigned int reta; // [rsp+13Ch] [rbp-B4h]
  char v82[176]; // [rsp+140h] [rbp-B0h] BYREF

  v38 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v39 = __asan_stack_malloc_1(128LL);
    if ( v39 )
      v38 = v39;
  }
  *(_QWORD *)v38 = 1102416563LL;
  *(_QWORD *)(v38 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v38 + 16) = ScriptUtil::getTableValue<bool,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v40 = (_DWORD *)(v38 >> 3);
  v40[536862720] = -235802127;
  v40[536862721] = -234753551;
  v40[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v75 = std::forward<bool &>(args_33);
  v74 = std::forward<char const(&)[14]>(args_32);
  v73 = std::forward<bool &>(args_31);
  v72 = std::forward<char const(&)[16]>(args_30);
  v71 = std::forward<std::string &>(args_29);
  v70 = std::forward<char const(&)[17]>(args_28);
  v69 = std::forward<unsigned int &>(args_27);
  v68 = std::forward<char const(&)[14]>(args_26);
  v67 = std::forward<unsigned int &>(args_25);
  v66 = std::forward<char const(&)[8]>(args_24);
  v65 = std::forward<unsigned int &>(args_23);
  v64 = std::forward<char const(&)[16]>(args_22);
  v63 = std::forward<unsigned int &>(args_21);
  v62 = std::forward<char const(&)[11]>(args_20);
  v61 = std::forward<unsigned int &>(args_19);
  v60 = std::forward<char const(&)[21]>(args_18);
  v59 = std::forward<unsigned int &>(args_17);
  v58 = std::forward<char const(&)[16]>(args_16);
  v57 = std::forward<unsigned int &>(args_15);
  v56 = std::forward<char const(&)[9]>(args_14);
  v55 = std::forward<unsigned int &>(args_13);
  v54 = std::forward<char const(&)[15]>(args_12);
  v53 = std::forward<unsigned int &>(args_11);
  v52 = std::forward<char const(&)[10]>(args_10);
  v51 = std::forward<unsigned int &>(args_9);
  v50 = std::forward<char const(&)[5]>(args_8);
  v49 = std::forward<std::string &>(args_7);
  v48 = std::forward<char const(&)[9]>(args_6);
  v47 = std::forward<unsigned int &>(args_5);
  v41 = std::forward<char const(&)[8]>(args_4);
  v46 = (unsigned int)std::forward<bool &>(args_3);
  v45 = (unsigned int)std::forward<char const(&)[9]>(args_2);
  v42 = (unsigned int)std::forward<bool &>(a6);
  std::allocator<char>::allocator(v38 + 48);
  v43 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v38 + 64),
    v43,
    (const std::allocator<char> *)(v38 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v38 + 64,
           v42,
           v45,
           v46,
           v41,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75) | ret;
  std::string::~string((void *)(v38 + 64));
  *(_DWORD *)(((v38 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v38 + 48);
  result = reta;
  if ( v82 == (char *)v38 )
  {
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v38 = 1172321806LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D0C1094-000000000D0C1646
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[8]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        std::string *args_7,
        std::remove_reference<char const (&)[5]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[10]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[15]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[9]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[16]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[21]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[11]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[16]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[8]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[4]>::type *args_26,
        unsigned __int64 *args_27,
        std::remove_reference<char const (&)[12]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[13]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[18]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[16]>::type *args_34,
        bool *args_35)
{
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  _DWORD *v42; // r13
  const char (*v43)[8]; // r15
  unsigned int v44; // r14d
  const char *v45; // rax
  __int64 result; // rax
  unsigned int v47; // [rsp+8h] [rbp-1F8h]
  unsigned int v48; // [rsp+10h] [rbp-1F0h]
  unsigned int *v49; // [rsp+18h] [rbp-1E8h]
  const char (*v50)[9]; // [rsp+20h] [rbp-1E0h]
  std::string *v51; // [rsp+28h] [rbp-1D8h]
  const char (*v52)[5]; // [rsp+30h] [rbp-1D0h]
  unsigned int *v53; // [rsp+38h] [rbp-1C8h]
  const char (*v54)[10]; // [rsp+40h] [rbp-1C0h]
  unsigned int *v55; // [rsp+48h] [rbp-1B8h]
  const char (*v56)[15]; // [rsp+50h] [rbp-1B0h]
  unsigned int *v57; // [rsp+58h] [rbp-1A8h]
  const char (*v58)[9]; // [rsp+60h] [rbp-1A0h]
  unsigned int *v59; // [rsp+68h] [rbp-198h]
  const char (*v60)[16]; // [rsp+70h] [rbp-190h]
  unsigned int *v61; // [rsp+78h] [rbp-188h]
  const char (*v62)[21]; // [rsp+80h] [rbp-180h]
  unsigned int *v63; // [rsp+88h] [rbp-178h]
  const char (*v64)[11]; // [rsp+90h] [rbp-170h]
  unsigned int *v65; // [rsp+98h] [rbp-168h]
  const char (*v66)[16]; // [rsp+A0h] [rbp-160h]
  unsigned int *v67; // [rsp+A8h] [rbp-158h]
  const char (*v68)[8]; // [rsp+B0h] [rbp-150h]
  unsigned int *v69; // [rsp+B8h] [rbp-148h]
  const char (*v70)[4]; // [rsp+C0h] [rbp-140h]
  unsigned __int64 *v71; // [rsp+C8h] [rbp-138h]
  const char (*v72)[12]; // [rsp+D0h] [rbp-130h]
  unsigned int *v73; // [rsp+D8h] [rbp-128h]
  const char (*v74)[13]; // [rsp+E0h] [rbp-120h]
  unsigned int *v75; // [rsp+E8h] [rbp-118h]
  const char (*v76)[18]; // [rsp+F0h] [rbp-110h]
  unsigned int *v77; // [rsp+F8h] [rbp-108h]
  const char (*v78)[16]; // [rsp+100h] [rbp-100h]
  bool *v79; // [rsp+108h] [rbp-F8h]
  int32_t ret; // [rsp+14Ch] [rbp-B4h]
  unsigned int reta; // [rsp+14Ch] [rbp-B4h]
  char v86[176]; // [rsp+150h] [rbp-B0h] BYREF

  v40 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v41 = __asan_stack_malloc_1(128LL);
    if ( v41 )
      v40 = v41;
  }
  *(_QWORD *)v40 = 1102416563LL;
  *(_QWORD *)(v40 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v40 + 16) = ScriptUtil::getTableValue<bool,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v42 = (_DWORD *)(v40 >> 3);
  v42[536862720] = -235802127;
  v42[536862721] = -234753551;
  v42[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v79 = std::forward<bool &>(args_35);
  v78 = std::forward<char const(&)[16]>(args_34);
  v77 = std::forward<unsigned int &>(args_33);
  v76 = std::forward<char const(&)[18]>(args_32);
  v75 = std::forward<unsigned int &>(args_31);
  v74 = std::forward<char const(&)[13]>(args_30);
  v73 = std::forward<unsigned int &>(args_29);
  v72 = std::forward<char const(&)[12]>(args_28);
  v71 = std::forward<unsigned long &>(args_27);
  v70 = std::forward<char const(&)[4]>(args_26);
  v69 = std::forward<unsigned int &>(args_25);
  v68 = std::forward<char const(&)[8]>(args_24);
  v67 = std::forward<unsigned int &>(args_23);
  v66 = std::forward<char const(&)[16]>(args_22);
  v65 = std::forward<unsigned int &>(args_21);
  v64 = std::forward<char const(&)[11]>(args_20);
  v63 = std::forward<unsigned int &>(args_19);
  v62 = std::forward<char const(&)[21]>(args_18);
  v61 = std::forward<unsigned int &>(args_17);
  v60 = std::forward<char const(&)[16]>(args_16);
  v59 = std::forward<unsigned int &>(args_15);
  v58 = std::forward<char const(&)[9]>(args_14);
  v57 = std::forward<unsigned int &>(args_13);
  v56 = std::forward<char const(&)[15]>(args_12);
  v55 = std::forward<unsigned int &>(args_11);
  v54 = std::forward<char const(&)[10]>(args_10);
  v53 = std::forward<unsigned int &>(args_9);
  v52 = std::forward<char const(&)[5]>(args_8);
  v51 = std::forward<std::string &>(args_7);
  v50 = std::forward<char const(&)[9]>(args_6);
  v49 = std::forward<unsigned int &>(args_5);
  v43 = std::forward<char const(&)[8]>(args_4);
  v48 = (unsigned int)std::forward<bool &>(args_3);
  v47 = (unsigned int)std::forward<char const(&)[9]>(args_2);
  v44 = (unsigned int)std::forward<bool &>(a6);
  std::allocator<char>::allocator(v40 + 48);
  v45 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v40 + 64),
    v45,
    (const std::allocator<char> *)(v40 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v40 + 64,
           v44,
           v47,
           v48,
           v43,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79) | ret;
  std::string::~string((void *)(v40 + 64));
  *(_DWORD *)(((v40 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v40 + 48);
  result = reta;
  if ( v86 == (char *)v40 )
  {
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v40 = 1172321806LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F8A6822-000000000F8A6AD7
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[8]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[13]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[19]>::type *args_6,
        unsigned int *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  unsigned int *v15; // r15
  const char (*v16)[14]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  unsigned int *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[13]; // [rsp+10h] [rbp-110h]
  unsigned int *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[19]; // [rsp+20h] [rbp-100h]
  unsigned int *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[13][13]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v24 = std::forward<unsigned int &>(args_7);
  v23 = std::forward<char const(&)[19]>(args_6);
  v15 = std::forward<unsigned int &>(args_5);
  v16 = std::forward<char const(&)[14]>(args_4);
  v22 = std::forward<unsigned int &>(args_3);
  v21 = std::forward<char const(&)[13]>(args_2);
  v20 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           v20,
           (const char (*)[14])v21,
           v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F909E18-000000000F90A322
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[8]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        std::string *args_3,
        std::remove_reference<char const (&)[5]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[10]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[15]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[16]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[21]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[11]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[16]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[8]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[14]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[17]>::type *args_24,
        std::string *args_25,
        std::remove_reference<char const (&)[16]>::type *args_26,
        bool *args_27,
        std::remove_reference<char const (&)[14]>::type *args_28,
        bool *args_29)
{
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  _DWORD *v36; // r13
  const char (*v37)[5]; // r15
  unsigned int *v38; // r14
  const char *v39; // rax
  __int64 result; // rax
  char *v41; // [rsp+0h] [rbp-1D0h]
  char (*v42)[9]; // [rsp+8h] [rbp-1C8h]
  std::string *v43; // [rsp+10h] [rbp-1C0h]
  unsigned int *v44; // [rsp+18h] [rbp-1B8h]
  const char (*v45)[10]; // [rsp+20h] [rbp-1B0h]
  unsigned int *v46; // [rsp+28h] [rbp-1A8h]
  const char (*v47)[15]; // [rsp+30h] [rbp-1A0h]
  unsigned int *v48; // [rsp+38h] [rbp-198h]
  const char (*v49)[9]; // [rsp+40h] [rbp-190h]
  unsigned int *v50; // [rsp+48h] [rbp-188h]
  const char (*v51)[16]; // [rsp+50h] [rbp-180h]
  unsigned int *v52; // [rsp+58h] [rbp-178h]
  const char (*v53)[21]; // [rsp+60h] [rbp-170h]
  unsigned int *v54; // [rsp+68h] [rbp-168h]
  const char (*v55)[11]; // [rsp+70h] [rbp-160h]
  unsigned int *v56; // [rsp+78h] [rbp-158h]
  const char (*v57)[16]; // [rsp+80h] [rbp-150h]
  unsigned int *v58; // [rsp+88h] [rbp-148h]
  const char (*v59)[8]; // [rsp+90h] [rbp-140h]
  unsigned int *v60; // [rsp+98h] [rbp-138h]
  const char (*v61)[14]; // [rsp+A0h] [rbp-130h]
  unsigned int *v62; // [rsp+A8h] [rbp-128h]
  const char (*v63)[17]; // [rsp+B0h] [rbp-120h]
  std::string *v64; // [rsp+B8h] [rbp-118h]
  const char (*v65)[16]; // [rsp+C0h] [rbp-110h]
  bool *v66; // [rsp+C8h] [rbp-108h]
  const char (*v67)[14]; // [rsp+D0h] [rbp-100h]
  bool *v68; // [rsp+D8h] [rbp-F8h]
  int32_t ret; // [rsp+11Ch] [rbp-B4h]
  unsigned int reta; // [rsp+11Ch] [rbp-B4h]
  char v75[19][9]; // [rsp+120h] [rbp-B0h] BYREF

  v34 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v35 = __asan_stack_malloc_1(128LL);
    if ( v35 )
      v34 = v35;
  }
  *(_QWORD *)v34 = 1102416563LL;
  *(_QWORD *)(v34 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v34 + 16) = ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v36 = (_DWORD *)(v34 >> 3);
  v36[536862720] = -235802127;
  v36[536862721] = -234753551;
  v36[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v68 = std::forward<bool &>(args_29);
  v67 = std::forward<char const(&)[14]>(args_28);
  v66 = std::forward<bool &>(args_27);
  v65 = std::forward<char const(&)[16]>(args_26);
  v64 = std::forward<std::string &>(args_25);
  v63 = std::forward<char const(&)[17]>(args_24);
  v62 = std::forward<unsigned int &>(args_23);
  v61 = std::forward<char const(&)[14]>(args_22);
  v60 = std::forward<unsigned int &>(args_21);
  v59 = std::forward<char const(&)[8]>(args_20);
  v58 = std::forward<unsigned int &>(args_19);
  v57 = std::forward<char const(&)[16]>(args_18);
  v56 = std::forward<unsigned int &>(args_17);
  v55 = std::forward<char const(&)[11]>(args_16);
  v54 = std::forward<unsigned int &>(args_15);
  v53 = std::forward<char const(&)[21]>(args_14);
  v52 = std::forward<unsigned int &>(args_13);
  v51 = std::forward<char const(&)[16]>(args_12);
  v50 = std::forward<unsigned int &>(args_11);
  v49 = std::forward<char const(&)[9]>(args_10);
  v48 = std::forward<unsigned int &>(args_9);
  v47 = std::forward<char const(&)[15]>(args_8);
  v46 = std::forward<unsigned int &>(args_7);
  v45 = std::forward<char const(&)[10]>(args_6);
  v44 = std::forward<unsigned int &>(args_5);
  v37 = std::forward<char const(&)[5]>(args_4);
  v43 = std::forward<std::string &>(args_3);
  v42 = (char (*)[9])std::forward<char const(&)[9]>(args_2);
  v38 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v34 + 48);
  v39 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v34 + 64),
    v39,
    (const std::allocator<char> *)(v34 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v34 + 64),
           v38,
           v42,
           v43,
           v37,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v75,
           (std::string *)v42,
           (const char (*)[5])&v43->_M_dataplus._M_p,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68) | ret;
  std::string::~string((void *)(v34 + 64));
  *(_DWORD *)(((v34 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v34 + 48);
  result = reta;
  if ( v41 == (char *)v34 )
  {
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v34 = 1172321806LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F992B04-000000000F99323E
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[12]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[18]>::type *args_6,
        data::PlatformRotType *args_7,
        std::remove_reference<char const (&)[6]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[19]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[14]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[10]>::type *args_16,
        proto::GadgetBornType *args_17,
        std::remove_reference<char const (&)[9]>::type *args_18,
        std::string *args_19,
        std::remove_reference<char const (&)[5]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[12]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[15]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[21]>::type *args_26,
        bool *args_27,
        std::remove_reference<char const (&)[10]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[19]>::type *args_30,
        bool *args_31,
        std::remove_reference<char const (&)[17]>::type *args_32,
        bool *args_33,
        std::remove_reference<char const (&)[20]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[21]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[8]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[9]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[11]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[11]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[14]>::type *args_46,
        unsigned int *args_47,
        std::remove_reference<char const (&)[14]>::type *args_48,
        bool *args_49)
{
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  _DWORD *v56; // r13
  std::remove_reference<char const (&)[12]>::type *v57; // r15
  bool *v58; // r14
  const char *v59; // rax
  __int64 result; // rax
  char (*v61)[11]; // [rsp+8h] [rbp-268h]
  std::remove_reference<bool&>::type *v62; // [rsp+10h] [rbp-260h]
  bool *v63; // [rsp+18h] [rbp-258h]
  char (*v64)[18]; // [rsp+20h] [rbp-250h]
  data::PlatformRotType *v65; // [rsp+28h] [rbp-248h]
  char (*v66)[6]; // [rsp+30h] [rbp-240h]
  unsigned int *v67; // [rsp+38h] [rbp-238h]
  char (*v68)[9]; // [rsp+40h] [rbp-230h]
  unsigned int *v69; // [rsp+48h] [rbp-228h]
  char (*v70)[19]; // [rsp+50h] [rbp-220h]
  bool *v71; // [rsp+58h] [rbp-218h]
  char (*v72)[14]; // [rsp+60h] [rbp-210h]
  unsigned int *v73; // [rsp+68h] [rbp-208h]
  char (*v74)[10]; // [rsp+70h] [rbp-200h]
  proto::GadgetBornType *v75; // [rsp+78h] [rbp-1F8h]
  char (*v76)[9]; // [rsp+80h] [rbp-1F0h]
  std::string *v77; // [rsp+88h] [rbp-1E8h]
  char (*v78)[5]; // [rsp+90h] [rbp-1E0h]
  unsigned int *v79; // [rsp+98h] [rbp-1D8h]
  char (*v80)[12]; // [rsp+A0h] [rbp-1D0h]
  unsigned int *v81; // [rsp+A8h] [rbp-1C8h]
  char (*v82)[15]; // [rsp+B0h] [rbp-1C0h]
  unsigned int *v83; // [rsp+B8h] [rbp-1B8h]
  char (*v84)[21]; // [rsp+C0h] [rbp-1B0h]
  bool *v85; // [rsp+C8h] [rbp-1A8h]
  char (*v86)[10]; // [rsp+D0h] [rbp-1A0h]
  unsigned int *v87; // [rsp+D8h] [rbp-198h]
  char (*v88)[19]; // [rsp+E0h] [rbp-190h]
  bool *v89; // [rsp+E8h] [rbp-188h]
  char (*v90)[17]; // [rsp+F0h] [rbp-180h]
  bool *v91; // [rsp+F8h] [rbp-178h]
  char (*v92)[20]; // [rsp+100h] [rbp-170h]
  unsigned int *v93; // [rsp+108h] [rbp-168h]
  char (*v94)[21]; // [rsp+110h] [rbp-160h]
  unsigned int *v95; // [rsp+118h] [rbp-158h]
  char (*v96)[8]; // [rsp+120h] [rbp-150h]
  unsigned int *v97; // [rsp+128h] [rbp-148h]
  char (*v98)[9]; // [rsp+130h] [rbp-140h]
  unsigned int *v99; // [rsp+138h] [rbp-138h]
  char (*v100)[11]; // [rsp+140h] [rbp-130h]
  unsigned int *v101; // [rsp+148h] [rbp-128h]
  char (*v102)[11]; // [rsp+150h] [rbp-120h]
  unsigned int *v103; // [rsp+158h] [rbp-118h]
  char (*v104)[14]; // [rsp+160h] [rbp-110h]
  unsigned int *v105; // [rsp+168h] [rbp-108h]
  char (*v106)[14]; // [rsp+170h] [rbp-100h]
  bool *v107; // [rsp+178h] [rbp-F8h]
  int32_t ret; // [rsp+1BCh] [rbp-B4h]
  unsigned int reta; // [rsp+1BCh] [rbp-B4h]
  char v114[176]; // [rsp+1C0h] [rbp-B0h] BYREF

  v54 = (unsigned __int64)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v55 = __asan_stack_malloc_1(128LL);
    if ( v55 )
      v54 = v55;
  }
  *(_QWORD *)v54 = 1102416563LL;
  *(_QWORD *)(v54 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v54 + 16) = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v56 = (_DWORD *)(v54 >> 3);
  v56[536862720] = -235802127;
  v56[536862721] = -234753551;
  v56[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v107 = std::forward<bool &>(args_49);
  v106 = (char (*)[14])std::forward<char const(&)[14]>(args_48);
  v105 = std::forward<unsigned int &>(args_47);
  v104 = (char (*)[14])std::forward<char const(&)[14]>(args_46);
  v103 = std::forward<unsigned int &>(args_45);
  v102 = (char (*)[11])std::forward<char const(&)[11]>(args_44);
  v101 = std::forward<unsigned int &>(args_43);
  v100 = (char (*)[11])std::forward<char const(&)[11]>(args_42);
  v99 = std::forward<unsigned int &>(args_41);
  v98 = (char (*)[9])std::forward<char const(&)[9]>(args_40);
  v97 = std::forward<unsigned int &>(args_39);
  v96 = (char (*)[8])std::forward<char const(&)[8]>(args_38);
  v95 = std::forward<unsigned int &>(args_37);
  v94 = (char (*)[21])std::forward<char const(&)[21]>(args_36);
  v93 = std::forward<unsigned int &>(args_35);
  v92 = (char (*)[20])std::forward<char const(&)[20]>(args_34);
  v91 = std::forward<bool &>(args_33);
  v90 = (char (*)[17])std::forward<char const(&)[17]>(args_32);
  v89 = std::forward<bool &>(args_31);
  v88 = (char (*)[19])std::forward<char const(&)[19]>(args_30);
  v87 = std::forward<unsigned int &>(args_29);
  v86 = (char (*)[10])std::forward<char const(&)[10]>(args_28);
  v85 = std::forward<bool &>(args_27);
  v84 = (char (*)[21])std::forward<char const(&)[21]>(args_26);
  v83 = std::forward<unsigned int &>(args_25);
  v82 = (char (*)[15])std::forward<char const(&)[15]>(args_24);
  v81 = std::forward<unsigned int &>(args_23);
  v80 = (char (*)[12])std::forward<char const(&)[12]>(args_22);
  v79 = std::forward<unsigned int &>(args_21);
  v78 = (char (*)[5])std::forward<char const(&)[5]>(args_20);
  v77 = std::forward<std::string &>(args_19);
  v76 = (char (*)[9])std::forward<char const(&)[9]>(args_18);
  v75 = std::forward<proto::GadgetBornType &>(args_17);
  v74 = (char (*)[10])std::forward<char const(&)[10]>(args_16);
  v73 = std::forward<unsigned int &>(args_15);
  v72 = (char (*)[14])std::forward<char const(&)[14]>(args_14);
  v71 = std::forward<bool &>(args_13);
  v70 = (char (*)[19])std::forward<char const(&)[19]>(args_12);
  v69 = std::forward<unsigned int &>(args_11);
  v68 = (char (*)[9])std::forward<char const(&)[9]>(args_10);
  v67 = std::forward<unsigned int &>(args_9);
  v66 = (char (*)[6])std::forward<char const(&)[6]>(args_8);
  v65 = std::forward<data::PlatformRotType &>(args_7);
  v64 = (char (*)[18])std::forward<char const(&)[18]>(args_6);
  v63 = std::forward<bool &>(args_5);
  v57 = (std::remove_reference<char const (&)[12]>::type *)std::forward<char const(&)[12]>(args_4);
  v62 = std::forward<bool &>(args_3);
  v61 = (char (*)[11])std::forward<char const(&)[11]>(args_2);
  v58 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v54 + 48);
  v59 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v54 + 64),
    v59,
    (const std::allocator<char> *)(v54 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v54 + 64),
           v58,
           v61,
           v62,
           v57,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103,
           v104,
           v105,
           v106,
           v107) | ret;
  std::string::~string((void *)(v54 + 64));
  *(_DWORD *)(((v54 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v54 + 48);
  result = reta;
  if ( v114 == (char *)v54 )
  {
    *(_QWORD *)((v54 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v54 = 1172321806LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F8A0CA8-000000000F8A11EA
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        std::string *args_5,
        std::remove_reference<char const (&)[5]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[10]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[15]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[9]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[16]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[21]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[11]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[16]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[8]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[14]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[17]>::type *args_26,
        std::string *args_27,
        std::remove_reference<char const (&)[16]>::type *args_28,
        bool *args_29,
        std::remove_reference<char const (&)[14]>::type *args_30,
        bool *args_31)
{
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // r13
  std::remove_reference<char const (&)[9]>::type *v39; // r15
  bool *v40; // r14
  const char *v41; // rax
  __int64 result; // rax
  char (*v43)[8]; // [rsp+8h] [rbp-1D8h]
  std::remove_reference<unsigned int&>::type *v44; // [rsp+10h] [rbp-1D0h]
  std::string *v45; // [rsp+18h] [rbp-1C8h]
  char (*v46)[5]; // [rsp+20h] [rbp-1C0h]
  unsigned int *v47; // [rsp+28h] [rbp-1B8h]
  char (*v48)[10]; // [rsp+30h] [rbp-1B0h]
  unsigned int *v49; // [rsp+38h] [rbp-1A8h]
  char (*v50)[15]; // [rsp+40h] [rbp-1A0h]
  unsigned int *v51; // [rsp+48h] [rbp-198h]
  char (*v52)[9]; // [rsp+50h] [rbp-190h]
  unsigned int *v53; // [rsp+58h] [rbp-188h]
  char (*v54)[16]; // [rsp+60h] [rbp-180h]
  unsigned int *v55; // [rsp+68h] [rbp-178h]
  char (*v56)[21]; // [rsp+70h] [rbp-170h]
  unsigned int *v57; // [rsp+78h] [rbp-168h]
  char (*v58)[11]; // [rsp+80h] [rbp-160h]
  unsigned int *v59; // [rsp+88h] [rbp-158h]
  char (*v60)[16]; // [rsp+90h] [rbp-150h]
  unsigned int *v61; // [rsp+98h] [rbp-148h]
  char (*v62)[8]; // [rsp+A0h] [rbp-140h]
  unsigned int *v63; // [rsp+A8h] [rbp-138h]
  char (*v64)[14]; // [rsp+B0h] [rbp-130h]
  unsigned int *v65; // [rsp+B8h] [rbp-128h]
  char (*v66)[17]; // [rsp+C0h] [rbp-120h]
  std::string *v67; // [rsp+C8h] [rbp-118h]
  char (*v68)[16]; // [rsp+D0h] [rbp-110h]
  bool *v69; // [rsp+D8h] [rbp-108h]
  char (*v70)[14]; // [rsp+E0h] [rbp-100h]
  bool *v71; // [rsp+E8h] [rbp-F8h]
  int32_t ret; // [rsp+12Ch] [rbp-B4h]
  unsigned int reta; // [rsp+12Ch] [rbp-B4h]
  char v78[176]; // [rsp+130h] [rbp-B0h] BYREF

  v36 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v37 = __asan_stack_malloc_1(128LL);
    if ( v37 )
      v36 = v37;
  }
  *(_QWORD *)v36 = 1102416563LL;
  *(_QWORD *)(v36 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v36 + 16) = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v38 = (_DWORD *)(v36 >> 3);
  v38[536862720] = -235802127;
  v38[536862721] = -234753551;
  v38[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v71 = std::forward<bool &>(args_31);
  v70 = (char (*)[14])std::forward<char const(&)[14]>(args_30);
  v69 = std::forward<bool &>(args_29);
  v68 = (char (*)[16])std::forward<char const(&)[16]>(args_28);
  v67 = std::forward<std::string &>(args_27);
  v66 = (char (*)[17])std::forward<char const(&)[17]>(args_26);
  v65 = std::forward<unsigned int &>(args_25);
  v64 = (char (*)[14])std::forward<char const(&)[14]>(args_24);
  v63 = std::forward<unsigned int &>(args_23);
  v62 = (char (*)[8])std::forward<char const(&)[8]>(args_22);
  v61 = std::forward<unsigned int &>(args_21);
  v60 = (char (*)[16])std::forward<char const(&)[16]>(args_20);
  v59 = std::forward<unsigned int &>(args_19);
  v58 = (char (*)[11])std::forward<char const(&)[11]>(args_18);
  v57 = std::forward<unsigned int &>(args_17);
  v56 = (char (*)[21])std::forward<char const(&)[21]>(args_16);
  v55 = std::forward<unsigned int &>(args_15);
  v54 = (char (*)[16])std::forward<char const(&)[16]>(args_14);
  v53 = std::forward<unsigned int &>(args_13);
  v52 = (char (*)[9])std::forward<char const(&)[9]>(args_12);
  v51 = std::forward<unsigned int &>(args_11);
  v50 = (char (*)[15])std::forward<char const(&)[15]>(args_10);
  v49 = std::forward<unsigned int &>(args_9);
  v48 = (char (*)[10])std::forward<char const(&)[10]>(args_8);
  v47 = std::forward<unsigned int &>(args_7);
  v46 = (char (*)[5])std::forward<char const(&)[5]>(args_6);
  v45 = std::forward<std::string &>(args_5);
  v39 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_4);
  v44 = std::forward<unsigned int &>(args_3);
  v43 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v40 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v36 + 48);
  v41 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v36 + 64),
    v41,
    (const std::allocator<char> *)(v36 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v36 + 64),
           v40,
           v43,
           v44,
           v39,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71) | ret;
  std::string::~string((void *)(v36 + 64));
  *(_DWORD *)(((v36 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v36 + 48);
  result = reta;
  if ( v78 == (char *)v36 )
  {
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v36 = 1172321806LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F95E1A6-000000000F95E918
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[11]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[12]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[18]>::type *args_8,
        data::PlatformRotType *args_9,
        std::remove_reference<char const (&)[6]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[9]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[19]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[14]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[10]>::type *args_18,
        proto::GadgetBornType *args_19,
        std::remove_reference<char const (&)[9]>::type *args_20,
        std::string *args_21,
        std::remove_reference<char const (&)[5]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[12]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[15]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[21]>::type *args_28,
        bool *args_29,
        std::remove_reference<char const (&)[10]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[19]>::type *args_32,
        bool *args_33,
        std::remove_reference<char const (&)[17]>::type *args_34,
        bool *args_35,
        std::remove_reference<char const (&)[20]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[21]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[8]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[9]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[11]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[11]>::type *args_46,
        unsigned int *args_47,
        std::remove_reference<char const (&)[14]>::type *args_48,
        unsigned int *args_49,
        std::remove_reference<char const (&)[14]>::type *args_50,
        bool *args_51)
{
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  _DWORD *v58; // r13
  std::remove_reference<char const (&)[11]>::type *v59; // r15
  bool *v60; // r14
  const char *v61; // rax
  __int64 result; // rax
  char (*v63)[9]; // [rsp+8h] [rbp-278h]
  std::remove_reference<bool&>::type *v64; // [rsp+10h] [rbp-270h]
  bool *v65; // [rsp+18h] [rbp-268h]
  char (*v66)[12]; // [rsp+20h] [rbp-260h]
  bool *v67; // [rsp+28h] [rbp-258h]
  char (*v68)[18]; // [rsp+30h] [rbp-250h]
  data::PlatformRotType *v69; // [rsp+38h] [rbp-248h]
  char (*v70)[6]; // [rsp+40h] [rbp-240h]
  unsigned int *v71; // [rsp+48h] [rbp-238h]
  char (*v72)[9]; // [rsp+50h] [rbp-230h]
  unsigned int *v73; // [rsp+58h] [rbp-228h]
  char (*v74)[19]; // [rsp+60h] [rbp-220h]
  bool *v75; // [rsp+68h] [rbp-218h]
  char (*v76)[14]; // [rsp+70h] [rbp-210h]
  unsigned int *v77; // [rsp+78h] [rbp-208h]
  char (*v78)[10]; // [rsp+80h] [rbp-200h]
  proto::GadgetBornType *v79; // [rsp+88h] [rbp-1F8h]
  char (*v80)[9]; // [rsp+90h] [rbp-1F0h]
  std::string *v81; // [rsp+98h] [rbp-1E8h]
  char (*v82)[5]; // [rsp+A0h] [rbp-1E0h]
  unsigned int *v83; // [rsp+A8h] [rbp-1D8h]
  char (*v84)[12]; // [rsp+B0h] [rbp-1D0h]
  unsigned int *v85; // [rsp+B8h] [rbp-1C8h]
  char (*v86)[15]; // [rsp+C0h] [rbp-1C0h]
  unsigned int *v87; // [rsp+C8h] [rbp-1B8h]
  char (*v88)[21]; // [rsp+D0h] [rbp-1B0h]
  bool *v89; // [rsp+D8h] [rbp-1A8h]
  char (*v90)[10]; // [rsp+E0h] [rbp-1A0h]
  unsigned int *v91; // [rsp+E8h] [rbp-198h]
  char (*v92)[19]; // [rsp+F0h] [rbp-190h]
  bool *v93; // [rsp+F8h] [rbp-188h]
  char (*v94)[17]; // [rsp+100h] [rbp-180h]
  bool *v95; // [rsp+108h] [rbp-178h]
  char (*v96)[20]; // [rsp+110h] [rbp-170h]
  unsigned int *v97; // [rsp+118h] [rbp-168h]
  char (*v98)[21]; // [rsp+120h] [rbp-160h]
  unsigned int *v99; // [rsp+128h] [rbp-158h]
  char (*v100)[8]; // [rsp+130h] [rbp-150h]
  unsigned int *v101; // [rsp+138h] [rbp-148h]
  char (*v102)[9]; // [rsp+140h] [rbp-140h]
  unsigned int *v103; // [rsp+148h] [rbp-138h]
  char (*v104)[11]; // [rsp+150h] [rbp-130h]
  unsigned int *v105; // [rsp+158h] [rbp-128h]
  char (*v106)[11]; // [rsp+160h] [rbp-120h]
  unsigned int *v107; // [rsp+168h] [rbp-118h]
  char (*v108)[14]; // [rsp+170h] [rbp-110h]
  unsigned int *v109; // [rsp+178h] [rbp-108h]
  char (*v110)[14]; // [rsp+180h] [rbp-100h]
  bool *v111; // [rsp+188h] [rbp-F8h]
  int32_t ret; // [rsp+1CCh] [rbp-B4h]
  unsigned int reta; // [rsp+1CCh] [rbp-B4h]
  char v118[176]; // [rsp+1D0h] [rbp-B0h] BYREF

  v56 = (unsigned __int64)v118;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v57 = __asan_stack_malloc_1(128LL);
    if ( v57 )
      v56 = v57;
  }
  *(_QWORD *)v56 = 1102416563LL;
  *(_QWORD *)(v56 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v56 + 16) = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v58 = (_DWORD *)(v56 >> 3);
  v58[536862720] = -235802127;
  v58[536862721] = -234753551;
  v58[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v111 = std::forward<bool &>(args_51);
  v110 = (char (*)[14])std::forward<char const(&)[14]>(args_50);
  v109 = std::forward<unsigned int &>(args_49);
  v108 = (char (*)[14])std::forward<char const(&)[14]>(args_48);
  v107 = std::forward<unsigned int &>(args_47);
  v106 = (char (*)[11])std::forward<char const(&)[11]>(args_46);
  v105 = std::forward<unsigned int &>(args_45);
  v104 = (char (*)[11])std::forward<char const(&)[11]>(args_44);
  v103 = std::forward<unsigned int &>(args_43);
  v102 = (char (*)[9])std::forward<char const(&)[9]>(args_42);
  v101 = std::forward<unsigned int &>(args_41);
  v100 = (char (*)[8])std::forward<char const(&)[8]>(args_40);
  v99 = std::forward<unsigned int &>(args_39);
  v98 = (char (*)[21])std::forward<char const(&)[21]>(args_38);
  v97 = std::forward<unsigned int &>(args_37);
  v96 = (char (*)[20])std::forward<char const(&)[20]>(args_36);
  v95 = std::forward<bool &>(args_35);
  v94 = (char (*)[17])std::forward<char const(&)[17]>(args_34);
  v93 = std::forward<bool &>(args_33);
  v92 = (char (*)[19])std::forward<char const(&)[19]>(args_32);
  v91 = std::forward<unsigned int &>(args_31);
  v90 = (char (*)[10])std::forward<char const(&)[10]>(args_30);
  v89 = std::forward<bool &>(args_29);
  v88 = (char (*)[21])std::forward<char const(&)[21]>(args_28);
  v87 = std::forward<unsigned int &>(args_27);
  v86 = (char (*)[15])std::forward<char const(&)[15]>(args_26);
  v85 = std::forward<unsigned int &>(args_25);
  v84 = (char (*)[12])std::forward<char const(&)[12]>(args_24);
  v83 = std::forward<unsigned int &>(args_23);
  v82 = (char (*)[5])std::forward<char const(&)[5]>(args_22);
  v81 = std::forward<std::string &>(args_21);
  v80 = (char (*)[9])std::forward<char const(&)[9]>(args_20);
  v79 = std::forward<proto::GadgetBornType &>(args_19);
  v78 = (char (*)[10])std::forward<char const(&)[10]>(args_18);
  v77 = std::forward<unsigned int &>(args_17);
  v76 = (char (*)[14])std::forward<char const(&)[14]>(args_16);
  v75 = std::forward<bool &>(args_15);
  v74 = (char (*)[19])std::forward<char const(&)[19]>(args_14);
  v73 = std::forward<unsigned int &>(args_13);
  v72 = (char (*)[9])std::forward<char const(&)[9]>(args_12);
  v71 = std::forward<unsigned int &>(args_11);
  v70 = (char (*)[6])std::forward<char const(&)[6]>(args_10);
  v69 = std::forward<data::PlatformRotType &>(args_9);
  v68 = (char (*)[18])std::forward<char const(&)[18]>(args_8);
  v67 = std::forward<bool &>(args_7);
  v66 = (char (*)[12])std::forward<char const(&)[12]>(args_6);
  v65 = std::forward<bool &>(args_5);
  v59 = (std::remove_reference<char const (&)[11]>::type *)std::forward<char const(&)[11]>(args_4);
  v64 = std::forward<bool &>(args_3);
  v63 = (char (*)[9])std::forward<char const(&)[9]>(args_2);
  v60 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v56 + 48);
  v61 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v56 + 64),
    v61,
    (const std::allocator<char> *)(v56 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v56 + 64),
           v60,
           v63,
           v64,
           v59,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103,
           v104,
           v105,
           v106,
           v107,
           v108,
           v109,
           v110,
           v111) | ret;
  std::string::~string((void *)(v56 + 64));
  *(_DWORD *)(((v56 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v56 + 48);
  result = reta;
  if ( v118 == (char *)v56 )
  {
    *(_QWORD *)((v56 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v56 = 1172321806LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F8A4390-000000000F8A4613
__int64 __fastcall ScriptUtil::getTableValue<data::EventType,char const(&)[7],std::string &,char const(&)[10],std::string &,char const(&)[7],std::string &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::EventType *val,
        std::remove_reference<char const (&)[7]>::type *a5,
        std::string *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        std::string *args_3,
        std::remove_reference<char const (&)[7]>::type *args_4,
        std::string *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  std::string *v13; // r15
  const char (*v14)[7]; // r14
  const char *v15; // rax
  __int64 result; // rax
  char *v17; // [rsp+0h] [rbp-110h]
  std::string *v18; // [rsp+8h] [rbp-108h]
  const char (*v19)[10]; // [rsp+10h] [rbp-100h]
  std::string *v20; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v27[17][10]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<data::EventType,char const(&)[7],std::string &,char const(&)[10],std::string &,char const(&)[7],std::string &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<data::EventType>(this, table, name, val);
  v13 = std::forward<std::string &>(args_5);
  v14 = std::forward<char const(&)[7]>(args_4);
  v20 = std::forward<std::string &>(args_3);
  v19 = std::forward<char const(&)[10]>(args_2);
  v18 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[7]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[10],std::string&,char const(&)[7],std::string&>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v18,
           v19,
           v20,
           v14,
           v13,
           v27,
           v18,
           (const char (*)[7])v19,
           v20) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v17 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F841826-000000000F842040
__int64 __fastcall ScriptUtil::getTableValue<data::GadgetState,char const(&)[11],unsigned int &,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        data::GadgetState *a4,
        std::remove_reference<char const (&)[11]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[5]>::type *args_2,
        data::GadgetType *args_3,
        std::remove_reference<char const (&)[13]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[11]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[12]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[18]>::type *args_14,
        data::PlatformRotType *args_15,
        std::remove_reference<char const (&)[6]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[9]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[19]>::type *args_20,
        bool *args_21,
        std::remove_reference<char const (&)[14]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[10]>::type *args_24,
        proto::GadgetBornType *args_25,
        std::remove_reference<char const (&)[9]>::type *args_26,
        std::string *args_27,
        std::remove_reference<char const (&)[5]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[12]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[15]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[21]>::type *args_34,
        bool *args_35,
        std::remove_reference<char const (&)[10]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[19]>::type *args_38,
        bool *args_39,
        std::remove_reference<char const (&)[17]>::type *args_40,
        bool *args_41,
        std::remove_reference<char const (&)[20]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[21]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[8]>::type *args_46,
        unsigned int *args_47,
        std::remove_reference<char const (&)[9]>::type *args_48,
        unsigned int *args_49,
        std::remove_reference<char const (&)[11]>::type *args_50,
        unsigned int *args_51,
        std::remove_reference<char const (&)[11]>::type *args_52,
        unsigned int *args_53,
        std::remove_reference<char const (&)[14]>::type *args_54,
        unsigned int *args_55,
        std::remove_reference<char const (&)[14]>::type *args_56,
        bool *args_57)
{
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  _DWORD *v64; // r13
  const char (*v65)[13]; // r14
  unsigned int v66; // r15d
  const char *v67; // rax
  __int64 result; // rax
  unsigned int v69; // [rsp+8h] [rbp-2A8h]
  unsigned int v70; // [rsp+10h] [rbp-2A0h]
  bool *v71; // [rsp+18h] [rbp-298h]
  const char (*v72)[9]; // [rsp+20h] [rbp-290h]
  bool *v73; // [rsp+28h] [rbp-288h]
  const char (*v74)[9]; // [rsp+30h] [rbp-280h]
  bool *v75; // [rsp+38h] [rbp-278h]
  const char (*v76)[11]; // [rsp+40h] [rbp-270h]
  bool *v77; // [rsp+48h] [rbp-268h]
  const char (*v78)[12]; // [rsp+50h] [rbp-260h]
  bool *v79; // [rsp+58h] [rbp-258h]
  const char (*v80)[18]; // [rsp+60h] [rbp-250h]
  data::PlatformRotType *v81; // [rsp+68h] [rbp-248h]
  const char (*v82)[6]; // [rsp+70h] [rbp-240h]
  unsigned int *v83; // [rsp+78h] [rbp-238h]
  const char (*v84)[9]; // [rsp+80h] [rbp-230h]
  unsigned int *v85; // [rsp+88h] [rbp-228h]
  const char (*v86)[19]; // [rsp+90h] [rbp-220h]
  bool *v87; // [rsp+98h] [rbp-218h]
  const char (*v88)[14]; // [rsp+A0h] [rbp-210h]
  unsigned int *v89; // [rsp+A8h] [rbp-208h]
  const char (*v90)[10]; // [rsp+B0h] [rbp-200h]
  proto::GadgetBornType *v91; // [rsp+B8h] [rbp-1F8h]
  const char (*v92)[9]; // [rsp+C0h] [rbp-1F0h]
  std::string *v93; // [rsp+C8h] [rbp-1E8h]
  const char (*v94)[5]; // [rsp+D0h] [rbp-1E0h]
  unsigned int *v95; // [rsp+D8h] [rbp-1D8h]
  const char (*v96)[12]; // [rsp+E0h] [rbp-1D0h]
  unsigned int *v97; // [rsp+E8h] [rbp-1C8h]
  const char (*v98)[15]; // [rsp+F0h] [rbp-1C0h]
  unsigned int *v99; // [rsp+F8h] [rbp-1B8h]
  const char (*v100)[21]; // [rsp+100h] [rbp-1B0h]
  bool *v101; // [rsp+108h] [rbp-1A8h]
  const char (*v102)[10]; // [rsp+110h] [rbp-1A0h]
  unsigned int *v103; // [rsp+118h] [rbp-198h]
  const char (*v104)[19]; // [rsp+120h] [rbp-190h]
  bool *v105; // [rsp+128h] [rbp-188h]
  const char (*v106)[17]; // [rsp+130h] [rbp-180h]
  bool *v107; // [rsp+138h] [rbp-178h]
  const char (*v108)[20]; // [rsp+140h] [rbp-170h]
  unsigned int *v109; // [rsp+148h] [rbp-168h]
  const char (*v110)[21]; // [rsp+150h] [rbp-160h]
  unsigned int *v111; // [rsp+158h] [rbp-158h]
  const char (*v112)[8]; // [rsp+160h] [rbp-150h]
  unsigned int *v113; // [rsp+168h] [rbp-148h]
  const char (*v114)[9]; // [rsp+170h] [rbp-140h]
  unsigned int *v115; // [rsp+178h] [rbp-138h]
  const char (*v116)[11]; // [rsp+180h] [rbp-130h]
  unsigned int *v117; // [rsp+188h] [rbp-128h]
  const char (*v118)[11]; // [rsp+190h] [rbp-120h]
  unsigned int *v119; // [rsp+198h] [rbp-118h]
  const char (*v120)[14]; // [rsp+1A0h] [rbp-110h]
  unsigned int *v121; // [rsp+1A8h] [rbp-108h]
  const char (*v122)[14]; // [rsp+1B0h] [rbp-100h]
  bool *v123; // [rsp+1B8h] [rbp-F8h]
  int32_t ret; // [rsp+1FCh] [rbp-B4h]
  unsigned int reta; // [rsp+1FCh] [rbp-B4h]
  char v130[176]; // [rsp+200h] [rbp-B0h] BYREF

  v62 = (unsigned __int64)v130;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v63 = __asan_stack_malloc_1(128LL);
    if ( v63 )
      v62 = v63;
  }
  *(_QWORD *)v62 = 1102416563LL;
  *(_QWORD *)(v62 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v62 + 16) = ScriptUtil::getTableValue<data::GadgetState,char const(&)[11],unsigned int &,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v64 = (_DWORD *)(v62 >> 3);
  v64[536862720] = -235802127;
  v64[536862721] = -234753551;
  v64[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<data::GadgetState>(a1, a2, a3, a4);
  v123 = std::forward<bool &>(args_57);
  v122 = std::forward<char const(&)[14]>(args_56);
  v121 = std::forward<unsigned int &>(args_55);
  v120 = std::forward<char const(&)[14]>(args_54);
  v119 = std::forward<unsigned int &>(args_53);
  v118 = std::forward<char const(&)[11]>(args_52);
  v117 = std::forward<unsigned int &>(args_51);
  v116 = std::forward<char const(&)[11]>(args_50);
  v115 = std::forward<unsigned int &>(args_49);
  v114 = std::forward<char const(&)[9]>(args_48);
  v113 = std::forward<unsigned int &>(args_47);
  v112 = std::forward<char const(&)[8]>(args_46);
  v111 = std::forward<unsigned int &>(args_45);
  v110 = std::forward<char const(&)[21]>(args_44);
  v109 = std::forward<unsigned int &>(args_43);
  v108 = std::forward<char const(&)[20]>(args_42);
  v107 = std::forward<bool &>(args_41);
  v106 = std::forward<char const(&)[17]>(args_40);
  v105 = std::forward<bool &>(args_39);
  v104 = std::forward<char const(&)[19]>(args_38);
  v103 = std::forward<unsigned int &>(args_37);
  v102 = std::forward<char const(&)[10]>(args_36);
  v101 = std::forward<bool &>(args_35);
  v100 = std::forward<char const(&)[21]>(args_34);
  v99 = std::forward<unsigned int &>(args_33);
  v98 = std::forward<char const(&)[15]>(args_32);
  v97 = std::forward<unsigned int &>(args_31);
  v96 = std::forward<char const(&)[12]>(args_30);
  v95 = std::forward<unsigned int &>(args_29);
  v94 = std::forward<char const(&)[5]>(args_28);
  v93 = std::forward<std::string &>(args_27);
  v92 = std::forward<char const(&)[9]>(args_26);
  v91 = std::forward<proto::GadgetBornType &>(args_25);
  v90 = std::forward<char const(&)[10]>(args_24);
  v89 = std::forward<unsigned int &>(args_23);
  v88 = std::forward<char const(&)[14]>(args_22);
  v87 = std::forward<bool &>(args_21);
  v86 = std::forward<char const(&)[19]>(args_20);
  v85 = std::forward<unsigned int &>(args_19);
  v84 = std::forward<char const(&)[9]>(args_18);
  v83 = std::forward<unsigned int &>(args_17);
  v82 = std::forward<char const(&)[6]>(args_16);
  v81 = std::forward<data::PlatformRotType &>(args_15);
  v80 = std::forward<char const(&)[18]>(args_14);
  v79 = std::forward<bool &>(args_13);
  v78 = std::forward<char const(&)[12]>(args_12);
  v77 = std::forward<bool &>(args_11);
  v76 = std::forward<char const(&)[11]>(args_10);
  v75 = std::forward<bool &>(args_9);
  v74 = std::forward<char const(&)[9]>(args_8);
  v73 = std::forward<bool &>(args_7);
  v72 = std::forward<char const(&)[9]>(args_6);
  v71 = std::forward<bool &>(args_5);
  v65 = std::forward<char const(&)[13]>(args_4);
  v70 = (unsigned int)std::forward<data::GadgetType &>(args_3);
  v69 = (unsigned int)std::forward<char const(&)[5]>(args_2);
  v66 = (unsigned int)std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v62 + 48);
  v67 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v62 + 64),
    v67,
    (const std::allocator<char> *)(v62 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v62 + 64,
           v66,
           v69,
           v70,
           v65,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103,
           v104,
           v105,
           v106,
           v107,
           v108,
           v109,
           v110,
           v111,
           v112,
           v113,
           v114,
           v115,
           v116,
           v117,
           v118,
           v119,
           v120,
           v121,
           v122,
           v123) | ret;
  std::string::~string((void *)(v62 + 64));
  *(_DWORD *)(((v62 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v62 + 48);
  result = reta;
  if ( v130 == (char *)v62 )
  {
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v62 = 1172321806LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F91158C-000000000F911D36
__int64 __fastcall ScriptUtil::getTableValue<data::GadgetType,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        data::GadgetType *a4,
        std::remove_reference<char const (&)[13]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[11]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[12]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[18]>::type *args_10,
        data::PlatformRotType *args_11,
        std::remove_reference<char const (&)[6]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[9]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[19]>::type *args_16,
        bool *args_17,
        std::remove_reference<char const (&)[14]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[10]>::type *args_20,
        proto::GadgetBornType *args_21,
        std::remove_reference<char const (&)[9]>::type *args_22,
        std::string *args_23,
        std::remove_reference<char const (&)[5]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[12]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[15]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[21]>::type *args_30,
        bool *args_31,
        std::remove_reference<char const (&)[10]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[19]>::type *args_34,
        bool *args_35,
        std::remove_reference<char const (&)[17]>::type *args_36,
        bool *args_37,
        std::remove_reference<char const (&)[20]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[21]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[8]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[9]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[11]>::type *args_46,
        unsigned int *args_47,
        std::remove_reference<char const (&)[11]>::type *args_48,
        unsigned int *args_49,
        std::remove_reference<char const (&)[14]>::type *args_50,
        unsigned int *args_51,
        std::remove_reference<char const (&)[14]>::type *args_52,
        bool *args_53)
{
  unsigned __int64 v58; // rbx
  __int64 v59; // rax
  _DWORD *v60; // r13
  std::remove_reference<char const (&)[9]>::type *v61; // r14
  bool *v62; // r15
  const char *v63; // rax
  __int64 result; // rax
  char (*v65)[9]; // [rsp+8h] [rbp-288h]
  std::remove_reference<bool&>::type *v66; // [rsp+10h] [rbp-280h]
  bool *v67; // [rsp+18h] [rbp-278h]
  char (*v68)[11]; // [rsp+20h] [rbp-270h]
  bool *v69; // [rsp+28h] [rbp-268h]
  char (*v70)[12]; // [rsp+30h] [rbp-260h]
  bool *v71; // [rsp+38h] [rbp-258h]
  char (*v72)[18]; // [rsp+40h] [rbp-250h]
  data::PlatformRotType *v73; // [rsp+48h] [rbp-248h]
  char (*v74)[6]; // [rsp+50h] [rbp-240h]
  unsigned int *v75; // [rsp+58h] [rbp-238h]
  char (*v76)[9]; // [rsp+60h] [rbp-230h]
  unsigned int *v77; // [rsp+68h] [rbp-228h]
  char (*v78)[19]; // [rsp+70h] [rbp-220h]
  bool *v79; // [rsp+78h] [rbp-218h]
  char (*v80)[14]; // [rsp+80h] [rbp-210h]
  unsigned int *v81; // [rsp+88h] [rbp-208h]
  char (*v82)[10]; // [rsp+90h] [rbp-200h]
  proto::GadgetBornType *v83; // [rsp+98h] [rbp-1F8h]
  char (*v84)[9]; // [rsp+A0h] [rbp-1F0h]
  std::string *v85; // [rsp+A8h] [rbp-1E8h]
  char (*v86)[5]; // [rsp+B0h] [rbp-1E0h]
  unsigned int *v87; // [rsp+B8h] [rbp-1D8h]
  char (*v88)[12]; // [rsp+C0h] [rbp-1D0h]
  unsigned int *v89; // [rsp+C8h] [rbp-1C8h]
  char (*v90)[15]; // [rsp+D0h] [rbp-1C0h]
  unsigned int *v91; // [rsp+D8h] [rbp-1B8h]
  char (*v92)[21]; // [rsp+E0h] [rbp-1B0h]
  bool *v93; // [rsp+E8h] [rbp-1A8h]
  char (*v94)[10]; // [rsp+F0h] [rbp-1A0h]
  unsigned int *v95; // [rsp+F8h] [rbp-198h]
  char (*v96)[19]; // [rsp+100h] [rbp-190h]
  bool *v97; // [rsp+108h] [rbp-188h]
  char (*v98)[17]; // [rsp+110h] [rbp-180h]
  bool *v99; // [rsp+118h] [rbp-178h]
  char (*v100)[20]; // [rsp+120h] [rbp-170h]
  unsigned int *v101; // [rsp+128h] [rbp-168h]
  char (*v102)[21]; // [rsp+130h] [rbp-160h]
  unsigned int *v103; // [rsp+138h] [rbp-158h]
  char (*v104)[8]; // [rsp+140h] [rbp-150h]
  unsigned int *v105; // [rsp+148h] [rbp-148h]
  char (*v106)[9]; // [rsp+150h] [rbp-140h]
  unsigned int *v107; // [rsp+158h] [rbp-138h]
  char (*v108)[11]; // [rsp+160h] [rbp-130h]
  unsigned int *v109; // [rsp+168h] [rbp-128h]
  char (*v110)[11]; // [rsp+170h] [rbp-120h]
  unsigned int *v111; // [rsp+178h] [rbp-118h]
  char (*v112)[14]; // [rsp+180h] [rbp-110h]
  unsigned int *v113; // [rsp+188h] [rbp-108h]
  char (*v114)[14]; // [rsp+190h] [rbp-100h]
  bool *v115; // [rsp+198h] [rbp-F8h]
  int32_t ret; // [rsp+1DCh] [rbp-B4h]
  unsigned int reta; // [rsp+1DCh] [rbp-B4h]
  char v122[176]; // [rsp+1E0h] [rbp-B0h] BYREF

  v58 = (unsigned __int64)v122;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v59 = __asan_stack_malloc_1(128LL);
    if ( v59 )
      v58 = v59;
  }
  *(_QWORD *)v58 = 1102416563LL;
  *(_QWORD *)(v58 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v58 + 16) = ScriptUtil::getTableValue<data::GadgetType,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v60 = (_DWORD *)(v58 >> 3);
  v60[536862720] = -235802127;
  v60[536862721] = -234753551;
  v60[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<data::GadgetType>(a1, a2, a3, a4);
  v115 = std::forward<bool &>(args_53);
  v114 = (char (*)[14])std::forward<char const(&)[14]>(args_52);
  v113 = std::forward<unsigned int &>(args_51);
  v112 = (char (*)[14])std::forward<char const(&)[14]>(args_50);
  v111 = std::forward<unsigned int &>(args_49);
  v110 = (char (*)[11])std::forward<char const(&)[11]>(args_48);
  v109 = std::forward<unsigned int &>(args_47);
  v108 = (char (*)[11])std::forward<char const(&)[11]>(args_46);
  v107 = std::forward<unsigned int &>(args_45);
  v106 = (char (*)[9])std::forward<char const(&)[9]>(args_44);
  v105 = std::forward<unsigned int &>(args_43);
  v104 = (char (*)[8])std::forward<char const(&)[8]>(args_42);
  v103 = std::forward<unsigned int &>(args_41);
  v102 = (char (*)[21])std::forward<char const(&)[21]>(args_40);
  v101 = std::forward<unsigned int &>(args_39);
  v100 = (char (*)[20])std::forward<char const(&)[20]>(args_38);
  v99 = std::forward<bool &>(args_37);
  v98 = (char (*)[17])std::forward<char const(&)[17]>(args_36);
  v97 = std::forward<bool &>(args_35);
  v96 = (char (*)[19])std::forward<char const(&)[19]>(args_34);
  v95 = std::forward<unsigned int &>(args_33);
  v94 = (char (*)[10])std::forward<char const(&)[10]>(args_32);
  v93 = std::forward<bool &>(args_31);
  v92 = (char (*)[21])std::forward<char const(&)[21]>(args_30);
  v91 = std::forward<unsigned int &>(args_29);
  v90 = (char (*)[15])std::forward<char const(&)[15]>(args_28);
  v89 = std::forward<unsigned int &>(args_27);
  v88 = (char (*)[12])std::forward<char const(&)[12]>(args_26);
  v87 = std::forward<unsigned int &>(args_25);
  v86 = (char (*)[5])std::forward<char const(&)[5]>(args_24);
  v85 = std::forward<std::string &>(args_23);
  v84 = (char (*)[9])std::forward<char const(&)[9]>(args_22);
  v83 = std::forward<proto::GadgetBornType &>(args_21);
  v82 = (char (*)[10])std::forward<char const(&)[10]>(args_20);
  v81 = std::forward<unsigned int &>(args_19);
  v80 = (char (*)[14])std::forward<char const(&)[14]>(args_18);
  v79 = std::forward<bool &>(args_17);
  v78 = (char (*)[19])std::forward<char const(&)[19]>(args_16);
  v77 = std::forward<unsigned int &>(args_15);
  v76 = (char (*)[9])std::forward<char const(&)[9]>(args_14);
  v75 = std::forward<unsigned int &>(args_13);
  v74 = (char (*)[6])std::forward<char const(&)[6]>(args_12);
  v73 = std::forward<data::PlatformRotType &>(args_11);
  v72 = (char (*)[18])std::forward<char const(&)[18]>(args_10);
  v71 = std::forward<bool &>(args_9);
  v70 = (char (*)[12])std::forward<char const(&)[12]>(args_8);
  v69 = std::forward<bool &>(args_7);
  v68 = (char (*)[11])std::forward<char const(&)[11]>(args_6);
  v67 = std::forward<bool &>(args_5);
  v61 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_4);
  v66 = std::forward<bool &>(args_3);
  v65 = (char (*)[9])std::forward<char const(&)[9]>(args_2);
  v62 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v58 + 48);
  v63 = (const char *)std::forward<char const(&)[13]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v58 + 64),
    v63,
    (const std::allocator<char> *)(v58 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v58 + 64),
           v62,
           v65,
           v66,
           v61,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103,
           v104,
           v105,
           v106,
           v107,
           v108,
           v109,
           v110,
           v111,
           v112,
           v113,
           v114,
           v115) | ret;
  std::string::~string((void *)(v58 + 64));
  *(_DWORD *)(((v58 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v58 + 48);
  result = reta;
  if ( v122 == (char *)v58 )
  {
    *(_QWORD *)((v58 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v58 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v58 = 1172321806LL;
    *(_QWORD *)((v58 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v58 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9F49F6-000000000F9F5050
__int64 __fastcall ScriptUtil::getTableValue<data::PlatformRotType,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        data::PlatformRotType *a4,
        std::remove_reference<char const (&)[6]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[19]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[10]>::type *args_8,
        proto::GadgetBornType *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        std::string *args_11,
        std::remove_reference<char const (&)[5]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[12]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[15]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[21]>::type *args_18,
        bool *args_19,
        std::remove_reference<char const (&)[10]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[19]>::type *args_22,
        bool *args_23,
        std::remove_reference<char const (&)[17]>::type *args_24,
        bool *args_25,
        std::remove_reference<char const (&)[20]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[21]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[8]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[9]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[11]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[11]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[14]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[14]>::type *args_40,
        bool *args_41)
{
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  _DWORD *v48; // r13
  const char (*v49)[19]; // r15
  unsigned int v50; // r14d
  const char *v51; // rax
  __int64 result; // rax
  unsigned int v53; // [rsp+8h] [rbp-228h]
  unsigned int v54; // [rsp+10h] [rbp-220h]
  bool *v55; // [rsp+18h] [rbp-218h]
  const char (*v56)[14]; // [rsp+20h] [rbp-210h]
  unsigned int *v57; // [rsp+28h] [rbp-208h]
  const char (*v58)[10]; // [rsp+30h] [rbp-200h]
  proto::GadgetBornType *v59; // [rsp+38h] [rbp-1F8h]
  const char (*v60)[9]; // [rsp+40h] [rbp-1F0h]
  std::string *v61; // [rsp+48h] [rbp-1E8h]
  const char (*v62)[5]; // [rsp+50h] [rbp-1E0h]
  unsigned int *v63; // [rsp+58h] [rbp-1D8h]
  const char (*v64)[12]; // [rsp+60h] [rbp-1D0h]
  unsigned int *v65; // [rsp+68h] [rbp-1C8h]
  const char (*v66)[15]; // [rsp+70h] [rbp-1C0h]
  unsigned int *v67; // [rsp+78h] [rbp-1B8h]
  const char (*v68)[21]; // [rsp+80h] [rbp-1B0h]
  bool *v69; // [rsp+88h] [rbp-1A8h]
  const char (*v70)[10]; // [rsp+90h] [rbp-1A0h]
  unsigned int *v71; // [rsp+98h] [rbp-198h]
  const char (*v72)[19]; // [rsp+A0h] [rbp-190h]
  bool *v73; // [rsp+A8h] [rbp-188h]
  const char (*v74)[17]; // [rsp+B0h] [rbp-180h]
  bool *v75; // [rsp+B8h] [rbp-178h]
  const char (*v76)[20]; // [rsp+C0h] [rbp-170h]
  unsigned int *v77; // [rsp+C8h] [rbp-168h]
  const char (*v78)[21]; // [rsp+D0h] [rbp-160h]
  unsigned int *v79; // [rsp+D8h] [rbp-158h]
  const char (*v80)[8]; // [rsp+E0h] [rbp-150h]
  unsigned int *v81; // [rsp+E8h] [rbp-148h]
  const char (*v82)[9]; // [rsp+F0h] [rbp-140h]
  unsigned int *v83; // [rsp+F8h] [rbp-138h]
  const char (*v84)[11]; // [rsp+100h] [rbp-130h]
  unsigned int *v85; // [rsp+108h] [rbp-128h]
  const char (*v86)[11]; // [rsp+110h] [rbp-120h]
  unsigned int *v87; // [rsp+118h] [rbp-118h]
  const char (*v88)[14]; // [rsp+120h] [rbp-110h]
  unsigned int *v89; // [rsp+128h] [rbp-108h]
  const char (*v90)[14]; // [rsp+130h] [rbp-100h]
  bool *v91; // [rsp+138h] [rbp-F8h]
  int32_t ret; // [rsp+17Ch] [rbp-B4h]
  unsigned int reta; // [rsp+17Ch] [rbp-B4h]
  char v98[176]; // [rsp+180h] [rbp-B0h] BYREF

  v46 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v47 = __asan_stack_malloc_1(128LL);
    if ( v47 )
      v46 = v47;
  }
  *(_QWORD *)v46 = 1102416563LL;
  *(_QWORD *)(v46 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v46 + 16) = ScriptUtil::getTableValue<data::PlatformRotType,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v48 = (_DWORD *)(v46 >> 3);
  v48[536862720] = -235802127;
  v48[536862721] = -234753551;
  v48[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<data::PlatformRotType>(a1, a2, a3, a4);
  v91 = std::forward<bool &>(args_41);
  v90 = std::forward<char const(&)[14]>(args_40);
  v89 = std::forward<unsigned int &>(args_39);
  v88 = std::forward<char const(&)[14]>(args_38);
  v87 = std::forward<unsigned int &>(args_37);
  v86 = std::forward<char const(&)[11]>(args_36);
  v85 = std::forward<unsigned int &>(args_35);
  v84 = std::forward<char const(&)[11]>(args_34);
  v83 = std::forward<unsigned int &>(args_33);
  v82 = std::forward<char const(&)[9]>(args_32);
  v81 = std::forward<unsigned int &>(args_31);
  v80 = std::forward<char const(&)[8]>(args_30);
  v79 = std::forward<unsigned int &>(args_29);
  v78 = std::forward<char const(&)[21]>(args_28);
  v77 = std::forward<unsigned int &>(args_27);
  v76 = std::forward<char const(&)[20]>(args_26);
  v75 = std::forward<bool &>(args_25);
  v74 = std::forward<char const(&)[17]>(args_24);
  v73 = std::forward<bool &>(args_23);
  v72 = std::forward<char const(&)[19]>(args_22);
  v71 = std::forward<unsigned int &>(args_21);
  v70 = std::forward<char const(&)[10]>(args_20);
  v69 = std::forward<bool &>(args_19);
  v68 = std::forward<char const(&)[21]>(args_18);
  v67 = std::forward<unsigned int &>(args_17);
  v66 = std::forward<char const(&)[15]>(args_16);
  v65 = std::forward<unsigned int &>(args_15);
  v64 = std::forward<char const(&)[12]>(args_14);
  v63 = std::forward<unsigned int &>(args_13);
  v62 = std::forward<char const(&)[5]>(args_12);
  v61 = std::forward<std::string &>(args_11);
  v60 = std::forward<char const(&)[9]>(args_10);
  v59 = std::forward<proto::GadgetBornType &>(args_9);
  v58 = std::forward<char const(&)[10]>(args_8);
  v57 = std::forward<unsigned int &>(args_7);
  v56 = std::forward<char const(&)[14]>(args_6);
  v55 = std::forward<bool &>(args_5);
  v49 = std::forward<char const(&)[19]>(args_4);
  v54 = (unsigned int)std::forward<unsigned int &>(args_3);
  v53 = (unsigned int)std::forward<char const(&)[9]>(args_2);
  v50 = (unsigned int)std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v46 + 48);
  v51 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v46 + 64),
    v51,
    (const std::allocator<char> *)(v46 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v46 + 64,
           v50,
           v53,
           v54,
           v49,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91) | ret;
  std::string::~string((void *)(v46 + 64));
  *(_DWORD *)(((v46 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v46 + 48);
  result = reta;
  if ( v98 == (char *)v46 )
  {
    *(_QWORD *)((v46 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v46 = 1172321806LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83CE5C-000000000F83D07B
__int64 __fastcall ScriptUtil::getTableValue<data::RegionShape,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        data::RegionShape *val,
        std::remove_reference<char const (&)[4]>::type *a5,
        Vector3 *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  Vector3 *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<data::RegionShape,char const(&)[4],Vector3 &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<data::RegionShape>(this, table, name, val);
  v9 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[4]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F7E137C-000000000F7E159B
__int64 __fastcall ScriptUtil::getTableValue<float,char const(&)[2],float &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        float *val,
        std::remove_reference<char const (&)[2]>::type *a5,
        float *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  float *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<float,char const(&)[2],float &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<float>(this, table, name, val);
  v9 = std::forward<float &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[2]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<float>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F842942-000000000F842B61
__int64 __fastcall ScriptUtil::getTableValue<int,char const(&)[10],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        int *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<int,char const(&)[10],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000CECB8C0-000000000CECBB43
__int64 __fastcall ScriptUtil::getTableValue<int,char const(&)[9],unsigned int &,char const(&)[12],unsigned int &,char const(&)[11],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[12]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[11]>::type *args_4,
        bool *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  bool *v13; // r15
  std::remove_reference<char const (&)[11]>::type *v14; // r14
  const char *v15; // rax
  __int64 result; // rax
  unsigned int *v17; // [rsp+8h] [rbp-108h]
  char (*v18)[12]; // [rsp+10h] [rbp-100h]
  unsigned int *v19; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<int,char const(&)[9],unsigned int &,char const(&)[12],unsigned int &,char const(&)[11],bool &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<int>(this, table, name, val);
  v13 = std::forward<bool &>(args_5);
  v14 = (std::remove_reference<char const (&)[11]>::type *)std::forward<char const(&)[11]>(args_4);
  v19 = std::forward<unsigned int &>(args_3);
  v18 = (char (*)[12])std::forward<char const(&)[12]>(args_2);
  v17 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[11],bool &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v17,
           v18,
           v19,
           v14,
           v13) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v26 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E6A70-000000000F7E6CC0
__int64 __fastcall ScriptUtil::getTableValue<luabind::adl::object,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        luabind::adl::object *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        unsigned int *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  const char (*v11)[11]; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  char *v15; // [rsp+0h] [rbp-100h]
  unsigned int *v16; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v23[16][11]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<luabind::adl::object,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue(this, table, name, val);
  v16 = std::forward<unsigned int &>(args_3);
  v11 = std::forward<char const(&)[11]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v16,
           v23,
           v16) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v15 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA073A6-000000000FA078E8
__int64 __fastcall ScriptUtil::getTableValue<proto::GadgetBornType,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        proto::GadgetBornType *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<std::string&>::type *a6,
        std::remove_reference<char const (&)[5]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[12]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[15]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[21]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[10]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[19]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[17]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[20]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[21]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[8]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[9]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[11]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[11]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[14]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[14]>::type *args_30,
        bool *args_31)
{
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // r13
  const char (*v39)[12]; // r15
  unsigned int v40; // r14d
  const char *v41; // rax
  __int64 result; // rax
  unsigned int v43; // [rsp+8h] [rbp-1D8h]
  unsigned int v44; // [rsp+10h] [rbp-1D0h]
  unsigned int *v45; // [rsp+18h] [rbp-1C8h]
  const char (*v46)[15]; // [rsp+20h] [rbp-1C0h]
  unsigned int *v47; // [rsp+28h] [rbp-1B8h]
  const char (*v48)[21]; // [rsp+30h] [rbp-1B0h]
  bool *v49; // [rsp+38h] [rbp-1A8h]
  const char (*v50)[10]; // [rsp+40h] [rbp-1A0h]
  unsigned int *v51; // [rsp+48h] [rbp-198h]
  const char (*v52)[19]; // [rsp+50h] [rbp-190h]
  bool *v53; // [rsp+58h] [rbp-188h]
  const char (*v54)[17]; // [rsp+60h] [rbp-180h]
  bool *v55; // [rsp+68h] [rbp-178h]
  const char (*v56)[20]; // [rsp+70h] [rbp-170h]
  unsigned int *v57; // [rsp+78h] [rbp-168h]
  const char (*v58)[21]; // [rsp+80h] [rbp-160h]
  unsigned int *v59; // [rsp+88h] [rbp-158h]
  const char (*v60)[8]; // [rsp+90h] [rbp-150h]
  unsigned int *v61; // [rsp+98h] [rbp-148h]
  const char (*v62)[9]; // [rsp+A0h] [rbp-140h]
  unsigned int *v63; // [rsp+A8h] [rbp-138h]
  const char (*v64)[11]; // [rsp+B0h] [rbp-130h]
  unsigned int *v65; // [rsp+B8h] [rbp-128h]
  const char (*v66)[11]; // [rsp+C0h] [rbp-120h]
  unsigned int *v67; // [rsp+C8h] [rbp-118h]
  const char (*v68)[14]; // [rsp+D0h] [rbp-110h]
  unsigned int *v69; // [rsp+D8h] [rbp-108h]
  const char (*v70)[14]; // [rsp+E0h] [rbp-100h]
  bool *v71; // [rsp+E8h] [rbp-F8h]
  int32_t ret; // [rsp+12Ch] [rbp-B4h]
  unsigned int reta; // [rsp+12Ch] [rbp-B4h]
  char v78[176]; // [rsp+130h] [rbp-B0h] BYREF

  v36 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v37 = __asan_stack_malloc_1(128LL);
    if ( v37 )
      v36 = v37;
  }
  *(_QWORD *)v36 = 1102416563LL;
  *(_QWORD *)(v36 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v36 + 16) = ScriptUtil::getTableValue<proto::GadgetBornType,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v38 = (_DWORD *)(v36 >> 3);
  v38[536862720] = -235802127;
  v38[536862721] = -234753551;
  v38[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<proto::GadgetBornType>(a1, a2, a3, a4);
  v71 = std::forward<bool &>(args_31);
  v70 = std::forward<char const(&)[14]>(args_30);
  v69 = std::forward<unsigned int &>(args_29);
  v68 = std::forward<char const(&)[14]>(args_28);
  v67 = std::forward<unsigned int &>(args_27);
  v66 = std::forward<char const(&)[11]>(args_26);
  v65 = std::forward<unsigned int &>(args_25);
  v64 = std::forward<char const(&)[11]>(args_24);
  v63 = std::forward<unsigned int &>(args_23);
  v62 = std::forward<char const(&)[9]>(args_22);
  v61 = std::forward<unsigned int &>(args_21);
  v60 = std::forward<char const(&)[8]>(args_20);
  v59 = std::forward<unsigned int &>(args_19);
  v58 = std::forward<char const(&)[21]>(args_18);
  v57 = std::forward<unsigned int &>(args_17);
  v56 = std::forward<char const(&)[20]>(args_16);
  v55 = std::forward<bool &>(args_15);
  v54 = std::forward<char const(&)[17]>(args_14);
  v53 = std::forward<bool &>(args_13);
  v52 = std::forward<char const(&)[19]>(args_12);
  v51 = std::forward<unsigned int &>(args_11);
  v50 = std::forward<char const(&)[10]>(args_10);
  v49 = std::forward<bool &>(args_9);
  v48 = std::forward<char const(&)[21]>(args_8);
  v47 = std::forward<unsigned int &>(args_7);
  v46 = std::forward<char const(&)[15]>(args_6);
  v45 = std::forward<unsigned int &>(args_5);
  v39 = std::forward<char const(&)[12]>(args_4);
  v44 = (unsigned int)std::forward<unsigned int &>(args_3);
  v43 = (unsigned int)std::forward<char const(&)[5]>(args_2);
  v40 = (unsigned int)std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v36 + 48);
  v41 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v36 + 64),
    v41,
    (const std::allocator<char> *)(v36 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           (_DWORD)a1,
           (_DWORD)a2,
           (int)v36 + 64,
           v40,
           v43,
           v44,
           v39,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71) | ret;
  std::string::~string((void *)(v36 + 64));
  *(_DWORD *)(((v36 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v36 + 48);
  result = reta;
  if ( v78 == (char *)v36 )
  {
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v36 = 1172321806LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F96045A-000000000F960811
__int64 __fastcall ScriptUtil::getTableValue<proto::GroupLoadStrategy,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        proto::GroupLoadStrategy *val,
        std::remove_reference<char const (&)[29]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[21]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[20]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[23]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[25]>::type *args_8,
        std::vector<std::string> *args_9,
        std::remove_reference<char const (&)[12]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[30]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[41]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[23]>::type *args_16,
        bool *args_17)
{
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // r13
  std::remove_reference<char const (&)[21]>::type *v25; // r15
  bool *v26; // r14
  const char *v27; // rax
  __int64 result; // rax
  bool *v29; // [rsp+8h] [rbp-168h]
  char (*v30)[20]; // [rsp+10h] [rbp-160h]
  bool *v31; // [rsp+18h] [rbp-158h]
  char (*v32)[23]; // [rsp+20h] [rbp-150h]
  bool *v33; // [rsp+28h] [rbp-148h]
  char (*v34)[25]; // [rsp+30h] [rbp-140h]
  std::vector<std::string> *v35; // [rsp+38h] [rbp-138h]
  char (*v36)[12]; // [rsp+40h] [rbp-130h]
  unsigned int *v37; // [rsp+48h] [rbp-128h]
  char (*v38)[30]; // [rsp+50h] [rbp-120h]
  unsigned int *v39; // [rsp+58h] [rbp-118h]
  char (*v40)[41]; // [rsp+60h] [rbp-110h]
  unsigned int *v41; // [rsp+68h] [rbp-108h]
  char (*v42)[23]; // [rsp+70h] [rbp-100h]
  bool *v43; // [rsp+78h] [rbp-F8h]
  int32_t ret; // [rsp+BCh] [rbp-B4h]
  unsigned int reta; // [rsp+BCh] [rbp-B4h]
  char v50[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v22 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_1(128LL);
    if ( v23 )
      v22 = v23;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v22 + 16) = ScriptUtil::getTableValue<proto::GroupLoadStrategy,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v24 = (_DWORD *)(v22 >> 3);
  v24[536862720] = -235802127;
  v24[536862721] = -234753551;
  v24[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<proto::GroupLoadStrategy>(this, table, name, val);
  v43 = std::forward<bool &>(args_17);
  v42 = (char (*)[23])std::forward<char const(&)[23]>(args_16);
  v41 = std::forward<unsigned int &>(args_15);
  v40 = (char (*)[41])std::forward<char const(&)[41]>(args_14);
  v39 = std::forward<unsigned int &>(args_13);
  v38 = (char (*)[30])std::forward<char const(&)[30]>(args_12);
  v37 = std::forward<unsigned int &>(args_11);
  v36 = (char (*)[12])std::forward<char const(&)[12]>(args_10);
  v35 = std::forward<std::vector<std::string> &>(args_9);
  v34 = (char (*)[25])std::forward<char const(&)[25]>(args_8);
  v33 = std::forward<bool &>(args_7);
  v32 = (char (*)[23])std::forward<char const(&)[23]>(args_6);
  v31 = std::forward<bool &>(args_5);
  v30 = (char (*)[20])std::forward<char const(&)[20]>(args_4);
  v29 = std::forward<bool &>(args_3);
  v25 = (std::remove_reference<char const (&)[21]>::type *)std::forward<char const(&)[21]>(args_2);
  v26 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v22 + 48);
  v27 = (const char *)std::forward<char const(&)[29]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v22 + 64),
    v27,
    (const std::allocator<char> *)(v22 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v22 + 64),
           v26,
           v25,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43) | ret;
  std::string::~string((void *)(v22 + 64));
  *(_DWORD *)(((v22 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v22 + 48);
  result = reta;
  if ( v50 == (char *)v22 )
  {
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v22 = 1172321806LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F90DFA4-000000000F90E1F4
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[10],std::string&,char const(&)[7],std::string&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        std::string *a6,
        std::remove_reference<char const (&)[7]>::type *args_2,
        std::string *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  const char (*v11)[7]; // r15
  std::string *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  char *v15; // [rsp+0h] [rbp-100h]
  std::string *v16; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v23[25][7]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[10],std::string&,char const(&)[7],std::string&>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v16 = std::forward<std::string &>(args_3);
  v11 = std::forward<char const(&)[7]>(args_2);
  v12 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[7],std::string&>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v16,
           v23,
           v16) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v15 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83D79E-000000000F83D9BD
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[4],std::string&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[4]>::type *a5,
        std::string *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::string *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[4],std::string&>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v9 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[4]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<std::string>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F98FB0A-000000000F98FFA4
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string&,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[5]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[15]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[16]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[21]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[11]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[16]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[8]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[14]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[17]>::type *args_20,
        std::string *args_21,
        std::remove_reference<char const (&)[16]>::type *args_22,
        bool *args_23,
        std::remove_reference<char const (&)[14]>::type *args_24,
        bool *args_25)
{
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  _DWORD *v32; // r13
  const char (*v33)[10]; // r15
  unsigned int *v34; // r14
  const char *v35; // rax
  __int64 result; // rax
  char *v37; // [rsp+0h] [rbp-1B0h]
  unsigned int *v38; // [rsp+8h] [rbp-1A8h]
  const char (*v39)[15]; // [rsp+10h] [rbp-1A0h]
  unsigned int *v40; // [rsp+18h] [rbp-198h]
  const char (*v41)[9]; // [rsp+20h] [rbp-190h]
  unsigned int *v42; // [rsp+28h] [rbp-188h]
  const char (*v43)[16]; // [rsp+30h] [rbp-180h]
  unsigned int *v44; // [rsp+38h] [rbp-178h]
  const char (*v45)[21]; // [rsp+40h] [rbp-170h]
  unsigned int *v46; // [rsp+48h] [rbp-168h]
  const char (*v47)[11]; // [rsp+50h] [rbp-160h]
  unsigned int *v48; // [rsp+58h] [rbp-158h]
  const char (*v49)[16]; // [rsp+60h] [rbp-150h]
  unsigned int *v50; // [rsp+68h] [rbp-148h]
  const char (*v51)[8]; // [rsp+70h] [rbp-140h]
  unsigned int *v52; // [rsp+78h] [rbp-138h]
  const char (*v53)[14]; // [rsp+80h] [rbp-130h]
  unsigned int *v54; // [rsp+88h] [rbp-128h]
  const char (*v55)[17]; // [rsp+90h] [rbp-120h]
  std::string *v56; // [rsp+98h] [rbp-118h]
  const char (*v57)[16]; // [rsp+A0h] [rbp-110h]
  bool *v58; // [rsp+A8h] [rbp-108h]
  const char (*v59)[14]; // [rsp+B0h] [rbp-100h]
  bool *v60; // [rsp+B8h] [rbp-F8h]
  int32_t ret; // [rsp+FCh] [rbp-B4h]
  unsigned int reta; // [rsp+FCh] [rbp-B4h]
  char v67[17][10]; // [rsp+100h] [rbp-B0h] BYREF

  v30 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v31 = __asan_stack_malloc_1(128LL);
    if ( v31 )
      v30 = v31;
  }
  *(_QWORD *)v30 = 1102416563LL;
  *(_QWORD *)(v30 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v30 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string&,char const(&)[16],bool &,char const(&)[14],bool &>;
  v32 = (_DWORD *)(v30 >> 3);
  v32[536862720] = -235802127;
  v32[536862721] = -234753551;
  v32[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v60 = std::forward<bool &>(args_25);
  v59 = std::forward<char const(&)[14]>(args_24);
  v58 = std::forward<bool &>(args_23);
  v57 = std::forward<char const(&)[16]>(args_22);
  v56 = std::forward<std::string &>(args_21);
  v55 = std::forward<char const(&)[17]>(args_20);
  v54 = std::forward<unsigned int &>(args_19);
  v53 = std::forward<char const(&)[14]>(args_18);
  v52 = std::forward<unsigned int &>(args_17);
  v51 = std::forward<char const(&)[8]>(args_16);
  v50 = std::forward<unsigned int &>(args_15);
  v49 = std::forward<char const(&)[16]>(args_14);
  v48 = std::forward<unsigned int &>(args_13);
  v47 = std::forward<char const(&)[11]>(args_12);
  v46 = std::forward<unsigned int &>(args_11);
  v45 = std::forward<char const(&)[21]>(args_10);
  v44 = std::forward<unsigned int &>(args_9);
  v43 = std::forward<char const(&)[16]>(args_8);
  v42 = std::forward<unsigned int &>(args_7);
  v41 = std::forward<char const(&)[9]>(args_6);
  v40 = std::forward<unsigned int &>(args_5);
  v39 = std::forward<char const(&)[15]>(args_4);
  v38 = std::forward<unsigned int &>(args_3);
  v33 = std::forward<char const(&)[10]>(args_2);
  v34 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v30 + 48);
  v35 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v30 + 64),
    v35,
    (const std::allocator<char> *)(v30 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v30 + 64),
           v34,
           v33,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v67,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60) | ret;
  std::string::~string((void *)(v30 + 64));
  *(_DWORD *)(((v30 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v30 + 48);
  result = reta;
  if ( v37 == (char *)v30 )
  {
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v30 = 1172321806LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA09C0E-000000000FA0A118
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        std::string *a4,
        std::remove_reference<char const (&)[5]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[12]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[15]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[21]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[10]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[19]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[17]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[20]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[21]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[8]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[9]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[11]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[11]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[14]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[14]>::type *args_28,
        bool *args_29)
{
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  _DWORD *v36; // r13
  const char (*v37)[15]; // r15
  unsigned int *v38; // r14
  const char *v39; // rax
  __int64 result; // rax
  char *v41; // [rsp+0h] [rbp-1D0h]
  char (*v42)[12]; // [rsp+8h] [rbp-1C8h]
  unsigned int *v43; // [rsp+10h] [rbp-1C0h]
  unsigned int *v44; // [rsp+18h] [rbp-1B8h]
  const char (*v45)[21]; // [rsp+20h] [rbp-1B0h]
  bool *v46; // [rsp+28h] [rbp-1A8h]
  const char (*v47)[10]; // [rsp+30h] [rbp-1A0h]
  unsigned int *v48; // [rsp+38h] [rbp-198h]
  const char (*v49)[19]; // [rsp+40h] [rbp-190h]
  bool *v50; // [rsp+48h] [rbp-188h]
  const char (*v51)[17]; // [rsp+50h] [rbp-180h]
  bool *v52; // [rsp+58h] [rbp-178h]
  const char (*v53)[20]; // [rsp+60h] [rbp-170h]
  unsigned int *v54; // [rsp+68h] [rbp-168h]
  const char (*v55)[21]; // [rsp+70h] [rbp-160h]
  unsigned int *v56; // [rsp+78h] [rbp-158h]
  const char (*v57)[8]; // [rsp+80h] [rbp-150h]
  unsigned int *v58; // [rsp+88h] [rbp-148h]
  const char (*v59)[9]; // [rsp+90h] [rbp-140h]
  unsigned int *v60; // [rsp+98h] [rbp-138h]
  const char (*v61)[11]; // [rsp+A0h] [rbp-130h]
  unsigned int *v62; // [rsp+A8h] [rbp-128h]
  const char (*v63)[11]; // [rsp+B0h] [rbp-120h]
  unsigned int *v64; // [rsp+B8h] [rbp-118h]
  const char (*v65)[14]; // [rsp+C0h] [rbp-110h]
  unsigned int *v66; // [rsp+C8h] [rbp-108h]
  const char (*v67)[14]; // [rsp+D0h] [rbp-100h]
  bool *v68; // [rsp+D8h] [rbp-F8h]
  int32_t ret; // [rsp+11Ch] [rbp-B4h]
  unsigned int reta; // [rsp+11Ch] [rbp-B4h]
  char v75[14][12]; // [rsp+120h] [rbp-B0h] BYREF

  v34 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v35 = __asan_stack_malloc_1(128LL);
    if ( v35 )
      v34 = v35;
  }
  *(_QWORD *)v34 = 1102416563LL;
  *(_QWORD *)(v34 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v34 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v36 = (_DWORD *)(v34 >> 3);
  v36[536862720] = -235802127;
  v36[536862721] = -234753551;
  v36[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(a1, a2, a3, a4);
  v68 = std::forward<bool &>(args_29);
  v67 = std::forward<char const(&)[14]>(args_28);
  v66 = std::forward<unsigned int &>(args_27);
  v65 = std::forward<char const(&)[14]>(args_26);
  v64 = std::forward<unsigned int &>(args_25);
  v63 = std::forward<char const(&)[11]>(args_24);
  v62 = std::forward<unsigned int &>(args_23);
  v61 = std::forward<char const(&)[11]>(args_22);
  v60 = std::forward<unsigned int &>(args_21);
  v59 = std::forward<char const(&)[9]>(args_20);
  v58 = std::forward<unsigned int &>(args_19);
  v57 = std::forward<char const(&)[8]>(args_18);
  v56 = std::forward<unsigned int &>(args_17);
  v55 = std::forward<char const(&)[21]>(args_16);
  v54 = std::forward<unsigned int &>(args_15);
  v53 = std::forward<char const(&)[20]>(args_14);
  v52 = std::forward<bool &>(args_13);
  v51 = std::forward<char const(&)[17]>(args_12);
  v50 = std::forward<bool &>(args_11);
  v49 = std::forward<char const(&)[19]>(args_10);
  v48 = std::forward<unsigned int &>(args_9);
  v47 = std::forward<char const(&)[10]>(args_8);
  v46 = std::forward<bool &>(args_7);
  v45 = std::forward<char const(&)[21]>(args_6);
  v44 = std::forward<unsigned int &>(args_5);
  v37 = std::forward<char const(&)[15]>(args_4);
  v43 = std::forward<unsigned int &>(args_3);
  v42 = (char (*)[12])std::forward<char const(&)[12]>(args_2);
  v38 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v34 + 48);
  v39 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v34 + 64),
    v39,
    (const std::allocator<char> *)(v34 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v34 + 64),
           v38,
           v42,
           v43,
           v37,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v75,
           (unsigned int *)v42,
           (const char (*)[15])v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68) | ret;
  std::string::~string((void *)(v34 + 64));
  *(_DWORD *)(((v34 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v34 + 48);
  result = reta;
  if ( v41 == (char *)v34 )
  {
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v34 = 1172321806LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83D4E8-000000000F83D79D
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[6],data::EventType &,char const(&)[7],std::string&,char const(&)[10],std::string&,char const(&)[7],std::string&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        data::EventType *a6,
        std::remove_reference<char const (&)[7]>::type *args_2,
        std::string *args_3,
        std::remove_reference<char const (&)[10]>::type *args_4,
        std::string *args_5,
        std::remove_reference<char const (&)[7]>::type *args_6,
        std::string *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  std::string *v15; // r15
  std::remove_reference<char const (&)[10]>::type *v16; // r14
  const char *v17; // rax
  __int64 result; // rax
  data::EventType *v19; // [rsp+8h] [rbp-118h]
  char (*v20)[7]; // [rsp+10h] [rbp-110h]
  std::string *v21; // [rsp+18h] [rbp-108h]
  char (*v22)[7]; // [rsp+20h] [rbp-100h]
  std::string *v23; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v30[176]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[6],data::EventType &,char const(&)[7],std::string&,char const(&)[10],std::string&,char const(&)[7],std::string&>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v23 = std::forward<std::string &>(args_7);
  v22 = (char (*)[7])std::forward<char const(&)[7]>(args_6);
  v15 = std::forward<std::string &>(args_5);
  v16 = (std::remove_reference<char const (&)[10]>::type *)std::forward<char const(&)[10]>(args_4);
  v21 = std::forward<std::string &>(args_3);
  v20 = (char (*)[7])std::forward<char const(&)[7]>(args_2);
  v19 = std::forward<data::EventType &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<data::EventType,char const(&)[7],std::string &,char const(&)[10],std::string &,char const(&)[7],std::string &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v19,
           v20,
           v21,
           v16,
           v15,
           v22,
           v23) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v30 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E6EDC-000000000F7E712C
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[6],int &,char const(&)[10],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        int *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        unsigned int *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[10]>::type *v11; // r15
  int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  unsigned int *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[6],int &,char const(&)[10],unsigned int &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v15 = std::forward<unsigned int &>(args_3);
  v11 = (std::remove_reference<char const (&)[10]>::type *)std::forward<char const(&)[10]>(args_2);
  v12 = std::forward<int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<int,char const(&)[10],unsigned int &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E4FAC-000000000F7E51CB
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[6],int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[6],int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v9 = std::forward<int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F95A628-000000000F95A847
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[7],std::string&>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[7]>::type *a5,
        std::string *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::string *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[7],std::string&>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v9 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[7]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<std::string>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F9F506C-000000000F9F5321
__int64 __fastcall ScriptUtil::getTableValue<std::vector<std::string>,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::vector<std::string> *val,
        std::remove_reference<char const (&)[12]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[30]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[41]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[23]>::type *args_6,
        bool *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  unsigned int *v15; // r15
  const char (*v16)[41]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  unsigned int *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[30]; // [rsp+10h] [rbp-110h]
  unsigned int *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[23]; // [rsp+20h] [rbp-100h]
  bool *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[5][30]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<std::vector<std::string>,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::vector<std::string>>(this, table, name, val);
  v24 = std::forward<bool &>(args_7);
  v23 = std::forward<char const(&)[23]>(args_6);
  v15 = std::forward<unsigned int &>(args_5);
  v16 = std::forward<char const(&)[41]>(args_4);
  v22 = std::forward<unsigned int &>(args_3);
  v21 = std::forward<char const(&)[30]>(args_2);
  v20 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[12]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           v20,
           (const char (*)[41])v21,
           v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA05CC2-000000000FA0623C
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[10]>::type *a5,
        std::remove_reference<proto::GadgetBornType&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        std::string *args_3,
        std::remove_reference<char const (&)[5]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[12]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[15]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[21]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[10]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[19]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[17]>::type *args_16,
        bool *args_17,
        std::remove_reference<char const (&)[20]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[21]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[8]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[9]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[11]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[11]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[14]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[14]>::type *args_32,
        bool *args_33)
{
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  _DWORD *v40; // r13
  std::remove_reference<char const (&)[5]>::type *v41; // r15
  proto::GadgetBornType *v42; // r14
  const char *v43; // rax
  __int64 result; // rax
  char (*v45)[9]; // [rsp+8h] [rbp-1E8h]
  std::remove_reference<std::string&>::type *v46; // [rsp+10h] [rbp-1E0h]
  unsigned int *v47; // [rsp+18h] [rbp-1D8h]
  char (*v48)[12]; // [rsp+20h] [rbp-1D0h]
  unsigned int *v49; // [rsp+28h] [rbp-1C8h]
  char (*v50)[15]; // [rsp+30h] [rbp-1C0h]
  unsigned int *v51; // [rsp+38h] [rbp-1B8h]
  char (*v52)[21]; // [rsp+40h] [rbp-1B0h]
  bool *v53; // [rsp+48h] [rbp-1A8h]
  char (*v54)[10]; // [rsp+50h] [rbp-1A0h]
  unsigned int *v55; // [rsp+58h] [rbp-198h]
  char (*v56)[19]; // [rsp+60h] [rbp-190h]
  bool *v57; // [rsp+68h] [rbp-188h]
  char (*v58)[17]; // [rsp+70h] [rbp-180h]
  bool *v59; // [rsp+78h] [rbp-178h]
  char (*v60)[20]; // [rsp+80h] [rbp-170h]
  unsigned int *v61; // [rsp+88h] [rbp-168h]
  char (*v62)[21]; // [rsp+90h] [rbp-160h]
  unsigned int *v63; // [rsp+98h] [rbp-158h]
  char (*v64)[8]; // [rsp+A0h] [rbp-150h]
  unsigned int *v65; // [rsp+A8h] [rbp-148h]
  char (*v66)[9]; // [rsp+B0h] [rbp-140h]
  unsigned int *v67; // [rsp+B8h] [rbp-138h]
  char (*v68)[11]; // [rsp+C0h] [rbp-130h]
  unsigned int *v69; // [rsp+C8h] [rbp-128h]
  char (*v70)[11]; // [rsp+D0h] [rbp-120h]
  unsigned int *v71; // [rsp+D8h] [rbp-118h]
  char (*v72)[14]; // [rsp+E0h] [rbp-110h]
  unsigned int *v73; // [rsp+E8h] [rbp-108h]
  char (*v74)[14]; // [rsp+F0h] [rbp-100h]
  bool *v75; // [rsp+F8h] [rbp-F8h]
  int32_t ret; // [rsp+13Ch] [rbp-B4h]
  unsigned int reta; // [rsp+13Ch] [rbp-B4h]
  char v82[176]; // [rsp+140h] [rbp-B0h] BYREF

  v38 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v39 = __asan_stack_malloc_1(128LL);
    if ( v39 )
      v38 = v39;
  }
  *(_QWORD *)v38 = 1102416563LL;
  *(_QWORD *)(v38 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v38 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v40 = (_DWORD *)(v38 >> 3);
  v40[536862720] = -235802127;
  v40[536862721] = -234753551;
  v40[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v75 = std::forward<bool &>(args_33);
  v74 = (char (*)[14])std::forward<char const(&)[14]>(args_32);
  v73 = std::forward<unsigned int &>(args_31);
  v72 = (char (*)[14])std::forward<char const(&)[14]>(args_30);
  v71 = std::forward<unsigned int &>(args_29);
  v70 = (char (*)[11])std::forward<char const(&)[11]>(args_28);
  v69 = std::forward<unsigned int &>(args_27);
  v68 = (char (*)[11])std::forward<char const(&)[11]>(args_26);
  v67 = std::forward<unsigned int &>(args_25);
  v66 = (char (*)[9])std::forward<char const(&)[9]>(args_24);
  v65 = std::forward<unsigned int &>(args_23);
  v64 = (char (*)[8])std::forward<char const(&)[8]>(args_22);
  v63 = std::forward<unsigned int &>(args_21);
  v62 = (char (*)[21])std::forward<char const(&)[21]>(args_20);
  v61 = std::forward<unsigned int &>(args_19);
  v60 = (char (*)[20])std::forward<char const(&)[20]>(args_18);
  v59 = std::forward<bool &>(args_17);
  v58 = (char (*)[17])std::forward<char const(&)[17]>(args_16);
  v57 = std::forward<bool &>(args_15);
  v56 = (char (*)[19])std::forward<char const(&)[19]>(args_14);
  v55 = std::forward<unsigned int &>(args_13);
  v54 = (char (*)[10])std::forward<char const(&)[10]>(args_12);
  v53 = std::forward<bool &>(args_11);
  v52 = (char (*)[21])std::forward<char const(&)[21]>(args_10);
  v51 = std::forward<unsigned int &>(args_9);
  v50 = (char (*)[15])std::forward<char const(&)[15]>(args_8);
  v49 = std::forward<unsigned int &>(args_7);
  v48 = (char (*)[12])std::forward<char const(&)[12]>(args_6);
  v47 = std::forward<unsigned int &>(args_5);
  v41 = (std::remove_reference<char const (&)[5]>::type *)std::forward<char const(&)[5]>(args_4);
  v46 = std::forward<std::string &>(args_3);
  v45 = (char (*)[9])std::forward<char const(&)[9]>(args_2);
  v42 = std::forward<proto::GadgetBornType &>(a6);
  std::allocator<char>::allocator(v38 + 48);
  v43 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v38 + 64),
    v43,
    (const std::allocator<char> *)(v38 + 48));
  reta = ScriptUtil::getTableValue<proto::GadgetBornType,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v38 + 64),
           v42,
           v45,
           v46,
           v41,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75) | ret;
  std::string::~string((void *)(v38 + 64));
  *(_DWORD *)(((v38 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v38 + 48);
  result = reta;
  if ( v82 == (char *)v38 )
  {
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v38 = 1172321806LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E31D2-000000000F7E34ED
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[11],bool &,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[13]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[14]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[19]>::type *args_10,
        unsigned int *args_11)
{
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r13
  unsigned int *v19; // r14
  const char (*v20)[19]; // r15
  const char *v21; // rax
  __int64 result; // rax
  char *v23; // [rsp+0h] [rbp-140h]
  unsigned int *v24; // [rsp+8h] [rbp-138h]
  const char (*v25)[11]; // [rsp+10h] [rbp-130h]
  bool *v26; // [rsp+18h] [rbp-128h]
  const char (*v27)[8]; // [rsp+20h] [rbp-120h]
  unsigned int *v28; // [rsp+28h] [rbp-118h]
  const char (*v29)[13]; // [rsp+30h] [rbp-110h]
  unsigned int *v30; // [rsp+38h] [rbp-108h]
  const char (*v31)[14]; // [rsp+40h] [rbp-100h]
  unsigned int *v32; // [rsp+48h] [rbp-F8h]
  int32_t ret; // [rsp+8Ch] [rbp-B4h]
  unsigned int reta; // [rsp+8Ch] [rbp-B4h]
  char v39[16][11]; // [rsp+90h] [rbp-B0h] BYREF

  v16 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v16 = v17;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v16 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[11],bool &,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>;
  v18 = (_DWORD *)(v16 >> 3);
  v18[536862720] = -235802127;
  v18[536862721] = -234753551;
  v18[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v19 = std::forward<unsigned int &>(args_11);
  v20 = std::forward<char const(&)[19]>(args_10);
  v32 = std::forward<unsigned int &>(args_9);
  v31 = std::forward<char const(&)[14]>(args_8);
  v30 = std::forward<unsigned int &>(args_7);
  v29 = std::forward<char const(&)[13]>(args_6);
  v28 = std::forward<unsigned int &>(args_5);
  v27 = std::forward<char const(&)[8]>(args_4);
  v26 = std::forward<bool &>(args_3);
  v25 = std::forward<char const(&)[11]>(args_2);
  v24 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v16 + 48);
  v21 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v16 + 64),
    v21,
    (const std::allocator<char> *)(v16 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],bool &,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
           this,
           table,
           (const std::string *)(v16 + 64),
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v20,
           v19,
           v39,
           (bool *)v24,
           (const char (*)[8])v25,
           (unsigned int *)v26,
           (const char (*)[13])v27,
           v28,
           (const char (*)[14])v29,
           v30,
           (const char (*)[19])v31,
           v32) | ret;
  std::string::~string((void *)(v16 + 64));
  *(_DWORD *)(((v16 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v16 + 48);
  result = reta;
  if ( v23 == (char *)v16 )
  {
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9B3612-000000000F9B3A74
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[15]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[16]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[21]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[11]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[16]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[8]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[14]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[17]>::type *args_18,
        std::string *args_19,
        std::remove_reference<char const (&)[16]>::type *args_20,
        bool *args_21,
        std::remove_reference<char const (&)[14]>::type *args_22,
        bool *args_23)
{
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // r13
  const char (*v31)[15]; // r15
  unsigned int *v32; // r14
  const char *v33; // rax
  __int64 result; // rax
  char *v35; // [rsp+0h] [rbp-1A0h]
  unsigned int *v36; // [rsp+8h] [rbp-198h]
  const char (*v37)[9]; // [rsp+10h] [rbp-190h]
  unsigned int *v38; // [rsp+18h] [rbp-188h]
  const char (*v39)[16]; // [rsp+20h] [rbp-180h]
  unsigned int *v40; // [rsp+28h] [rbp-178h]
  const char (*v41)[21]; // [rsp+30h] [rbp-170h]
  unsigned int *v42; // [rsp+38h] [rbp-168h]
  const char (*v43)[11]; // [rsp+40h] [rbp-160h]
  unsigned int *v44; // [rsp+48h] [rbp-158h]
  const char (*v45)[16]; // [rsp+50h] [rbp-150h]
  unsigned int *v46; // [rsp+58h] [rbp-148h]
  const char (*v47)[8]; // [rsp+60h] [rbp-140h]
  unsigned int *v48; // [rsp+68h] [rbp-138h]
  const char (*v49)[14]; // [rsp+70h] [rbp-130h]
  unsigned int *v50; // [rsp+78h] [rbp-128h]
  const char (*v51)[17]; // [rsp+80h] [rbp-120h]
  std::string *v52; // [rsp+88h] [rbp-118h]
  const char (*v53)[16]; // [rsp+90h] [rbp-110h]
  bool *v54; // [rsp+98h] [rbp-108h]
  const char (*v55)[14]; // [rsp+A0h] [rbp-100h]
  bool *v56; // [rsp+A8h] [rbp-F8h]
  int32_t ret; // [rsp+ECh] [rbp-B4h]
  unsigned int reta; // [rsp+ECh] [rbp-B4h]
  char v63[11][15]; // [rsp+F0h] [rbp-B0h] BYREF

  v28 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v29 = __asan_stack_malloc_1(128LL);
    if ( v29 )
      v28 = v29;
  }
  *(_QWORD *)v28 = 1102416563LL;
  *(_QWORD *)(v28 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v28 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v30 = (_DWORD *)(v28 >> 3);
  v30[536862720] = -235802127;
  v30[536862721] = -234753551;
  v30[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v56 = std::forward<bool &>(args_23);
  v55 = std::forward<char const(&)[14]>(args_22);
  v54 = std::forward<bool &>(args_21);
  v53 = std::forward<char const(&)[16]>(args_20);
  v52 = std::forward<std::string &>(args_19);
  v51 = std::forward<char const(&)[17]>(args_18);
  v50 = std::forward<unsigned int &>(args_17);
  v49 = std::forward<char const(&)[14]>(args_16);
  v48 = std::forward<unsigned int &>(args_15);
  v47 = std::forward<char const(&)[8]>(args_14);
  v46 = std::forward<unsigned int &>(args_13);
  v45 = std::forward<char const(&)[16]>(args_12);
  v44 = std::forward<unsigned int &>(args_11);
  v43 = std::forward<char const(&)[11]>(args_10);
  v42 = std::forward<unsigned int &>(args_9);
  v41 = std::forward<char const(&)[21]>(args_8);
  v40 = std::forward<unsigned int &>(args_7);
  v39 = std::forward<char const(&)[16]>(args_6);
  v38 = std::forward<unsigned int &>(args_5);
  v37 = std::forward<char const(&)[9]>(args_4);
  v36 = std::forward<unsigned int &>(args_3);
  v31 = std::forward<char const(&)[15]>(args_2);
  v32 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v28 + 48);
  v33 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v28 + 64),
    v33,
    (const std::allocator<char> *)(v28 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v28 + 64),
           v32,
           v31,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v63,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56) | ret;
  std::string::~string((void *)(v28 + 64));
  *(_DWORD *)(((v28 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v28 + 48);
  result = reta;
  if ( v35 == (char *)v28 )
  {
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v28 = 1172321806LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D3FDBB2-000000000D3FE04C
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[15]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[16]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[21]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[11]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[16]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[8]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[4]>::type *args_16,
        unsigned __int64 *args_17,
        std::remove_reference<char const (&)[12]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[13]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[18]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[16]>::type *args_24,
        bool *args_25)
{
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  _DWORD *v32; // r13
  const char (*v33)[15]; // r15
  unsigned int *v34; // r14
  const char *v35; // rax
  __int64 result; // rax
  char *v37; // [rsp+0h] [rbp-1B0h]
  unsigned int *v38; // [rsp+8h] [rbp-1A8h]
  const char (*v39)[9]; // [rsp+10h] [rbp-1A0h]
  unsigned int *v40; // [rsp+18h] [rbp-198h]
  const char (*v41)[16]; // [rsp+20h] [rbp-190h]
  unsigned int *v42; // [rsp+28h] [rbp-188h]
  const char (*v43)[21]; // [rsp+30h] [rbp-180h]
  unsigned int *v44; // [rsp+38h] [rbp-178h]
  const char (*v45)[11]; // [rsp+40h] [rbp-170h]
  unsigned int *v46; // [rsp+48h] [rbp-168h]
  const char (*v47)[16]; // [rsp+50h] [rbp-160h]
  unsigned int *v48; // [rsp+58h] [rbp-158h]
  const char (*v49)[8]; // [rsp+60h] [rbp-150h]
  unsigned int *v50; // [rsp+68h] [rbp-148h]
  const char (*v51)[4]; // [rsp+70h] [rbp-140h]
  unsigned __int64 *v52; // [rsp+78h] [rbp-138h]
  const char (*v53)[12]; // [rsp+80h] [rbp-130h]
  unsigned int *v54; // [rsp+88h] [rbp-128h]
  const char (*v55)[13]; // [rsp+90h] [rbp-120h]
  unsigned int *v56; // [rsp+98h] [rbp-118h]
  const char (*v57)[18]; // [rsp+A0h] [rbp-110h]
  unsigned int *v58; // [rsp+A8h] [rbp-108h]
  const char (*v59)[16]; // [rsp+B0h] [rbp-100h]
  bool *v60; // [rsp+B8h] [rbp-F8h]
  int32_t ret; // [rsp+FCh] [rbp-B4h]
  unsigned int reta; // [rsp+FCh] [rbp-B4h]
  char v67[11][15]; // [rsp+100h] [rbp-B0h] BYREF

  v30 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v31 = __asan_stack_malloc_1(128LL);
    if ( v31 )
      v30 = v31;
  }
  *(_QWORD *)v30 = 1102416563LL;
  *(_QWORD *)(v30 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v30 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v32 = (_DWORD *)(v30 >> 3);
  v32[536862720] = -235802127;
  v32[536862721] = -234753551;
  v32[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v60 = std::forward<bool &>(args_25);
  v59 = std::forward<char const(&)[16]>(args_24);
  v58 = std::forward<unsigned int &>(args_23);
  v57 = std::forward<char const(&)[18]>(args_22);
  v56 = std::forward<unsigned int &>(args_21);
  v55 = std::forward<char const(&)[13]>(args_20);
  v54 = std::forward<unsigned int &>(args_19);
  v53 = std::forward<char const(&)[12]>(args_18);
  v52 = std::forward<unsigned long &>(args_17);
  v51 = std::forward<char const(&)[4]>(args_16);
  v50 = std::forward<unsigned int &>(args_15);
  v49 = std::forward<char const(&)[8]>(args_14);
  v48 = std::forward<unsigned int &>(args_13);
  v47 = std::forward<char const(&)[16]>(args_12);
  v46 = std::forward<unsigned int &>(args_11);
  v45 = std::forward<char const(&)[11]>(args_10);
  v44 = std::forward<unsigned int &>(args_9);
  v43 = std::forward<char const(&)[21]>(args_8);
  v42 = std::forward<unsigned int &>(args_7);
  v41 = std::forward<char const(&)[16]>(args_6);
  v40 = std::forward<unsigned int &>(args_5);
  v39 = std::forward<char const(&)[9]>(args_4);
  v38 = std::forward<unsigned int &>(args_3);
  v33 = std::forward<char const(&)[15]>(args_2);
  v34 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v30 + 48);
  v35 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v30 + 64),
    v35,
    (const std::allocator<char> *)(v30 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v30 + 64),
           v34,
           v33,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v67,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60) | ret;
  std::string::~string((void *)(v30 + 64));
  *(_DWORD *)(((v30 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v30 + 48);
  result = reta;
  if ( v37 == (char *)v30 )
  {
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v30 = 1172321806LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E5D14-000000000F7E5FC9
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[6]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[4]>::type *args_4,
        Vector3 *args_5,
        std::remove_reference<char const (&)[4]>::type *args_6,
        Vector3 *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  Vector3 *v15; // r15
  const char (*v16)[4]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  unsigned int *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[6]; // [rsp+10h] [rbp-110h]
  unsigned int *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[4]; // [rsp+20h] [rbp-100h]
  Vector3 *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[29][6]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v24 = std::forward<Vector3 &>(args_7);
  v23 = std::forward<char const(&)[4]>(args_6);
  v15 = std::forward<Vector3 &>(args_5);
  v16 = std::forward<char const(&)[4]>(args_4);
  v22 = std::forward<unsigned int &>(args_3);
  v21 = std::forward<char const(&)[6]>(args_2);
  v20 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           v20,
           (const char (*)[4])v21,
           (Vector3 *)v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F842042-000000000F842261
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F83F1C4-000000000F83F4AD
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],bool &,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[13]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[19]>::type *args_8,
        unsigned int *args_9)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // r13
  unsigned int *v17; // r14
  std::remove_reference<char const (&)[13]>::type *v18; // r15
  const char *v19; // rax
  __int64 result; // rax
  bool *v21; // [rsp+8h] [rbp-128h]
  char (*v22)[8]; // [rsp+10h] [rbp-120h]
  unsigned int *v23; // [rsp+18h] [rbp-118h]
  unsigned int *v24; // [rsp+20h] [rbp-110h]
  char (*v25)[14]; // [rsp+28h] [rbp-108h]
  unsigned int *v26; // [rsp+30h] [rbp-100h]
  char (*v27)[19]; // [rsp+38h] [rbp-F8h]
  int32_t ret; // [rsp+7Ch] [rbp-B4h]
  unsigned int reta; // [rsp+7Ch] [rbp-B4h]
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v14 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v14 = v15;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v14 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],bool &,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>;
  v16 = (_DWORD *)(v14 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234753551;
  v16[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v17 = std::forward<unsigned int &>(args_9);
  v27 = (char (*)[19])std::forward<char const(&)[19]>(args_8);
  v26 = std::forward<unsigned int &>(args_7);
  v25 = (char (*)[14])std::forward<char const(&)[14]>(args_6);
  v24 = std::forward<unsigned int &>(args_5);
  v18 = (std::remove_reference<char const (&)[13]>::type *)std::forward<char const(&)[13]>(args_4);
  v23 = std::forward<unsigned int &>(args_3);
  v22 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v21 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v14 + 48);
  v19 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v14 + 64),
    v19,
    (const std::allocator<char> *)(v14 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
           this,
           table,
           (const std::string *)(v14 + 64),
           v21,
           v22,
           v23,
           v18,
           v24,
           v25,
           v26,
           v27,
           v17) | ret;
  std::string::~string((void *)(v14 + 64));
  *(_DWORD *)(((v14 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v14 + 48);
  result = reta;
  if ( v34 == (char *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v14 = 1172321806LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D0B3A56-000000000D0B3C75
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        bool *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  bool *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],bool &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<bool>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000FA0E9DA-000000000FA0EC8F
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        bool *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  unsigned int *v15; // r15
  const char (*v16)[14]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  unsigned int *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[11]; // [rsp+10h] [rbp-110h]
  unsigned int *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[14]; // [rsp+20h] [rbp-100h]
  bool *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[16][11]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v24 = std::forward<bool &>(args_7);
  v23 = std::forward<char const(&)[14]>(args_6);
  v15 = std::forward<unsigned int &>(args_5);
  v16 = std::forward<char const(&)[14]>(args_4);
  v22 = std::forward<unsigned int &>(args_3);
  v21 = std::forward<char const(&)[11]>(args_2);
  v20 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           v20,
           (const char (*)[14])v21,
           v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0EC90-000000000FA0EF13
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        bool *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  bool *v13; // r15
  const char (*v14)[14]; // r14
  const char *v15; // rax
  __int64 result; // rax
  char *v17; // [rsp+0h] [rbp-110h]
  unsigned int *v18; // [rsp+8h] [rbp-108h]
  const char (*v19)[14]; // [rsp+10h] [rbp-100h]
  unsigned int *v20; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v27[12][14]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<bool &>(args_5);
  v14 = std::forward<char const(&)[14]>(args_4);
  v20 = std::forward<unsigned int &>(args_3);
  v19 = std::forward<char const(&)[14]>(args_2);
  v18 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v18,
           v19,
           v20,
           v14,
           v13,
           v27,
           v18,
           v19,
           (bool *)v20) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v17 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA00474-000000000FA007C1
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[16]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[17]>::type *args_8,
        std::string *args_9,
        std::remove_reference<char const (&)[16]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[14]>::type *args_12,
        bool *args_13)
{
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  _DWORD *v20; // r13
  bool *v21; // r15
  unsigned int *v22; // r14
  const char *v23; // rax
  __int64 result; // rax
  char *v25; // [rsp+0h] [rbp-150h]
  char (*v26)[16]; // [rsp+8h] [rbp-148h]
  unsigned int *v27; // [rsp+10h] [rbp-140h]
  char (*v28)[8]; // [rsp+18h] [rbp-138h]
  unsigned int *v29; // [rsp+20h] [rbp-130h]
  char (*v30)[14]; // [rsp+28h] [rbp-128h]
  unsigned int *v31; // [rsp+30h] [rbp-120h]
  char (*v32)[17]; // [rsp+38h] [rbp-118h]
  std::string *v33; // [rsp+40h] [rbp-110h]
  char (*v34)[16]; // [rsp+48h] [rbp-108h]
  bool *v35; // [rsp+50h] [rbp-100h]
  char (*v36)[14]; // [rsp+58h] [rbp-F8h]
  int32_t ret; // [rsp+9Ch] [rbp-B4h]
  unsigned int reta; // [rsp+9Ch] [rbp-B4h]
  char v43[11][16]; // [rsp+A0h] [rbp-B0h] BYREF

  v18 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v18 = v19;
  }
  *(_QWORD *)v18 = 1102416563LL;
  *(_QWORD *)(v18 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v18 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v20 = (_DWORD *)(v18 >> 3);
  v20[536862720] = -235802127;
  v20[536862721] = -234753551;
  v20[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v21 = std::forward<bool &>(args_13);
  v36 = (char (*)[14])std::forward<char const(&)[14]>(args_12);
  v35 = std::forward<bool &>(args_11);
  v34 = (char (*)[16])std::forward<char const(&)[16]>(args_10);
  v33 = std::forward<std::string &>(args_9);
  v32 = (char (*)[17])std::forward<char const(&)[17]>(args_8);
  v31 = std::forward<unsigned int &>(args_7);
  v30 = (char (*)[14])std::forward<char const(&)[14]>(args_6);
  v29 = std::forward<unsigned int &>(args_5);
  v28 = (char (*)[8])std::forward<char const(&)[8]>(args_4);
  v27 = std::forward<unsigned int &>(args_3);
  v26 = (char (*)[16])std::forward<char const(&)[16]>(args_2);
  v22 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v18 + 48);
  v23 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v18 + 64),
    v23,
    (const std::allocator<char> *)(v18 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v18 + 64),
           v22,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v21,
           v43,
           (unsigned int *)v26,
           (const char (*)[8])v27,
           (unsigned int *)v28,
           (const char (*)[14])v29,
           (unsigned int *)v30,
           (const char (*)[17])v31,
           (std::string *)v32,
           (const char (*)[16])&v33->_M_dataplus._M_p,
           (bool *)v34,
           (const char (*)[14])v35,
           (bool *)v36) | ret;
  std::string::~string((void *)(v18 + 64));
  *(_DWORD *)(((v18 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v18 + 48);
  result = reta;
  if ( v25 == (char *)v18 )
  {
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v18 = 1172321806LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D47AE68-000000000D47B1E7
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[16]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[4]>::type *args_6,
        unsigned __int64 *args_7,
        std::remove_reference<char const (&)[12]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[13]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[18]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[16]>::type *args_14,
        bool *args_15)
{
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  _DWORD *v22; // r13
  const char (*v23)[16]; // r15
  unsigned int *v24; // r14
  const char *v25; // rax
  __int64 result; // rax
  char *v27; // [rsp+0h] [rbp-160h]
  unsigned int *v28; // [rsp+8h] [rbp-158h]
  const char (*v29)[8]; // [rsp+10h] [rbp-150h]
  unsigned int *v30; // [rsp+18h] [rbp-148h]
  const char (*v31)[4]; // [rsp+20h] [rbp-140h]
  unsigned __int64 *v32; // [rsp+28h] [rbp-138h]
  const char (*v33)[12]; // [rsp+30h] [rbp-130h]
  unsigned int *v34; // [rsp+38h] [rbp-128h]
  const char (*v35)[13]; // [rsp+40h] [rbp-120h]
  unsigned int *v36; // [rsp+48h] [rbp-118h]
  const char (*v37)[18]; // [rsp+50h] [rbp-110h]
  unsigned int *v38; // [rsp+58h] [rbp-108h]
  const char (*v39)[16]; // [rsp+60h] [rbp-100h]
  bool *v40; // [rsp+68h] [rbp-F8h]
  int32_t ret; // [rsp+ACh] [rbp-B4h]
  unsigned int reta; // [rsp+ACh] [rbp-B4h]
  char v47[11][16]; // [rsp+B0h] [rbp-B0h] BYREF

  v20 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_1(128LL);
    if ( v21 )
      v20 = v21;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v20 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v22 = (_DWORD *)(v20 >> 3);
  v22[536862720] = -235802127;
  v22[536862721] = -234753551;
  v22[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v40 = std::forward<bool &>(args_15);
  v39 = std::forward<char const(&)[16]>(args_14);
  v38 = std::forward<unsigned int &>(args_13);
  v37 = std::forward<char const(&)[18]>(args_12);
  v36 = std::forward<unsigned int &>(args_11);
  v35 = std::forward<char const(&)[13]>(args_10);
  v34 = std::forward<unsigned int &>(args_9);
  v33 = std::forward<char const(&)[12]>(args_8);
  v32 = std::forward<unsigned long &>(args_7);
  v31 = std::forward<char const(&)[4]>(args_6);
  v30 = std::forward<unsigned int &>(args_5);
  v29 = std::forward<char const(&)[8]>(args_4);
  v28 = std::forward<unsigned int &>(args_3);
  v23 = std::forward<char const(&)[16]>(args_2);
  v24 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v20 + 48);
  v25 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v20 + 64),
    v25,
    (const std::allocator<char> *)(v20 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v20 + 64),
           v24,
           v23,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v47,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40) | ret;
  std::string::~string((void *)(v20 + 64));
  *(_DWORD *)(((v20 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v20 + 48);
  result = reta;
  if ( v27 == (char *)v20 )
  {
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v20 = 1172321806LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7DD626-000000000F7DD8DB
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[6]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[4]>::type *args_4,
        Vector3 *args_5,
        std::remove_reference<char const (&)[4]>::type *args_6,
        Vector3 *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  Vector3 *v15; // r15
  const char (*v16)[4]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  unsigned int *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[6]; // [rsp+10h] [rbp-110h]
  unsigned int *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[4]; // [rsp+20h] [rbp-100h]
  Vector3 *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[29][6]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v24 = std::forward<Vector3 &>(args_7);
  v23 = std::forward<char const(&)[4]>(args_6);
  v15 = std::forward<Vector3 &>(args_5);
  v16 = std::forward<char const(&)[4]>(args_4);
  v22 = std::forward<unsigned int &>(args_3);
  v21 = std::forward<char const(&)[6]>(args_2);
  v20 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           v20,
           (const char (*)[4])v21,
           (Vector3 *)v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000CED5480-000000000CED569F
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[11]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[11]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000FA0ACA0-000000000FA0B172
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[12]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[15]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[21]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[10]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[19]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[17]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[20]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[21]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[8]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[9]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[11]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[11]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[14]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[14]>::type *args_26,
        bool *args_27)
{
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  _DWORD *v34; // r13
  const char (*v35)[21]; // r15
  unsigned int *v36; // r14
  const char *v37; // rax
  __int64 result; // rax
  char *v39; // [rsp+0h] [rbp-1C0h]
  char (*v40)[15]; // [rsp+8h] [rbp-1B8h]
  unsigned int *v41; // [rsp+10h] [rbp-1B0h]
  bool *v42; // [rsp+18h] [rbp-1A8h]
  const char (*v43)[10]; // [rsp+20h] [rbp-1A0h]
  unsigned int *v44; // [rsp+28h] [rbp-198h]
  const char (*v45)[19]; // [rsp+30h] [rbp-190h]
  bool *v46; // [rsp+38h] [rbp-188h]
  const char (*v47)[17]; // [rsp+40h] [rbp-180h]
  bool *v48; // [rsp+48h] [rbp-178h]
  const char (*v49)[20]; // [rsp+50h] [rbp-170h]
  unsigned int *v50; // [rsp+58h] [rbp-168h]
  const char (*v51)[21]; // [rsp+60h] [rbp-160h]
  unsigned int *v52; // [rsp+68h] [rbp-158h]
  const char (*v53)[8]; // [rsp+70h] [rbp-150h]
  unsigned int *v54; // [rsp+78h] [rbp-148h]
  const char (*v55)[9]; // [rsp+80h] [rbp-140h]
  unsigned int *v56; // [rsp+88h] [rbp-138h]
  const char (*v57)[11]; // [rsp+90h] [rbp-130h]
  unsigned int *v58; // [rsp+98h] [rbp-128h]
  const char (*v59)[11]; // [rsp+A0h] [rbp-120h]
  unsigned int *v60; // [rsp+A8h] [rbp-118h]
  const char (*v61)[14]; // [rsp+B0h] [rbp-110h]
  unsigned int *v62; // [rsp+B8h] [rbp-108h]
  const char (*v63)[14]; // [rsp+C0h] [rbp-100h]
  bool *v64; // [rsp+C8h] [rbp-F8h]
  int32_t ret; // [rsp+10Ch] [rbp-B4h]
  unsigned int reta; // [rsp+10Ch] [rbp-B4h]
  char v71[11][15]; // [rsp+110h] [rbp-B0h] BYREF

  v32 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v33 = __asan_stack_malloc_1(128LL);
    if ( v33 )
      v32 = v33;
  }
  *(_QWORD *)v32 = 1102416563LL;
  *(_QWORD *)(v32 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v32 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v34 = (_DWORD *)(v32 >> 3);
  v34[536862720] = -235802127;
  v34[536862721] = -234753551;
  v34[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v64 = std::forward<bool &>(args_27);
  v63 = std::forward<char const(&)[14]>(args_26);
  v62 = std::forward<unsigned int &>(args_25);
  v61 = std::forward<char const(&)[14]>(args_24);
  v60 = std::forward<unsigned int &>(args_23);
  v59 = std::forward<char const(&)[11]>(args_22);
  v58 = std::forward<unsigned int &>(args_21);
  v57 = std::forward<char const(&)[11]>(args_20);
  v56 = std::forward<unsigned int &>(args_19);
  v55 = std::forward<char const(&)[9]>(args_18);
  v54 = std::forward<unsigned int &>(args_17);
  v53 = std::forward<char const(&)[8]>(args_16);
  v52 = std::forward<unsigned int &>(args_15);
  v51 = std::forward<char const(&)[21]>(args_14);
  v50 = std::forward<unsigned int &>(args_13);
  v49 = std::forward<char const(&)[20]>(args_12);
  v48 = std::forward<bool &>(args_11);
  v47 = std::forward<char const(&)[17]>(args_10);
  v46 = std::forward<bool &>(args_9);
  v45 = std::forward<char const(&)[19]>(args_8);
  v44 = std::forward<unsigned int &>(args_7);
  v43 = std::forward<char const(&)[10]>(args_6);
  v42 = std::forward<bool &>(args_5);
  v35 = std::forward<char const(&)[21]>(args_4);
  v41 = std::forward<unsigned int &>(args_3);
  v40 = (char (*)[15])std::forward<char const(&)[15]>(args_2);
  v36 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v32 + 48);
  v37 = (const char *)std::forward<char const(&)[12]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v32 + 64),
    v37,
    (const std::allocator<char> *)(v32 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v32 + 64),
           v36,
           v40,
           v41,
           v35,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v71,
           (unsigned int *)v40,
           (const char (*)[21])v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64) | ret;
  std::string::~string((void *)(v32 + 64));
  *(_DWORD *)(((v32 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v32 + 48);
  result = reta;
  if ( v39 == (char *)v32 )
  {
    *(_QWORD *)((v32 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v32 = 1172321806LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E5AA6-000000000F7E5CC5
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[12]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[12]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F843334-000000000F843796
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[13],bool &,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[13]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[23]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        proto::GroupLoadStrategy *args_5,
        std::remove_reference<char const (&)[29]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[21]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[20]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[23]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[25]>::type *args_14,
        std::vector<std::string> *args_15,
        std::remove_reference<char const (&)[12]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[30]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[41]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[23]>::type *args_22,
        bool *args_23)
{
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // r13
  std::remove_reference<char const (&)[23]>::type *v31; // r15
  bool *v32; // r14
  const char *v33; // rax
  __int64 result; // rax
  bool *v35; // [rsp+8h] [rbp-198h]
  char (*v36)[14]; // [rsp+10h] [rbp-190h]
  proto::GroupLoadStrategy *v37; // [rsp+18h] [rbp-188h]
  char (*v38)[29]; // [rsp+20h] [rbp-180h]
  bool *v39; // [rsp+28h] [rbp-178h]
  char (*v40)[21]; // [rsp+30h] [rbp-170h]
  bool *v41; // [rsp+38h] [rbp-168h]
  char (*v42)[20]; // [rsp+40h] [rbp-160h]
  bool *v43; // [rsp+48h] [rbp-158h]
  char (*v44)[23]; // [rsp+50h] [rbp-150h]
  bool *v45; // [rsp+58h] [rbp-148h]
  char (*v46)[25]; // [rsp+60h] [rbp-140h]
  std::vector<std::string> *v47; // [rsp+68h] [rbp-138h]
  char (*v48)[12]; // [rsp+70h] [rbp-130h]
  unsigned int *v49; // [rsp+78h] [rbp-128h]
  char (*v50)[30]; // [rsp+80h] [rbp-120h]
  unsigned int *v51; // [rsp+88h] [rbp-118h]
  char (*v52)[41]; // [rsp+90h] [rbp-110h]
  unsigned int *v53; // [rsp+98h] [rbp-108h]
  char (*v54)[23]; // [rsp+A0h] [rbp-100h]
  bool *v55; // [rsp+A8h] [rbp-F8h]
  int32_t ret; // [rsp+ECh] [rbp-B4h]
  unsigned int reta; // [rsp+ECh] [rbp-B4h]
  char v62[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v28 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v29 = __asan_stack_malloc_1(128LL);
    if ( v29 )
      v28 = v29;
  }
  *(_QWORD *)v28 = 1102416563LL;
  *(_QWORD *)(v28 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v28 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[13],bool &,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v30 = (_DWORD *)(v28 >> 3);
  v30[536862720] = -235802127;
  v30[536862721] = -234753551;
  v30[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v55 = std::forward<bool &>(args_23);
  v54 = (char (*)[23])std::forward<char const(&)[23]>(args_22);
  v53 = std::forward<unsigned int &>(args_21);
  v52 = (char (*)[41])std::forward<char const(&)[41]>(args_20);
  v51 = std::forward<unsigned int &>(args_19);
  v50 = (char (*)[30])std::forward<char const(&)[30]>(args_18);
  v49 = std::forward<unsigned int &>(args_17);
  v48 = (char (*)[12])std::forward<char const(&)[12]>(args_16);
  v47 = std::forward<std::vector<std::string> &>(args_15);
  v46 = (char (*)[25])std::forward<char const(&)[25]>(args_14);
  v45 = std::forward<bool &>(args_13);
  v44 = (char (*)[23])std::forward<char const(&)[23]>(args_12);
  v43 = std::forward<bool &>(args_11);
  v42 = (char (*)[20])std::forward<char const(&)[20]>(args_10);
  v41 = std::forward<bool &>(args_9);
  v40 = (char (*)[21])std::forward<char const(&)[21]>(args_8);
  v39 = std::forward<bool &>(args_7);
  v38 = (char (*)[29])std::forward<char const(&)[29]>(args_6);
  v37 = std::forward<proto::GroupLoadStrategy &>(args_5);
  v36 = (char (*)[14])std::forward<char const(&)[14]>(args_4);
  v35 = std::forward<bool &>(args_3);
  v31 = (std::remove_reference<char const (&)[23]>::type *)std::forward<char const(&)[23]>(args_2);
  v32 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v28 + 48);
  v33 = (const char *)std::forward<char const(&)[13]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v28 + 64),
    v33,
    (const std::allocator<char> *)(v28 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v28 + 64),
           v32,
           v31,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55) | ret;
  std::string::~string((void *)(v28 + 64));
  *(_DWORD *)(((v28 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v28 + 48);
  result = reta;
  if ( v62 == (char *)v28 )
  {
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v28 = 1172321806LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F90EEAE-000000000F90F131
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[13]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[19]>::type *args_4,
        unsigned int *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  unsigned int *v13; // r15
  const char (*v14)[19]; // r14
  const char *v15; // rax
  __int64 result; // rax
  char *v17; // [rsp+0h] [rbp-110h]
  unsigned int *v18; // [rsp+8h] [rbp-108h]
  const char (*v19)[14]; // [rsp+10h] [rbp-100h]
  unsigned int *v20; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v27[12][14]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<unsigned int &>(args_5);
  v14 = std::forward<char const(&)[19]>(args_4);
  v20 = std::forward<unsigned int &>(args_3);
  v19 = std::forward<char const(&)[14]>(args_2);
  v18 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[13]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v18,
           v19,
           v20,
           v14,
           v13,
           v27,
           v18,
           (const char (*)[19])v19,
           v20) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v17 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D48ECFC-000000000D48EF7F
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[13]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[18]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[16]>::type *args_4,
        bool *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  bool *v13; // r15
  const char (*v14)[16]; // r14
  const char *v15; // rax
  __int64 result; // rax
  char *v17; // [rsp+0h] [rbp-110h]
  unsigned int *v18; // [rsp+8h] [rbp-108h]
  const char (*v19)[18]; // [rsp+10h] [rbp-100h]
  unsigned int *v20; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v27[9][18]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<bool &>(args_5);
  v14 = std::forward<char const(&)[16]>(args_4);
  v20 = std::forward<unsigned int &>(args_3);
  v19 = std::forward<char const(&)[18]>(args_2);
  v18 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[13]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v18,
           v19,
           v20,
           v14,
           v13,
           v27,
           v18,
           (const char (*)[16])v19,
           (bool *)v20) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v17 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0F166-000000000FA0F385
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        bool *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  bool *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[14],bool &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<bool>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000FA0EF14-000000000FA0F164
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        bool *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[14]>::type *v11; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  bool *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<bool &>(args_3);
  v11 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA06F80-000000000FA07235
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[17]>::type *args_2,
        std::string *args_3,
        std::remove_reference<char const (&)[16]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        bool *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  bool *v15; // r15
  const char (*v16)[16]; // r14
  const char *v17; // rax
  __int64 result; // rax
  char *v19; // [rsp+0h] [rbp-120h]
  unsigned int *v20; // [rsp+8h] [rbp-118h]
  const char (*v21)[17]; // [rsp+10h] [rbp-110h]
  std::string *v22; // [rsp+18h] [rbp-108h]
  const char (*v23)[14]; // [rsp+20h] [rbp-100h]
  bool *v24; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v31[10][17]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v24 = std::forward<bool &>(args_7);
  v23 = std::forward<char const(&)[14]>(args_6);
  v15 = std::forward<bool &>(args_5);
  v16 = std::forward<char const(&)[16]>(args_4);
  v22 = std::forward<std::string &>(args_3);
  v21 = std::forward<char const(&)[17]>(args_2);
  v20 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v20,
           v21,
           v22,
           v16,
           v15,
           v23,
           v24,
           v31,
           (std::string *)v20,
           (const char (*)[16])v21,
           (bool *)v22,
           v23,
           v24) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v19 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F95B5C4-000000000F95B814
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[19]>::type *args_2,
        unsigned int *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  const char (*v11)[19]; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  char *v15; // [rsp+0h] [rbp-100h]
  unsigned int *v16; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v23[9][19]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[19],unsigned int &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v16 = std::forward<unsigned int &>(args_3);
  v11 = std::forward<char const(&)[19]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[19],unsigned int &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v16,
           v23,
           v16) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v15 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83D07C-000000000F83D2CC
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[24],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[24]>::type *args_2,
        bool *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  const char (*v11)[24]; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  char *v15; // [rsp+0h] [rbp-100h]
  bool *v16; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v23[7][24]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[24],bool &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v16 = std::forward<bool &>(args_3);
  v11 = std::forward<char const(&)[24]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[24],bool &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v16,
           v23,
           v16) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v15 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83C9EC-000000000F83CC0B
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[14]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[14]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F7DE75C-000000000F7DED0E
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[15]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[8]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        std::string *args_9,
        std::remove_reference<char const (&)[5]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[10]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[15]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[9]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[16]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[21]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[11]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[16]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[8]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[14]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[17]>::type *args_30,
        std::string *args_31,
        std::remove_reference<char const (&)[16]>::type *args_32,
        bool *args_33,
        std::remove_reference<char const (&)[14]>::type *args_34,
        bool *args_35)
{
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  _DWORD *v42; // r13
  std::remove_reference<char const (&)[9]>::type *v43; // r15
  bool *v44; // r14
  const char *v45; // rax
  __int64 result; // rax
  char (*v47)[8]; // [rsp+8h] [rbp-1F8h]
  std::remove_reference<bool&>::type *v48; // [rsp+10h] [rbp-1F0h]
  bool *v49; // [rsp+18h] [rbp-1E8h]
  char (*v50)[8]; // [rsp+20h] [rbp-1E0h]
  unsigned int *v51; // [rsp+28h] [rbp-1D8h]
  char (*v52)[9]; // [rsp+30h] [rbp-1D0h]
  std::string *v53; // [rsp+38h] [rbp-1C8h]
  char (*v54)[5]; // [rsp+40h] [rbp-1C0h]
  unsigned int *v55; // [rsp+48h] [rbp-1B8h]
  char (*v56)[10]; // [rsp+50h] [rbp-1B0h]
  unsigned int *v57; // [rsp+58h] [rbp-1A8h]
  char (*v58)[15]; // [rsp+60h] [rbp-1A0h]
  unsigned int *v59; // [rsp+68h] [rbp-198h]
  char (*v60)[9]; // [rsp+70h] [rbp-190h]
  unsigned int *v61; // [rsp+78h] [rbp-188h]
  char (*v62)[16]; // [rsp+80h] [rbp-180h]
  unsigned int *v63; // [rsp+88h] [rbp-178h]
  char (*v64)[21]; // [rsp+90h] [rbp-170h]
  unsigned int *v65; // [rsp+98h] [rbp-168h]
  char (*v66)[11]; // [rsp+A0h] [rbp-160h]
  unsigned int *v67; // [rsp+A8h] [rbp-158h]
  char (*v68)[16]; // [rsp+B0h] [rbp-150h]
  unsigned int *v69; // [rsp+B8h] [rbp-148h]
  char (*v70)[8]; // [rsp+C0h] [rbp-140h]
  unsigned int *v71; // [rsp+C8h] [rbp-138h]
  char (*v72)[14]; // [rsp+D0h] [rbp-130h]
  unsigned int *v73; // [rsp+D8h] [rbp-128h]
  char (*v74)[17]; // [rsp+E0h] [rbp-120h]
  std::string *v75; // [rsp+E8h] [rbp-118h]
  char (*v76)[16]; // [rsp+F0h] [rbp-110h]
  bool *v77; // [rsp+F8h] [rbp-108h]
  char (*v78)[14]; // [rsp+100h] [rbp-100h]
  bool *v79; // [rsp+108h] [rbp-F8h]
  int32_t ret; // [rsp+14Ch] [rbp-B4h]
  unsigned int reta; // [rsp+14Ch] [rbp-B4h]
  char v86[176]; // [rsp+150h] [rbp-B0h] BYREF

  v40 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v41 = __asan_stack_malloc_1(128LL);
    if ( v41 )
      v40 = v41;
  }
  *(_QWORD *)v40 = 1102416563LL;
  *(_QWORD *)(v40 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v40 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v42 = (_DWORD *)(v40 >> 3);
  v42[536862720] = -235802127;
  v42[536862721] = -234753551;
  v42[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v79 = std::forward<bool &>(args_35);
  v78 = (char (*)[14])std::forward<char const(&)[14]>(args_34);
  v77 = std::forward<bool &>(args_33);
  v76 = (char (*)[16])std::forward<char const(&)[16]>(args_32);
  v75 = std::forward<std::string &>(args_31);
  v74 = (char (*)[17])std::forward<char const(&)[17]>(args_30);
  v73 = std::forward<unsigned int &>(args_29);
  v72 = (char (*)[14])std::forward<char const(&)[14]>(args_28);
  v71 = std::forward<unsigned int &>(args_27);
  v70 = (char (*)[8])std::forward<char const(&)[8]>(args_26);
  v69 = std::forward<unsigned int &>(args_25);
  v68 = (char (*)[16])std::forward<char const(&)[16]>(args_24);
  v67 = std::forward<unsigned int &>(args_23);
  v66 = (char (*)[11])std::forward<char const(&)[11]>(args_22);
  v65 = std::forward<unsigned int &>(args_21);
  v64 = (char (*)[21])std::forward<char const(&)[21]>(args_20);
  v63 = std::forward<unsigned int &>(args_19);
  v62 = (char (*)[16])std::forward<char const(&)[16]>(args_18);
  v61 = std::forward<unsigned int &>(args_17);
  v60 = (char (*)[9])std::forward<char const(&)[9]>(args_16);
  v59 = std::forward<unsigned int &>(args_15);
  v58 = (char (*)[15])std::forward<char const(&)[15]>(args_14);
  v57 = std::forward<unsigned int &>(args_13);
  v56 = (char (*)[10])std::forward<char const(&)[10]>(args_12);
  v55 = std::forward<unsigned int &>(args_11);
  v54 = (char (*)[5])std::forward<char const(&)[5]>(args_10);
  v53 = std::forward<std::string &>(args_9);
  v52 = (char (*)[9])std::forward<char const(&)[9]>(args_8);
  v51 = std::forward<unsigned int &>(args_7);
  v50 = (char (*)[8])std::forward<char const(&)[8]>(args_6);
  v49 = std::forward<bool &>(args_5);
  v43 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_4);
  v48 = std::forward<bool &>(args_3);
  v47 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v44 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v40 + 48);
  v45 = (const char *)std::forward<char const(&)[15]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v40 + 64),
    v45,
    (const std::allocator<char> *)(v40 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v40 + 64),
           v44,
           v47,
           v48,
           v43,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79) | ret;
  std::string::~string((void *)(v40 + 64));
  *(_DWORD *)(((v40 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v40 + 48);
  result = reta;
  if ( v86 == (char *)v40 )
  {
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v40 = 1172321806LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v40 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000CFE209A-000000000CFE2684
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[15]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[8]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        std::string *args_9,
        std::remove_reference<char const (&)[5]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[10]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[15]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[9]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[16]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[21]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[11]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[16]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[8]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[4]>::type *args_28,
        unsigned __int64 *args_29,
        std::remove_reference<char const (&)[12]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[13]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[18]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[16]>::type *args_36,
        bool *args_37)
{
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  _DWORD *v44; // r13
  std::remove_reference<char const (&)[9]>::type *v45; // r15
  bool *v46; // r14
  const char *v47; // rax
  __int64 result; // rax
  char (*v49)[8]; // [rsp+8h] [rbp-208h]
  std::remove_reference<bool&>::type *v50; // [rsp+10h] [rbp-200h]
  bool *v51; // [rsp+18h] [rbp-1F8h]
  char (*v52)[8]; // [rsp+20h] [rbp-1F0h]
  unsigned int *v53; // [rsp+28h] [rbp-1E8h]
  char (*v54)[9]; // [rsp+30h] [rbp-1E0h]
  std::string *v55; // [rsp+38h] [rbp-1D8h]
  char (*v56)[5]; // [rsp+40h] [rbp-1D0h]
  unsigned int *v57; // [rsp+48h] [rbp-1C8h]
  char (*v58)[10]; // [rsp+50h] [rbp-1C0h]
  unsigned int *v59; // [rsp+58h] [rbp-1B8h]
  char (*v60)[15]; // [rsp+60h] [rbp-1B0h]
  unsigned int *v61; // [rsp+68h] [rbp-1A8h]
  char (*v62)[9]; // [rsp+70h] [rbp-1A0h]
  unsigned int *v63; // [rsp+78h] [rbp-198h]
  char (*v64)[16]; // [rsp+80h] [rbp-190h]
  unsigned int *v65; // [rsp+88h] [rbp-188h]
  char (*v66)[21]; // [rsp+90h] [rbp-180h]
  unsigned int *v67; // [rsp+98h] [rbp-178h]
  char (*v68)[11]; // [rsp+A0h] [rbp-170h]
  unsigned int *v69; // [rsp+A8h] [rbp-168h]
  char (*v70)[16]; // [rsp+B0h] [rbp-160h]
  unsigned int *v71; // [rsp+B8h] [rbp-158h]
  char (*v72)[8]; // [rsp+C0h] [rbp-150h]
  unsigned int *v73; // [rsp+C8h] [rbp-148h]
  char (*v74)[4]; // [rsp+D0h] [rbp-140h]
  unsigned __int64 *v75; // [rsp+D8h] [rbp-138h]
  char (*v76)[12]; // [rsp+E0h] [rbp-130h]
  unsigned int *v77; // [rsp+E8h] [rbp-128h]
  char (*v78)[13]; // [rsp+F0h] [rbp-120h]
  unsigned int *v79; // [rsp+F8h] [rbp-118h]
  char (*v80)[18]; // [rsp+100h] [rbp-110h]
  unsigned int *v81; // [rsp+108h] [rbp-108h]
  char (*v82)[16]; // [rsp+110h] [rbp-100h]
  bool *v83; // [rsp+118h] [rbp-F8h]
  int32_t ret; // [rsp+15Ch] [rbp-B4h]
  unsigned int reta; // [rsp+15Ch] [rbp-B4h]
  char v90[176]; // [rsp+160h] [rbp-B0h] BYREF

  v42 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v43 = __asan_stack_malloc_1(128LL);
    if ( v43 )
      v42 = v43;
  }
  *(_QWORD *)v42 = 1102416563LL;
  *(_QWORD *)(v42 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v42 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v44 = (_DWORD *)(v42 >> 3);
  v44[536862720] = -235802127;
  v44[536862721] = -234753551;
  v44[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v83 = std::forward<bool &>(args_37);
  v82 = (char (*)[16])std::forward<char const(&)[16]>(args_36);
  v81 = std::forward<unsigned int &>(args_35);
  v80 = (char (*)[18])std::forward<char const(&)[18]>(args_34);
  v79 = std::forward<unsigned int &>(args_33);
  v78 = (char (*)[13])std::forward<char const(&)[13]>(args_32);
  v77 = std::forward<unsigned int &>(args_31);
  v76 = (char (*)[12])std::forward<char const(&)[12]>(args_30);
  v75 = std::forward<unsigned long &>(args_29);
  v74 = (char (*)[4])std::forward<char const(&)[4]>(args_28);
  v73 = std::forward<unsigned int &>(args_27);
  v72 = (char (*)[8])std::forward<char const(&)[8]>(args_26);
  v71 = std::forward<unsigned int &>(args_25);
  v70 = (char (*)[16])std::forward<char const(&)[16]>(args_24);
  v69 = std::forward<unsigned int &>(args_23);
  v68 = (char (*)[11])std::forward<char const(&)[11]>(args_22);
  v67 = std::forward<unsigned int &>(args_21);
  v66 = (char (*)[21])std::forward<char const(&)[21]>(args_20);
  v65 = std::forward<unsigned int &>(args_19);
  v64 = (char (*)[16])std::forward<char const(&)[16]>(args_18);
  v63 = std::forward<unsigned int &>(args_17);
  v62 = (char (*)[9])std::forward<char const(&)[9]>(args_16);
  v61 = std::forward<unsigned int &>(args_15);
  v60 = (char (*)[15])std::forward<char const(&)[15]>(args_14);
  v59 = std::forward<unsigned int &>(args_13);
  v58 = (char (*)[10])std::forward<char const(&)[10]>(args_12);
  v57 = std::forward<unsigned int &>(args_11);
  v56 = (char (*)[5])std::forward<char const(&)[5]>(args_10);
  v55 = std::forward<std::string &>(args_9);
  v54 = (char (*)[9])std::forward<char const(&)[9]>(args_8);
  v53 = std::forward<unsigned int &>(args_7);
  v52 = (char (*)[8])std::forward<char const(&)[8]>(args_6);
  v51 = std::forward<bool &>(args_5);
  v45 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_4);
  v50 = std::forward<bool &>(args_3);
  v49 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v46 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v42 + 48);
  v47 = (const char *)std::forward<char const(&)[15]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v42 + 64),
    v47,
    (const std::allocator<char> *)(v42 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           a1,
           a2,
           (const std::string *)(v42 + 64),
           v46,
           v49,
           v50,
           v45,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83) | ret;
  std::string::~string((void *)(v42 + 64));
  *(_DWORD *)(((v42 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v42 + 48);
  result = reta;
  if ( v90 == (char *)v42 )
  {
    *(_QWORD *)((v42 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v42 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v42 = 1172321806LL;
    *(_QWORD *)((v42 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v42 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0C1EE-000000000FA0C688
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[15]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[21]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[10]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[19]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[17]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[20]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[21]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[8]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[9]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[11]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[11]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[14]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[14]>::type *args_24,
        bool *args_25)
{
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  _DWORD *v32; // r13
  const char (*v33)[21]; // r15
  unsigned int *v34; // r14
  const char *v35; // rax
  __int64 result; // rax
  char *v37; // [rsp+0h] [rbp-1B0h]
  bool *v38; // [rsp+8h] [rbp-1A8h]
  const char (*v39)[10]; // [rsp+10h] [rbp-1A0h]
  unsigned int *v40; // [rsp+18h] [rbp-198h]
  const char (*v41)[19]; // [rsp+20h] [rbp-190h]
  bool *v42; // [rsp+28h] [rbp-188h]
  const char (*v43)[17]; // [rsp+30h] [rbp-180h]
  bool *v44; // [rsp+38h] [rbp-178h]
  const char (*v45)[20]; // [rsp+40h] [rbp-170h]
  unsigned int *v46; // [rsp+48h] [rbp-168h]
  const char (*v47)[21]; // [rsp+50h] [rbp-160h]
  unsigned int *v48; // [rsp+58h] [rbp-158h]
  const char (*v49)[8]; // [rsp+60h] [rbp-150h]
  unsigned int *v50; // [rsp+68h] [rbp-148h]
  const char (*v51)[9]; // [rsp+70h] [rbp-140h]
  unsigned int *v52; // [rsp+78h] [rbp-138h]
  const char (*v53)[11]; // [rsp+80h] [rbp-130h]
  unsigned int *v54; // [rsp+88h] [rbp-128h]
  const char (*v55)[11]; // [rsp+90h] [rbp-120h]
  unsigned int *v56; // [rsp+98h] [rbp-118h]
  const char (*v57)[14]; // [rsp+A0h] [rbp-110h]
  unsigned int *v58; // [rsp+A8h] [rbp-108h]
  const char (*v59)[14]; // [rsp+B0h] [rbp-100h]
  bool *v60; // [rsp+B8h] [rbp-F8h]
  int32_t ret; // [rsp+FCh] [rbp-B4h]
  unsigned int reta; // [rsp+FCh] [rbp-B4h]
  char v67[8][21]; // [rsp+100h] [rbp-B0h] BYREF

  v30 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v31 = __asan_stack_malloc_1(128LL);
    if ( v31 )
      v30 = v31;
  }
  *(_QWORD *)v30 = 1102416563LL;
  *(_QWORD *)(v30 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v30 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v32 = (_DWORD *)(v30 >> 3);
  v32[536862720] = -235802127;
  v32[536862721] = -234753551;
  v32[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v60 = std::forward<bool &>(args_25);
  v59 = std::forward<char const(&)[14]>(args_24);
  v58 = std::forward<unsigned int &>(args_23);
  v57 = std::forward<char const(&)[14]>(args_22);
  v56 = std::forward<unsigned int &>(args_21);
  v55 = std::forward<char const(&)[11]>(args_20);
  v54 = std::forward<unsigned int &>(args_19);
  v53 = std::forward<char const(&)[11]>(args_18);
  v52 = std::forward<unsigned int &>(args_17);
  v51 = std::forward<char const(&)[9]>(args_16);
  v50 = std::forward<unsigned int &>(args_15);
  v49 = std::forward<char const(&)[8]>(args_14);
  v48 = std::forward<unsigned int &>(args_13);
  v47 = std::forward<char const(&)[21]>(args_12);
  v46 = std::forward<unsigned int &>(args_11);
  v45 = std::forward<char const(&)[20]>(args_10);
  v44 = std::forward<bool &>(args_9);
  v43 = std::forward<char const(&)[17]>(args_8);
  v42 = std::forward<bool &>(args_7);
  v41 = std::forward<char const(&)[19]>(args_6);
  v40 = std::forward<unsigned int &>(args_5);
  v39 = std::forward<char const(&)[10]>(args_4);
  v38 = std::forward<bool &>(args_3);
  v33 = std::forward<char const(&)[21]>(args_2);
  v34 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v30 + 48);
  v35 = (const char *)std::forward<char const(&)[15]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v30 + 64),
    v35,
    (const std::allocator<char> *)(v30 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v30 + 64),
           v34,
           v33,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v67,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60) | ret;
  std::string::~string((void *)(v30 + 64));
  *(_DWORD *)(((v30 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v30 + 48);
  result = reta;
  if ( v37 == (char *)v30 )
  {
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v30 = 1172321806LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9D1B82-000000000F9D1FAC
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[15]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[16]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[21]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[11]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[16]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[8]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[14]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[17]>::type *args_16,
        std::string *args_17,
        std::remove_reference<char const (&)[16]>::type *args_18,
        bool *args_19,
        std::remove_reference<char const (&)[14]>::type *args_20,
        bool *args_21)
{
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // r13
  const char (*v29)[9]; // r15
  unsigned int *v30; // r14
  const char *v31; // rax
  __int64 result; // rax
  char *v33; // [rsp+0h] [rbp-190h]
  unsigned int *v34; // [rsp+8h] [rbp-188h]
  const char (*v35)[16]; // [rsp+10h] [rbp-180h]
  unsigned int *v36; // [rsp+18h] [rbp-178h]
  const char (*v37)[21]; // [rsp+20h] [rbp-170h]
  unsigned int *v38; // [rsp+28h] [rbp-168h]
  const char (*v39)[11]; // [rsp+30h] [rbp-160h]
  unsigned int *v40; // [rsp+38h] [rbp-158h]
  const char (*v41)[16]; // [rsp+40h] [rbp-150h]
  unsigned int *v42; // [rsp+48h] [rbp-148h]
  const char (*v43)[8]; // [rsp+50h] [rbp-140h]
  unsigned int *v44; // [rsp+58h] [rbp-138h]
  const char (*v45)[14]; // [rsp+60h] [rbp-130h]
  unsigned int *v46; // [rsp+68h] [rbp-128h]
  const char (*v47)[17]; // [rsp+70h] [rbp-120h]
  std::string *v48; // [rsp+78h] [rbp-118h]
  const char (*v49)[16]; // [rsp+80h] [rbp-110h]
  bool *v50; // [rsp+88h] [rbp-108h]
  const char (*v51)[14]; // [rsp+90h] [rbp-100h]
  bool *v52; // [rsp+98h] [rbp-F8h]
  int32_t ret; // [rsp+DCh] [rbp-B4h]
  unsigned int reta; // [rsp+DCh] [rbp-B4h]
  char v59[19][9]; // [rsp+E0h] [rbp-B0h] BYREF

  v26 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_1(128LL);
    if ( v27 )
      v26 = v27;
  }
  *(_QWORD *)v26 = 1102416563LL;
  *(_QWORD *)(v26 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v26 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v28 = (_DWORD *)(v26 >> 3);
  v28[536862720] = -235802127;
  v28[536862721] = -234753551;
  v28[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v52 = std::forward<bool &>(args_21);
  v51 = std::forward<char const(&)[14]>(args_20);
  v50 = std::forward<bool &>(args_19);
  v49 = std::forward<char const(&)[16]>(args_18);
  v48 = std::forward<std::string &>(args_17);
  v47 = std::forward<char const(&)[17]>(args_16);
  v46 = std::forward<unsigned int &>(args_15);
  v45 = std::forward<char const(&)[14]>(args_14);
  v44 = std::forward<unsigned int &>(args_13);
  v43 = std::forward<char const(&)[8]>(args_12);
  v42 = std::forward<unsigned int &>(args_11);
  v41 = std::forward<char const(&)[16]>(args_10);
  v40 = std::forward<unsigned int &>(args_9);
  v39 = std::forward<char const(&)[11]>(args_8);
  v38 = std::forward<unsigned int &>(args_7);
  v37 = std::forward<char const(&)[21]>(args_6);
  v36 = std::forward<unsigned int &>(args_5);
  v35 = std::forward<char const(&)[16]>(args_4);
  v34 = std::forward<unsigned int &>(args_3);
  v29 = std::forward<char const(&)[9]>(args_2);
  v30 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v26 + 48);
  v31 = (const char *)std::forward<char const(&)[15]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v26 + 64),
    v31,
    (const std::allocator<char> *)(v26 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v26 + 64),
           v30,
           v29,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v59,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52) | ret;
  std::string::~string((void *)(v26 + 64));
  *(_DWORD *)(((v26 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v26 + 48);
  result = reta;
  if ( v33 == (char *)v26 )
  {
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v26 = 1172321806LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D4327AC-000000000D432C0E
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[15]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[16]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[21]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[11]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[16]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[8]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[4]>::type *args_14,
        unsigned __int64 *args_15,
        std::remove_reference<char const (&)[12]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[13]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[18]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[16]>::type *args_22,
        bool *args_23)
{
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // r13
  const char (*v31)[9]; // r15
  unsigned int *v32; // r14
  const char *v33; // rax
  __int64 result; // rax
  char *v35; // [rsp+0h] [rbp-1A0h]
  unsigned int *v36; // [rsp+8h] [rbp-198h]
  const char (*v37)[16]; // [rsp+10h] [rbp-190h]
  unsigned int *v38; // [rsp+18h] [rbp-188h]
  const char (*v39)[21]; // [rsp+20h] [rbp-180h]
  unsigned int *v40; // [rsp+28h] [rbp-178h]
  const char (*v41)[11]; // [rsp+30h] [rbp-170h]
  unsigned int *v42; // [rsp+38h] [rbp-168h]
  const char (*v43)[16]; // [rsp+40h] [rbp-160h]
  unsigned int *v44; // [rsp+48h] [rbp-158h]
  const char (*v45)[8]; // [rsp+50h] [rbp-150h]
  unsigned int *v46; // [rsp+58h] [rbp-148h]
  const char (*v47)[4]; // [rsp+60h] [rbp-140h]
  unsigned __int64 *v48; // [rsp+68h] [rbp-138h]
  const char (*v49)[12]; // [rsp+70h] [rbp-130h]
  unsigned int *v50; // [rsp+78h] [rbp-128h]
  const char (*v51)[13]; // [rsp+80h] [rbp-120h]
  unsigned int *v52; // [rsp+88h] [rbp-118h]
  const char (*v53)[18]; // [rsp+90h] [rbp-110h]
  unsigned int *v54; // [rsp+98h] [rbp-108h]
  const char (*v55)[16]; // [rsp+A0h] [rbp-100h]
  bool *v56; // [rsp+A8h] [rbp-F8h]
  int32_t ret; // [rsp+ECh] [rbp-B4h]
  unsigned int reta; // [rsp+ECh] [rbp-B4h]
  char v63[19][9]; // [rsp+F0h] [rbp-B0h] BYREF

  v28 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v29 = __asan_stack_malloc_1(128LL);
    if ( v29 )
      v28 = v29;
  }
  *(_QWORD *)v28 = 1102416563LL;
  *(_QWORD *)(v28 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v28 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v30 = (_DWORD *)(v28 >> 3);
  v30[536862720] = -235802127;
  v30[536862721] = -234753551;
  v30[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v56 = std::forward<bool &>(args_23);
  v55 = std::forward<char const(&)[16]>(args_22);
  v54 = std::forward<unsigned int &>(args_21);
  v53 = std::forward<char const(&)[18]>(args_20);
  v52 = std::forward<unsigned int &>(args_19);
  v51 = std::forward<char const(&)[13]>(args_18);
  v50 = std::forward<unsigned int &>(args_17);
  v49 = std::forward<char const(&)[12]>(args_16);
  v48 = std::forward<unsigned long &>(args_15);
  v47 = std::forward<char const(&)[4]>(args_14);
  v46 = std::forward<unsigned int &>(args_13);
  v45 = std::forward<char const(&)[8]>(args_12);
  v44 = std::forward<unsigned int &>(args_11);
  v43 = std::forward<char const(&)[16]>(args_10);
  v42 = std::forward<unsigned int &>(args_9);
  v41 = std::forward<char const(&)[11]>(args_8);
  v40 = std::forward<unsigned int &>(args_7);
  v39 = std::forward<char const(&)[21]>(args_6);
  v38 = std::forward<unsigned int &>(args_5);
  v37 = std::forward<char const(&)[16]>(args_4);
  v36 = std::forward<unsigned int &>(args_3);
  v31 = std::forward<char const(&)[9]>(args_2);
  v32 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v28 + 48);
  v33 = (const char *)std::forward<char const(&)[15]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v28 + 64),
    v33,
    (const std::allocator<char> *)(v28 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v28 + 64),
           v32,
           v31,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v63,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56) | ret;
  std::string::~string((void *)(v28 + 64));
  *(_DWORD *)(((v28 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v28 + 48);
  result = reta;
  if ( v35 == (char *)v28 )
  {
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v28 = 1172321806LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D49081C-000000000D490A3B
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[16]>::type *a5,
        bool *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  bool *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[16],bool &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[16]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<bool>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F9F3F34-000000000F9F42EB
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[16]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[21]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[11]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[16]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[8]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[14]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[17]>::type *args_12,
        std::string *args_13,
        std::remove_reference<char const (&)[16]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[14]>::type *args_16,
        bool *args_17)
{
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // r13
  const char (*v25)[21]; // r15
  unsigned int *v26; // r14
  const char *v27; // rax
  __int64 result; // rax
  char *v29; // [rsp+0h] [rbp-170h]
  unsigned int *v30; // [rsp+8h] [rbp-168h]
  const char (*v31)[11]; // [rsp+10h] [rbp-160h]
  unsigned int *v32; // [rsp+18h] [rbp-158h]
  const char (*v33)[16]; // [rsp+20h] [rbp-150h]
  unsigned int *v34; // [rsp+28h] [rbp-148h]
  const char (*v35)[8]; // [rsp+30h] [rbp-140h]
  unsigned int *v36; // [rsp+38h] [rbp-138h]
  const char (*v37)[14]; // [rsp+40h] [rbp-130h]
  unsigned int *v38; // [rsp+48h] [rbp-128h]
  const char (*v39)[17]; // [rsp+50h] [rbp-120h]
  std::string *v40; // [rsp+58h] [rbp-118h]
  const char (*v41)[16]; // [rsp+60h] [rbp-110h]
  bool *v42; // [rsp+68h] [rbp-108h]
  const char (*v43)[14]; // [rsp+70h] [rbp-100h]
  bool *v44; // [rsp+78h] [rbp-F8h]
  int32_t ret; // [rsp+BCh] [rbp-B4h]
  unsigned int reta; // [rsp+BCh] [rbp-B4h]
  char v51[8][21]; // [rsp+C0h] [rbp-B0h] BYREF

  v22 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_1(128LL);
    if ( v23 )
      v22 = v23;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v22 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v24 = (_DWORD *)(v22 >> 3);
  v24[536862720] = -235802127;
  v24[536862721] = -234753551;
  v24[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v44 = std::forward<bool &>(args_17);
  v43 = std::forward<char const(&)[14]>(args_16);
  v42 = std::forward<bool &>(args_15);
  v41 = std::forward<char const(&)[16]>(args_14);
  v40 = std::forward<std::string &>(args_13);
  v39 = std::forward<char const(&)[17]>(args_12);
  v38 = std::forward<unsigned int &>(args_11);
  v37 = std::forward<char const(&)[14]>(args_10);
  v36 = std::forward<unsigned int &>(args_9);
  v35 = std::forward<char const(&)[8]>(args_8);
  v34 = std::forward<unsigned int &>(args_7);
  v33 = std::forward<char const(&)[16]>(args_6);
  v32 = std::forward<unsigned int &>(args_5);
  v31 = std::forward<char const(&)[11]>(args_4);
  v30 = std::forward<unsigned int &>(args_3);
  v25 = std::forward<char const(&)[21]>(args_2);
  v26 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v22 + 48);
  v27 = (const char *)std::forward<char const(&)[16]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v22 + 64),
    v27,
    (const std::allocator<char> *)(v22 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v22 + 64),
           v26,
           v25,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v51,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44) | ret;
  std::string::~string((void *)(v22 + 64));
  *(_DWORD *)(((v22 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v22 + 48);
  result = reta;
  if ( v29 == (char *)v22 )
  {
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v22 = 1172321806LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D45CE9E-000000000D45D28D
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[16]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[21]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[11]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[16]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[8]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[4]>::type *args_10,
        unsigned __int64 *args_11,
        std::remove_reference<char const (&)[12]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[13]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[18]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[16]>::type *args_18,
        bool *args_19)
{
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  _DWORD *v26; // r13
  const char (*v27)[21]; // r15
  unsigned int *v28; // r14
  const char *v29; // rax
  __int64 result; // rax
  char *v31; // [rsp+0h] [rbp-180h]
  unsigned int *v32; // [rsp+8h] [rbp-178h]
  const char (*v33)[11]; // [rsp+10h] [rbp-170h]
  unsigned int *v34; // [rsp+18h] [rbp-168h]
  const char (*v35)[16]; // [rsp+20h] [rbp-160h]
  unsigned int *v36; // [rsp+28h] [rbp-158h]
  const char (*v37)[8]; // [rsp+30h] [rbp-150h]
  unsigned int *v38; // [rsp+38h] [rbp-148h]
  const char (*v39)[4]; // [rsp+40h] [rbp-140h]
  unsigned __int64 *v40; // [rsp+48h] [rbp-138h]
  const char (*v41)[12]; // [rsp+50h] [rbp-130h]
  unsigned int *v42; // [rsp+58h] [rbp-128h]
  const char (*v43)[13]; // [rsp+60h] [rbp-120h]
  unsigned int *v44; // [rsp+68h] [rbp-118h]
  const char (*v45)[18]; // [rsp+70h] [rbp-110h]
  unsigned int *v46; // [rsp+78h] [rbp-108h]
  const char (*v47)[16]; // [rsp+80h] [rbp-100h]
  bool *v48; // [rsp+88h] [rbp-F8h]
  int32_t ret; // [rsp+CCh] [rbp-B4h]
  unsigned int reta; // [rsp+CCh] [rbp-B4h]
  char v55[8][21]; // [rsp+D0h] [rbp-B0h] BYREF

  v24 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_1(128LL);
    if ( v25 )
      v24 = v25;
  }
  *(_QWORD *)v24 = 1102416563LL;
  *(_QWORD *)(v24 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v24 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v26 = (_DWORD *)(v24 >> 3);
  v26[536862720] = -235802127;
  v26[536862721] = -234753551;
  v26[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v48 = std::forward<bool &>(args_19);
  v47 = std::forward<char const(&)[16]>(args_18);
  v46 = std::forward<unsigned int &>(args_17);
  v45 = std::forward<char const(&)[18]>(args_16);
  v44 = std::forward<unsigned int &>(args_15);
  v43 = std::forward<char const(&)[13]>(args_14);
  v42 = std::forward<unsigned int &>(args_13);
  v41 = std::forward<char const(&)[12]>(args_12);
  v40 = std::forward<unsigned long &>(args_11);
  v39 = std::forward<char const(&)[4]>(args_10);
  v38 = std::forward<unsigned int &>(args_9);
  v37 = std::forward<char const(&)[8]>(args_8);
  v36 = std::forward<unsigned int &>(args_7);
  v35 = std::forward<char const(&)[16]>(args_6);
  v34 = std::forward<unsigned int &>(args_5);
  v33 = std::forward<char const(&)[11]>(args_4);
  v32 = std::forward<unsigned int &>(args_3);
  v27 = std::forward<char const(&)[21]>(args_2);
  v28 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v24 + 48);
  v29 = (const char *)std::forward<char const(&)[16]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v24 + 64),
    v29,
    (const std::allocator<char> *)(v24 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v24 + 64),
           v28,
           v27,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v55,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48) | ret;
  std::string::~string((void *)(v24 + 64));
  *(_DWORD *)(((v24 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v24 + 48);
  result = reta;
  if ( v31 == (char *)v24 )
  {
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v24 = 1172321806LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D482146-000000000D482493
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[16]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[4]>::type *args_4,
        unsigned __int64 *args_5,
        std::remove_reference<char const (&)[12]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[13]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[18]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[16]>::type *args_12,
        bool *args_13)
{
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  _DWORD *v20; // r13
  bool *v21; // r15
  unsigned int *v22; // r14
  const char *v23; // rax
  __int64 result; // rax
  char *v25; // [rsp+0h] [rbp-150h]
  char (*v26)[8]; // [rsp+8h] [rbp-148h]
  unsigned int *v27; // [rsp+10h] [rbp-140h]
  char (*v28)[4]; // [rsp+18h] [rbp-138h]
  unsigned __int64 *v29; // [rsp+20h] [rbp-130h]
  char (*v30)[12]; // [rsp+28h] [rbp-128h]
  unsigned int *v31; // [rsp+30h] [rbp-120h]
  char (*v32)[13]; // [rsp+38h] [rbp-118h]
  unsigned int *v33; // [rsp+40h] [rbp-110h]
  char (*v34)[18]; // [rsp+48h] [rbp-108h]
  unsigned int *v35; // [rsp+50h] [rbp-100h]
  char (*v36)[16]; // [rsp+58h] [rbp-F8h]
  int32_t ret; // [rsp+9Ch] [rbp-B4h]
  unsigned int reta; // [rsp+9Ch] [rbp-B4h]
  char v43[22][8]; // [rsp+A0h] [rbp-B0h] BYREF

  v18 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v18 = v19;
  }
  *(_QWORD *)v18 = 1102416563LL;
  *(_QWORD *)(v18 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v18 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v20 = (_DWORD *)(v18 >> 3);
  v20[536862720] = -235802127;
  v20[536862721] = -234753551;
  v20[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v21 = std::forward<bool &>(args_13);
  v36 = (char (*)[16])std::forward<char const(&)[16]>(args_12);
  v35 = std::forward<unsigned int &>(args_11);
  v34 = (char (*)[18])std::forward<char const(&)[18]>(args_10);
  v33 = std::forward<unsigned int &>(args_9);
  v32 = (char (*)[13])std::forward<char const(&)[13]>(args_8);
  v31 = std::forward<unsigned int &>(args_7);
  v30 = (char (*)[12])std::forward<char const(&)[12]>(args_6);
  v29 = std::forward<unsigned long &>(args_5);
  v28 = (char (*)[4])std::forward<char const(&)[4]>(args_4);
  v27 = std::forward<unsigned int &>(args_3);
  v26 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v22 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v18 + 48);
  v23 = (const char *)std::forward<char const(&)[16]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v18 + 64),
    v23,
    (const std::allocator<char> *)(v18 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v18 + 64),
           v22,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v21,
           v43,
           (unsigned int *)v26,
           (const char (*)[4])v27,
           (unsigned __int64 *)v28,
           (const char (*)[12])v29,
           (unsigned int *)v30,
           (const char (*)[13])v31,
           (unsigned int *)v32,
           (const char (*)[18])v33,
           (unsigned int *)v34,
           (const char (*)[16])v35,
           (bool *)v36) | ret;
  std::string::~string((void *)(v18 + 64));
  *(_DWORD *)(((v18 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v18 + 48);
  result = reta;
  if ( v25 == (char *)v18 )
  {
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v18 = 1172321806LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D48FE16-000000000D490066
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[18]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[16]>::type *args_2,
        bool *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[16]>::type *v11; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  bool *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<bool &>(args_3);
  v11 = (std::remove_reference<char const (&)[16]>::type *)std::forward<char const(&)[16]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[18]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA00BBA-000000000FA011A4
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[19]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[10]>::type *args_4,
        proto::GadgetBornType *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        std::string *args_7,
        std::remove_reference<char const (&)[5]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[12]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[15]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[21]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[10]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[19]>::type *args_18,
        bool *args_19,
        std::remove_reference<char const (&)[17]>::type *args_20,
        bool *args_21,
        std::remove_reference<char const (&)[20]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[21]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[8]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[9]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[11]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[11]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[14]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[14]>::type *args_36,
        bool *args_37)
{
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  _DWORD *v44; // r13
  std::remove_reference<char const (&)[10]>::type *v45; // r15
  bool *v46; // r14
  const char *v47; // rax
  __int64 result; // rax
  char (*v49)[14]; // [rsp+8h] [rbp-208h]
  std::remove_reference<unsigned int&>::type *v50; // [rsp+10h] [rbp-200h]
  proto::GadgetBornType *v51; // [rsp+18h] [rbp-1F8h]
  char (*v52)[9]; // [rsp+20h] [rbp-1F0h]
  std::string *v53; // [rsp+28h] [rbp-1E8h]
  char (*v54)[5]; // [rsp+30h] [rbp-1E0h]
  unsigned int *v55; // [rsp+38h] [rbp-1D8h]
  char (*v56)[12]; // [rsp+40h] [rbp-1D0h]
  unsigned int *v57; // [rsp+48h] [rbp-1C8h]
  char (*v58)[15]; // [rsp+50h] [rbp-1C0h]
  unsigned int *v59; // [rsp+58h] [rbp-1B8h]
  char (*v60)[21]; // [rsp+60h] [rbp-1B0h]
  bool *v61; // [rsp+68h] [rbp-1A8h]
  char (*v62)[10]; // [rsp+70h] [rbp-1A0h]
  unsigned int *v63; // [rsp+78h] [rbp-198h]
  char (*v64)[19]; // [rsp+80h] [rbp-190h]
  bool *v65; // [rsp+88h] [rbp-188h]
  char (*v66)[17]; // [rsp+90h] [rbp-180h]
  bool *v67; // [rsp+98h] [rbp-178h]
  char (*v68)[20]; // [rsp+A0h] [rbp-170h]
  unsigned int *v69; // [rsp+A8h] [rbp-168h]
  char (*v70)[21]; // [rsp+B0h] [rbp-160h]
  unsigned int *v71; // [rsp+B8h] [rbp-158h]
  char (*v72)[8]; // [rsp+C0h] [rbp-150h]
  unsigned int *v73; // [rsp+C8h] [rbp-148h]
  char (*v74)[9]; // [rsp+D0h] [rbp-140h]
  unsigned int *v75; // [rsp+D8h] [rbp-138h]
  char (*v76)[11]; // [rsp+E0h] [rbp-130h]
  unsigned int *v77; // [rsp+E8h] [rbp-128h]
  char (*v78)[11]; // [rsp+F0h] [rbp-120h]
  unsigned int *v79; // [rsp+F8h] [rbp-118h]
  char (*v80)[14]; // [rsp+100h] [rbp-110h]
  unsigned int *v81; // [rsp+108h] [rbp-108h]
  char (*v82)[14]; // [rsp+110h] [rbp-100h]
  bool *v83; // [rsp+118h] [rbp-F8h]
  int32_t ret; // [rsp+15Ch] [rbp-B4h]
  unsigned int reta; // [rsp+15Ch] [rbp-B4h]
  char v90[176]; // [rsp+160h] [rbp-B0h] BYREF

  v42 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v43 = __asan_stack_malloc_1(128LL);
    if ( v43 )
      v42 = v43;
  }
  *(_QWORD *)v42 = 1102416563LL;
  *(_QWORD *)(v42 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v42 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v44 = (_DWORD *)(v42 >> 3);
  v44[536862720] = -235802127;
  v44[536862721] = -234753551;
  v44[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v83 = std::forward<bool &>(args_37);
  v82 = (char (*)[14])std::forward<char const(&)[14]>(args_36);
  v81 = std::forward<unsigned int &>(args_35);
  v80 = (char (*)[14])std::forward<char const(&)[14]>(args_34);
  v79 = std::forward<unsigned int &>(args_33);
  v78 = (char (*)[11])std::forward<char const(&)[11]>(args_32);
  v77 = std::forward<unsigned int &>(args_31);
  v76 = (char (*)[11])std::forward<char const(&)[11]>(args_30);
  v75 = std::forward<unsigned int &>(args_29);
  v74 = (char (*)[9])std::forward<char const(&)[9]>(args_28);
  v73 = std::forward<unsigned int &>(args_27);
  v72 = (char (*)[8])std::forward<char const(&)[8]>(args_26);
  v71 = std::forward<unsigned int &>(args_25);
  v70 = (char (*)[21])std::forward<char const(&)[21]>(args_24);
  v69 = std::forward<unsigned int &>(args_23);
  v68 = (char (*)[20])std::forward<char const(&)[20]>(args_22);
  v67 = std::forward<bool &>(args_21);
  v66 = (char (*)[17])std::forward<char const(&)[17]>(args_20);
  v65 = std::forward<bool &>(args_19);
  v64 = (char (*)[19])std::forward<char const(&)[19]>(args_18);
  v63 = std::forward<unsigned int &>(args_17);
  v62 = (char (*)[10])std::forward<char const(&)[10]>(args_16);
  v61 = std::forward<bool &>(args_15);
  v60 = (char (*)[21])std::forward<char const(&)[21]>(args_14);
  v59 = std::forward<unsigned int &>(args_13);
  v58 = (char (*)[15])std::forward<char const(&)[15]>(args_12);
  v57 = std::forward<unsigned int &>(args_11);
  v56 = (char (*)[12])std::forward<char const(&)[12]>(args_10);
  v55 = std::forward<unsigned int &>(args_9);
  v54 = (char (*)[5])std::forward<char const(&)[5]>(args_8);
  v53 = std::forward<std::string &>(args_7);
  v52 = (char (*)[9])std::forward<char const(&)[9]>(args_6);
  v51 = std::forward<proto::GadgetBornType &>(args_5);
  v45 = (std::remove_reference<char const (&)[10]>::type *)std::forward<char const(&)[10]>(args_4);
  v50 = std::forward<unsigned int &>(args_3);
  v49 = (char (*)[14])std::forward<char const(&)[14]>(args_2);
  v46 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v42 + 48);
  v47 = (const char *)std::forward<char const(&)[19]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v42 + 64),
    v47,
    (const std::allocator<char> *)(v42 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v42 + 64),
           v46,
           v49,
           v50,
           v45,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83) | ret;
  std::string::~string((void *)(v42 + 64));
  *(_DWORD *)(((v42 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v42 + 48);
  result = reta;
  if ( v90 == (char *)v42 )
  {
    *(_QWORD *)((v42 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v42 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v42 = 1172321806LL;
    *(_QWORD *)((v42 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v42 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0D4DE-000000000FA0D8CD
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[19]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[17]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[20]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[21]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[8]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[11]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[11]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[14]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[14]>::type *args_18,
        bool *args_19)
{
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  _DWORD *v26; // r13
  std::remove_reference<char const (&)[17]>::type *v27; // r15
  bool *v28; // r14
  const char *v29; // rax
  __int64 result; // rax
  bool *v31; // [rsp+8h] [rbp-178h]
  char (*v32)[20]; // [rsp+10h] [rbp-170h]
  unsigned int *v33; // [rsp+18h] [rbp-168h]
  char (*v34)[21]; // [rsp+20h] [rbp-160h]
  unsigned int *v35; // [rsp+28h] [rbp-158h]
  char (*v36)[8]; // [rsp+30h] [rbp-150h]
  unsigned int *v37; // [rsp+38h] [rbp-148h]
  char (*v38)[9]; // [rsp+40h] [rbp-140h]
  unsigned int *v39; // [rsp+48h] [rbp-138h]
  char (*v40)[11]; // [rsp+50h] [rbp-130h]
  unsigned int *v41; // [rsp+58h] [rbp-128h]
  char (*v42)[11]; // [rsp+60h] [rbp-120h]
  unsigned int *v43; // [rsp+68h] [rbp-118h]
  char (*v44)[14]; // [rsp+70h] [rbp-110h]
  unsigned int *v45; // [rsp+78h] [rbp-108h]
  char (*v46)[14]; // [rsp+80h] [rbp-100h]
  bool *v47; // [rsp+88h] [rbp-F8h]
  int32_t ret; // [rsp+CCh] [rbp-B4h]
  unsigned int reta; // [rsp+CCh] [rbp-B4h]
  char v54[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v24 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_1(128LL);
    if ( v25 )
      v24 = v25;
  }
  *(_QWORD *)v24 = 1102416563LL;
  *(_QWORD *)(v24 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v24 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v26 = (_DWORD *)(v24 >> 3);
  v26[536862720] = -235802127;
  v26[536862721] = -234753551;
  v26[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v47 = std::forward<bool &>(args_19);
  v46 = (char (*)[14])std::forward<char const(&)[14]>(args_18);
  v45 = std::forward<unsigned int &>(args_17);
  v44 = (char (*)[14])std::forward<char const(&)[14]>(args_16);
  v43 = std::forward<unsigned int &>(args_15);
  v42 = (char (*)[11])std::forward<char const(&)[11]>(args_14);
  v41 = std::forward<unsigned int &>(args_13);
  v40 = (char (*)[11])std::forward<char const(&)[11]>(args_12);
  v39 = std::forward<unsigned int &>(args_11);
  v38 = (char (*)[9])std::forward<char const(&)[9]>(args_10);
  v37 = std::forward<unsigned int &>(args_9);
  v36 = (char (*)[8])std::forward<char const(&)[8]>(args_8);
  v35 = std::forward<unsigned int &>(args_7);
  v34 = (char (*)[21])std::forward<char const(&)[21]>(args_6);
  v33 = std::forward<unsigned int &>(args_5);
  v32 = (char (*)[20])std::forward<char const(&)[20]>(args_4);
  v31 = std::forward<bool &>(args_3);
  v27 = (std::remove_reference<char const (&)[17]>::type *)std::forward<char const(&)[17]>(args_2);
  v28 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v24 + 48);
  v29 = (const char *)std::forward<char const(&)[19]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v24 + 64),
    v29,
    (const std::allocator<char> *)(v24 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v24 + 64),
           v28,
           v27,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47) | ret;
  std::string::~string((void *)(v24 + 64));
  *(_DWORD *)(((v24 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v24 + 48);
  result = reta;
  if ( v54 == (char *)v24 )
  {
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v24 = 1172321806LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F991CE6-000000000F991F05
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[19],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[19]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[19],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[19]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000FA0C92E-000000000FA0CD90
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[21]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[19]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[17]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[20]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[21]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[8]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[9]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[11]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[11]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[14]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[14]>::type *args_22,
        bool *args_23)
{
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // r13
  const char (*v31)[10]; // r15
  bool *v32; // r14
  const char *v33; // rax
  __int64 result; // rax
  char *v35; // [rsp+0h] [rbp-1A0h]
  unsigned int *v36; // [rsp+8h] [rbp-198h]
  const char (*v37)[19]; // [rsp+10h] [rbp-190h]
  bool *v38; // [rsp+18h] [rbp-188h]
  const char (*v39)[17]; // [rsp+20h] [rbp-180h]
  bool *v40; // [rsp+28h] [rbp-178h]
  const char (*v41)[20]; // [rsp+30h] [rbp-170h]
  unsigned int *v42; // [rsp+38h] [rbp-168h]
  const char (*v43)[21]; // [rsp+40h] [rbp-160h]
  unsigned int *v44; // [rsp+48h] [rbp-158h]
  const char (*v45)[8]; // [rsp+50h] [rbp-150h]
  unsigned int *v46; // [rsp+58h] [rbp-148h]
  const char (*v47)[9]; // [rsp+60h] [rbp-140h]
  unsigned int *v48; // [rsp+68h] [rbp-138h]
  const char (*v49)[11]; // [rsp+70h] [rbp-130h]
  unsigned int *v50; // [rsp+78h] [rbp-128h]
  const char (*v51)[11]; // [rsp+80h] [rbp-120h]
  unsigned int *v52; // [rsp+88h] [rbp-118h]
  const char (*v53)[14]; // [rsp+90h] [rbp-110h]
  unsigned int *v54; // [rsp+98h] [rbp-108h]
  const char (*v55)[14]; // [rsp+A0h] [rbp-100h]
  bool *v56; // [rsp+A8h] [rbp-F8h]
  int32_t ret; // [rsp+ECh] [rbp-B4h]
  unsigned int reta; // [rsp+ECh] [rbp-B4h]
  char v63[17][10]; // [rsp+F0h] [rbp-B0h] BYREF

  v28 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v29 = __asan_stack_malloc_1(128LL);
    if ( v29 )
      v28 = v29;
  }
  *(_QWORD *)v28 = 1102416563LL;
  *(_QWORD *)(v28 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v28 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v30 = (_DWORD *)(v28 >> 3);
  v30[536862720] = -235802127;
  v30[536862721] = -234753551;
  v30[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v56 = std::forward<bool &>(args_23);
  v55 = std::forward<char const(&)[14]>(args_22);
  v54 = std::forward<unsigned int &>(args_21);
  v53 = std::forward<char const(&)[14]>(args_20);
  v52 = std::forward<unsigned int &>(args_19);
  v51 = std::forward<char const(&)[11]>(args_18);
  v50 = std::forward<unsigned int &>(args_17);
  v49 = std::forward<char const(&)[11]>(args_16);
  v48 = std::forward<unsigned int &>(args_15);
  v47 = std::forward<char const(&)[9]>(args_14);
  v46 = std::forward<unsigned int &>(args_13);
  v45 = std::forward<char const(&)[8]>(args_12);
  v44 = std::forward<unsigned int &>(args_11);
  v43 = std::forward<char const(&)[21]>(args_10);
  v42 = std::forward<unsigned int &>(args_9);
  v41 = std::forward<char const(&)[20]>(args_8);
  v40 = std::forward<bool &>(args_7);
  v39 = std::forward<char const(&)[17]>(args_6);
  v38 = std::forward<bool &>(args_5);
  v37 = std::forward<char const(&)[19]>(args_4);
  v36 = std::forward<unsigned int &>(args_3);
  v31 = std::forward<char const(&)[10]>(args_2);
  v32 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v28 + 48);
  v33 = (const char *)std::forward<char const(&)[21]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v28 + 64),
    v33,
    (const std::allocator<char> *)(v28 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v28 + 64),
           v32,
           v31,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v63,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56) | ret;
  std::string::~string((void *)(v28 + 64));
  *(_DWORD *)(((v28 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v28 + 48);
  result = reta;
  if ( v35 == (char *)v28 )
  {
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v28 = 1172321806LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v28 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9F9418-000000000F9F9797
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[21]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[16]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[8]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[14]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[17]>::type *args_10,
        std::string *args_11,
        std::remove_reference<char const (&)[16]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[14]>::type *args_14,
        bool *args_15)
{
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  _DWORD *v22; // r13
  std::remove_reference<char const (&)[11]>::type *v23; // r15
  unsigned int *v24; // r14
  const char *v25; // rax
  __int64 result; // rax
  unsigned int *v27; // [rsp+8h] [rbp-158h]
  char (*v28)[16]; // [rsp+10h] [rbp-150h]
  unsigned int *v29; // [rsp+18h] [rbp-148h]
  char (*v30)[8]; // [rsp+20h] [rbp-140h]
  unsigned int *v31; // [rsp+28h] [rbp-138h]
  char (*v32)[14]; // [rsp+30h] [rbp-130h]
  unsigned int *v33; // [rsp+38h] [rbp-128h]
  char (*v34)[17]; // [rsp+40h] [rbp-120h]
  std::string *v35; // [rsp+48h] [rbp-118h]
  char (*v36)[16]; // [rsp+50h] [rbp-110h]
  bool *v37; // [rsp+58h] [rbp-108h]
  char (*v38)[14]; // [rsp+60h] [rbp-100h]
  bool *v39; // [rsp+68h] [rbp-F8h]
  int32_t ret; // [rsp+ACh] [rbp-B4h]
  unsigned int reta; // [rsp+ACh] [rbp-B4h]
  char v46[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v20 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_1(128LL);
    if ( v21 )
      v20 = v21;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v20 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v22 = (_DWORD *)(v20 >> 3);
  v22[536862720] = -235802127;
  v22[536862721] = -234753551;
  v22[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v39 = std::forward<bool &>(args_15);
  v38 = (char (*)[14])std::forward<char const(&)[14]>(args_14);
  v37 = std::forward<bool &>(args_13);
  v36 = (char (*)[16])std::forward<char const(&)[16]>(args_12);
  v35 = std::forward<std::string &>(args_11);
  v34 = (char (*)[17])std::forward<char const(&)[17]>(args_10);
  v33 = std::forward<unsigned int &>(args_9);
  v32 = (char (*)[14])std::forward<char const(&)[14]>(args_8);
  v31 = std::forward<unsigned int &>(args_7);
  v30 = (char (*)[8])std::forward<char const(&)[8]>(args_6);
  v29 = std::forward<unsigned int &>(args_5);
  v28 = (char (*)[16])std::forward<char const(&)[16]>(args_4);
  v27 = std::forward<unsigned int &>(args_3);
  v23 = (std::remove_reference<char const (&)[11]>::type *)std::forward<char const(&)[11]>(args_2);
  v24 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v20 + 48);
  v25 = (const char *)std::forward<char const(&)[21]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v20 + 64),
    v25,
    (const std::allocator<char> *)(v20 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v20 + 64),
           v24,
           v23,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39) | ret;
  std::string::~string((void *)(v20 + 64));
  *(_DWORD *)(((v20 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v20 + 48);
  result = reta;
  if ( v46 == (char *)v20 )
  {
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v20 = 1172321806LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D46C0A8-000000000D46C45F
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[21]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[16]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[8]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[4]>::type *args_8,
        unsigned __int64 *args_9,
        std::remove_reference<char const (&)[12]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[13]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[18]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[16]>::type *args_16,
        bool *args_17)
{
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // r13
  std::remove_reference<char const (&)[11]>::type *v25; // r15
  unsigned int *v26; // r14
  const char *v27; // rax
  __int64 result; // rax
  unsigned int *v29; // [rsp+8h] [rbp-168h]
  char (*v30)[16]; // [rsp+10h] [rbp-160h]
  unsigned int *v31; // [rsp+18h] [rbp-158h]
  char (*v32)[8]; // [rsp+20h] [rbp-150h]
  unsigned int *v33; // [rsp+28h] [rbp-148h]
  char (*v34)[4]; // [rsp+30h] [rbp-140h]
  unsigned __int64 *v35; // [rsp+38h] [rbp-138h]
  char (*v36)[12]; // [rsp+40h] [rbp-130h]
  unsigned int *v37; // [rsp+48h] [rbp-128h]
  char (*v38)[13]; // [rsp+50h] [rbp-120h]
  unsigned int *v39; // [rsp+58h] [rbp-118h]
  char (*v40)[18]; // [rsp+60h] [rbp-110h]
  unsigned int *v41; // [rsp+68h] [rbp-108h]
  char (*v42)[16]; // [rsp+70h] [rbp-100h]
  bool *v43; // [rsp+78h] [rbp-F8h]
  int32_t ret; // [rsp+BCh] [rbp-B4h]
  unsigned int reta; // [rsp+BCh] [rbp-B4h]
  char v50[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v22 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_1(128LL);
    if ( v23 )
      v22 = v23;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v22 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v24 = (_DWORD *)(v22 >> 3);
  v24[536862720] = -235802127;
  v24[536862721] = -234753551;
  v24[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v43 = std::forward<bool &>(args_17);
  v42 = (char (*)[16])std::forward<char const(&)[16]>(args_16);
  v41 = std::forward<unsigned int &>(args_15);
  v40 = (char (*)[18])std::forward<char const(&)[18]>(args_14);
  v39 = std::forward<unsigned int &>(args_13);
  v38 = (char (*)[13])std::forward<char const(&)[13]>(args_12);
  v37 = std::forward<unsigned int &>(args_11);
  v36 = (char (*)[12])std::forward<char const(&)[12]>(args_10);
  v35 = std::forward<unsigned long &>(args_9);
  v34 = (char (*)[4])std::forward<char const(&)[4]>(args_8);
  v33 = std::forward<unsigned int &>(args_7);
  v32 = (char (*)[8])std::forward<char const(&)[8]>(args_6);
  v31 = std::forward<unsigned int &>(args_5);
  v30 = (char (*)[16])std::forward<char const(&)[16]>(args_4);
  v29 = std::forward<unsigned int &>(args_3);
  v25 = (std::remove_reference<char const (&)[11]>::type *)std::forward<char const(&)[11]>(args_2);
  v26 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v22 + 48);
  v27 = (const char *)std::forward<char const(&)[21]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v22 + 64),
    v27,
    (const std::allocator<char> *)(v22 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v22 + 64),
           v26,
           v25,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43) | ret;
  std::string::~string((void *)(v22 + 64));
  *(_DWORD *)(((v22 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v22 + 48);
  result = reta;
  if ( v50 == (char *)v22 )
  {
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v22 = 1172321806LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0E086-000000000FA0E3D3
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[21]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[11]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[11]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[14]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[14]>::type *args_12,
        bool *args_13)
{
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  _DWORD *v20; // r13
  bool *v21; // r15
  unsigned int *v22; // r14
  const char *v23; // rax
  __int64 result; // rax
  char *v25; // [rsp+0h] [rbp-150h]
  char (*v26)[8]; // [rsp+8h] [rbp-148h]
  unsigned int *v27; // [rsp+10h] [rbp-140h]
  char (*v28)[9]; // [rsp+18h] [rbp-138h]
  unsigned int *v29; // [rsp+20h] [rbp-130h]
  char (*v30)[11]; // [rsp+28h] [rbp-128h]
  unsigned int *v31; // [rsp+30h] [rbp-120h]
  char (*v32)[11]; // [rsp+38h] [rbp-118h]
  unsigned int *v33; // [rsp+40h] [rbp-110h]
  char (*v34)[14]; // [rsp+48h] [rbp-108h]
  unsigned int *v35; // [rsp+50h] [rbp-100h]
  char (*v36)[14]; // [rsp+58h] [rbp-F8h]
  int32_t ret; // [rsp+9Ch] [rbp-B4h]
  unsigned int reta; // [rsp+9Ch] [rbp-B4h]
  char v43[22][8]; // [rsp+A0h] [rbp-B0h] BYREF

  v18 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v18 = v19;
  }
  *(_QWORD *)v18 = 1102416563LL;
  *(_QWORD *)(v18 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v18 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v20 = (_DWORD *)(v18 >> 3);
  v20[536862720] = -235802127;
  v20[536862721] = -234753551;
  v20[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v21 = std::forward<bool &>(args_13);
  v36 = (char (*)[14])std::forward<char const(&)[14]>(args_12);
  v35 = std::forward<unsigned int &>(args_11);
  v34 = (char (*)[14])std::forward<char const(&)[14]>(args_10);
  v33 = std::forward<unsigned int &>(args_9);
  v32 = (char (*)[11])std::forward<char const(&)[11]>(args_8);
  v31 = std::forward<unsigned int &>(args_7);
  v30 = (char (*)[11])std::forward<char const(&)[11]>(args_6);
  v29 = std::forward<unsigned int &>(args_5);
  v28 = (char (*)[9])std::forward<char const(&)[9]>(args_4);
  v27 = std::forward<unsigned int &>(args_3);
  v26 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v22 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v18 + 48);
  v23 = (const char *)std::forward<char const(&)[21]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v18 + 64),
    v23,
    (const std::allocator<char> *)(v18 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v18 + 64),
           v22,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v21,
           v43,
           (unsigned int *)v26,
           (const char (*)[9])v27,
           (unsigned int *)v28,
           (const char (*)[11])v29,
           (unsigned int *)v30,
           (const char (*)[11])v31,
           (unsigned int *)v32,
           (const char (*)[14])v33,
           (unsigned int *)v34,
           (const char (*)[14])v35,
           (bool *)v36) | ret;
  std::string::~string((void *)(v18 + 64));
  *(_DWORD *)(((v18 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v18 + 48);
  result = reta;
  if ( v25 == (char *)v18 )
  {
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v18 = 1172321806LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v18 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA048EC-000000000FA04B0B
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[23]>::type *a5,
        bool *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  bool *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[23],bool &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[23]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<bool>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F8A3DD2-000000000F8A3FF1
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[24],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[24]>::type *a5,
        bool *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  bool *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[24],bool &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[24]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<bool>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F9FC2E4-000000000F9FC567
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[30]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[41]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[23]>::type *args_4,
        bool *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  bool *v13; // r15
  const char (*v14)[23]; // r14
  const char *v15; // rax
  __int64 result; // rax
  char *v17; // [rsp+0h] [rbp-110h]
  unsigned int *v18; // [rsp+8h] [rbp-108h]
  const char (*v19)[41]; // [rsp+10h] [rbp-100h]
  unsigned int *v20; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v27[4][41]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<bool &>(args_5);
  v14 = std::forward<char const(&)[23]>(args_4);
  v20 = std::forward<unsigned int &>(args_3);
  v19 = std::forward<char const(&)[41]>(args_2);
  v18 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[30]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v18,
           v19,
           v20,
           v14,
           v13,
           v27,
           v18,
           (const char (*)[23])v19,
           (bool *)v20) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v17 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E8CF0-000000000F7E8F0F
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[3],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[3]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[3],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[3]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000FA01246-000000000FA01496
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[41]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[23]>::type *args_2,
        bool *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[23]>::type *v11; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  bool *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<bool &>(args_3);
  v11 = (std::remove_reference<char const (&)[23]>::type *)std::forward<char const(&)[23]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[41]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E740A-000000000F7E765A
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[4]>::type *a5,
        Vector3 *a6,
        std::remove_reference<char const (&)[4]>::type *args_2,
        Vector3 *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[4]>::type *v11; // r15
  Vector3 *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  Vector3 *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<Vector3 &>(args_3);
  v11 = (std::remove_reference<char const (&)[4]>::type *)std::forward<char const(&)[4]>(args_2);
  v12 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[4]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<Vector3,char const(&)[4],Vector3&>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F8AA454-000000000F8AAC36
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[5]>::type *a5,
        std::remove_reference<data::GadgetType&>::type *a6,
        std::remove_reference<char const (&)[13]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[11]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[12]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[18]>::type *args_12,
        data::PlatformRotType *args_13,
        std::remove_reference<char const (&)[6]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[9]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[19]>::type *args_18,
        bool *args_19,
        std::remove_reference<char const (&)[14]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[10]>::type *args_22,
        proto::GadgetBornType *args_23,
        std::remove_reference<char const (&)[9]>::type *args_24,
        std::string *args_25,
        std::remove_reference<char const (&)[5]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[12]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[15]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[21]>::type *args_32,
        bool *args_33,
        std::remove_reference<char const (&)[10]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[19]>::type *args_36,
        bool *args_37,
        std::remove_reference<char const (&)[17]>::type *args_38,
        bool *args_39,
        std::remove_reference<char const (&)[20]>::type *args_40,
        unsigned int *args_41,
        std::remove_reference<char const (&)[21]>::type *args_42,
        unsigned int *args_43,
        std::remove_reference<char const (&)[8]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[9]>::type *args_46,
        unsigned int *args_47,
        std::remove_reference<char const (&)[11]>::type *args_48,
        unsigned int *args_49,
        std::remove_reference<char const (&)[11]>::type *args_50,
        unsigned int *args_51,
        std::remove_reference<char const (&)[14]>::type *args_52,
        unsigned int *args_53,
        std::remove_reference<char const (&)[14]>::type *args_54,
        bool *args_55)
{
  unsigned __int64 v60; // rbx
  __int64 v61; // rax
  _DWORD *v62; // r13
  std::remove_reference<char const (&)[9]>::type *v63; // r14
  data::GadgetType *v64; // r15
  const char *v65; // rax
  __int64 result; // rax
  char (*v67)[13]; // [rsp+8h] [rbp-298h]
  std::remove_reference<bool&>::type *v68; // [rsp+10h] [rbp-290h]
  bool *v69; // [rsp+18h] [rbp-288h]
  char (*v70)[9]; // [rsp+20h] [rbp-280h]
  bool *v71; // [rsp+28h] [rbp-278h]
  char (*v72)[11]; // [rsp+30h] [rbp-270h]
  bool *v73; // [rsp+38h] [rbp-268h]
  char (*v74)[12]; // [rsp+40h] [rbp-260h]
  bool *v75; // [rsp+48h] [rbp-258h]
  char (*v76)[18]; // [rsp+50h] [rbp-250h]
  data::PlatformRotType *v77; // [rsp+58h] [rbp-248h]
  char (*v78)[6]; // [rsp+60h] [rbp-240h]
  unsigned int *v79; // [rsp+68h] [rbp-238h]
  char (*v80)[9]; // [rsp+70h] [rbp-230h]
  unsigned int *v81; // [rsp+78h] [rbp-228h]
  char (*v82)[19]; // [rsp+80h] [rbp-220h]
  bool *v83; // [rsp+88h] [rbp-218h]
  char (*v84)[14]; // [rsp+90h] [rbp-210h]
  unsigned int *v85; // [rsp+98h] [rbp-208h]
  char (*v86)[10]; // [rsp+A0h] [rbp-200h]
  proto::GadgetBornType *v87; // [rsp+A8h] [rbp-1F8h]
  char (*v88)[9]; // [rsp+B0h] [rbp-1F0h]
  std::string *v89; // [rsp+B8h] [rbp-1E8h]
  char (*v90)[5]; // [rsp+C0h] [rbp-1E0h]
  unsigned int *v91; // [rsp+C8h] [rbp-1D8h]
  char (*v92)[12]; // [rsp+D0h] [rbp-1D0h]
  unsigned int *v93; // [rsp+D8h] [rbp-1C8h]
  char (*v94)[15]; // [rsp+E0h] [rbp-1C0h]
  unsigned int *v95; // [rsp+E8h] [rbp-1B8h]
  char (*v96)[21]; // [rsp+F0h] [rbp-1B0h]
  bool *v97; // [rsp+F8h] [rbp-1A8h]
  char (*v98)[10]; // [rsp+100h] [rbp-1A0h]
  unsigned int *v99; // [rsp+108h] [rbp-198h]
  char (*v100)[19]; // [rsp+110h] [rbp-190h]
  bool *v101; // [rsp+118h] [rbp-188h]
  char (*v102)[17]; // [rsp+120h] [rbp-180h]
  bool *v103; // [rsp+128h] [rbp-178h]
  char (*v104)[20]; // [rsp+130h] [rbp-170h]
  unsigned int *v105; // [rsp+138h] [rbp-168h]
  char (*v106)[21]; // [rsp+140h] [rbp-160h]
  unsigned int *v107; // [rsp+148h] [rbp-158h]
  char (*v108)[8]; // [rsp+150h] [rbp-150h]
  unsigned int *v109; // [rsp+158h] [rbp-148h]
  char (*v110)[9]; // [rsp+160h] [rbp-140h]
  unsigned int *v111; // [rsp+168h] [rbp-138h]
  char (*v112)[11]; // [rsp+170h] [rbp-130h]
  unsigned int *v113; // [rsp+178h] [rbp-128h]
  char (*v114)[11]; // [rsp+180h] [rbp-120h]
  unsigned int *v115; // [rsp+188h] [rbp-118h]
  char (*v116)[14]; // [rsp+190h] [rbp-110h]
  unsigned int *v117; // [rsp+198h] [rbp-108h]
  char (*v118)[14]; // [rsp+1A0h] [rbp-100h]
  bool *v119; // [rsp+1A8h] [rbp-F8h]
  int32_t ret; // [rsp+1ECh] [rbp-B4h]
  unsigned int reta; // [rsp+1ECh] [rbp-B4h]
  char v126[176]; // [rsp+1F0h] [rbp-B0h] BYREF

  v60 = (unsigned __int64)v126;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v61 = __asan_stack_malloc_1(128LL);
    if ( v61 )
      v60 = v61;
  }
  *(_QWORD *)v60 = 1102416563LL;
  *(_QWORD *)(v60 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v60 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v62 = (_DWORD *)(v60 >> 3);
  v62[536862720] = -235802127;
  v62[536862721] = -234753551;
  v62[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v119 = std::forward<bool &>(args_55);
  v118 = (char (*)[14])std::forward<char const(&)[14]>(args_54);
  v117 = std::forward<unsigned int &>(args_53);
  v116 = (char (*)[14])std::forward<char const(&)[14]>(args_52);
  v115 = std::forward<unsigned int &>(args_51);
  v114 = (char (*)[11])std::forward<char const(&)[11]>(args_50);
  v113 = std::forward<unsigned int &>(args_49);
  v112 = (char (*)[11])std::forward<char const(&)[11]>(args_48);
  v111 = std::forward<unsigned int &>(args_47);
  v110 = (char (*)[9])std::forward<char const(&)[9]>(args_46);
  v109 = std::forward<unsigned int &>(args_45);
  v108 = (char (*)[8])std::forward<char const(&)[8]>(args_44);
  v107 = std::forward<unsigned int &>(args_43);
  v106 = (char (*)[21])std::forward<char const(&)[21]>(args_42);
  v105 = std::forward<unsigned int &>(args_41);
  v104 = (char (*)[20])std::forward<char const(&)[20]>(args_40);
  v103 = std::forward<bool &>(args_39);
  v102 = (char (*)[17])std::forward<char const(&)[17]>(args_38);
  v101 = std::forward<bool &>(args_37);
  v100 = (char (*)[19])std::forward<char const(&)[19]>(args_36);
  v99 = std::forward<unsigned int &>(args_35);
  v98 = (char (*)[10])std::forward<char const(&)[10]>(args_34);
  v97 = std::forward<bool &>(args_33);
  v96 = (char (*)[21])std::forward<char const(&)[21]>(args_32);
  v95 = std::forward<unsigned int &>(args_31);
  v94 = (char (*)[15])std::forward<char const(&)[15]>(args_30);
  v93 = std::forward<unsigned int &>(args_29);
  v92 = (char (*)[12])std::forward<char const(&)[12]>(args_28);
  v91 = std::forward<unsigned int &>(args_27);
  v90 = (char (*)[5])std::forward<char const(&)[5]>(args_26);
  v89 = std::forward<std::string &>(args_25);
  v88 = (char (*)[9])std::forward<char const(&)[9]>(args_24);
  v87 = std::forward<proto::GadgetBornType &>(args_23);
  v86 = (char (*)[10])std::forward<char const(&)[10]>(args_22);
  v85 = std::forward<unsigned int &>(args_21);
  v84 = (char (*)[14])std::forward<char const(&)[14]>(args_20);
  v83 = std::forward<bool &>(args_19);
  v82 = (char (*)[19])std::forward<char const(&)[19]>(args_18);
  v81 = std::forward<unsigned int &>(args_17);
  v80 = (char (*)[9])std::forward<char const(&)[9]>(args_16);
  v79 = std::forward<unsigned int &>(args_15);
  v78 = (char (*)[6])std::forward<char const(&)[6]>(args_14);
  v77 = std::forward<data::PlatformRotType &>(args_13);
  v76 = (char (*)[18])std::forward<char const(&)[18]>(args_12);
  v75 = std::forward<bool &>(args_11);
  v74 = (char (*)[12])std::forward<char const(&)[12]>(args_10);
  v73 = std::forward<bool &>(args_9);
  v72 = (char (*)[11])std::forward<char const(&)[11]>(args_8);
  v71 = std::forward<bool &>(args_7);
  v70 = (char (*)[9])std::forward<char const(&)[9]>(args_6);
  v69 = std::forward<bool &>(args_5);
  v63 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_4);
  v68 = std::forward<bool &>(args_3);
  v67 = (char (*)[13])std::forward<char const(&)[13]>(args_2);
  v64 = std::forward<data::GadgetType &>(a6);
  std::allocator<char>::allocator(v60 + 48);
  v65 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v60 + 64),
    v65,
    (const std::allocator<char> *)(v60 + 48));
  reta = ScriptUtil::getTableValue<data::GadgetType,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v60 + 64),
           v64,
           v67,
           v68,
           v63,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103,
           v104,
           v105,
           v106,
           v107,
           v108,
           v109,
           v110,
           v111,
           v112,
           v113,
           v114,
           v115,
           v116,
           v117,
           v118,
           v119) | ret;
  std::string::~string((void *)(v60 + 64));
  *(_DWORD *)(((v60 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v60 + 48);
  result = reta;
  if ( v126 == (char *)v60 )
  {
    *(_QWORD *)((v60 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v60 = 1172321806LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E19D4-000000000F7E1CBD
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[5],std::string &,char const(&)[6],data::EventType &,char const(&)[7],std::string &,char const(&)[10],std::string &,char const(&)[7],std::string &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[5]>::type *a5,
        std::string *a6,
        std::remove_reference<char const (&)[6]>::type *args_2,
        data::EventType *args_3,
        std::remove_reference<char const (&)[7]>::type *args_4,
        std::string *args_5,
        std::remove_reference<char const (&)[10]>::type *args_6,
        std::string *args_7,
        std::remove_reference<char const (&)[7]>::type *args_8,
        std::string *args_9)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // r13
  std::string *v17; // r14
  std::remove_reference<char const (&)[7]>::type *v18; // r15
  const char *v19; // rax
  __int64 result; // rax
  std::string *v21; // [rsp+8h] [rbp-128h]
  char (*v22)[6]; // [rsp+10h] [rbp-120h]
  data::EventType *v23; // [rsp+18h] [rbp-118h]
  std::string *v24; // [rsp+20h] [rbp-110h]
  char (*v25)[10]; // [rsp+28h] [rbp-108h]
  std::string *v26; // [rsp+30h] [rbp-100h]
  char (*v27)[7]; // [rsp+38h] [rbp-F8h]
  int32_t ret; // [rsp+7Ch] [rbp-B4h]
  unsigned int reta; // [rsp+7Ch] [rbp-B4h]
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v14 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v14 = v15;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v14 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[5],std::string &,char const(&)[6],data::EventType &,char const(&)[7],std::string &,char const(&)[10],std::string &,char const(&)[7],std::string &>;
  v16 = (_DWORD *)(v14 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234753551;
  v16[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v17 = std::forward<std::string &>(args_9);
  v27 = (char (*)[7])std::forward<char const(&)[7]>(args_8);
  v26 = std::forward<std::string &>(args_7);
  v25 = (char (*)[10])std::forward<char const(&)[10]>(args_6);
  v24 = std::forward<std::string &>(args_5);
  v18 = (std::remove_reference<char const (&)[7]>::type *)std::forward<char const(&)[7]>(args_4);
  v23 = std::forward<data::EventType &>(args_3);
  v22 = (char (*)[6])std::forward<char const(&)[6]>(args_2);
  v21 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v14 + 48);
  v19 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v14 + 64),
    v19,
    (const std::allocator<char> *)(v14 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[6],data::EventType &,char const(&)[7],std::string&,char const(&)[10],std::string&,char const(&)[7],std::string&>(
           this,
           table,
           (const std::string *)(v14 + 64),
           v21,
           v22,
           v23,
           v18,
           v24,
           v25,
           v26,
           v27,
           v17) | ret;
  std::string::~string((void *)(v14 + 64));
  *(_DWORD *)(((v14 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v14 + 48);
  result = reta;
  if ( v34 == (char *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v14 = 1172321806LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E78D8-000000000F7E7D72
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[5],unsigned int &,char const(&)[13],bool &,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[5]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[13]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[23]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        proto::GroupLoadStrategy *args_7,
        std::remove_reference<char const (&)[29]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[21]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[20]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[23]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[25]>::type *args_16,
        std::vector<std::string> *args_17,
        std::remove_reference<char const (&)[12]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[30]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[41]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[23]>::type *args_24,
        bool *args_25)
{
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  _DWORD *v32; // r13
  std::remove_reference<char const (&)[13]>::type *v33; // r15
  unsigned int *v34; // r14
  const char *v35; // rax
  __int64 result; // rax
  bool *v37; // [rsp+8h] [rbp-1A8h]
  char (*v38)[23]; // [rsp+10h] [rbp-1A0h]
  bool *v39; // [rsp+18h] [rbp-198h]
  char (*v40)[14]; // [rsp+20h] [rbp-190h]
  proto::GroupLoadStrategy *v41; // [rsp+28h] [rbp-188h]
  char (*v42)[29]; // [rsp+30h] [rbp-180h]
  bool *v43; // [rsp+38h] [rbp-178h]
  char (*v44)[21]; // [rsp+40h] [rbp-170h]
  bool *v45; // [rsp+48h] [rbp-168h]
  char (*v46)[20]; // [rsp+50h] [rbp-160h]
  bool *v47; // [rsp+58h] [rbp-158h]
  char (*v48)[23]; // [rsp+60h] [rbp-150h]
  bool *v49; // [rsp+68h] [rbp-148h]
  char (*v50)[25]; // [rsp+70h] [rbp-140h]
  std::vector<std::string> *v51; // [rsp+78h] [rbp-138h]
  char (*v52)[12]; // [rsp+80h] [rbp-130h]
  unsigned int *v53; // [rsp+88h] [rbp-128h]
  char (*v54)[30]; // [rsp+90h] [rbp-120h]
  unsigned int *v55; // [rsp+98h] [rbp-118h]
  char (*v56)[41]; // [rsp+A0h] [rbp-110h]
  unsigned int *v57; // [rsp+A8h] [rbp-108h]
  char (*v58)[23]; // [rsp+B0h] [rbp-100h]
  bool *v59; // [rsp+B8h] [rbp-F8h]
  int32_t ret; // [rsp+FCh] [rbp-B4h]
  unsigned int reta; // [rsp+FCh] [rbp-B4h]
  char v66[176]; // [rsp+100h] [rbp-B0h] BYREF

  v30 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v31 = __asan_stack_malloc_1(128LL);
    if ( v31 )
      v30 = v31;
  }
  *(_QWORD *)v30 = 1102416563LL;
  *(_QWORD *)(v30 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v30 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[5],unsigned int &,char const(&)[13],bool &,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>;
  v32 = (_DWORD *)(v30 >> 3);
  v32[536862720] = -235802127;
  v32[536862721] = -234753551;
  v32[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v59 = std::forward<bool &>(args_25);
  v58 = (char (*)[23])std::forward<char const(&)[23]>(args_24);
  v57 = std::forward<unsigned int &>(args_23);
  v56 = (char (*)[41])std::forward<char const(&)[41]>(args_22);
  v55 = std::forward<unsigned int &>(args_21);
  v54 = (char (*)[30])std::forward<char const(&)[30]>(args_20);
  v53 = std::forward<unsigned int &>(args_19);
  v52 = (char (*)[12])std::forward<char const(&)[12]>(args_18);
  v51 = std::forward<std::vector<std::string> &>(args_17);
  v50 = (char (*)[25])std::forward<char const(&)[25]>(args_16);
  v49 = std::forward<bool &>(args_15);
  v48 = (char (*)[23])std::forward<char const(&)[23]>(args_14);
  v47 = std::forward<bool &>(args_13);
  v46 = (char (*)[20])std::forward<char const(&)[20]>(args_12);
  v45 = std::forward<bool &>(args_11);
  v44 = (char (*)[21])std::forward<char const(&)[21]>(args_10);
  v43 = std::forward<bool &>(args_9);
  v42 = (char (*)[29])std::forward<char const(&)[29]>(args_8);
  v41 = std::forward<proto::GroupLoadStrategy &>(args_7);
  v40 = (char (*)[14])std::forward<char const(&)[14]>(args_6);
  v39 = std::forward<bool &>(args_5);
  v38 = (char (*)[23])std::forward<char const(&)[23]>(args_4);
  v37 = std::forward<bool &>(args_3);
  v33 = (std::remove_reference<char const (&)[13]>::type *)std::forward<char const(&)[13]>(args_2);
  v34 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v30 + 48);
  v35 = (const char *)std::forward<char const(&)[5]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v30 + 64),
    v35,
    (const std::allocator<char> *)(v30 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[13],bool &,char const(&)[23],bool &,char const(&)[14],proto::GroupLoadStrategy &,char const(&)[29],bool &,char const(&)[21],bool &,char const(&)[20],bool &,char const(&)[23],bool &,char const(&)[25],std::vector<std::string> &,char const(&)[12],unsigned int &,char const(&)[30],unsigned int &,char const(&)[41],unsigned int &,char const(&)[23],bool &>(
           this,
           table,
           (const std::string *)(v30 + 64),
           v34,
           v33,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59) | ret;
  std::string::~string((void *)(v30 + 64));
  *(_DWORD *)(((v30 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v30 + 48);
  result = reta;
  if ( v66 == (char *)v30 )
  {
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v30 = 1172321806LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v30 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E5FCA-000000000F7E681C
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[6],data::GadgetState &,char const(&)[11],unsigned int &,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[6]>::type *a5,
        std::remove_reference<data::GadgetState&>::type *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[5]>::type *args_4,
        data::GadgetType *args_5,
        std::remove_reference<char const (&)[13]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        bool *args_11,
        std::remove_reference<char const (&)[11]>::type *args_12,
        bool *args_13,
        std::remove_reference<char const (&)[12]>::type *args_14,
        bool *args_15,
        std::remove_reference<char const (&)[18]>::type *args_16,
        data::PlatformRotType *args_17,
        std::remove_reference<char const (&)[6]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[9]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[19]>::type *args_22,
        bool *args_23,
        std::remove_reference<char const (&)[14]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[10]>::type *args_26,
        proto::GadgetBornType *args_27,
        std::remove_reference<char const (&)[9]>::type *args_28,
        std::string *args_29,
        std::remove_reference<char const (&)[5]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[12]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[15]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[21]>::type *args_36,
        bool *args_37,
        std::remove_reference<char const (&)[10]>::type *args_38,
        unsigned int *args_39,
        std::remove_reference<char const (&)[19]>::type *args_40,
        bool *args_41,
        std::remove_reference<char const (&)[17]>::type *args_42,
        bool *args_43,
        std::remove_reference<char const (&)[20]>::type *args_44,
        unsigned int *args_45,
        std::remove_reference<char const (&)[21]>::type *args_46,
        unsigned int *args_47,
        std::remove_reference<char const (&)[8]>::type *args_48,
        unsigned int *args_49,
        std::remove_reference<char const (&)[9]>::type *args_50,
        unsigned int *args_51,
        std::remove_reference<char const (&)[11]>::type *args_52,
        unsigned int *args_53,
        std::remove_reference<char const (&)[11]>::type *args_54,
        unsigned int *args_55,
        std::remove_reference<char const (&)[14]>::type *args_56,
        unsigned int *args_57,
        std::remove_reference<char const (&)[14]>::type *args_58)
{
  unsigned __int64 v64; // rbx
  __int64 v65; // rax
  _DWORD *v66; // r13
  std::remove_reference<char const (&)[5]>::type *v67; // r14
  data::GadgetState *v68; // r15
  const char *v69; // rax
  __int64 result; // rax
  char (*v71)[11]; // [rsp+8h] [rbp-2B8h]
  std::remove_reference<unsigned int&>::type *v72; // [rsp+10h] [rbp-2B0h]
  data::GadgetType *v73; // [rsp+18h] [rbp-2A8h]
  char (*v74)[13]; // [rsp+20h] [rbp-2A0h]
  bool *v75; // [rsp+28h] [rbp-298h]
  char (*v76)[9]; // [rsp+30h] [rbp-290h]
  bool *v77; // [rsp+38h] [rbp-288h]
  char (*v78)[9]; // [rsp+40h] [rbp-280h]
  bool *v79; // [rsp+48h] [rbp-278h]
  char (*v80)[11]; // [rsp+50h] [rbp-270h]
  bool *v81; // [rsp+58h] [rbp-268h]
  char (*v82)[12]; // [rsp+60h] [rbp-260h]
  bool *v83; // [rsp+68h] [rbp-258h]
  char (*v84)[18]; // [rsp+70h] [rbp-250h]
  data::PlatformRotType *v85; // [rsp+78h] [rbp-248h]
  char (*v86)[6]; // [rsp+80h] [rbp-240h]
  unsigned int *v87; // [rsp+88h] [rbp-238h]
  char (*v88)[9]; // [rsp+90h] [rbp-230h]
  unsigned int *v89; // [rsp+98h] [rbp-228h]
  char (*v90)[19]; // [rsp+A0h] [rbp-220h]
  bool *v91; // [rsp+A8h] [rbp-218h]
  char (*v92)[14]; // [rsp+B0h] [rbp-210h]
  unsigned int *v93; // [rsp+B8h] [rbp-208h]
  char (*v94)[10]; // [rsp+C0h] [rbp-200h]
  proto::GadgetBornType *v95; // [rsp+C8h] [rbp-1F8h]
  char (*v96)[9]; // [rsp+D0h] [rbp-1F0h]
  std::string *v97; // [rsp+D8h] [rbp-1E8h]
  char (*v98)[5]; // [rsp+E0h] [rbp-1E0h]
  unsigned int *v99; // [rsp+E8h] [rbp-1D8h]
  char (*v100)[12]; // [rsp+F0h] [rbp-1D0h]
  unsigned int *v101; // [rsp+F8h] [rbp-1C8h]
  char (*v102)[15]; // [rsp+100h] [rbp-1C0h]
  unsigned int *v103; // [rsp+108h] [rbp-1B8h]
  char (*v104)[21]; // [rsp+110h] [rbp-1B0h]
  bool *v105; // [rsp+118h] [rbp-1A8h]
  char (*v106)[10]; // [rsp+120h] [rbp-1A0h]
  unsigned int *v107; // [rsp+128h] [rbp-198h]
  char (*v108)[19]; // [rsp+130h] [rbp-190h]
  bool *v109; // [rsp+138h] [rbp-188h]
  char (*v110)[17]; // [rsp+140h] [rbp-180h]
  bool *v111; // [rsp+148h] [rbp-178h]
  char (*v112)[20]; // [rsp+150h] [rbp-170h]
  unsigned int *v113; // [rsp+158h] [rbp-168h]
  char (*v114)[21]; // [rsp+160h] [rbp-160h]
  unsigned int *v115; // [rsp+168h] [rbp-158h]
  char (*v116)[8]; // [rsp+170h] [rbp-150h]
  unsigned int *v117; // [rsp+178h] [rbp-148h]
  char (*v118)[9]; // [rsp+180h] [rbp-140h]
  unsigned int *v119; // [rsp+188h] [rbp-138h]
  char (*v120)[11]; // [rsp+190h] [rbp-130h]
  unsigned int *v121; // [rsp+198h] [rbp-128h]
  char (*v122)[11]; // [rsp+1A0h] [rbp-120h]
  unsigned int *v123; // [rsp+1A8h] [rbp-118h]
  char (*v124)[14]; // [rsp+1B0h] [rbp-110h]
  unsigned int *v125; // [rsp+1B8h] [rbp-108h]
  char (*v126)[14]; // [rsp+1C0h] [rbp-100h]
  bool *v127; // [rsp+1C8h] [rbp-F8h]
  int32_t ret; // [rsp+20Ch] [rbp-B4h]
  unsigned int reta; // [rsp+20Ch] [rbp-B4h]
  char v134[176]; // [rsp+210h] [rbp-B0h] BYREF

  v64 = (unsigned __int64)v134;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v65 = __asan_stack_malloc_1(128LL);
    if ( v65 )
      v64 = v65;
  }
  *(_QWORD *)v64 = 1102416563LL;
  *(_QWORD *)(v64 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v64 + 16) = &ScriptUtil::getTableValue<unsigned int,char const(&)[6],data::GadgetState &,char const(&)[11],unsigned int &,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v66 = (_DWORD *)(v64 >> 3);
  v66[536862720] = -235802127;
  v66[536862721] = -234753551;
  v66[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v127 = std::forward<bool &>(args_59);
  v126 = (char (*)[14])std::forward<char const(&)[14]>(args_58);
  v125 = std::forward<unsigned int &>(args_57);
  v124 = (char (*)[14])std::forward<char const(&)[14]>(args_56);
  v123 = std::forward<unsigned int &>(args_55);
  v122 = (char (*)[11])std::forward<char const(&)[11]>(args_54);
  v121 = std::forward<unsigned int &>(args_53);
  v120 = (char (*)[11])std::forward<char const(&)[11]>(args_52);
  v119 = std::forward<unsigned int &>(args_51);
  v118 = (char (*)[9])std::forward<char const(&)[9]>(args_50);
  v117 = std::forward<unsigned int &>(args_49);
  v116 = (char (*)[8])std::forward<char const(&)[8]>(args_48);
  v115 = std::forward<unsigned int &>(args_47);
  v114 = (char (*)[21])std::forward<char const(&)[21]>(args_46);
  v113 = std::forward<unsigned int &>(args_45);
  v112 = (char (*)[20])std::forward<char const(&)[20]>(args_44);
  v111 = std::forward<bool &>(args_43);
  v110 = (char (*)[17])std::forward<char const(&)[17]>(args_42);
  v109 = std::forward<bool &>(args_41);
  v108 = (char (*)[19])std::forward<char const(&)[19]>(args_40);
  v107 = std::forward<unsigned int &>(args_39);
  v106 = (char (*)[10])std::forward<char const(&)[10]>(args_38);
  v105 = std::forward<bool &>(args_37);
  v104 = (char (*)[21])std::forward<char const(&)[21]>(args_36);
  v103 = std::forward<unsigned int &>(args_35);
  v102 = (char (*)[15])std::forward<char const(&)[15]>(args_34);
  v101 = std::forward<unsigned int &>(args_33);
  v100 = (char (*)[12])std::forward<char const(&)[12]>(args_32);
  v99 = std::forward<unsigned int &>(args_31);
  v98 = (char (*)[5])std::forward<char const(&)[5]>(args_30);
  v97 = std::forward<std::string &>(args_29);
  v96 = (char (*)[9])std::forward<char const(&)[9]>(args_28);
  v95 = std::forward<proto::GadgetBornType &>(args_27);
  v94 = (char (*)[10])std::forward<char const(&)[10]>(args_26);
  v93 = std::forward<unsigned int &>(args_25);
  v92 = (char (*)[14])std::forward<char const(&)[14]>(args_24);
  v91 = std::forward<bool &>(args_23);
  v90 = (char (*)[19])std::forward<char const(&)[19]>(args_22);
  v89 = std::forward<unsigned int &>(args_21);
  v88 = (char (*)[9])std::forward<char const(&)[9]>(args_20);
  v87 = std::forward<unsigned int &>(args_19);
  v86 = (char (*)[6])std::forward<char const(&)[6]>(args_18);
  v85 = std::forward<data::PlatformRotType &>(args_17);
  v84 = (char (*)[18])std::forward<char const(&)[18]>(args_16);
  v83 = std::forward<bool &>(args_15);
  v82 = (char (*)[12])std::forward<char const(&)[12]>(args_14);
  v81 = std::forward<bool &>(args_13);
  v80 = (char (*)[11])std::forward<char const(&)[11]>(args_12);
  v79 = std::forward<bool &>(args_11);
  v78 = (char (*)[9])std::forward<char const(&)[9]>(args_10);
  v77 = std::forward<bool &>(args_9);
  v76 = (char (*)[9])std::forward<char const(&)[9]>(args_8);
  v75 = std::forward<bool &>(args_7);
  v74 = (char (*)[13])std::forward<char const(&)[13]>(args_6);
  v73 = std::forward<data::GadgetType &>(args_5);
  v67 = (std::remove_reference<char const (&)[5]>::type *)std::forward<char const(&)[5]>(args_4);
  v72 = std::forward<unsigned int &>(args_3);
  v71 = (char (*)[11])std::forward<char const(&)[11]>(args_2);
  v68 = std::forward<data::GadgetState &>(a6);
  std::allocator<char>::allocator(v64 + 48);
  v69 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v64 + 64),
    v69,
    (const std::allocator<char> *)(v64 + 48));
  reta = ScriptUtil::getTableValue<data::GadgetState,char const(&)[11],unsigned int &,char const(&)[5],data::GadgetType &,char const(&)[13],bool &,char const(&)[9],bool &,char const(&)[9],bool &,char const(&)[11],bool &,char const(&)[12],bool &,char const(&)[18],data::PlatformRotType &,char const(&)[6],unsigned int &,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v64 + 64),
           v68,
           v71,
           v72,
           v67,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100,
           v101,
           v102,
           v103,
           v104,
           v105,
           v106,
           v107,
           v108,
           v109,
           v110,
           v111,
           v112,
           v113,
           v114,
           v115,
           v116,
           v117,
           v118,
           v119,
           v120,
           v121,
           v122,
           v123,
           v124,
           v125,
           v126,
           v127) | ret;
  std::string::~string((void *)(v64 + 64));
  *(_DWORD *)(((v64 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v64 + 48);
  result = reta;
  if ( v134 == (char *)v64 )
  {
    *(_QWORD *)((v64 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v64 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v64 = 1172321806LL;
    *(_QWORD *)((v64 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v64 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E10E4-000000000F7E1334
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[6],data::RegionShape &,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        data::RegionShape *a6,
        std::remove_reference<char const (&)[4]>::type *args_2,
        Vector3 *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[4]>::type *v11; // r15
  data::RegionShape *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  Vector3 *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[6],data::RegionShape &,char const(&)[4],Vector3 &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<Vector3 &>(args_3);
  v11 = (std::remove_reference<char const (&)[4]>::type *)std::forward<char const(&)[4]>(args_2);
  v12 = std::forward<data::RegionShape &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<data::RegionShape,char const(&)[4],Vector3 &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E681E-000000000F7E6A6E
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[10],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[10]>::type *args_2,
        unsigned int *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[10]>::type *v11; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  unsigned int *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[10],unsigned int &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<unsigned int &>(args_3);
  v11 = (std::remove_reference<char const (&)[10]>::type *)std::forward<char const(&)[10]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F83B76E-000000000F83B9F1
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[4]>::type *args_2,
        Vector3 *args_3,
        std::remove_reference<char const (&)[4]>::type *args_4,
        Vector3 *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  Vector3 *v13; // r15
  std::remove_reference<char const (&)[4]>::type *v14; // r14
  const char *v15; // rax
  __int64 result; // rax
  unsigned int *v17; // [rsp+8h] [rbp-108h]
  char (*v18)[4]; // [rsp+10h] [rbp-100h]
  Vector3 *v19; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<Vector3 &>(args_5);
  v14 = (std::remove_reference<char const (&)[4]>::type *)std::forward<char const(&)[4]>(args_4);
  v19 = std::forward<Vector3 &>(args_3);
  v18 = (char (*)[4])std::forward<char const(&)[4]>(args_2);
  v17 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v17,
           v18,
           v19,
           v14,
           v13) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v26 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E4924-000000000F7E4B43
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[6]>::type *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned int *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[6]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue<unsigned int>(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000CED7FA2-000000000CED81C1
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[7],luabind::adl::object &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[7]>::type *a5,
        luabind::adl::object *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  luabind::adl::object *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[7],luabind::adl::object &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<luabind::adl::object &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[7]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 75: range 000000000F7E0B3E-000000000F7E0DC1
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[7],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[7]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[4]>::type *args_2,
        Vector3 *args_3,
        std::remove_reference<char const (&)[4]>::type *args_4,
        Vector3 *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  Vector3 *v13; // r15
  std::remove_reference<char const (&)[4]>::type *v14; // r14
  const char *v15; // rax
  __int64 result; // rax
  unsigned int *v17; // [rsp+8h] [rbp-108h]
  char (*v18)[4]; // [rsp+10h] [rbp-100h]
  Vector3 *v19; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[7],unsigned int &,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<Vector3 &>(args_5);
  v14 = (std::remove_reference<char const (&)[4]>::type *)std::forward<char const(&)[4]>(args_4);
  v19 = std::forward<Vector3 &>(args_3);
  v18 = (char (*)[4])std::forward<char const(&)[4]>(args_2);
  v17 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[7]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[4],Vector3 &,char const(&)[4],Vector3 &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v17,
           v18,
           v19,
           v14,
           v13) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v26 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E159C-000000000F7E181F
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[24],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[8]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[24]>::type *args_4,
        bool *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  bool *v13; // r15
  std::remove_reference<char const (&)[24]>::type *v14; // r14
  const char *v15; // rax
  __int64 result; // rax
  unsigned int *v17; // [rsp+8h] [rbp-108h]
  char (*v18)[14]; // [rsp+10h] [rbp-100h]
  unsigned int *v19; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[24],bool &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<bool &>(args_5);
  v14 = (std::remove_reference<char const (&)[24]>::type *)std::forward<char const(&)[24]>(args_4);
  v19 = std::forward<unsigned int &>(args_3);
  v18 = (char (*)[14])std::forward<char const(&)[14]>(args_2);
  v17 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &,char const(&)[24],bool &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v17,
           v18,
           v19,
           v14,
           v13) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v26 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E0DC2-000000000F7E1012
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[8]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        unsigned int *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[14]>::type *v11; // r15
  unsigned int *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  unsigned int *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<unsigned int &>(args_3);
  v11 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_2);
  v12 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[14],unsigned int &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D485B18-000000000D485E33
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[8]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[4]>::type *args_2,
        unsigned __int64 *args_3,
        std::remove_reference<char const (&)[12]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[13]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[18]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[16]>::type *args_10,
        bool *args_11)
{
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r13
  bool *v19; // r14
  const char (*v20)[16]; // r15
  const char *v21; // rax
  __int64 result; // rax
  char *v23; // [rsp+0h] [rbp-140h]
  unsigned int *v24; // [rsp+8h] [rbp-138h]
  const char (*v25)[4]; // [rsp+10h] [rbp-130h]
  unsigned __int64 *v26; // [rsp+18h] [rbp-128h]
  const char (*v27)[12]; // [rsp+20h] [rbp-120h]
  unsigned int *v28; // [rsp+28h] [rbp-118h]
  const char (*v29)[13]; // [rsp+30h] [rbp-110h]
  unsigned int *v30; // [rsp+38h] [rbp-108h]
  const char (*v31)[18]; // [rsp+40h] [rbp-100h]
  unsigned int *v32; // [rsp+48h] [rbp-F8h]
  int32_t ret; // [rsp+8Ch] [rbp-B4h]
  unsigned int reta; // [rsp+8Ch] [rbp-B4h]
  char v39[44][4]; // [rsp+90h] [rbp-B0h] BYREF

  v16 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v16 = v17;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v16 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v18 = (_DWORD *)(v16 >> 3);
  v18[536862720] = -235802127;
  v18[536862721] = -234753551;
  v18[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v19 = std::forward<bool &>(args_11);
  v20 = std::forward<char const(&)[16]>(args_10);
  v32 = std::forward<unsigned int &>(args_9);
  v31 = std::forward<char const(&)[18]>(args_8);
  v30 = std::forward<unsigned int &>(args_7);
  v29 = std::forward<char const(&)[13]>(args_6);
  v28 = std::forward<unsigned int &>(args_5);
  v27 = std::forward<char const(&)[12]>(args_4);
  v26 = std::forward<unsigned long &>(args_3);
  v25 = std::forward<char const(&)[4]>(args_2);
  v24 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v16 + 48);
  v21 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v16 + 64),
    v21,
    (const std::allocator<char> *)(v16 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v16 + 64),
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v20,
           v19,
           v39,
           (unsigned __int64 *)v24,
           (const char (*)[12])v25,
           (unsigned int *)v26,
           (const char (*)[13])v27,
           v28,
           (const char (*)[18])v29,
           v30,
           (const char (*)[16])v31,
           (bool *)v32) | ret;
  std::string::~string((void *)(v16 + 64));
  *(_DWORD *)(((v16 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v16 + 48);
  result = reta;
  if ( v23 == (char *)v16 )
  {
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0E3D4-000000000FA0E6EF
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[8]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[11]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[11]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[14]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[14]>::type *args_10,
        bool *args_11)
{
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r13
  bool *v19; // r14
  const char (*v20)[14]; // r15
  const char *v21; // rax
  __int64 result; // rax
  char *v23; // [rsp+0h] [rbp-140h]
  unsigned int *v24; // [rsp+8h] [rbp-138h]
  const char (*v25)[9]; // [rsp+10h] [rbp-130h]
  unsigned int *v26; // [rsp+18h] [rbp-128h]
  const char (*v27)[11]; // [rsp+20h] [rbp-120h]
  unsigned int *v28; // [rsp+28h] [rbp-118h]
  const char (*v29)[11]; // [rsp+30h] [rbp-110h]
  unsigned int *v30; // [rsp+38h] [rbp-108h]
  const char (*v31)[14]; // [rsp+40h] [rbp-100h]
  unsigned int *v32; // [rsp+48h] [rbp-F8h]
  int32_t ret; // [rsp+8Ch] [rbp-B4h]
  unsigned int reta; // [rsp+8Ch] [rbp-B4h]
  char v39[19][9]; // [rsp+90h] [rbp-B0h] BYREF

  v16 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v16 = v17;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v16 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v18 = (_DWORD *)(v16 >> 3);
  v18[536862720] = -235802127;
  v18[536862721] = -234753551;
  v18[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v19 = std::forward<bool &>(args_11);
  v20 = std::forward<char const(&)[14]>(args_10);
  v32 = std::forward<unsigned int &>(args_9);
  v31 = std::forward<char const(&)[14]>(args_8);
  v30 = std::forward<unsigned int &>(args_7);
  v29 = std::forward<char const(&)[11]>(args_6);
  v28 = std::forward<unsigned int &>(args_5);
  v27 = std::forward<char const(&)[11]>(args_4);
  v26 = std::forward<unsigned int &>(args_3);
  v25 = std::forward<char const(&)[9]>(args_2);
  v24 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v16 + 48);
  v21 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v16 + 64),
    v21,
    (const std::allocator<char> *)(v16 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v16 + 64),
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v20,
           v19,
           v39,
           v24,
           (const char (*)[11])v25,
           v26,
           v27,
           v28,
           (const char (*)[14])v29,
           v30,
           v31,
           (bool *)v32) | ret;
  std::string::~string((void *)(v16 + 64));
  *(_DWORD *)(((v16 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v16 + 48);
  result = reta;
  if ( v23 == (char *)v16 )
  {
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E9ED0-000000000F7EA120
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        Vector3 *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        Vector3 *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[9]>::type *v11; // r15
  Vector3 *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  Vector3 *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],Vector3 &,char const(&)[9],Vector3 &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<Vector3 &>(args_3);
  v11 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_2);
  v12 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<Vector3,char const(&)[9],Vector3&>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E1CBE-000000000F7E1F0E
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[4],std::string &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::string *a6,
        std::remove_reference<char const (&)[4]>::type *args_2,
        std::string *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[4]>::type *v11; // r15
  std::string *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  std::string *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[4],std::string &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v15 = std::forward<std::string &>(args_3);
  v11 = (std::remove_reference<char const (&)[4]>::type *)std::forward<char const(&)[4]>(args_2);
  v12 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[4],std::string&>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F957754-000000000F957C26
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::string *a6,
        std::remove_reference<char const (&)[5]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[10]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[15]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[16]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[21]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[11]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[16]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[8]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[14]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[17]>::type *args_22,
        std::string *args_23,
        std::remove_reference<char const (&)[16]>::type *args_24,
        bool *args_25,
        std::remove_reference<char const (&)[14]>::type *args_26,
        bool *args_27)
{
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  _DWORD *v34; // r13
  std::remove_reference<char const (&)[10]>::type *v35; // r15
  std::string *v36; // r14
  const char *v37; // rax
  __int64 result; // rax
  char (*v39)[5]; // [rsp+8h] [rbp-1B8h]
  unsigned int *v40; // [rsp+10h] [rbp-1B0h]
  unsigned int *v41; // [rsp+18h] [rbp-1A8h]
  char (*v42)[15]; // [rsp+20h] [rbp-1A0h]
  unsigned int *v43; // [rsp+28h] [rbp-198h]
  char (*v44)[9]; // [rsp+30h] [rbp-190h]
  unsigned int *v45; // [rsp+38h] [rbp-188h]
  char (*v46)[16]; // [rsp+40h] [rbp-180h]
  unsigned int *v47; // [rsp+48h] [rbp-178h]
  char (*v48)[21]; // [rsp+50h] [rbp-170h]
  unsigned int *v49; // [rsp+58h] [rbp-168h]
  char (*v50)[11]; // [rsp+60h] [rbp-160h]
  unsigned int *v51; // [rsp+68h] [rbp-158h]
  char (*v52)[16]; // [rsp+70h] [rbp-150h]
  unsigned int *v53; // [rsp+78h] [rbp-148h]
  char (*v54)[8]; // [rsp+80h] [rbp-140h]
  unsigned int *v55; // [rsp+88h] [rbp-138h]
  char (*v56)[14]; // [rsp+90h] [rbp-130h]
  unsigned int *v57; // [rsp+98h] [rbp-128h]
  char (*v58)[17]; // [rsp+A0h] [rbp-120h]
  std::string *v59; // [rsp+A8h] [rbp-118h]
  char (*v60)[16]; // [rsp+B0h] [rbp-110h]
  bool *v61; // [rsp+B8h] [rbp-108h]
  char (*v62)[14]; // [rsp+C0h] [rbp-100h]
  bool *v63; // [rsp+C8h] [rbp-F8h]
  int32_t ret; // [rsp+10Ch] [rbp-B4h]
  unsigned int reta; // [rsp+10Ch] [rbp-B4h]
  char v70[176]; // [rsp+110h] [rbp-B0h] BYREF

  v32 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v33 = __asan_stack_malloc_1(128LL);
    if ( v33 )
      v32 = v33;
  }
  *(_QWORD *)v32 = 1102416563LL;
  *(_QWORD *)(v32 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v32 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v34 = (_DWORD *)(v32 >> 3);
  v34[536862720] = -235802127;
  v34[536862721] = -234753551;
  v34[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v63 = std::forward<bool &>(args_27);
  v62 = (char (*)[14])std::forward<char const(&)[14]>(args_26);
  v61 = std::forward<bool &>(args_25);
  v60 = (char (*)[16])std::forward<char const(&)[16]>(args_24);
  v59 = std::forward<std::string &>(args_23);
  v58 = (char (*)[17])std::forward<char const(&)[17]>(args_22);
  v57 = std::forward<unsigned int &>(args_21);
  v56 = (char (*)[14])std::forward<char const(&)[14]>(args_20);
  v55 = std::forward<unsigned int &>(args_19);
  v54 = (char (*)[8])std::forward<char const(&)[8]>(args_18);
  v53 = std::forward<unsigned int &>(args_17);
  v52 = (char (*)[16])std::forward<char const(&)[16]>(args_16);
  v51 = std::forward<unsigned int &>(args_15);
  v50 = (char (*)[11])std::forward<char const(&)[11]>(args_14);
  v49 = std::forward<unsigned int &>(args_13);
  v48 = (char (*)[21])std::forward<char const(&)[21]>(args_12);
  v47 = std::forward<unsigned int &>(args_11);
  v46 = (char (*)[16])std::forward<char const(&)[16]>(args_10);
  v45 = std::forward<unsigned int &>(args_9);
  v44 = (char (*)[9])std::forward<char const(&)[9]>(args_8);
  v43 = std::forward<unsigned int &>(args_7);
  v42 = (char (*)[15])std::forward<char const(&)[15]>(args_6);
  v41 = std::forward<unsigned int &>(args_5);
  v35 = (std::remove_reference<char const (&)[10]>::type *)std::forward<char const(&)[10]>(args_4);
  v40 = std::forward<unsigned int &>(args_3);
  v39 = (char (*)[5])std::forward<char const(&)[5]>(args_2);
  v36 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v32 + 48);
  v37 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v32 + 64),
    v37,
    (const std::allocator<char> *)(v32 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string&,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v32 + 64),
           v36,
           v39,
           v40,
           v35,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63) | ret;
  std::string::~string((void *)(v32 + 64));
  *(_DWORD *)(((v32 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v32 + 48);
  result = reta;
  if ( v70 == (char *)v32 )
  {
    *(_QWORD *)((v32 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v32 = 1172321806LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v32 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000FA0E6F0-000000000FA0E9D9
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[11]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[11]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[14]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[14]>::type *args_8,
        bool *args_9)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // r13
  bool *v17; // r14
  std::remove_reference<char const (&)[11]>::type *v18; // r15
  const char *v19; // rax
  __int64 result; // rax
  unsigned int *v21; // [rsp+8h] [rbp-128h]
  char (*v22)[11]; // [rsp+10h] [rbp-120h]
  unsigned int *v23; // [rsp+18h] [rbp-118h]
  unsigned int *v24; // [rsp+20h] [rbp-110h]
  char (*v25)[14]; // [rsp+28h] [rbp-108h]
  unsigned int *v26; // [rsp+30h] [rbp-100h]
  char (*v27)[14]; // [rsp+38h] [rbp-F8h]
  int32_t ret; // [rsp+7Ch] [rbp-B4h]
  unsigned int reta; // [rsp+7Ch] [rbp-B4h]
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v14 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v14 = v15;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v14 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v16 = (_DWORD *)(v14 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234753551;
  v16[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v17 = std::forward<bool &>(args_9);
  v27 = (char (*)[14])std::forward<char const(&)[14]>(args_8);
  v26 = std::forward<unsigned int &>(args_7);
  v25 = (char (*)[14])std::forward<char const(&)[14]>(args_6);
  v24 = std::forward<unsigned int &>(args_5);
  v18 = (std::remove_reference<char const (&)[11]>::type *)std::forward<char const(&)[11]>(args_4);
  v23 = std::forward<unsigned int &>(args_3);
  v22 = (char (*)[11])std::forward<char const(&)[11]>(args_2);
  v21 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v14 + 48);
  v19 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v14 + 64),
    v19,
    (const std::allocator<char> *)(v14 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v14 + 64),
           v21,
           v22,
           v23,
           v18,
           v24,
           v25,
           v26,
           v27,
           v17) | ret;
  std::string::~string((void *)(v14 + 64));
  *(_DWORD *)(((v14 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v14 + 48);
  result = reta;
  if ( v34 == (char *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v14 = 1172321806LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9E5756-000000000F9E5B45
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[16]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[21]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[11]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[16]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[8]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[14]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[17]>::type *args_14,
        std::string *args_15,
        std::remove_reference<char const (&)[16]>::type *args_16,
        bool *args_17,
        std::remove_reference<char const (&)[14]>::type *args_18,
        bool *args_19)
{
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  _DWORD *v26; // r13
  std::remove_reference<char const (&)[16]>::type *v27; // r15
  unsigned int *v28; // r14
  const char *v29; // rax
  __int64 result; // rax
  unsigned int *v31; // [rsp+8h] [rbp-178h]
  char (*v32)[21]; // [rsp+10h] [rbp-170h]
  unsigned int *v33; // [rsp+18h] [rbp-168h]
  char (*v34)[11]; // [rsp+20h] [rbp-160h]
  unsigned int *v35; // [rsp+28h] [rbp-158h]
  char (*v36)[16]; // [rsp+30h] [rbp-150h]
  unsigned int *v37; // [rsp+38h] [rbp-148h]
  char (*v38)[8]; // [rsp+40h] [rbp-140h]
  unsigned int *v39; // [rsp+48h] [rbp-138h]
  char (*v40)[14]; // [rsp+50h] [rbp-130h]
  unsigned int *v41; // [rsp+58h] [rbp-128h]
  char (*v42)[17]; // [rsp+60h] [rbp-120h]
  std::string *v43; // [rsp+68h] [rbp-118h]
  char (*v44)[16]; // [rsp+70h] [rbp-110h]
  bool *v45; // [rsp+78h] [rbp-108h]
  char (*v46)[14]; // [rsp+80h] [rbp-100h]
  bool *v47; // [rsp+88h] [rbp-F8h]
  int32_t ret; // [rsp+CCh] [rbp-B4h]
  unsigned int reta; // [rsp+CCh] [rbp-B4h]
  char v54[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v24 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_1(128LL);
    if ( v25 )
      v24 = v25;
  }
  *(_QWORD *)v24 = 1102416563LL;
  *(_QWORD *)(v24 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v24 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v26 = (_DWORD *)(v24 >> 3);
  v26[536862720] = -235802127;
  v26[536862721] = -234753551;
  v26[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v47 = std::forward<bool &>(args_19);
  v46 = (char (*)[14])std::forward<char const(&)[14]>(args_18);
  v45 = std::forward<bool &>(args_17);
  v44 = (char (*)[16])std::forward<char const(&)[16]>(args_16);
  v43 = std::forward<std::string &>(args_15);
  v42 = (char (*)[17])std::forward<char const(&)[17]>(args_14);
  v41 = std::forward<unsigned int &>(args_13);
  v40 = (char (*)[14])std::forward<char const(&)[14]>(args_12);
  v39 = std::forward<unsigned int &>(args_11);
  v38 = (char (*)[8])std::forward<char const(&)[8]>(args_10);
  v37 = std::forward<unsigned int &>(args_9);
  v36 = (char (*)[16])std::forward<char const(&)[16]>(args_8);
  v35 = std::forward<unsigned int &>(args_7);
  v34 = (char (*)[11])std::forward<char const(&)[11]>(args_6);
  v33 = std::forward<unsigned int &>(args_5);
  v32 = (char (*)[21])std::forward<char const(&)[21]>(args_4);
  v31 = std::forward<unsigned int &>(args_3);
  v27 = (std::remove_reference<char const (&)[16]>::type *)std::forward<char const(&)[16]>(args_2);
  v28 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v24 + 48);
  v29 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v24 + 64),
    v29,
    (const std::allocator<char> *)(v24 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v24 + 64),
           v28,
           v27,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47) | ret;
  std::string::~string((void *)(v24 + 64));
  *(_DWORD *)(((v24 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v24 + 48);
  result = reta;
  if ( v54 == (char *)v24 )
  {
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v24 = 1172321806LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D44C6A6-000000000D44CAD0
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[16]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[21]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[11]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[16]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[8]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[4]>::type *args_12,
        unsigned __int64 *args_13,
        std::remove_reference<char const (&)[12]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[13]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[18]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[16]>::type *args_20,
        bool *args_21)
{
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // r13
  std::remove_reference<char const (&)[16]>::type *v29; // r15
  unsigned int *v30; // r14
  const char *v31; // rax
  __int64 result; // rax
  unsigned int *v33; // [rsp+8h] [rbp-188h]
  char (*v34)[21]; // [rsp+10h] [rbp-180h]
  unsigned int *v35; // [rsp+18h] [rbp-178h]
  char (*v36)[11]; // [rsp+20h] [rbp-170h]
  unsigned int *v37; // [rsp+28h] [rbp-168h]
  char (*v38)[16]; // [rsp+30h] [rbp-160h]
  unsigned int *v39; // [rsp+38h] [rbp-158h]
  char (*v40)[8]; // [rsp+40h] [rbp-150h]
  unsigned int *v41; // [rsp+48h] [rbp-148h]
  char (*v42)[4]; // [rsp+50h] [rbp-140h]
  unsigned __int64 *v43; // [rsp+58h] [rbp-138h]
  char (*v44)[12]; // [rsp+60h] [rbp-130h]
  unsigned int *v45; // [rsp+68h] [rbp-128h]
  char (*v46)[13]; // [rsp+70h] [rbp-120h]
  unsigned int *v47; // [rsp+78h] [rbp-118h]
  char (*v48)[18]; // [rsp+80h] [rbp-110h]
  unsigned int *v49; // [rsp+88h] [rbp-108h]
  char (*v50)[16]; // [rsp+90h] [rbp-100h]
  bool *v51; // [rsp+98h] [rbp-F8h]
  int32_t ret; // [rsp+DCh] [rbp-B4h]
  unsigned int reta; // [rsp+DCh] [rbp-B4h]
  char v58[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v26 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_1(128LL);
    if ( v27 )
      v26 = v27;
  }
  *(_QWORD *)v26 = 1102416563LL;
  *(_QWORD *)(v26 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v26 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v28 = (_DWORD *)(v26 >> 3);
  v28[536862720] = -235802127;
  v28[536862721] = -234753551;
  v28[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v51 = std::forward<bool &>(args_21);
  v50 = (char (*)[16])std::forward<char const(&)[16]>(args_20);
  v49 = std::forward<unsigned int &>(args_19);
  v48 = (char (*)[18])std::forward<char const(&)[18]>(args_18);
  v47 = std::forward<unsigned int &>(args_17);
  v46 = (char (*)[13])std::forward<char const(&)[13]>(args_16);
  v45 = std::forward<unsigned int &>(args_15);
  v44 = (char (*)[12])std::forward<char const(&)[12]>(args_14);
  v43 = std::forward<unsigned long &>(args_13);
  v42 = (char (*)[4])std::forward<char const(&)[4]>(args_12);
  v41 = std::forward<unsigned int &>(args_11);
  v40 = (char (*)[8])std::forward<char const(&)[8]>(args_10);
  v39 = std::forward<unsigned int &>(args_9);
  v38 = (char (*)[16])std::forward<char const(&)[16]>(args_8);
  v37 = std::forward<unsigned int &>(args_7);
  v36 = (char (*)[11])std::forward<char const(&)[11]>(args_6);
  v35 = std::forward<unsigned int &>(args_5);
  v34 = (char (*)[21])std::forward<char const(&)[21]>(args_4);
  v33 = std::forward<unsigned int &>(args_3);
  v29 = (std::remove_reference<char const (&)[16]>::type *)std::forward<char const(&)[16]>(args_2);
  v30 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v26 + 48);
  v31 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v26 + 64),
    v31,
    (const std::allocator<char> *)(v26 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v26 + 64),
           v30,
           v29,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51) | ret;
  std::string::~string((void *)(v26 + 64));
  *(_DWORD *)(((v26 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v26 + 48);
  result = reta;
  if ( v58 == (char *)v26 )
  {
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v26 = 1172321806LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F9FAD88-000000000F9FB3AA
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[19]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[10]>::type *args_6,
        proto::GadgetBornType *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        std::string *args_9,
        std::remove_reference<char const (&)[5]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[12]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[15]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[21]>::type *args_16,
        bool *args_17,
        std::remove_reference<char const (&)[10]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[19]>::type *args_20,
        bool *args_21,
        std::remove_reference<char const (&)[17]>::type *args_22,
        bool *args_23,
        std::remove_reference<char const (&)[20]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[21]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[8]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[9]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[11]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[11]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[14]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[14]>::type *args_38,
        bool *args_39)
{
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  _DWORD *v46; // r13
  std::remove_reference<char const (&)[14]>::type *v47; // r15
  unsigned int *v48; // r14
  const char *v49; // rax
  __int64 result; // rax
  char (*v51)[19]; // [rsp+8h] [rbp-218h]
  std::remove_reference<bool&>::type *v52; // [rsp+10h] [rbp-210h]
  unsigned int *v53; // [rsp+18h] [rbp-208h]
  char (*v54)[10]; // [rsp+20h] [rbp-200h]
  proto::GadgetBornType *v55; // [rsp+28h] [rbp-1F8h]
  char (*v56)[9]; // [rsp+30h] [rbp-1F0h]
  std::string *v57; // [rsp+38h] [rbp-1E8h]
  char (*v58)[5]; // [rsp+40h] [rbp-1E0h]
  unsigned int *v59; // [rsp+48h] [rbp-1D8h]
  char (*v60)[12]; // [rsp+50h] [rbp-1D0h]
  unsigned int *v61; // [rsp+58h] [rbp-1C8h]
  char (*v62)[15]; // [rsp+60h] [rbp-1C0h]
  unsigned int *v63; // [rsp+68h] [rbp-1B8h]
  char (*v64)[21]; // [rsp+70h] [rbp-1B0h]
  bool *v65; // [rsp+78h] [rbp-1A8h]
  char (*v66)[10]; // [rsp+80h] [rbp-1A0h]
  unsigned int *v67; // [rsp+88h] [rbp-198h]
  char (*v68)[19]; // [rsp+90h] [rbp-190h]
  bool *v69; // [rsp+98h] [rbp-188h]
  char (*v70)[17]; // [rsp+A0h] [rbp-180h]
  bool *v71; // [rsp+A8h] [rbp-178h]
  char (*v72)[20]; // [rsp+B0h] [rbp-170h]
  unsigned int *v73; // [rsp+B8h] [rbp-168h]
  char (*v74)[21]; // [rsp+C0h] [rbp-160h]
  unsigned int *v75; // [rsp+C8h] [rbp-158h]
  char (*v76)[8]; // [rsp+D0h] [rbp-150h]
  unsigned int *v77; // [rsp+D8h] [rbp-148h]
  char (*v78)[9]; // [rsp+E0h] [rbp-140h]
  unsigned int *v79; // [rsp+E8h] [rbp-138h]
  char (*v80)[11]; // [rsp+F0h] [rbp-130h]
  unsigned int *v81; // [rsp+F8h] [rbp-128h]
  char (*v82)[11]; // [rsp+100h] [rbp-120h]
  unsigned int *v83; // [rsp+108h] [rbp-118h]
  char (*v84)[14]; // [rsp+110h] [rbp-110h]
  unsigned int *v85; // [rsp+118h] [rbp-108h]
  char (*v86)[14]; // [rsp+120h] [rbp-100h]
  bool *v87; // [rsp+128h] [rbp-F8h]
  int32_t ret; // [rsp+16Ch] [rbp-B4h]
  unsigned int reta; // [rsp+16Ch] [rbp-B4h]
  char v94[176]; // [rsp+170h] [rbp-B0h] BYREF

  v44 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v45 = __asan_stack_malloc_1(128LL);
    if ( v45 )
      v44 = v45;
  }
  *(_QWORD *)v44 = 1102416563LL;
  *(_QWORD *)(v44 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v44 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v46 = (_DWORD *)(v44 >> 3);
  v46[536862720] = -235802127;
  v46[536862721] = -234753551;
  v46[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v87 = std::forward<bool &>(args_39);
  v86 = (char (*)[14])std::forward<char const(&)[14]>(args_38);
  v85 = std::forward<unsigned int &>(args_37);
  v84 = (char (*)[14])std::forward<char const(&)[14]>(args_36);
  v83 = std::forward<unsigned int &>(args_35);
  v82 = (char (*)[11])std::forward<char const(&)[11]>(args_34);
  v81 = std::forward<unsigned int &>(args_33);
  v80 = (char (*)[11])std::forward<char const(&)[11]>(args_32);
  v79 = std::forward<unsigned int &>(args_31);
  v78 = (char (*)[9])std::forward<char const(&)[9]>(args_30);
  v77 = std::forward<unsigned int &>(args_29);
  v76 = (char (*)[8])std::forward<char const(&)[8]>(args_28);
  v75 = std::forward<unsigned int &>(args_27);
  v74 = (char (*)[21])std::forward<char const(&)[21]>(args_26);
  v73 = std::forward<unsigned int &>(args_25);
  v72 = (char (*)[20])std::forward<char const(&)[20]>(args_24);
  v71 = std::forward<bool &>(args_23);
  v70 = (char (*)[17])std::forward<char const(&)[17]>(args_22);
  v69 = std::forward<bool &>(args_21);
  v68 = (char (*)[19])std::forward<char const(&)[19]>(args_20);
  v67 = std::forward<unsigned int &>(args_19);
  v66 = (char (*)[10])std::forward<char const(&)[10]>(args_18);
  v65 = std::forward<bool &>(args_17);
  v64 = (char (*)[21])std::forward<char const(&)[21]>(args_16);
  v63 = std::forward<unsigned int &>(args_15);
  v62 = (char (*)[15])std::forward<char const(&)[15]>(args_14);
  v61 = std::forward<unsigned int &>(args_13);
  v60 = (char (*)[12])std::forward<char const(&)[12]>(args_12);
  v59 = std::forward<unsigned int &>(args_11);
  v58 = (char (*)[5])std::forward<char const(&)[5]>(args_10);
  v57 = std::forward<std::string &>(args_9);
  v56 = (char (*)[9])std::forward<char const(&)[9]>(args_8);
  v55 = std::forward<proto::GadgetBornType &>(args_7);
  v54 = (char (*)[10])std::forward<char const(&)[10]>(args_6);
  v53 = std::forward<unsigned int &>(args_5);
  v47 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_4);
  v52 = std::forward<bool &>(args_3);
  v51 = (char (*)[19])std::forward<char const(&)[19]>(args_2);
  v48 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v44 + 48);
  v49 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v44 + 64),
    v49,
    (const std::allocator<char> *)(v44 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[19],bool &,char const(&)[14],unsigned int &,char const(&)[10],proto::GadgetBornType &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[12],unsigned int &,char const(&)[15],unsigned int &,char const(&)[21],bool &,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           a1,
           a2,
           (const std::string *)(v44 + 64),
           v48,
           v51,
           v52,
           v47,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87) | ret;
  std::string::~string((void *)(v44 + 64));
  *(_DWORD *)(((v44 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v44 + 48);
  result = reta;
  if ( v94 == (char *)v44 )
  {
    *(_QWORD *)((v44 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v44 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v44 = 1172321806LL;
    *(_QWORD *)((v44 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v44 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000F7E76B8-000000000F7E78D7
__int64 __fastcall ScriptUtil::getTableValue<unsigned long,char const(&)[4],Vector3 &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned __int64 *val,
        std::remove_reference<char const (&)[4]>::type *a5,
        Vector3 *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  Vector3 *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned long,char const(&)[4],Vector3 &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned long>(this, table, name, val);
  v9 = std::forward<Vector3 &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[4]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 80: range 000000000CED56A0-000000000CED5CC2
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[8]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[15]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[8]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[9]>::type *args_6,
        bool *args_7,
        std::remove_reference<char const (&)[8]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        std::string *args_11,
        std::remove_reference<char const (&)[5]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[10]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[15]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[9]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[16]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[21]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[11]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[16]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[8]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[4]>::type *args_30,
        unsigned __int64 *args_31,
        std::remove_reference<char const (&)[12]>::type *args_32,
        unsigned int *args_33,
        std::remove_reference<char const (&)[13]>::type *args_34,
        unsigned int *args_35,
        std::remove_reference<char const (&)[18]>::type *args_36,
        unsigned int *args_37,
        std::remove_reference<char const (&)[16]>::type *args_38,
        bool *args_39)
{
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  _DWORD *v46; // r13
  std::remove_reference<char const (&)[8]>::type *v47; // r15
  unsigned int *v48; // r14
  const char *v49; // rax
  __int64 result; // rax
  char (*v51)[15]; // [rsp+8h] [rbp-218h]
  std::remove_reference<bool&>::type *v52; // [rsp+10h] [rbp-210h]
  bool *v53; // [rsp+18h] [rbp-208h]
  char (*v54)[9]; // [rsp+20h] [rbp-200h]
  bool *v55; // [rsp+28h] [rbp-1F8h]
  char (*v56)[8]; // [rsp+30h] [rbp-1F0h]
  unsigned int *v57; // [rsp+38h] [rbp-1E8h]
  char (*v58)[9]; // [rsp+40h] [rbp-1E0h]
  std::string *v59; // [rsp+48h] [rbp-1D8h]
  char (*v60)[5]; // [rsp+50h] [rbp-1D0h]
  unsigned int *v61; // [rsp+58h] [rbp-1C8h]
  char (*v62)[10]; // [rsp+60h] [rbp-1C0h]
  unsigned int *v63; // [rsp+68h] [rbp-1B8h]
  char (*v64)[15]; // [rsp+70h] [rbp-1B0h]
  unsigned int *v65; // [rsp+78h] [rbp-1A8h]
  char (*v66)[9]; // [rsp+80h] [rbp-1A0h]
  unsigned int *v67; // [rsp+88h] [rbp-198h]
  char (*v68)[16]; // [rsp+90h] [rbp-190h]
  unsigned int *v69; // [rsp+98h] [rbp-188h]
  char (*v70)[21]; // [rsp+A0h] [rbp-180h]
  unsigned int *v71; // [rsp+A8h] [rbp-178h]
  char (*v72)[11]; // [rsp+B0h] [rbp-170h]
  unsigned int *v73; // [rsp+B8h] [rbp-168h]
  char (*v74)[16]; // [rsp+C0h] [rbp-160h]
  unsigned int *v75; // [rsp+C8h] [rbp-158h]
  char (*v76)[8]; // [rsp+D0h] [rbp-150h]
  unsigned int *v77; // [rsp+D8h] [rbp-148h]
  char (*v78)[4]; // [rsp+E0h] [rbp-140h]
  unsigned __int64 *v79; // [rsp+E8h] [rbp-138h]
  char (*v80)[12]; // [rsp+F0h] [rbp-130h]
  unsigned int *v81; // [rsp+F8h] [rbp-128h]
  char (*v82)[13]; // [rsp+100h] [rbp-120h]
  unsigned int *v83; // [rsp+108h] [rbp-118h]
  char (*v84)[18]; // [rsp+110h] [rbp-110h]
  unsigned int *v85; // [rsp+118h] [rbp-108h]
  char (*v86)[16]; // [rsp+120h] [rbp-100h]
  bool *v87; // [rsp+128h] [rbp-F8h]
  int32_t ret; // [rsp+16Ch] [rbp-B4h]
  unsigned int reta; // [rsp+16Ch] [rbp-B4h]
  char v94[176]; // [rsp+170h] [rbp-B0h] BYREF

  v44 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v45 = __asan_stack_malloc_1(128LL);
    if ( v45 )
      v44 = v45;
  }
  *(_QWORD *)v44 = 1102416563LL;
  *(_QWORD *)(v44 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v44 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v46 = (_DWORD *)(v44 >> 3);
  v46[536862720] = -235802127;
  v46[536862721] = -234753551;
  v46[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v87 = std::forward<bool &>(args_39);
  v86 = (char (*)[16])std::forward<char const(&)[16]>(args_38);
  v85 = std::forward<unsigned int &>(args_37);
  v84 = (char (*)[18])std::forward<char const(&)[18]>(args_36);
  v83 = std::forward<unsigned int &>(args_35);
  v82 = (char (*)[13])std::forward<char const(&)[13]>(args_34);
  v81 = std::forward<unsigned int &>(args_33);
  v80 = (char (*)[12])std::forward<char const(&)[12]>(args_32);
  v79 = std::forward<unsigned long &>(args_31);
  v78 = (char (*)[4])std::forward<char const(&)[4]>(args_30);
  v77 = std::forward<unsigned int &>(args_29);
  v76 = (char (*)[8])std::forward<char const(&)[8]>(args_28);
  v75 = std::forward<unsigned int &>(args_27);
  v74 = (char (*)[16])std::forward<char const(&)[16]>(args_26);
  v73 = std::forward<unsigned int &>(args_25);
  v72 = (char (*)[11])std::forward<char const(&)[11]>(args_24);
  v71 = std::forward<unsigned int &>(args_23);
  v70 = (char (*)[21])std::forward<char const(&)[21]>(args_22);
  v69 = std::forward<unsigned int &>(args_21);
  v68 = (char (*)[16])std::forward<char const(&)[16]>(args_20);
  v67 = std::forward<unsigned int &>(args_19);
  v66 = (char (*)[9])std::forward<char const(&)[9]>(args_18);
  v65 = std::forward<unsigned int &>(args_17);
  v64 = (char (*)[15])std::forward<char const(&)[15]>(args_16);
  v63 = std::forward<unsigned int &>(args_15);
  v62 = (char (*)[10])std::forward<char const(&)[10]>(args_14);
  v61 = std::forward<unsigned int &>(args_13);
  v60 = (char (*)[5])std::forward<char const(&)[5]>(args_12);
  v59 = std::forward<std::string &>(args_11);
  v58 = (char (*)[9])std::forward<char const(&)[9]>(args_10);
  v57 = std::forward<unsigned int &>(args_9);
  v56 = (char (*)[8])std::forward<char const(&)[8]>(args_8);
  v55 = std::forward<bool &>(args_7);
  v54 = (char (*)[9])std::forward<char const(&)[9]>(args_6);
  v53 = std::forward<bool &>(args_5);
  v47 = (std::remove_reference<char const (&)[8]>::type *)std::forward<char const(&)[8]>(args_4);
  v52 = std::forward<bool &>(args_3);
  v51 = (char (*)[15])std::forward<char const(&)[15]>(args_2);
  v48 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v44 + 48);
  v49 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v44 + 64),
    v49,
    (const std::allocator<char> *)(v44 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[15],bool &,char const(&)[8],bool &,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           a1,
           a2,
           (const std::string *)(v44 + 64),
           v48,
           v51,
           v52,
           v47,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87) | ret;
  std::string::~string((void *)(v44 + 64));
  *(_DWORD *)(((v44 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v44 + 48);
  result = reta;
  if ( v94 == (char *)v44 )
  {
    *(_QWORD *)((v44 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v44 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v44 = 1172321806LL;
    *(_QWORD *)((v44 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v44 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 91: range 000000000FA0A876-000000000FA0AAC6
__int64 __fastcall ScriptUtil::getTableValue<std::string,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        std::string *val,
        std::remove_reference<char const (&)[16]>::type *a5,
        bool *a6,
        std::remove_reference<char const (&)[14]>::type *args_2,
        bool *args_3)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::remove_reference<char const (&)[14]>::type *v11; // r15
  bool *v12; // r14
  const char *v13; // rax
  __int64 result; // rax
  bool *v15; // [rsp+8h] [rbp-F8h]
  int32_t ret; // [rsp+4Ch] [rbp-B4h]
  unsigned int reta; // [rsp+4Ch] [rbp-B4h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ScriptUtil::getTableValue<std::string,char const(&)[16],bool &,char const(&)[14],bool &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<std::string>(this, table, name, val);
  v15 = std::forward<bool &>(args_3);
  v11 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_2);
  v12 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v8 + 48);
  v13 = (const char *)std::forward<char const(&)[16]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v8 + 64),
    v13,
    (const std::allocator<char> *)(v8 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v8 + 64),
           v12,
           v11,
           v15) | ret;
  std::string::~string((void *)(v8 + 64));
  *(_DWORD *)(((v8 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v8 + 48);
  result = reta;
  if ( v22 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 96: range 000000000F7EF6DE-000000000F7F0156
int32_t __cdecl ScriptUtil::getTableValueAsVector<int>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<int> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  char *v11; // rsi
  int v12; // edx
  char v13; // al
  int32_t result; // eax
  char v16[528]; // [rsp+40h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 7 val:111 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 16 9 <unknown> 192 32 9"
                        " <unknown> 256 32 9 <unknown> 320 40 6 it:108 400 40 7 end:108";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsVector<int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959360;
  v5[536862732] = 62194;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 320),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 400));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 320),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 400)) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      v11 = (char *)(v3 + 320);
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 160));
      v12 = luabind::object_cast<int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 160));
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v3 + 48, v11);
      }
      *(_DWORD *)(v3 + 48) = v12;
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 160));
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      std::vector<int>::push_back(val_vec, (const std::vector<int>::value_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 320));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 400));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 320));
    v10 = 0;
  }
  result = v10;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 96: range 000000000CED47C4-000000000CED5262
int32_t __cdecl ScriptUtil::getTableValueAsVector<luabind::adl::object>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<luabind::adl::object> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  int32_t result; // eax
  char v13[528]; // [rsp+40h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 val:111 160 16 9 <unknown> 192 32 "
                        "9 <unknown> 256 32 9 <unknown> 320 40 6 it:108 400 40 7 end:108";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsVector<luabind::adl::object>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959360;
  v5[536862732] = 62194;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 320),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 400));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 320),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 400)) )
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 160));
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::object_cast<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 128));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 160));
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      std::vector<luabind::adl::object>::push_back(
        val_vec,
        (const std::vector<luabind::adl::object>::value_type *)(v3 + 128));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 128));
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 320));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 400));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 320));
    v10 = 0;
  }
  result = v10;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 96: range 000000000F7E0068-000000000F7E0B3D
int32_t __cdecl ScriptUtil::getTableValueAsVector<std::string>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<std::string> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  int32_t result; // eax
  char v13[560]; // [rsp+40h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 16 9 <unknown> 160 32 7 val:111 224 32 "
                        "9 <unknown> 288 32 9 <unknown> 352 40 6 it:108 432 40 7 end:108";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsVector<std::string>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 432));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 352),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 432)) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 128));
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      luabind::object_cast<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        (std::string *)(v3 + 160),
        (const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 128));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 128));
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
      std::vector<std::string>::push_back(val_vec, (const std::vector<std::string>::value_type *)(v3 + 160));
      std::string::~string((void *)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 352));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 432));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352));
    v10 = 0;
  }
  result = v10;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 96: range 000000000CED81C2-000000000CED8C3A
int32_t __cdecl ScriptUtil::getTableValueAsVector<unsigned int>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<unsigned int> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  char *v11; // rsi
  unsigned int v12; // edx
  char v13; // al
  int32_t result; // eax
  char v16[528]; // [rsp+40h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 7 val:111 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 16 9 <unknown> 192 32 9"
                        " <unknown> 256 32 9 <unknown> 320 40 6 it:108 400 40 7 end:108";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsVector<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959360;
  v5[536862732] = 62194;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 320),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 400));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 320),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 400)) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      v11 = (char *)(v3 + 320);
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 160));
      v12 = luabind::object_cast<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 160));
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v3 + 48, v11);
      }
      *(_DWORD *)(v3 + 48) = v12;
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 160));
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      std::vector<unsigned int>::push_back(val_vec, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 320));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 400));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 320));
    v10 = 0;
  }
  result = v10;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 102: range 000000000D48DE90-000000000D48ECFA
int32_t __cdecl ScriptUtil::getTableValue<unsigned long>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned __int64 *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int32_t result; // eax
  char v22[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<unsigned long>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<unsigned long,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
        __asan_report_store8(val, table);
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v22 == (char *)v4 )
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
  }
  return result;
};

// Line 129: range 000000000FA036CE-000000000FA039E9
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[16]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[17]>::type *args_6,
        std::string *args_7,
        std::remove_reference<char const (&)[16]>::type *args_8,
        bool *args_9,
        std::remove_reference<char const (&)[14]>::type *args_10,
        bool *args_11)
{
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r13
  bool *v19; // r14
  std::remove_reference<char const (&)[14]>::type *v20; // r15
  const char *v21; // rax
  __int64 result; // rax
  unsigned int *v23; // [rsp+8h] [rbp-138h]
  char (*v24)[8]; // [rsp+10h] [rbp-130h]
  unsigned int *v25; // [rsp+18h] [rbp-128h]
  char (*v26)[14]; // [rsp+20h] [rbp-120h]
  unsigned int *v27; // [rsp+28h] [rbp-118h]
  char (*v28)[17]; // [rsp+30h] [rbp-110h]
  std::string *v29; // [rsp+38h] [rbp-108h]
  char (*v30)[16]; // [rsp+40h] [rbp-100h]
  bool *v31; // [rsp+48h] [rbp-F8h]
  int32_t ret; // [rsp+8Ch] [rbp-B4h]
  unsigned int reta; // [rsp+8Ch] [rbp-B4h]
  char v38[176]; // [rsp+90h] [rbp-B0h] BYREF

  v16 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v16 = v17;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v16 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v18 = (_DWORD *)(v16 >> 3);
  v18[536862720] = -235802127;
  v18[536862721] = -234753551;
  v18[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v19 = std::forward<bool &>(args_11);
  v20 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_10);
  v31 = std::forward<bool &>(args_9);
  v30 = (char (*)[16])std::forward<char const(&)[16]>(args_8);
  v29 = std::forward<std::string &>(args_7);
  v28 = (char (*)[17])std::forward<char const(&)[17]>(args_6);
  v27 = std::forward<unsigned int &>(args_5);
  v26 = (char (*)[14])std::forward<char const(&)[14]>(args_4);
  v25 = std::forward<unsigned int &>(args_3);
  v24 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v23 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v16 + 48);
  v21 = (const char *)std::forward<char const(&)[16]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v16 + 64),
    v21,
    (const std::allocator<char> *)(v16 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[14],unsigned int &,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v16 + 64),
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v20,
           v19) | ret;
  std::string::~string((void *)(v16 + 64));
  *(_DWORD *)(((v16 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v16 + 48);
  result = reta;
  if ( v38 == (char *)v16 )
  {
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 129: range 000000000D32C5E4-000000000D32CAEE
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        unsigned int *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<std::string&>::type *a6,
        std::remove_reference<char const (&)[5]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[10]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[15]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[9]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[16]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[21]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[11]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[16]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[8]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[4]>::type *args_20,
        unsigned __int64 *args_21,
        std::remove_reference<char const (&)[12]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[13]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[18]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[16]>::type *args_28,
        bool *args_29)
{
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  _DWORD *v36; // r13
  std::remove_reference<char const (&)[10]>::type *v37; // r15
  std::string *v38; // r14
  const char *v39; // rax
  __int64 result; // rax
  char (*v41)[5]; // [rsp+8h] [rbp-1C8h]
  unsigned int *v42; // [rsp+10h] [rbp-1C0h]
  unsigned int *v43; // [rsp+18h] [rbp-1B8h]
  char (*v44)[15]; // [rsp+20h] [rbp-1B0h]
  unsigned int *v45; // [rsp+28h] [rbp-1A8h]
  char (*v46)[9]; // [rsp+30h] [rbp-1A0h]
  unsigned int *v47; // [rsp+38h] [rbp-198h]
  char (*v48)[16]; // [rsp+40h] [rbp-190h]
  unsigned int *v49; // [rsp+48h] [rbp-188h]
  char (*v50)[21]; // [rsp+50h] [rbp-180h]
  unsigned int *v51; // [rsp+58h] [rbp-178h]
  char (*v52)[11]; // [rsp+60h] [rbp-170h]
  unsigned int *v53; // [rsp+68h] [rbp-168h]
  char (*v54)[16]; // [rsp+70h] [rbp-160h]
  unsigned int *v55; // [rsp+78h] [rbp-158h]
  char (*v56)[8]; // [rsp+80h] [rbp-150h]
  unsigned int *v57; // [rsp+88h] [rbp-148h]
  char (*v58)[4]; // [rsp+90h] [rbp-140h]
  unsigned __int64 *v59; // [rsp+98h] [rbp-138h]
  char (*v60)[12]; // [rsp+A0h] [rbp-130h]
  unsigned int *v61; // [rsp+A8h] [rbp-128h]
  char (*v62)[13]; // [rsp+B0h] [rbp-120h]
  unsigned int *v63; // [rsp+B8h] [rbp-118h]
  char (*v64)[18]; // [rsp+C0h] [rbp-110h]
  unsigned int *v65; // [rsp+C8h] [rbp-108h]
  char (*v66)[16]; // [rsp+D0h] [rbp-100h]
  bool *v67; // [rsp+D8h] [rbp-F8h]
  int32_t ret; // [rsp+11Ch] [rbp-B4h]
  unsigned int reta; // [rsp+11Ch] [rbp-B4h]
  char v74[176]; // [rsp+120h] [rbp-B0h] BYREF

  v34 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v35 = __asan_stack_malloc_1(128LL);
    if ( v35 )
      v34 = v35;
  }
  *(_QWORD *)v34 = 1102416563LL;
  *(_QWORD *)(v34 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v34 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v36 = (_DWORD *)(v34 >> 3);
  v36[536862720] = -235802127;
  v36[536862721] = -234753551;
  v36[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(a1, a2, a3, a4);
  v67 = std::forward<bool &>(args_29);
  v66 = (char (*)[16])std::forward<char const(&)[16]>(args_28);
  v65 = std::forward<unsigned int &>(args_27);
  v64 = (char (*)[18])std::forward<char const(&)[18]>(args_26);
  v63 = std::forward<unsigned int &>(args_25);
  v62 = (char (*)[13])std::forward<char const(&)[13]>(args_24);
  v61 = std::forward<unsigned int &>(args_23);
  v60 = (char (*)[12])std::forward<char const(&)[12]>(args_22);
  v59 = std::forward<unsigned long &>(args_21);
  v58 = (char (*)[4])std::forward<char const(&)[4]>(args_20);
  v57 = std::forward<unsigned int &>(args_19);
  v56 = (char (*)[8])std::forward<char const(&)[8]>(args_18);
  v55 = std::forward<unsigned int &>(args_17);
  v54 = (char (*)[16])std::forward<char const(&)[16]>(args_16);
  v53 = std::forward<unsigned int &>(args_15);
  v52 = (char (*)[11])std::forward<char const(&)[11]>(args_14);
  v51 = std::forward<unsigned int &>(args_13);
  v50 = (char (*)[21])std::forward<char const(&)[21]>(args_12);
  v49 = std::forward<unsigned int &>(args_11);
  v48 = (char (*)[16])std::forward<char const(&)[16]>(args_10);
  v47 = std::forward<unsigned int &>(args_9);
  v46 = (char (*)[9])std::forward<char const(&)[9]>(args_8);
  v45 = std::forward<unsigned int &>(args_7);
  v44 = (char (*)[15])std::forward<char const(&)[15]>(args_6);
  v43 = std::forward<unsigned int &>(args_5);
  v37 = (std::remove_reference<char const (&)[10]>::type *)std::forward<char const(&)[10]>(args_4);
  v42 = std::forward<unsigned int &>(args_3);
  v41 = (char (*)[5])std::forward<char const(&)[5]>(args_2);
  v38 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v34 + 48);
  v39 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v34 + 64),
    v39,
    (const std::allocator<char> *)(v34 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           a1,
           a2,
           (const std::string *)(v34 + 64),
           v38,
           v41,
           v42,
           v37,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67) | ret;
  std::string::~string((void *)(v34 + 64));
  *(_DWORD *)(((v34 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v34 + 48);
  result = reta;
  if ( v74 == (char *)v34 )
  {
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v34 = 1172321806LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 135: range 000000000FA08A98-000000000FA08D1B
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[17]>::type *a5,
        std::string *a6,
        std::remove_reference<char const (&)[16]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[14]>::type *args_4,
        bool *args_5)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  bool *v13; // r15
  std::remove_reference<char const (&)[14]>::type *v14; // r14
  const char *v15; // rax
  __int64 result; // rax
  std::string *v17; // [rsp+8h] [rbp-108h]
  char (*v18)[16]; // [rsp+10h] [rbp-100h]
  bool *v19; // [rsp+18h] [rbp-F8h]
  int32_t ret; // [rsp+5Ch] [rbp-B4h]
  unsigned int reta; // [rsp+5Ch] [rbp-B4h]
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v10 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[17],std::string &,char const(&)[16],bool &,char const(&)[14],bool &>;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v13 = std::forward<bool &>(args_5);
  v14 = (std::remove_reference<char const (&)[14]>::type *)std::forward<char const(&)[14]>(args_4);
  v19 = std::forward<bool &>(args_3);
  v18 = (char (*)[16])std::forward<char const(&)[16]>(args_2);
  v17 = std::forward<std::string &>(a6);
  std::allocator<char>::allocator(v10 + 48);
  v15 = (const char *)std::forward<char const(&)[17]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v10 + 64),
    v15,
    (const std::allocator<char> *)(v10 + 48));
  reta = ScriptUtil::getTableValue<std::string,char const(&)[16],bool &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v10 + 64),
           v17,
           v18,
           v19,
           v14,
           v13) | ret;
  std::string::~string((void *)(v10 + 64));
  *(_DWORD *)(((v10 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v10 + 48);
  result = reta;
  if ( v26 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 000000000FA0CEE6-000000000FA0D310
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        bool *val,
        std::remove_reference<char const (&)[10]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[19]>::type *args_2,
        bool *args_3,
        std::remove_reference<char const (&)[17]>::type *args_4,
        bool *args_5,
        std::remove_reference<char const (&)[20]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[21]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[8]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[9]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[11]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[11]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[14]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[14]>::type *args_20,
        bool *args_21)
{
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // r13
  std::remove_reference<char const (&)[19]>::type *v29; // r15
  unsigned int *v30; // r14
  const char *v31; // rax
  __int64 result; // rax
  bool *v33; // [rsp+8h] [rbp-188h]
  char (*v34)[17]; // [rsp+10h] [rbp-180h]
  bool *v35; // [rsp+18h] [rbp-178h]
  char (*v36)[20]; // [rsp+20h] [rbp-170h]
  unsigned int *v37; // [rsp+28h] [rbp-168h]
  char (*v38)[21]; // [rsp+30h] [rbp-160h]
  unsigned int *v39; // [rsp+38h] [rbp-158h]
  char (*v40)[8]; // [rsp+40h] [rbp-150h]
  unsigned int *v41; // [rsp+48h] [rbp-148h]
  char (*v42)[9]; // [rsp+50h] [rbp-140h]
  unsigned int *v43; // [rsp+58h] [rbp-138h]
  char (*v44)[11]; // [rsp+60h] [rbp-130h]
  unsigned int *v45; // [rsp+68h] [rbp-128h]
  char (*v46)[11]; // [rsp+70h] [rbp-120h]
  unsigned int *v47; // [rsp+78h] [rbp-118h]
  char (*v48)[14]; // [rsp+80h] [rbp-110h]
  unsigned int *v49; // [rsp+88h] [rbp-108h]
  char (*v50)[14]; // [rsp+90h] [rbp-100h]
  bool *v51; // [rsp+98h] [rbp-F8h]
  int32_t ret; // [rsp+DCh] [rbp-B4h]
  unsigned int reta; // [rsp+DCh] [rbp-B4h]
  char v58[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v26 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_1(128LL);
    if ( v27 )
      v26 = v27;
  }
  *(_QWORD *)v26 = 1102416563LL;
  *(_QWORD *)(v26 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v26 + 16) = ScriptUtil::getTableValue<bool,char const(&)[10],unsigned int &,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>;
  v28 = (_DWORD *)(v26 >> 3);
  v28[536862720] = -235802127;
  v28[536862721] = -234753551;
  v28[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(this, table, name, val);
  v51 = std::forward<bool &>(args_21);
  v50 = (char (*)[14])std::forward<char const(&)[14]>(args_20);
  v49 = std::forward<unsigned int &>(args_19);
  v48 = (char (*)[14])std::forward<char const(&)[14]>(args_18);
  v47 = std::forward<unsigned int &>(args_17);
  v46 = (char (*)[11])std::forward<char const(&)[11]>(args_16);
  v45 = std::forward<unsigned int &>(args_15);
  v44 = (char (*)[11])std::forward<char const(&)[11]>(args_14);
  v43 = std::forward<unsigned int &>(args_13);
  v42 = (char (*)[9])std::forward<char const(&)[9]>(args_12);
  v41 = std::forward<unsigned int &>(args_11);
  v40 = (char (*)[8])std::forward<char const(&)[8]>(args_10);
  v39 = std::forward<unsigned int &>(args_9);
  v38 = (char (*)[21])std::forward<char const(&)[21]>(args_8);
  v37 = std::forward<unsigned int &>(args_7);
  v36 = (char (*)[20])std::forward<char const(&)[20]>(args_6);
  v35 = std::forward<bool &>(args_5);
  v34 = (char (*)[17])std::forward<char const(&)[17]>(args_4);
  v33 = std::forward<bool &>(args_3);
  v29 = (std::remove_reference<char const (&)[19]>::type *)std::forward<char const(&)[19]>(args_2);
  v30 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v26 + 48);
  v31 = (const char *)std::forward<char const(&)[10]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v26 + 64),
    v31,
    (const std::allocator<char> *)(v26 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[19],bool &,char const(&)[17],bool &,char const(&)[20],unsigned int &,char const(&)[21],unsigned int &,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &,char const(&)[11],unsigned int &,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &,char const(&)[14],bool &>(
           this,
           table,
           (const std::string *)(v26 + 64),
           v30,
           v29,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51) | ret;
  std::string::~string((void *)(v26 + 64));
  *(_DWORD *)(((v26 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v26 + 48);
  result = reta;
  if ( v58 == (char *)v26 )
  {
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v26 = 1172321806LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000D48C918-000000000D48CBCD
__int64 __fastcall ScriptUtil::getTableValue<unsigned long,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned __int64 *val,
        std::remove_reference<char const (&)[12]>::type *a5,
        unsigned int *a6,
        std::remove_reference<char const (&)[13]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[18]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[16]>::type *args_6,
        bool *args_7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r13
  unsigned int *v15; // r15
  std::remove_reference<char const (&)[18]>::type *v16; // r14
  const char *v17; // rax
  __int64 result; // rax
  unsigned int *v19; // [rsp+8h] [rbp-118h]
  char (*v20)[13]; // [rsp+10h] [rbp-110h]
  unsigned int *v21; // [rsp+18h] [rbp-108h]
  char (*v22)[16]; // [rsp+20h] [rbp-100h]
  bool *v23; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+6Ch] [rbp-B4h]
  unsigned int reta; // [rsp+6Ch] [rbp-B4h]
  char v30[176]; // [rsp+70h] [rbp-B0h] BYREF

  v12 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v12 + 16) = ScriptUtil::getTableValue<unsigned long,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned long>(this, table, name, val);
  v23 = std::forward<bool &>(args_7);
  v22 = (char (*)[16])std::forward<char const(&)[16]>(args_6);
  v15 = std::forward<unsigned int &>(args_5);
  v16 = (std::remove_reference<char const (&)[18]>::type *)std::forward<char const(&)[18]>(args_4);
  v21 = std::forward<unsigned int &>(args_3);
  v20 = (char (*)[13])std::forward<char const(&)[13]>(args_2);
  v19 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v12 + 48);
  v17 = (const char *)std::forward<char const(&)[12]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v12 + 64),
    v17,
    (const std::allocator<char> *)(v12 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v12 + 64),
           v19,
           v20,
           v21,
           v16,
           v15,
           v22,
           v23) | ret;
  std::string::~string((void *)(v12 + 64));
  *(_DWORD *)(((v12 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v12 + 48);
  result = reta;
  if ( v30 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 147: range 000000000D489EE2-000000000D48A1CB
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[4]>::type *a5,
        unsigned __int64 *a6,
        std::remove_reference<char const (&)[12]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[13]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[18]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[16]>::type *args_8,
        bool *args_9)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // r13
  bool *v17; // r14
  std::remove_reference<char const (&)[13]>::type *v18; // r15
  const char *v19; // rax
  __int64 result; // rax
  unsigned __int64 *v21; // [rsp+8h] [rbp-128h]
  char (*v22)[12]; // [rsp+10h] [rbp-120h]
  unsigned int *v23; // [rsp+18h] [rbp-118h]
  unsigned int *v24; // [rsp+20h] [rbp-110h]
  char (*v25)[18]; // [rsp+28h] [rbp-108h]
  unsigned int *v26; // [rsp+30h] [rbp-100h]
  char (*v27)[16]; // [rsp+38h] [rbp-F8h]
  int32_t ret; // [rsp+7Ch] [rbp-B4h]
  unsigned int reta; // [rsp+7Ch] [rbp-B4h]
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v14 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v14 = v15;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v14 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v16 = (_DWORD *)(v14 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234753551;
  v16[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v17 = std::forward<bool &>(args_9);
  v27 = (char (*)[16])std::forward<char const(&)[16]>(args_8);
  v26 = std::forward<unsigned int &>(args_7);
  v25 = (char (*)[18])std::forward<char const(&)[18]>(args_6);
  v24 = std::forward<unsigned int &>(args_5);
  v18 = (std::remove_reference<char const (&)[13]>::type *)std::forward<char const(&)[13]>(args_4);
  v23 = std::forward<unsigned int &>(args_3);
  v22 = (char (*)[12])std::forward<char const(&)[12]>(args_2);
  v21 = std::forward<unsigned long &>(a6);
  std::allocator<char>::allocator(v14 + 48);
  v19 = (const char *)std::forward<char const(&)[4]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v14 + 64),
    v19,
    (const std::allocator<char> *)(v14 + 48));
  reta = ScriptUtil::getTableValue<unsigned long,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           this,
           table,
           (const std::string *)(v14 + 64),
           v21,
           v22,
           v23,
           v18,
           v24,
           v25,
           v26,
           v27,
           v17) | ret;
  std::string::~string((void *)(v14 + 64));
  *(_DWORD *)(((v14 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v14 + 48);
  result = reta;
  if ( v34 == (char *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v14 = 1172321806LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v14 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 151: range 000000000F7E23D2-000000000F7E307F
int32_t __cdecl ScriptUtil::getTableValueAsSet<std::string>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::set<std::string> *val_set)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  std::invalid_argument *exception; // rdi
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  int v14; // r15d
  int32_t result; // eax
  char v17[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 16 9 <unknown> 160 32 7 val:166 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 40 6 it:163 496 40 7 end:163";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValueAsSet<std::string>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959360;
  v6[536862735] = 62194;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v8 = (unsigned __int8)this & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(this, v8, v9);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v3 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 416),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 496));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 416),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 496)) )
    {
      *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 128));
      if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 160, 32LL);
      }
      luabind::object_cast<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        (std::string *)(v4 + 160),
        (const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v4 + 128));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v4 + 128));
      *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -1800;
      v11 = std::set<std::string>::insert(val_set, (const std::set<std::string>::value_type *)(v4 + 160));
      if ( !v11.second )
      {
        *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/script_utils.hpp",
          "getTableValueAsSet",
          170);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)(v4 + 224),
                (const char (*)[17])"duplicate value:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v4 + 160));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
        *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
      std::string::~string((void *)(v4 + 160));
      *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
      if ( v13 != 1 )
      {
        v14 = 0;
        goto LABEL_29;
      }
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 416));
    }
    v14 = 1;
LABEL_29:
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 496));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 416));
    if ( v14 == 1 )
      v3 = 0;
  }
  result = v3;
  if ( v17 == (char *)v4 )
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
  }
  return result;
};

// Line 151: range 000000000CED5CC4-000000000CED68E9
int32_t __cdecl ScriptUtil::getTableValueAsSet<unsigned int>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::set<unsigned int> *val_set)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  std::invalid_argument *exception; // rdi
  char *v11; // rsi
  unsigned int v12; // edx
  char v13; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // r15d
  int32_t result; // eax
  char v20[592]; // [rsp+40h] [rbp-250h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 7 val:166 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 16 9 <unknown> 192 32 "
                        "9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 40 6 it:163 464 40 7 end:163";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValueAsSet<unsigned int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959360;
  v6[536862734] = 62194;
  v6[536862735] = -218103808;
  v6[536862736] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v8 = (unsigned __int8)this & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(this, v8, v9);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v3 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 384),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 464));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 384),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 464)) )
    {
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      v11 = (char *)(v4 + 384);
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 160));
      v12 = luabind::object_cast<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v4 + 160));
      v13 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v4 + 48, v11);
      }
      *(_DWORD *)(v4 + 48) = v12;
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v4 + 160));
      *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -1800;
      v14 = std::set<unsigned int>::insert(val_set, (const std::set<unsigned int>::value_type *)(v4 + 48));
      if ( !v14.second )
      {
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/script_utils.hpp",
          "getTableValueAsSet",
          170);
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[17])"duplicate value:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v16 != 1 )
      {
        v17 = 0;
        goto LABEL_29;
      }
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 384));
    }
    v17 = 1;
LABEL_29:
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 464));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 384));
    if ( v17 == 1 )
      v3 = 0;
  }
  result = v3;
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 210: range 000000000F7DED10-000000000F7DFED7
int32_t __cdecl ScriptUtil::getTableValueAsMap<int,unsigned int>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::map<int,unsigned int> *val_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  char *v11; // rsi
  int v12; // edx
  char v13; // al
  char *v14; // rsi
  std::map<int,unsigned int>::mapped_type *v15; // rax
  unsigned int *v16; // rdx
  char v17; // cl
  unsigned int val; // [rsp+3Ch] [rbp-364h]
  char v21[848]; // [rsp+50h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 4 7 key:227 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 192 8 9 "
                        "<unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 8 9 <unkno"
                        "wn> 384 16 9 <unknown> 416 16 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknow"
                        "n> 640 40 6 it:222 720 40 7 end:222";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsMap<int,unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -219021312;
  v5[536862733] = -219021312;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 640),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 720));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 640),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 720)) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      v11 = (char *)(v3 + 640);
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 384));
      v12 = luabind::object_cast<int,luabind::adl::object>((const luabind::adl::object *)(v3 + 384));
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v3 + 48, v11);
      }
      *(_DWORD *)(v3 + 48) = v12;
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 384));
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 416));
      val = luabind::object_cast<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 416));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 416));
      *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -1800;
      v14 = (char *)(v3 + 48);
      v15 = std::map<int,unsigned int>::operator[](val_map, (const std::map<int,unsigned int>::key_type *)(v3 + 48));
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(v15, v14);
      }
      *v16 = val;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 640));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 720));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 640));
    v10 = 0;
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v10;
};

// Line 210: range 000000000CED68EA-000000000CED7B3B
int32_t __cdecl ScriptUtil::getTableValueAsMap<std::string,float>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::map<std::string,float> *val_map)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v11; // ebx
  char *v12; // rsi
  std::map<std::string,float>::mapped_type *v13; // rax
  int *v14; // rdx
  char v15; // cl
  int v17; // [rsp+10h] [rbp-3B0h]
  char v19[880]; // [rsp+50h] [rbp-370h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(832LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 192 8 "
                        "9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 16 9 <un"
                        "known> 384 16 9 <unknown> 416 32 7 key:227 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unkno"
                        "wn> 672 40 6 it:222 752 40 7 end:222";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValueAsMap<std::string,float>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -219021312;
  v6[536862732] = -219021312;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959360;
  v6[536862743] = 62194;
  v6[536862744] = -218103808;
  v6[536862745] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v8 = (unsigned __int8)this & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(this, v8, v9);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v11 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 672),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 752));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 672),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 752)) )
    {
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v4 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 352));
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        *(double *)v3.m128i_i64 = __asan_report_store_n(v4 + 416, 32LL);
      }
      luabind::object_cast<std::string,luabind::adl::object>(
        (std::string *)(v4 + 416),
        (const luabind::adl::object *)(v4 + 352));
      luabind::adl::object::~object((luabind::adl::object *const)(v4 + 352));
      *(_WORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v4 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 384));
      *(float *)v3.m128i_i32 = luabind::object_cast<float,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v4 + 384));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v4 + 384));
      *(_WORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -1800;
      v17 = _mm_cvtsi128_si32(v3);
      v12 = (char *)(v4 + 416);
      v13 = std::map<std::string,float>::operator[](val_map, (const std::map<std::string,float>::key_type *)(v4 + 416));
      v14 = (int *)v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12);
      }
      *v14 = v17;
      std::string::~string((void *)(v4 + 416));
      *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 672));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 752));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 672));
    v11 = 0;
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 210: range 000000000F7EC764-000000000F7EDA1A
int32_t __cdecl ScriptUtil::getTableValueAsMap<std::string,luabind::adl::object>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::map<std::string,luabind::adl::object> *val_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  luabind::adl::object *v11; // rax
  char v14[912]; // [rsp+40h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 192 8 "
                        "9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 16 9 <un"
                        "known> 384 16 7 val:229 416 16 9 <unknown> 448 32 7 key:227 512 32 9 <unknown> 576 32 9 <unknown"
                        "> 640 32 9 <unknown> 704 40 6 it:222 784 40 7 end:222";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsMap<std::string,luabind::adl::object>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -219021312;
  v5[536862732] = -219021312;
  v5[536862733] = -219021312;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959360;
  v5[536862744] = 62194;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 704),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 784));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 704),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 784)) )
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352));
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      luabind::object_cast<std::string,luabind::adl::object>(
        (std::string *)(v3 + 448),
        (const luabind::adl::object *)(v3 + 352));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 352));
      *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 416));
      if ( *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::object_cast<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 384));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 416));
      *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -1800;
      v11 = std::map<std::string,luabind::adl::object>::operator[](
              val_map,
              (const std::map<std::string,luabind::adl::object>::key_type *)(v3 + 448));
      luabind::adl::object::operator=(v11, (const luabind::adl::object *)(v3 + 384));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 384));
      std::string::~string((void *)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -1800;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 704));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 784));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 704));
    v10 = 0;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v10;
};

// Line 210: range 000000000F7E357C-000000000F7E47BE
int32_t __cdecl ScriptUtil::getTableValueAsMap<unsigned int,luabind::adl::object>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::map<unsigned int,luabind::adl::object> *val_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  char *v11; // rsi
  unsigned int v12; // edx
  char v13; // al
  luabind::adl::object *v14; // rax
  char v17[880]; // [rsp+40h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 48 4 7 key:227 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 192 8 9 "
                        "<unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 8 9 <unkno"
                        "wn> 384 16 9 <unknown> 416 16 7 val:229 448 16 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>"
                        " 608 32 9 <unknown> 672 40 6 it:222 752 40 7 end:222";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableValueAsMap<unsigned int,luabind::adl::object>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -219021312;
  v5[536862733] = -219021312;
  v5[536862734] = -219021312;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959360;
  v5[536862743] = 62194;
  v5[536862744] = -218103808;
  v5[536862745] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 672),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 752));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 672),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 752)) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      v11 = (char *)(v3 + 672);
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 384));
      v12 = luabind::object_cast<unsigned int,luabind::adl::object>((const luabind::adl::object *)(v3 + 384));
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v3 + 48, v11);
      }
      *(_DWORD *)(v3 + 48) = v12;
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 384));
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 448));
      if ( *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::object_cast<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 416));
      luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 448));
      *(_WORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -1800;
      v14 = std::map<unsigned int,luabind::adl::object>::operator[](
              val_map,
              (const std::map<unsigned int,luabind::adl::object>::key_type *)(v3 + 48));
      luabind::adl::object::operator=(v14, (const luabind::adl::object *)(v3 + 416));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 416));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -1800;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 672));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 752));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 672));
    v10 = 0;
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 237: range 000000000CFD2A92-000000000CFD3911
int32_t __cdecl ScriptUtil::getTableValue<int>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        int *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  int v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<int,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};

// Line 314: range 000000000F960820-000000000F960852
int __cdecl luabind::default_converter<std::vector<luabind::adl::object>,void>::compute_score(
        lua_State_0 *L,
        int index)
{
  if ( lua_type(L, index) == 5 )
    return 0;
  else
    return -1;
};

// Line 314: range 000000000FA078F8-000000000FA0792A
int __cdecl luabind::default_converter<std::vector<std::string>,void>::compute_score(lua_State_0 *L, int index)
{
  if ( lua_type(L, index) == 5 )
    return 0;
  else
    return -1;
};

// Line 314: range 000000000F9640A4-000000000F9640D6
int __cdecl luabind::default_converter<std::vector<unsigned int>,void>::compute_score(lua_State_0 *L, int index)
{
  if ( lua_type(L, index) == 5 )
    return 0;
  else
    return -1;
};

// Line 320: range 000000000F960870-000000000F960DFF
std::vector<luabind::adl::object> *__cdecl luabind::default_converter<std::vector<luabind::adl::object>,void>::from(
        std::vector<luabind::adl::object> *retstr,
        luabind::default_converter<std::vector<luabind::adl::object>,void> *const this,
        lua_State_0 *L,
        int index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  const std::vector<luabind::adl::object>::value_type *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v17[384]; // [rsp+20h] [rbp-180h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 16 7 tbl:323 64 16 9 <unknown> 96 16 9 <unknown> 128 24 5 v:328 192 40 7 itr:325 272 40 7 end:325";
  *(_QWORD *)(v4 + 16) = luabind::default_converter<std::vector<luabind::adl::object>,void>::from;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862729] = -218103808;
  v6[536862730] = -202116109;
  std::vector<luabind::adl::object>::vector(retstr);
  luabind::from_stack::from_stack((luabind::from_stack *const)(v4 + 64), L, index);
  luabind::adl::object::object((luabind::adl::object *const)(v4 + 32), (const luabind::from_stack *)(v4 + 64));
  *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v4 + 192) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_BYTE *)(v7 + 4) = 0;
  luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
    (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 192),
    (const luabind::adl::object *)(v4 + 32));
  v8 = ((v4 + 272) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_BYTE *)(v8 + 4) = 0;
  luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 272));
  while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
            (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 192),
            (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 272)) )
  {
    v9 = ((v4 + 128) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 96));
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 105) & 7) >= *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 24LL);
    }
    luabind::object_cast_nothrow<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
      (boost::optional<luabind::adl::object> *)(v4 + 128),
      (const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v4 + 96));
    luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v4 + 96));
    *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !boost::optional<luabind::adl::object>::operator!((const boost::optional<luabind::adl::object> *const)(v4 + 128)) )
    {
      v10 = boost::optional<luabind::adl::object>::operator*((boost::optional<luabind::adl::object> *const)(v4 + 128));
      std::vector<luabind::adl::object>::push_back(retstr, v10);
    }
    boost::optional<luabind::adl::object>::~optional((boost::optional<luabind::adl::object> *const)(v4 + 128));
    v11 = ((v4 + 128) >> 3) + 2147450880;
    *(_WORD *)v11 = -1800;
    *(_BYTE *)(v11 + 2) = -8;
    boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 192));
  }
  luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 272));
  luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 192));
  v12 = ((v4 + 192) >> 3) + 2147450880;
  *(_DWORD *)v12 = -117901064;
  *(_BYTE *)(v12 + 4) = -8;
  v13 = ((v4 + 272) >> 3) + 2147450880;
  *(_DWORD *)v13 = -117901064;
  *(_BYTE *)(v13 + 4) = -8;
  luabind::adl::object::~object((luabind::adl::object *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 320: range 000000000FA07948-000000000FA07ED2
std::vector<std::string> *__cdecl luabind::default_converter<std::vector<std::string>,void>::from(
        std::vector<std::string> *retstr,
        luabind::default_converter<std::vector<std::string>,void> *const this,
        lua_State_0 *L,
        int index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  const std::vector<std::string>::value_type *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v17[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 16 7 tbl:323 80 16 9 <unknown> 112 16 9 <unknown> 144 40 7 itr:325 224 40 7 end:325 304 40 5 v:328";
  *(_QWORD *)(v4 + 16) = luabind::default_converter<std::vector<std::string>,void>::from;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218959360;
  v6[536862729] = 62194;
  v6[536862730] = -218103808;
  v6[536862731] = -202116109;
  std::vector<std::string>::vector(retstr);
  luabind::from_stack::from_stack((luabind::from_stack *const)(v4 + 80), L, index);
  luabind::adl::object::object((luabind::adl::object *const)(v4 + 48), (const luabind::from_stack *)(v4 + 80));
  *(_WORD *)(((v4 + 80) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v4 + 144) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_BYTE *)(v7 + 4) = 0;
  luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
    (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 144),
    (const luabind::adl::object *)(v4 + 48));
  v8 = ((v4 + 224) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_BYTE *)(v8 + 4) = 0;
  luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 224));
  while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
            (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 144),
            (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 224)) )
  {
    v9 = ((v4 + 304) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_BYTE *)(v9 + 4) = 0;
    *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 112));
    if ( *(char *)(((v4 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 87) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 304, 40LL);
    }
    luabind::object_cast_nothrow<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
      (boost::optional<std::string > *)(v4 + 304),
      (const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v4 + 112));
    luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v4 + 112));
    *(_WORD *)(((v4 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !boost::optional<std::string>::operator!((const boost::optional<std::string > *const)(v4 + 304)) )
    {
      v10 = boost::optional<std::string>::operator*((boost::optional<std::string > *const)(v4 + 304));
      std::vector<std::string>::push_back(retstr, v10);
    }
    boost::optional<std::string>::~optional((boost::optional<std::string > *const)(v4 + 304));
    v11 = ((v4 + 304) >> 3) + 2147450880;
    *(_DWORD *)v11 = -117901064;
    *(_BYTE *)(v11 + 4) = -8;
    boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 144));
  }
  luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 224));
  luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 144));
  v12 = ((v4 + 144) >> 3) + 2147450880;
  *(_DWORD *)v12 = -117901064;
  *(_BYTE *)(v12 + 4) = -8;
  v13 = ((v4 + 224) >> 3) + 2147450880;
  *(_DWORD *)v13 = -117901064;
  *(_BYTE *)(v13 + 4) = -8;
  luabind::adl::object::~object((luabind::adl::object *const)(v4 + 48));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
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
  return retstr;
};

// Line 320: range 000000000F9640D8-000000000F9645C5
std::vector<unsigned int> *__cdecl luabind::default_converter<std::vector<unsigned int>,void>::from(
        std::vector<unsigned int> *retstr,
        luabind::default_converter<std::vector<unsigned int>,void> *const this,
        lua_State_0 *L,
        int index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  const std::vector<unsigned int>::value_type *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v15[352]; // [rsp+20h] [rbp-160h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 8 5 v:328 64 16 7 tbl:323 96 16 9 <unknown> 128 16 9 <unknown> 160 40 7 itr:325 240 40 7 end:325";
  *(_QWORD *)(v4 + 16) = luabind::default_converter<std::vector<unsigned int>,void>::from;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  std::vector<unsigned int>::vector(retstr);
  luabind::from_stack::from_stack((luabind::from_stack *const)(v4 + 96), L, index);
  luabind::adl::object::object((luabind::adl::object *const)(v4 + 64), (const luabind::from_stack *)(v4 + 96));
  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v4 + 160) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_BYTE *)(v7 + 4) = 0;
  luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
    (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 160),
    (const luabind::adl::object *)(v4 + 64));
  v8 = ((v4 + 240) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_BYTE *)(v8 + 4) = 0;
  luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 240));
  while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
            (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 160),
            (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v4 + 240)) )
  {
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 0;
    *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 32, v4 + 160);
    *(boost::optional<unsigned int> *)(v4 + 32) = luabind::object_cast_nothrow<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v4 + 128));
    luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v4 + 128));
    *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -1800;
    if ( !boost::optional<unsigned int>::operator!((const boost::optional<unsigned int> *const)(v4 + 32)) )
    {
      v9 = boost::optional<unsigned int>::operator*((boost::optional<unsigned int> *const)(v4 + 32));
      std::vector<unsigned int>::push_back(retstr, v9);
    }
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v4 + 160));
  }
  luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 240));
  luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v4 + 160));
  v10 = ((v4 + 160) >> 3) + 2147450880;
  *(_DWORD *)v10 = -117901064;
  *(_BYTE *)(v10 + 4) = -8;
  v11 = ((v4 + 240) >> 3) + 2147450880;
  *(_DWORD *)v11 = -117901064;
  *(_BYTE *)(v11 + 4) = -8;
  luabind::adl::object::~object((luabind::adl::object *const)(v4 + 64));
  if ( v15 == (char *)v4 )
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
  return retstr;
};

// Line 361: range 000000000F7F6F48-000000000F7F7A87
int32_t __cdecl ScriptUtil::getTableArrayAsVector<double>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<double> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  double v11; // rax
  int32_t result; // eax
  int key_type; // [rsp+34h] [rbp-23Ch]
  char v15[560]; // [rsp+40h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 7 val:383 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 16 9 <unknown> 192 16 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 40 6 it:373 432 40 7 end:373";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableArrayAsVector<double>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 432));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 352),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 432)) )
    {
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 160));
      key_type = luabind::type<luabind::adl::object>((const luabind::adl::object *)(v3 + 160));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 160));
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      if ( key_type == 3 )
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
        *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 192));
        v11 = luabind::object_cast<double,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 192));
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          v11 = COERCE_DOUBLE(__asan_report_store8(v3 + 32, v3 + 352));
        *(double *)(v3 + 32) = v11;
        luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 192));
        *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
        std::vector<double>::push_back(val_vec, (const std::vector<double>::value_type *)(v3 + 32));
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 352));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 432));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352));
    v10 = 0;
  }
  result = v10;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 361: range 000000000F7F4D8C-000000000F7F58FC
int32_t __cdecl ScriptUtil::getTableArrayAsVector<luabind::adl::object>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<luabind::adl::object> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  int32_t result; // eax
  int key_type; // [rsp+34h] [rbp-23Ch]
  char v14[560]; // [rsp+40h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 16 9 <unknown> 160 16 7 val:383 192 16"
                        " 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 40 6 it:373 432 40 7 end:373";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableArrayAsVector<luabind::adl::object>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 432));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 352),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 432)) )
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 128));
      key_type = luabind::type<luabind::adl::object>((const luabind::adl::object *)(v3 + 128));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 128));
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( key_type == 3 )
      {
        *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 192));
        if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        luabind::object_cast<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 160));
        luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 192));
        *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
        std::vector<luabind::adl::object>::push_back(
          val_vec,
          (const std::vector<luabind::adl::object>::value_type *)(v3 + 160));
        luabind::adl::object::~object((luabind::adl::object *const)(v3 + 160));
      }
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 352));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 432));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 352));
    v10 = 0;
  }
  result = v10;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 361: range 000000000F7F5F52-000000000F7F6B1F
int32_t __cdecl ScriptUtil::getTableArrayAsVector<std::string>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        std::vector<std::string> *val_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::invalid_argument *exception; // rdi
  int32_t v10; // ebx
  int32_t result; // eax
  int key_type; // [rsp+34h] [rbp-25Ch]
  char v14[592]; // [rsp+40h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 16 9 <unknown> 160 16 9 <unknown> 192 "
                        "32 7 val:383 256 32 9 <unknown> 320 32 9 <unknown> 384 40 6 it:373 464 40 7 end:373";
  *(_QWORD *)(v3 + 16) = ScriptUtil::getTableArrayAsVector<std::string>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959360;
  v5[536862734] = 62194;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  if ( !luabind::adl::object::is_valid(table) || luabind::type<luabind::adl::object>(table) != 5 )
  {
    v7 = (unsigned __int8)this & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(this, v7, v8);
    if ( this->has_exception_ )
    {
      exception = (std::invalid_argument *)__cxa_allocate_exception(0x10uLL);
      std::invalid_argument::invalid_argument(exception, "table is nil");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::invalid_argument,
        (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
    }
    v10 = -1;
  }
  else
  {
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
      (luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 384),
      table);
    luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 464));
    while ( boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 384),
              (const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *)(v3 + 464)) )
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::basic_iterator<luabind::detail::basic_access>::key((const luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 128));
      key_type = luabind::type<luabind::adl::object>((const luabind::adl::object *)(v3 + 128));
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 128));
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( key_type == 3 )
      {
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 160));
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        luabind::object_cast<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
          (std::string *)(v3 + 192),
          (const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)(v3 + 160));
        luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy((luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)(v3 + 160));
        *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
        std::vector<std::string>::push_back(val_vec, (const std::vector<std::string>::value_type *)(v3 + 192));
        std::string::~string((void *)(v3 + 192));
      }
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const)(v3 + 384));
    }
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 464));
    luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator((luabind::detail::basic_iterator<luabind::detail::basic_access> *const)(v3 + 384));
    v10 = 0;
  }
  result = v10;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 470: range 000000000D29DC30-000000000D29E172
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[8]>::type *a5,
        std::remove_reference<unsigned int&>::type *a6,
        std::remove_reference<char const (&)[9]>::type *args_2,
        std::string *args_3,
        std::remove_reference<char const (&)[5]>::type *args_4,
        unsigned int *args_5,
        std::remove_reference<char const (&)[10]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[15]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[9]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[16]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[21]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[11]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[16]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[8]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[4]>::type *args_22,
        unsigned __int64 *args_23,
        std::remove_reference<char const (&)[12]>::type *args_24,
        unsigned int *args_25,
        std::remove_reference<char const (&)[13]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[18]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[16]>::type *args_30,
        bool *args_31)
{
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // r13
  std::remove_reference<char const (&)[5]>::type *v39; // r15
  unsigned int *v40; // r14
  const char *v41; // rax
  __int64 result; // rax
  char (*v43)[9]; // [rsp+8h] [rbp-1D8h]
  std::remove_reference<std::string&>::type *v44; // [rsp+10h] [rbp-1D0h]
  unsigned int *v45; // [rsp+18h] [rbp-1C8h]
  char (*v46)[10]; // [rsp+20h] [rbp-1C0h]
  unsigned int *v47; // [rsp+28h] [rbp-1B8h]
  char (*v48)[15]; // [rsp+30h] [rbp-1B0h]
  unsigned int *v49; // [rsp+38h] [rbp-1A8h]
  char (*v50)[9]; // [rsp+40h] [rbp-1A0h]
  unsigned int *v51; // [rsp+48h] [rbp-198h]
  char (*v52)[16]; // [rsp+50h] [rbp-190h]
  unsigned int *v53; // [rsp+58h] [rbp-188h]
  char (*v54)[21]; // [rsp+60h] [rbp-180h]
  unsigned int *v55; // [rsp+68h] [rbp-178h]
  char (*v56)[11]; // [rsp+70h] [rbp-170h]
  unsigned int *v57; // [rsp+78h] [rbp-168h]
  char (*v58)[16]; // [rsp+80h] [rbp-160h]
  unsigned int *v59; // [rsp+88h] [rbp-158h]
  char (*v60)[8]; // [rsp+90h] [rbp-150h]
  unsigned int *v61; // [rsp+98h] [rbp-148h]
  char (*v62)[4]; // [rsp+A0h] [rbp-140h]
  unsigned __int64 *v63; // [rsp+A8h] [rbp-138h]
  char (*v64)[12]; // [rsp+B0h] [rbp-130h]
  unsigned int *v65; // [rsp+B8h] [rbp-128h]
  char (*v66)[13]; // [rsp+C0h] [rbp-120h]
  unsigned int *v67; // [rsp+C8h] [rbp-118h]
  char (*v68)[18]; // [rsp+D0h] [rbp-110h]
  unsigned int *v69; // [rsp+D8h] [rbp-108h]
  char (*v70)[16]; // [rsp+E0h] [rbp-100h]
  bool *v71; // [rsp+E8h] [rbp-F8h]
  int32_t ret; // [rsp+12Ch] [rbp-B4h]
  unsigned int reta; // [rsp+12Ch] [rbp-B4h]
  char v78[176]; // [rsp+130h] [rbp-B0h] BYREF

  v36 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v37 = __asan_stack_malloc_1(128LL);
    if ( v37 )
      v36 = v37;
  }
  *(_QWORD *)v36 = 1102416563LL;
  *(_QWORD *)(v36 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v36 + 16) = ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v38 = (_DWORD *)(v36 >> 3);
  v38[536862720] = -235802127;
  v38[536862721] = -234753551;
  v38[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v71 = std::forward<bool &>(args_31);
  v70 = (char (*)[16])std::forward<char const(&)[16]>(args_30);
  v69 = std::forward<unsigned int &>(args_29);
  v68 = (char (*)[18])std::forward<char const(&)[18]>(args_28);
  v67 = std::forward<unsigned int &>(args_27);
  v66 = (char (*)[13])std::forward<char const(&)[13]>(args_26);
  v65 = std::forward<unsigned int &>(args_25);
  v64 = (char (*)[12])std::forward<char const(&)[12]>(args_24);
  v63 = std::forward<unsigned long &>(args_23);
  v62 = (char (*)[4])std::forward<char const(&)[4]>(args_22);
  v61 = std::forward<unsigned int &>(args_21);
  v60 = (char (*)[8])std::forward<char const(&)[8]>(args_20);
  v59 = std::forward<unsigned int &>(args_19);
  v58 = (char (*)[16])std::forward<char const(&)[16]>(args_18);
  v57 = std::forward<unsigned int &>(args_17);
  v56 = (char (*)[11])std::forward<char const(&)[11]>(args_16);
  v55 = std::forward<unsigned int &>(args_15);
  v54 = (char (*)[21])std::forward<char const(&)[21]>(args_14);
  v53 = std::forward<unsigned int &>(args_13);
  v52 = (char (*)[16])std::forward<char const(&)[16]>(args_12);
  v51 = std::forward<unsigned int &>(args_11);
  v50 = (char (*)[9])std::forward<char const(&)[9]>(args_10);
  v49 = std::forward<unsigned int &>(args_9);
  v48 = (char (*)[15])std::forward<char const(&)[15]>(args_8);
  v47 = std::forward<unsigned int &>(args_7);
  v46 = (char (*)[10])std::forward<char const(&)[10]>(args_6);
  v45 = std::forward<unsigned int &>(args_5);
  v39 = (std::remove_reference<char const (&)[5]>::type *)std::forward<char const(&)[5]>(args_4);
  v44 = std::forward<std::string &>(args_3);
  v43 = (char (*)[9])std::forward<char const(&)[9]>(args_2);
  v40 = std::forward<unsigned int &>(a6);
  std::allocator<char>::allocator(v36 + 48);
  v41 = (const char *)std::forward<char const(&)[8]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v36 + 64),
    v41,
    (const std::allocator<char> *)(v36 + 48));
  reta = ScriptUtil::getTableValue<unsigned int,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           a1,
           a2,
           (const std::string *)(v36 + 64),
           v40,
           v43,
           v44,
           v39,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71) | ret;
  std::string::~string((void *)(v36 + 64));
  *(_DWORD *)(((v36 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v36 + 48);
  result = reta;
  if ( v78 == (char *)v36 )
  {
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v36 = 1172321806LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 584: range 000000000D1EC288-000000000D1EC802
__int64 __fastcall ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
        ScriptUtil *a1,
        const luabind::adl::object *a2,
        const std::string *a3,
        bool *a4,
        std::remove_reference<char const (&)[9]>::type *a5,
        std::remove_reference<bool&>::type *a6,
        std::remove_reference<char const (&)[8]>::type *args_2,
        unsigned int *args_3,
        std::remove_reference<char const (&)[9]>::type *args_4,
        std::string *args_5,
        std::remove_reference<char const (&)[5]>::type *args_6,
        unsigned int *args_7,
        std::remove_reference<char const (&)[10]>::type *args_8,
        unsigned int *args_9,
        std::remove_reference<char const (&)[15]>::type *args_10,
        unsigned int *args_11,
        std::remove_reference<char const (&)[9]>::type *args_12,
        unsigned int *args_13,
        std::remove_reference<char const (&)[16]>::type *args_14,
        unsigned int *args_15,
        std::remove_reference<char const (&)[21]>::type *args_16,
        unsigned int *args_17,
        std::remove_reference<char const (&)[11]>::type *args_18,
        unsigned int *args_19,
        std::remove_reference<char const (&)[16]>::type *args_20,
        unsigned int *args_21,
        std::remove_reference<char const (&)[8]>::type *args_22,
        unsigned int *args_23,
        std::remove_reference<char const (&)[4]>::type *args_24,
        unsigned __int64 *args_25,
        std::remove_reference<char const (&)[12]>::type *args_26,
        unsigned int *args_27,
        std::remove_reference<char const (&)[13]>::type *args_28,
        unsigned int *args_29,
        std::remove_reference<char const (&)[18]>::type *args_30,
        unsigned int *args_31,
        std::remove_reference<char const (&)[16]>::type *args_32,
        bool *args_33)
{
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  _DWORD *v40; // r13
  std::remove_reference<char const (&)[9]>::type *v41; // r15
  bool *v42; // r14
  const char *v43; // rax
  __int64 result; // rax
  char (*v45)[8]; // [rsp+8h] [rbp-1E8h]
  std::remove_reference<unsigned int&>::type *v46; // [rsp+10h] [rbp-1E0h]
  std::string *v47; // [rsp+18h] [rbp-1D8h]
  char (*v48)[5]; // [rsp+20h] [rbp-1D0h]
  unsigned int *v49; // [rsp+28h] [rbp-1C8h]
  char (*v50)[10]; // [rsp+30h] [rbp-1C0h]
  unsigned int *v51; // [rsp+38h] [rbp-1B8h]
  char (*v52)[15]; // [rsp+40h] [rbp-1B0h]
  unsigned int *v53; // [rsp+48h] [rbp-1A8h]
  char (*v54)[9]; // [rsp+50h] [rbp-1A0h]
  unsigned int *v55; // [rsp+58h] [rbp-198h]
  char (*v56)[16]; // [rsp+60h] [rbp-190h]
  unsigned int *v57; // [rsp+68h] [rbp-188h]
  char (*v58)[21]; // [rsp+70h] [rbp-180h]
  unsigned int *v59; // [rsp+78h] [rbp-178h]
  char (*v60)[11]; // [rsp+80h] [rbp-170h]
  unsigned int *v61; // [rsp+88h] [rbp-168h]
  char (*v62)[16]; // [rsp+90h] [rbp-160h]
  unsigned int *v63; // [rsp+98h] [rbp-158h]
  char (*v64)[8]; // [rsp+A0h] [rbp-150h]
  unsigned int *v65; // [rsp+A8h] [rbp-148h]
  char (*v66)[4]; // [rsp+B0h] [rbp-140h]
  unsigned __int64 *v67; // [rsp+B8h] [rbp-138h]
  char (*v68)[12]; // [rsp+C0h] [rbp-130h]
  unsigned int *v69; // [rsp+C8h] [rbp-128h]
  char (*v70)[13]; // [rsp+D0h] [rbp-120h]
  unsigned int *v71; // [rsp+D8h] [rbp-118h]
  char (*v72)[18]; // [rsp+E0h] [rbp-110h]
  unsigned int *v73; // [rsp+E8h] [rbp-108h]
  char (*v74)[16]; // [rsp+F0h] [rbp-100h]
  bool *v75; // [rsp+F8h] [rbp-F8h]
  int32_t ret; // [rsp+13Ch] [rbp-B4h]
  unsigned int reta; // [rsp+13Ch] [rbp-B4h]
  char v82[176]; // [rsp+140h] [rbp-B0h] BYREF

  v38 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v39 = __asan_stack_malloc_1(128LL);
    if ( v39 )
      v38 = v39;
  }
  *(_QWORD *)v38 = 1102416563LL;
  *(_QWORD *)(v38 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v38 + 16) = ScriptUtil::getTableValue<bool,char const(&)[9],bool &,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>;
  v40 = (_DWORD *)(v38 >> 3);
  v40[536862720] = -235802127;
  v40[536862721] = -234753551;
  v40[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<bool>(a1, a2, a3, a4);
  v75 = std::forward<bool &>(args_33);
  v74 = (char (*)[16])std::forward<char const(&)[16]>(args_32);
  v73 = std::forward<unsigned int &>(args_31);
  v72 = (char (*)[18])std::forward<char const(&)[18]>(args_30);
  v71 = std::forward<unsigned int &>(args_29);
  v70 = (char (*)[13])std::forward<char const(&)[13]>(args_28);
  v69 = std::forward<unsigned int &>(args_27);
  v68 = (char (*)[12])std::forward<char const(&)[12]>(args_26);
  v67 = std::forward<unsigned long &>(args_25);
  v66 = (char (*)[4])std::forward<char const(&)[4]>(args_24);
  v65 = std::forward<unsigned int &>(args_23);
  v64 = (char (*)[8])std::forward<char const(&)[8]>(args_22);
  v63 = std::forward<unsigned int &>(args_21);
  v62 = (char (*)[16])std::forward<char const(&)[16]>(args_20);
  v61 = std::forward<unsigned int &>(args_19);
  v60 = (char (*)[11])std::forward<char const(&)[11]>(args_18);
  v59 = std::forward<unsigned int &>(args_17);
  v58 = (char (*)[21])std::forward<char const(&)[21]>(args_16);
  v57 = std::forward<unsigned int &>(args_15);
  v56 = (char (*)[16])std::forward<char const(&)[16]>(args_14);
  v55 = std::forward<unsigned int &>(args_13);
  v54 = (char (*)[9])std::forward<char const(&)[9]>(args_12);
  v53 = std::forward<unsigned int &>(args_11);
  v52 = (char (*)[15])std::forward<char const(&)[15]>(args_10);
  v51 = std::forward<unsigned int &>(args_9);
  v50 = (char (*)[10])std::forward<char const(&)[10]>(args_8);
  v49 = std::forward<unsigned int &>(args_7);
  v48 = (char (*)[5])std::forward<char const(&)[5]>(args_6);
  v47 = std::forward<std::string &>(args_5);
  v41 = (std::remove_reference<char const (&)[9]>::type *)std::forward<char const(&)[9]>(args_4);
  v46 = std::forward<unsigned int &>(args_3);
  v45 = (char (*)[8])std::forward<char const(&)[8]>(args_2);
  v42 = std::forward<bool &>(a6);
  std::allocator<char>::allocator(v38 + 48);
  v43 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v38 + 64),
    v43,
    (const std::allocator<char> *)(v38 + 48));
  reta = ScriptUtil::getTableValue<bool,char const(&)[8],unsigned int &,char const(&)[9],std::string &,char const(&)[5],unsigned int &,char const(&)[10],unsigned int &,char const(&)[15],unsigned int &,char const(&)[9],unsigned int &,char const(&)[16],unsigned int &,char const(&)[21],unsigned int &,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[8],unsigned int &,char const(&)[4],unsigned long &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[18],unsigned int &,char const(&)[16],bool &>(
           a1,
           a2,
           (const std::string *)(v38 + 64),
           v42,
           v45,
           v46,
           v41,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75) | ret;
  std::string::~string((void *)(v38 + 64));
  *(_DWORD *)(((v38 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v38 + 48);
  result = reta;
  if ( v82 == (char *)v38 )
  {
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v38 = 1172321806LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 820: range 000000000CED4574-000000000CED4793
__int64 __fastcall ScriptUtil::getTableValue<unsigned int,char const(&)[9],luabind::adl::object &>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val,
        std::remove_reference<char const (&)[9]>::type *a5,
        luabind::adl::object *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  luabind::adl::object *v9; // r14
  const char *v10; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-B4h]
  unsigned int reta; // [rsp+3Ch] [rbp-B4h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ScriptUtil::getTableValue<unsigned int,char const(&)[9],luabind::adl::object &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862723] = -202116109;
  ret = ScriptUtil::getTableValue<unsigned int>(this, table, name, val);
  v9 = std::forward<luabind::adl::object &>(a6);
  std::allocator<char>::allocator(v6 + 48);
  v10 = (const char *)std::forward<char const(&)[9]>(a5);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v6 + 64),
    v10,
    (const std::allocator<char> *)(v6 + 48));
  reta = ScriptUtil::getTableValue(this, table, (const std::string *)(v6 + 64), v9) | ret;
  std::string::~string((void *)(v6 + 64));
  *(_DWORD *)(((v6 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v6 + 48);
  result = reta;
  if ( v18 == (char *)v6 )
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
  return result;
};

// Line 872: range 000000000CFE0650-000000000CFE14CF
int32_t __cdecl ScriptUtil::getTableValue<unsigned int>(
        ScriptUtil *const this,
        const luabind::adl::object *table,
        const std::string *name,
        unsigned int *val)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *exception; // r14
  int32_t v11; // ebx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  char v19; // dl
  int32_t result; // eax
  char v23[624]; // [rsp+40h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ScriptUtil::getTableValue<unsigned int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
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
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 320), "can't find:", name);
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        std::operator+<char>((std::string *)(v4 + 384), (std::string *)(v4 + 320), " in table");
        std::invalid_argument::invalid_argument(v16, v4 + 384);
        std::string::~string((void *)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        __asan_handle_no_return(v4 + 320);
        _cxa_throw(
          v16,
          (struct type_info *)&`typeinfo for'std::invalid_argument,
          (void (__fastcall *)(void *))&std::invalid_argument::~invalid_argument);
      }
      v11 = -1;
    }
    else
    {
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
      v18 = luabind::object_cast<unsigned int,luabind::adl::index_proxy<luabind::adl::object>>((const luabind::adl::index_proxy<luabind::adl::object> *)(v4 + 192));
      v19 = *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)val & 7) + 3) >= v19 )
      {
        LOBYTE(table) = v19 != 0;
        __asan_report_store4(val, table);
      }
      *val = v18;
      luabind::adl::index_proxy<luabind::adl::object>::~index_proxy((luabind::adl::index_proxy<luabind::adl::object> *const)(v4 + 192));
      v11 = 0;
    }
  }
  result = v11;
  if ( v23 == (char *)v4 )
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
  }
  return result;
};
