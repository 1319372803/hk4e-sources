// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigQuestType.cpp

// Line 19: range 0000000011572D6E-000000001157302F
const char *__cdecl data::enumValToStr(data::QuestType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case AQ:
      result = "AQ";
      break;
    case FQ:
      result = "FQ";
      break;
    case LQ:
      result = "LQ";
      break;
    case EQ:
      result = "EQ";
      break;
    case DQ:
      result = "DQ";
      break;
    case IQ:
      result = "IQ";
      break;
    case VQ:
      result = "VQ";
      break;
    case WQ:
      result = "WQ";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        39);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 45: range 0000000011573030-0000000011573C13
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestType> >::pointer v10; // rax
  data::QuestType second; // ecx
  char v12; // dl
  data::QuestType *ea; // [rsp+10h] [rbp-340h]
  char v14[816]; // [rsp+20h] [rbp-330h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 5 it:62 "
                        "224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 320 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862742] = -202116109;
  v4[536862743] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 384),
        (const char (*)[3])"AQ",
        (data::QuestType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "AQ");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 424),
        (const char (*)[3])"FQ",
        (data::QuestType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "FQ");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 464),
        (const char (*)[3])"LQ",
        (data::QuestType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "LQ");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 504),
        (const char (*)[3])"EQ",
        (data::QuestType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "EQ");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 544),
        (const char (*)[3])"DQ",
        (data::QuestType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "DQ");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 584),
        (const char (*)[3])"IQ",
        (data::QuestType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "IQ");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 624),
        (const char (*)[3])"VQ",
        (data::QuestType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "VQ");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::QuestType>::pair<char const(&)[3],data::QuestType,true>(
        (std::pair<const std::string,data::QuestType> *const)(v2 + 664),
        (const char (*)[3])"WQ",
        (data::QuestType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::QuestType>>::allocator((std::allocator<std::pair<const std::string,data::QuestType> > *const)(v2 + 48));
      std::map<std::string,data::QuestType>::map(
        &data::enumStrToVal(std::string const&,data::QuestType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestType> >)__PAIR128__(8LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestType> *)(v2 + 704);
            i != (std::pair<const std::string,data::QuestType> *)(v2 + 384);
            std::pair<std::string const,data::QuestType>::~pair(i) )
      {
        --i;
      }
      e = (data::QuestType *)320;
      __asan_poison_stack_memory(v2 + 384, 320LL);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, e);
    *(std::map<std::string,data::QuestType>::iterator *)(v2 + 192) = std::map<std::string,data::QuestType>::find(
                                                                       &data::enumStrToVal(std::string const&,data::QuestType &)::m,
                                                                       s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::QuestType>::iterator *)(v2 + 224) = std::map<std::string,data::QuestType>::end(&data::enumStrToVal(std::string const&,data::QuestType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestType> >::_Self *)(v2 + 224));
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        65);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestType> > *const)(v2 + 192));
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

// Line 73: range 0000000011573C14-0000000011573C95
const char *__cdecl data::getDescription(data::QuestType e)
{
  const char *result; // rax

  switch ( e )
  {
    case AQ:
      result = (const char *)&unk_1A7E1A80;
      break;
    case FQ:
      result = (const char *)&unk_1A7E1AC0;
      break;
    case LQ:
      result = (const char *)&unk_1A7E1B00;
      break;
    case EQ:
      result = (const char *)&unk_1A7E1B40;
      break;
    case DQ:
      result = (const char *)&unk_1A7E1B80;
      break;
    case IQ:
      result = (const char *)&unk_1A7E1BC0;
      break;
    case VQ:
      result = (const char *)&unk_1A7E1C20;
      break;
    case WQ:
      result = (const char *)&unk_1A7E1CA0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 98: range 0000000011573C96-0000000011573F2F
const char *__cdecl data::enumValToStr(data::QuestState e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestState v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case QUEST_STATE_NONE:
      result = "QUEST_STATE_NONE";
      break;
    case QUEST_STATE_UNSTARTED:
      result = "QUEST_STATE_UNSTARTED";
      break;
    case QUEST_STATE_UNFINISHED:
      result = "QUEST_STATE_UNFINISHED";
      break;
    case QUEST_STATE_FINISHED:
      result = "QUEST_STATE_FINISHED";
      break;
    case QUEST_STATE_FAILED:
      result = "QUEST_STATE_FAILED";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        112);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 118: range 0000000011573F30-000000001157499A
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestState> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestState> >::pointer v11; // rax
  data::QuestState second; // ecx
  char v13; // dl
  data::QuestState *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:132 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      121);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestState>::pair<char const(&)[17],data::QuestState,true>(
        (std::pair<const std::string,data::QuestState> *const)(v2 + 336),
        (const char (*)[17])"QUEST_STATE_NONE",
        (data::QuestState *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QUEST_STATE_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestState>::pair<char const(&)[22],data::QuestState,true>(
        (std::pair<const std::string,data::QuestState> *const)(v2 + 376),
        (const char (*)[22])"QUEST_STATE_UNSTARTED",
        (data::QuestState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_STATE_UNSTARTED");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestState>::pair<char const(&)[23],data::QuestState,true>(
        (std::pair<const std::string,data::QuestState> *const)(v2 + 416),
        (const char (*)[23])"QUEST_STATE_UNFINISHED",
        (data::QuestState *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_STATE_UNFINISHED");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestState>::pair<char const(&)[21],data::QuestState,true>(
        (std::pair<const std::string,data::QuestState> *const)(v2 + 456),
        (const char (*)[21])"QUEST_STATE_FINISHED",
        (data::QuestState *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QUEST_STATE_FINISHED");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::QuestState>::pair<char const(&)[19],data::QuestState,true>(
        (std::pair<const std::string,data::QuestState> *const)(v2 + 496),
        (const char (*)[19])"QUEST_STATE_FAILED",
        (data::QuestState *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::QuestState>>::allocator((std::allocator<std::pair<const std::string,data::QuestState> > *const)(v2 + 48));
      std::map<std::string,data::QuestState>::map(
        &data::enumStrToVal(std::string const&,data::QuestState &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestState> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestState>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestState &)::m);
      e = (data::QuestState *)&data::enumStrToVal(std::string const&,data::QuestState &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestState>::~map,
        &data::enumStrToVal(std::string const&,data::QuestState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestState>>::~allocator((std::allocator<std::pair<const std::string,data::QuestState> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestState> *)(v2 + 536);
            i != (std::pair<const std::string,data::QuestState> *)(v2 + 336);
            std::pair<std::string const,data::QuestState>::~pair(i) )
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
    *(std::map<std::string,data::QuestState>::iterator *)(v2 + 144) = std::map<std::string,data::QuestState>::find(
                                                                        &data::enumStrToVal(std::string const&,data::QuestState &)::m,
                                                                        s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::QuestState>::iterator *)(v2 + 176) = std::map<std::string,data::QuestState>::end(&data::enumStrToVal(std::string const&,data::QuestState &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestState> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestState> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        135);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestState> > *const)(v2 + 144));
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

// Line 143: range 000000001157499B-0000000011574A01
const char *__cdecl data::getDescription(data::QuestState e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_STATE_NONE:
      result = (const char *)&unk_1A7E1FC0;
      break;
    case QUEST_STATE_UNSTARTED:
      result = (const char *)&unk_1A7E2000;
      break;
    case QUEST_STATE_UNFINISHED:
      result = (const char *)&unk_1A7E2040;
      break;
    case QUEST_STATE_FINISHED:
      result = (const char *)&unk_1A7E2080;
      break;
    case QUEST_STATE_FAILED:
      result = (const char *)&unk_1A7E20C0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 162: range 0000000011574A02-0000000011574C87
const char *__cdecl data::enumValToStr(data::ParentQuestState e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::ParentQuestState v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
  if ( e == PARENT_QUEST_STATE_CANCELED )
  {
    result = "PARENT_QUEST_STATE_CANCELED";
  }
  else
  {
    if ( e <= PARENT_QUEST_STATE_CANCELED )
    {
      switch ( e )
      {
        case PARENT_QUEST_STATE_FAILED:
          result = "PARENT_QUEST_STATE_FAILED";
          goto LABEL_19;
        case PARENT_QUEST_STATE_NONE:
          result = "PARENT_QUEST_STATE_NONE";
          goto LABEL_19;
        case PARENT_QUEST_STATE_FINISHED:
          result = "PARENT_QUEST_STATE_FINISHED";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumValToStr",
      174);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = e;
    v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      v6 = (common::milog::MiLogStream *)(v1 + 48);
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = v7;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = (const char *)&unk_1A7E0BE0;
  }
LABEL_19:
  if ( v10 == (char *)v1 )
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

// Line 180: range 0000000011574C88-000000001157560C
bool __cdecl data::enumStrToVal(const std::string *s, data::ParentQuestState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ParentQuestState> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ParentQuestState> >::pointer v11; // rax
  data::ParentQuestState second; // ecx
  char v13; // dl
  data::ParentQuestState *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 6 it:193 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      183);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ParentQuestState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ParentQuestState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ParentQuestState>::pair<char const(&)[24],data::ParentQuestState,true>(
        (std::pair<const std::string,data::ParentQuestState> *const)(v2 + 320),
        (const char (*)[24])"PARENT_QUEST_STATE_NONE",
        (data::ParentQuestState *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "PARENT_QUEST_STATE_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ParentQuestState>::pair<char const(&)[28],data::ParentQuestState,true>(
        (std::pair<const std::string,data::ParentQuestState> *const)(v2 + 360),
        (const char (*)[28])"PARENT_QUEST_STATE_FINISHED",
        (data::ParentQuestState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "PARENT_QUEST_STATE_FINISHED");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ParentQuestState>::pair<char const(&)[26],data::ParentQuestState,true>(
        (std::pair<const std::string,data::ParentQuestState> *const)(v2 + 400),
        (const char (*)[26])"PARENT_QUEST_STATE_FAILED",
        (data::ParentQuestState *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "PARENT_QUEST_STATE_FAILED");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ParentQuestState>::pair<char const(&)[28],data::ParentQuestState,true>(
        (std::pair<const std::string,data::ParentQuestState> *const)(v2 + 440),
        (const char (*)[28])"PARENT_QUEST_STATE_CANCELED",
        (data::ParentQuestState *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::ParentQuestState>>::allocator((std::allocator<std::pair<const std::string,data::ParentQuestState> > *const)(v2 + 48));
      std::map<std::string,data::ParentQuestState>::map(
        &data::enumStrToVal(std::string const&,data::ParentQuestState &)::m,
        (std::initializer_list<std::pair<const std::string,data::ParentQuestState> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ParentQuestState>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ParentQuestState &)::m);
      e = (data::ParentQuestState *)&data::enumStrToVal(std::string const&,data::ParentQuestState &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ParentQuestState>::~map,
        &data::enumStrToVal(std::string const&,data::ParentQuestState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ParentQuestState>>::~allocator((std::allocator<std::pair<const std::string,data::ParentQuestState> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ParentQuestState> *)(v2 + 480);
            i != (std::pair<const std::string,data::ParentQuestState> *)(v2 + 320);
            std::pair<std::string const,data::ParentQuestState>::~pair(i) )
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
    *(std::map<std::string,data::ParentQuestState>::iterator *)(v2 + 128) = std::map<std::string,data::ParentQuestState>::find(
                                                                              &data::enumStrToVal(std::string const&,data::ParentQuestState &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::ParentQuestState>::iterator *)(v2 + 160) = std::map<std::string,data::ParentQuestState>::end(&data::enumStrToVal(std::string const&,data::ParentQuestState &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ParentQuestState> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ParentQuestState> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        196);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ParentQuestState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ParentQuestState> > *const)(v2 + 128));
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

// Line 204: range 000000001157560D-0000000011575662
const char *__cdecl data::getDescription(data::ParentQuestState e)
{
  if ( e == PARENT_QUEST_STATE_CANCELED )
    return (const char *)&unk_1A7E23C0;
  if ( e <= PARENT_QUEST_STATE_CANCELED )
  {
    switch ( e )
    {
      case PARENT_QUEST_STATE_FAILED:
        return (const char *)&unk_1A7E2380;
      case PARENT_QUEST_STATE_NONE:
        return (const char *)&unk_1A7E2300;
      case PARENT_QUEST_STATE_FINISHED:
        return (const char *)&unk_1A7E2340;
    }
  }
  return "unknown enum value!";
};

// Line 221: range 0000000011575663-00000000115758C2
const char *__cdecl data::enumValToStr(data::QuestShowType e)
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
    if ( e == QUEST_HIDDEN )
    {
      result = "QUEST_HIDDEN";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        229);
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
      result = (const char *)&unk_1A7E0BE0;
    }
  }
  else
  {
    result = "QUEST_SHOW";
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

// Line 235: range 00000000115758C3-00000000115760FA
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestShowType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestShowType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestShowType> >::pointer v11; // rax
  data::QuestShowType second; // ecx
  char v13; // dl
  data::QuestShowType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:246 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      238);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestShowType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestShowType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestShowType>::pair<char const(&)[11],data::QuestShowType,true>(
        (std::pair<const std::string,data::QuestShowType> *const)(v2 + 304),
        (const char (*)[11])"QUEST_SHOW",
        (data::QuestShowType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_SHOW");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestShowType>::pair<char const(&)[13],data::QuestShowType,true>(
        (std::pair<const std::string,data::QuestShowType> *const)(v2 + 344),
        (const char (*)[13])"QUEST_HIDDEN",
        (data::QuestShowType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::QuestShowType>>::allocator((std::allocator<std::pair<const std::string,data::QuestShowType> > *const)(v2 + 64));
      std::map<std::string,data::QuestShowType>::map(
        &data::enumStrToVal(std::string const&,data::QuestShowType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestShowType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestShowType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestShowType &)::m);
      e = (data::QuestShowType *)&data::enumStrToVal(std::string const&,data::QuestShowType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestShowType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestShowType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestShowType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestShowType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestShowType> *)(v2 + 384);
            i != (std::pair<const std::string,data::QuestShowType> *)(v2 + 304);
            std::pair<std::string const,data::QuestShowType>::~pair(i) )
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
    *(std::map<std::string,data::QuestShowType>::iterator *)(v2 + 112) = std::map<std::string,data::QuestShowType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::QuestShowType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::QuestShowType>::iterator *)(v2 + 144) = std::map<std::string,data::QuestShowType>::end(&data::enumStrToVal(std::string const&,data::QuestShowType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestShowType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestShowType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        249);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestShowType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestShowType> > *const)(v2 + 112));
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

// Line 257: range 00000000115760FB-000000001157612A
const char *__cdecl data::getDescription(data::QuestShowType e)
{
  if ( e == QUEST_SHOW )
    return (const char *)&unk_1A7E2520;
  if ( e == QUEST_HIDDEN )
    return (const char *)&unk_1A7E2560;
  return "unknown enum value!";
};

// Line 270: range 000000001157612B-00000000115763C9
const char *__cdecl data::enumValToStr(data::MainQuestTagType e)
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
    case MAINQUEST_TAG_NONE:
      result = "MAINQUEST_TAG_NONE";
      break;
    case MAINQUEST_TAG_GUIDE:
      result = "MAINQUEST_TAG_GUIDE";
      break;
    case MAINQUEST_TAG_ACTIVITY:
      result = "MAINQUEST_TAG_ACTIVITY";
      break;
    case MAINQUEST_TAG_RANK_ZERO_WQ:
      result = "MAINQUEST_TAG_RANK_ZERO_WQ";
      break;
    case MAINQUEST_TAG_MAIN_WQ:
      result = "MAINQUEST_TAG_MAIN_WQ";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 290: range 00000000115763CA-0000000011576E34
bool __cdecl data::enumStrToVal(const std::string *s, data::MainQuestTagType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MainQuestTagType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MainQuestTagType> >::pointer v11; // rax
  data::MainQuestTagType second; // ecx
  char v13; // dl
  data::MainQuestTagType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:304 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      293);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MainQuestTagType>::pair<char const(&)[19],data::MainQuestTagType,true>(
        (std::pair<const std::string,data::MainQuestTagType> *const)(v2 + 336),
        (const char (*)[19])"MAINQUEST_TAG_NONE",
        (data::MainQuestTagType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "MAINQUEST_TAG_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MainQuestTagType>::pair<char const(&)[20],data::MainQuestTagType,true>(
        (std::pair<const std::string,data::MainQuestTagType> *const)(v2 + 376),
        (const char (*)[20])"MAINQUEST_TAG_GUIDE",
        (data::MainQuestTagType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "MAINQUEST_TAG_GUIDE");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MainQuestTagType>::pair<char const(&)[23],data::MainQuestTagType,true>(
        (std::pair<const std::string,data::MainQuestTagType> *const)(v2 + 416),
        (const char (*)[23])"MAINQUEST_TAG_ACTIVITY",
        (data::MainQuestTagType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "MAINQUEST_TAG_ACTIVITY");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MainQuestTagType>::pair<char const(&)[27],data::MainQuestTagType,true>(
        (std::pair<const std::string,data::MainQuestTagType> *const)(v2 + 456),
        (const char (*)[27])"MAINQUEST_TAG_RANK_ZERO_WQ",
        (data::MainQuestTagType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "MAINQUEST_TAG_RANK_ZERO_WQ");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::MainQuestTagType>::pair<char const(&)[22],data::MainQuestTagType,true>(
        (std::pair<const std::string,data::MainQuestTagType> *const)(v2 + 496),
        (const char (*)[22])"MAINQUEST_TAG_MAIN_WQ",
        (data::MainQuestTagType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::MainQuestTagType>>::allocator((std::allocator<std::pair<const std::string,data::MainQuestTagType> > *const)(v2 + 48));
      std::map<std::string,data::MainQuestTagType>::map(
        &data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MainQuestTagType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MainQuestTagType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m);
      e = (data::MainQuestTagType *)&data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MainQuestTagType>::~map,
        &data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MainQuestTagType>>::~allocator((std::allocator<std::pair<const std::string,data::MainQuestTagType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MainQuestTagType> *)(v2 + 536);
            i != (std::pair<const std::string,data::MainQuestTagType> *)(v2 + 336);
            std::pair<std::string const,data::MainQuestTagType>::~pair(i) )
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
    *(std::map<std::string,data::MainQuestTagType>::iterator *)(v2 + 144) = std::map<std::string,data::MainQuestTagType>::find(
                                                                              &data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::MainQuestTagType>::iterator *)(v2 + 176) = std::map<std::string,data::MainQuestTagType>::end(&data::enumStrToVal(std::string const&,data::MainQuestTagType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MainQuestTagType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MainQuestTagType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        307);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MainQuestTagType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MainQuestTagType> > *const)(v2 + 144));
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

// Line 315: range 0000000011576E35-0000000011576E9A
const char *__cdecl data::getDescription(data::MainQuestTagType e)
{
  const char *result; // rax

  switch ( e )
  {
    case MAINQUEST_TAG_NONE:
      result = (const char *)&unk_1A7E27E0;
      break;
    case MAINQUEST_TAG_GUIDE:
      result = (const char *)&unk_1A7E2820;
      break;
    case MAINQUEST_TAG_ACTIVITY:
      result = (const char *)&unk_1A7E2860;
      break;
    case MAINQUEST_TAG_RANK_ZERO_WQ:
      result = (const char *)&unk_1A7E28A0;
      break;
    case MAINQUEST_TAG_MAIN_WQ:
      result = (const char *)&unk_1A7E28E0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 334: range 0000000011576E9B-0000000011577118
const char *__cdecl data::enumValToStr(data::QuestCondCompareType e)
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
  if ( e == LessThan )
  {
    result = "LessThan";
  }
  else
  {
    if ( e > LessThan )
      goto LABEL_22;
    if ( e == Equal_4 )
    {
      result = "Equal";
      goto LABEL_17;
    }
    if ( e == GreaterThan )
    {
      result = "GreaterThan";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        344);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 350: range 0000000011577119-00000000115779FA
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestCondCompareType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestCondCompareType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondCompareType> >::pointer v11; // rax
  data::QuestCondCompareType second; // ecx
  char v13; // dl
  data::QuestCondCompareType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:362 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      353);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestCondCompareType>::pair<char const(&)[6],data::QuestCondCompareType,true>(
        (std::pair<const std::string,data::QuestCondCompareType> *const)(v2 + 320),
        (const char (*)[6])"Equal",
        (data::QuestCondCompareType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Equal");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestCondCompareType>::pair<char const(&)[12],data::QuestCondCompareType,true>(
        (std::pair<const std::string,data::QuestCondCompareType> *const)(v2 + 360),
        (const char (*)[12])"GreaterThan",
        (data::QuestCondCompareType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GreaterThan");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QuestCondCompareType>::pair<char const(&)[9],data::QuestCondCompareType,true>(
        (std::pair<const std::string,data::QuestCondCompareType> *const)(v2 + 400),
        (const char (*)[9])"LessThan",
        (data::QuestCondCompareType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QuestCondCompareType>>::allocator((std::allocator<std::pair<const std::string,data::QuestCondCompareType> > *const)(v2 + 64));
      std::map<std::string,data::QuestCondCompareType>::map(
        &data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestCondCompareType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestCondCompareType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m);
      e = (data::QuestCondCompareType *)&data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestCondCompareType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestCondCompareType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestCondCompareType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestCondCompareType> *)(v2 + 440);
            i != (std::pair<const std::string,data::QuestCondCompareType> *)(v2 + 320);
            std::pair<std::string const,data::QuestCondCompareType>::~pair(i) )
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
    *(std::map<std::string,data::QuestCondCompareType>::iterator *)(v2 + 128) = std::map<std::string,data::QuestCondCompareType>::find(
                                                                                  &data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m,
                                                                                  s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QuestCondCompareType>::iterator *)(v2 + 160) = std::map<std::string,data::QuestCondCompareType>::end(&data::enumStrToVal(std::string const&,data::QuestCondCompareType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondCompareType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondCompareType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        365);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestCondCompareType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondCompareType> > *const)(v2 + 128));
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

// Line 373: range 00000000115779FB-0000000011577A3F
const char *__cdecl data::getDescription(data::QuestCondCompareType e)
{
  if ( e == LessThan )
    return (const char *)&unk_1A7E2B40;
  if ( e > LessThan )
    return "unknown enum value!";
  if ( e == Equal_4 )
    return (const char *)&unk_1A7E2AC0;
  if ( e == GreaterThan )
    return (const char *)&unk_1A7E2B00;
  else
    return "unknown enum value!";
};

// Line 388: range 0000000011577A40-0000000011578139
const char *__cdecl data::enumValToStr(data::QuestCondType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestCondType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case QUEST_COND_NONE:
      result = "QUEST_COND_NONE";
      break;
    case QUEST_COND_STATE_EQUAL:
      result = "QUEST_COND_STATE_EQUAL";
      break;
    case QUEST_COND_STATE_NOT_EQUAL:
      result = "QUEST_COND_STATE_NOT_EQUAL";
      break;
    case QUEST_COND_PACK_HAVE_ITEM:
      result = "QUEST_COND_PACK_HAVE_ITEM";
      break;
    case QUEST_COND_AVATAR_ELEMENT_EQUAL:
      result = "QUEST_COND_AVATAR_ELEMENT_EQUAL";
      break;
    case QUEST_COND_AVATAR_ELEMENT_NOT_EQUAL:
      result = "QUEST_COND_AVATAR_ELEMENT_NOT_EQUAL";
      break;
    case QUEST_COND_AVATAR_CAN_CHANGE_ELEMENT:
      result = "QUEST_COND_AVATAR_CAN_CHANGE_ELEMENT";
      break;
    case QUEST_COND_CITY_LEVEL_EQUAL_GREATER:
      result = "QUEST_COND_CITY_LEVEL_EQUAL_GREATER";
      break;
    case QUEST_COND_ITEM_NUM_LESS_THAN:
      result = "QUEST_COND_ITEM_NUM_LESS_THAN";
      break;
    case QUEST_COND_DAILY_TASK_START:
      result = "QUEST_COND_DAILY_TASK_START";
      break;
    case QUEST_COND_OPEN_STATE_EQUAL:
      result = "QUEST_COND_OPEN_STATE_EQUAL";
      break;
    case QUEST_COND_DAILY_TASK_OPEN:
      result = "QUEST_COND_DAILY_TASK_OPEN";
      break;
    case QUEST_COND_DAILY_TASK_REWARD_CAN_GET:
      result = "QUEST_COND_DAILY_TASK_REWARD_CAN_GET";
      break;
    case QUEST_COND_DAILY_TASK_REWARD_RECEIVED:
      result = "QUEST_COND_DAILY_TASK_REWARD_RECEIVED";
      break;
    case QUEST_COND_PLAYER_LEVEL_REWARD_CAN_GET:
      result = "QUEST_COND_PLAYER_LEVEL_REWARD_CAN_GET";
      break;
    case QUEST_COND_EXPLORATION_REWARD_CAN_GET:
      result = "QUEST_COND_EXPLORATION_REWARD_CAN_GET";
      break;
    case QUEST_COND_IS_WORLD_OWNER:
      result = "QUEST_COND_IS_WORLD_OWNER";
      break;
    case QUEST_COND_PLAYER_LEVEL_EQUAL_GREATER:
      result = "QUEST_COND_PLAYER_LEVEL_EQUAL_GREATER";
      break;
    case QUEST_COND_SCENE_AREA_UNLOCKED:
      result = "QUEST_COND_SCENE_AREA_UNLOCKED";
      break;
    case QUEST_COND_ITEM_GIVING_ACTIVED:
      result = "QUEST_COND_ITEM_GIVING_ACTIVED";
      break;
    case QUEST_COND_ITEM_GIVING_FINISHED:
      result = "QUEST_COND_ITEM_GIVING_FINISHED";
      break;
    case QUEST_COND_IS_DAYTIME:
      result = "QUEST_COND_IS_DAYTIME";
      break;
    case QUEST_COND_CURRENT_AVATAR:
      result = "QUEST_COND_CURRENT_AVATAR";
      break;
    case QUEST_COND_CURRENT_AREA:
      result = "QUEST_COND_CURRENT_AREA";
      break;
    case QUEST_COND_QUEST_VAR_EQUAL:
      result = "QUEST_COND_QUEST_VAR_EQUAL";
      break;
    case QUEST_COND_QUEST_VAR_GREATER:
      result = "QUEST_COND_QUEST_VAR_GREATER";
      break;
    case QUEST_COND_QUEST_VAR_LESS:
      result = "QUEST_COND_QUEST_VAR_LESS";
      break;
    case QUEST_COND_FORGE_HAVE_FINISH:
      result = "QUEST_COND_FORGE_HAVE_FINISH";
      break;
    case QUEST_COND_DAILY_TASK_IN_PROGRESS:
      result = "QUEST_COND_DAILY_TASK_IN_PROGRESS";
      break;
    case QUEST_COND_DAILY_TASK_FINISHED:
      result = "QUEST_COND_DAILY_TASK_FINISHED";
      break;
    case QUEST_COND_ACTIVITY_COND:
      result = "QUEST_COND_ACTIVITY_COND";
      break;
    case QUEST_COND_ACTIVITY_OPEN:
      result = "QUEST_COND_ACTIVITY_OPEN";
      break;
    case QUEST_COND_DAILY_TASK_VAR_GT:
      result = "QUEST_COND_DAILY_TASK_VAR_GT";
      break;
    case QUEST_COND_DAILY_TASK_VAR_EQ:
      result = "QUEST_COND_DAILY_TASK_VAR_EQ";
      break;
    case QUEST_COND_DAILY_TASK_VAR_LT:
      result = "QUEST_COND_DAILY_TASK_VAR_LT";
      break;
    case QUEST_COND_BARGAIN_ITEM_GT:
      result = "QUEST_COND_BARGAIN_ITEM_GT";
      break;
    case QUEST_COND_BARGAIN_ITEM_EQ:
      result = "QUEST_COND_BARGAIN_ITEM_EQ";
      break;
    case QUEST_COND_BARGAIN_ITEM_LT:
      result = "QUEST_COND_BARGAIN_ITEM_LT";
      break;
    case QUEST_COND_COMPLETE_TALK:
      result = "QUEST_COND_COMPLETE_TALK";
      break;
    case QUEST_COND_NOT_HAVE_BLOSSOM_TALK:
      result = "QUEST_COND_NOT_HAVE_BLOSSOM_TALK";
      break;
    case QUEST_COND_IS_CUR_BLOSSOM_TALK:
      result = "QUEST_COND_IS_CUR_BLOSSOM_TALK";
      break;
    case QUEST_COND_QUEST_NOT_RECEIVE:
      result = "QUEST_COND_QUEST_NOT_RECEIVE";
      break;
    case QUEST_COND_QUEST_SERVER_COND_VALID:
      result = "QUEST_COND_QUEST_SERVER_COND_VALID";
      break;
    case QUEST_COND_ACTIVITY_CLIENT_COND:
      result = "QUEST_COND_ACTIVITY_CLIENT_COND";
      break;
    case QUEST_COND_QUEST_GLOBAL_VAR_EQUAL:
      result = "QUEST_COND_QUEST_GLOBAL_VAR_EQUAL";
      break;
    case QUEST_COND_QUEST_GLOBAL_VAR_GREATER:
      result = "QUEST_COND_QUEST_GLOBAL_VAR_GREATER";
      break;
    case QUEST_COND_QUEST_GLOBAL_VAR_LESS:
      result = "QUEST_COND_QUEST_GLOBAL_VAR_LESS";
      break;
    case QUEST_COND_PERSONAL_LINE_UNLOCK:
      result = "QUEST_COND_PERSONAL_LINE_UNLOCK";
      break;
    case QUEST_COND_CITY_REPUTATION_REQUEST:
      result = "QUEST_COND_CITY_REPUTATION_REQUEST";
      break;
    case QUEST_COND_MAIN_COOP_START:
      result = "QUEST_COND_MAIN_COOP_START";
      break;
    case QUEST_COND_MAIN_COOP_ENTER_SAVE_POINT:
      result = "QUEST_COND_MAIN_COOP_ENTER_SAVE_POINT";
      break;
    case QUEST_COND_CITY_REPUTATION_LEVEL:
      result = "QUEST_COND_CITY_REPUTATION_LEVEL";
      break;
    case QUEST_COND_CITY_REPUTATION_UNLOCK:
      result = "QUEST_COND_CITY_REPUTATION_UNLOCK";
      break;
    case QUEST_COND_LUA_NOTIFY:
      result = "QUEST_COND_LUA_NOTIFY";
      break;
    case QUEST_COND_CUR_CLIMATE:
      result = "QUEST_COND_CUR_CLIMATE";
      break;
    case QUEST_COND_ACTIVITY_END:
      result = "QUEST_COND_ACTIVITY_END";
      break;
    case QUEST_COND_COOP_POINT_RUNNING:
      result = "QUEST_COND_COOP_POINT_RUNNING";
      break;
    case QUEST_COND_GADGET_TALK_STATE_EQUAL:
      result = "QUEST_COND_GADGET_TALK_STATE_EQUAL";
      break;
    case QUEST_COND_AVATAR_FETTER_GT:
      result = "QUEST_COND_AVATAR_FETTER_GT";
      break;
    case QUEST_COND_AVATAR_FETTER_EQ:
      result = "QUEST_COND_AVATAR_FETTER_EQ";
      break;
    case QUEST_COND_AVATAR_FETTER_LT:
      result = "QUEST_COND_AVATAR_FETTER_LT";
      break;
    case QUEST_COND_NEW_HOMEWORLD_MOUDLE_UNLOCK:
      result = "QUEST_COND_NEW_HOMEWORLD_MOUDLE_UNLOCK";
      break;
    case QUEST_COND_NEW_HOMEWORLD_LEVEL_REWARD:
      result = "QUEST_COND_NEW_HOMEWORLD_LEVEL_REWARD";
      break;
    case QUEST_COND_NEW_HOMEWORLD_MAKE_FINISH:
      result = "QUEST_COND_NEW_HOMEWORLD_MAKE_FINISH";
      break;
    case QUEST_COND_HOMEWORLD_NPC_EVENT:
      result = "QUEST_COND_HOMEWORLD_NPC_EVENT";
      break;
    case QUEST_COND_TIME_VAR_GT_EQ:
      result = "QUEST_COND_TIME_VAR_GT_EQ";
      break;
    case QUEST_COND_TIME_VAR_PASS_DAY:
      result = "QUEST_COND_TIME_VAR_PASS_DAY";
      break;
    case QUEST_COND_HOMEWORLD_NPC_NEW_TALK:
      result = "QUEST_COND_HOMEWORLD_NPC_NEW_TALK";
      break;
    case QUEST_COND_PLAYER_CHOOSE_MALE:
      result = "QUEST_COND_PLAYER_CHOOSE_MALE";
      break;
    case QUEST_COND_HISTORY_GOT_ANY_ITEM:
      result = "QUEST_COND_HISTORY_GOT_ANY_ITEM";
      break;
    case QUEST_COND_LEARNED_RECIPE:
      result = "QUEST_COND_LEARNED_RECIPE";
      break;
    case QUEST_COND_LUNARITE_REGION_UNLOCKED:
      result = "QUEST_COND_LUNARITE_REGION_UNLOCKED";
      break;
    case QUEST_COND_LUNARITE_HAS_REGION_HINT_COUNT:
      result = "QUEST_COND_LUNARITE_HAS_REGION_HINT_COUNT";
      break;
    case QUEST_COND_LUNARITE_COLLECT_FINISH:
      result = "QUEST_COND_LUNARITE_COLLECT_FINISH";
      break;
    case QUEST_COND_LUNARITE_MARK_ALL_FINISH:
      result = "QUEST_COND_LUNARITE_MARK_ALL_FINISH";
      break;
    case QUEST_COND_NEW_HOMEWORLD_SHOP_ITEM:
      result = "QUEST_COND_NEW_HOMEWORLD_SHOP_ITEM";
      break;
    case QUEST_COND_SCENE_POINT_UNLOCK:
      result = "QUEST_COND_SCENE_POINT_UNLOCK";
      break;
    case QUEST_COND_SCENE_LEVEL_TAG_EQ:
      result = "QUEST_COND_SCENE_LEVEL_TAG_EQ";
      break;
    case QUEST_COND_PLAYER_ENTER_REGION:
      result = "QUEST_COND_PLAYER_ENTER_REGION";
      break;
    case QUEST_COND_ACTIVITY_SCHEDULE_OPEN_AND_COND:
      result = "QUEST_COND_ACTIVITY_SCHEDULE_OPEN_AND_COND";
      break;
    case QUEST_COND_ARANARA_COLLECTION_STATE_EQ:
      result = "QUEST_COND_ARANARA_COLLECTION_STATE_EQ";
      break;
    case QUEST_COND_INFERENCE_FINISH_PAGE_CONCLUSION:
      result = "QUEST_COND_INFERENCE_FINISH_PAGE_CONCLUSION";
      break;
    case QUEST_COND_SCENE_LEVEL_TAG_VALID:
      result = "QUEST_COND_SCENE_LEVEL_TAG_VALID";
      break;
    case QUEST_COND_NEW_HOMEWORLD_WOOD_EXCHANGE_UNLOCK:
      result = "QUEST_COND_NEW_HOMEWORLD_WOOD_EXCHANGE_UNLOCK";
      break;
    case QUEST_COND_IN_CITY:
      result = "QUEST_COND_IN_CITY";
      break;
    case QUEST_COND_GCG_EXP_OVERFLOW:
      result = "QUEST_COND_GCG_EXP_OVERFLOW";
      break;
    case QUEST_COND_GCG_NPC_TYPE:
      result = "QUEST_COND_GCG_NPC_TYPE";
      break;
    case QUEST_COND_ACTIVITY_NEW_FUNGUS_CAPTURE:
      result = "QUEST_COND_ACTIVITY_NEW_FUNGUS_CAPTURE";
      break;
    case QUEST_COND_GCG_LEVEL_REWARD_CAN_TAKE:
      result = "QUEST_COND_GCG_LEVEL_REWARD_CAN_TAKE";
      break;
    case QUEST_COND_GCG_SHOP_NEW_GOODS:
      result = "QUEST_COND_GCG_SHOP_NEW_GOODS";
      break;
    case QUEST_COND_GCG_CHALLENGE_NEW_BOSS:
      result = "QUEST_COND_GCG_CHALLENGE_NEW_BOSS";
      break;
    case QUEST_COND_GCG_CHALLENGE_NEW_CHAR:
      result = "QUEST_COND_GCG_CHALLENGE_NEW_CHAR";
      break;
    case QUEST_COND_GCG_LEVEL_UNLOCKED:
      result = "QUEST_COND_GCG_LEVEL_UNLOCKED";
      break;
    case QUEST_COND_GCG_WORLD_CHALLENGE_RESULT:
      result = "QUEST_COND_GCG_WORLD_CHALLENGE_RESULT";
      break;
    case QUEST_COND_HIT_WANDERER_RENAME_EASTER_EGG:
      result = "QUEST_COND_HIT_WANDERER_RENAME_EASTER_EGG";
      break;
    case QUEST_COND_HIT_KEYWORD_EASTER_EGG:
      result = "QUEST_COND_HIT_KEYWORD_EASTER_EGG";
      break;
    case QUEST_COND_GCG_INVITE_TYPE:
      result = "QUEST_COND_GCG_INVITE_TYPE";
      break;
    case QUEST_COND_TMPVALUE_HIT_NICKNAME:
      result = "QUEST_COND_TMPVALUE_HIT_NICKNAME";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        588);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 594: range 000000001157813A-000000001157C0CC
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestCondType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::QuestCondType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondType> >::pointer v10; // rax
  data::QuestCondType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::QuestCondType *ea; // [rsp+10h] [rbp-1740h]
  char v16[5936]; // [rsp+20h] [rbp-1730h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5888LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "105 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 "
                        "9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unk"
                        "nown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> "
                        "304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 "
                        "9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unk"
                        "nown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> "
                        "560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 "
                        "9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unk"
                        "nown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 800 4 9 <unknown> "
                        "816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 <unknown> 896 4 "
                        "9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unknown> 976 4 9 <unk"
                        "nown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown> 1056 4 9 <unkno"
                        "wn> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown> 1136 4 9 <unknow"
                        "n> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> 1216 4 9 <unknown"
                        "> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 1296 4 9 <unknown>"
                        " 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 4 9 <unknown> 1376 4 9 <unknown> "
                        "1392 4 9 <unknown> 1408 4 9 <unknown> 1424 4 9 <unknown> 1440 4 9 <unknown> 1456 4 9 <unknown> 1"
                        "472 4 9 <unknown> 1488 4 9 <unknown> 1504 4 9 <unknown> 1520 4 9 <unknown> 1536 4 9 <unknown> 15"
                        "52 4 9 <unknown> 1568 4 9 <unknown> 1584 4 9 <unknown> 1600 4 9 <unknown> 1616 4 9 <unknown> 163"
                        "2 4 9 <unknown> 1648 8 6 it:701 1680 8 9 <unknown> 1712 32 9 <unknown> 1776 32 9 <unknown> 1840 "
                        "3920 9 <unknown>";
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
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -234556924;
  v4[536862745] = -234556924;
  v4[536862746] = -234556924;
  v4[536862747] = -234556924;
  v4[536862748] = -234556924;
  v4[536862749] = -234556924;
  v4[536862750] = -234556924;
  v4[536862751] = -234556924;
  v4[536862752] = -234556924;
  v4[536862753] = -234556924;
  v4[536862754] = -234556924;
  v4[536862755] = -234556924;
  v4[536862756] = -234556924;
  v4[536862757] = -234556924;
  v4[536862758] = -234556924;
  v4[536862759] = -234556924;
  v4[536862760] = -234556924;
  v4[536862761] = -234556924;
  v4[536862762] = -234556924;
  v4[536862763] = -234556924;
  v4[536862764] = -234556924;
  v4[536862765] = -234556924;
  v4[536862766] = -234556924;
  v4[536862767] = -234556924;
  v4[536862768] = -234556924;
  v4[536862769] = -234556924;
  v4[536862770] = -234556924;
  v4[536862771] = 61956;
  v4[536862771] = -234881024;
  v4[536862772] = 62194;
  v4[536862772] = -234881024;
  v4[536862773] = 62194;
  v4[536862774] = -219021312;
  v4[536862775] = 62194;
  v4[536862776] = -219021312;
  v4[536862777] = 62194;
  v4[536862900] = -202116109;
  v4[536862901] = -202116109;
  v4[536862902] = -202116109;
  v4[536862903] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 1712) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1743) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 1743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1712, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1712),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      597);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 1712),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1712));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestCondType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestCondType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[16],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 1840),
        (const char (*)[16])"QUEST_COND_NONE",
        (data::QuestCondType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_COND_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[23],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 1880),
        (const char (*)[23])"QUEST_COND_STATE_EQUAL",
        (data::QuestCondType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_COND_STATE_EQUAL");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 1920),
        (const char (*)[27])"QUEST_COND_STATE_NOT_EQUAL",
        (data::QuestCondType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QUEST_COND_STATE_NOT_EQUAL");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[26],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 1960),
        (const char (*)[26])"QUEST_COND_PACK_HAVE_ITEM",
        (data::QuestCondType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QUEST_COND_PACK_HAVE_ITEM");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[32],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2000),
        (const char (*)[32])"QUEST_COND_AVATAR_ELEMENT_EQUAL",
        (data::QuestCondType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "QUEST_COND_AVATAR_ELEMENT_EQUAL");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[36],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2040),
        (const char (*)[36])"QUEST_COND_AVATAR_ELEMENT_NOT_EQUAL",
        (data::QuestCondType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "QUEST_COND_AVATAR_ELEMENT_NOT_EQUAL");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[37],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2080),
        (const char (*)[37])"QUEST_COND_AVATAR_CAN_CHANGE_ELEMENT",
        (data::QuestCondType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "QUEST_COND_AVATAR_CAN_CHANGE_ELEMENT");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[36],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2120),
        (const char (*)[36])"QUEST_COND_CITY_LEVEL_EQUAL_GREATER",
        (data::QuestCondType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "QUEST_COND_CITY_LEVEL_EQUAL_GREATER");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2160),
        (const char (*)[30])"QUEST_COND_ITEM_NUM_LESS_THAN",
        (data::QuestCondType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "QUEST_COND_ITEM_NUM_LESS_THAN");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[28],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2200),
        (const char (*)[28])"QUEST_COND_DAILY_TASK_START",
        (data::QuestCondType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "QUEST_COND_DAILY_TASK_START");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[28],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2240),
        (const char (*)[28])"QUEST_COND_OPEN_STATE_EQUAL",
        (data::QuestCondType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "QUEST_COND_OPEN_STATE_EQUAL");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2280),
        (const char (*)[27])"QUEST_COND_DAILY_TASK_OPEN",
        (data::QuestCondType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "QUEST_COND_DAILY_TASK_OPEN");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[37],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2320),
        (const char (*)[37])"QUEST_COND_DAILY_TASK_REWARD_CAN_GET",
        (data::QuestCondType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "QUEST_COND_DAILY_TASK_REWARD_CAN_GET");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[38],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2360),
        (const char (*)[38])"QUEST_COND_DAILY_TASK_REWARD_RECEIVED",
        (data::QuestCondType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "QUEST_COND_DAILY_TASK_REWARD_RECEIVED");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[39],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2400),
        (const char (*)[39])"QUEST_COND_PLAYER_LEVEL_REWARD_CAN_GET",
        (data::QuestCondType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "QUEST_COND_PLAYER_LEVEL_REWARD_CAN_GET");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[38],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2440),
        (const char (*)[38])"QUEST_COND_EXPLORATION_REWARD_CAN_GET",
        (data::QuestCondType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "QUEST_COND_EXPLORATION_REWARD_CAN_GET");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[26],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2480),
        (const char (*)[26])"QUEST_COND_IS_WORLD_OWNER",
        (data::QuestCondType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "QUEST_COND_IS_WORLD_OWNER");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[38],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2520),
        (const char (*)[38])"QUEST_COND_PLAYER_LEVEL_EQUAL_GREATER",
        (data::QuestCondType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "QUEST_COND_PLAYER_LEVEL_EQUAL_GREATER");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[31],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2560),
        (const char (*)[31])"QUEST_COND_SCENE_AREA_UNLOCKED",
        (data::QuestCondType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "QUEST_COND_SCENE_AREA_UNLOCKED");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[31],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2600),
        (const char (*)[31])"QUEST_COND_ITEM_GIVING_ACTIVED",
        (data::QuestCondType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "QUEST_COND_ITEM_GIVING_ACTIVED");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[32],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2640),
        (const char (*)[32])"QUEST_COND_ITEM_GIVING_FINISHED",
        (data::QuestCondType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "QUEST_COND_ITEM_GIVING_FINISHED");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[22],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2680),
        (const char (*)[22])"QUEST_COND_IS_DAYTIME",
        (data::QuestCondType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "QUEST_COND_IS_DAYTIME");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[26],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2720),
        (const char (*)[26])"QUEST_COND_CURRENT_AVATAR",
        (data::QuestCondType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "QUEST_COND_CURRENT_AVATAR");
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[24],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2760),
        (const char (*)[24])"QUEST_COND_CURRENT_AREA",
        (data::QuestCondType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "QUEST_COND_CURRENT_AREA");
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2800),
        (const char (*)[27])"QUEST_COND_QUEST_VAR_EQUAL",
        (data::QuestCondType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "QUEST_COND_QUEST_VAR_EQUAL");
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2840),
        (const char (*)[29])"QUEST_COND_QUEST_VAR_GREATER",
        (data::QuestCondType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "QUEST_COND_QUEST_VAR_GREATER");
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[26],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2880),
        (const char (*)[26])"QUEST_COND_QUEST_VAR_LESS",
        (data::QuestCondType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "QUEST_COND_QUEST_VAR_LESS");
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2920),
        (const char (*)[29])"QUEST_COND_FORGE_HAVE_FINISH",
        (data::QuestCondType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "QUEST_COND_FORGE_HAVE_FINISH");
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 2960),
        (const char (*)[34])"QUEST_COND_DAILY_TASK_IN_PROGRESS",
        (data::QuestCondType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "QUEST_COND_DAILY_TASK_IN_PROGRESS");
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[31],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3000),
        (const char (*)[31])"QUEST_COND_DAILY_TASK_FINISHED",
        (data::QuestCondType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "QUEST_COND_DAILY_TASK_FINISHED");
      *(_DWORD *)(v2 + 560) = 30;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[25],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3040),
        (const char (*)[25])"QUEST_COND_ACTIVITY_COND",
        (data::QuestCondType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "QUEST_COND_ACTIVITY_COND");
      *(_DWORD *)(v2 + 576) = 31;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[25],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3080),
        (const char (*)[25])"QUEST_COND_ACTIVITY_OPEN",
        (data::QuestCondType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "QUEST_COND_ACTIVITY_OPEN");
      *(_DWORD *)(v2 + 592) = 32;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3120),
        (const char (*)[29])"QUEST_COND_DAILY_TASK_VAR_GT",
        (data::QuestCondType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "QUEST_COND_DAILY_TASK_VAR_GT");
      *(_DWORD *)(v2 + 608) = 33;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3160),
        (const char (*)[29])"QUEST_COND_DAILY_TASK_VAR_EQ",
        (data::QuestCondType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "QUEST_COND_DAILY_TASK_VAR_EQ");
      *(_DWORD *)(v2 + 624) = 34;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3200),
        (const char (*)[29])"QUEST_COND_DAILY_TASK_VAR_LT",
        (data::QuestCondType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "QUEST_COND_DAILY_TASK_VAR_LT");
      *(_DWORD *)(v2 + 640) = 35;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3240),
        (const char (*)[27])"QUEST_COND_BARGAIN_ITEM_GT",
        (data::QuestCondType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "QUEST_COND_BARGAIN_ITEM_GT");
      *(_DWORD *)(v2 + 656) = 36;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3280),
        (const char (*)[27])"QUEST_COND_BARGAIN_ITEM_EQ",
        (data::QuestCondType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "QUEST_COND_BARGAIN_ITEM_EQ");
      *(_DWORD *)(v2 + 672) = 37;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3320),
        (const char (*)[27])"QUEST_COND_BARGAIN_ITEM_LT",
        (data::QuestCondType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "QUEST_COND_BARGAIN_ITEM_LT");
      *(_DWORD *)(v2 + 688) = 38;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[25],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3360),
        (const char (*)[25])"QUEST_COND_COMPLETE_TALK",
        (data::QuestCondType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "QUEST_COND_COMPLETE_TALK");
      *(_DWORD *)(v2 + 704) = 39;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[33],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3400),
        (const char (*)[33])"QUEST_COND_NOT_HAVE_BLOSSOM_TALK",
        (data::QuestCondType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "QUEST_COND_NOT_HAVE_BLOSSOM_TALK");
      *(_DWORD *)(v2 + 720) = 40;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[31],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3440),
        (const char (*)[31])"QUEST_COND_IS_CUR_BLOSSOM_TALK",
        (data::QuestCondType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "QUEST_COND_IS_CUR_BLOSSOM_TALK");
      *(_DWORD *)(v2 + 736) = 41;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3480),
        (const char (*)[29])"QUEST_COND_QUEST_NOT_RECEIVE",
        (data::QuestCondType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "QUEST_COND_QUEST_NOT_RECEIVE");
      *(_DWORD *)(v2 + 752) = 42;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[35],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3520),
        (const char (*)[35])"QUEST_COND_QUEST_SERVER_COND_VALID",
        (data::QuestCondType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "QUEST_COND_QUEST_SERVER_COND_VALID");
      *(_DWORD *)(v2 + 768) = 43;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[32],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3560),
        (const char (*)[32])"QUEST_COND_ACTIVITY_CLIENT_COND",
        (data::QuestCondType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "QUEST_COND_ACTIVITY_CLIENT_COND");
      *(_DWORD *)(v2 + 784) = 44;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3600),
        (const char (*)[34])"QUEST_COND_QUEST_GLOBAL_VAR_EQUAL",
        (data::QuestCondType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "QUEST_COND_QUEST_GLOBAL_VAR_EQUAL");
      *(_DWORD *)(v2 + 800) = 45;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[36],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3640),
        (const char (*)[36])"QUEST_COND_QUEST_GLOBAL_VAR_GREATER",
        (data::QuestCondType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "QUEST_COND_QUEST_GLOBAL_VAR_GREATER");
      *(_DWORD *)(v2 + 816) = 46;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[33],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3680),
        (const char (*)[33])"QUEST_COND_QUEST_GLOBAL_VAR_LESS",
        (data::QuestCondType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "QUEST_COND_QUEST_GLOBAL_VAR_LESS");
      *(_DWORD *)(v2 + 832) = 47;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[32],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3720),
        (const char (*)[32])"QUEST_COND_PERSONAL_LINE_UNLOCK",
        (data::QuestCondType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "QUEST_COND_PERSONAL_LINE_UNLOCK");
      *(_DWORD *)(v2 + 848) = 48;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[35],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3760),
        (const char (*)[35])"QUEST_COND_CITY_REPUTATION_REQUEST",
        (data::QuestCondType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "QUEST_COND_CITY_REPUTATION_REQUEST");
      *(_DWORD *)(v2 + 864) = 49;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3800),
        (const char (*)[27])"QUEST_COND_MAIN_COOP_START",
        (data::QuestCondType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "QUEST_COND_MAIN_COOP_START");
      *(_DWORD *)(v2 + 880) = 50;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[38],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3840),
        (const char (*)[38])"QUEST_COND_MAIN_COOP_ENTER_SAVE_POINT",
        (data::QuestCondType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "QUEST_COND_MAIN_COOP_ENTER_SAVE_POINT");
      *(_DWORD *)(v2 + 896) = 51;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[33],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3880),
        (const char (*)[33])"QUEST_COND_CITY_REPUTATION_LEVEL",
        (data::QuestCondType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "QUEST_COND_CITY_REPUTATION_LEVEL");
      *(_DWORD *)(v2 + 912) = 52;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3920),
        (const char (*)[34])"QUEST_COND_CITY_REPUTATION_UNLOCK",
        (data::QuestCondType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "QUEST_COND_CITY_REPUTATION_UNLOCK");
      *(_DWORD *)(v2 + 928) = 53;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[22],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 3960),
        (const char (*)[22])"QUEST_COND_LUA_NOTIFY",
        (data::QuestCondType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "QUEST_COND_LUA_NOTIFY");
      *(_DWORD *)(v2 + 944) = 54;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[23],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4000),
        (const char (*)[23])"QUEST_COND_CUR_CLIMATE",
        (data::QuestCondType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "QUEST_COND_CUR_CLIMATE");
      *(_DWORD *)(v2 + 960) = 55;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[24],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4040),
        (const char (*)[24])"QUEST_COND_ACTIVITY_END",
        (data::QuestCondType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "QUEST_COND_ACTIVITY_END");
      *(_DWORD *)(v2 + 976) = 56;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4080),
        (const char (*)[30])"QUEST_COND_COOP_POINT_RUNNING",
        (data::QuestCondType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "QUEST_COND_COOP_POINT_RUNNING");
      *(_DWORD *)(v2 + 992) = 57;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[35],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4120),
        (const char (*)[35])"QUEST_COND_GADGET_TALK_STATE_EQUAL",
        (data::QuestCondType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "QUEST_COND_GADGET_TALK_STATE_EQUAL");
      *(_DWORD *)(v2 + 1008) = 58;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[28],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4160),
        (const char (*)[28])"QUEST_COND_AVATAR_FETTER_GT",
        (data::QuestCondType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "QUEST_COND_AVATAR_FETTER_GT");
      *(_DWORD *)(v2 + 1024) = 59;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[28],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4200),
        (const char (*)[28])"QUEST_COND_AVATAR_FETTER_EQ",
        (data::QuestCondType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "QUEST_COND_AVATAR_FETTER_EQ");
      *(_DWORD *)(v2 + 1040) = 60;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[28],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4240),
        (const char (*)[28])"QUEST_COND_AVATAR_FETTER_LT",
        (data::QuestCondType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "QUEST_COND_AVATAR_FETTER_LT");
      *(_DWORD *)(v2 + 1056) = 61;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[39],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4280),
        (const char (*)[39])"QUEST_COND_NEW_HOMEWORLD_MOUDLE_UNLOCK",
        (data::QuestCondType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "QUEST_COND_NEW_HOMEWORLD_MOUDLE_UNLOCK");
      *(_DWORD *)(v2 + 1072) = 62;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[38],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4320),
        (const char (*)[38])"QUEST_COND_NEW_HOMEWORLD_LEVEL_REWARD",
        (data::QuestCondType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "QUEST_COND_NEW_HOMEWORLD_LEVEL_REWARD");
      *(_DWORD *)(v2 + 1088) = 63;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[37],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4360),
        (const char (*)[37])"QUEST_COND_NEW_HOMEWORLD_MAKE_FINISH",
        (data::QuestCondType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "QUEST_COND_NEW_HOMEWORLD_MAKE_FINISH");
      *(_DWORD *)(v2 + 1104) = 64;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[31],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4400),
        (const char (*)[31])"QUEST_COND_HOMEWORLD_NPC_EVENT",
        (data::QuestCondType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "QUEST_COND_HOMEWORLD_NPC_EVENT");
      *(_DWORD *)(v2 + 1120) = 65;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[26],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4440),
        (const char (*)[26])"QUEST_COND_TIME_VAR_GT_EQ",
        (data::QuestCondType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "QUEST_COND_TIME_VAR_GT_EQ");
      *(_DWORD *)(v2 + 1136) = 66;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[29],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4480),
        (const char (*)[29])"QUEST_COND_TIME_VAR_PASS_DAY",
        (data::QuestCondType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "QUEST_COND_TIME_VAR_PASS_DAY");
      *(_DWORD *)(v2 + 1152) = 67;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4520),
        (const char (*)[34])"QUEST_COND_HOMEWORLD_NPC_NEW_TALK",
        (data::QuestCondType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "QUEST_COND_HOMEWORLD_NPC_NEW_TALK");
      *(_DWORD *)(v2 + 1168) = 68;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4560),
        (const char (*)[30])"QUEST_COND_PLAYER_CHOOSE_MALE",
        (data::QuestCondType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "QUEST_COND_PLAYER_CHOOSE_MALE");
      *(_DWORD *)(v2 + 1184) = 69;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[32],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4600),
        (const char (*)[32])"QUEST_COND_HISTORY_GOT_ANY_ITEM",
        (data::QuestCondType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "QUEST_COND_HISTORY_GOT_ANY_ITEM");
      *(_DWORD *)(v2 + 1200) = 70;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[26],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4640),
        (const char (*)[26])"QUEST_COND_LEARNED_RECIPE",
        (data::QuestCondType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "QUEST_COND_LEARNED_RECIPE");
      *(_DWORD *)(v2 + 1216) = 71;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[36],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4680),
        (const char (*)[36])"QUEST_COND_LUNARITE_REGION_UNLOCKED",
        (data::QuestCondType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "QUEST_COND_LUNARITE_REGION_UNLOCKED");
      *(_DWORD *)(v2 + 1232) = 72;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[42],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4720),
        (const char (*)[42])"QUEST_COND_LUNARITE_HAS_REGION_HINT_COUNT",
        (data::QuestCondType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "QUEST_COND_LUNARITE_HAS_REGION_HINT_COUNT");
      *(_DWORD *)(v2 + 1248) = 73;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[35],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4760),
        (const char (*)[35])"QUEST_COND_LUNARITE_COLLECT_FINISH",
        (data::QuestCondType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "QUEST_COND_LUNARITE_COLLECT_FINISH");
      *(_DWORD *)(v2 + 1264) = 74;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[36],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4800),
        (const char (*)[36])"QUEST_COND_LUNARITE_MARK_ALL_FINISH",
        (data::QuestCondType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "QUEST_COND_LUNARITE_MARK_ALL_FINISH");
      *(_DWORD *)(v2 + 1280) = 75;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[35],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4840),
        (const char (*)[35])"QUEST_COND_NEW_HOMEWORLD_SHOP_ITEM",
        (data::QuestCondType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "QUEST_COND_NEW_HOMEWORLD_SHOP_ITEM");
      *(_DWORD *)(v2 + 1296) = 76;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4880),
        (const char (*)[30])"QUEST_COND_SCENE_POINT_UNLOCK",
        (data::QuestCondType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "QUEST_COND_SCENE_POINT_UNLOCK");
      *(_DWORD *)(v2 + 1312) = 77;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4920),
        (const char (*)[30])"QUEST_COND_SCENE_LEVEL_TAG_EQ",
        (data::QuestCondType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "QUEST_COND_SCENE_LEVEL_TAG_EQ");
      *(_DWORD *)(v2 + 1328) = 78;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[31],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 4960),
        (const char (*)[31])"QUEST_COND_PLAYER_ENTER_REGION",
        (data::QuestCondType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "QUEST_COND_PLAYER_ENTER_REGION");
      *(_DWORD *)(v2 + 1344) = 79;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[43],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5000),
        (const char (*)[43])"QUEST_COND_ACTIVITY_SCHEDULE_OPEN_AND_COND",
        (data::QuestCondType *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, "QUEST_COND_ACTIVITY_SCHEDULE_OPEN_AND_COND");
      *(_DWORD *)(v2 + 1360) = 80;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[39],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5040),
        (const char (*)[39])"QUEST_COND_ARANARA_COLLECTION_STATE_EQ",
        (data::QuestCondType *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, "QUEST_COND_ARANARA_COLLECTION_STATE_EQ");
      *(_DWORD *)(v2 + 1376) = 81;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[44],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5080),
        (const char (*)[44])"QUEST_COND_INFERENCE_FINISH_PAGE_CONCLUSION",
        (data::QuestCondType *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, "QUEST_COND_INFERENCE_FINISH_PAGE_CONCLUSION");
      *(_DWORD *)(v2 + 1392) = 82;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[33],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5120),
        (const char (*)[33])"QUEST_COND_SCENE_LEVEL_TAG_VALID",
        (data::QuestCondType *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, "QUEST_COND_SCENE_LEVEL_TAG_VALID");
      *(_DWORD *)(v2 + 1408) = 83;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[46],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5160),
        (const char (*)[46])"QUEST_COND_NEW_HOMEWORLD_WOOD_EXCHANGE_UNLOCK",
        (data::QuestCondType *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, "QUEST_COND_NEW_HOMEWORLD_WOOD_EXCHANGE_UNLOCK");
      *(_DWORD *)(v2 + 1424) = 84;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[19],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5200),
        (const char (*)[19])"QUEST_COND_IN_CITY",
        (data::QuestCondType *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, "QUEST_COND_IN_CITY");
      *(_DWORD *)(v2 + 1440) = 86;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[28],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5240),
        (const char (*)[28])"QUEST_COND_GCG_EXP_OVERFLOW",
        (data::QuestCondType *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, "QUEST_COND_GCG_EXP_OVERFLOW");
      *(_DWORD *)(v2 + 1456) = 87;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[24],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5280),
        (const char (*)[24])"QUEST_COND_GCG_NPC_TYPE",
        (data::QuestCondType *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, "QUEST_COND_GCG_NPC_TYPE");
      *(_DWORD *)(v2 + 1472) = 88;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[39],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5320),
        (const char (*)[39])"QUEST_COND_ACTIVITY_NEW_FUNGUS_CAPTURE",
        (data::QuestCondType *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, "QUEST_COND_ACTIVITY_NEW_FUNGUS_CAPTURE");
      *(_DWORD *)(v2 + 1488) = 89;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[37],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5360),
        (const char (*)[37])"QUEST_COND_GCG_LEVEL_REWARD_CAN_TAKE",
        (data::QuestCondType *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, "QUEST_COND_GCG_LEVEL_REWARD_CAN_TAKE");
      *(_DWORD *)(v2 + 1504) = 90;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5400),
        (const char (*)[30])"QUEST_COND_GCG_SHOP_NEW_GOODS",
        (data::QuestCondType *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, "QUEST_COND_GCG_SHOP_NEW_GOODS");
      *(_DWORD *)(v2 + 1520) = 91;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5440),
        (const char (*)[34])"QUEST_COND_GCG_CHALLENGE_NEW_BOSS",
        (data::QuestCondType *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, "QUEST_COND_GCG_CHALLENGE_NEW_BOSS");
      *(_DWORD *)(v2 + 1536) = 92;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5480),
        (const char (*)[34])"QUEST_COND_GCG_CHALLENGE_NEW_CHAR",
        (data::QuestCondType *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, "QUEST_COND_GCG_CHALLENGE_NEW_CHAR");
      *(_DWORD *)(v2 + 1552) = 93;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[30],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5520),
        (const char (*)[30])"QUEST_COND_GCG_LEVEL_UNLOCKED",
        (data::QuestCondType *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, "QUEST_COND_GCG_LEVEL_UNLOCKED");
      *(_DWORD *)(v2 + 1568) = 94;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[38],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5560),
        (const char (*)[38])"QUEST_COND_GCG_WORLD_CHALLENGE_RESULT",
        (data::QuestCondType *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, "QUEST_COND_GCG_WORLD_CHALLENGE_RESULT");
      *(_DWORD *)(v2 + 1584) = 95;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[42],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5600),
        (const char (*)[42])"QUEST_COND_HIT_WANDERER_RENAME_EASTER_EGG",
        (data::QuestCondType *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, "QUEST_COND_HIT_WANDERER_RENAME_EASTER_EGG");
      *(_DWORD *)(v2 + 1600) = 96;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[34],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5640),
        (const char (*)[34])"QUEST_COND_HIT_KEYWORD_EASTER_EGG",
        (data::QuestCondType *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, "QUEST_COND_HIT_KEYWORD_EASTER_EGG");
      *(_DWORD *)(v2 + 1616) = 97;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[27],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5680),
        (const char (*)[27])"QUEST_COND_GCG_INVITE_TYPE",
        (data::QuestCondType *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, "QUEST_COND_GCG_INVITE_TYPE");
      *(_DWORD *)(v2 + 1632) = 98;
      std::pair<std::string const,data::QuestCondType>::pair<char const(&)[33],data::QuestCondType,true>(
        (std::pair<const std::string,data::QuestCondType> *const)(v2 + 5720),
        (const char (*)[33])"QUEST_COND_TMPVALUE_HIT_NICKNAME",
        (data::QuestCondType *)(v2 + 1632));
      std::allocator<std::pair<std::string const,data::QuestCondType>>::allocator((std::allocator<std::pair<const std::string,data::QuestCondType> > *const)(v2 + 64));
      std::map<std::string,data::QuestCondType>::map(
        &data::enumStrToVal(std::string const&,data::QuestCondType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestCondType> >)__PAIR128__(98LL, v2 + 1840),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestCondType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestCondType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestCondType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestCondType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestCondType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestCondType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestCondType> *)(v2 + 5760);
            i != (std::pair<const std::string,data::QuestCondType> *)(v2 + 1840);
            std::pair<std::string const,data::QuestCondType>::~pair(i) )
      {
        --i;
      }
      e = (data::QuestCondType *)3920;
      __asan_poison_stack_memory(v2 + 1840, 3920LL);
      *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1648, e);
    *(std::map<std::string,data::QuestCondType>::iterator *)(v2 + 1648) = std::map<std::string,data::QuestCondType>::find(
                                                                            &data::enumStrToVal(std::string const&,data::QuestCondType &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1680, s);
    *(std::map<std::string,data::QuestCondType>::iterator *)(v2 + 1680) = std::map<std::string,data::QuestCondType>::end(&data::enumStrToVal(std::string const&,data::QuestCondType &)::m);
    v7 = (char *)(v2 + 1680);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondType> >::_Self *)(v2 + 1648),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondType> >::_Self *)(v2 + 1680));
    *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 1776) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1776) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1807) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 1807) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1776, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1776),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        704);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 1776),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1776));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestCondType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestCondType> > *const)(v2 + 1648));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF82D8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 736) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5888LL, v16);
  }
  return v13;
};

// Line 712: range 000000001157C0CD-000000001157C578
const char *__cdecl data::getDescription(data::QuestCondType e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_COND_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case QUEST_COND_STATE_EQUAL:
      result = (const char *)&unk_1A7E52A0;
      break;
    case QUEST_COND_STATE_NOT_EQUAL:
      result = (const char *)&unk_1A7E52E0;
      break;
    case QUEST_COND_PACK_HAVE_ITEM:
      result = (const char *)&unk_1A7E5320;
      break;
    case QUEST_COND_AVATAR_ELEMENT_EQUAL:
      result = (const char *)&unk_1A7E5360;
      break;
    case QUEST_COND_AVATAR_ELEMENT_NOT_EQUAL:
      result = (const char *)&unk_1A7E53A0;
      break;
    case QUEST_COND_AVATAR_CAN_CHANGE_ELEMENT:
      result = (const char *)&unk_1A7E53E0;
      break;
    case QUEST_COND_CITY_LEVEL_EQUAL_GREATER:
      result = (const char *)&unk_1A7E5420;
      break;
    case QUEST_COND_ITEM_NUM_LESS_THAN:
      result = (const char *)&unk_1A7E5460;
      break;
    case QUEST_COND_DAILY_TASK_START:
      result = (const char *)&unk_1A7E54C0;
      break;
    case QUEST_COND_OPEN_STATE_EQUAL:
      result = (const char *)&unk_1A7E5500;
      break;
    case QUEST_COND_DAILY_TASK_OPEN:
      result = (const char *)&unk_1A7E5540;
      break;
    case QUEST_COND_DAILY_TASK_REWARD_CAN_GET:
      result = (const char *)&unk_1A7E5580;
      break;
    case QUEST_COND_DAILY_TASK_REWARD_RECEIVED:
      result = (const char *)&unk_1A7E55C0;
      break;
    case QUEST_COND_PLAYER_LEVEL_REWARD_CAN_GET:
      result = (const char *)&unk_1A7E5600;
      break;
    case QUEST_COND_EXPLORATION_REWARD_CAN_GET:
      result = (const char *)&unk_1A7E5640;
      break;
    case QUEST_COND_IS_WORLD_OWNER:
      result = (const char *)&unk_1A7E56A0;
      break;
    case QUEST_COND_PLAYER_LEVEL_EQUAL_GREATER:
      result = (const char *)&unk_1A7E56E0;
      break;
    case QUEST_COND_SCENE_AREA_UNLOCKED:
      result = (const char *)&unk_1A7E5720;
      break;
    case QUEST_COND_ITEM_GIVING_ACTIVED:
      result = (const char *)&unk_1A7E5760;
      break;
    case QUEST_COND_ITEM_GIVING_FINISHED:
      result = (const char *)&unk_1A7E57A0;
      break;
    case QUEST_COND_IS_DAYTIME:
      result = (const char *)&unk_1A7E57E0;
      break;
    case QUEST_COND_CURRENT_AVATAR:
      result = (const char *)&unk_1A7E5820;
      break;
    case QUEST_COND_CURRENT_AREA:
      result = (const char *)&unk_1A7E5860;
      break;
    case QUEST_COND_QUEST_VAR_EQUAL:
      result = (const char *)&unk_1A7E58A0;
      break;
    case QUEST_COND_QUEST_VAR_GREATER:
      result = (const char *)&unk_1A7E58E0;
      break;
    case QUEST_COND_QUEST_VAR_LESS:
      result = (const char *)&unk_1A7E5920;
      break;
    case QUEST_COND_FORGE_HAVE_FINISH:
      result = (const char *)&unk_1A7E5960;
      break;
    case QUEST_COND_DAILY_TASK_IN_PROGRESS:
      result = (const char *)&unk_1A7E59A0;
      break;
    case QUEST_COND_DAILY_TASK_FINISHED:
      result = (const char *)&unk_1A7E59E0;
      break;
    case QUEST_COND_ACTIVITY_COND:
      result = (const char *)&unk_1A7E5A20;
      break;
    case QUEST_COND_ACTIVITY_OPEN:
      result = (const char *)&unk_1A7E5A80;
      break;
    case QUEST_COND_DAILY_TASK_VAR_GT:
      result = (const char *)&unk_1A7E5AC0;
      break;
    case QUEST_COND_DAILY_TASK_VAR_EQ:
      result = (const char *)&unk_1A7E5B00;
      break;
    case QUEST_COND_DAILY_TASK_VAR_LT:
      result = (const char *)&unk_1A7E5B40;
      break;
    case QUEST_COND_BARGAIN_ITEM_GT:
      result = (const char *)&unk_1A7E5B80;
      break;
    case QUEST_COND_BARGAIN_ITEM_EQ:
      result = (const char *)&unk_1A7E5BC0;
      break;
    case QUEST_COND_BARGAIN_ITEM_LT:
      result = (const char *)&unk_1A7E5C00;
      break;
    case QUEST_COND_COMPLETE_TALK:
      result = (const char *)&unk_1A7E5C40;
      break;
    case QUEST_COND_NOT_HAVE_BLOSSOM_TALK:
      result = (const char *)&unk_1A7E5CA0;
      break;
    case QUEST_COND_IS_CUR_BLOSSOM_TALK:
      result = (const char *)&unk_1A7E5D00;
      break;
    case QUEST_COND_QUEST_NOT_RECEIVE:
      result = (const char *)&unk_1A7E5D60;
      break;
    case QUEST_COND_QUEST_SERVER_COND_VALID:
      result = (const char *)&unk_1A7E5DA0;
      break;
    case QUEST_COND_ACTIVITY_CLIENT_COND:
      result = (const char *)&unk_1A7E5E00;
      break;
    case QUEST_COND_QUEST_GLOBAL_VAR_EQUAL:
      result = (const char *)&unk_1A7E5E60;
      break;
    case QUEST_COND_QUEST_GLOBAL_VAR_GREATER:
      result = (const char *)&unk_1A7E5EA0;
      break;
    case QUEST_COND_QUEST_GLOBAL_VAR_LESS:
      result = (const char *)&unk_1A7E5EE0;
      break;
    case QUEST_COND_PERSONAL_LINE_UNLOCK:
      result = (const char *)&unk_1A7E5F20;
      break;
    case QUEST_COND_CITY_REPUTATION_REQUEST:
      result = "city_id+request_id";
      break;
    case QUEST_COND_MAIN_COOP_START:
      result = (const char *)&unk_1A7E5FA0;
      break;
    case QUEST_COND_MAIN_COOP_ENTER_SAVE_POINT:
      result = (const char *)&unk_1A7E5FE0;
      break;
    case QUEST_COND_CITY_REPUTATION_LEVEL:
      result = (const char *)&unk_1A7E6020;
      break;
    case QUEST_COND_CITY_REPUTATION_UNLOCK:
      result = (const char *)&unk_1A7E6060;
      break;
    case QUEST_COND_LUA_NOTIFY:
      result = (const char *)&unk_1A7E60A0;
      break;
    case QUEST_COND_CUR_CLIMATE:
      result = (const char *)&unk_1A7E60E0;
      break;
    case QUEST_COND_ACTIVITY_END:
      result = (const char *)&unk_1A7E6120;
      break;
    case QUEST_COND_COOP_POINT_RUNNING:
      result = (const char *)&unk_1A7E6160;
      break;
    case QUEST_COND_GADGET_TALK_STATE_EQUAL:
      result = (const char *)&unk_1A7E61E0;
      break;
    case QUEST_COND_AVATAR_FETTER_GT:
      result = (const char *)&unk_1A7E6220;
      break;
    case QUEST_COND_AVATAR_FETTER_EQ:
      result = (const char *)&unk_1A7E6260;
      break;
    case QUEST_COND_AVATAR_FETTER_LT:
      result = (const char *)&unk_1A7E62A0;
      break;
    case QUEST_COND_NEW_HOMEWORLD_MOUDLE_UNLOCK:
      result = (const char *)&unk_1A7E62E0;
      break;
    case QUEST_COND_NEW_HOMEWORLD_LEVEL_REWARD:
      result = (const char *)&unk_1A7E6320;
      break;
    case QUEST_COND_NEW_HOMEWORLD_MAKE_FINISH:
      result = (const char *)&unk_1A7E62E0;
      break;
    case QUEST_COND_HOMEWORLD_NPC_EVENT:
      result = (const char *)&unk_1A7E6360;
      break;
    case QUEST_COND_TIME_VAR_GT_EQ:
      result = (const char *)&unk_1A7E63A0;
      break;
    case QUEST_COND_TIME_VAR_PASS_DAY:
      result = (const char *)&unk_1A7E63E0;
      break;
    case QUEST_COND_HOMEWORLD_NPC_NEW_TALK:
      result = (const char *)&unk_1A7E6420;
      break;
    case QUEST_COND_PLAYER_CHOOSE_MALE:
      result = (const char *)&unk_1A7E6460;
      break;
    case QUEST_COND_HISTORY_GOT_ANY_ITEM:
      result = (const char *)&unk_1A7E64A0;
      break;
    case QUEST_COND_LEARNED_RECIPE:
      result = (const char *)&unk_1A7E64E0;
      break;
    case QUEST_COND_LUNARITE_REGION_UNLOCKED:
      result = (const char *)&unk_1A7E6520;
      break;
    case QUEST_COND_LUNARITE_HAS_REGION_HINT_COUNT:
      result = (const char *)&unk_1A7E6560;
      break;
    case QUEST_COND_LUNARITE_COLLECT_FINISH:
      result = (const char *)&unk_1A7E65C0;
      break;
    case QUEST_COND_LUNARITE_MARK_ALL_FINISH:
      result = (const char *)&unk_1A7E6620;
      break;
    case QUEST_COND_NEW_HOMEWORLD_SHOP_ITEM:
      result = (const char *)&unk_1A7E6680;
      break;
    case QUEST_COND_SCENE_POINT_UNLOCK:
      result = (const char *)&unk_1A7E66C0;
      break;
    case QUEST_COND_SCENE_LEVEL_TAG_EQ:
      result = (const char *)&unk_1A7E6700;
      break;
    case QUEST_COND_PLAYER_ENTER_REGION:
      result = (const char *)&unk_1A7E6740;
      break;
    case QUEST_COND_ACTIVITY_SCHEDULE_OPEN_AND_COND:
      result = (const char *)&unk_1A7E67A0;
      break;
    case QUEST_COND_ARANARA_COLLECTION_STATE_EQ:
      result = (const char *)&unk_1A7E6800;
      break;
    case QUEST_COND_INFERENCE_FINISH_PAGE_CONCLUSION:
      result = (const char *)&unk_1A7E6840;
      break;
    case QUEST_COND_SCENE_LEVEL_TAG_VALID:
      result = (const char *)&unk_1A7E6880;
      break;
    case QUEST_COND_NEW_HOMEWORLD_WOOD_EXCHANGE_UNLOCK:
      result = (const char *)&unk_1A7E68E0;
      break;
    case QUEST_COND_IN_CITY:
      result = (const char *)&unk_1A7E6940;
      break;
    case QUEST_COND_GCG_EXP_OVERFLOW:
      result = (const char *)&unk_1A7E6980;
      break;
    case QUEST_COND_GCG_NPC_TYPE:
      result = (const char *)&unk_1A7E69C0;
      break;
    case QUEST_COND_ACTIVITY_NEW_FUNGUS_CAPTURE:
      result = (const char *)&unk_1A7E6A00;
      break;
    case QUEST_COND_GCG_LEVEL_REWARD_CAN_TAKE:
      result = (const char *)&unk_1A7E6A60;
      break;
    case QUEST_COND_GCG_SHOP_NEW_GOODS:
      result = (const char *)&unk_1A7E6AC0;
      break;
    case QUEST_COND_GCG_CHALLENGE_NEW_BOSS:
      result = (const char *)&unk_1A7E6B00;
      break;
    case QUEST_COND_GCG_CHALLENGE_NEW_CHAR:
      result = (const char *)&unk_1A7E6B40;
      break;
    case QUEST_COND_GCG_LEVEL_UNLOCKED:
      result = (const char *)&unk_1A7E6B80;
      break;
    case QUEST_COND_GCG_WORLD_CHALLENGE_RESULT:
      result = (const char *)&unk_1A7E6BC0;
      break;
    case QUEST_COND_HIT_WANDERER_RENAME_EASTER_EGG:
      result = (const char *)&unk_1A7E6C00;
      break;
    case QUEST_COND_HIT_KEYWORD_EASTER_EGG:
      result = (const char *)&unk_1A7E6C60;
      break;
    case QUEST_COND_GCG_INVITE_TYPE:
      result = (const char *)&unk_1A7E6CA0;
      break;
    case QUEST_COND_TMPVALUE_HIT_NICKNAME:
      result = (const char *)&unk_1A7E6CE0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 917: range 000000001157C579-000000001157CBA8
const char *__cdecl data::enumValToStr(data::QuestContentType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestContentType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case QUEST_CONTENT_NONE:
      result = "QUEST_CONTENT_NONE";
      break;
    case QUEST_CONTENT_KILL_MONSTER:
      result = "QUEST_CONTENT_KILL_MONSTER";
      break;
    case QUEST_CONTENT_COMPLETE_TALK:
      result = "QUEST_CONTENT_COMPLETE_TALK";
      break;
    case QUEST_CONTENT_MONSTER_DIE:
      result = "QUEST_CONTENT_MONSTER_DIE";
      break;
    case QUEST_CONTENT_FINISH_PLOT:
      result = "QUEST_CONTENT_FINISH_PLOT";
      break;
    case QUEST_CONTENT_OBTAIN_ITEM:
      result = "QUEST_CONTENT_OBTAIN_ITEM";
      break;
    case QUEST_CONTENT_TRIGGER_FIRE:
      result = "QUEST_CONTENT_TRIGGER_FIRE";
      break;
    case QUEST_CONTENT_CLEAR_GROUP_MONSTER:
      result = "QUEST_CONTENT_CLEAR_GROUP_MONSTER";
      break;
    case QUEST_CONTENT_NOT_FINISH_PLOT:
      result = "QUEST_CONTENT_NOT_FINISH_PLOT";
      break;
    case QUEST_CONTENT_ENTER_DUNGEON:
      result = "QUEST_CONTENT_ENTER_DUNGEON";
      break;
    case QUEST_CONTENT_ENTER_MY_WORLD:
      result = "QUEST_CONTENT_ENTER_MY_WORLD";
      break;
    case QUEST_CONTENT_FINISH_DUNGEON:
      result = "QUEST_CONTENT_FINISH_DUNGEON";
      break;
    case QUEST_CONTENT_DESTROY_GADGET:
      result = "QUEST_CONTENT_DESTROY_GADGET";
      break;
    case QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE:
      result = "QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE";
      break;
    case QUEST_CONTENT_NICK_NAME:
      result = "QUEST_CONTENT_NICK_NAME";
      break;
    case QUEST_CONTENT_WORKTOP_SELECT:
      result = "QUEST_CONTENT_WORKTOP_SELECT";
      break;
    case QUEST_CONTENT_SEAL_BATTLE_RESULT:
      result = "QUEST_CONTENT_SEAL_BATTLE_RESULT";
      break;
    case QUEST_CONTENT_ENTER_ROOM:
      result = "QUEST_CONTENT_ENTER_ROOM";
      break;
    case QUEST_CONTENT_GAME_TIME_TICK:
      result = "QUEST_CONTENT_GAME_TIME_TICK";
      break;
    case QUEST_CONTENT_FAIL_DUNGEON:
      result = "QUEST_CONTENT_FAIL_DUNGEON";
      break;
    case QUEST_CONTENT_LUA_NOTIFY:
      result = "QUEST_CONTENT_LUA_NOTIFY";
      break;
    case QUEST_CONTENT_TEAM_DEAD:
      result = "QUEST_CONTENT_TEAM_DEAD";
      break;
    case QUEST_CONTENT_COMPLETE_ANY_TALK:
      result = "QUEST_CONTENT_COMPLETE_ANY_TALK";
      break;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT:
      result = "QUEST_CONTENT_UNLOCK_TRANS_POINT";
      break;
    case QUEST_CONTENT_ADD_QUEST_PROGRESS:
      result = "QUEST_CONTENT_ADD_QUEST_PROGRESS";
      break;
    case QUEST_CONTENT_INTERACT_GADGET:
      result = "QUEST_CONTENT_INTERACT_GADGET";
      break;
    case QUEST_CONTENT_DAILY_TASK_COMP_FINISH:
      result = "QUEST_CONTENT_DAILY_TASK_COMP_FINISH";
      break;
    case QUEST_CONTENT_FINISH_ITEM_GIVING:
      result = "QUEST_CONTENT_FINISH_ITEM_GIVING";
      break;
    case QUEST_CONTENT_SKILL:
      result = "QUEST_CONTENT_SKILL";
      break;
    case QUEST_CONTENT_CITY_LEVEL_UP:
      result = "QUEST_CONTENT_CITY_LEVEL_UP";
      break;
    case QUEST_CONTENT_PATTERN_GROUP_CLEAR_MONSTER:
      result = "QUEST_CONTENT_PATTERN_GROUP_CLEAR_MONSTER";
      break;
    case QUEST_CONTENT_ITEM_LESS_THAN:
      result = "QUEST_CONTENT_ITEM_LESS_THAN";
      break;
    case QUEST_CONTENT_PLAYER_LEVEL_UP:
      result = "QUEST_CONTENT_PLAYER_LEVEL_UP";
      break;
    case QUEST_CONTENT_DUNGEON_OPEN_STATUE:
      result = "QUEST_CONTENT_DUNGEON_OPEN_STATUE";
      break;
    case QUEST_CONTENT_UNLOCK_AREA:
      result = "QUEST_CONTENT_UNLOCK_AREA";
      break;
    case QUEST_CONTENT_OPEN_CHEST_WITH_GADGET_ID:
      result = "QUEST_CONTENT_OPEN_CHEST_WITH_GADGET_ID";
      break;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE:
      result = "QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE";
      break;
    case QUEST_CONTENT_FINISH_DAILY_DUNGEON:
      result = "QUEST_CONTENT_FINISH_DAILY_DUNGEON";
      break;
    case QUEST_CONTENT_FINISH_WEEKLY_DUNGEON:
      result = "QUEST_CONTENT_FINISH_WEEKLY_DUNGEON";
      break;
    case QUEST_CONTENT_QUEST_VAR_EQUAL:
      result = "QUEST_CONTENT_QUEST_VAR_EQUAL";
      break;
    case QUEST_CONTENT_QUEST_VAR_GREATER:
      result = "QUEST_CONTENT_QUEST_VAR_GREATER";
      break;
    case QUEST_CONTENT_QUEST_VAR_LESS:
      result = "QUEST_CONTENT_QUEST_VAR_LESS";
      break;
    case QUEST_CONTENT_OBTAIN_VARIOUS_ITEM:
      result = "QUEST_CONTENT_OBTAIN_VARIOUS_ITEM";
      break;
    case QUEST_CONTENT_FINISH_TOWER_LEVEL:
      result = "QUEST_CONTENT_FINISH_TOWER_LEVEL";
      break;
    case QUEST_CONTENT_BARGAIN_SUCC:
      result = "QUEST_CONTENT_BARGAIN_SUCC";
      break;
    case QUEST_CONTENT_BARGAIN_FAIL:
      result = "QUEST_CONTENT_BARGAIN_FAIL";
      break;
    case QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN:
      result = "QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN";
      break;
    case QUEST_CONTENT_ACTIVITY_TRIGGER_FAILED:
      result = "QUEST_CONTENT_ACTIVITY_TRIGGER_FAILED";
      break;
    case QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT:
      result = "QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT";
      break;
    case QUEST_CONTENT_ANY_MANUAL_TRANSPORT:
      result = "QUEST_CONTENT_ANY_MANUAL_TRANSPORT";
      break;
    case QUEST_CONTENT_USE_ITEM:
      result = "QUEST_CONTENT_USE_ITEM";
      break;
    case QUEST_CONTENT_MAIN_COOP_ENTER_ANY_SAVE_POINT:
      result = "QUEST_CONTENT_MAIN_COOP_ENTER_ANY_SAVE_POINT";
      break;
    case QUEST_CONTENT_ENTER_MY_HOME_WORLD:
      result = "QUEST_CONTENT_ENTER_MY_HOME_WORLD";
      break;
    case QUEST_CONTENT_ENTER_MY_WORLD_SCENE:
      result = "QUEST_CONTENT_ENTER_MY_WORLD_SCENE";
      break;
    case QUEST_CONTENT_TIME_VAR_GT_EQ:
      result = "QUEST_CONTENT_TIME_VAR_GT_EQ";
      break;
    case QUEST_CONTENT_TIME_VAR_PASS_DAY:
      result = "QUEST_CONTENT_TIME_VAR_PASS_DAY";
      break;
    case QUEST_CONTENT_QUEST_STATE_EQUAL:
      result = "QUEST_CONTENT_QUEST_STATE_EQUAL";
      break;
    case QUEST_CONTENT_QUEST_STATE_NOT_EQUAL:
      result = "QUEST_CONTENT_QUEST_STATE_NOT_EQUAL";
      break;
    case QUEST_CONTENT_UNLOCKED_RECIPE:
      result = "QUEST_CONTENT_UNLOCKED_RECIPE";
      break;
    case QUEST_CONTENT_NOT_UNLOCKED_RECIPE:
      result = "QUEST_CONTENT_NOT_UNLOCKED_RECIPE";
      break;
    case QUEST_CONTENT_FISHING_SUCC:
      result = "QUEST_CONTENT_FISHING_SUCC";
      break;
    case QUEST_CONTENT_ENTER_ROGUE_DUNGEON:
      result = "QUEST_CONTENT_ENTER_ROGUE_DUNGEON";
      break;
    case QUEST_CONTENT_USE_WIDGET:
      result = "QUEST_CONTENT_USE_WIDGET";
      break;
    case QUEST_CONTENT_CAPTURE_SUCC:
      result = "QUEST_CONTENT_CAPTURE_SUCC";
      break;
    case QUEST_CONTENT_CAPTURE_USE_CAPTURETAG_LIST:
      result = "QUEST_CONTENT_CAPTURE_USE_CAPTURETAG_LIST";
      break;
    case QUEST_CONTENT_CAPTURE_USE_MATERIAL_LIST:
      result = "QUEST_CONTENT_CAPTURE_USE_MATERIAL_LIST";
      break;
    case QUEST_CONTENT_ENTER_VEHICLE:
      result = "QUEST_CONTENT_ENTER_VEHICLE";
      break;
    case QUEST_CONTENT_SCENE_LEVEL_TAG_EQ:
      result = "QUEST_CONTENT_SCENE_LEVEL_TAG_EQ";
      break;
    case QUEST_CONTENT_LEAVE_SCENE:
      result = "QUEST_CONTENT_LEAVE_SCENE";
      break;
    case QUEST_CONTENT_LEAVE_SCENE_RANGE:
      result = "QUEST_CONTENT_LEAVE_SCENE_RANGE";
      break;
    case QUEST_CONTENT_IRODORI_FINISH_FLOWER_COMBINATION:
      result = "QUEST_CONTENT_IRODORI_FINISH_FLOWER_COMBINATION";
      break;
    case QUEST_CONTENT_IRODORI_POETRY_REACH_MIN_PROGRESS:
      result = "QUEST_CONTENT_IRODORI_POETRY_REACH_MIN_PROGRESS";
      break;
    case QUEST_CONTENT_IRODORI_POETRY_FINISH_FILL_POETRY:
      result = "QUEST_CONTENT_IRODORI_POETRY_FINISH_FILL_POETRY";
      break;
    case QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE:
      result = "QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE";
      break;
    case QUEST_CONTENT_GADGET_STATE_CHANGE:
      result = "QUEST_CONTENT_GADGET_STATE_CHANGE";
      break;
    case QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM:
      result = "QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM";
      break;
    case QUEST_CONTENT_GCG_LEVEL_WIN:
      result = "QUEST_CONTENT_GCG_LEVEL_WIN";
      break;
    case QUEST_CONTENT_AVATAR_RENAME_COMPLETE:
      result = "QUEST_CONTENT_AVATAR_RENAME_COMPLETE";
      break;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL:
      result = "QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL";
      break;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER:
      result = "QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER";
      break;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS:
      result = "QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1083);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 1089: range 000000001157CBA9-000000001158016D
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestContentType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::QuestContentType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestContentType> >::pointer v10; // rax
  data::QuestContentType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::QuestContentType *ea; // [rsp+10h] [rbp-1380h]
  char v16[4976]; // [rsp+20h] [rbp-1370h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4928LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "88 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 "
                        "<unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkno"
                        "wn> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 80"
                        "0 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 "
                        "<unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkno"
                        "wn> 976 4 9 <unknown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown>"
                        " 1056 4 9 <unknown> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown> "
                        "1136 4 9 <unknown> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> 1"
                        "216 4 9 <unknown> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 12"
                        "96 4 9 <unknown> 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 8 7 it:1179 1392 "
                        "8 9 <unknown> 1424 32 9 <unknown> 1488 32 9 <unknown> 1552 3240 9 <unknown>";
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
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -234556924;
  v4[536862745] = -234556924;
  v4[536862746] = -234556924;
  v4[536862747] = -234556924;
  v4[536862748] = -234556924;
  v4[536862749] = -234556924;
  v4[536862750] = -234556924;
  v4[536862751] = -234556924;
  v4[536862752] = -234556924;
  v4[536862753] = -234556924;
  v4[536862754] = -234556924;
  v4[536862755] = -234556924;
  v4[536862756] = -234556924;
  v4[536862757] = -234556924;
  v4[536862758] = -234556924;
  v4[536862759] = -234556924;
  v4[536862760] = -234556924;
  v4[536862761] = -234556924;
  v4[536862762] = 61956;
  v4[536862762] = -234881024;
  v4[536862763] = 62194;
  v4[536862763] = -234881024;
  v4[536862764] = 62194;
  v4[536862765] = -219021312;
  v4[536862766] = 62194;
  v4[536862767] = -219021312;
  v4[536862768] = 62194;
  v4[536862869] = -218103808;
  v4[536862870] = -202116109;
  v4[536862871] = -202116109;
  v4[536862872] = -202116109;
  v4[536862873] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 1424) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1424, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1424),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1092);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 1424),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1424));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestContentType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestContentType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[19],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1552),
        (const char (*)[19])"QUEST_CONTENT_NONE",
        (data::QuestContentType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QUEST_CONTENT_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1592),
        (const char (*)[27])"QUEST_CONTENT_KILL_MONSTER",
        (data::QuestContentType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_CONTENT_KILL_MONSTER");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[28],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1632),
        (const char (*)[28])"QUEST_CONTENT_COMPLETE_TALK",
        (data::QuestContentType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_CONTENT_COMPLETE_TALK");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[26],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1672),
        (const char (*)[26])"QUEST_CONTENT_MONSTER_DIE",
        (data::QuestContentType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QUEST_CONTENT_MONSTER_DIE");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[26],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1712),
        (const char (*)[26])"QUEST_CONTENT_FINISH_PLOT",
        (data::QuestContentType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QUEST_CONTENT_FINISH_PLOT");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[26],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1752),
        (const char (*)[26])"QUEST_CONTENT_OBTAIN_ITEM",
        (data::QuestContentType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "QUEST_CONTENT_OBTAIN_ITEM");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1792),
        (const char (*)[27])"QUEST_CONTENT_TRIGGER_FIRE",
        (data::QuestContentType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "QUEST_CONTENT_TRIGGER_FIRE");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1832),
        (const char (*)[34])"QUEST_CONTENT_CLEAR_GROUP_MONSTER",
        (data::QuestContentType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "QUEST_CONTENT_CLEAR_GROUP_MONSTER");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[30],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1872),
        (const char (*)[30])"QUEST_CONTENT_NOT_FINISH_PLOT",
        (data::QuestContentType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "QUEST_CONTENT_NOT_FINISH_PLOT");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[28],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1912),
        (const char (*)[28])"QUEST_CONTENT_ENTER_DUNGEON",
        (data::QuestContentType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "QUEST_CONTENT_ENTER_DUNGEON");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1952),
        (const char (*)[29])"QUEST_CONTENT_ENTER_MY_WORLD",
        (data::QuestContentType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "QUEST_CONTENT_ENTER_MY_WORLD");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 1992),
        (const char (*)[29])"QUEST_CONTENT_FINISH_DUNGEON",
        (data::QuestContentType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "QUEST_CONTENT_FINISH_DUNGEON");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2032),
        (const char (*)[29])"QUEST_CONTENT_DESTROY_GADGET",
        (data::QuestContentType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "QUEST_CONTENT_DESTROY_GADGET");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[43],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2072),
        (const char (*)[43])"QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE",
        (data::QuestContentType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[24],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2112),
        (const char (*)[24])"QUEST_CONTENT_NICK_NAME",
        (data::QuestContentType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "QUEST_CONTENT_NICK_NAME");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2152),
        (const char (*)[29])"QUEST_CONTENT_WORKTOP_SELECT",
        (data::QuestContentType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "QUEST_CONTENT_WORKTOP_SELECT");
      *(_DWORD *)(v2 + 320) = 16;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[33],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2192),
        (const char (*)[33])"QUEST_CONTENT_SEAL_BATTLE_RESULT",
        (data::QuestContentType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "QUEST_CONTENT_SEAL_BATTLE_RESULT");
      *(_DWORD *)(v2 + 336) = 17;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[25],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2232),
        (const char (*)[25])"QUEST_CONTENT_ENTER_ROOM",
        (data::QuestContentType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "QUEST_CONTENT_ENTER_ROOM");
      *(_DWORD *)(v2 + 352) = 18;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2272),
        (const char (*)[29])"QUEST_CONTENT_GAME_TIME_TICK",
        (data::QuestContentType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "QUEST_CONTENT_GAME_TIME_TICK");
      *(_DWORD *)(v2 + 368) = 19;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2312),
        (const char (*)[27])"QUEST_CONTENT_FAIL_DUNGEON",
        (data::QuestContentType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "QUEST_CONTENT_FAIL_DUNGEON");
      *(_DWORD *)(v2 + 384) = 20;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[25],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2352),
        (const char (*)[25])"QUEST_CONTENT_LUA_NOTIFY",
        (data::QuestContentType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "QUEST_CONTENT_LUA_NOTIFY");
      *(_DWORD *)(v2 + 400) = 21;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[24],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2392),
        (const char (*)[24])"QUEST_CONTENT_TEAM_DEAD",
        (data::QuestContentType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "QUEST_CONTENT_TEAM_DEAD");
      *(_DWORD *)(v2 + 416) = 22;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[32],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2432),
        (const char (*)[32])"QUEST_CONTENT_COMPLETE_ANY_TALK",
        (data::QuestContentType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "QUEST_CONTENT_COMPLETE_ANY_TALK");
      *(_DWORD *)(v2 + 432) = 23;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[33],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2472),
        (const char (*)[33])"QUEST_CONTENT_UNLOCK_TRANS_POINT",
        (data::QuestContentType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "QUEST_CONTENT_UNLOCK_TRANS_POINT");
      *(_DWORD *)(v2 + 448) = 24;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[33],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2512),
        (const char (*)[33])"QUEST_CONTENT_ADD_QUEST_PROGRESS",
        (data::QuestContentType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "QUEST_CONTENT_ADD_QUEST_PROGRESS");
      *(_DWORD *)(v2 + 464) = 25;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[30],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2552),
        (const char (*)[30])"QUEST_CONTENT_INTERACT_GADGET",
        (data::QuestContentType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "QUEST_CONTENT_INTERACT_GADGET");
      *(_DWORD *)(v2 + 480) = 26;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[37],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2592),
        (const char (*)[37])"QUEST_CONTENT_DAILY_TASK_COMP_FINISH",
        (data::QuestContentType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "QUEST_CONTENT_DAILY_TASK_COMP_FINISH");
      *(_DWORD *)(v2 + 496) = 27;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[33],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2632),
        (const char (*)[33])"QUEST_CONTENT_FINISH_ITEM_GIVING",
        (data::QuestContentType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "QUEST_CONTENT_FINISH_ITEM_GIVING");
      *(_DWORD *)(v2 + 512) = 107;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[20],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2672),
        (const char (*)[20])"QUEST_CONTENT_SKILL",
        (data::QuestContentType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "QUEST_CONTENT_SKILL");
      *(_DWORD *)(v2 + 528) = 109;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[28],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2712),
        (const char (*)[28])"QUEST_CONTENT_CITY_LEVEL_UP",
        (data::QuestContentType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "QUEST_CONTENT_CITY_LEVEL_UP");
      *(_DWORD *)(v2 + 544) = 110;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[42],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2752),
        (const char (*)[42])"QUEST_CONTENT_PATTERN_GROUP_CLEAR_MONSTER",
        (data::QuestContentType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "QUEST_CONTENT_PATTERN_GROUP_CLEAR_MONSTER");
      *(_DWORD *)(v2 + 560) = 111;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2792),
        (const char (*)[29])"QUEST_CONTENT_ITEM_LESS_THAN",
        (data::QuestContentType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "QUEST_CONTENT_ITEM_LESS_THAN");
      *(_DWORD *)(v2 + 576) = 112;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[30],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2832),
        (const char (*)[30])"QUEST_CONTENT_PLAYER_LEVEL_UP",
        (data::QuestContentType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "QUEST_CONTENT_PLAYER_LEVEL_UP");
      *(_DWORD *)(v2 + 592) = 113;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2872),
        (const char (*)[34])"QUEST_CONTENT_DUNGEON_OPEN_STATUE",
        (data::QuestContentType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "QUEST_CONTENT_DUNGEON_OPEN_STATUE");
      *(_DWORD *)(v2 + 608) = 114;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[26],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2912),
        (const char (*)[26])"QUEST_CONTENT_UNLOCK_AREA",
        (data::QuestContentType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "QUEST_CONTENT_UNLOCK_AREA");
      *(_DWORD *)(v2 + 624) = 115;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[40],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2952),
        (const char (*)[40])"QUEST_CONTENT_OPEN_CHEST_WITH_GADGET_ID",
        (data::QuestContentType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "QUEST_CONTENT_OPEN_CHEST_WITH_GADGET_ID");
      *(_DWORD *)(v2 + 640) = 116;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[43],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 2992),
        (const char (*)[43])"QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE",
        (data::QuestContentType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE");
      *(_DWORD *)(v2 + 656) = 117;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[35],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3032),
        (const char (*)[35])"QUEST_CONTENT_FINISH_DAILY_DUNGEON",
        (data::QuestContentType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "QUEST_CONTENT_FINISH_DAILY_DUNGEON");
      *(_DWORD *)(v2 + 672) = 118;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[36],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3072),
        (const char (*)[36])"QUEST_CONTENT_FINISH_WEEKLY_DUNGEON",
        (data::QuestContentType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "QUEST_CONTENT_FINISH_WEEKLY_DUNGEON");
      *(_DWORD *)(v2 + 688) = 119;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[30],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3112),
        (const char (*)[30])"QUEST_CONTENT_QUEST_VAR_EQUAL",
        (data::QuestContentType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "QUEST_CONTENT_QUEST_VAR_EQUAL");
      *(_DWORD *)(v2 + 704) = 120;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[32],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3152),
        (const char (*)[32])"QUEST_CONTENT_QUEST_VAR_GREATER",
        (data::QuestContentType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "QUEST_CONTENT_QUEST_VAR_GREATER");
      *(_DWORD *)(v2 + 720) = 121;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3192),
        (const char (*)[29])"QUEST_CONTENT_QUEST_VAR_LESS",
        (data::QuestContentType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "QUEST_CONTENT_QUEST_VAR_LESS");
      *(_DWORD *)(v2 + 736) = 122;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3232),
        (const char (*)[34])"QUEST_CONTENT_OBTAIN_VARIOUS_ITEM",
        (data::QuestContentType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "QUEST_CONTENT_OBTAIN_VARIOUS_ITEM");
      *(_DWORD *)(v2 + 752) = 123;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[33],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3272),
        (const char (*)[33])"QUEST_CONTENT_FINISH_TOWER_LEVEL",
        (data::QuestContentType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "QUEST_CONTENT_FINISH_TOWER_LEVEL");
      *(_DWORD *)(v2 + 768) = 124;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3312),
        (const char (*)[27])"QUEST_CONTENT_BARGAIN_SUCC",
        (data::QuestContentType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "QUEST_CONTENT_BARGAIN_SUCC");
      *(_DWORD *)(v2 + 784) = 125;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3352),
        (const char (*)[27])"QUEST_CONTENT_BARGAIN_FAIL",
        (data::QuestContentType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "QUEST_CONTENT_BARGAIN_FAIL");
      *(_DWORD *)(v2 + 800) = 126;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[37],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3392),
        (const char (*)[37])"QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN",
        (data::QuestContentType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN");
      *(_DWORD *)(v2 + 816) = 127;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[38],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3432),
        (const char (*)[38])"QUEST_CONTENT_ACTIVITY_TRIGGER_FAILED",
        (data::QuestContentType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "QUEST_CONTENT_ACTIVITY_TRIGGER_FAILED");
      *(_DWORD *)(v2 + 832) = 128;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[41],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3472),
        (const char (*)[41])"QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT",
        (data::QuestContentType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT");
      *(_DWORD *)(v2 + 848) = 129;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[35],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3512),
        (const char (*)[35])"QUEST_CONTENT_ANY_MANUAL_TRANSPORT",
        (data::QuestContentType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "QUEST_CONTENT_ANY_MANUAL_TRANSPORT");
      *(_DWORD *)(v2 + 864) = 130;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[23],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3552),
        (const char (*)[23])"QUEST_CONTENT_USE_ITEM",
        (data::QuestContentType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "QUEST_CONTENT_USE_ITEM");
      *(_DWORD *)(v2 + 880) = 131;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[45],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3592),
        (const char (*)[45])"QUEST_CONTENT_MAIN_COOP_ENTER_ANY_SAVE_POINT",
        (data::QuestContentType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "QUEST_CONTENT_MAIN_COOP_ENTER_ANY_SAVE_POINT");
      *(_DWORD *)(v2 + 896) = 132;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3632),
        (const char (*)[34])"QUEST_CONTENT_ENTER_MY_HOME_WORLD",
        (data::QuestContentType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "QUEST_CONTENT_ENTER_MY_HOME_WORLD");
      *(_DWORD *)(v2 + 912) = 133;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[35],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3672),
        (const char (*)[35])"QUEST_CONTENT_ENTER_MY_WORLD_SCENE",
        (data::QuestContentType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "QUEST_CONTENT_ENTER_MY_WORLD_SCENE");
      *(_DWORD *)(v2 + 928) = 134;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[29],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3712),
        (const char (*)[29])"QUEST_CONTENT_TIME_VAR_GT_EQ",
        (data::QuestContentType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "QUEST_CONTENT_TIME_VAR_GT_EQ");
      *(_DWORD *)(v2 + 944) = 135;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[32],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3752),
        (const char (*)[32])"QUEST_CONTENT_TIME_VAR_PASS_DAY",
        (data::QuestContentType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "QUEST_CONTENT_TIME_VAR_PASS_DAY");
      *(_DWORD *)(v2 + 960) = 136;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[32],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3792),
        (const char (*)[32])"QUEST_CONTENT_QUEST_STATE_EQUAL",
        (data::QuestContentType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "QUEST_CONTENT_QUEST_STATE_EQUAL");
      *(_DWORD *)(v2 + 976) = 137;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[36],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3832),
        (const char (*)[36])"QUEST_CONTENT_QUEST_STATE_NOT_EQUAL",
        (data::QuestContentType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "QUEST_CONTENT_QUEST_STATE_NOT_EQUAL");
      *(_DWORD *)(v2 + 992) = 138;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[30],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3872),
        (const char (*)[30])"QUEST_CONTENT_UNLOCKED_RECIPE",
        (data::QuestContentType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "QUEST_CONTENT_UNLOCKED_RECIPE");
      *(_DWORD *)(v2 + 1008) = 139;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3912),
        (const char (*)[34])"QUEST_CONTENT_NOT_UNLOCKED_RECIPE",
        (data::QuestContentType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "QUEST_CONTENT_NOT_UNLOCKED_RECIPE");
      *(_DWORD *)(v2 + 1024) = 140;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3952),
        (const char (*)[27])"QUEST_CONTENT_FISHING_SUCC",
        (data::QuestContentType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "QUEST_CONTENT_FISHING_SUCC");
      *(_DWORD *)(v2 + 1040) = 141;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 3992),
        (const char (*)[34])"QUEST_CONTENT_ENTER_ROGUE_DUNGEON",
        (data::QuestContentType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "QUEST_CONTENT_ENTER_ROGUE_DUNGEON");
      *(_DWORD *)(v2 + 1056) = 142;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[25],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4032),
        (const char (*)[25])"QUEST_CONTENT_USE_WIDGET",
        (data::QuestContentType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "QUEST_CONTENT_USE_WIDGET");
      *(_DWORD *)(v2 + 1072) = 143;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[27],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4072),
        (const char (*)[27])"QUEST_CONTENT_CAPTURE_SUCC",
        (data::QuestContentType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "QUEST_CONTENT_CAPTURE_SUCC");
      *(_DWORD *)(v2 + 1088) = 144;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[42],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4112),
        (const char (*)[42])"QUEST_CONTENT_CAPTURE_USE_CAPTURETAG_LIST",
        (data::QuestContentType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "QUEST_CONTENT_CAPTURE_USE_CAPTURETAG_LIST");
      *(_DWORD *)(v2 + 1104) = 145;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[40],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4152),
        (const char (*)[40])"QUEST_CONTENT_CAPTURE_USE_MATERIAL_LIST",
        (data::QuestContentType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "QUEST_CONTENT_CAPTURE_USE_MATERIAL_LIST");
      *(_DWORD *)(v2 + 1120) = 147;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[28],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4192),
        (const char (*)[28])"QUEST_CONTENT_ENTER_VEHICLE",
        (data::QuestContentType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "QUEST_CONTENT_ENTER_VEHICLE");
      *(_DWORD *)(v2 + 1136) = 148;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[33],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4232),
        (const char (*)[33])"QUEST_CONTENT_SCENE_LEVEL_TAG_EQ",
        (data::QuestContentType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "QUEST_CONTENT_SCENE_LEVEL_TAG_EQ");
      *(_DWORD *)(v2 + 1152) = 149;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[26],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4272),
        (const char (*)[26])"QUEST_CONTENT_LEAVE_SCENE",
        (data::QuestContentType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "QUEST_CONTENT_LEAVE_SCENE");
      *(_DWORD *)(v2 + 1168) = 150;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[32],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4312),
        (const char (*)[32])"QUEST_CONTENT_LEAVE_SCENE_RANGE",
        (data::QuestContentType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "QUEST_CONTENT_LEAVE_SCENE_RANGE");
      *(_DWORD *)(v2 + 1184) = 151;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[48],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4352),
        (const char (*)[48])"QUEST_CONTENT_IRODORI_FINISH_FLOWER_COMBINATION",
        (data::QuestContentType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "QUEST_CONTENT_IRODORI_FINISH_FLOWER_COMBINATION");
      *(_DWORD *)(v2 + 1200) = 152;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[48],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4392),
        (const char (*)[48])"QUEST_CONTENT_IRODORI_POETRY_REACH_MIN_PROGRESS",
        (data::QuestContentType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "QUEST_CONTENT_IRODORI_POETRY_REACH_MIN_PROGRESS");
      *(_DWORD *)(v2 + 1216) = 153;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[48],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4432),
        (const char (*)[48])"QUEST_CONTENT_IRODORI_POETRY_FINISH_FILL_POETRY",
        (data::QuestContentType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "QUEST_CONTENT_IRODORI_POETRY_FINISH_FILL_POETRY");
      *(_DWORD *)(v2 + 1232) = 154;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[38],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4472),
        (const char (*)[38])"QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE",
        (data::QuestContentType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE");
      *(_DWORD *)(v2 + 1248) = 155;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[34],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4512),
        (const char (*)[34])"QUEST_CONTENT_GADGET_STATE_CHANGE",
        (data::QuestContentType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "QUEST_CONTENT_GADGET_STATE_CHANGE");
      *(_DWORD *)(v2 + 1264) = 156;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[41],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4552),
        (const char (*)[41])"QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM",
        (data::QuestContentType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM");
      *(_DWORD *)(v2 + 1280) = 157;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[28],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4592),
        (const char (*)[28])"QUEST_CONTENT_GCG_LEVEL_WIN",
        (data::QuestContentType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "QUEST_CONTENT_GCG_LEVEL_WIN");
      *(_DWORD *)(v2 + 1296) = 158;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[37],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4632),
        (const char (*)[37])"QUEST_CONTENT_AVATAR_RENAME_COMPLETE",
        (data::QuestContentType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "QUEST_CONTENT_AVATAR_RENAME_COMPLETE");
      *(_DWORD *)(v2 + 1312) = 159;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[37],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4672),
        (const char (*)[37])"QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL",
        (data::QuestContentType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL");
      *(_DWORD *)(v2 + 1328) = 160;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[39],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4712),
        (const char (*)[39])"QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER",
        (data::QuestContentType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER");
      *(_DWORD *)(v2 + 1344) = 161;
      std::pair<std::string const,data::QuestContentType>::pair<char const(&)[36],data::QuestContentType,true>(
        (std::pair<const std::string,data::QuestContentType> *const)(v2 + 4752),
        (const char (*)[36])"QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS",
        (data::QuestContentType *)(v2 + 1344));
      std::allocator<std::pair<std::string const,data::QuestContentType>>::allocator((std::allocator<std::pair<const std::string,data::QuestContentType> > *const)(v2 + 48));
      std::map<std::string,data::QuestContentType>::map(
        &data::enumStrToVal(std::string const&,data::QuestContentType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestContentType> >)__PAIR128__(81LL, v2 + 1552),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestContentType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestContentType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestContentType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestContentType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestContentType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestContentType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestContentType> *)(v2 + 4792);
            i != (std::pair<const std::string,data::QuestContentType> *)(v2 + 1552);
            std::pair<std::string const,data::QuestContentType>::~pair(i) )
      {
        --i;
      }
      e = (data::QuestContentType *)3240;
      __asan_poison_stack_memory(v2 + 1552, 3240LL);
      *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1360, e);
    *(std::map<std::string,data::QuestContentType>::iterator *)(v2 + 1360) = std::map<std::string,data::QuestContentType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::QuestContentType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1392, s);
    *(std::map<std::string,data::QuestContentType>::iterator *)(v2 + 1392) = std::map<std::string,data::QuestContentType>::end(&data::enumStrToVal(std::string const&,data::QuestContentType &)::m);
    v7 = (char *)(v2 + 1392);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestContentType> >::_Self *)(v2 + 1360),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestContentType> >::_Self *)(v2 + 1392));
    *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1488) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1488, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1488),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1182);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 1488),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1488));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestContentType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestContentType> > *const)(v2 + 1360));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8260) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 616) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4928LL, v16);
  }
  return v13;
};

// Line 1190: range 000000001158016E-000000001158054F
const char *__cdecl data::getDescription(data::QuestContentType e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_CONTENT_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case QUEST_CONTENT_KILL_MONSTER:
      result = (const char *)&unk_1A7E90A0;
      break;
    case QUEST_CONTENT_COMPLETE_TALK:
      result = (const char *)&unk_1A7E90E0;
      break;
    case QUEST_CONTENT_MONSTER_DIE:
      result = (const char *)&unk_1A7E9120;
      break;
    case QUEST_CONTENT_FINISH_PLOT:
      result = (const char *)&unk_1A7E9160;
      break;
    case QUEST_CONTENT_OBTAIN_ITEM:
      result = (const char *)&unk_1A7E91A0;
      break;
    case QUEST_CONTENT_TRIGGER_FIRE:
      result = (const char *)&unk_1A7E91E0;
      break;
    case QUEST_CONTENT_CLEAR_GROUP_MONSTER:
      result = (const char *)&unk_1A7E9220;
      break;
    case QUEST_CONTENT_NOT_FINISH_PLOT:
      result = (const char *)&unk_1A7E9260;
      break;
    case QUEST_CONTENT_ENTER_DUNGEON:
      result = (const char *)&unk_1A7E92C0;
      break;
    case QUEST_CONTENT_ENTER_MY_WORLD:
      result = (const char *)&unk_1A7E9300;
      break;
    case QUEST_CONTENT_FINISH_DUNGEON:
      result = (const char *)&unk_1A7E9340;
      break;
    case QUEST_CONTENT_DESTROY_GADGET:
      result = (const char *)&unk_1A7E9380;
      break;
    case QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE:
      result = (const char *)&unk_1A7E93C0;
      break;
    case QUEST_CONTENT_NICK_NAME:
      result = (const char *)&unk_1A7E9400;
      break;
    case QUEST_CONTENT_WORKTOP_SELECT:
      result = (const char *)&unk_1A7E9440;
      break;
    case QUEST_CONTENT_SEAL_BATTLE_RESULT:
      result = (const char *)&unk_1A7E9480;
      break;
    case QUEST_CONTENT_ENTER_ROOM:
      result = (const char *)&unk_1A7E94C0;
      break;
    case QUEST_CONTENT_GAME_TIME_TICK:
      result = (const char *)&unk_1A7E9500;
      break;
    case QUEST_CONTENT_FAIL_DUNGEON:
      result = (const char *)&unk_1A7E9540;
      break;
    case QUEST_CONTENT_LUA_NOTIFY:
      result = (const char *)&unk_1A7E9580;
      break;
    case QUEST_CONTENT_TEAM_DEAD:
      result = (const char *)&unk_1A7E95C0;
      break;
    case QUEST_CONTENT_COMPLETE_ANY_TALK:
      result = (const char *)&unk_1A7E9600;
      break;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT:
      result = (const char *)&unk_1A7E9640;
      break;
    case QUEST_CONTENT_ADD_QUEST_PROGRESS:
      result = (const char *)&unk_1A7E9680;
      break;
    case QUEST_CONTENT_INTERACT_GADGET:
      result = (const char *)&unk_1A7E96E0;
      break;
    case QUEST_CONTENT_DAILY_TASK_COMP_FINISH:
      result = (const char *)&unk_1A7E9720;
      break;
    case QUEST_CONTENT_FINISH_ITEM_GIVING:
      result = (const char *)&unk_1A7E9780;
      break;
    case QUEST_CONTENT_SKILL:
      result = (const char *)&unk_1A7E97C0;
      break;
    case QUEST_CONTENT_CITY_LEVEL_UP:
      result = (const char *)&unk_1A7E9800;
      break;
    case QUEST_CONTENT_PATTERN_GROUP_CLEAR_MONSTER:
      result = (const char *)&unk_1A7E9840;
      break;
    case QUEST_CONTENT_ITEM_LESS_THAN:
      result = (const char *)&unk_1A7E98A0;
      break;
    case QUEST_CONTENT_PLAYER_LEVEL_UP:
      result = (const char *)&unk_1A7E98E0;
      break;
    case QUEST_CONTENT_DUNGEON_OPEN_STATUE:
      result = (const char *)&unk_1A7E9920;
      break;
    case QUEST_CONTENT_UNLOCK_AREA:
      result = (const char *)&unk_1A7E9960;
      break;
    case QUEST_CONTENT_OPEN_CHEST_WITH_GADGET_ID:
      result = (const char *)&unk_1A7E99A0;
      break;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE:
      result = (const char *)&unk_1A7E9A00;
      break;
    case QUEST_CONTENT_FINISH_DAILY_DUNGEON:
      result = (const char *)&unk_1A7E9A40;
      break;
    case QUEST_CONTENT_FINISH_WEEKLY_DUNGEON:
      result = (const char *)&unk_1A7E9A80;
      break;
    case QUEST_CONTENT_QUEST_VAR_EQUAL:
      result = (const char *)&unk_1A7E58A0;
      break;
    case QUEST_CONTENT_QUEST_VAR_GREATER:
      result = (const char *)&unk_1A7E58E0;
      break;
    case QUEST_CONTENT_QUEST_VAR_LESS:
      result = (const char *)&unk_1A7E5920;
      break;
    case QUEST_CONTENT_OBTAIN_VARIOUS_ITEM:
      result = (const char *)&unk_1A7E9AC0;
      break;
    case QUEST_CONTENT_FINISH_TOWER_LEVEL:
      result = (const char *)&unk_1A7E9B00;
      break;
    case QUEST_CONTENT_BARGAIN_SUCC:
      result = (const char *)&unk_1A7E9B40;
      break;
    case QUEST_CONTENT_BARGAIN_FAIL:
      result = (const char *)&unk_1A7E9B80;
      break;
    case QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN:
      result = (const char *)&unk_1A7E9BC0;
      break;
    case QUEST_CONTENT_ACTIVITY_TRIGGER_FAILED:
      result = (const char *)&unk_1A7E9C20;
      break;
    case QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT:
      result = (const char *)&unk_1A7E5FE0;
      break;
    case QUEST_CONTENT_ANY_MANUAL_TRANSPORT:
      result = (const char *)&unk_1A7E9C60;
      break;
    case QUEST_CONTENT_USE_ITEM:
      result = (const char *)&unk_1A7E9CA0;
      break;
    case QUEST_CONTENT_MAIN_COOP_ENTER_ANY_SAVE_POINT:
      result = (const char *)&unk_1A7E9CE0;
      break;
    case QUEST_CONTENT_ENTER_MY_HOME_WORLD:
      result = (const char *)&unk_1A7E9D40;
      break;
    case QUEST_CONTENT_ENTER_MY_WORLD_SCENE:
      result = (const char *)&unk_1A7E9D80;
      break;
    case QUEST_CONTENT_TIME_VAR_GT_EQ:
      result = (const char *)&unk_1A7E63A0;
      break;
    case QUEST_CONTENT_TIME_VAR_PASS_DAY:
      result = (const char *)&unk_1A7E63E0;
      break;
    case QUEST_CONTENT_QUEST_STATE_EQUAL:
      result = (const char *)&unk_1A7E52A0;
      break;
    case QUEST_CONTENT_QUEST_STATE_NOT_EQUAL:
      result = (const char *)&unk_1A7E52E0;
      break;
    case QUEST_CONTENT_UNLOCKED_RECIPE:
      result = (const char *)&unk_1A7E9DC0;
      break;
    case QUEST_CONTENT_NOT_UNLOCKED_RECIPE:
      result = (const char *)&unk_1A7E9E00;
      break;
    case QUEST_CONTENT_FISHING_SUCC:
      result = (const char *)&unk_1A7E9E40;
      break;
    case QUEST_CONTENT_ENTER_ROGUE_DUNGEON:
      result = (const char *)&unk_1A7E9E80;
      break;
    case QUEST_CONTENT_USE_WIDGET:
      result = (const char *)&unk_1A7E9EC0;
      break;
    case QUEST_CONTENT_CAPTURE_SUCC:
      result = (const char *)&unk_1A7E9F00;
      break;
    case QUEST_CONTENT_CAPTURE_USE_CAPTURETAG_LIST:
      result = (const char *)&unk_1A7E9F40;
      break;
    case QUEST_CONTENT_CAPTURE_USE_MATERIAL_LIST:
      result = (const char *)&unk_1A7E9F80;
      break;
    case QUEST_CONTENT_ENTER_VEHICLE:
      result = (const char *)&unk_1A7E9FC0;
      break;
    case QUEST_CONTENT_SCENE_LEVEL_TAG_EQ:
      result = (const char *)&unk_1A7E6700;
      break;
    case QUEST_CONTENT_LEAVE_SCENE:
      result = (const char *)&unk_1A7EA000;
      break;
    case QUEST_CONTENT_LEAVE_SCENE_RANGE:
      result = (const char *)&unk_1A7EA040;
      break;
    case QUEST_CONTENT_IRODORI_FINISH_FLOWER_COMBINATION:
      result = (const char *)&unk_1A7EA080;
      break;
    case QUEST_CONTENT_IRODORI_POETRY_REACH_MIN_PROGRESS:
      result = (const char *)&unk_1A7EA0E0;
      break;
    case QUEST_CONTENT_IRODORI_POETRY_FINISH_FILL_POETRY:
      result = (const char *)&unk_1A7EA140;
      break;
    case QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE:
      result = (const char *)&unk_1A7EA1A0;
      break;
    case QUEST_CONTENT_GADGET_STATE_CHANGE:
      result = (const char *)&unk_1A7EA200;
      break;
    case QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM:
      result = (const char *)&unk_1A7EA260;
      break;
    case QUEST_CONTENT_GCG_LEVEL_WIN:
      result = (const char *)&unk_1A7EA2A0;
      break;
    case QUEST_CONTENT_AVATAR_RENAME_COMPLETE:
      result = (const char *)&unk_1A7EA2E0;
      break;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL:
      result = (const char *)&unk_1A7E5E60;
      break;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER:
      result = (const char *)&unk_1A7E5EA0;
      break;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS:
      result = (const char *)&unk_1A7E5EE0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1361: range 0000000011580550-00000000115807F5
const char *__cdecl data::enumValToStr(data::QuestGuideType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestGuideType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case QUEST_GUIDE_NONE:
      result = "QUEST_GUIDE_NONE";
      break;
    case QUEST_GUIDE_LOCATION:
      result = "QUEST_GUIDE_LOCATION";
      break;
    case QUEST_GUIDE_NPC:
      result = "QUEST_GUIDE_NPC";
      break;
    case QUEST_GUIDE_GADGET:
      result = "QUEST_GUIDE_GADGET";
      break;
    case QUEST_GUIDE_SHOW_OR_HIDE_NPC:
      result = "QUEST_GUIDE_SHOW_OR_HIDE_NPC";
      break;
    case QUEST_GUIDE_DUNGEON_ENTRY:
      result = "QUEST_GUIDE_DUNGEON_ENTRY";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1377);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 1383: range 00000000115807F6-00000000115812FE
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestGuideType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestGuideType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideType> >::pointer v11; // rax
  data::QuestGuideType second; // ecx
  char v13; // dl
  data::QuestGuideType *ea; // [rsp+10h] [rbp-2E0h]
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
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 7 it:1398 208 8 9 <unknown> 240 32 9 <unkno"
                        "wn> 304 32 9 <unknown> 368 240 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1386);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestGuideType>::pair<char const(&)[17],data::QuestGuideType,true>(
        (std::pair<const std::string,data::QuestGuideType> *const)(v2 + 368),
        (const char (*)[17])"QUEST_GUIDE_NONE",
        (data::QuestGuideType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_GUIDE_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestGuideType>::pair<char const(&)[21],data::QuestGuideType,true>(
        (std::pair<const std::string,data::QuestGuideType> *const)(v2 + 408),
        (const char (*)[21])"QUEST_GUIDE_LOCATION",
        (data::QuestGuideType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_GUIDE_LOCATION");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QuestGuideType>::pair<char const(&)[16],data::QuestGuideType,true>(
        (std::pair<const std::string,data::QuestGuideType> *const)(v2 + 448),
        (const char (*)[16])"QUEST_GUIDE_NPC",
        (data::QuestGuideType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QUEST_GUIDE_NPC");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::QuestGuideType>::pair<char const(&)[19],data::QuestGuideType,true>(
        (std::pair<const std::string,data::QuestGuideType> *const)(v2 + 488),
        (const char (*)[19])"QUEST_GUIDE_GADGET",
        (data::QuestGuideType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QUEST_GUIDE_GADGET");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::QuestGuideType>::pair<char const(&)[29],data::QuestGuideType,true>(
        (std::pair<const std::string,data::QuestGuideType> *const)(v2 + 528),
        (const char (*)[29])"QUEST_GUIDE_SHOW_OR_HIDE_NPC",
        (data::QuestGuideType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "QUEST_GUIDE_SHOW_OR_HIDE_NPC");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::QuestGuideType>::pair<char const(&)[26],data::QuestGuideType,true>(
        (std::pair<const std::string,data::QuestGuideType> *const)(v2 + 568),
        (const char (*)[26])"QUEST_GUIDE_DUNGEON_ENTRY",
        (data::QuestGuideType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::QuestGuideType>>::allocator((std::allocator<std::pair<const std::string,data::QuestGuideType> > *const)(v2 + 64));
      std::map<std::string,data::QuestGuideType>::map(
        &data::enumStrToVal(std::string const&,data::QuestGuideType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestGuideType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestGuideType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideType &)::m);
      e = (data::QuestGuideType *)&data::enumStrToVal(std::string const&,data::QuestGuideType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestGuideType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestGuideType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestGuideType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestGuideType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestGuideType> *)(v2 + 608);
            i != (std::pair<const std::string,data::QuestGuideType> *)(v2 + 368);
            std::pair<std::string const,data::QuestGuideType>::~pair(i) )
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
    *(std::map<std::string,data::QuestGuideType>::iterator *)(v2 + 176) = std::map<std::string,data::QuestGuideType>::find(
                                                                            &data::enumStrToVal(std::string const&,data::QuestGuideType &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::QuestGuideType>::iterator *)(v2 + 208) = std::map<std::string,data::QuestGuideType>::end(&data::enumStrToVal(std::string const&,data::QuestGuideType &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideType> >::_Self *)(v2 + 208));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1401);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestGuideType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideType> > *const)(v2 + 176));
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

// Line 1409: range 00000000115812FF-000000001158136E
const char *__cdecl data::getDescription(data::QuestGuideType e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_GUIDE_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case QUEST_GUIDE_LOCATION:
      result = (const char *)&unk_1A7EA860;
      break;
    case QUEST_GUIDE_NPC:
      result = (const char *)&off_1A7EA8A0;
      break;
    case QUEST_GUIDE_GADGET:
      result = "Gadget";
      break;
    case QUEST_GUIDE_SHOW_OR_HIDE_NPC:
      result = (const char *)&unk_1A7EA920;
      break;
    case QUEST_GUIDE_DUNGEON_ENTRY:
      result = (const char *)&unk_1A7EA980;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1430: range 000000001158136F-00000000115815F4
const char *__cdecl data::enumValToStr(data::QuestGuideHintType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestGuideHintType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
  if ( e == QUEST_GUIDE_HINT_DESHRET_MANUAL )
  {
    result = "QUEST_GUIDE_HINT_DESHRET_MANUAL";
  }
  else
  {
    if ( e <= QUEST_GUIDE_HINT_DESHRET_MANUAL )
    {
      switch ( e )
      {
        case QUEST_GUIDE_HINT_ARANARA_HANDBOOK_RECORD:
          result = "QUEST_GUIDE_HINT_ARANARA_HANDBOOK_RECORD";
          goto LABEL_19;
        case QUEST_GUIDE_HINT_NONE:
          result = "QUEST_GUIDE_HINT_NONE";
          goto LABEL_19;
        case QUEST_GUIDE_HINT_READING_DIALOG:
          result = "QUEST_GUIDE_HINT_READING_DIALOG";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumValToStr",
      1442);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = e;
    v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      v6 = (common::milog::MiLogStream *)(v1 + 48);
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = v7;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = (const char *)&unk_1A7E0BE0;
  }
LABEL_19:
  if ( v10 == (char *)v1 )
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

// Line 1448: range 00000000115815F5-0000000011581F79
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestGuideHintType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestGuideHintType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideHintType> >::pointer v11; // rax
  data::QuestGuideHintType second; // ecx
  char v13; // dl
  data::QuestGuideHintType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:1461 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1451);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestGuideHintType>::pair<char const(&)[22],data::QuestGuideHintType,true>(
        (std::pair<const std::string,data::QuestGuideHintType> *const)(v2 + 320),
        (const char (*)[22])"QUEST_GUIDE_HINT_NONE",
        (data::QuestGuideHintType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QUEST_GUIDE_HINT_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestGuideHintType>::pair<char const(&)[32],data::QuestGuideHintType,true>(
        (std::pair<const std::string,data::QuestGuideHintType> *const)(v2 + 360),
        (const char (*)[32])"QUEST_GUIDE_HINT_READING_DIALOG",
        (data::QuestGuideHintType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_GUIDE_HINT_READING_DIALOG");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestGuideHintType>::pair<char const(&)[41],data::QuestGuideHintType,true>(
        (std::pair<const std::string,data::QuestGuideHintType> *const)(v2 + 400),
        (const char (*)[41])"QUEST_GUIDE_HINT_ARANARA_HANDBOOK_RECORD",
        (data::QuestGuideHintType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_GUIDE_HINT_ARANARA_HANDBOOK_RECORD");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestGuideHintType>::pair<char const(&)[32],data::QuestGuideHintType,true>(
        (std::pair<const std::string,data::QuestGuideHintType> *const)(v2 + 440),
        (const char (*)[32])"QUEST_GUIDE_HINT_DESHRET_MANUAL",
        (data::QuestGuideHintType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QuestGuideHintType>>::allocator((std::allocator<std::pair<const std::string,data::QuestGuideHintType> > *const)(v2 + 48));
      std::map<std::string,data::QuestGuideHintType>::map(
        &data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestGuideHintType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestGuideHintType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m);
      e = (data::QuestGuideHintType *)&data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestGuideHintType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestGuideHintType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestGuideHintType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestGuideHintType> *)(v2 + 480);
            i != (std::pair<const std::string,data::QuestGuideHintType> *)(v2 + 320);
            std::pair<std::string const,data::QuestGuideHintType>::~pair(i) )
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
    *(std::map<std::string,data::QuestGuideHintType>::iterator *)(v2 + 128) = std::map<std::string,data::QuestGuideHintType>::find(
                                                                                &data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QuestGuideHintType>::iterator *)(v2 + 160) = std::map<std::string,data::QuestGuideHintType>::end(&data::enumStrToVal(std::string const&,data::QuestGuideHintType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideHintType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideHintType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1464);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestGuideHintType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideHintType> > *const)(v2 + 128));
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

// Line 1472: range 0000000011581F7A-0000000011581FCF
const char *__cdecl data::getDescription(data::QuestGuideHintType e)
{
  if ( e == QUEST_GUIDE_HINT_DESHRET_MANUAL )
    return (const char *)&unk_1A7EAC60;
  if ( e <= QUEST_GUIDE_HINT_DESHRET_MANUAL )
  {
    switch ( e )
    {
      case QUEST_GUIDE_HINT_ARANARA_HANDBOOK_RECORD:
        return (const char *)&unk_1A7EAC20;
      case QUEST_GUIDE_HINT_NONE:
        return (const char *)&unk_1A7E5260;
      case QUEST_GUIDE_HINT_READING_DIALOG:
        return (const char *)&unk_1A7EABE0;
    }
  }
  return "unknown enum value!";
};

// Line 1489: range 0000000011581FD0-000000001158223F
const char *__cdecl data::enumValToStr(data::QuestFishType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestFishType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
  if ( e == QUEST_FISH_FURNITURE )
  {
    result = "QUEST_FISH_FURNITURE";
  }
  else
  {
    if ( e > QUEST_FISH_FURNITURE )
      goto LABEL_22;
    if ( e == QUEST_FISH_NONE )
    {
      result = "QUEST_FISH_NONE";
      goto LABEL_17;
    }
    if ( e == QUEST_FISH_MATERIAL )
    {
      result = "QUEST_FISH_MATERIAL";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1499);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
    }
  }
LABEL_17:
  if ( v10 == (char *)v1 )
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

// Line 1505: range 0000000011582240-0000000011582B21
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestFishType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestFishType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestFishType> >::pointer v11; // rax
  data::QuestFishType second; // ecx
  char v13; // dl
  data::QuestFishType *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:1517 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1508);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestFishType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestFishType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestFishType>::pair<char const(&)[16],data::QuestFishType,true>(
        (std::pair<const std::string,data::QuestFishType> *const)(v2 + 320),
        (const char (*)[16])"QUEST_FISH_NONE",
        (data::QuestFishType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_FISH_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestFishType>::pair<char const(&)[20],data::QuestFishType,true>(
        (std::pair<const std::string,data::QuestFishType> *const)(v2 + 360),
        (const char (*)[20])"QUEST_FISH_MATERIAL",
        (data::QuestFishType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_FISH_MATERIAL");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QuestFishType>::pair<char const(&)[21],data::QuestFishType,true>(
        (std::pair<const std::string,data::QuestFishType> *const)(v2 + 400),
        (const char (*)[21])"QUEST_FISH_FURNITURE",
        (data::QuestFishType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QuestFishType>>::allocator((std::allocator<std::pair<const std::string,data::QuestFishType> > *const)(v2 + 64));
      std::map<std::string,data::QuestFishType>::map(
        &data::enumStrToVal(std::string const&,data::QuestFishType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestFishType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestFishType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestFishType &)::m);
      e = (data::QuestFishType *)&data::enumStrToVal(std::string const&,data::QuestFishType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestFishType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestFishType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestFishType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestFishType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestFishType> *)(v2 + 440);
            i != (std::pair<const std::string,data::QuestFishType> *)(v2 + 320);
            std::pair<std::string const,data::QuestFishType>::~pair(i) )
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
    *(std::map<std::string,data::QuestFishType>::iterator *)(v2 + 128) = std::map<std::string,data::QuestFishType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::QuestFishType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QuestFishType>::iterator *)(v2 + 160) = std::map<std::string,data::QuestFishType>::end(&data::enumStrToVal(std::string const&,data::QuestFishType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestFishType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestFishType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1520);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestFishType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestFishType> > *const)(v2 + 128));
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

// Line 1528: range 0000000011582B22-0000000011582B64
const char *__cdecl data::getDescription(data::QuestFishType e)
{
  if ( e == QUEST_FISH_FURNITURE )
    return (const char *)&unk_1A7EAE60;
  if ( e > QUEST_FISH_FURNITURE )
    return "unknown enum value!";
  if ( e == QUEST_FISH_NONE )
    return (const char *)&unk_1A7E5260;
  if ( e == QUEST_FISH_MATERIAL )
    return (const char *)&unk_1A7EAE20;
  else
    return "unknown enum value!";
};

// Line 1543: range 0000000011582B65-0000000011582DBE
const char *__cdecl data::enumValToStr(data::QuestGuideNPCSelectType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestGuideNPCSelectType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    if ( e == SELECT_NPC_BY_PLAYERMALE )
    {
      result = "SELECT_NPC_BY_PLAYERMALE";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1551);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
    }
  }
  else
  {
    result = "SELECT_NPC_NONE";
  }
  if ( v10 == (char *)v1 )
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

// Line 1557: range 0000000011582DBF-00000000115835F6
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestGuideNPCSelectType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestGuideNPCSelectType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideNPCSelectType> >::pointer v11; // rax
  data::QuestGuideNPCSelectType second; // ecx
  char v13; // dl
  data::QuestGuideNPCSelectType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:1568 144 8 9 <u"
                        "nknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1560);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestGuideNPCSelectType>::pair<char const(&)[16],data::QuestGuideNPCSelectType,true>(
        (std::pair<const std::string,data::QuestGuideNPCSelectType> *const)(v2 + 304),
        (const char (*)[16])"SELECT_NPC_NONE",
        (data::QuestGuideNPCSelectType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "SELECT_NPC_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestGuideNPCSelectType>::pair<char const(&)[25],data::QuestGuideNPCSelectType,true>(
        (std::pair<const std::string,data::QuestGuideNPCSelectType> *const)(v2 + 344),
        (const char (*)[25])"SELECT_NPC_BY_PLAYERMALE",
        (data::QuestGuideNPCSelectType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::QuestGuideNPCSelectType>>::allocator((std::allocator<std::pair<const std::string,data::QuestGuideNPCSelectType> > *const)(v2 + 64));
      std::map<std::string,data::QuestGuideNPCSelectType>::map(
        &data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestGuideNPCSelectType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestGuideNPCSelectType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m);
      e = (data::QuestGuideNPCSelectType *)&data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestGuideNPCSelectType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestGuideNPCSelectType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestGuideNPCSelectType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestGuideNPCSelectType> *)(v2 + 384);
            i != (std::pair<const std::string,data::QuestGuideNPCSelectType> *)(v2 + 304);
            std::pair<std::string const,data::QuestGuideNPCSelectType>::~pair(i) )
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
    *(std::map<std::string,data::QuestGuideNPCSelectType>::iterator *)(v2 + 112) = std::map<std::string,data::QuestGuideNPCSelectType>::find(
                                                                                     &data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m,
                                                                                     s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::QuestGuideNPCSelectType>::iterator *)(v2 + 144) = std::map<std::string,data::QuestGuideNPCSelectType>::end(&data::enumStrToVal(std::string const&,data::QuestGuideNPCSelectType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideNPCSelectType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideNPCSelectType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1571);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestGuideNPCSelectType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideNPCSelectType> > *const)(v2 + 112));
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

// Line 1579: range 00000000115835F7-0000000011583626
const char *__cdecl data::getDescription(data::QuestGuideNPCSelectType e)
{
  if ( e == SELECT_NPC_NONE )
    return (const char *)&unk_1A7E5260;
  if ( e == SELECT_NPC_BY_PLAYERMALE )
    return (const char *)&unk_1A7EAFE0;
  return "unknown enum value!";
};

// Line 1592: range 0000000011583627-00000000115838A4
const char *__cdecl data::enumValToStr(data::ShowQuestGuideType e)
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
  if ( e == QUEST_GUIDE_ITEM_MOVE_HIDE )
  {
    result = "QUEST_GUIDE_ITEM_MOVE_HIDE";
  }
  else
  {
    if ( e > QUEST_GUIDE_ITEM_MOVE_HIDE )
      goto LABEL_22;
    if ( e == QUEST_GUIDE_ITEM_ENABLE )
    {
      result = "QUEST_GUIDE_ITEM_ENABLE";
      goto LABEL_17;
    }
    if ( e == QUEST_GUIDE_ITEM_DISABLE )
    {
      result = "QUEST_GUIDE_ITEM_DISABLE";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1602);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 1608: range 00000000115838A5-0000000011584186
bool __cdecl data::enumStrToVal(const std::string *s, data::ShowQuestGuideType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ShowQuestGuideType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ShowQuestGuideType> >::pointer v11; // rax
  data::ShowQuestGuideType second; // ecx
  char v13; // dl
  data::ShowQuestGuideType *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:1620 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1611);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ShowQuestGuideType>::pair<char const(&)[24],data::ShowQuestGuideType,true>(
        (std::pair<const std::string,data::ShowQuestGuideType> *const)(v2 + 320),
        (const char (*)[24])"QUEST_GUIDE_ITEM_ENABLE",
        (data::ShowQuestGuideType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_GUIDE_ITEM_ENABLE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ShowQuestGuideType>::pair<char const(&)[25],data::ShowQuestGuideType,true>(
        (std::pair<const std::string,data::ShowQuestGuideType> *const)(v2 + 360),
        (const char (*)[25])"QUEST_GUIDE_ITEM_DISABLE",
        (data::ShowQuestGuideType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_GUIDE_ITEM_DISABLE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ShowQuestGuideType>::pair<char const(&)[27],data::ShowQuestGuideType,true>(
        (std::pair<const std::string,data::ShowQuestGuideType> *const)(v2 + 400),
        (const char (*)[27])"QUEST_GUIDE_ITEM_MOVE_HIDE",
        (data::ShowQuestGuideType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::ShowQuestGuideType>>::allocator((std::allocator<std::pair<const std::string,data::ShowQuestGuideType> > *const)(v2 + 64));
      std::map<std::string,data::ShowQuestGuideType>::map(
        &data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ShowQuestGuideType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ShowQuestGuideType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m);
      e = (data::ShowQuestGuideType *)&data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ShowQuestGuideType>::~map,
        &data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ShowQuestGuideType>>::~allocator((std::allocator<std::pair<const std::string,data::ShowQuestGuideType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ShowQuestGuideType> *)(v2 + 440);
            i != (std::pair<const std::string,data::ShowQuestGuideType> *)(v2 + 320);
            std::pair<std::string const,data::ShowQuestGuideType>::~pair(i) )
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
    *(std::map<std::string,data::ShowQuestGuideType>::iterator *)(v2 + 128) = std::map<std::string,data::ShowQuestGuideType>::find(
                                                                                &data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::ShowQuestGuideType>::iterator *)(v2 + 160) = std::map<std::string,data::ShowQuestGuideType>::end(&data::enumStrToVal(std::string const&,data::ShowQuestGuideType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ShowQuestGuideType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ShowQuestGuideType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1623);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ShowQuestGuideType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ShowQuestGuideType> > *const)(v2 + 128));
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

// Line 1631: range 0000000011584187-00000000115841CB
const char *__cdecl data::getDescription(data::ShowQuestGuideType e)
{
  if ( e == QUEST_GUIDE_ITEM_MOVE_HIDE )
    return (const char *)&unk_1A7EB240;
  if ( e > QUEST_GUIDE_ITEM_MOVE_HIDE )
    return "unknown enum value!";
  if ( e == QUEST_GUIDE_ITEM_ENABLE )
    return (const char *)&off_1A7EB1C0;
  if ( e == QUEST_GUIDE_ITEM_DISABLE )
    return (const char *)&unk_1A7EB200;
  else
    return "unknown enum value!";
};

// Line 1646: range 00000000115841CC-0000000011584449
const char *__cdecl data::enumValToStr(data::QuestGuideAuto e)
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
  if ( e == QUEST_GUIDE_AUTO_DISABLE )
  {
    result = "QUEST_GUIDE_AUTO_DISABLE";
  }
  else
  {
    if ( e > QUEST_GUIDE_AUTO_DISABLE )
      goto LABEL_22;
    if ( e == QUEST_GUIDE_AUTO_NONE )
    {
      result = "QUEST_GUIDE_AUTO_NONE";
      goto LABEL_17;
    }
    if ( e == QUEST_GUIDE_AUTO_ENABLE )
    {
      result = "QUEST_GUIDE_AUTO_ENABLE";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1656);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 1662: range 000000001158444A-0000000011584D2B
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestGuideAuto *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestGuideAuto> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideAuto> >::pointer v11; // rax
  data::QuestGuideAuto second; // ecx
  char v13; // dl
  data::QuestGuideAuto *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:1674 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1665);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestGuideAuto>::pair<char const(&)[22],data::QuestGuideAuto,true>(
        (std::pair<const std::string,data::QuestGuideAuto> *const)(v2 + 320),
        (const char (*)[22])"QUEST_GUIDE_AUTO_NONE",
        (data::QuestGuideAuto *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_GUIDE_AUTO_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestGuideAuto>::pair<char const(&)[24],data::QuestGuideAuto,true>(
        (std::pair<const std::string,data::QuestGuideAuto> *const)(v2 + 360),
        (const char (*)[24])"QUEST_GUIDE_AUTO_ENABLE",
        (data::QuestGuideAuto *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_GUIDE_AUTO_ENABLE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QuestGuideAuto>::pair<char const(&)[25],data::QuestGuideAuto,true>(
        (std::pair<const std::string,data::QuestGuideAuto> *const)(v2 + 400),
        (const char (*)[25])"QUEST_GUIDE_AUTO_DISABLE",
        (data::QuestGuideAuto *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QuestGuideAuto>>::allocator((std::allocator<std::pair<const std::string,data::QuestGuideAuto> > *const)(v2 + 64));
      std::map<std::string,data::QuestGuideAuto>::map(
        &data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestGuideAuto> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestGuideAuto>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m);
      e = (data::QuestGuideAuto *)&data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestGuideAuto>::~map,
        &data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestGuideAuto>>::~allocator((std::allocator<std::pair<const std::string,data::QuestGuideAuto> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestGuideAuto> *)(v2 + 440);
            i != (std::pair<const std::string,data::QuestGuideAuto> *)(v2 + 320);
            std::pair<std::string const,data::QuestGuideAuto>::~pair(i) )
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
    *(std::map<std::string,data::QuestGuideAuto>::iterator *)(v2 + 128) = std::map<std::string,data::QuestGuideAuto>::find(
                                                                            &data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QuestGuideAuto>::iterator *)(v2 + 160) = std::map<std::string,data::QuestGuideAuto>::end(&data::enumStrToVal(std::string const&,data::QuestGuideAuto &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideAuto> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideAuto> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1677);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestGuideAuto>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideAuto> > *const)(v2 + 128));
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

// Line 1685: range 0000000011584D2C-0000000011584D70
const char *__cdecl data::getDescription(data::QuestGuideAuto e)
{
  if ( e == QUEST_GUIDE_AUTO_DISABLE )
    return (const char *)&unk_1A7EB440;
  if ( e > QUEST_GUIDE_AUTO_DISABLE )
    return "unknown enum value!";
  if ( e == QUEST_GUIDE_AUTO_NONE )
    return (const char *)&unk_1A7E5260;
  if ( e == QUEST_GUIDE_AUTO_ENABLE )
    return (const char *)&unk_1A7EB400;
  else
    return "unknown enum value!";
};

// Line 1700: range 0000000011584D71-000000001158500F
const char *__cdecl data::enumValToStr(data::QuestGuideStyle e)
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
    case QUEST_GUIDE_STYLE_NONE:
      result = "QUEST_GUIDE_STYLE_NONE";
      break;
    case QUEST_GUIDE_STYLE_START:
      result = "QUEST_GUIDE_STYLE_START";
      break;
    case QUEST_GUIDE_STYLE_TARGET:
      result = "QUEST_GUIDE_STYLE_TARGET";
      break;
    case QUEST_GUIDE_STYLE_FINISH:
      result = "QUEST_GUIDE_STYLE_FINISH";
      break;
    case QUEST_GUIDE_STYLE_POINT:
      result = "QUEST_GUIDE_STYLE_POINT";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1714);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 1720: range 0000000011585010-0000000011585A7A
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestGuideStyle *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestGuideStyle> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideStyle> >::pointer v11; // rax
  data::QuestGuideStyle second; // ecx
  char v13; // dl
  data::QuestGuideStyle *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 7 it:1734 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unkno"
                        "wn> 336 200 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1723);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestGuideStyle>::pair<char const(&)[23],data::QuestGuideStyle,true>(
        (std::pair<const std::string,data::QuestGuideStyle> *const)(v2 + 336),
        (const char (*)[23])"QUEST_GUIDE_STYLE_NONE",
        (data::QuestGuideStyle *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QUEST_GUIDE_STYLE_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestGuideStyle>::pair<char const(&)[24],data::QuestGuideStyle,true>(
        (std::pair<const std::string,data::QuestGuideStyle> *const)(v2 + 376),
        (const char (*)[24])"QUEST_GUIDE_STYLE_START",
        (data::QuestGuideStyle *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_GUIDE_STYLE_START");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestGuideStyle>::pair<char const(&)[25],data::QuestGuideStyle,true>(
        (std::pair<const std::string,data::QuestGuideStyle> *const)(v2 + 416),
        (const char (*)[25])"QUEST_GUIDE_STYLE_TARGET",
        (data::QuestGuideStyle *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_GUIDE_STYLE_TARGET");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestGuideStyle>::pair<char const(&)[25],data::QuestGuideStyle,true>(
        (std::pair<const std::string,data::QuestGuideStyle> *const)(v2 + 456),
        (const char (*)[25])"QUEST_GUIDE_STYLE_FINISH",
        (data::QuestGuideStyle *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QUEST_GUIDE_STYLE_FINISH");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::QuestGuideStyle>::pair<char const(&)[24],data::QuestGuideStyle,true>(
        (std::pair<const std::string,data::QuestGuideStyle> *const)(v2 + 496),
        (const char (*)[24])"QUEST_GUIDE_STYLE_POINT",
        (data::QuestGuideStyle *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::QuestGuideStyle>>::allocator((std::allocator<std::pair<const std::string,data::QuestGuideStyle> > *const)(v2 + 48));
      std::map<std::string,data::QuestGuideStyle>::map(
        &data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestGuideStyle> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestGuideStyle>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m);
      e = (data::QuestGuideStyle *)&data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestGuideStyle>::~map,
        &data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestGuideStyle>>::~allocator((std::allocator<std::pair<const std::string,data::QuestGuideStyle> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestGuideStyle> *)(v2 + 536);
            i != (std::pair<const std::string,data::QuestGuideStyle> *)(v2 + 336);
            std::pair<std::string const,data::QuestGuideStyle>::~pair(i) )
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
    *(std::map<std::string,data::QuestGuideStyle>::iterator *)(v2 + 144) = std::map<std::string,data::QuestGuideStyle>::find(
                                                                             &data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::QuestGuideStyle>::iterator *)(v2 + 176) = std::map<std::string,data::QuestGuideStyle>::end(&data::enumStrToVal(std::string const&,data::QuestGuideStyle &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideStyle> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideStyle> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1737);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestGuideStyle>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideStyle> > *const)(v2 + 144));
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

// Line 1745: range 0000000011585A7B-0000000011585AE0
const char *__cdecl data::getDescription(data::QuestGuideStyle e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_GUIDE_STYLE_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case QUEST_GUIDE_STYLE_START:
      result = (const char *)&unk_1A7EB6C0;
      break;
    case QUEST_GUIDE_STYLE_TARGET:
      result = (const char *)&unk_1A7EB700;
      break;
    case QUEST_GUIDE_STYLE_FINISH:
      result = (const char *)&unk_1A7EB740;
      break;
    case QUEST_GUIDE_STYLE_POINT:
      result = (const char *)&unk_1A7EB780;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1764: range 0000000011585AE1-0000000011585D5E
const char *__cdecl data::enumValToStr(data::QuestGuideLayer e)
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
  if ( e == QUEST_GUIDE_LAYER_SCENE )
  {
    result = "QUEST_GUIDE_LAYER_SCENE";
  }
  else
  {
    if ( e > QUEST_GUIDE_LAYER_SCENE )
      goto LABEL_22;
    if ( e == QUEST_GUIDE_LAYER_NONE )
    {
      result = "QUEST_GUIDE_LAYER_NONE";
      goto LABEL_17;
    }
    if ( e == QUEST_GUIDE_LAYER_UI )
    {
      result = "QUEST_GUIDE_LAYER_UI";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1774);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 1780: range 0000000011585D5F-0000000011586640
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestGuideLayer *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestGuideLayer> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideLayer> >::pointer v11; // rax
  data::QuestGuideLayer second; // ecx
  char v13; // dl
  data::QuestGuideLayer *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:1792 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1783);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QuestGuideLayer>::pair<char const(&)[23],data::QuestGuideLayer,true>(
        (std::pair<const std::string,data::QuestGuideLayer> *const)(v2 + 320),
        (const char (*)[23])"QUEST_GUIDE_LAYER_NONE",
        (data::QuestGuideLayer *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_GUIDE_LAYER_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QuestGuideLayer>::pair<char const(&)[21],data::QuestGuideLayer,true>(
        (std::pair<const std::string,data::QuestGuideLayer> *const)(v2 + 360),
        (const char (*)[21])"QUEST_GUIDE_LAYER_UI",
        (data::QuestGuideLayer *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_GUIDE_LAYER_UI");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QuestGuideLayer>::pair<char const(&)[24],data::QuestGuideLayer,true>(
        (std::pair<const std::string,data::QuestGuideLayer> *const)(v2 + 400),
        (const char (*)[24])"QUEST_GUIDE_LAYER_SCENE",
        (data::QuestGuideLayer *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QuestGuideLayer>>::allocator((std::allocator<std::pair<const std::string,data::QuestGuideLayer> > *const)(v2 + 64));
      std::map<std::string,data::QuestGuideLayer>::map(
        &data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestGuideLayer> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QuestGuideLayer>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m);
      e = (data::QuestGuideLayer *)&data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestGuideLayer>::~map,
        &data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestGuideLayer>>::~allocator((std::allocator<std::pair<const std::string,data::QuestGuideLayer> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestGuideLayer> *)(v2 + 440);
            i != (std::pair<const std::string,data::QuestGuideLayer> *)(v2 + 320);
            std::pair<std::string const,data::QuestGuideLayer>::~pair(i) )
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
    *(std::map<std::string,data::QuestGuideLayer>::iterator *)(v2 + 128) = std::map<std::string,data::QuestGuideLayer>::find(
                                                                             &data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QuestGuideLayer>::iterator *)(v2 + 160) = std::map<std::string,data::QuestGuideLayer>::end(&data::enumStrToVal(std::string const&,data::QuestGuideLayer &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideLayer> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideLayer> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        1795);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestGuideLayer>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestGuideLayer> > *const)(v2 + 128));
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

// Line 1803: range 0000000011586641-0000000011586685
const char *__cdecl data::getDescription(data::QuestGuideLayer e)
{
  if ( e == QUEST_GUIDE_LAYER_SCENE )
    return (const char *)&unk_1A7EB9A0;
  if ( e > QUEST_GUIDE_LAYER_SCENE )
    return "unknown enum value!";
  if ( e == QUEST_GUIDE_LAYER_NONE )
    return (const char *)&unk_1A7E5260;
  if ( e == QUEST_GUIDE_LAYER_UI )
    return (const char *)&unk_1A7EB960;
  else
    return "unknown enum value!";
};

// Line 1818: range 0000000011586686-0000000011586C77
const char *__cdecl data::enumValToStr(data::QuestExecType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestExecType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case QUEST_EXEC_NONE:
      result = "QUEST_EXEC_NONE";
      break;
    case QUEST_EXEC_DEL_PACK_ITEM:
      result = "QUEST_EXEC_DEL_PACK_ITEM";
      break;
    case QUEST_EXEC_UNLOCK_POINT:
      result = "QUEST_EXEC_UNLOCK_POINT";
      break;
    case QUEST_EXEC_UNLOCK_AREA:
      result = "QUEST_EXEC_UNLOCK_AREA";
      break;
    case QUEST_EXEC_UNLOCK_FORCE:
      result = "QUEST_EXEC_UNLOCK_FORCE";
      break;
    case QUEST_EXEC_LOCK_FORCE:
      result = "QUEST_EXEC_LOCK_FORCE";
      break;
    case QUEST_EXEC_CHANGE_AVATAR_ELEMET:
      result = "QUEST_EXEC_CHANGE_AVATAR_ELEMET";
      break;
    case QUEST_EXEC_REFRESH_GROUP_MONSTER:
      result = "QUEST_EXEC_REFRESH_GROUP_MONSTER";
      break;
    case QUEST_EXEC_SET_IS_FLYABLE:
      result = "QUEST_EXEC_SET_IS_FLYABLE";
      break;
    case QUEST_EXEC_SET_IS_WEATHER_LOCKED:
      result = "QUEST_EXEC_SET_IS_WEATHER_LOCKED";
      break;
    case QUEST_EXEC_SET_IS_GAME_TIME_LOCKED:
      result = "QUEST_EXEC_SET_IS_GAME_TIME_LOCKED";
      break;
    case QUEST_EXEC_SET_IS_TRANSFERABLE:
      result = "QUEST_EXEC_SET_IS_TRANSFERABLE";
      break;
    case QUEST_EXEC_GRANT_TRIAL_AVATAR:
      result = "QUEST_EXEC_GRANT_TRIAL_AVATAR";
      break;
    case QUEST_EXEC_OPEN_BORED:
      result = "QUEST_EXEC_OPEN_BORED";
      break;
    case QUEST_EXEC_ROLLBACK_QUEST:
      result = "QUEST_EXEC_ROLLBACK_QUEST";
      break;
    case QUEST_EXEC_NOTIFY_GROUP_LUA:
      result = "QUEST_EXEC_NOTIFY_GROUP_LUA";
      break;
    case QUEST_EXEC_SET_OPEN_STATE:
      result = "QUEST_EXEC_SET_OPEN_STATE";
      break;
    case QUEST_EXEC_LOCK_POINT:
      result = "QUEST_EXEC_LOCK_POINT";
      break;
    case QUEST_EXEC_DEL_PACK_ITEM_BATCH:
      result = "QUEST_EXEC_DEL_PACK_ITEM_BATCH";
      break;
    case QUEST_EXEC_REFRESH_GROUP_SUITE:
      result = "QUEST_EXEC_REFRESH_GROUP_SUITE";
      break;
    case QUEST_EXEC_REMOVE_TRIAL_AVATAR:
      result = "QUEST_EXEC_REMOVE_TRIAL_AVATAR";
      break;
    case QUEST_EXEC_SET_GAME_TIME:
      result = "QUEST_EXEC_SET_GAME_TIME";
      break;
    case QUEST_EXEC_SET_WEATHER_GADGET:
      result = "QUEST_EXEC_SET_WEATHER_GADGET";
      break;
    case QUEST_EXEC_ADD_QUEST_PROGRESS:
      result = "QUEST_EXEC_ADD_QUEST_PROGRESS";
      break;
    case QUEST_EXEC_NOTIFY_DAILY_TASK:
      result = "QUEST_EXEC_NOTIFY_DAILY_TASK";
      break;
    case QUEST_EXEC_CREATE_PATTERN_GROUP:
      result = "QUEST_EXEC_CREATE_PATTERN_GROUP";
      break;
    case QUEST_EXEC_REMOVE_PATTERN_GROUP:
      result = "QUEST_EXEC_REMOVE_PATTERN_GROUP";
      break;
    case QUEST_EXEC_REFRESH_GROUP_SUITE_RANDOM:
      result = "QUEST_EXEC_REFRESH_GROUP_SUITE_RANDOM";
      break;
    case QUEST_EXEC_ACTIVE_ITEM_GIVING:
      result = "QUEST_EXEC_ACTIVE_ITEM_GIVING";
      break;
    case QUEST_EXEC_DEL_ALL_SPECIFIC_PACK_ITEM:
      result = "QUEST_EXEC_DEL_ALL_SPECIFIC_PACK_ITEM";
      break;
    case QUEST_EXEC_ROLLBACK_PARENT_QUEST:
      result = "QUEST_EXEC_ROLLBACK_PARENT_QUEST";
      break;
    case QUEST_EXEC_LOCK_AVATAR_TEAM:
      result = "QUEST_EXEC_LOCK_AVATAR_TEAM";
      break;
    case QUEST_EXEC_UNLOCK_AVATAR_TEAM:
      result = "QUEST_EXEC_UNLOCK_AVATAR_TEAM";
      break;
    case QUEST_EXEC_UPDATE_PARENT_QUEST_REWARD_INDEX:
      result = "QUEST_EXEC_UPDATE_PARENT_QUEST_REWARD_INDEX";
      break;
    case QUEST_EXEC_SET_DAILY_TASK_VAR:
      result = "QUEST_EXEC_SET_DAILY_TASK_VAR";
      break;
    case QUEST_EXEC_INC_DAILY_TASK_VAR:
      result = "QUEST_EXEC_INC_DAILY_TASK_VAR";
      break;
    case QUEST_EXEC_DEC_DAILY_TASK_VAR:
      result = "QUEST_EXEC_DEC_DAILY_TASK_VAR";
      break;
    case QUEST_EXEC_ACTIVE_ACTIVITY_COND_STATE:
      result = "QUEST_EXEC_ACTIVE_ACTIVITY_COND_STATE";
      break;
    case QUEST_EXEC_INACTIVE_ACTIVITY_COND_STATE:
      result = "QUEST_EXEC_INACTIVE_ACTIVITY_COND_STATE";
      break;
    case QUEST_EXEC_ADD_CUR_AVATAR_ENERGY:
      result = "QUEST_EXEC_ADD_CUR_AVATAR_ENERGY";
      break;
    case QUEST_EXEC_START_BARGAIN:
      result = "QUEST_EXEC_START_BARGAIN";
      break;
    case QUEST_EXEC_STOP_BARGAIN:
      result = "QUEST_EXEC_STOP_BARGAIN";
      break;
    case QUEST_EXEC_SET_QUEST_GLOBAL_VAR:
      result = "QUEST_EXEC_SET_QUEST_GLOBAL_VAR";
      break;
    case QUEST_EXEC_INC_QUEST_GLOBAL_VAR:
      result = "QUEST_EXEC_INC_QUEST_GLOBAL_VAR";
      break;
    case QUEST_EXEC_DEC_QUEST_GLOBAL_VAR:
      result = "QUEST_EXEC_DEC_QUEST_GLOBAL_VAR";
      break;
    case QUEST_EXEC_REGISTER_DYNAMIC_GROUP:
      result = "QUEST_EXEC_REGISTER_DYNAMIC_GROUP";
      break;
    case QUEST_EXEC_UNREGISTER_DYNAMIC_GROUP:
      result = "QUEST_EXEC_UNREGISTER_DYNAMIC_GROUP";
      break;
    case QUEST_EXEC_SET_QUEST_VAR:
      result = "QUEST_EXEC_SET_QUEST_VAR";
      break;
    case QUEST_EXEC_INC_QUEST_VAR:
      result = "QUEST_EXEC_INC_QUEST_VAR";
      break;
    case QUEST_EXEC_DEC_QUEST_VAR:
      result = "QUEST_EXEC_DEC_QUEST_VAR";
      break;
    case QUEST_EXEC_RANDOM_QUEST_VAR:
      result = "QUEST_EXEC_RANDOM_QUEST_VAR";
      break;
    case QUEST_EXEC_ACTIVATE_SCANNING_PIC:
      result = "QUEST_EXEC_ACTIVATE_SCANNING_PIC";
      break;
    case QUEST_EXEC_RELOAD_SCENE_TAG:
      result = "QUEST_EXEC_RELOAD_SCENE_TAG";
      break;
    case QUEST_EXEC_REGISTER_DYNAMIC_GROUP_ONLY:
      result = "QUEST_EXEC_REGISTER_DYNAMIC_GROUP_ONLY";
      break;
    case QUEST_EXEC_CHANGE_SKILL_DEPOT:
      result = "QUEST_EXEC_CHANGE_SKILL_DEPOT";
      break;
    case QUEST_EXEC_ADD_SCENE_TAG:
      result = "QUEST_EXEC_ADD_SCENE_TAG";
      break;
    case QUEST_EXEC_DEL_SCENE_TAG:
      result = "QUEST_EXEC_DEL_SCENE_TAG";
      break;
    case QUEST_EXEC_INIT_TIME_VAR:
      result = "QUEST_EXEC_INIT_TIME_VAR";
      break;
    case QUEST_EXEC_CLEAR_TIME_VAR:
      result = "QUEST_EXEC_CLEAR_TIME_VAR";
      break;
    case QUEST_EXEC_MODIFY_CLIMATE_AREA:
      result = "QUEST_EXEC_MODIFY_CLIMATE_AREA";
      break;
    case QUEST_EXEC_GRANT_TRIAL_AVATAR_AND_LOCK_TEAM:
      result = "QUEST_EXEC_GRANT_TRIAL_AVATAR_AND_LOCK_TEAM";
      break;
    case QUEST_EXEC_CHANGE_MAP_AREA_STATE:
      result = "QUEST_EXEC_CHANGE_MAP_AREA_STATE";
      break;
    case QUEST_EXEC_DEACTIVE_ITEM_GIVING:
      result = "QUEST_EXEC_DEACTIVE_ITEM_GIVING";
      break;
    case QUEST_EXEC_CHANGE_SCENE_LEVEL_TAG:
      result = "QUEST_EXEC_CHANGE_SCENE_LEVEL_TAG";
      break;
    case QUEST_EXEC_UNLOCK_PLAYER_WORLD_SCENE:
      result = "QUEST_EXEC_UNLOCK_PLAYER_WORLD_SCENE";
      break;
    case QUEST_EXEC_LOCK_PLAYER_WORLD_SCENE:
      result = "QUEST_EXEC_LOCK_PLAYER_WORLD_SCENE";
      break;
    case QUEST_EXEC_FAIL_MAINCOOP:
      result = "QUEST_EXEC_FAIL_MAINCOOP";
      break;
    case QUEST_EXEC_MODIFY_WEATHER_AREA:
      result = "QUEST_EXEC_MODIFY_WEATHER_AREA";
      break;
    case QUEST_EXEC_MODIFY_ARANARA_COLLECTION_STATE:
      result = "QUEST_EXEC_MODIFY_ARANARA_COLLECTION_STATE";
      break;
    case QUEST_EXEC_GRANT_TRIAL_AVATAR_BATCH_AND_LOCK_TEAM:
      result = "QUEST_EXEC_GRANT_TRIAL_AVATAR_BATCH_AND_LOCK_TEAM";
      break;
    case QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE:
      result = "QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE";
      break;
    case QUEST_EXEC_HIDE_SCENE_POINT:
      result = "QUEST_EXEC_HIDE_SCENE_POINT";
      break;
    case QUEST_EXEC_UNHIDE_SCENE_POINT:
      result = "QUEST_EXEC_UNHIDE_SCENE_POINT";
      break;
    case QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE_BUILTIN:
      result = "QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE_BUILTIN";
      break;
    case QUEST_EXEC_RANDOM_CLOSED_QUEST_VAR:
      result = "QUEST_EXEC_RANDOM_CLOSED_QUEST_VAR";
      break;
    case QUEST_EXEC_OPTIONAL_REVIVAL_TEAM:
      result = "QUEST_EXEC_OPTIONAL_REVIVAL_TEAM";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        1974);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 1980: range 0000000011586C78-0000000011589F67
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestExecType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::QuestExecType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecType> >::pointer v10; // rax
  data::QuestExecType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::QuestExecType *ea; // [rsp+10h] [rbp-1260h]
  char v16[4688]; // [rsp+20h] [rbp-1250h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "83 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 "
                        "<unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkno"
                        "wn> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 80"
                        "0 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 "
                        "<unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkno"
                        "wn> 976 4 9 <unknown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown>"
                        " 1056 4 9 <unknown> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown> "
                        "1136 4 9 <unknown> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> 1"
                        "216 4 9 <unknown> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 8 7 it:2065 1312"
                        " 8 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 3040 9 <unknown>";
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
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -234556924;
  v4[536862745] = -234556924;
  v4[536862746] = -234556924;
  v4[536862747] = -234556924;
  v4[536862748] = -234556924;
  v4[536862749] = -234556924;
  v4[536862750] = -234556924;
  v4[536862751] = -234556924;
  v4[536862752] = -234556924;
  v4[536862753] = -234556924;
  v4[536862754] = -234556924;
  v4[536862755] = -234556924;
  v4[536862756] = -234556924;
  v4[536862757] = -234556924;
  v4[536862758] = -234556924;
  v4[536862759] = -234556924;
  v4[536862760] = -218959360;
  v4[536862761] = -218959360;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862861] = -202116109;
  v4[536862862] = -202116109;
  v4[536862863] = -202116109;
  v4[536862864] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 1344) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1344, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1344),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      1983);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 1344),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestExecType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestExecType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[16],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1472),
        (const char (*)[16])"QUEST_EXEC_NONE",
        (data::QuestExecType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QUEST_EXEC_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1512),
        (const char (*)[25])"QUEST_EXEC_DEL_PACK_ITEM",
        (data::QuestExecType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QUEST_EXEC_DEL_PACK_ITEM");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[24],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1552),
        (const char (*)[24])"QUEST_EXEC_UNLOCK_POINT",
        (data::QuestExecType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QUEST_EXEC_UNLOCK_POINT");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[23],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1592),
        (const char (*)[23])"QUEST_EXEC_UNLOCK_AREA",
        (data::QuestExecType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QUEST_EXEC_UNLOCK_AREA");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[24],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1632),
        (const char (*)[24])"QUEST_EXEC_UNLOCK_FORCE",
        (data::QuestExecType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QUEST_EXEC_UNLOCK_FORCE");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[22],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1672),
        (const char (*)[22])"QUEST_EXEC_LOCK_FORCE",
        (data::QuestExecType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "QUEST_EXEC_LOCK_FORCE");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1712),
        (const char (*)[32])"QUEST_EXEC_CHANGE_AVATAR_ELEMET",
        (data::QuestExecType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "QUEST_EXEC_CHANGE_AVATAR_ELEMET");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1752),
        (const char (*)[33])"QUEST_EXEC_REFRESH_GROUP_MONSTER",
        (data::QuestExecType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "QUEST_EXEC_REFRESH_GROUP_MONSTER");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[26],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1792),
        (const char (*)[26])"QUEST_EXEC_SET_IS_FLYABLE",
        (data::QuestExecType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "QUEST_EXEC_SET_IS_FLYABLE");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1832),
        (const char (*)[33])"QUEST_EXEC_SET_IS_WEATHER_LOCKED",
        (data::QuestExecType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "QUEST_EXEC_SET_IS_WEATHER_LOCKED");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[35],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1872),
        (const char (*)[35])"QUEST_EXEC_SET_IS_GAME_TIME_LOCKED",
        (data::QuestExecType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "QUEST_EXEC_SET_IS_GAME_TIME_LOCKED");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[31],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1912),
        (const char (*)[31])"QUEST_EXEC_SET_IS_TRANSFERABLE",
        (data::QuestExecType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "QUEST_EXEC_SET_IS_TRANSFERABLE");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1952),
        (const char (*)[30])"QUEST_EXEC_GRANT_TRIAL_AVATAR",
        (data::QuestExecType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "QUEST_EXEC_GRANT_TRIAL_AVATAR");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[22],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 1992),
        (const char (*)[22])"QUEST_EXEC_OPEN_BORED",
        (data::QuestExecType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "QUEST_EXEC_OPEN_BORED");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[26],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2032),
        (const char (*)[26])"QUEST_EXEC_ROLLBACK_QUEST",
        (data::QuestExecType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "QUEST_EXEC_ROLLBACK_QUEST");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[28],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2072),
        (const char (*)[28])"QUEST_EXEC_NOTIFY_GROUP_LUA",
        (data::QuestExecType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "QUEST_EXEC_NOTIFY_GROUP_LUA");
      *(_DWORD *)(v2 + 320) = 16;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[26],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2112),
        (const char (*)[26])"QUEST_EXEC_SET_OPEN_STATE",
        (data::QuestExecType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "QUEST_EXEC_SET_OPEN_STATE");
      *(_DWORD *)(v2 + 336) = 17;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[22],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2152),
        (const char (*)[22])"QUEST_EXEC_LOCK_POINT",
        (data::QuestExecType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "QUEST_EXEC_LOCK_POINT");
      *(_DWORD *)(v2 + 352) = 18;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[31],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2192),
        (const char (*)[31])"QUEST_EXEC_DEL_PACK_ITEM_BATCH",
        (data::QuestExecType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "QUEST_EXEC_DEL_PACK_ITEM_BATCH");
      *(_DWORD *)(v2 + 368) = 19;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[31],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2232),
        (const char (*)[31])"QUEST_EXEC_REFRESH_GROUP_SUITE",
        (data::QuestExecType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "QUEST_EXEC_REFRESH_GROUP_SUITE");
      *(_DWORD *)(v2 + 384) = 20;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[31],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2272),
        (const char (*)[31])"QUEST_EXEC_REMOVE_TRIAL_AVATAR",
        (data::QuestExecType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "QUEST_EXEC_REMOVE_TRIAL_AVATAR");
      *(_DWORD *)(v2 + 400) = 21;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2312),
        (const char (*)[25])"QUEST_EXEC_SET_GAME_TIME",
        (data::QuestExecType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "QUEST_EXEC_SET_GAME_TIME");
      *(_DWORD *)(v2 + 416) = 22;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2352),
        (const char (*)[30])"QUEST_EXEC_SET_WEATHER_GADGET",
        (data::QuestExecType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "QUEST_EXEC_SET_WEATHER_GADGET");
      *(_DWORD *)(v2 + 432) = 23;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2392),
        (const char (*)[30])"QUEST_EXEC_ADD_QUEST_PROGRESS",
        (data::QuestExecType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "QUEST_EXEC_ADD_QUEST_PROGRESS");
      *(_DWORD *)(v2 + 448) = 24;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[29],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2432),
        (const char (*)[29])"QUEST_EXEC_NOTIFY_DAILY_TASK",
        (data::QuestExecType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "QUEST_EXEC_NOTIFY_DAILY_TASK");
      *(_DWORD *)(v2 + 464) = 25;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2472),
        (const char (*)[32])"QUEST_EXEC_CREATE_PATTERN_GROUP",
        (data::QuestExecType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "QUEST_EXEC_CREATE_PATTERN_GROUP");
      *(_DWORD *)(v2 + 480) = 26;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2512),
        (const char (*)[32])"QUEST_EXEC_REMOVE_PATTERN_GROUP",
        (data::QuestExecType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "QUEST_EXEC_REMOVE_PATTERN_GROUP");
      *(_DWORD *)(v2 + 496) = 27;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[38],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2552),
        (const char (*)[38])"QUEST_EXEC_REFRESH_GROUP_SUITE_RANDOM",
        (data::QuestExecType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "QUEST_EXEC_REFRESH_GROUP_SUITE_RANDOM");
      *(_DWORD *)(v2 + 512) = 28;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2592),
        (const char (*)[30])"QUEST_EXEC_ACTIVE_ITEM_GIVING",
        (data::QuestExecType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "QUEST_EXEC_ACTIVE_ITEM_GIVING");
      *(_DWORD *)(v2 + 528) = 29;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[38],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2632),
        (const char (*)[38])"QUEST_EXEC_DEL_ALL_SPECIFIC_PACK_ITEM",
        (data::QuestExecType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "QUEST_EXEC_DEL_ALL_SPECIFIC_PACK_ITEM");
      *(_DWORD *)(v2 + 544) = 30;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2672),
        (const char (*)[33])"QUEST_EXEC_ROLLBACK_PARENT_QUEST",
        (data::QuestExecType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "QUEST_EXEC_ROLLBACK_PARENT_QUEST");
      *(_DWORD *)(v2 + 560) = 31;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[28],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2712),
        (const char (*)[28])"QUEST_EXEC_LOCK_AVATAR_TEAM",
        (data::QuestExecType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "QUEST_EXEC_LOCK_AVATAR_TEAM");
      *(_DWORD *)(v2 + 576) = 32;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2752),
        (const char (*)[30])"QUEST_EXEC_UNLOCK_AVATAR_TEAM",
        (data::QuestExecType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "QUEST_EXEC_UNLOCK_AVATAR_TEAM");
      *(_DWORD *)(v2 + 592) = 33;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[44],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2792),
        (const char (*)[44])"QUEST_EXEC_UPDATE_PARENT_QUEST_REWARD_INDEX",
        (data::QuestExecType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "QUEST_EXEC_UPDATE_PARENT_QUEST_REWARD_INDEX");
      *(_DWORD *)(v2 + 608) = 34;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2832),
        (const char (*)[30])"QUEST_EXEC_SET_DAILY_TASK_VAR",
        (data::QuestExecType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "QUEST_EXEC_SET_DAILY_TASK_VAR");
      *(_DWORD *)(v2 + 624) = 35;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2872),
        (const char (*)[30])"QUEST_EXEC_INC_DAILY_TASK_VAR",
        (data::QuestExecType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "QUEST_EXEC_INC_DAILY_TASK_VAR");
      *(_DWORD *)(v2 + 640) = 36;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2912),
        (const char (*)[30])"QUEST_EXEC_DEC_DAILY_TASK_VAR",
        (data::QuestExecType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "QUEST_EXEC_DEC_DAILY_TASK_VAR");
      *(_DWORD *)(v2 + 656) = 37;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[38],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2952),
        (const char (*)[38])"QUEST_EXEC_ACTIVE_ACTIVITY_COND_STATE",
        (data::QuestExecType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "QUEST_EXEC_ACTIVE_ACTIVITY_COND_STATE");
      *(_DWORD *)(v2 + 672) = 38;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[40],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 2992),
        (const char (*)[40])"QUEST_EXEC_INACTIVE_ACTIVITY_COND_STATE",
        (data::QuestExecType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "QUEST_EXEC_INACTIVE_ACTIVITY_COND_STATE");
      *(_DWORD *)(v2 + 688) = 39;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3032),
        (const char (*)[33])"QUEST_EXEC_ADD_CUR_AVATAR_ENERGY",
        (data::QuestExecType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "QUEST_EXEC_ADD_CUR_AVATAR_ENERGY");
      *(_DWORD *)(v2 + 704) = 41;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3072),
        (const char (*)[25])"QUEST_EXEC_START_BARGAIN",
        (data::QuestExecType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "QUEST_EXEC_START_BARGAIN");
      *(_DWORD *)(v2 + 720) = 42;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[24],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3112),
        (const char (*)[24])"QUEST_EXEC_STOP_BARGAIN",
        (data::QuestExecType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "QUEST_EXEC_STOP_BARGAIN");
      *(_DWORD *)(v2 + 736) = 43;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3152),
        (const char (*)[32])"QUEST_EXEC_SET_QUEST_GLOBAL_VAR",
        (data::QuestExecType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "QUEST_EXEC_SET_QUEST_GLOBAL_VAR");
      *(_DWORD *)(v2 + 752) = 44;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3192),
        (const char (*)[32])"QUEST_EXEC_INC_QUEST_GLOBAL_VAR",
        (data::QuestExecType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "QUEST_EXEC_INC_QUEST_GLOBAL_VAR");
      *(_DWORD *)(v2 + 768) = 45;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3232),
        (const char (*)[32])"QUEST_EXEC_DEC_QUEST_GLOBAL_VAR",
        (data::QuestExecType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "QUEST_EXEC_DEC_QUEST_GLOBAL_VAR");
      *(_DWORD *)(v2 + 784) = 46;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[34],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3272),
        (const char (*)[34])"QUEST_EXEC_REGISTER_DYNAMIC_GROUP",
        (data::QuestExecType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "QUEST_EXEC_REGISTER_DYNAMIC_GROUP");
      *(_DWORD *)(v2 + 800) = 47;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[36],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3312),
        (const char (*)[36])"QUEST_EXEC_UNREGISTER_DYNAMIC_GROUP",
        (data::QuestExecType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "QUEST_EXEC_UNREGISTER_DYNAMIC_GROUP");
      *(_DWORD *)(v2 + 816) = 48;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3352),
        (const char (*)[25])"QUEST_EXEC_SET_QUEST_VAR",
        (data::QuestExecType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "QUEST_EXEC_SET_QUEST_VAR");
      *(_DWORD *)(v2 + 832) = 49;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3392),
        (const char (*)[25])"QUEST_EXEC_INC_QUEST_VAR",
        (data::QuestExecType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "QUEST_EXEC_INC_QUEST_VAR");
      *(_DWORD *)(v2 + 848) = 50;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3432),
        (const char (*)[25])"QUEST_EXEC_DEC_QUEST_VAR",
        (data::QuestExecType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "QUEST_EXEC_DEC_QUEST_VAR");
      *(_DWORD *)(v2 + 864) = 51;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[28],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3472),
        (const char (*)[28])"QUEST_EXEC_RANDOM_QUEST_VAR",
        (data::QuestExecType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "QUEST_EXEC_RANDOM_QUEST_VAR");
      *(_DWORD *)(v2 + 880) = 52;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3512),
        (const char (*)[33])"QUEST_EXEC_ACTIVATE_SCANNING_PIC",
        (data::QuestExecType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "QUEST_EXEC_ACTIVATE_SCANNING_PIC");
      *(_DWORD *)(v2 + 896) = 53;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[28],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3552),
        (const char (*)[28])"QUEST_EXEC_RELOAD_SCENE_TAG",
        (data::QuestExecType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "QUEST_EXEC_RELOAD_SCENE_TAG");
      *(_DWORD *)(v2 + 912) = 54;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[39],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3592),
        (const char (*)[39])"QUEST_EXEC_REGISTER_DYNAMIC_GROUP_ONLY",
        (data::QuestExecType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "QUEST_EXEC_REGISTER_DYNAMIC_GROUP_ONLY");
      *(_DWORD *)(v2 + 928) = 55;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3632),
        (const char (*)[30])"QUEST_EXEC_CHANGE_SKILL_DEPOT",
        (data::QuestExecType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "QUEST_EXEC_CHANGE_SKILL_DEPOT");
      *(_DWORD *)(v2 + 944) = 56;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3672),
        (const char (*)[25])"QUEST_EXEC_ADD_SCENE_TAG",
        (data::QuestExecType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "QUEST_EXEC_ADD_SCENE_TAG");
      *(_DWORD *)(v2 + 960) = 57;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3712),
        (const char (*)[25])"QUEST_EXEC_DEL_SCENE_TAG",
        (data::QuestExecType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "QUEST_EXEC_DEL_SCENE_TAG");
      *(_DWORD *)(v2 + 976) = 58;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3752),
        (const char (*)[25])"QUEST_EXEC_INIT_TIME_VAR",
        (data::QuestExecType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "QUEST_EXEC_INIT_TIME_VAR");
      *(_DWORD *)(v2 + 992) = 59;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[26],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3792),
        (const char (*)[26])"QUEST_EXEC_CLEAR_TIME_VAR",
        (data::QuestExecType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "QUEST_EXEC_CLEAR_TIME_VAR");
      *(_DWORD *)(v2 + 1008) = 60;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[31],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3832),
        (const char (*)[31])"QUEST_EXEC_MODIFY_CLIMATE_AREA",
        (data::QuestExecType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "QUEST_EXEC_MODIFY_CLIMATE_AREA");
      *(_DWORD *)(v2 + 1024) = 61;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[44],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3872),
        (const char (*)[44])"QUEST_EXEC_GRANT_TRIAL_AVATAR_AND_LOCK_TEAM",
        (data::QuestExecType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "QUEST_EXEC_GRANT_TRIAL_AVATAR_AND_LOCK_TEAM");
      *(_DWORD *)(v2 + 1040) = 62;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3912),
        (const char (*)[33])"QUEST_EXEC_CHANGE_MAP_AREA_STATE",
        (data::QuestExecType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "QUEST_EXEC_CHANGE_MAP_AREA_STATE");
      *(_DWORD *)(v2 + 1056) = 63;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[32],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3952),
        (const char (*)[32])"QUEST_EXEC_DEACTIVE_ITEM_GIVING",
        (data::QuestExecType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "QUEST_EXEC_DEACTIVE_ITEM_GIVING");
      *(_DWORD *)(v2 + 1072) = 64;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[34],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 3992),
        (const char (*)[34])"QUEST_EXEC_CHANGE_SCENE_LEVEL_TAG",
        (data::QuestExecType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "QUEST_EXEC_CHANGE_SCENE_LEVEL_TAG");
      *(_DWORD *)(v2 + 1088) = 65;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[37],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4032),
        (const char (*)[37])"QUEST_EXEC_UNLOCK_PLAYER_WORLD_SCENE",
        (data::QuestExecType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "QUEST_EXEC_UNLOCK_PLAYER_WORLD_SCENE");
      *(_DWORD *)(v2 + 1104) = 66;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[35],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4072),
        (const char (*)[35])"QUEST_EXEC_LOCK_PLAYER_WORLD_SCENE",
        (data::QuestExecType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "QUEST_EXEC_LOCK_PLAYER_WORLD_SCENE");
      *(_DWORD *)(v2 + 1120) = 67;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[25],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4112),
        (const char (*)[25])"QUEST_EXEC_FAIL_MAINCOOP",
        (data::QuestExecType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "QUEST_EXEC_FAIL_MAINCOOP");
      *(_DWORD *)(v2 + 1136) = 68;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[31],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4152),
        (const char (*)[31])"QUEST_EXEC_MODIFY_WEATHER_AREA",
        (data::QuestExecType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "QUEST_EXEC_MODIFY_WEATHER_AREA");
      *(_DWORD *)(v2 + 1152) = 69;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[43],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4192),
        (const char (*)[43])"QUEST_EXEC_MODIFY_ARANARA_COLLECTION_STATE",
        (data::QuestExecType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "QUEST_EXEC_MODIFY_ARANARA_COLLECTION_STATE");
      *(_DWORD *)(v2 + 1168) = 70;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[50],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4232),
        (const char (*)[50])"QUEST_EXEC_GRANT_TRIAL_AVATAR_BATCH_AND_LOCK_TEAM",
        (data::QuestExecType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "QUEST_EXEC_GRANT_TRIAL_AVATAR_BATCH_AND_LOCK_TEAM");
      *(_DWORD *)(v2 + 1184) = 71;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[48],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4272),
        (const char (*)[48])"QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE",
        (data::QuestExecType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE");
      *(_DWORD *)(v2 + 1200) = 72;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[28],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4312),
        (const char (*)[28])"QUEST_EXEC_HIDE_SCENE_POINT",
        (data::QuestExecType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "QUEST_EXEC_HIDE_SCENE_POINT");
      *(_DWORD *)(v2 + 1216) = 73;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[30],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4352),
        (const char (*)[30])"QUEST_EXEC_UNHIDE_SCENE_POINT",
        (data::QuestExecType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "QUEST_EXEC_UNHIDE_SCENE_POINT");
      *(_DWORD *)(v2 + 1232) = 74;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[56],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4392),
        (const char (*)[56])"QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE_BUILTIN",
        (data::QuestExecType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE_BUILTIN");
      *(_DWORD *)(v2 + 1248) = 75;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[35],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4432),
        (const char (*)[35])"QUEST_EXEC_RANDOM_CLOSED_QUEST_VAR",
        (data::QuestExecType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "QUEST_EXEC_RANDOM_CLOSED_QUEST_VAR");
      *(_DWORD *)(v2 + 1264) = 76;
      std::pair<std::string const,data::QuestExecType>::pair<char const(&)[33],data::QuestExecType,true>(
        (std::pair<const std::string,data::QuestExecType> *const)(v2 + 4472),
        (const char (*)[33])"QUEST_EXEC_OPTIONAL_REVIVAL_TEAM",
        (data::QuestExecType *)(v2 + 1264));
      std::allocator<std::pair<std::string const,data::QuestExecType>>::allocator((std::allocator<std::pair<const std::string,data::QuestExecType> > *const)(v2 + 48));
      std::map<std::string,data::QuestExecType>::map(
        &data::enumStrToVal(std::string const&,data::QuestExecType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestExecType> >)__PAIR128__(76LL, v2 + 1472),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestExecType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestExecType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestExecType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestExecType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestExecType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestExecType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestExecType> *)(v2 + 4512);
            i != (std::pair<const std::string,data::QuestExecType> *)(v2 + 1472);
            std::pair<std::string const,data::QuestExecType>::~pair(i) )
      {
        --i;
      }
      e = (data::QuestExecType *)3040;
      __asan_poison_stack_memory(v2 + 1472, 3040LL);
      *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1280, e);
    *(std::map<std::string,data::QuestExecType>::iterator *)(v2 + 1280) = std::map<std::string,data::QuestExecType>::find(
                                                                            &data::enumStrToVal(std::string const&,data::QuestExecType &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1312, s);
    *(std::map<std::string,data::QuestExecType>::iterator *)(v2 + 1312) = std::map<std::string,data::QuestExecType>::end(&data::enumStrToVal(std::string const&,data::QuestExecType &)::m);
    v7 = (char *)(v2 + 1312);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecType> >::_Self *)(v2 + 1280),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecType> >::_Self *)(v2 + 1312));
    *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2068);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 1408),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestExecType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecType> > *const)(v2 + 1280));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF823C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862767) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451060 - (((_DWORD)v4 + 2147451068) & 0xFFFFFFF8) + 400) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4640LL, v16);
  }
  return v13;
};

// Line 2076: range 0000000011589F68-000000001158A30B
const char *__cdecl data::getDescription(data::QuestExecType e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_EXEC_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case QUEST_EXEC_DEL_PACK_ITEM:
      result = (const char *)&unk_1A7ED740;
      break;
    case QUEST_EXEC_UNLOCK_POINT:
      result = (const char *)&unk_1A7E9640;
      break;
    case QUEST_EXEC_UNLOCK_AREA:
      result = (const char *)&unk_1A7ED780;
      break;
    case QUEST_EXEC_UNLOCK_FORCE:
      result = (const char *)&unk_1A7ED7C0;
      break;
    case QUEST_EXEC_LOCK_FORCE:
      result = (const char *)&unk_1A7ED800;
      break;
    case QUEST_EXEC_CHANGE_AVATAR_ELEMET:
      result = (const char *)&unk_1A7ED840;
      break;
    case QUEST_EXEC_REFRESH_GROUP_MONSTER:
      result = (const char *)&unk_1A7ED880;
      break;
    case QUEST_EXEC_SET_IS_FLYABLE:
      result = (const char *)&unk_1A7ED8C0;
      break;
    case QUEST_EXEC_SET_IS_WEATHER_LOCKED:
      result = (const char *)&unk_1A7ED900;
      break;
    case QUEST_EXEC_SET_IS_GAME_TIME_LOCKED:
      result = (const char *)&unk_1A7ED940;
      break;
    case QUEST_EXEC_SET_IS_TRANSFERABLE:
      result = (const char *)&unk_1A7ED980;
      break;
    case QUEST_EXEC_GRANT_TRIAL_AVATAR:
      result = (const char *)&unk_1A7ED9C0;
      break;
    case QUEST_EXEC_OPEN_BORED:
      result = (const char *)&unk_1A7EDA00;
      break;
    case QUEST_EXEC_ROLLBACK_QUEST:
      result = (const char *)&unk_1A7EDA40;
      break;
    case QUEST_EXEC_NOTIFY_GROUP_LUA:
      result = (const char *)&unk_1A7EDA80;
      break;
    case QUEST_EXEC_SET_OPEN_STATE:
      result = (const char *)&unk_1A7EDAC0;
      break;
    case QUEST_EXEC_LOCK_POINT:
      result = (const char *)&unk_1A7EDB00;
      break;
    case QUEST_EXEC_DEL_PACK_ITEM_BATCH:
      result = (const char *)&unk_1A7EDB40;
      break;
    case QUEST_EXEC_REFRESH_GROUP_SUITE:
      result = (const char *)&unk_1A7EDB80;
      break;
    case QUEST_EXEC_REMOVE_TRIAL_AVATAR:
      result = (const char *)&unk_1A7EDBC0;
      break;
    case QUEST_EXEC_SET_GAME_TIME:
      result = (const char *)&unk_1A7EDC00;
      break;
    case QUEST_EXEC_SET_WEATHER_GADGET:
      result = (const char *)&unk_1A7EDC40;
      break;
    case QUEST_EXEC_ADD_QUEST_PROGRESS:
      result = (const char *)&unk_1A7EDC80;
      break;
    case QUEST_EXEC_NOTIFY_DAILY_TASK:
      result = (const char *)&unk_1A7EDCC0;
      break;
    case QUEST_EXEC_CREATE_PATTERN_GROUP:
      result = (const char *)&unk_1A7EDD00;
      break;
    case QUEST_EXEC_REMOVE_PATTERN_GROUP:
      result = (const char *)&unk_1A7EDD60;
      break;
    case QUEST_EXEC_REFRESH_GROUP_SUITE_RANDOM:
      result = (const char *)&unk_1A7EDDC0;
      break;
    case QUEST_EXEC_ACTIVE_ITEM_GIVING:
      result = (const char *)&unk_1A7EDE20;
      break;
    case QUEST_EXEC_DEL_ALL_SPECIFIC_PACK_ITEM:
      result = (const char *)&unk_1A7EDE60;
      break;
    case QUEST_EXEC_ROLLBACK_PARENT_QUEST:
      result = (const char *)&unk_1A7EDEE0;
      break;
    case QUEST_EXEC_LOCK_AVATAR_TEAM:
      result = (const char *)&unk_1A7EDF60;
      break;
    case QUEST_EXEC_UNLOCK_AVATAR_TEAM:
      result = (const char *)&unk_1A7EDFC0;
      break;
    case QUEST_EXEC_UPDATE_PARENT_QUEST_REWARD_INDEX:
      result = (const char *)&unk_1A7EE000;
      break;
    case QUEST_EXEC_SET_DAILY_TASK_VAR:
      result = (const char *)&unk_1A7EE040;
      break;
    case QUEST_EXEC_INC_DAILY_TASK_VAR:
      result = (const char *)&unk_1A7EE080;
      break;
    case QUEST_EXEC_DEC_DAILY_TASK_VAR:
      result = (const char *)&unk_1A7EE0C0;
      break;
    case QUEST_EXEC_ACTIVE_ACTIVITY_COND_STATE:
      result = (const char *)&unk_1A7EE100;
      break;
    case QUEST_EXEC_INACTIVE_ACTIVITY_COND_STATE:
      result = (const char *)&unk_1A7EE140;
      break;
    case QUEST_EXEC_ADD_CUR_AVATAR_ENERGY:
      result = (const char *)&unk_1A7EE180;
      break;
    case QUEST_EXEC_START_BARGAIN:
      result = (const char *)&unk_1A7EE1E0;
      break;
    case QUEST_EXEC_STOP_BARGAIN:
      result = (const char *)&unk_1A7EE220;
      break;
    case QUEST_EXEC_SET_QUEST_GLOBAL_VAR:
      result = (const char *)&unk_1A7EE260;
      break;
    case QUEST_EXEC_INC_QUEST_GLOBAL_VAR:
      result = (const char *)&unk_1A7EE2A0;
      break;
    case QUEST_EXEC_DEC_QUEST_GLOBAL_VAR:
      result = (const char *)&unk_1A7EE2E0;
      break;
    case QUEST_EXEC_REGISTER_DYNAMIC_GROUP:
      result = (const char *)&unk_1A7EE320;
      break;
    case QUEST_EXEC_UNREGISTER_DYNAMIC_GROUP:
      result = (const char *)&unk_1A7EE360;
      break;
    case QUEST_EXEC_SET_QUEST_VAR:
      result = (const char *)&unk_1A7EE3A0;
      break;
    case QUEST_EXEC_INC_QUEST_VAR:
      result = (const char *)&unk_1A7EE3E0;
      break;
    case QUEST_EXEC_DEC_QUEST_VAR:
      result = (const char *)&unk_1A7EE420;
      break;
    case QUEST_EXEC_RANDOM_QUEST_VAR:
      result = (const char *)&unk_1A7EE460;
      break;
    case QUEST_EXEC_ACTIVATE_SCANNING_PIC:
      result = (const char *)&unk_1A7EE4A0;
      break;
    case QUEST_EXEC_RELOAD_SCENE_TAG:
      result = (const char *)&unk_1A7EE4E0;
      break;
    case QUEST_EXEC_REGISTER_DYNAMIC_GROUP_ONLY:
      result = (const char *)&unk_1A7EE520;
      break;
    case QUEST_EXEC_CHANGE_SKILL_DEPOT:
      result = (const char *)&unk_1A7EE560;
      break;
    case QUEST_EXEC_ADD_SCENE_TAG:
      result = (const char *)&unk_1A7EE5A0;
      break;
    case QUEST_EXEC_DEL_SCENE_TAG:
      result = (const char *)&unk_1A7EE5E0;
      break;
    case QUEST_EXEC_INIT_TIME_VAR:
      result = (const char *)&unk_1A7EE620;
      break;
    case QUEST_EXEC_CLEAR_TIME_VAR:
      result = (const char *)&unk_1A7EE660;
      break;
    case QUEST_EXEC_MODIFY_CLIMATE_AREA:
      result = (const char *)&unk_1A7EE6A0;
      break;
    case QUEST_EXEC_GRANT_TRIAL_AVATAR_AND_LOCK_TEAM:
      result = (const char *)&unk_1A7EE780;
      break;
    case QUEST_EXEC_CHANGE_MAP_AREA_STATE:
      result = (const char *)&unk_1A7EE7E0;
      break;
    case QUEST_EXEC_DEACTIVE_ITEM_GIVING:
      result = (const char *)&unk_1A7EE860;
      break;
    case QUEST_EXEC_CHANGE_SCENE_LEVEL_TAG:
      result = (const char *)&unk_1A7EE8A0;
      break;
    case QUEST_EXEC_UNLOCK_PLAYER_WORLD_SCENE:
      result = (const char *)&unk_1A7EE8E0;
      break;
    case QUEST_EXEC_LOCK_PLAYER_WORLD_SCENE:
      result = (const char *)&unk_1A7EE920;
      break;
    case QUEST_EXEC_FAIL_MAINCOOP:
      result = (const char *)&unk_1A7EE960;
      break;
    case QUEST_EXEC_MODIFY_WEATHER_AREA:
      result = (const char *)&unk_1A7EE9A0;
      break;
    case QUEST_EXEC_MODIFY_ARANARA_COLLECTION_STATE:
      result = (const char *)&unk_1A7EEA60;
      break;
    case QUEST_EXEC_GRANT_TRIAL_AVATAR_BATCH_AND_LOCK_TEAM:
      result = (const char *)&unk_1A7EEAA0;
      break;
    case QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE:
      result = (const char *)&unk_1A7EEB00;
      break;
    case QUEST_EXEC_HIDE_SCENE_POINT:
      result = (const char *)&unk_1A7EEB40;
      break;
    case QUEST_EXEC_UNHIDE_SCENE_POINT:
      result = (const char *)&unk_1A7EEB80;
      break;
    case QUEST_EXEC_REFRESH_WORLD_QUEST_FLOW_GROUP_SUITE_BUILTIN:
      result = (const char *)&unk_1A7EEBC0;
      break;
    case QUEST_EXEC_RANDOM_CLOSED_QUEST_VAR:
      result = (const char *)&unk_1A7EEC20;
      break;
    case QUEST_EXEC_OPTIONAL_REVIVAL_TEAM:
      result = (const char *)&unk_1A7EEC80;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 2237: range 000000001158A30C-000000001158A621
const char *__cdecl data::enumValToStr(data::TalkExecType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::TalkExecType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case TALK_EXEC_NONE:
      result = "TALK_EXEC_NONE";
      break;
    case TALK_EXEC_SET_GADGET_STATE:
      result = "TALK_EXEC_SET_GADGET_STATE";
      break;
    case TALK_EXEC_SET_GAME_TIME:
      result = "TALK_EXEC_SET_GAME_TIME";
      break;
    case TALK_EXEC_NOTIFY_GROUP_LUA:
      result = "TALK_EXEC_NOTIFY_GROUP_LUA";
      break;
    case TALK_EXEC_SET_DAILY_TASK_VAR:
      result = "TALK_EXEC_SET_DAILY_TASK_VAR";
      break;
    case TALK_EXEC_INC_DAILY_TASK_VAR:
      result = "TALK_EXEC_INC_DAILY_TASK_VAR";
      break;
    case TALK_EXEC_DEC_DAILY_TASK_VAR:
      result = "TALK_EXEC_DEC_DAILY_TASK_VAR";
      break;
    case TALK_EXEC_SET_QUEST_VAR:
      result = "TALK_EXEC_SET_QUEST_VAR";
      break;
    case TALK_EXEC_INC_QUEST_VAR:
      result = "TALK_EXEC_INC_QUEST_VAR";
      break;
    case TALK_EXEC_DEC_QUEST_VAR:
      result = "TALK_EXEC_DEC_QUEST_VAR";
      break;
    case TALK_EXEC_SET_QUEST_GLOBAL_VAR:
      result = "TALK_EXEC_SET_QUEST_GLOBAL_VAR";
      break;
    case TALK_EXEC_INC_QUEST_GLOBAL_VAR:
      result = "TALK_EXEC_INC_QUEST_GLOBAL_VAR";
      break;
    case TALK_EXEC_DEC_QUEST_GLOBAL_VAR:
      result = "TALK_EXEC_DEC_QUEST_GLOBAL_VAR";
      break;
    case TALK_EXEC_TRANS_SCENE_DUMMY_POINT:
      result = "TALK_EXEC_TRANS_SCENE_DUMMY_POINT";
      break;
    case TALK_EXEC_SAVE_TALK_ID:
      result = "TALK_EXEC_SAVE_TALK_ID";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2271);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A7E0BE0;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 2277: range 000000001158A622-000000001158B5E5
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkExecType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::TalkExecType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkExecType> >::pointer v10; // rax
  data::TalkExecType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::TalkExecType *ea; // [rsp+10h] [rbp-520h]
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
                        "04 4 9 <unknown> 320 8 7 it:2301 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 600 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2280);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkExecType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkExecType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[15],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 512),
        (const char (*)[15])"TALK_EXEC_NONE",
        (data::TalkExecType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_EXEC_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[27],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 552),
        (const char (*)[27])"TALK_EXEC_SET_GADGET_STATE",
        (data::TalkExecType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TALK_EXEC_SET_GADGET_STATE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[24],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 592),
        (const char (*)[24])"TALK_EXEC_SET_GAME_TIME",
        (data::TalkExecType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "TALK_EXEC_SET_GAME_TIME");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[27],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 632),
        (const char (*)[27])"TALK_EXEC_NOTIFY_GROUP_LUA",
        (data::TalkExecType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "TALK_EXEC_NOTIFY_GROUP_LUA");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[29],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 672),
        (const char (*)[29])"TALK_EXEC_SET_DAILY_TASK_VAR",
        (data::TalkExecType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "TALK_EXEC_SET_DAILY_TASK_VAR");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[29],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 712),
        (const char (*)[29])"TALK_EXEC_INC_DAILY_TASK_VAR",
        (data::TalkExecType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "TALK_EXEC_INC_DAILY_TASK_VAR");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[29],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 752),
        (const char (*)[29])"TALK_EXEC_DEC_DAILY_TASK_VAR",
        (data::TalkExecType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "TALK_EXEC_DEC_DAILY_TASK_VAR");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[24],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 792),
        (const char (*)[24])"TALK_EXEC_SET_QUEST_VAR",
        (data::TalkExecType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "TALK_EXEC_SET_QUEST_VAR");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[24],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 832),
        (const char (*)[24])"TALK_EXEC_INC_QUEST_VAR",
        (data::TalkExecType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "TALK_EXEC_INC_QUEST_VAR");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[24],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 872),
        (const char (*)[24])"TALK_EXEC_DEC_QUEST_VAR",
        (data::TalkExecType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "TALK_EXEC_DEC_QUEST_VAR");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[31],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 912),
        (const char (*)[31])"TALK_EXEC_SET_QUEST_GLOBAL_VAR",
        (data::TalkExecType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "TALK_EXEC_SET_QUEST_GLOBAL_VAR");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[31],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 952),
        (const char (*)[31])"TALK_EXEC_INC_QUEST_GLOBAL_VAR",
        (data::TalkExecType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "TALK_EXEC_INC_QUEST_GLOBAL_VAR");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[31],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 992),
        (const char (*)[31])"TALK_EXEC_DEC_QUEST_GLOBAL_VAR",
        (data::TalkExecType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "TALK_EXEC_DEC_QUEST_GLOBAL_VAR");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[34],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 1032),
        (const char (*)[34])"TALK_EXEC_TRANS_SCENE_DUMMY_POINT",
        (data::TalkExecType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "TALK_EXEC_TRANS_SCENE_DUMMY_POINT");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::TalkExecType>::pair<char const(&)[23],data::TalkExecType,true>(
        (std::pair<const std::string,data::TalkExecType> *const)(v2 + 1072),
        (const char (*)[23])"TALK_EXEC_SAVE_TALK_ID",
        (data::TalkExecType *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::TalkExecType>>::allocator((std::allocator<std::pair<const std::string,data::TalkExecType> > *const)(v2 + 64));
      std::map<std::string,data::TalkExecType>::map(
        &data::enumStrToVal(std::string const&,data::TalkExecType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkExecType> >)__PAIR128__(15LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TalkExecType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkExecType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkExecType>::~map,
        &data::enumStrToVal(std::string const&,data::TalkExecType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkExecType>>::~allocator((std::allocator<std::pair<const std::string,data::TalkExecType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkExecType> *)(v2 + 1112);
            i != (std::pair<const std::string,data::TalkExecType> *)(v2 + 512);
            std::pair<std::string const,data::TalkExecType>::~pair(i) )
      {
        --i;
      }
      e = (data::TalkExecType *)600;
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
    *(std::map<std::string,data::TalkExecType>::iterator *)(v2 + 320) = std::map<std::string,data::TalkExecType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkExecType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::TalkExecType>::iterator *)(v2 + 352) = std::map<std::string,data::TalkExecType>::end(&data::enumStrToVal(std::string const&,data::TalkExecType &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkExecType> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkExecType> >::_Self *)(v2 + 352));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2304);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkExecType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkExecType> > *const)(v2 + 320));
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

// Line 2312: range 000000001158B5E6-000000001158B6AD
const char *__cdecl data::getDescription(data::TalkExecType e)
{
  const char *result; // rax

  switch ( e )
  {
    case TALK_EXEC_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case TALK_EXEC_SET_GADGET_STATE:
      result = (const char *)&unk_1A7EF400;
      break;
    case TALK_EXEC_SET_GAME_TIME:
      result = (const char *)&unk_1A7EDC00;
      break;
    case TALK_EXEC_NOTIFY_GROUP_LUA:
      result = (const char *)&unk_1A7EDA80;
      break;
    case TALK_EXEC_SET_DAILY_TASK_VAR:
      result = (const char *)&unk_1A7EE040;
      break;
    case TALK_EXEC_INC_DAILY_TASK_VAR:
      result = (const char *)&unk_1A7EE080;
      break;
    case TALK_EXEC_DEC_DAILY_TASK_VAR:
      result = (const char *)&unk_1A7EE0C0;
      break;
    case TALK_EXEC_SET_QUEST_VAR:
      result = (const char *)&unk_1A7EE3A0;
      break;
    case TALK_EXEC_INC_QUEST_VAR:
      result = (const char *)&unk_1A7EE3E0;
      break;
    case TALK_EXEC_DEC_QUEST_VAR:
      result = (const char *)&unk_1A7EE420;
      break;
    case TALK_EXEC_SET_QUEST_GLOBAL_VAR:
      result = (const char *)&unk_1A7EE260;
      break;
    case TALK_EXEC_INC_QUEST_GLOBAL_VAR:
      result = (const char *)&unk_1A7EE2A0;
      break;
    case TALK_EXEC_DEC_QUEST_GLOBAL_VAR:
      result = (const char *)&unk_1A7EE2E0;
      break;
    case TALK_EXEC_TRANS_SCENE_DUMMY_POINT:
      result = (const char *)&unk_1A7EF440;
      break;
    case TALK_EXEC_SAVE_TALK_ID:
      result = (const char *)&unk_1A7EF480;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 2351: range 000000001158B6AE-000000001158B92B
const char *__cdecl data::enumValToStr(data::TalkBeginWay e)
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
  if ( e == TALK_BEGIN_MANUAL )
  {
    result = "TALK_BEGIN_MANUAL";
  }
  else
  {
    if ( e > TALK_BEGIN_MANUAL )
      goto LABEL_22;
    if ( e == TALK_BEGIN_NONE )
    {
      result = "TALK_BEGIN_NONE";
      goto LABEL_17;
    }
    if ( e == TALK_BEGIN_AUTO )
    {
      result = "TALK_BEGIN_AUTO";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2361);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 2367: range 000000001158B92C-000000001158C20D
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkBeginWay *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalkBeginWay> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkBeginWay> >::pointer v11; // rax
  data::TalkBeginWay second; // ecx
  char v13; // dl
  data::TalkBeginWay *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:2379 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2370);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TalkBeginWay>::pair<char const(&)[16],data::TalkBeginWay,true>(
        (std::pair<const std::string,data::TalkBeginWay> *const)(v2 + 320),
        (const char (*)[16])"TALK_BEGIN_NONE",
        (data::TalkBeginWay *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_BEGIN_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TalkBeginWay>::pair<char const(&)[16],data::TalkBeginWay,true>(
        (std::pair<const std::string,data::TalkBeginWay> *const)(v2 + 360),
        (const char (*)[16])"TALK_BEGIN_AUTO",
        (data::TalkBeginWay *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TALK_BEGIN_AUTO");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::TalkBeginWay>::pair<char const(&)[18],data::TalkBeginWay,true>(
        (std::pair<const std::string,data::TalkBeginWay> *const)(v2 + 400),
        (const char (*)[18])"TALK_BEGIN_MANUAL",
        (data::TalkBeginWay *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::TalkBeginWay>>::allocator((std::allocator<std::pair<const std::string,data::TalkBeginWay> > *const)(v2 + 64));
      std::map<std::string,data::TalkBeginWay>::map(
        &data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkBeginWay> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TalkBeginWay>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m);
      e = (data::TalkBeginWay *)&data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkBeginWay>::~map,
        &data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkBeginWay>>::~allocator((std::allocator<std::pair<const std::string,data::TalkBeginWay> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkBeginWay> *)(v2 + 440);
            i != (std::pair<const std::string,data::TalkBeginWay> *)(v2 + 320);
            std::pair<std::string const,data::TalkBeginWay>::~pair(i) )
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
    *(std::map<std::string,data::TalkBeginWay>::iterator *)(v2 + 128) = std::map<std::string,data::TalkBeginWay>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::TalkBeginWay>::iterator *)(v2 + 160) = std::map<std::string,data::TalkBeginWay>::end(&data::enumStrToVal(std::string const&,data::TalkBeginWay &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkBeginWay> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkBeginWay> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2382);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkBeginWay>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkBeginWay> > *const)(v2 + 128));
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

// Line 2390: range 000000001158C20E-000000001158C252
const char *__cdecl data::getDescription(data::TalkBeginWay e)
{
  if ( e == TALK_BEGIN_MANUAL )
    return (const char *)&unk_1A7EF6C0;
  if ( e > TALK_BEGIN_MANUAL )
    return "unknown enum value!";
  if ( e == TALK_BEGIN_NONE )
    return (const char *)&unk_1A7E5260;
  if ( e == TALK_BEGIN_AUTO )
    return (const char *)&unk_1A7EF680;
  else
    return "unknown enum value!";
};

// Line 2405: range 000000001158C253-000000001158C4B2
const char *__cdecl data::enumValToStr(data::TalkHeroType e)
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
    if ( e == TALK_HERO_MAIN )
    {
      result = "TALK_HERO_MAIN";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2413);
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
      result = (const char *)&unk_1A7E0BE0;
    }
  }
  else
  {
    result = "TALK_HERO_LOCAL";
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

// Line 2419: range 000000001158C4B3-000000001158CCEA
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkHeroType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalkHeroType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkHeroType> >::pointer v11; // rax
  data::TalkHeroType second; // ecx
  char v13; // dl
  data::TalkHeroType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:2430 144 8 9 <u"
                        "nknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2422);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkHeroType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkHeroType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TalkHeroType>::pair<char const(&)[16],data::TalkHeroType,true>(
        (std::pair<const std::string,data::TalkHeroType> *const)(v2 + 304),
        (const char (*)[16])"TALK_HERO_LOCAL",
        (data::TalkHeroType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_HERO_LOCAL");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TalkHeroType>::pair<char const(&)[15],data::TalkHeroType,true>(
        (std::pair<const std::string,data::TalkHeroType> *const)(v2 + 344),
        (const char (*)[15])"TALK_HERO_MAIN",
        (data::TalkHeroType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::TalkHeroType>>::allocator((std::allocator<std::pair<const std::string,data::TalkHeroType> > *const)(v2 + 64));
      std::map<std::string,data::TalkHeroType>::map(
        &data::enumStrToVal(std::string const&,data::TalkHeroType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkHeroType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TalkHeroType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkHeroType &)::m);
      e = (data::TalkHeroType *)&data::enumStrToVal(std::string const&,data::TalkHeroType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkHeroType>::~map,
        &data::enumStrToVal(std::string const&,data::TalkHeroType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkHeroType>>::~allocator((std::allocator<std::pair<const std::string,data::TalkHeroType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkHeroType> *)(v2 + 384);
            i != (std::pair<const std::string,data::TalkHeroType> *)(v2 + 304);
            std::pair<std::string const,data::TalkHeroType>::~pair(i) )
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
    *(std::map<std::string,data::TalkHeroType>::iterator *)(v2 + 112) = std::map<std::string,data::TalkHeroType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkHeroType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::TalkHeroType>::iterator *)(v2 + 144) = std::map<std::string,data::TalkHeroType>::end(&data::enumStrToVal(std::string const&,data::TalkHeroType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkHeroType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkHeroType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2433);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkHeroType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkHeroType> > *const)(v2 + 112));
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

// Line 2441: range 000000001158CCEB-000000001158CD1A
const char *__cdecl data::getDescription(data::TalkHeroType e)
{
  if ( e == TALK_HERO_LOCAL )
    return (const char *)&unk_1A7EF840;
  if ( e == TALK_HERO_MAIN )
    return (const char *)&unk_1A7EF880;
  return "unknown enum value!";
};

// Line 2454: range 000000001158CD1B-000000001158CFB9
const char *__cdecl data::enumValToStr(data::TalkLoadType e)
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
    case TALK_NORMAL_QUEST:
      result = "TALK_NORMAL_QUEST";
      break;
    case TALK_BLOSSOM:
      result = "TALK_BLOSSOM";
      break;
    case TALK_ACTIVITY:
      result = "TALK_ACTIVITY";
      break;
    case TALK_COOP:
      result = "TALK_COOP";
      break;
    case TALK_GADGET:
      result = "TALK_GADGET";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2468);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 2474: range 000000001158CFBA-000000001158DA24
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkLoadType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalkLoadType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkLoadType> >::pointer v11; // rax
  data::TalkLoadType second; // ecx
  char v13; // dl
  data::TalkLoadType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 7 it:2488 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unkno"
                        "wn> 336 200 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2477);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkLoadType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkLoadType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::TalkLoadType>::pair<char const(&)[18],data::TalkLoadType,true>(
        (std::pair<const std::string,data::TalkLoadType> *const)(v2 + 336),
        (const char (*)[18])"TALK_NORMAL_QUEST",
        (data::TalkLoadType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "TALK_NORMAL_QUEST");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::TalkLoadType>::pair<char const(&)[13],data::TalkLoadType,true>(
        (std::pair<const std::string,data::TalkLoadType> *const)(v2 + 376),
        (const char (*)[13])"TALK_BLOSSOM",
        (data::TalkLoadType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_BLOSSOM");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::TalkLoadType>::pair<char const(&)[14],data::TalkLoadType,true>(
        (std::pair<const std::string,data::TalkLoadType> *const)(v2 + 416),
        (const char (*)[14])"TALK_ACTIVITY",
        (data::TalkLoadType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TALK_ACTIVITY");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::TalkLoadType>::pair<char const(&)[10],data::TalkLoadType,true>(
        (std::pair<const std::string,data::TalkLoadType> *const)(v2 + 456),
        (const char (*)[10])"TALK_COOP",
        (data::TalkLoadType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "TALK_COOP");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::TalkLoadType>::pair<char const(&)[12],data::TalkLoadType,true>(
        (std::pair<const std::string,data::TalkLoadType> *const)(v2 + 496),
        (const char (*)[12])"TALK_GADGET",
        (data::TalkLoadType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::TalkLoadType>>::allocator((std::allocator<std::pair<const std::string,data::TalkLoadType> > *const)(v2 + 48));
      std::map<std::string,data::TalkLoadType>::map(
        &data::enumStrToVal(std::string const&,data::TalkLoadType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkLoadType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::TalkLoadType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkLoadType &)::m);
      e = (data::TalkLoadType *)&data::enumStrToVal(std::string const&,data::TalkLoadType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkLoadType>::~map,
        &data::enumStrToVal(std::string const&,data::TalkLoadType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkLoadType>>::~allocator((std::allocator<std::pair<const std::string,data::TalkLoadType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkLoadType> *)(v2 + 536);
            i != (std::pair<const std::string,data::TalkLoadType> *)(v2 + 336);
            std::pair<std::string const,data::TalkLoadType>::~pair(i) )
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
    *(std::map<std::string,data::TalkLoadType>::iterator *)(v2 + 144) = std::map<std::string,data::TalkLoadType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkLoadType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::TalkLoadType>::iterator *)(v2 + 176) = std::map<std::string,data::TalkLoadType>::end(&data::enumStrToVal(std::string const&,data::TalkLoadType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkLoadType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkLoadType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2491);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkLoadType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkLoadType> > *const)(v2 + 144));
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

// Line 2499: range 000000001158DA25-000000001158DA8A
const char *__cdecl data::getDescription(data::TalkLoadType e)
{
  const char *result; // rax

  switch ( e )
  {
    case TALK_NORMAL_QUEST:
      result = (const char *)&unk_1A7EFB00;
      break;
    case TALK_BLOSSOM:
      result = (const char *)&unk_1A7EFB40;
      break;
    case TALK_ACTIVITY:
      result = (const char *)&unk_1A7EFB80;
      break;
    case TALK_COOP:
      result = (const char *)&unk_1A7EFBC0;
      break;
    case TALK_GADGET:
      result = (const char *)&unk_1A7EFC00;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 2518: range 000000001158DA8B-000000001158DD69
const char *__cdecl data::enumValToStr(data::TalkRoleType e)
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
    case TALK_ROLE_NONE:
      result = "TALK_ROLE_NONE";
      break;
    case TALK_ROLE_NPC:
      result = "TALK_ROLE_NPC";
      break;
    case TALK_ROLE_PLAYER:
      result = "TALK_ROLE_PLAYER";
      break;
    case TALK_ROLE_MATE_AVATAR:
      result = "TALK_ROLE_MATE_AVATAR";
      break;
    case TALK_ROLE_GADGET:
      result = "TALK_ROLE_GADGET";
      break;
    case TALK_ROLE_BLACK_SCREEN:
      result = "TALK_ROLE_BLACK_SCREEN";
      break;
    case TALK_ROLE_NEED_CLICK_BLACK_SCREEN:
      result = "TALK_ROLE_NEED_CLICK_BLACK_SCREEN";
      break;
    case TALK_ROLE_AVATAR_NPC:
      result = "TALK_ROLE_AVATAR_NPC";
      break;
    case TALK_ROLE_CONSEQUENT_BLACK_SCREEN:
      result = "TALK_ROLE_CONSEQUENT_BLACK_SCREEN";
      break;
    case TALK_ROLE_CONSEQUENT_NEED_CLICK_BLACK_SCREEN:
      result = "TALK_ROLE_CONSEQUENT_NEED_CLICK_BLACK_SCREEN";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2542);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 2548: range 000000001158DD6A-000000001158EA76
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkRoleType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalkRoleType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkRoleType> >::pointer v10; // rax
  data::TalkRoleType second; // ecx
  char v12; // dl
  data::TalkRoleType *ea; // [rsp+10h] [rbp-3C0h]
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
                        "own> 224 4 9 <unknown> 240 8 7 it:2567 272 8 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 4"
                        "32 400 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2551);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 304),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkRoleType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkRoleType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[15],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 432),
        (const char (*)[15])"TALK_ROLE_NONE",
        (data::TalkRoleType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_ROLE_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[14],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 472),
        (const char (*)[14])"TALK_ROLE_NPC",
        (data::TalkRoleType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TALK_ROLE_NPC");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[17],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 512),
        (const char (*)[17])"TALK_ROLE_PLAYER",
        (data::TalkRoleType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "TALK_ROLE_PLAYER");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[22],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 552),
        (const char (*)[22])"TALK_ROLE_MATE_AVATAR",
        (data::TalkRoleType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "TALK_ROLE_MATE_AVATAR");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[17],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 592),
        (const char (*)[17])"TALK_ROLE_GADGET",
        (data::TalkRoleType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "TALK_ROLE_GADGET");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[23],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 632),
        (const char (*)[23])"TALK_ROLE_BLACK_SCREEN",
        (data::TalkRoleType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "TALK_ROLE_BLACK_SCREEN");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[34],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 672),
        (const char (*)[34])"TALK_ROLE_NEED_CLICK_BLACK_SCREEN",
        (data::TalkRoleType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "TALK_ROLE_NEED_CLICK_BLACK_SCREEN");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[21],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 712),
        (const char (*)[21])"TALK_ROLE_AVATAR_NPC",
        (data::TalkRoleType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "TALK_ROLE_AVATAR_NPC");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[34],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 752),
        (const char (*)[34])"TALK_ROLE_CONSEQUENT_BLACK_SCREEN",
        (data::TalkRoleType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "TALK_ROLE_CONSEQUENT_BLACK_SCREEN");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::TalkRoleType>::pair<char const(&)[45],data::TalkRoleType,true>(
        (std::pair<const std::string,data::TalkRoleType> *const)(v2 + 792),
        (const char (*)[45])"TALK_ROLE_CONSEQUENT_NEED_CLICK_BLACK_SCREEN",
        (data::TalkRoleType *)(v2 + 224));
      std::allocator<std::pair<std::string const,data::TalkRoleType>>::allocator((std::allocator<std::pair<const std::string,data::TalkRoleType> > *const)(v2 + 64));
      std::map<std::string,data::TalkRoleType>::map(
        &data::enumStrToVal(std::string const&,data::TalkRoleType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkRoleType> >)__PAIR128__(10LL, v2 + 432),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TalkRoleType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkRoleType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkRoleType>::~map,
        &data::enumStrToVal(std::string const&,data::TalkRoleType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkRoleType>>::~allocator((std::allocator<std::pair<const std::string,data::TalkRoleType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkRoleType> *)(v2 + 832);
            i != (std::pair<const std::string,data::TalkRoleType> *)(v2 + 432);
            std::pair<std::string const,data::TalkRoleType>::~pair(i) )
      {
        --i;
      }
      e = (data::TalkRoleType *)400;
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
    *(std::map<std::string,data::TalkRoleType>::iterator *)(v2 + 240) = std::map<std::string,data::TalkRoleType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkRoleType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, s);
    *(std::map<std::string,data::TalkRoleType>::iterator *)(v2 + 272) = std::map<std::string,data::TalkRoleType>::end(&data::enumStrToVal(std::string const&,data::TalkRoleType &)::m);
    v7 = (char *)(v2 + 272);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkRoleType> >::_Self *)(v2 + 240),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkRoleType> >::_Self *)(v2 + 272));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2570);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 368),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkRoleType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkRoleType> > *const)(v2 + 240));
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

// Line 2578: range 000000001158EA77-000000001158EB09
const char *__cdecl data::getDescription(data::TalkRoleType e)
{
  const char *result; // rax

  switch ( e )
  {
    case TALK_ROLE_NONE:
      result = (const char *)&unk_1A7E5260;
      break;
    case TALK_ROLE_NPC:
      result = (const char *)&off_1A7EA8A0;
      break;
    case TALK_ROLE_PLAYER:
      result = (const char *)&unk_1A7F00A0;
      break;
    case TALK_ROLE_MATE_AVATAR:
      result = (const char *)&unk_1A7F00E0;
      break;
    case TALK_ROLE_GADGET:
      result = (const char *)&unk_1A7F0140;
      break;
    case TALK_ROLE_BLACK_SCREEN:
      result = (const char *)&unk_1A7F0180;
      break;
    case TALK_ROLE_NEED_CLICK_BLACK_SCREEN:
      result = (const char *)&unk_1A7F01C0;
      break;
    case TALK_ROLE_AVATAR_NPC:
      result = (const char *)&unk_1A7F0200;
      break;
    case TALK_ROLE_CONSEQUENT_BLACK_SCREEN:
      result = (const char *)&unk_1A7F0240;
      break;
    case TALK_ROLE_CONSEQUENT_NEED_CLICK_BLACK_SCREEN:
      result = (const char *)&unk_1A7F0280;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 2607: range 000000001158EB0A-000000001158ED69
const char *__cdecl data::enumValToStr(data::TalkShowType e)
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
    if ( e == TALK_SHOW_FORCE_SELECT )
    {
      result = "TALK_SHOW_FORCE_SELECT";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2615);
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
      result = (const char *)&unk_1A7E0BE0;
    }
  }
  else
  {
    result = "TALK_SHOW_DEFAULT";
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

// Line 2621: range 000000001158ED6A-000000001158F5A1
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkShowType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalkShowType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkShowType> >::pointer v11; // rax
  data::TalkShowType second; // ecx
  char v13; // dl
  data::TalkShowType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:2632 144 8 9 <u"
                        "nknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2624);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkShowType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkShowType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TalkShowType>::pair<char const(&)[18],data::TalkShowType,true>(
        (std::pair<const std::string,data::TalkShowType> *const)(v2 + 304),
        (const char (*)[18])"TALK_SHOW_DEFAULT",
        (data::TalkShowType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_SHOW_DEFAULT");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TalkShowType>::pair<char const(&)[23],data::TalkShowType,true>(
        (std::pair<const std::string,data::TalkShowType> *const)(v2 + 344),
        (const char (*)[23])"TALK_SHOW_FORCE_SELECT",
        (data::TalkShowType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::TalkShowType>>::allocator((std::allocator<std::pair<const std::string,data::TalkShowType> > *const)(v2 + 64));
      std::map<std::string,data::TalkShowType>::map(
        &data::enumStrToVal(std::string const&,data::TalkShowType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkShowType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TalkShowType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkShowType &)::m);
      e = (data::TalkShowType *)&data::enumStrToVal(std::string const&,data::TalkShowType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkShowType>::~map,
        &data::enumStrToVal(std::string const&,data::TalkShowType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkShowType>>::~allocator((std::allocator<std::pair<const std::string,data::TalkShowType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkShowType> *)(v2 + 384);
            i != (std::pair<const std::string,data::TalkShowType> *)(v2 + 304);
            std::pair<std::string const,data::TalkShowType>::~pair(i) )
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
    *(std::map<std::string,data::TalkShowType>::iterator *)(v2 + 112) = std::map<std::string,data::TalkShowType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkShowType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::TalkShowType>::iterator *)(v2 + 144) = std::map<std::string,data::TalkShowType>::end(&data::enumStrToVal(std::string const&,data::TalkShowType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkShowType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkShowType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2635);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkShowType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkShowType> > *const)(v2 + 112));
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

// Line 2643: range 000000001158F5A2-000000001158F5D1
const char *__cdecl data::getDescription(data::TalkShowType e)
{
  if ( e == TALK_SHOW_DEFAULT )
    return (const char *)&unk_1A7F0440;
  if ( e == TALK_SHOW_FORCE_SELECT )
    return (const char *)&unk_1A7F04A0;
  return "unknown enum value!";
};

// Line 2656: range 000000001158F5D2-000000001158F84F
const char *__cdecl data::enumValToStr(data::TalkMarkType e)
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
  if ( e == TALK_MARK_HIDE )
  {
    result = "TALK_MARK_HIDE";
  }
  else
  {
    if ( e > TALK_MARK_HIDE )
      goto LABEL_22;
    if ( e == TALK_MARK_NONE )
    {
      result = "TALK_MARK_NONE";
      goto LABEL_17;
    }
    if ( e == TALK_MARK_COMMON )
    {
      result = "TALK_MARK_COMMON";
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumValToStr",
        2666);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 2672: range 000000001158F850-0000000011590131
bool __cdecl data::enumStrToVal(const std::string *s, data::TalkMarkType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TalkMarkType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TalkMarkType> >::pointer v11; // rax
  data::TalkMarkType second; // ecx
  char v13; // dl
  data::TalkMarkType *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:2684 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2675);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TalkMarkType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkMarkType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TalkMarkType>::pair<char const(&)[15],data::TalkMarkType,true>(
        (std::pair<const std::string,data::TalkMarkType> *const)(v2 + 320),
        (const char (*)[15])"TALK_MARK_NONE",
        (data::TalkMarkType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TALK_MARK_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TalkMarkType>::pair<char const(&)[17],data::TalkMarkType,true>(
        (std::pair<const std::string,data::TalkMarkType> *const)(v2 + 360),
        (const char (*)[17])"TALK_MARK_COMMON",
        (data::TalkMarkType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TALK_MARK_COMMON");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::TalkMarkType>::pair<char const(&)[15],data::TalkMarkType,true>(
        (std::pair<const std::string,data::TalkMarkType> *const)(v2 + 400),
        (const char (*)[15])"TALK_MARK_HIDE",
        (data::TalkMarkType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::TalkMarkType>>::allocator((std::allocator<std::pair<const std::string,data::TalkMarkType> > *const)(v2 + 64));
      std::map<std::string,data::TalkMarkType>::map(
        &data::enumStrToVal(std::string const&,data::TalkMarkType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalkMarkType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TalkMarkType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TalkMarkType &)::m);
      e = (data::TalkMarkType *)&data::enumStrToVal(std::string const&,data::TalkMarkType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TalkMarkType>::~map,
        &data::enumStrToVal(std::string const&,data::TalkMarkType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalkMarkType>>::~allocator((std::allocator<std::pair<const std::string,data::TalkMarkType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalkMarkType> *)(v2 + 440);
            i != (std::pair<const std::string,data::TalkMarkType> *)(v2 + 320);
            std::pair<std::string const,data::TalkMarkType>::~pair(i) )
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
    *(std::map<std::string,data::TalkMarkType>::iterator *)(v2 + 128) = std::map<std::string,data::TalkMarkType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::TalkMarkType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::TalkMarkType>::iterator *)(v2 + 160) = std::map<std::string,data::TalkMarkType>::end(&data::enumStrToVal(std::string const&,data::TalkMarkType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkMarkType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkMarkType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2687);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::TalkMarkType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TalkMarkType> > *const)(v2 + 128));
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

// Line 2695: range 0000000011590132-0000000011590176
const char *__cdecl data::getDescription(data::TalkMarkType e)
{
  if ( e == TALK_MARK_HIDE )
    return (const char *)&unk_1A7F06E0;
  if ( e > TALK_MARK_HIDE )
    return "unknown enum value!";
  if ( e == TALK_MARK_NONE )
    return (const char *)&off_1A7F0660;
  if ( e == TALK_MARK_COMMON )
    return (const char *)&unk_1A7F06A0;
  else
    return "unknown enum value!";
};

// Line 2710: range 0000000011590177-00000000115903FC
const char *__cdecl data::enumValToStr(data::RandomQuestFilterType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::RandomQuestFilterType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
  if ( e == RQ_FILTER_PLAYER_LEVEL )
  {
    result = "RQ_FILTER_PLAYER_LEVEL";
  }
  else
  {
    if ( e <= RQ_FILTER_PLAYER_LEVEL )
    {
      switch ( e )
      {
        case RQ_FILTER_NPC:
          result = "RQ_FILTER_NPC";
          goto LABEL_19;
        case RQ_FILTER_NONE:
          result = "RQ_FILTER_NONE";
          goto LABEL_19;
        case RQ_FILTER_PLAYER_POS_RING:
          result = "RQ_FILTER_PLAYER_POS_RING";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumValToStr",
      2722);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = e;
    v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      v6 = (common::milog::MiLogStream *)(v1 + 48);
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = v7;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = (const char *)&unk_1A7E0BE0;
  }
LABEL_19:
  if ( v10 == (char *)v1 )
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

// Line 2728: range 00000000115903FD-0000000011590D81
bool __cdecl data::enumStrToVal(const std::string *s, data::RandomQuestFilterType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::RandomQuestFilterType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::RandomQuestFilterType> >::pointer v11; // rax
  data::RandomQuestFilterType second; // ecx
  char v13; // dl
  data::RandomQuestFilterType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:2741 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2731);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::RandomQuestFilterType>::pair<char const(&)[15],data::RandomQuestFilterType,true>(
        (std::pair<const std::string,data::RandomQuestFilterType> *const)(v2 + 320),
        (const char (*)[15])"RQ_FILTER_NONE",
        (data::RandomQuestFilterType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "RQ_FILTER_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::RandomQuestFilterType>::pair<char const(&)[26],data::RandomQuestFilterType,true>(
        (std::pair<const std::string,data::RandomQuestFilterType> *const)(v2 + 360),
        (const char (*)[26])"RQ_FILTER_PLAYER_POS_RING",
        (data::RandomQuestFilterType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "RQ_FILTER_PLAYER_POS_RING");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::RandomQuestFilterType>::pair<char const(&)[14],data::RandomQuestFilterType,true>(
        (std::pair<const std::string,data::RandomQuestFilterType> *const)(v2 + 400),
        (const char (*)[14])"RQ_FILTER_NPC",
        (data::RandomQuestFilterType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "RQ_FILTER_NPC");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::RandomQuestFilterType>::pair<char const(&)[23],data::RandomQuestFilterType,true>(
        (std::pair<const std::string,data::RandomQuestFilterType> *const)(v2 + 440),
        (const char (*)[23])"RQ_FILTER_PLAYER_LEVEL",
        (data::RandomQuestFilterType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::RandomQuestFilterType>>::allocator((std::allocator<std::pair<const std::string,data::RandomQuestFilterType> > *const)(v2 + 48));
      std::map<std::string,data::RandomQuestFilterType>::map(
        &data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RandomQuestFilterType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::RandomQuestFilterType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m);
      e = (data::RandomQuestFilterType *)&data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::RandomQuestFilterType>::~map,
        &data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RandomQuestFilterType>>::~allocator((std::allocator<std::pair<const std::string,data::RandomQuestFilterType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RandomQuestFilterType> *)(v2 + 480);
            i != (std::pair<const std::string,data::RandomQuestFilterType> *)(v2 + 320);
            std::pair<std::string const,data::RandomQuestFilterType>::~pair(i) )
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
    *(std::map<std::string,data::RandomQuestFilterType>::iterator *)(v2 + 128) = std::map<std::string,data::RandomQuestFilterType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::RandomQuestFilterType>::iterator *)(v2 + 160) = std::map<std::string,data::RandomQuestFilterType>::end(&data::enumStrToVal(std::string const&,data::RandomQuestFilterType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::RandomQuestFilterType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::RandomQuestFilterType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2744);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::RandomQuestFilterType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::RandomQuestFilterType> > *const)(v2 + 128));
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

// Line 2752: range 0000000011590D82-0000000011590DD7
const char *__cdecl data::getDescription(data::RandomQuestFilterType e)
{
  if ( e == RQ_FILTER_PLAYER_LEVEL )
    return (const char *)&unk_1A7F09C0;
  if ( e <= RQ_FILTER_PLAYER_LEVEL )
  {
    switch ( e )
    {
      case RQ_FILTER_NPC:
        return (const char *)&unk_1A7F0960;
      case RQ_FILTER_NONE:
        return (const char *)&off_1A7F0660;
      case RQ_FILTER_PLAYER_POS_RING:
        return (const char *)&unk_1A7F0900;
    }
  }
  return "unknown enum value!";
};

// Line 2769: range 0000000011590DD8-000000001159105D
const char *__cdecl data::enumValToStr(data::QuestExecOptionalRevivalTeamParamType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::QuestExecOptionalRevivalTeamParamType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
  if ( e == OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP_AND_ENERGY )
  {
    result = "OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP_AND_ENERGY";
  }
  else
  {
    if ( e <= OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP_AND_ENERGY )
    {
      switch ( e )
      {
        case OPTIONAL_REVIVAL_TEAM_TYPE_FULL_ENERGY:
          result = "OPTIONAL_REVIVAL_TEAM_TYPE_FULL_ENERGY";
          goto LABEL_19;
        case OPTIONAL_REVIVAL_TEAM_TYPE_NONE:
          result = "OPTIONAL_REVIVAL_TEAM_TYPE_NONE";
          goto LABEL_19;
        case OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP:
          result = "OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumValToStr",
      2781);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = e;
    v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      v6 = (common::milog::MiLogStream *)(v1 + 48);
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = v7;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = (const char *)&unk_1A7E0BE0;
  }
LABEL_19:
  if ( v10 == (char *)v1 )
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

// Line 2787: range 000000001159105E-00000000115919E2
bool __cdecl data::enumStrToVal(const std::string *s, data::QuestExecOptionalRevivalTeamParamType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> >::pointer v11; // rax
  data::QuestExecOptionalRevivalTeamParamType second; // ecx
  char v13; // dl
  data::QuestExecOptionalRevivalTeamParamType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:2800 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
      "enumStrToVal",
      2790);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>::pair<char const(&)[32],data::QuestExecOptionalRevivalTeamParamType,true>(
        (std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *const)(v2 + 320),
        (const char (*)[32])"OPTIONAL_REVIVAL_TEAM_TYPE_NONE",
        (data::QuestExecOptionalRevivalTeamParamType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "OPTIONAL_REVIVAL_TEAM_TYPE_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>::pair<char const(&)[35],data::QuestExecOptionalRevivalTeamParamType,true>(
        (std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *const)(v2 + 360),
        (const char (*)[35])"OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP",
        (data::QuestExecOptionalRevivalTeamParamType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>::pair<char const(&)[39],data::QuestExecOptionalRevivalTeamParamType,true>(
        (std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *const)(v2 + 400),
        (const char (*)[39])"OPTIONAL_REVIVAL_TEAM_TYPE_FULL_ENERGY",
        (data::QuestExecOptionalRevivalTeamParamType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "OPTIONAL_REVIVAL_TEAM_TYPE_FULL_ENERGY");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>::pair<char const(&)[46],data::QuestExecOptionalRevivalTeamParamType,true>(
        (std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *const)(v2 + 440),
        (const char (*)[46])"OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP_AND_ENERGY",
        (data::QuestExecOptionalRevivalTeamParamType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>>::allocator((std::allocator<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> > *const)(v2 + 48));
      std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::map(
        &data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m);
      e = (data::QuestExecOptionalRevivalTeamParamType *)&data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::~map,
        &data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>>::~allocator((std::allocator<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *)(v2 + 480);
            i != (std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> *)(v2 + 320);
            std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>::~pair(i) )
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
    *(std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::iterator *)(v2 + 128) = std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::find(
                                                                                                   &data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m,
                                                                                                   s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::iterator *)(v2 + 160) = std::map<std::string,data::QuestExecOptionalRevivalTeamParamType>::end(&data::enumStrToVal(std::string const&,data::QuestExecOptionalRevivalTeamParamType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigQuestType.cpp",
        "enumStrToVal",
        2803);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QuestExecOptionalRevivalTeamParamType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QuestExecOptionalRevivalTeamParamType> > *const)(v2 + 128));
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

// Line 2811: range 00000000115919E3-0000000011591A38
const char *__cdecl data::getDescription(data::QuestExecOptionalRevivalTeamParamType e)
{
  if ( e == OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP_AND_ENERGY )
    return (const char *)&unk_1A7F0D40;
  if ( e <= OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP_AND_ENERGY )
  {
    switch ( e )
    {
      case OPTIONAL_REVIVAL_TEAM_TYPE_FULL_ENERGY:
        return (const char *)&unk_1A7F0D00;
      case OPTIONAL_REVIVAL_TEAM_TYPE_NONE:
        return (const char *)&unk_1A7F0C80;
      case OPTIONAL_REVIVAL_TEAM_TYPE_FULL_HP:
        return (const char *)&unk_1A7F0CC0;
    }
  }
  return "unknown enum value!";
};
