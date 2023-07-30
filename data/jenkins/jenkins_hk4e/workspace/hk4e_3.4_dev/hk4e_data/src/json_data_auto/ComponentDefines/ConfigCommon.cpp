// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigCommon.cpp

// Line 19: range 000000000E562607-000000000E562884
const char *__cdecl data::enumValToStr(data::ParticleShapeType e)
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
  if ( e == Shell )
  {
    result = "Shell";
  }
  else
  {
    if ( e > Shell )
      goto LABEL_22;
    if ( e == Volume )
    {
      result = "Volume";
      goto LABEL_17;
    }
    if ( e == Edge )
    {
      result = "Edge";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumValToStr",
        29);
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
      result = (const char *)&unk_1A36E8A0;
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

// Line 35: range 000000000E562885-000000000E563166
bool __cdecl data::enumStrToVal(const std::string *s, data::ParticleShapeType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ParticleShapeType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ParticleShapeType> >::pointer v11; // rax
  data::ParticleShapeType second; // ecx
  char v13; // dl
  data::ParticleShapeType *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 5"
                        " it:47 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "enumStrToVal",
      38);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ParticleShapeType>::pair<char const(&)[7],data::ParticleShapeType,true>(
        (std::pair<const std::string,data::ParticleShapeType> *const)(v2 + 320),
        (const char (*)[7])"Volume",
        (data::ParticleShapeType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Volume");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ParticleShapeType>::pair<char const(&)[5],data::ParticleShapeType,true>(
        (std::pair<const std::string,data::ParticleShapeType> *const)(v2 + 360),
        (const char (*)[5])"Edge",
        (data::ParticleShapeType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Edge");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ParticleShapeType>::pair<char const(&)[6],data::ParticleShapeType,true>(
        (std::pair<const std::string,data::ParticleShapeType> *const)(v2 + 400),
        (const char (*)[6])"Shell",
        (data::ParticleShapeType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::ParticleShapeType>>::allocator((std::allocator<std::pair<const std::string,data::ParticleShapeType> > *const)(v2 + 64));
      std::map<std::string,data::ParticleShapeType>::map(
        &data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ParticleShapeType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ParticleShapeType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m);
      e = (data::ParticleShapeType *)&data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ParticleShapeType>::~map,
        &data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ParticleShapeType>>::~allocator((std::allocator<std::pair<const std::string,data::ParticleShapeType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ParticleShapeType> *)(v2 + 440);
            i != (std::pair<const std::string,data::ParticleShapeType> *)(v2 + 320);
            std::pair<std::string const,data::ParticleShapeType>::~pair(i) )
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
    *(std::map<std::string,data::ParticleShapeType>::iterator *)(v2 + 128) = std::map<std::string,data::ParticleShapeType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::ParticleShapeType>::iterator *)(v2 + 160) = std::map<std::string,data::ParticleShapeType>::end(&data::enumStrToVal(std::string const&,data::ParticleShapeType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ParticleShapeType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ParticleShapeType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumStrToVal",
        50);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ParticleShapeType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ParticleShapeType> > *const)(v2 + 128));
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

// Line 58: range 000000000E563167-000000000E5631AB
const char *__cdecl data::getDescription(data::ParticleShapeType e)
{
  if ( e == Shell )
    return (const char *)&unk_1A36E8A0;
  if ( e > Shell )
    return "unknown enum value!";
  if ( e == Volume )
    return (const char *)&unk_1A36E8A0;
  if ( e == Edge )
    return (const char *)&unk_1A36E8A0;
  else
    return "unknown enum value!";
};

// Line 74: range 000000000E5631AC-000000000E5633E1
data::ConfigEffectAttachShapePtr __cdecl data::createConfigEffectAttachShape(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigEffectAttachShapePtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > >::_Base_ptr)"2 32 8 5 it:75 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > >::_Base_ptr)data::createConfigEffectAttachShape;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::find(
                    &data::g_ConfigEffectAttachShapeMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::end(&data::g_ConfigEffectAttachShapeMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigEffectAttachShape>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(
      (std::shared_ptr<data::ConfigEffectAttachShape> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigEffectAttachShape> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 81: range 000000000E5633E2-000000000E5633F0
void __cdecl data::ConfigEffectAttachShape::foreachMember(
        data::ConfigEffectAttachShape *const this,
        std::function<void(std::any&)> *p_func)
{
  ;
};

// Line 85: range 000000000E5633F2-000000000E56343C
std::shared_ptr<data::ConfigEffectAttachShape> __cdecl data::ConfigEffectAttachShape::clone(
        data::ConfigEffectAttachShape *const this)
{
  data::ConfigEffectAttachShape *v1; // rsi
  std::shared_ptr<data::ConfigEffectAttachShape> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachShape,data::ConfigEffectAttachShape&>(
    (common::tools::perf::allocator<data::ConfigEffectAttachShape,data::ConfigEffectAttachShape> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 89: range 000000000E56343E-000000000E56348F
bool __cdecl data::ConfigEffectAttachShape::fromJson(
        data::ConfigEffectAttachShape *const this,
        const Json::Value *jval)
{
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
  this->is_json_loaded = 1;
  return 1;
};

// Line 94: range 000000000E563490-000000000E563DE5
data::ConfigEffectAttachShapePtr __cdecl data::ConfigEffectAttachShape::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigEffectAttachShapePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v14[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:107 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:101 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachShape::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        104);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[51])"fromJson for: ConfigEffectAttachShape $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(
        (std::shared_ptr<data::ConfigEffectAttachShape> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigEffectAttachShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigEffectAttachShape>(
             (const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          110);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[49])"create ConfigEffectAttachShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(
          (std::shared_ptr<data::ConfigEffectAttachShape> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            115);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(
            (std::shared_ptr<data::ConfigEffectAttachShape> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 24, v1, v12);
          *(_BYTE *)(v10 + 24) = 1;
          std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(
            (std::shared_ptr<data::ConfigEffectAttachShape> *const)jval,
            (std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachShape> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      98);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[56])"jsonValueFind for: ConfigEffectAttachShape $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(
      (std::shared_ptr<data::ConfigEffectAttachShape> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 123: range 000000000E563DE6-000000000E563DF9
int32_t __cdecl data::ConfigEffectAttachShape::getHashValue(const data::ConfigEffectAttachShape *const this)
{
  return 0;
};

// Line 132: range 000000000E6CA296-000000000E6CA4D7
void __cdecl data::ConfigEffectAttachBoxRegister::ConfigEffectAttachBoxRegister(
        data::ConfigEffectAttachBoxRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigEffectAttachShape> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachBoxRegister::ConfigEffectAttachBoxRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachBox>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigEffectAttachBox",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::operator[](
         &data::g_ConfigEffectAttachShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigEffectAttachShape>::operator=<data::ConfigEffectAttachBox>(
    v4,
    (std::shared_ptr<data::ConfigEffectAttachBox> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigEffectAttachBox>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachBox> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 135: range 000000000E563DFA-000000000E56416B
void __cdecl data::ConfigEffectAttachBox::foreachMember(
        data::ConfigEffectAttachBox *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 17 emit_from_any:137 64 16 15 scale_x_any:139 96 16 15 scale_y_any:141 128 16 15 scale_z"
                        "_any:143 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachBox::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 160), p_func);
  data::ConfigEffectAttachShape::foreachMember(
    (data::ConfigEffectAttachShape *const)this,
    (std::function<void(std::any&)> *)(v2 + 160));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::ParticleShapeType &,data::ParticleShapeType,std::any::_Manager_internal<data::ParticleShapeType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->emit_from);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->scale_x);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 96), &this->scale_y);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 128), &this->scale_z);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 148: range 000000000E56416C-000000000E56427C
std::shared_ptr<data::ConfigEffectAttachShape> __cdecl data::ConfigEffectAttachBox::clone(
        data::ConfigEffectAttachBox *const this)
{
  data::ConfigEffectAttachBox *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigEffectAttachShape> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachBox::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachBox,data::ConfigEffectAttachBox&>(
    (common::tools::perf::allocator<data::ConfigEffectAttachBox,data::ConfigEffectAttachBox> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr<data::ConfigEffectAttachBox,void>(
    (std::shared_ptr<data::ConfigEffectAttachShape> *const)this,
    (std::shared_ptr<data::ConfigEffectAttachBox> *)(v2 + 32));
  std::shared_ptr<data::ConfigEffectAttachBox>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachBox> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 152: range 000000000E56427E-000000000E5642C1
data::ConfigEffectAttachBoxPtr __cdecl data::ConfigEffectAttachBoxFactory::create(
        data::ConfigEffectAttachBoxFactory *const this)
{
  data::ConfigEffectAttachBoxPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigEffectAttachBox>();
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachBox,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 154: range 000000000E5642C2-000000000E565010
bool __cdecl data::ConfigEffectAttachBox::fromJson(data::ConfigEffectAttachBox *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  float *p_scale_z; // rsi
  Json::Value *emit_from_ptr; // [rsp+10h] [rbp-330h]
  const Json::Value *scale_x_ptr; // [rsp+18h] [rbp-328h]
  const Json::Value *scale_y_ptr; // [rsp+20h] [rbp-320h]
  const Json::Value *scale_z_ptr; // [rsp+28h] [rbp-318h]
  char v13[784]; // [rsp+30h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v13;
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
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachBox::fromJson;
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
  if ( !data::ConfigEffectAttachShape::fromJson((data::ConfigEffectAttachShape *const)this, jval) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      157);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[45])"fromJson for: ConfigEffectAttachShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "emitFrom",
      (const std::allocator<char> *)(v2 + 32));
    emit_from_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !emit_from_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)emit_from_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->emit_from);
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        169);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[30])"fromJson for: emitFrom fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "scaleX",
        (const std::allocator<char> *)(v2 + 48));
      scale_x_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( scale_x_ptr && !fromJson<float>(scale_x_ptr, &this->scale_x) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "fromJson",
          181);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[28])"fromJson for: scaleX fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "scaleY",
          (const std::allocator<char> *)(v2 + 64));
        scale_y_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( scale_y_ptr && !fromJson<float>(scale_y_ptr, &this->scale_y) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "fromJson",
            193);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[28])"fromJson for: scaleY fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 608),
            "scaleZ",
            (const std::allocator<char> *)(v2 + 80));
          p_scale_z = (float *)(v2 + 608);
          scale_z_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
          std::string::~string((void *)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( scale_z_ptr && (p_scale_z = &this->scale_z, !fromJson<float>(scale_z_ptr, &this->scale_z)) )
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
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "fromJson",
              205);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[28])"fromJson for: scaleZ fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, p_scale_z, &this->is_json_loaded);
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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

// Line 212: range 000000000E565012-000000000E565B58
data::ConfigEffectAttachBoxPtr __cdecl data::ConfigEffectAttachBox::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigEffectAttachBoxPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:225 96 16 7 ptr:231 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:219 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachBox::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        222);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[49])"fromJson for: ConfigEffectAttachBox $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigEffectAttachBox>::shared_ptr(
        (std::shared_ptr<data::ConfigEffectAttachBox> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigEffectAttachShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigEffectAttachShape>(
             (const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 64),
             0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          228);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigEffectAttachShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigEffectAttachBox>::shared_ptr(
          (std::shared_ptr<data::ConfigEffectAttachBox> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigEffectAttachBox,data::ConfigEffectAttachShape>((const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigEffectAttachBox>(
               (const std::shared_ptr<data::ConfigEffectAttachBox> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            234);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[40])"cast to ConfigEffectAttachBoxPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigEffectAttachBox>::shared_ptr(
            (std::shared_ptr<data::ConfigEffectAttachBox> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigEffectAttachBox,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachBox,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "parseFromJson",
              239);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigEffectAttachBox>::shared_ptr(
              (std::shared_ptr<data::ConfigEffectAttachBox> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigEffectAttachBox,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachBox,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigEffectAttachBox>::shared_ptr(
              (std::shared_ptr<data::ConfigEffectAttachBox> *const)jval,
              (std::shared_ptr<data::ConfigEffectAttachBox> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigEffectAttachBox>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachBox> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachShape> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      216);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[54])"jsonValueFind for: ConfigEffectAttachBox $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigEffectAttachBox>::shared_ptr(
      (std::shared_ptr<data::ConfigEffectAttachBox> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachBox,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 247: range 000000000E565B5A-000000000E565CD3
int32_t __cdecl data::ConfigEffectAttachBox::getHashValue(const data::ConfigEffectAttachBox *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:248";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachBox::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigEffectAttachShape::getHashValue((const data::ConfigEffectAttachShape *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->emit_from >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->emit_from >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->emit_from);
  }
  common::tools::HashUtils::appendHash(this->emit_from, (int32_t *)(v2 + 32));
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

// Line 257: range 000000000E6CA550-000000000E6CA791
void __cdecl data::ConfigEffectAttachSkinnedMeshRegister::ConfigEffectAttachSkinnedMeshRegister(
        data::ConfigEffectAttachSkinnedMeshRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigEffectAttachShape> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachSkinnedMeshRegister::ConfigEffectAttachSkinnedMeshRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachSkinnedMesh>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigEffectAttachSkinnedMesh",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::operator[](
         &data::g_ConfigEffectAttachShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigEffectAttachShape>::operator=<data::ConfigEffectAttachSkinnedMesh>(
    v4,
    (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 260: range 000000000E565CD4-000000000E565EA4
void __cdecl data::ConfigEffectAttachSkinnedMesh::foreachMember(
        data::ConfigEffectAttachSkinnedMesh *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 mesh_any:262 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachSkinnedMesh::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigEffectAttachShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->mesh);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 267: range 000000000E565EA6-000000000E565FB6
std::shared_ptr<data::ConfigEffectAttachShape> __cdecl data::ConfigEffectAttachSkinnedMesh::clone(
        data::ConfigEffectAttachSkinnedMesh *const this)
{
  data::ConfigEffectAttachSkinnedMesh *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigEffectAttachShape> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachSkinnedMesh::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachSkinnedMesh,data::ConfigEffectAttachSkinnedMesh&>(
    (common::tools::perf::allocator<data::ConfigEffectAttachSkinnedMesh,data::ConfigEffectAttachSkinnedMesh> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr<data::ConfigEffectAttachSkinnedMesh,void>(
    (std::shared_ptr<data::ConfigEffectAttachShape> *const)this,
    (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *)(v2 + 32));
  std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 271: range 000000000E565FB8-000000000E565FFB
data::ConfigEffectAttachSkinnedMeshPtr __cdecl data::ConfigEffectAttachSkinnedMeshFactory::create(
        data::ConfigEffectAttachSkinnedMeshFactory *const this)
{
  data::ConfigEffectAttachSkinnedMeshPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigEffectAttachSkinnedMesh>();
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachSkinnedMesh,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 273: range 000000000E565FFC-000000000E566480
bool __cdecl data::ConfigEffectAttachSkinnedMesh::fromJson(
        data::ConfigEffectAttachSkinnedMesh *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_mesh; // rsi
  const Json::Value *mesh_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachSkinnedMesh::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigEffectAttachShape::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      276);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[45])"fromJson for: ConfigEffectAttachShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "mesh",
      (const std::allocator<char> *)(v2 + 48));
    p_mesh = (std::string *)(v2 + 128);
    mesh_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( mesh_ptr && (p_mesh = &this->mesh, !fromJson<std::string>(mesh_ptr, &this->mesh)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        288);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[26])"fromJson for: mesh fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_mesh, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 295: range 000000000E566482-000000000E566FC8
data::ConfigEffectAttachSkinnedMeshPtr __cdecl data::ConfigEffectAttachSkinnedMesh::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigEffectAttachSkinnedMeshPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:308 96 16 7 ptr:314 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:302 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachSkinnedMesh::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        305);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[57])"fromJson for: ConfigEffectAttachSkinnedMesh $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::shared_ptr(
        (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigEffectAttachShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigEffectAttachShape>(
             (const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 64),
             0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          311);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigEffectAttachShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::shared_ptr(
          (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigEffectAttachSkinnedMesh,data::ConfigEffectAttachShape>((const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigEffectAttachSkinnedMesh>(
               (const std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            317);
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[48])"cast to ConfigEffectAttachSkinnedMeshPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::shared_ptr(
            (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigEffectAttachSkinnedMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachSkinnedMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "parseFromJson",
              322);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::shared_ptr(
              (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigEffectAttachSkinnedMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachSkinnedMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::shared_ptr(
              (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)jval,
              (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachShape> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      299);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[62])"jsonValueFind for: ConfigEffectAttachSkinnedMesh $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigEffectAttachSkinnedMesh>::shared_ptr(
      (std::shared_ptr<data::ConfigEffectAttachSkinnedMesh> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachSkinnedMesh,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 330: range 000000000E566FCA-000000000E56710A
int32_t __cdecl data::ConfigEffectAttachSkinnedMesh::getHashValue(
        const data::ConfigEffectAttachSkinnedMesh *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:331";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachSkinnedMesh::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigEffectAttachShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->mesh, (int32_t *)(v2 + 32));
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

// Line 340: range 000000000E6CA80A-000000000E6CAA4B
void __cdecl data::ConfigEffectAttachMeshRegister::ConfigEffectAttachMeshRegister(
        data::ConfigEffectAttachMeshRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigEffectAttachShape> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachMeshRegister::ConfigEffectAttachMeshRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachMesh>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigEffectAttachMesh",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::operator[](
         &data::g_ConfigEffectAttachShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigEffectAttachShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigEffectAttachShape>::operator=<data::ConfigEffectAttachMesh>(
    v4,
    (std::shared_ptr<data::ConfigEffectAttachMesh> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigEffectAttachMesh>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachMesh> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 343: range 000000000E56710C-000000000E5672DC
void __cdecl data::ConfigEffectAttachMesh::foreachMember(
        data::ConfigEffectAttachMesh *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 mesh_any:345 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachMesh::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigEffectAttachShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->mesh);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 350: range 000000000E5672DE-000000000E5673EE
std::shared_ptr<data::ConfigEffectAttachShape> __cdecl data::ConfigEffectAttachMesh::clone(
        data::ConfigEffectAttachMesh *const this)
{
  data::ConfigEffectAttachMesh *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigEffectAttachShape> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachMesh::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachMesh,data::ConfigEffectAttachMesh&>(
    (common::tools::perf::allocator<data::ConfigEffectAttachMesh,data::ConfigEffectAttachMesh> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr<data::ConfigEffectAttachMesh,void>(
    (std::shared_ptr<data::ConfigEffectAttachShape> *const)this,
    (std::shared_ptr<data::ConfigEffectAttachMesh> *)(v2 + 32));
  std::shared_ptr<data::ConfigEffectAttachMesh>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachMesh> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 354: range 000000000E5673F0-000000000E567433
data::ConfigEffectAttachMeshPtr __cdecl data::ConfigEffectAttachMeshFactory::create(
        data::ConfigEffectAttachMeshFactory *const this)
{
  data::ConfigEffectAttachMeshPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigEffectAttachMesh>();
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachMesh,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 356: range 000000000E567434-000000000E5678B8
bool __cdecl data::ConfigEffectAttachMesh::fromJson(data::ConfigEffectAttachMesh *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_mesh; // rsi
  const Json::Value *mesh_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachMesh::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigEffectAttachShape::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      359);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[45])"fromJson for: ConfigEffectAttachShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "mesh",
      (const std::allocator<char> *)(v2 + 48));
    p_mesh = (std::string *)(v2 + 128);
    mesh_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( mesh_ptr && (p_mesh = &this->mesh, !fromJson<std::string>(mesh_ptr, &this->mesh)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        371);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[26])"fromJson for: mesh fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_mesh, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 378: range 000000000E5678BA-000000000E568400
data::ConfigEffectAttachMeshPtr __cdecl data::ConfigEffectAttachMesh::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigEffectAttachMeshPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:391 96 16 7 ptr:397 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:385 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachMesh::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        388);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[50])"fromJson for: ConfigEffectAttachMesh $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigEffectAttachMesh>::shared_ptr(
        (std::shared_ptr<data::ConfigEffectAttachMesh> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigEffectAttachShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigEffectAttachShape>(
             (const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 64),
             0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          394);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigEffectAttachShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigEffectAttachMesh>::shared_ptr(
          (std::shared_ptr<data::ConfigEffectAttachMesh> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigEffectAttachMesh,data::ConfigEffectAttachShape>((const std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigEffectAttachMesh>(
               (const std::shared_ptr<data::ConfigEffectAttachMesh> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            400);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[41])"cast to ConfigEffectAttachMeshPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigEffectAttachMesh>::shared_ptr(
            (std::shared_ptr<data::ConfigEffectAttachMesh> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigEffectAttachMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "parseFromJson",
              405);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigEffectAttachMesh>::shared_ptr(
              (std::shared_ptr<data::ConfigEffectAttachMesh> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigEffectAttachMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigEffectAttachMesh>::shared_ptr(
              (std::shared_ptr<data::ConfigEffectAttachMesh> *const)jval,
              (std::shared_ptr<data::ConfigEffectAttachMesh> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigEffectAttachMesh>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachMesh> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachShape> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      382);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[55])"jsonValueFind for: ConfigEffectAttachMesh $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigEffectAttachMesh>::shared_ptr(
      (std::shared_ptr<data::ConfigEffectAttachMesh> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigEffectAttachMesh,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 413: range 000000000E568402-000000000E568542
int32_t __cdecl data::ConfigEffectAttachMesh::getHashValue(const data::ConfigEffectAttachMesh *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:414";
  *(_QWORD *)(v2 + 16) = data::ConfigEffectAttachMesh::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigEffectAttachShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->mesh, (int32_t *)(v2 + 32));
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

// Line 421: range 000000000E568544-000000000E568B27
bool __cdecl data::ConfigMeshEffectNode::fromJson(data::ConfigMeshEffectNode *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_attach_mesh_name; // rsi
  const Json::Value *follow_target_path_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *attach_mesh_name_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigMeshEffectNode::fromJson;
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
    "followTargetPath",
    (const std::allocator<char> *)(v2 + 32));
  follow_target_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( follow_target_path_ptr && !fromJson<std::string>(follow_target_path_ptr, &this->follow_target_path) )
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      431);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[38])"fromJson for: followTargetPath fails!");
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
      "attachMeshName",
      (const std::allocator<char> *)(v2 + 48));
    p_attach_mesh_name = (std::string *)(v2 + 192);
    attach_mesh_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( attach_mesh_name_ptr
      && (p_attach_mesh_name = &this->attach_mesh_name,
          !fromJson<std::string>(attach_mesh_name_ptr, &this->attach_mesh_name)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        443);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[36])"fromJson for: attachMeshName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_attach_mesh_name, &this->is_json_loaded);
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

// Line 451: range 000000000E568B28-000000000E568C71
int32_t __cdecl data::ConfigMeshEffectNode::getHashValue(const data::ConfigMeshEffectNode *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:452";
  *(_QWORD *)(v2 + 16) = data::ConfigMeshEffectNode::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->follow_target_path, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->attach_mesh_name, (int32_t *)(v2 + 32));
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

// Line 459: range 000000000E568C72-000000000E56904B
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigMeshEffectNodeList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigMeshEffectNode *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-140h]
  char v12; // [rsp+8h] [rbp-138h]
  bool v13; // [rsp+Fh] [rbp-131h]
  uint32_t i; // [rsp+24h] [rbp-11Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-118h]
  char v16[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 72 8 elem:465";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
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
      *(_DWORD *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 8) = 0;
      data::ConfigMeshEffectNode::ConfigMeshEffectNode((data::ConfigMeshEffectNode *const)(v2 + 112));
      if ( !data::ConfigMeshEffectNode::fromJson((data::ConfigMeshEffectNode *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 111) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "vecFromJson",
          468);
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
        v8 = std::move<data::ConfigMeshEffectNode &>((data::ConfigMeshEffectNode *)(v2 + 112));
        std::vector<data::ConfigMeshEffectNode>::emplace_back<data::ConfigMeshEffectNode>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigMeshEffectNode::~ConfigMeshEffectNode((data::ConfigMeshEffectNode *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_DWORD *)(v9 + 4) = -117901064;
    *(_BYTE *)(v9 + 8) = -8;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 478: range 000000000E56904C-000000000E569298
int32_t __cdecl data::getVecHashValue(const data::ConfigMeshEffectNodeList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigMeshEffectNode*,std::vector<data::ConfigMeshEffectNode> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:479 64 8 15 __for_begin:480 96 8 13 __for_end:480";
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
  *(std::vector<data::ConfigMeshEffectNode>::const_iterator *)(v2 + 64) = std::vector<data::ConfigMeshEffectNode>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigMeshEffectNode>::const_iterator *)(v2 + 96) = std::vector<data::ConfigMeshEffectNode>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigMeshEffectNode const*,std::vector<data::ConfigMeshEffectNode>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigMeshEffectNode*,std::vector<data::ConfigMeshEffectNode> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigMeshEffectNode*,std::vector<data::ConfigMeshEffectNode> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigMeshEffectNode const*,std::vector<data::ConfigMeshEffectNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigMeshEffectNode*,std::vector<data::ConfigMeshEffectNode> > *const)(v2 + 64));
    HashValue = data::ConfigMeshEffectNode::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigMeshEffectNode const*,std::vector<data::ConfigMeshEffectNode>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigMeshEffectNode*,std::vector<data::ConfigMeshEffectNode> > *const)(v2 + 64));
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

// Line 489: range 000000000E56929A-000000000E56DCD2
bool __cdecl data::ConfigEntityCommon::fromJson(data::ConfigEntityCommon *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<data::ConfigEffectAttachShape> *v5; // rax
  bool v6; // r15
  char v7; // al
  data::ConfigMeshEffectNodeList *p_mesh_effect_node_list; // rsi
  bool v9; // bl
  const Json::Value *effect_attach_shape_ptr; // [rsp+18h] [rbp-11D8h]
  const Json::Value *mass_ptr; // [rsp+20h] [rbp-11D0h]
  const Json::Value *height_ptr; // [rsp+28h] [rbp-11C8h]
  const Json::Value *model_height_ptr; // [rsp+30h] [rbp-11C0h]
  const Json::Value *view_size_ptr; // [rsp+38h] [rbp-11B8h]
  const Json::Value *shadow_view_size_ratio_ptr; // [rsp+40h] [rbp-11B0h]
  const Json::Value *override_cull_bounds_radius_ptr; // [rsp+48h] [rbp-11A8h]
  const Json::Value *affected_by_world_ptr; // [rsp+50h] [rbp-11A0h]
  const Json::Value *check_in_surface_ptr; // [rsp+58h] [rbp-1198h]
  const Json::Value *scale_ptr; // [rsp+60h] [rbp-1190h]
  const Json::Value *disable_tick_distance_ptr; // [rsp+68h] [rbp-1188h]
  const Json::Value *force_pause_tick_distance_ptr; // [rsp+70h] [rbp-1180h]
  const Json::Value *should_pause_animator_before_ready_ptr; // [rsp+78h] [rbp-1178h]
  const Json::Value *can_trigger_element_reaction_text_ptr; // [rsp+80h] [rbp-1170h]
  const Json::Value *use_grass_displacement_ptr; // [rsp+88h] [rbp-1168h]
  const Json::Value *mute_element_stick_ui_ptr; // [rsp+90h] [rbp-1160h]
  const Json::Value *has_after_image_ptr; // [rsp+98h] [rbp-1158h]
  const Json::Value *use_dynamic_bone_ptr; // [rsp+A0h] [rbp-1150h]
  const Json::Value *enable_crash_damage_ptr; // [rsp+A8h] [rbp-1148h]
  const Json::Value *clear_animator_on_set_light_deactive_ptr; // [rsp+B0h] [rbp-1140h]
  const Json::Value *clear_aion_set_light_deactive_ptr; // [rsp+B8h] [rbp-1138h]
  const Json::Value *reconnect_support_ptr; // [rsp+C0h] [rbp-1130h]
  const Json::Value *recover_by_init_pose_ptr; // [rsp+C8h] [rbp-1128h]
  const Json::Value *use_final_ik_ptr; // [rsp+D0h] [rbp-1120h]
  const Json::Value *mute_element_reaction_overgrow_ptr; // [rsp+D8h] [rbp-1118h]
  const Json::Value *is_force_refresh_authotiry_to_host_ptr; // [rsp+E0h] [rbp-1110h]
  const Json::Value *is_refresh_auth_when_auth_out_sight_ptr; // [rsp+E8h] [rbp-1108h]
  const Json::Value *sync_anim_crossfade_duration_ptr; // [rsp+F0h] [rbp-1100h]
  const Json::Value *mesh_effect_node_list_ptr; // [rsp+F8h] [rbp-10F8h]
  char v41[4336]; // [rsp+100h] [rbp-10F0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "89 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unkn"
                        "own> 480 1 9 <unknown> 496 1 9 <unknown> 512 16 9 <unknown> 544 16 9 <unknown> 576 32 9 <unknown"
                        "> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown>"
                        " 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unkno"
                        "wn> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <u"
                        "nknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 "
                        "9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176"
                        " 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> "
                        "2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unkno"
                        "wn> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <u"
                        "nknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 "
                        "9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9 <unknown> 3648 32 9 <unknown> 3712"
                        " 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 32 9 <unknown> 3968 32 9 <unknown> "
                        "4032 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEntityCommon::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
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
  v4[536862735] = -234753535;
  v4[536862736] = -219021312;
  v4[536862737] = -219021312;
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
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -218959118;
  v4[536862791] = -218959118;
  v4[536862793] = -218959118;
  v4[536862795] = -218959118;
  v4[536862797] = -218959118;
  v4[536862799] = -218959118;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -218959118;
  v4[536862823] = -218959118;
  v4[536862825] = -218959118;
  v4[536862827] = -218959118;
  v4[536862829] = -218959118;
  v4[536862831] = -218959118;
  v4[536862833] = -218959118;
  v4[536862835] = -218959118;
  v4[536862837] = -218959118;
  v4[536862839] = -218959118;
  v4[536862841] = -218959118;
  v4[536862843] = -218959118;
  v4[536862845] = -218959118;
  v4[536862847] = -218959118;
  v4[536862849] = -218959118;
  v4[536862851] = -218959118;
  v4[536862853] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    "effectAttachShape",
    (const std::allocator<char> *)(v2 + 48));
  effect_attach_shape_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( effect_attach_shape_ptr )
  {
    *(_WORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v2 + 544) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    data::ConfigEffectAttachShape::parseFromJson((const Json::Value *)(v2 + 544));
    v5 = std::shared_ptr<data::ConfigEffectAttachShape>::operator=(
           &this->effect_attach_shape,
           (std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 544));
    v6 = std::operator==<data::ConfigEffectAttachShape>(v5, 0LL);
    std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachShape> *const)(v2 + 544));
    *(_WORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -1800;
    if ( v6 )
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
        1u,
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        501);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)(v2 + 640),
        (const char (*)[39])"fromJson for: effectAttachShape fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    }
  }
  else
  {
    *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<data::ConfigEffectAttachShape>();
    std::shared_ptr<data::ConfigEffectAttachShape>::operator=(
      &this->effect_attach_shape,
      (std::shared_ptr<data::ConfigEffectAttachShape> *)(v2 + 512));
    std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr((std::shared_ptr<data::ConfigEffectAttachShape> *const)(v2 + 512));
    *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -1800;
  }
  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 704),
    "mass",
    (const std::allocator<char> *)(v2 + 64));
  mass_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
  std::string::~string((void *)(v2 + 704));
  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( mass_ptr && !fromJson<float>(mass_ptr, &this->mass) )
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      512);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 768),
      (const char (*)[26])"fromJson for: mass fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 832),
      "height",
      (const std::allocator<char> *)(v2 + 80));
    height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
    std::string::~string((void *)(v2 + 832));
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( height_ptr && !fromJson<float>(height_ptr, &this->height) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        524);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 896),
        (const char (*)[28])"fromJson for: height fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
      v7 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 960),
        "modelHeight",
        (const std::allocator<char> *)(v2 + 96));
      model_height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
      std::string::~string((void *)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( model_height_ptr && !fromJson<float>(model_height_ptr, &this->model_height) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "fromJson",
          536);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 1024),
          (const char (*)[33])"fromJson for: modelHeight fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
        v7 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1088),
          "viewSize",
          (const std::allocator<char> *)(v2 + 112));
        view_size_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
        std::string::~string((void *)(v2 + 1088));
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( view_size_ptr && !fromJson<float>(view_size_ptr, &this->view_size) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "fromJson",
            548);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 1152),
            (const char (*)[30])"fromJson for: viewSize fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
          v7 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1216),
            "shadowViewSizeRatio",
            (const std::allocator<char> *)(v2 + 128));
          shadow_view_size_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
          std::string::~string((void *)(v2 + 1216));
          *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( shadow_view_size_ratio_ptr && !fromJson<float>(shadow_view_size_ratio_ptr, &this->shadow_view_size_ratio) )
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
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "fromJson",
              560);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)(v2 + 1280),
              (const char (*)[41])"fromJson for: shadowViewSizeRatio fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
            v7 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1344),
              "overrideCullBoundsRadius",
              (const std::allocator<char> *)(v2 + 144));
            override_cull_bounds_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
            std::string::~string((void *)(v2 + 1344));
            *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( override_cull_bounds_radius_ptr
              && !fromJson<float>(override_cull_bounds_radius_ptr, &this->override_cull_bounds_radius) )
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
                "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                "fromJson",
                572);
              common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)(v2 + 1408),
                (const char (*)[46])"fromJson for: overrideCullBoundsRadius fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
              v7 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1472),
                "affectedByWorld",
                (const std::allocator<char> *)(v2 + 160));
              affected_by_world_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
              std::string::~string((void *)(v2 + 1472));
              *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( affected_by_world_ptr && !fromJson<bool>(affected_by_world_ptr, &this->affected_by_world) )
              {
                *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1536, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1536),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                  "fromJson",
                  584);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)(v2 + 1536),
                  (const char (*)[37])"fromJson for: affectedByWorld fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                v7 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 176);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1600),
                  "checkInSurface",
                  (const std::allocator<char> *)(v2 + 176));
                check_in_surface_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
                std::string::~string((void *)(v2 + 1600));
                *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 176);
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                if ( check_in_surface_ptr && !fromJson<bool>(check_in_surface_ptr, &this->check_in_surface) )
                {
                  *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1664, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1664),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                    "fromJson",
                    596);
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    (common::milog::MiLogStream *const)(v2 + 1664),
                    (const char (*)[36])"fromJson for: checkInSurface fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                  v7 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 192);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1728),
                    "scale",
                    (const std::allocator<char> *)(v2 + 192));
                  scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                  std::string::~string((void *)(v2 + 1728));
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 192);
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                  if ( scale_ptr && !fromJson<float>(scale_ptr, &this->scale) )
                  {
                    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1792, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1792),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                      "fromJson",
                      608);
                    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      (common::milog::MiLogStream *const)(v2 + 1792),
                      (const char (*)[27])"fromJson for: scale fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                    v7 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 208);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1856),
                      "disableTickDistance",
                      (const std::allocator<char> *)(v2 + 208));
                    disable_tick_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                    std::string::~string((void *)(v2 + 1856));
                    *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    if ( disable_tick_distance_ptr
                      && !fromJson<float>(disable_tick_distance_ptr, &this->disable_tick_distance) )
                    {
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1920, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1920),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                        "fromJson",
                        620);
                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        (common::milog::MiLogStream *const)(v2 + 1920),
                        (const char (*)[41])"fromJson for: disableTickDistance fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                      v7 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 224);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1984),
                        "forcePauseTickDistance",
                        (const std::allocator<char> *)(v2 + 224));
                      force_pause_tick_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                      std::string::~string((void *)(v2 + 1984));
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 224);
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                      if ( force_pause_tick_distance_ptr
                        && !fromJson<float>(force_pause_tick_distance_ptr, &this->force_pause_tick_distance) )
                      {
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2048, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2048),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                          "fromJson",
                          632);
                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          (common::milog::MiLogStream *const)(v2 + 2048),
                          (const char (*)[44])"fromJson for: forcePauseTickDistance fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                        v7 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 240);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2112),
                          "shouldPauseAnimatorBeforeReady",
                          (const std::allocator<char> *)(v2 + 240));
                        should_pause_animator_before_ready_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2112));
                        std::string::~string((void *)(v2 + 2112));
                        *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 240);
                        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                        if ( should_pause_animator_before_ready_ptr
                          && !fromJson<bool>(
                                should_pause_animator_before_ready_ptr,
                                &this->should_pause_animator_before_ready) )
                        {
                          *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2176) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2176, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2176),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                            "fromJson",
                            644);
                          common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                            (common::milog::MiLogStream *const)(v2 + 2176),
                            (const char (*)[52])"fromJson for: shouldPauseAnimatorBeforeReady fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                          v7 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 256);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2240),
                            "canTriggerElementReactionText",
                            (const std::allocator<char> *)(v2 + 256));
                          can_trigger_element_reaction_text_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                          std::string::~string((void *)(v2 + 2240));
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 256);
                          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                          if ( can_trigger_element_reaction_text_ptr
                            && !fromJson<bool>(
                                  can_trigger_element_reaction_text_ptr,
                                  &this->can_trigger_element_reaction_text) )
                          {
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2304, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2304),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                              "fromJson",
                              656);
                            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                              (common::milog::MiLogStream *const)(v2 + 2304),
                              (const char (*)[51])"fromJson for: canTriggerElementReactionText fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                            v7 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 272);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2368),
                              "useGrassDisplacement",
                              (const std::allocator<char> *)(v2 + 272));
                            use_grass_displacement_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2368));
                            std::string::~string((void *)(v2 + 2368));
                            *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 272);
                            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                            if ( use_grass_displacement_ptr
                              && !fromJson<bool>(use_grass_displacement_ptr, &this->use_grass_displacement) )
                            {
                              *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2432) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2432, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2432),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                "fromJson",
                                668);
                              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                (common::milog::MiLogStream *const)(v2 + 2432),
                                (const char (*)[42])"fromJson for: useGrassDisplacement fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                              v7 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 288);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2496),
                                "muteElementStickUI",
                                (const std::allocator<char> *)(v2 + 288));
                              mute_element_stick_ui_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                              std::string::~string((void *)(v2 + 2496));
                              *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 288);
                              *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                              if ( mute_element_stick_ui_ptr
                                && !fromJson<bool>(mute_element_stick_ui_ptr, &this->mute_element_stick_ui) )
                              {
                                *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2560, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2560),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                  "fromJson",
                                  680);
                                common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2560),
                                  (const char (*)[40])"fromJson for: muteElementStickUI fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                v7 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 304);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2624),
                                  "hasAfterImage",
                                  (const std::allocator<char> *)(v2 + 304));
                                has_after_image_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2624));
                                std::string::~string((void *)(v2 + 2624));
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 304);
                                *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                if ( has_after_image_ptr && !fromJson<bool>(has_after_image_ptr, &this->has_after_image) )
                                {
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2688, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2688),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                    "fromJson",
                                    692);
                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2688),
                                    (const char (*)[35])"fromJson for: hasAfterImage fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                  v7 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 320);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2752),
                                    "useDynamicBone",
                                    (const std::allocator<char> *)(v2 + 320));
                                  use_dynamic_bone_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2752));
                                  std::string::~string((void *)(v2 + 2752));
                                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 320);
                                  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                  if ( use_dynamic_bone_ptr
                                    && !fromJson<bool>(use_dynamic_bone_ptr, &this->use_dynamic_bone) )
                                  {
                                    *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2816, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2816),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                      "fromJson",
                                      704);
                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2816),
                                      (const char (*)[36])"fromJson for: useDynamicBone fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                    v7 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 336);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2880),
                                      "enableCrashDamage",
                                      (const std::allocator<char> *)(v2 + 336));
                                    enable_crash_damage_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2880));
                                    std::string::~string((void *)(v2 + 2880));
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 336);
                                    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                    if ( enable_crash_damage_ptr
                                      && !fromJson<bool>(enable_crash_damage_ptr, &this->enable_crash_damage) )
                                    {
                                      *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2944) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2944, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2944),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                        "fromJson",
                                        716);
                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2944),
                                        (const char (*)[39])"fromJson for: enableCrashDamage fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                      v7 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 352);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3008),
                                        "clearAnimatorOnSetLightDeactive",
                                        (const std::allocator<char> *)(v2 + 352));
                                      clear_animator_on_set_light_deactive_ptr = jsonValueFind(
                                                                                   jval,
                                                                                   (const std::string *)(v2 + 3008));
                                      std::string::~string((void *)(v2 + 3008));
                                      *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 352);
                                      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                      if ( clear_animator_on_set_light_deactive_ptr
                                        && !fromJson<bool>(
                                              clear_animator_on_set_light_deactive_ptr,
                                              &this->clear_animator_on_set_light_deactive) )
                                      {
                                        *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3072) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3072, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3072),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                          "fromJson",
                                          728);
                                        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3072),
                                          (const char (*)[53])"fromJson for: clearAnimatorOnSetLightDeactive fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                        v7 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 368);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3136),
                                          "clearAIOnSetLightDeactive",
                                          (const std::allocator<char> *)(v2 + 368));
                                        clear_aion_set_light_deactive_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 3136));
                                        std::string::~string((void *)(v2 + 3136));
                                        *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 368);
                                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                        if ( clear_aion_set_light_deactive_ptr
                                          && !fromJson<bool>(
                                                clear_aion_set_light_deactive_ptr,
                                                &this->clear_aion_set_light_deactive) )
                                        {
                                          *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3200) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3200, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3200),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                            "fromJson",
                                            740);
                                          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3200),
                                            (const char (*)[47])"fromJson for: clearAIOnSetLightDeactive fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                          v7 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 384);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3264),
                                            "reconnectSupport",
                                            (const std::allocator<char> *)(v2 + 384));
                                          reconnect_support_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3264));
                                          std::string::~string((void *)(v2 + 3264));
                                          *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 384);
                                          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                          if ( reconnect_support_ptr
                                            && !fromJson<bool>(reconnect_support_ptr, &this->reconnect_support) )
                                          {
                                            *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3328) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3328, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3328),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                              "fromJson",
                                              752);
                                            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3328),
                                              (const char (*)[38])"fromJson for: reconnectSupport fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                            v7 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 400);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3392),
                                              "recoverByInitPose",
                                              (const std::allocator<char> *)(v2 + 400));
                                            recover_by_init_pose_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 3392));
                                            std::string::~string((void *)(v2 + 3392));
                                            *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 400);
                                            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                            if ( recover_by_init_pose_ptr
                                              && !fromJson<bool>(recover_by_init_pose_ptr, &this->recover_by_init_pose) )
                                            {
                                              *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3456) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3456, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3456),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                "fromJson",
                                                764);
                                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3456),
                                                (const char (*)[39])"fromJson for: recoverByInitPose fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3456));
                                              v7 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 416);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3520),
                                                "useFinalIK",
                                                (const std::allocator<char> *)(v2 + 416));
                                              use_final_ik_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3520));
                                              std::string::~string((void *)(v2 + 3520));
                                              *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 416);
                                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                              if ( use_final_ik_ptr
                                                && !fromJson<bool>(use_final_ik_ptr, &this->use_final_ik) )
                                              {
                                                *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3584) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3615) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3615) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3584, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3584),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                  "fromJson",
                                                  776);
                                                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3584),
                                                  (const char (*)[32])"fromJson for: useFinalIK fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3584));
                                                v7 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 432);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3648),
                                                  "muteElementReactionOvergrow",
                                                  (const std::allocator<char> *)(v2 + 432));
                                                mute_element_reaction_overgrow_ptr = jsonValueFind(
                                                                                       jval,
                                                                                       (const std::string *)(v2 + 3648));
                                                std::string::~string((void *)(v2 + 3648));
                                                *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 432);
                                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                if ( mute_element_reaction_overgrow_ptr
                                                  && !fromJson<bool>(
                                                        mute_element_reaction_overgrow_ptr,
                                                        &this->mute_element_reaction_overgrow) )
                                                {
                                                  *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3712) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3743) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3712, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3712),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                    "fromJson",
                                                    788);
                                                  common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3712),
                                                    (const char (*)[49])"fromJson for: muteElementReactionOvergrow fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3712));
                                                  v7 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 448);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3776),
                                                    "isForceRefreshAuthotiryToHost",
                                                    (const std::allocator<char> *)(v2 + 448));
                                                  is_force_refresh_authotiry_to_host_ptr = jsonValueFind(
                                                                                             jval,
                                                                                             (const std::string *)(v2 + 3776));
                                                  std::string::~string((void *)(v2 + 3776));
                                                  *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 448);
                                                  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                  if ( is_force_refresh_authotiry_to_host_ptr
                                                    && !fromJson<bool>(
                                                          is_force_refresh_authotiry_to_host_ptr,
                                                          &this->is_force_refresh_authotiry_to_host) )
                                                  {
                                                    *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 3840) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3871) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 3840, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 3840),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                      "fromJson",
                                                      800);
                                                    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3840),
                                                      (const char (*)[51])"fromJson for: isForceRefreshAuthotiryToHost fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3840));
                                                    v7 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 464);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 3904),
                                                      "isRefreshAuthWhenAuthOutSight",
                                                      (const std::allocator<char> *)(v2 + 464));
                                                    is_refresh_auth_when_auth_out_sight_ptr = jsonValueFind(
                                                                                                jval,
                                                                                                (const std::string *)(v2 + 3904));
                                                    std::string::~string((void *)(v2 + 3904));
                                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 464);
                                                    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                    if ( is_refresh_auth_when_auth_out_sight_ptr
                                                      && !fromJson<bool>(
                                                            is_refresh_auth_when_auth_out_sight_ptr,
                                                            &this->is_refresh_auth_when_auth_out_sight) )
                                                    {
                                                      *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 3968) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 3999) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3999) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 3968, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 3968),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                        "fromJson",
                                                        812);
                                                      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 3968),
                                                        (const char (*)[51])"fromJson for: isRefreshAuthWhenAuthOutSight fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3968));
                                                      v7 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 480);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4032),
                                                        "syncAnimCrossfadeDuration",
                                                        (const std::allocator<char> *)(v2 + 480));
                                                      sync_anim_crossfade_duration_ptr = jsonValueFind(
                                                                                           jval,
                                                                                           (const std::string *)(v2 + 4032));
                                                      std::string::~string((void *)(v2 + 4032));
                                                      *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 480);
                                                      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                      if ( sync_anim_crossfade_duration_ptr
                                                        && !fromJson<bool>(
                                                              sync_anim_crossfade_duration_ptr,
                                                              &this->sync_anim_crossfade_duration) )
                                                      {
                                                        *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4096) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4127) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 4127) >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4096, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4096),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                          "fromJson",
                                                          824);
                                                        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4096),
                                                          (const char (*)[47])"fromJson for: syncAnimCrossfadeDuration fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4096));
                                                        v7 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 496);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4160),
                                                          "meshEffectNodeList",
                                                          (const std::allocator<char> *)(v2 + 496));
                                                        p_mesh_effect_node_list = (data::ConfigMeshEffectNodeList *)(v2 + 4160);
                                                        mesh_effect_node_list_ptr = jsonValueFind(
                                                                                      jval,
                                                                                      (const std::string *)(v2 + 4160));
                                                        std::string::~string((void *)(v2 + 4160));
                                                        *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 496);
                                                        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                        if ( mesh_effect_node_list_ptr
                                                          && (p_mesh_effect_node_list = &this->mesh_effect_node_list,
                                                              !data::vecFromJson(
                                                                 mesh_effect_node_list_ptr,
                                                                 &this->mesh_effect_node_list)) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4224) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4255) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4224, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4224),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                                                            "fromJson",
                                                            836);
                                                          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4224),
                                                            (const char (*)[40])"fromJson for: meshEffectNodeList fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4224));
                                                          v7 = 0;
                                                        }
                                                        else
                                                        {
                                                          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                       + 0x7FFF8000) < 0 )
                                                            __asan_report_store1(
                                                              &this->is_json_loaded,
                                                              p_mesh_effect_node_list,
                                                              &this->is_json_loaded);
                                                          this->is_json_loaded = 1;
                                                          v7 = 1;
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
  v9 = v7;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF810C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8114) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF811C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8124) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF812C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8134) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF813C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF814C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8154) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF815C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8164) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF816C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8174) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF817C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF818C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8194) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF819C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8204) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF820C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8214) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4288LL, v41);
  }
  return v9;
};

// Line 844: range 000000000E56DCD4-000000000E56E6F6
int32_t __cdecl data::ConfigEntityCommon::getHashValue(const data::ConfigEntityCommon *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  int32_t VecHashValue; // eax
  int32_t result; // eax
  char v40[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:845";
  *(_QWORD *)(v2 + 16) = data::ConfigEntityCommon::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( std::operator!=<data::ConfigEffectAttachShape>(0LL, &this->effect_attach_shape) )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigEffectAttachShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 56LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
    v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
    common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->mass >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mass >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mass);
  }
  common::tools::HashUtils::appendHash(this->mass, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height);
  }
  common::tools::HashUtils::appendHash(this->height, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->model_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->model_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->model_height);
  }
  common::tools::HashUtils::appendHash(this->model_height, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->view_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->view_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->view_size);
  }
  common::tools::HashUtils::appendHash(this->view_size, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shadow_view_size_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shadow_view_size_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->shadow_view_size_ratio);
  }
  common::tools::HashUtils::appendHash(this->shadow_view_size_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->override_cull_bounds_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_cull_bounds_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->override_cull_bounds_radius);
  }
  common::tools::HashUtils::appendHash(this->override_cull_bounds_radius, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->affected_by_world >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->affected_by_world, (((_BYTE)this + 36) & 7u) + 3, &this->affected_by_world);
  common::tools::HashUtils::appendHash(this->affected_by_world, (int32_t *)(v2 + 32));
  v8 = ((_BYTE)this + 41) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->check_in_surface >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->check_in_surface >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&this->check_in_surface, v8, v9);
  common::tools::HashUtils::appendHash(this->check_in_surface, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scale);
  }
  common::tools::HashUtils::appendHash(this->scale, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_tick_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disable_tick_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->disable_tick_distance);
  }
  common::tools::HashUtils::appendHash(this->disable_tick_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->force_pause_tick_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_pause_tick_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->force_pause_tick_distance);
  }
  common::tools::HashUtils::appendHash(this->force_pause_tick_distance, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->should_pause_animator_before_ready >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &this->should_pause_animator_before_ready,
      (((_BYTE)this + 52) & 7u) + 3,
      &this->should_pause_animator_before_ready);
  common::tools::HashUtils::appendHash(this->should_pause_animator_before_ready, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this + 57) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->can_trigger_element_reaction_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->can_trigger_element_reaction_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->can_trigger_element_reaction_text, v10, v11);
  common::tools::HashUtils::appendHash(this->can_trigger_element_reaction_text, (int32_t *)(v2 + 32));
  v12 = ((_BYTE)this + 58) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->use_grass_displacement >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->use_grass_displacement >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&this->use_grass_displacement, v12, v13);
  common::tools::HashUtils::appendHash(this->use_grass_displacement, (int32_t *)(v2 + 32));
  v14 = ((_BYTE)this + 59) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->mute_element_stick_ui >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->mute_element_stick_ui >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&this->mute_element_stick_ui, v14, v15);
  common::tools::HashUtils::appendHash(this->mute_element_stick_ui, (int32_t *)(v2 + 32));
  v16 = ((_BYTE)this + 60) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->has_after_image >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->has_after_image >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&this->has_after_image, v16, v17);
  common::tools::HashUtils::appendHash(this->has_after_image, (int32_t *)(v2 + 32));
  v18 = ((_BYTE)this + 61) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->use_dynamic_bone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->use_dynamic_bone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&this->use_dynamic_bone, v18, v19);
  common::tools::HashUtils::appendHash(this->use_dynamic_bone, (int32_t *)(v2 + 32));
  v20 = ((_BYTE)this + 62) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->enable_crash_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->enable_crash_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&this->enable_crash_damage, v20, v21);
  common::tools::HashUtils::appendHash(this->enable_crash_damage, (int32_t *)(v2 + 32));
  v22 = ((_BYTE)this + 63) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&this->clear_animator_on_set_light_deactive, v22, v23);
  common::tools::HashUtils::appendHash(this->clear_animator_on_set_light_deactive, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->clear_aion_set_light_deactive >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->clear_aion_set_light_deactive, v2 + 32, &this->clear_aion_set_light_deactive);
  common::tools::HashUtils::appendHash(this->clear_aion_set_light_deactive, (int32_t *)(v2 + 32));
  v24 = ((_BYTE)this + 65) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&this->reconnect_support >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->reconnect_support >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&this->reconnect_support, v24, v25);
  common::tools::HashUtils::appendHash(this->reconnect_support, (int32_t *)(v2 + 32));
  v26 = ((_BYTE)this + 66) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&this->recover_by_init_pose >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&this->recover_by_init_pose >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&this->recover_by_init_pose, v26, v27);
  common::tools::HashUtils::appendHash(this->recover_by_init_pose, (int32_t *)(v2 + 32));
  v28 = ((_BYTE)this + 67) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&this->use_final_ik >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&this->use_final_ik >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&this->use_final_ik, v28, v29);
  common::tools::HashUtils::appendHash(this->use_final_ik, (int32_t *)(v2 + 32));
  v30 = ((_BYTE)this + 68) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&this->mute_element_reaction_overgrow >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&this->mute_element_reaction_overgrow >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&this->mute_element_reaction_overgrow, v30, v31);
  common::tools::HashUtils::appendHash(this->mute_element_reaction_overgrow, (int32_t *)(v2 + 32));
  v32 = ((_BYTE)this + 69) & 7;
  v33 = (*(_BYTE *)(((unsigned __int64)&this->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v32 >= *(_BYTE *)(((unsigned __int64)&this->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v33 )
    __asan_report_load1(&this->is_force_refresh_authotiry_to_host, v32, v33);
  common::tools::HashUtils::appendHash(this->is_force_refresh_authotiry_to_host, (int32_t *)(v2 + 32));
  v34 = ((_BYTE)this + 70) & 7;
  v35 = (*(_BYTE *)(((unsigned __int64)&this->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v34 >= *(_BYTE *)(((unsigned __int64)&this->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v35 )
    __asan_report_load1(&this->is_refresh_auth_when_auth_out_sight, v34, v35);
  common::tools::HashUtils::appendHash(this->is_refresh_auth_when_auth_out_sight, (int32_t *)(v2 + 32));
  v36 = ((_BYTE)this + 71) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&this->sync_anim_crossfade_duration >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&this->sync_anim_crossfade_duration >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&this->sync_anim_crossfade_duration, v36, v37);
  common::tools::HashUtils::appendHash(this->sync_anim_crossfade_duration, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->mesh_effect_node_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v40 == (char *)v2 )
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

// Line 882: range 000000000E56E6F7-000000000E56E956
const char *__cdecl data::enumValToStr(data::BillboardOffsetType e)
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
    if ( e == Character )
    {
      result = "Character";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumValToStr",
        890);
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
      result = (const char *)&unk_1A36E8A0;
    }
  }
  else
  {
    result = "Normal";
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

// Line 896: range 000000000E56E957-000000000E56F18E
bool __cdecl data::enumStrToVal(const std::string *s, data::BillboardOffsetType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BillboardOffsetType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BillboardOffsetType> >::pointer v11; // rax
  data::BillboardOffsetType second; // ecx
  char v13; // dl
  data::BillboardOffsetType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:907 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "enumStrToVal",
      899);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::BillboardOffsetType>::pair<char const(&)[7],data::BillboardOffsetType,true>(
        (std::pair<const std::string,data::BillboardOffsetType> *const)(v2 + 304),
        (const char (*)[7])"Normal",
        (data::BillboardOffsetType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Normal");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::BillboardOffsetType>::pair<char const(&)[10],data::BillboardOffsetType,true>(
        (std::pair<const std::string,data::BillboardOffsetType> *const)(v2 + 344),
        (const char (*)[10])"Character",
        (data::BillboardOffsetType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::BillboardOffsetType>>::allocator((std::allocator<std::pair<const std::string,data::BillboardOffsetType> > *const)(v2 + 64));
      std::map<std::string,data::BillboardOffsetType>::map(
        &data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BillboardOffsetType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::BillboardOffsetType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m);
      e = (data::BillboardOffsetType *)&data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BillboardOffsetType>::~map,
        &data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BillboardOffsetType>>::~allocator((std::allocator<std::pair<const std::string,data::BillboardOffsetType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BillboardOffsetType> *)(v2 + 384);
            i != (std::pair<const std::string,data::BillboardOffsetType> *)(v2 + 304);
            std::pair<std::string const,data::BillboardOffsetType>::~pair(i) )
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
    *(std::map<std::string,data::BillboardOffsetType>::iterator *)(v2 + 112) = std::map<std::string,data::BillboardOffsetType>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::BillboardOffsetType>::iterator *)(v2 + 144) = std::map<std::string,data::BillboardOffsetType>::end(&data::enumStrToVal(std::string const&,data::BillboardOffsetType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BillboardOffsetType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BillboardOffsetType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumStrToVal",
        910);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BillboardOffsetType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BillboardOffsetType> > *const)(v2 + 112));
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

// Line 918: range 000000000E56F18F-000000000E56F1BE
const char *__cdecl data::getDescription(data::BillboardOffsetType e)
{
  if ( e == Normal_8 )
    return (const char *)&unk_1A398040;
  if ( e == Character )
    return (const char *)&unk_1A3980E0;
  return "unknown enum value!";
};

// Line 932: range 000000000E56F1BF-000000000E56F3F4
data::ConfigBillboardPtr __cdecl data::createConfigBillboard(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBillboardPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > >::_Base_ptr)"2 32 8 6 it:933 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > >::_Base_ptr)data::createConfigBillboard;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::find(
                    &data::g_ConfigBillboardMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::end(&data::g_ConfigBillboardMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBillboard>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigBillboard>::shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBillboard> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 939: range 000000000E56F3F6-000000000E56F962
void __cdecl data::ConfigBillboard::foreachMember(
        data::ConfigBillboard *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[416]; // [rsp+10h] [rbp-1A0h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = "11 32 16 20 attach_point_any:940 64 16 14 offset_any:942 96 16 19 offset_type_any:944 128 16 2"
                          "1 radius_offset_any:946 160 16 25 enable_self_adapt_any:948 192 16 21 show_distance_any:950 22"
                          "4 16 26 mark_show_distance_any:952 256 16 26 name_show_distance_any:954 288 16 27 force_hide_a"
                          "ll_bars_any:956 320 16 30 element_reaction_scale_any:958 352 16 32 charge_bar_height_offset_any:960";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigBillboard::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -202178560;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 2,
    &this->attach_point);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<data::Vector &,data::Vector,std::any::_Manager_external<data::Vector>,true,true>(v2 + 4, &this->offset);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<data::BillboardOffsetType &,data::BillboardOffsetType,std::any::_Manager_internal<data::BillboardOffsetType>,true,true>(
    v2 + 6,
    &this->offset_type);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 8, &this->radius_offset);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 8);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 10, &this->enable_self_adapt);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 10);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 12, &this->show_distance);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 12);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 14, &this->mark_show_distance);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 14);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 16, &this->name_show_distance);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 16);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 18, &this->force_hide_all_bars);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 18);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 20, &this->element_reaction_scale);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 20);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 22, &this->charge_bar_height_offset);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 22);
  std::any::~any(v2 + 22);
  std::any::~any(v2 + 20);
  std::any::~any(v2 + 18);
  std::any::~any(v2 + 16);
  std::any::~any(v2 + 14);
  std::any::~any(v2 + 12);
  std::any::~any(v2 + 10);
  std::any::~any(v2 + 8);
  std::any::~any(v2 + 6);
  std::any::~any(v2 + 4);
  std::any::~any(v2 + 2);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 965: range 000000000E56F964-000000000E56F9AE
std::shared_ptr<data::ConfigBillboard> __cdecl data::ConfigBillboard::clone(data::ConfigBillboard *const this)
{
  data::ConfigBillboard *v1; // rsi
  std::shared_ptr<data::ConfigBillboard> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBillboard,data::ConfigBillboard&>(
    (common::tools::perf::allocator<data::ConfigBillboard,data::ConfigBillboard> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 969: range 000000000E56F9B0-000000000E5716FB
bool __cdecl data::ConfigBillboard::fromJson(data::ConfigBillboard *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // bl
  const Json::Value *attach_point_ptr; // [rsp+18h] [rbp-728h]
  const Json::Value *offset_ptr; // [rsp+20h] [rbp-720h]
  Json::Value *offset_type_ptr; // [rsp+28h] [rbp-718h]
  const Json::Value *radius_offset_ptr; // [rsp+30h] [rbp-710h]
  const Json::Value *enable_self_adapt_ptr; // [rsp+38h] [rbp-708h]
  const Json::Value *show_distance_ptr; // [rsp+40h] [rbp-700h]
  const Json::Value *mark_show_distance_ptr; // [rsp+48h] [rbp-6F8h]
  const Json::Value *name_show_distance_ptr; // [rsp+50h] [rbp-6F0h]
  const Json::Value *force_hide_all_bars_ptr; // [rsp+58h] [rbp-6E8h]
  const Json::Value *element_reaction_scale_ptr; // [rsp+60h] [rbp-6E0h]
  const Json::Value *charge_bar_height_offset_ptr; // [rsp+68h] [rbp-6D8h]
  char v22[1744]; // [rsp+70h] [rbp-6D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1696LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "34 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBillboard::fromJson;
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
  v4[536862770] = -218959118;
  v4[536862772] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "attachPoint",
    (const std::allocator<char> *)(v2 + 48));
  attach_point_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( attach_point_ptr && !fromJson<std::string>(attach_point_ptr, &this->attach_point) )
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      979);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[33])"fromJson for: attachPoint fails!");
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
      "offset",
      (const std::allocator<char> *)(v2 + 64));
    offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( offset_ptr && !data::Vector::fromJson(&this->offset, offset_ptr) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        991);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[28])"fromJson for: offset fails!");
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
        "offsetType",
        (const std::allocator<char> *)(v2 + 80));
      offset_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !offset_type_ptr )
        goto LABEL_21;
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 544), (Json::Value_0 *)offset_type_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 544), &this->offset_type);
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "fromJson",
          1003);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 608),
          (const char (*)[32])"fromJson for: offsetType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        v5 = 0;
      }
      else
      {
LABEL_21:
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 672),
          "radiusOffset",
          (const std::allocator<char> *)(v2 + 96));
        radius_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( radius_offset_ptr && !fromJson<float>(radius_offset_ptr, &this->radius_offset) )
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "fromJson",
            1015);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 736),
            (const char (*)[34])"fromJson for: radiusOffset fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 800),
            "enableSelfAdapt",
            (const std::allocator<char> *)(v2 + 112));
          enable_self_adapt_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( enable_self_adapt_ptr && !fromJson<bool>(enable_self_adapt_ptr, &this->enable_self_adapt) )
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 864, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 864),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "fromJson",
              1027);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[37])"fromJson for: enableSelfAdapt fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 928),
              "showDistance",
              (const std::allocator<char> *)(v2 + 128));
            show_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( show_distance_ptr && !fromJson<float>(show_distance_ptr, &this->show_distance) )
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 992, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 992),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                "fromJson",
                1039);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[34])"fromJson for: showDistance fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1056),
                "markShowDistance",
                (const std::allocator<char> *)(v2 + 144));
              mark_show_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( mark_show_distance_ptr && !fromJson<float>(mark_show_distance_ptr, &this->mark_show_distance) )
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1120, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1120),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                  "fromJson",
                  1051);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[38])"fromJson for: markShowDistance fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  "nameShowDistance",
                  (const std::allocator<char> *)(v2 + 160));
                name_show_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( name_show_distance_ptr && !fromJson<float>(name_show_distance_ptr, &this->name_show_distance) )
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1248, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1248),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                    "fromJson",
                    1063);
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)(v2 + 1248),
                    (const char (*)[38])"fromJson for: nameShowDistance fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1312),
                    "forceHideAllBars",
                    (const std::allocator<char> *)(v2 + 176));
                  force_hide_all_bars_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1312));
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( force_hide_all_bars_ptr && !fromJson<bool>(force_hide_all_bars_ptr, &this->force_hide_all_bars) )
                  {
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1376, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1376),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                      "fromJson",
                      1075);
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      (common::milog::MiLogStream *const)(v2 + 1376),
                      (const char (*)[38])"fromJson for: forceHideAllBars fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1440),
                      "elementReactionScale",
                      (const std::allocator<char> *)(v2 + 192));
                    element_reaction_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1440));
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( element_reaction_scale_ptr
                      && !fromJson<float>(element_reaction_scale_ptr, &this->element_reaction_scale) )
                    {
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1504, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1504),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                        "fromJson",
                        1087);
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        (common::milog::MiLogStream *const)(v2 + 1504),
                        (const char (*)[42])"fromJson for: elementReactionScale fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1568),
                        "chargeBarHeightOffset",
                        (const std::allocator<char> *)(v2 + 208));
                      charge_bar_height_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1568));
                      std::string::~string((void *)(v2 + 1568));
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( charge_bar_height_offset_ptr
                        && !fromJson<float>(charge_bar_height_offset_ptr, &this->charge_bar_height_offset) )
                      {
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1632, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1632),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                          "fromJson",
                          1099);
                        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          (common::milog::MiLogStream *const)(v2 + 1632),
                          (const char (*)[43])"fromJson for: chargeBarHeightOffset fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                        v5 = 0;
                      }
                      else
                      {
                        v7 = ((_BYTE)this + 108) & 7;
                        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                        if ( (_BYTE)v8 )
                          __asan_report_store1(&this->is_json_loaded, v7, v8);
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
  v9 = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1696LL, v22);
  }
  return v9;
};

// Line 1106: range 000000000E5716FC-000000000E572058
data::ConfigBillboardPtr __cdecl data::ConfigBillboard::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBillboardPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v13[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:1119 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:111"
                        "3 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBillboard::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        1116);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[43])"fromJson for: ConfigBillboard $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBillboard>::shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBillboard((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          1122);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[41])"create ConfigBillboard fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBillboard>::shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            1127);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBillboard>::shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)jval, 0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 108) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigBillboard>::shared_ptr(
            (std::shared_ptr<data::ConfigBillboard> *const)jval,
            (std::shared_ptr<data::ConfigBillboard> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBillboard>::~shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      1110);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[48])"jsonValueFind for: ConfigBillboard $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBillboard>::shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)jval, 0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1135: range 000000000E57205A-000000000E5723CF
int32_t __cdecl data::ConfigBillboard::getHashValue(const data::ConfigBillboard *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1136";
  *(_QWORD *)(v2 + 16) = data::ConfigBillboard::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->attach_point, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->offset);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_self_adapt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_self_adapt, v2 + 32, &this->enable_self_adapt);
  common::tools::HashUtils::appendHash(this->enable_self_adapt, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->show_distance);
  }
  common::tools::HashUtils::appendHash(this->show_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mark_show_distance);
  }
  common::tools::HashUtils::appendHash(this->mark_show_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->name_show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->name_show_distance);
  }
  common::tools::HashUtils::appendHash(this->name_show_distance, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->force_hide_all_bars >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->force_hide_all_bars, (((_BYTE)this + 92) & 7u) + 3, &this->force_hide_all_bars);
  common::tools::HashUtils::appendHash(this->force_hide_all_bars, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->element_reaction_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_reaction_scale >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->element_reaction_scale);
  }
  common::tools::HashUtils::appendHash(this->element_reaction_scale, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->charge_bar_height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->charge_bar_height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->charge_bar_height_offset);
  }
  common::tools::HashUtils::appendHash(this->charge_bar_height_offset, (int32_t *)(v2 + 32));
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

// Line 1150: range 000000000E5723D0-000000000E57266B
const char *__cdecl data::enumValToStr(data::CombatBillboardSize e)
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
  if ( e == Small )
  {
    result = "Small";
  }
  else
  {
    if ( e <= Small )
    {
      switch ( e )
      {
        case Grand:
          result = "Grand";
          goto LABEL_19;
        case Normal_12:
          result = "Normal";
          goto LABEL_19;
        case Big:
          result = off_1A398B40;
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "enumValToStr",
      1162);
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
    result = (const char *)&unk_1A36E8A0;
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

// Line 1168: range 000000000E57266C-000000000E572FF0
bool __cdecl data::enumStrToVal(const std::string *s, data::CombatBillboardSize *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CombatBillboardSize> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CombatBillboardSize> >::pointer v11; // rax
  data::CombatBillboardSize second; // ecx
  char v13; // dl
  data::CombatBillboardSize *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:1181 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "enumStrToVal",
      1171);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::CombatBillboardSize>::pair<char const(&)[7],data::CombatBillboardSize,true>(
        (std::pair<const std::string,data::CombatBillboardSize> *const)(v2 + 320),
        (const char (*)[7])"Normal",
        (data::CombatBillboardSize *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Normal");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::CombatBillboardSize>::pair<char const(&)[4],data::CombatBillboardSize,true>(
        (std::pair<const std::string,data::CombatBillboardSize> *const)(v2 + 360),
        (const char (*)[4])off_1A398B40,
        (data::CombatBillboardSize *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, off_1A398B40);
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::CombatBillboardSize>::pair<char const(&)[6],data::CombatBillboardSize,true>(
        (std::pair<const std::string,data::CombatBillboardSize> *const)(v2 + 400),
        (const char (*)[6])"Grand",
        (data::CombatBillboardSize *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Grand");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::CombatBillboardSize>::pair<char const(&)[6],data::CombatBillboardSize,true>(
        (std::pair<const std::string,data::CombatBillboardSize> *const)(v2 + 440),
        (const char (*)[6])"Small",
        (data::CombatBillboardSize *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::CombatBillboardSize>>::allocator((std::allocator<std::pair<const std::string,data::CombatBillboardSize> > *const)(v2 + 48));
      std::map<std::string,data::CombatBillboardSize>::map(
        &data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m,
        (std::initializer_list<std::pair<const std::string,data::CombatBillboardSize> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::CombatBillboardSize>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m);
      e = (data::CombatBillboardSize *)&data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CombatBillboardSize>::~map,
        &data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CombatBillboardSize>>::~allocator((std::allocator<std::pair<const std::string,data::CombatBillboardSize> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CombatBillboardSize> *)(v2 + 480);
            i != (std::pair<const std::string,data::CombatBillboardSize> *)(v2 + 320);
            std::pair<std::string const,data::CombatBillboardSize>::~pair(i) )
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
    *(std::map<std::string,data::CombatBillboardSize>::iterator *)(v2 + 128) = std::map<std::string,data::CombatBillboardSize>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::CombatBillboardSize>::iterator *)(v2 + 160) = std::map<std::string,data::CombatBillboardSize>::end(&data::enumStrToVal(std::string const&,data::CombatBillboardSize &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CombatBillboardSize> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CombatBillboardSize> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumStrToVal",
        1184);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CombatBillboardSize>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CombatBillboardSize> > *const)(v2 + 128));
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

// Line 1192: range 000000000E572FF1-000000000E57304A
const char *__cdecl data::getDescription(data::CombatBillboardSize e)
{
  if ( e == Small )
    return "Small";
  if ( e <= Small )
  {
    switch ( e )
    {
      case Grand:
        return "Grand";
      case Normal_12:
        return "Normal";
      case Big:
        return off_1A398B40;
    }
  }
  return "unknown enum value!";
};

// Line 1212: range 000000000E6CB4D8-000000000E6CB719
void __cdecl data::ConfigCombatBillboardRegister::ConfigCombatBillboardRegister(
        data::ConfigCombatBillboardRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBillboard> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCombatBillboardRegister::ConfigCombatBillboardRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCombatBillboard>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigCombatBillboard",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::operator[](
         &data::g_ConfigBillboardMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBillboard>::operator=<data::ConfigCombatBillboard>(
    v4,
    (std::shared_ptr<data::ConfigCombatBillboard> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigCombatBillboard>::~shared_ptr((std::shared_ptr<data::ConfigCombatBillboard> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1215: range 000000000E57304C-000000000E5733BD
void __cdecl data::ConfigCombatBillboard::foreachMember(
        data::ConfigCombatBillboard *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 19 show_hpbar_any:1217 64 16 28 force_show_distance_any:1219 96 16 13 size_any:1221 128 "
                        "16 24 shield_bar_only_any:1223 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCombatBillboard::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 160), p_func);
  data::ConfigBillboard::foreachMember((data::ConfigBillboard *const)this, (std::function<void(std::any&)> *)(v2 + 160));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 32), &this->show_hpbar);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 64),
    &this->force_show_distance);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::CombatBillboardSize &,data::CombatBillboardSize,std::any::_Manager_internal<data::CombatBillboardSize>,true,true>(
    (std::any *const)(v2 + 96),
    &this->size);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 128),
    &this->shield_bar_only);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1228: range 000000000E5733BE-000000000E5734CE
std::shared_ptr<data::ConfigBillboard> __cdecl data::ConfigCombatBillboard::clone(
        data::ConfigCombatBillboard *const this)
{
  data::ConfigCombatBillboard *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBillboard> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCombatBillboard::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCombatBillboard,data::ConfigCombatBillboard&>(
    (common::tools::perf::allocator<data::ConfigCombatBillboard,data::ConfigCombatBillboard> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBillboard>::shared_ptr<data::ConfigCombatBillboard,void>(
    (std::shared_ptr<data::ConfigBillboard> *const)this,
    (std::shared_ptr<data::ConfigCombatBillboard> *)(v2 + 32));
  std::shared_ptr<data::ConfigCombatBillboard>::~shared_ptr((std::shared_ptr<data::ConfigCombatBillboard> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1232: range 000000000E5734D0-000000000E573513
data::ConfigCombatBillboardPtr __cdecl data::ConfigCombatBillboardFactory::create(
        data::ConfigCombatBillboardFactory *const this)
{
  data::ConfigCombatBillboardPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigCombatBillboard>();
  result._M_ptr = (std::__shared_ptr<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1234: range 000000000E573514-000000000E574267
bool __cdecl data::ConfigCombatBillboard::fromJson(data::ConfigCombatBillboard *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  const Json::Value *show_hpbar_ptr; // [rsp+10h] [rbp-330h]
  const Json::Value *force_show_distance_ptr; // [rsp+18h] [rbp-328h]
  Json::Value *size_ptr; // [rsp+20h] [rbp-320h]
  const Json::Value *shield_bar_only_ptr; // [rsp+28h] [rbp-318h]
  char v13[784]; // [rsp+30h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v13;
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
  *(_QWORD *)(v2 + 16) = data::ConfigCombatBillboard::fromJson;
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
  if ( !data::ConfigBillboard::fromJson((data::ConfigBillboard *const)this, jval) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      1237);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[37])"fromJson for: ConfigBillboard fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "showHPBar",
      (const std::allocator<char> *)(v2 + 32));
    show_hpbar_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( show_hpbar_ptr && !fromJson<bool>(show_hpbar_ptr, &this->show_hpbar) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        1249);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[31])"fromJson for: showHPBar fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        "forceShowDistance",
        (const std::allocator<char> *)(v2 + 48));
      force_show_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( force_show_distance_ptr && !fromJson<float>(force_show_distance_ptr, &this->force_show_distance) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "fromJson",
          1261);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[39])"fromJson for: forceShowDistance fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          "size",
          (const std::allocator<char> *)(v2 + 64));
        size_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !size_ptr )
          goto LABEL_25;
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 480), (Json::Value_0 *)size_ptr);
        v6 = !data::enumStrToVal((const std::string *)(v2 + 480), &this->size);
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        if ( v6 )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "fromJson",
            1273);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[26])"fromJson for: size fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
LABEL_25:
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 608),
            "shieldBarOnly",
            (const std::allocator<char> *)(v2 + 80));
          shield_bar_only_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
          std::string::~string((void *)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( shield_bar_only_ptr && !fromJson<bool>(shield_bar_only_ptr, &this->shield_bar_only) )
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
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "fromJson",
              1285);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[35])"fromJson for: shieldBarOnly fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            result = 0;
          }
          else
          {
            v7 = ((_BYTE)this + 108) & 7;
            v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
            if ( (_BYTE)v8 )
              __asan_report_store1(&this->is_json_loaded, v7, v8);
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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

// Line 1292: range 000000000E574268-000000000E574DB5
data::ConfigCombatBillboardPtr __cdecl data::ConfigCombatBillboard::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigCombatBillboardPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1305 96 16 8 ptr:1311 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1299 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCombatBillboard::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        1302);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[49])"fromJson for: ConfigCombatBillboard $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigCombatBillboard>::shared_ptr(
        (std::shared_ptr<data::ConfigCombatBillboard> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBillboard((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          1308);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBillboard fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigCombatBillboard>::shared_ptr(
          (std::shared_ptr<data::ConfigCombatBillboard> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigCombatBillboard,data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 96));
        if ( std::operator==<data::ConfigCombatBillboard>(
               (const std::shared_ptr<data::ConfigCombatBillboard> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            1314);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[40])"cast to ConfigCombatBillboardPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigCombatBillboard>::shared_ptr(
            (std::shared_ptr<data::ConfigCombatBillboard> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "parseFromJson",
              1319);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigCombatBillboard>::shared_ptr(
              (std::shared_ptr<data::ConfigCombatBillboard> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 108) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigCombatBillboard>::shared_ptr(
              (std::shared_ptr<data::ConfigCombatBillboard> *const)jval,
              (std::shared_ptr<data::ConfigCombatBillboard> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigCombatBillboard>::~shared_ptr((std::shared_ptr<data::ConfigCombatBillboard> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBillboard>::~shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      1296);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[54])"jsonValueFind for: ConfigCombatBillboard $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigCombatBillboard>::shared_ptr(
      (std::shared_ptr<data::ConfigCombatBillboard> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigCombatBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1327: range 000000000E574DB6-000000000E575019
int32_t __cdecl data::ConfigCombatBillboard::getHashValue(const data::ConfigCombatBillboard *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t result; // eax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1328";
  *(_QWORD *)(v2 + 16) = data::ConfigCombatBillboard::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBillboard::getHashValue((const data::ConfigBillboard *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  v7 = ((_BYTE)this + 109) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->show_hpbar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->show_hpbar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->show_hpbar, v7, v8);
  common::tools::HashUtils::appendHash(this->show_hpbar, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->force_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->force_show_distance);
  }
  common::tools::HashUtils::appendHash(this->force_show_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->size);
  }
  common::tools::HashUtils::appendHash(this->size, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->shield_bar_only >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->shield_bar_only, v2 + 32, &this->shield_bar_only);
  common::tools::HashUtils::appendHash(this->shield_bar_only, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v10 == (char *)v2 )
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

// Line 1337: range 000000000E57501A-000000000E5752B8
const char *__cdecl data::enumValToStr(data::ProgressBillboardType e)
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
    case General_1:
      result = "General";
      break;
    case Miracle:
      result = "Miracle";
      break;
    case Cook:
      result = "Cook";
      break;
    case BrickBreaker:
      result = "BrickBreaker";
      break;
    case LanV3BoatGame:
      result = "LanV3BoatGame";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumValToStr",
        1351);
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
      result = (const char *)&unk_1A36E8A0;
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

// Line 1357: range 000000000E5752B9-000000000E575D23
bool __cdecl data::enumStrToVal(const std::string *s, data::ProgressBillboardType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ProgressBillboardType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ProgressBillboardType> >::pointer v11; // rax
  data::ProgressBillboardType second; // ecx
  char v13; // dl
  data::ProgressBillboardType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 7 it:1371 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unkno"
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "enumStrToVal",
      1360);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ProgressBillboardType>::pair<char const(&)[8],data::ProgressBillboardType,true>(
        (std::pair<const std::string,data::ProgressBillboardType> *const)(v2 + 336),
        (const char (*)[8])"General",
        (data::ProgressBillboardType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "General");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ProgressBillboardType>::pair<char const(&)[8],data::ProgressBillboardType,true>(
        (std::pair<const std::string,data::ProgressBillboardType> *const)(v2 + 376),
        (const char (*)[8])"Miracle",
        (data::ProgressBillboardType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Miracle");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ProgressBillboardType>::pair<char const(&)[5],data::ProgressBillboardType,true>(
        (std::pair<const std::string,data::ProgressBillboardType> *const)(v2 + 416),
        (const char (*)[5])"Cook",
        (data::ProgressBillboardType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Cook");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ProgressBillboardType>::pair<char const(&)[13],data::ProgressBillboardType,true>(
        (std::pair<const std::string,data::ProgressBillboardType> *const)(v2 + 456),
        (const char (*)[13])"BrickBreaker",
        (data::ProgressBillboardType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "BrickBreaker");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ProgressBillboardType>::pair<char const(&)[14],data::ProgressBillboardType,true>(
        (std::pair<const std::string,data::ProgressBillboardType> *const)(v2 + 496),
        (const char (*)[14])"LanV3BoatGame",
        (data::ProgressBillboardType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ProgressBillboardType>>::allocator((std::allocator<std::pair<const std::string,data::ProgressBillboardType> > *const)(v2 + 48));
      std::map<std::string,data::ProgressBillboardType>::map(
        &data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ProgressBillboardType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ProgressBillboardType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m);
      e = (data::ProgressBillboardType *)&data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ProgressBillboardType>::~map,
        &data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ProgressBillboardType>>::~allocator((std::allocator<std::pair<const std::string,data::ProgressBillboardType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ProgressBillboardType> *)(v2 + 536);
            i != (std::pair<const std::string,data::ProgressBillboardType> *)(v2 + 336);
            std::pair<std::string const,data::ProgressBillboardType>::~pair(i) )
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
    *(std::map<std::string,data::ProgressBillboardType>::iterator *)(v2 + 144) = std::map<std::string,data::ProgressBillboardType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::ProgressBillboardType>::iterator *)(v2 + 176) = std::map<std::string,data::ProgressBillboardType>::end(&data::enumStrToVal(std::string const&,data::ProgressBillboardType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ProgressBillboardType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ProgressBillboardType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumStrToVal",
        1374);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ProgressBillboardType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ProgressBillboardType> > *const)(v2 + 144));
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

// Line 1382: range 000000000E575D24-000000000E575D89
const char *__cdecl data::getDescription(data::ProgressBillboardType e)
{
  const char *result; // rax

  switch ( e )
  {
    case General_1:
      result = (const char *)&unk_1A399460;
      break;
    case Miracle:
      result = (const char *)&unk_1A3994A0;
      break;
    case Cook:
      result = (const char *)&unk_1A3994E0;
      break;
    case BrickBreaker:
      result = (const char *)&unk_1A399520;
      break;
    case LanV3BoatGame:
      result = (const char *)&unk_1A399560;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1404: range 000000000E6CBEA2-000000000E6CC0E3
void __cdecl data::ConfigProgressBillboardRegister::ConfigProgressBillboardRegister(
        data::ConfigProgressBillboardRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBillboard> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigProgressBillboardRegister::ConfigProgressBillboardRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigProgressBillboard>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigProgressBillboard",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::operator[](
         &data::g_ConfigBillboardMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBillboard>::operator=<data::ConfigProgressBillboard>(
    v4,
    (std::shared_ptr<data::ConfigProgressBillboard> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigProgressBillboard>::~shared_ptr((std::shared_ptr<data::ConfigProgressBillboard> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1407: range 000000000E575D8A-000000000E57620D
void __cdecl data::ConfigProgressBillboard::foreachMember(
        data::ConfigProgressBillboard *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[336]; // [rsp+10h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 16 24 custom_key_list_any:1409 64 16 18 max_value_any:1411 96 16 27 prefab_plugin_name_any:"
                        "1413 128 16 13 type_any:1415 160 16 21 need_up_anim_any:1417 192 16 18 show_text_any:1419 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigProgressBillboard::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 224), p_func);
  data::ConfigBillboard::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 224));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::string> &,std::vector<std::string>,std::any::_Manager_external<std::vector<std::string>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->custom_key_list);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 64),
    &this->max_value);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 96),
    &this->prefab_plugin_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::ProgressBillboardType &,data::ProgressBillboardType,std::any::_Manager_internal<data::ProgressBillboardType>,true,true>(
    (std::any *const)(v2 + 128),
    &this->type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 160),
    &this->need_up_anim);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 192), &this->show_text);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 192));
  std::any::~any((std::any *const)(v2 + 192));
  std::any::~any((std::any *const)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1424: range 000000000E57620E-000000000E57631E
std::shared_ptr<data::ConfigBillboard> __cdecl data::ConfigProgressBillboard::clone(
        data::ConfigProgressBillboard *const this)
{
  data::ConfigProgressBillboard *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBillboard> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigProgressBillboard::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigProgressBillboard,data::ConfigProgressBillboard&>(
    (common::tools::perf::allocator<data::ConfigProgressBillboard,data::ConfigProgressBillboard> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBillboard>::shared_ptr<data::ConfigProgressBillboard,void>(
    (std::shared_ptr<data::ConfigBillboard> *const)this,
    (std::shared_ptr<data::ConfigProgressBillboard> *)(v2 + 32));
  std::shared_ptr<data::ConfigProgressBillboard>::~shared_ptr((std::shared_ptr<data::ConfigProgressBillboard> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1428: range 000000000E576320-000000000E576363
data::ConfigProgressBillboardPtr __cdecl data::ConfigProgressBillboardFactory::create(
        data::ConfigProgressBillboardFactory *const this)
{
  data::ConfigProgressBillboardPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigProgressBillboard>();
  result._M_ptr = (std::__shared_ptr<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1430: range 000000000E576364-000000000E5775D2
bool __cdecl data::ConfigProgressBillboard::fromJson(
        data::ConfigProgressBillboard *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  const Json::Value *custom_key_list_ptr; // [rsp+10h] [rbp-460h]
  const Json::Value *max_value_ptr; // [rsp+18h] [rbp-458h]
  const Json::Value *prefab_plugin_name_ptr; // [rsp+20h] [rbp-450h]
  Json::Value *type_ptr; // [rsp+28h] [rbp-448h]
  const Json::Value *need_up_anim_ptr; // [rsp+30h] [rbp-440h]
  const Json::Value *show_text_ptr; // [rsp+38h] [rbp-438h]
  char v15[1072]; // [rsp+40h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <u"
                        "nknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigProgressBillboard::fromJson;
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
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -202116109;
  if ( !data::ConfigBillboard::fromJson(this, jval) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      1433);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[37])"fromJson for: ConfigBillboard fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "customKeyList",
      (const std::allocator<char> *)(v2 + 32));
    custom_key_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( custom_key_list_ptr && !data::vecFromJson(custom_key_list_ptr, &this->custom_key_list) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        1445);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[35])"fromJson for: customKeyList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        "maxValue",
        (const std::allocator<char> *)(v2 + 48));
      max_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( max_value_ptr && !fromJson<float>(max_value_ptr, &this->max_value) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "fromJson",
          1457);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 384),
          (const char (*)[30])"fromJson for: maxValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 448),
          "prefabPluginName",
          (const std::allocator<char> *)(v2 + 64));
        prefab_plugin_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
        std::string::~string((void *)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( prefab_plugin_name_ptr && !fromJson<std::string>(prefab_plugin_name_ptr, &this->prefab_plugin_name) )
        {
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "fromJson",
            1469);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 512),
            (const char (*)[38])"fromJson for: prefabPluginName fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 576),
            "type",
            (const std::allocator<char> *)(v2 + 80));
          type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 576));
          std::string::~string((void *)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( !type_ptr )
            goto LABEL_30;
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 640, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 640), (Json::Value_0 *)type_ptr);
          v6 = !data::enumStrToVal((const std::string *)(v2 + 640), &this->type);
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          if ( v6 )
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
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "fromJson",
              1481);
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[26])"fromJson for: type fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
LABEL_30:
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 96);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              "needUpAnim",
              (const std::allocator<char> *)(v2 + 96));
            need_up_anim_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 96);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            if ( need_up_anim_ptr && !fromJson<bool>(need_up_anim_ptr, &this->need_up_anim) )
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
                "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                "fromJson",
                1493);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[32])"fromJson for: needUpAnim fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
              result = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 896),
                "showText",
                (const std::allocator<char> *)(v2 + 112));
              show_text_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
              std::string::~string((void *)(v2 + 896));
              *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( show_text_ptr && !fromJson<bool>(show_text_ptr, &this->show_text) )
              {
                *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 960, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 960),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
                  "fromJson",
                  1505);
                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  (common::milog::MiLogStream *const)(v2 + 960),
                  (const char (*)[30])"fromJson for: showText fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
                result = 0;
              }
              else
              {
                v7 = ((_BYTE)this + 108) & 7;
                v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                if ( (_BYTE)v8 )
                  __asan_report_store1(&this->is_json_loaded, v7, v8);
                this->is_json_loaded = 1;
                result = 1;
              }
            }
          }
        }
      }
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1512: range 000000000E5775D4-000000000E578121
data::ConfigProgressBillboardPtr __cdecl data::ConfigProgressBillboard::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigProgressBillboardPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1525 96 16 8 ptr:1531 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1519 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigProgressBillboard::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        1522);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[51])"fromJson for: ConfigProgressBillboard $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigProgressBillboard>::shared_ptr(
        (std::shared_ptr<data::ConfigProgressBillboard> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBillboard((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          1528);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBillboard fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigProgressBillboard>::shared_ptr(
          (std::shared_ptr<data::ConfigProgressBillboard> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigProgressBillboard,data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 96));
        if ( std::operator==<data::ConfigProgressBillboard>(
               (const std::shared_ptr<data::ConfigProgressBillboard> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            1534);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[42])"cast to ConfigProgressBillboardPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigProgressBillboard>::shared_ptr(
            (std::shared_ptr<data::ConfigProgressBillboard> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "parseFromJson",
              1539);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigProgressBillboard>::shared_ptr(
              (std::shared_ptr<data::ConfigProgressBillboard> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 108) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigProgressBillboard>::shared_ptr(
              (std::shared_ptr<data::ConfigProgressBillboard> *const)jval,
              (std::shared_ptr<data::ConfigProgressBillboard> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigProgressBillboard>::~shared_ptr((std::shared_ptr<data::ConfigProgressBillboard> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBillboard>::~shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      1516);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[56])"jsonValueFind for: ConfigProgressBillboard $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigProgressBillboard>::shared_ptr(
      (std::shared_ptr<data::ConfigProgressBillboard> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigProgressBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1547: range 000000000E578122-000000000E5783CB
int32_t __cdecl data::ConfigProgressBillboard::getHashValue(const data::ConfigProgressBillboard *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t VecHashValue; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1548";
  *(_QWORD *)(v2 + 16) = data::ConfigProgressBillboard::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBillboard::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  VecHashValue = data::getVecHashValue(&this->custom_key_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_value);
  }
  common::tools::HashUtils::appendHash(this->max_value, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->prefab_plugin_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type);
  }
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  v8 = ((_BYTE)this - 76) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->need_up_anim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->need_up_anim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&this->need_up_anim, v8, v9);
  common::tools::HashUtils::appendHash(this->need_up_anim, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this - 75) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->show_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->show_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->show_text, v10, v11);
  common::tools::HashUtils::appendHash(this->show_text, (int32_t *)(v2 + 32));
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

// Line 1562: range 000000000E6CC15C-000000000E6CC39D
void __cdecl data::ConfigGadgetIconBillboardRegister::ConfigGadgetIconBillboardRegister(
        data::ConfigGadgetIconBillboardRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBillboard> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetIconBillboardRegister::ConfigGadgetIconBillboardRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetIconBillboard>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigGadgetIconBillboard",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::operator[](
         &data::g_ConfigBillboardMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBillboard>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBillboard>::operator=<data::ConfigGadgetIconBillboard>(
    v4,
    (std::shared_ptr<data::ConfigGadgetIconBillboard> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigGadgetIconBillboard>::~shared_ptr((std::shared_ptr<data::ConfigGadgetIconBillboard> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1565: range 000000000E5783CC-000000000E578625
void __cdecl data::ConfigGadgetIconBillboard::foreachMember(
        data::ConfigGadgetIconBillboard *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 18 icon_name_any:1567 64 16 14 title_any:1569 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetIconBillboard::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigBillboard::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->icon_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 64),
    &this->title);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1574: range 000000000E578626-000000000E578736
std::shared_ptr<data::ConfigBillboard> __cdecl data::ConfigGadgetIconBillboard::clone(
        data::ConfigGadgetIconBillboard *const this)
{
  data::ConfigGadgetIconBillboard *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBillboard> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetIconBillboard::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetIconBillboard,data::ConfigGadgetIconBillboard&>(
    (common::tools::perf::allocator<data::ConfigGadgetIconBillboard,data::ConfigGadgetIconBillboard> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBillboard>::shared_ptr<data::ConfigGadgetIconBillboard,void>(
    (std::shared_ptr<data::ConfigBillboard> *const)this,
    (std::shared_ptr<data::ConfigGadgetIconBillboard> *)(v2 + 32));
  std::shared_ptr<data::ConfigGadgetIconBillboard>::~shared_ptr((std::shared_ptr<data::ConfigGadgetIconBillboard> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1578: range 000000000E578738-000000000E57877B
data::ConfigGadgetIconBillboardPtr __cdecl data::ConfigGadgetIconBillboardFactory::create(
        data::ConfigGadgetIconBillboardFactory *const this)
{
  data::ConfigGadgetIconBillboardPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigGadgetIconBillboard>();
  result._M_ptr = (std::__shared_ptr<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1580: range 000000000E57877C-000000000E578E8C
bool __cdecl data::ConfigGadgetIconBillboard::fromJson(
        data::ConfigGadgetIconBillboard *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *icon_name_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *title_ptr; // [rsp+18h] [rbp-1A8h]
  char v10[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetIconBillboard::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigBillboard::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "fromJson",
      1583);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBillboard fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "iconName",
      (const std::allocator<char> *)(v2 + 32));
    icon_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( icon_name_ptr && !fromJson<std::string>(icon_name_ptr, &this->icon_name) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "fromJson",
        1595);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[30])"fromJson for: iconName fails!");
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
        "title",
        (const std::allocator<char> *)(v2 + 48));
      title_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( title_ptr && !fromJson<std::string>(title_ptr, &this->title) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "fromJson",
          1607);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[27])"fromJson for: title fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 108) & 7;
        v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v7 )
          __asan_report_store1(&this->is_json_loaded, v6, v7);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 1614: range 000000000E578E8E-000000000E5799DB
data::ConfigGadgetIconBillboardPtr __cdecl data::ConfigGadgetIconBillboard::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigGadgetIconBillboardPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1627 96 16 8 ptr:1633 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1621 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetIconBillboard::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "parseFromJson",
        1624);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigGadgetIconBillboard $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigGadgetIconBillboard>::shared_ptr(
        (std::shared_ptr<data::ConfigGadgetIconBillboard> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBillboard((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "parseFromJson",
          1630);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBillboard fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigGadgetIconBillboard>::shared_ptr(
          (std::shared_ptr<data::ConfigGadgetIconBillboard> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigGadgetIconBillboard,data::ConfigBillboard>((const std::shared_ptr<data::ConfigBillboard> *)(v2 + 96));
        if ( std::operator==<data::ConfigGadgetIconBillboard>(
               (const std::shared_ptr<data::ConfigGadgetIconBillboard> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
            "parseFromJson",
            1636);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigGadgetIconBillboardPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigGadgetIconBillboard>::shared_ptr(
            (std::shared_ptr<data::ConfigGadgetIconBillboard> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
              "parseFromJson",
              1641);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigGadgetIconBillboard>::shared_ptr(
              (std::shared_ptr<data::ConfigGadgetIconBillboard> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 108) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigGadgetIconBillboard>::shared_ptr(
              (std::shared_ptr<data::ConfigGadgetIconBillboard> *const)jval,
              (std::shared_ptr<data::ConfigGadgetIconBillboard> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigGadgetIconBillboard>::~shared_ptr((std::shared_ptr<data::ConfigGadgetIconBillboard> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBillboard>::~shared_ptr((std::shared_ptr<data::ConfigBillboard> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "parseFromJson",
      1618);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigGadgetIconBillboard $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigGadgetIconBillboard>::shared_ptr(
      (std::shared_ptr<data::ConfigGadgetIconBillboard> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigGadgetIconBillboard,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1649: range 000000000E5799DC-000000000E579B37
int32_t __cdecl data::ConfigGadgetIconBillboard::getHashValue(const data::ConfigGadgetIconBillboard *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1650";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetIconBillboard::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBillboard::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->icon_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->title, (int32_t *)(v2 + 32));
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

// Line 1657: range 000000000E579B38-000000000E579F2A
const char *__cdecl data::enumValToStr(data::ComponentTag e)
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
    case Ability:
      result = "Ability";
      break;
    case AI_0:
      result = "AI";
      break;
    case AvatarAI:
      result = "AvatarAI";
      break;
    case AvatarAINoCombat:
      result = "AvatarAINoCombat";
      break;
    case Combat_0:
      result = "Combat";
      break;
    case GadgetCombat:
      result = "GadgetCombat";
      break;
    case BulletCombat:
      result = "BulletCombat";
      break;
    case GadgetCollidedCombat:
      result = "GadgetCollidedCombat";
      break;
    case ScenePropCombat:
      result = "ScenePropCombat";
      break;
    case SceneGrassWaterCombat:
      result = "SceneGrassWaterCombat";
      break;
    case CharacterCombat:
      result = "CharacterCombat";
      break;
    case AvatarCombat:
      result = "AvatarCombat";
      break;
    case MonsterCombat:
      result = "MonsterCombat";
      break;
    case HasEquip:
      result = "HasEquip";
      break;
    case HasAvatarEquip:
      result = "HasAvatarEquip";
      break;
    case HasMonsterEquip:
      result = "HasMonsterEquip";
      break;
    case Level_1:
      result = "Level";
      break;
    case Paimon_0:
      result = "Paimon";
      break;
    case SceneProp:
      result = "SceneProp";
      break;
    case Team_1:
      result = "Team";
      break;
    case HasEmotion:
      result = "HasEmotion";
      break;
    case HasBillboard:
      result = "HasBillboard";
      break;
    case HasCollision:
      result = "HasCollision";
      break;
    case HasEmojiBubble:
      result = "HasEmojiBubble";
      break;
    case HasFaceAnimation:
      result = "HasFaceAnimation";
      break;
    case HasMove:
      result = "HasMove";
      break;
    case HasBulletMove:
      result = "HasBulletMove";
      break;
    case HasHumanoidMove:
      result = "HasHumanoidMove";
      break;
    case HasNonHumanoidMove:
      result = "HasNonHumanoidMove";
      break;
    case HasAnimatorMove:
      result = "HasAnimatorMove";
      break;
    case HasNPCMove:
      result = "HasNPCMove";
      break;
    case HasSimpleMove:
      result = "HasSimpleMove";
      break;
    case HasRigidBodyMove:
      result = "HasRigidBodyMove";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumValToStr",
        1727);
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
      result = (const char *)&unk_1A36E8A0;
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

// Line 1733: range 000000000E579F2B-000000000E57B92F
bool __cdecl data::enumStrToVal(const std::string *s, data::ComponentTag *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::ComponentTag> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ComponentTag> >::pointer v10; // rax
  data::ComponentTag second; // ecx
  char v12; // dl
  bool v13; // bl
  data::ComponentTag *ea; // [rsp+10h] [rbp-900h]
  char v16[2288]; // [rsp+20h] [rbp-8F0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2240LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "40 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 8 7 it:1775 624 8 9 <unknown> 656 32 9 <"
                        "unknown> 720 32 9 <unknown> 784 1320 9 <unknown>";
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
  v4[536862738] = 61956;
  v4[536862738] = -234881024;
  v4[536862739] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862785] = -218103808;
  v4[536862786] = -202116109;
  v4[536862787] = -202116109;
  v4[536862788] = -202116109;
  v4[536862789] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 656, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 656),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
      "enumStrToVal",
      1736);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 656),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ComponentTag &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ComponentTag &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[8],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 784),
        (const char (*)[8])"Ability",
        (data::ComponentTag *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Ability");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[3],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 824),
        (const char (*)[3])"AI",
        (data::ComponentTag *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "AI");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[9],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 864),
        (const char (*)[9])"AvatarAI",
        (data::ComponentTag *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "AvatarAI");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[17],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 904),
        (const char (*)[17])"AvatarAINoCombat",
        (data::ComponentTag *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "AvatarAINoCombat");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[7],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 944),
        (const char (*)[7])"Combat",
        (data::ComponentTag *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Combat");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[13],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 984),
        (const char (*)[13])"GadgetCombat",
        (data::ComponentTag *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GadgetCombat");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[13],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1024),
        (const char (*)[13])"BulletCombat",
        (data::ComponentTag *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "BulletCombat");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[21],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1064),
        (const char (*)[21])"GadgetCollidedCombat",
        (data::ComponentTag *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "GadgetCollidedCombat");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[16],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1104),
        (const char (*)[16])"ScenePropCombat",
        (data::ComponentTag *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "ScenePropCombat");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[22],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1144),
        (const char (*)[22])"SceneGrassWaterCombat",
        (data::ComponentTag *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "SceneGrassWaterCombat");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[16],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1184),
        (const char (*)[16])"CharacterCombat",
        (data::ComponentTag *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "CharacterCombat");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[13],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1224),
        (const char (*)[13])"AvatarCombat",
        (data::ComponentTag *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "AvatarCombat");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[14],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1264),
        (const char (*)[14])"MonsterCombat",
        (data::ComponentTag *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "MonsterCombat");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[9],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1304),
        (const char (*)[9])"HasEquip",
        (data::ComponentTag *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "HasEquip");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[15],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1344),
        (const char (*)[15])"HasAvatarEquip",
        (data::ComponentTag *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "HasAvatarEquip");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[16],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1384),
        (const char (*)[16])"HasMonsterEquip",
        (data::ComponentTag *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "HasMonsterEquip");
      *(_DWORD *)(v2 + 320) = 16;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[6],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1424),
        (const char (*)[6])"Level",
        (data::ComponentTag *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "Level");
      *(_DWORD *)(v2 + 336) = 17;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[7],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1464),
        (const char (*)[7])"Paimon",
        (data::ComponentTag *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "Paimon");
      *(_DWORD *)(v2 + 352) = 18;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[10],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1504),
        (const char (*)[10])"SceneProp",
        (data::ComponentTag *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "SceneProp");
      *(_DWORD *)(v2 + 368) = 19;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[5],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1544),
        (const char (*)[5])"Team",
        (data::ComponentTag *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "Team");
      *(_DWORD *)(v2 + 384) = 20;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[11],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1584),
        (const char (*)[11])"HasEmotion",
        (data::ComponentTag *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "HasEmotion");
      *(_DWORD *)(v2 + 400) = 21;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[13],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1624),
        (const char (*)[13])"HasBillboard",
        (data::ComponentTag *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "HasBillboard");
      *(_DWORD *)(v2 + 416) = 22;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[13],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1664),
        (const char (*)[13])"HasCollision",
        (data::ComponentTag *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "HasCollision");
      *(_DWORD *)(v2 + 432) = 23;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[15],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1704),
        (const char (*)[15])"HasEmojiBubble",
        (data::ComponentTag *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "HasEmojiBubble");
      *(_DWORD *)(v2 + 448) = 24;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[17],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1744),
        (const char (*)[17])"HasFaceAnimation",
        (data::ComponentTag *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "HasFaceAnimation");
      *(_DWORD *)(v2 + 464) = 25;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[8],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1784),
        (const char (*)[8])"HasMove",
        (data::ComponentTag *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "HasMove");
      *(_DWORD *)(v2 + 480) = 26;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[14],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1824),
        (const char (*)[14])"HasBulletMove",
        (data::ComponentTag *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "HasBulletMove");
      *(_DWORD *)(v2 + 496) = 27;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[16],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1864),
        (const char (*)[16])"HasHumanoidMove",
        (data::ComponentTag *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "HasHumanoidMove");
      *(_DWORD *)(v2 + 512) = 28;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[19],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1904),
        (const char (*)[19])"HasNonHumanoidMove",
        (data::ComponentTag *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "HasNonHumanoidMove");
      *(_DWORD *)(v2 + 528) = 29;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[16],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1944),
        (const char (*)[16])"HasAnimatorMove",
        (data::ComponentTag *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "HasAnimatorMove");
      *(_DWORD *)(v2 + 544) = 30;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[11],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 1984),
        (const char (*)[11])"HasNPCMove",
        (data::ComponentTag *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "HasNPCMove");
      *(_DWORD *)(v2 + 560) = 31;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[14],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 2024),
        (const char (*)[14])"HasSimpleMove",
        (data::ComponentTag *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "HasSimpleMove");
      *(_DWORD *)(v2 + 576) = 32;
      std::pair<std::string const,data::ComponentTag>::pair<char const(&)[17],data::ComponentTag,true>(
        (std::pair<const std::string,data::ComponentTag> *const)(v2 + 2064),
        (const char (*)[17])"HasRigidBodyMove",
        (data::ComponentTag *)(v2 + 576));
      std::allocator<std::pair<std::string const,data::ComponentTag>>::allocator((std::allocator<std::pair<const std::string,data::ComponentTag> > *const)(v2 + 48));
      std::map<std::string,data::ComponentTag>::map(
        &data::enumStrToVal(std::string const&,data::ComponentTag &)::m,
        (std::initializer_list<std::pair<const std::string,data::ComponentTag> >)__PAIR128__(33LL, v2 + 784),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ComponentTag>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ComponentTag &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ComponentTag>::~map,
        &data::enumStrToVal(std::string const&,data::ComponentTag &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ComponentTag>>::~allocator((std::allocator<std::pair<const std::string,data::ComponentTag> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ComponentTag> *)(v2 + 2104);
            i != (std::pair<const std::string,data::ComponentTag> *)(v2 + 784);
            std::pair<std::string const,data::ComponentTag>::~pair(i) )
      {
        --i;
      }
      e = (data::ComponentTag *)1320;
      __asan_poison_stack_memory(v2 + 784, 1320LL);
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
    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 592, e);
    *(std::map<std::string,data::ComponentTag>::iterator *)(v2 + 592) = std::map<std::string,data::ComponentTag>::find(
                                                                          &data::enumStrToVal(std::string const&,data::ComponentTag &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 624, s);
    *(std::map<std::string,data::ComponentTag>::iterator *)(v2 + 624) = std::map<std::string,data::ComponentTag>::end(&data::enumStrToVal(std::string const&,data::ComponentTag &)::m);
    v7 = (char *)(v2 + 624);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ComponentTag> >::_Self *)(v2 + 592),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ComponentTag> >::_Self *)(v2 + 624));
    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 47) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 720, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 720),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
        "enumStrToVal",
        1778);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 720),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ComponentTag>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ComponentTag> > *const)(v2 + 592));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2240LL, v16);
  }
  return v13;
};

// Line 1786: range 000000000E57B930-000000000E57BACE
const char *__cdecl data::getDescription(data::ComponentTag e)
{
  const char *result; // rax

  switch ( e )
  {
    case Ability:
      result = (const char *)&unk_1A39AA20;
      break;
    case AI_0:
      result = (const char *)&unk_1A39AA60;
      break;
    case AvatarAI:
      result = (const char *)&unk_1A39AAA0;
      break;
    case AvatarAINoCombat:
      result = (const char *)&unk_1A39AAE0;
      break;
    case Combat_0:
      result = (const char *)&unk_1A39AB20;
      break;
    case GadgetCombat:
      result = (const char *)&unk_1A39AB60;
      break;
    case BulletCombat:
      result = (const char *)&unk_1A39ABA0;
      break;
    case GadgetCollidedCombat:
      result = (const char *)&unk_1A39ABE0;
      break;
    case ScenePropCombat:
      result = (const char *)&unk_1A39AC20;
      break;
    case SceneGrassWaterCombat:
      result = (const char *)&unk_1A39AC60;
      break;
    case CharacterCombat:
      result = (const char *)&unk_1A39ACC0;
      break;
    case AvatarCombat:
      result = (const char *)&unk_1A39AD00;
      break;
    case MonsterCombat:
      result = (const char *)&unk_1A39AD40;
      break;
    case HasEquip:
      result = (const char *)&unk_1A39AD80;
      break;
    case HasAvatarEquip:
      result = (const char *)&unk_1A39ADC0;
      break;
    case HasMonsterEquip:
      result = (const char *)&unk_1A39AE20;
      break;
    case Level_1:
      result = (const char *)&unk_1A39AE80;
      break;
    case Paimon_0:
      result = (const char *)&unk_1A39AEC0;
      break;
    case SceneProp:
      result = (const char *)&unk_1A39AF00;
      break;
    case Team_1:
      result = (const char *)&unk_1A39AF40;
      break;
    case HasEmotion:
      result = (const char *)&unk_1A39AF80;
      break;
    case HasBillboard:
      result = (const char *)&unk_1A39AFC0;
      break;
    case HasCollision:
      result = (const char *)&unk_1A39B000;
      break;
    case HasEmojiBubble:
      result = (const char *)&unk_1A39B040;
      break;
    case HasFaceAnimation:
      result = (const char *)&unk_1A39B080;
      break;
    case HasMove:
      result = (const char *)&unk_1A39B0C0;
      break;
    case HasBulletMove:
      result = (const char *)&unk_1A39B100;
      break;
    case HasHumanoidMove:
      result = (const char *)&unk_1A39B140;
      break;
    case HasNonHumanoidMove:
      result = (const char *)&unk_1A39B180;
      break;
    case HasAnimatorMove:
      result = (const char *)&unk_1A39B1C0;
      break;
    case HasNPCMove:
      result = (const char *)&unk_1A39B200;
      break;
    case HasSimpleMove:
      result = (const char *)&unk_1A39B240;
      break;
    case HasRigidBodyMove:
      result = (const char *)&unk_1A39B280;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 1861: range 000000000E57BACF-000000000E57BDAB
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ComponentTagArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::ComponentTag> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 9 elem:1867 64 32 9 <unknown>";
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
      if ( !fromJson<data::ComponentTag>(elem_jval, (data::ComponentTag *)(v3 + 48)) )
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
          "./src/json_data_auto/ComponentDefines/ConfigCommon.cpp",
          "arrFromJson",
          1870);
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
        std::vector<data::ComponentTag>::push_back(va, (const std::vector<data::ComponentTag>::value_type *)(v3 + 48));
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

// Line 1880: range 000000000E57BDAC-000000000E57C02D
int32_t __cdecl data::getArrHashValue(const data::ComponentTagArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ComponentTag *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1881 64 8 16 __for_begin:1882 96 8 14 __for_end:1882";
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
  *(std::vector<data::ComponentTag>::const_iterator *)(v2 + 64) = std::vector<data::ComponentTag>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ComponentTag>::const_iterator *)(v2 + 96) = std::vector<data::ComponentTag>::end(vec);
  while ( __gnu_cxx::operator!=<data::ComponentTag const*,std::vector<data::ComponentTag>>(
            (const __gnu_cxx::__normal_iterator<const data::ComponentTag*,std::vector<data::ComponentTag> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ComponentTag*,std::vector<data::ComponentTag> > *)(v2 + 96)) )
  {
    v5 = (data::ComponentTag *)__gnu_cxx::__normal_iterator<data::ComponentTag const*,std::vector<data::ComponentTag>>::operator*((const __gnu_cxx::__normal_iterator<const data::ComponentTag*,std::vector<data::ComponentTag> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ComponentTag const*,std::vector<data::ComponentTag>>::operator++((__gnu_cxx::__normal_iterator<const data::ComponentTag*,std::vector<data::ComponentTag> > *const)(v2 + 64));
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
