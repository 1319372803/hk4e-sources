// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigQTEStep.h

// Line 103: range 0000000011DF7B18-0000000011DF7BE7
void __cdecl data::ConfigQTEStepBaseCond::ConfigQTEStepBaseCond(data::ConfigQTEStepBaseCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigQTEStepBaseCond>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigQTEStepBaseCond>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = QTE_STEP_COND_NONE;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 103: range 0000000011DF812C-0000000011DF8281
void __cdecl data::ConfigQTEStepBaseCond::ConfigQTEStepBaseCond(
        data::ConfigQTEStepBaseCond *const this,
        const data::ConfigQTEStepBaseCond *a2)
{
  std::enable_shared_from_this<data::ConfigQTEStepBaseCond> *v2; // rsi
  int (**v3)(...); // rdx
  data::QTEStepCondType cond_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigQTEStepBaseCond>;
  std::enable_shared_from_this<data::ConfigQTEStepBaseCond>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigQTEStepBaseCond>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigQTEStepBaseCond = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->cond_type, v2);
  }
  this->cond_type = cond_type;
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

// Line 111: range 0000000011DF84CA-0000000011DF851B
void __cdecl data::ConfigQTEStepBaseCond::~ConfigQTEStepBaseCond(data::ConfigQTEStepBaseCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  std::enable_shared_from_this<data::ConfigQTEStepBaseCond>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigQTEStepBaseCond>);
};

// Line 111: range 0000000011DF851C-0000000011DF8546
void __cdecl data::ConfigQTEStepBaseCond::~ConfigQTEStepBaseCond(data::ConfigQTEStepBaseCond *const this)
{
  data::ConfigQTEStepBaseCond::~ConfigQTEStepBaseCond(this);
  operator delete(this, 0x20uLL);
};

// Line 116: range 0000000011A78ED8-0000000011A78EE8
const char *__cdecl data::ConfigQTEStepBaseCond::getTypeName(const data::ConfigQTEStepBaseCond *const this)
{
  return "ConfigQTEStepBaseCond";
};

// Line 117: range 0000000011A78EEA-0000000011A79086
int32_t __cdecl data::ConfigQTEStepBaseCond::getHashNum(const data::ConfigQTEStepBaseCond *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepBaseCond::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepBaseCond",
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

// Line 136: range 0000000011DF8548-0000000011DF8619
void __cdecl data::ConfigQTEStepPowerBarCond::ConfigQTEStepPowerBarCond(data::ConfigQTEStepPowerBarCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseCond::ConfigQTEStepBaseCond(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order_type, v1);
  }
  this->order_type = Less;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = 0;
};

// Line 136: range 0000000011DF89EE-0000000011DF8B40
void __cdecl data::ConfigQTEStepPowerBarCond::ConfigQTEStepPowerBarCond(
        data::ConfigQTEStepPowerBarCond *const this,
        const data::ConfigQTEStepPowerBarCond *a2)
{
  int (**v2)(...); // rdx
  data::OrderingType order_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t value; // ecx
  char v7; // dl
  const data::ConfigQTEStepPowerBarCond *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigQTEStepBaseCond::ConfigQTEStepBaseCond(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->order_type);
  }
  order_type = a2->order_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->order_type, a2);
  }
  this->order_type = order_type;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->value);
  }
  value = v8->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->value, v5);
  }
  this->value = value;
};

// Line 144: range 0000000011E04ABE-0000000011E04B0B
void __cdecl data::ConfigQTEStepPowerBarCond::~ConfigQTEStepPowerBarCond(data::ConfigQTEStepPowerBarCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  data::ConfigQTEStepBaseCond::~ConfigQTEStepBaseCond(this);
};

// Line 144: range 0000000011E04B0C-0000000011E04B36
void __cdecl data::ConfigQTEStepPowerBarCond::~ConfigQTEStepPowerBarCond(data::ConfigQTEStepPowerBarCond *const this)
{
  data::ConfigQTEStepPowerBarCond::~ConfigQTEStepPowerBarCond(this);
  operator delete(this, 0x28uLL);
};

// Line 149: range 0000000011A79088-0000000011A79098
const char *__cdecl data::ConfigQTEStepPowerBarCond::getTypeName(const data::ConfigQTEStepPowerBarCond *const this)
{
  return "ConfigQTEStepPowerBarCond";
};

// Line 150: range 0000000011A7909A-0000000011A79236
int32_t __cdecl data::ConfigQTEStepPowerBarCond::getHashNum(const data::ConfigQTEStepPowerBarCond *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPowerBarCond::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepPowerBarCond",
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

// Line 166: range 0000000011DF8D8A-0000000011DF8DCB
void __cdecl data::ConfigQTEStepPowerBarCondFactory::ConfigQTEStepPowerBarCondFactory(
        data::ConfigQTEStepPowerBarCondFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarCondFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepPowerBarCondFactory = v2;
};

// Line 174: range 0000000011DF90D4-0000000011DF91A7
void __cdecl data::ConfigQTEButtonCountDownValueCond::ConfigQTEButtonCountDownValueCond(
        data::ConfigQTEButtonCountDownValueCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseCond::ConfigQTEStepBaseCond(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEButtonCountDownValueCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order_type, v1);
  }
  this->order_type = Less;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = 0.0;
};

// Line 174: range 0000000011DF957C-0000000011DF96D1
void __cdecl data::ConfigQTEButtonCountDownValueCond::ConfigQTEButtonCountDownValueCond(
        data::ConfigQTEButtonCountDownValueCond *const this,
        const data::ConfigQTEButtonCountDownValueCond *a2)
{
  int (**v2)(...); // rdx
  data::OrderingType order_type; // ecx
  char v4; // al
  float value; // xmm0_4
  const data::ConfigQTEButtonCountDownValueCond *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  data::ConfigQTEStepBaseCond::ConfigQTEStepBaseCond(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEButtonCountDownValueCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->order_type);
  }
  order_type = a2->order_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->order_type, a2);
  }
  this->order_type = order_type;
  if ( *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->value);
  }
  value = v6->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = value;
};

// Line 182: range 0000000011E04A92-0000000011E04ABC
void __cdecl data::ConfigQTEButtonCountDownValueCond::~ConfigQTEButtonCountDownValueCond(
        data::ConfigQTEButtonCountDownValueCond *const this)
{
  data::ConfigQTEButtonCountDownValueCond::~ConfigQTEButtonCountDownValueCond(this);
  operator delete(this, 0x28uLL);
};

// Line 182: range 0000000011E04A44-0000000011E04A91
void __cdecl data::ConfigQTEButtonCountDownValueCond::~ConfigQTEButtonCountDownValueCond(
        data::ConfigQTEButtonCountDownValueCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEButtonCountDownValueCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseCond = v2;
  data::ConfigQTEStepBaseCond::~ConfigQTEStepBaseCond(this);
};

// Line 187: range 0000000011A79238-0000000011A79248
const char *__cdecl data::ConfigQTEButtonCountDownValueCond::getTypeName(
        const data::ConfigQTEButtonCountDownValueCond *const this)
{
  return "ConfigQTEButtonCountDownValueCond";
};

// Line 188: range 0000000011A7924A-0000000011A793E6
int32_t __cdecl data::ConfigQTEButtonCountDownValueCond::getHashNum(
        const data::ConfigQTEButtonCountDownValueCond *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEButtonCountDownValueCond::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEButtonCountDownValueCond",
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

// Line 204: range 0000000011DF991A-0000000011DF995B
void __cdecl data::ConfigQTEButtonCountDownValueCondFactory::ConfigQTEButtonCountDownValueCondFactory(
        data::ConfigQTEButtonCountDownValueCondFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEButtonCountDownValueCondFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEButtonCountDownValueCondFactory = v2;
};

// Line 219: range 0000000011A7DD52-0000000011A7DDE4
void __cdecl data::ConfigQTEStepCondGroup::ConfigQTEStepCondGroup(data::ConfigQTEStepCondGroup *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->cond_comb_type = LOGIC_NONE;
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::vector(&this->step_cond_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 219: range 0000000011D3A4FC-0000000011D3A60A
void __cdecl data::ConfigQTEStepCondGroup::ConfigQTEStepCondGroup(
        data::ConfigQTEStepCondGroup *const this,
        const data::ConfigQTEStepCondGroup *a2)
{
  data::LogicType cond_comb_type; // ecx
  char v3; // al
  data::QTEStepCondList *p_step_cond_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigQTEStepCondGroup *v7; // [rsp+0h] [rbp-10h]

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
  p_step_cond_list = &v7->step_cond_list;
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::vector(&this->step_cond_list, &v7->step_cond_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_step_cond_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_step_cond_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_step_cond_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 219: range 0000000011B74E24-0000000011B74F32
void __cdecl data::ConfigQTEStepCondGroup::ConfigQTEStepCondGroup(
        data::ConfigQTEStepCondGroup *const this,
        data::ConfigQTEStepCondGroup *a2)
{
  data::LogicType cond_comb_type; // ecx
  char v3; // al
  data::QTEStepCondList *p_step_cond_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigQTEStepCondGroup *v7; // [rsp+0h] [rbp-10h]

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
  p_step_cond_list = &v7->step_cond_list;
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::vector(&this->step_cond_list, &v7->step_cond_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_step_cond_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_step_cond_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_step_cond_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 219: range 0000000011A7DDE6-0000000011A7DE04
void __cdecl data::ConfigQTEStepCondGroup::~ConfigQTEStepCondGroup(data::ConfigQTEStepCondGroup *const this)
{
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::~vector(&this->step_cond_list);
};

// Line 243: range 0000000011DF9CAC-0000000011DF9DC2
void __cdecl data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(data::ConfigQTEStepBaseAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::ConfigQTEStepBaseAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigQTEStepBaseAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_type, v1);
  }
  this->action_type = QTE_STEP_ACTION_NONE;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, v3);
  }
  this->duration = -1.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 243: range 0000000011DFA380-0000000011DFA553
void __cdecl data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(
        data::ConfigQTEStepBaseAction *const this,
        const data::ConfigQTEStepBaseAction *a2)
{
  std::enable_shared_from_this<data::ConfigQTEStepBaseAction> *v2; // rsi
  int (**v3)(...); // rdx
  data::QTEStepActionType action_type; // ecx
  char v5; // al
  float duration; // xmm0_4
  __int64 v7; // rsi
  bool is_json_loaded; // cl
  char v9; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigQTEStepBaseAction>;
  std::enable_shared_from_this<data::ConfigQTEStepBaseAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigQTEStepBaseAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigQTEStepBaseAction = v3;
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, v7);
  }
  this->duration = duration;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v7, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 252: range 0000000011DFA7EE-0000000011DFA818
void __cdecl data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction(data::ConfigQTEStepBaseAction *const this)
{
  data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction(this);
  operator delete(this, 0x28uLL);
};

// Line 252: range 0000000011DFA79C-0000000011DFA7ED
void __cdecl data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction(data::ConfigQTEStepBaseAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::enable_shared_from_this<data::ConfigQTEStepBaseAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigQTEStepBaseAction>);
};

// Line 257: range 0000000011A793E8-0000000011A793F8
const char *__cdecl data::ConfigQTEStepBaseAction::getTypeName(const data::ConfigQTEStepBaseAction *const this)
{
  return "ConfigQTEStepBaseAction";
};

// Line 258: range 0000000011A793FA-0000000011A79596
int32_t __cdecl data::ConfigQTEStepBaseAction::getHashNum(const data::ConfigQTEStepBaseAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepBaseAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepBaseAction",
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

// Line 277: range 0000000011DFA81A-0000000011DFA8AD
void __cdecl data::ConfigQTEStepPowerBarAction::ConfigQTEStepPowerBarAction(
        data::ConfigQTEStepPowerBarAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction((data::ConfigQTEStepBaseAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->change_value = 0;
};

// Line 277: range 0000000011DFAC82-0000000011DFAD5F
void __cdecl data::ConfigQTEStepPowerBarAction::ConfigQTEStepPowerBarAction(
        data::ConfigQTEStepPowerBarAction *const this,
        const data::ConfigQTEStepPowerBarAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t change_value; // ecx
  char v5; // dl

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(
    (data::ConfigQTEStepBaseAction *const)this,
    (const data::ConfigQTEStepBaseAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->change_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->change_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->change_value);
  }
  change_value = a2->change_value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->change_value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->change_value, v3);
  }
  this->change_value = change_value;
};

// Line 284: range 0000000011E04A18-0000000011E04A42
void __cdecl data::ConfigQTEStepPowerBarAction::~ConfigQTEStepPowerBarAction(
        data::ConfigQTEStepPowerBarAction *const this)
{
  data::ConfigQTEStepPowerBarAction::~ConfigQTEStepPowerBarAction(this);
  operator delete(this, 0x28uLL);
};

// Line 284: range 0000000011E049CA-0000000011E04A17
void __cdecl data::ConfigQTEStepPowerBarAction::~ConfigQTEStepPowerBarAction(
        data::ConfigQTEStepPowerBarAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction((data::ConfigQTEStepBaseAction *const)this);
};

// Line 289: range 0000000011A79598-0000000011A795A8
const char *__cdecl data::ConfigQTEStepPowerBarAction::getTypeName(const data::ConfigQTEStepPowerBarAction *const this)
{
  return "ConfigQTEStepPowerBarAction";
};

// Line 290: range 0000000011A795AA-0000000011A79746
int32_t __cdecl data::ConfigQTEStepPowerBarAction::getHashNum(const data::ConfigQTEStepPowerBarAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPowerBarAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepPowerBarAction",
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

// Line 306: range 0000000011DFAFA8-0000000011DFAFE9
void __cdecl data::ConfigQTEStepPowerBarActionFactory::ConfigQTEStepPowerBarActionFactory(
        data::ConfigQTEStepPowerBarActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepPowerBarActionFactory = v2;
};

// Line 314: range 0000000011DFB2F2-0000000011DFB34F
void __cdecl data::ConfigQTEStepPlayAudioAction::ConfigQTEStepPlayAudioAction(
        data::ConfigQTEStepPlayAudioAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPlayAudioAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::string::basic_string(&this->audio_name);
};

// Line 314: range 0000000011DFB76A-0000000011DFB800
void __cdecl data::ConfigQTEStepPlayAudioAction::ConfigQTEStepPlayAudioAction(
        data::ConfigQTEStepPlayAudioAction *const this,
        const data::ConfigQTEStepPlayAudioAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPlayAudioAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::string::basic_string(&this->audio_name, &a2->audio_name);
};

// Line 321: range 0000000011E04940-0000000011E0499D
void __cdecl data::ConfigQTEStepPlayAudioAction::~ConfigQTEStepPlayAudioAction(
        data::ConfigQTEStepPlayAudioAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPlayAudioAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::string::~string(&this->audio_name);
  data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction(this);
};

// Line 321: range 0000000011E0499E-0000000011E049C8
void __cdecl data::ConfigQTEStepPlayAudioAction::~ConfigQTEStepPlayAudioAction(
        data::ConfigQTEStepPlayAudioAction *const this)
{
  data::ConfigQTEStepPlayAudioAction::~ConfigQTEStepPlayAudioAction(this);
  operator delete(this, 0x48uLL);
};

// Line 326: range 0000000011A79748-0000000011A79758
const char *__cdecl data::ConfigQTEStepPlayAudioAction::getTypeName(
        const data::ConfigQTEStepPlayAudioAction *const this)
{
  return "ConfigQTEStepPlayAudioAction";
};

// Line 327: range 0000000011A7975A-0000000011A798F6
int32_t __cdecl data::ConfigQTEStepPlayAudioAction::getHashNum(const data::ConfigQTEStepPlayAudioAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPlayAudioAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepPlayAudioAction",
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

// Line 343: range 0000000011DFBAEA-0000000011DFBB2B
void __cdecl data::ConfigQTEStepPlayAudioActionFactory::ConfigQTEStepPlayAudioActionFactory(
        data::ConfigQTEStepPlayAudioActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPlayAudioActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepPlayAudioActionFactory = v2;
};

// Line 351: range 0000000011DFBE34-0000000011DFBF50
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::ConfigQTEStepCutsceneFailedBlackScreenAction(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction((data::ConfigQTEStepBaseAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneFailedBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->restart_save_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->restart_save_point_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->restart_save_point_id, v3);
  }
  this->restart_save_point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed_sub_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->failed_sub_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->failed_sub_quest_id, v3);
  }
  this->failed_sub_quest_id = 0;
  std::string::basic_string(&this->textmap_id);
  if ( *(char *)(((unsigned __int64)&this->show_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_immediately, v3, &this->show_immediately);
  this->show_immediately = 0;
};

// Line 351: range 0000000011DFC30C-0000000011DFC512
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::ConfigQTEStepCutsceneFailedBlackScreenAction(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this,
        const data::ConfigQTEStepCutsceneFailedBlackScreenAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t restart_save_point_id; // ecx
  char v5; // dl
  uint32_t failed_sub_quest_id; // ecx
  char v7; // al
  std::string *p_textmap_id; // rsi
  bool show_immediately; // cl
  char v10; // al

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(
    (data::ConfigQTEStepBaseAction *const)this,
    (const data::ConfigQTEStepBaseAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneFailedBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->restart_save_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->restart_save_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->restart_save_point_id);
  }
  restart_save_point_id = a2->restart_save_point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->restart_save_point_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->restart_save_point_id, v3);
  }
  this->restart_save_point_id = restart_save_point_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed_sub_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->failed_sub_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->failed_sub_quest_id);
  }
  failed_sub_quest_id = a2->failed_sub_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->failed_sub_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->failed_sub_quest_id, v3);
  }
  this->failed_sub_quest_id = failed_sub_quest_id;
  p_textmap_id = &a2->textmap_id;
  std::string::basic_string(&this->textmap_id, &a2->textmap_id);
  if ( *(char *)(((unsigned __int64)&a2->show_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->show_immediately, p_textmap_id, &a2->show_immediately);
  show_immediately = a2->show_immediately;
  v10 = *(_BYTE *)(((unsigned __int64)&this->show_immediately >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_textmap_id) = v10 != 0;
    __asan_report_store1(&this->show_immediately, p_textmap_id, &this->show_immediately);
  }
  this->show_immediately = show_immediately;
};

// Line 361: range 0000000011E04914-0000000011E0493E
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::~ConfigQTEStepCutsceneFailedBlackScreenAction(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
{
  data::ConfigQTEStepCutsceneFailedBlackScreenAction::~ConfigQTEStepCutsceneFailedBlackScreenAction(this);
  operator delete(this, 0x58uLL);
};

// Line 361: range 0000000011E048B6-0000000011E04913
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::~ConfigQTEStepCutsceneFailedBlackScreenAction(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneFailedBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::string::~string(&this->textmap_id);
  data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction((data::ConfigQTEStepBaseAction *const)this);
};

// Line 366: range 0000000011A798F8-0000000011A79908
const char *__cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::getTypeName(
        const data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
{
  return "ConfigQTEStepCutsceneFailedBlackScreenAction";
};

// Line 367: range 0000000011A7990A-0000000011A79AA6
int32_t __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::getHashNum(
        const data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepCutsceneFailedBlackScreenAction",
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

// Line 383: range 0000000011DFC7FC-0000000011DFC83D
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory::ConfigQTEStepCutsceneFailedBlackScreenActionFactory(
        data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepCutsceneFailedBlackScreenActionFactory = v2;
};

// Line 391: range 0000000011DFCB46-0000000011DFCBD9
void __cdecl data::ConfigQTEStepCutsceneJumpPointAction::ConfigQTEStepCutsceneJumpPointAction(
        data::ConfigQTEStepCutsceneJumpPointAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction((data::ConfigQTEStepBaseAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneJumpPointAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->point_id = 0;
};

// Line 391: range 0000000011DFCFAE-0000000011DFD08B
void __cdecl data::ConfigQTEStepCutsceneJumpPointAction::ConfigQTEStepCutsceneJumpPointAction(
        data::ConfigQTEStepCutsceneJumpPointAction *const this,
        const data::ConfigQTEStepCutsceneJumpPointAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t point_id; // ecx
  char v5; // dl

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(
    (data::ConfigQTEStepBaseAction *const)this,
    (const data::ConfigQTEStepBaseAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneJumpPointAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->point_id);
  }
  point_id = a2->point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->point_id, v3);
  }
  this->point_id = point_id;
};

// Line 398: range 0000000011E0483C-0000000011E04889
void __cdecl data::ConfigQTEStepCutsceneJumpPointAction::~ConfigQTEStepCutsceneJumpPointAction(
        data::ConfigQTEStepCutsceneJumpPointAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneJumpPointAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction((data::ConfigQTEStepBaseAction *const)this);
};

// Line 398: range 0000000011E0488A-0000000011E048B4
void __cdecl data::ConfigQTEStepCutsceneJumpPointAction::~ConfigQTEStepCutsceneJumpPointAction(
        data::ConfigQTEStepCutsceneJumpPointAction *const this)
{
  data::ConfigQTEStepCutsceneJumpPointAction::~ConfigQTEStepCutsceneJumpPointAction(this);
  operator delete(this, 0x28uLL);
};

// Line 403: range 0000000011A79AA8-0000000011A79AB8
const char *__cdecl data::ConfigQTEStepCutsceneJumpPointAction::getTypeName(
        const data::ConfigQTEStepCutsceneJumpPointAction *const this)
{
  return "ConfigQTEStepCutsceneJumpPointAction";
};

// Line 404: range 0000000011A79ABA-0000000011A79C56
int32_t __cdecl data::ConfigQTEStepCutsceneJumpPointAction::getHashNum(
        const data::ConfigQTEStepCutsceneJumpPointAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepCutsceneJumpPointAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepCutsceneJumpPointAction",
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

// Line 420: range 0000000011DFD2D4-0000000011DFD315
void __cdecl data::ConfigQTEStepCutsceneJumpPointActionFactory::ConfigQTEStepCutsceneJumpPointActionFactory(
        data::ConfigQTEStepCutsceneJumpPointActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCutsceneJumpPointActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepCutsceneJumpPointActionFactory = v2;
};

// Line 428: range 0000000011DFD61E-0000000011DFD6C4
void __cdecl data::ConfigQTEStepBaseInterAction::ConfigQTEStepBaseInterAction(
        data::ConfigQTEStepBaseInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->inter_action >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseInterAction>();
};

// Line 428: range 0000000011DFDB50-0000000011DFDBC3
void __cdecl data::ConfigQTEStepBaseInterAction::ConfigQTEStepBaseInterAction(
        data::ConfigQTEStepBaseInterAction *const this,
        const data::ConfigQTEStepBaseInterAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseAction::ConfigQTEStepBaseAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::shared_ptr<data::ConfigBaseInterAction>::shared_ptr(&this->inter_action, &a2->inter_action);
};

// Line 435: range 0000000011DFDE6A-0000000011DFDE94
void __cdecl data::ConfigQTEStepBaseInterAction::~ConfigQTEStepBaseInterAction(
        data::ConfigQTEStepBaseInterAction *const this)
{
  data::ConfigQTEStepBaseInterAction::~ConfigQTEStepBaseInterAction(this);
  operator delete(this, 0x38uLL);
};

// Line 435: range 0000000011DFDE0C-0000000011DFDE69
void __cdecl data::ConfigQTEStepBaseInterAction::~ConfigQTEStepBaseInterAction(
        data::ConfigQTEStepBaseInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  std::shared_ptr<data::ConfigBaseInterAction>::~shared_ptr(&this->inter_action);
  data::ConfigQTEStepBaseAction::~ConfigQTEStepBaseAction(this);
};

// Line 440: range 0000000011A79C58-0000000011A79C68
const char *__cdecl data::ConfigQTEStepBaseInterAction::getTypeName(
        const data::ConfigQTEStepBaseInterAction *const this)
{
  return "ConfigQTEStepBaseInterAction";
};

// Line 441: range 0000000011A79C6A-0000000011A79E06
int32_t __cdecl data::ConfigQTEStepBaseInterAction::getHashNum(const data::ConfigQTEStepBaseInterAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepBaseInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepBaseInterAction",
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

// Line 460: range 0000000011DFDE96-0000000011DFDF1E
void __cdecl data::ConfigQTEStepCameraMoveAction::ConfigQTEStepCameraMoveAction(
        data::ConfigQTEStepCameraMoveAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigQTEStepBaseInterAction::ConfigQTEStepBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCameraMoveAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  if ( *(char *)(((unsigned __int64)&this->exit_return_back >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->exit_return_back, v1, &this->exit_return_back);
  this->exit_return_back = 0;
};

// Line 460: range 0000000011DFE3BA-0000000011DFE488
void __cdecl data::ConfigQTEStepCameraMoveAction::ConfigQTEStepCameraMoveAction(
        data::ConfigQTEStepCameraMoveAction *const this,
        const data::ConfigQTEStepCameraMoveAction *a2)
{
  int (**v2)(...); // rdx
  bool exit_return_back; // cl
  char v4; // al

  data::ConfigQTEStepBaseInterAction::ConfigQTEStepBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCameraMoveAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  if ( *(char *)(((unsigned __int64)&a2->exit_return_back >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->exit_return_back, a2, &a2->exit_return_back);
  exit_return_back = a2->exit_return_back;
  v4 = *(_BYTE *)(((unsigned __int64)&this->exit_return_back >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->exit_return_back, a2, &this->exit_return_back);
  }
  this->exit_return_back = exit_return_back;
};

// Line 467: range 0000000011E04810-0000000011E0483A
void __cdecl data::ConfigQTEStepCameraMoveAction::~ConfigQTEStepCameraMoveAction(
        data::ConfigQTEStepCameraMoveAction *const this)
{
  data::ConfigQTEStepCameraMoveAction::~ConfigQTEStepCameraMoveAction(this);
  operator delete(this, 0x40uLL);
};

// Line 467: range 0000000011E047C2-0000000011E0480F
void __cdecl data::ConfigQTEStepCameraMoveAction::~ConfigQTEStepCameraMoveAction(
        data::ConfigQTEStepCameraMoveAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCameraMoveAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseAction = v2;
  data::ConfigQTEStepBaseInterAction::~ConfigQTEStepBaseInterAction(this);
};

// Line 472: range 0000000011A79E08-0000000011A79E18
const char *__cdecl data::ConfigQTEStepCameraMoveAction::getTypeName(
        const data::ConfigQTEStepCameraMoveAction *const this)
{
  return "ConfigQTEStepCameraMoveAction";
};

// Line 473: range 0000000011A79E1A-0000000011A79FB6
int32_t __cdecl data::ConfigQTEStepCameraMoveAction::getHashNum(const data::ConfigQTEStepCameraMoveAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepCameraMoveAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepCameraMoveAction",
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

// Line 489: range 0000000011DFE6D2-0000000011DFE713
void __cdecl data::ConfigQTEStepCameraMoveActionFactory::ConfigQTEStepCameraMoveActionFactory(
        data::ConfigQTEStepCameraMoveActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepCameraMoveActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepCameraMoveActionFactory = v2;
};

// Line 504: range 0000000011A7DE5A-0000000011A7DEBF
void __cdecl data::ConfigQTEStepCondActionGroup::ConfigQTEStepCondActionGroup(
        data::ConfigQTEStepCondActionGroup *const this)
{
  __int64 v1; // rsi

  data::ConfigQTEStepCondGroup::ConfigQTEStepCondGroup(&this->cond_group);
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::vector(&this->actions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 504: range 0000000011D3A60C-0000000011D3A6E5
void __cdecl data::ConfigQTEStepCondActionGroup::ConfigQTEStepCondActionGroup(
        data::ConfigQTEStepCondActionGroup *const this,
        const data::ConfigQTEStepCondActionGroup *a2)
{
  data::QTEStepActionList *p_actions; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigQTEStepCondGroup::ConfigQTEStepCondGroup(&this->cond_group, &a2->cond_group);
  p_actions = &a2->actions;
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::vector(&this->actions, p_actions);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_actions, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_actions) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_actions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 504: range 0000000011B74F80-0000000011B75036
void __cdecl data::ConfigQTEStepCondActionGroup::ConfigQTEStepCondActionGroup(
        data::ConfigQTEStepCondActionGroup *const this,
        data::ConfigQTEStepCondActionGroup *a2)
{
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>> *p_actions; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigQTEStepCondGroup::ConfigQTEStepCondGroup(&this->cond_group, &a2->cond_group);
  p_actions = &a2->actions;
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::vector(&this->actions, p_actions);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_actions, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_actions) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_actions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 504: range 0000000011A7DEC0-0000000011A7DEEA
void __cdecl data::ConfigQTEStepCondActionGroup::~ConfigQTEStepCondActionGroup(
        data::ConfigQTEStepCondActionGroup *const this)
{
  std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::~vector(&this->actions);
  data::ConfigQTEStepCondGroup::~ConfigQTEStepCondGroup(&this->cond_group);
};

// Line 533: range 0000000011DFEA64-0000000011DFEAF0
void __cdecl data::ConfigQTEStepBaseComponent::ConfigQTEStepBaseComponent(data::ConfigQTEStepBaseComponent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 533: range 0000000011DFEFBA-0000000011DFF090
void __cdecl data::ConfigQTEStepBaseComponent::ConfigQTEStepBaseComponent(
        data::ConfigQTEStepBaseComponent *const this,
        const data::ConfigQTEStepBaseComponent *a2)
{
  std::enable_shared_from_this<data::ConfigQTEStepBaseComponent> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>;
  std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigQTEStepBaseComponent = v3;
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

// Line 540: range 0000000011DFF59A-0000000011DFF5EB
void __cdecl data::ConfigQTEStepBaseComponent::~ConfigQTEStepBaseComponent(
        data::ConfigQTEStepBaseComponent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepBaseComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigQTEStepBaseComponent>);
};

// Line 540: range 0000000011DFF5EC-0000000011DFF616
void __cdecl data::ConfigQTEStepBaseComponent::~ConfigQTEStepBaseComponent(
        data::ConfigQTEStepBaseComponent *const this)
{
  data::ConfigQTEStepBaseComponent::~ConfigQTEStepBaseComponent(this);
  operator delete(this, 0x20uLL);
};

// Line 545: range 0000000011A79FB8-0000000011A79FC8
const char *__cdecl data::ConfigQTEStepBaseComponent::getTypeName(const data::ConfigQTEStepBaseComponent *const this)
{
  return "ConfigQTEStepBaseComponent";
};

// Line 546: range 0000000011A79FCA-0000000011A7A166
int32_t __cdecl data::ConfigQTEStepBaseComponent::getHashNum(const data::ConfigQTEStepBaseComponent *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepBaseComponent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepBaseComponent",
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

// Line 596: range 0000000011DFF650-0000000011DFF8ED
void __cdecl data::ConfigQTEStepButtonComponent::ConfigQTEStepButtonComponent(
        data::ConfigQTEStepButtonComponent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigQTEStepBaseComponent::ConfigQTEStepBaseComponent((data::ConfigQTEStepBaseComponent *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepButtonComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->position_id, v3);
  }
  this->position_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_event >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->input_event >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->input_event, v3);
  }
  this->input_event = QTE_STEP_BUTTON_INPUT_JUMP;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->click_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->style, v3);
  }
  this->style = QTE_STEP_BUTTON_STYLE_NORMAL;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_time, v4);
  }
  this->count_down_time = 0.0;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->count_down_change_trigger);
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->slide_dir_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_dir >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slide_dir >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slide_dir, v4);
  }
  this->slide_dir = QTE_STEP_BUTTON_SLIDE_DIRECT_UP;
  v5 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slide_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slide_angle, v5);
  }
  this->slide_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_touch_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slide_touch_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slide_touch_dis, v5);
  }
  this->slide_touch_dis = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_joypad_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slide_joypad_dis >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slide_joypad_dis, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->slide_joypad_dis = 0.0;
};

// Line 596: range 0000000011E00060-0000000011E0055A
void __cdecl data::ConfigQTEStepButtonComponent::ConfigQTEStepButtonComponent(
        data::ConfigQTEStepButtonComponent *const this,
        const data::ConfigQTEStepButtonComponent *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t position_id; // ecx
  char v5; // dl
  data::QTEStepButtonInputType input_event; // ecx
  char v7; // al
  data::QTEStepCondActionGroupList *p_click_trigger; // rsi
  data::QTEStepButtonStyleType style; // ecx
  char v10; // al
  float count_down_time; // xmm0_4
  data::QTEStepCondActionGroupList *p_slide_dir_trigger; // rsi
  data::QTEStepButtonSlideDirectType slide_dir; // ecx
  char v14; // al
  float slide_angle; // xmm0_4
  __int64 v16; // rsi
  float slide_touch_dis; // xmm0_4
  float slide_joypad_dis; // xmm0_4

  data::ConfigQTEStepBaseComponent::ConfigQTEStepBaseComponent(
    (data::ConfigQTEStepBaseComponent *const)this,
    (const data::ConfigQTEStepBaseComponent *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepButtonComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->position_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->position_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->position_id);
  }
  position_id = a2->position_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->position_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->position_id, v3);
  }
  this->position_id = position_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_event >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_event >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->input_event);
  }
  input_event = a2->input_event;
  v7 = *(_BYTE *)(((unsigned __int64)&this->input_event >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->input_event, v3);
  }
  this->input_event = input_event;
  p_click_trigger = &a2->click_trigger;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->click_trigger, &a2->click_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&a2->style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->style);
  }
  style = a2->style;
  v10 = *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_click_trigger) = v10 != 0;
    __asan_report_store4(&this->style, p_click_trigger);
  }
  this->style = style;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_time);
  }
  count_down_time = a2->count_down_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_time, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->count_down_time = count_down_time;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(
    &this->count_down_change_trigger,
    &a2->count_down_change_trigger);
  p_slide_dir_trigger = &a2->slide_dir_trigger;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->slide_dir_trigger, &a2->slide_dir_trigger);
  if ( *(_BYTE *)(((unsigned __int64)&a2->slide_dir >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->slide_dir >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->slide_dir);
  }
  slide_dir = a2->slide_dir;
  v14 = *(_BYTE *)(((unsigned __int64)&this->slide_dir >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_slide_dir_trigger) = v14 != 0;
    __asan_report_store4(&this->slide_dir, p_slide_dir_trigger);
  }
  this->slide_dir = slide_dir;
  if ( *(_BYTE *)(((unsigned __int64)&a2->slide_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->slide_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->slide_angle);
  }
  slide_angle = a2->slide_angle;
  v16 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slide_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slide_angle, v16);
  }
  this->slide_angle = slide_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->slide_touch_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->slide_touch_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->slide_touch_dis);
  }
  slide_touch_dis = a2->slide_touch_dis;
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_touch_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slide_touch_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slide_touch_dis, v16);
  }
  this->slide_touch_dis = slide_touch_dis;
  if ( *(_BYTE *)(((unsigned __int64)&a2->slide_joypad_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->slide_joypad_dis >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->slide_joypad_dis);
  }
  slide_joypad_dis = a2->slide_joypad_dis;
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_joypad_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slide_joypad_dis >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slide_joypad_dis, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->slide_joypad_dis = slide_joypad_dis;
};

// Line 613: range 0000000011E04718-0000000011E04795
void __cdecl data::ConfigQTEStepButtonComponent::~ConfigQTEStepButtonComponent(
        data::ConfigQTEStepButtonComponent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepButtonComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  std::vector<data::ConfigQTEStepCondActionGroup>::~vector(&this->slide_dir_trigger);
  std::vector<data::ConfigQTEStepCondActionGroup>::~vector(&this->count_down_change_trigger);
  std::vector<data::ConfigQTEStepCondActionGroup>::~vector(&this->click_trigger);
  data::ConfigQTEStepBaseComponent::~ConfigQTEStepBaseComponent((data::ConfigQTEStepBaseComponent *const)this);
};

// Line 613: range 0000000011E04796-0000000011E047C0
void __cdecl data::ConfigQTEStepButtonComponent::~ConfigQTEStepButtonComponent(
        data::ConfigQTEStepButtonComponent *const this)
{
  data::ConfigQTEStepButtonComponent::~ConfigQTEStepButtonComponent(this);
  operator delete(this, 0x88uLL);
};

// Line 618: range 0000000011A7A168-0000000011A7A178
const char *__cdecl data::ConfigQTEStepButtonComponent::getTypeName(
        const data::ConfigQTEStepButtonComponent *const this)
{
  return "ConfigQTEStepButtonComponent";
};

// Line 619: range 0000000011A7A17A-0000000011A7A316
int32_t __cdecl data::ConfigQTEStepButtonComponent::getHashNum(const data::ConfigQTEStepButtonComponent *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepButtonComponent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepButtonComponent",
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

// Line 635: range 0000000011E00844-0000000011E00885
void __cdecl data::ConfigQTEStepButtonComponentFactory::ConfigQTEStepButtonComponentFactory(
        data::ConfigQTEStepButtonComponentFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepButtonComponentFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepButtonComponentFactory = v2;
};

// Line 643: range 0000000011E00B8E-0000000011E00CF7
void __cdecl data::ConfigQTEStepPowerBarComponent::ConfigQTEStepPowerBarComponent(
        data::ConfigQTEStepPowerBarComponent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigQTEStepBaseComponent::ConfigQTEStepBaseComponent((data::ConfigQTEStepBaseComponent *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_value, v3);
  }
  this->init_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_value, v3);
  }
  this->max_value = 0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_change_value_per_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_change_value_per_second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_change_value_per_second, v4);
  }
  this->auto_change_value_per_second = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->no_input_auto_change_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->no_input_auto_change_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->no_input_auto_change_interval, v4);
  }
  this->no_input_auto_change_interval = 0.0;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->value_change_trigger);
};

// Line 643: range 0000000011E01112-0000000011E013A2
void __cdecl data::ConfigQTEStepPowerBarComponent::ConfigQTEStepPowerBarComponent(
        data::ConfigQTEStepPowerBarComponent *const this,
        const data::ConfigQTEStepPowerBarComponent *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t init_value; // ecx
  char v5; // dl
  uint32_t max_value; // ecx
  char v7; // al
  float auto_change_value_per_second; // xmm0_4
  __int64 v9; // rsi
  float no_input_auto_change_interval; // xmm0_4

  data::ConfigQTEStepBaseComponent::ConfigQTEStepBaseComponent(
    (data::ConfigQTEStepBaseComponent *const)this,
    (const data::ConfigQTEStepBaseComponent *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->init_value);
  }
  init_value = a2->init_value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->init_value, v3);
  }
  this->init_value = init_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_value);
  }
  max_value = a2->max_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->max_value, v3);
  }
  this->max_value = max_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_change_value_per_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->auto_change_value_per_second >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->auto_change_value_per_second);
  }
  auto_change_value_per_second = a2->auto_change_value_per_second;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_change_value_per_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_change_value_per_second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_change_value_per_second, v9);
  }
  this->auto_change_value_per_second = auto_change_value_per_second;
  if ( *(_BYTE *)(((unsigned __int64)&a2->no_input_auto_change_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->no_input_auto_change_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->no_input_auto_change_interval);
  }
  no_input_auto_change_interval = a2->no_input_auto_change_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->no_input_auto_change_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->no_input_auto_change_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->no_input_auto_change_interval, v9);
  }
  this->no_input_auto_change_interval = no_input_auto_change_interval;
  std::vector<data::ConfigQTEStepCondActionGroup>::vector(&this->value_change_trigger, &a2->value_change_trigger);
};

// Line 654: range 0000000011E046EC-0000000011E04716
void __cdecl data::ConfigQTEStepPowerBarComponent::~ConfigQTEStepPowerBarComponent(
        data::ConfigQTEStepPowerBarComponent *const this)
{
  data::ConfigQTEStepPowerBarComponent::~ConfigQTEStepPowerBarComponent(this);
  operator delete(this, 0x48uLL);
};

// Line 654: range 0000000011E0468E-0000000011E046EB
void __cdecl data::ConfigQTEStepPowerBarComponent::~ConfigQTEStepPowerBarComponent(
        data::ConfigQTEStepPowerBarComponent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarComponent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepBaseComponent = v2;
  std::vector<data::ConfigQTEStepCondActionGroup>::~vector(&this->value_change_trigger);
  data::ConfigQTEStepBaseComponent::~ConfigQTEStepBaseComponent((data::ConfigQTEStepBaseComponent *const)this);
};

// Line 659: range 0000000011A7A318-0000000011A7A328
const char *__cdecl data::ConfigQTEStepPowerBarComponent::getTypeName(
        const data::ConfigQTEStepPowerBarComponent *const this)
{
  return "ConfigQTEStepPowerBarComponent";
};

// Line 660: range 0000000011A7A32A-0000000011A7A4C6
int32_t __cdecl data::ConfigQTEStepPowerBarComponent::getHashNum(
        const data::ConfigQTEStepPowerBarComponent *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPowerBarComponent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigQTEStepPowerBarComponent",
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

// Line 676: range 0000000011E0168C-0000000011E016CD
void __cdecl data::ConfigQTEStepPowerBarComponentFactory::ConfigQTEStepPowerBarComponentFactory(
        data::ConfigQTEStepPowerBarComponentFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigQTEStepPowerBarComponentFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigQTEStepPowerBarComponentFactory = v2;
};
