// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigClimate.h

// Line 48: range 000000000F94423C-000000000F94426A
void __cdecl data::ConfigClimateArea::~ConfigClimateArea(data::ConfigClimateArea *const this)
{
  std::vector<unsigned int>::~vector(&this->trans_points);
  std::vector<data::Point2D>::~vector(&this->points);
};

// Line 141: range 000000001427E726-000000001427E7B2
void __cdecl data::ConfigClimateInfoBase::ConfigClimateInfoBase(data::ConfigClimateInfoBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigClimateInfoBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigClimateInfoBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigClimateInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigClimateInfoBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 141: range 000000001427EC7C-000000001427ED52
void __cdecl data::ConfigClimateInfoBase::ConfigClimateInfoBase(
        data::ConfigClimateInfoBase *const this,
        const data::ConfigClimateInfoBase *a2)
{
  std::enable_shared_from_this<data::ConfigClimateInfoBase> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigClimateInfoBase>;
  std::enable_shared_from_this<data::ConfigClimateInfoBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigClimateInfoBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigClimateInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigClimateInfoBase = v3;
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

// Line 148: range 000000001427EFEE-000000001427F018
void __cdecl data::ConfigClimateInfoBase::~ConfigClimateInfoBase(data::ConfigClimateInfoBase *const this)
{
  data::ConfigClimateInfoBase::~ConfigClimateInfoBase(this);
  operator delete(this, 0x20uLL);
};

// Line 148: range 000000001427EF9C-000000001427EFED
void __cdecl data::ConfigClimateInfoBase::~ConfigClimateInfoBase(data::ConfigClimateInfoBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigClimateInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigClimateInfoBase = v2;
  std::enable_shared_from_this<data::ConfigClimateInfoBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigClimateInfoBase>);
};

// Line 153: range 0000000013BC97C8-0000000013BC97D8
const char *__cdecl data::ConfigClimateInfoBase::getTypeName(const data::ConfigClimateInfoBase *const this)
{
  return "ConfigClimateInfoBase";
};

// Line 154: range 0000000013BC97DA-0000000013BC9976
int32_t __cdecl data::ConfigClimateInfoBase::getHashNum(const data::ConfigClimateInfoBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigClimateInfoBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigClimateInfoBase",
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

// Line 173: range 000000001427F01A-000000001427F0AB
void __cdecl data::ConfigClimateTemperatureOptions::ConfigClimateTemperatureOptions(
        data::ConfigClimateTemperatureOptions *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->speed = 0.0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 196: range 000000001427F0AC-000000001427F14F
void __cdecl data::ConfigClimateInfo::ConfigClimateInfo(data::ConfigClimateInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigClimateInfoBase::ConfigClimateInfoBase((data::ConfigClimateInfoBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigClimateInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigClimateInfoBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->climate_type = Normal;
  data::ConfigClimateTemperatureOptions::ConfigClimateTemperatureOptions(&this->temperature_options);
};

// Line 196: range 000000001427F524-000000001427F65B
void __cdecl data::ConfigClimateInfo::ConfigClimateInfo(
        data::ConfigClimateInfo *const this,
        const data::ConfigClimateInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::JsonClimateType climate_type; // ecx
  char v5; // dl

  data::ConfigClimateInfoBase::ConfigClimateInfoBase(
    (data::ConfigClimateInfoBase *const)this,
    (const data::ConfigClimateInfoBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigClimateInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigClimateInfoBase = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->climate_type);
  }
  climate_type = a2->climate_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->climate_type, v3);
  this->climate_type = climate_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->temperature_options >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->temperature_options, v3);
  if ( *(_BYTE *)(((unsigned __int64)&a2->temperature_options >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->temperature_options);
  this->temperature_options = a2->temperature_options;
};

// Line 204: range 00000000142A1592-00000000142A15DF
void __cdecl data::ConfigClimateInfo::~ConfigClimateInfo(data::ConfigClimateInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigClimateInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigClimateInfoBase = v2;
  data::ConfigClimateInfoBase::~ConfigClimateInfoBase((data::ConfigClimateInfoBase *const)this);
};

// Line 204: range 00000000142A15E0-00000000142A160A
void __cdecl data::ConfigClimateInfo::~ConfigClimateInfo(data::ConfigClimateInfo *const this)
{
  data::ConfigClimateInfo::~ConfigClimateInfo(this);
  operator delete(this, 0x28uLL);
};

// Line 209: range 0000000013BC9978-0000000013BC9988
const char *__cdecl data::ConfigClimateInfo::getTypeName(const data::ConfigClimateInfo *const this)
{
  return "ConfigClimateInfo";
};

// Line 210: range 0000000013BC998A-0000000013BC9B26
int32_t __cdecl data::ConfigClimateInfo::getHashNum(const data::ConfigClimateInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigClimateInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigClimateInfo",
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

// Line 226: range 000000001427F8A4-000000001427F8E5
void __cdecl data::ConfigClimateInfoFactory::ConfigClimateInfoFactory(data::ConfigClimateInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigClimateInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigClimateInfoFactory = v2;
};

// Line 265: range 0000000013C133D8-0000000013C13583
void __cdecl data::ConfigClimateArea::ConfigClimateArea(data::ConfigClimateArea *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->area_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_type, v2);
  }
  this->climate_type = Normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, v2);
  }
  this->bottom = 0.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, v3);
  }
  this->top = 0.0;
  std::vector<data::Point2D>::vector(&this->points);
  if ( *(char *)(((unsigned __int64)&this->is_force_clear_different_climate_meter >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_force_clear_different_climate_meter,
      v3,
      &this->is_force_clear_different_climate_meter);
  this->is_force_clear_different_climate_meter = 0;
  std::vector<unsigned int>::vector(&this->trans_points);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 265: range 000000000F9AAFB2-000000000F9AB2D6
void __cdecl data::ConfigClimateArea::ConfigClimateArea(
        data::ConfigClimateArea *const this,
        data::ConfigClimateArea *a2)
{
  uint32_t area_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::JsonClimateType climate_type; // ecx
  char v6; // dl
  float bottom; // xmm0_4
  float top; // xmm0_4
  data::Point2DList *p_points; // rsi
  bool is_force_clear_different_climate_meter; // cl
  char v11; // al
  data::UInt32List *p_trans_points; // rsi
  bool is_json_loaded; // cl
  char v14; // al
  data::ConfigClimateArea *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  area_id = a2->area_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->area_id = area_id;
  v4 = (((_BYTE)v15 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->climate_type);
  }
  climate_type = v15->climate_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->climate_type, v4);
  this->climate_type = climate_type;
  if ( *(_BYTE *)(((unsigned __int64)&v15->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->bottom);
  }
  bottom = v15->bottom;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, v4);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v15->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->top);
  }
  top = v15->top;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->top = top;
  p_points = &v15->points;
  std::vector<data::Point2D>::vector(&this->points, &v15->points);
  if ( *(char *)(((unsigned __int64)&v15->is_force_clear_different_climate_meter >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v15->is_force_clear_different_climate_meter,
      p_points,
      &v15->is_force_clear_different_climate_meter);
  is_force_clear_different_climate_meter = v15->is_force_clear_different_climate_meter;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_force_clear_different_climate_meter >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_points) = v11 != 0;
    __asan_report_store1(
      &this->is_force_clear_different_climate_meter,
      p_points,
      &this->is_force_clear_different_climate_meter);
  }
  this->is_force_clear_different_climate_meter = is_force_clear_different_climate_meter;
  p_trans_points = &v15->trans_points;
  std::vector<unsigned int>::vector(&this->trans_points, &v15->trans_points);
  if ( *(char *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_json_loaded, p_trans_points, &v15->is_json_loaded);
  is_json_loaded = v15->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_trans_points) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, p_trans_points, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};
