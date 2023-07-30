// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigShape.h

// Line 46: range 000000000ED5F1CA-000000000ED5F31C
void __cdecl data::ConfigBaseShape::ConfigBaseShape(data::ConfigBaseShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::enable_shared_from_this<data::ConfigBaseShape>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseShape>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(char *)(((unsigned __int64)&this->use_height >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_height, v1, &this->use_height);
  this->use_height = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v3);
  }
  this->height = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height_type, v3);
  }
  this->height_type = Center_1;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 46: range 0000000012722B00-0000000012722D53
void __cdecl data::ConfigBaseShape::ConfigBaseShape(data::ConfigBaseShape *const this, const data::ConfigBaseShape *a2)
{
  std::enable_shared_from_this<data::ConfigBaseShape> *v2; // rsi
  int (**v3)(...); // rdx
  bool use_height; // cl
  char v5; // al
  float height; // xmm0_4
  __int64 v7; // rsi
  data::HeightPosType height_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseShape>;
  std::enable_shared_from_this<data::ConfigBaseShape>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseShape>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseShape = v3;
  if ( *(char *)(((unsigned __int64)&a2->use_height >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_height, v2, &a2->use_height);
  use_height = a2->use_height;
  v5 = *(_BYTE *)(((unsigned __int64)&this->use_height >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->use_height, v2, &this->use_height);
  }
  this->use_height = use_height;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height);
  }
  height = a2->height;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v7);
  }
  this->height = height;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->height_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->height_type);
  }
  height_type = a2->height_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->height_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->height_type, v7);
  }
  this->height_type = height_type;
  v10 = ((_BYTE)a2 + 36) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 56: range 0000000012722FEE-0000000012723018
void __cdecl data::ConfigBaseShape::~ConfigBaseShape(data::ConfigBaseShape *const this)
{
  data::ConfigBaseShape::~ConfigBaseShape(this);
  operator delete(this, 0x28uLL);
};

// Line 56: range 0000000012722F9C-0000000012722FED
void __cdecl data::ConfigBaseShape::~ConfigBaseShape(data::ConfigBaseShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  std::enable_shared_from_this<data::ConfigBaseShape>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseShape>);
};

// Line 61: range 0000000012145012-0000000012145022
const char *__cdecl data::ConfigBaseShape::getTypeName(const data::ConfigBaseShape *const this)
{
  return "ConfigBaseShape";
};

// Line 62: range 0000000012145024-00000000121451C0
int32_t __cdecl data::ConfigBaseShape::getHashNum(const data::ConfigBaseShape *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseShape::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseShape",
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

// Line 81: range 000000001272301A-00000000127230A7
void __cdecl data::ConfigShapeCircle::ConfigShapeCircle(data::ConfigShapeCircle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCircle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v1);
  }
  this->radius = 0.0;
};

// Line 81: range 0000000012723482-0000000012723552
void __cdecl data::ConfigShapeCircle::ConfigShapeCircle(
        data::ConfigShapeCircle *const this,
        const data::ConfigShapeCircle *a2)
{
  int (**v2)(...); // rdx
  float radius; // xmm0_4

  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCircle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, a2);
  }
  this->radius = radius;
};

// Line 88: range 000000001274C8C2-000000001274C90F
void __cdecl data::ConfigShapeCircle::~ConfigShapeCircle(data::ConfigShapeCircle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCircle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 88: range 000000001274C910-000000001274C93A
void __cdecl data::ConfigShapeCircle::~ConfigShapeCircle(data::ConfigShapeCircle *const this)
{
  data::ConfigShapeCircle::~ConfigShapeCircle(this);
  operator delete(this, 0x30uLL);
};

// Line 93: range 00000000121451C2-00000000121451D2
const char *__cdecl data::ConfigShapeCircle::getTypeName(const data::ConfigShapeCircle *const this)
{
  return "ConfigShapeCircle";
};

// Line 94: range 00000000121451D4-0000000012145370
int32_t __cdecl data::ConfigShapeCircle::getHashNum(const data::ConfigShapeCircle *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeCircle::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapeCircle",
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

// Line 110: range 000000001272379C-00000000127237DD
void __cdecl data::ConfigShapeCircleFactory::ConfigShapeCircleFactory(data::ConfigShapeCircleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCircleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapeCircleFactory = v2;
};

// Line 118: range 0000000012723AE6-0000000012723BF9
void __cdecl data::ConfigShapeRect::ConfigShapeRect(data::ConfigShapeRect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeRect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_type, v1);
  }
  this->center_type = BottomCenter;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->width, v3);
  }
  this->width = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length, v3);
  }
  this->length = 0.0;
};

// Line 118: range 0000000012723FEE-00000000127241BB
void __cdecl data::ConfigShapeRect::ConfigShapeRect(data::ConfigShapeRect *const this, const data::ConfigShapeRect *a2)
{
  int (**v2)(...); // rdx
  data::CenterPosType center_type; // ecx
  char v4; // al
  float width; // xmm0_4
  __int64 v6; // rsi
  float length; // xmm0_4
  const data::ConfigShapeRect *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeRect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_type);
  }
  center_type = a2->center_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->center_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->center_type, a2);
  }
  this->center_type = center_type;
  if ( *(_BYTE *)(((unsigned __int64)&v8->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->width);
  }
  width = v8->width;
  v6 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->width, v6);
  }
  this->width = width;
  if ( *(_BYTE *)(((unsigned __int64)&v8->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->length);
  }
  length = v8->length;
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length, v6);
  }
  this->length = length;
};

// Line 127: range 000000001274C896-000000001274C8C0
void __cdecl data::ConfigShapeRect::~ConfigShapeRect(data::ConfigShapeRect *const this)
{
  data::ConfigShapeRect::~ConfigShapeRect(this);
  operator delete(this, 0x38uLL);
};

// Line 127: range 000000001274C848-000000001274C895
void __cdecl data::ConfigShapeRect::~ConfigShapeRect(data::ConfigShapeRect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeRect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 132: range 0000000012145372-0000000012145382
const char *__cdecl data::ConfigShapeRect::getTypeName(const data::ConfigShapeRect *const this)
{
  return "ConfigShapeRect";
};

// Line 133: range 0000000012145384-0000000012145520
int32_t __cdecl data::ConfigShapeRect::getHashNum(const data::ConfigShapeRect *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeRect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapeRect",
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

// Line 149: range 0000000012724404-0000000012724445
void __cdecl data::ConfigShapeRectFactory::ConfigShapeRectFactory(data::ConfigShapeRectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeRectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapeRectFactory = v2;
};

// Line 157: range 000000001272474E-0000000012724823
void __cdecl data::ConfigShapeSector::ConfigShapeSector(data::ConfigShapeSector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v1);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->full_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->full_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->full_degree, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->full_degree = 0.0;
};

// Line 157: range 0000000012724BFE-0000000012724D56
void __cdecl data::ConfigShapeSector::ConfigShapeSector(
        data::ConfigShapeSector *const this,
        const data::ConfigShapeSector *a2)
{
  int (**v2)(...); // rdx
  float radius; // xmm0_4
  float full_degree; // xmm0_4

  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, a2);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->full_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->full_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->full_degree);
  }
  full_degree = a2->full_degree;
  if ( *(_BYTE *)(((unsigned __int64)&this->full_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->full_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->full_degree, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->full_degree = full_degree;
};

// Line 165: range 000000001274C81C-000000001274C846
void __cdecl data::ConfigShapeSector::~ConfigShapeSector(data::ConfigShapeSector *const this)
{
  data::ConfigShapeSector::~ConfigShapeSector(this);
  operator delete(this, 0x30uLL);
};

// Line 165: range 000000001274C7CE-000000001274C81B
void __cdecl data::ConfigShapeSector::~ConfigShapeSector(data::ConfigShapeSector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 170: range 0000000012145522-0000000012145532
const char *__cdecl data::ConfigShapeSector::getTypeName(const data::ConfigShapeSector *const this)
{
  return "ConfigShapeSector";
};

// Line 171: range 0000000012145534-00000000121456D0
int32_t __cdecl data::ConfigShapeSector::getHashNum(const data::ConfigShapeSector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeSector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapeSector",
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

// Line 187: range 0000000012724FA0-0000000012724FE1
void __cdecl data::ConfigShapeSectorFactory::ConfigShapeSectorFactory(data::ConfigShapeSectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapeSectorFactory = v2;
};

// Line 195: range 00000000127252EA-0000000012725347
void __cdecl data::ConfigShapePolygon::ConfigShapePolygon(data::ConfigShapePolygon *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapePolygon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  std::string::basic_string(&this->polygon_config_path);
};

// Line 195: range 0000000012725762-00000000127257F8
void __cdecl data::ConfigShapePolygon::ConfigShapePolygon(
        data::ConfigShapePolygon *const this,
        const data::ConfigShapePolygon *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapePolygon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  std::string::basic_string(&this->polygon_config_path, &a2->polygon_config_path);
};

// Line 202: range 000000001274C744-000000001274C7A1
void __cdecl data::ConfigShapePolygon::~ConfigShapePolygon(data::ConfigShapePolygon *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapePolygon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  std::string::~string(&this->polygon_config_path);
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 202: range 000000001274C7A2-000000001274C7CC
void __cdecl data::ConfigShapePolygon::~ConfigShapePolygon(data::ConfigShapePolygon *const this)
{
  data::ConfigShapePolygon::~ConfigShapePolygon(this);
  operator delete(this, 0x48uLL);
};

// Line 207: range 00000000121456D2-00000000121456E2
const char *__cdecl data::ConfigShapePolygon::getTypeName(const data::ConfigShapePolygon *const this)
{
  return "ConfigShapePolygon";
};

// Line 208: range 00000000121456E4-0000000012145880
int32_t __cdecl data::ConfigShapePolygon::getHashNum(const data::ConfigShapePolygon *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapePolygon::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapePolygon",
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

// Line 224: range 0000000012725AE2-0000000012725B23
void __cdecl data::ConfigShapePolygonFactory::ConfigShapePolygonFactory(data::ConfigShapePolygonFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapePolygonFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapePolygonFactory = v2;
};

// Line 232: range 0000000012725E2C-0000000012725EB9
void __cdecl data::ConfigShapeSphere::ConfigShapeSphere(data::ConfigShapeSphere *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v1);
  }
  this->radius = 0.0;
};

// Line 232: range 0000000012726294-0000000012726364
void __cdecl data::ConfigShapeSphere::ConfigShapeSphere(
        data::ConfigShapeSphere *const this,
        const data::ConfigShapeSphere *a2)
{
  int (**v2)(...); // rdx
  float radius; // xmm0_4

  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, a2);
  }
  this->radius = radius;
};

// Line 239: range 000000001274C6CA-000000001274C717
void __cdecl data::ConfigShapeSphere::~ConfigShapeSphere(data::ConfigShapeSphere *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 239: range 000000001274C718-000000001274C742
void __cdecl data::ConfigShapeSphere::~ConfigShapeSphere(data::ConfigShapeSphere *const this)
{
  data::ConfigShapeSphere::~ConfigShapeSphere(this);
  operator delete(this, 0x30uLL);
};

// Line 244: range 0000000012145882-0000000012145892
const char *__cdecl data::ConfigShapeSphere::getTypeName(const data::ConfigShapeSphere *const this)
{
  return "ConfigShapeSphere";
};

// Line 245: range 0000000012145894-0000000012145A30
int32_t __cdecl data::ConfigShapeSphere::getHashNum(const data::ConfigShapeSphere *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeSphere::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapeSphere",
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

// Line 261: range 00000000127265AE-00000000127265EF
void __cdecl data::ConfigShapeSphereFactory::ConfigShapeSphereFactory(data::ConfigShapeSphereFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeSphereFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapeSphereFactory = v2;
};

// Line 269: range 00000000127268F8-00000000127269CD
void __cdecl data::ConfigShapeCube::ConfigShapeCube(data::ConfigShapeCube *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCube + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->width, v1);
  }
  this->width = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->length, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->length = 0.0;
};

// Line 269: range 0000000012726DA8-0000000012726F00
void __cdecl data::ConfigShapeCube::ConfigShapeCube(data::ConfigShapeCube *const this, const data::ConfigShapeCube *a2)
{
  int (**v2)(...); // rdx
  float width; // xmm0_4
  float length; // xmm0_4

  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCube + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->width >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->width >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->width);
  }
  width = a2->width;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->width, a2);
  }
  this->width = width;
  if ( *(_BYTE *)(((unsigned __int64)&a2->length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->length);
  }
  length = a2->length;
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->length, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->length = length;
};

// Line 277: range 000000001274C650-000000001274C69D
void __cdecl data::ConfigShapeCube::~ConfigShapeCube(data::ConfigShapeCube *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCube + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 277: range 000000001274C69E-000000001274C6C8
void __cdecl data::ConfigShapeCube::~ConfigShapeCube(data::ConfigShapeCube *const this)
{
  data::ConfigShapeCube::~ConfigShapeCube(this);
  operator delete(this, 0x30uLL);
};

// Line 282: range 0000000012145A32-0000000012145A42
const char *__cdecl data::ConfigShapeCube::getTypeName(const data::ConfigShapeCube *const this)
{
  return "ConfigShapeCube";
};

// Line 283: range 0000000012145A44-0000000012145BE0
int32_t __cdecl data::ConfigShapeCube::getHashNum(const data::ConfigShapeCube *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeCube::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapeCube",
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

// Line 299: range 000000001272714A-000000001272718B
void __cdecl data::ConfigShapeCubeFactory::ConfigShapeCubeFactory(data::ConfigShapeCubeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCubeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapeCubeFactory = v2;
};

// Line 307: range 0000000012727494-0000000012727521
void __cdecl data::ConfigShapeCylinder::ConfigShapeCylinder(data::ConfigShapeCylinder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseShape::ConfigBaseShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCylinder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v1);
  }
  this->radius = 0.0;
};

// Line 307: range 00000000127278FC-00000000127279CC
void __cdecl data::ConfigShapeCylinder::ConfigShapeCylinder(
        data::ConfigShapeCylinder *const this,
        const data::ConfigShapeCylinder *a2)
{
  int (**v2)(...); // rdx
  float radius; // xmm0_4

  data::ConfigBaseShape::ConfigBaseShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCylinder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseShape = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, a2);
  }
  this->radius = radius;
};

// Line 314: range 000000001274C624-000000001274C64E
void __cdecl data::ConfigShapeCylinder::~ConfigShapeCylinder(data::ConfigShapeCylinder *const this)
{
  data::ConfigShapeCylinder::~ConfigShapeCylinder(this);
  operator delete(this, 0x30uLL);
};

// Line 314: range 000000001274C5D6-000000001274C623
void __cdecl data::ConfigShapeCylinder::~ConfigShapeCylinder(data::ConfigShapeCylinder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCylinder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseShape = v2;
  data::ConfigBaseShape::~ConfigBaseShape(this);
};

// Line 319: range 0000000012145BE2-0000000012145BF2
const char *__cdecl data::ConfigShapeCylinder::getTypeName(const data::ConfigShapeCylinder *const this)
{
  return "ConfigShapeCylinder";
};

// Line 320: range 0000000012145BF4-0000000012145D90
int32_t __cdecl data::ConfigShapeCylinder::getHashNum(const data::ConfigShapeCylinder *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeCylinder::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShapeCylinder",
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

// Line 336: range 0000000012727C16-0000000012727C57
void __cdecl data::ConfigShapeCylinderFactory::ConfigShapeCylinderFactory(data::ConfigShapeCylinderFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShapeCylinderFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShapeCylinderFactory = v2;
};
