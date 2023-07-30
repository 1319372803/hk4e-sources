// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReminderExcelConfig.cpp

// Line 19: range 0000000014643E86-0000000014644069
int32_t __cdecl ReminderExcelConfigMgr::rewriteConfig(ReminderExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReminderExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ReminderExcelConfigMgr::rewriteServerMessageExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ReminderExcelConfig.cpp",
      "rewriteConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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

// Line 29: range 000000001464406A-000000001464407C
int32_t __cdecl ReminderExcelConfigMgr::checkConfig(
        ReminderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 34: range 000000001464407E-0000000014644987
int32_t __cdecl ReminderExcelConfigMgr::rewriteServerMessageExcelConfig(
        ReminderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  const unsigned int *v13; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // edx
  unsigned __int64 v18; // rdx
  int v19; // eax
  int32_t result; // eax
  data::ServerMessageExcelConfigMap *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false,false>::reference v22; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,data::ServerMessageExcelConfig> >::type *id; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ServerMessageExcelConfig> >::type *config; // [rsp+38h] [rbp-208h]
  std::vector<std::string> *__for_range_0; // [rsp+40h] [rbp-200h]
  const std::string *key; // [rsp+48h] [rbp-1F8h]
  char v27[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 1 9 <unknown> 64 8 14 __for_begin:35 96 8 12 __for_end:35 128 8 14 __for_begin:51 160 8 12 "
                        "__for_end:51 192 24 10 key_vec:41 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReminderExcelConfigMgr::rewriteServerMessageExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->server_message_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ServerMessageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ServerMessageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ServerMessageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ServerMessageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false> *)(v3 + 96)) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ServerMessageExcelConfig>(v22);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ServerMessageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ServerMessageExcelConfig>(v22);
    if ( (unsigned __int8)std::string::empty() )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 192) >> 3) + 2147450880;
      *(_WORD *)v7 = 0;
      *(_BYTE *)(v7 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 256),
        ",",
        (const std::allocator<char> *)(v3 + 48));
      v8 = (char *)(v3 + 256);
      v9 = common::tools::StringUtils::splitToList(
             &config->lua_keys,
             (const std::string *)(v3 + 256),
             (std::vector<std::string> *)(v3 + 192),
             0) != 0;
      std::string::~string((void *)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 48);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v9 )
      {
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ReminderExcelConfig.cpp",
          "rewriteServerMessageExcelConfig",
          44);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v10,
                (const char (*)[30])"splitToList failed, lua_keys:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &config->lua_keys);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else if ( std::vector<std::string>::empty((const std::vector<std::string> *const)(v3 + 192)) )
      {
        v12 = 1;
      }
      else
      {
        __for_range_0 = (std::vector<std::string> *)(v3 + 192);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, v8);
        *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v8);
        *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::end(__for_range_0);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160)) )
          {
            v17 = 1;
            goto LABEL_30;
          }
          key = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
          v14 = std::unordered_map<std::string,unsigned int>::emplace<std::string const&,unsigned int const&>(
                  &this->key_to_message_map,
                  key,
                  id,
                  (const std::string *)&this->key_to_message_map,
                  v13);
          if ( !v14.second )
            break;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
        }
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ReminderExcelConfig.cpp",
          "rewriteServerMessageExcelConfig",
          55);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                v15,
                (const char (*)[46])"duplicate lua key for ServerMessage, lua_key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, key);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
LABEL_30:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v17 == 1 )
          v12 = 2;
        else
          v12 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
      if ( v12 )
      {
        if ( v12 == 2 )
          v6 = 2;
        else
          v6 = 0;
      }
      else
      {
        v6 = 1;
      }
    }
    v18 = ((v3 + 192) >> 3) + 2147450880;
    *(_WORD *)v18 = -1800;
    *(_BYTE *)(v18 + 2) = -8;
    if ( v6 && v6 != 2 )
    {
      v19 = 0;
      goto LABEL_43;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ServerMessageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v19 = 1;
LABEL_43:
  if ( v19 == 1 )
    v2 = 0;
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};
