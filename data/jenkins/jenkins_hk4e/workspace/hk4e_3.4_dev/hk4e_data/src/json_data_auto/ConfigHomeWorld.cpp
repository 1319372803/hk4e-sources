// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigHomeWorld.cpp

// Line 19: range 0000000011F1AD1C-0000000011F1AFD2
const char *__cdecl data::enumValToStr(data::PersistentFurnitureType e)
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
    case Wall_1:
      result = "Wall";
      break;
    case Floor_1:
      result = "Floor";
      break;
    case Ceil_1:
      result = "Ceil";
      break;
    case Chandelier_0:
      result = "Chandelier";
      break;
    case Door_0:
      result = "Door";
      break;
    case Stair_0:
      result = "Stair";
      break;
    case Invalid_9:
      result = "Invalid";
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "enumValToStr",
        37);
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
      result = (const char *)&unk_1A891C40;
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

// Line 43: range 0000000011F1AFD3-0000000011F1BB36
bool __cdecl data::enumStrToVal(const std::string *s, data::PersistentFurnitureType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::PersistentFurnitureType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::PersistentFurnitureType> >::pointer v10; // rax
  data::PersistentFurnitureType second; // ecx
  char v12; // dl
  data::PersistentFurnitureType *ea; // [rsp+10h] [rbp-320h]
  char v14[784]; // [rsp+20h] [rbp-310h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 5 it:59 224 8 9 <unknown>"
                        " 256 32 9 <unknown> 320 32 9 <unknown> 384 280 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "enumStrToVal",
      46);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[5],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 384),
        (const char (*)[5])"Wall",
        (data::PersistentFurnitureType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Wall");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[6],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 424),
        (const char (*)[6])"Floor",
        (data::PersistentFurnitureType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Floor");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[5],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 464),
        (const char (*)[5])"Ceil",
        (data::PersistentFurnitureType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Ceil");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[11],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 504),
        (const char (*)[11])"Chandelier",
        (data::PersistentFurnitureType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Chandelier");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[5],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 544),
        (const char (*)[5])"Door",
        (data::PersistentFurnitureType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Door");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[6],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 584),
        (const char (*)[6])"Stair",
        (data::PersistentFurnitureType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Stair");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::PersistentFurnitureType>::pair<char const(&)[8],data::PersistentFurnitureType,true>(
        (std::pair<const std::string,data::PersistentFurnitureType> *const)(v2 + 624),
        (const char (*)[8])"Invalid",
        (data::PersistentFurnitureType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::PersistentFurnitureType>>::allocator((std::allocator<std::pair<const std::string,data::PersistentFurnitureType> > *const)(v2 + 64));
      std::map<std::string,data::PersistentFurnitureType>::map(
        &data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m,
        (std::initializer_list<std::pair<const std::string,data::PersistentFurnitureType> >)__PAIR128__(7LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::PersistentFurnitureType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::PersistentFurnitureType>::~map,
        &data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::PersistentFurnitureType>>::~allocator((std::allocator<std::pair<const std::string,data::PersistentFurnitureType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::PersistentFurnitureType> *)(v2 + 664);
            i != (std::pair<const std::string,data::PersistentFurnitureType> *)(v2 + 384);
            std::pair<std::string const,data::PersistentFurnitureType>::~pair(i) )
      {
        --i;
      }
      e = (data::PersistentFurnitureType *)280;
      __asan_poison_stack_memory(v2 + 384, 280LL);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, e);
    *(std::map<std::string,data::PersistentFurnitureType>::iterator *)(v2 + 192) = std::map<std::string,data::PersistentFurnitureType>::find(
                                                                                     &data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m,
                                                                                     s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::PersistentFurnitureType>::iterator *)(v2 + 224) = std::map<std::string,data::PersistentFurnitureType>::end(&data::enumStrToVal(std::string const&,data::PersistentFurnitureType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::PersistentFurnitureType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::PersistentFurnitureType> >::_Self *)(v2 + 224));
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "enumStrToVal",
        62);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::PersistentFurnitureType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::PersistentFurnitureType> > *const)(v2 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(ea, v7);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
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

// Line 70: range 0000000011F1BB37-0000000011F1BBAE
const char *__cdecl data::getDescription(data::PersistentFurnitureType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Wall_1:
      result = (const char *)&unk_1A8B01E0;
      break;
    case Floor_1:
      result = (const char *)&unk_1A8B0220;
      break;
    case Ceil_1:
      result = (const char *)&unk_1A8B0260;
      break;
    case Chandelier_0:
      result = (const char *)&unk_1A8B02A0;
      break;
    case Door_0:
      result = (const char *)&unk_1A8B02E0;
      break;
    case Stair_0:
      result = (const char *)&unk_1A8B0320;
      break;
    case Invalid_9:
      result = "Invalid";
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 94: range 0000000011F1BBB0-0000000011F1BF05
bool __cdecl data::ConfigHomePlaceColPath::fromJson(data::ConfigHomePlaceColPath *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigHomePlaceColPath *v5; // rsi
  bool result; // al
  const Json::Value *place_col_path_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomePlaceColPath::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "placeColPath",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigHomePlaceColPath *)(v2 + 64);
  place_col_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( place_col_path_ptr && (v5 = this, !data::mapFromJson(place_col_path_ptr, &this->place_col_path)) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      104);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: placeColPath fails!");
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

// Line 112: range 0000000011F1BF06-0000000011F1C040
int32_t __cdecl data::ConfigHomePlaceColPath::getHashValue(const data::ConfigHomePlaceColPath *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:113";
  *(_QWORD *)(v2 + 16) = data::ConfigHomePlaceColPath::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->place_col_path);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// Line 120: range 0000000011F1C042-0000000011F1CB5C
bool __cdecl data::ConfigHomeworldFurnitureDefaultSave::fromJson(
        data::ConfigHomeworldFurnitureDefaultSave *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *furniture_id_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *spawn_pos_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *spawn_rot_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *parent_furniture_index_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldFurnitureDefaultSave::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "furnitureId",
    (const std::allocator<char> *)(v2 + 32));
  furniture_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( furniture_id_ptr && !fromJson<unsigned int>(furniture_id_ptr, &this->furniture_id) )
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
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      130);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[33])"fromJson for: furnitureId fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "spawnPos",
      (const std::allocator<char> *)(v2 + 48));
    spawn_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( spawn_pos_ptr && !data::Vector::fromJson(&this->spawn_pos, spawn_pos_ptr) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        142);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[30])"fromJson for: spawnPos fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "spawnRot",
        (const std::allocator<char> *)(v2 + 64));
      spawn_rot_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( spawn_rot_ptr && !data::Vector::fromJson(&this->spawn_rot, spawn_rot_ptr) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          154);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[30])"fromJson for: spawnRot fails!");
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
          "parentFurnitureIndex",
          (const std::allocator<char> *)(v2 + 80));
        parent_furniture_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( parent_furniture_index_ptr && !fromJson<int>(parent_furniture_index_ptr, &this->parent_furniture_index) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            166);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[42])"fromJson for: parentFurnitureIndex fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 40) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 174: range 0000000011F1CB5E-0000000011F1CD5A
int32_t __cdecl data::ConfigHomeworldFurnitureDefaultSave::getHashValue(
        const data::ConfigHomeworldFurnitureDefaultSave *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:175";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldFurnitureDefaultSave::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->furniture_id, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->spawn_pos);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->spawn_rot);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_furniture_index);
  }
  common::tools::HashUtils::appendHash(this->parent_furniture_index, (int32_t *)(v2 + 32));
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

// Line 185: range 0000000011F1CD5C-0000000011F1D344
bool __cdecl data::ConfigHomeworldDjinnInfoDefaultSave::fromJson(
        data::ConfigHomeworldDjinnInfoDefaultSave *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *pos_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *rot_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldDjinnInfoDefaultSave::fromJson;
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
    off_1A8B06A0,
    (const std::allocator<char> *)(v2 + 32));
  pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( pos_ptr && !data::Vector::fromJson(&this->pos, pos_ptr) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      195);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[25])"fromJson for: pos fails!");
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
      off_1A8B0720,
      (const std::allocator<char> *)(v2 + 48));
    rot_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( rot_ptr && !data::Vector::fromJson(&this->rot, rot_ptr) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        207);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[25])"fromJson for: rot fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 32) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
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

// Line 215: range 0000000011F1D346-0000000011F1D4A1
int32_t __cdecl data::ConfigHomeworldDjinnInfoDefaultSave::getHashValue(
        const data::ConfigHomeworldDjinnInfoDefaultSave *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:216";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldDjinnInfoDefaultSave::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::Vector::getHashValue(&this->pos);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->rot);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 223: range 0000000011F1D4A2-0000000011F1D8CB
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigHomeworldFurnitureDefaultSaveList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::ConfigHomeworldFurnitureDefaultSave *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  std::vector<data::ConfigHomeworldFurnitureDefaultSave> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 44 8 elem:229";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = 0x4000000;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_WORD *)(v7 + 4) = 1024;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 155) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 101) & 7) >= *(_BYTE *)(((v3 + 155) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 44LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_QWORD *)(v3 + 144) = 0LL;
      *(_DWORD *)(v3 + 152) = 0;
      if ( *(_BYTE *)(((v3 + 148) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 108) & 7) + 3) >= *(_BYTE *)(((v3 + 148) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 148, (((_BYTE)v3 - 108) & 7u) + 3);
      }
      *(_DWORD *)(v3 + 148) = -1;
      if ( !data::ConfigHomeworldFurnitureDefaultSave::fromJson(
              (data::ConfigHomeworldFurnitureDefaultSave *const)(v3 + 112),
              elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          232);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::ConfigHomeworldFurnitureDefaultSave &>((data::ConfigHomeworldFurnitureDefaultSave *)(v3 + 112));
        std::vector<data::ConfigHomeworldFurnitureDefaultSave>::emplace_back<data::ConfigHomeworldFurnitureDefaultSave>(
          va,
          v8,
          v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    if ( v6 && v6 != 2 )
      goto LABEL_21;
  }
  v2 = 1;
LABEL_21:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 242: range 0000000011F1D8CC-0000000011F1DB18
int32_t __cdecl data::getVecHashValue(const data::ConfigHomeworldFurnitureDefaultSaveList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureDefaultSave*,std::vector<data::ConfigHomeworldFurnitureDefaultSave> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:243 64 8 15 __for_begin:244 96 8 13 __for_end:244";
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
  *(std::vector<data::ConfigHomeworldFurnitureDefaultSave>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldFurnitureDefaultSave>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldFurnitureDefaultSave>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldFurnitureDefaultSave>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldFurnitureDefaultSave const*,std::vector<data::ConfigHomeworldFurnitureDefaultSave>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureDefaultSave*,std::vector<data::ConfigHomeworldFurnitureDefaultSave> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureDefaultSave*,std::vector<data::ConfigHomeworldFurnitureDefaultSave> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldFurnitureDefaultSave const*,std::vector<data::ConfigHomeworldFurnitureDefaultSave>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureDefaultSave*,std::vector<data::ConfigHomeworldFurnitureDefaultSave> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldFurnitureDefaultSave::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldFurnitureDefaultSave const*,std::vector<data::ConfigHomeworldFurnitureDefaultSave>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureDefaultSave*,std::vector<data::ConfigHomeworldFurnitureDefaultSave> > *const)(v2 + 64));
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

// Line 252: range 0000000011F1DB19-0000000011F1DEF4
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigHomeworldDjinnInfoDefaultSaveList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::ConfigHomeworldDjinnInfoDefaultSave *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  std::vector<data::ConfigHomeworldDjinnInfoDefaultSave> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 36 8 elem:258";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -217841664;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_BYTE *)(v7 + 4) = 4;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 109) & 7) >= *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 36LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_DWORD *)(v3 + 144) = 0;
      if ( !data::ConfigHomeworldDjinnInfoDefaultSave::fromJson(
              (data::ConfigHomeworldDjinnInfoDefaultSave *const)(v3 + 112),
              elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          261);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::ConfigHomeworldDjinnInfoDefaultSave &>((data::ConfigHomeworldDjinnInfoDefaultSave *)(v3 + 112));
        std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::emplace_back<data::ConfigHomeworldDjinnInfoDefaultSave>(
          va,
          v8,
          v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_19;
  }
  v2 = 1;
LABEL_19:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 271: range 0000000011F1DEF5-0000000011F1E141
int32_t __cdecl data::getVecHashValue(const data::ConfigHomeworldDjinnInfoDefaultSaveList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldDjinnInfoDefaultSave*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:272 64 8 15 __for_begin:273 96 8 13 __for_end:273";
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
  *(std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldDjinnInfoDefaultSave const*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldDjinnInfoDefaultSave*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldDjinnInfoDefaultSave*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldDjinnInfoDefaultSave const*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldDjinnInfoDefaultSave*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldDjinnInfoDefaultSave::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldDjinnInfoDefaultSave const*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldDjinnInfoDefaultSave*,std::vector<data::ConfigHomeworldDjinnInfoDefaultSave> > *const)(v2 + 64));
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

// Line 282: range 0000000011F1E142-0000000011F1FB07
bool __cdecl data::ConfigHomeworldBlockDefaultSave::fromJson(
        data::ConfigHomeworldBlockDefaultSave *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::UInt32List *p_dot_pattern_list; // rsi
  bool v7; // bl
  const Json::Value *block_id_ptr; // [rsp+10h] [rbp-630h]
  const Json::Value *persistent_furniture_list_ptr; // [rsp+18h] [rbp-628h]
  const Json::Value *deploy_furniure_list_ptr; // [rsp+20h] [rbp-620h]
  const Json::Value *deploy_npc_list_ptr; // [rsp+28h] [rbp-618h]
  const Json::Value *furniture_suite_list_ptr; // [rsp+30h] [rbp-610h]
  const Json::Value *deploy_animal_list_ptr; // [rsp+38h] [rbp-608h]
  const Json::Value *is_unlocked_ptr; // [rsp+40h] [rbp-600h]
  const Json::Value *comfort_value_ptr; // [rsp+48h] [rbp-5F8h]
  const Json::Value *weekend_djinn_info_list_ptr; // [rsp+50h] [rbp-5F0h]
  const Json::Value *dot_pattern_list_ptr; // [rsp+58h] [rbp-5E8h]
  char v20[1504]; // [rsp+60h] [rbp-5E0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unkn"
                        "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unkno"
                        "wn> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknow"
                        "n> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkn"
                        "own> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldBlockDefaultSave::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "blockId",
    (const std::allocator<char> *)(v2 + 32));
  block_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( block_id_ptr && !fromJson<int>(block_id_ptr, &this->block_id) )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      292);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[29])"fromJson for: blockId fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      "persistentFurnitureList",
      (const std::allocator<char> *)(v2 + 48));
    persistent_furniture_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( persistent_furniture_list_ptr
      && !data::vecFromJson(persistent_furniture_list_ptr, &this->persistent_furniture_list) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        304);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[45])"fromJson for: persistentFurnitureList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        "deployFurniureList",
        (const std::allocator<char> *)(v2 + 64));
      deploy_furniure_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( deploy_furniure_list_ptr && !data::vecFromJson(deploy_furniure_list_ptr, &this->deploy_furniure_list) )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          316);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 512),
          (const char (*)[40])"fromJson for: deployFurniureList fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 576),
          "deployNpcList",
          (const std::allocator<char> *)(v2 + 80));
        deploy_npc_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( deploy_npc_list_ptr && !data::vecFromJson(deploy_npc_list_ptr, &this->deploy_npc_list) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            328);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[35])"fromJson for: deployNpcList fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 704),
            "furnitureSuiteList",
            (const std::allocator<char> *)(v2 + 96));
          furniture_suite_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( furniture_suite_list_ptr && !data::vecFromJson(furniture_suite_list_ptr, &this->furniture_suite_list) )
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 768),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigHomeWorld.cpp",
              "fromJson",
              340);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[40])"fromJson for: furnitureSuiteList fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 832),
              "deployAnimalList",
              (const std::allocator<char> *)(v2 + 112));
            deploy_animal_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
            std::string::~string((void *)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( deploy_animal_list_ptr && !data::vecFromJson(deploy_animal_list_ptr, &this->deploy_animal_list) )
            {
              *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 896, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 896),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigHomeWorld.cpp",
                "fromJson",
                352);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[38])"fromJson for: deployAnimalList fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 960),
                "isUnlocked",
                (const std::allocator<char> *)(v2 + 128));
              is_unlocked_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
              std::string::~string((void *)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( is_unlocked_ptr && !fromJson<bool>(is_unlocked_ptr, &this->is_unlocked) )
              {
                *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1024, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1024),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigHomeWorld.cpp",
                  "fromJson",
                  364);
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  (common::milog::MiLogStream *const)(v2 + 1024),
                  (const char (*)[32])"fromJson for: isUnlocked fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1088),
                  "comfortValue",
                  (const std::allocator<char> *)(v2 + 144));
                comfort_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
                std::string::~string((void *)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( comfort_value_ptr && !fromJson<unsigned int>(comfort_value_ptr, &this->comfort_value) )
                {
                  *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1152, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1152),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigHomeWorld.cpp",
                    "fromJson",
                    376);
                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    (common::milog::MiLogStream *const)(v2 + 1152),
                    (const char (*)[34])"fromJson for: comfortValue fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1216),
                    "weekendDjinnInfoList",
                    (const std::allocator<char> *)(v2 + 160));
                  weekend_djinn_info_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                  std::string::~string((void *)(v2 + 1216));
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( weekend_djinn_info_list_ptr
                    && !data::vecFromJson(weekend_djinn_info_list_ptr, &this->weekend_djinn_info_list) )
                  {
                    *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1280, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1280),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigHomeWorld.cpp",
                      "fromJson",
                      388);
                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)(v2 + 1280),
                      (const char (*)[42])"fromJson for: weekendDjinnInfoList fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1344),
                      "dotPatternList",
                      (const std::allocator<char> *)(v2 + 176));
                    p_dot_pattern_list = (data::UInt32List *)(v2 + 1344);
                    dot_pattern_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                    std::string::~string((void *)(v2 + 1344));
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( dot_pattern_list_ptr
                      && (p_dot_pattern_list = &this->dot_pattern_list,
                          !data::vecFromJson(dot_pattern_list_ptr, &this->dot_pattern_list)) )
                    {
                      *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1408, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1408),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigHomeWorld.cpp",
                        "fromJson",
                        400);
                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        (common::milog::MiLogStream *const)(v2 + 1408),
                        (const char (*)[36])"fromJson for: dotPatternList fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                      v5 = 0;
                    }
                    else
                    {
                      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                        __asan_report_store1(&this->is_json_loaded, p_dot_pattern_list, &this->is_json_loaded);
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
  v7 = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v20);
  }
  return v7;
};

// Line 408: range 0000000011F1FB08-0000000011F1FDEF
int32_t __cdecl data::ConfigHomeworldBlockDefaultSave::getHashValue(
        const data::ConfigHomeworldBlockDefaultSave *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t v10; // eax
  int32_t v11; // eax
  int32_t result; // eax
  char v13[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:409";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldBlockDefaultSave::getHashValue;
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
  common::tools::HashUtils::appendHash(this->block_id, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->persistent_furniture_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->deploy_furniure_list);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getVecHashValue(&this->deploy_npc_list);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->furniture_suite_list);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::getVecHashValue(&this->deploy_animal_list);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_unlocked, v2 + 32, &this->is_unlocked);
  common::tools::HashUtils::appendHash(this->is_unlocked, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->comfort_value);
  }
  common::tools::HashUtils::appendHash(this->comfort_value, (int32_t *)(v2 + 32));
  v10 = data::getVecHashValue(&this->weekend_djinn_info_list);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  v11 = data::getVecHashValue(&this->dot_pattern_list);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v13 == (char *)v2 )
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

// Line 424: range 0000000011F1FDF0-0000000011F2021E
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigHomeworldBlockList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  _DWORD *v6; // rax
  int v7; // r14d
  data::ConfigHomeworldBlockDefaultSave *v8; // rdx
  _DWORD *v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-1C0h]
  char v12; // [rsp+8h] [rbp-1B8h]
  bool v13; // [rsp+Fh] [rbp-1B1h]
  uint32_t i; // [rsp+24h] [rbp-19Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 192 8 elem:430";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
      v6[5] = 0;
      data::ConfigHomeworldBlockDefaultSave::ConfigHomeworldBlockDefaultSave((data::ConfigHomeworldBlockDefaultSave *const)(v2 + 96));
      if ( !data::ConfigHomeworldBlockDefaultSave::fromJson(
              (data::ConfigHomeworldBlockDefaultSave *const)(v2 + 96),
              elem_jval) )
      {
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          433);
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
        v8 = std::move<data::ConfigHomeworldBlockDefaultSave &>((data::ConfigHomeworldBlockDefaultSave *)(v2 + 96));
        std::vector<data::ConfigHomeworldBlockDefaultSave>::emplace_back<data::ConfigHomeworldBlockDefaultSave>(
          v,
          v8,
          v8);
        v7 = 1;
      }
      data::ConfigHomeworldBlockDefaultSave::~ConfigHomeworldBlockDefaultSave((data::ConfigHomeworldBlockDefaultSave *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    v9[2] = -117901064;
    v9[3] = -117901064;
    v9[4] = -117901064;
    v9[5] = -117901064;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 443: range 0000000011F2021F-0000000011F2046B
int32_t __cdecl data::getVecHashValue(const data::ConfigHomeworldBlockList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockDefaultSave*,std::vector<data::ConfigHomeworldBlockDefaultSave> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:444 64 8 15 __for_begin:445 96 8 13 __for_end:445";
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
  *(std::vector<data::ConfigHomeworldBlockDefaultSave>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldBlockDefaultSave>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldBlockDefaultSave>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldBlockDefaultSave>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldBlockDefaultSave const*,std::vector<data::ConfigHomeworldBlockDefaultSave>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockDefaultSave*,std::vector<data::ConfigHomeworldBlockDefaultSave> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockDefaultSave*,std::vector<data::ConfigHomeworldBlockDefaultSave> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldBlockDefaultSave const*,std::vector<data::ConfigHomeworldBlockDefaultSave>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockDefaultSave*,std::vector<data::ConfigHomeworldBlockDefaultSave> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldBlockDefaultSave::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldBlockDefaultSave const*,std::vector<data::ConfigHomeworldBlockDefaultSave>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockDefaultSave*,std::vector<data::ConfigHomeworldBlockDefaultSave> > *const)(v2 + 64));
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

// Line 454: range 0000000011F2046C-0000000011F220C2
bool __cdecl data::ConfigHomeworldDefaultSave::fromJson(
        data::ConfigHomeworldDefaultSave *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *scene_id_ptr; // [rsp+18h] [rbp-6D8h]
  const Json::Value *block_arrangement_info_list_ptr; // [rsp+20h] [rbp-6D0h]
  const Json::Value *is_set_born_pos_ptr; // [rsp+28h] [rbp-6C8h]
  const Json::Value *born_pos_ptr; // [rsp+30h] [rbp-6C0h]
  const Json::Value *born_rot_ptr; // [rsp+38h] [rbp-6B8h]
  const Json::Value *door_list_ptr; // [rsp+40h] [rbp-6B0h]
  const Json::Value *stair_list_ptr; // [rsp+48h] [rbp-6A8h]
  const Json::Value *main_house_ptr; // [rsp+50h] [rbp-6A0h]
  const Json::Value *comfort_value_ptr; // [rsp+58h] [rbp-698h]
  const Json::Value *djinn_pos_ptr; // [rsp+60h] [rbp-690h]
  const Json::Value *tmp_version_ptr; // [rsp+68h] [rbp-688h]
  char v21[1664]; // [rsp+70h] [rbp-680h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "33 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldDefaultSave::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
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
  v4[536862770] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "sceneID",
    (const std::allocator<char> *)(v2 + 48));
  scene_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( scene_id_ptr && !fromJson<unsigned int>(scene_id_ptr, &this->scene_id) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      464);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[29])"fromJson for: sceneID fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      "blockArrangementInfoList",
      (const std::allocator<char> *)(v2 + 64));
    block_arrangement_info_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( block_arrangement_info_list_ptr
      && !data::vecFromJson(block_arrangement_info_list_ptr, &this->block_arrangement_info_list) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        476);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[46])"fromJson for: blockArrangementInfoList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "isSetBornPos",
        (const std::allocator<char> *)(v2 + 80));
      is_set_born_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( is_set_born_pos_ptr && !fromJson<bool>(is_set_born_pos_ptr, &this->is_set_born_pos) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          488);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[34])"fromJson for: isSetBornPos fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          "bornPos",
          (const std::allocator<char> *)(v2 + 96));
        born_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( born_pos_ptr && !data::Vector::fromJson(&this->born_pos, born_pos_ptr) )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            500);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[29])"fromJson for: bornPos fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            "bornRot",
            (const std::allocator<char> *)(v2 + 112));
          born_rot_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( born_rot_ptr && !data::Vector::fromJson(&this->born_rot, born_rot_ptr) )
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigHomeWorld.cpp",
              "fromJson",
              512);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[29])"fromJson for: bornRot fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 864),
              "doorList",
              (const std::allocator<char> *)(v2 + 128));
            door_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( door_list_ptr && !data::vecFromJson(door_list_ptr, &this->door_list) )
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 928, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 928),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigHomeWorld.cpp",
                "fromJson",
                524);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[30])"fromJson for: doorList fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 992),
                "stairList",
                (const std::allocator<char> *)(v2 + 144));
              stair_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
              std::string::~string((void *)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( stair_list_ptr && !data::vecFromJson(stair_list_ptr, &this->stair_list) )
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigHomeWorld.cpp",
                  "fromJson",
                  536);
                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[31])"fromJson for: stairList fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1120),
                  "mainHouse",
                  (const std::allocator<char> *)(v2 + 160));
                main_house_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
                std::string::~string((void *)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( main_house_ptr
                  && !data::ConfigHomeworldFurnitureDefaultSave::fromJson(&this->main_house, main_house_ptr) )
                {
                  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1184, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1184),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigHomeWorld.cpp",
                    "fromJson",
                    548);
                  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[31])"fromJson for: mainHouse fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1248),
                    "comfortValue",
                    (const std::allocator<char> *)(v2 + 176));
                  comfort_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                  std::string::~string((void *)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( comfort_value_ptr && !fromJson<unsigned int>(comfort_value_ptr, &this->comfort_value) )
                  {
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1312, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1312),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigHomeWorld.cpp",
                      "fromJson",
                      560);
                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[34])"fromJson for: comfortValue fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1376),
                      "djinnPos",
                      (const std::allocator<char> *)(v2 + 192));
                    djinn_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( djinn_pos_ptr && !data::Vector::fromJson(&this->djinn_pos, djinn_pos_ptr) )
                    {
                      *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1440, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1440),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigHomeWorld.cpp",
                        "fromJson",
                        572);
                      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        (common::milog::MiLogStream *const)(v2 + 1440),
                        (const char (*)[30])"fromJson for: djinnPos fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1504),
                        "tmpVersion",
                        (const std::allocator<char> *)(v2 + 208));
                      tmp_version_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( tmp_version_ptr && !fromJson<unsigned int>(tmp_version_ptr, &this->tmp_version) )
                      {
                        *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1568, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1568),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigHomeWorld.cpp",
                          "fromJson",
                          584);
                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[32])"fromJson for: tmpVersion fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                        v5 = 0;
                      }
                      else
                      {
                        v6 = ((_BYTE)this - 68) & 7;
                        v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                        if ( (_BYTE)v7 )
                          __asan_report_store1(&this->is_json_loaded, v6, v7);
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
  v8 = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v21);
  }
  return v8;
};

// Line 592: range 0000000011F220C4-0000000011F223F3
int32_t __cdecl data::ConfigHomeworldDefaultSave::getHashValue(const data::ConfigHomeworldDefaultSave *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t HashValue; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t v10; // eax
  int32_t v11; // eax
  int32_t result; // eax
  char v13[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:593";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldDefaultSave::getHashValue;
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
  common::tools::HashUtils::appendHash(this->scene_id, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->block_arrangement_info_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_set_born_pos, v2 + 32, &this->is_set_born_pos);
  common::tools::HashUtils::appendHash(this->is_set_born_pos, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->born_pos);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v7 = data::Vector::getHashValue(&this->born_rot);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->door_list);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::getVecHashValue(&this->stair_list);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::ConfigHomeworldFurnitureDefaultSave::getHashValue(&this->main_house);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->comfort_value);
  }
  common::tools::HashUtils::appendHash(this->comfort_value, (int32_t *)(v2 + 32));
  v11 = data::Vector::getHashValue(&this->djinn_pos);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tmp_version);
  }
  common::tools::HashUtils::appendHash(this->tmp_version, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v13 == (char *)v2 )
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

// Line 610: range 0000000011F223F4-0000000011F22F0E
bool __cdecl data::ConfigHomeworldFurnitureUnit::fromJson(
        data::ConfigHomeworldFurnitureUnit *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *furniture_id_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *position_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *rotation_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *parent_index_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldFurnitureUnit::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "furnitureID",
    (const std::allocator<char> *)(v2 + 32));
  furniture_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( furniture_id_ptr && !fromJson<unsigned int>(furniture_id_ptr, &this->furniture_id) )
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
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      620);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[33])"fromJson for: furnitureID fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "position",
      (const std::allocator<char> *)(v2 + 48));
    position_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( position_ptr && !data::Vector::fromJson(&this->position, position_ptr) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        632);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[30])"fromJson for: position fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "rotation",
        (const std::allocator<char> *)(v2 + 64));
      rotation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( rotation_ptr && !data::Vector::fromJson(&this->rotation, rotation_ptr) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          644);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[30])"fromJson for: rotation fails!");
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
          "parentIndex",
          (const std::allocator<char> *)(v2 + 80));
        parent_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( parent_index_ptr && !fromJson<int>(parent_index_ptr, &this->parent_index) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            656);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[33])"fromJson for: parentIndex fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 40) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 664: range 0000000011F22F10-0000000011F2310C
int32_t __cdecl data::ConfigHomeworldFurnitureUnit::getHashValue(const data::ConfigHomeworldFurnitureUnit *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:665";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldFurnitureUnit::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->furniture_id, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->position);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->rotation);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_index);
  }
  common::tools::HashUtils::appendHash(this->parent_index, (int32_t *)(v2 + 32));
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

// Line 675: range 0000000011F2310E-0000000011F236F6
bool __cdecl data::ConfigHomeworldSuiteNpcSpawnPoint::fromJson(
        data::ConfigHomeworldSuiteNpcSpawnPoint *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *position_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *rotation_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldSuiteNpcSpawnPoint::fromJson;
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
    "position",
    (const std::allocator<char> *)(v2 + 32));
  position_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( position_ptr && !data::Vector::fromJson(&this->position, position_ptr) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      685);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[30])"fromJson for: position fails!");
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
      "rotation",
      (const std::allocator<char> *)(v2 + 48));
    rotation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( rotation_ptr && !data::Vector::fromJson(&this->rotation, rotation_ptr) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        697);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[30])"fromJson for: rotation fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 32) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
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

// Line 705: range 0000000011F236F8-0000000011F23853
int32_t __cdecl data::ConfigHomeworldSuiteNpcSpawnPoint::getHashValue(
        const data::ConfigHomeworldSuiteNpcSpawnPoint *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:706";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldSuiteNpcSpawnPoint::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::Vector::getHashValue(&this->position);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->rotation);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 713: range 0000000011F23854-0000000011F23C7D
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigFurnitureSetList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::ConfigHomeworldFurnitureUnit *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  std::vector<data::ConfigHomeworldFurnitureUnit> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 44 8 elem:719";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = 0x4000000;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_WORD *)(v7 + 4) = 1024;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 155) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 101) & 7) >= *(_BYTE *)(((v3 + 155) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 44LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_QWORD *)(v3 + 144) = 0LL;
      *(_DWORD *)(v3 + 152) = 0;
      if ( *(_BYTE *)(((v3 + 148) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 108) & 7) + 3) >= *(_BYTE *)(((v3 + 148) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 148, (((_BYTE)v3 - 108) & 7u) + 3);
      }
      *(_DWORD *)(v3 + 148) = -1;
      if ( !data::ConfigHomeworldFurnitureUnit::fromJson(
              (data::ConfigHomeworldFurnitureUnit *const)(v3 + 112),
              elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          722);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::ConfigHomeworldFurnitureUnit &>((data::ConfigHomeworldFurnitureUnit *)(v3 + 112));
        std::vector<data::ConfigHomeworldFurnitureUnit>::emplace_back<data::ConfigHomeworldFurnitureUnit>(va, v8, v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    if ( v6 && v6 != 2 )
      goto LABEL_21;
  }
  v2 = 1;
LABEL_21:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 732: range 0000000011F23C7E-0000000011F23ECA
int32_t __cdecl data::getVecHashValue(const data::ConfigFurnitureSetList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureUnit*,std::vector<data::ConfigHomeworldFurnitureUnit> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:733 64 8 15 __for_begin:734 96 8 13 __for_end:734";
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
  *(std::vector<data::ConfigHomeworldFurnitureUnit>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldFurnitureUnit>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldFurnitureUnit>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldFurnitureUnit>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldFurnitureUnit const*,std::vector<data::ConfigHomeworldFurnitureUnit>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureUnit*,std::vector<data::ConfigHomeworldFurnitureUnit> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureUnit*,std::vector<data::ConfigHomeworldFurnitureUnit> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldFurnitureUnit const*,std::vector<data::ConfigHomeworldFurnitureUnit>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureUnit*,std::vector<data::ConfigHomeworldFurnitureUnit> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldFurnitureUnit::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldFurnitureUnit const*,std::vector<data::ConfigHomeworldFurnitureUnit>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldFurnitureUnit*,std::vector<data::ConfigHomeworldFurnitureUnit> > *const)(v2 + 64));
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

// Line 742: range 0000000011F23ECB-0000000011F242A6
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigFurnitureSuiteNpcSpawnList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::ConfigHomeworldSuiteNpcSpawnPoint *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 36 8 elem:748";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -217841664;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_BYTE *)(v7 + 4) = 4;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 109) & 7) >= *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 36LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_DWORD *)(v3 + 144) = 0;
      if ( !data::ConfigHomeworldSuiteNpcSpawnPoint::fromJson(
              (data::ConfigHomeworldSuiteNpcSpawnPoint *const)(v3 + 112),
              elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          751);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::ConfigHomeworldSuiteNpcSpawnPoint &>((data::ConfigHomeworldSuiteNpcSpawnPoint *)(v3 + 112));
        std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::emplace_back<data::ConfigHomeworldSuiteNpcSpawnPoint>(
          va,
          v8,
          v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_19;
  }
  v2 = 1;
LABEL_19:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 761: range 0000000011F242A7-0000000011F244F3
int32_t __cdecl data::getVecHashValue(const data::ConfigFurnitureSuiteNpcSpawnList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldSuiteNpcSpawnPoint*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:762 64 8 15 __for_begin:763 96 8 13 __for_end:763";
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
  *(std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldSuiteNpcSpawnPoint const*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldSuiteNpcSpawnPoint*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldSuiteNpcSpawnPoint*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldSuiteNpcSpawnPoint const*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldSuiteNpcSpawnPoint*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldSuiteNpcSpawnPoint::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldSuiteNpcSpawnPoint const*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldSuiteNpcSpawnPoint*,std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint> > *const)(v2 + 64));
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

// Line 772: range 0000000011F244F4-0000000011F25009
bool __cdecl data::ConfigHomeworldFurnitureSet::fromJson(
        data::ConfigHomeworldFurnitureSet *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigFurnitureSuiteNpcSpawnList *p_npc_spawn_points; // rsi
  const Json::Value *radius_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *height_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *furniture_units_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *npc_spawn_points_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldFurnitureSet::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "radius",
    (const std::allocator<char> *)(v2 + 32));
  radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( radius_ptr && !fromJson<float>(radius_ptr, &this->radius) )
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
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      782);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[28])"fromJson for: radius fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "height",
      (const std::allocator<char> *)(v2 + 48));
    height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( height_ptr && !fromJson<float>(height_ptr, &this->height) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        794);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[28])"fromJson for: height fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "furnitureUnits",
        (const std::allocator<char> *)(v2 + 64));
      furniture_units_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( furniture_units_ptr && !data::vecFromJson(furniture_units_ptr, &this->furniture_units) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          806);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[36])"fromJson for: furnitureUnits fails!");
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
          "npcSpawnPoints",
          (const std::allocator<char> *)(v2 + 80));
        p_npc_spawn_points = (data::ConfigFurnitureSuiteNpcSpawnList *)(v2 + 480);
        npc_spawn_points_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( npc_spawn_points_ptr
          && (p_npc_spawn_points = &this->npc_spawn_points,
              !data::vecFromJson(npc_spawn_points_ptr, &this->npc_spawn_points)) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            818);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[36])"fromJson for: npcSpawnPoints fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_npc_spawn_points, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 826: range 0000000011F2500A-0000000011F25202
int32_t __cdecl data::ConfigHomeworldFurnitureSet::getHashValue(const data::ConfigHomeworldFurnitureSet *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:827";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldFurnitureSet::getHashValue;
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
  common::tools::HashUtils::appendHash(this->radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height);
  }
  common::tools::HashUtils::appendHash(this->height, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->furniture_units);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->npc_spawn_points);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 837: range 0000000011F25204-0000000011F257EC
bool __cdecl data::ConfigHomeCommonPos::fromJson(data::ConfigHomeCommonPos *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *position_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *rotation_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeCommonPos::fromJson;
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
    "position",
    (const std::allocator<char> *)(v2 + 32));
  position_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( position_ptr && !data::Vector::fromJson(&this->position, position_ptr) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      847);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[30])"fromJson for: position fails!");
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
      "rotation",
      (const std::allocator<char> *)(v2 + 48));
    rotation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( rotation_ptr && !data::Vector::fromJson(&this->rotation, rotation_ptr) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        859);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[30])"fromJson for: rotation fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 32) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
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

// Line 867: range 0000000011F257EE-0000000011F25949
int32_t __cdecl data::ConfigHomeCommonPos::getHashValue(const data::ConfigHomeCommonPos *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:868";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeCommonPos::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::Vector::getHashValue(&this->position);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->rotation);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 875: range 0000000011F2594A-0000000011F25D25
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigHomeCommonPosList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::ConfigHomeCommonPos *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  data::ConfigHomeCommonPosList *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 36 8 elem:881";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -217841664;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_BYTE *)(v7 + 4) = 4;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 109) & 7) >= *(_BYTE *)(((v3 + 147) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 36LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_DWORD *)(v3 + 144) = 0;
      if ( !data::ConfigHomeCommonPos::fromJson((data::ConfigHomeCommonPos *const)(v3 + 112), elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          884);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::ConfigHomeCommonPos &>((data::ConfigHomeCommonPos *)(v3 + 112));
        std::vector<data::ConfigHomeCommonPos>::emplace_back<data::ConfigHomeCommonPos>(va, v8, v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_19;
  }
  v2 = 1;
LABEL_19:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 894: range 0000000011F25D26-0000000011F25F72
int32_t __cdecl data::getVecHashValue(const data::ConfigHomeCommonPosList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeCommonPos*,std::vector<data::ConfigHomeCommonPos> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:895 64 8 15 __for_begin:896 96 8 13 __for_end:896";
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
  *(std::vector<data::ConfigHomeCommonPos>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeCommonPos>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeCommonPos>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeCommonPos>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeCommonPos const*,std::vector<data::ConfigHomeCommonPos>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeCommonPos*,std::vector<data::ConfigHomeCommonPos> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeCommonPos*,std::vector<data::ConfigHomeCommonPos> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeCommonPos const*,std::vector<data::ConfigHomeCommonPos>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeCommonPos*,std::vector<data::ConfigHomeCommonPos> > *const)(v2 + 64));
    HashValue = data::ConfigHomeCommonPos::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeCommonPos const*,std::vector<data::ConfigHomeCommonPos>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeCommonPos*,std::vector<data::ConfigHomeCommonPos> > *const)(v2 + 64));
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

// Line 905: range 0000000011F25F74-0000000011F26557
bool __cdecl data::ConfigHomeFishpond::fromJson(data::ConfigHomeFishpond *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigHomeCommonPosList *p_fish_born_pos_list; // rsi
  const Json::Value *max_fish_count_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *fish_born_pos_list_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishpond::fromJson;
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
    "maxFishCount",
    (const std::allocator<char> *)(v2 + 32));
  max_fish_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( max_fish_count_ptr && !fromJson<unsigned int>(max_fish_count_ptr, &this->max_fish_count) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      915);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: maxFishCount fails!");
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
      "fishBornPosList",
      (const std::allocator<char> *)(v2 + 48));
    p_fish_born_pos_list = (data::ConfigHomeCommonPosList *)(v2 + 192);
    fish_born_pos_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( fish_born_pos_list_ptr
      && (p_fish_born_pos_list = &this->fish_born_pos_list,
          !data::vecFromJson(fish_born_pos_list_ptr, &this->fish_born_pos_list)) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        927);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[37])"fromJson for: fishBornPosList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_fish_born_pos_list, &this->is_json_loaded);
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

// Line 935: range 0000000011F26558-0000000011F266DA
int32_t __cdecl data::ConfigHomeFishpond::getHashValue(const data::ConfigHomeFishpond *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:936";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishpond::getHashValue;
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
  common::tools::HashUtils::appendHash(this->max_fish_count, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->fish_born_pos_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 943: range 0000000011F266DB-0000000011F274A1
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigHomeFishpondMap *m)
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
  data::ConfigHomeFishpond *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ConfigHomeFishpond>,false,false>,bool> v17; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 4 7 key:948 64 16 7 cit:945 96 16 9 <unknown> 128 32 11 key_str:949 192 32 9 <unknown> 256"
                        " 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 40 12 tmp_jval:944 "
                        "592 40 12 key_jval:947 672 40 14 value_jval:960 752 40 9 value:961";
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        952);
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
    else if ( common::tools::StringUtils::strToNum<unsigned int>(
                (const std::string *)(v3 + 128),
                (unsigned int *)(v3 + 48),
                1) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        957);
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
      data::ConfigHomeFishpond::ConfigHomeFishpond((data::ConfigHomeFishpond *const)(v3 + 752));
      if ( !data::ConfigHomeFishpond::fromJson(
              (data::ConfigHomeFishpond *const)(v3 + 752),
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "mapFromJson",
          964);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<unsigned int,data::ConfigHomeFishpond>::emplace<unsigned int &,data::ConfigHomeFishpond&>(
                m,
                (unsigned int *)(v3 + 48),
                (data::ConfigHomeFishpond *)(v3 + 752),
                (unsigned int *)(v3 + 48),
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "mapFromJson",
            969);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
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
      data::ConfigHomeFishpond::~ConfigHomeFishpond((data::ConfigHomeFishpond *const)(v3 + 752));
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

// Line 978: range 0000000011F274A2-0000000011F27772
int32_t __cdecl data::getMapHashValue(const data::ConfigHomeFishpondMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishpond>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  uint32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeFishpond> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:979 64 8 15 __for_begin:980 96 8 13 __for_end:980";
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
  *(std::unordered_map<unsigned int,data::ConfigHomeFishpond>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ConfigHomeFishpond>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<unsigned int,data::ConfigHomeFishpond>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ConfigHomeFishpond>::end(map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ConfigHomeFishpond>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeFishpond>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeFishpond>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishpond>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishpond>,false,false> *const)(v2 + 64));
    key = std::get<0ul,unsigned int const,data::ConfigHomeFishpond>(v7);
    val = (std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeFishpond> >::type *)std::get<1ul,unsigned int const,data::ConfigHomeFishpond>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigHomeFishpond::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishpond>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishpond>,false,false> *const)(v2 + 64));
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

// Line 992: range 0000000011F27774-0000000011F27AC9
bool __cdecl data::ConfigHomeFishpondSet::fromJson(data::ConfigHomeFishpondSet *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigHomeFishpondSet *v5; // rsi
  bool result; // al
  const Json::Value *fishpond_map_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishpondSet::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "fishpondMap",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigHomeFishpondSet *)(v2 + 64);
  fishpond_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( fishpond_map_ptr && (v5 = this, !data::mapFromJson(fishpond_map_ptr, &this->fishpond_map)) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1002);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[33])"fromJson for: fishpondMap fails!");
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

// Line 1010: range 0000000011F27ACA-0000000011F27C04
int32_t __cdecl data::ConfigHomeFishpondSet::getHashValue(const data::ConfigHomeFishpondSet *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1011";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishpondSet::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->fishpond_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// Line 1018: range 0000000011F27C06-0000000011F289A8
bool __cdecl data::ConfigHomeworldGroupUnit::fromJson(
        data::ConfigHomeworldGroupUnit *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *group_config_id_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *furniture_id_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *position_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *rotation_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *parent_index_ptr; // [rsp+38h] [rbp-328h]
  char v13[800]; // [rsp+40h] [rbp-320h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldGroupUnit::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "groupConfigID",
    (const std::allocator<char> *)(v2 + 48));
  group_config_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( group_config_id_ptr && !fromJson<unsigned int>(group_config_id_ptr, &this->group_config_id) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1028);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[35])"fromJson for: groupConfigID fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "furnitureID",
      (const std::allocator<char> *)(v2 + 64));
    furniture_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( furniture_id_ptr && !fromJson<unsigned int>(furniture_id_ptr, &this->furniture_id) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        1040);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[33])"fromJson for: furnitureID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "position",
        (const std::allocator<char> *)(v2 + 80));
      position_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( position_ptr && !data::Vector::fromJson(&this->position, position_ptr) )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          1052);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[30])"fromJson for: position fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "rotation",
          (const std::allocator<char> *)(v2 + 96));
        rotation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( rotation_ptr && !data::Vector::fromJson(&this->rotation, rotation_ptr) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            1064);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[30])"fromJson for: rotation fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            "parentIndex",
            (const std::allocator<char> *)(v2 + 112));
          parent_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( parent_index_ptr && !fromJson<int>(parent_index_ptr, &this->parent_index) )
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigHomeWorld.cpp",
              "fromJson",
              1076);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[33])"fromJson for: parentIndex fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            v6 = ((_BYTE)this + 44) & 7;
            v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
            if ( (_BYTE)v7 )
              __asan_report_store1(&this->is_json_loaded, v6, v7);
            this->is_json_loaded = 1;
            result = 1;
          }
        }
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 1084: range 0000000011F289AA-0000000011F28BF7
int32_t __cdecl data::ConfigHomeworldGroupUnit::getHashValue(const data::ConfigHomeworldGroupUnit *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1085";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldGroupUnit::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->group_config_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->furniture_id);
  }
  common::tools::HashUtils::appendHash(this->furniture_id, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->position);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->rotation);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_index);
  }
  common::tools::HashUtils::appendHash(this->parent_index, (int32_t *)(v2 + 32));
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

// Line 1095: range 0000000011F28BF8-0000000011F2900E
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigHomeworldGroupUnitList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 v8; // rax
  char v9; // dl
  data::ConfigHomeworldGroupUnit *v10; // rdx
  unsigned __int64 v11; // rdx
  bool result; // al
  std::vector<data::ConfigHomeworldGroupUnit> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v17[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 48 9 elem:1101";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    v6 = i;
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v7 = 0;
    }
    else
    {
      v8 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_WORD *)(v8 + 4) = 0;
      v9 = *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v9 != 0;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0 || v9 != 0 && (char)((v3 - 97) & 7) >= v9 )
      {
        v6 = 48LL;
        __asan_report_store_n(v3 + 112, 48LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_QWORD *)(v3 + 144) = 0LL;
      *(_QWORD *)(v3 + 152) = 0LL;
      if ( *(_BYTE *)(((v3 + 152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 152, v6);
      *(_DWORD *)(v3 + 152) = -1;
      if ( !data::ConfigHomeworldGroupUnit::fromJson((data::ConfigHomeworldGroupUnit *const)(v3 + 112), elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          1104);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v7 = 1;
      }
      else
      {
        v10 = std::move<data::ConfigHomeworldGroupUnit &>((data::ConfigHomeworldGroupUnit *)(v3 + 112));
        std::vector<data::ConfigHomeworldGroupUnit>::emplace_back<data::ConfigHomeworldGroupUnit>(va, v10, v10);
        v7 = 2;
      }
    }
    v11 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v11 = -117901064;
    *(_WORD *)(v11 + 4) = -1800;
    if ( v7 && v7 != 2 )
      goto LABEL_21;
  }
  v2 = 1;
LABEL_21:
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1114: range 0000000011F2900F-0000000011F2925B
int32_t __cdecl data::getVecHashValue(const data::ConfigHomeworldGroupUnitList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldGroupUnit*,std::vector<data::ConfigHomeworldGroupUnit> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1115 64 8 16 __for_begin:1116 96 8 14 __for_end:1116";
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
  *(std::vector<data::ConfigHomeworldGroupUnit>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldGroupUnit>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldGroupUnit>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldGroupUnit>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldGroupUnit const*,std::vector<data::ConfigHomeworldGroupUnit>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldGroupUnit*,std::vector<data::ConfigHomeworldGroupUnit> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldGroupUnit*,std::vector<data::ConfigHomeworldGroupUnit> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldGroupUnit const*,std::vector<data::ConfigHomeworldGroupUnit>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldGroupUnit*,std::vector<data::ConfigHomeworldGroupUnit> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldGroupUnit::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldGroupUnit const*,std::vector<data::ConfigHomeworldGroupUnit>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldGroupUnit*,std::vector<data::ConfigHomeworldGroupUnit> > *const)(v2 + 64));
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

// Line 1125: range 0000000011F2925C-0000000011F29D71
bool __cdecl data::ConfigHomeworldGroup::fromJson(data::ConfigHomeworldGroup *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigHomeworldGroupUnitList *p_group_units; // rsi
  const Json::Value *radius_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *height_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *scene_group_map_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *group_units_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldGroup::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "radius",
    (const std::allocator<char> *)(v2 + 32));
  radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( radius_ptr && !fromJson<float>(radius_ptr, &this->radius) )
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
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1135);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[28])"fromJson for: radius fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "height",
      (const std::allocator<char> *)(v2 + 48));
    height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( height_ptr && !fromJson<float>(height_ptr, &this->height) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        1147);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[28])"fromJson for: height fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "sceneGroupMap",
        (const std::allocator<char> *)(v2 + 64));
      scene_group_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( scene_group_map_ptr && !data::mapFromJson(scene_group_map_ptr, &this->scene_group_map) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          1159);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[35])"fromJson for: sceneGroupMap fails!");
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
          "groupUnits",
          (const std::allocator<char> *)(v2 + 80));
        p_group_units = (data::ConfigHomeworldGroupUnitList *)(v2 + 480);
        group_units_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( group_units_ptr
          && (p_group_units = &this->group_units, !data::vecFromJson(group_units_ptr, &this->group_units)) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            1171);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[32])"fromJson for: groupUnits fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_group_units, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 1179: range 0000000011F29D72-0000000011F29F6A
int32_t __cdecl data::ConfigHomeworldGroup::getHashValue(const data::ConfigHomeworldGroup *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1180";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldGroup::getHashValue;
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
  common::tools::HashUtils::appendHash(this->radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height);
  }
  common::tools::HashUtils::appendHash(this->height, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->scene_group_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->group_units);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 1190: range 0000000011F29F6C-0000000011F2A7FF
bool __cdecl data::ConfigHomeworldBlockAutoGen::fromJson(
        data::ConfigHomeworldBlockAutoGen *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *block_id_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *center_pos_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *center_rot_ptr; // [rsp+28h] [rbp-208h]
  char v11[512]; // [rsp+30h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldBlockAutoGen::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "blockId",
    (const std::allocator<char> *)(v2 + 48));
  block_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( block_id_ptr && !fromJson<unsigned int>(block_id_ptr, &this->block_id) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1200);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[29])"fromJson for: blockId fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "centerPos",
      (const std::allocator<char> *)(v2 + 64));
    center_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( center_pos_ptr && !data::Vector::fromJson(&this->center_pos, center_pos_ptr) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        1212);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[31])"fromJson for: centerPos fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "centerRot",
        (const std::allocator<char> *)(v2 + 80));
      center_rot_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( center_rot_ptr && !data::Vector::fromJson(&this->center_rot, center_rot_ptr) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          1224);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[31])"fromJson for: centerRot fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 36) & 7;
        v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v7 )
          __asan_report_store1(&this->is_json_loaded, v6, v7);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1232: range 0000000011F2A800-0000000011F2A9AB
int32_t __cdecl data::ConfigHomeworldBlockAutoGen::getHashValue(const data::ConfigHomeworldBlockAutoGen *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1233";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldBlockAutoGen::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->block_id, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->center_pos);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->center_rot);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 1241: range 0000000011F2A9AC-0000000011F2AD88
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigHomeworldBlockAutoGenList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  unsigned __int64 v7; // rax
  data::ConfigHomeworldBlockAutoGen *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  data::ConfigHomeworldBlockAutoGenList *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 <unknown> 112 40 9 elem:1247";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_BYTE *)(v7 + 4) = 0;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 40LL);
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      *(_QWORD *)(v3 + 120) = 0LL;
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_QWORD *)(v3 + 136) = 0LL;
      *(_QWORD *)(v3 + 144) = 0LL;
      if ( !data::ConfigHomeworldBlockAutoGen::fromJson((data::ConfigHomeworldBlockAutoGen *const)(v3 + 112), elem_jval) )
      {
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "vecFromJson",
          1250);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
        *(_DWORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v8 = std::move<data::ConfigHomeworldBlockAutoGen &>((data::ConfigHomeworldBlockAutoGen *)(v3 + 112));
        std::vector<data::ConfigHomeworldBlockAutoGen>::emplace_back<data::ConfigHomeworldBlockAutoGen>(va, v8, v8);
        v6 = 2;
      }
    }
    v9 = ((v3 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_19;
  }
  v2 = 1;
LABEL_19:
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1260: range 0000000011F2AD89-0000000011F2AFD5
int32_t __cdecl data::getVecHashValue(const data::ConfigHomeworldBlockAutoGenList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockAutoGen*,std::vector<data::ConfigHomeworldBlockAutoGen> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1261 64 8 16 __for_begin:1262 96 8 14 __for_end:1262";
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
  *(std::vector<data::ConfigHomeworldBlockAutoGen>::const_iterator *)(v2 + 64) = std::vector<data::ConfigHomeworldBlockAutoGen>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigHomeworldBlockAutoGen>::const_iterator *)(v2 + 96) = std::vector<data::ConfigHomeworldBlockAutoGen>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigHomeworldBlockAutoGen const*,std::vector<data::ConfigHomeworldBlockAutoGen>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockAutoGen*,std::vector<data::ConfigHomeworldBlockAutoGen> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockAutoGen*,std::vector<data::ConfigHomeworldBlockAutoGen> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigHomeworldBlockAutoGen const*,std::vector<data::ConfigHomeworldBlockAutoGen>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockAutoGen*,std::vector<data::ConfigHomeworldBlockAutoGen> > *const)(v2 + 64));
    HashValue = data::ConfigHomeworldBlockAutoGen::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigHomeworldBlockAutoGen const*,std::vector<data::ConfigHomeworldBlockAutoGen>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeworldBlockAutoGen*,std::vector<data::ConfigHomeworldBlockAutoGen> > *const)(v2 + 64));
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

// Line 1271: range 0000000011F2AFD6-0000000011F2B5B9
bool __cdecl data::ConfigHomeworldSceneAutoGen::fromJson(
        data::ConfigHomeworldSceneAutoGen *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigHomeworldBlockAutoGenList *p_block_list; // rsi
  const Json::Value *scene_id_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *block_list_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldSceneAutoGen::fromJson;
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
    "sceneId",
    (const std::allocator<char> *)(v2 + 32));
  scene_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( scene_id_ptr && !fromJson<unsigned int>(scene_id_ptr, &this->scene_id) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1281);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[29])"fromJson for: sceneId fails!");
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
      "blockList",
      (const std::allocator<char> *)(v2 + 48));
    p_block_list = (data::ConfigHomeworldBlockAutoGenList *)(v2 + 192);
    block_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( block_list_ptr && (p_block_list = &this->block_list, !data::vecFromJson(block_list_ptr, &this->block_list)) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        1293);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: blockList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_block_list, &this->is_json_loaded);
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

// Line 1301: range 0000000011F2B5BA-0000000011F2B73C
int32_t __cdecl data::ConfigHomeworldSceneAutoGen::getHashValue(const data::ConfigHomeworldSceneAutoGen *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1302";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeworldSceneAutoGen::getHashValue;
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
  common::tools::HashUtils::appendHash(this->scene_id, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->block_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 1309: range 0000000011F2B73D-0000000011F2C4EB
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigHomeFishtankPosMap *m)
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
  std::vector<data::ConfigHomeCommonPos> *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 8 key:1314 48 16 8 cit:1311 80 16 9 <unknown> 112 24 10 value:1327 176 32 12 key_str:131"
                        "5 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown>"
                        " 560 40 13 tmp_jval:1310 640 40 13 key_jval:1313 720 40 15 value_jval:1326";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
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
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 560), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 560));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 560));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 89) & 7) >= *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 640, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 640));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 640), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        1318);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 640));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<unsigned int>(
                (const std::string *)(v3 + 176),
                (unsigned int *)(v3 + 32),
                1) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        1323);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 720) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 720), v12);
      v13 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 0;
      std::vector<data::ConfigHomeCommonPos>::vector((std::vector<data::ConfigHomeCommonPos> *const)(v3 + 112));
      if ( !data::vecFromJson((const Json::Value *)(v3 + 720), (data::ConfigHomeCommonPosList *)(v3 + 112)) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "mapFromJson",
          1330);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::emplace<unsigned int &,std::vector<data::ConfigHomeCommonPos>&>(
                m,
                (unsigned int *)(v3 + 32),
                (std::vector<data::ConfigHomeCommonPos> *)(v3 + 112),
                (unsigned int *)(v3 + 32),
                v14);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "mapFromJson",
            1335);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      std::vector<data::ConfigHomeCommonPos>::~vector((std::vector<data::ConfigHomeCommonPos> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 720));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 640));
    v19 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    v21 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v22 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 560));
  if ( v24 == (char *)v3 )
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
  return v2;
};

// Line 1344: range 0000000011F2C4EC-0000000011F2C7BC
int32_t __cdecl data::getMapHashValue(const data::ConfigHomeFishtankPosMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t VecHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  uint32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1345 64 8 16 __for_begin:1346 96 8 14 __for_end:1346";
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
  *(std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::end(map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,unsigned int const,std::vector<data::ConfigHomeCommonPos>>(v7);
    val = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ConfigHomeCommonPos>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    VecHashValue = data::getVecHashValue(val);
    common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false,false> *const)(v2 + 64));
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

// Line 1358: range 0000000011F2C7BE-0000000011F2D7E2
bool __cdecl data::ConfigHomeFishtank::fromJson(data::ConfigHomeFishtank *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigHomeFishtankPosMap *p_fish_born_pos_map; // rsi
  const Json::Value *max_fish_count_ptr; // [rsp+10h] [rbp-3D0h]
  const Json::Value *water_height_ptr; // [rsp+18h] [rbp-3C8h]
  const Json::Value *fish_min_height_limit_ptr; // [rsp+20h] [rbp-3C0h]
  const Json::Value *initial_pose_ptr; // [rsp+28h] [rbp-3B8h]
  const Json::Value *fish_scale_ptr; // [rsp+30h] [rbp-3B0h]
  const Json::Value *fish_born_pos_map_ptr; // [rsp+38h] [rbp-3A8h]
  char v14[928]; // [rsp+40h] [rbp-3A0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <u"
                        "nknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishtank::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "maxFishCount",
    (const std::allocator<char> *)(v2 + 32));
  max_fish_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( max_fish_count_ptr && !fromJson<unsigned int>(max_fish_count_ptr, &this->max_fish_count) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1368);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[34])"fromJson for: maxFishCount fails!");
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
      "waterHeight",
      (const std::allocator<char> *)(v2 + 48));
    water_height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( water_height_ptr && !fromJson<float>(water_height_ptr, &this->water_height) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        1380);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[33])"fromJson for: waterHeight fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "fishMinHeightLimit",
        (const std::allocator<char> *)(v2 + 64));
      fish_min_height_limit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( fish_min_height_limit_ptr && !fromJson<float>(fish_min_height_limit_ptr, &this->fish_min_height_limit) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          1392);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[40])"fromJson for: fishMinHeightLimit fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "initialPose",
          (const std::allocator<char> *)(v2 + 80));
        initial_pose_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( initial_pose_ptr && !fromJson<unsigned int>(initial_pose_ptr, &this->initial_pose) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            1404);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[33])"fromJson for: initialPose fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            "fishScale",
            (const std::allocator<char> *)(v2 + 96));
          fish_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( fish_scale_ptr && !fromJson<float>(fish_scale_ptr, &this->fish_scale) )
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigHomeWorld.cpp",
              "fromJson",
              1416);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[31])"fromJson for: fishScale fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              "fishBornPosMap",
              (const std::allocator<char> *)(v2 + 112));
            p_fish_born_pos_map = (data::ConfigHomeFishtankPosMap *)(v2 + 768);
            fish_born_pos_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( fish_born_pos_map_ptr
              && (p_fish_born_pos_map = &this->fish_born_pos_map,
                  !data::mapFromJson(fish_born_pos_map_ptr, &this->fish_born_pos_map)) )
            {
              *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 832, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 832),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigHomeWorld.cpp",
                "fromJson",
                1428);
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[36])"fromJson for: fishBornPosMap fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
              result = 0;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&this->is_json_loaded, p_fish_born_pos_map, &this->is_json_loaded);
              this->is_json_loaded = 1;
              result = 1;
            }
          }
        }
      }
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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
  }
  return result;
};

// Line 1436: range 0000000011F2D7E4-0000000011F2DA99
int32_t __cdecl data::ConfigHomeFishtank::getHashValue(const data::ConfigHomeFishtank *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1437";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishtank::getHashValue;
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
  common::tools::HashUtils::appendHash(this->max_fish_count, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->water_height);
  }
  common::tools::HashUtils::appendHash(this->water_height, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_min_height_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_min_height_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fish_min_height_limit);
  }
  common::tools::HashUtils::appendHash(this->fish_min_height_limit, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->initial_pose);
  }
  common::tools::HashUtils::appendHash(this->initial_pose, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fish_scale);
  }
  common::tools::HashUtils::appendHash(this->fish_scale, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->fish_born_pos_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// Line 1448: range 0000000011F2DA9A-0000000011F2E882
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigHomeFishtankMap *m)
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
  data::ConfigHomeFishtank *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ConfigHomeFishtank>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[912]; // [rsp+20h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 8 key:1453 48 16 8 cit:1450 80 16 9 <unknown> 112 32 12 key_str:1454 176 32 9 <unknown> "
                        "240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 13 tmp_jval:1"
                        "449 576 40 13 key_jval:1452 656 40 15 value_jval:1465 736 88 10 value:1466";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
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
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
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
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 112);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 112)) )
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        1457);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 240), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 240));
      std::string::~string((void *)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<unsigned int>(
                (const std::string *)(v3 + 112),
                (unsigned int *)(v3 + 32),
                1) )
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        1462);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 304),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 656), v12);
      v13 = ((v3 + 736) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_DWORD *)(v13 + 4) = 0;
      *(_WORD *)(v13 + 8) = 0;
      *(_BYTE *)(v13 + 10) = 0;
      data::ConfigHomeFishtank::ConfigHomeFishtank((data::ConfigHomeFishtank *const)(v3 + 736));
      if ( !data::ConfigHomeFishtank::fromJson(
              (data::ConfigHomeFishtank *const)(v3 + 736),
              (const Json::Value *)(v3 + 656)) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "mapFromJson",
          1469);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<unsigned int,data::ConfigHomeFishtank>::emplace<unsigned int &,data::ConfigHomeFishtank&>(
                m,
                (unsigned int *)(v3 + 32),
                (data::ConfigHomeFishtank *)(v3 + 736),
                (unsigned int *)(v3 + 32),
                v14);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "mapFromJson",
            1474);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      data::ConfigHomeFishtank::~ConfigHomeFishtank((data::ConfigHomeFishtank *const)(v3 + 736));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 112));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v19 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    v21 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_DWORD *)(v21 + 4) = -117901064;
    *(_WORD *)(v21 + 8) = -1800;
    *(_BYTE *)(v21 + 10) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v22 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v24 == (char *)v3 )
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
  return v2;
};

// Line 1483: range 0000000011F2E883-0000000011F2EB53
int32_t __cdecl data::getMapHashValue(const data::ConfigHomeFishtankMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishtank>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  uint32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeFishtank> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1484 64 8 16 __for_begin:1485 96 8 14 __for_end:1485";
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
  *(std::unordered_map<unsigned int,data::ConfigHomeFishtank>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ConfigHomeFishtank>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<unsigned int,data::ConfigHomeFishtank>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ConfigHomeFishtank>::end(map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ConfigHomeFishtank>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeFishtank>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeFishtank>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishtank>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishtank>,false,false> *const)(v2 + 64));
    key = std::get<0ul,unsigned int const,data::ConfigHomeFishtank>(v7);
    val = (std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeFishtank> >::type *)std::get<1ul,unsigned int const,data::ConfigHomeFishtank>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigHomeFishtank::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishtank>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFishtank>,false,false> *const)(v2 + 64));
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

// Line 1497: range 0000000011F2EB54-0000000011F2EEA9
bool __cdecl data::ConfigHomeFishtankSet::fromJson(data::ConfigHomeFishtankSet *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigHomeFishtankSet *v5; // rsi
  bool result; // al
  const Json::Value *fishtank_map_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishtankSet::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "fishtankMap",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigHomeFishtankSet *)(v2 + 64);
  fishtank_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( fishtank_map_ptr && (v5 = this, !data::mapFromJson(fishtank_map_ptr, &this->fishtank_map)) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1507);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[33])"fromJson for: fishtankMap fails!");
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

// Line 1515: range 0000000011F2EEAA-0000000011F2EFE4
int32_t __cdecl data::ConfigHomeFishtankSet::getHashValue(const data::ConfigHomeFishtankSet *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1516";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFishtankSet::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->fishtank_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// Line 1523: range 0000000011F2EFE6-0000000011F2FB00
bool __cdecl data::ConfigHomeFurnitureFloatIndicator::fromJson(
        data::ConfigHomeFurnitureFloatIndicator *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *up_offset_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *down_offset_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *up_scale_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *down_scale_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFurnitureFloatIndicator::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "upOffset",
    (const std::allocator<char> *)(v2 + 32));
  up_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( up_offset_ptr && !fromJson<float>(up_offset_ptr, &this->up_offset) )
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
      3u,
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1533);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[30])"fromJson for: upOffset fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "downOffset",
      (const std::allocator<char> *)(v2 + 48));
    down_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( down_offset_ptr && !fromJson<float>(down_offset_ptr, &this->down_offset) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "fromJson",
        1545);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[32])"fromJson for: downOffset fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "upScale",
        (const std::allocator<char> *)(v2 + 64));
      up_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( up_scale_ptr && !fromJson<float>(up_scale_ptr, &this->up_scale) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "fromJson",
          1557);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[29])"fromJson for: upScale fails!");
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
          "downScale",
          (const std::allocator<char> *)(v2 + 80));
        down_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( down_scale_ptr && !fromJson<float>(down_scale_ptr, &this->down_scale) )
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
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "fromJson",
            1569);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[31])"fromJson for: downScale fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 16) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 1577: range 0000000011F2FB02-0000000011F2FD66
int32_t __cdecl data::ConfigHomeFurnitureFloatIndicator::getHashValue(
        const data::ConfigHomeFurnitureFloatIndicator *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1578";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFurnitureFloatIndicator::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->up_offset, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->down_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->down_offset);
  }
  common::tools::HashUtils::appendHash(this->down_offset, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->up_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->up_scale);
  }
  common::tools::HashUtils::appendHash(this->up_scale, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->down_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->down_scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->down_scale);
  }
  common::tools::HashUtils::appendHash(this->down_scale, (int32_t *)(v2 + 32));
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

// Line 1587: range 0000000011F2FD67-0000000011F30C22
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigHomeFurnitureFloatIndicatorMap *m)
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
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  data::ConfigHomeFurnitureFloatIndicator *v16; // r8
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  char v27[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 8 key:1592 48 16 8 cit:1589 80 16 9 <unknown> 112 20 10 value:1605 176 32 12 key_str:159"
                        "3 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown>"
                        " 560 40 13 tmp_jval:1588 640 40 13 key_jval:1591 720 40 15 value_jval:1604";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959356;
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
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 560), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 560));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 560));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 89) & 7) >= *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 640, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 640));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 640), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        1596);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 640));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<unsigned int>(
                (const std::string *)(v3 + 176),
                (unsigned int *)(v3 + 32),
                1) )
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
        "./src/json_data_auto/ConfigHomeWorld.cpp",
        "mapFromJson",
        1601);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 720) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 720), v12);
      v13 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 4;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 112, v12);
      *(_DWORD *)(v3 + 112) = 0;
      v14 = (((_BYTE)v3 + 116) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 116, v14);
      }
      *(_DWORD *)(v3 + 116) = 0;
      if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 120, v14);
      *(_DWORD *)(v3 + 120) = 0;
      v15 = (((_BYTE)v3 + 124) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 124) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 124) & 7) + 3) >= *(_BYTE *)(((v3 + 124) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 124, v15);
      }
      *(_DWORD *)(v3 + 124) = 0;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 128, v15, v3 + 128);
      *(_BYTE *)(v3 + 128) = 0;
      if ( !data::ConfigHomeFurnitureFloatIndicator::fromJson(
              (data::ConfigHomeFurnitureFloatIndicator *const)(v3 + 112),
              (const Json::Value *)(v3 + 720)) )
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
          "./src/json_data_auto/ConfigHomeWorld.cpp",
          "mapFromJson",
          1608);
        v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v18 = 0;
      }
      else
      {
        v19 = std::unordered_map<unsigned int,data::ConfigHomeFurnitureFloatIndicator>::emplace<unsigned int &,data::ConfigHomeFurnitureFloatIndicator&>(
                m,
                (unsigned int *)(v3 + 32),
                (data::ConfigHomeFurnitureFloatIndicator *)(v3 + 112),
                (unsigned int *)(v3 + 32),
                v16);
        if ( !v19.second )
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigHomeWorld.cpp",
            "mapFromJson",
            1613);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v18 = 0;
        }
        else
        {
          v18 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 720));
      v9 = v18 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 640));
    v21 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_46;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v24 = 1;
LABEL_46:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v24 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 560));
  if ( v27 == (char *)v3 )
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
  return v2;
};

// Line 1622: range 0000000011F30C23-0000000011F30EF3
int32_t __cdecl data::getMapHashValue(const data::ConfigHomeFurnitureFloatIndicatorMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  uint32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1623 64 8 16 __for_begin:1624 96 8 14 __for_end:1624";
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
  *(std::unordered_map<unsigned int,data::ConfigHomeFurnitureFloatIndicator>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ConfigHomeFurnitureFloatIndicator>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<unsigned int,data::ConfigHomeFurnitureFloatIndicator>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ConfigHomeFurnitureFloatIndicator>::end(map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false,false> *const)(v2 + 64));
    key = std::get<0ul,unsigned int const,data::ConfigHomeFurnitureFloatIndicator>(v7);
    val = (std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator> >::type *)std::get<1ul,unsigned int const,data::ConfigHomeFurnitureFloatIndicator>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigHomeFurnitureFloatIndicator::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeFurnitureFloatIndicator>,false,false> *const)(v2 + 64));
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

// Line 1636: range 0000000011F30EF4-0000000011F31249
bool __cdecl data::ConfigHomeFurnitureFloatIndicatorSet::fromJson(
        data::ConfigHomeFurnitureFloatIndicatorSet *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigHomeFurnitureFloatIndicatorSet *v5; // rsi
  bool result; // al
  const Json::Value *float_indicator_map_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFurnitureFloatIndicatorSet::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "floatIndicatorMap",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigHomeFurnitureFloatIndicatorSet *)(v2 + 64);
  float_indicator_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( float_indicator_map_ptr && (v5 = this, !data::mapFromJson(float_indicator_map_ptr, &this->float_indicator_map)) )
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
      "./src/json_data_auto/ConfigHomeWorld.cpp",
      "fromJson",
      1646);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[39])"fromJson for: floatIndicatorMap fails!");
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

// Line 1654: range 0000000011F3124A-0000000011F31384
int32_t __cdecl data::ConfigHomeFurnitureFloatIndicatorSet::getHashValue(
        const data::ConfigHomeFurnitureFloatIndicatorSet *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1655";
  *(_QWORD *)(v2 + 16) = data::ConfigHomeFurnitureFloatIndicatorSet::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->float_indicator_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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
