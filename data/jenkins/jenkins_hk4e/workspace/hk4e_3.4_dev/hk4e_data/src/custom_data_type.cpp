// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/custom_data_type.cpp

// Line 41: range 000000000CCBD684-000000000CCBD6B0
std::string *__cdecl data::JsonFormatConfigBase::getOriStr[abi:cxx11](
        std::string *retstr,
        data::JsonFormatConfigBase *const this)
{
  std::string::basic_string(retstr, &this->ori_str);
  return retstr;
};

// Line 47: range 000000000CCBD6B2-000000000CCBE323
int32_t __cdecl data::JsonFormatConfigBase::initDataMap(data::JsonFormatConfigBase *const this, const std::string *str)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // r14
  __int64 v8; // rax
  _BOOL4 v9; // r15d
  bool v10; // al
  unsigned __int64 v11; // rax
  const Json::String *v12; // rax
  Json::Value_0 *v13; // rax
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r15d
  const std::map<std::string,std::string>::key_type *v17; // rax
  std::map<std::string,std::string>::mapped_type *v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // r15d
  char v23[976]; // [rsp+30h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 8 7 iter:71 80 8 9 <unknown> 112 24 11 mem_list:70 176 32 9 <unknown> 240 32 9 <unknown> 3"
                        "04 32 9 <unknown> 368 32 9 <unknown> 432 40 13 root_value:62 512 40 8 value:73 592 272 9 reader:61";
  *(_QWORD *)(v3 + 16) = data::JsonFormatConfigBase::initDataMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
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
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862747] = -202116109;
  v5[536862748] = -202116109;
  std::map<std::string,std::string>::clear(&this->data_map);
  std::string::clear(&this->ori_str);
  if ( (unsigned __int8)std::string::empty(str) )
  {
    v2 = 0;
  }
  else
  {
    Json::Reader::Reader((Json::Reader *)(v3 + 592));
    Json::Value::Value(v3 + 432, 0LL);
    if ( !Json::Reader::parse((Json::Reader *const)(v3 + 592), str, (Json::Value *)(v3 + 432), 1)
      || !Json::Value::isObject((const Json::Value_0 *const)(v3 + 432)) )
    {
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 47) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/custom_data_type.cpp",
        "initDataMap",
        65);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = std::string::c_str(str);
      common::milog::MiLogStream::operator()(v7, aJson_2, v8);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    else
    {
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 135) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 121) & 7) >= *(_BYTE *)(((v3 + 135) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 24LL);
      }
      Json::Value::getMemberNames[abi:cxx11](v3 + 112, v3 + 432);
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v3 + 48) = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 112));
      while ( 1 )
      {
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v3 + 80) = std::vector<std::string>::end((std::vector<std::string> *const)(v3 + 112));
        v10 = __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 48),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 80));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
          break;
        v11 = ((v3 + 512) >> 3) + 2147450880;
        *(_DWORD *)v11 = 0;
        *(_BYTE *)(v11 + 4) = 0;
        v12 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 48));
        v13 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 432), v12);
        Json::Value::Value((Json::Value *)(v3 + 512), (const Json::Value *)v13);
        if ( !Json::Value::isString((const Json::Value_0 *const)(v3 + 512)) )
        {
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 111) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/custom_data_type.cpp",
            "initDataMap",
            76);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 240),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = std::string::c_str(str);
          common::milog::MiLogStream::operator()(v14, aJson_2, v15);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 304, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 512));
          v17 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 48));
          v18 = std::map<std::string,std::string>::operator[](&this->data_map, v17);
          std::string::operator=(v18, v3 + 304);
          std::string::~string((void *)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v16 = 1;
        }
        Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
        v19 = ((v3 + 512) >> 3) + 2147450880;
        *(_DWORD *)v19 = -117901064;
        *(_BYTE *)(v19 + 4) = -8;
        if ( v16 != 1 )
        {
          v20 = 0;
          goto LABEL_33;
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(
          (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 48),
          0);
      }
      v20 = 1;
LABEL_33:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v20 == 1 )
      {
        std::string::operator=(&this->ori_str, str);
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 112));
      v9 = v21 == 1;
    }
    Json::Value::~Value((Json::Value_0 *const)(v3 + 432));
    Json::Reader::~Reader((Json::Reader *const)(v3 + 592));
    if ( v9 )
      v2 = 0;
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
  return v2;
};

// Line 97: range 000000000CCBE324-000000000CCBE505
int32_t __cdecl data::JsonFormatConfigBase::getString(
        data::JsonFormatConfigBase *const this,
        std::string *p_key,
        std::string *value,
        bool is_optional)
{
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<std::string,std::string> *p_data_map; // rdx
  std::map<std::string,std::string> *v8; // rdx
  bool v9; // al
  std::string *p_second; // rdx
  int32_t result; // eax
  char v14[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *)v5;
  }
  v4->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)1102416563;
  v4[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)"2 32 8 7 iter:98 64 8 9 <unknown>";
  v4[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)data::JsonFormatConfigBase::getString;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  p_data_map = &this->data_map;
  if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4[4]._M_node = std::map<std::string,std::string>::find(p_data_map, p_key)._M_node;
  v8 = &this->data_map;
  if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4[8]._M_node = std::map<std::string,std::string>::end(v8)._M_node;
  v9 = std::operator!=(v4 + 4, v4 + 8);
  *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->(v4 + 4)->second;
    std::string::assign(value, p_second);
    result = 0;
  }
  else if ( is_optional )
  {
    std::string::clear(value);
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 114: range 000000000CCBE506-000000000CCBE71C
int32_t __cdecl data::JsonFormatConfigBase::getUint32(
        data::JsonFormatConfigBase *const this,
        std::string *p_key,
        uint32_t *value,
        bool is_optional)
{
  std::string *v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  int32_t result; // eax
  int32_t retcode; // [rsp+2Ch] [rbp-D4h]
  char v12[208]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = (std::string *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = (std::string *)v5;
  }
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"2 32 32 13 value_str:115 96 32 9 <unknown>";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)data::JsonFormatConfigBase::getUint32;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  std::string::basic_string(&v4[1]);
  std::string::basic_string(&v4[3], p_key);
  retcode = data::JsonFormatConfigBase::getString(this, v4 + 3, v4 + 1, is_optional);
  std::string::~string(&v4[3]);
  *(_DWORD *)(((unsigned __int64)&v4[3] >> 3) + 0x7FFF8000) = -117901064;
  if ( retcode )
    v7 = retcode;
  else
    v7 = common::tools::StringUtils::strToNum<unsigned int>(v4 + 1, value, is_optional);
  std::string::~string(&v4[1]);
  result = v7;
  if ( v12 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v4->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 126: range 000000000CCBE71E-000000000CCBE9FB
int32_t __cdecl data::JsonFormatConfigBase::getDateTime(
        data::JsonFormatConfigBase *const this,
        std::string *p_key,
        uint32_t *value,
        bool is_optional)
{
  std::string *v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  uint32_t TimeByStr; // edi
  int32_t result; // eax
  int32_t retcode; // [rsp+2Ch] [rbp-D4h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = (std::string *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = (std::string *)v5;
  }
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"2 32 32 13 value_str:127 96 32 9 <unknown>";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)data::JsonFormatConfigBase::getDateTime;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  std::string::basic_string(&v4[1]);
  std::string::basic_string(&v4[3], p_key);
  retcode = data::JsonFormatConfigBase::getString(this, v4 + 3, v4 + 1, is_optional);
  std::string::~string(&v4[3]);
  *(_DWORD *)(((unsigned __int64)&v4[3] >> 3) + 0x7FFF8000) = -117901064;
  if ( retcode )
  {
    v7 = retcode;
  }
  else if ( is_optional && (unsigned __int8)std::string::empty(&v4[1]) )
  {
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(value);
    }
    *value = 0;
    v7 = 0;
  }
  else
  {
    TimeByStr = common::tools::TimeUtils::getTimeByStr(v4 + 1);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      TimeByStr = (unsigned int)value;
      __asan_report_store4(value);
    }
    *value = TimeByStr;
    if ( *value )
      v7 = 0;
    else
      v7 = -1;
  }
  std::string::~string(&v4[1]);
  result = v7;
  if ( v14 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v4->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 148: range 000000000CCBE9FC-000000000CCBEA20
int32_t __cdecl data::JsonMapConfig::initFromJsonStr(data::JsonMapConfig *const this, const std::string *json_str)
{
  return data::JsonFormatConfigBase::initDataMap(this, json_str);
};

// Line 158: range 000000000CCBEA22-000000000CCBF91F
int32_t __cdecl data::StopServerConfig::initFromJsonStr(
        data::StopServerConfig *const this,
        const std::string *json_str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  uint32_t begin_time; // ecx
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  common::milog::MiLogStream *v18; // rax
  char v19[784]; // [rsp+20h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::StopServerConfig::initFromJsonStr;
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
  v4[536862740] = -218959118;
  v4[536862742] = -202116109;
  if ( data::JsonFormatConfigBase::initDataMap(this, json_str) )
  {
    result = -1;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 96),
      "begin_time",
      (const std::allocator<char> *)(v2 + 32));
    v6 = data::JsonFormatConfigBase::getDateTime(this, (std::string *)(v2 + 96), &this->begin_time, 1) != 0;
    std::string::~string((void *)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v6 )
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
        4u,
        "./src/custom_data_type.cpp",
        "initFromJsonStr",
        165);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v7, &byte_1A172C00, "begin_time");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 224),
        "end_time",
        (const std::allocator<char> *)(v2 + 48));
      v8 = data::JsonFormatConfigBase::getDateTime(this, (std::string *)(v2 + 224), &this->end_time, 1) != 0;
      std::string::~string((void *)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
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
          4u,
          "./src/custom_data_type.cpp",
          "initFromJsonStr",
          166);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v9, &byte_1A172C00, "end_time");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 352),
          off_1A172C80,
          (const std::allocator<char> *)(v2 + 64));
        v10 = data::JsonFormatConfigBase::getString(this, (std::string *)(v2 + 352), &this->msg, 1) != 0;
        std::string::~string((void *)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v10 )
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
            4u,
            "./src/custom_data_type.cpp",
            "initFromJsonStr",
            167);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator()(v11, &byte_1A172C00, off_1A172C80);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          result = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 480),
            off_1A172CC0,
            (const std::allocator<char> *)(v2 + 80));
          v12 = data::JsonFormatConfigBase::getString(this, (std::string *)(v2 + 480), &this->url, 1) != 0;
          std::string::~string((void *)(v2 + 480));
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v12 )
          {
            *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/custom_data_type.cpp",
              "initFromJsonStr",
              168);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator()(v13, &byte_1A172C00, off_1A172CC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
            result = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->begin_time);
            }
            begin_time = this->begin_time;
            if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&this->end_time);
            }
            if ( begin_time <= this->end_time )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->begin_time);
              }
              if ( !this->begin_time )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->end_time);
                }
                if ( !this->end_time )
                  goto LABEL_44;
              }
              if ( (unsigned __int8)std::string::empty(&this->url) && (unsigned __int8)std::string::empty(&this->msg) )
              {
                *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 672, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 672),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/custom_data_type.cpp",
                  "initFromJsonStr",
                  180);
                v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 672),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator()(v18, &byte_1A172D60);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
                result = -1;
              }
              else
              {
LABEL_44:
                result = 0;
              }
            }
            else
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
                4u,
                "./src/custom_data_type.cpp",
                "initFromJsonStr",
                173);
              v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v16 = std::string::c_str(&this->ori_str);
              common::milog::MiLogStream::operator()(v15, &byte_1A172D00, v16);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
              result = -1;
            }
          }
        }
      }
    }
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 190: range 000000000CCBF920-000000000CCBFB0E
bool __cdecl data::StopServerConfig::isStop(data::StopServerConfig *const this, uint32_t cur_time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->begin_time);
  }
  if ( !this->begin_time )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_time);
  }
  if ( this->end_time )
    return cur_time <= this->begin_time && cur_time <= this->end_time;
LABEL_11:
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->begin_time);
  }
  if ( !this->begin_time )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_time);
  }
  if ( this->end_time )
  {
LABEL_18:
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->begin_time);
    }
    if ( this->begin_time )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->end_time);
    }
    return this->end_time && cur_time <= this->end_time;
  }
  else
  {
    return cur_time >= this->begin_time;
  }
};

// Line 212: range 000000000CCBFB10-000000000CCC056E
int32_t __cdecl data::StopRegisterConfig::initFromJsonStr(
        data::StopRegisterConfig *const this,
        const std::string *json_str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  uint32_t begin_time; // ecx
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  char v15[592]; // [rsp+20h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::StopRegisterConfig::initFromJsonStr;
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
  if ( data::JsonFormatConfigBase::initDataMap(this, json_str) )
  {
    result = -1;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 96),
      "begin_time",
      (const std::allocator<char> *)(v2 + 48));
    v6 = data::JsonFormatConfigBase::getDateTime(this, (std::string *)(v2 + 96), &this->begin_time, 1) != 0;
    std::string::~string((void *)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 )
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
        "./src/custom_data_type.cpp",
        "initFromJsonStr",
        219);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v7, &byte_1A172C00, "begin_time");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 224),
        "end_time",
        (const std::allocator<char> *)(v2 + 64));
      v8 = data::JsonFormatConfigBase::getDateTime(this, (std::string *)(v2 + 224), &this->end_time, 1) != 0;
      std::string::~string((void *)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
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
          4u,
          "./src/custom_data_type.cpp",
          "initFromJsonStr",
          220);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v9, &byte_1A172C00, "end_time");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 352),
          "max_player_num",
          (const std::allocator<char> *)(v2 + 80));
        v10 = data::JsonFormatConfigBase::getUint32(this, (std::string *)(v2 + 352), &this->max_player_num, 1) != 0;
        std::string::~string((void *)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v10 )
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
            "./src/custom_data_type.cpp",
            "initFromJsonStr",
            221);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator()(v11, &byte_1A172C00, "max_player_num");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          result = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->begin_time);
          }
          begin_time = this->begin_time;
          if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->end_time);
          }
          if ( begin_time <= this->end_time )
          {
            result = 0;
          }
          else
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
              4u,
              "./src/custom_data_type.cpp",
              "initFromJsonStr",
              226);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v14 = std::string::c_str(&this->ori_str);
            common::milog::MiLogStream::operator()(v13, &byte_1A172EA0, v14);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
            result = -1;
          }
        }
      }
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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

// Line 235: range 000000000CCC0570-000000000CCC07B5
bool __cdecl data::StopRegisterConfig::isStop(
        data::StopRegisterConfig *const this,
        uint32_t cur_time,
        uint32_t cur_player_num)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_player_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_player_num);
  }
  if ( this->max_player_num && cur_player_num >= this->max_player_num )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->begin_time);
  }
  if ( !this->begin_time )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_time);
  }
  if ( this->end_time )
    return cur_time <= this->begin_time && cur_time <= this->end_time;
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->begin_time);
  }
  if ( !this->begin_time )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_time);
  }
  if ( this->end_time )
  {
LABEL_23:
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->begin_time);
    }
    if ( this->begin_time )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->end_time);
    }
    return this->end_time && cur_time <= this->end_time;
  }
  else
  {
    return cur_time >= this->begin_time;
  }
};

// Line 263: range 000000000CCC07B6-000000000CCC0D94
int32_t __cdecl data::ForceUpdateConfig::initFromJsonStr(
        data::ForceUpdateConfig *const this,
        const std::string *json_str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  char v10[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ForceUpdateConfig::initFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( data::JsonFormatConfigBase::initDataMap(this, json_str) )
  {
    result = -1;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 64),
      off_1A172C80,
      (const std::allocator<char> *)(v2 + 32));
    v6 = data::JsonFormatConfigBase::getString(this, (std::string *)(v2 + 64), &this->msg, 1) != 0;
    std::string::~string((void *)(v2 + 64));
    *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v6 )
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/custom_data_type.cpp",
        "initFromJsonStr",
        270);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v7, &byte_1A172C00, off_1A172C80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 192),
        off_1A172CC0,
        (const std::allocator<char> *)(v2 + 48));
      v8 = data::JsonFormatConfigBase::getString(this, (std::string *)(v2 + 192), &this->url, 1) != 0;
      std::string::~string((void *)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
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
          4u,
          "./src/custom_data_type.cpp",
          "initFromJsonStr",
          271);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v9, &byte_1A172C00, off_1A172CC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 278: range 000000000CCC0D96-000000000CCC0DDD
bool __cdecl data::ForceUpdateConfig::isForceUpdate(data::ForceUpdateConfig *const this)
{
  return (unsigned __int8)std::string::empty(&this->msg) != 1 || (unsigned __int8)std::string::empty(&this->url) != 1;
};
