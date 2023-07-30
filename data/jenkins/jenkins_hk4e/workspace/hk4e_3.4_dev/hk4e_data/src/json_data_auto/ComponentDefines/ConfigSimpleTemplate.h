// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigSimpleTemplate.h

// Line 20: range 00000000126E52A8-00000000126E5344
void __cdecl data::TemplateParam::TemplateParam(data::TemplateParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::TemplateParam>::enable_shared_from_this(&this->std::enable_shared_from_this<data::TemplateParam>);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  std::string::basic_string(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 00000000126F6C0E-00000000126F6D26
void __cdecl data::TemplateParam::TemplateParam(data::TemplateParam *const this, const data::TemplateParam *a2)
{
  std::enable_shared_from_this<data::TemplateParam> *v2; // rsi
  int (**v3)(...); // rdx
  std::string *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::TemplateParam>;
  std::enable_shared_from_this<data::TemplateParam>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::TemplateParam>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::TemplateParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_TemplateParam = v3;
  p_param = &a2->param;
  std::string::basic_string(&this->param, &a2->param);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_param, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 28: range 00000000126E53A8-00000000126E53D2
void __cdecl data::TemplateParam::~TemplateParam(data::TemplateParam *const this)
{
  data::TemplateParam::~TemplateParam(this);
  operator delete(this, 0x40uLL);
};

// Line 28: range 00000000126E5346-00000000126E53A7
void __cdecl data::TemplateParam::~TemplateParam(data::TemplateParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  std::string::~string(&this->param);
  std::enable_shared_from_this<data::TemplateParam>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::TemplateParam>);
};

// Line 33: range 0000000012144952-0000000012144962
const char *__cdecl data::TemplateParam::getTypeName(const data::TemplateParam *const this)
{
  return "TemplateParam";
};

// Line 34: range 0000000012144964-0000000012144B00
int32_t __cdecl data::TemplateParam::getHashNum(const data::TemplateParam *const this)
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
  *(_QWORD *)(v1 + 16) = data::TemplateParam::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "TemplateParam",
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

// Line 60: range 00000000126E57E6-00000000126E587B
void __cdecl data::TemplateParamFloat::TemplateParamFloat(data::TemplateParamFloat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::TemplateParam::TemplateParam((data::TemplateParam *const)this);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParamFloat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->origin_value, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->origin_value = 0.0;
};

// Line 60: range 00000000126F7058-00000000126F7138
void __cdecl data::TemplateParamFloat::TemplateParamFloat(
        data::TemplateParamFloat *const this,
        const data::TemplateParamFloat *a2)
{
  int (**v2)(...); // rdx
  float origin_value; // xmm0_4

  data::TemplateParam::TemplateParam((data::TemplateParam *const)this, (const data::TemplateParam *)a2);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParamFloat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TemplateParam = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->origin_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->origin_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->origin_value);
  }
  origin_value = a2->origin_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->origin_value, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->origin_value = origin_value;
};

// Line 67: range 000000001274DC1C-000000001274DC69
void __cdecl data::TemplateParamFloat::~TemplateParamFloat(data::TemplateParamFloat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParamFloat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  data::TemplateParam::~TemplateParam((data::TemplateParam *const)this);
};

// Line 67: range 000000001274DC6A-000000001274DC94
void __cdecl data::TemplateParamFloat::~TemplateParamFloat(data::TemplateParamFloat *const this)
{
  data::TemplateParamFloat::~TemplateParamFloat(this);
  operator delete(this, 0x40uLL);
};

// Line 72: range 0000000012144B02-0000000012144B12
const char *__cdecl data::TemplateParamFloat::getTypeName(const data::TemplateParamFloat *const this)
{
  return "TemplateParamFloat";
};

// Line 73: range 0000000012144B14-0000000012144CB0
int32_t __cdecl data::TemplateParamFloat::getHashNum(const data::TemplateParamFloat *const this)
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
  *(_QWORD *)(v1 + 16) = data::TemplateParamFloat::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "TemplateParamFloat",
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

// Line 89: range 00000000126F7422-00000000126F7463
void __cdecl data::TemplateParamFloatFactory::TemplateParamFloatFactory(data::TemplateParamFloatFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParamFloatFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParamFloatFactory = v2;
};

// Line 97: range 00000000126F776C-00000000126F77FF
void __cdecl data::TemplateParamInt32::TemplateParamInt32(data::TemplateParamInt32 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::TemplateParam::TemplateParam((data::TemplateParam *const)this);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParamInt32 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->origin_value, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->origin_value = 0;
};

// Line 97: range 00000000126F7C04-00000000126F7CE1
void __cdecl data::TemplateParamInt32::TemplateParamInt32(
        data::TemplateParamInt32 *const this,
        const data::TemplateParamInt32 *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t origin_value; // ecx
  char v5; // dl

  data::TemplateParam::TemplateParam((data::TemplateParam *const)this, (const data::TemplateParam *)a2);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParamInt32 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TemplateParam = v2;
  v3 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->origin_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->origin_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->origin_value);
  }
  origin_value = a2->origin_value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->origin_value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->origin_value, v3);
  }
  this->origin_value = origin_value;
};

// Line 104: range 000000001274DBF0-000000001274DC1A
void __cdecl data::TemplateParamInt32::~TemplateParamInt32(data::TemplateParamInt32 *const this)
{
  data::TemplateParamInt32::~TemplateParamInt32(this);
  operator delete(this, 0x40uLL);
};

// Line 104: range 000000001274DBA2-000000001274DBEF
void __cdecl data::TemplateParamInt32::~TemplateParamInt32(data::TemplateParamInt32 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParamInt32 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  data::TemplateParam::~TemplateParam((data::TemplateParam *const)this);
};

// Line 109: range 0000000012144CB2-0000000012144CC2
const char *__cdecl data::TemplateParamInt32::getTypeName(const data::TemplateParamInt32 *const this)
{
  return "TemplateParamInt32";
};

// Line 110: range 0000000012144CC4-0000000012144E60
int32_t __cdecl data::TemplateParamInt32::getHashNum(const data::TemplateParamInt32 *const this)
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
  *(_QWORD *)(v1 + 16) = data::TemplateParamInt32::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "TemplateParamInt32",
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

// Line 126: range 00000000126F7FCA-00000000126F800B
void __cdecl data::TemplateParamInt32Factory::TemplateParamInt32Factory(data::TemplateParamInt32Factory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParamInt32Factory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParamInt32Factory = v2;
};

// Line 134: range 00000000126E53D4-00000000126E5431
void __cdecl data::TemplateParamString::TemplateParamString(data::TemplateParamString *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::TemplateParam::TemplateParam(this);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParamString + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  std::string::basic_string(&this->origin_value);
};

// Line 134: range 00000000126F8314-00000000126F83AA
void __cdecl data::TemplateParamString::TemplateParamString(
        data::TemplateParamString *const this,
        const data::TemplateParamString *a2)
{
  int (**v2)(...); // rdx

  data::TemplateParam::TemplateParam(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::TemplateParamString + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TemplateParam = v2;
  std::string::basic_string(&this->origin_value, &a2->origin_value);
};

// Line 141: range 000000001274DB18-000000001274DB75
void __cdecl data::TemplateParamString::~TemplateParamString(data::TemplateParamString *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParamString + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParam = v2;
  std::string::~string(&this->origin_value);
  data::TemplateParam::~TemplateParam(this);
};

// Line 141: range 000000001274DB76-000000001274DBA0
void __cdecl data::TemplateParamString::~TemplateParamString(data::TemplateParamString *const this)
{
  data::TemplateParamString::~TemplateParamString(this);
  operator delete(this, 0x60uLL);
};

// Line 146: range 0000000012144E62-0000000012144E72
const char *__cdecl data::TemplateParamString::getTypeName(const data::TemplateParamString *const this)
{
  return "TemplateParamString";
};

// Line 147: range 0000000012144E74-0000000012145010
int32_t __cdecl data::TemplateParamString::getHashNum(const data::TemplateParamString *const this)
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
  *(_QWORD *)(v1 + 16) = data::TemplateParamString::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "TemplateParamString",
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

// Line 163: range 00000000126F8694-00000000126F86D5
void __cdecl data::TemplateParamStringFactory::TemplateParamStringFactory(data::TemplateParamStringFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TemplateParamStringFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TemplateParamStringFactory = v2;
};

// Line 171: range 000000000ED8E1AA-000000000ED8E20F
void __cdecl data::ConfigTemplateData::ConfigTemplateData(data::ConfigTemplateData *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::unordered_map<std::string,std::string>::unordered_map(&this->param_datas);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 171: range 000000000E81EF4A-000000000E81F023
void __cdecl data::ConfigTemplateData::ConfigTemplateData(
        data::ConfigTemplateData *const this,
        const data::ConfigTemplateData *a2)
{
  data::StringMap *p_param_datas; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_param_datas = &a2->param_datas;
  std::unordered_map<std::string,std::string>::unordered_map(&this->param_datas, p_param_datas);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_param_datas, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_param_datas) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param_datas, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 171: range 000000001231A47E-000000001231A534
void __cdecl data::ConfigTemplateData::ConfigTemplateData(
        data::ConfigTemplateData *const this,
        data::ConfigTemplateData *a2)
{
  std::unordered_map<std::string,std::string> *p_param_datas; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_param_datas = &a2->param_datas;
  std::unordered_map<std::string,std::string>::unordered_map(&this->param_datas, p_param_datas);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_param_datas, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_param_datas) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param_datas, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 171: range 000000000E81F024-000000000E81F04E
void __cdecl data::ConfigTemplateData::~ConfigTemplateData(data::ConfigTemplateData *const this)
{
  std::unordered_map<std::string,std::string>::~unordered_map(&this->param_datas);
  std::string::~string(this);
};
