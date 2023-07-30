// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/config_ability_common_impl.cpp

// Line 23: range 000000000CCBAF00-000000000CCBAF76
bool __cdecl data::FixedBool::fromJson(data::FixedBool *const this, const Json::Value *val)
{
  char v2; // cl

  if ( !Json::Value::isBool((const Json::Value_0 *const)val) )
    return 0;
  v2 = Json::Value::asBool((Json::Value *)val);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->value = v2;
  return 1;
};

// Line 32: range 000000000CCBAF78-000000000CCBB32D
bool __cdecl data::DynamicArgument::fromJson(data::DynamicArgument *const this, const Json::Value *val)
{
  double v2; // xmm0_8
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float v6; // xmm0_4
  int v7; // edx
  char v8; // dl
  bool result; // al
  char v10[192]; // [rsp+10h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DynamicArgument::fromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862724] = -202116109;
  if ( Json::Value::isDouble((const Json::Value_0 *const)val) )
  {
    Json::Value::asDouble((Json::Value *)val);
    v6 = v2;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64);
    *(float *)(v3 + 64) = v6;
    std::any::operator=<float>(&this->value, (float *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  }
  else if ( Json::Value::isInt((const Json::Value_0 *const)val) )
  {
    v7 = Json::Value::asInt((Json::Value *)val);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = v7;
    std::any::operator=<int>(&this->value, (int *)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  }
  else if ( Json::Value::isBool((const Json::Value_0 *const)val) )
  {
    v8 = Json::Value::asBool((Json::Value *)val);
    if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v3 + 48);
    *(_BYTE *)(v3 + 48) = v8;
    std::any::operator=<bool>(&this->value, (bool *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 96), (Json::Value_0 *)val);
    std::any::operator=<std::string>(&this->value, (std::string *)(v3 + 96));
    std::string::~string((void *)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded);
  this->is_json_loaded = 1;
  result = 1;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 45: range 000000000CCBB32E-000000000CCBB3C8
void __cdecl data::DynamicFloat::DynamicFloat(data::DynamicFloat *const this, float fixed_value)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->fixed_value = fixed_value;
  std::any::any(&this->impl);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 48: range 000000000CCBB3CA-000000000CCBBAC5
bool __cdecl data::DynamicFloat::fromJson(data::DynamicFloat *const this, const Json::Value *val)
{
  double v2; // xmm0_8
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  float v6; // xmm0_4
  float v7; // xmm0_4
  common::milog::MiLogStream *v8; // r14
  bool v9; // r14
  bool result; // al
  char v11[368]; // [rsp+10h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 16 11 node_ptr:49 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>"
                        " 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DynamicFloat::fromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( Json::Value::isDouble((const Json::Value_0 *const)val) )
  {
    Json::Value::asDouble((Json::Value *)val);
    v6 = v2;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->fixed_value = v6;
LABEL_27:
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded);
    this->is_json_loaded = 1;
    v9 = 1;
    goto LABEL_30;
  }
  if ( Json::Value::isInt((const Json::Value_0 *const)val) )
  {
    v7 = (float)(int)Json::Value::asInt((Json::Value *)val);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->fixed_value = v7;
    goto LABEL_27;
  }
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 128), (Json::Value_0 *)val);
  if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 64);
  BaseDFNode::createNodeFromStr((const std::string *)(v3 + 64));
  std::shared_ptr<BaseDFNode>::operator=(
    (std::shared_ptr<BaseDFNode> *const)(v3 + 32),
    (std::shared_ptr<BaseDFNode> *)(v3 + 64));
  std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v3 + 64));
  *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( !std::operator==<BaseDFNode>((const std::shared_ptr<BaseDFNode> *)(v3 + 32), 0LL) )
  {
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 96);
    std::make_any<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&>(
      (std::shared_ptr<BaseDFNode> *)(v3 + 96),
      (std::shared_ptr<BaseDFNode> *)(v3 + 32));
    std::any::operator=(&this->impl, (std::any *)(v3 + 96));
    std::any::~any((std::any *const)(v3 + 96));
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    goto LABEL_27;
  }
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/config_ability_common_impl.cpp",
    "fromJson",
    63);
  v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[35])"parse dynamic flaot failed, float:");
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 256), (Json::Value_0 *)val);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 256));
  std::string::~string((void *)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v9 = 0;
LABEL_30:
  std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v3 + 32));
  result = v9;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000CCBBAC6-000000000CCBC02F
int32_t __cdecl data::DynamicFloat::getHashValue(const data::DynamicFloat *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::type_info *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v9[272]; // [rsp+20h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 12 hash_code:91 64 8 9 <unknown> 96 16 11 node_ptr:75 128 16 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::DynamicFloat::getHashValue;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862726] = -202116109;
  std::shared_ptr<BaseDFNode>::shared_ptr((std::shared_ptr<BaseDFNode> *const)(v1 + 96), 0LL);
  v4 = std::any::type(&this->impl);
  if ( std::type_info::operator==((const std::type_info *const)&`typeinfo for'std::shared_ptr<BaseDFNode>, v4) )
  {
    if ( *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 128);
    std::any_cast<std::shared_ptr<BaseDFNode>>((const std::any *)(v1 + 128));
    std::shared_ptr<BaseDFNode>::operator=(
      (std::shared_ptr<BaseDFNode> *const)(v1 + 96),
      (std::shared_ptr<BaseDFNode> *)(v1 + 128));
    std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v1 + 128));
    *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -1800;
  }
  if ( std::operator!=<BaseDFNode>(0LL, (const std::shared_ptr<BaseDFNode> *)(v1 + 96)) )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 32LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 32LL);
    v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
  }
  else
  {
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 48);
    *(_DWORD *)(v1 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    common::tools::HashUtils::appendHash(this->fixed_value, (int32_t *)(v1 + 48));
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v1 + 48);
    v7 = *(_DWORD *)(v1 + 48);
  }
  std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v1 + 96));
  result = v7;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 98: range 000000000CCBC030-000000000CCBC104
void __cdecl data::DynamicInt::DynamicInt(data::DynamicInt *const this, int32_t fixed_value_)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_dynamic = 0;
  std::string::basic_string(&this->dynamic_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_value);
  }
  this->fixed_value = fixed_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_json_loaded);
  }
  this->is_json_loaded = 0;
};

// Line 101: range 000000000CCBC106-000000000CCBC692
bool __cdecl data::DynamicInt::fromJson(data::DynamicInt *const this, const Json::Value *val)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r14d
  bool result; // al
  bool v11; // [rsp+Fh] [rbp-121h]
  char v12[272]; // [rsp+20h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 32 11 val_str:109 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DynamicInt::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( Json::Value::isInt((const Json::Value_0 *const)val) )
  {
    v5 = Json::Value::asInt((Json::Value *)val);
    if ( *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->fixed_value);
    }
    this->fixed_value = v5;
LABEL_26:
    if ( *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_json_loaded);
    }
    this->is_json_loaded = 1;
    v11 = 1;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_value);
  }
  this->fixed_value = 0;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 32), (Json::Value_0 *)val);
  if ( (unsigned __int8)std::string::empty(v2 + 32) || std::string::find(v2 + 32, "%", 0LL) )
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
      4u,
      "./src/config_ability_common_impl.cpp",
      "fromJson",
      112);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           v7,
           (const char (*)[42])"DynamicFloat key needs to be like '%key':");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v11 = 0;
    v9 = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(this);
    this->is_dynamic = 1;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    std::string::substr(v2 + 160, v2 + 32, 1LL, -1LL);
    std::string::operator=(&this->dynamic_key, v2 + 160);
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v9 = 1;
  }
  std::string::~string((void *)(v2 + 32));
  *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
  if ( v9 == 1 )
    goto LABEL_26;
LABEL_29:
  result = v11;
  if ( v12 == (char *)v2 )
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

// Line 122: range 000000000CCBC694-000000000CCBC765
void __cdecl data::DynamicString::DynamicString(data::DynamicString *const this, const std::string *fixed_value_)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_dynamic = 0;
  std::string::basic_string(&this->dynamic_key);
  std::string::basic_string(&this->fixed_value, fixed_value_);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 125: range 000000000CCBC766-000000000CCBCAB4
bool __cdecl data::DynamicString::fromJson(data::DynamicString *const this, const Json::Value *val)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  char v6[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 11 val_str:126 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DynamicString::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 32), (Json::Value_0 *)val);
  if ( std::string::find(v2 + 32, "%", 0LL) )
  {
    std::string::operator=(&this->fixed_value, v2 + 32);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(this);
    this->is_dynamic = 1;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    std::string::substr(v2 + 96, v2 + 32, 1LL, -1LL);
    std::string::operator=(&this->dynamic_key, v2 + 96);
    std::string::~string((void *)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::string::operator=(&this->fixed_value, byte_1A0D8BA0);
  }
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded);
  this->is_json_loaded = 1;
  std::string::~string((void *)(v2 + 32));
  result = 1;
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return result;
};

// Line 142: range 000000000CCBCAB6-000000000CCBCAC8
bool __cdecl data::BaseActionContainer::fromJson(data::BaseActionContainer *const this, const Json::Value *val)
{
  return 1;
};

// Line 147: range 000000000CCBCD62-000000000CCBCF2C
data::ConfigAbilityActionArrayArray *__cdecl data::ConfigAbilityAction::getAllSubActions(
        data::ConfigAbilityActionArrayArray *retstr,
        data::ConfigAbilityAction *const this)
{
  std::function<void(std::any&)> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(data::ConfigAbilityAction *const, std::function<void(std::any&)> *); // r14
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::function<void(std::any&)> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::function<void(std::any&)> *)v3;
  }
  v2->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v2->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigAbilityAction::getAllSubActions;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_BaseActionContainer + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_BaseActionContainer + 3);
  v6 = *(void (__fastcall **)(data::ConfigAbilityAction *const, std::function<void(std::any&)> *))v5;
  std::function<void ()(std::any &)>::function<data::ConfigAbilityAction::getAllSubActions(void)::{lambda(std::any &)#1},void,void>(
    v2 + 1,
    (data::ConfigAbilityAction::getAllSubActions::<lambda(std::any&)>)retstr);
  v6(this, v2 + 1);
  std::function<void ()(std::any &)>::~function(v2 + 1);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 149: range 000000000CCBCACA-000000000CCBCD60
void __cdecl data::ConfigAbilityAction::getAllSubActions(void)::{lambda(std::any &)#1}::operator()(
        const data::ConfigAbilityAction::getAllSubActions::<lambda(std::any&)> *const __closure,
        std::any *member)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::type_info *v5; // rax
  const std::type_info *v6; // rax
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *sub_actions; // r14
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *M_current; // r15
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *v9; // rax
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *__last; // [rsp+8h] [rbp-B8h]
  data::ConfigAbilityActionArrayArray *actions_vec; // [rsp+20h] [rbp-A0h]
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *action_vec; // [rsp+28h] [rbp-98h]
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilityAction::getAllSubActions(void)::{lambda(std::any &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = std::any::type(member);
  if ( std::type_info::operator==(
         v5,
         (const std::type_info *)&`typeinfo for'std::vector<std::shared_ptr<data::ConfigAbilityAction>>) )
  {
    action_vec = std::any_cast<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &>(member);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
      __closure->__sub_actions,
      action_vec);
  }
  else
  {
    v6 = std::any::type(member);
    if ( std::type_info::operator==(
           v6,
           (const std::type_info *)&`typeinfo for'std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>) )
    {
      actions_vec = std::any_cast<std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> &>(member);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      sub_actions = __closure->__sub_actions;
      __last = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(actions_vec)._M_current;
      M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::begin(actions_vec)._M_current;
      v9 = __closure->__sub_actions;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::iterator *)(v2 + 32) = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(v9);
      __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> const*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*>(
        (__gnu_cxx::__normal_iterator<const std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> > *const)(v2 + 64),
        (const __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> > *)(v2 + 32));
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 64);
      std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::insert<__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>,void>(
        sub_actions,
        *(std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::const_iterator *)(v2 + 64),
        (__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> >)M_current,
        (__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> >)__last);
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 166: range 000000000CCBD4B8-000000000CCBD682
data::ConfigAbilityActionArrayArray *__cdecl data::ConfigAbilityMixin::getAllSubActions(
        data::ConfigAbilityActionArrayArray *retstr,
        data::ConfigAbilityMixin *const this)
{
  std::function<void(std::any&)> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(data::ConfigAbilityMixin *const, std::function<void(std::any&)> *); // r14
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::function<void(std::any&)> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::function<void(std::any&)> *)v3;
  }
  v2->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v2->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigAbilityMixin::getAllSubActions;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_BaseActionContainer + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_BaseActionContainer + 3);
  v6 = *(void (__fastcall **)(data::ConfigAbilityMixin *const, std::function<void(std::any&)> *))v5;
  std::function<void ()(std::any &)>::function<data::ConfigAbilityMixin::getAllSubActions(void)::{lambda(std::any &)#1},void,void>(
    v2 + 1,
    (data::ConfigAbilityMixin::getAllSubActions::<lambda(std::any&)>)retstr);
  v6(this, v2 + 1);
  std::function<void ()(std::any &)>::~function(v2 + 1);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 168: range 000000000CCBCF2E-000000000CCBD4B6
void __cdecl data::ConfigAbilityMixin::getAllSubActions(void)::{lambda(std::any &)#1}::operator()(
        const data::ConfigAbilityMixin::getAllSubActions::<lambda(std::any&)> *const __closure,
        std::any *member)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::type_info *v5; // rax
  const std::type_info *v6; // rax
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *sub_actions; // r14
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *M_current; // r15
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *v9; // rax
  const std::type_info *v10; // rax
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *v11; // r14
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *v12; // rdx
  unsigned __int64 v13; // rax
  const std::type_info *v14; // rax
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *__last; // [rsp+8h] [rbp-178h]
  std::vector<data::ConfigAbilityStateToActions> *__for_range; // [rsp+28h] [rbp-158h]
  data::ConfigAbilityStateToActions *mixin; // [rsp+30h] [rbp-150h]
  std::shared_ptr<data::ConfigAbilityAction> *config_action_ptr; // [rsp+38h] [rbp-148h]
  data::ConfigAbilityActionArrayArray *actions_vec; // [rsp+40h] [rbp-140h]
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *action_vec; // [rsp+48h] [rbp-138h]
  char v21[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 15 __for_begin:188 160 8 13 __for_end"
                        ":188 192 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilityMixin::getAllSubActions(void)::{lambda(std::any &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  v5 = std::any::type(member);
  if ( std::type_info::operator==(
         v5,
         (const std::type_info *)&`typeinfo for'std::vector<std::shared_ptr<data::ConfigAbilityAction>>) )
  {
    action_vec = std::any_cast<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &>(member);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
      __closure->__sub_actions,
      action_vec);
  }
  else
  {
    v6 = std::any::type(member);
    if ( std::type_info::operator==(
           v6,
           (const std::type_info *)&`typeinfo for'std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>) )
    {
      actions_vec = std::any_cast<std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> &>(member);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      sub_actions = __closure->__sub_actions;
      __last = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(actions_vec)._M_current;
      M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::begin(actions_vec)._M_current;
      v9 = __closure->__sub_actions;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::iterator *)(v2 + 64) = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(v9);
      __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> const*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*>(
        (__gnu_cxx::__normal_iterator<const std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> > *const)(v2 + 96),
        (const __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> > *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 96);
      std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::insert<__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>,void>(
        sub_actions,
        *(std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::const_iterator *)(v2 + 96),
        (__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> >)M_current,
        (__gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>>*,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> >)__last);
    }
    else
    {
      v10 = std::any::type(member);
      if ( std::type_info::operator==(
             v10,
             (const std::type_info *)&`typeinfo for'std::shared_ptr<data::ConfigAbilityAction>) )
      {
        config_action_ptr = std::any_cast<std::shared_ptr<data::ConfigAbilityAction> &>(member);
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v11 = __closure->__sub_actions;
        std::allocator<std::shared_ptr<data::ConfigAbilityAction>>::allocator((std::allocator<std::shared_ptr<data::ConfigAbilityAction> > *const)(v2 + 48));
        std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(
          (std::vector<std::shared_ptr<data::ConfigAbilityAction>> *const)(v2 + 192),
          1uLL,
          config_action_ptr,
          (const std::vector<std::shared_ptr<data::ConfigAbilityAction>>::allocator_type *)(v2 + 48));
        std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::emplace_back<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>(
          v11,
          (std::vector<std::shared_ptr<data::ConfigAbilityAction>> *)(v2 + 192),
          v12);
        std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector((std::vector<std::shared_ptr<data::ConfigAbilityAction>> *const)(v2 + 192));
        v13 = ((v2 + 192) >> 3) + 2147450880;
        *(_WORD *)v13 = -1800;
        *(_BYTE *)(v13 + 2) = -8;
        std::allocator<std::shared_ptr<data::ConfigAbilityAction>>::~allocator((std::allocator<std::shared_ptr<data::ConfigAbilityAction> > *const)(v2 + 48));
      }
      else
      {
        v14 = std::any::type(member);
        if ( std::type_info::operator==(
               v14,
               (const std::type_info *)&`typeinfo for'std::vector<data::ConfigAbilityStateToActions>) )
        {
          __for_range = std::any_cast<std::vector<data::ConfigAbilityStateToActions> &>(member);
          if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<data::ConfigAbilityStateToActions>::iterator *)(v2 + 128) = std::vector<data::ConfigAbilityStateToActions>::begin(__for_range);
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<data::ConfigAbilityStateToActions>::iterator *)(v2 + 160) = std::vector<data::ConfigAbilityStateToActions>::end(__for_range);
          while ( __gnu_cxx::operator!=<data::ConfigAbilityStateToActions *,std::vector<data::ConfigAbilityStateToActions>>(
                    (const __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions*,std::vector<data::ConfigAbilityStateToActions> > *)(v2 + 128),
                    (const __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions*,std::vector<data::ConfigAbilityStateToActions> > *)(v2 + 160)) )
          {
            mixin = __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions *,std::vector<data::ConfigAbilityStateToActions>>::operator*((const __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions*,std::vector<data::ConfigAbilityStateToActions> > *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::push_back(
              __closure->__sub_actions,
              &mixin->actions);
            __gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions *,std::vector<data::ConfigAbilityStateToActions>>::operator++((__gnu_cxx::__normal_iterator<data::ConfigAbilityStateToActions*,std::vector<data::ConfigAbilityStateToActions> > *const)(v2 + 128));
          }
        }
      }
    }
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
