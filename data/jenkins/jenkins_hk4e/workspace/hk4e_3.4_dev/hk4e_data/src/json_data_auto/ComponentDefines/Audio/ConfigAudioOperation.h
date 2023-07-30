// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigAudioOperation.h

// Line 35: range 00000000110E1018-00000000110E10B4
void __cdecl data::ConfigAudioOperation::ConfigAudioOperation(data::ConfigAudioOperation *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigAudioOperation>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAudioOperation>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->operation);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 35: range 00000000127085F6-000000001270870E
void __cdecl data::ConfigAudioOperation::ConfigAudioOperation(
        data::ConfigAudioOperation *const this,
        const data::ConfigAudioOperation *a2)
{
  std::enable_shared_from_this<data::ConfigAudioOperation> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigWwiseString *p_operation; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigAudioOperation>;
  std::enable_shared_from_this<data::ConfigAudioOperation>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAudioOperation>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAudioOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAudioOperation = v3;
  p_operation = &a2->operation;
  data::ConfigWwiseString::ConfigWwiseString(&this->operation, &a2->operation);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_operation, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_operation) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_operation, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 43: range 0000000012708BB4-0000000012708BDE
void __cdecl data::ConfigAudioOperation::~ConfigAudioOperation(data::ConfigAudioOperation *const this)
{
  data::ConfigAudioOperation::~ConfigAudioOperation(this);
  operator delete(this, 0x48uLL);
};

// Line 43: range 0000000012708B52-0000000012708BB3
void __cdecl data::ConfigAudioOperation::~ConfigAudioOperation(data::ConfigAudioOperation *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigWwiseString::~ConfigWwiseString(&this->operation);
  std::enable_shared_from_this<data::ConfigAudioOperation>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAudioOperation>);
};

// Line 48: range 000000001215CB42-000000001215CB52
const char *__cdecl data::ConfigAudioOperation::getTypeName(const data::ConfigAudioOperation *const this)
{
  return "ConfigAudioOperation";
};

// Line 49: range 000000001215CB54-000000001215CCF0
int32_t __cdecl data::ConfigAudioOperation::getHashNum(const data::ConfigAudioOperation *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioOperation::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioOperation",
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

// Line 75: range 0000000012708BE0-0000000012708C2D
void __cdecl data::ConfigAudioEventOp::ConfigAudioEventOp(data::ConfigAudioEventOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
};

// Line 75: range 0000000012709048-00000000127090A0
void __cdecl data::ConfigAudioEventOp::ConfigAudioEventOp(
        data::ConfigAudioEventOp *const this,
        const data::ConfigAudioEventOp *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioOperation = v2;
};

// Line 81: range 000000001274D3C2-000000001274D40F
void __cdecl data::ConfigAudioEventOp::~ConfigAudioEventOp(data::ConfigAudioEventOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigAudioOperation::~ConfigAudioOperation(this);
};

// Line 81: range 000000001274D410-000000001274D43A
void __cdecl data::ConfigAudioEventOp::~ConfigAudioEventOp(data::ConfigAudioEventOp *const this)
{
  data::ConfigAudioEventOp::~ConfigAudioEventOp(this);
  operator delete(this, 0x48uLL);
};

// Line 86: range 000000001215CCF2-000000001215CD02
const char *__cdecl data::ConfigAudioEventOp::getTypeName(const data::ConfigAudioEventOp *const this)
{
  return "ConfigAudioEventOp";
};

// Line 87: range 000000001215CD04-000000001215CEA0
int32_t __cdecl data::ConfigAudioEventOp::getHashNum(const data::ConfigAudioEventOp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioEventOp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioEventOp",
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

// Line 103: range 000000001270938A-00000000127093CB
void __cdecl data::ConfigAudioEventOpFactory::ConfigAudioEventOpFactory(data::ConfigAudioEventOpFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOpFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventOpFactory = v2;
};

// Line 111: range 00000000127096D4-0000000012709721
void __cdecl data::ConfigAudioEmitterOp::ConfigAudioEmitterOp(data::ConfigAudioEmitterOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEmitterOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
};

// Line 111: range 0000000012709B3C-0000000012709B94
void __cdecl data::ConfigAudioEmitterOp::ConfigAudioEmitterOp(
        data::ConfigAudioEmitterOp *const this,
        const data::ConfigAudioEmitterOp *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEmitterOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioOperation = v2;
};

// Line 117: range 000000001274D348-000000001274D395
void __cdecl data::ConfigAudioEmitterOp::~ConfigAudioEmitterOp(data::ConfigAudioEmitterOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEmitterOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigAudioOperation::~ConfigAudioOperation(this);
};

// Line 117: range 000000001274D396-000000001274D3C0
void __cdecl data::ConfigAudioEmitterOp::~ConfigAudioEmitterOp(data::ConfigAudioEmitterOp *const this)
{
  data::ConfigAudioEmitterOp::~ConfigAudioEmitterOp(this);
  operator delete(this, 0x48uLL);
};

// Line 122: range 000000001215CEA2-000000001215CEB2
const char *__cdecl data::ConfigAudioEmitterOp::getTypeName(const data::ConfigAudioEmitterOp *const this)
{
  return "ConfigAudioEmitterOp";
};

// Line 123: range 000000001215CEB4-000000001215D050
int32_t __cdecl data::ConfigAudioEmitterOp::getHashNum(const data::ConfigAudioEmitterOp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioEmitterOp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioEmitterOp",
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

// Line 139: range 0000000012709E7E-0000000012709EBF
void __cdecl data::ConfigAudioEmitterOpFactory::ConfigAudioEmitterOpFactory(
        data::ConfigAudioEmitterOpFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEmitterOpFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEmitterOpFactory = v2;
};

// Line 147: range 000000001270A1C8-000000001270A25D
void __cdecl data::ConfigAudioPositionedOp::ConfigAudioPositionedOp(data::ConfigAudioPositionedOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation((data::ConfigAudioOperation *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->positioning, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->positioning = 0.0;
};

// Line 147: range 000000001270A678-000000001270A758
void __cdecl data::ConfigAudioPositionedOp::ConfigAudioPositionedOp(
        data::ConfigAudioPositionedOp *const this,
        const data::ConfigAudioPositionedOp *a2)
{
  int (**v2)(...); // rdx
  float positioning; // xmm0_4

  data::ConfigAudioOperation::ConfigAudioOperation(
    (data::ConfigAudioOperation *const)this,
    (const data::ConfigAudioOperation *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioOperation = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->positioning >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->positioning >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->positioning);
  }
  positioning = a2->positioning;
  if ( *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->positioning, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->positioning = positioning;
};

// Line 154: range 000000001270AA90-000000001270AABA
void __cdecl data::ConfigAudioPositionedOp::~ConfigAudioPositionedOp(data::ConfigAudioPositionedOp *const this)
{
  data::ConfigAudioPositionedOp::~ConfigAudioPositionedOp(this);
  operator delete(this, 0x48uLL);
};

// Line 154: range 000000001270AA42-000000001270AA8F
void __cdecl data::ConfigAudioPositionedOp::~ConfigAudioPositionedOp(data::ConfigAudioPositionedOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigAudioOperation::~ConfigAudioOperation((data::ConfigAudioOperation *const)this);
};

// Line 159: range 000000001215D052-000000001215D062
const char *__cdecl data::ConfigAudioPositionedOp::getTypeName(const data::ConfigAudioPositionedOp *const this)
{
  return "ConfigAudioPositionedOp";
};

// Line 160: range 000000001215D064-000000001215D200
int32_t __cdecl data::ConfigAudioPositionedOp::getHashNum(const data::ConfigAudioPositionedOp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioPositionedOp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioPositionedOp",
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

// Line 179: range 000000001270AABC-000000001270AB49
void __cdecl data::ConfigAudioPositionedEventOp::ConfigAudioPositionedEventOp(
        data::ConfigAudioPositionedEventOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioPositionedOp::ConfigAudioPositionedOp(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEventOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v1);
  }
  this->duration = 0.0;
};

// Line 179: range 000000001270AF6E-000000001270B03E
void __cdecl data::ConfigAudioPositionedEventOp::ConfigAudioPositionedEventOp(
        data::ConfigAudioPositionedEventOp *const this,
        const data::ConfigAudioPositionedEventOp *a2)
{
  int (**v2)(...); // rdx
  float duration; // xmm0_4

  data::ConfigAudioPositionedOp::ConfigAudioPositionedOp(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEventOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioOperation = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, a2);
  }
  this->duration = duration;
};

// Line 186: range 000000001274D31C-000000001274D346
void __cdecl data::ConfigAudioPositionedEventOp::~ConfigAudioPositionedEventOp(
        data::ConfigAudioPositionedEventOp *const this)
{
  data::ConfigAudioPositionedEventOp::~ConfigAudioPositionedEventOp(this);
  operator delete(this, 0x50uLL);
};

// Line 186: range 000000001274D2CE-000000001274D31B
void __cdecl data::ConfigAudioPositionedEventOp::~ConfigAudioPositionedEventOp(
        data::ConfigAudioPositionedEventOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEventOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigAudioPositionedOp::~ConfigAudioPositionedOp(this);
};

// Line 191: range 000000001215D202-000000001215D212
const char *__cdecl data::ConfigAudioPositionedEventOp::getTypeName(
        const data::ConfigAudioPositionedEventOp *const this)
{
  return "ConfigAudioPositionedEventOp";
};

// Line 192: range 000000001215D214-000000001215D3B0
int32_t __cdecl data::ConfigAudioPositionedEventOp::getHashNum(const data::ConfigAudioPositionedEventOp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioPositionedEventOp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioPositionedEventOp",
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

// Line 208: range 000000001270B328-000000001270B369
void __cdecl data::ConfigAudioPositionedEventOpFactory::ConfigAudioPositionedEventOpFactory(
        data::ConfigAudioPositionedEventOpFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEventOpFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioPositionedEventOpFactory = v2;
};

// Line 216: range 000000001270B672-000000001270B6BF
void __cdecl data::ConfigAudioPositionedEmitterOp::ConfigAudioPositionedEmitterOp(
        data::ConfigAudioPositionedEmitterOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioPositionedOp::ConfigAudioPositionedOp(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEmitterOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
};

// Line 216: range 000000001270BADA-000000001270BB32
void __cdecl data::ConfigAudioPositionedEmitterOp::ConfigAudioPositionedEmitterOp(
        data::ConfigAudioPositionedEmitterOp *const this,
        const data::ConfigAudioPositionedEmitterOp *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAudioPositionedOp::ConfigAudioPositionedOp(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEmitterOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioOperation = v2;
};

// Line 222: range 000000001274D254-000000001274D2A1
void __cdecl data::ConfigAudioPositionedEmitterOp::~ConfigAudioPositionedEmitterOp(
        data::ConfigAudioPositionedEmitterOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEmitterOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::ConfigAudioPositionedOp::~ConfigAudioPositionedOp(this);
};

// Line 222: range 000000001274D2A2-000000001274D2CC
void __cdecl data::ConfigAudioPositionedEmitterOp::~ConfigAudioPositionedEmitterOp(
        data::ConfigAudioPositionedEmitterOp *const this)
{
  data::ConfigAudioPositionedEmitterOp::~ConfigAudioPositionedEmitterOp(this);
  operator delete(this, 0x48uLL);
};

// Line 227: range 000000001215D3B2-000000001215D3C2
const char *__cdecl data::ConfigAudioPositionedEmitterOp::getTypeName(
        const data::ConfigAudioPositionedEmitterOp *const this)
{
  return "ConfigAudioPositionedEmitterOp";
};

// Line 228: range 000000001215D3C4-000000001215D560
int32_t __cdecl data::ConfigAudioPositionedEmitterOp::getHashNum(
        const data::ConfigAudioPositionedEmitterOp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioPositionedEmitterOp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioPositionedEmitterOp",
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

// Line 244: range 000000001270BE1C-000000001270BE5D
void __cdecl data::ConfigAudioPositionedEmitterOpFactory::ConfigAudioPositionedEmitterOpFactory(
        data::ConfigAudioPositionedEmitterOpFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPositionedEmitterOpFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioPositionedEmitterOpFactory = v2;
};

// Line 252: range 000000001270C166-000000001270C1C3
void __cdecl data::ConfigAudioEventOnEffectOp::ConfigAudioEventOnEffectOp(data::ConfigAudioEventOnEffectOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOnEffectOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::DynamicString::DynamicString(&this->effect_pattern);
};

// Line 252: range 000000001270C580-000000001270C616
void __cdecl data::ConfigAudioEventOnEffectOp::ConfigAudioEventOnEffectOp(
        data::ConfigAudioEventOnEffectOp *const this,
        const data::ConfigAudioEventOnEffectOp *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAudioOperation::ConfigAudioOperation(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOnEffectOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioOperation = v2;
  data::DynamicString::DynamicString(&this->effect_pattern, &a2->effect_pattern);
};

// Line 259: range 000000001274D228-000000001274D252
void __cdecl data::ConfigAudioEventOnEffectOp::~ConfigAudioEventOnEffectOp(
        data::ConfigAudioEventOnEffectOp *const this)
{
  data::ConfigAudioEventOnEffectOp::~ConfigAudioEventOnEffectOp(this);
  operator delete(this, 0x98uLL);
};

// Line 259: range 000000001274D1CA-000000001274D227
void __cdecl data::ConfigAudioEventOnEffectOp::~ConfigAudioEventOnEffectOp(
        data::ConfigAudioEventOnEffectOp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOnEffectOp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioOperation = v2;
  data::DynamicString::~DynamicString(&this->effect_pattern);
  data::ConfigAudioOperation::~ConfigAudioOperation(this);
};

// Line 264: range 000000001215D562-000000001215D572
const char *__cdecl data::ConfigAudioEventOnEffectOp::getTypeName(const data::ConfigAudioEventOnEffectOp *const this)
{
  return "ConfigAudioEventOnEffectOp";
};

// Line 265: range 000000001215D574-000000001215D710
int32_t __cdecl data::ConfigAudioEventOnEffectOp::getHashNum(const data::ConfigAudioEventOnEffectOp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioEventOnEffectOp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioEventOnEffectOp",
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

// Line 281: range 000000001270C900-000000001270C941
void __cdecl data::ConfigAudioEventOnEffectOpFactory::ConfigAudioEventOnEffectOpFactory(
        data::ConfigAudioEventOnEffectOpFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventOnEffectOpFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventOnEffectOpFactory = v2;
};
