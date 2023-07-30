// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigElementType.cpp

// Line 19: range 000000001211EACD-000000001211EDE7
const char *__cdecl data::enumValToStr(data::ElementType e)
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
    case None_0:
      result = "None";
      break;
    case Fire:
      result = "Fire";
      break;
    case Water:
      result = "Water";
      break;
    case Grass:
      result = "Grass";
      break;
    case Electric:
      result = "Electric";
      break;
    case Ice:
      result = off_1A90EFA0;
      break;
    case Frozen:
      result = "Frozen";
      break;
    case Wind:
      result = "Wind";
      break;
    case Rock:
      result = "Rock";
      break;
    case AntiFire:
      result = "AntiFire";
      break;
    case VehicleMuteIce:
      result = "VehicleMuteIce";
      break;
    case Mushroom:
      result = "Mushroom";
      break;
    case Overdose:
      result = "Overdose";
      break;
    case Wood:
      result = "Wood";
      break;
    case COUNT:
      result = "COUNT";
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
        "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
        "enumValToStr",
        53);
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

// Line 59: range 000000001211EDE8-000000001211FDAB
bool __cdecl data::enumStrToVal(const std::string *s, data::ElementType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::ElementType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ElementType> >::pointer v10; // rax
  data::ElementType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::ElementType *ea; // [rsp+10h] [rbp-520h]
  char v16[1296]; // [rsp+20h] [rbp-510h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 8 5 it:83 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 600 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862754] = -218103808;
  v4[536862755] = -202116109;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
      "enumStrToVal",
      62);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ElementType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ElementType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[5],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 512),
        (const char (*)[5])"None",
        (data::ElementType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[5],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 552),
        (const char (*)[5])"Fire",
        (data::ElementType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Fire");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[6],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 592),
        (const char (*)[6])"Water",
        (data::ElementType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Water");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[6],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 632),
        (const char (*)[6])"Grass",
        (data::ElementType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Grass");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[9],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 672),
        (const char (*)[9])"Electric",
        (data::ElementType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Electric");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[4],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 712),
        (const char (*)[4])off_1A90EFA0,
        (data::ElementType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, off_1A90EFA0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[7],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 752),
        (const char (*)[7])"Frozen",
        (data::ElementType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Frozen");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[5],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 792),
        (const char (*)[5])"Wind",
        (data::ElementType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Wind");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[5],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 832),
        (const char (*)[5])"Rock",
        (data::ElementType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Rock");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[9],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 872),
        (const char (*)[9])"AntiFire",
        (data::ElementType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "AntiFire");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[15],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 912),
        (const char (*)[15])"VehicleMuteIce",
        (data::ElementType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "VehicleMuteIce");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[9],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 952),
        (const char (*)[9])"Mushroom",
        (data::ElementType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "Mushroom");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[9],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 992),
        (const char (*)[9])"Overdose",
        (data::ElementType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "Overdose");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[5],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 1032),
        (const char (*)[5])"Wood",
        (data::ElementType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Wood");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::ElementType>::pair<char const(&)[6],data::ElementType,true>(
        (std::pair<const std::string,data::ElementType> *const)(v2 + 1072),
        (const char (*)[6])"COUNT",
        (data::ElementType *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::ElementType>>::allocator((std::allocator<std::pair<const std::string,data::ElementType> > *const)(v2 + 64));
      std::map<std::string,data::ElementType>::map(
        &data::enumStrToVal(std::string const&,data::ElementType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ElementType> >)__PAIR128__(15LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ElementType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ElementType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ElementType>::~map,
        &data::enumStrToVal(std::string const&,data::ElementType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ElementType>>::~allocator((std::allocator<std::pair<const std::string,data::ElementType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ElementType> *)(v2 + 1112);
            i != (std::pair<const std::string,data::ElementType> *)(v2 + 512);
            std::pair<std::string const,data::ElementType>::~pair(i) )
      {
        --i;
      }
      e = (data::ElementType *)600;
      __asan_poison_stack_memory(v2 + 512, 600LL);
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, e);
    *(std::map<std::string,data::ElementType>::iterator *)(v2 + 320) = std::map<std::string,data::ElementType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::ElementType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::ElementType>::iterator *)(v2 + 352) = std::map<std::string,data::ElementType>::end(&data::enumStrToVal(std::string const&,data::ElementType &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementType> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementType> >::_Self *)(v2 + 352));
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
        "enumStrToVal",
        86);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ElementType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ElementType> > *const)(v2 + 320));
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
      v5 = 1;
    }
  }
  v13 = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v16);
  }
  return v13;
};

// Line 94: range 000000001211FDAC-000000001211FE72
const char *__cdecl data::getDescription(data::ElementType e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_0:
      result = (const char *)&off_1A8C3E00;
      break;
    case Fire:
      result = (const char *)&off_1A90F180;
      break;
    case Water:
      result = (const char *)&off_1A90F1C0;
      break;
    case Grass:
      result = (const char *)&off_1A90F200;
      break;
    case Electric:
      result = (const char *)&off_1A90F240;
      break;
    case Ice:
      result = (const char *)&off_1A90F280;
      break;
    case Frozen:
      result = (const char *)&unk_1A90F2C0;
      break;
    case Wind:
      result = (const char *)&off_1A90F300;
      break;
    case Rock:
      result = (const char *)&off_1A90F340;
      break;
    case AntiFire:
      result = (const char *)&unk_1A90F380;
      break;
    case VehicleMuteIce:
      result = (const char *)&unk_1A90F3C0;
      break;
    case Mushroom:
      result = (const char *)&unk_1A90F400;
      break;
    case Overdose:
      result = (const char *)&unk_1A90F460;
      break;
    case Wood:
      result = (const char *)&unk_1A90F500;
      break;
    case COUNT:
      result = (const char *)&unk_1A90F580;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 133: range 000000001211FE73-0000000012120645
const char *__cdecl data::enumValToStr(data::AbilityState e)
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
  if ( e == OvergrowVariation )
  {
    result = "OvergrowVariation";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > OvergrowVariation )
    goto LABEL_94;
  if ( e == ElementDeadTime )
  {
    result = "ElementDeadTime";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementDeadTime )
    goto LABEL_94;
  if ( e == UnlockFrequencyLimit )
  {
    result = "UnlockFrequencyLimit";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > UnlockFrequencyLimit )
    goto LABEL_94;
  if ( e == Corruption )
  {
    result = "Corruption";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > Corruption )
    goto LABEL_94;
  if ( e == ElementOverdose )
  {
    result = "ElementOverdose";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementOverdose )
    goto LABEL_94;
  if ( e == ElementGrass )
  {
    result = "ElementGrass";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementGrass )
    goto LABEL_94;
  if ( e == IgnoreAddEnergy )
  {
    result = "IgnoreAddEnergy";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > IgnoreAddEnergy )
    goto LABEL_94;
  if ( e == ElementPetrifaction )
  {
    result = "ElementPetrifaction";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementPetrifaction )
    goto LABEL_94;
  if ( e == MuteTaunt )
  {
    result = "MuteTaunt";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > MuteTaunt )
    goto LABEL_94;
  if ( e == Limbo )
  {
    result = "Limbo";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > Limbo )
    goto LABEL_94;
  if ( (Elf64_Sym *)e == &stru_2000000 )
  {
    result = "NoHeal";
    goto LABEL_99;
  }
  if ( e > (unsigned __int64)&stru_2000000 )
    goto LABEL_94;
  if ( e == ElementFire )
  {
    result = "ElementFire";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementFire )
    goto LABEL_94;
  if ( e == ElementElectric )
  {
    result = "ElementElectric";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementElectric )
    goto LABEL_94;
  if ( (int *)e == &dword_400000 )
  {
    result = "ElementWind";
    goto LABEL_99;
  }
  if ( e > (unsigned __int64)&dword_400000 )
    goto LABEL_94;
  if ( e == SpeedDown )
  {
    result = "SpeedDown";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > SpeedDown )
    goto LABEL_94;
  if ( e == DefenseDown )
  {
    result = "DefenseDown";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > DefenseDown )
    goto LABEL_94;
  if ( e == SpeedUp )
  {
    result = "SpeedUp";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > SpeedUp )
    goto LABEL_94;
  if ( e == DefenseUp )
  {
    result = "DefenseUp";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > DefenseUp )
    goto LABEL_94;
  if ( e == AttackUp )
  {
    result = "AttackUp";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > AttackUp )
    goto LABEL_94;
  if ( e == ElementFreeze )
  {
    result = "ElementFreeze";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementFreeze )
    goto LABEL_94;
  if ( e == ElementIce )
  {
    result = "ElementIce";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementIce )
    goto LABEL_94;
  if ( e == ElementRock )
  {
    result = "ElementRock";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementRock )
    goto LABEL_94;
  if ( e == Struggle )
  {
    result = "Struggle";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > Struggle )
    goto LABEL_94;
  if ( e == ElementShock )
  {
    result = "ElementShock";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > ElementShock )
    goto LABEL_94;
  if ( e == IgnoreTriggerBullet )
  {
    result = "IgnoreTriggerBullet";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > IgnoreTriggerBullet )
    goto LABEL_94;
  if ( e == LockHP )
  {
    result = "LockHP";
    goto LABEL_99;
  }
  if ( (unsigned __int64)e > LockHP )
    goto LABEL_94;
  if ( (unsigned __int64)e > ElementWet )
  {
    if ( e == ElementFrozen )
    {
      result = "ElementFrozen";
      goto LABEL_99;
    }
LABEL_94:
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
      "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
      "enumValToStr",
      205);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LODWORD(e) = v1 + 48;
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = e;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = (const char *)&unk_1A891C40;
    goto LABEL_99;
  }
  switch ( e )
  {
    case None_5:
      result = "None";
      break;
    case Invincible:
      result = "Invincible";
      break;
    case DenyLockOn:
      result = "DenyLockOn";
      break;
    case IsGhostToAllied:
      result = "IsGhostToAllied";
      break;
    case IsGhostToEnemy:
      result = "IsGhostToEnemy";
      break;
    case ElementBurning:
      result = "ElementBurning";
      break;
    case ElementWet:
      result = "ElementWet";
      break;
    default:
      goto LABEL_94;
  }
LABEL_99:
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

// Line 211: range 0000000012120646-0000000012122178
bool __cdecl data::enumStrToVal(const std::string *s, data::AbilityState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::AbilityState> *i; // r14
  bool v7; // al
  common::milog::MiLogStream *v8; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityState> >::pointer v9; // rax
  data::AbilityState second; // rdx
  bool v11; // bl
  data::AbilityState *ea; // [rsp+10h] [rbp-B60h]
  char v14[2896]; // [rsp+20h] [rbp-B50h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2848LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "41 48 1 9 <unknown> 64 1 9 <unknown> 80 8 9 <unknown> 112 8 9 <unknown> 144 8 9 <unknown> 176 8 "
                        "9 <unknown> 208 8 9 <unknown> 240 8 9 <unknown> 272 8 9 <unknown> 304 8 9 <unknown> 336 8 9 <unk"
                        "nown> 368 8 9 <unknown> 400 8 9 <unknown> 432 8 9 <unknown> 464 8 9 <unknown> 496 8 9 <unknown> "
                        "528 8 9 <unknown> 560 8 9 <unknown> 592 8 9 <unknown> 624 8 9 <unknown> 656 8 9 <unknown> 688 8 "
                        "9 <unknown> 720 8 9 <unknown> 752 8 9 <unknown> 784 8 9 <unknown> 816 8 9 <unknown> 848 8 9 <unk"
                        "nown> 880 8 9 <unknown> 912 8 9 <unknown> 944 8 9 <unknown> 976 8 9 <unknown> 1008 8 9 <unknown>"
                        " 1040 8 9 <unknown> 1072 8 9 <unknown> 1104 8 9 <unknown> 1136 8 9 <unknown> 1168 8 6 it:254 120"
                        "0 8 9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 1360 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61953;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = 62194;
  v4[536862737] = -234881024;
  v4[536862738] = 62194;
  v4[536862738] = -234881024;
  v4[536862739] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = 62194;
  v4[536862740] = -234881024;
  v4[536862741] = 62194;
  v4[536862741] = -234881024;
  v4[536862742] = 62194;
  v4[536862742] = -234881024;
  v4[536862743] = 62194;
  v4[536862743] = -234881024;
  v4[536862744] = 62194;
  v4[536862744] = -234881024;
  v4[536862745] = 62194;
  v4[536862745] = -234881024;
  v4[536862746] = 62194;
  v4[536862746] = -234881024;
  v4[536862747] = 62194;
  v4[536862747] = -234881024;
  v4[536862748] = 62194;
  v4[536862748] = -234881024;
  v4[536862749] = 62194;
  v4[536862749] = -234881024;
  v4[536862750] = 62194;
  v4[536862750] = -234881024;
  v4[536862751] = 62194;
  v4[536862751] = -234881024;
  v4[536862752] = 62194;
  v4[536862752] = -234881024;
  v4[536862753] = 62194;
  v4[536862753] = -234881024;
  v4[536862754] = 62194;
  v4[536862754] = -234881024;
  v4[536862755] = 62194;
  v4[536862755] = -234881024;
  v4[536862756] = 62194;
  v4[536862756] = -234881024;
  v4[536862757] = 62194;
  v4[536862757] = -234881024;
  v4[536862758] = 62194;
  v4[536862759] = -219021312;
  v4[536862760] = 62194;
  v4[536862761] = -219021312;
  v4[536862762] = 62194;
  v4[536862805] = -202116109;
  v4[536862806] = -202116109;
  v4[536862807] = -202116109;
  v4[536862808] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 1232) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1232, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1232),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
      "enumStrToVal",
      214);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 1232),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1232));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::AbilityState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::AbilityState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 80, e);
      *(_QWORD *)(v2 + 80) = 0LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[5],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1360),
        (const char (*)[5])"None",
        (data::AbilityState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 112, "None");
      *(_QWORD *)(v2 + 112) = 1LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[11],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1400),
        (const char (*)[11])"Invincible",
        (data::AbilityState *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, "Invincible");
      *(_QWORD *)(v2 + 144) = 2LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[11],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1440),
        (const char (*)[11])"DenyLockOn",
        (data::AbilityState *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, "DenyLockOn");
      *(_QWORD *)(v2 + 176) = 4LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[16],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1480),
        (const char (*)[16])"IsGhostToAllied",
        (data::AbilityState *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, "IsGhostToAllied");
      *(_QWORD *)(v2 + 208) = 8LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[15],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1520),
        (const char (*)[15])"IsGhostToEnemy",
        (data::AbilityState *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, "IsGhostToEnemy");
      *(_QWORD *)(v2 + 240) = 16LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[15],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1560),
        (const char (*)[15])"ElementBurning",
        (data::AbilityState *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 272, "ElementBurning");
      *(_QWORD *)(v2 + 272) = 32LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[11],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1600),
        (const char (*)[11])"ElementWet",
        (data::AbilityState *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 304, "ElementWet");
      *(_QWORD *)(v2 + 304) = 128LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[14],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1640),
        (const char (*)[14])"ElementFrozen",
        (data::AbilityState *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 336, "ElementFrozen");
      *(_QWORD *)(v2 + 336) = 512LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[7],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1680),
        (const char (*)[7])"LockHP",
        (data::AbilityState *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 368, "LockHP");
      *(_QWORD *)(v2 + 368) = 1024LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[20],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1720),
        (const char (*)[20])"IgnoreTriggerBullet",
        (data::AbilityState *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 400, "IgnoreTriggerBullet");
      *(_QWORD *)(v2 + 400) = 2048LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[13],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1760),
        (const char (*)[13])"ElementShock",
        (data::AbilityState *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 432, "ElementShock");
      *(_QWORD *)(v2 + 432) = 4096LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[9],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1800),
        (const char (*)[9])"Struggle",
        (data::AbilityState *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 464, "Struggle");
      *(_QWORD *)(v2 + 464) = 0x2000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[12],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1840),
        (const char (*)[12])"ElementRock",
        (data::AbilityState *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 496, "ElementRock");
      *(_QWORD *)(v2 + 496) = 0x8000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[11],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1880),
        (const char (*)[11])"ElementIce",
        (data::AbilityState *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 528, "ElementIce");
      *(_QWORD *)(v2 + 528) = 0x10000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[14],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1920),
        (const char (*)[14])"ElementFreeze",
        (data::AbilityState *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 560, "ElementFreeze");
      *(_QWORD *)(v2 + 560) = 0x20000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[9],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 1960),
        (const char (*)[9])"AttackUp",
        (data::AbilityState *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 592, "AttackUp");
      *(_QWORD *)(v2 + 592) = 0x40000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[10],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2000),
        (const char (*)[10])"DefenseUp",
        (data::AbilityState *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 624, "DefenseUp");
      *(_QWORD *)(v2 + 624) = 0x80000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[8],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2040),
        (const char (*)[8])"SpeedUp",
        (data::AbilityState *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 656, "SpeedUp");
      *(_QWORD *)(v2 + 656) = 0x100000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[12],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2080),
        (const char (*)[12])"DefenseDown",
        (data::AbilityState *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 688, "DefenseDown");
      *(_QWORD *)(v2 + 688) = 0x200000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[10],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2120),
        (const char (*)[10])"SpeedDown",
        (data::AbilityState *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 720, "SpeedDown");
      *(_QWORD *)(v2 + 720) = &dword_400000;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[12],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2160),
        (const char (*)[12])"ElementWind",
        (data::AbilityState *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 752, "ElementWind");
      *(_QWORD *)(v2 + 752) = 0x800000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[16],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2200),
        (const char (*)[16])"ElementElectric",
        (data::AbilityState *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 784, "ElementElectric");
      *(_QWORD *)(v2 + 784) = 0x1000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[12],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2240),
        (const char (*)[12])"ElementFire",
        (data::AbilityState *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 816, "ElementFire");
      *(_QWORD *)(v2 + 816) = &stru_2000000;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[7],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2280),
        (const char (*)[7])"NoHeal",
        (data::AbilityState *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 848, "NoHeal");
      *(_QWORD *)(v2 + 848) = 0x4000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[6],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2320),
        (const char (*)[6])"Limbo",
        (data::AbilityState *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 880, "Limbo");
      *(_QWORD *)(v2 + 880) = 0x8000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[10],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2360),
        (const char (*)[10])"MuteTaunt",
        (data::AbilityState *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 912, "MuteTaunt");
      *(_QWORD *)(v2 + 912) = 0x10000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[20],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2400),
        (const char (*)[20])"ElementPetrifaction",
        (data::AbilityState *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 944, "ElementPetrifaction");
      *(_QWORD *)(v2 + 944) = 0x40000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[16],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2440),
        (const char (*)[16])"IgnoreAddEnergy",
        (data::AbilityState *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 976, "IgnoreAddEnergy");
      *(_QWORD *)(v2 + 976) = 0x80000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[13],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2480),
        (const char (*)[13])"ElementGrass",
        (data::AbilityState *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 1008, "ElementGrass");
      *(_QWORD *)(v2 + 1008) = 0x100000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[16],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2520),
        (const char (*)[16])"ElementOverdose",
        (data::AbilityState *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 1040, "ElementOverdose");
      *(_QWORD *)(v2 + 1040) = 0x200000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[11],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2560),
        (const char (*)[11])"Corruption",
        (data::AbilityState *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 1072, "Corruption");
      *(_QWORD *)(v2 + 1072) = 0x400000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[21],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2600),
        (const char (*)[21])"UnlockFrequencyLimit",
        (data::AbilityState *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 1104, "UnlockFrequencyLimit");
      *(_QWORD *)(v2 + 1104) = 0x800000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[16],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2640),
        (const char (*)[16])"ElementDeadTime",
        (data::AbilityState *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 1136, "ElementDeadTime");
      *(_QWORD *)(v2 + 1136) = 0x1000000000LL;
      std::pair<std::string const,data::AbilityState>::pair<char const(&)[18],data::AbilityState,true>(
        (std::pair<const std::string,data::AbilityState> *const)(v2 + 2680),
        (const char (*)[18])"OvergrowVariation",
        (data::AbilityState *)(v2 + 1136));
      std::allocator<std::pair<std::string const,data::AbilityState>>::allocator((std::allocator<std::pair<const std::string,data::AbilityState> > *const)(v2 + 64));
      std::map<std::string,data::AbilityState>::map(
        &data::enumStrToVal(std::string const&,data::AbilityState &)::m,
        (std::initializer_list<std::pair<const std::string,data::AbilityState> >)__PAIR128__(34LL, v2 + 1360),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::AbilityState>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::AbilityState &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::AbilityState>::~map,
        &data::enumStrToVal(std::string const&,data::AbilityState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::AbilityState>>::~allocator((std::allocator<std::pair<const std::string,data::AbilityState> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::AbilityState> *)(v2 + 2720);
            i != (std::pair<const std::string,data::AbilityState> *)(v2 + 1360);
            std::pair<std::string const,data::AbilityState>::~pair(i) )
      {
        --i;
      }
      e = (data::AbilityState *)1360;
      __asan_poison_stack_memory(v2 + 1360, 1360LL);
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1168, e);
    *(std::map<std::string,data::AbilityState>::iterator *)(v2 + 1168) = std::map<std::string,data::AbilityState>::find(
                                                                           &data::enumStrToVal(std::string const&,data::AbilityState &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1200, s);
    *(std::map<std::string,data::AbilityState>::iterator *)(v2 + 1200) = std::map<std::string,data::AbilityState>::end(&data::enumStrToVal(std::string const&,data::AbilityState &)::m);
    v7 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityState> >::_Self *)(v2 + 1168),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityState> >::_Self *)(v2 + 1200));
    *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
    {
      *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1296) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1296, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1296),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
        "enumStrToVal",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 1296),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1296));
      v5 = 0;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<std::string const,data::AbilityState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityState> > *const)(v2 + 1168));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
        v9 = (std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityState> >::pointer)__asan_report_load8(&v9->second);
      second = v9->second;
      if ( *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000) )
        __asan_report_store8(ea, v2 + 1200);
      *ea = second;
      v5 = 1;
    }
  }
  v11 = v5;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF815C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 356) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2848LL, v14);
  }
  return v11;
};

// Line 265: range 0000000012122179-0000000012122652
const char *__cdecl data::getDescription(data::AbilityState e)
{
  const char *result; // rax

  if ( e == OvergrowVariation )
    return (const char *)&unk_1A9109C0;
  if ( (unsigned __int64)e > OvergrowVariation )
    return "unknown enum value!";
  if ( e == ElementDeadTime )
    return (const char *)&unk_1A910980;
  if ( (unsigned __int64)e > ElementDeadTime )
    return "unknown enum value!";
  if ( e == UnlockFrequencyLimit )
    return (const char *)&unk_1A9108E0;
  if ( (unsigned __int64)e > UnlockFrequencyLimit )
    return "unknown enum value!";
  if ( e == Corruption )
    return (const char *)&unk_1A9108A0;
  if ( (unsigned __int64)e > Corruption )
    return "unknown enum value!";
  if ( e == ElementOverdose )
    return (const char *)&unk_1A90EBE0;
  if ( (unsigned __int64)e > ElementOverdose )
    return "unknown enum value!";
  if ( e == ElementGrass )
    return (const char *)&unk_1A90EBA0;
  if ( (unsigned __int64)e > ElementGrass )
    return "unknown enum value!";
  if ( e == IgnoreAddEnergy )
    return (const char *)&unk_1A910860;
  if ( (unsigned __int64)e > IgnoreAddEnergy )
    return "unknown enum value!";
  if ( e == ElementPetrifaction )
    return (const char *)&unk_1A910820;
  if ( (unsigned __int64)e > ElementPetrifaction )
    return "unknown enum value!";
  if ( e == MuteTaunt )
    return (const char *)&unk_1A9107E0;
  if ( (unsigned __int64)e > MuteTaunt )
    return "unknown enum value!";
  if ( e == Limbo )
    return (const char *)&unk_1A9107A0;
  if ( (unsigned __int64)e > Limbo )
    return "unknown enum value!";
  if ( (Elf64_Sym *)e == &stru_2000000 )
    return (const char *)&unk_1A910760;
  if ( e > (unsigned __int64)&stru_2000000 )
    return "unknown enum value!";
  if ( e == ElementFire )
    return (const char *)&unk_1A910720;
  if ( (unsigned __int64)e > ElementFire )
    return "unknown enum value!";
  if ( e == ElementElectric )
    return (const char *)&unk_1A9106E0;
  if ( (unsigned __int64)e > ElementElectric )
    return "unknown enum value!";
  if ( (int *)e == &dword_400000 )
    return (const char *)&unk_1A9106A0;
  if ( e > (unsigned __int64)&dword_400000 )
    return "unknown enum value!";
  if ( e == SpeedDown )
    return (const char *)&unk_1A910660;
  if ( (unsigned __int64)e > SpeedDown )
    return "unknown enum value!";
  if ( e == DefenseDown )
    return (const char *)&unk_1A910620;
  if ( (unsigned __int64)e > DefenseDown )
    return "unknown enum value!";
  if ( e == SpeedUp )
    return (const char *)&unk_1A9105E0;
  if ( (unsigned __int64)e > SpeedUp )
    return "unknown enum value!";
  if ( e == DefenseUp )
    return (const char *)&unk_1A9105A0;
  if ( (unsigned __int64)e > DefenseUp )
    return "unknown enum value!";
  if ( e == AttackUp )
    return (const char *)&unk_1A910560;
  if ( (unsigned __int64)e > AttackUp )
    return "unknown enum value!";
  if ( e == ElementFreeze )
    return (const char *)&unk_1A910520;
  if ( (unsigned __int64)e > ElementFreeze )
    return "unknown enum value!";
  if ( e == ElementIce )
    return (const char *)&unk_1A9104E0;
  if ( (unsigned __int64)e > ElementIce )
    return "unknown enum value!";
  if ( e == ElementRock )
    return (const char *)&unk_1A9104A0;
  if ( (unsigned __int64)e > ElementRock )
    return "unknown enum value!";
  if ( e == Struggle )
    return (const char *)&unk_1A910460;
  if ( (unsigned __int64)e > Struggle )
    return "unknown enum value!";
  if ( e == ElementShock )
    return (const char *)&unk_1A910420;
  if ( (unsigned __int64)e > ElementShock )
    return "unknown enum value!";
  if ( e == IgnoreTriggerBullet )
    return (const char *)&unk_1A9103E0;
  if ( (unsigned __int64)e > IgnoreTriggerBullet )
    return "unknown enum value!";
  if ( e == LockHP )
    return (const char *)&unk_1A9103A0;
  if ( (unsigned __int64)e > LockHP )
    return "unknown enum value!";
  if ( (unsigned __int64)e > ElementWet )
  {
    if ( e == ElementFrozen )
      return (const char *)&unk_1A90F2C0;
    return "unknown enum value!";
  }
  switch ( e )
  {
    case None_5:
      result = "None";
      break;
    case Invincible:
      result = "(non buff/debuff) Invincible, will be hit but won't show attack number.";
      break;
    case DenyLockOn:
      result = (const char *)&unk_1A910220;
      break;
    case IsGhostToAllied:
      result = (const char *)&unk_1A910260;
      break;
    case IsGhostToEnemy:
      result = (const char *)&unk_1A9102C0;
      break;
    case ElementBurning:
      result = (const char *)&unk_1A910320;
      break;
    case ElementWet:
      result = (const char *)&unk_1A910360;
      break;
    default:
      return "unknown enum value!";
  }
  return result;
};

// Line 342: range 0000000012122653-000000001212292F
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigElementTypeArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  data::ConfigElementTypeArray *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:348 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::ElementType>(elem_jval, (data::ElementType *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
          "arrFromJson",
          351);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        std::vector<data::ElementType>::push_back(va, (const std::vector<data::ElementType>::value_type *)(v3 + 48));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_17;
  }
  v2 = 1;
LABEL_17:
  result = v2;
  if ( v12 == (char *)v3 )
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

// Line 361: range 0000000012122930-0000000012122BB1
int32_t __cdecl data::getArrHashValue(const data::ConfigElementTypeArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ElementType *v5; // rax
  int32_t result; // eax
  int32_t *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:362 64 8 15 __for_begin:363 96 8 13 __for_end:363";
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
  *(std::vector<data::ElementType>::const_iterator *)(v2 + 64) = std::vector<data::ElementType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ElementType>::const_iterator *)(v2 + 96) = std::vector<data::ElementType>::end(vec);
  while ( __gnu_cxx::operator!=<data::ElementType const*,std::vector<data::ElementType>>(
            (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v2 + 96)) )
  {
    v5 = (data::ElementType *)__gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator*((const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator++((__gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v2 + 64));
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

// Line 371: range 0000000012122BB2-0000000012123ADC
bool __cdecl data::mapFromJson(const Json::Value *jval, data::AbilityStateStringMap *m)
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
  std::string *v13; // r8
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::AbilityState,std::string >,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 8 7 key:376 80 8 9 <unknown> 112 8 9 <unknown> 144 16 7 cit:373 176 16 9 <unknown> 208 32 "
                        "11 key_str:377 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 value:389 528 3"
                        "2 9 <unknown> 592 32 9 <unknown> 656 40 12 tmp_jval:372 736 40 12 key_jval:375 816 40 14 value_jval:388";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862744] = -218959360;
  v5[536862745] = 62194;
  v5[536862746] = -218103808;
  v5[536862747] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 656), jval);
  if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 656));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 656));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 144),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 176));
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 775) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 7) & 7) >= *(_BYTE *)(((v3 + 775) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 736, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 736));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 208);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 736), (std::string *)(v3 + 208)) )
    {
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
        "mapFromJson",
        380);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 336), (Json::Value_0 *)(v3 + 736));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 336));
      std::string::~string((void *)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 208), (data::AbilityState *)(v3 + 48)) )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
        "mapFromJson",
        385);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 816) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 144));
      Json::Value::Value((Json::Value *)(v3 + 816), v12);
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 464);
      if ( !fromJson<std::string>((const Json::Value *)(v3 + 816), (std::string *)(v3 + 464)) )
      {
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
          "mapFromJson",
          392);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 528),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 48);
        v15 = (__int64)data::enumValToStr(*(data::AbilityState *)(v3 + 48));
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v3 + 80, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 80) = v15;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 80));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<data::AbilityState,std::string>::emplace<data::AbilityState&,std::string&>(
                m,
                (data::AbilityState *)(v3 + 48),
                (std::string *)(v3 + 464),
                (data::AbilityState *)(v3 + 48),
                v13);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 592, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 592),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigElementType.cpp",
            "mapFromJson",
            397);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 592),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v3 + 48);
          v19 = (__int64)data::enumValToStr(*(data::AbilityState *)(v3 + 48));
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v3 + 112, "key duplicate: ");
          *(_QWORD *)(v3 + 112) = v19;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v3 + 112));
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
          *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      std::string::~string((void *)(v3 + 464));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 816));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 208));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 736));
    v20 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    v21 = ((v3 + 816) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 144));
  }
  v22 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 406: range 0000000012123ADD-0000000012123D91
int32_t __cdecl data::getMapHashValue(const data::AbilityStateStringMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::AbilityState,std::string >,false,false>::reference v6; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::AbilityState,std::string > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::AbilityState,std::string > >::type *val; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:407 64 8 15 __for_begin:408 96 8 13 __for_end:408";
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
  *(std::unordered_map<data::AbilityState,std::string>::const_iterator *)(v2 + 64) = std::unordered_map<data::AbilityState,std::string>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::AbilityState,std::string>::const_iterator *)(v2 + 96) = std::unordered_map<data::AbilityState,std::string>::end(map);
  while ( std::__detail::operator!=<std::pair<data::AbilityState const,std::string>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::AbilityState,std::string >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::AbilityState,std::string >,false> *)(v2 + 96)) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<data::AbilityState const,std::string>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::AbilityState,std::string >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::AbilityState const,std::string>(v6);
    val = (std::tuple_element<1,const std::pair<const data::AbilityState,std::string > >::type *)std::get<1ul,data::AbilityState const,std::string>(v6);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
      __asan_report_load8(key);
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    common::tools::HashUtils::appendHash(val, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::AbilityState const,std::string>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::AbilityState,std::string >,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v9 == (char *)v2 )
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
