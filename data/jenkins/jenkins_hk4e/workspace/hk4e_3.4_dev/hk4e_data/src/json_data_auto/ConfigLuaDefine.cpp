// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLuaDefine.cpp

// Line 19: range 0000000012029FCA-000000001202A2A8
const char *__cdecl data::enumValToStr(data::ActorType e)
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
    case INVALID_1:
      result = "INVALID";
      break;
    case BASE_ENTITY:
      result = "BASE_ENTITY";
      break;
    case NPC_ACTOR:
      result = "NPC_ACTOR";
      break;
    case QUEST_ACTOR:
      result = "QUEST_ACTOR";
      break;
    case GLOBAL_ACTOR:
      result = "GLOBAL_ACTOR";
      break;
    case GADGET_ACTOR:
      result = "GADGET_ACTOR";
      break;
    case SUB_GLOBAL_ACTOR:
      result = "SUB_GLOBAL_ACTOR";
      break;
    case CUTSCENE_ACTOR:
      result = "CUTSCENE_ACTOR";
      break;
    case INTERACTION_ACTOR:
      result = "INTERACTION_ACTOR";
      break;
    case NPCGLOBAL_ACTOR:
      result = "NPCGLOBAL_ACTOR";
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        43);
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

// Line 49: range 000000001202A2A9-000000001202AFB5
bool __cdecl data::enumStrToVal(const std::string *s, data::ActorType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ActorType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ActorType> >::pointer v10; // rax
  data::ActorType second; // ecx
  char v12; // dl
  data::ActorType *ea; // [rsp+10h] [rbp-3C0h]
  char v14[944]; // [rsp+20h] [rbp-3B0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 8 5 it:68 272 8 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432"
                        " 400 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = 61956;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862746] = -202116109;
  v4[536862747] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      52);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 304),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ActorType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ActorType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[8],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 432),
        (const char (*)[8])"INVALID",
        (data::ActorType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "INVALID");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[12],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 472),
        (const char (*)[12])"BASE_ENTITY",
        (data::ActorType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "BASE_ENTITY");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[10],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 512),
        (const char (*)[10])"NPC_ACTOR",
        (data::ActorType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "NPC_ACTOR");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[12],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 552),
        (const char (*)[12])"QUEST_ACTOR",
        (data::ActorType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QUEST_ACTOR");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[13],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 592),
        (const char (*)[13])"GLOBAL_ACTOR",
        (data::ActorType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GLOBAL_ACTOR");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[13],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 632),
        (const char (*)[13])"GADGET_ACTOR",
        (data::ActorType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GADGET_ACTOR");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[17],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 672),
        (const char (*)[17])"SUB_GLOBAL_ACTOR",
        (data::ActorType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "SUB_GLOBAL_ACTOR");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[15],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 712),
        (const char (*)[15])"CUTSCENE_ACTOR",
        (data::ActorType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "CUTSCENE_ACTOR");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[18],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 752),
        (const char (*)[18])"INTERACTION_ACTOR",
        (data::ActorType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "INTERACTION_ACTOR");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::ActorType>::pair<char const(&)[16],data::ActorType,true>(
        (std::pair<const std::string,data::ActorType> *const)(v2 + 792),
        (const char (*)[16])"NPCGLOBAL_ACTOR",
        (data::ActorType *)(v2 + 224));
      std::allocator<std::pair<std::string const,data::ActorType>>::allocator((std::allocator<std::pair<const std::string,data::ActorType> > *const)(v2 + 64));
      std::map<std::string,data::ActorType>::map(
        &data::enumStrToVal(std::string const&,data::ActorType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActorType> >)__PAIR128__(10LL, v2 + 432),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ActorType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ActorType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ActorType>::~map,
        &data::enumStrToVal(std::string const&,data::ActorType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActorType>>::~allocator((std::allocator<std::pair<const std::string,data::ActorType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActorType> *)(v2 + 832);
            i != (std::pair<const std::string,data::ActorType> *)(v2 + 432);
            std::pair<std::string const,data::ActorType>::~pair(i) )
      {
        --i;
      }
      e = (data::ActorType *)400;
      __asan_poison_stack_memory(v2 + 432, 400LL);
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
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, e);
    *(std::map<std::string,data::ActorType>::iterator *)(v2 + 240) = std::map<std::string,data::ActorType>::find(
                                                                       &data::enumStrToVal(std::string const&,data::ActorType &)::m,
                                                                       s);
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, s);
    *(std::map<std::string,data::ActorType>::iterator *)(v2 + 272) = std::map<std::string,data::ActorType>::end(&data::enumStrToVal(std::string const&,data::ActorType &)::m);
    v7 = (char *)(v2 + 272);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActorType> >::_Self *)(v2 + 240),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActorType> >::_Self *)(v2 + 272));
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        71);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 368),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ActorType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ActorType> > *const)(v2 + 240));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
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

// Line 79: range 000000001202AFB6-000000001202B048
const char *__cdecl data::getDescription(data::ActorType e)
{
  const char *result; // rax

  switch ( e )
  {
    case INVALID_1:
      result = (const char *)&unk_1A8E7740;
      break;
    case BASE_ENTITY:
      result = (const char *)&unk_1A8E7780;
      break;
    case NPC_ACTOR:
      result = (const char *)&unk_1A8E77C0;
      break;
    case QUEST_ACTOR:
      result = (const char *)&unk_1A8E7800;
      break;
    case GLOBAL_ACTOR:
      result = (const char *)&unk_1A8E7840;
      break;
    case GADGET_ACTOR:
      result = (const char *)&unk_1A8E7880;
      break;
    case SUB_GLOBAL_ACTOR:
      result = (const char *)&unk_1A8E78C0;
      break;
    case CUTSCENE_ACTOR:
      result = (const char *)&unk_1A8E7900;
      break;
    case INTERACTION_ACTOR:
      result = (const char *)&unk_1A8E7940;
      break;
    case NPCGLOBAL_ACTOR:
      result = (const char *)&unk_1A8E7980;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 108: range 000000001202B049-000000001202B363
const char *__cdecl data::enumValToStr(data::TaskID e)
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
    case MOVE_TASK_ID:
      result = "MOVE_TASK_ID";
      break;
    case NARRATOR_TASK_ID:
      result = "NARRATOR_TASK_ID";
      break;
    case LOCK_TASK_ID:
      result = "LOCK_TASK_ID";
      break;
    case THREAD_TASK_ID:
      result = "THREAD_TASK_ID";
      break;
    case TRANSMIT_BTN_ID:
      result = "TRANSMIT_BTN_ID";
      break;
    case FORCE_WALK_ID:
      result = "FORCE_WALK_ID";
      break;
    case STEER_TO_AUTONOMY_ID:
      result = "STEER_TO_AUTONOMY_ID";
      break;
    case HOME_TASK_ID:
      result = "HOME_TASK_ID";
      break;
    case SAFE_CIRCLE:
      result = "SAFE_CIRCLE";
      break;
    case NPC_FOLLOW_PLAYER_ID:
      result = "NPC_FOLLOW_PLAYER_ID";
      break;
    case NPC_RUN_AWAY_ID:
      result = "NPC_RUN_AWAY_ID";
      break;
    case DIST_TO_PLAYER_ID:
      result = "DIST_TO_PLAYER_ID";
      break;
    case QUEST_LIMIT_REGION_ID:
      result = "QUEST_LIMIT_REGION_ID";
      break;
    case CARD_SUMMON_TASK_ID:
      result = "CARD_SUMMON_TASK_ID";
      break;
    case WARNING_TASK_ID:
      result = "WARNING_TASK_ID";
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        142);
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

// Line 148: range 000000001202B364-000000001202C327
bool __cdecl data::enumStrToVal(const std::string *s, data::TaskID *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::TaskID> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TaskID> >::pointer v10; // rax
  data::TaskID second; // ecx
  char v12; // dl
  bool v13; // bl
  data::TaskID *ea; // [rsp+10h] [rbp-520h]
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
                        "04 4 9 <unknown> 320 8 6 it:172 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 600 9 <unknown>";
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
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      151);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TaskID &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TaskID &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[13],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 512),
        (const char (*)[13])"MOVE_TASK_ID",
        (data::TaskID *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "MOVE_TASK_ID");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[17],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 552),
        (const char (*)[17])"NARRATOR_TASK_ID",
        (data::TaskID *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "NARRATOR_TASK_ID");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[13],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 592),
        (const char (*)[13])"LOCK_TASK_ID",
        (data::TaskID *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "LOCK_TASK_ID");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[15],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 632),
        (const char (*)[15])"THREAD_TASK_ID",
        (data::TaskID *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "THREAD_TASK_ID");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[16],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 672),
        (const char (*)[16])"TRANSMIT_BTN_ID",
        (data::TaskID *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "TRANSMIT_BTN_ID");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[14],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 712),
        (const char (*)[14])"FORCE_WALK_ID",
        (data::TaskID *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "FORCE_WALK_ID");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[21],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 752),
        (const char (*)[21])"STEER_TO_AUTONOMY_ID",
        (data::TaskID *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "STEER_TO_AUTONOMY_ID");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[13],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 792),
        (const char (*)[13])"HOME_TASK_ID",
        (data::TaskID *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "HOME_TASK_ID");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[12],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 832),
        (const char (*)[12])"SAFE_CIRCLE",
        (data::TaskID *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "SAFE_CIRCLE");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[21],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 872),
        (const char (*)[21])"NPC_FOLLOW_PLAYER_ID",
        (data::TaskID *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "NPC_FOLLOW_PLAYER_ID");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[16],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 912),
        (const char (*)[16])"NPC_RUN_AWAY_ID",
        (data::TaskID *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "NPC_RUN_AWAY_ID");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[18],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 952),
        (const char (*)[18])"DIST_TO_PLAYER_ID",
        (data::TaskID *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "DIST_TO_PLAYER_ID");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[22],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 992),
        (const char (*)[22])"QUEST_LIMIT_REGION_ID",
        (data::TaskID *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "QUEST_LIMIT_REGION_ID");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[20],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 1032),
        (const char (*)[20])"CARD_SUMMON_TASK_ID",
        (data::TaskID *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "CARD_SUMMON_TASK_ID");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::TaskID>::pair<char const(&)[16],data::TaskID,true>(
        (std::pair<const std::string,data::TaskID> *const)(v2 + 1072),
        (const char (*)[16])"WARNING_TASK_ID",
        (data::TaskID *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::TaskID>>::allocator((std::allocator<std::pair<const std::string,data::TaskID> > *const)(v2 + 64));
      std::map<std::string,data::TaskID>::map(
        &data::enumStrToVal(std::string const&,data::TaskID &)::m,
        (std::initializer_list<std::pair<const std::string,data::TaskID> >)__PAIR128__(15LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TaskID>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TaskID &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TaskID>::~map,
        &data::enumStrToVal(std::string const&,data::TaskID &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TaskID>>::~allocator((std::allocator<std::pair<const std::string,data::TaskID> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TaskID> *)(v2 + 1112);
            i != (std::pair<const std::string,data::TaskID> *)(v2 + 512);
            std::pair<std::string const,data::TaskID>::~pair(i) )
      {
        --i;
      }
      e = (data::TaskID *)600;
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
    *(std::map<std::string,data::TaskID>::iterator *)(v2 + 320) = std::map<std::string,data::TaskID>::find(
                                                                    &data::enumStrToVal(std::string const&,data::TaskID &)::m,
                                                                    s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::TaskID>::iterator *)(v2 + 352) = std::map<std::string,data::TaskID>::end(&data::enumStrToVal(std::string const&,data::TaskID &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TaskID> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TaskID> >::_Self *)(v2 + 352));
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        175);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::TaskID>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TaskID> > *const)(v2 + 320));
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

// Line 183: range 000000001202C328-000000001202C3EE
const char *__cdecl data::getDescription(data::TaskID e)
{
  const char *result; // rax

  switch ( e )
  {
    case MOVE_TASK_ID:
      result = (const char *)&unk_1A8E7FA0;
      break;
    case NARRATOR_TASK_ID:
      result = (const char *)&unk_1A8E7FE0;
      break;
    case LOCK_TASK_ID:
      result = (const char *)&unk_1A8E8020;
      break;
    case THREAD_TASK_ID:
      result = (const char *)&unk_1A8E8060;
      break;
    case TRANSMIT_BTN_ID:
      result = (const char *)&unk_1A8E80A0;
      break;
    case FORCE_WALK_ID:
      result = (const char *)&unk_1A8E80E0;
      break;
    case STEER_TO_AUTONOMY_ID:
      result = (const char *)&unk_1A8E8120;
      break;
    case HOME_TASK_ID:
      result = (const char *)&unk_1A8E8180;
      break;
    case SAFE_CIRCLE:
      result = (const char *)&unk_1A8E81C0;
      break;
    case NPC_FOLLOW_PLAYER_ID:
      result = (const char *)&unk_1A8E8200;
      break;
    case NPC_RUN_AWAY_ID:
      result = (const char *)&unk_1A8E8240;
      break;
    case DIST_TO_PLAYER_ID:
      result = (const char *)&unk_1A8E8280;
      break;
    case QUEST_LIMIT_REGION_ID:
      result = (const char *)&unk_1A8E82C0;
      break;
    case CARD_SUMMON_TASK_ID:
      result = (const char *)&unk_1A8E8300;
      break;
    case WARNING_TASK_ID:
      result = (const char *)&unk_1A8E8340;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 222: range 000000001202C3EF-000000001202C66C
const char *__cdecl data::enumValToStr(data::InterTimingType e)
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
  if ( e == EXIT_0 )
  {
    result = "EXIT";
  }
  else
  {
    if ( e > EXIT_0 )
      goto LABEL_22;
    if ( e == ENTER )
    {
      result = "ENTER";
      goto LABEL_17;
    }
    if ( e == BTN )
    {
      result = off_1A8E8400;
    }
    else
    {
LABEL_22:
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        232);
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
    }
  }
LABEL_17:
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

// Line 238: range 000000001202C66D-000000001202CF4E
bool __cdecl data::enumStrToVal(const std::string *s, data::InterTimingType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::InterTimingType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::InterTimingType> >::pointer v11; // rax
  data::InterTimingType second; // ecx
  char v13; // dl
  data::InterTimingType *ea; // [rsp+10h] [rbp-220h]
  char v15[528]; // [rsp+20h] [rbp-210h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 6"
                        " it:250 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
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
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      241);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::InterTimingType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::InterTimingType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::InterTimingType>::pair<char const(&)[6],data::InterTimingType,true>(
        (std::pair<const std::string,data::InterTimingType> *const)(v2 + 320),
        (const char (*)[6])"ENTER",
        (data::InterTimingType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ENTER");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::InterTimingType>::pair<char const(&)[4],data::InterTimingType,true>(
        (std::pair<const std::string,data::InterTimingType> *const)(v2 + 360),
        (const char (*)[4])off_1A8E8400,
        (data::InterTimingType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, off_1A8E8400);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::InterTimingType>::pair<char const(&)[5],data::InterTimingType,true>(
        (std::pair<const std::string,data::InterTimingType> *const)(v2 + 400),
        (const char (*)[5])"EXIT",
        (data::InterTimingType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::InterTimingType>>::allocator((std::allocator<std::pair<const std::string,data::InterTimingType> > *const)(v2 + 64));
      std::map<std::string,data::InterTimingType>::map(
        &data::enumStrToVal(std::string const&,data::InterTimingType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InterTimingType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::InterTimingType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::InterTimingType &)::m);
      e = (data::InterTimingType *)&data::enumStrToVal(std::string const&,data::InterTimingType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::InterTimingType>::~map,
        &data::enumStrToVal(std::string const&,data::InterTimingType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InterTimingType>>::~allocator((std::allocator<std::pair<const std::string,data::InterTimingType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InterTimingType> *)(v2 + 440);
            i != (std::pair<const std::string,data::InterTimingType> *)(v2 + 320);
            std::pair<std::string const,data::InterTimingType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 320) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_WORD *)(v7 + 12) = -1800;
      *(_BYTE *)(v7 + 14) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::InterTimingType>::iterator *)(v2 + 128) = std::map<std::string,data::InterTimingType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::InterTimingType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::InterTimingType>::iterator *)(v2 + 160) = std::map<std::string,data::InterTimingType>::end(&data::enumStrToVal(std::string const&,data::InterTimingType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InterTimingType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::InterTimingType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        253);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::InterTimingType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::InterTimingType> > *const)(v2 + 128));
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

// Line 261: range 000000001202CF4F-000000001202CF93
const char *__cdecl data::getDescription(data::InterTimingType e)
{
  if ( e == EXIT_0 )
    return (const char *)&unk_1A8E85C0;
  if ( e > EXIT_0 )
    return "unknown enum value!";
  if ( e == ENTER )
    return (const char *)&unk_1A8E8540;
  if ( e == BTN )
    return (const char *)&unk_1A8E8580;
  else
    return "unknown enum value!";
};

// Line 276: range 000000001202CF94-000000001202D1F3
const char *__cdecl data::enumValToStr(data::ActorEvtTargetType e)
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
  if ( e )
  {
    if ( e == ALL_1 )
    {
      result = off_1A8E8640;
    }
    else
    {
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        284);
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
    }
  }
  else
  {
    result = "SINGLE";
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

// Line 290: range 000000001202D1F4-000000001202DA2B
bool __cdecl data::enumStrToVal(const std::string *s, data::ActorEvtTargetType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ActorEvtTargetType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ActorEvtTargetType> >::pointer v11; // rax
  data::ActorEvtTargetType second; // ecx
  char v13; // dl
  data::ActorEvtTargetType *ea; // [rsp+10h] [rbp-1E0h]
  char v15[464]; // [rsp+20h] [rbp-1D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:301 144 8 9 <un"
                        "known> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      293);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ActorEvtTargetType>::pair<char const(&)[7],data::ActorEvtTargetType,true>(
        (std::pair<const std::string,data::ActorEvtTargetType> *const)(v2 + 304),
        (const char (*)[7])"SINGLE",
        (data::ActorEvtTargetType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "SINGLE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ActorEvtTargetType>::pair<char const(&)[4],data::ActorEvtTargetType,true>(
        (std::pair<const std::string,data::ActorEvtTargetType> *const)(v2 + 344),
        (const char (*)[4])off_1A8E8640,
        (data::ActorEvtTargetType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::ActorEvtTargetType>>::allocator((std::allocator<std::pair<const std::string,data::ActorEvtTargetType> > *const)(v2 + 64));
      std::map<std::string,data::ActorEvtTargetType>::map(
        &data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActorEvtTargetType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ActorEvtTargetType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m);
      e = (data::ActorEvtTargetType *)&data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ActorEvtTargetType>::~map,
        &data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActorEvtTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::ActorEvtTargetType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActorEvtTargetType> *)(v2 + 384);
            i != (std::pair<const std::string,data::ActorEvtTargetType> *)(v2 + 304);
            std::pair<std::string const,data::ActorEvtTargetType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, e);
    *(std::map<std::string,data::ActorEvtTargetType>::iterator *)(v2 + 112) = std::map<std::string,data::ActorEvtTargetType>::find(
                                                                                &data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::ActorEvtTargetType>::iterator *)(v2 + 144) = std::map<std::string,data::ActorEvtTargetType>::end(&data::enumStrToVal(std::string const&,data::ActorEvtTargetType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActorEvtTargetType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActorEvtTargetType> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        304);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ActorEvtTargetType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ActorEvtTargetType> > *const)(v2 + 112));
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

// Line 312: range 000000001202DA2C-000000001202DA5B
const char *__cdecl data::getDescription(data::ActorEvtTargetType e)
{
  if ( e == SINGLE )
    return (const char *)&unk_1A8E8720;
  if ( e == ALL_1 )
    return (const char *)&unk_1A8E8760;
  return "unknown enum value!";
};

// Line 325: range 000000001202DA5C-000000001202DD06
const char *__cdecl data::enumValToStr(data::WeatherType e)
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
    case ClearSky_0:
      result = "ClearSky";
      break;
    case Cloudy_0:
      result = "Cloudy";
      break;
    case Foggy_0:
      result = "Foggy";
      break;
    case Rain_0:
      result = "Rain";
      break;
    case Snow_2:
      result = "Snow";
      break;
    case Storm_0:
      result = "Storm";
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        341);
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

// Line 347: range 000000001202DD07-000000001202E80F
bool __cdecl data::enumStrToVal(const std::string *s, data::WeatherType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::WeatherType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::WeatherType> >::pointer v11; // rax
  data::WeatherType second; // ecx
  char v13; // dl
  data::WeatherType *ea; // [rsp+10h] [rbp-2E0h]
  char v15[720]; // [rsp+20h] [rbp-2D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:362 208 8 9 <unknown> 240 32 9 <unknow"
                        "n> 304 32 9 <unknown> 368 240 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      350);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::WeatherType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::WeatherType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::WeatherType>::pair<char const(&)[9],data::WeatherType,true>(
        (std::pair<const std::string,data::WeatherType> *const)(v2 + 368),
        (const char (*)[9])"ClearSky",
        (data::WeatherType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ClearSky");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::WeatherType>::pair<char const(&)[7],data::WeatherType,true>(
        (std::pair<const std::string,data::WeatherType> *const)(v2 + 408),
        (const char (*)[7])"Cloudy",
        (data::WeatherType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Cloudy");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::WeatherType>::pair<char const(&)[6],data::WeatherType,true>(
        (std::pair<const std::string,data::WeatherType> *const)(v2 + 448),
        (const char (*)[6])"Foggy",
        (data::WeatherType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Foggy");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::WeatherType>::pair<char const(&)[5],data::WeatherType,true>(
        (std::pair<const std::string,data::WeatherType> *const)(v2 + 488),
        (const char (*)[5])"Rain",
        (data::WeatherType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Rain");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::WeatherType>::pair<char const(&)[5],data::WeatherType,true>(
        (std::pair<const std::string,data::WeatherType> *const)(v2 + 528),
        (const char (*)[5])"Snow",
        (data::WeatherType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Snow");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::WeatherType>::pair<char const(&)[6],data::WeatherType,true>(
        (std::pair<const std::string,data::WeatherType> *const)(v2 + 568),
        (const char (*)[6])"Storm",
        (data::WeatherType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::WeatherType>>::allocator((std::allocator<std::pair<const std::string,data::WeatherType> > *const)(v2 + 64));
      std::map<std::string,data::WeatherType>::map(
        &data::enumStrToVal(std::string const&,data::WeatherType &)::m,
        (std::initializer_list<std::pair<const std::string,data::WeatherType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::WeatherType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::WeatherType &)::m);
      e = (data::WeatherType *)&data::enumStrToVal(std::string const&,data::WeatherType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::WeatherType>::~map,
        &data::enumStrToVal(std::string const&,data::WeatherType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::WeatherType>>::~allocator((std::allocator<std::pair<const std::string,data::WeatherType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::WeatherType> *)(v2 + 608);
            i != (std::pair<const std::string,data::WeatherType> *)(v2 + 368);
            std::pair<std::string const,data::WeatherType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 368) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_DWORD *)(v7 + 24) = -117901064;
      *(_WORD *)(v7 + 28) = -1800;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, e);
    *(std::map<std::string,data::WeatherType>::iterator *)(v2 + 176) = std::map<std::string,data::WeatherType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::WeatherType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::WeatherType>::iterator *)(v2 + 208) = std::map<std::string,data::WeatherType>::end(&data::enumStrToVal(std::string const&,data::WeatherType &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::WeatherType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::WeatherType> >::_Self *)(v2 + 208));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        365);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::WeatherType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::WeatherType> > *const)(v2 + 176));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 373: range 000000001202E810-000000001202E87E
const char *__cdecl data::getDescription(data::WeatherType e)
{
  const char *result; // rax

  switch ( e )
  {
    case ClearSky_0:
      result = (const char *)&unk_1A8D5F20;
      break;
    case Cloudy_0:
      result = (const char *)&unk_1A8E88C0;
      break;
    case Foggy_0:
      result = (const char *)&unk_1A8D5FA0;
      break;
    case Rain_0:
      result = (const char *)&unk_1A8E8900;
      break;
    case Snow_2:
      result = (const char *)&unk_1A8E8940;
      break;
    case Storm_0:
      result = (const char *)&unk_1A8E8980;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 394: range 000000001202E87F-000000001202EBA5
const char *__cdecl data::enumValToStr(data::LuaTaskType e)
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
    case NORMAL_4:
      result = "NORMAL";
      break;
    case MOVE_0:
      result = "MOVE";
      break;
    case THREAT_2:
      result = "THREAT";
      break;
    case FREE_STYLE:
      result = "FREE_STYLE";
      break;
    case LIMIT_REGION:
      result = "LIMIT_REGION";
      break;
    case BTN_TRANS:
      result = "BTN_TRANS";
      break;
    case STEER:
      result = "STEER";
      break;
    case SPEECH_BUBBLE_0:
      result = "SPEECH_BUBBLE";
      break;
    case FORCE_WALK:
      result = "FORCE_WALK";
      break;
    case HOME:
      result = "HOME";
      break;
    case SAFE_CIRCLE_0:
      result = "SAFE_CIRCLE";
      break;
    case NPC_FOLLOW_PLAYER:
      result = "NPC_FOLLOW_PLAYER";
      break;
    case NPC_RUN_AWAY:
      result = "NPC_RUN_AWAY";
      break;
    case DIST_TO_PLAYER:
      result = "DIST_TO_PLAYER";
      break;
    case QUEST_LIMIT_REGION:
      result = "QUEST_LIMIT_REGION";
      break;
    case CARD_SUMMON:
      result = "CARD_SUMMON";
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        430);
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

// Line 436: range 000000001202EBA6-000000001202FBEB
bool __cdecl data::enumStrToVal(const std::string *s, data::LuaTaskType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::LuaTaskType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::LuaTaskType> >::pointer v10; // rax
  data::LuaTaskType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::LuaTaskType *ea; // [rsp+10h] [rbp-540h]
  char v16[1328]; // [rsp+20h] [rbp-530h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 8 6 it:461 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <"
                        "unknown> 512 640 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
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
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
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
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      439);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::LuaTaskType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::LuaTaskType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[7],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 512),
        (const char (*)[7])"NORMAL",
        (data::LuaTaskType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "NORMAL");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[5],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 552),
        (const char (*)[5])"MOVE",
        (data::LuaTaskType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "MOVE");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[7],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 592),
        (const char (*)[7])"THREAT",
        (data::LuaTaskType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "THREAT");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[11],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 632),
        (const char (*)[11])"FREE_STYLE",
        (data::LuaTaskType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "FREE_STYLE");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[13],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 672),
        (const char (*)[13])"LIMIT_REGION",
        (data::LuaTaskType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "LIMIT_REGION");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[10],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 712),
        (const char (*)[10])"BTN_TRANS",
        (data::LuaTaskType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "BTN_TRANS");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[6],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 752),
        (const char (*)[6])"STEER",
        (data::LuaTaskType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "STEER");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[14],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 792),
        (const char (*)[14])"SPEECH_BUBBLE",
        (data::LuaTaskType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "SPEECH_BUBBLE");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[11],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 832),
        (const char (*)[11])"FORCE_WALK",
        (data::LuaTaskType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "FORCE_WALK");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[5],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 872),
        (const char (*)[5])"HOME",
        (data::LuaTaskType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "HOME");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[12],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 912),
        (const char (*)[12])"SAFE_CIRCLE",
        (data::LuaTaskType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "SAFE_CIRCLE");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[18],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 952),
        (const char (*)[18])"NPC_FOLLOW_PLAYER",
        (data::LuaTaskType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "NPC_FOLLOW_PLAYER");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[13],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 992),
        (const char (*)[13])"NPC_RUN_AWAY",
        (data::LuaTaskType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "NPC_RUN_AWAY");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[15],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 1032),
        (const char (*)[15])"DIST_TO_PLAYER",
        (data::LuaTaskType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "DIST_TO_PLAYER");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[19],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 1072),
        (const char (*)[19])"QUEST_LIMIT_REGION",
        (data::LuaTaskType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "QUEST_LIMIT_REGION");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::LuaTaskType>::pair<char const(&)[12],data::LuaTaskType,true>(
        (std::pair<const std::string,data::LuaTaskType> *const)(v2 + 1112),
        (const char (*)[12])"CARD_SUMMON",
        (data::LuaTaskType *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::LuaTaskType>>::allocator((std::allocator<std::pair<const std::string,data::LuaTaskType> > *const)(v2 + 48));
      std::map<std::string,data::LuaTaskType>::map(
        &data::enumStrToVal(std::string const&,data::LuaTaskType &)::m,
        (std::initializer_list<std::pair<const std::string,data::LuaTaskType> >)__PAIR128__(16LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::LuaTaskType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::LuaTaskType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::LuaTaskType>::~map,
        &data::enumStrToVal(std::string const&,data::LuaTaskType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::LuaTaskType>>::~allocator((std::allocator<std::pair<const std::string,data::LuaTaskType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::LuaTaskType> *)(v2 + 1152);
            i != (std::pair<const std::string,data::LuaTaskType> *)(v2 + 512);
            std::pair<std::string const,data::LuaTaskType>::~pair(i) )
      {
        --i;
      }
      e = (data::LuaTaskType *)640;
      __asan_poison_stack_memory(v2 + 512, 640LL);
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
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, e);
    *(std::map<std::string,data::LuaTaskType>::iterator *)(v2 + 320) = std::map<std::string,data::LuaTaskType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::LuaTaskType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::LuaTaskType>::iterator *)(v2 + 352) = std::map<std::string,data::LuaTaskType>::end(&data::enumStrToVal(std::string const&,data::LuaTaskType &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::LuaTaskType> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::LuaTaskType> >::_Self *)(v2 + 352));
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        464);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::LuaTaskType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::LuaTaskType> > *const)(v2 + 320));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v16);
  }
  return v13;
};

// Line 472: range 000000001202FBEC-000000001202FCBE
const char *__cdecl data::getDescription(data::LuaTaskType e)
{
  const char *result; // rax

  switch ( e )
  {
    case NORMAL_4:
      result = (const char *)&unk_1A8BCCA0;
      break;
    case MOVE_0:
      result = (const char *)&unk_1A8E8F80;
      break;
    case THREAT_2:
      result = (const char *)&unk_1A8E8FC0;
      break;
    case FREE_STYLE:
      result = (const char *)&unk_1A8E9000;
      break;
    case LIMIT_REGION:
      result = (const char *)&unk_1A8E9040;
      break;
    case BTN_TRANS:
      result = (const char *)&unk_1A8E9080;
      break;
    case STEER:
      result = (const char *)&unk_1A8E90C0;
      break;
    case SPEECH_BUBBLE_0:
      result = (const char *)&unk_1A8E9100;
      break;
    case FORCE_WALK:
      result = (const char *)&unk_1A8E80E0;
      break;
    case HOME:
      result = (const char *)&unk_1A8E9140;
      break;
    case SAFE_CIRCLE_0:
      result = (const char *)&unk_1A8E81C0;
      break;
    case NPC_FOLLOW_PLAYER:
      result = (const char *)&unk_1A8E8200;
      break;
    case NPC_RUN_AWAY:
      result = (const char *)&unk_1A8E8240;
      break;
    case DIST_TO_PLAYER:
      result = (const char *)&unk_1A8E8280;
      break;
    case QUEST_LIMIT_REGION:
      result = (const char *)&unk_1A8E82C0;
      break;
    case CARD_SUMMON:
      result = (const char *)&unk_1A8E8300;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 513: range 000000001202FCBF-000000001202FF69
const char *__cdecl data::enumValToStr(data::BeFollowState e)
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
    case ING:
      result = off_1A8E91C0;
      break;
    case WAITING:
      result = "WAITING";
      break;
    case TRANS:
      result = "TRANS";
      break;
    case PRE_FAILED:
      result = "PRE_FAILED";
      break;
    case FAILED:
      result = "FAILED";
      break;
    case SUCCESS:
      result = "SUCCESS";
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        529);
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

// Line 535: range 000000001202FF6A-0000000012030A72
bool __cdecl data::enumStrToVal(const std::string *s, data::BeFollowState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BeFollowState> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BeFollowState> >::pointer v11; // rax
  data::BeFollowState second; // ecx
  char v13; // dl
  data::BeFollowState *ea; // [rsp+10h] [rbp-2E0h]
  char v15[720]; // [rsp+20h] [rbp-2D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:550 208 8 9 <unknown> 240 32 9 <unknow"
                        "n> 304 32 9 <unknown> 368 240 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      538);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BeFollowState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BeFollowState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::BeFollowState>::pair<char const(&)[4],data::BeFollowState,true>(
        (std::pair<const std::string,data::BeFollowState> *const)(v2 + 368),
        (const char (*)[4])off_1A8E91C0,
        (data::BeFollowState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, off_1A8E91C0);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::BeFollowState>::pair<char const(&)[8],data::BeFollowState,true>(
        (std::pair<const std::string,data::BeFollowState> *const)(v2 + 408),
        (const char (*)[8])"WAITING",
        (data::BeFollowState *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "WAITING");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::BeFollowState>::pair<char const(&)[6],data::BeFollowState,true>(
        (std::pair<const std::string,data::BeFollowState> *const)(v2 + 448),
        (const char (*)[6])"TRANS",
        (data::BeFollowState *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "TRANS");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::BeFollowState>::pair<char const(&)[11],data::BeFollowState,true>(
        (std::pair<const std::string,data::BeFollowState> *const)(v2 + 488),
        (const char (*)[11])"PRE_FAILED",
        (data::BeFollowState *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "PRE_FAILED");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::BeFollowState>::pair<char const(&)[7],data::BeFollowState,true>(
        (std::pair<const std::string,data::BeFollowState> *const)(v2 + 528),
        (const char (*)[7])"FAILED",
        (data::BeFollowState *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "FAILED");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::BeFollowState>::pair<char const(&)[8],data::BeFollowState,true>(
        (std::pair<const std::string,data::BeFollowState> *const)(v2 + 568),
        (const char (*)[8])"SUCCESS",
        (data::BeFollowState *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::BeFollowState>>::allocator((std::allocator<std::pair<const std::string,data::BeFollowState> > *const)(v2 + 64));
      std::map<std::string,data::BeFollowState>::map(
        &data::enumStrToVal(std::string const&,data::BeFollowState &)::m,
        (std::initializer_list<std::pair<const std::string,data::BeFollowState> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::BeFollowState>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BeFollowState &)::m);
      e = (data::BeFollowState *)&data::enumStrToVal(std::string const&,data::BeFollowState &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BeFollowState>::~map,
        &data::enumStrToVal(std::string const&,data::BeFollowState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BeFollowState>>::~allocator((std::allocator<std::pair<const std::string,data::BeFollowState> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BeFollowState> *)(v2 + 608);
            i != (std::pair<const std::string,data::BeFollowState> *)(v2 + 368);
            std::pair<std::string const,data::BeFollowState>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 368) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_DWORD *)(v7 + 24) = -117901064;
      *(_WORD *)(v7 + 28) = -1800;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, e);
    *(std::map<std::string,data::BeFollowState>::iterator *)(v2 + 176) = std::map<std::string,data::BeFollowState>::find(
                                                                           &data::enumStrToVal(std::string const&,data::BeFollowState &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::BeFollowState>::iterator *)(v2 + 208) = std::map<std::string,data::BeFollowState>::end(&data::enumStrToVal(std::string const&,data::BeFollowState &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BeFollowState> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BeFollowState> >::_Self *)(v2 + 208));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        553);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BeFollowState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BeFollowState> > *const)(v2 + 176));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 561: range 0000000012030A73-0000000012030AE1
const char *__cdecl data::getDescription(data::BeFollowState e)
{
  const char *result; // rax

  switch ( e )
  {
    case ING:
      result = (const char *)&unk_1A8E9460;
      break;
    case WAITING:
      result = (const char *)&unk_1A8E94A0;
      break;
    case TRANS:
      result = (const char *)&unk_1A8E94E0;
      break;
    case PRE_FAILED:
      result = (const char *)&unk_1A8E94E0;
      break;
    case FAILED:
      result = (const char *)&unk_1A8E9520;
      break;
    case SUCCESS:
      result = (const char *)&unk_1A8E9560;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 582: range 0000000012030AE2-0000000012030D41
const char *__cdecl data::enumValToStr(data::NarratorState e)
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
  if ( e )
  {
    if ( e == PAUSING )
    {
      result = "PAUSING";
    }
    else
    {
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        590);
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
    }
  }
  else
  {
    result = off_1A8E91C0;
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

// Line 596: range 0000000012030D42-0000000012031579
bool __cdecl data::enumStrToVal(const std::string *s, data::NarratorState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::NarratorState> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::NarratorState> >::pointer v11; // rax
  data::NarratorState second; // ecx
  char v13; // dl
  data::NarratorState *ea; // [rsp+10h] [rbp-1E0h]
  char v15[464]; // [rsp+20h] [rbp-1D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:607 144 8 9 <un"
                        "known> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      599);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::NarratorState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::NarratorState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::NarratorState>::pair<char const(&)[4],data::NarratorState,true>(
        (std::pair<const std::string,data::NarratorState> *const)(v2 + 304),
        (const char (*)[4])off_1A8E91C0,
        (data::NarratorState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, off_1A8E91C0);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::NarratorState>::pair<char const(&)[8],data::NarratorState,true>(
        (std::pair<const std::string,data::NarratorState> *const)(v2 + 344),
        (const char (*)[8])"PAUSING",
        (data::NarratorState *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::NarratorState>>::allocator((std::allocator<std::pair<const std::string,data::NarratorState> > *const)(v2 + 64));
      std::map<std::string,data::NarratorState>::map(
        &data::enumStrToVal(std::string const&,data::NarratorState &)::m,
        (std::initializer_list<std::pair<const std::string,data::NarratorState> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::NarratorState>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::NarratorState &)::m);
      e = (data::NarratorState *)&data::enumStrToVal(std::string const&,data::NarratorState &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::NarratorState>::~map,
        &data::enumStrToVal(std::string const&,data::NarratorState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::NarratorState>>::~allocator((std::allocator<std::pair<const std::string,data::NarratorState> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::NarratorState> *)(v2 + 384);
            i != (std::pair<const std::string,data::NarratorState> *)(v2 + 304);
            std::pair<std::string const,data::NarratorState>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, e);
    *(std::map<std::string,data::NarratorState>::iterator *)(v2 + 112) = std::map<std::string,data::NarratorState>::find(
                                                                           &data::enumStrToVal(std::string const&,data::NarratorState &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::NarratorState>::iterator *)(v2 + 144) = std::map<std::string,data::NarratorState>::end(&data::enumStrToVal(std::string const&,data::NarratorState &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::NarratorState> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::NarratorState> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        610);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::NarratorState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::NarratorState> > *const)(v2 + 112));
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

// Line 618: range 000000001203157A-00000000120315A9
const char *__cdecl data::getDescription(data::NarratorState e)
{
  if ( e == ING_0 )
    return (const char *)&unk_1A8E96A0;
  if ( e == PAUSING )
    return (const char *)&unk_1A8E96E0;
  return "unknown enum value!";
};

// Line 631: range 00000000120315AA-0000000012031849
const char *__cdecl data::enumValToStr(data::QState e)
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
    case INVALID_2:
      result = "INVALID";
      break;
    case ACCEPTED:
      result = "ACCEPTED";
      break;
    case UPDATED:
      result = "UPDATED";
      break;
    case FINISHED:
      result = "FINISHED";
      break;
    case FAILED_0:
      result = "FAILED";
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        645);
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

// Line 651: range 000000001203184A-00000000120322B4
bool __cdecl data::enumStrToVal(const std::string *s, data::QState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QState> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QState> >::pointer v11; // rax
  data::QState second; // ecx
  char v13; // dl
  data::QState *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:665 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
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
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      654);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = -1;
      std::pair<std::string const,data::QState>::pair<char const(&)[8],data::QState,true>(
        (std::pair<const std::string,data::QState> *const)(v2 + 336),
        (const char (*)[8])"INVALID",
        (data::QState *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "INVALID");
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QState>::pair<char const(&)[9],data::QState,true>(
        (std::pair<const std::string,data::QState> *const)(v2 + 376),
        (const char (*)[9])"ACCEPTED",
        (data::QState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ACCEPTED");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QState>::pair<char const(&)[8],data::QState,true>(
        (std::pair<const std::string,data::QState> *const)(v2 + 416),
        (const char (*)[8])"UPDATED",
        (data::QState *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "UPDATED");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QState>::pair<char const(&)[9],data::QState,true>(
        (std::pair<const std::string,data::QState> *const)(v2 + 456),
        (const char (*)[9])"FINISHED",
        (data::QState *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "FINISHED");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::QState>::pair<char const(&)[7],data::QState,true>(
        (std::pair<const std::string,data::QState> *const)(v2 + 496),
        (const char (*)[7])"FAILED",
        (data::QState *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::QState>>::allocator((std::allocator<std::pair<const std::string,data::QState> > *const)(v2 + 48));
      std::map<std::string,data::QState>::map(
        &data::enumStrToVal(std::string const&,data::QState &)::m,
        (std::initializer_list<std::pair<const std::string,data::QState> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QState>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QState &)::m);
      e = (data::QState *)&data::enumStrToVal(std::string const&,data::QState &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QState>::~map,
        &data::enumStrToVal(std::string const&,data::QState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QState>>::~allocator((std::allocator<std::pair<const std::string,data::QState> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QState> *)(v2 + 536);
            i != (std::pair<const std::string,data::QState> *)(v2 + 336);
            std::pair<std::string const,data::QState>::~pair(i) )
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
    *(std::map<std::string,data::QState>::iterator *)(v2 + 144) = std::map<std::string,data::QState>::find(
                                                                    &data::enumStrToVal(std::string const&,data::QState &)::m,
                                                                    s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::QState>::iterator *)(v2 + 176) = std::map<std::string,data::QState>::end(&data::enumStrToVal(std::string const&,data::QState &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QState> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QState> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        668);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QState> > *const)(v2 + 144));
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

// Line 676: range 00000000120322B5-000000001203231E
const char *__cdecl data::getDescription(data::QState e)
{
  const char *result; // rax

  switch ( e )
  {
    case INVALID_2:
      result = (const char *)&unk_1A8E7740;
      break;
    case ACCEPTED:
      result = (const char *)&unk_1A8E98E0;
      break;
    case UPDATED:
      result = (const char *)&unk_1A8E9920;
      break;
    case FINISHED:
      result = (const char *)&unk_1A8E9960;
      break;
    case FAILED_0:
      result = (const char *)&unk_1A8E9520;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 695: range 000000001203231F-000000001203257E
const char *__cdecl data::enumValToStr(data::DistType e)
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
  if ( e )
  {
    if ( e == EULER_XZ )
    {
      result = "EULER_XZ";
    }
    else
    {
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
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumValToStr",
        703);
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
    }
  }
  else
  {
    result = "EULER";
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

// Line 709: range 000000001203257F-0000000012032DB6
bool __cdecl data::enumStrToVal(const std::string *s, data::DistType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::DistType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::DistType> >::pointer v11; // rax
  data::DistType second; // ecx
  char v13; // dl
  data::DistType *ea; // [rsp+10h] [rbp-1E0h]
  char v15[464]; // [rsp+20h] [rbp-1D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:720 144 8 9 <un"
                        "known> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigLuaDefine.cpp",
      "enumStrToVal",
      712);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::DistType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::DistType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::DistType>::pair<char const(&)[6],data::DistType,true>(
        (std::pair<const std::string,data::DistType> *const)(v2 + 304),
        (const char (*)[6])"EULER",
        (data::DistType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "EULER");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::DistType>::pair<char const(&)[9],data::DistType,true>(
        (std::pair<const std::string,data::DistType> *const)(v2 + 344),
        (const char (*)[9])"EULER_XZ",
        (data::DistType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::DistType>>::allocator((std::allocator<std::pair<const std::string,data::DistType> > *const)(v2 + 64));
      std::map<std::string,data::DistType>::map(
        &data::enumStrToVal(std::string const&,data::DistType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DistType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::DistType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::DistType &)::m);
      e = (data::DistType *)&data::enumStrToVal(std::string const&,data::DistType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::DistType>::~map,
        &data::enumStrToVal(std::string const&,data::DistType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DistType>>::~allocator((std::allocator<std::pair<const std::string,data::DistType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DistType> *)(v2 + 384);
            i != (std::pair<const std::string,data::DistType> *)(v2 + 304);
            std::pair<std::string const,data::DistType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, e);
    *(std::map<std::string,data::DistType>::iterator *)(v2 + 112) = std::map<std::string,data::DistType>::find(
                                                                      &data::enumStrToVal(std::string const&,data::DistType &)::m,
                                                                      s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::DistType>::iterator *)(v2 + 144) = std::map<std::string,data::DistType>::end(&data::enumStrToVal(std::string const&,data::DistType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::DistType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::DistType> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigLuaDefine.cpp",
        "enumStrToVal",
        723);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::DistType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::DistType> > *const)(v2 + 112));
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

// Line 731: range 0000000012032DB7-0000000012032DE6
const char *__cdecl data::getDescription(data::DistType e)
{
  if ( e == EULER )
    return (const char *)&unk_1A8E9AE0;
  if ( e == EULER_XZ )
    return (const char *)&unk_1A8E9B20;
  return "unknown enum value!";
};
