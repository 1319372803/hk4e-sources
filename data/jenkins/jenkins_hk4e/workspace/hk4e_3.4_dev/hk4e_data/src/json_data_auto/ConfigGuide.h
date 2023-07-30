// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigGuide.h

// Line 139: range 000000000DED5142-000000000DED5375
void __cdecl data::ConfigGuideHasItemCondition::ConfigGuideHasItemCondition(
        data::ConfigGuideHasItemCondition *const this,
        const data::ConfigGuideHasItemCondition *a2)
{
  int (**v2)(...); // rdx
  data::Int32List *p_material_type_list; // rsi
  data::GuideItemType type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool not_have; // cl
  char v9; // dl
  __int64 v10; // rdx
  float value; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasItemCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::vector<unsigned int>>::vector(&this->item_idlists, &a2->item_idlists);
  p_material_type_list = &a2->material_type_list;
  std::vector<int>::vector(&this->material_type_list, &a2->material_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_material_type_list) = v5 != 0;
    __asan_report_store4(&this->type, p_material_type_list);
  }
  this->type = type;
  v6 = ((_BYTE)a2 + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->not_have >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->not_have >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->not_have, v6, v7);
  not_have = a2->not_have;
  v9 = *(_BYTE *)(((unsigned __int64)&this->not_have >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->not_have, v6, v10);
  this->not_have = not_have;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v6);
  }
  this->value = value;
};

// Line 209: range 000000000DEC7EAC-000000000DEC7F38
void __cdecl data::ConfigBaseGuide::ConfigBaseGuide(data::ConfigBaseGuide *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBaseGuide>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseGuide>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseGuide + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 209: range 000000000DEC84A6-000000000DEC857C
void __cdecl data::ConfigBaseGuide::ConfigBaseGuide(data::ConfigBaseGuide *const this, const data::ConfigBaseGuide *a2)
{
  std::enable_shared_from_this<data::ConfigBaseGuide> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseGuide>;
  std::enable_shared_from_this<data::ConfigBaseGuide>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseGuide>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseGuide + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseGuide = v3;
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

// Line 216: range 000000000DEC8818-000000000DEC8842
void __cdecl data::ConfigBaseGuide::~ConfigBaseGuide(data::ConfigBaseGuide *const this)
{
  data::ConfigBaseGuide::~ConfigBaseGuide(this);
  operator delete(this, 0x20uLL);
};

// Line 216: range 000000000DEC87C6-000000000DEC8817
void __cdecl data::ConfigBaseGuide::~ConfigBaseGuide(data::ConfigBaseGuide *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseGuide + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::enable_shared_from_this<data::ConfigBaseGuide>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseGuide>);
};

// Line 221: range 000000000D777936-000000000D777946
const char *__cdecl data::ConfigBaseGuide::getTypeName(const data::ConfigBaseGuide *const this)
{
  return "ConfigBaseGuide";
};

// Line 222: range 000000000D777948-000000000D777AE4
int32_t __cdecl data::ConfigBaseGuide::getHashNum(const data::ConfigBaseGuide *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseGuide::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseGuide",
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

// Line 241: range 000000000DEC8844-000000000DEC8891
void __cdecl data::ConfigGuideAction::ConfigGuideAction(data::ConfigGuideAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseGuide::ConfigBaseGuide(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 241: range 000000000DEC8CA6-000000000DEC8CFE
void __cdecl data::ConfigGuideAction::ConfigGuideAction(
        data::ConfigGuideAction *const this,
        const data::ConfigGuideAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseGuide::ConfigBaseGuide(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 247: range 000000000DEEEF30-000000000DEEEF7D
void __cdecl data::ConfigGuideAction::~ConfigGuideAction(data::ConfigGuideAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigBaseGuide::~ConfigBaseGuide(this);
};

// Line 247: range 000000000DEEEF7E-000000000DEEEFA8
void __cdecl data::ConfigGuideAction::~ConfigGuideAction(data::ConfigGuideAction *const this)
{
  data::ConfigGuideAction::~ConfigGuideAction(this);
  operator delete(this, 0x20uLL);
};

// Line 252: range 000000000D777AE6-000000000D777AF6
const char *__cdecl data::ConfigGuideAction::getTypeName(const data::ConfigGuideAction *const this)
{
  return "ConfigGuideAction";
};

// Line 253: range 000000000D777AF8-000000000D777C94
int32_t __cdecl data::ConfigGuideAction::getHashNum(const data::ConfigGuideAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAction",
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

// Line 296: range 000000000DEC90FE-000000000DEC91CC
void __cdecl data::ConfigGuideCondition::ConfigGuideCondition(data::ConfigGuideCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseGuide::ConfigBaseGuide((data::ConfigBaseGuide *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->general_condition_type, v3);
  }
  this->general_condition_type = None_15;
  if ( *(char *)(((unsigned __int64)&this->general_condition_val >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->general_condition_val, v3, &this->general_condition_val);
  this->general_condition_val = 0;
};

// Line 296: range 000000000DEC96CA-000000000DEC981D
void __cdecl data::ConfigGuideCondition::ConfigGuideCondition(
        data::ConfigGuideCondition *const this,
        const data::ConfigGuideCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideGeneralConditionType general_condition_type; // ecx
  char v5; // dl
  bool general_condition_val; // cl
  char v7; // al

  data::ConfigBaseGuide::ConfigBaseGuide((data::ConfigBaseGuide *const)this, (const data::ConfigBaseGuide *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->general_condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->general_condition_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->general_condition_type);
  }
  general_condition_type = a2->general_condition_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->general_condition_type, v3);
  this->general_condition_type = general_condition_type;
  if ( *(char *)(((unsigned __int64)&a2->general_condition_val >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->general_condition_val, v3, &a2->general_condition_val);
  general_condition_val = a2->general_condition_val;
  v7 = *(_BYTE *)(((unsigned __int64)&this->general_condition_val >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->general_condition_val, v3, &this->general_condition_val);
  }
  this->general_condition_val = general_condition_val;
};

// Line 304: range 000000000DEC9A66-000000000DEC9AB3
void __cdecl data::ConfigGuideCondition::~ConfigGuideCondition(data::ConfigGuideCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigBaseGuide::~ConfigBaseGuide((data::ConfigBaseGuide *const)this);
};

// Line 304: range 000000000DEC9AB4-000000000DEC9ADE
void __cdecl data::ConfigGuideCondition::~ConfigGuideCondition(data::ConfigGuideCondition *const this)
{
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 309: range 000000000D777C96-000000000D777CA6
const char *__cdecl data::ConfigGuideCondition::getTypeName(const data::ConfigGuideCondition *const this)
{
  return "ConfigGuideCondition";
};

// Line 310: range 000000000D777CA8-000000000D777E44
int32_t __cdecl data::ConfigGuideCondition::getHashNum(const data::ConfigGuideCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCondition",
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

// Line 329: range 000000000DEC9AE0-000000000DEC9B2D
void __cdecl data::ConfigGuideGeneralCondition::ConfigGuideGeneralCondition(
        data::ConfigGuideGeneralCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideGeneralCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 329: range 000000000DECA02A-000000000DECA082
void __cdecl data::ConfigGuideGeneralCondition::ConfigGuideGeneralCondition(
        data::ConfigGuideGeneralCondition *const this,
        const data::ConfigGuideGeneralCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideGeneralCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 335: range 000000000DF51BDA-000000000DF51C27
void __cdecl data::ConfigGuideGeneralCondition::~ConfigGuideGeneralCondition(
        data::ConfigGuideGeneralCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideGeneralCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 335: range 000000000DF51C28-000000000DF51C52
void __cdecl data::ConfigGuideGeneralCondition::~ConfigGuideGeneralCondition(
        data::ConfigGuideGeneralCondition *const this)
{
  data::ConfigGuideGeneralCondition::~ConfigGuideGeneralCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 340: range 000000000D777E46-000000000D777E56
const char *__cdecl data::ConfigGuideGeneralCondition::getTypeName(const data::ConfigGuideGeneralCondition *const this)
{
  return "ConfigGuideGeneralCondition";
};

// Line 341: range 000000000D777E58-000000000D777FF4
int32_t __cdecl data::ConfigGuideGeneralCondition::getHashNum(const data::ConfigGuideGeneralCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideGeneralCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideGeneralCondition",
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

// Line 357: range 000000000DECA2CC-000000000DECA30D
void __cdecl data::ConfigGuideGeneralConditionFactory::ConfigGuideGeneralConditionFactory(
        data::ConfigGuideGeneralConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideGeneralConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideGeneralConditionFactory = v2;
};

// Line 377: range 000000000D78529C-000000000D785395
void __cdecl data::ConfigGuideTask::ConfigGuideTask(data::ConfigGuideTask *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_freshman_guide >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_freshman_guide, v1, &this->is_freshman_guide);
  this->is_freshman_guide = 0;
  std::vector<std::shared_ptr<data::ConfigGuideCondition>>::vector(&this->predicates);
  std::vector<std::shared_ptr<data::ConfigGuideCondition>>::vector(&this->on_check);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_guide);
  std::vector<std::vector<std::shared_ptr<data::ConfigGuideCondition>>>::vector(&this->finish_condition);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_finish);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_quit);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 377: range 000000000DD18F6A-000000000DD191C2
void __cdecl data::ConfigGuideTask::ConfigGuideTask(data::ConfigGuideTask *const this, const data::ConfigGuideTask *a2)
{
  bool is_freshman_guide; // cl
  char v3; // al
  data::ConfigGuideActionList *p_on_quit; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigGuideTask *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->is_freshman_guide >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_freshman_guide, a2, &a2->is_freshman_guide);
  is_freshman_guide = a2->is_freshman_guide;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_freshman_guide >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_freshman_guide, a2, &this->is_freshman_guide);
  }
  this->is_freshman_guide = is_freshman_guide;
  std::vector<std::shared_ptr<data::ConfigGuideCondition>>::vector(&this->predicates, &v7->predicates);
  std::vector<std::shared_ptr<data::ConfigGuideCondition>>::vector(&this->on_check, &v7->on_check);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_guide, &v7->on_guide);
  std::vector<std::vector<std::shared_ptr<data::ConfigGuideCondition>>>::vector(
    &this->finish_condition,
    &v7->finish_condition);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_finish, &v7->on_finish);
  p_on_quit = &v7->on_quit;
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_quit, &v7->on_quit);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_on_quit, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_on_quit) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_quit, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 377: range 000000000D785396-000000000D785414
void __cdecl data::ConfigGuideTask::~ConfigGuideTask(data::ConfigGuideTask *const this)
{
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->on_quit);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->on_finish);
  std::vector<std::vector<std::shared_ptr<data::ConfigGuideCondition>>>::~vector(&this->finish_condition);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->on_guide);
  std::vector<std::shared_ptr<data::ConfigGuideCondition>>::~vector(&this->on_check);
  std::vector<std::shared_ptr<data::ConfigGuideCondition>>::~vector(&this->predicates);
  std::string::~string(this);
};

// Line 414: range 000000000DECA9A4-000000000DECAA37
void __cdecl data::ConfigAvatarEquipChangedCondition::ConfigAvatarEquipChangedCondition(
        data::ConfigAvatarEquipChangedCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarEquipChangedCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->config_id = 0;
};

// Line 414: range 000000000DECAE0C-000000000DECAEE9
void __cdecl data::ConfigAvatarEquipChangedCondition::ConfigAvatarEquipChangedCondition(
        data::ConfigAvatarEquipChangedCondition *const this,
        const data::ConfigAvatarEquipChangedCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t config_id; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarEquipChangedCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = config_id;
};

// Line 421: range 000000000DF51B60-000000000DF51BAD
void __cdecl data::ConfigAvatarEquipChangedCondition::~ConfigAvatarEquipChangedCondition(
        data::ConfigAvatarEquipChangedCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarEquipChangedCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 421: range 000000000DF51BAE-000000000DF51BD8
void __cdecl data::ConfigAvatarEquipChangedCondition::~ConfigAvatarEquipChangedCondition(
        data::ConfigAvatarEquipChangedCondition *const this)
{
  data::ConfigAvatarEquipChangedCondition::~ConfigAvatarEquipChangedCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 426: range 000000000D777FF6-000000000D778006
const char *__cdecl data::ConfigAvatarEquipChangedCondition::getTypeName(
        const data::ConfigAvatarEquipChangedCondition *const this)
{
  return "ConfigAvatarEquipChangedCondition";
};

// Line 427: range 000000000D778008-000000000D7781A4
int32_t __cdecl data::ConfigAvatarEquipChangedCondition::getHashNum(
        const data::ConfigAvatarEquipChangedCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAvatarEquipChangedCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAvatarEquipChangedCondition",
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

// Line 443: range 000000000DECB132-000000000DECB173
void __cdecl data::ConfigAvatarEquipChangedConditionFactory::ConfigAvatarEquipChangedConditionFactory(
        data::ConfigAvatarEquipChangedConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarEquipChangedConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAvatarEquipChangedConditionFactory = v2;
};

// Line 451: range 000000000DECB47C-000000000DECB54A
void __cdecl data::ConfigGuideOpenStateCondition::ConfigGuideOpenStateCondition(
        data::ConfigGuideOpenStateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_state, v3);
  }
  this->open_state = OPEN_STATE_NONE_0;
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value, v3, &this->value);
  this->value = 0;
};

// Line 451: range 000000000DECB926-000000000DECBA79
void __cdecl data::ConfigGuideOpenStateCondition::ConfigGuideOpenStateCondition(
        data::ConfigGuideOpenStateCondition *const this,
        const data::ConfigGuideOpenStateCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideOpenStateType open_state; // ecx
  char v5; // dl
  bool value; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->open_state);
  }
  open_state = a2->open_state;
  v5 = *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->open_state, v3);
  this->open_state = open_state;
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value, v3, &a2->value);
  value = a2->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->value, v3, &this->value);
  }
  this->value = value;
};

// Line 459: range 000000000DF51B34-000000000DF51B5E
void __cdecl data::ConfigGuideOpenStateCondition::~ConfigGuideOpenStateCondition(
        data::ConfigGuideOpenStateCondition *const this)
{
  data::ConfigGuideOpenStateCondition::~ConfigGuideOpenStateCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 459: range 000000000DF51AE6-000000000DF51B33
void __cdecl data::ConfigGuideOpenStateCondition::~ConfigGuideOpenStateCondition(
        data::ConfigGuideOpenStateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 464: range 000000000D7781A6-000000000D7781B6
const char *__cdecl data::ConfigGuideOpenStateCondition::getTypeName(
        const data::ConfigGuideOpenStateCondition *const this)
{
  return "ConfigGuideOpenStateCondition";
};

// Line 465: range 000000000D7781B8-000000000D778354
int32_t __cdecl data::ConfigGuideOpenStateCondition::getHashNum(const data::ConfigGuideOpenStateCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideOpenStateCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideOpenStateCondition",
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

// Line 475: range 000000000DF4C4A8-000000000DF4C581
void __cdecl data::ConfigInputHint::ConfigInputHint(data::ConfigInputHint *const this, const data::ConfigInputHint *a2)
{
  data::ConfigInputActionList *p_action_info_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_action_info_list = &a2->action_info_list;
  std::vector<data::InputActionType>::vector(&this->action_info_list, p_action_info_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_action_info_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_action_info_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_action_info_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 481: range 000000000DECBCC2-000000000DECBD03
void __cdecl data::ConfigGuideOpenStateConditionFactory::ConfigGuideOpenStateConditionFactory(
        data::ConfigGuideOpenStateConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenStateConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideOpenStateConditionFactory = v2;
};

// Line 489: range 000000000DECC00C-000000000DECC0DA
void __cdecl data::ConfigGuideLevelCondition::ConfigGuideLevelCondition(data::ConfigGuideLevelCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_level, v3);
  }
  this->limit_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_less >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_less, v3, &this->is_less);
  this->is_less = 0;
};

// Line 489: range 000000000DECC4B6-000000000DECC609
void __cdecl data::ConfigGuideLevelCondition::ConfigGuideLevelCondition(
        data::ConfigGuideLevelCondition *const this,
        const data::ConfigGuideLevelCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t limit_level; // ecx
  char v5; // dl
  bool is_less; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_level);
  }
  limit_level = a2->limit_level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->limit_level, v3);
  this->limit_level = limit_level;
  if ( *(char *)(((unsigned __int64)&a2->is_less >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_less, v3, &a2->is_less);
  is_less = a2->is_less;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_less >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_less, v3, &this->is_less);
  }
  this->is_less = is_less;
};

// Line 497: range 000000000DF51A6C-000000000DF51AB9
void __cdecl data::ConfigGuideLevelCondition::~ConfigGuideLevelCondition(data::ConfigGuideLevelCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 497: range 000000000DF51ABA-000000000DF51AE4
void __cdecl data::ConfigGuideLevelCondition::~ConfigGuideLevelCondition(data::ConfigGuideLevelCondition *const this)
{
  data::ConfigGuideLevelCondition::~ConfigGuideLevelCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 502: range 000000000D778356-000000000D778366
const char *__cdecl data::ConfigGuideLevelCondition::getTypeName(const data::ConfigGuideLevelCondition *const this)
{
  return "ConfigGuideLevelCondition";
};

// Line 503: range 000000000D778368-000000000D778504
int32_t __cdecl data::ConfigGuideLevelCondition::getHashNum(const data::ConfigGuideLevelCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideLevelCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideLevelCondition",
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

// Line 519: range 000000000DECC852-000000000DECC893
void __cdecl data::ConfigGuideLevelConditionFactory::ConfigGuideLevelConditionFactory(
        data::ConfigGuideLevelConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideLevelConditionFactory = v2;
};

// Line 527: range 000000000DECCB9C-000000000DECCC82
void __cdecl data::ConfigGuideOpenUICondition::ConfigGuideOpenUICondition(data::ConfigGuideOpenUICondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenUICondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->context_name);
  if ( *(char *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable, v1, &this->enable);
  this->enable = 1;
  std::vector<std::string>::vector(&this->active_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->page_type, v1);
  }
  this->page_type = Normal_4;
};

// Line 527: range 000000000DECD02E-000000000DECD1DF
void __cdecl data::ConfigGuideOpenUICondition::ConfigGuideOpenUICondition(
        data::ConfigGuideOpenUICondition *const this,
        const data::ConfigGuideOpenUICondition *a2)
{
  int (**v2)(...); // rdx
  std::string *p_context_name; // rsi
  bool enable; // cl
  char v5; // al
  data::StringList *p_active_list; // rsi
  data::GuidePageType page_type; // ecx
  char v8; // al

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenUICondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  p_context_name = &a2->context_name;
  std::string::basic_string(&this->context_name, &a2->context_name);
  if ( *(char *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable, p_context_name, &a2->enable);
  enable = a2->enable;
  v5 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_context_name) = v5 != 0;
    __asan_report_store1(&this->enable, p_context_name, &this->enable);
  }
  this->enable = enable;
  p_active_list = &a2->active_list;
  std::vector<std::string>::vector(&this->active_list, &a2->active_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->page_type);
  }
  page_type = a2->page_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_active_list) = v8 != 0;
    __asan_report_store4(&this->page_type, p_active_list);
  }
  this->page_type = page_type;
};

// Line 537: range 000000000DF51A40-000000000DF51A6A
void __cdecl data::ConfigGuideOpenUICondition::~ConfigGuideOpenUICondition(
        data::ConfigGuideOpenUICondition *const this)
{
  data::ConfigGuideOpenUICondition::~ConfigGuideOpenUICondition(this);
  operator delete(this, 0x70uLL);
};

// Line 537: range 000000000DF519D2-000000000DF51A3F
void __cdecl data::ConfigGuideOpenUICondition::~ConfigGuideOpenUICondition(
        data::ConfigGuideOpenUICondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenUICondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::string>::~vector(&this->active_list);
  std::string::~string(&this->context_name);
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 542: range 000000000D778506-000000000D778516
const char *__cdecl data::ConfigGuideOpenUICondition::getTypeName(const data::ConfigGuideOpenUICondition *const this)
{
  return "ConfigGuideOpenUICondition";
};

// Line 543: range 000000000D778518-000000000D7786B4
int32_t __cdecl data::ConfigGuideOpenUICondition::getHashNum(const data::ConfigGuideOpenUICondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideOpenUICondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideOpenUICondition",
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

// Line 559: range 000000000DECD4C8-000000000DECD509
void __cdecl data::ConfigGuideOpenUIConditionFactory::ConfigGuideOpenUIConditionFactory(
        data::ConfigGuideOpenUIConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenUIConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideOpenUIConditionFactory = v2;
};

// Line 567: range 000000000DECD812-000000000DECD8A5
void __cdecl data::ConfigGuideAvatarChangeCondition::ConfigGuideAvatarChangeCondition(
        data::ConfigGuideAvatarChangeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarChangeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->config_id = 0;
};

// Line 567: range 000000000DECDC7A-000000000DECDD57
void __cdecl data::ConfigGuideAvatarChangeCondition::ConfigGuideAvatarChangeCondition(
        data::ConfigGuideAvatarChangeCondition *const this,
        const data::ConfigGuideAvatarChangeCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t config_id; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarChangeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = config_id;
};

// Line 574: range 000000000DF519A6-000000000DF519D0
void __cdecl data::ConfigGuideAvatarChangeCondition::~ConfigGuideAvatarChangeCondition(
        data::ConfigGuideAvatarChangeCondition *const this)
{
  data::ConfigGuideAvatarChangeCondition::~ConfigGuideAvatarChangeCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 574: range 000000000DF51958-000000000DF519A5
void __cdecl data::ConfigGuideAvatarChangeCondition::~ConfigGuideAvatarChangeCondition(
        data::ConfigGuideAvatarChangeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarChangeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 579: range 000000000D7786B6-000000000D7786C6
const char *__cdecl data::ConfigGuideAvatarChangeCondition::getTypeName(
        const data::ConfigGuideAvatarChangeCondition *const this)
{
  return "ConfigGuideAvatarChangeCondition";
};

// Line 580: range 000000000D7786C8-000000000D778864
int32_t __cdecl data::ConfigGuideAvatarChangeCondition::getHashNum(
        const data::ConfigGuideAvatarChangeCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAvatarChangeCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAvatarChangeCondition",
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

// Line 596: range 000000000DECDFA0-000000000DECDFE1
void __cdecl data::ConfigGuideAvatarChangeConditionFactory::ConfigGuideAvatarChangeConditionFactory(
        data::ConfigGuideAvatarChangeConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarChangeConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideAvatarChangeConditionFactory = v2;
};

// Line 604: range 000000000DECE2EA-000000000DECE377
void __cdecl data::ConfigGuideCanGetPersonalLineKeyCondition::ConfigGuideCanGetPersonalLineKeyCondition(
        data::ConfigGuideCanGetPersonalLineKeyCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCanGetPersonalLineKeyCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->value, v3, v4);
  this->value = 1;
};

// Line 604: range 000000000DECE74C-000000000DECE824
void __cdecl data::ConfigGuideCanGetPersonalLineKeyCondition::ConfigGuideCanGetPersonalLineKeyCondition(
        data::ConfigGuideCanGetPersonalLineKeyCondition *const this,
        const data::ConfigGuideCanGetPersonalLineKeyCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCanGetPersonalLineKeyCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->value, v3, v4);
  value = a2->value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->value, v3, v7);
  this->value = value;
};

// Line 611: range 000000000DF518DE-000000000DF5192B
void __cdecl data::ConfigGuideCanGetPersonalLineKeyCondition::~ConfigGuideCanGetPersonalLineKeyCondition(
        data::ConfigGuideCanGetPersonalLineKeyCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCanGetPersonalLineKeyCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 611: range 000000000DF5192C-000000000DF51956
void __cdecl data::ConfigGuideCanGetPersonalLineKeyCondition::~ConfigGuideCanGetPersonalLineKeyCondition(
        data::ConfigGuideCanGetPersonalLineKeyCondition *const this)
{
  data::ConfigGuideCanGetPersonalLineKeyCondition::~ConfigGuideCanGetPersonalLineKeyCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 616: range 000000000D778866-000000000D778876
const char *__cdecl data::ConfigGuideCanGetPersonalLineKeyCondition::getTypeName(
        const data::ConfigGuideCanGetPersonalLineKeyCondition *const this)
{
  return "ConfigGuideCanGetPersonalLineKeyCondition";
};

// Line 617: range 000000000D778878-000000000D778A14
int32_t __cdecl data::ConfigGuideCanGetPersonalLineKeyCondition::getHashNum(
        const data::ConfigGuideCanGetPersonalLineKeyCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCanGetPersonalLineKeyCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCanGetPersonalLineKeyCondition",
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

// Line 633: range 000000000DECEA6E-000000000DECEAAF
void __cdecl data::ConfigGuideCanGetPersonalLineKeyConditionFactory::ConfigGuideCanGetPersonalLineKeyConditionFactory(
        data::ConfigGuideCanGetPersonalLineKeyConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCanGetPersonalLineKeyConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCanGetPersonalLineKeyConditionFactory = v2;
};

// Line 641: range 000000000DECEDB8-000000000DECEE86
void __cdecl data::ConfigGuideClimateTypeCondition::ConfigGuideClimateTypeCondition(
        data::ConfigGuideClimateTypeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideClimateTypeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_type, v3);
  }
  this->climate_type = Normal;
  if ( *(char *)(((unsigned __int64)&this->is_equal >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_equal, v3, &this->is_equal);
  this->is_equal = 1;
};

// Line 641: range 000000000DECF262-000000000DECF3B5
void __cdecl data::ConfigGuideClimateTypeCondition::ConfigGuideClimateTypeCondition(
        data::ConfigGuideClimateTypeCondition *const this,
        const data::ConfigGuideClimateTypeCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::JsonClimateType climate_type; // ecx
  char v5; // dl
  bool is_equal; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideClimateTypeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->climate_type);
  }
  climate_type = a2->climate_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->climate_type, v3);
  this->climate_type = climate_type;
  if ( *(char *)(((unsigned __int64)&a2->is_equal >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_equal, v3, &a2->is_equal);
  is_equal = a2->is_equal;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_equal >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_equal, v3, &this->is_equal);
  }
  this->is_equal = is_equal;
};

// Line 649: range 000000000DF518B2-000000000DF518DC
void __cdecl data::ConfigGuideClimateTypeCondition::~ConfigGuideClimateTypeCondition(
        data::ConfigGuideClimateTypeCondition *const this)
{
  data::ConfigGuideClimateTypeCondition::~ConfigGuideClimateTypeCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 649: range 000000000DF51864-000000000DF518B1
void __cdecl data::ConfigGuideClimateTypeCondition::~ConfigGuideClimateTypeCondition(
        data::ConfigGuideClimateTypeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideClimateTypeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 654: range 000000000D778A16-000000000D778A26
const char *__cdecl data::ConfigGuideClimateTypeCondition::getTypeName(
        const data::ConfigGuideClimateTypeCondition *const this)
{
  return "ConfigGuideClimateTypeCondition";
};

// Line 655: range 000000000D778A28-000000000D778BC4
int32_t __cdecl data::ConfigGuideClimateTypeCondition::getHashNum(
        const data::ConfigGuideClimateTypeCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideClimateTypeCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideClimateTypeCondition",
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

// Line 671: range 000000000DECF5FE-000000000DECF63F
void __cdecl data::ConfigGuideClimateTypeConditionFactory::ConfigGuideClimateTypeConditionFactory(
        data::ConfigGuideClimateTypeConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideClimateTypeConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideClimateTypeConditionFactory = v2;
};

// Line 679: range 000000000DECF948-000000000DECFA16
void __cdecl data::ConfigGuideTeamMemberCondition::ConfigGuideTeamMemberCondition(
        data::ConfigGuideTeamMemberCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = 0;
  if ( *(char *)(((unsigned __int64)&this->has_member >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_member, v3, &this->has_member);
  this->has_member = 1;
};

// Line 679: range 000000000DECFDF2-000000000DECFF45
void __cdecl data::ConfigGuideTeamMemberCondition::ConfigGuideTeamMemberCondition(
        data::ConfigGuideTeamMemberCondition *const this,
        const data::ConfigGuideTeamMemberCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t config_id; // ecx
  char v5; // dl
  bool has_member; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->config_id, v3);
  this->config_id = config_id;
  if ( *(char *)(((unsigned __int64)&a2->has_member >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_member, v3, &a2->has_member);
  has_member = a2->has_member;
  v7 = *(_BYTE *)(((unsigned __int64)&this->has_member >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->has_member, v3, &this->has_member);
  }
  this->has_member = has_member;
};

// Line 687: range 000000000DF517EA-000000000DF51837
void __cdecl data::ConfigGuideTeamMemberCondition::~ConfigGuideTeamMemberCondition(
        data::ConfigGuideTeamMemberCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 687: range 000000000DF51838-000000000DF51862
void __cdecl data::ConfigGuideTeamMemberCondition::~ConfigGuideTeamMemberCondition(
        data::ConfigGuideTeamMemberCondition *const this)
{
  data::ConfigGuideTeamMemberCondition::~ConfigGuideTeamMemberCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 692: range 000000000D778BC6-000000000D778BD6
const char *__cdecl data::ConfigGuideTeamMemberCondition::getTypeName(
        const data::ConfigGuideTeamMemberCondition *const this)
{
  return "ConfigGuideTeamMemberCondition";
};

// Line 693: range 000000000D778BD8-000000000D778D74
int32_t __cdecl data::ConfigGuideTeamMemberCondition::getHashNum(
        const data::ConfigGuideTeamMemberCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideTeamMemberCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideTeamMemberCondition",
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

// Line 709: range 000000000DED018E-000000000DED01CF
void __cdecl data::ConfigGuideTeamMemberConditionFactory::ConfigGuideTeamMemberConditionFactory(
        data::ConfigGuideTeamMemberConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamMemberConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideTeamMemberConditionFactory = v2;
};

// Line 736: range 000000000DED0638-000000000DED06CB
void __cdecl data::ConfigGuideAvatarStateCondition::ConfigGuideAvatarStateCondition(
        data::ConfigGuideAvatarStateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->state = Normal_5;
};

// Line 736: range 000000000DED0AA0-000000000DED0B7D
void __cdecl data::ConfigGuideAvatarStateCondition::ConfigGuideAvatarStateCondition(
        data::ConfigGuideAvatarStateCondition *const this,
        const data::ConfigGuideAvatarStateCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideAvatarState state; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->state);
  }
  state = a2->state;
  v5 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->state, v3);
  }
  this->state = state;
};

// Line 743: range 000000000DF51770-000000000DF517BD
void __cdecl data::ConfigGuideAvatarStateCondition::~ConfigGuideAvatarStateCondition(
        data::ConfigGuideAvatarStateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 743: range 000000000DF517BE-000000000DF517E8
void __cdecl data::ConfigGuideAvatarStateCondition::~ConfigGuideAvatarStateCondition(
        data::ConfigGuideAvatarStateCondition *const this)
{
  data::ConfigGuideAvatarStateCondition::~ConfigGuideAvatarStateCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 748: range 000000000D778D76-000000000D778D86
const char *__cdecl data::ConfigGuideAvatarStateCondition::getTypeName(
        const data::ConfigGuideAvatarStateCondition *const this)
{
  return "ConfigGuideAvatarStateCondition";
};

// Line 749: range 000000000D778D88-000000000D778F24
int32_t __cdecl data::ConfigGuideAvatarStateCondition::getHashNum(
        const data::ConfigGuideAvatarStateCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAvatarStateCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAvatarStateCondition",
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

// Line 765: range 000000000DED0DC6-000000000DED0E07
void __cdecl data::ConfigGuideAvatarStateConditionFactory::ConfigGuideAvatarStateConditionFactory(
        data::ConfigGuideAvatarStateConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarStateConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideAvatarStateConditionFactory = v2;
};

// Line 832: range 000000000DED1530-000000000DED1769
void __cdecl data::ConfigGuideButtonClickCondition::ConfigGuideButtonClickCondition(
        data::ConfigGuideButtonClickCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideButtonClickCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->button_path);
  std::string::basic_string(&this->context_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->page_type, v1);
  }
  this->page_type = Normal_4;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = Click;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0.0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special, v4);
  }
  this->special = Normal_3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_index, v4);
  }
  this->special_index = 0;
  v5 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->long_press_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->long_press_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->long_press_type, v5);
  }
  this->long_press_type = AutoEnd;
  if ( *(char *)(((unsigned __int64)&this->force_last_click >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_last_click, v5, &this->force_last_click);
  this->force_last_click = 0;
};

// Line 832: range 000000000DED1B24-000000000DED1F57
void __cdecl data::ConfigGuideButtonClickCondition::ConfigGuideButtonClickCondition(
        data::ConfigGuideButtonClickCondition *const this,
        const data::ConfigGuideButtonClickCondition *a2)
{
  int (**v2)(...); // rdx
  std::string *p_context_name; // rsi
  data::GuidePageType page_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::GuideButtonClick type; // ecx
  char v8; // dl
  float value; // xmm0_4
  __int64 v10; // rsi
  data::GuideWidgetSpecialType special; // ecx
  char v12; // dl
  int32_t special_index; // ecx
  char v14; // al
  __int64 v15; // rsi
  data::GuideLongPressType long_press_type; // ecx
  char v17; // dl
  bool force_last_click; // cl
  char v19; // al

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideButtonClickCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->button_path, &a2->button_path);
  p_context_name = &a2->context_name;
  std::string::basic_string(&this->context_name, &a2->context_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->page_type);
  }
  page_type = a2->page_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_context_name) = v5 != 0;
    __asan_report_store4(&this->page_type, p_context_name);
  }
  this->page_type = page_type;
  v6 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v8 != 0;
  if ( v8 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v8 )
    __asan_report_store4(&this->type, v6);
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v6);
  }
  this->value = value;
  v10 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->special >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->special);
  }
  special = a2->special;
  v12 = *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->special, v10);
  }
  this->special = special;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->special_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->special_index);
  }
  special_index = a2->special_index;
  v14 = *(_BYTE *)(((unsigned __int64)&this->special_index >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->special_index, v10);
  }
  this->special_index = special_index;
  v15 = (((_BYTE)a2 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->long_press_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->long_press_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->long_press_type);
  }
  long_press_type = a2->long_press_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->long_press_type >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v17 )
    __asan_report_store4(&this->long_press_type, v15);
  this->long_press_type = long_press_type;
  if ( *(char *)(((unsigned __int64)&a2->force_last_click >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force_last_click, v15, &a2->force_last_click);
  force_last_click = a2->force_last_click;
  v19 = *(_BYTE *)(((unsigned __int64)&this->force_last_click >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->force_last_click, v15, &this->force_last_click);
  }
  this->force_last_click = force_last_click;
};

// Line 847: range 000000000DF516D6-000000000DF51743
void __cdecl data::ConfigGuideButtonClickCondition::~ConfigGuideButtonClickCondition(
        data::ConfigGuideButtonClickCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideButtonClickCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::~string(&this->context_name);
  std::string::~string(&this->button_path);
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 847: range 000000000DF51744-000000000DF5176E
void __cdecl data::ConfigGuideButtonClickCondition::~ConfigGuideButtonClickCondition(
        data::ConfigGuideButtonClickCondition *const this)
{
  data::ConfigGuideButtonClickCondition::~ConfigGuideButtonClickCondition(this);
  operator delete(this, 0x88uLL);
};

// Line 852: range 000000000D778F26-000000000D778F36
const char *__cdecl data::ConfigGuideButtonClickCondition::getTypeName(
        const data::ConfigGuideButtonClickCondition *const this)
{
  return "ConfigGuideButtonClickCondition";
};

// Line 853: range 000000000D778F38-000000000D7790D4
int32_t __cdecl data::ConfigGuideButtonClickCondition::getHashNum(
        const data::ConfigGuideButtonClickCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideButtonClickCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideButtonClickCondition",
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

// Line 869: range 000000000DED2240-000000000DED2281
void __cdecl data::ConfigGuideButtonClickConditionFactory::ConfigGuideButtonClickConditionFactory(
        data::ConfigGuideButtonClickConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideButtonClickConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideButtonClickConditionFactory = v2;
};

// Line 877: range 000000000DED258A-000000000DED26B6
void __cdecl data::ConfigGuideTabItemCondition::ConfigGuideTabItemCondition(
        data::ConfigGuideTabItemCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTabItemCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->path);
  std::string::basic_string(&this->context_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->page_type, v3);
  }
  this->page_type = Normal_4;
  if ( *(char *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  this->is_select = 1;
};

// Line 877: range 000000000DED2A6C-000000000DED2CA2
void __cdecl data::ConfigGuideTabItemCondition::ConfigGuideTabItemCondition(
        data::ConfigGuideTabItemCondition *const this,
        const data::ConfigGuideTabItemCondition *a2)
{
  int (**v2)(...); // rdx
  std::string *p_context_name; // rsi
  int32_t value; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::GuidePageType page_type; // ecx
  char v8; // dl
  bool is_select; // cl
  char v10; // al

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTabItemCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->path, &a2->path);
  p_context_name = &a2->context_name;
  std::string::basic_string(&this->context_name, &a2->context_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_context_name) = v5 != 0;
    __asan_report_store4(&this->value, p_context_name);
  }
  this->value = value;
  v6 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->page_type);
  }
  page_type = a2->page_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v8 != 0;
  if ( v8 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v8 )
    __asan_report_store4(&this->page_type, v6);
  this->page_type = page_type;
  if ( *(char *)(((unsigned __int64)&a2->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_select, v6, &a2->is_select);
  is_select = a2->is_select;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store1(&this->is_select, v6, &this->is_select);
  }
  this->is_select = is_select;
};

// Line 888: range 000000000DF5163C-000000000DF516A9
void __cdecl data::ConfigGuideTabItemCondition::~ConfigGuideTabItemCondition(
        data::ConfigGuideTabItemCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTabItemCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::~string(&this->context_name);
  std::string::~string(&this->path);
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 888: range 000000000DF516AA-000000000DF516D4
void __cdecl data::ConfigGuideTabItemCondition::~ConfigGuideTabItemCondition(
        data::ConfigGuideTabItemCondition *const this)
{
  data::ConfigGuideTabItemCondition::~ConfigGuideTabItemCondition(this);
  operator delete(this, 0x78uLL);
};

// Line 893: range 000000000D7790D6-000000000D7790E6
const char *__cdecl data::ConfigGuideTabItemCondition::getTypeName(const data::ConfigGuideTabItemCondition *const this)
{
  return "ConfigGuideTabItemCondition";
};

// Line 894: range 000000000D7790E8-000000000D779284
int32_t __cdecl data::ConfigGuideTabItemCondition::getHashNum(const data::ConfigGuideTabItemCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideTabItemCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideTabItemCondition",
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

// Line 910: range 000000000DED2F8C-000000000DED2FCD
void __cdecl data::ConfigGuideTabItemConditionFactory::ConfigGuideTabItemConditionFactory(
        data::ConfigGuideTabItemConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTabItemConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideTabItemConditionFactory = v2;
};

// Line 918: range 000000000DED32D6-000000000DED33E4
void __cdecl data::ConfigGuideTheatreMechanicusBuildingSelectCondition::ConfigGuideTheatreMechanicusBuildingSelectCondition(
        data::ConfigGuideTheatreMechanicusBuildingSelectCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusBuildingSelectCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0;
  if ( *(char *)(((unsigned __int64)&this->is_rebuild >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_rebuild, v3, &this->is_rebuild);
  this->is_rebuild = 0;
  v4 = ((_BYTE)this + 41) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_select, v4, v5);
  this->is_select = 1;
};

// Line 918: range 000000000DED37C0-000000000DED3993
void __cdecl data::ConfigGuideTheatreMechanicusBuildingSelectCondition::ConfigGuideTheatreMechanicusBuildingSelectCondition(
        data::ConfigGuideTheatreMechanicusBuildingSelectCondition *const this,
        const data::ConfigGuideTheatreMechanicusBuildingSelectCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t value; // ecx
  char v5; // dl
  bool is_rebuild; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_select; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusBuildingSelectCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->value, v3);
  this->value = value;
  if ( *(char *)(((unsigned __int64)&a2->is_rebuild >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_rebuild, v3, &a2->is_rebuild);
  is_rebuild = a2->is_rebuild;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_rebuild >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_rebuild, v3, &this->is_rebuild);
  }
  this->is_rebuild = is_rebuild;
  v8 = ((_BYTE)a2 + 41) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_select >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_select >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_select, v8, v9);
  is_select = a2->is_select;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_select, v8, v12);
  this->is_select = is_select;
};

// Line 927: range 000000000DF51610-000000000DF5163A
void __cdecl data::ConfigGuideTheatreMechanicusBuildingSelectCondition::~ConfigGuideTheatreMechanicusBuildingSelectCondition(
        data::ConfigGuideTheatreMechanicusBuildingSelectCondition *const this)
{
  data::ConfigGuideTheatreMechanicusBuildingSelectCondition::~ConfigGuideTheatreMechanicusBuildingSelectCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 927: range 000000000DF515C2-000000000DF5160F
void __cdecl data::ConfigGuideTheatreMechanicusBuildingSelectCondition::~ConfigGuideTheatreMechanicusBuildingSelectCondition(
        data::ConfigGuideTheatreMechanicusBuildingSelectCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusBuildingSelectCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 932: range 000000000D779286-000000000D779296
const char *__cdecl data::ConfigGuideTheatreMechanicusBuildingSelectCondition::getTypeName(
        const data::ConfigGuideTheatreMechanicusBuildingSelectCondition *const this)
{
  return "ConfigGuideTheatreMechanicusBuildingSelectCondition";
};

// Line 933: range 000000000D779298-000000000D779434
int32_t __cdecl data::ConfigGuideTheatreMechanicusBuildingSelectCondition::getHashNum(
        const data::ConfigGuideTheatreMechanicusBuildingSelectCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideTheatreMechanicusBuildingSelectCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideTheatreMechanicusBuildingSelectCondition",
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

// Line 949: range 000000000DED3BDC-000000000DED3C1D
void __cdecl data::ConfigGuideTheatreMechanicusBuildingSelectConditionFactory::ConfigGuideTheatreMechanicusBuildingSelectConditionFactory(
        data::ConfigGuideTheatreMechanicusBuildingSelectConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusBuildingSelectConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideTheatreMechanicusBuildingSelectConditionFactory = v2;
};

// Line 957: range 000000000DED3F26-000000000DED3FF4
void __cdecl data::ConfigGuideTheatreMechanicusInfoSelectCondition::ConfigGuideTheatreMechanicusInfoSelectCondition(
        data::ConfigGuideTheatreMechanicusInfoSelectCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusInfoSelectCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0;
  if ( *(char *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  this->is_select = 1;
};

// Line 957: range 000000000DED43D0-000000000DED4523
void __cdecl data::ConfigGuideTheatreMechanicusInfoSelectCondition::ConfigGuideTheatreMechanicusInfoSelectCondition(
        data::ConfigGuideTheatreMechanicusInfoSelectCondition *const this,
        const data::ConfigGuideTheatreMechanicusInfoSelectCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t value; // ecx
  char v5; // dl
  bool is_select; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusInfoSelectCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->value, v3);
  this->value = value;
  if ( *(char *)(((unsigned __int64)&a2->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_select, v3, &a2->is_select);
  is_select = a2->is_select;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  }
  this->is_select = is_select;
};

// Line 965: range 000000000DF51596-000000000DF515C0
void __cdecl data::ConfigGuideTheatreMechanicusInfoSelectCondition::~ConfigGuideTheatreMechanicusInfoSelectCondition(
        data::ConfigGuideTheatreMechanicusInfoSelectCondition *const this)
{
  data::ConfigGuideTheatreMechanicusInfoSelectCondition::~ConfigGuideTheatreMechanicusInfoSelectCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 965: range 000000000DF51548-000000000DF51595
void __cdecl data::ConfigGuideTheatreMechanicusInfoSelectCondition::~ConfigGuideTheatreMechanicusInfoSelectCondition(
        data::ConfigGuideTheatreMechanicusInfoSelectCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusInfoSelectCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 970: range 000000000D779436-000000000D779446
const char *__cdecl data::ConfigGuideTheatreMechanicusInfoSelectCondition::getTypeName(
        const data::ConfigGuideTheatreMechanicusInfoSelectCondition *const this)
{
  return "ConfigGuideTheatreMechanicusInfoSelectCondition";
};

// Line 971: range 000000000D779448-000000000D7795E4
int32_t __cdecl data::ConfigGuideTheatreMechanicusInfoSelectCondition::getHashNum(
        const data::ConfigGuideTheatreMechanicusInfoSelectCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideTheatreMechanicusInfoSelectCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideTheatreMechanicusInfoSelectCondition",
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

// Line 987: range 000000000DED476C-000000000DED47AD
void __cdecl data::ConfigGuideTheatreMechanicusInfoSelectConditionFactory::ConfigGuideTheatreMechanicusInfoSelectConditionFactory(
        data::ConfigGuideTheatreMechanicusInfoSelectConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTheatreMechanicusInfoSelectConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideTheatreMechanicusInfoSelectConditionFactory = v2;
};

// Line 1012: range 000000000DED4C4E-000000000DED4D79
void __cdecl data::ConfigGuideHasItemCondition::ConfigGuideHasItemCondition(
        data::ConfigGuideHasItemCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasItemCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::vector<unsigned int>>::vector(&this->item_idlists);
  std::vector<int>::vector(&this->material_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = Normal_6;
  v3 = ((_BYTE)this + 92) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->not_have >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->not_have >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->not_have, v3, v4);
  this->not_have = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0.0;
};

// Line 1023: range 000000000DF5151C-000000000DF51546
void __cdecl data::ConfigGuideHasItemCondition::~ConfigGuideHasItemCondition(
        data::ConfigGuideHasItemCondition *const this)
{
  data::ConfigGuideHasItemCondition::~ConfigGuideHasItemCondition(this);
  operator delete(this, 0x68uLL);
};

// Line 1023: range 000000000DF514AE-000000000DF5151B
void __cdecl data::ConfigGuideHasItemCondition::~ConfigGuideHasItemCondition(
        data::ConfigGuideHasItemCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasItemCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<int>::~vector(&this->material_type_list);
  std::vector<std::vector<unsigned int>>::~vector(&this->item_idlists);
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 1028: range 000000000D7795E6-000000000D7795F6
const char *__cdecl data::ConfigGuideHasItemCondition::getTypeName(const data::ConfigGuideHasItemCondition *const this)
{
  return "ConfigGuideHasItemCondition";
};

// Line 1029: range 000000000D7795F8-000000000D779794
int32_t __cdecl data::ConfigGuideHasItemCondition::getHashNum(const data::ConfigGuideHasItemCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideHasItemCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideHasItemCondition",
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

// Line 1045: range 000000000DED565E-000000000DED569F
void __cdecl data::ConfigGuideHasItemConditionFactory::ConfigGuideHasItemConditionFactory(
        data::ConfigGuideHasItemConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasItemConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideHasItemConditionFactory = v2;
};

// Line 1067: range 000000000DED5B08-000000000DED5BDB
void __cdecl data::ConfigGuideCameraCondition::ConfigGuideCameraCondition(data::ConfigGuideCameraCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action, v3);
  }
  this->action = Move_1;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param, v3);
  }
  this->param = 0.0;
};

// Line 1067: range 000000000DED5FB6-000000000DED610B
void __cdecl data::ConfigGuideCameraCondition::ConfigGuideCameraCondition(
        data::ConfigGuideCameraCondition *const this,
        const data::ConfigGuideCameraCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideCameraAction action; // ecx
  char v5; // dl
  float param; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action);
  }
  action = a2->action;
  v5 = *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->action, v3);
  this->action = action;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param);
  }
  param = a2->param;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param, v3);
  }
  this->param = param;
};

// Line 1075: range 000000000DF51482-000000000DF514AC
void __cdecl data::ConfigGuideCameraCondition::~ConfigGuideCameraCondition(
        data::ConfigGuideCameraCondition *const this)
{
  data::ConfigGuideCameraCondition::~ConfigGuideCameraCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1075: range 000000000DF51434-000000000DF51481
void __cdecl data::ConfigGuideCameraCondition::~ConfigGuideCameraCondition(
        data::ConfigGuideCameraCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1080: range 000000000D779796-000000000D7797A6
const char *__cdecl data::ConfigGuideCameraCondition::getTypeName(const data::ConfigGuideCameraCondition *const this)
{
  return "ConfigGuideCameraCondition";
};

// Line 1081: range 000000000D7797A8-000000000D779944
int32_t __cdecl data::ConfigGuideCameraCondition::getHashNum(const data::ConfigGuideCameraCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCameraCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCameraCondition",
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

// Line 1097: range 000000000DED6354-000000000DED6395
void __cdecl data::ConfigGuideCameraConditionFactory::ConfigGuideCameraConditionFactory(
        data::ConfigGuideCameraConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCameraConditionFactory = v2;
};

// Line 1119: range 000000000DED67FE-000000000DED6891
void __cdecl data::ConfigGuideAvatarActionCondition::ConfigGuideAvatarActionCondition(
        data::ConfigGuideAvatarActionCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->action = Move_2;
};

// Line 1119: range 000000000DED6C66-000000000DED6D43
void __cdecl data::ConfigGuideAvatarActionCondition::ConfigGuideAvatarActionCondition(
        data::ConfigGuideAvatarActionCondition *const this,
        const data::ConfigGuideAvatarActionCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideAvatarAction action; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action);
  }
  action = a2->action;
  v5 = *(_BYTE *)(((unsigned __int64)&this->action >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->action, v3);
  }
  this->action = action;
};

// Line 1126: range 000000000DF51408-000000000DF51432
void __cdecl data::ConfigGuideAvatarActionCondition::~ConfigGuideAvatarActionCondition(
        data::ConfigGuideAvatarActionCondition *const this)
{
  data::ConfigGuideAvatarActionCondition::~ConfigGuideAvatarActionCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1126: range 000000000DF513BA-000000000DF51407
void __cdecl data::ConfigGuideAvatarActionCondition::~ConfigGuideAvatarActionCondition(
        data::ConfigGuideAvatarActionCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1131: range 000000000D779946-000000000D779956
const char *__cdecl data::ConfigGuideAvatarActionCondition::getTypeName(
        const data::ConfigGuideAvatarActionCondition *const this)
{
  return "ConfigGuideAvatarActionCondition";
};

// Line 1132: range 000000000D779958-000000000D779AF4
int32_t __cdecl data::ConfigGuideAvatarActionCondition::getHashNum(
        const data::ConfigGuideAvatarActionCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAvatarActionCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAvatarActionCondition",
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

// Line 1148: range 000000000DED6F8C-000000000DED6FCD
void __cdecl data::ConfigGuideAvatarActionConditionFactory::ConfigGuideAvatarActionConditionFactory(
        data::ConfigGuideAvatarActionConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAvatarActionConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideAvatarActionConditionFactory = v2;
};

// Line 1156: range 000000000DED72D6-000000000DED736B
void __cdecl data::ConfigGuideDelayFinishCondition::ConfigGuideDelayFinishCondition(
        data::ConfigGuideDelayFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_time, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->delay_time = 0.0;
};

// Line 1156: range 000000000DED7740-000000000DED7820
void __cdecl data::ConfigGuideDelayFinishCondition::ConfigGuideDelayFinishCondition(
        data::ConfigGuideDelayFinishCondition *const this,
        const data::ConfigGuideDelayFinishCondition *a2)
{
  int (**v2)(...); // rdx
  float delay_time; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->delay_time);
  }
  delay_time = a2->delay_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_time, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->delay_time = delay_time;
};

// Line 1163: range 000000000DF5138E-000000000DF513B8
void __cdecl data::ConfigGuideDelayFinishCondition::~ConfigGuideDelayFinishCondition(
        data::ConfigGuideDelayFinishCondition *const this)
{
  data::ConfigGuideDelayFinishCondition::~ConfigGuideDelayFinishCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1163: range 000000000DF51340-000000000DF5138D
void __cdecl data::ConfigGuideDelayFinishCondition::~ConfigGuideDelayFinishCondition(
        data::ConfigGuideDelayFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1168: range 000000000D779AF6-000000000D779B06
const char *__cdecl data::ConfigGuideDelayFinishCondition::getTypeName(
        const data::ConfigGuideDelayFinishCondition *const this)
{
  return "ConfigGuideDelayFinishCondition";
};

// Line 1169: range 000000000D779B08-000000000D779CA4
int32_t __cdecl data::ConfigGuideDelayFinishCondition::getHashNum(
        const data::ConfigGuideDelayFinishCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideDelayFinishCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideDelayFinishCondition",
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

// Line 1185: range 000000000DED7A6A-000000000DED7AAB
void __cdecl data::ConfigGuideDelayFinishConditionFactory::ConfigGuideDelayFinishConditionFactory(
        data::ConfigGuideDelayFinishConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayFinishConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideDelayFinishConditionFactory = v2;
};

// Line 1193: range 000000000DED7DB4-000000000DED7E41
void __cdecl data::ConfigGuideMultiSinglePlayerCondition::ConfigGuideMultiSinglePlayerCondition(
        data::ConfigGuideMultiSinglePlayerCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiSinglePlayerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_in >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_in >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_in, v3, v4);
  this->is_in = 1;
};

// Line 1193: range 000000000DED8216-000000000DED82EE
void __cdecl data::ConfigGuideMultiSinglePlayerCondition::ConfigGuideMultiSinglePlayerCondition(
        data::ConfigGuideMultiSinglePlayerCondition *const this,
        const data::ConfigGuideMultiSinglePlayerCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_in; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiSinglePlayerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_in >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_in >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_in, v3, v4);
  is_in = a2->is_in;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_in >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_in, v3, v7);
  this->is_in = is_in;
};

// Line 1200: range 000000000DF51314-000000000DF5133E
void __cdecl data::ConfigGuideMultiSinglePlayerCondition::~ConfigGuideMultiSinglePlayerCondition(
        data::ConfigGuideMultiSinglePlayerCondition *const this)
{
  data::ConfigGuideMultiSinglePlayerCondition::~ConfigGuideMultiSinglePlayerCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1200: range 000000000DF512C6-000000000DF51313
void __cdecl data::ConfigGuideMultiSinglePlayerCondition::~ConfigGuideMultiSinglePlayerCondition(
        data::ConfigGuideMultiSinglePlayerCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiSinglePlayerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1205: range 000000000D779CA6-000000000D779CB6
const char *__cdecl data::ConfigGuideMultiSinglePlayerCondition::getTypeName(
        const data::ConfigGuideMultiSinglePlayerCondition *const this)
{
  return "ConfigGuideMultiSinglePlayerCondition";
};

// Line 1206: range 000000000D779CB8-000000000D779E54
int32_t __cdecl data::ConfigGuideMultiSinglePlayerCondition::getHashNum(
        const data::ConfigGuideMultiSinglePlayerCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideMultiSinglePlayerCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideMultiSinglePlayerCondition",
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

// Line 1222: range 000000000DED8538-000000000DED8579
void __cdecl data::ConfigGuideMultiSinglePlayerConditionFactory::ConfigGuideMultiSinglePlayerConditionFactory(
        data::ConfigGuideMultiSinglePlayerConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiSinglePlayerConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideMultiSinglePlayerConditionFactory = v2;
};

// Line 1230: range 000000000DED8882-000000000DED89D9
void __cdecl data::ConfigGuideMultiPlayerCondition::ConfigGuideMultiPlayerCondition(
        data::ConfigGuideMultiPlayerCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiPlayerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_in >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_in >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_in, v3, v4);
  this->is_in = 1;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_num, v5);
  }
  this->player_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->opt, v5);
  }
  this->opt = Greater_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->mode = All;
};

// Line 1230: range 000000000DED8DB4-000000000DED900B
void __cdecl data::ConfigGuideMultiPlayerCondition::ConfigGuideMultiPlayerCondition(
        data::ConfigGuideMultiPlayerCondition *const this,
        const data::ConfigGuideMultiPlayerCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_in; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  int32_t player_num; // ecx
  char v10; // dl
  data::GuideOperator opt; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::GuideMultiPlayerMode mode; // ecx
  char v15; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiPlayerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_in >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_in >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_in, v3, v4);
  is_in = a2->is_in;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_in >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_in, v3, v7);
  this->is_in = is_in;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->player_num);
  }
  player_num = a2->player_num;
  v10 = *(_BYTE *)(((unsigned __int64)&this->player_num >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->player_num, v8);
  }
  this->player_num = player_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->opt);
  }
  opt = a2->opt;
  v12 = *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->opt, v8);
  }
  this->opt = opt;
  v13 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mode);
  }
  mode = a2->mode;
  v15 = *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->mode, v13);
  }
  this->mode = mode;
};

// Line 1240: range 000000000DF5129A-000000000DF512C4
void __cdecl data::ConfigGuideMultiPlayerCondition::~ConfigGuideMultiPlayerCondition(
        data::ConfigGuideMultiPlayerCondition *const this)
{
  data::ConfigGuideMultiPlayerCondition::~ConfigGuideMultiPlayerCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1240: range 000000000DF5124C-000000000DF51299
void __cdecl data::ConfigGuideMultiPlayerCondition::~ConfigGuideMultiPlayerCondition(
        data::ConfigGuideMultiPlayerCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiPlayerCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1245: range 000000000D779E56-000000000D779E66
const char *__cdecl data::ConfigGuideMultiPlayerCondition::getTypeName(
        const data::ConfigGuideMultiPlayerCondition *const this)
{
  return "ConfigGuideMultiPlayerCondition";
};

// Line 1246: range 000000000D779E68-000000000D77A004
int32_t __cdecl data::ConfigGuideMultiPlayerCondition::getHashNum(
        const data::ConfigGuideMultiPlayerCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideMultiPlayerCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideMultiPlayerCondition",
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

// Line 1262: range 000000000DED9254-000000000DED9295
void __cdecl data::ConfigGuideMultiPlayerConditionFactory::ConfigGuideMultiPlayerConditionFactory(
        data::ConfigGuideMultiPlayerConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMultiPlayerConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideMultiPlayerConditionFactory = v2;
};

// Line 1270: range 000000000DED959E-000000000DED966F
void __cdecl data::ConfigGuideTeamAvatarNumCondition::ConfigGuideTeamAvatarNumCondition(
        data::ConfigGuideTeamAvatarNumCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamAvatarNumCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_num, v3);
  }
  this->avatar_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->opt, v3);
  }
  this->opt = Greater_0;
};

// Line 1270: range 000000000DED9A4A-000000000DED9B9C
void __cdecl data::ConfigGuideTeamAvatarNumCondition::ConfigGuideTeamAvatarNumCondition(
        data::ConfigGuideTeamAvatarNumCondition *const this,
        const data::ConfigGuideTeamAvatarNumCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t avatar_num; // ecx
  char v5; // dl
  data::GuideOperator opt; // ecx
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamAvatarNumCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->avatar_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->avatar_num);
  }
  avatar_num = a2->avatar_num;
  v5 = *(_BYTE *)(((unsigned __int64)&this->avatar_num >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->avatar_num, v3);
  }
  this->avatar_num = avatar_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->opt);
  }
  opt = a2->opt;
  v7 = *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->opt, v3);
  }
  this->opt = opt;
};

// Line 1278: range 000000000DF51220-000000000DF5124A
void __cdecl data::ConfigGuideTeamAvatarNumCondition::~ConfigGuideTeamAvatarNumCondition(
        data::ConfigGuideTeamAvatarNumCondition *const this)
{
  data::ConfigGuideTeamAvatarNumCondition::~ConfigGuideTeamAvatarNumCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1278: range 000000000DF511D2-000000000DF5121F
void __cdecl data::ConfigGuideTeamAvatarNumCondition::~ConfigGuideTeamAvatarNumCondition(
        data::ConfigGuideTeamAvatarNumCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamAvatarNumCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1283: range 000000000D77A006-000000000D77A016
const char *__cdecl data::ConfigGuideTeamAvatarNumCondition::getTypeName(
        const data::ConfigGuideTeamAvatarNumCondition *const this)
{
  return "ConfigGuideTeamAvatarNumCondition";
};

// Line 1284: range 000000000D77A018-000000000D77A1B4
int32_t __cdecl data::ConfigGuideTeamAvatarNumCondition::getHashNum(
        const data::ConfigGuideTeamAvatarNumCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideTeamAvatarNumCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideTeamAvatarNumCondition",
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

// Line 1300: range 000000000DED9DE6-000000000DED9E27
void __cdecl data::ConfigGuideTeamAvatarNumConditionFactory::ConfigGuideTeamAvatarNumConditionFactory(
        data::ConfigGuideTeamAvatarNumConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideTeamAvatarNumConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideTeamAvatarNumConditionFactory = v2;
};

// Line 1336: range 000000000DEDA3F0-000000000DEDA509
void __cdecl data::ConfigGuideHasAvatarCondition::ConfigGuideHasAvatarCondition(
        data::ConfigGuideHasAvatarCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasAvatarCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = Normal_7;
  if ( *(_BYTE *)(((unsigned __int64)&this->con_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->con_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->con_type, v3);
  }
  this->con_type = ID;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->value = 0.0;
};

// Line 1336: range 000000000DEDA8E4-000000000DEDAABE
void __cdecl data::ConfigGuideHasAvatarCondition::ConfigGuideHasAvatarCondition(
        data::ConfigGuideHasAvatarCondition *const this,
        const data::ConfigGuideHasAvatarCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideHasAvatarType type; // ecx
  char v5; // dl
  data::GuideHasAvatarConType con_type; // ecx
  char v7; // al
  float value; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasAvatarCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->type, v3);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->con_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->con_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->con_type);
  }
  con_type = a2->con_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->con_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->con_type, v3);
  }
  this->con_type = con_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->value = value;
};

// Line 1345: range 000000000DF511A6-000000000DF511D0
void __cdecl data::ConfigGuideHasAvatarCondition::~ConfigGuideHasAvatarCondition(
        data::ConfigGuideHasAvatarCondition *const this)
{
  data::ConfigGuideHasAvatarCondition::~ConfigGuideHasAvatarCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1345: range 000000000DF51158-000000000DF511A5
void __cdecl data::ConfigGuideHasAvatarCondition::~ConfigGuideHasAvatarCondition(
        data::ConfigGuideHasAvatarCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasAvatarCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1350: range 000000000D77A1B6-000000000D77A1C6
const char *__cdecl data::ConfigGuideHasAvatarCondition::getTypeName(
        const data::ConfigGuideHasAvatarCondition *const this)
{
  return "ConfigGuideHasAvatarCondition";
};

// Line 1351: range 000000000D77A1C8-000000000D77A364
int32_t __cdecl data::ConfigGuideHasAvatarCondition::getHashNum(const data::ConfigGuideHasAvatarCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideHasAvatarCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideHasAvatarCondition",
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

// Line 1367: range 000000000DEDAD08-000000000DEDAD49
void __cdecl data::ConfigGuideHasAvatarConditionFactory::ConfigGuideHasAvatarConditionFactory(
        data::ConfigGuideHasAvatarConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHasAvatarConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideHasAvatarConditionFactory = v2;
};

// Line 1375: range 000000000DEDB052-000000000DEDB1BB
void __cdecl data::ConfigGuideKillMonsterCondition::ConfigGuideKillMonsterCondition(
        data::ConfigGuideKillMonsterCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideKillMonsterCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->spawn_new >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->spawn_new >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->spawn_new, v3, v4);
  this->spawn_new = 0;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id, v5);
  }
  this->monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_level, v5);
  }
  this->monster_level = 0;
  data::Vector::Vector(&this->monster_pos);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_yaw >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_yaw >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_yaw, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->monster_yaw = 0.0;
};

// Line 1375: range 000000000DEDB5C0-000000000DEDB910
void __cdecl data::ConfigGuideKillMonsterCondition::ConfigGuideKillMonsterCondition(
        data::ConfigGuideKillMonsterCondition *const this,
        const data::ConfigGuideKillMonsterCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool spawn_new; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  uint32_t monster_id; // ecx
  char v10; // dl
  uint32_t monster_level; // ecx
  char v12; // al
  __int64 v13; // rdx
  float monster_yaw; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideKillMonsterCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->spawn_new >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->spawn_new >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->spawn_new, v3, v4);
  spawn_new = a2->spawn_new;
  v6 = *(_BYTE *)(((unsigned __int64)&this->spawn_new >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->spawn_new, v3, v7);
  this->spawn_new = spawn_new;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->monster_id);
  }
  monster_id = a2->monster_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->monster_id, v8);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->monster_level);
  }
  monster_level = a2->monster_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->monster_level, v8);
  }
  this->monster_level = monster_level;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->monster_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->monster_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->monster_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 59) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->monster_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->monster_pos, 16LL);
  }
  if ( (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->monster_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->monster_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->monster_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 59) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->monster_pos.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->monster_pos, 16LL);
  }
  v13 = *(_QWORD *)&a2->monster_pos.z;
  *(_QWORD *)&this->monster_pos.x = *(_QWORD *)&a2->monster_pos.x;
  *(_QWORD *)&this->monster_pos.z = v13;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_yaw >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->monster_yaw >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->monster_yaw);
  }
  monster_yaw = a2->monster_yaw;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_yaw >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_yaw >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_yaw, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->monster_yaw = monster_yaw;
};

// Line 1386: range 000000000DF5112C-000000000DF51156
void __cdecl data::ConfigGuideKillMonsterCondition::~ConfigGuideKillMonsterCondition(
        data::ConfigGuideKillMonsterCondition *const this)
{
  data::ConfigGuideKillMonsterCondition::~ConfigGuideKillMonsterCondition(this);
  operator delete(this, 0x40uLL);
};

// Line 1386: range 000000000DF510DE-000000000DF5112B
void __cdecl data::ConfigGuideKillMonsterCondition::~ConfigGuideKillMonsterCondition(
        data::ConfigGuideKillMonsterCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideKillMonsterCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1391: range 000000000D77A366-000000000D77A376
const char *__cdecl data::ConfigGuideKillMonsterCondition::getTypeName(
        const data::ConfigGuideKillMonsterCondition *const this)
{
  return "ConfigGuideKillMonsterCondition";
};

// Line 1392: range 000000000D77A378-000000000D77A514
int32_t __cdecl data::ConfigGuideKillMonsterCondition::getHashNum(
        const data::ConfigGuideKillMonsterCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideKillMonsterCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideKillMonsterCondition",
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

// Line 1408: range 000000000DEDBB5A-000000000DEDBB9B
void __cdecl data::ConfigGuideKillMonsterConditionFactory::ConfigGuideKillMonsterConditionFactory(
        data::ConfigGuideKillMonsterConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideKillMonsterConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideKillMonsterConditionFactory = v2;
};

// Line 1416: range 000000000DEDBEA4-000000000DEDBF37
void __cdecl data::ConfigGuideCheckTaskFinishCondition::ConfigGuideCheckTaskFinishCondition(
        data::ConfigGuideCheckTaskFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckTaskFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->task_id = 0;
};

// Line 1416: range 000000000DEDC30C-000000000DEDC3E9
void __cdecl data::ConfigGuideCheckTaskFinishCondition::ConfigGuideCheckTaskFinishCondition(
        data::ConfigGuideCheckTaskFinishCondition *const this,
        const data::ConfigGuideCheckTaskFinishCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t task_id; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckTaskFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->task_id);
  }
  task_id = a2->task_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->task_id, v3);
  }
  this->task_id = task_id;
};

// Line 1423: range 000000000DF510B2-000000000DF510DC
void __cdecl data::ConfigGuideCheckTaskFinishCondition::~ConfigGuideCheckTaskFinishCondition(
        data::ConfigGuideCheckTaskFinishCondition *const this)
{
  data::ConfigGuideCheckTaskFinishCondition::~ConfigGuideCheckTaskFinishCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1423: range 000000000DF51064-000000000DF510B1
void __cdecl data::ConfigGuideCheckTaskFinishCondition::~ConfigGuideCheckTaskFinishCondition(
        data::ConfigGuideCheckTaskFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckTaskFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1428: range 000000000D77A516-000000000D77A526
const char *__cdecl data::ConfigGuideCheckTaskFinishCondition::getTypeName(
        const data::ConfigGuideCheckTaskFinishCondition *const this)
{
  return "ConfigGuideCheckTaskFinishCondition";
};

// Line 1429: range 000000000D77A528-000000000D77A6C4
int32_t __cdecl data::ConfigGuideCheckTaskFinishCondition::getHashNum(
        const data::ConfigGuideCheckTaskFinishCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCheckTaskFinishCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCheckTaskFinishCondition",
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

// Line 1445: range 000000000DEDC632-000000000DEDC673
void __cdecl data::ConfigGuideCheckTaskFinishConditionFactory::ConfigGuideCheckTaskFinishConditionFactory(
        data::ConfigGuideCheckTaskFinishConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckTaskFinishConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCheckTaskFinishConditionFactory = v2;
};

// Line 1453: range 000000000DEDC97C-000000000DEDCA8D
void __cdecl data::ConfigGuideCheckQuestStateCondition::ConfigGuideCheckQuestStateCondition(
        data::ConfigGuideCheckQuestStateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckQuestStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_state, v3);
  }
  this->quest_state = 0;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_equal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_equal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_equal, v4, v5);
  this->is_equal = 1;
};

// Line 1453: range 000000000DEDCE68-000000000DEDD03A
void __cdecl data::ConfigGuideCheckQuestStateCondition::ConfigGuideCheckQuestStateCondition(
        data::ConfigGuideCheckQuestStateCondition *const this,
        const data::ConfigGuideCheckQuestStateCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t quest_id; // ecx
  char v5; // dl
  uint32_t quest_state; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_equal; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckQuestStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->quest_id);
  }
  quest_id = a2->quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quest_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quest_state);
  }
  quest_state = a2->quest_state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->quest_state, v3);
  }
  this->quest_state = quest_state;
  v8 = ((_BYTE)a2 + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_equal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_equal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_equal, v8, v9);
  is_equal = a2->is_equal;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_equal >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_equal, v8, v12);
  this->is_equal = is_equal;
};

// Line 1462: range 000000000DF50FEA-000000000DF51037
void __cdecl data::ConfigGuideCheckQuestStateCondition::~ConfigGuideCheckQuestStateCondition(
        data::ConfigGuideCheckQuestStateCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckQuestStateCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1462: range 000000000DF51038-000000000DF51062
void __cdecl data::ConfigGuideCheckQuestStateCondition::~ConfigGuideCheckQuestStateCondition(
        data::ConfigGuideCheckQuestStateCondition *const this)
{
  data::ConfigGuideCheckQuestStateCondition::~ConfigGuideCheckQuestStateCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1467: range 000000000D77A6C6-000000000D77A6D6
const char *__cdecl data::ConfigGuideCheckQuestStateCondition::getTypeName(
        const data::ConfigGuideCheckQuestStateCondition *const this)
{
  return "ConfigGuideCheckQuestStateCondition";
};

// Line 1468: range 000000000D77A6D8-000000000D77A874
int32_t __cdecl data::ConfigGuideCheckQuestStateCondition::getHashNum(
        const data::ConfigGuideCheckQuestStateCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCheckQuestStateCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCheckQuestStateCondition",
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

// Line 1484: range 000000000DEDD284-000000000DEDD2C5
void __cdecl data::ConfigGuideCheckQuestStateConditionFactory::ConfigGuideCheckQuestStateConditionFactory(
        data::ConfigGuideCheckQuestStateConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckQuestStateConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCheckQuestStateConditionFactory = v2;
};

// Line 1522: range 000000000DEDD88E-000000000DEDD9E0
void __cdecl data::ConfigGuideNavigationCondition::ConfigGuideNavigationCondition(
        data::ConfigGuideNavigationCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideNavigationCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->navigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->navigation_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->navigation_id, v3);
  }
  this->navigation_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->navigation_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->navigation_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->navigation_type, v3);
  }
  this->navigation_type = NONE_5;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_type, v4);
  }
  this->check_type = NONE_6;
  if ( *(char *)(((unsigned __int64)&this->only_check_change >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->only_check_change, v4, &this->only_check_change);
  this->only_check_change = 0;
};

// Line 1522: range 000000000DEDDDD6-000000000DEDE023
void __cdecl data::ConfigGuideNavigationCondition::ConfigGuideNavigationCondition(
        data::ConfigGuideNavigationCondition *const this,
        const data::ConfigGuideNavigationCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t navigation_id; // ecx
  char v5; // dl
  data::GuideNavigationType navigation_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GuideNavigationCheckType check_type; // ecx
  char v10; // dl
  bool only_check_change; // cl
  char v12; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideNavigationCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->navigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->navigation_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->navigation_id);
  }
  navigation_id = a2->navigation_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->navigation_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->navigation_id, v3);
  }
  this->navigation_id = navigation_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->navigation_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->navigation_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->navigation_type);
  }
  navigation_type = a2->navigation_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->navigation_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->navigation_type, v3);
  }
  this->navigation_type = navigation_type;
  v8 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->check_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->check_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->check_type);
  }
  check_type = a2->check_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->check_type >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
    __asan_report_store4(&this->check_type, v8);
  this->check_type = check_type;
  if ( *(char *)(((unsigned __int64)&a2->only_check_change >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->only_check_change, v8, &a2->only_check_change);
  only_check_change = a2->only_check_change;
  v12 = *(_BYTE *)(((unsigned __int64)&this->only_check_change >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->only_check_change, v8, &this->only_check_change);
  }
  this->only_check_change = only_check_change;
};

// Line 1532: range 000000000DF50FBE-000000000DF50FE8
void __cdecl data::ConfigGuideNavigationCondition::~ConfigGuideNavigationCondition(
        data::ConfigGuideNavigationCondition *const this)
{
  data::ConfigGuideNavigationCondition::~ConfigGuideNavigationCondition(this);
  operator delete(this, 0x38uLL);
};

// Line 1532: range 000000000DF50F70-000000000DF50FBD
void __cdecl data::ConfigGuideNavigationCondition::~ConfigGuideNavigationCondition(
        data::ConfigGuideNavigationCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideNavigationCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1537: range 000000000D77A876-000000000D77A886
const char *__cdecl data::ConfigGuideNavigationCondition::getTypeName(
        const data::ConfigGuideNavigationCondition *const this)
{
  return "ConfigGuideNavigationCondition";
};

// Line 1538: range 000000000D77A888-000000000D77AA24
int32_t __cdecl data::ConfigGuideNavigationCondition::getHashNum(
        const data::ConfigGuideNavigationCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideNavigationCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideNavigationCondition",
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

// Line 1554: range 000000000DEDE26C-000000000DEDE2AD
void __cdecl data::ConfigGuideNavigationConditionFactory::ConfigGuideNavigationConditionFactory(
        data::ConfigGuideNavigationConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideNavigationConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideNavigationConditionFactory = v2;
};

// Line 1562: range 000000000DEDE5B6-000000000DEDE603
void __cdecl data::ConfigGuideOpenPaimonNavigationCondition::ConfigGuideOpenPaimonNavigationCondition(
        data::ConfigGuideOpenPaimonNavigationCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenPaimonNavigationCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 1562: range 000000000DEDEB00-000000000DEDEB58
void __cdecl data::ConfigGuideOpenPaimonNavigationCondition::ConfigGuideOpenPaimonNavigationCondition(
        data::ConfigGuideOpenPaimonNavigationCondition *const this,
        const data::ConfigGuideOpenPaimonNavigationCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenPaimonNavigationCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 1568: range 000000000DF50EF6-000000000DF50F43
void __cdecl data::ConfigGuideOpenPaimonNavigationCondition::~ConfigGuideOpenPaimonNavigationCondition(
        data::ConfigGuideOpenPaimonNavigationCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenPaimonNavigationCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 1568: range 000000000DF50F44-000000000DF50F6E
void __cdecl data::ConfigGuideOpenPaimonNavigationCondition::~ConfigGuideOpenPaimonNavigationCondition(
        data::ConfigGuideOpenPaimonNavigationCondition *const this)
{
  data::ConfigGuideOpenPaimonNavigationCondition::~ConfigGuideOpenPaimonNavigationCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1573: range 000000000D77AA26-000000000D77AA36
const char *__cdecl data::ConfigGuideOpenPaimonNavigationCondition::getTypeName(
        const data::ConfigGuideOpenPaimonNavigationCondition *const this)
{
  return "ConfigGuideOpenPaimonNavigationCondition";
};

// Line 1574: range 000000000D77AA38-000000000D77ABD4
int32_t __cdecl data::ConfigGuideOpenPaimonNavigationCondition::getHashNum(
        const data::ConfigGuideOpenPaimonNavigationCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideOpenPaimonNavigationCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideOpenPaimonNavigationCondition",
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

// Line 1590: range 000000000DEDEDA2-000000000DEDEDE3
void __cdecl data::ConfigGuideOpenPaimonNavigationConditionFactory::ConfigGuideOpenPaimonNavigationConditionFactory(
        data::ConfigGuideOpenPaimonNavigationConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideOpenPaimonNavigationConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideOpenPaimonNavigationConditionFactory = v2;
};

// Line 1598: range 000000000DEDF0EC-000000000DEDF17F
void __cdecl data::ConfigGuideVirtualDialActionCondition::ConfigGuideVirtualDialActionCondition(
        data::ConfigGuideVirtualDialActionCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideVirtualDialActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->virtual_dial_action >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->virtual_dial_action >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->virtual_dial_action, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->virtual_dial_action = 0;
};

// Line 1598: range 000000000DEDF554-000000000DEDF631
void __cdecl data::ConfigGuideVirtualDialActionCondition::ConfigGuideVirtualDialActionCondition(
        data::ConfigGuideVirtualDialActionCondition *const this,
        const data::ConfigGuideVirtualDialActionCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t virtual_dial_action; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideVirtualDialActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->virtual_dial_action >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->virtual_dial_action >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->virtual_dial_action);
  }
  virtual_dial_action = a2->virtual_dial_action;
  v5 = *(_BYTE *)(((unsigned __int64)&this->virtual_dial_action >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->virtual_dial_action, v3);
  }
  this->virtual_dial_action = virtual_dial_action;
};

// Line 1605: range 000000000DF50E7C-000000000DF50EC9
void __cdecl data::ConfigGuideVirtualDialActionCondition::~ConfigGuideVirtualDialActionCondition(
        data::ConfigGuideVirtualDialActionCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideVirtualDialActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1605: range 000000000DF50ECA-000000000DF50EF4
void __cdecl data::ConfigGuideVirtualDialActionCondition::~ConfigGuideVirtualDialActionCondition(
        data::ConfigGuideVirtualDialActionCondition *const this)
{
  data::ConfigGuideVirtualDialActionCondition::~ConfigGuideVirtualDialActionCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1610: range 000000000D77ABD6-000000000D77ABE6
const char *__cdecl data::ConfigGuideVirtualDialActionCondition::getTypeName(
        const data::ConfigGuideVirtualDialActionCondition *const this)
{
  return "ConfigGuideVirtualDialActionCondition";
};

// Line 1611: range 000000000D77ABE8-000000000D77AD84
int32_t __cdecl data::ConfigGuideVirtualDialActionCondition::getHashNum(
        const data::ConfigGuideVirtualDialActionCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideVirtualDialActionCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideVirtualDialActionCondition",
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

// Line 1627: range 000000000DEDF87A-000000000DEDF8BB
void __cdecl data::ConfigGuideVirtualDialActionConditionFactory::ConfigGuideVirtualDialActionConditionFactory(
        data::ConfigGuideVirtualDialActionConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideVirtualDialActionConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideVirtualDialActionConditionFactory = v2;
};

// Line 1635: range 000000000DEDFBC4-000000000DEDFC57
void __cdecl data::ConfigGuideCenterVirtualDialActionCondition::ConfigGuideCenterVirtualDialActionCondition(
        data::ConfigGuideCenterVirtualDialActionCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCenterVirtualDialActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->paimon_entry_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->paimon_entry_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->paimon_entry_type, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->paimon_entry_type = 0;
};

// Line 1635: range 000000000DEE002C-000000000DEE0109
void __cdecl data::ConfigGuideCenterVirtualDialActionCondition::ConfigGuideCenterVirtualDialActionCondition(
        data::ConfigGuideCenterVirtualDialActionCondition *const this,
        const data::ConfigGuideCenterVirtualDialActionCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t paimon_entry_type; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCenterVirtualDialActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->paimon_entry_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->paimon_entry_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->paimon_entry_type);
  }
  paimon_entry_type = a2->paimon_entry_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->paimon_entry_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->paimon_entry_type, v3);
  }
  this->paimon_entry_type = paimon_entry_type;
};

// Line 1642: range 000000000DF50E50-000000000DF50E7A
void __cdecl data::ConfigGuideCenterVirtualDialActionCondition::~ConfigGuideCenterVirtualDialActionCondition(
        data::ConfigGuideCenterVirtualDialActionCondition *const this)
{
  data::ConfigGuideCenterVirtualDialActionCondition::~ConfigGuideCenterVirtualDialActionCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1642: range 000000000DF50E02-000000000DF50E4F
void __cdecl data::ConfigGuideCenterVirtualDialActionCondition::~ConfigGuideCenterVirtualDialActionCondition(
        data::ConfigGuideCenterVirtualDialActionCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCenterVirtualDialActionCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1647: range 000000000D77AD86-000000000D77AD96
const char *__cdecl data::ConfigGuideCenterVirtualDialActionCondition::getTypeName(
        const data::ConfigGuideCenterVirtualDialActionCondition *const this)
{
  return "ConfigGuideCenterVirtualDialActionCondition";
};

// Line 1648: range 000000000D77AD98-000000000D77AF34
int32_t __cdecl data::ConfigGuideCenterVirtualDialActionCondition::getHashNum(
        const data::ConfigGuideCenterVirtualDialActionCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCenterVirtualDialActionCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCenterVirtualDialActionCondition",
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

// Line 1664: range 000000000DEE0352-000000000DEE0393
void __cdecl data::ConfigGuideCenterVirtualDialActionConditionFactory::ConfigGuideCenterVirtualDialActionConditionFactory(
        data::ConfigGuideCenterVirtualDialActionConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCenterVirtualDialActionConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCenterVirtualDialActionConditionFactory = v2;
};

// Line 1690: range 000000000DEE07FC-000000000DEE08CA
void __cdecl data::ConfigGuideCheckPlatformCondition::ConfigGuideCheckPlatformCondition(
        data::ConfigGuideCheckPlatformCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckPlatformCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->platform >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->platform >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->platform, v3);
  }
  this->platform = None_18;
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value, v3, &this->value);
  this->value = 0;
};

// Line 1690: range 000000000DEE0CA6-000000000DEE0DF9
void __cdecl data::ConfigGuideCheckPlatformCondition::ConfigGuideCheckPlatformCondition(
        data::ConfigGuideCheckPlatformCondition *const this,
        const data::ConfigGuideCheckPlatformCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuidePlatform platform; // ecx
  char v5; // dl
  bool value; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckPlatformCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->platform >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->platform >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->platform);
  }
  platform = a2->platform;
  v5 = *(_BYTE *)(((unsigned __int64)&this->platform >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->platform, v3);
  this->platform = platform;
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value, v3, &a2->value);
  value = a2->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->value, v3, &this->value);
  }
  this->value = value;
};

// Line 1698: range 000000000DF50D88-000000000DF50DD5
void __cdecl data::ConfigGuideCheckPlatformCondition::~ConfigGuideCheckPlatformCondition(
        data::ConfigGuideCheckPlatformCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckPlatformCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1698: range 000000000DF50DD6-000000000DF50E00
void __cdecl data::ConfigGuideCheckPlatformCondition::~ConfigGuideCheckPlatformCondition(
        data::ConfigGuideCheckPlatformCondition *const this)
{
  data::ConfigGuideCheckPlatformCondition::~ConfigGuideCheckPlatformCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1703: range 000000000D77AF36-000000000D77AF46
const char *__cdecl data::ConfigGuideCheckPlatformCondition::getTypeName(
        const data::ConfigGuideCheckPlatformCondition *const this)
{
  return "ConfigGuideCheckPlatformCondition";
};

// Line 1704: range 000000000D77AF48-000000000D77B0E4
int32_t __cdecl data::ConfigGuideCheckPlatformCondition::getHashNum(
        const data::ConfigGuideCheckPlatformCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCheckPlatformCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCheckPlatformCondition",
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

// Line 1720: range 000000000DEE1042-000000000DEE1083
void __cdecl data::ConfigGuideCheckPlatformConditionFactory::ConfigGuideCheckPlatformConditionFactory(
        data::ConfigGuideCheckPlatformConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckPlatformConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCheckPlatformConditionFactory = v2;
};

// Line 1728: range 000000000DEE138C-000000000DEE1419
void __cdecl data::ConfigGuideCheckAimCondition::ConfigGuideCheckAimCondition(
        data::ConfigGuideCheckAimCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckAimCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->value, v3, v4);
  this->value = 0;
};

// Line 1728: range 000000000DEE17EE-000000000DEE18C6
void __cdecl data::ConfigGuideCheckAimCondition::ConfigGuideCheckAimCondition(
        data::ConfigGuideCheckAimCondition *const this,
        const data::ConfigGuideCheckAimCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckAimCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->value, v3, v4);
  value = a2->value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->value, v3, v7);
  this->value = value;
};

// Line 1735: range 000000000DF50D5C-000000000DF50D86
void __cdecl data::ConfigGuideCheckAimCondition::~ConfigGuideCheckAimCondition(
        data::ConfigGuideCheckAimCondition *const this)
{
  data::ConfigGuideCheckAimCondition::~ConfigGuideCheckAimCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1735: range 000000000DF50D0E-000000000DF50D5B
void __cdecl data::ConfigGuideCheckAimCondition::~ConfigGuideCheckAimCondition(
        data::ConfigGuideCheckAimCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckAimCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1740: range 000000000D77B0E6-000000000D77B0F6
const char *__cdecl data::ConfigGuideCheckAimCondition::getTypeName(
        const data::ConfigGuideCheckAimCondition *const this)
{
  return "ConfigGuideCheckAimCondition";
};

// Line 1741: range 000000000D77B0F8-000000000D77B294
int32_t __cdecl data::ConfigGuideCheckAimCondition::getHashNum(const data::ConfigGuideCheckAimCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCheckAimCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCheckAimCondition",
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

// Line 1757: range 000000000DEE1B10-000000000DEE1B51
void __cdecl data::ConfigGuideCheckAimConditionFactory::ConfigGuideCheckAimConditionFactory(
        data::ConfigGuideCheckAimConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCheckAimConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCheckAimConditionFactory = v2;
};

// Line 1780: range 000000000DEE1FBA-000000000DEE204D
void __cdecl data::ConfigGuideLevelTypeCondition::ConfigGuideLevelTypeCondition(
        data::ConfigGuideLevelTypeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelTypeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->type = All_0;
};

// Line 1780: range 000000000DEE2422-000000000DEE24FF
void __cdecl data::ConfigGuideLevelTypeCondition::ConfigGuideLevelTypeCondition(
        data::ConfigGuideLevelTypeCondition *const this,
        const data::ConfigGuideLevelTypeCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideLevelType type; // ecx
  char v5; // dl

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelTypeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->type, v3);
  }
  this->type = type;
};

// Line 1787: range 000000000DF50CE2-000000000DF50D0C
void __cdecl data::ConfigGuideLevelTypeCondition::~ConfigGuideLevelTypeCondition(
        data::ConfigGuideLevelTypeCondition *const this)
{
  data::ConfigGuideLevelTypeCondition::~ConfigGuideLevelTypeCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1787: range 000000000DF50C94-000000000DF50CE1
void __cdecl data::ConfigGuideLevelTypeCondition::~ConfigGuideLevelTypeCondition(
        data::ConfigGuideLevelTypeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelTypeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1792: range 000000000D77B296-000000000D77B2A6
const char *__cdecl data::ConfigGuideLevelTypeCondition::getTypeName(
        const data::ConfigGuideLevelTypeCondition *const this)
{
  return "ConfigGuideLevelTypeCondition";
};

// Line 1793: range 000000000D77B2A8-000000000D77B444
int32_t __cdecl data::ConfigGuideLevelTypeCondition::getHashNum(const data::ConfigGuideLevelTypeCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideLevelTypeCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideLevelTypeCondition",
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

// Line 1809: range 000000000DEE2748-000000000DEE2789
void __cdecl data::ConfigGuideLevelTypeConditionFactory::ConfigGuideLevelTypeConditionFactory(
        data::ConfigGuideLevelTypeConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideLevelTypeConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideLevelTypeConditionFactory = v2;
};

// Line 1832: range 000000000DEE2BF2-000000000DEE2D49
void __cdecl data::ConfigGuidePressKeyCondition::ConfigGuidePressKeyCondition(
        data::ConfigGuidePressKeyCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePressKeyCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_id, v3);
  }
  this->event_id = Invalid_3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_event_id, v3);
  }
  this->end_event_id = Invalid_3;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v4);
  }
  this->type = PressDown_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v4);
  }
  this->value = 0.0;
};

// Line 1832: range 000000000DEE313E-000000000DEE338D
void __cdecl data::ConfigGuidePressKeyCondition::ConfigGuidePressKeyCondition(
        data::ConfigGuidePressKeyCondition *const this,
        const data::ConfigGuidePressKeyCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::InputEventType event_id; // ecx
  char v5; // dl
  data::InputEventType end_event_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GuideKeyClick type; // ecx
  char v10; // dl
  float value; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePressKeyCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->event_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->event_id);
  }
  event_id = a2->event_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->event_id, v3);
  }
  this->event_id = event_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->end_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->end_event_id);
  }
  end_event_id = a2->end_event_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->end_event_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->end_event_id, v3);
  }
  this->end_event_id = end_event_id;
  v8 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
    __asan_report_store4(&this->type, v8);
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v8);
  }
  this->value = value;
};

// Line 1842: range 000000000DF50C1A-000000000DF50C67
void __cdecl data::ConfigGuidePressKeyCondition::~ConfigGuidePressKeyCondition(
        data::ConfigGuidePressKeyCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePressKeyCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1842: range 000000000DF50C68-000000000DF50C92
void __cdecl data::ConfigGuidePressKeyCondition::~ConfigGuidePressKeyCondition(
        data::ConfigGuidePressKeyCondition *const this)
{
  data::ConfigGuidePressKeyCondition::~ConfigGuidePressKeyCondition(this);
  operator delete(this, 0x38uLL);
};

// Line 1847: range 000000000D77B446-000000000D77B456
const char *__cdecl data::ConfigGuidePressKeyCondition::getTypeName(
        const data::ConfigGuidePressKeyCondition *const this)
{
  return "ConfigGuidePressKeyCondition";
};

// Line 1848: range 000000000D77B458-000000000D77B5F4
int32_t __cdecl data::ConfigGuidePressKeyCondition::getHashNum(const data::ConfigGuidePressKeyCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuidePressKeyCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuidePressKeyCondition",
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

// Line 1864: range 000000000DEE35D6-000000000DEE3617
void __cdecl data::ConfigGuidePressKeyConditionFactory::ConfigGuidePressKeyConditionFactory(
        data::ConfigGuidePressKeyConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePressKeyConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuidePressKeyConditionFactory = v2;
};

// Line 1872: range 000000000DEE3920-000000000DEE39EE
void __cdecl data::ConfigGuideMapClickCondition::ConfigGuideMapClickCondition(
        data::ConfigGuideMapClickCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMapClickCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mark_id, v3);
  }
  this->mark_id = 0;
  if ( *(char *)(((unsigned __int64)&this->only_single_click >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->only_single_click, v3, &this->only_single_click);
  this->only_single_click = 1;
};

// Line 1872: range 000000000DEE3DCA-000000000DEE3F1D
void __cdecl data::ConfigGuideMapClickCondition::ConfigGuideMapClickCondition(
        data::ConfigGuideMapClickCondition *const this,
        const data::ConfigGuideMapClickCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t mark_id; // ecx
  char v5; // dl
  bool only_single_click; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMapClickCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mark_id);
  }
  mark_id = a2->mark_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->mark_id, v3);
  this->mark_id = mark_id;
  if ( *(char *)(((unsigned __int64)&a2->only_single_click >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->only_single_click, v3, &a2->only_single_click);
  only_single_click = a2->only_single_click;
  v7 = *(_BYTE *)(((unsigned __int64)&this->only_single_click >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->only_single_click, v3, &this->only_single_click);
  }
  this->only_single_click = only_single_click;
};

// Line 1880: range 000000000DF50BEE-000000000DF50C18
void __cdecl data::ConfigGuideMapClickCondition::~ConfigGuideMapClickCondition(
        data::ConfigGuideMapClickCondition *const this)
{
  data::ConfigGuideMapClickCondition::~ConfigGuideMapClickCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1880: range 000000000DF50BA0-000000000DF50BED
void __cdecl data::ConfigGuideMapClickCondition::~ConfigGuideMapClickCondition(
        data::ConfigGuideMapClickCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMapClickCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1885: range 000000000D77B5F6-000000000D77B606
const char *__cdecl data::ConfigGuideMapClickCondition::getTypeName(
        const data::ConfigGuideMapClickCondition *const this)
{
  return "ConfigGuideMapClickCondition";
};

// Line 1886: range 000000000D77B608-000000000D77B7A4
int32_t __cdecl data::ConfigGuideMapClickCondition::getHashNum(const data::ConfigGuideMapClickCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideMapClickCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideMapClickCondition",
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

// Line 1902: range 000000000DEE4166-000000000DEE41A7
void __cdecl data::ConfigGuideMapClickConditionFactory::ConfigGuideMapClickConditionFactory(
        data::ConfigGuideMapClickConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMapClickConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideMapClickConditionFactory = v2;
};

// Line 1910: range 000000000DEE44B0-000000000DEE458E
void __cdecl data::ConfigGuideSceneIdCondition::ConfigGuideSceneIdCondition(
        data::ConfigGuideSceneIdCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSceneIdCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  std::vector<unsigned int>::vector(&this->scene_id_list);
  if ( *(char *)(((unsigned __int64)&this->is_scene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_scene, v3, &this->is_scene);
  this->is_scene = 1;
};

// Line 1910: range 000000000DEE49AA-000000000DEE4B3B
void __cdecl data::ConfigGuideSceneIdCondition::ConfigGuideSceneIdCondition(
        data::ConfigGuideSceneIdCondition *const this,
        const data::ConfigGuideSceneIdCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t scene_id; // ecx
  char v5; // dl
  data::UInt32List *p_scene_id_list; // rsi
  bool is_scene; // cl
  char v8; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSceneIdCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = scene_id;
  p_scene_id_list = &a2->scene_id_list;
  std::vector<unsigned int>::vector(&this->scene_id_list, &a2->scene_id_list);
  if ( *(char *)(((unsigned __int64)&a2->is_scene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_scene, p_scene_id_list, &a2->is_scene);
  is_scene = a2->is_scene;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_scene >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_scene_id_list) = v8 != 0;
    __asan_report_store1(&this->is_scene, p_scene_id_list, &this->is_scene);
  }
  this->is_scene = is_scene;
};

// Line 1919: range 000000000DF50B16-000000000DF50B73
void __cdecl data::ConfigGuideSceneIdCondition::~ConfigGuideSceneIdCondition(
        data::ConfigGuideSceneIdCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSceneIdCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<unsigned int>::~vector(&this->scene_id_list);
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1919: range 000000000DF50B74-000000000DF50B9E
void __cdecl data::ConfigGuideSceneIdCondition::~ConfigGuideSceneIdCondition(
        data::ConfigGuideSceneIdCondition *const this)
{
  data::ConfigGuideSceneIdCondition::~ConfigGuideSceneIdCondition(this);
  operator delete(this, 0x48uLL);
};

// Line 1924: range 000000000D77B7A6-000000000D77B7B6
const char *__cdecl data::ConfigGuideSceneIdCondition::getTypeName(const data::ConfigGuideSceneIdCondition *const this)
{
  return "ConfigGuideSceneIdCondition";
};

// Line 1925: range 000000000D77B7B8-000000000D77B954
int32_t __cdecl data::ConfigGuideSceneIdCondition::getHashNum(const data::ConfigGuideSceneIdCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideSceneIdCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideSceneIdCondition",
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

// Line 1941: range 000000000DEE4E24-000000000DEE4E65
void __cdecl data::ConfigGuideSceneIdConditionFactory::ConfigGuideSceneIdConditionFactory(
        data::ConfigGuideSceneIdConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSceneIdConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideSceneIdConditionFactory = v2;
};

// Line 1949: range 000000000DEE516E-000000000DEE524C
void __cdecl data::ConfigGuideDungeonIdCondition::ConfigGuideDungeonIdCondition(
        data::ConfigGuideDungeonIdCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDungeonIdCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->dungeon_id_list);
  if ( *(char *)(((unsigned __int64)&this->is_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dungeon, v3, &this->is_dungeon);
  this->is_dungeon = 1;
};

// Line 1949: range 000000000DEE5668-000000000DEE57F9
void __cdecl data::ConfigGuideDungeonIdCondition::ConfigGuideDungeonIdCondition(
        data::ConfigGuideDungeonIdCondition *const this,
        const data::ConfigGuideDungeonIdCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t dungeon_id; // ecx
  char v5; // dl
  data::UInt32List *p_dungeon_id_list; // rsi
  bool is_dungeon; // cl
  char v8; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDungeonIdCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = dungeon_id;
  p_dungeon_id_list = &a2->dungeon_id_list;
  std::vector<unsigned int>::vector(&this->dungeon_id_list, &a2->dungeon_id_list);
  if ( *(char *)(((unsigned __int64)&a2->is_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_dungeon, p_dungeon_id_list, &a2->is_dungeon);
  is_dungeon = a2->is_dungeon;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_dungeon >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_dungeon_id_list) = v8 != 0;
    __asan_report_store1(&this->is_dungeon, p_dungeon_id_list, &this->is_dungeon);
  }
  this->is_dungeon = is_dungeon;
};

// Line 1958: range 000000000DF50AEA-000000000DF50B14
void __cdecl data::ConfigGuideDungeonIdCondition::~ConfigGuideDungeonIdCondition(
        data::ConfigGuideDungeonIdCondition *const this)
{
  data::ConfigGuideDungeonIdCondition::~ConfigGuideDungeonIdCondition(this);
  operator delete(this, 0x48uLL);
};

// Line 1958: range 000000000DF50A8C-000000000DF50AE9
void __cdecl data::ConfigGuideDungeonIdCondition::~ConfigGuideDungeonIdCondition(
        data::ConfigGuideDungeonIdCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDungeonIdCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_id_list);
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1963: range 000000000D77B956-000000000D77B966
const char *__cdecl data::ConfigGuideDungeonIdCondition::getTypeName(
        const data::ConfigGuideDungeonIdCondition *const this)
{
  return "ConfigGuideDungeonIdCondition";
};

// Line 1964: range 000000000D77B968-000000000D77BB04
int32_t __cdecl data::ConfigGuideDungeonIdCondition::getHashNum(const data::ConfigGuideDungeonIdCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideDungeonIdCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideDungeonIdCondition",
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

// Line 1980: range 000000000DEE5AE2-000000000DEE5B23
void __cdecl data::ConfigGuideDungeonIdConditionFactory::ConfigGuideDungeonIdConditionFactory(
        data::ConfigGuideDungeonIdConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDungeonIdConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideDungeonIdConditionFactory = v2;
};

// Line 1988: range 000000000DEE5E2C-000000000DEE5EF9
void __cdecl data::ConfigGuideHomeSceneCondition::ConfigGuideHomeSceneCondition(
        data::ConfigGuideHomeSceneCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHomeSceneCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_in_home_big_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_in_home_big_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_in_home_big_world, v3, v4);
  this->is_in_home_big_world = 1;
  v5 = ((_BYTE)this + 34) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_in_home_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_in_home_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_in_home_room, v5, v6);
  this->is_in_home_room = 1;
};

// Line 1988: range 000000000DEE62CE-000000000DEE6426
void __cdecl data::ConfigGuideHomeSceneCondition::ConfigGuideHomeSceneCondition(
        data::ConfigGuideHomeSceneCondition *const this,
        const data::ConfigGuideHomeSceneCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_in_home_big_world; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_in_home_room; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHomeSceneCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_in_home_big_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_in_home_big_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_in_home_big_world, v3, v4);
  is_in_home_big_world = a2->is_in_home_big_world;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_in_home_big_world >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_in_home_big_world, v3, v7);
  this->is_in_home_big_world = is_in_home_big_world;
  v8 = ((_BYTE)a2 + 34) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_in_home_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_in_home_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_in_home_room, v8, v9);
  is_in_home_room = a2->is_in_home_room;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_in_home_room >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 34) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_in_home_room, v8, v12);
  this->is_in_home_room = is_in_home_room;
};

// Line 1996: range 000000000DF50A12-000000000DF50A5F
void __cdecl data::ConfigGuideHomeSceneCondition::~ConfigGuideHomeSceneCondition(
        data::ConfigGuideHomeSceneCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHomeSceneCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 1996: range 000000000DF50A60-000000000DF50A8A
void __cdecl data::ConfigGuideHomeSceneCondition::~ConfigGuideHomeSceneCondition(
        data::ConfigGuideHomeSceneCondition *const this)
{
  data::ConfigGuideHomeSceneCondition::~ConfigGuideHomeSceneCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 2001: range 000000000D77BB06-000000000D77BB16
const char *__cdecl data::ConfigGuideHomeSceneCondition::getTypeName(
        const data::ConfigGuideHomeSceneCondition *const this)
{
  return "ConfigGuideHomeSceneCondition";
};

// Line 2002: range 000000000D77BB18-000000000D77BCB4
int32_t __cdecl data::ConfigGuideHomeSceneCondition::getHashNum(const data::ConfigGuideHomeSceneCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideHomeSceneCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideHomeSceneCondition",
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

// Line 2018: range 000000000DEE6670-000000000DEE66B1
void __cdecl data::ConfigGuideHomeSceneConditionFactory::ConfigGuideHomeSceneConditionFactory(
        data::ConfigGuideHomeSceneConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHomeSceneConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideHomeSceneConditionFactory = v2;
};

// Line 2026: range 000000000DEE69BA-000000000DEE6ACB
void __cdecl data::ConfigGuideFoundationBuildCondition::ConfigGuideFoundationBuildCondition(
        data::ConfigGuideFoundationBuildCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFoundationBuildCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->num, v3);
  }
  this->num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->opt, v3);
  }
  this->opt = Equal_0;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_build >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_build >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_build, v4, v5);
  this->is_build = 1;
};

// Line 2026: range 000000000DEE6EA6-000000000DEE7078
void __cdecl data::ConfigGuideFoundationBuildCondition::ConfigGuideFoundationBuildCondition(
        data::ConfigGuideFoundationBuildCondition *const this,
        const data::ConfigGuideFoundationBuildCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t num; // ecx
  char v5; // dl
  data::GuideOperator opt; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_build; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFoundationBuildCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->num);
  }
  num = a2->num;
  v5 = *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->num, v3);
  }
  this->num = num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->opt);
  }
  opt = a2->opt;
  v7 = *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->opt, v3);
  }
  this->opt = opt;
  v8 = ((_BYTE)a2 + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_build >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_build >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_build, v8, v9);
  is_build = a2->is_build;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_build >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_build, v8, v12);
  this->is_build = is_build;
};

// Line 2035: range 000000000DF50998-000000000DF509E5
void __cdecl data::ConfigGuideFoundationBuildCondition::~ConfigGuideFoundationBuildCondition(
        data::ConfigGuideFoundationBuildCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFoundationBuildCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2035: range 000000000DF509E6-000000000DF50A10
void __cdecl data::ConfigGuideFoundationBuildCondition::~ConfigGuideFoundationBuildCondition(
        data::ConfigGuideFoundationBuildCondition *const this)
{
  data::ConfigGuideFoundationBuildCondition::~ConfigGuideFoundationBuildCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 2040: range 000000000D77BCB6-000000000D77BCC6
const char *__cdecl data::ConfigGuideFoundationBuildCondition::getTypeName(
        const data::ConfigGuideFoundationBuildCondition *const this)
{
  return "ConfigGuideFoundationBuildCondition";
};

// Line 2041: range 000000000D77BCC8-000000000D77BE64
int32_t __cdecl data::ConfigGuideFoundationBuildCondition::getHashNum(
        const data::ConfigGuideFoundationBuildCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideFoundationBuildCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideFoundationBuildCondition",
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

// Line 2057: range 000000000DEE72C2-000000000DEE7303
void __cdecl data::ConfigGuideFoundationBuildConditionFactory::ConfigGuideFoundationBuildConditionFactory(
        data::ConfigGuideFoundationBuildConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFoundationBuildConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideFoundationBuildConditionFactory = v2;
};

// Line 2065: range 000000000DEE760C-000000000DEE76DA
void __cdecl data::ConfigGuideMechanicusPickCardCondition::ConfigGuideMechanicusPickCardCondition(
        data::ConfigGuideMechanicusPickCardCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusPickCardCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0;
  if ( *(char *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  this->is_select = 1;
};

// Line 2065: range 000000000DEE7AB6-000000000DEE7C09
void __cdecl data::ConfigGuideMechanicusPickCardCondition::ConfigGuideMechanicusPickCardCondition(
        data::ConfigGuideMechanicusPickCardCondition *const this,
        const data::ConfigGuideMechanicusPickCardCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t value; // ecx
  char v5; // dl
  bool is_select; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusPickCardCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->value, v3);
  this->value = value;
  if ( *(char *)(((unsigned __int64)&a2->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_select, v3, &a2->is_select);
  is_select = a2->is_select;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  }
  this->is_select = is_select;
};

// Line 2073: range 000000000DF5091E-000000000DF5096B
void __cdecl data::ConfigGuideMechanicusPickCardCondition::~ConfigGuideMechanicusPickCardCondition(
        data::ConfigGuideMechanicusPickCardCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusPickCardCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2073: range 000000000DF5096C-000000000DF50996
void __cdecl data::ConfigGuideMechanicusPickCardCondition::~ConfigGuideMechanicusPickCardCondition(
        data::ConfigGuideMechanicusPickCardCondition *const this)
{
  data::ConfigGuideMechanicusPickCardCondition::~ConfigGuideMechanicusPickCardCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 2078: range 000000000D77BE66-000000000D77BE76
const char *__cdecl data::ConfigGuideMechanicusPickCardCondition::getTypeName(
        const data::ConfigGuideMechanicusPickCardCondition *const this)
{
  return "ConfigGuideMechanicusPickCardCondition";
};

// Line 2079: range 000000000D77BE78-000000000D77C014
int32_t __cdecl data::ConfigGuideMechanicusPickCardCondition::getHashNum(
        const data::ConfigGuideMechanicusPickCardCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideMechanicusPickCardCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideMechanicusPickCardCondition",
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

// Line 2095: range 000000000DEE7E52-000000000DEE7E93
void __cdecl data::ConfigGuideMechanicusPickCardConditionFactory::ConfigGuideMechanicusPickCardConditionFactory(
        data::ConfigGuideMechanicusPickCardConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusPickCardConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideMechanicusPickCardConditionFactory = v2;
};

// Line 2103: range 000000000DEE819C-000000000DEE8229
void __cdecl data::ConfigGuideMechanicusCurseCardCondition::ConfigGuideMechanicusCurseCardCondition(
        data::ConfigGuideMechanicusCurseCardCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusCurseCardCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->has_curse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->has_curse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->has_curse, v3, v4);
  this->has_curse = 1;
};

// Line 2103: range 000000000DEE85FE-000000000DEE86D6
void __cdecl data::ConfigGuideMechanicusCurseCardCondition::ConfigGuideMechanicusCurseCardCondition(
        data::ConfigGuideMechanicusCurseCardCondition *const this,
        const data::ConfigGuideMechanicusCurseCardCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool has_curse; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusCurseCardCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->has_curse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->has_curse >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->has_curse, v3, v4);
  has_curse = a2->has_curse;
  v6 = *(_BYTE *)(((unsigned __int64)&this->has_curse >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_curse, v3, v7);
  this->has_curse = has_curse;
};

// Line 2110: range 000000000DF508F2-000000000DF5091C
void __cdecl data::ConfigGuideMechanicusCurseCardCondition::~ConfigGuideMechanicusCurseCardCondition(
        data::ConfigGuideMechanicusCurseCardCondition *const this)
{
  data::ConfigGuideMechanicusCurseCardCondition::~ConfigGuideMechanicusCurseCardCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 2110: range 000000000DF508A4-000000000DF508F1
void __cdecl data::ConfigGuideMechanicusCurseCardCondition::~ConfigGuideMechanicusCurseCardCondition(
        data::ConfigGuideMechanicusCurseCardCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusCurseCardCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2115: range 000000000D77C016-000000000D77C026
const char *__cdecl data::ConfigGuideMechanicusCurseCardCondition::getTypeName(
        const data::ConfigGuideMechanicusCurseCardCondition *const this)
{
  return "ConfigGuideMechanicusCurseCardCondition";
};

// Line 2116: range 000000000D77C028-000000000D77C1C4
int32_t __cdecl data::ConfigGuideMechanicusCurseCardCondition::getHashNum(
        const data::ConfigGuideMechanicusCurseCardCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideMechanicusCurseCardCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideMechanicusCurseCardCondition",
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

// Line 2132: range 000000000DEE8920-000000000DEE8961
void __cdecl data::ConfigGuideMechanicusCurseCardConditionFactory::ConfigGuideMechanicusCurseCardConditionFactory(
        data::ConfigGuideMechanicusCurseCardConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideMechanicusCurseCardConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideMechanicusCurseCardConditionFactory = v2;
};

// Line 2140: range 000000000DEE8C6A-000000000DEE8CB7
void __cdecl data::ConfigGuidePageCheckBaseCondition::ConfigGuidePageCheckBaseCondition(
        data::ConfigGuidePageCheckBaseCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePageCheckBaseCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2140: range 000000000DEE91B4-000000000DEE920C
void __cdecl data::ConfigGuidePageCheckBaseCondition::ConfigGuidePageCheckBaseCondition(
        data::ConfigGuidePageCheckBaseCondition *const this,
        const data::ConfigGuidePageCheckBaseCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePageCheckBaseCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2146: range 000000000DEE9456-000000000DEE94A3
void __cdecl data::ConfigGuidePageCheckBaseCondition::~ConfigGuidePageCheckBaseCondition(
        data::ConfigGuidePageCheckBaseCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePageCheckBaseCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 2146: range 000000000DEE94A4-000000000DEE94CE
void __cdecl data::ConfigGuidePageCheckBaseCondition::~ConfigGuidePageCheckBaseCondition(
        data::ConfigGuidePageCheckBaseCondition *const this)
{
  data::ConfigGuidePageCheckBaseCondition::~ConfigGuidePageCheckBaseCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 2151: range 000000000D77C1C6-000000000D77C1D6
const char *__cdecl data::ConfigGuidePageCheckBaseCondition::getTypeName(
        const data::ConfigGuidePageCheckBaseCondition *const this)
{
  return "ConfigGuidePageCheckBaseCondition";
};

// Line 2152: range 000000000D77C1D8-000000000D77C374
int32_t __cdecl data::ConfigGuidePageCheckBaseCondition::getHashNum(
        const data::ConfigGuidePageCheckBaseCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuidePageCheckBaseCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuidePageCheckBaseCondition",
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

// Line 2171: range 000000000DEE94D0-000000000DEE959E
void __cdecl data::ConfigGuideHideandSeekSkillCategoryCondition::ConfigGuideHideandSeekSkillCategoryCondition(
        data::ConfigGuideHideandSeekSkillCategoryCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuidePageCheckBaseCondition::ConfigGuidePageCheckBaseCondition((data::ConfigGuidePageCheckBaseCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHideandSeekSkillCategoryCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index, v3);
  }
  this->index = 0;
  if ( *(char *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  this->is_select = 1;
};

// Line 2171: range 000000000DEE997A-000000000DEE9ACD
void __cdecl data::ConfigGuideHideandSeekSkillCategoryCondition::ConfigGuideHideandSeekSkillCategoryCondition(
        data::ConfigGuideHideandSeekSkillCategoryCondition *const this,
        const data::ConfigGuideHideandSeekSkillCategoryCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t index; // ecx
  char v5; // dl
  bool is_select; // cl
  char v7; // al

  data::ConfigGuidePageCheckBaseCondition::ConfigGuidePageCheckBaseCondition(
    (data::ConfigGuidePageCheckBaseCondition *const)this,
    (const data::ConfigGuidePageCheckBaseCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHideandSeekSkillCategoryCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->index);
  }
  index = a2->index;
  v5 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->index, v3);
  this->index = index;
  if ( *(char *)(((unsigned __int64)&a2->is_select >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_select, v3, &a2->is_select);
  is_select = a2->is_select;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_select >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_select, v3, &this->is_select);
  }
  this->is_select = is_select;
};

// Line 2179: range 000000000DF50878-000000000DF508A2
void __cdecl data::ConfigGuideHideandSeekSkillCategoryCondition::~ConfigGuideHideandSeekSkillCategoryCondition(
        data::ConfigGuideHideandSeekSkillCategoryCondition *const this)
{
  data::ConfigGuideHideandSeekSkillCategoryCondition::~ConfigGuideHideandSeekSkillCategoryCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 2179: range 000000000DF5082A-000000000DF50877
void __cdecl data::ConfigGuideHideandSeekSkillCategoryCondition::~ConfigGuideHideandSeekSkillCategoryCondition(
        data::ConfigGuideHideandSeekSkillCategoryCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHideandSeekSkillCategoryCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuidePageCheckBaseCondition::~ConfigGuidePageCheckBaseCondition((data::ConfigGuidePageCheckBaseCondition *const)this);
};

// Line 2184: range 000000000D77C376-000000000D77C386
const char *__cdecl data::ConfigGuideHideandSeekSkillCategoryCondition::getTypeName(
        const data::ConfigGuideHideandSeekSkillCategoryCondition *const this)
{
  return "ConfigGuideHideandSeekSkillCategoryCondition";
};

// Line 2185: range 000000000D77C388-000000000D77C524
int32_t __cdecl data::ConfigGuideHideandSeekSkillCategoryCondition::getHashNum(
        const data::ConfigGuideHideandSeekSkillCategoryCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideHideandSeekSkillCategoryCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideHideandSeekSkillCategoryCondition",
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

// Line 2201: range 000000000DEE9D16-000000000DEE9D57
void __cdecl data::ConfigGuideHideandSeekSkillCategoryConditionFactory::ConfigGuideHideandSeekSkillCategoryConditionFactory(
        data::ConfigGuideHideandSeekSkillCategoryConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideHideandSeekSkillCategoryConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideHideandSeekSkillCategoryConditionFactory = v2;
};

// Line 2209: range 000000000DEEA060-000000000DEEA12E
void __cdecl data::ConfigGuideAnchorUnlockCondition::ConfigGuideAnchorUnlockCondition(
        data::ConfigGuideAnchorUnlockCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAnchorUnlockCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id, v3);
  }
  this->point_id = 0;
  if ( *(char *)(((unsigned __int64)&this->unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->unlock, v3, &this->unlock);
  this->unlock = 0;
};

// Line 2209: range 000000000DEEA50A-000000000DEEA65D
void __cdecl data::ConfigGuideAnchorUnlockCondition::ConfigGuideAnchorUnlockCondition(
        data::ConfigGuideAnchorUnlockCondition *const this,
        const data::ConfigGuideAnchorUnlockCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t point_id; // ecx
  char v5; // dl
  bool unlock; // cl
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAnchorUnlockCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->point_id);
  }
  point_id = a2->point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->point_id, v3);
  this->point_id = point_id;
  if ( *(char *)(((unsigned __int64)&a2->unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->unlock, v3, &a2->unlock);
  unlock = a2->unlock;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->unlock, v3, &this->unlock);
  }
  this->unlock = unlock;
};

// Line 2217: range 000000000DF507B0-000000000DF507FD
void __cdecl data::ConfigGuideAnchorUnlockCondition::~ConfigGuideAnchorUnlockCondition(
        data::ConfigGuideAnchorUnlockCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAnchorUnlockCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2217: range 000000000DF507FE-000000000DF50828
void __cdecl data::ConfigGuideAnchorUnlockCondition::~ConfigGuideAnchorUnlockCondition(
        data::ConfigGuideAnchorUnlockCondition *const this)
{
  data::ConfigGuideAnchorUnlockCondition::~ConfigGuideAnchorUnlockCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 2222: range 000000000D77C526-000000000D77C536
const char *__cdecl data::ConfigGuideAnchorUnlockCondition::getTypeName(
        const data::ConfigGuideAnchorUnlockCondition *const this)
{
  return "ConfigGuideAnchorUnlockCondition";
};

// Line 2223: range 000000000D77C538-000000000D77C6D4
int32_t __cdecl data::ConfigGuideAnchorUnlockCondition::getHashNum(
        const data::ConfigGuideAnchorUnlockCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAnchorUnlockCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAnchorUnlockCondition",
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

// Line 2239: range 000000000DEEA8A6-000000000DEEA8E7
void __cdecl data::ConfigGuideAnchorUnlockConditionFactory::ConfigGuideAnchorUnlockConditionFactory(
        data::ConfigGuideAnchorUnlockConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAnchorUnlockConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideAnchorUnlockConditionFactory = v2;
};

// Line 2247: range 000000000DEEABF0-000000000DEEAC85
void __cdecl data::ConfigGuideFlyStartCondition::ConfigGuideFlyStartCondition(
        data::ConfigGuideFlyStartCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyStartCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->height = 0.0;
};

// Line 2247: range 000000000DEEB05A-000000000DEEB13A
void __cdecl data::ConfigGuideFlyStartCondition::ConfigGuideFlyStartCondition(
        data::ConfigGuideFlyStartCondition *const this,
        const data::ConfigGuideFlyStartCondition *a2)
{
  int (**v2)(...); // rdx
  float height; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyStartCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height);
  }
  height = a2->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->height = height;
};

// Line 2254: range 000000000DF50784-000000000DF507AE
void __cdecl data::ConfigGuideFlyStartCondition::~ConfigGuideFlyStartCondition(
        data::ConfigGuideFlyStartCondition *const this)
{
  data::ConfigGuideFlyStartCondition::~ConfigGuideFlyStartCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 2254: range 000000000DF50736-000000000DF50783
void __cdecl data::ConfigGuideFlyStartCondition::~ConfigGuideFlyStartCondition(
        data::ConfigGuideFlyStartCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyStartCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2259: range 000000000D77C6D6-000000000D77C6E6
const char *__cdecl data::ConfigGuideFlyStartCondition::getTypeName(
        const data::ConfigGuideFlyStartCondition *const this)
{
  return "ConfigGuideFlyStartCondition";
};

// Line 2260: range 000000000D77C6E8-000000000D77C884
int32_t __cdecl data::ConfigGuideFlyStartCondition::getHashNum(const data::ConfigGuideFlyStartCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideFlyStartCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideFlyStartCondition",
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

// Line 2276: range 000000000DEEB384-000000000DEEB3C5
void __cdecl data::ConfigGuideFlyStartConditionFactory::ConfigGuideFlyStartConditionFactory(
        data::ConfigGuideFlyStartConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyStartConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideFlyStartConditionFactory = v2;
};

// Line 2284: range 000000000DEEB6CE-000000000DEEB763
void __cdecl data::ConfigGuideFlyFinishCondition::ConfigGuideFlyFinishCondition(
        data::ConfigGuideFlyFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->time = 0.0;
};

// Line 2284: range 000000000DEEBB38-000000000DEEBC18
void __cdecl data::ConfigGuideFlyFinishCondition::ConfigGuideFlyFinishCondition(
        data::ConfigGuideFlyFinishCondition *const this,
        const data::ConfigGuideFlyFinishCondition *a2)
{
  int (**v2)(...); // rdx
  float time; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->time = time;
};

// Line 2291: range 000000000DF506BC-000000000DF50709
void __cdecl data::ConfigGuideFlyFinishCondition::~ConfigGuideFlyFinishCondition(
        data::ConfigGuideFlyFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2291: range 000000000DF5070A-000000000DF50734
void __cdecl data::ConfigGuideFlyFinishCondition::~ConfigGuideFlyFinishCondition(
        data::ConfigGuideFlyFinishCondition *const this)
{
  data::ConfigGuideFlyFinishCondition::~ConfigGuideFlyFinishCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 2296: range 000000000D77C886-000000000D77C896
const char *__cdecl data::ConfigGuideFlyFinishCondition::getTypeName(
        const data::ConfigGuideFlyFinishCondition *const this)
{
  return "ConfigGuideFlyFinishCondition";
};

// Line 2297: range 000000000D77C898-000000000D77CA34
int32_t __cdecl data::ConfigGuideFlyFinishCondition::getHashNum(const data::ConfigGuideFlyFinishCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideFlyFinishCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideFlyFinishCondition",
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

// Line 2313: range 000000000DEEBE62-000000000DEEBEA3
void __cdecl data::ConfigGuideFlyFinishConditionFactory::ConfigGuideFlyFinishConditionFactory(
        data::ConfigGuideFlyFinishConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFinishConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideFlyFinishConditionFactory = v2;
};

// Line 2321: range 000000000DEEC1AC-000000000DEEC1F9
void __cdecl data::ConfigGuideFlyFailCondition::ConfigGuideFlyFailCondition(
        data::ConfigGuideFlyFailCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFailCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2321: range 000000000DEEC6F6-000000000DEEC74E
void __cdecl data::ConfigGuideFlyFailCondition::ConfigGuideFlyFailCondition(
        data::ConfigGuideFlyFailCondition *const this,
        const data::ConfigGuideFlyFailCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideCondition::ConfigGuideCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFailCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2327: range 000000000DF50642-000000000DF5068F
void __cdecl data::ConfigGuideFlyFailCondition::~ConfigGuideFlyFailCondition(
        data::ConfigGuideFlyFailCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFailCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition(this);
};

// Line 2327: range 000000000DF50690-000000000DF506BA
void __cdecl data::ConfigGuideFlyFailCondition::~ConfigGuideFlyFailCondition(
        data::ConfigGuideFlyFailCondition *const this)
{
  data::ConfigGuideFlyFailCondition::~ConfigGuideFlyFailCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 2332: range 000000000D77CA36-000000000D77CA46
const char *__cdecl data::ConfigGuideFlyFailCondition::getTypeName(const data::ConfigGuideFlyFailCondition *const this)
{
  return "ConfigGuideFlyFailCondition";
};

// Line 2333: range 000000000D77CA48-000000000D77CBE4
int32_t __cdecl data::ConfigGuideFlyFailCondition::getHashNum(const data::ConfigGuideFlyFailCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideFlyFailCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideFlyFailCondition",
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

// Line 2349: range 000000000DEEC998-000000000DEEC9D9
void __cdecl data::ConfigGuideFlyFailConditionFactory::ConfigGuideFlyFailConditionFactory(
        data::ConfigGuideFlyFailConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFlyFailConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideFlyFailConditionFactory = v2;
};

// Line 2401: range 000000000DEED102-000000000DEED1D3
void __cdecl data::ConfigGuideProjectionGameStartCondition::ConfigGuideProjectionGameStartCondition(
        data::ConfigGuideProjectionGameStartCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameStartCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_type, v3);
  }
  this->guide_type = Input;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->input_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->input_mode, v3);
  }
  this->input_mode = Touch;
};

// Line 2401: range 000000000DEED5AE-000000000DEED700
void __cdecl data::ConfigGuideProjectionGameStartCondition::ConfigGuideProjectionGameStartCondition(
        data::ConfigGuideProjectionGameStartCondition *const this,
        const data::ConfigGuideProjectionGameStartCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ProjectionGameGuideType guide_type; // ecx
  char v5; // dl
  data::ProjectionGameGuideInputMode input_mode; // ecx
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameStartCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guide_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guide_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->guide_type);
  }
  guide_type = a2->guide_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->guide_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->guide_type, v3);
  }
  this->guide_type = guide_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->input_mode);
  }
  input_mode = a2->input_mode;
  v7 = *(_BYTE *)(((unsigned __int64)&this->input_mode >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->input_mode, v3);
  }
  this->input_mode = input_mode;
};

// Line 2409: range 000000000DF505C8-000000000DF50615
void __cdecl data::ConfigGuideProjectionGameStartCondition::~ConfigGuideProjectionGameStartCondition(
        data::ConfigGuideProjectionGameStartCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameStartCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2409: range 000000000DF50616-000000000DF50640
void __cdecl data::ConfigGuideProjectionGameStartCondition::~ConfigGuideProjectionGameStartCondition(
        data::ConfigGuideProjectionGameStartCondition *const this)
{
  data::ConfigGuideProjectionGameStartCondition::~ConfigGuideProjectionGameStartCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 2414: range 000000000D77CBE6-000000000D77CBF6
const char *__cdecl data::ConfigGuideProjectionGameStartCondition::getTypeName(
        const data::ConfigGuideProjectionGameStartCondition *const this)
{
  return "ConfigGuideProjectionGameStartCondition";
};

// Line 2415: range 000000000D77CBF8-000000000D77CD94
int32_t __cdecl data::ConfigGuideProjectionGameStartCondition::getHashNum(
        const data::ConfigGuideProjectionGameStartCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideProjectionGameStartCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideProjectionGameStartCondition",
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

// Line 2431: range 000000000DEED94A-000000000DEED98B
void __cdecl data::ConfigGuideProjectionGameStartConditionFactory::ConfigGuideProjectionGameStartConditionFactory(
        data::ConfigGuideProjectionGameStartConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameStartConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideProjectionGameStartConditionFactory = v2;
};

// Line 2439: range 000000000DEEDC94-000000000DEEDD67
void __cdecl data::ConfigGuideProjectionGameFinishCondition::ConfigGuideProjectionGameFinishCondition(
        data::ConfigGuideProjectionGameFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_type, v3);
  }
  this->finish_type = FreeRotationXY;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param, v3);
  }
  this->param = 0.0;
};

// Line 2439: range 000000000DEEE142-000000000DEEE297
void __cdecl data::ConfigGuideProjectionGameFinishCondition::ConfigGuideProjectionGameFinishCondition(
        data::ConfigGuideProjectionGameFinishCondition *const this,
        const data::ConfigGuideProjectionGameFinishCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ProjectionGameGuideFinishType finish_type; // ecx
  char v5; // dl
  float param; // xmm0_4

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->finish_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->finish_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->finish_type);
  }
  finish_type = a2->finish_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->finish_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
    __asan_report_store4(&this->finish_type, v3);
  this->finish_type = finish_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param);
  }
  param = a2->param;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param, v3);
  }
  this->param = param;
};

// Line 2447: range 000000000DF5059C-000000000DF505C6
void __cdecl data::ConfigGuideProjectionGameFinishCondition::~ConfigGuideProjectionGameFinishCondition(
        data::ConfigGuideProjectionGameFinishCondition *const this)
{
  data::ConfigGuideProjectionGameFinishCondition::~ConfigGuideProjectionGameFinishCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 2447: range 000000000DF5054E-000000000DF5059B
void __cdecl data::ConfigGuideProjectionGameFinishCondition::~ConfigGuideProjectionGameFinishCondition(
        data::ConfigGuideProjectionGameFinishCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 2452: range 000000000D77CD96-000000000D77CDA6
const char *__cdecl data::ConfigGuideProjectionGameFinishCondition::getTypeName(
        const data::ConfigGuideProjectionGameFinishCondition *const this)
{
  return "ConfigGuideProjectionGameFinishCondition";
};

// Line 2453: range 000000000D77CDA8-000000000D77CF44
int32_t __cdecl data::ConfigGuideProjectionGameFinishCondition::getHashNum(
        const data::ConfigGuideProjectionGameFinishCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideProjectionGameFinishCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideProjectionGameFinishCondition",
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

// Line 2469: range 000000000DEEE4E0-000000000DEEE521
void __cdecl data::ConfigGuideProjectionGameFinishConditionFactory::ConfigGuideProjectionGameFinishConditionFactory(
        data::ConfigGuideProjectionGameFinishConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideProjectionGameFinishConditionFactory = v2;
};

// Line 2533: range 000000000D794668-000000000D7946CD
void __cdecl data::ConfigInputHint::ConfigInputHint(data::ConfigInputHint *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::vector<data::InputActionType>::vector(&this->action_info_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2533: range 000000000D978484-000000000D97853A
void __cdecl data::ConfigInputHint::ConfigInputHint(data::ConfigInputHint *const this, data::ConfigInputHint *a2)
{
  std::vector<data::InputActionType> *p_action_info_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_action_info_list = &a2->action_info_list;
  std::vector<data::InputActionType>::vector(&this->action_info_list, p_action_info_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_action_info_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_action_info_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_action_info_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2533: range 000000000D7946CE-000000000D7946F8
void __cdecl data::ConfigInputHint::~ConfigInputHint(data::ConfigInputHint *const this)
{
  std::vector<data::InputActionType>::~vector(&this->action_info_list);
  std::string::~string(this);
};

// Line 2562: range 000000000D79474E-000000000D794C54
void __cdecl data::ConfigGuideWidgetContent::ConfigGuideWidgetContent(data::ConfigGuideWidgetContent *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->context_name);
  std::string::basic_string(&this->hint_info);
  std::string::basic_string(&this->widght_info);
  std::string::basic_string(&this->warning_info);
  std::vector<std::string>::vector(&this->white_context_list);
  std::vector<data::InputActionType>::vector(&this->action_info_list);
  std::vector<data::ConfigInputHint>::vector(&this->input_hint_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->widght_info_pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->widght_info_pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->widght_info_pos, v1);
  }
  this->widght_info_pos = TL;
  v2 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mask_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mask_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mask_type, v2);
  }
  this->mask_type = Normal_1;
  if ( *(char *)(((unsigned __int64)&this->mask_pass_easy_touch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->mask_pass_easy_touch, v2, &this->mask_pass_easy_touch);
  this->mask_pass_easy_touch = 0;
  v3 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = Normal_2;
  if ( *(_BYTE *)(((unsigned __int64)&this->xoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xoffset, v3);
  }
  this->xoffset = 0.0;
  v4 = (((_BYTE)this - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yoffset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yoffset, v4);
  }
  this->yoffset = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_offset, v4);
  }
  this->hint_offset = 0.0;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special, v5);
  }
  this->special = Normal_3;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v5);
  }
  this->value = 0.0;
  std::string::basic_string(&this->value_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->page_type, v5);
  }
  this->page_type = Normal_4;
  v6 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mask_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mask_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mask_index, v6);
  }
  this->mask_index = 0;
  if ( *(char *)(((unsigned __int64)&this->keep_scale >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->keep_scale, v6, &this->keep_scale);
  this->keep_scale = 0;
  v7 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->general_condition_type, v7);
  }
  this->general_condition_type = None_15;
  if ( *(char *)(((unsigned __int64)&this->general_condition_val >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->general_condition_val, v7, &this->general_condition_val);
  this->general_condition_val = 0;
  v8 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->save_index, v8);
  }
  this->save_index = 0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v8, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2562: range 000000000DD3F150-000000000DD3FB90
void __cdecl data::ConfigGuideWidgetContent::ConfigGuideWidgetContent(
        data::ConfigGuideWidgetContent *const this,
        const data::ConfigGuideWidgetContent *a2)
{
  data::ConfigInputHintList *p_input_hint_list; // rsi
  data::WidgetInfoPos widght_info_pos; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MaskGuideType mask_type; // ecx
  char v7; // dl
  bool mask_pass_easy_touch; // cl
  char v9; // al
  __int64 v10; // rsi
  data::ButtonGuideType type; // ecx
  char v12; // dl
  float xoffset; // xmm0_4
  float yoffset; // xmm0_4
  __int64 v15; // rsi
  float hint_offset; // xmm0_4
  __int64 v17; // rsi
  data::GuideWidgetSpecialType special; // ecx
  char v19; // dl
  float value; // xmm0_4
  std::string *p_value_str; // rsi
  data::GuidePageType page_type; // ecx
  char v23; // al
  __int64 v24; // rsi
  int32_t mask_index; // ecx
  char v26; // dl
  bool keep_scale; // cl
  char v28; // al
  __int64 v29; // rsi
  data::GuideGeneralConditionType general_condition_type; // ecx
  char v31; // dl
  bool general_condition_val; // cl
  char v33; // al
  __int64 v34; // rsi
  int32_t save_index; // ecx
  char v36; // dl
  bool is_json_loaded; // cl
  char v38; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->context_name, &a2->context_name);
  std::string::basic_string(&this->hint_info, &a2->hint_info);
  std::string::basic_string(&this->widght_info, &a2->widght_info);
  std::string::basic_string(&this->warning_info, &a2->warning_info);
  std::vector<std::string>::vector(&this->white_context_list, &a2->white_context_list);
  std::vector<data::InputActionType>::vector(&this->action_info_list, &a2->action_info_list);
  p_input_hint_list = &a2->input_hint_list;
  std::vector<data::ConfigInputHint>::vector(&this->input_hint_list, p_input_hint_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->widght_info_pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->widght_info_pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->widght_info_pos);
  }
  widght_info_pos = a2->widght_info_pos;
  v4 = *(_BYTE *)(((unsigned __int64)&this->widght_info_pos >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_input_hint_list) = v4 != 0;
    __asan_report_store4(&this->widght_info_pos, p_input_hint_list);
  }
  this->widght_info_pos = widght_info_pos;
  v5 = (((_BYTE)a2 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mask_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mask_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mask_type);
  }
  mask_type = a2->mask_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mask_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v7 )
    __asan_report_store4(&this->mask_type, v5);
  this->mask_type = mask_type;
  if ( *(char *)(((unsigned __int64)&a2->mask_pass_easy_touch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->mask_pass_easy_touch, v5, &a2->mask_pass_easy_touch);
  mask_pass_easy_touch = a2->mask_pass_easy_touch;
  v9 = *(_BYTE *)(((unsigned __int64)&this->mask_pass_easy_touch >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->mask_pass_easy_touch, v5, &this->mask_pass_easy_touch);
  }
  this->mask_pass_easy_touch = mask_pass_easy_touch;
  v10 = (((_BYTE)a2 - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this - 12) & 7) + 3) >= v12 )
    __asan_report_store4(&this->type, v10);
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->xoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->xoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->xoffset);
  }
  xoffset = a2->xoffset;
  if ( *(_BYTE *)(((unsigned __int64)&this->xoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xoffset, v10);
  }
  this->xoffset = xoffset;
  if ( *(_BYTE *)(((unsigned __int64)&a2->yoffset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->yoffset >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->yoffset);
  }
  yoffset = a2->yoffset;
  v15 = (((_BYTE)this - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yoffset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yoffset, v15);
  }
  this->yoffset = yoffset;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hint_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hint_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hint_offset);
  }
  hint_offset = a2->hint_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_offset, v15);
  }
  this->hint_offset = hint_offset;
  v17 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->special >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->special);
  }
  special = a2->special;
  v19 = *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  if ( v19 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v19 )
    __asan_report_store4(&this->special, v17);
  this->special = special;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v17);
  }
  this->value = value;
  p_value_str = &a2->value_str;
  std::string::basic_string(&this->value_str, &a2->value_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->page_type);
  }
  page_type = a2->page_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_value_str) = v23 != 0;
    __asan_report_store4(&this->page_type, p_value_str);
  }
  this->page_type = page_type;
  v24 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mask_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mask_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mask_index);
  }
  mask_index = a2->mask_index;
  v26 = *(_BYTE *)(((unsigned __int64)&this->mask_index >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  if ( v26 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v26 )
    __asan_report_store4(&this->mask_index, v24);
  this->mask_index = mask_index;
  if ( *(char *)(((unsigned __int64)&a2->keep_scale >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->keep_scale, v24, &a2->keep_scale);
  keep_scale = a2->keep_scale;
  v28 = *(_BYTE *)(((unsigned __int64)&this->keep_scale >> 3) + 0x7FFF8000);
  if ( v28 < 0 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store1(&this->keep_scale, v24, &this->keep_scale);
  }
  this->keep_scale = keep_scale;
  v29 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->general_condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->general_condition_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->general_condition_type);
  }
  general_condition_type = a2->general_condition_type;
  v31 = *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v31 != 0;
  if ( v31 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v31 )
    __asan_report_store4(&this->general_condition_type, v29);
  this->general_condition_type = general_condition_type;
  if ( *(char *)(((unsigned __int64)&a2->general_condition_val >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->general_condition_val, v29, &a2->general_condition_val);
  general_condition_val = a2->general_condition_val;
  v33 = *(_BYTE *)(((unsigned __int64)&this->general_condition_val >> 3) + 0x7FFF8000);
  if ( v33 < 0 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store1(&this->general_condition_val, v29, &this->general_condition_val);
  }
  this->general_condition_val = general_condition_val;
  v34 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->save_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->save_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->save_index);
  }
  save_index = a2->save_index;
  v36 = *(_BYTE *)(((unsigned __int64)&this->save_index >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  if ( v36 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v36 )
    __asan_report_store4(&this->save_index, v34);
  this->save_index = save_index;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v34, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v38 < 0 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store1(&this->is_json_loaded, v34, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2562: range 000000000D978D14-000000000D979695
void __cdecl data::ConfigGuideWidgetContent::ConfigGuideWidgetContent(
        data::ConfigGuideWidgetContent *const this,
        data::ConfigGuideWidgetContent *a2)
{
  std::vector<data::ConfigInputHint> *p_input_hint_list; // rsi
  data::WidgetInfoPos widght_info_pos; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MaskGuideType mask_type; // ecx
  char v7; // dl
  bool mask_pass_easy_touch; // cl
  char v9; // al
  __int64 v10; // rsi
  data::ButtonGuideType type; // ecx
  char v12; // dl
  float xoffset; // xmm0_4
  float yoffset; // xmm0_4
  __int64 v15; // rsi
  float hint_offset; // xmm0_4
  __int64 v17; // rsi
  data::GuideWidgetSpecialType special; // ecx
  char v19; // dl
  float value; // xmm0_4
  std::string *p_value_str; // rsi
  data::GuidePageType page_type; // ecx
  char v23; // al
  __int64 v24; // rsi
  int32_t mask_index; // ecx
  char v26; // dl
  bool keep_scale; // cl
  char v28; // al
  __int64 v29; // rsi
  data::GuideGeneralConditionType general_condition_type; // ecx
  char v31; // dl
  bool general_condition_val; // cl
  char v33; // al
  __int64 v34; // rsi
  int32_t save_index; // ecx
  char v36; // dl
  bool is_json_loaded; // cl
  char v38; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->context_name, &a2->context_name);
  std::string::basic_string(&this->hint_info, &a2->hint_info);
  std::string::basic_string(&this->widght_info, &a2->widght_info);
  std::string::basic_string(&this->warning_info, &a2->warning_info);
  std::vector<std::string>::vector(&this->white_context_list, &a2->white_context_list);
  std::vector<data::InputActionType>::vector(&this->action_info_list, &a2->action_info_list);
  p_input_hint_list = &a2->input_hint_list;
  std::vector<data::ConfigInputHint>::vector(&this->input_hint_list, p_input_hint_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->widght_info_pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->widght_info_pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->widght_info_pos);
  }
  widght_info_pos = a2->widght_info_pos;
  v4 = *(_BYTE *)(((unsigned __int64)&this->widght_info_pos >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_input_hint_list) = v4 != 0;
    __asan_report_store4(&this->widght_info_pos, p_input_hint_list);
  }
  this->widght_info_pos = widght_info_pos;
  v5 = (((_BYTE)a2 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mask_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mask_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mask_type);
  }
  mask_type = a2->mask_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mask_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v7 )
    __asan_report_store4(&this->mask_type, v5);
  this->mask_type = mask_type;
  if ( *(char *)(((unsigned __int64)&a2->mask_pass_easy_touch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->mask_pass_easy_touch, v5, &a2->mask_pass_easy_touch);
  mask_pass_easy_touch = a2->mask_pass_easy_touch;
  v9 = *(_BYTE *)(((unsigned __int64)&this->mask_pass_easy_touch >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->mask_pass_easy_touch, v5, &this->mask_pass_easy_touch);
  }
  this->mask_pass_easy_touch = mask_pass_easy_touch;
  v10 = (((_BYTE)a2 - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this - 12) & 7) + 3) >= v12 )
    __asan_report_store4(&this->type, v10);
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->xoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->xoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->xoffset);
  }
  xoffset = a2->xoffset;
  if ( *(_BYTE *)(((unsigned __int64)&this->xoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xoffset, v10);
  }
  this->xoffset = xoffset;
  if ( *(_BYTE *)(((unsigned __int64)&a2->yoffset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->yoffset >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->yoffset);
  }
  yoffset = a2->yoffset;
  v15 = (((_BYTE)this - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yoffset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yoffset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yoffset, v15);
  }
  this->yoffset = yoffset;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hint_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hint_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hint_offset);
  }
  hint_offset = a2->hint_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_offset, v15);
  }
  this->hint_offset = hint_offset;
  v17 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->special >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->special);
  }
  special = a2->special;
  v19 = *(_BYTE *)(((unsigned __int64)&this->special >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  if ( v19 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v19 )
    __asan_report_store4(&this->special, v17);
  this->special = special;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v17);
  }
  this->value = value;
  p_value_str = &a2->value_str;
  std::string::basic_string(&this->value_str, &a2->value_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->page_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->page_type);
  }
  page_type = a2->page_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->page_type >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_value_str) = v23 != 0;
    __asan_report_store4(&this->page_type, p_value_str);
  }
  this->page_type = page_type;
  v24 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mask_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mask_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mask_index);
  }
  mask_index = a2->mask_index;
  v26 = *(_BYTE *)(((unsigned __int64)&this->mask_index >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  if ( v26 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v26 )
    __asan_report_store4(&this->mask_index, v24);
  this->mask_index = mask_index;
  if ( *(char *)(((unsigned __int64)&a2->keep_scale >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->keep_scale, v24, &a2->keep_scale);
  keep_scale = a2->keep_scale;
  v28 = *(_BYTE *)(((unsigned __int64)&this->keep_scale >> 3) + 0x7FFF8000);
  if ( v28 < 0 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store1(&this->keep_scale, v24, &this->keep_scale);
  }
  this->keep_scale = keep_scale;
  v29 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->general_condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->general_condition_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->general_condition_type);
  }
  general_condition_type = a2->general_condition_type;
  v31 = *(_BYTE *)(((unsigned __int64)&this->general_condition_type >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v31 != 0;
  if ( v31 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v31 )
    __asan_report_store4(&this->general_condition_type, v29);
  this->general_condition_type = general_condition_type;
  if ( *(char *)(((unsigned __int64)&a2->general_condition_val >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->general_condition_val, v29, &a2->general_condition_val);
  general_condition_val = a2->general_condition_val;
  v33 = *(_BYTE *)(((unsigned __int64)&this->general_condition_val >> 3) + 0x7FFF8000);
  if ( v33 < 0 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store1(&this->general_condition_val, v29, &this->general_condition_val);
  }
  this->general_condition_val = general_condition_val;
  v34 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->save_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->save_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->save_index);
  }
  save_index = a2->save_index;
  v36 = *(_BYTE *)(((unsigned __int64)&this->save_index >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  if ( v36 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v36 )
    __asan_report_store4(&this->save_index, v34);
  this->save_index = save_index;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v34, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v38 < 0 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store1(&this->is_json_loaded, v34, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2562: range 000000000D794C56-000000000D794CF8
void __cdecl data::ConfigGuideWidgetContent::~ConfigGuideWidgetContent(data::ConfigGuideWidgetContent *const this)
{
  std::string::~string(&this->value_str);
  std::vector<data::ConfigInputHint>::~vector(&this->input_hint_list);
  std::vector<data::InputActionType>::~vector(&this->action_info_list);
  std::vector<std::string>::~vector(&this->white_context_list);
  std::string::~string(&this->warning_info);
  std::string::~string(&this->widght_info);
  std::string::~string(&this->hint_info);
  std::string::~string(&this->context_name);
  std::string::~string(this);
};

// Line 2613: range 000000000D794EE8-000000000D794F7D
void __cdecl data::ConfigGuideContextList::ConfigGuideContextList(data::ConfigGuideContextList *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->main_page_black);
  std::vector<std::string>::vector(&this->dialog_black);
  std::vector<std::string>::vector(&this->global_white);
  std::vector<std::string>::vector(&this->interval_black);
  std::vector<std::string>::vector(&this->prefab_and_hint_white);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2613: range 000000000DD3E75E-000000000DD3E8C7
void __cdecl data::ConfigGuideContextList::ConfigGuideContextList(
        data::ConfigGuideContextList *const this,
        const data::ConfigGuideContextList *a2)
{
  data::StringArray *p_prefab_and_hint_white; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->main_page_black, &a2->main_page_black);
  std::vector<std::string>::vector(&this->dialog_black, &a2->dialog_black);
  std::vector<std::string>::vector(&this->global_white, &a2->global_white);
  std::vector<std::string>::vector(&this->interval_black, &a2->interval_black);
  p_prefab_and_hint_white = &a2->prefab_and_hint_white;
  std::vector<std::string>::vector(&this->prefab_and_hint_white, p_prefab_and_hint_white);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_prefab_and_hint_white, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_prefab_and_hint_white) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_prefab_and_hint_white, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2613: range 000000000D794F7E-000000000D794FD8
void __cdecl data::ConfigGuideContextList::~ConfigGuideContextList(data::ConfigGuideContextList *const this)
{
  std::vector<std::string>::~vector(&this->prefab_and_hint_white);
  std::vector<std::string>::~vector(&this->interval_black);
  std::vector<std::string>::~vector(&this->global_white);
  std::vector<std::string>::~vector(&this->dialog_black);
  std::vector<std::string>::~vector(&this->main_page_black);
};

// Line 2660: range 000000000DEEEFE2-000000000DEEF275
void __cdecl data::ConfigGuideUIMaskAction::ConfigGuideUIMaskAction(data::ConfigGuideUIMaskAction *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGuideUIMaskAction::ConfigGuideUIMaskAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::ConfigGuideAction::ConfigGuideAction(this);
  v5 = (int (**)(...))(&`vtable for'data::ConfigGuideUIMaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v5;
  std::vector<data::ConfigGuideWidgetContent>::vector(&this->widget_list);
  std::string::basic_string(&this->top_info);
  std::vector<std::string>::vector(&this->prefab_list);
  if ( *(char *)(((unsigned __int64)&this->click_to_close >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->click_to_close, v1, &this->click_to_close);
  this->click_to_close = 0;
  v6 = ((_BYTE)this + 113) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->need_save >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->need_save >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->need_save, v6, v7);
  this->need_save = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->context_list_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->context_list_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->context_list_type, (((_BYTE)this + 116) & 7u) + 3);
  }
  this->context_list_type = Common;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->page_show_prefab_and_global_hint,
    "InLevelMainPage",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2660: range 000000000DEEFA7E-000000000DEEFD1F
void __cdecl data::ConfigGuideUIMaskAction::ConfigGuideUIMaskAction(
        data::ConfigGuideUIMaskAction *const this,
        const data::ConfigGuideUIMaskAction *a2)
{
  int (**v2)(...); // rdx
  data::StringList *p_prefab_list; // rsi
  bool click_to_close; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool need_save; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  data::ConfigGuideContextListType context_list_type; // ecx
  char v13; // dl

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideUIMaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<data::ConfigGuideWidgetContent>::vector(&this->widget_list, &a2->widget_list);
  std::string::basic_string(&this->top_info, &a2->top_info);
  p_prefab_list = &a2->prefab_list;
  std::vector<std::string>::vector(&this->prefab_list, &a2->prefab_list);
  if ( *(char *)(((unsigned __int64)&a2->click_to_close >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->click_to_close, p_prefab_list, &a2->click_to_close);
  click_to_close = a2->click_to_close;
  v5 = *(_BYTE *)(((unsigned __int64)&this->click_to_close >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_prefab_list) = v5 != 0;
    __asan_report_store1(&this->click_to_close, p_prefab_list, &this->click_to_close);
  }
  this->click_to_close = click_to_close;
  v6 = ((_BYTE)a2 + 113) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->need_save >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->need_save >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->need_save, v6, v7);
  need_save = a2->need_save;
  v9 = *(_BYTE *)(((unsigned __int64)&this->need_save >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->need_save, v6, v10);
  this->need_save = need_save;
  v11 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->context_list_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->context_list_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->context_list_type);
  }
  context_list_type = a2->context_list_type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->context_list_type >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->context_list_type, v11);
  }
  this->context_list_type = context_list_type;
  std::string::basic_string(&this->page_show_prefab_and_global_hint, &a2->page_show_prefab_and_global_hint);
};

// Line 2673: range 000000000DF50494-000000000DF50521
void __cdecl data::ConfigGuideUIMaskAction::~ConfigGuideUIMaskAction(data::ConfigGuideUIMaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideUIMaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::~string(&this->page_show_prefab_and_global_hint);
  std::vector<std::string>::~vector(&this->prefab_list);
  std::string::~string(&this->top_info);
  std::vector<data::ConfigGuideWidgetContent>::~vector(&this->widget_list);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2673: range 000000000DF50522-000000000DF5054C
void __cdecl data::ConfigGuideUIMaskAction::~ConfigGuideUIMaskAction(data::ConfigGuideUIMaskAction *const this)
{
  data::ConfigGuideUIMaskAction::~ConfigGuideUIMaskAction(this);
  operator delete(this, 0x98uLL);
};

// Line 2678: range 000000000D77CF46-000000000D77CF56
const char *__cdecl data::ConfigGuideUIMaskAction::getTypeName(const data::ConfigGuideUIMaskAction *const this)
{
  return "ConfigGuideUIMaskAction";
};

// Line 2679: range 000000000D77CF58-000000000D77D0F4
int32_t __cdecl data::ConfigGuideUIMaskAction::getHashNum(const data::ConfigGuideUIMaskAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideUIMaskAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideUIMaskAction",
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

// Line 2695: range 000000000DEF0008-000000000DEF0049
void __cdecl data::ConfigGuideUIMaskActionFactory::ConfigGuideUIMaskActionFactory(
        data::ConfigGuideUIMaskActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideUIMaskActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideUIMaskActionFactory = v2;
};

// Line 2703: range 000000000DEF0352-000000000DEF03EA
void __cdecl data::ConfigGuideShowPage::ConfigGuideShowPage(data::ConfigGuideShowPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->context_name);
  if ( *(char *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable, v1, &this->enable);
  this->enable = 0;
};

// Line 2703: range 000000000DEF0806-000000000DEF0912
void __cdecl data::ConfigGuideShowPage::ConfigGuideShowPage(
        data::ConfigGuideShowPage *const this,
        const data::ConfigGuideShowPage *a2)
{
  int (**v2)(...); // rdx
  std::string *p_context_name; // rsi
  bool enable; // cl
  char v5; // al

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  p_context_name = &a2->context_name;
  std::string::basic_string(&this->context_name, &a2->context_name);
  if ( *(char *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable, p_context_name, &a2->enable);
  enable = a2->enable;
  v5 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_context_name) = v5 != 0;
    __asan_report_store1(&this->enable, p_context_name, &this->enable);
  }
  this->enable = enable;
};

// Line 2711: range 000000000DF5040A-000000000DF50467
void __cdecl data::ConfigGuideShowPage::~ConfigGuideShowPage(data::ConfigGuideShowPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::~string(&this->context_name);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2711: range 000000000DF50468-000000000DF50492
void __cdecl data::ConfigGuideShowPage::~ConfigGuideShowPage(data::ConfigGuideShowPage *const this)
{
  data::ConfigGuideShowPage::~ConfigGuideShowPage(this);
  operator delete(this, 0x48uLL);
};

// Line 2716: range 000000000D77D0F6-000000000D77D106
const char *__cdecl data::ConfigGuideShowPage::getTypeName(const data::ConfigGuideShowPage *const this)
{
  return "ConfigGuideShowPage";
};

// Line 2717: range 000000000D77D108-000000000D77D2A4
int32_t __cdecl data::ConfigGuideShowPage::getHashNum(const data::ConfigGuideShowPage *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideShowPage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideShowPage",
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

// Line 2733: range 000000000DEF0BFC-000000000DEF0C3D
void __cdecl data::ConfigGuideShowPageFactory::ConfigGuideShowPageFactory(data::ConfigGuideShowPageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideShowPageFactory = v2;
};

// Line 2741: range 000000000DEF0F46-000000000DEF0FD3
void __cdecl data::ConfigGuideInfoDialogAction::ConfigGuideInfoDialogAction(
        data::ConfigGuideInfoDialogAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideInfoDialogAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->content);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_okactions);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_cancel_actions);
};

// Line 2741: range 000000000DEF1388-000000000DEF14AE
void __cdecl data::ConfigGuideInfoDialogAction::ConfigGuideInfoDialogAction(
        data::ConfigGuideInfoDialogAction *const this,
        const data::ConfigGuideInfoDialogAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideInfoDialogAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->title, &a2->title);
  std::string::basic_string(&this->content, &a2->content);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_okactions, &a2->on_okactions);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->on_cancel_actions, &a2->on_cancel_actions);
};

// Line 2751: range 000000000DF503DE-000000000DF50408
void __cdecl data::ConfigGuideInfoDialogAction::~ConfigGuideInfoDialogAction(
        data::ConfigGuideInfoDialogAction *const this)
{
  data::ConfigGuideInfoDialogAction::~ConfigGuideInfoDialogAction(this);
  operator delete(this, 0x90uLL);
};

// Line 2751: range 000000000DF50350-000000000DF503DD
void __cdecl data::ConfigGuideInfoDialogAction::~ConfigGuideInfoDialogAction(
        data::ConfigGuideInfoDialogAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideInfoDialogAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->on_cancel_actions);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->on_okactions);
  std::string::~string(&this->content);
  std::string::~string(&this->title);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2756: range 000000000D77D2A6-000000000D77D2B6
const char *__cdecl data::ConfigGuideInfoDialogAction::getTypeName(const data::ConfigGuideInfoDialogAction *const this)
{
  return "ConfigGuideInfoDialogAction";
};

// Line 2757: range 000000000D77D2B8-000000000D77D454
int32_t __cdecl data::ConfigGuideInfoDialogAction::getHashNum(const data::ConfigGuideInfoDialogAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideInfoDialogAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideInfoDialogAction",
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

// Line 2773: range 000000000DEF1798-000000000DEF17D9
void __cdecl data::ConfigGuideInfoDialogActionFactory::ConfigGuideInfoDialogActionFactory(
        data::ConfigGuideInfoDialogActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideInfoDialogActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideInfoDialogActionFactory = v2;
};

// Line 2781: range 000000000DEF1AE2-000000000DEF1BB0
void __cdecl data::ConfigGuideSetOpenStateAction::ConfigGuideSetOpenStateAction(
        data::ConfigGuideSetOpenStateAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSetOpenStateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_state, v3);
  }
  this->open_state = OPEN_STATE_NONE_0;
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value, v3, &this->value);
  this->value = 0;
};

// Line 2781: range 000000000DEF20AE-000000000DEF2201
void __cdecl data::ConfigGuideSetOpenStateAction::ConfigGuideSetOpenStateAction(
        data::ConfigGuideSetOpenStateAction *const this,
        const data::ConfigGuideSetOpenStateAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideOpenStateType open_state; // ecx
  char v5; // dl
  bool value; // cl
  char v7; // al

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSetOpenStateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->open_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->open_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->open_state);
  }
  open_state = a2->open_state;
  v5 = *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->open_state, v3);
  this->open_state = open_state;
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value, v3, &a2->value);
  value = a2->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->value, v3, &this->value);
  }
  this->value = value;
};

// Line 2789: range 000000000DF502D6-000000000DF50323
void __cdecl data::ConfigGuideSetOpenStateAction::~ConfigGuideSetOpenStateAction(
        data::ConfigGuideSetOpenStateAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSetOpenStateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 2789: range 000000000DF50324-000000000DF5034E
void __cdecl data::ConfigGuideSetOpenStateAction::~ConfigGuideSetOpenStateAction(
        data::ConfigGuideSetOpenStateAction *const this)
{
  data::ConfigGuideSetOpenStateAction::~ConfigGuideSetOpenStateAction(this);
  operator delete(this, 0x28uLL);
};

// Line 2794: range 000000000D77D456-000000000D77D466
const char *__cdecl data::ConfigGuideSetOpenStateAction::getTypeName(
        const data::ConfigGuideSetOpenStateAction *const this)
{
  return "ConfigGuideSetOpenStateAction";
};

// Line 2795: range 000000000D77D468-000000000D77D604
int32_t __cdecl data::ConfigGuideSetOpenStateAction::getHashNum(const data::ConfigGuideSetOpenStateAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideSetOpenStateAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideSetOpenStateAction",
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

// Line 2811: range 000000000DEF244A-000000000DEF248B
void __cdecl data::ConfigGuideSetOpenStateActionFactory::ConfigGuideSetOpenStateActionFactory(
        data::ConfigGuideSetOpenStateActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSetOpenStateActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideSetOpenStateActionFactory = v2;
};

// Line 2819: range 000000000DEF2794-000000000DEF27F1
void __cdecl data::ConfigGuideAddTaskAction::ConfigGuideAddTaskAction(data::ConfigGuideAddTaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->task_name);
};

// Line 2819: range 000000000DEF2BF6-000000000DEF2C8C
void __cdecl data::ConfigGuideAddTaskAction::ConfigGuideAddTaskAction(
        data::ConfigGuideAddTaskAction *const this,
        const data::ConfigGuideAddTaskAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->task_name, &a2->task_name);
};

// Line 2826: range 000000000DF502AA-000000000DF502D4
void __cdecl data::ConfigGuideAddTaskAction::~ConfigGuideAddTaskAction(data::ConfigGuideAddTaskAction *const this)
{
  data::ConfigGuideAddTaskAction::~ConfigGuideAddTaskAction(this);
  operator delete(this, 0x40uLL);
};

// Line 2826: range 000000000DF5024C-000000000DF502A9
void __cdecl data::ConfigGuideAddTaskAction::~ConfigGuideAddTaskAction(data::ConfigGuideAddTaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::~string(&this->task_name);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2831: range 000000000D77D606-000000000D77D616
const char *__cdecl data::ConfigGuideAddTaskAction::getTypeName(const data::ConfigGuideAddTaskAction *const this)
{
  return "ConfigGuideAddTaskAction";
};

// Line 2832: range 000000000D77D618-000000000D77D7B4
int32_t __cdecl data::ConfigGuideAddTaskAction::getHashNum(const data::ConfigGuideAddTaskAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAddTaskAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAddTaskAction",
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

// Line 2848: range 000000000DEF2F76-000000000DEF2FB7
void __cdecl data::ConfigGuideAddTaskActionFactory::ConfigGuideAddTaskActionFactory(
        data::ConfigGuideAddTaskActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddTaskActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideAddTaskActionFactory = v2;
};

// Line 2856: range 000000000DEF32C0-000000000DEF331D
void __cdecl data::ConfigGuideEndTaskAction::ConfigGuideEndTaskAction(data::ConfigGuideEndTaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideEndTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->task_name);
};

// Line 2856: range 000000000DEF3722-000000000DEF37B8
void __cdecl data::ConfigGuideEndTaskAction::ConfigGuideEndTaskAction(
        data::ConfigGuideEndTaskAction *const this,
        const data::ConfigGuideEndTaskAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideEndTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::basic_string(&this->task_name, &a2->task_name);
};

// Line 2863: range 000000000DF50220-000000000DF5024A
void __cdecl data::ConfigGuideEndTaskAction::~ConfigGuideEndTaskAction(data::ConfigGuideEndTaskAction *const this)
{
  data::ConfigGuideEndTaskAction::~ConfigGuideEndTaskAction(this);
  operator delete(this, 0x40uLL);
};

// Line 2863: range 000000000DF501C2-000000000DF5021F
void __cdecl data::ConfigGuideEndTaskAction::~ConfigGuideEndTaskAction(data::ConfigGuideEndTaskAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideEndTaskAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::string::~string(&this->task_name);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2868: range 000000000D77D7B6-000000000D77D7C6
const char *__cdecl data::ConfigGuideEndTaskAction::getTypeName(const data::ConfigGuideEndTaskAction *const this)
{
  return "ConfigGuideEndTaskAction";
};

// Line 2869: range 000000000D77D7C8-000000000D77D964
int32_t __cdecl data::ConfigGuideEndTaskAction::getHashNum(const data::ConfigGuideEndTaskAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideEndTaskAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideEndTaskAction",
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

// Line 2885: range 000000000DEF3AA2-000000000DEF3AE3
void __cdecl data::ConfigGuideEndTaskActionFactory::ConfigGuideEndTaskActionFactory(
        data::ConfigGuideEndTaskActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideEndTaskActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideEndTaskActionFactory = v2;
};

// Line 2893: range 000000000DEF3DEC-000000000DEF3E39
void __cdecl data::ConfigGuidePauseAction::ConfigGuidePauseAction(data::ConfigGuidePauseAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePauseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2893: range 000000000DEF424E-000000000DEF42A6
void __cdecl data::ConfigGuidePauseAction::ConfigGuidePauseAction(
        data::ConfigGuidePauseAction *const this,
        const data::ConfigGuidePauseAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePauseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2899: range 000000000DF50196-000000000DF501C0
void __cdecl data::ConfigGuidePauseAction::~ConfigGuidePauseAction(data::ConfigGuidePauseAction *const this)
{
  data::ConfigGuidePauseAction::~ConfigGuidePauseAction(this);
  operator delete(this, 0x20uLL);
};

// Line 2899: range 000000000DF50148-000000000DF50195
void __cdecl data::ConfigGuidePauseAction::~ConfigGuidePauseAction(data::ConfigGuidePauseAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePauseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2904: range 000000000D77D966-000000000D77D976
const char *__cdecl data::ConfigGuidePauseAction::getTypeName(const data::ConfigGuidePauseAction *const this)
{
  return "ConfigGuidePauseAction";
};

// Line 2905: range 000000000D77D978-000000000D77DB14
int32_t __cdecl data::ConfigGuidePauseAction::getHashNum(const data::ConfigGuidePauseAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuidePauseAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuidePauseAction",
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

// Line 2921: range 000000000DEF44F0-000000000DEF4531
void __cdecl data::ConfigGuidePauseActionFactory::ConfigGuidePauseActionFactory(
        data::ConfigGuidePauseActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuidePauseActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuidePauseActionFactory = v2;
};

// Line 2929: range 000000000DEF483A-000000000DEF490F
void __cdecl data::ConfigGuideForceAvatarMoveAction::ConfigGuideForceAvatarMoveAction(
        data::ConfigGuideForceAvatarMoveAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideForceAvatarMoveAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->angle, v3);
  }
  this->angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mold, v3);
  }
  this->mold = 0.0;
};

// Line 2929: range 000000000DEF4E1C-000000000DEF4F74
void __cdecl data::ConfigGuideForceAvatarMoveAction::ConfigGuideForceAvatarMoveAction(
        data::ConfigGuideForceAvatarMoveAction *const this,
        const data::ConfigGuideForceAvatarMoveAction *a2)
{
  int (**v2)(...); // rdx
  float angle; // xmm0_4
  __int64 v4; // rsi
  float mold; // xmm0_4

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideForceAvatarMoveAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->angle);
  }
  angle = a2->angle;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->angle, v4);
  }
  this->angle = angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mold);
  }
  mold = a2->mold;
  if ( *(_BYTE *)(((unsigned __int64)&this->mold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mold, v4);
  }
  this->mold = mold;
};

// Line 2937: range 000000000DF500CE-000000000DF5011B
void __cdecl data::ConfigGuideForceAvatarMoveAction::~ConfigGuideForceAvatarMoveAction(
        data::ConfigGuideForceAvatarMoveAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideForceAvatarMoveAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 2937: range 000000000DF5011C-000000000DF50146
void __cdecl data::ConfigGuideForceAvatarMoveAction::~ConfigGuideForceAvatarMoveAction(
        data::ConfigGuideForceAvatarMoveAction *const this)
{
  data::ConfigGuideForceAvatarMoveAction::~ConfigGuideForceAvatarMoveAction(this);
  operator delete(this, 0x28uLL);
};

// Line 2942: range 000000000D77DB16-000000000D77DB26
const char *__cdecl data::ConfigGuideForceAvatarMoveAction::getTypeName(
        const data::ConfigGuideForceAvatarMoveAction *const this)
{
  return "ConfigGuideForceAvatarMoveAction";
};

// Line 2943: range 000000000D77DB28-000000000D77DCC4
int32_t __cdecl data::ConfigGuideForceAvatarMoveAction::getHashNum(
        const data::ConfigGuideForceAvatarMoveAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideForceAvatarMoveAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideForceAvatarMoveAction",
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

// Line 2959: range 000000000DEF51BE-000000000DEF51FF
void __cdecl data::ConfigGuideForceAvatarMoveActionFactory::ConfigGuideForceAvatarMoveActionFactory(
        data::ConfigGuideForceAvatarMoveActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideForceAvatarMoveActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideForceAvatarMoveActionFactory = v2;
};

// Line 2967: range 000000000DEF5508-000000000DEF5555
void __cdecl data::ConfigGuideCameraControlAction::ConfigGuideCameraControlAction(
        data::ConfigGuideCameraControlAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraControlAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2967: range 000000000DEF596A-000000000DEF59C2
void __cdecl data::ConfigGuideCameraControlAction::ConfigGuideCameraControlAction(
        data::ConfigGuideCameraControlAction *const this,
        const data::ConfigGuideCameraControlAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraControlAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
};

// Line 2973: range 000000000DF500A2-000000000DF500CC
void __cdecl data::ConfigGuideCameraControlAction::~ConfigGuideCameraControlAction(
        data::ConfigGuideCameraControlAction *const this)
{
  data::ConfigGuideCameraControlAction::~ConfigGuideCameraControlAction(this);
  operator delete(this, 0x20uLL);
};

// Line 2973: range 000000000DF50054-000000000DF500A1
void __cdecl data::ConfigGuideCameraControlAction::~ConfigGuideCameraControlAction(
        data::ConfigGuideCameraControlAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraControlAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 2978: range 000000000D77DCC6-000000000D77DCD6
const char *__cdecl data::ConfigGuideCameraControlAction::getTypeName(
        const data::ConfigGuideCameraControlAction *const this)
{
  return "ConfigGuideCameraControlAction";
};

// Line 2979: range 000000000D77DCD8-000000000D77DE74
int32_t __cdecl data::ConfigGuideCameraControlAction::getHashNum(
        const data::ConfigGuideCameraControlAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideCameraControlAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideCameraControlAction",
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

// Line 2995: range 000000000DEF5C0C-000000000DEF5C4D
void __cdecl data::ConfigGuideCameraControlActionFactory::ConfigGuideCameraControlActionFactory(
        data::ConfigGuideCameraControlActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideCameraControlActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideCameraControlActionFactory = v2;
};

// Line 3003: range 000000000DEF5F56-000000000DEF6024
void __cdecl data::ConfigGuideBanUIAction::ConfigGuideBanUIAction(data::ConfigGuideBanUIAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideBanUIAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_ban_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ui_ban_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ui_ban_type, v3);
  }
  this->ui_ban_type = 0;
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value, v3, &this->value);
  this->value = 1;
};

// Line 3003: range 000000000DEF6522-000000000DEF6675
void __cdecl data::ConfigGuideBanUIAction::ConfigGuideBanUIAction(
        data::ConfigGuideBanUIAction *const this,
        const data::ConfigGuideBanUIAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t ui_ban_type; // ecx
  char v5; // dl
  bool value; // cl
  char v7; // al

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideBanUIAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_ban_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ui_ban_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ui_ban_type);
  }
  ui_ban_type = a2->ui_ban_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ui_ban_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->ui_ban_type, v3);
  this->ui_ban_type = ui_ban_type;
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value, v3, &a2->value);
  value = a2->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->value, v3, &this->value);
  }
  this->value = value;
};

// Line 3011: range 000000000DF4FFDA-000000000DF50027
void __cdecl data::ConfigGuideBanUIAction::~ConfigGuideBanUIAction(data::ConfigGuideBanUIAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideBanUIAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3011: range 000000000DF50028-000000000DF50052
void __cdecl data::ConfigGuideBanUIAction::~ConfigGuideBanUIAction(data::ConfigGuideBanUIAction *const this)
{
  data::ConfigGuideBanUIAction::~ConfigGuideBanUIAction(this);
  operator delete(this, 0x28uLL);
};

// Line 3016: range 000000000D77DE76-000000000D77DE86
const char *__cdecl data::ConfigGuideBanUIAction::getTypeName(const data::ConfigGuideBanUIAction *const this)
{
  return "ConfigGuideBanUIAction";
};

// Line 3017: range 000000000D77DE88-000000000D77E024
int32_t __cdecl data::ConfigGuideBanUIAction::getHashNum(const data::ConfigGuideBanUIAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideBanUIAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideBanUIAction",
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

// Line 3033: range 000000000DEF68BE-000000000DEF68FF
void __cdecl data::ConfigGuideBanUIActionFactory::ConfigGuideBanUIActionFactory(
        data::ConfigGuideBanUIActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideBanUIActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideBanUIActionFactory = v2;
};

// Line 3054: range 000000000DEF6D68-000000000DEF6E3B
void __cdecl data::ConfigGuideAddCmd::ConfigGuideAddCmd(data::ConfigGuideAddCmd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cmd_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cmd_type, v3);
  }
  this->cmd_type = BagPageScrollTab;
  if ( *(_BYTE *)(((unsigned __int64)&this->para_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->para_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->para_value, v3);
  }
  this->para_value = 0.0;
};

// Line 3054: range 000000000DEF7344-000000000DEF7499
void __cdecl data::ConfigGuideAddCmd::ConfigGuideAddCmd(
        data::ConfigGuideAddCmd *const this,
        const data::ConfigGuideAddCmd *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GuideCmdType cmd_type; // ecx
  char v5; // dl
  float para_value; // xmm0_4

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cmd_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cmd_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cmd_type);
  }
  cmd_type = a2->cmd_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cmd_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->cmd_type, v3);
  this->cmd_type = cmd_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->para_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->para_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->para_value);
  }
  para_value = a2->para_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->para_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->para_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->para_value, v3);
  }
  this->para_value = para_value;
};

// Line 3062: range 000000000DF4FF60-000000000DF4FFAD
void __cdecl data::ConfigGuideAddCmd::~ConfigGuideAddCmd(data::ConfigGuideAddCmd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3062: range 000000000DF4FFAE-000000000DF4FFD8
void __cdecl data::ConfigGuideAddCmd::~ConfigGuideAddCmd(data::ConfigGuideAddCmd *const this)
{
  data::ConfigGuideAddCmd::~ConfigGuideAddCmd(this);
  operator delete(this, 0x28uLL);
};

// Line 3067: range 000000000D77E026-000000000D77E036
const char *__cdecl data::ConfigGuideAddCmd::getTypeName(const data::ConfigGuideAddCmd *const this)
{
  return "ConfigGuideAddCmd";
};

// Line 3068: range 000000000D77E038-000000000D77E1D4
int32_t __cdecl data::ConfigGuideAddCmd::getHashNum(const data::ConfigGuideAddCmd *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideAddCmd::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideAddCmd",
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

// Line 3084: range 000000000DEF76E2-000000000DEF7723
void __cdecl data::ConfigGuideAddCmdFactory::ConfigGuideAddCmdFactory(data::ConfigGuideAddCmdFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideAddCmdFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideAddCmdFactory = v2;
};

// Line 3092: range 000000000DEF7A2C-000000000DEF7AD1
void __cdecl data::ConfigGuideDelayDoAction::ConfigGuideDelayDoAction(data::ConfigGuideDelayDoAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayDoAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_time, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->delay_time = 0.0;
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->actions);
};

// Line 3092: range 000000000DEF7EC6-000000000DEF7FE4
void __cdecl data::ConfigGuideDelayDoAction::ConfigGuideDelayDoAction(
        data::ConfigGuideDelayDoAction *const this,
        const data::ConfigGuideDelayDoAction *a2)
{
  int (**v2)(...); // rdx
  float delay_time; // xmm0_4

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayDoAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->delay_time);
  }
  delay_time = a2->delay_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_time, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->delay_time = delay_time;
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->actions, &a2->actions);
};

// Line 3100: range 000000000DF4FF34-000000000DF4FF5E
void __cdecl data::ConfigGuideDelayDoAction::~ConfigGuideDelayDoAction(data::ConfigGuideDelayDoAction *const this)
{
  data::ConfigGuideDelayDoAction::~ConfigGuideDelayDoAction(this);
  operator delete(this, 0x38uLL);
};

// Line 3100: range 000000000DF4FED6-000000000DF4FF33
void __cdecl data::ConfigGuideDelayDoAction::~ConfigGuideDelayDoAction(data::ConfigGuideDelayDoAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayDoAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->actions);
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3105: range 000000000D77E1D6-000000000D77E1E6
const char *__cdecl data::ConfigGuideDelayDoAction::getTypeName(const data::ConfigGuideDelayDoAction *const this)
{
  return "ConfigGuideDelayDoAction";
};

// Line 3106: range 000000000D77E1E8-000000000D77E384
int32_t __cdecl data::ConfigGuideDelayDoAction::getHashNum(const data::ConfigGuideDelayDoAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideDelayDoAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideDelayDoAction",
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

// Line 3122: range 000000000DEF82CE-000000000DEF830F
void __cdecl data::ConfigGuideDelayDoActionFactory::ConfigGuideDelayDoActionFactory(
        data::ConfigGuideDelayDoActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDelayDoActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideDelayDoActionFactory = v2;
};

// Line 3130: range 000000000DEF8618-000000000DEF8685
void __cdecl data::ConfigGuideDoActionByPredicate::ConfigGuideDoActionByPredicate(
        data::ConfigGuideDoActionByPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDoActionByPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::vector<std::shared_ptr<data::ConfigGuideCondition>>>::vector(&this->predicates);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->actions);
};

// Line 3130: range 000000000DEF8AAA-000000000DEF8B70
void __cdecl data::ConfigGuideDoActionByPredicate::ConfigGuideDoActionByPredicate(
        data::ConfigGuideDoActionByPredicate *const this,
        const data::ConfigGuideDoActionByPredicate *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDoActionByPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::vector<std::shared_ptr<data::ConfigGuideCondition>>>::vector(&this->predicates, &a2->predicates);
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::vector(&this->actions, &a2->actions);
};

// Line 3138: range 000000000DF4FE3C-000000000DF4FEA9
void __cdecl data::ConfigGuideDoActionByPredicate::~ConfigGuideDoActionByPredicate(
        data::ConfigGuideDoActionByPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDoActionByPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::shared_ptr<data::ConfigGuideAction>>::~vector(&this->actions);
  std::vector<std::vector<std::shared_ptr<data::ConfigGuideCondition>>>::~vector(&this->predicates);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 3138: range 000000000DF4FEAA-000000000DF4FED4
void __cdecl data::ConfigGuideDoActionByPredicate::~ConfigGuideDoActionByPredicate(
        data::ConfigGuideDoActionByPredicate *const this)
{
  data::ConfigGuideDoActionByPredicate::~ConfigGuideDoActionByPredicate(this);
  operator delete(this, 0x50uLL);
};

// Line 3143: range 000000000D77E386-000000000D77E396
const char *__cdecl data::ConfigGuideDoActionByPredicate::getTypeName(
        const data::ConfigGuideDoActionByPredicate *const this)
{
  return "ConfigGuideDoActionByPredicate";
};

// Line 3144: range 000000000D77E398-000000000D77E534
int32_t __cdecl data::ConfigGuideDoActionByPredicate::getHashNum(
        const data::ConfigGuideDoActionByPredicate *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideDoActionByPredicate::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideDoActionByPredicate",
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

// Line 3160: range 000000000DEF8E5A-000000000DEF8E9B
void __cdecl data::ConfigGuideDoActionByPredicateFactory::ConfigGuideDoActionByPredicateFactory(
        data::ConfigGuideDoActionByPredicateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideDoActionByPredicateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideDoActionByPredicateFactory = v2;
};

// Line 3168: range 000000000DEF91A4-000000000DEF9237
void __cdecl data::ConfigGuideShowTutorialAction::ConfigGuideShowTutorialAction(
        data::ConfigGuideShowTutorialAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowTutorialAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tutorial_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->tutorial_id = 0;
};

// Line 3168: range 000000000DEF96CC-000000000DEF97A9
void __cdecl data::ConfigGuideShowTutorialAction::ConfigGuideShowTutorialAction(
        data::ConfigGuideShowTutorialAction *const this,
        const data::ConfigGuideShowTutorialAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t tutorial_id; // ecx
  char v5; // dl

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowTutorialAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tutorial_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->tutorial_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->tutorial_id);
  }
  tutorial_id = a2->tutorial_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->tutorial_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->tutorial_id, v3);
  }
  this->tutorial_id = tutorial_id;
};

// Line 3175: range 000000000DF4FDC2-000000000DF4FE0F
void __cdecl data::ConfigGuideShowTutorialAction::~ConfigGuideShowTutorialAction(
        data::ConfigGuideShowTutorialAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowTutorialAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3175: range 000000000DF4FE10-000000000DF4FE3A
void __cdecl data::ConfigGuideShowTutorialAction::~ConfigGuideShowTutorialAction(
        data::ConfigGuideShowTutorialAction *const this)
{
  data::ConfigGuideShowTutorialAction::~ConfigGuideShowTutorialAction(this);
  operator delete(this, 0x20uLL);
};

// Line 3180: range 000000000D77E536-000000000D77E546
const char *__cdecl data::ConfigGuideShowTutorialAction::getTypeName(
        const data::ConfigGuideShowTutorialAction *const this)
{
  return "ConfigGuideShowTutorialAction";
};

// Line 3181: range 000000000D77E548-000000000D77E6E4
int32_t __cdecl data::ConfigGuideShowTutorialAction::getHashNum(const data::ConfigGuideShowTutorialAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideShowTutorialAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideShowTutorialAction",
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

// Line 3197: range 000000000DEF99F2-000000000DEF9A33
void __cdecl data::ConfigGuideShowTutorialActionFactory::ConfigGuideShowTutorialActionFactory(
        data::ConfigGuideShowTutorialActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowTutorialActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideShowTutorialActionFactory = v2;
};

// Line 3205: range 000000000DEF9D3C-000000000DEF9DC9
void __cdecl data::ConfigGuideShowPanelAction::ConfigGuideShowPanelAction(data::ConfigGuideShowPanelAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPanelAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable, v3, v4);
  this->enable = 0;
};

// Line 3205: range 000000000DEFA252-000000000DEFA32A
void __cdecl data::ConfigGuideShowPanelAction::ConfigGuideShowPanelAction(
        data::ConfigGuideShowPanelAction *const this,
        const data::ConfigGuideShowPanelAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPanelAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable, v3, v4);
  enable = a2->enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable, v3, v7);
  this->enable = enable;
};

// Line 3212: range 000000000DF4FD96-000000000DF4FDC0
void __cdecl data::ConfigGuideShowPanelAction::~ConfigGuideShowPanelAction(
        data::ConfigGuideShowPanelAction *const this)
{
  data::ConfigGuideShowPanelAction::~ConfigGuideShowPanelAction(this);
  operator delete(this, 0x20uLL);
};

// Line 3212: range 000000000DF4FD48-000000000DF4FD95
void __cdecl data::ConfigGuideShowPanelAction::~ConfigGuideShowPanelAction(
        data::ConfigGuideShowPanelAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPanelAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3217: range 000000000D77E6E6-000000000D77E6F6
const char *__cdecl data::ConfigGuideShowPanelAction::getTypeName(const data::ConfigGuideShowPanelAction *const this)
{
  return "ConfigGuideShowPanelAction";
};

// Line 3218: range 000000000D77E6F8-000000000D77E894
int32_t __cdecl data::ConfigGuideShowPanelAction::getHashNum(const data::ConfigGuideShowPanelAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideShowPanelAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideShowPanelAction",
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

// Line 3234: range 000000000DEFA574-000000000DEFA5B5
void __cdecl data::ConfigGuideShowPanelActionFactory::ConfigGuideShowPanelActionFactory(
        data::ConfigGuideShowPanelActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideShowPanelActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideShowPanelActionFactory = v2;
};

// Line 3242: range 000000000DEFA8BE-000000000DEFA93B
void __cdecl data::ConfigGuideSwitchInputContextAction::ConfigGuideSwitchInputContextAction(
        data::ConfigGuideSwitchInputContextAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSwitchInputContextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::string>::vector(&this->input_event_list);
  std::vector<std::string>::vector(&this->context_event_list);
  std::vector<int>::vector(&this->input_priority_list);
};

// Line 3242: range 000000000DEFACF0-000000000DEFADE6
void __cdecl data::ConfigGuideSwitchInputContextAction::ConfigGuideSwitchInputContextAction(
        data::ConfigGuideSwitchInputContextAction *const this,
        const data::ConfigGuideSwitchInputContextAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSwitchInputContextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<std::string>::vector(&this->input_event_list, &a2->input_event_list);
  std::vector<std::string>::vector(&this->context_event_list, &a2->context_event_list);
  std::vector<int>::vector(&this->input_priority_list, &a2->input_priority_list);
};

// Line 3251: range 000000000DF4FD1C-000000000DF4FD46
void __cdecl data::ConfigGuideSwitchInputContextAction::~ConfigGuideSwitchInputContextAction(
        data::ConfigGuideSwitchInputContextAction *const this)
{
  data::ConfigGuideSwitchInputContextAction::~ConfigGuideSwitchInputContextAction(this);
  operator delete(this, 0x68uLL);
};

// Line 3251: range 000000000DF4FC9E-000000000DF4FD1B
void __cdecl data::ConfigGuideSwitchInputContextAction::~ConfigGuideSwitchInputContextAction(
        data::ConfigGuideSwitchInputContextAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSwitchInputContextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  std::vector<int>::~vector(&this->input_priority_list);
  std::vector<std::string>::~vector(&this->context_event_list);
  std::vector<std::string>::~vector(&this->input_event_list);
  data::ConfigGuideAction::~ConfigGuideAction(this);
};

// Line 3256: range 000000000D77E896-000000000D77E8A6
const char *__cdecl data::ConfigGuideSwitchInputContextAction::getTypeName(
        const data::ConfigGuideSwitchInputContextAction *const this)
{
  return "ConfigGuideSwitchInputContextAction";
};

// Line 3257: range 000000000D77E8A8-000000000D77EA44
int32_t __cdecl data::ConfigGuideSwitchInputContextAction::getHashNum(
        const data::ConfigGuideSwitchInputContextAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideSwitchInputContextAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideSwitchInputContextAction",
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

// Line 3273: range 000000000DEFB0D0-000000000DEFB111
void __cdecl data::ConfigGuideSwitchInputContextActionFactory::ConfigGuideSwitchInputContextActionFactory(
        data::ConfigGuideSwitchInputContextActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideSwitchInputContextActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideSwitchInputContextActionFactory = v2;
};

// Line 3281: range 000000000DEFB41A-000000000DEFB4AD
void __cdecl data::ConfigGuideFinishQuestAction::ConfigGuideFinishQuestAction(
        data::ConfigGuideFinishQuestAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFinishQuestAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->quest_id = 0;
};

// Line 3281: range 000000000DEFB942-000000000DEFBA1F
void __cdecl data::ConfigGuideFinishQuestAction::ConfigGuideFinishQuestAction(
        data::ConfigGuideFinishQuestAction *const this,
        const data::ConfigGuideFinishQuestAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t quest_id; // ecx
  char v5; // dl

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFinishQuestAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->quest_id);
  }
  quest_id = a2->quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = quest_id;
};

// Line 3288: range 000000000DF4FC72-000000000DF4FC9C
void __cdecl data::ConfigGuideFinishQuestAction::~ConfigGuideFinishQuestAction(
        data::ConfigGuideFinishQuestAction *const this)
{
  data::ConfigGuideFinishQuestAction::~ConfigGuideFinishQuestAction(this);
  operator delete(this, 0x20uLL);
};

// Line 3288: range 000000000DF4FC24-000000000DF4FC71
void __cdecl data::ConfigGuideFinishQuestAction::~ConfigGuideFinishQuestAction(
        data::ConfigGuideFinishQuestAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFinishQuestAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3293: range 000000000D77EA46-000000000D77EA56
const char *__cdecl data::ConfigGuideFinishQuestAction::getTypeName(
        const data::ConfigGuideFinishQuestAction *const this)
{
  return "ConfigGuideFinishQuestAction";
};

// Line 3294: range 000000000D77EA58-000000000D77EBF4
int32_t __cdecl data::ConfigGuideFinishQuestAction::getHashNum(const data::ConfigGuideFinishQuestAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideFinishQuestAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideFinishQuestAction",
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

// Line 3310: range 000000000DEFBC68-000000000DEFBCA9
void __cdecl data::ConfigGuideFinishQuestActionFactory::ConfigGuideFinishQuestActionFactory(
        data::ConfigGuideFinishQuestActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideFinishQuestActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideFinishQuestActionFactory = v2;
};

// Line 3318: range 000000000DEFBFB2-000000000DEFC083
void __cdecl data::ConfigGuideProjectionGameFinishAction::ConfigGuideProjectionGameFinishAction(
        data::ConfigGuideProjectionGameFinishAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_type, v3);
  }
  this->guide_type = Input;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->input_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->input_mode, v3);
  }
  this->input_mode = Touch;
};

// Line 3318: range 000000000DEFC588-000000000DEFC6DA
void __cdecl data::ConfigGuideProjectionGameFinishAction::ConfigGuideProjectionGameFinishAction(
        data::ConfigGuideProjectionGameFinishAction *const this,
        const data::ConfigGuideProjectionGameFinishAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ProjectionGameGuideType guide_type; // ecx
  char v5; // dl
  data::ProjectionGameGuideInputMode input_mode; // ecx
  char v7; // al

  data::ConfigGuideAction::ConfigGuideAction((data::ConfigGuideAction *const)this, (const data::ConfigGuideAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guide_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guide_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->guide_type);
  }
  guide_type = a2->guide_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->guide_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->guide_type, v3);
  }
  this->guide_type = guide_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->input_mode);
  }
  input_mode = a2->input_mode;
  v7 = *(_BYTE *)(((unsigned __int64)&this->input_mode >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->input_mode, v3);
  }
  this->input_mode = input_mode;
};

// Line 3326: range 000000000DF4FBAA-000000000DF4FBF7
void __cdecl data::ConfigGuideProjectionGameFinishAction::~ConfigGuideProjectionGameFinishAction(
        data::ConfigGuideProjectionGameFinishAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideAction::~ConfigGuideAction((data::ConfigGuideAction *const)this);
};

// Line 3326: range 000000000DF4FBF8-000000000DF4FC22
void __cdecl data::ConfigGuideProjectionGameFinishAction::~ConfigGuideProjectionGameFinishAction(
        data::ConfigGuideProjectionGameFinishAction *const this)
{
  data::ConfigGuideProjectionGameFinishAction::~ConfigGuideProjectionGameFinishAction(this);
  operator delete(this, 0x28uLL);
};

// Line 3331: range 000000000D77EBF6-000000000D77EC06
const char *__cdecl data::ConfigGuideProjectionGameFinishAction::getTypeName(
        const data::ConfigGuideProjectionGameFinishAction *const this)
{
  return "ConfigGuideProjectionGameFinishAction";
};

// Line 3332: range 000000000D77EC08-000000000D77EDA4
int32_t __cdecl data::ConfigGuideProjectionGameFinishAction::getHashNum(
        const data::ConfigGuideProjectionGameFinishAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideProjectionGameFinishAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideProjectionGameFinishAction",
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

// Line 3348: range 000000000DEFC924-000000000DEFC965
void __cdecl data::ConfigGuideProjectionGameFinishActionFactory::ConfigGuideProjectionGameFinishActionFactory(
        data::ConfigGuideProjectionGameFinishActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideProjectionGameFinishActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideProjectionGameFinishActionFactory = v2;
};

// Line 3356: range 000000000DEFCC6E-000000000DEFCD3F
void __cdecl data::ConfigGuideActivityGachaCondition::ConfigGuideActivityGachaCondition(
        data::ConfigGuideActivityGachaCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGuideCondition::ConfigGuideCondition((data::ConfigGuideCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideActivityGachaCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->percent, v3);
  }
  this->percent = 100;
  if ( *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->opt, v3);
  }
  this->opt = Equal_0;
};

// Line 3356: range 000000000DEFD11A-000000000DEFD26C
void __cdecl data::ConfigGuideActivityGachaCondition::ConfigGuideActivityGachaCondition(
        data::ConfigGuideActivityGachaCondition *const this,
        const data::ConfigGuideActivityGachaCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t percent; // ecx
  char v5; // dl
  data::GuideOperator opt; // ecx
  char v7; // al

  data::ConfigGuideCondition::ConfigGuideCondition(
    (data::ConfigGuideCondition *const)this,
    (const data::ConfigGuideCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideActivityGachaCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGuide = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->percent);
  }
  percent = a2->percent;
  v5 = *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->percent, v3);
  }
  this->percent = percent;
  if ( *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->opt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->opt);
  }
  opt = a2->opt;
  v7 = *(_BYTE *)(((unsigned __int64)&this->opt >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->opt, v3);
  }
  this->opt = opt;
};

// Line 3364: range 000000000DF4FB7E-000000000DF4FBA8
void __cdecl data::ConfigGuideActivityGachaCondition::~ConfigGuideActivityGachaCondition(
        data::ConfigGuideActivityGachaCondition *const this)
{
  data::ConfigGuideActivityGachaCondition::~ConfigGuideActivityGachaCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 3364: range 000000000DF4FB30-000000000DF4FB7D
void __cdecl data::ConfigGuideActivityGachaCondition::~ConfigGuideActivityGachaCondition(
        data::ConfigGuideActivityGachaCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideActivityGachaCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGuide = v2;
  data::ConfigGuideCondition::~ConfigGuideCondition((data::ConfigGuideCondition *const)this);
};

// Line 3369: range 000000000D77EDA6-000000000D77EDB6
const char *__cdecl data::ConfigGuideActivityGachaCondition::getTypeName(
        const data::ConfigGuideActivityGachaCondition *const this)
{
  return "ConfigGuideActivityGachaCondition";
};

// Line 3370: range 000000000D77EDB8-000000000D77EF54
int32_t __cdecl data::ConfigGuideActivityGachaCondition::getHashNum(
        const data::ConfigGuideActivityGachaCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGuideActivityGachaCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGuideActivityGachaCondition",
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

// Line 3386: range 000000000DEFD4B6-000000000DEFD4F7
void __cdecl data::ConfigGuideActivityGachaConditionFactory::ConfigGuideActivityGachaConditionFactory(
        data::ConfigGuideActivityGachaConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGuideActivityGachaConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGuideActivityGachaConditionFactory = v2;
};
