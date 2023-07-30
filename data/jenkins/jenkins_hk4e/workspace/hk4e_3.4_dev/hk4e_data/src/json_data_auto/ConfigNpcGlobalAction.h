// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigNpcGlobalAction.h

// Line 22: range 000000001216FFE2-0000000012170074
void __cdecl data::NpcCommonCond::NpcCommonCond(data::NpcCommonCond *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->cond_type = QUEST_COND_NONE;
  std::vector<int>::vector(&this->param_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 22: range 000000000FA0BBCE-000000000FA0BCDC
void __cdecl data::NpcCommonCond::NpcCommonCond(data::NpcCommonCond *const this, const data::NpcCommonCond *a2)
{
  data::QuestCondType cond_type; // ecx
  char v3; // al
  data::Int32List *p_param_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::NpcCommonCond *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->cond_type = cond_type;
  p_param_list = &v7->param_list;
  std::vector<int>::vector(&this->param_list, &v7->param_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 22: range 000000001236337C-000000001236348A
void __cdecl data::NpcCommonCond::NpcCommonCond(data::NpcCommonCond *const this, data::NpcCommonCond *a2)
{
  data::QuestCondType cond_type; // ecx
  char v3; // al
  data::Int32List *p_param_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::NpcCommonCond *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->cond_type = cond_type;
  p_param_list = &v7->param_list;
  std::vector<int>::vector(&this->param_list, &v7->param_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 48: range 000000000FA069E8-000000000FA06A06
void __cdecl data::NpcCommonCond::~NpcCommonCond(data::NpcCommonCond *const this)
{
  std::vector<int>::~vector(&this->param_list);
};

// Line 73: range 00000000127135CA-0000000012713656
void __cdecl data::NpcActionCondBase::NpcActionCondBase(data::NpcActionCondBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::NpcActionCondBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::NpcActionCondBase>);
  v2 = (int (**)(...))(&`vtable for'data::NpcActionCondBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 73: range 0000000012713B20-0000000012713BF6
void __cdecl data::NpcActionCondBase::NpcActionCondBase(
        data::NpcActionCondBase *const this,
        const data::NpcActionCondBase *a2)
{
  std::enable_shared_from_this<data::NpcActionCondBase> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::NpcActionCondBase>;
  std::enable_shared_from_this<data::NpcActionCondBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::NpcActionCondBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::NpcActionCondBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_NpcActionCondBase = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 80: range 0000000012713E40-0000000012713E91
void __cdecl data::NpcActionCondBase::~NpcActionCondBase(data::NpcActionCondBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcActionCondBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondBase = v2;
  std::enable_shared_from_this<data::NpcActionCondBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::NpcActionCondBase>);
};

// Line 80: range 0000000012713E92-0000000012713EBC
void __cdecl data::NpcActionCondBase::~NpcActionCondBase(data::NpcActionCondBase *const this)
{
  data::NpcActionCondBase::~NpcActionCondBase(this);
  operator delete(this, 0x20uLL);
};

// Line 85: range 000000001216E9C0-000000001216E9D0
const char *__cdecl data::NpcActionCondBase::getTypeName(const data::NpcActionCondBase *const this)
{
  return "NpcActionCondBase";
};

// Line 86: range 000000001216E9D2-000000001216EB6E
int32_t __cdecl data::NpcActionCondBase::getHashNum(const data::NpcActionCondBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::NpcActionCondBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "NpcActionCondBase",
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

// Line 105: range 0000000012713EBE-0000000012714013
void __cdecl data::NpcActionQuestCond::NpcActionQuestCond(data::NpcActionQuestCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::NpcActionCondBase::NpcActionCondBase((data::NpcActionCondBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::NpcActionQuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondBase = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cond_type, v3);
  }
  this->cond_type = QUEST_COND_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->param0 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param0 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param0, v3);
  }
  this->param0 = 0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param1, v4);
  }
  this->param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param2, v4);
  }
  this->param2 = 0;
};

// Line 105: range 00000000127143EE-000000001271463A
void __cdecl data::NpcActionQuestCond::NpcActionQuestCond(
        data::NpcActionQuestCond *const this,
        const data::NpcActionQuestCond *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::QuestCondType cond_type; // ecx
  char v5; // dl
  int32_t param0; // ecx
  char v7; // al
  __int64 v8; // rsi
  int32_t param1; // ecx
  char v10; // dl
  int32_t param2; // ecx
  char v12; // al

  data::NpcActionCondBase::NpcActionCondBase((data::NpcActionCondBase *const)this, (const data::NpcActionCondBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::NpcActionQuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NpcActionCondBase = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cond_type, v3);
  }
  this->cond_type = cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param0 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param0 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param0);
  }
  param0 = a2->param0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param0 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->param0, v3);
  }
  this->param0 = param0;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->param1);
  }
  param1 = a2->param1;
  v10 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->param1, v8);
  }
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param2);
  }
  param2 = a2->param2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->param2, v8);
  }
  this->param2 = param2;
};

// Line 115: range 000000001274CFB6-000000001274CFE0
void __cdecl data::NpcActionQuestCond::~NpcActionQuestCond(data::NpcActionQuestCond *const this)
{
  data::NpcActionQuestCond::~NpcActionQuestCond(this);
  operator delete(this, 0x30uLL);
};

// Line 115: range 000000001274CF68-000000001274CFB5
void __cdecl data::NpcActionQuestCond::~NpcActionQuestCond(data::NpcActionQuestCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcActionQuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondBase = v2;
  data::NpcActionCondBase::~NpcActionCondBase((data::NpcActionCondBase *const)this);
};

// Line 120: range 000000001216EB70-000000001216EB80
const char *__cdecl data::NpcActionQuestCond::getTypeName(const data::NpcActionQuestCond *const this)
{
  return "NpcActionQuestCond";
};

// Line 121: range 000000001216EB82-000000001216ED1E
int32_t __cdecl data::NpcActionQuestCond::getHashNum(const data::NpcActionQuestCond *const this)
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
  *(_QWORD *)(v1 + 16) = data::NpcActionQuestCond::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "NpcActionQuestCond",
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

// Line 137: range 0000000012714884-00000000127148C5
void __cdecl data::NpcActionQuestCondFactory::NpcActionQuestCondFactory(data::NpcActionQuestCondFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcActionQuestCondFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionQuestCondFactory = v2;
};

// Line 145: range 0000000012714BCE-0000000012714C5B
void __cdecl data::NpcActionCondAvatarInArea::NpcActionCondAvatarInArea(data::NpcActionCondAvatarInArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::NpcActionCondBase::NpcActionCondBase(this);
  v2 = (int (**)(...))(&`vtable for'data::NpcActionCondAvatarInArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondBase = v2;
  std::vector<unsigned int>::vector(&this->area1_list);
  std::vector<unsigned int>::vector(&this->area2_list);
  std::vector<std::string>::vector(&this->polygons);
  std::vector<unsigned int>::vector(&this->special_scenes);
};

// Line 145: range 0000000012715010-0000000012715136
void __cdecl data::NpcActionCondAvatarInArea::NpcActionCondAvatarInArea(
        data::NpcActionCondAvatarInArea *const this,
        const data::NpcActionCondAvatarInArea *a2)
{
  int (**v2)(...); // rdx

  data::NpcActionCondBase::NpcActionCondBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::NpcActionCondAvatarInArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NpcActionCondBase = v2;
  std::vector<unsigned int>::vector(&this->area1_list, &a2->area1_list);
  std::vector<unsigned int>::vector(&this->area2_list, &a2->area2_list);
  std::vector<std::string>::vector(&this->polygons, &a2->polygons);
  std::vector<unsigned int>::vector(&this->special_scenes, &a2->special_scenes);
};

// Line 155: range 000000001274CF3C-000000001274CF66
void __cdecl data::NpcActionCondAvatarInArea::~NpcActionCondAvatarInArea(data::NpcActionCondAvatarInArea *const this)
{
  data::NpcActionCondAvatarInArea::~NpcActionCondAvatarInArea(this);
  operator delete(this, 0x80uLL);
};

// Line 155: range 000000001274CEAE-000000001274CF3B
void __cdecl data::NpcActionCondAvatarInArea::~NpcActionCondAvatarInArea(data::NpcActionCondAvatarInArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcActionCondAvatarInArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondBase = v2;
  std::vector<unsigned int>::~vector(&this->special_scenes);
  std::vector<std::string>::~vector(&this->polygons);
  std::vector<unsigned int>::~vector(&this->area2_list);
  std::vector<unsigned int>::~vector(&this->area1_list);
  data::NpcActionCondBase::~NpcActionCondBase(this);
};

// Line 160: range 000000001216ED20-000000001216ED30
const char *__cdecl data::NpcActionCondAvatarInArea::getTypeName(const data::NpcActionCondAvatarInArea *const this)
{
  return "NpcActionCondAvatarInArea";
};

// Line 161: range 000000001216ED32-000000001216EECE
int32_t __cdecl data::NpcActionCondAvatarInArea::getHashNum(const data::NpcActionCondAvatarInArea *const this)
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
  *(_QWORD *)(v1 + 16) = data::NpcActionCondAvatarInArea::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "NpcActionCondAvatarInArea",
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

// Line 177: range 0000000012715420-0000000012715461
void __cdecl data::NpcActionCondAvatarInAreaFactory::NpcActionCondAvatarInAreaFactory(
        data::NpcActionCondAvatarInAreaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcActionCondAvatarInAreaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcActionCondAvatarInAreaFactory = v2;
};

// Line 192: range 0000000012170E8E-0000000012170F20
void __cdecl data::NpcCondGroup::NpcCondGroup(data::NpcCondGroup *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->cond_comb_type = LOGIC_NONE;
  std::vector<std::shared_ptr<data::NpcActionCondBase>>::vector(&this->npc_action_cond_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 192: range 000000001264787E-000000001264798C
void __cdecl data::NpcCondGroup::NpcCondGroup(data::NpcCondGroup *const this, const data::NpcCondGroup *a2)
{
  data::LogicType cond_comb_type; // ecx
  char v3; // al
  data::NpcActionCondList *p_npc_action_cond_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::NpcCondGroup *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cond_comb_type = a2->cond_comb_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->cond_comb_type = cond_comb_type;
  p_npc_action_cond_list = &v7->npc_action_cond_list;
  std::vector<std::shared_ptr<data::NpcActionCondBase>>::vector(&this->npc_action_cond_list, &v7->npc_action_cond_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_npc_action_cond_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_npc_action_cond_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_npc_action_cond_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 192: range 0000000012170F22-0000000012170F40
void __cdecl data::NpcCondGroup::~NpcCondGroup(data::NpcCondGroup *const this)
{
  std::vector<std::shared_ptr<data::NpcActionCondBase>>::~vector(&this->npc_action_cond_list);
};

// Line 216: range 00000000127157B2-0000000012715881
void __cdecl data::ConfigNpcBaseAction::ConfigNpcBaseAction(data::ConfigNpcBaseAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigNpcBaseAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigNpcBaseAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcBaseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_type, v1);
  }
  this->action_type = NPC_ACTION_NONE;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 216: range 0000000012715DC6-0000000012715F1B
void __cdecl data::ConfigNpcBaseAction::ConfigNpcBaseAction(
        data::ConfigNpcBaseAction *const this,
        const data::ConfigNpcBaseAction *a2)
{
  std::enable_shared_from_this<data::ConfigNpcBaseAction> *v2; // rsi
  int (**v3)(...); // rdx
  data::NpcActionType action_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigNpcBaseAction>;
  std::enable_shared_from_this<data::ConfigNpcBaseAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigNpcBaseAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigNpcBaseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigNpcBaseAction = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action_type);
  }
  action_type = a2->action_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->action_type, v2);
  }
  this->action_type = action_type;
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

// Line 224: range 00000000127166EC-000000001271673D
void __cdecl data::ConfigNpcBaseAction::~ConfigNpcBaseAction(data::ConfigNpcBaseAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcBaseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  std::enable_shared_from_this<data::ConfigNpcBaseAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigNpcBaseAction>);
};

// Line 224: range 000000001271673E-0000000012716768
void __cdecl data::ConfigNpcBaseAction::~ConfigNpcBaseAction(data::ConfigNpcBaseAction *const this)
{
  data::ConfigNpcBaseAction::~ConfigNpcBaseAction(this);
  operator delete(this, 0x20uLL);
};

// Line 229: range 000000001216EED0-000000001216EEE0
const char *__cdecl data::ConfigNpcBaseAction::getTypeName(const data::ConfigNpcBaseAction *const this)
{
  return "ConfigNpcBaseAction";
};

// Line 230: range 000000001216EEE2-000000001216F07E
int32_t __cdecl data::ConfigNpcBaseAction::getHashNum(const data::ConfigNpcBaseAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpcBaseAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNpcBaseAction",
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

// Line 256: range 0000000012170F96-0000000012171048
void __cdecl data::ConfigNpcActionSuite::ConfigNpcActionSuite(data::ConfigNpcActionSuite *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->action_id = 0;
  data::NpcCondGroup::NpcCondGroup(&this->cond_grp);
  std::vector<std::shared_ptr<data::ConfigNpcBaseAction>>::vector(&this->success_actions);
  std::vector<std::shared_ptr<data::ConfigNpcBaseAction>>::vector(&this->fail_actions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 256: range 000000001264798E-0000000012647B0E
void __cdecl data::ConfigNpcActionSuite::ConfigNpcActionSuite(
        data::ConfigNpcActionSuite *const this,
        const data::ConfigNpcActionSuite *a2)
{
  uint32_t action_id; // ecx
  char v3; // al
  data::ConfigNpcActionArray *p_fail_actions; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigNpcActionSuite *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  action_id = a2->action_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->action_id = action_id;
  data::NpcCondGroup::NpcCondGroup(&this->cond_grp, &v7->cond_grp);
  std::vector<std::shared_ptr<data::ConfigNpcBaseAction>>::vector(&this->success_actions, &v7->success_actions);
  p_fail_actions = &v7->fail_actions;
  std::vector<std::shared_ptr<data::ConfigNpcBaseAction>>::vector(&this->fail_actions, &v7->fail_actions);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_fail_actions, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_fail_actions) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fail_actions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 256: range 000000001217104A-0000000012171088
void __cdecl data::ConfigNpcActionSuite::~ConfigNpcActionSuite(data::ConfigNpcActionSuite *const this)
{
  std::vector<std::shared_ptr<data::ConfigNpcBaseAction>>::~vector(&this->fail_actions);
  std::vector<std::shared_ptr<data::ConfigNpcBaseAction>>::~vector(&this->success_actions);
  data::NpcCondGroup::~NpcCondGroup(&this->cond_grp);
};

// Line 289: range 000000001271676A-00000000127167D7
void __cdecl data::ConfigNpcAttachItemAction::ConfigNpcAttachItemAction(data::ConfigNpcAttachItemAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcAttachItemAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  std::string::basic_string(&this->attach_name);
  data::ConfigAttachment::ConfigAttachment(&this->attach_data);
};

// Line 289: range 0000000012716B86-0000000012716C4C
void __cdecl data::ConfigNpcAttachItemAction::ConfigNpcAttachItemAction(
        data::ConfigNpcAttachItemAction *const this,
        const data::ConfigNpcAttachItemAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcAttachItemAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigNpcBaseAction = v2;
  std::string::basic_string(&this->attach_name, &a2->attach_name);
  data::ConfigAttachment::ConfigAttachment(&this->attach_data, &a2->attach_data);
};

// Line 297: range 000000001274CE82-000000001274CEAC
void __cdecl data::ConfigNpcAttachItemAction::~ConfigNpcAttachItemAction(data::ConfigNpcAttachItemAction *const this)
{
  data::ConfigNpcAttachItemAction::~ConfigNpcAttachItemAction(this);
  operator delete(this, 0xD8uLL);
};

// Line 297: range 000000001274CE14-000000001274CE81
void __cdecl data::ConfigNpcAttachItemAction::~ConfigNpcAttachItemAction(data::ConfigNpcAttachItemAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcAttachItemAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  data::ConfigAttachment::~ConfigAttachment(&this->attach_data);
  std::string::~string(&this->attach_name);
  data::ConfigNpcBaseAction::~ConfigNpcBaseAction(this);
};

// Line 302: range 000000001216F080-000000001216F090
const char *__cdecl data::ConfigNpcAttachItemAction::getTypeName(const data::ConfigNpcAttachItemAction *const this)
{
  return "ConfigNpcAttachItemAction";
};

// Line 303: range 000000001216F092-000000001216F22E
int32_t __cdecl data::ConfigNpcAttachItemAction::getHashNum(const data::ConfigNpcAttachItemAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpcAttachItemAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNpcAttachItemAction",
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

// Line 319: range 0000000012716F36-0000000012716F77
void __cdecl data::ConfigNpcAttachItemActionFactory::ConfigNpcAttachItemActionFactory(
        data::ConfigNpcAttachItemActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcAttachItemActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcAttachItemActionFactory = v2;
};

// Line 327: range 0000000012717280-00000000127172DD
void __cdecl data::ConfigNpcDeAttachItemAction::ConfigNpcDeAttachItemAction(
        data::ConfigNpcDeAttachItemAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcDeAttachItemAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  std::string::basic_string(&this->attach_name);
};

// Line 327: range 00000000127176E2-0000000012717778
void __cdecl data::ConfigNpcDeAttachItemAction::ConfigNpcDeAttachItemAction(
        data::ConfigNpcDeAttachItemAction *const this,
        const data::ConfigNpcDeAttachItemAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcDeAttachItemAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigNpcBaseAction = v2;
  std::string::basic_string(&this->attach_name, &a2->attach_name);
};

// Line 334: range 000000001274CDE8-000000001274CE12
void __cdecl data::ConfigNpcDeAttachItemAction::~ConfigNpcDeAttachItemAction(
        data::ConfigNpcDeAttachItemAction *const this)
{
  data::ConfigNpcDeAttachItemAction::~ConfigNpcDeAttachItemAction(this);
  operator delete(this, 0x40uLL);
};

// Line 334: range 000000001274CD8A-000000001274CDE7
void __cdecl data::ConfigNpcDeAttachItemAction::~ConfigNpcDeAttachItemAction(
        data::ConfigNpcDeAttachItemAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcDeAttachItemAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  std::string::~string(&this->attach_name);
  data::ConfigNpcBaseAction::~ConfigNpcBaseAction(this);
};

// Line 339: range 000000001216F230-000000001216F240
const char *__cdecl data::ConfigNpcDeAttachItemAction::getTypeName(const data::ConfigNpcDeAttachItemAction *const this)
{
  return "ConfigNpcDeAttachItemAction";
};

// Line 340: range 000000001216F242-000000001216F3DE
int32_t __cdecl data::ConfigNpcDeAttachItemAction::getHashNum(const data::ConfigNpcDeAttachItemAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpcDeAttachItemAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNpcDeAttachItemAction",
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

// Line 356: range 0000000012717A62-0000000012717AA3
void __cdecl data::ConfigNpcDeAttachItemActionFactory::ConfigNpcDeAttachItemActionFactory(
        data::ConfigNpcDeAttachItemActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcDeAttachItemActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcDeAttachItemActionFactory = v2;
};

// Line 364: range 0000000012717DAC-0000000012717DF9
void __cdecl data::ConfigShowNpcAction::ConfigShowNpcAction(data::ConfigShowNpcAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowNpcAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
};

// Line 364: range 000000001271828A-00000000127182E2
void __cdecl data::ConfigShowNpcAction::ConfigShowNpcAction(
        data::ConfigShowNpcAction *const this,
        const data::ConfigShowNpcAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowNpcAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigNpcBaseAction = v2;
};

// Line 370: range 000000001274CD10-000000001274CD5D
void __cdecl data::ConfigShowNpcAction::~ConfigShowNpcAction(data::ConfigShowNpcAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowNpcAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  data::ConfigNpcBaseAction::~ConfigNpcBaseAction(this);
};

// Line 370: range 000000001274CD5E-000000001274CD88
void __cdecl data::ConfigShowNpcAction::~ConfigShowNpcAction(data::ConfigShowNpcAction *const this)
{
  data::ConfigShowNpcAction::~ConfigShowNpcAction(this);
  operator delete(this, 0x20uLL);
};

// Line 375: range 000000001216F3E0-000000001216F3F0
const char *__cdecl data::ConfigShowNpcAction::getTypeName(const data::ConfigShowNpcAction *const this)
{
  return "ConfigShowNpcAction";
};

// Line 376: range 000000001216F3F2-000000001216F58E
int32_t __cdecl data::ConfigShowNpcAction::getHashNum(const data::ConfigShowNpcAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShowNpcAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShowNpcAction",
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

// Line 392: range 000000001271852C-000000001271856D
void __cdecl data::ConfigShowNpcActionFactory::ConfigShowNpcActionFactory(data::ConfigShowNpcActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowNpcActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShowNpcActionFactory = v2;
};

// Line 400: range 0000000012718876-00000000127188C3
void __cdecl data::ConfigHideNpcAction::ConfigHideNpcAction(data::ConfigHideNpcAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigHideNpcAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
};

// Line 400: range 0000000012718D54-0000000012718DAC
void __cdecl data::ConfigHideNpcAction::ConfigHideNpcAction(
        data::ConfigHideNpcAction *const this,
        const data::ConfigHideNpcAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigNpcBaseAction::ConfigNpcBaseAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigHideNpcAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigNpcBaseAction = v2;
};

// Line 406: range 000000001274CCE4-000000001274CD0E
void __cdecl data::ConfigHideNpcAction::~ConfigHideNpcAction(data::ConfigHideNpcAction *const this)
{
  data::ConfigHideNpcAction::~ConfigHideNpcAction(this);
  operator delete(this, 0x20uLL);
};

// Line 406: range 000000001274CC96-000000001274CCE3
void __cdecl data::ConfigHideNpcAction::~ConfigHideNpcAction(data::ConfigHideNpcAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigHideNpcAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcBaseAction = v2;
  data::ConfigNpcBaseAction::~ConfigNpcBaseAction(this);
};

// Line 411: range 000000001216F590-000000001216F5A0
const char *__cdecl data::ConfigHideNpcAction::getTypeName(const data::ConfigHideNpcAction *const this)
{
  return "ConfigHideNpcAction";
};

// Line 412: range 000000001216F5A2-000000001216F73E
int32_t __cdecl data::ConfigHideNpcAction::getHashNum(const data::ConfigHideNpcAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigHideNpcAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigHideNpcAction",
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

// Line 428: range 0000000012718FF6-0000000012719037
void __cdecl data::ConfigHideNpcActionFactory::ConfigHideNpcActionFactory(data::ConfigHideNpcActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigHideNpcActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHideNpcActionFactory = v2;
};
