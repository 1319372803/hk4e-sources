// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigAttackPattern.h

// Line 96: range 000000000ECD88FE-000000000ECD8963
void __cdecl data::ConfigHitScene::ConfigHitScene(data::ConfigHitScene *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::unordered_map<std::string,std::string>::unordered_map(&this->surface_effect);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 96: range 000000001033EE3E-000000001033EF17
void __cdecl data::ConfigHitScene::ConfigHitScene(data::ConfigHitScene *const this, const data::ConfigHitScene *a2)
{
  data::StringMap *p_surface_effect; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_surface_effect = &a2->surface_effect;
  std::unordered_map<std::string,std::string>::unordered_map(&this->surface_effect, p_surface_effect);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_surface_effect, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_surface_effect) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_surface_effect, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 96: range 000000000ECD8964-000000000ECD898E
void __cdecl data::ConfigHitScene::~ConfigHitScene(data::ConfigHitScene *const this)
{
  std::unordered_map<std::string,std::string>::~unordered_map(&this->surface_effect);
  std::string::~string(this);
};

// Line 120: range 000000000ECD8990-000000000ECD8C87
void __cdecl data::ConfigBaseAttackPattern::ConfigBaseAttackPattern(data::ConfigBaseAttackPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi

  std::enable_shared_from_this<data::ConfigBaseAttackPattern>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseAttackPattern>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseAttackPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_type, v1);
  }
  this->trigger_type = TriggerOnce;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_hit_layer_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_hit_layer_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_hit_layer_type, v3);
  }
  this->check_hit_layer_type = OnlyHitBox;
  data::ConfigHitScene::ConfigHitScene(&this->hit_scene);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_cd, v3);
  }
  this->trigger_cd = 0.0;
  v4 = ((_BYTE)this - 124) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->filter_by_frame >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->filter_by_frame >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->filter_by_frame, v4, v5);
  this->filter_by_frame = 0;
  v6 = ((_BYTE)this - 123) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->ignore_massive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->ignore_massive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->ignore_massive, v6, v7);
  this->ignore_massive = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_attack_filter >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_attack_filter >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_attack_filter, v6);
  }
  this->entity_attack_filter = AllEntities;
  v8 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->massive_attack_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->massive_attack_ratio >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->massive_attack_ratio, v8);
  }
  this->massive_attack_ratio = 1.0;
  if ( *(_WORD *)(((unsigned __int64)&this->born >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBornType>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v8, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 120: range 0000000012734D54-0000000012735233
void __cdecl data::ConfigBaseAttackPattern::ConfigBaseAttackPattern(
        data::ConfigBaseAttackPattern *const this,
        const data::ConfigBaseAttackPattern *a2)
{
  std::enable_shared_from_this<data::ConfigBaseAttackPattern> *v2; // rsi
  int (**v3)(...); // rdx
  data::TriggerType trigger_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::CheckHitLayerType check_hit_layer_type; // ecx
  char v8; // dl
  float trigger_cd; // xmm0_4
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool filter_by_frame; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool ignore_massive; // cl
  char v18; // dl
  __int64 v19; // rdx
  data::EntityAttackFilter entity_attack_filter; // ecx
  char v21; // al
  float massive_attack_ratio; // xmm0_4
  data::ConfigBornTypePtr *p_born; // rsi
  bool is_json_loaded; // cl
  char v25; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseAttackPattern>;
  std::enable_shared_from_this<data::ConfigBaseAttackPattern>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseAttackPattern>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseAttackPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseAttackPattern = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_type);
  }
  trigger_type = a2->trigger_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->trigger_type, v2);
  }
  this->trigger_type = trigger_type;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->check_hit_layer_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->check_hit_layer_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->check_hit_layer_type);
  }
  check_hit_layer_type = a2->check_hit_layer_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->check_hit_layer_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->check_hit_layer_type, v6);
  }
  this->check_hit_layer_type = check_hit_layer_type;
  data::ConfigHitScene::ConfigHitScene(&this->hit_scene, &a2->hit_scene);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_cd);
  }
  trigger_cd = a2->trigger_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_cd, &a2->hit_scene);
  }
  this->trigger_cd = trigger_cd;
  v10 = ((_BYTE)a2 - 124) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->filter_by_frame >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->filter_by_frame >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->filter_by_frame, v10, v11);
  filter_by_frame = a2->filter_by_frame;
  v13 = *(_BYTE *)(((unsigned __int64)&this->filter_by_frame >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->filter_by_frame, v10, v14);
  this->filter_by_frame = filter_by_frame;
  v15 = ((_BYTE)a2 - 123) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&a2->ignore_massive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&a2->ignore_massive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&a2->ignore_massive, v15, v16);
  ignore_massive = a2->ignore_massive;
  v18 = *(_BYTE *)(((unsigned __int64)&this->ignore_massive >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 123) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->ignore_massive, v15, v19);
  this->ignore_massive = ignore_massive;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_attack_filter >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entity_attack_filter >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entity_attack_filter);
  }
  entity_attack_filter = a2->entity_attack_filter;
  v21 = *(_BYTE *)(((unsigned __int64)&this->entity_attack_filter >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v15) = v21 != 0;
    __asan_report_store4(&this->entity_attack_filter, v15);
  }
  this->entity_attack_filter = entity_attack_filter;
  if ( *(_BYTE *)(((unsigned __int64)&a2->massive_attack_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->massive_attack_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->massive_attack_ratio);
  }
  massive_attack_ratio = a2->massive_attack_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->massive_attack_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->massive_attack_ratio >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->massive_attack_ratio, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->massive_attack_ratio = massive_attack_ratio;
  p_born = &a2->born;
  std::shared_ptr<data::ConfigBornType>::shared_ptr(&this->born, &a2->born);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_born, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_born) = v25 != 0;
    __asan_report_store1(&this->is_json_loaded, p_born, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 136: range 0000000012735590-00000000127355BA
void __cdecl data::ConfigBaseAttackPattern::~ConfigBaseAttackPattern(data::ConfigBaseAttackPattern *const this)
{
  data::ConfigBaseAttackPattern::~ConfigBaseAttackPattern(this);
  operator delete(this, 0xA8uLL);
};

// Line 136: range 000000001273551C-000000001273558F
void __cdecl data::ConfigBaseAttackPattern::~ConfigBaseAttackPattern(data::ConfigBaseAttackPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseAttackPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::shared_ptr<data::ConfigBornType>::~shared_ptr(&this->born);
  data::ConfigHitScene::~ConfigHitScene(&this->hit_scene);
  std::enable_shared_from_this<data::ConfigBaseAttackPattern>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseAttackPattern>);
};

// Line 141: range 0000000012137E12-0000000012137E22
const char *__cdecl data::ConfigBaseAttackPattern::getTypeName(const data::ConfigBaseAttackPattern *const this)
{
  return "ConfigBaseAttackPattern";
};

// Line 142: range 0000000012137E24-0000000012137FC0
int32_t __cdecl data::ConfigBaseAttackPattern::getHashNum(const data::ConfigBaseAttackPattern *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseAttackPattern::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseAttackPattern",
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

// Line 161: range 00000000127355BC-000000001273564E
void __cdecl data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(data::ConfigSimpleAttackPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseAttackPattern::ConfigBaseAttackPattern((data::ConfigBaseAttackPattern *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleAttackPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  v3 = ((_BYTE)this - 95) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_custom_shape >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_custom_shape >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_custom_shape, v3, v4);
  this->use_custom_shape = 0;
};

// Line 161: range 0000000012735A92-0000000012735B74
void __cdecl data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(
        data::ConfigSimpleAttackPattern *const this,
        const data::ConfigSimpleAttackPattern *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool use_custom_shape; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseAttackPattern::ConfigBaseAttackPattern(
    (data::ConfigBaseAttackPattern *const)this,
    (const data::ConfigBaseAttackPattern *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleAttackPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  v3 = ((_BYTE)a2 - 95) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->use_custom_shape >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->use_custom_shape >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->use_custom_shape, v3, v4);
  use_custom_shape = a2->use_custom_shape;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_custom_shape >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 95) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_custom_shape, v3, v7);
  this->use_custom_shape = use_custom_shape;
};

// Line 168: range 0000000012736D64-0000000012736D8E
void __cdecl data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern(data::ConfigSimpleAttackPattern *const this)
{
  data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern(this);
  operator delete(this, 0xA8uLL);
};

// Line 168: range 0000000012736D16-0000000012736D63
void __cdecl data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern(data::ConfigSimpleAttackPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleAttackPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  data::ConfigBaseAttackPattern::~ConfigBaseAttackPattern((data::ConfigBaseAttackPattern *const)this);
};

// Line 173: range 0000000012137FC2-0000000012137FD2
const char *__cdecl data::ConfigSimpleAttackPattern::getTypeName(const data::ConfigSimpleAttackPattern *const this)
{
  return "ConfigSimpleAttackPattern";
};

// Line 174: range 0000000012137FD4-0000000012138170
int32_t __cdecl data::ConfigSimpleAttackPattern::getHashNum(const data::ConfigSimpleAttackPattern *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigSimpleAttackPattern::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSimpleAttackPattern",
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

// Line 207: range 0000000012736000-00000000127360EC
void __cdecl data::ConfigAttackUsePrefab::ConfigAttackUsePrefab(data::ConfigAttackUsePrefab *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseAttackPattern::ConfigBaseAttackPattern(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackUsePrefab + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::basic_string(&this->prefab_path_name);
  if ( *(char *)(((unsigned __int64)&this->is_connect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_connect, v1, &this->is_connect);
  this->is_connect = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->duration = 0.0;
};

// Line 207: range 0000000012736536-00000000127366E3
void __cdecl data::ConfigAttackUsePrefab::ConfigAttackUsePrefab(
        data::ConfigAttackUsePrefab *const this,
        const data::ConfigAttackUsePrefab *a2)
{
  int (**v2)(...); // rdx
  std::string *p_prefab_path_name; // rsi
  bool is_connect; // cl
  char v5; // al
  float duration; // xmm0_4

  data::ConfigBaseAttackPattern::ConfigBaseAttackPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackUsePrefab + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  p_prefab_path_name = &a2->prefab_path_name;
  std::string::basic_string(&this->prefab_path_name, &a2->prefab_path_name);
  if ( *(char *)(((unsigned __int64)&a2->is_connect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_connect, p_prefab_path_name, &a2->is_connect);
  is_connect = a2->is_connect;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_connect >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_prefab_path_name) = v5 != 0;
    __asan_report_store1(&this->is_connect, p_prefab_path_name, &this->is_connect);
  }
  this->is_connect = is_connect;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->duration = duration;
};

// Line 216: range 000000001274BDD4-000000001274BDFE
void __cdecl data::ConfigAttackUsePrefab::~ConfigAttackUsePrefab(data::ConfigAttackUsePrefab *const this)
{
  data::ConfigAttackUsePrefab::~ConfigAttackUsePrefab(this);
  operator delete(this, 0xD0uLL);
};

// Line 216: range 000000001274BD74-000000001274BDD3
void __cdecl data::ConfigAttackUsePrefab::~ConfigAttackUsePrefab(data::ConfigAttackUsePrefab *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackUsePrefab + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::~string(&this->prefab_path_name);
  data::ConfigBaseAttackPattern::~ConfigBaseAttackPattern(this);
};

// Line 221: range 0000000012138172-0000000012138182
const char *__cdecl data::ConfigAttackUsePrefab::getTypeName(const data::ConfigAttackUsePrefab *const this)
{
  return "ConfigAttackUsePrefab";
};

// Line 222: range 0000000012138184-0000000012138320
int32_t __cdecl data::ConfigAttackUsePrefab::getHashNum(const data::ConfigAttackUsePrefab *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAttackUsePrefab::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAttackUsePrefab",
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

// Line 238: range 00000000127369CC-0000000012736A0D
void __cdecl data::ConfigAttackUsePrefabFactory::ConfigAttackUsePrefabFactory(
        data::ConfigAttackUsePrefabFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackUsePrefabFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAttackUsePrefabFactory = v2;
};

// Line 246: range 0000000012736D90-0000000012736E01
void __cdecl data::ConfigAttackTrail::ConfigAttackTrail(data::ConfigAttackTrail *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackTrail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::basic_string(&this->trail_name);
  std::string::basic_string(&this->trail_start_name);
};

// Line 246: range 000000001273724A-000000001273731C
void __cdecl data::ConfigAttackTrail::ConfigAttackTrail(
        data::ConfigAttackTrail *const this,
        const data::ConfigAttackTrail *a2)
{
  int (**v2)(...); // rdx

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackTrail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::basic_string(&this->trail_name, &a2->trail_name);
  std::string::basic_string(&this->trail_start_name, &a2->trail_start_name);
};

// Line 254: range 0000000012737678-00000000127376A2
void __cdecl data::ConfigAttackTrail::~ConfigAttackTrail(data::ConfigAttackTrail *const this)
{
  data::ConfigAttackTrail::~ConfigAttackTrail(this);
  operator delete(this, 0xE8uLL);
};

// Line 254: range 0000000012737606-0000000012737677
void __cdecl data::ConfigAttackTrail::~ConfigAttackTrail(data::ConfigAttackTrail *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackTrail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::~string(&this->trail_start_name);
  std::string::~string(&this->trail_name);
  data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern(this);
};

// Line 259: range 0000000012138322-0000000012138332
const char *__cdecl data::ConfigAttackTrail::getTypeName(const data::ConfigAttackTrail *const this)
{
  return "ConfigAttackTrail";
};

// Line 260: range 0000000012138334-00000000121384D0
int32_t __cdecl data::ConfigAttackTrail::getHashNum(const data::ConfigAttackTrail *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAttackTrail::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAttackTrail",
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

// Line 279: range 00000000127376A4-0000000012737715
void __cdecl data::ConfigAttackDoubleTrail::ConfigAttackDoubleTrail(data::ConfigAttackDoubleTrail *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAttackTrail::ConfigAttackTrail(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackDoubleTrail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::basic_string(&this->trail2_name);
  std::string::basic_string(&this->trail_start2_name);
};

// Line 279: range 0000000012737B58-0000000012737C2A
void __cdecl data::ConfigAttackDoubleTrail::ConfigAttackDoubleTrail(
        data::ConfigAttackDoubleTrail *const this,
        const data::ConfigAttackDoubleTrail *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAttackTrail::ConfigAttackTrail(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackDoubleTrail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::basic_string(&this->trail2_name, &a2->trail2_name);
  std::string::basic_string(&this->trail_start2_name, &a2->trail_start2_name);
};

// Line 287: range 000000001274BD48-000000001274BD72
void __cdecl data::ConfigAttackDoubleTrail::~ConfigAttackDoubleTrail(data::ConfigAttackDoubleTrail *const this)
{
  data::ConfigAttackDoubleTrail::~ConfigAttackDoubleTrail(this);
  operator delete(this, 0x128uLL);
};

// Line 287: range 000000001274BCD6-000000001274BD47
void __cdecl data::ConfigAttackDoubleTrail::~ConfigAttackDoubleTrail(data::ConfigAttackDoubleTrail *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackDoubleTrail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  std::string::~string(&this->trail_start2_name);
  std::string::~string(&this->trail2_name);
  data::ConfigAttackTrail::~ConfigAttackTrail(this);
};

// Line 292: range 00000000121384D2-00000000121384E2
const char *__cdecl data::ConfigAttackDoubleTrail::getTypeName(const data::ConfigAttackDoubleTrail *const this)
{
  return "ConfigAttackDoubleTrail";
};

// Line 293: range 00000000121384E4-0000000012138680
int32_t __cdecl data::ConfigAttackDoubleTrail::getHashNum(const data::ConfigAttackDoubleTrail *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAttackDoubleTrail::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAttackDoubleTrail",
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

// Line 309: range 0000000012737F14-0000000012737F55
void __cdecl data::ConfigAttackDoubleTrailFactory::ConfigAttackDoubleTrailFactory(
        data::ConfigAttackDoubleTrailFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackDoubleTrailFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAttackDoubleTrailFactory = v2;
};

// Line 317: range 000000001273825E-00000000127382FD
void __cdecl data::ConfigAttackBox::ConfigAttackBox(data::ConfigAttackBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  data::DynamicFloatVector::DynamicFloatVector(&this->size);
  if ( *(char *)(((unsigned __int64)&this->mute_hit_behind_scene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->mute_hit_behind_scene, v1, &this->mute_hit_behind_scene);
  this->mute_hit_behind_scene = 0;
};

// Line 317: range 000000001273874E-0000000012738869
void __cdecl data::ConfigAttackBox::ConfigAttackBox(data::ConfigAttackBox *const this, const data::ConfigAttackBox *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloatVector *p_size; // rsi
  bool mute_hit_behind_scene; // cl
  char v5; // al

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  p_size = &a2->size;
  data::DynamicFloatVector::DynamicFloatVector(&this->size, &a2->size);
  if ( *(char *)(((unsigned __int64)&a2->mute_hit_behind_scene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->mute_hit_behind_scene, p_size, &a2->mute_hit_behind_scene);
  mute_hit_behind_scene = a2->mute_hit_behind_scene;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mute_hit_behind_scene >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_size) = v5 != 0;
    __asan_report_store1(&this->mute_hit_behind_scene, p_size, &this->mute_hit_behind_scene);
  }
  this->mute_hit_behind_scene = mute_hit_behind_scene;
};

// Line 325: range 000000001274BC4A-000000001274BCA9
void __cdecl data::ConfigAttackBox::~ConfigAttackBox(data::ConfigAttackBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  data::DynamicFloatVector::~DynamicFloatVector(&this->size);
  data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern(this);
};

// Line 325: range 000000001274BCAA-000000001274BCD4
void __cdecl data::ConfigAttackBox::~ConfigAttackBox(data::ConfigAttackBox *const this)
{
  data::ConfigAttackBox::~ConfigAttackBox(this);
  operator delete(this, 0x118uLL);
};

// Line 330: range 0000000012138682-0000000012138692
const char *__cdecl data::ConfigAttackBox::getTypeName(const data::ConfigAttackBox *const this)
{
  return "ConfigAttackBox";
};

// Line 331: range 0000000012138694-0000000012138830
int32_t __cdecl data::ConfigAttackBox::getHashNum(const data::ConfigAttackBox *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAttackBox::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAttackBox",
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

// Line 347: range 0000000012738B52-0000000012738B93
void __cdecl data::ConfigAttackBoxFactory::ConfigAttackBoxFactory(data::ConfigAttackBoxFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackBoxFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAttackBoxFactory = v2;
};

// Line 355: range 0000000012738E9C-0000000012738FE6
void __cdecl data::ConfigAttackCircle::ConfigAttackCircle(data::ConfigAttackCircle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern((data::ConfigSimpleAttackPattern *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackCircle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  v3 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v3);
  }
  this->height = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fan_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fan_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fan_angle, v3);
  }
  this->fan_angle = 360.0;
  data::DynamicFloat::DynamicFloat(&this->radius);
  data::DynamicFloat::DynamicFloat(&this->inner_radius);
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_direction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_direction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_direction, v3);
  }
  this->detect_direction = CenterToSide;
};

// Line 355: range 0000000012739430-0000000012739695
void __cdecl data::ConfigAttackCircle::ConfigAttackCircle(
        data::ConfigAttackCircle *const this,
        const data::ConfigAttackCircle *a2)
{
  int (**v2)(...); // rdx
  float height; // xmm0_4
  __int64 v4; // rsi
  float fan_angle; // xmm0_4
  data::DynamicFloat *p_inner_radius; // rsi
  data::CircleDetectDirection detect_direction; // ecx
  char v8; // al

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(
    (data::ConfigSimpleAttackPattern *const)this,
    (const data::ConfigSimpleAttackPattern *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackCircle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height);
  }
  height = a2->height;
  v4 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v4);
  }
  this->height = height;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fan_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fan_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fan_angle);
  }
  fan_angle = a2->fan_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->fan_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fan_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fan_angle, v4);
  }
  this->fan_angle = fan_angle;
  data::DynamicFloat::DynamicFloat(&this->radius, &a2->radius);
  p_inner_radius = &a2->inner_radius;
  data::DynamicFloat::DynamicFloat(&this->inner_radius, &a2->inner_radius);
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_direction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->detect_direction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->detect_direction);
  }
  detect_direction = a2->detect_direction;
  v8 = *(_BYTE *)(((unsigned __int64)&this->detect_direction >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_inner_radius) = v8 != 0;
    __asan_report_store4(&this->detect_direction, p_inner_radius);
  }
  this->detect_direction = detect_direction;
};

// Line 366: range 000000001274BBAC-000000001274BC1D
void __cdecl data::ConfigAttackCircle::~ConfigAttackCircle(data::ConfigAttackCircle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackCircle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  data::DynamicFloat::~DynamicFloat(&this->inner_radius);
  data::DynamicFloat::~DynamicFloat(&this->radius);
  data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern((data::ConfigSimpleAttackPattern *const)this);
};

// Line 366: range 000000001274BC1E-000000001274BC48
void __cdecl data::ConfigAttackCircle::~ConfigAttackCircle(data::ConfigAttackCircle *const this)
{
  data::ConfigAttackCircle::~ConfigAttackCircle(this);
  operator delete(this, 0xF8uLL);
};

// Line 371: range 0000000012138832-0000000012138842
const char *__cdecl data::ConfigAttackCircle::getTypeName(const data::ConfigAttackCircle *const this)
{
  return "ConfigAttackCircle";
};

// Line 372: range 0000000012138844-00000000121389E0
int32_t __cdecl data::ConfigAttackCircle::getHashNum(const data::ConfigAttackCircle *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAttackCircle::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAttackCircle",
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

// Line 388: range 000000001273997E-00000000127399BF
void __cdecl data::ConfigAttackCircleFactory::ConfigAttackCircleFactory(data::ConfigAttackCircleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackCircleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAttackCircleFactory = v2;
};

// Line 396: range 0000000012739CC8-0000000012739D6A
void __cdecl data::ConfigAttackSphere::ConfigAttackSphere(data::ConfigAttackSphere *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  data::DynamicFloat::DynamicFloat(&this->radius);
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_direction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_direction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_direction, v1);
  }
  this->detect_direction = None_74;
};

// Line 396: range 000000001273A1B4-000000001273A2CE
void __cdecl data::ConfigAttackSphere::ConfigAttackSphere(
        data::ConfigAttackSphere *const this,
        const data::ConfigAttackSphere *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_radius; // rsi
  data::SphereDetectDirection detect_direction; // ecx
  char v5; // al

  data::ConfigSimpleAttackPattern::ConfigSimpleAttackPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseAttackPattern = v2;
  p_radius = &a2->radius;
  data::DynamicFloat::DynamicFloat(&this->radius, &a2->radius);
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_direction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->detect_direction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->detect_direction);
  }
  detect_direction = a2->detect_direction;
  v5 = *(_BYTE *)(((unsigned __int64)&this->detect_direction >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_radius) = v5 != 0;
    __asan_report_store4(&this->detect_direction, p_radius);
  }
  this->detect_direction = detect_direction;
};

// Line 404: range 000000001274BB80-000000001274BBAA
void __cdecl data::ConfigAttackSphere::~ConfigAttackSphere(data::ConfigAttackSphere *const this)
{
  data::ConfigAttackSphere::~ConfigAttackSphere(this);
  operator delete(this, 0xD0uLL);
};

// Line 404: range 000000001274BB20-000000001274BB7F
void __cdecl data::ConfigAttackSphere::~ConfigAttackSphere(data::ConfigAttackSphere *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseAttackPattern = v2;
  data::DynamicFloat::~DynamicFloat(&this->radius);
  data::ConfigSimpleAttackPattern::~ConfigSimpleAttackPattern(this);
};

// Line 409: range 00000000121389E2-00000000121389F2
const char *__cdecl data::ConfigAttackSphere::getTypeName(const data::ConfigAttackSphere *const this)
{
  return "ConfigAttackSphere";
};

// Line 410: range 00000000121389F4-0000000012138B90
int32_t __cdecl data::ConfigAttackSphere::getHashNum(const data::ConfigAttackSphere *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAttackSphere::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAttackSphere",
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

// Line 426: range 000000001273A5B8-000000001273A5F9
void __cdecl data::ConfigAttackSphereFactory::ConfigAttackSphereFactory(data::ConfigAttackSphereFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAttackSphereFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAttackSphereFactory = v2;
};
