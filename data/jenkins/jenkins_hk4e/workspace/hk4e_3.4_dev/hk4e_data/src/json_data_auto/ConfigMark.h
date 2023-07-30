// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigMark.h

// Line 413: range 0000000011D9FBF6-0000000011D9FCD0
void __cdecl data::ConfigLBaseMark::ConfigLBaseMark(data::ConfigLBaseMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigLBaseMark>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLBaseMark>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLBaseMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLBaseMark = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v1);
  }
  this->priority = 0;
  std::vector<std::shared_ptr<data::ConfigVBaseMark>>::vector(&this->views);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 413: range 0000000011DA022E-0000000011DA03BB
void __cdecl data::ConfigLBaseMark::ConfigLBaseMark(data::ConfigLBaseMark *const this, const data::ConfigLBaseMark *a2)
{
  std::enable_shared_from_this<data::ConfigLBaseMark> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t priority; // ecx
  char v5; // al
  data::ConfigVBaseMarkList *p_views; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigLBaseMark>;
  std::enable_shared_from_this<data::ConfigLBaseMark>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigLBaseMark>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigLBaseMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigLBaseMark = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  v5 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->priority, v2);
  }
  this->priority = priority;
  p_views = &a2->views;
  std::vector<std::shared_ptr<data::ConfigVBaseMark>>::vector(&this->views, &a2->views);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_views, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_views) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_views, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 422: range 0000000011DA06A4-0000000011DA0705
void __cdecl data::ConfigLBaseMark::~ConfigLBaseMark(data::ConfigLBaseMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLBaseMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLBaseMark = v2;
  std::vector<std::shared_ptr<data::ConfigVBaseMark>>::~vector(&this->views);
  std::enable_shared_from_this<data::ConfigLBaseMark>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLBaseMark>);
};

// Line 422: range 0000000011DA0706-0000000011DA0730
void __cdecl data::ConfigLBaseMark::~ConfigLBaseMark(data::ConfigLBaseMark *const this)
{
  data::ConfigLBaseMark::~ConfigLBaseMark(this);
  operator delete(this, 0x40uLL);
};

// Line 427: range 0000000011A470CC-0000000011A470DC
const char *__cdecl data::ConfigLBaseMark::getTypeName(const data::ConfigLBaseMark *const this)
{
  return "ConfigLBaseMark";
};

// Line 428: range 0000000011A470DE-0000000011A4727A
int32_t __cdecl data::ConfigLBaseMark::getHashNum(const data::ConfigLBaseMark *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLBaseMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLBaseMark",
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

// Line 447: range 0000000011DA0732-0000000011DA077F
void __cdecl data::ConfigLMapMark::ConfigLMapMark(data::ConfigLMapMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLBaseMark::ConfigLBaseMark(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLBaseMark = v2;
};

// Line 447: range 0000000011DA0B84-0000000011DA0BDC
void __cdecl data::ConfigLMapMark::ConfigLMapMark(data::ConfigLMapMark *const this, const data::ConfigLMapMark *a2)
{
  int (**v2)(...); // rdx

  data::ConfigLBaseMark::ConfigLBaseMark(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigLBaseMark = v2;
};

// Line 453: range 0000000011E07760-0000000011E0778A
void __cdecl data::ConfigLMapMark::~ConfigLMapMark(data::ConfigLMapMark *const this)
{
  data::ConfigLMapMark::~ConfigLMapMark(this);
  operator delete(this, 0x40uLL);
};

// Line 453: range 0000000011E07712-0000000011E0775F
void __cdecl data::ConfigLMapMark::~ConfigLMapMark(data::ConfigLMapMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLBaseMark = v2;
  data::ConfigLBaseMark::~ConfigLBaseMark(this);
};

// Line 458: range 0000000011A4727C-0000000011A4728C
const char *__cdecl data::ConfigLMapMark::getTypeName(const data::ConfigLMapMark *const this)
{
  return "ConfigLMapMark";
};

// Line 459: range 0000000011A4728E-0000000011A4742A
int32_t __cdecl data::ConfigLMapMark::getHashNum(const data::ConfigLMapMark *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLMapMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLMapMark",
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

// Line 475: range 0000000011DA0EC6-0000000011DA0F07
void __cdecl data::ConfigLMapMarkFactory::ConfigLMapMarkFactory(data::ConfigLMapMarkFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLMapMarkFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLMapMarkFactory = v2;
};

// Line 483: range 0000000011DA1210-0000000011DA12EA
void __cdecl data::ConfigVBaseMark::ConfigVBaseMark(data::ConfigVBaseMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigVBaseMark>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigVBaseMark>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVBaseMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVBaseMark = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NONE_19;
  std::string::basic_string(&this->res_path);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 483: range 0000000011DA17BA-0000000011DA1947
void __cdecl data::ConfigVBaseMark::ConfigVBaseMark(data::ConfigVBaseMark *const this, const data::ConfigVBaseMark *a2)
{
  std::enable_shared_from_this<data::ConfigVBaseMark> *v2; // rsi
  int (**v3)(...); // rdx
  data::MarkViewType type; // ecx
  char v5; // al
  std::string *p_res_path; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigVBaseMark>;
  std::enable_shared_from_this<data::ConfigVBaseMark>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigVBaseMark>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigVBaseMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigVBaseMark = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->type, v2);
  }
  this->type = type;
  p_res_path = &a2->res_path;
  std::string::basic_string(&this->res_path, &a2->res_path);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_res_path, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_res_path) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_res_path, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 492: range 0000000011DA1C30-0000000011DA1C91
void __cdecl data::ConfigVBaseMark::~ConfigVBaseMark(data::ConfigVBaseMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVBaseMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVBaseMark = v2;
  std::string::~string(&this->res_path);
  std::enable_shared_from_this<data::ConfigVBaseMark>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigVBaseMark>);
};

// Line 492: range 0000000011DA1C92-0000000011DA1CBC
void __cdecl data::ConfigVBaseMark::~ConfigVBaseMark(data::ConfigVBaseMark *const this)
{
  data::ConfigVBaseMark::~ConfigVBaseMark(this);
  operator delete(this, 0x48uLL);
};

// Line 497: range 0000000011A4742C-0000000011A4743C
const char *__cdecl data::ConfigVBaseMark::getTypeName(const data::ConfigVBaseMark *const this)
{
  return "ConfigVBaseMark";
};

// Line 498: range 0000000011A4743E-0000000011A475DA
int32_t __cdecl data::ConfigVBaseMark::getHashNum(const data::ConfigVBaseMark *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigVBaseMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVBaseMark",
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

// Line 517: range 0000000011DA1CBE-0000000011DA1DD5
void __cdecl data::ConfigVMapMark::ConfigVMapMark(data::ConfigVMapMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigVBaseMark::ConfigVBaseMark((data::ConfigVBaseMark *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVBaseMark = v2;
  v3 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->visible_type_mini_map >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->visible_type_mini_map >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->visible_type_mini_map, v3);
  }
  this->visible_type_mini_map = NONE_20;
  if ( *(_BYTE *)(((unsigned __int64)&this->visible_type_level_map >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->visible_type_level_map >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->visible_type_level_map, v3);
  }
  this->visible_type_level_map = NONE_20;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->layer_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->layer_type, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->layer_type = NORMAL_3;
};

// Line 517: range 0000000011DA21FA-0000000011DA23D1
void __cdecl data::ConfigVMapMark::ConfigVMapMark(data::ConfigVMapMark *const this, const data::ConfigVMapMark *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::MarkVisibleType visible_type_mini_map; // ecx
  char v5; // dl
  data::MarkVisibleType visible_type_level_map; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::MarkLayerType layer_type; // ecx
  char v10; // dl

  data::ConfigVBaseMark::ConfigVBaseMark((data::ConfigVBaseMark *const)this, (const data::ConfigVBaseMark *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigVBaseMark = v2;
  v3 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->visible_type_mini_map >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->visible_type_mini_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->visible_type_mini_map);
  }
  visible_type_mini_map = a2->visible_type_mini_map;
  v5 = *(_BYTE *)(((unsigned __int64)&this->visible_type_mini_map >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->visible_type_mini_map, v3);
  }
  this->visible_type_mini_map = visible_type_mini_map;
  if ( *(_BYTE *)(((unsigned __int64)&a2->visible_type_level_map >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->visible_type_level_map >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->visible_type_level_map);
  }
  visible_type_level_map = a2->visible_type_level_map;
  v7 = *(_BYTE *)(((unsigned __int64)&this->visible_type_level_map >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->visible_type_level_map, v3);
  }
  this->visible_type_level_map = visible_type_level_map;
  v8 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->layer_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->layer_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->layer_type);
  }
  layer_type = a2->layer_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->layer_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->layer_type, v8);
  }
  this->layer_type = layer_type;
};

// Line 526: range 0000000011DA26BA-0000000011DA2707
void __cdecl data::ConfigVMapMark::~ConfigVMapMark(data::ConfigVMapMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVBaseMark = v2;
  data::ConfigVBaseMark::~ConfigVBaseMark((data::ConfigVBaseMark *const)this);
};

// Line 526: range 0000000011DA2708-0000000011DA2732
void __cdecl data::ConfigVMapMark::~ConfigVMapMark(data::ConfigVMapMark *const this)
{
  data::ConfigVMapMark::~ConfigVMapMark(this);
  operator delete(this, 0x50uLL);
};

// Line 531: range 0000000011A475DC-0000000011A475EC
const char *__cdecl data::ConfigVMapMark::getTypeName(const data::ConfigVMapMark *const this)
{
  return "ConfigVMapMark";
};

// Line 532: range 0000000011A475EE-0000000011A4778A
int32_t __cdecl data::ConfigVMapMark::getHashNum(const data::ConfigVMapMark *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigVMapMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVMapMark",
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

// Line 551: range 0000000011DA2734-0000000011DA27BF
void __cdecl data::ConfigVCustomMapMark::ConfigVCustomMapMark(data::ConfigVCustomMapMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigVMapMark::ConfigVMapMark(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVCustomMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVBaseMark = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->custom_type, v1);
  }
  this->custom_type = RedCircle;
};

// Line 551: range 0000000011DA2B7A-0000000011DA2C47
void __cdecl data::ConfigVCustomMapMark::ConfigVCustomMapMark(
        data::ConfigVCustomMapMark *const this,
        const data::ConfigVCustomMapMark *a2)
{
  int (**v2)(...); // rdx
  data::MarkCustomType custom_type; // ecx
  char v4; // al

  data::ConfigVMapMark::ConfigVMapMark(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVCustomMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigVBaseMark = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->custom_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->custom_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->custom_type);
  }
  custom_type = a2->custom_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->custom_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->custom_type, a2);
  }
  this->custom_type = custom_type;
};

// Line 558: range 0000000011E07698-0000000011E076E5
void __cdecl data::ConfigVCustomMapMark::~ConfigVCustomMapMark(data::ConfigVCustomMapMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVCustomMapMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVBaseMark = v2;
  data::ConfigVMapMark::~ConfigVMapMark(this);
};

// Line 558: range 0000000011E076E6-0000000011E07710
void __cdecl data::ConfigVCustomMapMark::~ConfigVCustomMapMark(data::ConfigVCustomMapMark *const this)
{
  data::ConfigVCustomMapMark::~ConfigVCustomMapMark(this);
  operator delete(this, 0x58uLL);
};

// Line 563: range 0000000011A4778C-0000000011A4779C
const char *__cdecl data::ConfigVCustomMapMark::getTypeName(const data::ConfigVCustomMapMark *const this)
{
  return "ConfigVCustomMapMark";
};

// Line 564: range 0000000011A4779E-0000000011A4793A
int32_t __cdecl data::ConfigVCustomMapMark::getHashNum(const data::ConfigVCustomMapMark *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigVCustomMapMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVCustomMapMark",
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

// Line 580: range 0000000011DA2F30-0000000011DA2F71
void __cdecl data::ConfigVCustomMapMarkFactory::ConfigVCustomMapMarkFactory(
        data::ConfigVCustomMapMarkFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVCustomMapMarkFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVCustomMapMarkFactory = v2;
};

// Line 660: range 0000000011A51E62-0000000011A521D9
void __cdecl data::ConfigMarkIcon::ConfigMarkIcon(data::ConfigMarkIcon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_index, v1);
  }
  this->material_index = 0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mark_type, v2);
  }
  this->mark_type = Default_14;
  std::string::basic_string(&this->effect_name);
  if ( *(char *)(((unsigned __int64)&this->ignore_raycast_on_map >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_raycast_on_map, v2, &this->ignore_raycast_on_map);
  this->ignore_raycast_on_map = 0;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mark_layer, v2);
  }
  this->mark_layer = None_57;
  v3 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->visibility_on_radar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->visibility_on_radar >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->visibility_on_radar, v3);
  }
  this->visibility_on_radar = None_58;
  if ( *(_BYTE *)(((unsigned __int64)&this->visibility_on_map >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->visibility_on_map >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->visibility_on_map, v3);
  }
  this->visibility_on_map = None_58;
  v4 = ((_BYTE)this - 100) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->show_height_on_radar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->show_height_on_radar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->show_height_on_radar, v4, v5);
  this->show_height_on_radar = 0;
  v6 = ((_BYTE)this - 99) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->show_on_locked_area, v6, v7);
  this->show_on_locked_area = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->plugin_icon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->plugin_icon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->plugin_icon_type, v6);
  }
  this->plugin_icon_type = None_59;
  v8 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fallback_mark_tips_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fallback_mark_tips_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fallback_mark_tips_type, v8);
  }
  this->fallback_mark_tips_type = Default_16;
  if ( *(char *)(((unsigned __int64)&this->check_edge_on_radar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_edge_on_radar, v8, &this->check_edge_on_radar);
  this->check_edge_on_radar = 0;
  v9 = ((_BYTE)this - 87) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v9, v10);
  this->is_json_loaded = 0;
};

// Line 660: range 0000000011CDCA36-0000000011CDD122
void __cdecl data::ConfigMarkIcon::ConfigMarkIcon(data::ConfigMarkIcon *const this, const data::ConfigMarkIcon *a2)
{
  uint32_t material_index; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::MarkType mark_type; // ecx
  char v6; // dl
  std::string *p_effect_name; // rsi
  bool ignore_raycast_on_map; // cl
  char v9; // al
  std::string *p_desc; // rsi
  data::MarkOrder mark_layer; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::MarkVisibilityType visibility_on_radar; // ecx
  char v15; // dl
  data::MarkVisibilityType visibility_on_map; // ecx
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool show_height_on_radar; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool show_on_locked_area; // cl
  char v26; // dl
  __int64 v27; // rdx
  data::MarkPluginIconType plugin_icon_type; // ecx
  char v29; // al
  __int64 v30; // rsi
  data::FallbackMarkTipsType fallback_mark_tips_type; // ecx
  char v32; // dl
  bool check_edge_on_radar; // cl
  char v34; // al
  __int64 v35; // rsi
  __int64 v36; // rdx
  bool is_json_loaded; // cl
  char v38; // dl
  __int64 v39; // rdx
  const data::ConfigMarkIcon *v40; // [rsp+0h] [rbp-20h]

  v40 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v40->material_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->material_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_index);
  }
  material_index = a2->material_index;
  v3 = *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->material_index, a2);
  }
  this->material_index = material_index;
  v4 = (((_BYTE)v40 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->mark_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->mark_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->mark_type);
  }
  mark_type = v40->mark_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->mark_type, v4);
  }
  this->mark_type = mark_type;
  p_effect_name = &v40->effect_name;
  std::string::basic_string(&this->effect_name, &v40->effect_name);
  if ( *(char *)(((unsigned __int64)&v40->ignore_raycast_on_map >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v40->ignore_raycast_on_map, p_effect_name, &v40->ignore_raycast_on_map);
  ignore_raycast_on_map = v40->ignore_raycast_on_map;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ignore_raycast_on_map >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_effect_name) = v9 != 0;
    __asan_report_store1(&this->ignore_raycast_on_map, p_effect_name, &this->ignore_raycast_on_map);
  }
  this->ignore_raycast_on_map = ignore_raycast_on_map;
  std::string::basic_string(&this->title, &v40->title);
  p_desc = &v40->desc;
  std::string::basic_string(&this->desc, &v40->desc);
  if ( *(_BYTE *)(((unsigned __int64)&v40->mark_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->mark_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->mark_layer);
  }
  mark_layer = v40->mark_layer;
  v12 = *(_BYTE *)(((unsigned __int64)&this->mark_layer >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_desc) = v12 != 0;
    __asan_report_store4(&this->mark_layer, p_desc);
  }
  this->mark_layer = mark_layer;
  v13 = (((_BYTE)v40 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->visibility_on_radar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->visibility_on_radar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->visibility_on_radar);
  }
  visibility_on_radar = v40->visibility_on_radar;
  v15 = *(_BYTE *)(((unsigned __int64)&this->visibility_on_radar >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->visibility_on_radar, v13);
  }
  this->visibility_on_radar = visibility_on_radar;
  if ( *(_BYTE *)(((unsigned __int64)&v40->visibility_on_map >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->visibility_on_map >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->visibility_on_map);
  }
  visibility_on_map = v40->visibility_on_map;
  v17 = *(_BYTE *)(((unsigned __int64)&this->visibility_on_map >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->visibility_on_map, v13);
  }
  this->visibility_on_map = visibility_on_map;
  v18 = ((_BYTE)v40 - 100) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v40->show_height_on_radar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v40->show_height_on_radar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v40->show_height_on_radar, v18, v19);
  show_height_on_radar = v40->show_height_on_radar;
  v21 = *(_BYTE *)(((unsigned __int64)&this->show_height_on_radar >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->show_height_on_radar, v18, v22);
  this->show_height_on_radar = show_height_on_radar;
  v23 = ((_BYTE)v40 - 99) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v40->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v40->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v40->show_on_locked_area, v23, v24);
  show_on_locked_area = v40->show_on_locked_area;
  v26 = *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 99) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->show_on_locked_area, v23, v27);
  this->show_on_locked_area = show_on_locked_area;
  if ( *(_BYTE *)(((unsigned __int64)&v40->plugin_icon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->plugin_icon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->plugin_icon_type);
  }
  plugin_icon_type = v40->plugin_icon_type;
  v29 = *(_BYTE *)(((unsigned __int64)&this->plugin_icon_type >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v23) = v29 != 0;
    __asan_report_store4(&this->plugin_icon_type, v23);
  }
  this->plugin_icon_type = plugin_icon_type;
  v30 = (((_BYTE)v40 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->fallback_mark_tips_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->fallback_mark_tips_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->fallback_mark_tips_type);
  }
  fallback_mark_tips_type = v40->fallback_mark_tips_type;
  v32 = *(_BYTE *)(((unsigned __int64)&this->fallback_mark_tips_type >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v32 != 0;
  if ( v32 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v32 )
    __asan_report_store4(&this->fallback_mark_tips_type, v30);
  this->fallback_mark_tips_type = fallback_mark_tips_type;
  if ( *(char *)(((unsigned __int64)&v40->check_edge_on_radar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v40->check_edge_on_radar, v30, &v40->check_edge_on_radar);
  check_edge_on_radar = v40->check_edge_on_radar;
  v34 = *(_BYTE *)(((unsigned __int64)&this->check_edge_on_radar >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(v30) = v34 != 0;
    __asan_report_store1(&this->check_edge_on_radar, v30, &this->check_edge_on_radar);
  }
  this->check_edge_on_radar = check_edge_on_radar;
  v35 = ((_BYTE)v40 - 87) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&v40->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&v40->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_load1(&v40->is_json_loaded, v35, v36);
  is_json_loaded = v40->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v38 != 0;
  v39 = (v38 != 0) & (unsigned __int8)((((unsigned __int8)this - 87) & 7) >= v38);
  if ( (_BYTE)v39 )
    __asan_report_store1(&this->is_json_loaded, v35, v39);
  this->is_json_loaded = is_json_loaded;
};

// Line 660: range 0000000011A521DA-0000000011A52224
void __cdecl data::ConfigMarkIcon::~ConfigMarkIcon(data::ConfigMarkIcon *const this)
{
  std::string::~string(&this->desc);
  std::string::~string(&this->title);
  std::string::~string(&this->effect_name);
  std::string::~string(this);
};
