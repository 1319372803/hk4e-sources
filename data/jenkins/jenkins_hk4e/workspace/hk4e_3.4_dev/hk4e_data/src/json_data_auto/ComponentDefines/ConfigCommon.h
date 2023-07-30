// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigCommon.h

// Line 34: range 000000000ECD845C-000000000ECD84E8
void __cdecl data::ConfigEffectAttachShape::ConfigEffectAttachShape(data::ConfigEffectAttachShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigEffectAttachShape>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigEffectAttachShape>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 34: range 000000000ED36E04-000000000ED36EDA
void __cdecl data::ConfigEffectAttachShape::ConfigEffectAttachShape(
        data::ConfigEffectAttachShape *const this,
        const data::ConfigEffectAttachShape *a2)
{
  std::enable_shared_from_this<data::ConfigEffectAttachShape> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigEffectAttachShape>;
  std::enable_shared_from_this<data::ConfigEffectAttachShape>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigEffectAttachShape>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigEffectAttachShape = v3;
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

// Line 41: range 000000000ED37124-000000000ED37175
void __cdecl data::ConfigEffectAttachShape::~ConfigEffectAttachShape(data::ConfigEffectAttachShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::enable_shared_from_this<data::ConfigEffectAttachShape>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigEffectAttachShape>);
};

// Line 41: range 000000000ED37176-000000000ED371A0
void __cdecl data::ConfigEffectAttachShape::~ConfigEffectAttachShape(data::ConfigEffectAttachShape *const this)
{
  data::ConfigEffectAttachShape::~ConfigEffectAttachShape(this);
  operator delete(this, 0x20uLL);
};

// Line 46: range 000000000E69E3AE-000000000E69E3BE
const char *__cdecl data::ConfigEffectAttachShape::getTypeName(const data::ConfigEffectAttachShape *const this)
{
  return "ConfigEffectAttachShape";
};

// Line 47: range 000000000E69E3C0-000000000E69E55C
int32_t __cdecl data::ConfigEffectAttachShape::getHashNum(const data::ConfigEffectAttachShape *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachShape::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEffectAttachShape",
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

// Line 66: range 000000000ED371A2-000000000ED37309
void __cdecl data::ConfigEffectAttachBox::ConfigEffectAttachBox(data::ConfigEffectAttachBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigEffectAttachShape::ConfigEffectAttachShape((data::ConfigEffectAttachShape *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->emit_from >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->emit_from >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->emit_from, v3);
  }
  this->emit_from = Volume;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_x, v3);
  }
  this->scale_x = 1.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale_y, v4);
  }
  this->scale_y = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_z, v4);
  }
  this->scale_z = 1.0;
};

// Line 66: range 000000000ED376E4-000000000ED37939
void __cdecl data::ConfigEffectAttachBox::ConfigEffectAttachBox(
        data::ConfigEffectAttachBox *const this,
        const data::ConfigEffectAttachBox *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ParticleShapeType emit_from; // ecx
  char v5; // dl
  float scale_x; // xmm0_4
  float scale_y; // xmm0_4
  __int64 v8; // rsi
  float scale_z; // xmm0_4

  data::ConfigEffectAttachShape::ConfigEffectAttachShape(
    (data::ConfigEffectAttachShape *const)this,
    (const data::ConfigEffectAttachShape *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEffectAttachShape = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->emit_from >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->emit_from >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->emit_from);
  }
  emit_from = a2->emit_from;
  v5 = *(_BYTE *)(((unsigned __int64)&this->emit_from >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->emit_from, v3);
  this->emit_from = emit_from;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scale_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scale_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scale_x);
  }
  scale_x = a2->scale_x;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_x, v3);
  }
  this->scale_x = scale_x;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scale_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scale_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scale_y);
  }
  scale_y = a2->scale_y;
  v8 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale_y, v8);
  }
  this->scale_y = scale_y;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scale_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scale_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scale_z);
  }
  scale_z = a2->scale_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_z, v8);
  }
  this->scale_z = scale_z;
};

// Line 76: range 000000000EDAC1EC-000000000EDAC239
void __cdecl data::ConfigEffectAttachBox::~ConfigEffectAttachBox(data::ConfigEffectAttachBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  data::ConfigEffectAttachShape::~ConfigEffectAttachShape((data::ConfigEffectAttachShape *const)this);
};

// Line 76: range 000000000EDAC23A-000000000EDAC264
void __cdecl data::ConfigEffectAttachBox::~ConfigEffectAttachBox(data::ConfigEffectAttachBox *const this)
{
  data::ConfigEffectAttachBox::~ConfigEffectAttachBox(this);
  operator delete(this, 0x30uLL);
};

// Line 81: range 000000000E69E55E-000000000E69E56E
const char *__cdecl data::ConfigEffectAttachBox::getTypeName(const data::ConfigEffectAttachBox *const this)
{
  return "ConfigEffectAttachBox";
};

// Line 82: range 000000000E69E570-000000000E69E70C
int32_t __cdecl data::ConfigEffectAttachBox::getHashNum(const data::ConfigEffectAttachBox *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachBox::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEffectAttachBox",
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

// Line 98: range 000000000ED37B82-000000000ED37BC3
void __cdecl data::ConfigEffectAttachBoxFactory::ConfigEffectAttachBoxFactory(
        data::ConfigEffectAttachBoxFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachBoxFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachBoxFactory = v2;
};

// Line 106: range 000000000ED37ECC-000000000ED37F29
void __cdecl data::ConfigEffectAttachSkinnedMesh::ConfigEffectAttachSkinnedMesh(
        data::ConfigEffectAttachSkinnedMesh *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigEffectAttachShape::ConfigEffectAttachShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachSkinnedMesh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::string::basic_string(&this->mesh);
};

// Line 106: range 000000000ED3832E-000000000ED383C4
void __cdecl data::ConfigEffectAttachSkinnedMesh::ConfigEffectAttachSkinnedMesh(
        data::ConfigEffectAttachSkinnedMesh *const this,
        const data::ConfigEffectAttachSkinnedMesh *a2)
{
  int (**v2)(...); // rdx

  data::ConfigEffectAttachShape::ConfigEffectAttachShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachSkinnedMesh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::string::basic_string(&this->mesh, &a2->mesh);
};

// Line 113: range 000000000EDAC162-000000000EDAC1BF
void __cdecl data::ConfigEffectAttachSkinnedMesh::~ConfigEffectAttachSkinnedMesh(
        data::ConfigEffectAttachSkinnedMesh *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachSkinnedMesh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::string::~string(&this->mesh);
  data::ConfigEffectAttachShape::~ConfigEffectAttachShape(this);
};

// Line 113: range 000000000EDAC1C0-000000000EDAC1EA
void __cdecl data::ConfigEffectAttachSkinnedMesh::~ConfigEffectAttachSkinnedMesh(
        data::ConfigEffectAttachSkinnedMesh *const this)
{
  data::ConfigEffectAttachSkinnedMesh::~ConfigEffectAttachSkinnedMesh(this);
  operator delete(this, 0x40uLL);
};

// Line 118: range 000000000E69E70E-000000000E69E71E
const char *__cdecl data::ConfigEffectAttachSkinnedMesh::getTypeName(
        const data::ConfigEffectAttachSkinnedMesh *const this)
{
  return "ConfigEffectAttachSkinnedMesh";
};

// Line 119: range 000000000E69E720-000000000E69E8BC
int32_t __cdecl data::ConfigEffectAttachSkinnedMesh::getHashNum(const data::ConfigEffectAttachSkinnedMesh *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachSkinnedMesh::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEffectAttachSkinnedMesh",
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

// Line 135: range 000000000ED386AE-000000000ED386EF
void __cdecl data::ConfigEffectAttachSkinnedMeshFactory::ConfigEffectAttachSkinnedMeshFactory(
        data::ConfigEffectAttachSkinnedMeshFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachSkinnedMeshFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachSkinnedMeshFactory = v2;
};

// Line 143: range 000000000ED389F8-000000000ED38A55
void __cdecl data::ConfigEffectAttachMesh::ConfigEffectAttachMesh(data::ConfigEffectAttachMesh *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigEffectAttachShape::ConfigEffectAttachShape(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachMesh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::string::basic_string(&this->mesh);
};

// Line 143: range 000000000ED38E5A-000000000ED38EF0
void __cdecl data::ConfigEffectAttachMesh::ConfigEffectAttachMesh(
        data::ConfigEffectAttachMesh *const this,
        const data::ConfigEffectAttachMesh *a2)
{
  int (**v2)(...); // rdx

  data::ConfigEffectAttachShape::ConfigEffectAttachShape(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachMesh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::string::basic_string(&this->mesh, &a2->mesh);
};

// Line 150: range 000000000EDAC0D8-000000000EDAC135
void __cdecl data::ConfigEffectAttachMesh::~ConfigEffectAttachMesh(data::ConfigEffectAttachMesh *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachMesh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachShape = v2;
  std::string::~string(&this->mesh);
  data::ConfigEffectAttachShape::~ConfigEffectAttachShape(this);
};

// Line 150: range 000000000EDAC136-000000000EDAC160
void __cdecl data::ConfigEffectAttachMesh::~ConfigEffectAttachMesh(data::ConfigEffectAttachMesh *const this)
{
  data::ConfigEffectAttachMesh::~ConfigEffectAttachMesh(this);
  operator delete(this, 0x40uLL);
};

// Line 155: range 000000000E69E8BE-000000000E69E8CE
const char *__cdecl data::ConfigEffectAttachMesh::getTypeName(const data::ConfigEffectAttachMesh *const this)
{
  return "ConfigEffectAttachMesh";
};

// Line 156: range 000000000E69E8D0-000000000E69EA6C
int32_t __cdecl data::ConfigEffectAttachMesh::getHashNum(const data::ConfigEffectAttachMesh *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEffectAttachMesh::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEffectAttachMesh",
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

// Line 172: range 000000000ED391DA-000000000ED3921B
void __cdecl data::ConfigEffectAttachMeshFactory::ConfigEffectAttachMeshFactory(
        data::ConfigEffectAttachMeshFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectAttachMeshFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectAttachMeshFactory = v2;
};

// Line 180: range 000000000E6CAA88-000000000E6CAAED
void __cdecl data::ConfigMeshEffectNode::ConfigMeshEffectNode(data::ConfigMeshEffectNode *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->attach_mesh_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 180: range 000000000EBFE290-000000000EBFE369
void __cdecl data::ConfigMeshEffectNode::ConfigMeshEffectNode(
        data::ConfigMeshEffectNode *const this,
        const data::ConfigMeshEffectNode *a2)
{
  std::string *p_attach_mesh_name; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_attach_mesh_name = &a2->attach_mesh_name;
  std::string::basic_string(&this->attach_mesh_name, p_attach_mesh_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_attach_mesh_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_attach_mesh_name) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_attach_mesh_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 180: range 000000000E869B00-000000000E869BB6
void __cdecl data::ConfigMeshEffectNode::ConfigMeshEffectNode(
        data::ConfigMeshEffectNode *const this,
        data::ConfigMeshEffectNode *a2)
{
  std::string *p_attach_mesh_name; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_attach_mesh_name = &a2->attach_mesh_name;
  std::string::basic_string(&this->attach_mesh_name, p_attach_mesh_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_attach_mesh_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_attach_mesh_name) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_attach_mesh_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 180: range 000000000E6CAAEE-000000000E6CAB18
void __cdecl data::ConfigMeshEffectNode::~ConfigMeshEffectNode(data::ConfigMeshEffectNode *const this)
{
  std::string::~string(&this->attach_mesh_name);
  std::string::~string(this);
};

// Line 209: range 000000000ED782F4-000000000ED78A74
void __cdecl data::ConfigEntityCommon::ConfigEntityCommon(data::ConfigEntityCommon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEffectAttachShape>();
  if ( *(_BYTE *)(((unsigned __int64)&this->mass >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mass >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mass, v1);
  }
  this->mass = 1.0;
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v2);
  }
  this->height = 1.35;
  if ( *(_BYTE *)(((unsigned __int64)&this->model_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->model_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->model_height, v2);
  }
  this->model_height = 1.35;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->view_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->view_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->view_size, v3);
  }
  this->view_size = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shadow_view_size_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shadow_view_size_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shadow_view_size_ratio, v3);
  }
  this->shadow_view_size_ratio = 1.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_cull_bounds_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_cull_bounds_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_cull_bounds_radius, v4);
  }
  this->override_cull_bounds_radius = -1.0;
  if ( *(char *)(((unsigned __int64)&this->affected_by_world >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->affected_by_world, v4, &this->affected_by_world);
  this->affected_by_world = 0;
  v5 = ((_BYTE)this + 41) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->check_in_surface >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->check_in_surface >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->check_in_surface, v5, v6);
  this->check_in_surface = 0;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, v7);
  }
  this->scale = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_tick_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disable_tick_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disable_tick_distance, v7);
  }
  this->disable_tick_distance = 0.0;
  v8 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_pause_tick_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_pause_tick_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_pause_tick_distance, v8);
  }
  this->force_pause_tick_distance = -1.0;
  if ( *(char *)(((unsigned __int64)&this->should_pause_animator_before_ready >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->should_pause_animator_before_ready, v8, &this->should_pause_animator_before_ready);
  this->should_pause_animator_before_ready = 0;
  v9 = ((_BYTE)this + 57) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->can_trigger_element_reaction_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->can_trigger_element_reaction_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->can_trigger_element_reaction_text, v9, v10);
  this->can_trigger_element_reaction_text = 1;
  v11 = ((_BYTE)this + 58) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->use_grass_displacement >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->use_grass_displacement >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->use_grass_displacement, v11, v12);
  this->use_grass_displacement = 0;
  v13 = ((_BYTE)this + 59) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->mute_element_stick_ui >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->mute_element_stick_ui >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->mute_element_stick_ui, v13, v14);
  this->mute_element_stick_ui = 0;
  v15 = ((_BYTE)this + 60) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->has_after_image >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->has_after_image >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->has_after_image, v15, v16);
  this->has_after_image = 0;
  v17 = ((_BYTE)this + 61) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->use_dynamic_bone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->use_dynamic_bone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->use_dynamic_bone, v17, v18);
  this->use_dynamic_bone = 0;
  v19 = ((_BYTE)this + 62) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->enable_crash_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->enable_crash_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->enable_crash_damage, v19, v20);
  this->enable_crash_damage = 1;
  v21 = ((_BYTE)this + 63) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->clear_animator_on_set_light_deactive, v21, v22);
  this->clear_animator_on_set_light_deactive = 0;
  if ( *(char *)(((unsigned __int64)&this->clear_aion_set_light_deactive >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->clear_aion_set_light_deactive, v21, &this->clear_aion_set_light_deactive);
  this->clear_aion_set_light_deactive = 0;
  v23 = ((_BYTE)this + 65) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->reconnect_support >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->reconnect_support >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->reconnect_support, v23, v24);
  this->reconnect_support = 0;
  v25 = ((_BYTE)this + 66) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->recover_by_init_pose >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->recover_by_init_pose >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->recover_by_init_pose, v25, v26);
  this->recover_by_init_pose = 0;
  v27 = ((_BYTE)this + 67) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->use_final_ik >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&this->use_final_ik >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->use_final_ik, v27, v28);
  this->use_final_ik = 0;
  v29 = ((_BYTE)this + 68) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->mute_element_reaction_overgrow >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->mute_element_reaction_overgrow >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->mute_element_reaction_overgrow, v29, v30);
  this->mute_element_reaction_overgrow = 0;
  v31 = ((_BYTE)this + 69) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&this->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_force_refresh_authotiry_to_host, v31, v32);
  this->is_force_refresh_authotiry_to_host = 0;
  v33 = ((_BYTE)this + 70) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&this->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&this->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->is_refresh_auth_when_auth_out_sight, v33, v34);
  this->is_refresh_auth_when_auth_out_sight = 0;
  v35 = ((_BYTE)this + 71) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&this->sync_anim_crossfade_duration >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&this->sync_anim_crossfade_duration >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_store1(&this->sync_anim_crossfade_duration, v35, v36);
  this->sync_anim_crossfade_duration = 0;
  std::vector<data::ConfigMeshEffectNode>::vector(&this->mesh_effect_node_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v35, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 209: range 000000000E7F9DEA-000000000E7FAC2D
void __cdecl data::ConfigEntityCommon::ConfigEntityCommon(
        data::ConfigEntityCommon *const this,
        const data::ConfigEntityCommon *a2)
{
  float mass; // xmm0_4
  float height; // xmm0_4
  __int64 v4; // rsi
  float model_height; // xmm0_4
  float view_size; // xmm0_4
  __int64 v7; // rsi
  float shadow_view_size_ratio; // xmm0_4
  float override_cull_bounds_radius; // xmm0_4
  __int64 v10; // rsi
  bool affected_by_world; // cl
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool check_in_surface; // cl
  char v16; // dl
  __int64 v17; // rdx
  float scale; // xmm0_4
  __int64 v19; // rsi
  float disable_tick_distance; // xmm0_4
  float force_pause_tick_distance; // xmm0_4
  __int64 v22; // rsi
  bool should_pause_animator_before_ready; // cl
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool can_trigger_element_reaction_text; // cl
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool use_grass_displacement; // cl
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  bool mute_element_stick_ui; // cl
  char v38; // dl
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool has_after_image; // cl
  char v43; // dl
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  bool use_dynamic_bone; // cl
  char v48; // dl
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  bool enable_crash_damage; // cl
  char v53; // dl
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdx
  bool clear_animator_on_set_light_deactive; // cl
  char v58; // dl
  __int64 v59; // rdx
  bool clear_aion_set_light_deactive; // cl
  char v61; // al
  __int64 v62; // rsi
  __int64 v63; // rdx
  bool reconnect_support; // cl
  char v65; // dl
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdx
  bool recover_by_init_pose; // cl
  char v70; // dl
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdx
  bool use_final_ik; // cl
  char v75; // dl
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rdx
  bool mute_element_reaction_overgrow; // cl
  char v80; // dl
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rdx
  bool is_force_refresh_authotiry_to_host; // cl
  char v85; // dl
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rdx
  bool is_refresh_auth_when_auth_out_sight; // cl
  char v90; // dl
  __int64 v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rdx
  bool sync_anim_crossfade_duration; // cl
  char v95; // dl
  __int64 v96; // rdx
  data::ConfigMeshEffectNodeList *p_mesh_effect_node_list; // rsi
  bool is_json_loaded; // cl
  char v99; // al

  std::shared_ptr<data::ConfigEffectAttachShape>::shared_ptr(&this->effect_attach_shape, &a2->effect_attach_shape);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mass >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mass >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mass);
  }
  mass = a2->mass;
  if ( *(_BYTE *)(((unsigned __int64)&this->mass >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mass >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mass, a2);
  }
  this->mass = mass;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height);
  }
  height = a2->height;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v4);
  }
  this->height = height;
  if ( *(_BYTE *)(((unsigned __int64)&a2->model_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->model_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->model_height);
  }
  model_height = a2->model_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->model_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->model_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->model_height, v4);
  }
  this->model_height = model_height;
  if ( *(_BYTE *)(((unsigned __int64)&a2->view_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->view_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->view_size);
  }
  view_size = a2->view_size;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->view_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->view_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->view_size, v7);
  }
  this->view_size = view_size;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shadow_view_size_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->shadow_view_size_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->shadow_view_size_ratio);
  }
  shadow_view_size_ratio = a2->shadow_view_size_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->shadow_view_size_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shadow_view_size_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shadow_view_size_ratio, v7);
  }
  this->shadow_view_size_ratio = shadow_view_size_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->override_cull_bounds_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->override_cull_bounds_radius >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->override_cull_bounds_radius);
  }
  override_cull_bounds_radius = a2->override_cull_bounds_radius;
  v10 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_cull_bounds_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_cull_bounds_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_cull_bounds_radius, v10);
  }
  this->override_cull_bounds_radius = override_cull_bounds_radius;
  if ( *(char *)(((unsigned __int64)&a2->affected_by_world >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->affected_by_world, v10, &a2->affected_by_world);
  affected_by_world = a2->affected_by_world;
  v12 = *(_BYTE *)(((unsigned __int64)&this->affected_by_world >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store1(&this->affected_by_world, v10, &this->affected_by_world);
  }
  this->affected_by_world = affected_by_world;
  v13 = ((_BYTE)a2 + 41) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->check_in_surface >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->check_in_surface >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->check_in_surface, v13, v14);
  check_in_surface = a2->check_in_surface;
  v16 = *(_BYTE *)(((unsigned __int64)&this->check_in_surface >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->check_in_surface, v13, v17);
  this->check_in_surface = check_in_surface;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scale);
  }
  scale = a2->scale;
  v19 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, v19);
  }
  this->scale = scale;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disable_tick_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->disable_tick_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->disable_tick_distance);
  }
  disable_tick_distance = a2->disable_tick_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_tick_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disable_tick_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disable_tick_distance, v19);
  }
  this->disable_tick_distance = disable_tick_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->force_pause_tick_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->force_pause_tick_distance >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->force_pause_tick_distance);
  }
  force_pause_tick_distance = a2->force_pause_tick_distance;
  v22 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_pause_tick_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_pause_tick_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->force_pause_tick_distance, v22);
  }
  this->force_pause_tick_distance = force_pause_tick_distance;
  if ( *(char *)(((unsigned __int64)&a2->should_pause_animator_before_ready >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->should_pause_animator_before_ready, v22, &a2->should_pause_animator_before_ready);
  should_pause_animator_before_ready = a2->should_pause_animator_before_ready;
  v24 = *(_BYTE *)(((unsigned __int64)&this->should_pause_animator_before_ready >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(v22) = v24 != 0;
    __asan_report_store1(&this->should_pause_animator_before_ready, v22, &this->should_pause_animator_before_ready);
  }
  this->should_pause_animator_before_ready = should_pause_animator_before_ready;
  v25 = ((_BYTE)a2 + 57) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&a2->can_trigger_element_reaction_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&a2->can_trigger_element_reaction_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&a2->can_trigger_element_reaction_text, v25, v26);
  can_trigger_element_reaction_text = a2->can_trigger_element_reaction_text;
  v28 = *(_BYTE *)(((unsigned __int64)&this->can_trigger_element_reaction_text >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->can_trigger_element_reaction_text, v25, v29);
  this->can_trigger_element_reaction_text = can_trigger_element_reaction_text;
  v30 = ((_BYTE)a2 + 58) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&a2->use_grass_displacement >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&a2->use_grass_displacement >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&a2->use_grass_displacement, v30, v31);
  use_grass_displacement = a2->use_grass_displacement;
  v33 = *(_BYTE *)(((unsigned __int64)&this->use_grass_displacement >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this + 58) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->use_grass_displacement, v30, v34);
  this->use_grass_displacement = use_grass_displacement;
  v35 = ((_BYTE)a2 + 59) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&a2->mute_element_stick_ui >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&a2->mute_element_stick_ui >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_load1(&a2->mute_element_stick_ui, v35, v36);
  mute_element_stick_ui = a2->mute_element_stick_ui;
  v38 = *(_BYTE *)(((unsigned __int64)&this->mute_element_stick_ui >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v38 != 0;
  v39 = (v38 != 0) & (unsigned __int8)((((unsigned __int8)this + 59) & 7) >= v38);
  if ( (_BYTE)v39 )
    __asan_report_store1(&this->mute_element_stick_ui, v35, v39);
  this->mute_element_stick_ui = mute_element_stick_ui;
  v40 = ((_BYTE)a2 + 60) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&a2->has_after_image >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&a2->has_after_image >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&a2->has_after_image, v40, v41);
  has_after_image = a2->has_after_image;
  v43 = *(_BYTE *)(((unsigned __int64)&this->has_after_image >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->has_after_image, v40, v44);
  this->has_after_image = has_after_image;
  v45 = ((_BYTE)a2 + 61) & 7;
  v46 = (*(_BYTE *)(((unsigned __int64)&a2->use_dynamic_bone >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&a2->use_dynamic_bone >> 3) + 0x7FFF8000));
  if ( (_BYTE)v46 )
    __asan_report_load1(&a2->use_dynamic_bone, v45, v46);
  use_dynamic_bone = a2->use_dynamic_bone;
  v48 = *(_BYTE *)(((unsigned __int64)&this->use_dynamic_bone >> 3) + 0x7FFF8000);
  LOBYTE(v45) = v48 != 0;
  v49 = (v48 != 0) & (unsigned __int8)((((unsigned __int8)this + 61) & 7) >= v48);
  if ( (_BYTE)v49 )
    __asan_report_store1(&this->use_dynamic_bone, v45, v49);
  this->use_dynamic_bone = use_dynamic_bone;
  v50 = ((_BYTE)a2 + 62) & 7;
  v51 = (*(_BYTE *)(((unsigned __int64)&a2->enable_crash_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v50 >= *(_BYTE *)(((unsigned __int64)&a2->enable_crash_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v51 )
    __asan_report_load1(&a2->enable_crash_damage, v50, v51);
  enable_crash_damage = a2->enable_crash_damage;
  v53 = *(_BYTE *)(((unsigned __int64)&this->enable_crash_damage >> 3) + 0x7FFF8000);
  LOBYTE(v50) = v53 != 0;
  v54 = (v53 != 0) & (unsigned __int8)((((unsigned __int8)this + 62) & 7) >= v53);
  if ( (_BYTE)v54 )
    __asan_report_store1(&this->enable_crash_damage, v50, v54);
  this->enable_crash_damage = enable_crash_damage;
  v55 = ((_BYTE)a2 + 63) & 7;
  v56 = (*(_BYTE *)(((unsigned __int64)&a2->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v55 >= *(_BYTE *)(((unsigned __int64)&a2->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v56 )
    __asan_report_load1(&a2->clear_animator_on_set_light_deactive, v55, v56);
  clear_animator_on_set_light_deactive = a2->clear_animator_on_set_light_deactive;
  v58 = *(_BYTE *)(((unsigned __int64)&this->clear_animator_on_set_light_deactive >> 3) + 0x7FFF8000);
  LOBYTE(v55) = v58 != 0;
  v59 = (v58 != 0) & (unsigned __int8)((((unsigned __int8)this + 63) & 7) >= v58);
  if ( (_BYTE)v59 )
    __asan_report_store1(&this->clear_animator_on_set_light_deactive, v55, v59);
  this->clear_animator_on_set_light_deactive = clear_animator_on_set_light_deactive;
  if ( *(char *)(((unsigned __int64)&a2->clear_aion_set_light_deactive >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->clear_aion_set_light_deactive, v55, &a2->clear_aion_set_light_deactive);
  clear_aion_set_light_deactive = a2->clear_aion_set_light_deactive;
  v61 = *(_BYTE *)(((unsigned __int64)&this->clear_aion_set_light_deactive >> 3) + 0x7FFF8000);
  if ( v61 < 0 )
  {
    LOBYTE(v55) = v61 != 0;
    __asan_report_store1(&this->clear_aion_set_light_deactive, v55, &this->clear_aion_set_light_deactive);
  }
  this->clear_aion_set_light_deactive = clear_aion_set_light_deactive;
  v62 = ((_BYTE)a2 + 65) & 7;
  v63 = (*(_BYTE *)(((unsigned __int64)&a2->reconnect_support >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v62 >= *(_BYTE *)(((unsigned __int64)&a2->reconnect_support >> 3) + 0x7FFF8000));
  if ( (_BYTE)v63 )
    __asan_report_load1(&a2->reconnect_support, v62, v63);
  reconnect_support = a2->reconnect_support;
  v65 = *(_BYTE *)(((unsigned __int64)&this->reconnect_support >> 3) + 0x7FFF8000);
  LOBYTE(v62) = v65 != 0;
  v66 = (v65 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v65);
  if ( (_BYTE)v66 )
    __asan_report_store1(&this->reconnect_support, v62, v66);
  this->reconnect_support = reconnect_support;
  v67 = ((_BYTE)a2 + 66) & 7;
  v68 = (*(_BYTE *)(((unsigned __int64)&a2->recover_by_init_pose >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v67 >= *(_BYTE *)(((unsigned __int64)&a2->recover_by_init_pose >> 3) + 0x7FFF8000));
  if ( (_BYTE)v68 )
    __asan_report_load1(&a2->recover_by_init_pose, v67, v68);
  recover_by_init_pose = a2->recover_by_init_pose;
  v70 = *(_BYTE *)(((unsigned __int64)&this->recover_by_init_pose >> 3) + 0x7FFF8000);
  LOBYTE(v67) = v70 != 0;
  v71 = (v70 != 0) & (unsigned __int8)((((unsigned __int8)this + 66) & 7) >= v70);
  if ( (_BYTE)v71 )
    __asan_report_store1(&this->recover_by_init_pose, v67, v71);
  this->recover_by_init_pose = recover_by_init_pose;
  v72 = ((_BYTE)a2 + 67) & 7;
  v73 = (*(_BYTE *)(((unsigned __int64)&a2->use_final_ik >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v72 >= *(_BYTE *)(((unsigned __int64)&a2->use_final_ik >> 3) + 0x7FFF8000));
  if ( (_BYTE)v73 )
    __asan_report_load1(&a2->use_final_ik, v72, v73);
  use_final_ik = a2->use_final_ik;
  v75 = *(_BYTE *)(((unsigned __int64)&this->use_final_ik >> 3) + 0x7FFF8000);
  LOBYTE(v72) = v75 != 0;
  v76 = (v75 != 0) & (unsigned __int8)((((unsigned __int8)this + 67) & 7) >= v75);
  if ( (_BYTE)v76 )
    __asan_report_store1(&this->use_final_ik, v72, v76);
  this->use_final_ik = use_final_ik;
  v77 = ((_BYTE)a2 + 68) & 7;
  v78 = (*(_BYTE *)(((unsigned __int64)&a2->mute_element_reaction_overgrow >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v77 >= *(_BYTE *)(((unsigned __int64)&a2->mute_element_reaction_overgrow >> 3) + 0x7FFF8000));
  if ( (_BYTE)v78 )
    __asan_report_load1(&a2->mute_element_reaction_overgrow, v77, v78);
  mute_element_reaction_overgrow = a2->mute_element_reaction_overgrow;
  v80 = *(_BYTE *)(((unsigned __int64)&this->mute_element_reaction_overgrow >> 3) + 0x7FFF8000);
  LOBYTE(v77) = v80 != 0;
  v81 = (v80 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v80);
  if ( (_BYTE)v81 )
    __asan_report_store1(&this->mute_element_reaction_overgrow, v77, v81);
  this->mute_element_reaction_overgrow = mute_element_reaction_overgrow;
  v82 = ((_BYTE)a2 + 69) & 7;
  v83 = (*(_BYTE *)(((unsigned __int64)&a2->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v82 >= *(_BYTE *)(((unsigned __int64)&a2->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v83 )
    __asan_report_load1(&a2->is_force_refresh_authotiry_to_host, v82, v83);
  is_force_refresh_authotiry_to_host = a2->is_force_refresh_authotiry_to_host;
  v85 = *(_BYTE *)(((unsigned __int64)&this->is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000);
  LOBYTE(v82) = v85 != 0;
  v86 = (v85 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v85);
  if ( (_BYTE)v86 )
    __asan_report_store1(&this->is_force_refresh_authotiry_to_host, v82, v86);
  this->is_force_refresh_authotiry_to_host = is_force_refresh_authotiry_to_host;
  v87 = ((_BYTE)a2 + 70) & 7;
  v88 = (*(_BYTE *)(((unsigned __int64)&a2->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v87 >= *(_BYTE *)(((unsigned __int64)&a2->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v88 )
    __asan_report_load1(&a2->is_refresh_auth_when_auth_out_sight, v87, v88);
  is_refresh_auth_when_auth_out_sight = a2->is_refresh_auth_when_auth_out_sight;
  v90 = *(_BYTE *)(((unsigned __int64)&this->is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000);
  LOBYTE(v87) = v90 != 0;
  v91 = (v90 != 0) & (unsigned __int8)((((unsigned __int8)this + 70) & 7) >= v90);
  if ( (_BYTE)v91 )
    __asan_report_store1(&this->is_refresh_auth_when_auth_out_sight, v87, v91);
  this->is_refresh_auth_when_auth_out_sight = is_refresh_auth_when_auth_out_sight;
  v92 = ((_BYTE)a2 + 71) & 7;
  v93 = (*(_BYTE *)(((unsigned __int64)&a2->sync_anim_crossfade_duration >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v92 >= *(_BYTE *)(((unsigned __int64)&a2->sync_anim_crossfade_duration >> 3) + 0x7FFF8000));
  if ( (_BYTE)v93 )
    __asan_report_load1(&a2->sync_anim_crossfade_duration, v92, v93);
  sync_anim_crossfade_duration = a2->sync_anim_crossfade_duration;
  v95 = *(_BYTE *)(((unsigned __int64)&this->sync_anim_crossfade_duration >> 3) + 0x7FFF8000);
  LOBYTE(v92) = v95 != 0;
  v96 = (v95 != 0) & (unsigned __int8)((((unsigned __int8)this + 71) & 7) >= v95);
  if ( (_BYTE)v96 )
    __asan_report_store1(&this->sync_anim_crossfade_duration, v92, v96);
  this->sync_anim_crossfade_duration = sync_anim_crossfade_duration;
  p_mesh_effect_node_list = &a2->mesh_effect_node_list;
  std::vector<data::ConfigMeshEffectNode>::vector(&this->mesh_effect_node_list, &a2->mesh_effect_node_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_mesh_effect_node_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v99 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v99 < 0 )
  {
    LOBYTE(p_mesh_effect_node_list) = v99 != 0;
    __asan_report_store1(&this->is_json_loaded, p_mesh_effect_node_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 209: range 000000000E7FAC2E-000000000E7FAC58
void __cdecl data::ConfigEntityCommon::~ConfigEntityCommon(data::ConfigEntityCommon *const this)
{
  std::vector<data::ConfigMeshEffectNode>::~vector(&this->mesh_effect_node_list);
  std::shared_ptr<data::ConfigEffectAttachShape>::~shared_ptr(&this->effect_attach_shape);
};

// Line 274: range 000000000ED39684-000000000ED39AC1
void __cdecl data::ConfigBillboard::ConfigBillboard(data::ConfigBillboard *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBillboard::ConfigBillboard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::enable_shared_from_this<data::ConfigBillboard>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBillboard>);
  v5 = (int (**)(...))(&`vtable for'data::ConfigBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v5;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->attach_point,
    "BillboardAttach",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  data::Vector::Vector(&this->offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offset_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offset_type, "BillboardAttach");
  }
  this->offset_type = Normal_8;
  v6 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius_offset, v6);
  }
  this->radius_offset = 0.0;
  if ( *(char *)(((unsigned __int64)&this->enable_self_adapt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_self_adapt, v6, &this->enable_self_adapt);
  this->enable_self_adapt = 0;
  v7 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_distance, v7);
  }
  this->show_distance = 24.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mark_show_distance, v7);
  }
  this->mark_show_distance = 35.0;
  v8 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->name_show_distance, v8);
  }
  this->name_show_distance = 15.0;
  if ( *(char *)(((unsigned __int64)&this->force_hide_all_bars >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_hide_all_bars, v8, &this->force_hide_all_bars);
  this->force_hide_all_bars = 0;
  v9 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_reaction_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_reaction_scale >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_reaction_scale, v9);
  }
  this->element_reaction_scale = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->charge_bar_height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->charge_bar_height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->charge_bar_height_offset, v9);
  }
  this->charge_bar_height_offset = 0.0;
  v10 = ((_BYTE)this + 108) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v10, v11);
  this->is_json_loaded = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 274: range 000000000ED39FB4-000000000ED3A5AB
void __cdecl data::ConfigBillboard::ConfigBillboard(data::ConfigBillboard *const this, const data::ConfigBillboard *a2)
{
  std::enable_shared_from_this<data::ConfigBillboard> *v2; // rsi
  int (**v3)(...); // rdx
  std::string *p_attach_point; // rsi
  __int64 v5; // rdx
  data::BillboardOffsetType offset_type; // ecx
  char v7; // al
  float radius_offset; // xmm0_4
  __int64 v9; // rsi
  bool enable_self_adapt; // cl
  char v11; // al
  float show_distance; // xmm0_4
  __int64 v13; // rsi
  float mark_show_distance; // xmm0_4
  float name_show_distance; // xmm0_4
  __int64 v16; // rsi
  bool force_hide_all_bars; // cl
  char v18; // al
  float element_reaction_scale; // xmm0_4
  __int64 v20; // rsi
  float charge_bar_height_offset; // xmm0_4
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBillboard>;
  std::enable_shared_from_this<data::ConfigBillboard>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBillboard>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBillboard = v3;
  p_attach_point = &a2->attach_point;
  std::string::basic_string(&this->attach_point, &a2->attach_point);
  if ( *(_WORD *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->offset);
  v5 = *(_QWORD *)&a2->offset.z;
  *(_QWORD *)&this->offset.x = *(_QWORD *)&a2->offset.x;
  *(_QWORD *)&this->offset.z = v5;
  if ( *(_BYTE *)(((unsigned __int64)&a2->offset_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->offset_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->offset_type);
  }
  offset_type = a2->offset_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->offset_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_attach_point) = v7 != 0;
    __asan_report_store4(&this->offset_type, p_attach_point);
  }
  this->offset_type = offset_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->radius_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->radius_offset);
  }
  radius_offset = a2->radius_offset;
  v9 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius_offset, v9);
  }
  this->radius_offset = radius_offset;
  if ( *(char *)(((unsigned __int64)&a2->enable_self_adapt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_self_adapt, v9, &a2->enable_self_adapt);
  enable_self_adapt = a2->enable_self_adapt;
  v11 = *(_BYTE *)(((unsigned __int64)&this->enable_self_adapt >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->enable_self_adapt, v9, &this->enable_self_adapt);
  }
  this->enable_self_adapt = enable_self_adapt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->show_distance);
  }
  show_distance = a2->show_distance;
  v13 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_distance, v13);
  }
  this->show_distance = show_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mark_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mark_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mark_show_distance);
  }
  mark_show_distance = a2->mark_show_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mark_show_distance, v13);
  }
  this->mark_show_distance = mark_show_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->name_show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->name_show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->name_show_distance);
  }
  name_show_distance = a2->name_show_distance;
  v16 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->name_show_distance, v16);
  }
  this->name_show_distance = name_show_distance;
  if ( *(char *)(((unsigned __int64)&a2->force_hide_all_bars >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force_hide_all_bars, v16, &a2->force_hide_all_bars);
  force_hide_all_bars = a2->force_hide_all_bars;
  v18 = *(_BYTE *)(((unsigned __int64)&this->force_hide_all_bars >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store1(&this->force_hide_all_bars, v16, &this->force_hide_all_bars);
  }
  this->force_hide_all_bars = force_hide_all_bars;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_reaction_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_reaction_scale >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_reaction_scale);
  }
  element_reaction_scale = a2->element_reaction_scale;
  v20 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_reaction_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_reaction_scale >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_reaction_scale, v20);
  }
  this->element_reaction_scale = element_reaction_scale;
  if ( *(_BYTE *)(((unsigned __int64)&a2->charge_bar_height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->charge_bar_height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->charge_bar_height_offset);
  }
  charge_bar_height_offset = a2->charge_bar_height_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->charge_bar_height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->charge_bar_height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->charge_bar_height_offset, v20);
  }
  this->charge_bar_height_offset = charge_bar_height_offset;
  v22 = ((_BYTE)a2 + 108) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&a2->is_json_loaded, v22, v23);
  is_json_loaded = a2->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
};

// Line 292: range 000000000ED3A9F4-000000000ED3AA55
void __cdecl data::ConfigBillboard::~ConfigBillboard(data::ConfigBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  std::string::~string(&this->attach_point);
  std::enable_shared_from_this<data::ConfigBillboard>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBillboard>);
};

// Line 292: range 000000000ED3AA56-000000000ED3AA80
void __cdecl data::ConfigBillboard::~ConfigBillboard(data::ConfigBillboard *const this)
{
  data::ConfigBillboard::~ConfigBillboard(this);
  operator delete(this, 0x70uLL);
};

// Line 297: range 000000000E69EAAA-000000000E69EABA
const char *__cdecl data::ConfigBillboard::getTypeName(const data::ConfigBillboard *const this)
{
  return "ConfigBillboard";
};

// Line 298: range 000000000E69EABC-000000000E69EC58
int32_t __cdecl data::ConfigBillboard::getHashNum(const data::ConfigBillboard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBillboard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBillboard",
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

// Line 333: range 000000000ED3AA82-000000000ED3ABD0
void __cdecl data::ConfigCombatBillboard::ConfigCombatBillboard(data::ConfigCombatBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigBillboard::ConfigBillboard((data::ConfigBillboard *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCombatBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  v3 = ((_BYTE)this + 109) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->show_hpbar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->show_hpbar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->show_hpbar, v3, v4);
  this->show_hpbar = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_show_distance, v3);
  }
  this->force_show_distance = 0.0;
  v5 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->size, v5);
  }
  this->size = Normal_12;
  if ( *(char *)(((unsigned __int64)&this->shield_bar_only >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->shield_bar_only, v5, &this->shield_bar_only);
  this->shield_bar_only = 0;
};

// Line 333: range 000000000ED3B01A-000000000ED3B265
void __cdecl data::ConfigCombatBillboard::ConfigCombatBillboard(
        data::ConfigCombatBillboard *const this,
        const data::ConfigCombatBillboard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool show_hpbar; // cl
  char v6; // dl
  __int64 v7; // rdx
  float force_show_distance; // xmm0_4
  __int64 v9; // rsi
  data::CombatBillboardSize size; // ecx
  char v11; // dl
  bool shield_bar_only; // cl
  char v13; // al

  data::ConfigBillboard::ConfigBillboard((data::ConfigBillboard *const)this, (const data::ConfigBillboard *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCombatBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBillboard = v2;
  v3 = ((_BYTE)a2 + 109) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->show_hpbar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->show_hpbar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->show_hpbar, v3, v4);
  show_hpbar = a2->show_hpbar;
  v6 = *(_BYTE *)(((unsigned __int64)&this->show_hpbar >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 109) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->show_hpbar, v3, v7);
  this->show_hpbar = show_hpbar;
  if ( *(_BYTE *)(((unsigned __int64)&a2->force_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->force_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->force_show_distance);
  }
  force_show_distance = a2->force_show_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_show_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_show_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_show_distance, v3);
  }
  this->force_show_distance = force_show_distance;
  v9 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->size);
  }
  size = a2->size;
  v11 = *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v11 )
    __asan_report_store4(&this->size, v9);
  this->size = size;
  if ( *(char *)(((unsigned __int64)&a2->shield_bar_only >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->shield_bar_only, v9, &a2->shield_bar_only);
  shield_bar_only = a2->shield_bar_only;
  v13 = *(_BYTE *)(((unsigned __int64)&this->shield_bar_only >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store1(&this->shield_bar_only, v9, &this->shield_bar_only);
  }
  this->shield_bar_only = shield_bar_only;
};

// Line 343: range 000000000EDAC05E-000000000EDAC0AB
void __cdecl data::ConfigCombatBillboard::~ConfigCombatBillboard(data::ConfigCombatBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCombatBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  data::ConfigBillboard::~ConfigBillboard((data::ConfigBillboard *const)this);
};

// Line 343: range 000000000EDAC0AC-000000000EDAC0D6
void __cdecl data::ConfigCombatBillboard::~ConfigCombatBillboard(data::ConfigCombatBillboard *const this)
{
  data::ConfigCombatBillboard::~ConfigCombatBillboard(this);
  operator delete(this, 0x80uLL);
};

// Line 348: range 000000000E69EC5A-000000000E69EC6A
const char *__cdecl data::ConfigCombatBillboard::getTypeName(const data::ConfigCombatBillboard *const this)
{
  return "ConfigCombatBillboard";
};

// Line 349: range 000000000E69EC6C-000000000E69EE08
int32_t __cdecl data::ConfigCombatBillboard::getHashNum(const data::ConfigCombatBillboard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigCombatBillboard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCombatBillboard",
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

// Line 365: range 000000000ED3B54E-000000000ED3B58F
void __cdecl data::ConfigCombatBillboardFactory::ConfigCombatBillboardFactory(
        data::ConfigCombatBillboardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCombatBillboardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCombatBillboardFactory = v2;
};

// Line 390: range 000000000ED3B9F8-000000000ED3BB79
void __cdecl data::ConfigProgressBillboard::ConfigProgressBillboard(data::ConfigProgressBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBillboard::ConfigBillboard(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigProgressBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  std::vector<std::string>::vector(&this->custom_key_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_value, v1);
  }
  this->max_value = 0.0;
  std::string::basic_string(&this->prefab_plugin_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = General_1;
  v3 = ((_BYTE)this - 76) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->need_up_anim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->need_up_anim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->need_up_anim, v3, v4);
  this->need_up_anim = 0;
  v5 = ((_BYTE)this - 75) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->show_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->show_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->show_text, v5, v6);
  this->show_text = 0;
};

// Line 390: range 000000000ED3BFCE-000000000ED3C2AE
void __cdecl data::ConfigProgressBillboard::ConfigProgressBillboard(
        data::ConfigProgressBillboard *const this,
        const data::ConfigProgressBillboard *a2)
{
  int (**v2)(...); // rdx
  float max_value; // xmm0_4
  std::string *p_prefab_plugin_name; // rsi
  data::ProgressBillboardType type; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool need_up_anim; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool show_text; // cl
  char v15; // dl
  __int64 v16; // rdx

  data::ConfigBillboard::ConfigBillboard(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigProgressBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBillboard = v2;
  std::vector<std::string>::vector(&this->custom_key_list, &a2->custom_key_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_value);
  }
  max_value = a2->max_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_value, &a2->custom_key_list);
  }
  this->max_value = max_value;
  p_prefab_plugin_name = &a2->prefab_plugin_name;
  std::string::basic_string(&this->prefab_plugin_name, &a2->prefab_plugin_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_prefab_plugin_name) = v6 != 0;
    __asan_report_store4(&this->type, p_prefab_plugin_name);
  }
  this->type = type;
  v7 = ((_BYTE)a2 - 76) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->need_up_anim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->need_up_anim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->need_up_anim, v7, v8);
  need_up_anim = a2->need_up_anim;
  v10 = *(_BYTE *)(((unsigned __int64)&this->need_up_anim >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 76) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->need_up_anim, v7, v11);
  this->need_up_anim = need_up_anim;
  v12 = ((_BYTE)a2 - 75) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->show_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->show_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->show_text, v12, v13);
  show_text = a2->show_text;
  v15 = *(_BYTE *)(((unsigned __int64)&this->show_text >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this - 75) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->show_text, v12, v16);
  this->show_text = show_text;
};

// Line 402: range 000000000EDAC032-000000000EDAC05C
void __cdecl data::ConfigProgressBillboard::~ConfigProgressBillboard(data::ConfigProgressBillboard *const this)
{
  data::ConfigProgressBillboard::~ConfigProgressBillboard(this);
  operator delete(this, 0xB8uLL);
};

// Line 402: range 000000000EDABFC2-000000000EDAC031
void __cdecl data::ConfigProgressBillboard::~ConfigProgressBillboard(data::ConfigProgressBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigProgressBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  std::string::~string(&this->prefab_plugin_name);
  std::vector<std::string>::~vector(&this->custom_key_list);
  data::ConfigBillboard::~ConfigBillboard(this);
};

// Line 407: range 000000000E69EE0A-000000000E69EE1A
const char *__cdecl data::ConfigProgressBillboard::getTypeName(const data::ConfigProgressBillboard *const this)
{
  return "ConfigProgressBillboard";
};

// Line 408: range 000000000E69EE1C-000000000E69EFB8
int32_t __cdecl data::ConfigProgressBillboard::getHashNum(const data::ConfigProgressBillboard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigProgressBillboard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigProgressBillboard",
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

// Line 424: range 000000000ED3C598-000000000ED3C5D9
void __cdecl data::ConfigProgressBillboardFactory::ConfigProgressBillboardFactory(
        data::ConfigProgressBillboardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigProgressBillboardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigProgressBillboardFactory = v2;
};

// Line 432: range 000000000ED3C8E2-000000000ED3C951
void __cdecl data::ConfigGadgetIconBillboard::ConfigGadgetIconBillboard(data::ConfigGadgetIconBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBillboard::ConfigBillboard(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetIconBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  std::string::basic_string(&this->icon_name);
  std::string::basic_string(&this->title);
};

// Line 432: range 000000000ED3CD9A-000000000ED3CE65
void __cdecl data::ConfigGadgetIconBillboard::ConfigGadgetIconBillboard(
        data::ConfigGadgetIconBillboard *const this,
        const data::ConfigGadgetIconBillboard *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBillboard::ConfigBillboard(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetIconBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBillboard = v2;
  std::string::basic_string(&this->icon_name, &a2->icon_name);
  std::string::basic_string(&this->title, &a2->title);
};

// Line 440: range 000000000EDABF96-000000000EDABFC0
void __cdecl data::ConfigGadgetIconBillboard::~ConfigGadgetIconBillboard(data::ConfigGadgetIconBillboard *const this)
{
  data::ConfigGadgetIconBillboard::~ConfigGadgetIconBillboard(this);
  operator delete(this, 0xB0uLL);
};

// Line 440: range 000000000EDABF26-000000000EDABF95
void __cdecl data::ConfigGadgetIconBillboard::~ConfigGadgetIconBillboard(data::ConfigGadgetIconBillboard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetIconBillboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBillboard = v2;
  std::string::~string(&this->title);
  std::string::~string(&this->icon_name);
  data::ConfigBillboard::~ConfigBillboard(this);
};

// Line 445: range 000000000E69EFBA-000000000E69EFCA
const char *__cdecl data::ConfigGadgetIconBillboard::getTypeName(const data::ConfigGadgetIconBillboard *const this)
{
  return "ConfigGadgetIconBillboard";
};

// Line 446: range 000000000E69EFCC-000000000E69F168
int32_t __cdecl data::ConfigGadgetIconBillboard::getHashNum(const data::ConfigGadgetIconBillboard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetIconBillboard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetIconBillboard",
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

// Line 462: range 000000000ED3D14E-000000000ED3D18F
void __cdecl data::ConfigGadgetIconBillboardFactory::ConfigGadgetIconBillboardFactory(
        data::ConfigGadgetIconBillboardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetIconBillboardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetIconBillboardFactory = v2;
};
