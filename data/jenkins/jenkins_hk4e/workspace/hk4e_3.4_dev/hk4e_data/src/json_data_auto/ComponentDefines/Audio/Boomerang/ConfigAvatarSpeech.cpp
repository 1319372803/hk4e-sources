// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp

// Line 20: range 0000000013B942AE-0000000013B94891
bool __cdecl data::AvatarSpeechEquipObtain::fromJson(
        data::AvatarSpeechEquipObtain *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  const Json::Value *v6; // rsi
  const Json::Value *quality_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *event_name_ptr; // [rsp+18h] [rbp-168h]
  char v10[352]; // [rsp+20h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarSpeechEquipObtain::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "quality",
    (const std::allocator<char> *)(v2 + 32));
  quality_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( quality_ptr && !fromJson<int>(quality_ptr, &this->quality) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[29])"fromJson for: quality fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "eventName",
      (const std::allocator<char> *)(v2 + 48));
    v6 = (const Json::Value *)(v2 + 192);
    event_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( event_name_ptr && (v6 = event_name_ptr, !data::ConfigWwiseString::fromJson(&this->event_name, event_name_ptr)) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: eventName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
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

// Line 50: range 0000000013B94892-0000000013B94A14
int32_t __cdecl data::AvatarSpeechEquipObtain::getHashValue(const data::AvatarSpeechEquipObtain *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:51";
  *(_QWORD *)(v2 + 16) = data::AvatarSpeechEquipObtain::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->quality, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->event_name);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 58: range 0000000013B94A15-0000000013B94DB5
bool __cdecl data::arrFromJson(const Json::Value *jval, data::AvatarSpeechEquipObtainArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::AvatarSpeechEquipObtain *v8; // rdx
  unsigned __int64 v9; // rax
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
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 56 7 elem:64";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
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
      v6 = ((v2 + 96) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 6) = 0;
      data::AvatarSpeechEquipObtain::AvatarSpeechEquipObtain((data::AvatarSpeechEquipObtain *const)(v2 + 96));
      if ( !data::AvatarSpeechEquipObtain::fromJson((data::AvatarSpeechEquipObtain *const)(v2 + 96), elem_jval) )
      {
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
          "arrFromJson",
          67);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 32),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::AvatarSpeechEquipObtain &>((data::AvatarSpeechEquipObtain *)(v2 + 96));
        std::vector<data::AvatarSpeechEquipObtain>::emplace_back<data::AvatarSpeechEquipObtain>(v, v8, v8);
        v7 = 1;
      }
      data::AvatarSpeechEquipObtain::~AvatarSpeechEquipObtain((data::AvatarSpeechEquipObtain *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    *(_BYTE *)(v9 + 6) = -8;
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

// Line 77: range 0000000013B94DB6-0000000013B95002
int32_t __cdecl data::getArrHashValue(const data::AvatarSpeechEquipObtainArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::AvatarSpeechEquipObtain*,std::vector<data::AvatarSpeechEquipObtain> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 hash_code:78 64 8 14 __for_begin:79 96 8 12 __for_end:79";
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
  *(std::vector<data::AvatarSpeechEquipObtain>::const_iterator *)(v2 + 64) = std::vector<data::AvatarSpeechEquipObtain>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::AvatarSpeechEquipObtain>::const_iterator *)(v2 + 96) = std::vector<data::AvatarSpeechEquipObtain>::end(vec);
  while ( __gnu_cxx::operator!=<data::AvatarSpeechEquipObtain const*,std::vector<data::AvatarSpeechEquipObtain>>(
            (const __gnu_cxx::__normal_iterator<const data::AvatarSpeechEquipObtain*,std::vector<data::AvatarSpeechEquipObtain> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::AvatarSpeechEquipObtain*,std::vector<data::AvatarSpeechEquipObtain> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::AvatarSpeechEquipObtain const*,std::vector<data::AvatarSpeechEquipObtain>>::operator*((const __gnu_cxx::__normal_iterator<const data::AvatarSpeechEquipObtain*,std::vector<data::AvatarSpeechEquipObtain> > *const)(v2 + 64));
    HashValue = data::AvatarSpeechEquipObtain::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::AvatarSpeechEquipObtain const*,std::vector<data::AvatarSpeechEquipObtain>>::operator++((__gnu_cxx::__normal_iterator<const data::AvatarSpeechEquipObtain*,std::vector<data::AvatarSpeechEquipObtain> > *const)(v2 + 64));
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

// Line 87: range 0000000013B95003-0000000013B9529E
const char *__cdecl data::enumValToStr(data::VoicePersonality e)
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
  if ( e == Card_0 )
  {
    result = "Card";
  }
  else
  {
    if ( e <= Card_0 )
    {
      switch ( e )
      {
        case Npc_0:
          result = off_1AC9DC40;
          goto LABEL_19;
        case First_0:
          result = "First";
          goto LABEL_19;
        case Third:
          result = "Third";
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
      "enumValToStr",
      99);
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

// Line 105: range 0000000013B9529F-0000000013B95C23
bool __cdecl data::enumStrToVal(const std::string *s, data::VoicePersonality *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::VoicePersonality> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePersonality> >::pointer v11; // rax
  data::VoicePersonality second; // ecx
  char v13; // dl
  data::VoicePersonality *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 6 it:118 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
      "enumStrToVal",
      108);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::VoicePersonality &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::VoicePersonality &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::VoicePersonality>::pair<char const(&)[6],data::VoicePersonality,true>(
        (std::pair<const std::string,data::VoicePersonality> *const)(v2 + 320),
        (const char (*)[6])"First",
        (data::VoicePersonality *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "First");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::VoicePersonality>::pair<char const(&)[6],data::VoicePersonality,true>(
        (std::pair<const std::string,data::VoicePersonality> *const)(v2 + 360),
        (const char (*)[6])"Third",
        (data::VoicePersonality *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Third");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::VoicePersonality>::pair<char const(&)[4],data::VoicePersonality,true>(
        (std::pair<const std::string,data::VoicePersonality> *const)(v2 + 400),
        (const char (*)[4])off_1AC9DC40,
        (data::VoicePersonality *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, off_1AC9DC40);
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::VoicePersonality>::pair<char const(&)[5],data::VoicePersonality,true>(
        (std::pair<const std::string,data::VoicePersonality> *const)(v2 + 440),
        (const char (*)[5])"Card",
        (data::VoicePersonality *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::VoicePersonality>>::allocator((std::allocator<std::pair<const std::string,data::VoicePersonality> > *const)(v2 + 48));
      std::map<std::string,data::VoicePersonality>::map(
        &data::enumStrToVal(std::string const&,data::VoicePersonality &)::m,
        (std::initializer_list<std::pair<const std::string,data::VoicePersonality> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::VoicePersonality>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::VoicePersonality &)::m);
      e = (data::VoicePersonality *)&data::enumStrToVal(std::string const&,data::VoicePersonality &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::VoicePersonality>::~map,
        &data::enumStrToVal(std::string const&,data::VoicePersonality &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::VoicePersonality>>::~allocator((std::allocator<std::pair<const std::string,data::VoicePersonality> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::VoicePersonality> *)(v2 + 480);
            i != (std::pair<const std::string,data::VoicePersonality> *)(v2 + 320);
            std::pair<std::string const,data::VoicePersonality>::~pair(i) )
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
    *(std::map<std::string,data::VoicePersonality>::iterator *)(v2 + 128) = std::map<std::string,data::VoicePersonality>::find(
                                                                              &data::enumStrToVal(std::string const&,data::VoicePersonality &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::VoicePersonality>::iterator *)(v2 + 160) = std::map<std::string,data::VoicePersonality>::end(&data::enumStrToVal(std::string const&,data::VoicePersonality &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePersonality> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePersonality> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "enumStrToVal",
        121);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::VoicePersonality>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePersonality> > *const)(v2 + 128));
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

// Line 129: range 0000000013B95C24-0000000013B95C7D
const char *__cdecl data::getDescription(data::VoicePersonality e)
{
  if ( e == Card_0 )
    return byte_1ABBC960;
  if ( e <= Card_0 )
  {
    switch ( e )
    {
      case Npc_0:
        return byte_1ABBC960;
      case First_0:
        return byte_1ABBC960;
      case Third:
        return byte_1ABBC960;
    }
  }
  return "unknown enum value!";
};

// Line 146: range 0000000013B95C7E-0000000013B95F1C
const char *__cdecl data::enumValToStr(data::VoicePositioning e)
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
  switch ( e )
  {
    case TwoDimensional:
      result = "TwoDimensional";
      break;
    case ThreeDimensional:
      result = "ThreeDimensional";
      break;
    case TutorialSpecial:
      result = "TutorialSpecial";
      break;
    case ThreeDimensionalPassby:
      result = "ThreeDimensionalPassby";
      break;
    case InnerMonologue:
      result = "InnerMonologue";
      break;
    default:
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "enumValToStr",
        160);
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
      break;
  }
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

// Line 166: range 0000000013B95F1D-0000000013B96987
bool __cdecl data::enumStrToVal(const std::string *s, data::VoicePositioning *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::VoicePositioning> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePositioning> >::pointer v11; // rax
  data::VoicePositioning second; // ecx
  char v13; // dl
  data::VoicePositioning *ea; // [rsp+10h] [rbp-2A0h]
  char v15[656]; // [rsp+20h] [rbp-290h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:180 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
                        "n> 336 200 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
      "enumStrToVal",
      169);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::VoicePositioning &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::VoicePositioning &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::VoicePositioning>::pair<char const(&)[15],data::VoicePositioning,true>(
        (std::pair<const std::string,data::VoicePositioning> *const)(v2 + 336),
        (const char (*)[15])"TwoDimensional",
        (data::VoicePositioning *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "TwoDimensional");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::VoicePositioning>::pair<char const(&)[17],data::VoicePositioning,true>(
        (std::pair<const std::string,data::VoicePositioning> *const)(v2 + 376),
        (const char (*)[17])"ThreeDimensional",
        (data::VoicePositioning *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ThreeDimensional");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::VoicePositioning>::pair<char const(&)[16],data::VoicePositioning,true>(
        (std::pair<const std::string,data::VoicePositioning> *const)(v2 + 416),
        (const char (*)[16])"TutorialSpecial",
        (data::VoicePositioning *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TutorialSpecial");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::VoicePositioning>::pair<char const(&)[23],data::VoicePositioning,true>(
        (std::pair<const std::string,data::VoicePositioning> *const)(v2 + 456),
        (const char (*)[23])"ThreeDimensionalPassby",
        (data::VoicePositioning *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "ThreeDimensionalPassby");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::VoicePositioning>::pair<char const(&)[15],data::VoicePositioning,true>(
        (std::pair<const std::string,data::VoicePositioning> *const)(v2 + 496),
        (const char (*)[15])"InnerMonologue",
        (data::VoicePositioning *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::VoicePositioning>>::allocator((std::allocator<std::pair<const std::string,data::VoicePositioning> > *const)(v2 + 48));
      std::map<std::string,data::VoicePositioning>::map(
        &data::enumStrToVal(std::string const&,data::VoicePositioning &)::m,
        (std::initializer_list<std::pair<const std::string,data::VoicePositioning> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::VoicePositioning>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::VoicePositioning &)::m);
      e = (data::VoicePositioning *)&data::enumStrToVal(std::string const&,data::VoicePositioning &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::VoicePositioning>::~map,
        &data::enumStrToVal(std::string const&,data::VoicePositioning &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::VoicePositioning>>::~allocator((std::allocator<std::pair<const std::string,data::VoicePositioning> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::VoicePositioning> *)(v2 + 536);
            i != (std::pair<const std::string,data::VoicePositioning> *)(v2 + 336);
            std::pair<std::string const,data::VoicePositioning>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 336) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_BYTE *)(v7 + 24) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, e);
    *(std::map<std::string,data::VoicePositioning>::iterator *)(v2 + 144) = std::map<std::string,data::VoicePositioning>::find(
                                                                              &data::enumStrToVal(std::string const&,data::VoicePositioning &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::VoicePositioning>::iterator *)(v2 + 176) = std::map<std::string,data::VoicePositioning>::end(&data::enumStrToVal(std::string const&,data::VoicePositioning &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePositioning> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePositioning> >::_Self *)(v2 + 176));
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "enumStrToVal",
        183);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::VoicePositioning>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::VoicePositioning> > *const)(v2 + 144));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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

// Line 191: range 0000000013B96988-0000000013B969ED
const char *__cdecl data::getDescription(data::VoicePositioning e)
{
  const char *result; // rax

  switch ( e )
  {
    case TwoDimensional:
      result = byte_1ABBC960;
      break;
    case ThreeDimensional:
      result = byte_1ABBC960;
      break;
    case TutorialSpecial:
      result = byte_1ABBC960;
      break;
    case ThreeDimensionalPassby:
      result = byte_1ABBC960;
      break;
    case InnerMonologue:
      result = byte_1ABBC960;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 211: range 0000000013B969EE-0000000013B97486
bool __cdecl data::VoiceSound::fromJson(data::VoiceSound *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  bool v7; // r14
  const Json::Value *v8; // rsi
  Json::Value *personality_ptr; // [rsp+18h] [rbp-2A8h]
  Json::Value *positioning_ptr; // [rsp+20h] [rbp-2A0h]
  const Json::Value *sound_name_ptr; // [rsp+28h] [rbp-298h]
  char v13[656]; // [rsp+30h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::VoiceSound::fromJson;
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
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "personality",
    (const std::allocator<char> *)(v2 + 48));
  personality_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !personality_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 160), (Json::Value_0 *)personality_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 160), &this->personality);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
      "fromJson",
      221);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[33])"fromJson for: personality fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "positioning",
      (const std::allocator<char> *)(v2 + 64));
    positioning_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !positioning_ptr )
      goto LABEL_18;
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 352, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 352), (Json::Value_0 *)positioning_ptr);
    v7 = !data::enumStrToVal((const std::string *)(v2 + 352), &this->positioning);
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "fromJson",
        233);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[33])"fromJson for: positioning fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      result = 0;
    }
    else
    {
LABEL_18:
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "soundName",
        (const std::allocator<char> *)(v2 + 80));
      v8 = (const Json::Value *)(v2 + 480);
      sound_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( sound_name_ptr
        && (v8 = sound_name_ptr, !data::ConfigWwiseString::fromJson(&this->sound_name, sound_name_ptr)) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
          "fromJson",
          245);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[31])"fromJson for: soundName fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, v8, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 253: range 0000000013B97488-0000000013B9765B
int32_t __cdecl data::VoiceSound::getHashValue(const data::VoiceSound *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:254";
  *(_QWORD *)(v2 + 16) = data::VoiceSound::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->personality, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->positioning);
  }
  common::tools::HashUtils::appendHash(this->positioning, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->sound_name);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 262: range 0000000013B9765C-0000000013B979FC
bool __cdecl data::arrFromJson(const Json::Value *jval, data::VoiceSoundArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::VoiceSound *v8; // rdx
  unsigned __int64 v9; // rax
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
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 56 8 elem:268";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
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
      v6 = ((v2 + 96) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 6) = 0;
      data::VoiceSound::VoiceSound((data::VoiceSound *const)(v2 + 96));
      if ( !data::VoiceSound::fromJson((data::VoiceSound *const)(v2 + 96), elem_jval) )
      {
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
          "arrFromJson",
          271);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 32),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::VoiceSound &>((data::VoiceSound *)(v2 + 96));
        std::vector<data::VoiceSound>::emplace_back<data::VoiceSound>(v, v8, v8);
        v7 = 1;
      }
      data::VoiceSound::~VoiceSound((data::VoiceSound *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    *(_BYTE *)(v9 + 6) = -8;
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

// Line 281: range 0000000013B979FD-0000000013B97C49
int32_t __cdecl data::getArrHashValue(const data::VoiceSoundArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::VoiceSound*,std::vector<data::VoiceSound> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:282 64 8 15 __for_begin:283 96 8 13 __for_end:283";
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
  *(std::vector<data::VoiceSound>::const_iterator *)(v2 + 64) = std::vector<data::VoiceSound>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::VoiceSound>::const_iterator *)(v2 + 96) = std::vector<data::VoiceSound>::end(vec);
  while ( __gnu_cxx::operator!=<data::VoiceSound const*,std::vector<data::VoiceSound>>(
            (const __gnu_cxx::__normal_iterator<const data::VoiceSound*,std::vector<data::VoiceSound> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::VoiceSound*,std::vector<data::VoiceSound> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::VoiceSound const*,std::vector<data::VoiceSound>>::operator*((const __gnu_cxx::__normal_iterator<const data::VoiceSound*,std::vector<data::VoiceSound> > *const)(v2 + 64));
    HashValue = data::VoiceSound::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::VoiceSound const*,std::vector<data::VoiceSound>>::operator++((__gnu_cxx::__normal_iterator<const data::VoiceSound*,std::vector<data::VoiceSound> > *const)(v2 + 64));
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

// Line 291: range 0000000013B97C4A-0000000013B98A5D
bool __cdecl data::mapFromJson(const Json::Value *jval, data::VoiceTriggerMap *m)
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
  const Json::Value *v12; // rsi
  __int64 v13; // rsi
  data::VoiceTriggerIdentity *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v24[816]; // [rsp+20h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 7 key:296 48 12 9 value:309 80 16 7 cit:293 112 16 9 <unknown> 144 32 11 key_str:297 208"
                        " 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 "
                        "40 12 tmp_jval:292 608 40 12 key_jval:295 688 40 14 value_jval:308";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
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
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 528), jval);
  if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 528));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 528));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 80),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 112));
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 647) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 121) & 7) >= *(_BYTE *)(((v3 + 647) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 608, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 608));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 144);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 608), (std::string *)(v3 + 144)) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "mapFromJson",
        300);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 272), (Json::Value_0 *)(v3 + 608));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 272));
      std::string::~string((void *)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<unsigned int>(
                (const std::string *)(v3 + 144),
                (unsigned int *)(v3 + 32),
                1) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "mapFromJson",
        305);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 336),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 688) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 80));
      Json::Value::Value((Json::Value *)(v3 + 688), v12);
      *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v12);
      *(_DWORD *)(v3 + 48) = 0;
      v13 = (((_BYTE)v3 + 52) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 52) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 52) & 7) + 3) >= *(_BYTE *)(((v3 + 52) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 52, v13);
      }
      *(_DWORD *)(v3 + 52) = 0;
      if ( *(char *)(((v3 + 56) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 56, v13, v3 + 56);
      *(_BYTE *)(v3 + 56) = 0;
      if ( !data::VoiceTriggerIdentity::fromJson(
              (data::VoiceTriggerIdentity *const)(v3 + 48),
              (const Json::Value *)(v3 + 688)) )
      {
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
          "mapFromJson",
          312);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 400),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<unsigned int,data::VoiceTriggerIdentity>::emplace<unsigned int &,data::VoiceTriggerIdentity&>(
                m,
                (unsigned int *)(v3 + 32),
                (data::VoiceTriggerIdentity *)(v3 + 48),
                (unsigned int *)(v3 + 32),
                v14);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 464),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
            "mapFromJson",
            317);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 464),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 688));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 608));
    v19 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_42;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 80));
  }
  v21 = 1;
LABEL_42:
  *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 528));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 326: range 0000000013B98A5E-0000000013B98D2E
int32_t __cdecl data::getMapHashValue(const data::VoiceTriggerMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  uint32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VoiceTriggerIdentity> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:327 64 8 15 __for_begin:328 96 8 13 __for_end:328";
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
  *(std::unordered_map<unsigned int,data::VoiceTriggerIdentity>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::VoiceTriggerIdentity>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<unsigned int,data::VoiceTriggerIdentity>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::VoiceTriggerIdentity>::end(map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false,false> *const)(v2 + 64));
    key = std::get<0ul,unsigned int const,data::VoiceTriggerIdentity>(v7);
    val = (std::tuple_element<1,const std::pair<unsigned int const,data::VoiceTriggerIdentity> >::type *)std::get<1ul,unsigned int const,data::VoiceTriggerIdentity>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::VoiceTriggerIdentity::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VoiceTriggerIdentity>,false,false> *const)(v2 + 64));
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

// Line 340: range 0000000013B98D30-0000000013B9D434
bool __cdecl data::ConfigAvatarSpeech::fromJson(data::ConfigAvatarSpeech *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::StringList *p_voice_black_list; // rsi
  bool v7; // bl
  const Json::Value *suitable_equip_obtain_ptr; // [rsp+10h] [rbp-10E0h]
  const Json::Value *unsuitable_equip_obtain_ptr; // [rsp+18h] [rbp-10D8h]
  const Json::Value *event_common_prefix_ptr; // [rsp+20h] [rbp-10D0h]
  const Json::Value *external_voice_event_ptr; // [rsp+28h] [rbp-10C8h]
  const Json::Value *person_switch_key_ptr; // [rsp+30h] [rbp-10C0h]
  const Json::Value *positioning_switch_key_ptr; // [rsp+38h] [rbp-10B8h]
  const Json::Value *initial_delay_rtpc_ptr; // [rsp+40h] [rbp-10B0h]
  const Json::Value *person_switch_value_map_ptr; // [rsp+48h] [rbp-10A8h]
  const Json::Value *positioning_switch_value_map_ptr; // [rsp+50h] [rbp-10A0h]
  const Json::Value *external_sound_names_ptr; // [rsp+58h] [rbp-1098h]
  const Json::Value *default_narration_interval_ptr; // [rsp+60h] [rbp-1090h]
  const Json::Value *default_narration_duration_ptr; // [rsp+68h] [rbp-1088h]
  const Json::Value *default_narration_max_duration_ptr; // [rsp+70h] [rbp-1080h]
  const Json::Value *gacha_voice_trigger_param_ptr; // [rsp+78h] [rbp-1078h]
  const Json::Value *join_team_voice_trigger_param_ptr; // [rsp+80h] [rbp-1070h]
  const Json::Value *fetter_voice_trigger_map_ptr; // [rsp+88h] [rbp-1068h]
  const Json::Value *teammate_low_hpvo_hp_ratio_ptr; // [rsp+90h] [rbp-1060h]
  const Json::Value *teammate_low_hpvo_cooldown_ptr; // [rsp+98h] [rbp-1058h]
  const Json::Value *teammate_low_hpvo_vo_trigger_ptr; // [rsp+A0h] [rbp-1050h]
  const Json::Value *teammate_low_hpvo_distance_ptr; // [rsp+A8h] [rbp-1048h]
  const Json::Value *teammate_low_hpvo_hp_desc_ratio_ptr; // [rsp+B0h] [rbp-1040h]
  const Json::Value *teammate_low_hpvo_distance_map_ptr; // [rsp+B8h] [rbp-1038h]
  const Json::Value *local_player_low_hpvo_hp_ratio_ptr; // [rsp+C0h] [rbp-1030h]
  const Json::Value *local_player_low_hpvo_cooldown_ptr; // [rsp+C8h] [rbp-1028h]
  const Json::Value *local_player_low_hpvo_vo_trigger_ptr; // [rsp+D0h] [rbp-1020h]
  const Json::Value *promotion_voice_trigger_map_ptr; // [rsp+D8h] [rbp-1018h]
  const Json::Value *open_chest_vo_trigger_ptr; // [rsp+E0h] [rbp-1010h]
  const Json::Value *voice_black_list_ptr; // [rsp+E8h] [rbp-1008h]
  char v38[4096]; // [rsp+F0h] [rbp-1000h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(4064LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "84 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkno"
                        "wn> 464 1 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown"
                        "> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>"
                        " 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unkn"
                        "own> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <"
                        "unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32"
                        " 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 227"
                        "2 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown>"
                        " 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unkn"
                        "own> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <"
                        "unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32"
                        " 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 380"
                        "8 32 9 <unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarSpeech::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234753535;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -218959118;
  v4[536862778] = -218959118;
  v4[536862780] = -218959118;
  v4[536862782] = -218959118;
  v4[536862784] = -218959118;
  v4[536862786] = -218959118;
  v4[536862788] = -218959118;
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -218959118;
  v4[536862826] = -218959118;
  v4[536862828] = -218959118;
  v4[536862830] = -218959118;
  v4[536862832] = -218959118;
  v4[536862834] = -218959118;
  v4[536862836] = -218959118;
  v4[536862838] = -218959118;
  v4[536862840] = -218959118;
  v4[536862842] = -218959118;
  v4[536862844] = -218959118;
  v4[536862846] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 480),
    "suitableEquipObtain",
    (const std::allocator<char> *)(v2 + 32));
  suitable_equip_obtain_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( suitable_equip_obtain_ptr && !data::arrFromJson(suitable_equip_obtain_ptr, &this->suitable_equip_obtain) )
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
      3u,
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
      "fromJson",
      350);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v2 + 544),
      (const char (*)[41])"fromJson for: suitableEquipObtain fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 608),
      "unsuitableEquipObtain",
      (const std::allocator<char> *)(v2 + 48));
    unsuitable_equip_obtain_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
    std::string::~string((void *)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( unsuitable_equip_obtain_ptr && !data::arrFromJson(unsuitable_equip_obtain_ptr, &this->unsuitable_equip_obtain) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
        "fromJson",
        362);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 672),
        (const char (*)[43])"fromJson for: unsuitableEquipObtain fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 736),
        "eventCommonPrefix",
        (const std::allocator<char> *)(v2 + 64));
      event_common_prefix_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
      std::string::~string((void *)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( event_common_prefix_ptr && !fromJson<std::string>(event_common_prefix_ptr, &this->event_common_prefix) )
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
          "fromJson",
          374);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 800),
          (const char (*)[39])"fromJson for: eventCommonPrefix fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          "externalVoiceEvent",
          (const std::allocator<char> *)(v2 + 80));
        external_voice_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
        std::string::~string((void *)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( external_voice_event_ptr
          && !data::ConfigWwiseString::fromJson(&this->external_voice_event, external_voice_event_ptr) )
        {
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 928, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 928),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
            "fromJson",
            386);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v2 + 928),
            (const char (*)[40])"fromJson for: externalVoiceEvent fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 992),
            "personSwitchKey",
            (const std::allocator<char> *)(v2 + 96));
          person_switch_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
          std::string::~string((void *)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( person_switch_key_ptr
            && !data::ConfigWwiseString::fromJson(&this->person_switch_key, person_switch_key_ptr) )
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1056, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1056),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
              "fromJson",
              398);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 1056),
              (const char (*)[37])"fromJson for: personSwitchKey fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1120),
              "positioningSwitchKey",
              (const std::allocator<char> *)(v2 + 112));
            positioning_switch_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
            std::string::~string((void *)(v2 + 1120));
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( positioning_switch_key_ptr
              && !data::ConfigWwiseString::fromJson(&this->positioning_switch_key, positioning_switch_key_ptr) )
            {
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1184, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1184),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                "fromJson",
                410);
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)(v2 + 1184),
                (const char (*)[42])"fromJson for: positioningSwitchKey fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1248),
                "initialDelayRTPC",
                (const std::allocator<char> *)(v2 + 128));
              initial_delay_rtpc_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
              std::string::~string((void *)(v2 + 1248));
              *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( initial_delay_rtpc_ptr
                && !data::ConfigWwiseString::fromJson(&this->initial_delay_rtpc, initial_delay_rtpc_ptr) )
              {
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1312, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1312),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                  "fromJson",
                  422);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 1312),
                  (const char (*)[38])"fromJson for: initialDelayRTPC fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1376),
                  "personSwitchValueMap",
                  (const std::allocator<char> *)(v2 + 144));
                person_switch_value_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                std::string::~string((void *)(v2 + 1376));
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( person_switch_value_map_ptr
                  && !data::mapFromJson(person_switch_value_map_ptr, &this->person_switch_value_map) )
                {
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1440, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1440),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                    "fromJson",
                    434);
                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)(v2 + 1440),
                    (const char (*)[42])"fromJson for: personSwitchValueMap fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1504),
                    "positioningSwitchValueMap",
                    (const std::allocator<char> *)(v2 + 160));
                  positioning_switch_value_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                  std::string::~string((void *)(v2 + 1504));
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( positioning_switch_value_map_ptr
                    && !data::mapFromJson(positioning_switch_value_map_ptr, &this->positioning_switch_value_map) )
                  {
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1568, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1568),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                      "fromJson",
                      446);
                    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      (common::milog::MiLogStream *const)(v2 + 1568),
                      (const char (*)[47])"fromJson for: positioningSwitchValueMap fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1632),
                      "externalSoundNames",
                      (const std::allocator<char> *)(v2 + 176));
                    external_sound_names_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                    std::string::~string((void *)(v2 + 1632));
                    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( external_sound_names_ptr
                      && !data::arrFromJson(external_sound_names_ptr, &this->external_sound_names) )
                    {
                      *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1696, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1696),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                        "fromJson",
                        458);
                      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        (common::milog::MiLogStream *const)(v2 + 1696),
                        (const char (*)[40])"fromJson for: externalSoundNames fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1760),
                        "defaultNarrationInterval",
                        (const std::allocator<char> *)(v2 + 192));
                      default_narration_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1760));
                      std::string::~string((void *)(v2 + 1760));
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( default_narration_interval_ptr
                        && !fromJson<float>(default_narration_interval_ptr, &this->default_narration_interval) )
                      {
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1824, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1824),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                          "fromJson",
                          470);
                        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                          (common::milog::MiLogStream *const)(v2 + 1824),
                          (const char (*)[46])"fromJson for: defaultNarrationInterval fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1888),
                          "defaultNarrationDuration",
                          (const std::allocator<char> *)(v2 + 208));
                        default_narration_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1888));
                        std::string::~string((void *)(v2 + 1888));
                        *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( default_narration_duration_ptr
                          && !fromJson<float>(default_narration_duration_ptr, &this->default_narration_duration) )
                        {
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1952, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1952),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                            "fromJson",
                            482);
                          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            (common::milog::MiLogStream *const)(v2 + 1952),
                            (const char (*)[46])"fromJson for: defaultNarrationDuration fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2016),
                            "defaultNarrationMaxDuration",
                            (const std::allocator<char> *)(v2 + 224));
                          default_narration_max_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2016));
                          std::string::~string((void *)(v2 + 2016));
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( default_narration_max_duration_ptr
                            && !fromJson<float>(
                                  default_narration_max_duration_ptr,
                                  &this->default_narration_max_duration) )
                          {
                            *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2080, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2080),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                              "fromJson",
                              494);
                            common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                              (common::milog::MiLogStream *const)(v2 + 2080),
                              (const char (*)[49])"fromJson for: defaultNarrationMaxDuration fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2144),
                              "gachaVoiceTriggerParam",
                              (const std::allocator<char> *)(v2 + 240));
                            gacha_voice_trigger_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2144));
                            std::string::~string((void *)(v2 + 2144));
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( gacha_voice_trigger_param_ptr
                              && !fromJson<unsigned int>(
                                    gacha_voice_trigger_param_ptr,
                                    &this->gacha_voice_trigger_param) )
                            {
                              *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2208, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2208),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                "fromJson",
                                506);
                              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                (common::milog::MiLogStream *const)(v2 + 2208),
                                (const char (*)[44])"fromJson for: gachaVoiceTriggerParam fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2272),
                                "joinTeamVoiceTriggerParam",
                                (const std::allocator<char> *)(v2 + 256));
                              join_team_voice_trigger_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2272));
                              std::string::~string((void *)(v2 + 2272));
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( join_team_voice_trigger_param_ptr
                                && !fromJson<unsigned int>(
                                      join_team_voice_trigger_param_ptr,
                                      &this->join_team_voice_trigger_param) )
                              {
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2336, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2336),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                  "fromJson",
                                  518);
                                common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2336),
                                  (const char (*)[47])"fromJson for: joinTeamVoiceTriggerParam fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2400),
                                  "fetterVoiceTriggerMap",
                                  (const std::allocator<char> *)(v2 + 272));
                                fetter_voice_trigger_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2400));
                                std::string::~string((void *)(v2 + 2400));
                                *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( fetter_voice_trigger_map_ptr
                                  && !data::mapFromJson(fetter_voice_trigger_map_ptr, &this->fetter_voice_trigger_map) )
                                {
                                  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2464, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2464),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                    "fromJson",
                                    530);
                                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2464),
                                    (const char (*)[43])"fromJson for: fetterVoiceTriggerMap fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2528),
                                    "teammateLowHPVo_hpRatio",
                                    (const std::allocator<char> *)(v2 + 288));
                                  teammate_low_hpvo_hp_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2528));
                                  std::string::~string((void *)(v2 + 2528));
                                  *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( teammate_low_hpvo_hp_ratio_ptr
                                    && !fromJson<float>(
                                          teammate_low_hpvo_hp_ratio_ptr,
                                          &this->teammate_low_hpvo_hp_ratio) )
                                  {
                                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2592) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2592, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2592),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                      "fromJson",
                                      542);
                                    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2592),
                                      (const char (*)[45])"fromJson for: teammateLowHPVo_hpRatio fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2656),
                                      "teammateLowHPVo_cooldown",
                                      (const std::allocator<char> *)(v2 + 304));
                                    teammate_low_hpvo_cooldown_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 2656));
                                    std::string::~string((void *)(v2 + 2656));
                                    *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( teammate_low_hpvo_cooldown_ptr
                                      && !fromJson<unsigned int>(
                                            teammate_low_hpvo_cooldown_ptr,
                                            &this->teammate_low_hpvo_cooldown) )
                                    {
                                      *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2720, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2720),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                        "fromJson",
                                        554);
                                      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2720),
                                        (const char (*)[46])"fromJson for: teammateLowHPVo_cooldown fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 320);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2784),
                                        "teammateLowHPVo_voTrigger",
                                        (const std::allocator<char> *)(v2 + 320));
                                      teammate_low_hpvo_vo_trigger_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 2784));
                                      std::string::~string((void *)(v2 + 2784));
                                      *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 320);
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                      if ( teammate_low_hpvo_vo_trigger_ptr
                                        && !data::VoiceTriggerIdentity::fromJson(
                                              &this->teammate_low_hpvo_vo_trigger,
                                              teammate_low_hpvo_vo_trigger_ptr) )
                                      {
                                        *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2848) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2848, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2848),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                          "fromJson",
                                          566);
                                        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2848),
                                          (const char (*)[47])"fromJson for: teammateLowHPVo_voTrigger fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 336);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 2912),
                                          "teammateLowHPVo_distance",
                                          (const std::allocator<char> *)(v2 + 336));
                                        teammate_low_hpvo_distance_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 2912));
                                        std::string::~string((void *)(v2 + 2912));
                                        *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 336);
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                        if ( teammate_low_hpvo_distance_ptr
                                          && !fromJson<float>(
                                                teammate_low_hpvo_distance_ptr,
                                                &this->teammate_low_hpvo_distance) )
                                        {
                                          *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 2976, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 2976),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                            "fromJson",
                                            578);
                                          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2976),
                                            (const char (*)[46])"fromJson for: teammateLowHPVo_distance fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 352);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3040),
                                            "teammateLowHPVo_hpDescRatio",
                                            (const std::allocator<char> *)(v2 + 352));
                                          teammate_low_hpvo_hp_desc_ratio_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 3040));
                                          std::string::~string((void *)(v2 + 3040));
                                          *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 352);
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                          if ( teammate_low_hpvo_hp_desc_ratio_ptr
                                            && !fromJson<float>(
                                                  teammate_low_hpvo_hp_desc_ratio_ptr,
                                                  &this->teammate_low_hpvo_hp_desc_ratio) )
                                          {
                                            *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3104) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3104, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3104),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                              "fromJson",
                                              590);
                                            common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3104),
                                              (const char (*)[49])"fromJson for: teammateLowHPVo_hpDescRatio fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 368);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3168),
                                              "teammateLowHPVo_distanceMap",
                                              (const std::allocator<char> *)(v2 + 368));
                                            teammate_low_hpvo_distance_map_ptr = jsonValueFind(
                                                                                   jval,
                                                                                   (const std::string *)(v2 + 3168));
                                            std::string::~string((void *)(v2 + 3168));
                                            *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 368);
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                            if ( teammate_low_hpvo_distance_map_ptr
                                              && !data::mapFromJson(
                                                    teammate_low_hpvo_distance_map_ptr,
                                                    &this->teammate_low_hpvo_distance_map) )
                                            {
                                              *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3232) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3263) >> 3)
                                                                                          + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3232, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3232),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                                "fromJson",
                                                602);
                                              common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3232),
                                                (const char (*)[49])"fromJson for: teammateLowHPVo_distanceMap fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3232));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 384);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3296),
                                                "localPlayerLowHPVo_hpRatio",
                                                (const std::allocator<char> *)(v2 + 384));
                                              local_player_low_hpvo_hp_ratio_ptr = jsonValueFind(
                                                                                     jval,
                                                                                     (const std::string *)(v2 + 3296));
                                              std::string::~string((void *)(v2 + 3296));
                                              *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 384);
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                              if ( local_player_low_hpvo_hp_ratio_ptr
                                                && !fromJson<float>(
                                                      local_player_low_hpvo_hp_ratio_ptr,
                                                      &this->local_player_low_hpvo_hp_ratio) )
                                              {
                                                *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3360) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3391) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3360, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3360),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                                  "fromJson",
                                                  614);
                                                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3360),
                                                  (const char (*)[48])"fromJson for: localPlayerLowHPVo_hpRatio fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 400);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3424),
                                                  "localPlayerLowHPVo_cooldown",
                                                  (const std::allocator<char> *)(v2 + 400));
                                                local_player_low_hpvo_cooldown_ptr = jsonValueFind(
                                                                                       jval,
                                                                                       (const std::string *)(v2 + 3424));
                                                std::string::~string((void *)(v2 + 3424));
                                                *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 400);
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                                if ( local_player_low_hpvo_cooldown_ptr
                                                  && !fromJson<unsigned int>(
                                                        local_player_low_hpvo_cooldown_ptr,
                                                        &this->local_player_low_hpvo_cooldown) )
                                                {
                                                  *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3488) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3519) >> 3)
                                                                                              + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3488, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3488),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                                    "fromJson",
                                                    626);
                                                  common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3488),
                                                    (const char (*)[49])"fromJson for: localPlayerLowHPVo_cooldown fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
                                                  v5 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 416);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3552),
                                                    "localPlayerLowHPVo_voTrigger",
                                                    (const std::allocator<char> *)(v2 + 416));
                                                  local_player_low_hpvo_vo_trigger_ptr = jsonValueFind(
                                                                                           jval,
                                                                                           (const std::string *)(v2 + 3552));
                                                  std::string::~string((void *)(v2 + 3552));
                                                  *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 416);
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                  if ( local_player_low_hpvo_vo_trigger_ptr
                                                    && !data::VoiceTriggerIdentity::fromJson(
                                                          &this->local_player_low_hpvo_vo_trigger,
                                                          local_player_low_hpvo_vo_trigger_ptr) )
                                                  {
                                                    *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 3616) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3647) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 3616, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 3616),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                                      "fromJson",
                                                      638);
                                                    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3616),
                                                      (const char (*)[50])"fromJson for: localPlayerLowHPVo_voTrigger fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3616));
                                                    v5 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 432);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 3680),
                                                      "promotionVoiceTriggerMap",
                                                      (const std::allocator<char> *)(v2 + 432));
                                                    promotion_voice_trigger_map_ptr = jsonValueFind(
                                                                                        jval,
                                                                                        (const std::string *)(v2 + 3680));
                                                    std::string::~string((void *)(v2 + 3680));
                                                    *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 432);
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                    if ( promotion_voice_trigger_map_ptr
                                                      && !data::mapFromJson(
                                                            promotion_voice_trigger_map_ptr,
                                                            &this->promotion_voice_trigger_map) )
                                                    {
                                                      *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 3744) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 3775) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3775) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 3744, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 3744),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                                        "fromJson",
                                                        650);
                                                      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 3744),
                                                        (const char (*)[46])"fromJson for: promotionVoiceTriggerMap fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3744));
                                                      v5 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 448);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 3808),
                                                        "openChestVoTrigger",
                                                        (const std::allocator<char> *)(v2 + 448));
                                                      open_chest_vo_trigger_ptr = jsonValueFind(
                                                                                    jval,
                                                                                    (const std::string *)(v2 + 3808));
                                                      std::string::~string((void *)(v2 + 3808));
                                                      *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 448);
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                      if ( open_chest_vo_trigger_ptr
                                                        && !data::VoiceTriggerIdentity::fromJson(
                                                              &this->open_chest_vo_trigger,
                                                              open_chest_vo_trigger_ptr) )
                                                      {
                                                        *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 3872) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 3872, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 3872),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.cpp",
                                                          "fromJson",
                                                          662);
                                                        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 3872),
                                                          (const char (*)[40])"fromJson for: openChestVoTrigger fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3872));
                                                        v5 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 464);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 3936),
                                                          "voiceBlackList",
                                                          (const std::allocator<char> *)(v2 + 464));
                                                        p_voice_black_list = (data::StringList *)(v2 + 3936);
                                                        voice_black_list_ptr = jsonValueFind(
                                                                                 jval,
                                                                                 (const std::string *)(v2 + 3936));
                                                        std::string::~string((void *)(v2 + 3936));
                                                        *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 464);
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                        if ( voice_black_list_ptr
                                                          && (p_voice_black_list = &this->voice_black_list,
                                                              !data::vecFromJson(
                                                                 voice_black_list_ptr,
                                                                 &this->voice_black_list)) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4000) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4000, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4000),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/Config"
                                                            "AvatarSpeech.cpp",
                                                            "fromJson",
                                                            674);
                                                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4000),
                                                            (const char (*)[36])"fromJson for: voiceBlackList fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4000));
                                                          v5 = 0;
                                                        }
                                                        else
                                                        {
                                                          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                       + 0x7FFF8000) < 0 )
                                                            __asan_report_store1(
                                                              &this->is_json_loaded,
                                                              p_voice_black_list,
                                                              &this->is_json_loaded);
                                                          this->is_json_loaded = 1;
                                                          v5 = 1;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = v5;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8100) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8108) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8110) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8118) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8128) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8130) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8138) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8150) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8160) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8168) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8170) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8178) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8180) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8188) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8190) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8198) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81F0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81F8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 4064LL, v38);
  }
  return v7;
};

// Line 682: range 0000000013B9D436-0000000013B9DB02
int32_t __cdecl data::ConfigAvatarSpeech::getHashValue(const data::ConfigAvatarSpeech *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t v6; // eax
  int32_t HashValue; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t v10; // eax
  int32_t MapHashValue; // eax
  int32_t v12; // eax
  int32_t v13; // eax
  int32_t v14; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t VecHashValue; // eax
  int32_t result; // eax
  char v22[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:683";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarSpeech::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->suitable_equip_obtain);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v6 = data::getArrHashValue(&this->unsuitable_equip_obtain);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->event_common_prefix, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->external_voice_event);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v8 = data::ConfigWwiseString::getHashValue(&this->person_switch_key);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::ConfigWwiseString::getHashValue(&this->positioning_switch_key);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::ConfigWwiseString::getHashValue(&this->initial_delay_rtpc);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->person_switch_value_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v12 = data::getMapHashValue(&this->positioning_switch_value_map);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  v13 = data::getArrHashValue(&this->external_sound_names);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->default_narration_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_narration_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->default_narration_interval);
  }
  common::tools::HashUtils::appendHash(this->default_narration_interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->default_narration_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_narration_duration >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->default_narration_duration);
  }
  common::tools::HashUtils::appendHash(this->default_narration_duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->default_narration_max_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_narration_max_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->default_narration_max_duration);
  }
  common::tools::HashUtils::appendHash(this->default_narration_max_duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_voice_trigger_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_voice_trigger_param >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gacha_voice_trigger_param);
  }
  common::tools::HashUtils::appendHash(this->gacha_voice_trigger_param, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->join_team_voice_trigger_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->join_team_voice_trigger_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->join_team_voice_trigger_param);
  }
  common::tools::HashUtils::appendHash(this->join_team_voice_trigger_param, (int32_t *)(v2 + 32));
  v14 = data::getMapHashValue(&this->fetter_voice_trigger_map);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_hp_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_hp_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->teammate_low_hpvo_hp_ratio);
  }
  common::tools::HashUtils::appendHash(this->teammate_low_hpvo_hp_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_cooldown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_cooldown >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->teammate_low_hpvo_cooldown);
  }
  common::tools::HashUtils::appendHash(this->teammate_low_hpvo_cooldown, (int32_t *)(v2 + 32));
  v15 = data::VoiceTriggerIdentity::getHashValue(&this->teammate_low_hpvo_vo_trigger);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->teammate_low_hpvo_distance);
  }
  common::tools::HashUtils::appendHash(this->teammate_low_hpvo_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_hp_desc_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->teammate_low_hpvo_hp_desc_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->teammate_low_hpvo_hp_desc_ratio);
  }
  common::tools::HashUtils::appendHash(this->teammate_low_hpvo_hp_desc_ratio, (int32_t *)(v2 + 32));
  v16 = data::getMapHashValue(&this->teammate_low_hpvo_distance_map);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->local_player_low_hpvo_hp_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_player_low_hpvo_hp_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->local_player_low_hpvo_hp_ratio);
  }
  common::tools::HashUtils::appendHash(this->local_player_low_hpvo_hp_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->local_player_low_hpvo_cooldown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_player_low_hpvo_cooldown >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->local_player_low_hpvo_cooldown);
  }
  common::tools::HashUtils::appendHash(this->local_player_low_hpvo_cooldown, (int32_t *)(v2 + 32));
  v17 = data::VoiceTriggerIdentity::getHashValue(&this->local_player_low_hpvo_vo_trigger);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  v18 = data::getMapHashValue(&this->promotion_voice_trigger_map);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::VoiceTriggerIdentity::getHashValue(&this->open_chest_vo_trigger);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->voice_black_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v22 == (char *)v2 )
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
