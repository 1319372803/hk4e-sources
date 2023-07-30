// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigTrigger.h

// Line 78: range 000000000ED5F6F2-000000000ED5F7DE
void __cdecl data::ConfigLocalTriggerMeta::ConfigLocalTriggerMeta(data::ConfigLocalTriggerMeta *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigLocalTriggerMeta>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLocalTriggerMeta>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMeta + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalTriggerMeta = v2;
  data::Vector::Vector(&this->vector_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_param, v1);
  }
  this->float_param = 0.0;
  std::string::basic_string(&this->string_param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 78: range 00000000126FFE20-0000000012700014
void __cdecl data::ConfigLocalTriggerMeta::ConfigLocalTriggerMeta(
        data::ConfigLocalTriggerMeta *const this,
        const data::ConfigLocalTriggerMeta *a2)
{
  std::enable_shared_from_this<data::ConfigLocalTriggerMeta> *v2; // rsi
  int (**v3)(...); // rdx
  __int64 v4; // rdx
  float float_param; // xmm0_4
  std::string *p_string_param; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigLocalTriggerMeta>;
  std::enable_shared_from_this<data::ConfigLocalTriggerMeta>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigLocalTriggerMeta>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMeta + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigLocalTriggerMeta = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->vector_param >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->vector_param >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->vector_param);
  v4 = *(_QWORD *)&a2->vector_param.z;
  *(_QWORD *)&this->vector_param.x = *(_QWORD *)&a2->vector_param.x;
  *(_QWORD *)&this->vector_param.z = v4;
  if ( *(_BYTE *)(((unsigned __int64)&a2->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->float_param);
  }
  float_param = a2->float_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_param, v2);
  }
  this->float_param = float_param;
  p_string_param = &a2->string_param;
  std::string::basic_string(&this->string_param, &a2->string_param);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_string_param, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_string_param) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_string_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 88: range 00000000127004C0-00000000127004EA
void __cdecl data::ConfigLocalTriggerMeta::~ConfigLocalTriggerMeta(data::ConfigLocalTriggerMeta *const this)
{
  data::ConfigLocalTriggerMeta::~ConfigLocalTriggerMeta(this);
  operator delete(this, 0x58uLL);
};

// Line 88: range 000000001270045E-00000000127004BF
void __cdecl data::ConfigLocalTriggerMeta::~ConfigLocalTriggerMeta(data::ConfigLocalTriggerMeta *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMeta + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalTriggerMeta = v2;
  std::string::~string(&this->string_param);
  std::enable_shared_from_this<data::ConfigLocalTriggerMeta>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLocalTriggerMeta>);
};

// Line 93: range 0000000012145D92-0000000012145DA2
const char *__cdecl data::ConfigLocalTriggerMeta::getTypeName(const data::ConfigLocalTriggerMeta *const this)
{
  return "ConfigLocalTriggerMeta";
};

// Line 94: range 0000000012145DA4-0000000012145F40
int32_t __cdecl data::ConfigLocalTriggerMeta::getHashNum(const data::ConfigLocalTriggerMeta *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLocalTriggerMeta::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalTriggerMeta",
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

// Line 129: range 00000000127004EC-000000001270057F
void __cdecl data::ConfigLocalTriggerMetaTeleportV2::ConfigLocalTriggerMetaTeleportV2(
        data::ConfigLocalTriggerMetaTeleportV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLocalTriggerMeta::ConfigLocalTriggerMeta((data::ConfigLocalTriggerMeta *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMetaTeleportV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalTriggerMeta = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->curtain_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curtain_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->curtain_type, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->curtain_type = None_71;
};

// Line 129: range 000000001270093A-0000000012700A17
void __cdecl data::ConfigLocalTriggerMetaTeleportV2::ConfigLocalTriggerMetaTeleportV2(
        data::ConfigLocalTriggerMetaTeleportV2 *const this,
        const data::ConfigLocalTriggerMetaTeleportV2 *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::CurtainType curtain_type; // ecx
  char v5; // dl

  data::ConfigLocalTriggerMeta::ConfigLocalTriggerMeta(
    (data::ConfigLocalTriggerMeta *const)this,
    (const data::ConfigLocalTriggerMeta *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMetaTeleportV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigLocalTriggerMeta = v2;
  v3 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->curtain_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->curtain_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->curtain_type);
  }
  curtain_type = a2->curtain_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->curtain_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->curtain_type, v3);
  }
  this->curtain_type = curtain_type;
};

// Line 129: range 000000000E819210-000000000E81A3D3
void __cdecl data::ConfigTrigger::ConfigTrigger(data::ConfigTrigger *const this, const data::ConfigTrigger *a2)
{
  data::EntityTriggerType trigger_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::TriggerFlag trigger_flag; // ecx
  char v6; // dl
  data::ConcernType concern_type; // ecx
  char v8; // al
  std::string *p_shape; // rsi
  bool ignore_scale; // cl
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  float height; // xmm0_4
  __int64 v15; // rdx
  __int64 v16; // rdx
  float from_height; // xmm0_4
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool check_infinite; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool trigger_infinite; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool life_infinite; // cl
  char v31; // dl
  __int64 v32; // rdx
  float start_check_time; // xmm0_4
  float check_interval; // xmm0_4
  __int64 v35; // rsi
  int32_t check_count; // ecx
  char v37; // al
  float trigger_interval; // xmm0_4
  __int64 v39; // rsi
  int32_t trigger_count; // ecx
  char v41; // al
  float life_time; // xmm0_4
  __int64 v43; // rsi
  bool overwrite_camp_type; // cl
  char v45; // al
  __int64 v46; // rsi
  data::TargetType camp_type; // ecx
  char v48; // dl
  bool check_point; // cl
  char v50; // al
  __int64 v51; // rsi
  __int64 v52; // rdx
  bool use_surface_height; // cl
  char v54; // dl
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdx
  bool use_collider; // cl
  char v59; // dl
  __int64 v60; // rdx
  std::string *p_from_collider_name; // rsi
  bool check_ghost; // cl
  char v63; // al
  __int64 v64; // rsi
  __int64 v65; // rdx
  bool collider_check_on_init; // cl
  char v67; // dl
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdx
  bool check_on_reconnect; // cl
  char v72; // dl
  __int64 v73; // rdx
  data::StringArray *p_collider_black_list; // rsi
  bool use_level_override; // cl
  char v76; // al
  data::ConfigBaseShapePtr *p_raw_shape; // rsi
  bool use_local_trigger_logic; // cl
  char v79; // al
  data::ConfigLocalTriggerMetaPtr *p_local_trigger_meta; // rsi
  bool is_json_loaded; // cl
  char v82; // al
  const data::ConfigTrigger *v83; // [rsp+0h] [rbp-20h]

  v83 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  trigger_type = a2->trigger_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->trigger_type = trigger_type;
  v4 = (((_BYTE)v83 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->trigger_flag);
  }
  trigger_flag = v83->trigger_flag;
  v6 = *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->trigger_flag, v4);
  }
  this->trigger_flag = trigger_flag;
  if ( *(_BYTE *)(((unsigned __int64)&v83->concern_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->concern_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->concern_type);
  }
  concern_type = v83->concern_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->concern_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->concern_type, v4);
  }
  this->concern_type = concern_type;
  p_shape = &v83->shape;
  std::string::basic_string(&this->shape, &v83->shape);
  if ( *(char *)(((unsigned __int64)&v83->ignore_scale >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->ignore_scale, p_shape, &v83->ignore_scale);
  ignore_scale = v83->ignore_scale;
  v11 = *(_BYTE *)(((unsigned __int64)&this->ignore_scale >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_shape) = v11 != 0;
    __asan_report_store1(&this->ignore_scale, p_shape, &this->ignore_scale);
  }
  this->ignore_scale = ignore_scale;
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->offset, 16LL);
  }
  if ( (((unsigned __int8)v83 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v83->offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v83->offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v83->offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v83 + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(&v83->offset.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v83->offset, 16LL);
  }
  v12 = *(_QWORD *)&v83->offset.z;
  *(_QWORD *)&this->offset.x = *(_QWORD *)&v83->offset.x;
  *(_QWORD *)&this->offset.z = v12;
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->eular_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->eular_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->eular_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->eular_offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->eular_offset, 16LL);
  }
  if ( (((unsigned __int8)v83 + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&v83->eular_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v83->eular_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v83->eular_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v83 + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&v83->eular_offset.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v83->eular_offset, 16LL);
  }
  v13 = *(_QWORD *)&v83->eular_offset.z;
  *(_QWORD *)&this->eular_offset.x = *(_QWORD *)&v83->eular_offset.x;
  *(_QWORD *)&this->eular_offset.z = v13;
  if ( *(_BYTE *)(((unsigned __int64)&v83->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->height);
  }
  height = v83->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->height = height;
  std::string::basic_string(&this->from_shape, &v83->from_shape);
  if ( *(_WORD *)(((unsigned __int64)&this->from_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v83->from_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v83->from_offset);
  v15 = *(_QWORD *)&v83->from_offset.z;
  *(_QWORD *)&this->from_offset.x = *(_QWORD *)&v83->from_offset.x;
  *(_QWORD *)&this->from_offset.z = v15;
  if ( *(_WORD *)(((unsigned __int64)&this->from_eular_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v83->from_eular_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v83->from_eular_offset);
  v16 = *(_QWORD *)&v83->from_eular_offset.z;
  *(_QWORD *)&this->from_eular_offset.x = *(_QWORD *)&v83->from_eular_offset.x;
  *(_QWORD *)&this->from_eular_offset.z = v16;
  if ( *(_BYTE *)(((unsigned __int64)&v83->from_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->from_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->from_height);
  }
  from_height = v83->from_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_height, &v83->from_shape);
  }
  this->from_height = from_height;
  v18 = ((_BYTE)v83 - 100) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v83->check_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v83->check_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v83->check_infinite, v18, v19);
  check_infinite = v83->check_infinite;
  v21 = *(_BYTE *)(((unsigned __int64)&this->check_infinite >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->check_infinite, v18, v22);
  this->check_infinite = check_infinite;
  v23 = ((_BYTE)v83 - 99) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v83->trigger_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v83->trigger_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v83->trigger_infinite, v23, v24);
  trigger_infinite = v83->trigger_infinite;
  v26 = *(_BYTE *)(((unsigned __int64)&this->trigger_infinite >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 99) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->trigger_infinite, v23, v27);
  this->trigger_infinite = trigger_infinite;
  v28 = ((_BYTE)v83 - 98) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v83->life_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v83->life_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v83->life_infinite, v28, v29);
  life_infinite = v83->life_infinite;
  v31 = *(_BYTE *)(((unsigned __int64)&this->life_infinite >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this - 98) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->life_infinite, v28, v32);
  this->life_infinite = life_infinite;
  if ( *(_BYTE *)(((unsigned __int64)&v83->start_check_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->start_check_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->start_check_time);
  }
  start_check_time = v83->start_check_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_check_time, v28);
  }
  this->start_check_time = start_check_time;
  if ( *(_BYTE *)(((unsigned __int64)&v83->check_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->check_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->check_interval);
  }
  check_interval = v83->check_interval;
  v35 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_interval, v35);
  }
  this->check_interval = check_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v83->check_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->check_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->check_count);
  }
  check_count = v83->check_count;
  v37 = *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->check_count, v35);
  }
  this->check_count = check_count;
  if ( *(_BYTE *)(((unsigned __int64)&v83->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->trigger_interval);
  }
  trigger_interval = v83->trigger_interval;
  v39 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_interval, v39);
  }
  this->trigger_interval = trigger_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v83->trigger_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v83->trigger_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v83->trigger_count);
  }
  trigger_count = v83->trigger_count;
  v41 = *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(v39) = v41 != 0;
    __asan_report_store4(&this->trigger_count, v39);
  }
  this->trigger_count = trigger_count;
  if ( *(_BYTE *)(((unsigned __int64)&v83->life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->life_time);
  }
  life_time = v83->life_time;
  v43 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_time, v43);
  }
  this->life_time = life_time;
  if ( *(char *)(((unsigned __int64)&v83->overwrite_camp_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->overwrite_camp_type, v43, &v83->overwrite_camp_type);
  overwrite_camp_type = v83->overwrite_camp_type;
  v45 = *(_BYTE *)(((unsigned __int64)&this->overwrite_camp_type >> 3) + 0x7FFF8000);
  if ( v45 < 0 )
  {
    LOBYTE(v43) = v45 != 0;
    __asan_report_store1(&this->overwrite_camp_type, v43, &this->overwrite_camp_type);
  }
  this->overwrite_camp_type = overwrite_camp_type;
  v46 = (((_BYTE)v83 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v83->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v83 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v83->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v83->camp_type);
  }
  camp_type = v83->camp_type;
  v48 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  LOBYTE(v46) = v48 != 0;
  if ( v48 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v48 )
    __asan_report_store4(&this->camp_type, v46);
  this->camp_type = camp_type;
  if ( *(char *)(((unsigned __int64)&v83->check_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->check_point, v46, &v83->check_point);
  check_point = v83->check_point;
  v50 = *(_BYTE *)(((unsigned __int64)&this->check_point >> 3) + 0x7FFF8000);
  if ( v50 < 0 )
  {
    LOBYTE(v46) = v50 != 0;
    __asan_report_store1(&this->check_point, v46, &this->check_point);
  }
  this->check_point = check_point;
  v51 = ((_BYTE)v83 - 63) & 7;
  v52 = (*(_BYTE *)(((unsigned __int64)&v83->use_surface_height >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v51 >= *(_BYTE *)(((unsigned __int64)&v83->use_surface_height >> 3) + 0x7FFF8000));
  if ( (_BYTE)v52 )
    __asan_report_load1(&v83->use_surface_height, v51, v52);
  use_surface_height = v83->use_surface_height;
  v54 = *(_BYTE *)(((unsigned __int64)&this->use_surface_height >> 3) + 0x7FFF8000);
  LOBYTE(v51) = v54 != 0;
  v55 = (v54 != 0) & (unsigned __int8)((((unsigned __int8)this - 63) & 7) >= v54);
  if ( (_BYTE)v55 )
    __asan_report_store1(&this->use_surface_height, v51, v55);
  this->use_surface_height = use_surface_height;
  v56 = ((_BYTE)v83 - 62) & 7;
  v57 = (*(_BYTE *)(((unsigned __int64)&v83->use_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v56 >= *(_BYTE *)(((unsigned __int64)&v83->use_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v57 )
    __asan_report_load1(&v83->use_collider, v56, v57);
  use_collider = v83->use_collider;
  v59 = *(_BYTE *)(((unsigned __int64)&this->use_collider >> 3) + 0x7FFF8000);
  LOBYTE(v56) = v59 != 0;
  v60 = (v59 != 0) & (unsigned __int8)((((unsigned __int8)this - 62) & 7) >= v59);
  if ( (_BYTE)v60 )
    __asan_report_store1(&this->use_collider, v56, v60);
  this->use_collider = use_collider;
  std::string::basic_string(&this->collider_name, &v83->collider_name);
  p_from_collider_name = &v83->from_collider_name;
  std::string::basic_string(&this->from_collider_name, &v83->from_collider_name);
  if ( *(char *)(((unsigned __int64)&v83->check_ghost >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->check_ghost, p_from_collider_name, &v83->check_ghost);
  check_ghost = v83->check_ghost;
  v63 = *(_BYTE *)(((unsigned __int64)&this->check_ghost >> 3) + 0x7FFF8000);
  if ( v63 < 0 )
  {
    LOBYTE(p_from_collider_name) = v63 != 0;
    __asan_report_store1(&this->check_ghost, p_from_collider_name, &this->check_ghost);
  }
  this->check_ghost = check_ghost;
  v64 = ((_BYTE)v83 + 9) & 7;
  v65 = (*(_BYTE *)(((unsigned __int64)&v83->collider_check_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v64 >= *(_BYTE *)(((unsigned __int64)&v83->collider_check_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v65 )
    __asan_report_load1(&v83->collider_check_on_init, v64, v65);
  collider_check_on_init = v83->collider_check_on_init;
  v67 = *(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000);
  LOBYTE(v64) = v67 != 0;
  v68 = (v67 != 0) & (unsigned __int8)((((unsigned __int8)this + 9) & 7) >= v67);
  if ( (_BYTE)v68 )
    __asan_report_store1(&this->collider_check_on_init, v64, v68);
  this->collider_check_on_init = collider_check_on_init;
  v69 = ((_BYTE)v83 + 10) & 7;
  v70 = (*(_BYTE *)(((unsigned __int64)&v83->check_on_reconnect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v69 >= *(_BYTE *)(((unsigned __int64)&v83->check_on_reconnect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v70 )
    __asan_report_load1(&v83->check_on_reconnect, v69, v70);
  check_on_reconnect = v83->check_on_reconnect;
  v72 = *(_BYTE *)(((unsigned __int64)&this->check_on_reconnect >> 3) + 0x7FFF8000);
  LOBYTE(v69) = v72 != 0;
  v73 = (v72 != 0) & (unsigned __int8)((((unsigned __int8)this + 10) & 7) >= v72);
  if ( (_BYTE)v73 )
    __asan_report_store1(&this->check_on_reconnect, v69, v73);
  this->check_on_reconnect = check_on_reconnect;
  std::vector<std::string>::vector(&this->collider_white_list, &v83->collider_white_list);
  p_collider_black_list = &v83->collider_black_list;
  std::vector<std::string>::vector(&this->collider_black_list, &v83->collider_black_list);
  if ( *(char *)(((unsigned __int64)&v83->use_level_override >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->use_level_override, p_collider_black_list, &v83->use_level_override);
  use_level_override = v83->use_level_override;
  v76 = *(_BYTE *)(((unsigned __int64)&this->use_level_override >> 3) + 0x7FFF8000);
  if ( v76 < 0 )
  {
    LOBYTE(p_collider_black_list) = v76 != 0;
    __asan_report_store1(&this->use_level_override, p_collider_black_list, &this->use_level_override);
  }
  this->use_level_override = use_level_override;
  p_raw_shape = &v83->raw_shape;
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr(&this->raw_shape, &v83->raw_shape);
  if ( *(char *)(((unsigned __int64)&v83->use_local_trigger_logic >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->use_local_trigger_logic, p_raw_shape, &v83->use_local_trigger_logic);
  use_local_trigger_logic = v83->use_local_trigger_logic;
  v79 = *(_BYTE *)(((unsigned __int64)&this->use_local_trigger_logic >> 3) + 0x7FFF8000);
  if ( v79 < 0 )
  {
    LOBYTE(p_raw_shape) = v79 != 0;
    __asan_report_store1(&this->use_local_trigger_logic, p_raw_shape, &this->use_local_trigger_logic);
  }
  this->use_local_trigger_logic = use_local_trigger_logic;
  p_local_trigger_meta = &v83->local_trigger_meta;
  std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(&this->local_trigger_meta, &v83->local_trigger_meta);
  if ( *(char *)(((unsigned __int64)&v83->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v83->is_json_loaded, p_local_trigger_meta, &v83->is_json_loaded);
  is_json_loaded = v83->is_json_loaded;
  v82 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v82 < 0 )
  {
    LOBYTE(p_local_trigger_meta) = v82 != 0;
    __asan_report_store1(&this->is_json_loaded, p_local_trigger_meta, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 136: range 000000001274D654-000000001274D6A1
void __cdecl data::ConfigLocalTriggerMetaTeleportV2::~ConfigLocalTriggerMetaTeleportV2(
        data::ConfigLocalTriggerMetaTeleportV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMetaTeleportV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalTriggerMeta = v2;
  data::ConfigLocalTriggerMeta::~ConfigLocalTriggerMeta((data::ConfigLocalTriggerMeta *const)this);
};

// Line 136: range 000000001274D6A2-000000001274D6CC
void __cdecl data::ConfigLocalTriggerMetaTeleportV2::~ConfigLocalTriggerMetaTeleportV2(
        data::ConfigLocalTriggerMetaTeleportV2 *const this)
{
  data::ConfigLocalTriggerMetaTeleportV2::~ConfigLocalTriggerMetaTeleportV2(this);
  operator delete(this, 0x58uLL);
};

// Line 141: range 0000000012145F42-0000000012145F52
const char *__cdecl data::ConfigLocalTriggerMetaTeleportV2::getTypeName(
        const data::ConfigLocalTriggerMetaTeleportV2 *const this)
{
  return "ConfigLocalTriggerMetaTeleportV2";
};

// Line 142: range 0000000012145F54-00000000121460F0
int32_t __cdecl data::ConfigLocalTriggerMetaTeleportV2::getHashNum(
        const data::ConfigLocalTriggerMetaTeleportV2 *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLocalTriggerMetaTeleportV2::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalTriggerMetaTeleportV2",
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

// Line 158: range 0000000012700D00-0000000012700D41
void __cdecl data::ConfigLocalTriggerMetaTeleportV2Factory::ConfigLocalTriggerMetaTeleportV2Factory(
        data::ConfigLocalTriggerMetaTeleportV2Factory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerMetaTeleportV2Factory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalTriggerMetaTeleportV2Factory = v2;
};

// Line 166: range 000000000ED8B842-000000000ED8C0EC
void __cdecl data::ConfigTrigger::ConfigTrigger(data::ConfigTrigger *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->trigger_type = Common_0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_flag, v2);
  }
  this->trigger_flag = None_25;
  if ( *(_BYTE *)(((unsigned __int64)&this->concern_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->concern_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->concern_type, v2);
  }
  this->concern_type = AllExcludeGWGO;
  std::string::basic_string(&this->shape);
  if ( *(char *)(((unsigned __int64)&this->ignore_scale >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_scale, v2, &this->ignore_scale);
  this->ignore_scale = 0;
  data::Vector::Vector(&this->offset);
  data::Vector::Vector(&this->eular_offset);
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v3);
  }
  this->height = 0.0;
  std::string::basic_string(&this->from_shape);
  data::Vector::Vector(&this->from_offset);
  data::Vector::Vector(&this->from_eular_offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->from_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_height, v3);
  }
  this->from_height = 0.0;
  v4 = ((_BYTE)this - 100) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->check_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->check_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->check_infinite, v4, v5);
  this->check_infinite = 0;
  v6 = ((_BYTE)this - 99) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->trigger_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->trigger_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->trigger_infinite, v6, v7);
  this->trigger_infinite = 0;
  v8 = ((_BYTE)this - 98) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->life_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->life_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->life_infinite, v8, v9);
  this->life_infinite = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_check_time, v8);
  }
  this->start_check_time = 0.0;
  v10 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_interval, v10);
  }
  this->check_interval = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->check_count, v10);
  }
  this->check_count = 0;
  v11 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_interval, v11);
  }
  this->trigger_interval = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_count, v11);
  }
  this->trigger_count = 0;
  v12 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_time, v12);
  }
  this->life_time = 0.0;
  if ( *(char *)(((unsigned __int64)&this->overwrite_camp_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->overwrite_camp_type, v12, &this->overwrite_camp_type);
  this->overwrite_camp_type = 0;
  v13 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, v13);
  }
  this->camp_type = None_22;
  if ( *(char *)(((unsigned __int64)&this->check_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_point, v13, &this->check_point);
  this->check_point = 1;
  v14 = ((_BYTE)this - 63) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->use_surface_height >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->use_surface_height >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->use_surface_height, v14, v15);
  this->use_surface_height = 0;
  v16 = ((_BYTE)this - 62) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->use_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->use_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->use_collider, v16, v17);
  this->use_collider = 1;
  std::string::basic_string(&this->collider_name);
  std::string::basic_string(&this->from_collider_name);
  if ( *(char *)(((unsigned __int64)&this->check_ghost >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_ghost, v16, &this->check_ghost);
  this->check_ghost = 0;
  v18 = ((_BYTE)this + 9) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->collider_check_on_init, v18, v19);
  this->collider_check_on_init = 0;
  v20 = ((_BYTE)this + 10) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->check_on_reconnect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->check_on_reconnect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->check_on_reconnect, v20, v21);
  this->check_on_reconnect = 0;
  std::vector<std::string>::vector(&this->collider_white_list);
  std::vector<std::string>::vector(&this->collider_black_list);
  if ( *(char *)(((unsigned __int64)&this->use_level_override >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_level_override, v20, &this->use_level_override);
  this->use_level_override = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->raw_shape >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseShape>();
  if ( *(char *)(((unsigned __int64)&this->use_local_trigger_logic >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_local_trigger_logic, v20, &this->use_local_trigger_logic);
  this->use_local_trigger_logic = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->local_trigger_meta >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLocalTriggerMeta>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v20, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 166: range 000000000E81A3D4-000000000E81A46E
void __cdecl data::ConfigTrigger::~ConfigTrigger(data::ConfigTrigger *const this)
{
  std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr(&this->local_trigger_meta);
  std::shared_ptr<data::ConfigBaseShape>::~shared_ptr(&this->raw_shape);
  std::vector<std::string>::~vector(&this->collider_black_list);
  std::vector<std::string>::~vector(&this->collider_white_list);
  std::string::~string(&this->from_collider_name);
  std::string::~string(&this->collider_name);
  std::string::~string(&this->from_shape);
  std::string::~string(&this->shape);
};
