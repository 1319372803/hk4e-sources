// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigPhotographCheck.h

// Line 22: range 0000000011DE9E62-0000000011DE9F31
void __cdecl data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(data::ConfigJudgeNodeBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigJudgeNodeBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigJudgeNodeBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->node_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->node_id, v1);
  }
  this->node_id = 0;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 22: range 0000000011DEA476-0000000011DEA5CB
void __cdecl data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(
        data::ConfigJudgeNodeBase *const this,
        const data::ConfigJudgeNodeBase *a2)
{
  std::enable_shared_from_this<data::ConfigJudgeNodeBase> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t node_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigJudgeNodeBase>;
  std::enable_shared_from_this<data::ConfigJudgeNodeBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigJudgeNodeBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigJudgeNodeBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->node_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->node_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->node_id);
  }
  node_id = a2->node_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->node_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->node_id, v2);
  }
  this->node_id = node_id;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 30: range 0000000011DEA866-0000000011DEA890
void __cdecl data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(data::ConfigJudgeNodeBase *const this)
{
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
  operator delete(this, 0x20uLL);
};

// Line 30: range 0000000011DEA814-0000000011DEA865
void __cdecl data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(data::ConfigJudgeNodeBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::enable_shared_from_this<data::ConfigJudgeNodeBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigJudgeNodeBase>);
};

// Line 35: range 0000000011A738C6-0000000011A738D6
const char *__cdecl data::ConfigJudgeNodeBase::getTypeName(const data::ConfigJudgeNodeBase *const this)
{
  return "ConfigJudgeNodeBase";
};

// Line 36: range 0000000011A738D8-0000000011A73A74
int32_t __cdecl data::ConfigJudgeNodeBase::getHashNum(const data::ConfigJudgeNodeBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeNodeBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeNodeBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 55: range 0000000011A757AA-0000000011A758C5
void __cdecl data::ConfigJudgeGroupEntity::ConfigJudgeGroupEntity(data::ConfigJudgeGroupEntity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->group_entity_type = None_63;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->config_id = 0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 85: range 0000000011DEA8CA-0000000011DEA927
void __cdecl data::ConfigJudgeGroupEntityInView::ConfigJudgeGroupEntityInView(
        data::ConfigJudgeGroupEntityInView *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityInView + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::vector(&this->group_entity_list);
};

// Line 85: range 0000000011DEAD1C-0000000011DEADB2
void __cdecl data::ConfigJudgeGroupEntityInView::ConfigJudgeGroupEntityInView(
        data::ConfigJudgeGroupEntityInView *const this,
        const data::ConfigJudgeGroupEntityInView *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityInView + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::vector(&this->group_entity_list, &a2->group_entity_list);
};

// Line 92: range 0000000011E05254-0000000011E052B1
void __cdecl data::ConfigJudgeGroupEntityInView::~ConfigJudgeGroupEntityInView(
        data::ConfigJudgeGroupEntityInView *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityInView + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::~vector(&this->group_entity_list);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 92: range 0000000011E052B2-0000000011E052DC
void __cdecl data::ConfigJudgeGroupEntityInView::~ConfigJudgeGroupEntityInView(
        data::ConfigJudgeGroupEntityInView *const this)
{
  data::ConfigJudgeGroupEntityInView::~ConfigJudgeGroupEntityInView(this);
  operator delete(this, 0x38uLL);
};

// Line 97: range 0000000011A73A76-0000000011A73A86
const char *__cdecl data::ConfigJudgeGroupEntityInView::getTypeName(
        const data::ConfigJudgeGroupEntityInView *const this)
{
  return "ConfigJudgeGroupEntityInView";
};

// Line 98: range 0000000011A73A88-0000000011A73C24
int32_t __cdecl data::ConfigJudgeGroupEntityInView::getHashNum(const data::ConfigJudgeGroupEntityInView *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeGroupEntityInView::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeGroupEntityInView",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 114: range 0000000011DEB09C-0000000011DEB0DD
void __cdecl data::ConfigJudgeGroupEntityInViewFactory::ConfigJudgeGroupEntityInViewFactory(
        data::ConfigJudgeGroupEntityInViewFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityInViewFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeGroupEntityInViewFactory = v2;
};

// Line 122: range 0000000011DEB3E6-0000000011DEB4BB
void __cdecl data::ConfigJudgeCurrentTime::ConfigJudgeCurrentTime(data::ConfigJudgeCurrentTime *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCurrentTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time, v1);
  }
  this->start_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->end_time = 0.0;
};

// Line 122: range 0000000011DEB890-0000000011DEB9E8
void __cdecl data::ConfigJudgeCurrentTime::ConfigJudgeCurrentTime(
        data::ConfigJudgeCurrentTime *const this,
        const data::ConfigJudgeCurrentTime *a2)
{
  int (**v2)(...); // rdx
  float start_time; // xmm0_4
  float end_time; // xmm0_4

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCurrentTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->start_time);
  }
  start_time = a2->start_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time, a2);
  }
  this->start_time = start_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->end_time = end_time;
};

// Line 130: range 0000000011E051DA-0000000011E05227
void __cdecl data::ConfigJudgeCurrentTime::~ConfigJudgeCurrentTime(data::ConfigJudgeCurrentTime *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCurrentTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 130: range 0000000011E05228-0000000011E05252
void __cdecl data::ConfigJudgeCurrentTime::~ConfigJudgeCurrentTime(data::ConfigJudgeCurrentTime *const this)
{
  data::ConfigJudgeCurrentTime::~ConfigJudgeCurrentTime(this);
  operator delete(this, 0x28uLL);
};

// Line 135: range 0000000011A73C26-0000000011A73C36
const char *__cdecl data::ConfigJudgeCurrentTime::getTypeName(const data::ConfigJudgeCurrentTime *const this)
{
  return "ConfigJudgeCurrentTime";
};

// Line 136: range 0000000011A73C38-0000000011A73DD4
int32_t __cdecl data::ConfigJudgeCurrentTime::getHashNum(const data::ConfigJudgeCurrentTime *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeCurrentTime::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeCurrentTime",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 152: range 0000000011DEBC32-0000000011DEBC73
void __cdecl data::ConfigJudgeCurrentTimeFactory::ConfigJudgeCurrentTimeFactory(
        data::ConfigJudgeCurrentTimeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCurrentTimeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeCurrentTimeFactory = v2;
};

// Line 160: range 0000000011DEBF7C-0000000011DEBFC9
void __cdecl data::ConfigJudgeMoonOrSunInCamera::ConfigJudgeMoonOrSunInCamera(
        data::ConfigJudgeMoonOrSunInCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeMoonOrSunInCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
};

// Line 160: range 0000000011DEC45A-0000000011DEC4B2
void __cdecl data::ConfigJudgeMoonOrSunInCamera::ConfigJudgeMoonOrSunInCamera(
        data::ConfigJudgeMoonOrSunInCamera *const this,
        const data::ConfigJudgeMoonOrSunInCamera *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeMoonOrSunInCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
};

// Line 166: range 0000000011E051AE-0000000011E051D8
void __cdecl data::ConfigJudgeMoonOrSunInCamera::~ConfigJudgeMoonOrSunInCamera(
        data::ConfigJudgeMoonOrSunInCamera *const this)
{
  data::ConfigJudgeMoonOrSunInCamera::~ConfigJudgeMoonOrSunInCamera(this);
  operator delete(this, 0x20uLL);
};

// Line 166: range 0000000011E05160-0000000011E051AD
void __cdecl data::ConfigJudgeMoonOrSunInCamera::~ConfigJudgeMoonOrSunInCamera(
        data::ConfigJudgeMoonOrSunInCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeMoonOrSunInCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 171: range 0000000011A73DD6-0000000011A73DE6
const char *__cdecl data::ConfigJudgeMoonOrSunInCamera::getTypeName(
        const data::ConfigJudgeMoonOrSunInCamera *const this)
{
  return "ConfigJudgeMoonOrSunInCamera";
};

// Line 172: range 0000000011A73DE8-0000000011A73F84
int32_t __cdecl data::ConfigJudgeMoonOrSunInCamera::getHashNum(const data::ConfigJudgeMoonOrSunInCamera *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeMoonOrSunInCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeMoonOrSunInCamera",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 188: range 0000000011DEC6FC-0000000011DEC73D
void __cdecl data::ConfigJudgeMoonOrSunInCameraFactory::ConfigJudgeMoonOrSunInCameraFactory(
        data::ConfigJudgeMoonOrSunInCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeMoonOrSunInCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeMoonOrSunInCameraFactory = v2;
};

// Line 210: range 0000000011A76498-0000000011A7652A
void __cdecl data::ConfigJudgeEntityInViewData::ConfigJudgeEntityInViewData(
        data::ConfigJudgeEntityInViewData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->entity_config_id = 0;
  std::vector<unsigned int>::vector(&this->scannable_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 210: range 0000000011D27B12-0000000011D27C20
void __cdecl data::ConfigJudgeEntityInViewData::ConfigJudgeEntityInViewData(
        data::ConfigJudgeEntityInViewData *const this,
        const data::ConfigJudgeEntityInViewData *a2)
{
  uint32_t entity_config_id; // ecx
  char v3; // al
  data::UInt32Array *p_scannable_states; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigJudgeEntityInViewData *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  entity_config_id = a2->entity_config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->entity_config_id = entity_config_id;
  p_scannable_states = &v7->scannable_states;
  std::vector<unsigned int>::vector(&this->scannable_states, &v7->scannable_states);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_scannable_states, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_scannable_states) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_scannable_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 210: range 0000000011B67738-0000000011B67846
void __cdecl data::ConfigJudgeEntityInViewData::ConfigJudgeEntityInViewData(
        data::ConfigJudgeEntityInViewData *const this,
        data::ConfigJudgeEntityInViewData *a2)
{
  uint32_t entity_config_id; // ecx
  char v3; // al
  data::UInt32Array *p_scannable_states; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigJudgeEntityInViewData *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  entity_config_id = a2->entity_config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->entity_config_id = entity_config_id;
  p_scannable_states = &v7->scannable_states;
  std::vector<unsigned int>::vector(&this->scannable_states, &v7->scannable_states);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_scannable_states, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_scannable_states) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_scannable_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 210: range 0000000011A7652C-0000000011A7654A
void __cdecl data::ConfigJudgeEntityInViewData::~ConfigJudgeEntityInViewData(
        data::ConfigJudgeEntityInViewData *const this)
{
  std::vector<unsigned int>::~vector(&this->scannable_states);
};

// Line 239: range 0000000011DECBDE-0000000011DECE15
void __cdecl data::ConfigJudgeEntityInViewByEntityConfigID::ConfigJudgeEntityInViewByEntityConfigID(
        data::ConfigJudgeEntityInViewByEntityConfigID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeEntityInViewByEntityConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeEntityInViewData>::vector(&this->scan_entity_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_area_type, v1);
  }
  this->scan_area_type = Rectangle;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->width_ratio, v3);
  }
  this->width_ratio = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height_ratio, v3);
  }
  this->height_ratio = 1.0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scan_range_near_z, v4);
  }
  this->scan_range_near_z = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_range_far_z, v4);
  }
  this->scan_range_far_z = 15.0;
  v5 = ((_BYTE)this + 76) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->scan_enable_ray_cast >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->scan_enable_ray_cast >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->scan_enable_ray_cast, v5, v6);
  this->scan_enable_ray_cast = 1;
  v7 = ((_BYTE)this + 77) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->check_entity_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->check_entity_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->check_entity_active, v7, v8);
  this->check_entity_active = 1;
};

// Line 239: range 0000000011DED23A-0000000011DED645
void __cdecl data::ConfigJudgeEntityInViewByEntityConfigID::ConfigJudgeEntityInViewByEntityConfigID(
        data::ConfigJudgeEntityInViewByEntityConfigID *const this,
        const data::ConfigJudgeEntityInViewByEntityConfigID *a2)
{
  int (**v2)(...); // rdx
  data::ConfigJudgeEntityInViewDataArray *p_scan_entity_list; // rsi
  data::ScanAreaType scan_area_type; // ecx
  char v5; // al
  float width_ratio; // xmm0_4
  __int64 v7; // rsi
  float height_ratio; // xmm0_4
  float scan_range_near_z; // xmm0_4
  __int64 v10; // rsi
  float scan_range_far_z; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool scan_enable_ray_cast; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool check_entity_active; // cl
  char v20; // dl
  __int64 v21; // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeEntityInViewByEntityConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  p_scan_entity_list = &a2->scan_entity_list;
  std::vector<data::ConfigJudgeEntityInViewData>::vector(&this->scan_entity_list, &a2->scan_entity_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scan_area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scan_area_type);
  }
  scan_area_type = a2->scan_area_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->scan_area_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_scan_entity_list) = v5 != 0;
    __asan_report_store4(&this->scan_area_type, p_scan_entity_list);
  }
  this->scan_area_type = scan_area_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->width_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->width_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->width_ratio);
  }
  width_ratio = a2->width_ratio;
  v7 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->width_ratio, v7);
  }
  this->width_ratio = width_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->height_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->height_ratio);
  }
  height_ratio = a2->height_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height_ratio, v7);
  }
  this->height_ratio = height_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_range_near_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scan_range_near_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scan_range_near_z);
  }
  scan_range_near_z = a2->scan_range_near_z;
  v10 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scan_range_near_z, v10);
  }
  this->scan_range_near_z = scan_range_near_z;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_range_far_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scan_range_far_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scan_range_far_z);
  }
  scan_range_far_z = a2->scan_range_far_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_range_far_z, v10);
  }
  this->scan_range_far_z = scan_range_far_z;
  v12 = ((_BYTE)a2 + 76) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->scan_enable_ray_cast >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->scan_enable_ray_cast >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->scan_enable_ray_cast, v12, v13);
  scan_enable_ray_cast = a2->scan_enable_ray_cast;
  v15 = *(_BYTE *)(((unsigned __int64)&this->scan_enable_ray_cast >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->scan_enable_ray_cast, v12, v16);
  this->scan_enable_ray_cast = scan_enable_ray_cast;
  v17 = ((_BYTE)a2 + 77) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&a2->check_entity_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&a2->check_entity_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&a2->check_entity_active, v17, v18);
  check_entity_active = a2->check_entity_active;
  v20 = *(_BYTE *)(((unsigned __int64)&this->check_entity_active >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 77) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->check_entity_active, v17, v21);
  this->check_entity_active = check_entity_active;
};

// Line 253: range 0000000011DF3BF8-0000000011DF3C22
void __cdecl data::ConfigJudgeEntityInViewByEntityConfigID::~ConfigJudgeEntityInViewByEntityConfigID(
        data::ConfigJudgeEntityInViewByEntityConfigID *const this)
{
  data::ConfigJudgeEntityInViewByEntityConfigID::~ConfigJudgeEntityInViewByEntityConfigID(this);
  operator delete(this, 0x50uLL);
};

// Line 253: range 0000000011DF3B9A-0000000011DF3BF7
void __cdecl data::ConfigJudgeEntityInViewByEntityConfigID::~ConfigJudgeEntityInViewByEntityConfigID(
        data::ConfigJudgeEntityInViewByEntityConfigID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeEntityInViewByEntityConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeEntityInViewData>::~vector(&this->scan_entity_list);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 258: range 0000000011A73F86-0000000011A73F96
const char *__cdecl data::ConfigJudgeEntityInViewByEntityConfigID::getTypeName(
        const data::ConfigJudgeEntityInViewByEntityConfigID *const this)
{
  return "ConfigJudgeEntityInViewByEntityConfigID";
};

// Line 259: range 0000000011A73F98-0000000011A74134
int32_t __cdecl data::ConfigJudgeEntityInViewByEntityConfigID::getHashNum(
        const data::ConfigJudgeEntityInViewByEntityConfigID *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeEntityInViewByEntityConfigID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeEntityInViewByEntityConfigID",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 278: range 0000000011DED92E-0000000011DEDB6C
void __cdecl data::ConfigJudgeCrowdInViewByCrowdTypeID::ConfigJudgeCrowdInViewByCrowdTypeID(
        data::ConfigJudgeCrowdInViewByCrowdTypeID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCrowdInViewByCrowdTypeID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::vector(&this->scan_crowd_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_yoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_yoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_yoffset, v1);
  }
  this->target_yoffset = 1.0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_area_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scan_area_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scan_area_type, v3);
  }
  this->scan_area_type = Rectangle;
  if ( *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->width_ratio, v3);
  }
  this->width_ratio = 1.0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_ratio, v4);
  }
  this->height_ratio = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_range_near_z, v4);
  }
  this->scan_range_near_z = 0.0;
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scan_range_far_z, v5);
  }
  this->scan_range_far_z = 15.0;
  if ( *(char *)(((unsigned __int64)&this->scan_enable_ray_cast >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->scan_enable_ray_cast, v5, &this->scan_enable_ray_cast);
  this->scan_enable_ray_cast = 1;
};

// Line 278: range 0000000011DEDF28-0000000011DEE331
void __cdecl data::ConfigJudgeCrowdInViewByCrowdTypeID::ConfigJudgeCrowdInViewByCrowdTypeID(
        data::ConfigJudgeCrowdInViewByCrowdTypeID *const this,
        const data::ConfigJudgeCrowdInViewByCrowdTypeID *a2)
{
  int (**v2)(...); // rdx
  float target_yoffset; // xmm0_4
  __int64 v4; // rsi
  data::ScanAreaType scan_area_type; // ecx
  char v6; // dl
  float width_ratio; // xmm0_4
  float height_ratio; // xmm0_4
  __int64 v9; // rsi
  float scan_range_near_z; // xmm0_4
  float scan_range_far_z; // xmm0_4
  __int64 v12; // rsi
  bool scan_enable_ray_cast; // cl
  char v14; // al

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCrowdInViewByCrowdTypeID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::vector(&this->scan_crowd_type_list, &a2->scan_crowd_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_yoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_yoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_yoffset);
  }
  target_yoffset = a2->target_yoffset;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_yoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_yoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_yoffset, &a2->scan_crowd_type_list);
  }
  this->target_yoffset = target_yoffset;
  v4 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_area_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scan_area_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scan_area_type);
  }
  scan_area_type = a2->scan_area_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->scan_area_type >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v6 )
    __asan_report_store4(&this->scan_area_type, v4);
  this->scan_area_type = scan_area_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->width_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->width_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->width_ratio);
  }
  width_ratio = a2->width_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->width_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->width_ratio, v4);
  }
  this->width_ratio = width_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height_ratio);
  }
  height_ratio = a2->height_ratio;
  v9 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_ratio, v9);
  }
  this->height_ratio = height_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_range_near_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scan_range_near_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scan_range_near_z);
  }
  scan_range_near_z = a2->scan_range_near_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_range_near_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_range_near_z, v9);
  }
  this->scan_range_near_z = scan_range_near_z;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_range_far_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scan_range_far_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scan_range_far_z);
  }
  scan_range_far_z = a2->scan_range_far_z;
  v12 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scan_range_far_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scan_range_far_z, v12);
  }
  this->scan_range_far_z = scan_range_far_z;
  if ( *(char *)(((unsigned __int64)&a2->scan_enable_ray_cast >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->scan_enable_ray_cast, v12, &a2->scan_enable_ray_cast);
  scan_enable_ray_cast = a2->scan_enable_ray_cast;
  v14 = *(_BYTE *)(((unsigned __int64)&this->scan_enable_ray_cast >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store1(&this->scan_enable_ray_cast, v12, &this->scan_enable_ray_cast);
  }
  this->scan_enable_ray_cast = scan_enable_ray_cast;
};

// Line 292: range 0000000011E05134-0000000011E0515E
void __cdecl data::ConfigJudgeCrowdInViewByCrowdTypeID::~ConfigJudgeCrowdInViewByCrowdTypeID(
        data::ConfigJudgeCrowdInViewByCrowdTypeID *const this)
{
  data::ConfigJudgeCrowdInViewByCrowdTypeID::~ConfigJudgeCrowdInViewByCrowdTypeID(this);
  operator delete(this, 0x58uLL);
};

// Line 292: range 0000000011E050D6-0000000011E05133
void __cdecl data::ConfigJudgeCrowdInViewByCrowdTypeID::~ConfigJudgeCrowdInViewByCrowdTypeID(
        data::ConfigJudgeCrowdInViewByCrowdTypeID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCrowdInViewByCrowdTypeID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::~vector(&this->scan_crowd_type_list);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 297: range 0000000011A74136-0000000011A74146
const char *__cdecl data::ConfigJudgeCrowdInViewByCrowdTypeID::getTypeName(
        const data::ConfigJudgeCrowdInViewByCrowdTypeID *const this)
{
  return "ConfigJudgeCrowdInViewByCrowdTypeID";
};

// Line 298: range 0000000011A74148-0000000011A742E4
int32_t __cdecl data::ConfigJudgeCrowdInViewByCrowdTypeID::getHashNum(
        const data::ConfigJudgeCrowdInViewByCrowdTypeID *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeCrowdInViewByCrowdTypeID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeCrowdInViewByCrowdTypeID",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 314: range 0000000011DEE61A-0000000011DEE65B
void __cdecl data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory::ConfigJudgeCrowdInViewByCrowdTypeIDFactory(
        data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeCrowdInViewByCrowdTypeIDFactory = v2;
};

// Line 322: range 0000000011DEE964-0000000011DEE9EF
void __cdecl data::ConfigJudgeAvatarElementType::ConfigJudgeAvatarElementType(
        data::ConfigJudgeAvatarElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = None_0;
};

// Line 322: range 0000000011DEEEF0-0000000011DEEFBD
void __cdecl data::ConfigJudgeAvatarElementType::ConfigJudgeAvatarElementType(
        data::ConfigJudgeAvatarElementType *const this,
        const data::ConfigJudgeAvatarElementType *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element_type; // ecx
  char v4; // al

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element_type, a2);
  }
  this->element_type = element_type;
};

// Line 329: range 0000000011E0505C-0000000011E050A9
void __cdecl data::ConfigJudgeAvatarElementType::~ConfigJudgeAvatarElementType(
        data::ConfigJudgeAvatarElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 329: range 0000000011E050AA-0000000011E050D4
void __cdecl data::ConfigJudgeAvatarElementType::~ConfigJudgeAvatarElementType(
        data::ConfigJudgeAvatarElementType *const this)
{
  data::ConfigJudgeAvatarElementType::~ConfigJudgeAvatarElementType(this);
  operator delete(this, 0x28uLL);
};

// Line 334: range 0000000011A742E6-0000000011A742F6
const char *__cdecl data::ConfigJudgeAvatarElementType::getTypeName(
        const data::ConfigJudgeAvatarElementType *const this)
{
  return "ConfigJudgeAvatarElementType";
};

// Line 335: range 0000000011A742F8-0000000011A74494
int32_t __cdecl data::ConfigJudgeAvatarElementType::getHashNum(const data::ConfigJudgeAvatarElementType *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAvatarElementType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAvatarElementType",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 351: range 0000000011DEF206-0000000011DEF247
void __cdecl data::ConfigJudgeAvatarElementTypeFactory::ConfigJudgeAvatarElementTypeFactory(
        data::ConfigJudgeAvatarElementTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarElementTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAvatarElementTypeFactory = v2;
};

// Line 359: range 0000000011DEF550-0000000011DEF5AD
void __cdecl data::ConfigJudgeAvatarWeaponType::ConfigJudgeAvatarWeaponType(
        data::ConfigJudgeAvatarWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::string::basic_string(&this->weapon_type);
};

// Line 359: range 0000000011DEF9B2-0000000011DEFA48
void __cdecl data::ConfigJudgeAvatarWeaponType::ConfigJudgeAvatarWeaponType(
        data::ConfigJudgeAvatarWeaponType *const this,
        const data::ConfigJudgeAvatarWeaponType *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::string::basic_string(&this->weapon_type, &a2->weapon_type);
};

// Line 366: range 0000000011E05030-0000000011E0505A
void __cdecl data::ConfigJudgeAvatarWeaponType::~ConfigJudgeAvatarWeaponType(
        data::ConfigJudgeAvatarWeaponType *const this)
{
  data::ConfigJudgeAvatarWeaponType::~ConfigJudgeAvatarWeaponType(this);
  operator delete(this, 0x40uLL);
};

// Line 366: range 0000000011E04FD2-0000000011E0502F
void __cdecl data::ConfigJudgeAvatarWeaponType::~ConfigJudgeAvatarWeaponType(
        data::ConfigJudgeAvatarWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::string::~string(&this->weapon_type);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 371: range 0000000011A74496-0000000011A744A6
const char *__cdecl data::ConfigJudgeAvatarWeaponType::getTypeName(const data::ConfigJudgeAvatarWeaponType *const this)
{
  return "ConfigJudgeAvatarWeaponType";
};

// Line 372: range 0000000011A744A8-0000000011A74644
int32_t __cdecl data::ConfigJudgeAvatarWeaponType::getHashNum(const data::ConfigJudgeAvatarWeaponType *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAvatarWeaponType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAvatarWeaponType",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 388: range 0000000011DEFD32-0000000011DEFD73
void __cdecl data::ConfigJudgeAvatarWeaponTypeFactory::ConfigJudgeAvatarWeaponTypeFactory(
        data::ConfigJudgeAvatarWeaponTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarWeaponTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAvatarWeaponTypeFactory = v2;
};

// Line 396: range 0000000011DF007C-0000000011DF0107
void __cdecl data::ConfigJudgeAvatarFaceCamera::ConfigJudgeAvatarFaceCamera(
        data::ConfigJudgeAvatarFaceCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->face_degree >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_degree >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->face_degree, v1);
  }
  this->face_degree = 0;
};

// Line 396: range 0000000011DF0608-0000000011DF06D5
void __cdecl data::ConfigJudgeAvatarFaceCamera::ConfigJudgeAvatarFaceCamera(
        data::ConfigJudgeAvatarFaceCamera *const this,
        const data::ConfigJudgeAvatarFaceCamera *a2)
{
  int (**v2)(...); // rdx
  uint32_t face_degree; // ecx
  char v4; // al

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->face_degree >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->face_degree >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->face_degree);
  }
  face_degree = a2->face_degree;
  v4 = *(_BYTE *)(((unsigned __int64)&this->face_degree >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->face_degree, a2);
  }
  this->face_degree = face_degree;
};

// Line 403: range 0000000011E04FA6-0000000011E04FD0
void __cdecl data::ConfigJudgeAvatarFaceCamera::~ConfigJudgeAvatarFaceCamera(
        data::ConfigJudgeAvatarFaceCamera *const this)
{
  data::ConfigJudgeAvatarFaceCamera::~ConfigJudgeAvatarFaceCamera(this);
  operator delete(this, 0x28uLL);
};

// Line 403: range 0000000011E04F58-0000000011E04FA5
void __cdecl data::ConfigJudgeAvatarFaceCamera::~ConfigJudgeAvatarFaceCamera(
        data::ConfigJudgeAvatarFaceCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 408: range 0000000011A74646-0000000011A74656
const char *__cdecl data::ConfigJudgeAvatarFaceCamera::getTypeName(const data::ConfigJudgeAvatarFaceCamera *const this)
{
  return "ConfigJudgeAvatarFaceCamera";
};

// Line 409: range 0000000011A74658-0000000011A747F4
int32_t __cdecl data::ConfigJudgeAvatarFaceCamera::getHashNum(const data::ConfigJudgeAvatarFaceCamera *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAvatarFaceCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAvatarFaceCamera",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 0000000011DF091E-0000000011DF095F
void __cdecl data::ConfigJudgeAvatarFaceCameraFactory::ConfigJudgeAvatarFaceCameraFactory(
        data::ConfigJudgeAvatarFaceCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAvatarFaceCameraFactory = v2;
};

// Line 433: range 0000000011DF0C68-0000000011DF0CD5
void __cdecl data::ConfigJudgeAvatarFaceTarget2D::ConfigJudgeAvatarFaceTarget2D(
        data::ConfigJudgeAvatarFaceTarget2D *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceTarget2D + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::vector(&this->group_entity_list);
  data::Vector::Vector(&this->custom_direction);
};

// Line 433: range 0000000011DF10F0-0000000011DF11EA
void __cdecl data::ConfigJudgeAvatarFaceTarget2D::ConfigJudgeAvatarFaceTarget2D(
        data::ConfigJudgeAvatarFaceTarget2D *const this,
        const data::ConfigJudgeAvatarFaceTarget2D *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceTarget2D + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::vector(&this->group_entity_list, &a2->group_entity_list);
  if ( *(_WORD *)(((unsigned __int64)&this->custom_direction >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->custom_direction >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->custom_direction);
  v3 = *(_QWORD *)&a2->custom_direction.z;
  *(_QWORD *)&this->custom_direction.x = *(_QWORD *)&a2->custom_direction.x;
  *(_QWORD *)&this->custom_direction.z = v3;
};

// Line 441: range 0000000011E04F2C-0000000011E04F56
void __cdecl data::ConfigJudgeAvatarFaceTarget2D::~ConfigJudgeAvatarFaceTarget2D(
        data::ConfigJudgeAvatarFaceTarget2D *const this)
{
  data::ConfigJudgeAvatarFaceTarget2D::~ConfigJudgeAvatarFaceTarget2D(this);
  operator delete(this, 0x48uLL);
};

// Line 441: range 0000000011E04ECE-0000000011E04F2B
void __cdecl data::ConfigJudgeAvatarFaceTarget2D::~ConfigJudgeAvatarFaceTarget2D(
        data::ConfigJudgeAvatarFaceTarget2D *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceTarget2D + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::~vector(&this->group_entity_list);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 446: range 0000000011A747F6-0000000011A74806
const char *__cdecl data::ConfigJudgeAvatarFaceTarget2D::getTypeName(
        const data::ConfigJudgeAvatarFaceTarget2D *const this)
{
  return "ConfigJudgeAvatarFaceTarget2D";
};

// Line 447: range 0000000011A74808-0000000011A749A4
int32_t __cdecl data::ConfigJudgeAvatarFaceTarget2D::getHashNum(const data::ConfigJudgeAvatarFaceTarget2D *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAvatarFaceTarget2D::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAvatarFaceTarget2D",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 463: range 0000000011DF14D4-0000000011DF1515
void __cdecl data::ConfigJudgeAvatarFaceTarget2DFactory::ConfigJudgeAvatarFaceTarget2DFactory(
        data::ConfigJudgeAvatarFaceTarget2DFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarFaceTarget2DFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAvatarFaceTarget2DFactory = v2;
};

// Line 471: range 0000000011DF181E-0000000011DF187B
void __cdecl data::ConfigJudgeAvatarAnimatorState::ConfigJudgeAvatarAnimatorState(
        data::ConfigJudgeAvatarAnimatorState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarAnimatorState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::vector(&this->config_ids);
};

// Line 471: range 0000000011DF1C70-0000000011DF1D06
void __cdecl data::ConfigJudgeAvatarAnimatorState::ConfigJudgeAvatarAnimatorState(
        data::ConfigJudgeAvatarAnimatorState *const this,
        const data::ConfigJudgeAvatarAnimatorState *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarAnimatorState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::vector(&this->config_ids, &a2->config_ids);
};

// Line 478: range 0000000011E04E44-0000000011E04EA1
void __cdecl data::ConfigJudgeAvatarAnimatorState::~ConfigJudgeAvatarAnimatorState(
        data::ConfigJudgeAvatarAnimatorState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarAnimatorState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::~vector(&this->config_ids);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 478: range 0000000011E04EA2-0000000011E04ECC
void __cdecl data::ConfigJudgeAvatarAnimatorState::~ConfigJudgeAvatarAnimatorState(
        data::ConfigJudgeAvatarAnimatorState *const this)
{
  data::ConfigJudgeAvatarAnimatorState::~ConfigJudgeAvatarAnimatorState(this);
  operator delete(this, 0x38uLL);
};

// Line 483: range 0000000011A749A6-0000000011A749B6
const char *__cdecl data::ConfigJudgeAvatarAnimatorState::getTypeName(
        const data::ConfigJudgeAvatarAnimatorState *const this)
{
  return "ConfigJudgeAvatarAnimatorState";
};

// Line 484: range 0000000011A749B8-0000000011A74B54
int32_t __cdecl data::ConfigJudgeAvatarAnimatorState::getHashNum(
        const data::ConfigJudgeAvatarAnimatorState *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAvatarAnimatorState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAvatarAnimatorState",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 500: range 0000000011DF1FF0-0000000011DF2031
void __cdecl data::ConfigJudgeAvatarAnimatorStateFactory::ConfigJudgeAvatarAnimatorStateFactory(
        data::ConfigJudgeAvatarAnimatorStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarAnimatorStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAvatarAnimatorStateFactory = v2;
};

// Line 508: range 0000000011DF233A-0000000011DF23D7
void __cdecl data::ConfigJudgeGroupEntityDirectionHasBlock::ConfigJudgeGroupEntityDirectionHasBlock(
        data::ConfigJudgeGroupEntityDirectionHasBlock *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityDirectionHasBlock + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::vector(&this->group_entity_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_distance, v1);
  }
  this->detect_distance = 0.0;
};

// Line 508: range 0000000011DF27DC-0000000011DF28EA
void __cdecl data::ConfigJudgeGroupEntityDirectionHasBlock::ConfigJudgeGroupEntityDirectionHasBlock(
        data::ConfigJudgeGroupEntityDirectionHasBlock *const this,
        const data::ConfigJudgeGroupEntityDirectionHasBlock *a2)
{
  int (**v2)(...); // rdx
  float detect_distance; // xmm0_4

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityDirectionHasBlock + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::vector(&this->group_entity_list, &a2->group_entity_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->detect_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->detect_distance);
  }
  detect_distance = a2->detect_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_distance, &a2->group_entity_list);
  }
  this->detect_distance = detect_distance;
};

// Line 516: range 0000000011E04E18-0000000011E04E42
void __cdecl data::ConfigJudgeGroupEntityDirectionHasBlock::~ConfigJudgeGroupEntityDirectionHasBlock(
        data::ConfigJudgeGroupEntityDirectionHasBlock *const this)
{
  data::ConfigJudgeGroupEntityDirectionHasBlock::~ConfigJudgeGroupEntityDirectionHasBlock(this);
  operator delete(this, 0x40uLL);
};

// Line 516: range 0000000011E04DBA-0000000011E04E17
void __cdecl data::ConfigJudgeGroupEntityDirectionHasBlock::~ConfigJudgeGroupEntityDirectionHasBlock(
        data::ConfigJudgeGroupEntityDirectionHasBlock *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityDirectionHasBlock + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<data::ConfigJudgeGroupEntity>::~vector(&this->group_entity_list);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 521: range 0000000011A74B56-0000000011A74B66
const char *__cdecl data::ConfigJudgeGroupEntityDirectionHasBlock::getTypeName(
        const data::ConfigJudgeGroupEntityDirectionHasBlock *const this)
{
  return "ConfigJudgeGroupEntityDirectionHasBlock";
};

// Line 522: range 0000000011A74B68-0000000011A74D04
int32_t __cdecl data::ConfigJudgeGroupEntityDirectionHasBlock::getHashNum(
        const data::ConfigJudgeGroupEntityDirectionHasBlock *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeGroupEntityDirectionHasBlock::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeGroupEntityDirectionHasBlock",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 538: range 0000000011DF2BD4-0000000011DF2C15
void __cdecl data::ConfigJudgeGroupEntityDirectionHasBlockFactory::ConfigJudgeGroupEntityDirectionHasBlockFactory(
        data::ConfigJudgeGroupEntityDirectionHasBlockFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGroupEntityDirectionHasBlockFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeGroupEntityDirectionHasBlockFactory = v2;
};

// Line 546: range 0000000011DF2F1E-0000000011DF2F7B
void __cdecl data::ConfigJudgeAvatarConfigID::ConfigJudgeAvatarConfigID(data::ConfigJudgeAvatarConfigID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::vector(&this->config_ids);
};

// Line 546: range 0000000011DF3370-0000000011DF3406
void __cdecl data::ConfigJudgeAvatarConfigID::ConfigJudgeAvatarConfigID(
        data::ConfigJudgeAvatarConfigID *const this,
        const data::ConfigJudgeAvatarConfigID *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::vector(&this->config_ids, &a2->config_ids);
};

// Line 553: range 0000000011E04D30-0000000011E04D8D
void __cdecl data::ConfigJudgeAvatarConfigID::~ConfigJudgeAvatarConfigID(data::ConfigJudgeAvatarConfigID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<unsigned int>::~vector(&this->config_ids);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 553: range 0000000011E04D8E-0000000011E04DB8
void __cdecl data::ConfigJudgeAvatarConfigID::~ConfigJudgeAvatarConfigID(data::ConfigJudgeAvatarConfigID *const this)
{
  data::ConfigJudgeAvatarConfigID::~ConfigJudgeAvatarConfigID(this);
  operator delete(this, 0x38uLL);
};

// Line 558: range 0000000011A74D06-0000000011A74D16
const char *__cdecl data::ConfigJudgeAvatarConfigID::getTypeName(const data::ConfigJudgeAvatarConfigID *const this)
{
  return "ConfigJudgeAvatarConfigID";
};

// Line 559: range 0000000011A74D18-0000000011A74EB4
int32_t __cdecl data::ConfigJudgeAvatarConfigID::getHashNum(const data::ConfigJudgeAvatarConfigID *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAvatarConfigID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAvatarConfigID",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 575: range 0000000011DF36F0-0000000011DF3731
void __cdecl data::ConfigJudgeAvatarConfigIDFactory::ConfigJudgeAvatarConfigIDFactory(
        data::ConfigJudgeAvatarConfigIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAvatarConfigIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAvatarConfigIDFactory = v2;
};

// Line 598: range 0000000011DF3C24-0000000011DF3CAF
void __cdecl data::ConfigJudgeGrassState::ConfigJudgeGrassState(data::ConfigJudgeGrassState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeEntityInViewByEntityConfigID::ConfigJudgeEntityInViewByEntityConfigID(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGrassState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grass_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->grass_state, v1);
  }
  this->grass_state = NormalState;
};

// Line 598: range 0000000011DF406A-0000000011DF4137
void __cdecl data::ConfigJudgeGrassState::ConfigJudgeGrassState(
        data::ConfigJudgeGrassState *const this,
        const data::ConfigJudgeGrassState *a2)
{
  int (**v2)(...); // rdx
  data::EGrassState grass_state; // ecx
  char v4; // al

  data::ConfigJudgeEntityInViewByEntityConfigID::ConfigJudgeEntityInViewByEntityConfigID(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGrassState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->grass_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->grass_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->grass_state);
  }
  grass_state = a2->grass_state;
  v4 = *(_BYTE *)(((unsigned __int64)&this->grass_state >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->grass_state, a2);
  }
  this->grass_state = grass_state;
};

// Line 605: range 0000000011E04CB6-0000000011E04D03
void __cdecl data::ConfigJudgeGrassState::~ConfigJudgeGrassState(data::ConfigJudgeGrassState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGrassState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeEntityInViewByEntityConfigID::~ConfigJudgeEntityInViewByEntityConfigID(this);
};

// Line 605: range 0000000011E04D04-0000000011E04D2E
void __cdecl data::ConfigJudgeGrassState::~ConfigJudgeGrassState(data::ConfigJudgeGrassState *const this)
{
  data::ConfigJudgeGrassState::~ConfigJudgeGrassState(this);
  operator delete(this, 0x58uLL);
};

// Line 610: range 0000000011A74EB6-0000000011A74EC6
const char *__cdecl data::ConfigJudgeGrassState::getTypeName(const data::ConfigJudgeGrassState *const this)
{
  return "ConfigJudgeGrassState";
};

// Line 611: range 0000000011A74EC8-0000000011A75064
int32_t __cdecl data::ConfigJudgeGrassState::getHashNum(const data::ConfigJudgeGrassState *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeGrassState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeGrassState",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 627: range 0000000011DF4420-0000000011DF4461
void __cdecl data::ConfigJudgeGrassStateFactory::ConfigJudgeGrassStateFactory(
        data::ConfigJudgeGrassStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeGrassStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeGrassStateFactory = v2;
};

// Line 635: range 0000000011DF476A-0000000011DF47C7
void __cdecl data::ConfigJudgeAnimState::ConfigJudgeAnimState(data::ConfigJudgeAnimState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeEntityInViewByEntityConfigID::ConfigJudgeEntityInViewByEntityConfigID(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAnimState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<std::string>::vector(&this->anim_state);
};

// Line 635: range 0000000011DF4B7C-0000000011DF4C12
void __cdecl data::ConfigJudgeAnimState::ConfigJudgeAnimState(
        data::ConfigJudgeAnimState *const this,
        const data::ConfigJudgeAnimState *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeEntityInViewByEntityConfigID::ConfigJudgeEntityInViewByEntityConfigID(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAnimState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<std::string>::vector(&this->anim_state, &a2->anim_state);
};

// Line 642: range 0000000011E04C2C-0000000011E04C89
void __cdecl data::ConfigJudgeAnimState::~ConfigJudgeAnimState(data::ConfigJudgeAnimState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAnimState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<std::string>::~vector(&this->anim_state);
  data::ConfigJudgeEntityInViewByEntityConfigID::~ConfigJudgeEntityInViewByEntityConfigID(this);
};

// Line 642: range 0000000011E04C8A-0000000011E04CB4
void __cdecl data::ConfigJudgeAnimState::~ConfigJudgeAnimState(data::ConfigJudgeAnimState *const this)
{
  data::ConfigJudgeAnimState::~ConfigJudgeAnimState(this);
  operator delete(this, 0x68uLL);
};

// Line 647: range 0000000011A75066-0000000011A75076
const char *__cdecl data::ConfigJudgeAnimState::getTypeName(const data::ConfigJudgeAnimState *const this)
{
  return "ConfigJudgeAnimState";
};

// Line 648: range 0000000011A75078-0000000011A75214
int32_t __cdecl data::ConfigJudgeAnimState::getHashNum(const data::ConfigJudgeAnimState *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeAnimState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeAnimState",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 664: range 0000000011DF4EFC-0000000011DF4F3D
void __cdecl data::ConfigJudgeAnimStateFactory::ConfigJudgeAnimStateFactory(
        data::ConfigJudgeAnimStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeAnimStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeAnimStateFactory = v2;
};

// Line 672: range 0000000011DF5246-0000000011DF5293
void __cdecl data::ConfigJudgeActivityPhotoAvatarInCameraView::ConfigJudgeActivityPhotoAvatarInCameraView(
        data::ConfigJudgeActivityPhotoAvatarInCameraView *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeActivityPhotoAvatarInCameraView + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
};

// Line 672: range 0000000011DF5724-0000000011DF577C
void __cdecl data::ConfigJudgeActivityPhotoAvatarInCameraView::ConfigJudgeActivityPhotoAvatarInCameraView(
        data::ConfigJudgeActivityPhotoAvatarInCameraView *const this,
        const data::ConfigJudgeActivityPhotoAvatarInCameraView *a2)
{
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeActivityPhotoAvatarInCameraView + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
};

// Line 678: range 0000000011E04C00-0000000011E04C2A
void __cdecl data::ConfigJudgeActivityPhotoAvatarInCameraView::~ConfigJudgeActivityPhotoAvatarInCameraView(
        data::ConfigJudgeActivityPhotoAvatarInCameraView *const this)
{
  data::ConfigJudgeActivityPhotoAvatarInCameraView::~ConfigJudgeActivityPhotoAvatarInCameraView(this);
  operator delete(this, 0x20uLL);
};

// Line 678: range 0000000011E04BB2-0000000011E04BFF
void __cdecl data::ConfigJudgeActivityPhotoAvatarInCameraView::~ConfigJudgeActivityPhotoAvatarInCameraView(
        data::ConfigJudgeActivityPhotoAvatarInCameraView *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeActivityPhotoAvatarInCameraView + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 683: range 0000000011A75216-0000000011A75226
const char *__cdecl data::ConfigJudgeActivityPhotoAvatarInCameraView::getTypeName(
        const data::ConfigJudgeActivityPhotoAvatarInCameraView *const this)
{
  return "ConfigJudgeActivityPhotoAvatarInCameraView";
};

// Line 684: range 0000000011A75228-0000000011A753C4
int32_t __cdecl data::ConfigJudgeActivityPhotoAvatarInCameraView::getHashNum(
        const data::ConfigJudgeActivityPhotoAvatarInCameraView *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeActivityPhotoAvatarInCameraView::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeActivityPhotoAvatarInCameraView",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 700: range 0000000011DF59C6-0000000011DF5A07
void __cdecl data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory::ConfigJudgeActivityPhotoAvatarInCameraViewFactory(
        data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeActivityPhotoAvatarInCameraViewFactory = v2;
};

// Line 715: range 0000000011DF5D90-0000000011DF5E2B
void __cdecl data::ConfigJudgeNodeContainer::ConfigJudgeNodeContainer(data::ConfigJudgeNodeContainer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<std::shared_ptr<data::ConfigJudgeNodeBase>>::vector(&this->sub_nodes);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_node_logic_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_node_logic_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_node_logic_comb, v1);
  }
  this->sub_node_logic_comb = LOGIC_AND;
};

// Line 715: range 0000000011DF6230-0000000011DF633B
void __cdecl data::ConfigJudgeNodeContainer::ConfigJudgeNodeContainer(
        data::ConfigJudgeNodeContainer *const this,
        const data::ConfigJudgeNodeContainer *a2)
{
  int (**v2)(...); // rdx
  data::ConfigJudgeNodeList *p_sub_nodes; // rsi
  data::LogicType sub_node_logic_comb; // ecx
  char v5; // al

  data::ConfigJudgeNodeBase::ConfigJudgeNodeBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  p_sub_nodes = &a2->sub_nodes;
  std::vector<std::shared_ptr<data::ConfigJudgeNodeBase>>::vector(&this->sub_nodes, &a2->sub_nodes);
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_node_logic_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sub_node_logic_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_node_logic_comb);
  }
  sub_node_logic_comb = a2->sub_node_logic_comb;
  v5 = *(_BYTE *)(((unsigned __int64)&this->sub_node_logic_comb >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_sub_nodes) = v5 != 0;
    __asan_report_store4(&this->sub_node_logic_comb, p_sub_nodes);
  }
  this->sub_node_logic_comb = sub_node_logic_comb;
};

// Line 723: range 0000000011DF6682-0000000011DF66AC
void __cdecl data::ConfigJudgeNodeContainer::~ConfigJudgeNodeContainer(data::ConfigJudgeNodeContainer *const this)
{
  data::ConfigJudgeNodeContainer::~ConfigJudgeNodeContainer(this);
  operator delete(this, 0x40uLL);
};

// Line 723: range 0000000011DF6624-0000000011DF6681
void __cdecl data::ConfigJudgeNodeContainer::~ConfigJudgeNodeContainer(data::ConfigJudgeNodeContainer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  std::vector<std::shared_ptr<data::ConfigJudgeNodeBase>>::~vector(&this->sub_nodes);
  data::ConfigJudgeNodeBase::~ConfigJudgeNodeBase(this);
};

// Line 728: range 0000000011A753C6-0000000011A753D6
const char *__cdecl data::ConfigJudgeNodeContainer::getTypeName(const data::ConfigJudgeNodeContainer *const this)
{
  return "ConfigJudgeNodeContainer";
};

// Line 729: range 0000000011A753D8-0000000011A75574
int32_t __cdecl data::ConfigJudgeNodeContainer::getHashNum(const data::ConfigJudgeNodeContainer *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeNodeContainer::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeNodeContainer",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 748: range 0000000011DF66AE-0000000011DF670B
void __cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfo::ConfigJudgeNodeContainerWithGroupEntityInfo(
        data::ConfigJudgeNodeContainerWithGroupEntityInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigJudgeNodeContainer::ConfigJudgeNodeContainer((data::ConfigJudgeNodeContainer *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainerWithGroupEntityInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeGroupEntity::ConfigJudgeGroupEntity(&this->group_entity);
};

// Line 748: range 0000000011DF6B30-0000000011DF6C7E
void __cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfo::ConfigJudgeNodeContainerWithGroupEntityInfo(
        data::ConfigJudgeNodeContainerWithGroupEntityInfo *const this,
        const data::ConfigJudgeNodeContainerWithGroupEntityInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigJudgeNodeContainer::ConfigJudgeNodeContainer(
    (data::ConfigJudgeNodeContainer *const)this,
    (const data::ConfigJudgeNodeContainer *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainerWithGroupEntityInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigJudgeNodeBase = v2;
  if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->group_entity >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->group_entity >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->group_entity.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->group_entity.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->group_entity, 16LL);
  }
  if ( (((unsigned __int8)a2 + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->group_entity >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->group_entity >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->group_entity.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->group_entity.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->group_entity, 16LL);
  }
  v3 = *(_QWORD *)&a2->group_entity.config_id;
  *(_QWORD *)&this->group_entity.group_entity_type = *(_QWORD *)&a2->group_entity.group_entity_type;
  *(_QWORD *)&this->group_entity.config_id = v3;
};

// Line 755: range 0000000011E04B86-0000000011E04BB0
void __cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfo::~ConfigJudgeNodeContainerWithGroupEntityInfo(
        data::ConfigJudgeNodeContainerWithGroupEntityInfo *const this)
{
  data::ConfigJudgeNodeContainerWithGroupEntityInfo::~ConfigJudgeNodeContainerWithGroupEntityInfo(this);
  operator delete(this, 0x50uLL);
};

// Line 755: range 0000000011E04B38-0000000011E04B85
void __cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfo::~ConfigJudgeNodeContainerWithGroupEntityInfo(
        data::ConfigJudgeNodeContainerWithGroupEntityInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainerWithGroupEntityInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeBase = v2;
  data::ConfigJudgeNodeContainer::~ConfigJudgeNodeContainer((data::ConfigJudgeNodeContainer *const)this);
};

// Line 760: range 0000000011A75576-0000000011A75586
const char *__cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfo::getTypeName(
        const data::ConfigJudgeNodeContainerWithGroupEntityInfo *const this)
{
  return "ConfigJudgeNodeContainerWithGroupEntityInfo";
};

// Line 761: range 0000000011A75588-0000000011A75724
int32_t __cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfo::getHashNum(
        const data::ConfigJudgeNodeContainerWithGroupEntityInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigJudgeNodeContainerWithGroupEntityInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigJudgeNodeContainerWithGroupEntityInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 777: range 0000000011DF6F68-0000000011DF6FA9
void __cdecl data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory::ConfigJudgeNodeContainerWithGroupEntityInfoFactory(
        data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigJudgeNodeContainerWithGroupEntityInfoFactory = v2;
};
