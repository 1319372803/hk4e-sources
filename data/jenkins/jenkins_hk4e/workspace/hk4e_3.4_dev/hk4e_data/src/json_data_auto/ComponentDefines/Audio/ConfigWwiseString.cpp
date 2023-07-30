// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp

// Line 20: range 0000000011E8E182-0000000011E8E4D7
bool __cdecl data::ConfigWwiseString::fromJson(data::ConfigWwiseString *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigWwiseString *v5; // rsi
  bool result; // al
  const Json::Value *text_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigWwiseString::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "text",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigWwiseString *)(v2 + 64);
  text_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( text_ptr && (v5 = this, !fromJson<std::string>(text_ptr, &this->text)) )
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
      3u,
      "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[26])"fromJson for: text fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 38: range 0000000011E8E4D8-0000000011E8E609
int32_t __cdecl data::ConfigWwiseString::getHashValue(const data::ConfigWwiseString *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:39";
  *(_QWORD *)(v2 + 16) = data::ConfigWwiseString::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->text, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 45: range 0000000011E8E60A-0000000011E8E9BE
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigWwiseStringArray *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigWwiseString *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  int v11; // [rsp+0h] [rbp-120h]
  char v12; // [rsp+8h] [rbp-118h]
  bool v13; // [rsp+Fh] [rbp-111h]
  uint32_t i; // [rsp+24h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 40 7 elem:51";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_BYTE *)(v6 + 4) = 0;
      data::ConfigWwiseString::ConfigWwiseString((data::ConfigWwiseString *const)(v2 + 112));
      if ( !data::ConfigWwiseString::fromJson((data::ConfigWwiseString *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
          "arrFromJson",
          54);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigWwiseString &>((data::ConfigWwiseString *)(v2 + 112));
        std::vector<data::ConfigWwiseString>::emplace_back<data::ConfigWwiseString>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigWwiseString::~ConfigWwiseString((data::ConfigWwiseString *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 64: range 0000000011E8E9BF-0000000011E8EC0B
int32_t __cdecl data::getArrHashValue(const data::ConfigWwiseStringArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigWwiseString*,std::vector<data::ConfigWwiseString> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 hash_code:65 64 8 14 __for_begin:66 96 8 12 __for_end:66";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
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
  *(std::vector<data::ConfigWwiseString>::const_iterator *)(v2 + 64) = std::vector<data::ConfigWwiseString>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigWwiseString>::const_iterator *)(v2 + 96) = std::vector<data::ConfigWwiseString>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigWwiseString const*,std::vector<data::ConfigWwiseString>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigWwiseString*,std::vector<data::ConfigWwiseString> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigWwiseString*,std::vector<data::ConfigWwiseString> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigWwiseString const*,std::vector<data::ConfigWwiseString>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigWwiseString*,std::vector<data::ConfigWwiseString> > *const)(v2 + 64));
    HashValue = data::ConfigWwiseString::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigWwiseString const*,std::vector<data::ConfigWwiseString>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigWwiseString*,std::vector<data::ConfigWwiseString> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v8 == (char *)v2 )
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

// Line 74: range 0000000011E8EC0C-0000000011E8F7FF
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigWwiseStringMap *m)
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
  data::ConfigWwiseString *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigWwiseString>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  bool result; // al
  char v23[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 16 6 cit:76 64 16 9 <unknown> 96 32 6 key:79 160 32 9 <unknown> 224 32 9 <unknown> 288 32 "
                        "9 <unknown> 352 32 9 <unknown> 416 40 11 tmp_jval:75 496 40 11 key_jval:78 576 40 13 value_jval:"
                        "85 656 40 8 value:86";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959360;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 416), jval);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 416));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 416));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 32),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 55) & 7) >= *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 496, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 496));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 96);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 496), (std::string *)(v3 + 96)) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
        "mapFromJson",
        82);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 224), (Json::Value_0 *)(v3 + 496));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 224));
      std::string::~string((void *)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 576) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 32));
      Json::Value::Value((Json::Value *)(v3 + 576), v11);
      v12 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 0;
      data::ConfigWwiseString::ConfigWwiseString((data::ConfigWwiseString *const)(v3 + 656));
      if ( !data::ConfigWwiseString::fromJson(
              (data::ConfigWwiseString *const)(v3 + 656),
              (const Json::Value *)(v3 + 576)) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
          "mapFromJson",
          89);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,data::ConfigWwiseString>::emplace<std::string&,data::ConfigWwiseString&>(
                m,
                (std::string *)(v3 + 96),
                (data::ConfigWwiseString *)(v3 + 656),
                (std::string *)(v3 + 96),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 352, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 352),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
            "mapFromJson",
            94);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      data::ConfigWwiseString::~ConfigWwiseString((data::ConfigWwiseString *const)(v3 + 656));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 96));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
    v18 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 32));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 416));
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
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
  return result;
};

// Line 103: range 0000000011E8F800-0000000011E8FAA7
int32_t __cdecl data::getMapHashValue(const data::ConfigWwiseStringMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigWwiseString>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigWwiseString> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigWwiseString> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:104 64 8 15 __for_begin:105 96 8 13 __for_end:105";
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
  *(std::unordered_map<std::string,data::ConfigWwiseString>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigWwiseString>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigWwiseString>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigWwiseString>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigWwiseString>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigWwiseString>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigWwiseString>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigWwiseString>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigWwiseString>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigWwiseString>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigWwiseString> >::type *)std::get<1ul,std::string const,data::ConfigWwiseString>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigWwiseString::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigWwiseString>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigWwiseString>,false,true> *const)(v2 + 64));
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

// Line 116: range 0000000011E8FAA8-0000000011E9086E
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigWwiseIntegerMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  const Json::Value *v12; // rax
  unsigned __int64 v13; // rax
  data::ConfigWwiseString *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,data::ConfigWwiseString>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  bool result; // al
  char v24[880]; // [rsp+20h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 7 key:121 64 16 7 cit:118 96 16 9 <unknown> 128 32 11 key_str:122 192 32 9 <unknown> 256"
                        " 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 40 12 tmp_jval:117 "
                        "592 40 12 key_jval:120 672 40 14 value_jval:133 752 40 9 value:134";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218959360;
  v5[536862743] = 62194;
  v5[536862744] = -218103808;
  v5[536862745] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 512), jval);
  if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 512));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 512));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 64),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 96));
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 592, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 592));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 128);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 592), (std::string *)(v3 + 128)) )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
        "mapFromJson",
        125);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 256), (Json::Value_0 *)(v3 + 592));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 256));
      std::string::~string((void *)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 128), (int *)(v3 + 48), 1) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
        "mapFromJson",
        130);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 672) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 64));
      Json::Value::Value((Json::Value *)(v3 + 672), v12);
      v13 = ((v3 + 752) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_BYTE *)(v13 + 4) = 0;
      data::ConfigWwiseString::ConfigWwiseString((data::ConfigWwiseString *const)(v3 + 752));
      if ( !data::ConfigWwiseString::fromJson(
              (data::ConfigWwiseString *const)(v3 + 752),
              (const Json::Value *)(v3 + 672)) )
      {
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
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
          "mapFromJson",
          137);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<int,data::ConfigWwiseString>::emplace<int &,data::ConfigWwiseString&>(
                m,
                (int *)(v3 + 48),
                (data::ConfigWwiseString *)(v3 + 752),
                (int *)(v3 + 48),
                v14);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.cpp",
            "mapFromJson",
            142);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      data::ConfigWwiseString::~ConfigWwiseString((data::ConfigWwiseString *const)(v3 + 752));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 672));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 128));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
    v19 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    v21 = ((v3 + 752) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 64));
  }
  v22 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
  result = v2;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8064) = 0;
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
  return result;
};

// Line 151: range 0000000011E9086F-0000000011E90B3F
int32_t __cdecl data::getMapHashValue(const data::ConfigWwiseIntegerMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigWwiseString>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<int const,data::ConfigWwiseString> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:152 64 8 15 __for_begin:153 96 8 13 __for_end:153";
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
  *(std::unordered_map<int,data::ConfigWwiseString>::const_iterator *)(v2 + 64) = std::unordered_map<int,data::ConfigWwiseString>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,data::ConfigWwiseString>::const_iterator *)(v2 + 96) = std::unordered_map<int,data::ConfigWwiseString>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,data::ConfigWwiseString>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::ConfigWwiseString>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::ConfigWwiseString>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigWwiseString>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigWwiseString>,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,data::ConfigWwiseString>(v7);
    val = (std::tuple_element<1,const std::pair<int const,data::ConfigWwiseString> >::type *)std::get<1ul,int const,data::ConfigWwiseString>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigWwiseString::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigWwiseString>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigWwiseString>,false,false> *const)(v2 + 64));
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
