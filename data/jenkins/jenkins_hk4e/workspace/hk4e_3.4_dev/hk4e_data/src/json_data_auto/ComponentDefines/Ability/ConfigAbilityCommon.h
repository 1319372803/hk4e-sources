// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.h

// Line 129: range 000000001429173A-000000001429178F
void __cdecl data::DynamicArgument::DynamicArgument(data::DynamicArgument *const this)
{
  __int64 v1; // rsi

  std::any::any(&this->value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 129: range 000000000F94CC4A-000000000F94CCE5
void __cdecl data::DynamicArgument::DynamicArgument(data::DynamicArgument *const this, const data::DynamicArgument *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::any::any(&this->value, &a2->value);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 129: range 000000000F94CCE6-000000000F94CD00
void __cdecl data::DynamicArgument::~DynamicArgument(data::DynamicArgument *const this)
{
  std::any::~any(&this->value);
};

// Line 147: range 00000000110E14D0-00000000110E163A
void __cdecl data::SelectTargetsByShape::SelectTargetsByShape(data::SelectTargetsByShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  std::string::basic_string(&this->shape_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->center_based_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_based_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_based_on, v1);
  }
  this->center_based_on = Self_0;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_target_type, v3);
  }
  this->camp_target_type = None_22;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_based_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_based_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_based_on, v3);
  }
  this->camp_based_on = Self_0;
  data::DynamicFloat::DynamicFloat(&this->size_ratio, 1.0);
};

// Line 187: range 000000000F7CBBE8-000000000F7CBD3D
void __cdecl data::BaseActionContainer::BaseActionContainer(
        data::BaseActionContainer *const this,
        const data::BaseActionContainer *a2)
{
  std::enable_shared_from_this<data::BaseActionContainer> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t local_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::BaseActionContainer>;
  std::enable_shared_from_this<data::BaseActionContainer>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::BaseActionContainer>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::BaseActionContainer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_BaseActionContainer = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->local_id);
  }
  local_id = a2->local_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->local_id, v2);
  }
  this->local_id = local_id;
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

// Line 197: range 00000000110E05C2-00000000110E06DF
void __cdecl data::SelectTargets::SelectTargets(data::SelectTargets *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::SelectTargets>::enable_shared_from_this(&this->std::enable_shared_from_this<data::SelectTargets>);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargets + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->top_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top_limit, v1);
  }
  this->top_limit = 0;
  std::vector<data::EntityType>::vector(&this->entity_type_priority);
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sort_type, v1);
  }
  this->sort_type = Default_10;
  v3 = ((_BYTE)this + 60) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 197: range 000000001120B430-000000001120B63C
void __cdecl data::SelectTargets::SelectTargets(data::SelectTargets *const this, const data::SelectTargets *a2)
{
  std::enable_shared_from_this<data::SelectTargets> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t top_limit; // ecx
  char v5; // al
  data::ConfigEntityTypeArray *p_entity_type_priority; // rsi
  data::SelectTargetsSortType sort_type; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx

  v2 = &a2->std::enable_shared_from_this<data::SelectTargets>;
  std::enable_shared_from_this<data::SelectTargets>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::SelectTargets>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::SelectTargets + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_SelectTargets = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->top_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->top_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->top_limit);
  }
  top_limit = a2->top_limit;
  v5 = *(_BYTE *)(((unsigned __int64)&this->top_limit >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->top_limit, v2);
  }
  this->top_limit = top_limit;
  p_entity_type_priority = &a2->entity_type_priority;
  std::vector<data::EntityType>::vector(&this->entity_type_priority, &a2->entity_type_priority);
  if ( *(_BYTE *)(((unsigned __int64)&a2->sort_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sort_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sort_type);
  }
  sort_type = a2->sort_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_entity_type_priority) = v8 != 0;
    __asan_report_store4(&this->sort_type, p_entity_type_priority);
  }
  this->sort_type = sort_type;
  v9 = ((_BYTE)a2 + 60) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_json_loaded, v9, v10);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 207: range 00000000110E0AE4-00000000110E0B45
void __cdecl data::SelectTargets::~SelectTargets(data::SelectTargets *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargets + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  std::vector<data::EntityType>::~vector(&this->entity_type_priority);
  std::enable_shared_from_this<data::SelectTargets>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::SelectTargets>);
};

// Line 207: range 00000000110E0B46-00000000110E0B70
void __cdecl data::SelectTargets::~SelectTargets(data::SelectTargets *const this)
{
  data::SelectTargets::~SelectTargets(this);
  operator delete(this, 0x40uLL);
};

// Line 212: range 000000001009900C-000000001009901C
const char *__cdecl data::SelectTargets::getTypeName(const data::SelectTargets *const this)
{
  return "SelectTargets";
};

// Line 213: range 000000001009901E-00000000100991BA
int32_t __cdecl data::SelectTargets::getHashNum(const data::SelectTargets *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargets::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargets",
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

// Line 232: range 000000001120B926-000000001120BB5B
void __cdecl data::SelectTargetsByShape::SelectTargetsByShape(
        data::SelectTargetsByShape *const this,
        const data::SelectTargetsByShape *a2)
{
  int (**v2)(...); // rdx
  std::string *p_shape_name; // rsi
  data::AbilityTargetting center_based_on; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::TargetType camp_target_type; // ecx
  char v8; // dl
  data::AbilityTargetting camp_based_on; // ecx
  char v10; // al

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  p_shape_name = &a2->shape_name;
  std::string::basic_string(&this->shape_name, &a2->shape_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_based_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_based_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_based_on);
  }
  center_based_on = a2->center_based_on;
  v5 = *(_BYTE *)(((unsigned __int64)&this->center_based_on >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_shape_name) = v5 != 0;
    __asan_report_store4(&this->center_based_on, p_shape_name);
  }
  this->center_based_on = center_based_on;
  v6 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_target_type);
  }
  camp_target_type = a2->camp_target_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->camp_target_type, v6);
  }
  this->camp_target_type = camp_target_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_based_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_based_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_based_on);
  }
  camp_based_on = a2->camp_based_on;
  v10 = *(_BYTE *)(((unsigned __int64)&this->camp_based_on >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->camp_based_on, v6);
  }
  this->camp_based_on = camp_based_on;
  data::DynamicFloat::DynamicFloat(&this->size_ratio, &a2->size_ratio);
};

// Line 243: range 0000000011303DA8-0000000011303E15
void __cdecl data::SelectTargetsByShape::~SelectTargetsByShape(data::SelectTargetsByShape *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByShape + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::DynamicFloat::~DynamicFloat(&this->size_ratio);
  std::string::~string(&this->shape_name);
  data::SelectTargets::~SelectTargets(this);
};

// Line 243: range 0000000011303E16-0000000011303E40
void __cdecl data::SelectTargetsByShape::~SelectTargetsByShape(data::SelectTargetsByShape *const this)
{
  data::SelectTargetsByShape::~SelectTargetsByShape(this);
  operator delete(this, 0x90uLL);
};

// Line 248: range 00000000100991BC-00000000100991CC
const char *__cdecl data::SelectTargetsByShape::getTypeName(const data::SelectTargetsByShape *const this)
{
  return "SelectTargetsByShape";
};

// Line 249: range 00000000100991CE-000000001009936A
int32_t __cdecl data::SelectTargetsByShape::getHashNum(const data::SelectTargetsByShape *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByShape::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByShape",
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

// Line 265: range 000000001120BE44-000000001120BE85
void __cdecl data::SelectTargetsByShapeFactory::SelectTargetsByShapeFactory(
        data::SelectTargetsByShapeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByShapeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByShapeFactory = v2;
};

// Line 273: range 000000001120C18E-000000001120C1EB
void __cdecl data::SelectTargetsByEquipParts::SelectTargetsByEquipParts(data::SelectTargetsByEquipParts *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByEquipParts + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  std::vector<std::string>::vector(&this->equip_part_names);
};

// Line 273: range 000000001120C5A6-000000001120C63C
void __cdecl data::SelectTargetsByEquipParts::SelectTargetsByEquipParts(
        data::SelectTargetsByEquipParts *const this,
        const data::SelectTargetsByEquipParts *a2)
{
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByEquipParts + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  std::vector<std::string>::vector(&this->equip_part_names, &a2->equip_part_names);
};

// Line 280: range 0000000011303D7C-0000000011303DA6
void __cdecl data::SelectTargetsByEquipParts::~SelectTargetsByEquipParts(data::SelectTargetsByEquipParts *const this)
{
  data::SelectTargetsByEquipParts::~SelectTargetsByEquipParts(this);
  operator delete(this, 0x58uLL);
};

// Line 280: range 0000000011303D1E-0000000011303D7B
void __cdecl data::SelectTargetsByEquipParts::~SelectTargetsByEquipParts(data::SelectTargetsByEquipParts *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByEquipParts + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  std::vector<std::string>::~vector(&this->equip_part_names);
  data::SelectTargets::~SelectTargets(this);
};

// Line 285: range 000000001009936C-000000001009937C
const char *__cdecl data::SelectTargetsByEquipParts::getTypeName(const data::SelectTargetsByEquipParts *const this)
{
  return "SelectTargetsByEquipParts";
};

// Line 286: range 000000001009937E-000000001009951A
int32_t __cdecl data::SelectTargetsByEquipParts::getHashNum(const data::SelectTargetsByEquipParts *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByEquipParts::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByEquipParts",
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

// Line 302: range 000000001120C926-000000001120C967
void __cdecl data::SelectTargetsByEquipPartsFactory::SelectTargetsByEquipPartsFactory(
        data::SelectTargetsByEquipPartsFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByEquipPartsFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByEquipPartsFactory = v2;
};

// Line 310: range 00000000110E0B72-00000000110E0BFD
void __cdecl data::SelectTargetsByChildren::SelectTargetsByChildren(data::SelectTargetsByChildren *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildren + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
};

// Line 310: range 000000001120CC70-000000001120CD3D
void __cdecl data::SelectTargetsByChildren::SelectTargetsByChildren(
        data::SelectTargetsByChildren *const this,
        const data::SelectTargetsByChildren *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildren + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
};

// Line 317: range 0000000011303CA4-0000000011303CF1
void __cdecl data::SelectTargetsByChildren::~SelectTargetsByChildren(data::SelectTargetsByChildren *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildren + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::SelectTargets::~SelectTargets(this);
};

// Line 317: range 0000000011303CF2-0000000011303D1C
void __cdecl data::SelectTargetsByChildren::~SelectTargetsByChildren(data::SelectTargetsByChildren *const this)
{
  data::SelectTargetsByChildren::~SelectTargetsByChildren(this);
  operator delete(this, 0x48uLL);
};

// Line 322: range 000000001009951C-000000001009952C
const char *__cdecl data::SelectTargetsByChildren::getTypeName(const data::SelectTargetsByChildren *const this)
{
  return "SelectTargetsByChildren";
};

// Line 323: range 000000001009952E-00000000100996CA
int32_t __cdecl data::SelectTargetsByChildren::getHashNum(const data::SelectTargetsByChildren *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByChildren::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByChildren",
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

// Line 339: range 000000001120D026-000000001120D067
void __cdecl data::SelectTargetsByChildrenFactory::SelectTargetsByChildrenFactory(
        data::SelectTargetsByChildrenFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildrenFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByChildrenFactory = v2;
};

// Line 347: range 000000001120D370-000000001120D3FB
void __cdecl data::SelectTargetsByChildrenEntityType::SelectTargetsByChildrenEntityType(
        data::SelectTargetsByChildrenEntityType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildrenEntityType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_type, v1);
  }
  this->entity_type = None_10;
};

// Line 347: range 000000001120D816-000000001120D8E3
void __cdecl data::SelectTargetsByChildrenEntityType::SelectTargetsByChildrenEntityType(
        data::SelectTargetsByChildrenEntityType *const this,
        const data::SelectTargetsByChildrenEntityType *a2)
{
  int (**v2)(...); // rdx
  data::EntityType entity_type; // ecx
  char v4; // al

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildrenEntityType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entity_type);
  }
  entity_type = a2->entity_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->entity_type, a2);
  }
  this->entity_type = entity_type;
};

// Line 354: range 0000000011303C78-0000000011303CA2
void __cdecl data::SelectTargetsByChildrenEntityType::~SelectTargetsByChildrenEntityType(
        data::SelectTargetsByChildrenEntityType *const this)
{
  data::SelectTargetsByChildrenEntityType::~SelectTargetsByChildrenEntityType(this);
  operator delete(this, 0x48uLL);
};

// Line 354: range 0000000011303C2A-0000000011303C77
void __cdecl data::SelectTargetsByChildrenEntityType::~SelectTargetsByChildrenEntityType(
        data::SelectTargetsByChildrenEntityType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildrenEntityType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::SelectTargets::~SelectTargets(this);
};

// Line 359: range 00000000100996CC-00000000100996DC
const char *__cdecl data::SelectTargetsByChildrenEntityType::getTypeName(
        const data::SelectTargetsByChildrenEntityType *const this)
{
  return "SelectTargetsByChildrenEntityType";
};

// Line 360: range 00000000100996DE-000000001009987A
int32_t __cdecl data::SelectTargetsByChildrenEntityType::getHashNum(
        const data::SelectTargetsByChildrenEntityType *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByChildrenEntityType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByChildrenEntityType",
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

// Line 376: range 000000001120DBCC-000000001120DC0D
void __cdecl data::SelectTargetsByChildrenEntityTypeFactory::SelectTargetsByChildrenEntityTypeFactory(
        data::SelectTargetsByChildrenEntityTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByChildrenEntityTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByChildrenEntityTypeFactory = v2;
};

// Line 384: range 000000001120DF16-000000001120DF73
void __cdecl data::SelectTargetsByTag::SelectTargetsByTag(data::SelectTargetsByTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  std::string::basic_string(&this->tag);
};

// Line 384: range 000000001120E328-000000001120E3BE
void __cdecl data::SelectTargetsByTag::SelectTargetsByTag(
        data::SelectTargetsByTag *const this,
        const data::SelectTargetsByTag *a2)
{
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  std::string::basic_string(&this->tag, &a2->tag);
};

// Line 391: range 0000000011303BA0-0000000011303BFD
void __cdecl data::SelectTargetsByTag::~SelectTargetsByTag(data::SelectTargetsByTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  std::string::~string(&this->tag);
  data::SelectTargets::~SelectTargets(this);
};

// Line 391: range 0000000011303BFE-0000000011303C28
void __cdecl data::SelectTargetsByTag::~SelectTargetsByTag(data::SelectTargetsByTag *const this)
{
  data::SelectTargetsByTag::~SelectTargetsByTag(this);
  operator delete(this, 0x60uLL);
};

// Line 396: range 000000001009987C-000000001009988C
const char *__cdecl data::SelectTargetsByTag::getTypeName(const data::SelectTargetsByTag *const this)
{
  return "SelectTargetsByTag";
};

// Line 397: range 000000001009988E-0000000010099A2A
int32_t __cdecl data::SelectTargetsByTag::getHashNum(const data::SelectTargetsByTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByTag",
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

// Line 413: range 000000001120E6A8-000000001120E6E9
void __cdecl data::SelectTargetsByTagFactory::SelectTargetsByTagFactory(data::SelectTargetsByTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByTagFactory = v2;
};

// Line 421: range 000000001120E9F2-000000001120EA3F
void __cdecl data::SelectTargetsByGrapplingHook::SelectTargetsByGrapplingHook(
        data::SelectTargetsByGrapplingHook *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByGrapplingHook + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
};

// Line 421: range 000000001120EE44-000000001120EE9C
void __cdecl data::SelectTargetsByGrapplingHook::SelectTargetsByGrapplingHook(
        data::SelectTargetsByGrapplingHook *const this,
        const data::SelectTargetsByGrapplingHook *a2)
{
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByGrapplingHook + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
};

// Line 427: range 0000000011303B26-0000000011303B73
void __cdecl data::SelectTargetsByGrapplingHook::~SelectTargetsByGrapplingHook(
        data::SelectTargetsByGrapplingHook *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByGrapplingHook + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::SelectTargets::~SelectTargets(this);
};

// Line 427: range 0000000011303B74-0000000011303B9E
void __cdecl data::SelectTargetsByGrapplingHook::~SelectTargetsByGrapplingHook(
        data::SelectTargetsByGrapplingHook *const this)
{
  data::SelectTargetsByGrapplingHook::~SelectTargetsByGrapplingHook(this);
  operator delete(this, 0x40uLL);
};

// Line 432: range 0000000010099A2C-0000000010099A3C
const char *__cdecl data::SelectTargetsByGrapplingHook::getTypeName(
        const data::SelectTargetsByGrapplingHook *const this)
{
  return "SelectTargetsByGrapplingHook";
};

// Line 433: range 0000000010099A3E-0000000010099BDA
int32_t __cdecl data::SelectTargetsByGrapplingHook::getHashNum(const data::SelectTargetsByGrapplingHook *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByGrapplingHook::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByGrapplingHook",
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

// Line 449: range 000000001120F186-000000001120F1C7
void __cdecl data::SelectTargetsByGrapplingHookFactory::SelectTargetsByGrapplingHookFactory(
        data::SelectTargetsByGrapplingHookFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByGrapplingHookFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByGrapplingHookFactory = v2;
};

// Line 473: range 000000001120F630-000000001120F792
void __cdecl data::SelectTargetsBySelfGroup::SelectTargetsBySelfGroup(data::SelectTargetsBySelfGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsBySelfGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->operation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->operation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->operation, v1);
  }
  this->operation = OR_0;
  v3 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0;
  data::DynamicInt::DynamicInt(&this->dynamic_value);
  if ( *(char *)(((unsigned __int64)&this->use_binary >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_binary, v3, &this->use_binary);
  this->use_binary = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_type, (((_BYTE)this + 124) & 7u) + 3);
  }
  this->compare_type = Equal_1;
};

// Line 473: range 000000001120FB48-000000001120FDD3
void __cdecl data::SelectTargetsBySelfGroup::SelectTargetsBySelfGroup(
        data::SelectTargetsBySelfGroup *const this,
        const data::SelectTargetsBySelfGroup *a2)
{
  int (**v2)(...); // rdx
  data::BitwiseOperator operation; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t value; // ecx
  char v7; // dl
  data::DynamicInt *p_dynamic_value; // rsi
  bool use_binary; // cl
  char v10; // al
  __int64 v11; // rsi
  data::RelationalOperator compare_type; // ecx
  char v13; // dl
  const data::SelectTargetsBySelfGroup *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsBySelfGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->operation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->operation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->operation);
  }
  operation = a2->operation;
  v4 = *(_BYTE *)(((unsigned __int64)&this->operation >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->operation, a2);
  }
  this->operation = operation;
  v5 = (((_BYTE)v14 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->value);
  }
  value = v14->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->value, v5);
  }
  this->value = value;
  p_dynamic_value = &v14->dynamic_value;
  data::DynamicInt::DynamicInt(&this->dynamic_value, &v14->dynamic_value);
  if ( *(char *)(((unsigned __int64)&v14->use_binary >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->use_binary, p_dynamic_value, &v14->use_binary);
  use_binary = v14->use_binary;
  v10 = *(_BYTE *)(((unsigned __int64)&this->use_binary >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_dynamic_value) = v10 != 0;
    __asan_report_store1(&this->use_binary, p_dynamic_value, &this->use_binary);
  }
  this->use_binary = use_binary;
  v11 = (((_BYTE)v14 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->compare_type);
  }
  compare_type = v14->compare_type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->compare_type, v11);
  }
  this->compare_type = compare_type;
};

// Line 484: range 0000000011303AFA-0000000011303B24
void __cdecl data::SelectTargetsBySelfGroup::~SelectTargetsBySelfGroup(data::SelectTargetsBySelfGroup *const this)
{
  data::SelectTargetsBySelfGroup::~SelectTargetsBySelfGroup(this);
  operator delete(this, 0x80uLL);
};

// Line 484: range 0000000011303A9C-0000000011303AF9
void __cdecl data::SelectTargetsBySelfGroup::~SelectTargetsBySelfGroup(data::SelectTargetsBySelfGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsBySelfGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::DynamicInt::~DynamicInt(&this->dynamic_value);
  data::SelectTargets::~SelectTargets(this);
};

// Line 489: range 0000000010099BDC-0000000010099BEC
const char *__cdecl data::SelectTargetsBySelfGroup::getTypeName(const data::SelectTargetsBySelfGroup *const this)
{
  return "SelectTargetsBySelfGroup";
};

// Line 490: range 0000000010099BEE-0000000010099D8A
int32_t __cdecl data::SelectTargetsBySelfGroup::getHashNum(const data::SelectTargetsBySelfGroup *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsBySelfGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsBySelfGroup",
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

// Line 506: range 00000000112100BC-00000000112100FD
void __cdecl data::SelectTargetsBySelfGroupFactory::SelectTargetsBySelfGroupFactory(
        data::SelectTargetsBySelfGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsBySelfGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsBySelfGroupFactory = v2;
};

// Line 514: range 0000000011210406-0000000011210491
void __cdecl data::SelectTargetsByLCTrigger::SelectTargetsByLCTrigger(data::SelectTargetsByLCTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_target_type, v1);
  }
  this->camp_target_type = None_22;
};

// Line 514: range 00000000112108AC-0000000011210979
void __cdecl data::SelectTargetsByLCTrigger::SelectTargetsByLCTrigger(
        data::SelectTargetsByLCTrigger *const this,
        const data::SelectTargetsByLCTrigger *a2)
{
  int (**v2)(...); // rdx
  data::TargetType camp_target_type; // ecx
  char v4; // al

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_target_type);
  }
  camp_target_type = a2->camp_target_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->camp_target_type, a2);
  }
  this->camp_target_type = camp_target_type;
};

// Line 521: range 0000000011303A70-0000000011303A9A
void __cdecl data::SelectTargetsByLCTrigger::~SelectTargetsByLCTrigger(data::SelectTargetsByLCTrigger *const this)
{
  data::SelectTargetsByLCTrigger::~SelectTargetsByLCTrigger(this);
  operator delete(this, 0x48uLL);
};

// Line 521: range 0000000011303A22-0000000011303A6F
void __cdecl data::SelectTargetsByLCTrigger::~SelectTargetsByLCTrigger(data::SelectTargetsByLCTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::SelectTargets::~SelectTargets(this);
};

// Line 526: range 0000000010099D8C-0000000010099D9C
const char *__cdecl data::SelectTargetsByLCTrigger::getTypeName(const data::SelectTargetsByLCTrigger *const this)
{
  return "SelectTargetsByLCTrigger";
};

// Line 527: range 0000000010099D9E-0000000010099F3A
int32_t __cdecl data::SelectTargetsByLCTrigger::getHashNum(const data::SelectTargetsByLCTrigger *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByLCTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByLCTrigger",
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

// Line 543: range 0000000011210C62-0000000011210CA3
void __cdecl data::SelectTargetsByLCTriggerFactory::SelectTargetsByLCTriggerFactory(
        data::SelectTargetsByLCTriggerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTriggerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByLCTriggerFactory = v2;
};

// Line 551: range 0000000011210FAC-0000000011210FF9
void __cdecl data::SelectTargetsByLCTriggerAll::SelectTargetsByLCTriggerAll(
        data::SelectTargetsByLCTriggerAll *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTriggerAll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
};

// Line 551: range 00000000112113FE-0000000011211456
void __cdecl data::SelectTargetsByLCTriggerAll::SelectTargetsByLCTriggerAll(
        data::SelectTargetsByLCTriggerAll *const this,
        const data::SelectTargetsByLCTriggerAll *a2)
{
  int (**v2)(...); // rdx

  data::SelectTargets::SelectTargets(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTriggerAll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SelectTargets = v2;
};

// Line 557: range 00000000113039A8-00000000113039F5
void __cdecl data::SelectTargetsByLCTriggerAll::~SelectTargetsByLCTriggerAll(
        data::SelectTargetsByLCTriggerAll *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTriggerAll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargets = v2;
  data::SelectTargets::~SelectTargets(this);
};

// Line 557: range 00000000113039F6-0000000011303A20
void __cdecl data::SelectTargetsByLCTriggerAll::~SelectTargetsByLCTriggerAll(
        data::SelectTargetsByLCTriggerAll *const this)
{
  data::SelectTargetsByLCTriggerAll::~SelectTargetsByLCTriggerAll(this);
  operator delete(this, 0x40uLL);
};

// Line 562: range 0000000010099F3C-0000000010099F4C
const char *__cdecl data::SelectTargetsByLCTriggerAll::getTypeName(const data::SelectTargetsByLCTriggerAll *const this)
{
  return "SelectTargetsByLCTriggerAll";
};

// Line 563: range 0000000010099F4E-000000001009A0EA
int32_t __cdecl data::SelectTargetsByLCTriggerAll::getHashNum(const data::SelectTargetsByLCTriggerAll *const this)
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByLCTriggerAll::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SelectTargetsByLCTriggerAll",
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

// Line 579: range 0000000011211740-0000000011211781
void __cdecl data::SelectTargetsByLCTriggerAllFactory::SelectTargetsByLCTriggerAllFactory(
        data::SelectTargetsByLCTriggerAllFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SelectTargetsByLCTriggerAllFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SelectTargetsByLCTriggerAllFactory = v2;
};

// Line 587: range 00000000127029A6-00000000127029EF
void __cdecl data::ConfigAbilityStateOption::ConfigAbilityStateOption(data::ConfigAbilityStateOption *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->is_json_loaded = 0;
};

// Line 721: range 00000000111364EC-00000000111365C9
void __cdecl data::ConfigTimeSlow::ConfigTimeSlow(data::ConfigTimeSlow *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->duration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->slow_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slow_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slow_ratio, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->slow_ratio = 0.050000001;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 745: range 00000000110E1A84-00000000110E1B53
void __cdecl data::BaseActionContainer::BaseActionContainer(data::BaseActionContainer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::BaseActionContainer>::enable_shared_from_this(&this->std::enable_shared_from_this<data::BaseActionContainer>);
  v2 = (int (**)(...))(&`vtable for'data::BaseActionContainer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseActionContainer = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id, v1);
  }
  this->local_id = -1;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 745: range 000000000F7CBD3E-000000000F7CBD8F
void __cdecl data::BaseActionContainer::~BaseActionContainer(data::BaseActionContainer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseActionContainer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseActionContainer = v2;
  std::enable_shared_from_this<data::BaseActionContainer>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::BaseActionContainer>);
};

// Line 752: range 000000000F7CBD90-000000000F7CBDBA
void __cdecl data::BaseActionContainer::~BaseActionContainer(data::BaseActionContainer *const this)
{
  data::BaseActionContainer::~BaseActionContainer(this);
  operator delete(this, 0x20uLL);
};

// Line 773: range 000000000F77A4E8-000000000F781252
void __cdecl data::AbilityProperty::AbilityProperty(data::AbilityProperty *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int (**v5)(...); // rdx
  char v6[2512]; // [rsp+10h] [rbp-9D0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2464LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "151 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkn"
                        "own> 720 1 9 <unknown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 8"
                        "00 1 9 <unknown> 816 1 9 <unknown> 832 1 9 <unknown> 848 1 9 <unknown> 864 1 9 <unknown> 880 1 9"
                        " <unknown> 896 1 9 <unknown> 912 1 9 <unknown> 928 1 9 <unknown> 944 1 9 <unknown> 960 1 9 <unkn"
                        "own> 976 1 9 <unknown> 992 1 9 <unknown> 1008 1 9 <unknown> 1024 1 9 <unknown> 1040 1 9 <unknown"
                        "> 1056 1 9 <unknown> 1072 1 9 <unknown> 1088 1 9 <unknown> 1104 1 9 <unknown> 1120 1 9 <unknown>"
                        " 1136 1 9 <unknown> 1152 1 9 <unknown> 1168 1 9 <unknown> 1184 1 9 <unknown> 1200 1 9 <unknown> "
                        "1216 1 9 <unknown> 1232 1 9 <unknown> 1248 1 9 <unknown> 1264 1 9 <unknown> 1280 1 9 <unknown> 1"
                        "296 1 9 <unknown> 1312 1 9 <unknown> 1328 1 9 <unknown> 1344 1 9 <unknown> 1360 1 9 <unknown> 13"
                        "76 1 9 <unknown> 1392 1 9 <unknown> 1408 1 9 <unknown> 1424 1 9 <unknown> 1440 1 9 <unknown> 145"
                        "6 1 9 <unknown> 1472 1 9 <unknown> 1488 1 9 <unknown> 1504 1 9 <unknown> 1520 1 9 <unknown> 1536"
                        " 1 9 <unknown> 1552 1 9 <unknown> 1568 1 9 <unknown> 1584 1 9 <unknown> 1600 1 9 <unknown> 1616 "
                        "1 9 <unknown> 1632 1 9 <unknown> 1648 1 9 <unknown> 1664 1 9 <unknown> 1680 1 9 <unknown> 1696 1"
                        " 9 <unknown> 1712 1 9 <unknown> 1728 1 9 <unknown> 1744 1 9 <unknown> 1760 1 9 <unknown> 1776 1 "
                        "9 <unknown> 1792 1 9 <unknown> 1808 1 9 <unknown> 1824 1 9 <unknown> 1840 1 9 <unknown> 1856 1 9"
                        " <unknown> 1872 1 9 <unknown> 1888 1 9 <unknown> 1904 1 9 <unknown> 1920 1 9 <unknown> 1936 1 9 "
                        "<unknown> 1952 1 9 <unknown> 1968 1 9 <unknown> 1984 1 9 <unknown> 2000 1 9 <unknown> 2016 1 9 <"
                        "unknown> 2032 1 9 <unknown> 2048 1 9 <unknown> 2064 1 9 <unknown> 2080 1 9 <unknown> 2096 1 9 <u"
                        "nknown> 2112 1 9 <unknown> 2128 1 9 <unknown> 2144 1 9 <unknown> 2160 1 9 <unknown> 2176 1 9 <un"
                        "known> 2192 1 9 <unknown> 2208 1 9 <unknown> 2224 1 9 <unknown> 2240 1 9 <unknown> 2256 1 9 <unk"
                        "nown> 2272 1 9 <unknown> 2288 1 9 <unknown> 2304 1 9 <unknown> 2320 1 9 <unknown> 2336 1 9 <unkn"
                        "own> 2352 1 9 <unknown> 2368 1 9 <unknown> 2384 1 9 <unknown> 2400 1 9 <unknown> 2416 1 9 <unkno"
                        "wn> 2432 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AbilityProperty::AbilityProperty;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234753535;
  v4[536862735] = -234753535;
  v4[536862736] = -234753535;
  v4[536862737] = -234753535;
  v4[536862738] = -234753535;
  v4[536862739] = -234753535;
  v4[536862740] = -234753535;
  v4[536862741] = -234753535;
  v4[536862742] = -234753535;
  v4[536862743] = -234753535;
  v4[536862744] = -234753535;
  v4[536862745] = -234753535;
  v4[536862746] = -234753535;
  v4[536862747] = -234753535;
  v4[536862748] = -234753535;
  v4[536862749] = -234753535;
  v4[536862750] = -234753535;
  v4[536862751] = -234753535;
  v4[536862752] = -234753535;
  v4[536862753] = -234753535;
  v4[536862754] = -234753535;
  v4[536862755] = -234753535;
  v4[536862756] = -234753535;
  v4[536862757] = -234753535;
  v4[536862758] = -234753535;
  v4[536862759] = -234753535;
  v4[536862760] = -234753535;
  v4[536862761] = -234753535;
  v4[536862762] = -234753535;
  v4[536862763] = -234753535;
  v4[536862764] = -234753535;
  v4[536862765] = -234753535;
  v4[536862766] = -234753535;
  v4[536862767] = -234753535;
  v4[536862768] = -234753535;
  v4[536862769] = -234753535;
  v4[536862770] = -234753535;
  v4[536862771] = -234753535;
  v4[536862772] = -234753535;
  v4[536862773] = -234753535;
  v4[536862774] = -234753535;
  v4[536862775] = -234753535;
  v4[536862776] = -234753535;
  v4[536862777] = -234753535;
  v4[536862778] = -234753535;
  v4[536862779] = -234753535;
  v4[536862780] = -234753535;
  v4[536862781] = -234753535;
  v4[536862782] = -234753535;
  v4[536862783] = -234753535;
  v4[536862784] = -234753535;
  v4[536862785] = -234753535;
  v4[536862786] = -234753535;
  v4[536862787] = -234753535;
  v4[536862788] = -234753535;
  v4[536862789] = -234753535;
  v4[536862790] = -234753535;
  v4[536862791] = -234753535;
  v4[536862792] = -234753535;
  v4[536862793] = -234753535;
  v4[536862794] = -234753535;
  v4[536862795] = -234753535;
  v4[536862796] = -202116351;
  v5 = (int (**)(...))(&`vtable for'data::AbilityProperty + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityProperty = v5;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_CHARGE_SPEED_RATIO_DELTA,
    "Entity_ChargeSpeedRatioDelta",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_MASS_RATIO,
    "Entity_MassRatio",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_WEIGHT_RATIO,
    "Entity_WeightRatio",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_LIFE_TIME_DELTA,
    "Entity_LifeTimeDelta",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_ANIMATOR_MOVE_SPEED,
    "Animator_MoveSpeedRatio",
    (const std::allocator<char> *)(v2 + 96));
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_ANIMATOR_ATTACK_SPEED,
    "Animator_AttackSpeedRatio",
    (const std::allocator<char> *)(v2 + 112));
  std::allocator<char>::~allocator(v2 + 112);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_ANIMATOR_OVERALL_SPEED,
    "Animator_OverallSpeedRatio",
    (const std::allocator<char> *)(v2 + 128));
  std::allocator<char>::~allocator(v2 + 128);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ENTITY_ANIMATOR_OVERALL_SPEED_MULTIPLIED,
    "Animator_OverallSpeedRatioMultiplied",
    (const std::allocator<char> *)(v2 + 144));
  std::allocator<char>::~allocator(v2 + 144);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ANI_DAMAGE_DELTA,
    "Actor_AniDamageDelta",
    (const std::allocator<char> *)(v2 + 160));
  std::allocator<char>::~allocator(v2 + 160);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ANI_DEFENCE_DELTA,
    "Actor_AniDefenceDelta",
    (const std::allocator<char> *)(v2 + 176));
  std::allocator<char>::~allocator(v2 + 176);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_MAX_STAMINA_RATIO,
    "Actor_MaxStaminaRatio",
    (const std::allocator<char> *)(v2 + 192));
  std::allocator<char>::~allocator(v2 + 192);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_MAX_STAMINA_DELTA,
    "Actor_MaxStaminaDelta",
    (const std::allocator<char> *)(v2 + 208));
  std::allocator<char>::~allocator(v2 + 208);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 224);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_COST_STAMINA_DELTA,
    "Actor_CostStaminaDelta",
    (const std::allocator<char> *)(v2 + 224));
  std::allocator<char>::~allocator(v2 + 224);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 240);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_COST_STAMINA_RATIO,
    "Actor_CostStaminaRatio",
    (const std::allocator<char> *)(v2 + 240));
  std::allocator<char>::~allocator(v2 + 240);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 256);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_RECOVER_STAMINA_DELTA,
    "Actor_RecoverStaminaDelta",
    (const std::allocator<char> *)(v2 + 256));
  std::allocator<char>::~allocator(v2 + 256);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 272);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_RECOVER_STAMINA_RATIO,
    "Actor_RecoverStaminaRatio",
    (const std::allocator<char> *)(v2 + 272));
  std::allocator<char>::~allocator(v2 + 272);
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 288);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DEBUFF_DURATION_RATIO_DELTA,
    "Actor_DebuffDurationRatioDelta",
    (const std::allocator<char> *)(v2 + 288));
  std::allocator<char>::~allocator(v2 + 288);
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 304);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WEIGHT_DELTA,
    "Actor_WeightDelta",
    (const std::allocator<char> *)(v2 + 304));
  std::allocator<char>::~allocator(v2 + 304);
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 320);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ENDURE_DELTA,
    "Actor_EndureDelta",
    (const std::allocator<char> *)(v2 + 320));
  std::allocator<char>::~allocator(v2 + 320);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 336);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_TIME_SCALE_RATIO,
    "Actor_TimeScaleRatio",
    (const std::allocator<char> *)(v2 + 336));
  std::allocator<char>::~allocator(v2 + 336);
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 352);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ADD_GRAVITY_SCALE,
    "Actor_AddGravityScale",
    (const std::allocator<char> *)(v2 + 352));
  std::allocator<char>::~allocator(v2 + 352);
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 368);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_RATIO_BULLET_MOVE_SPEED_RATIO,
    "Actor_BulletMoveSpeedRatio",
    (const std::allocator<char> *)(v2 + 368));
  std::allocator<char>::~allocator(v2 + 368);
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 384);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_RATIO_BULLET_MOVE_ANGULAR_VELOCITY_RATIO,
    "Actor_BulletMoveAngularVelocityRatio",
    (const std::allocator<char> *)(v2 + 384));
  std::allocator<char>::~allocator(v2 + 384);
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 400);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_RATIO_BULLET_MOVE_SURROUND_RADIUS_RATIO,
    "Actor_BulletMoveSurroundRadiusRatio",
    (const std::allocator<char> *)(v2 + 400));
  std::allocator<char>::~allocator(v2 + 400);
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 416);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ADSORBATE_PICK_RADIUS_DELTA,
    "Actor_AdsorbatePickRadiusDelta",
    (const std::allocator<char> *)(v2 + 416));
  std::allocator<char>::~allocator(v2 + 416);
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 432);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ENERGY_COST_DELTA,
    "Actor_EnergyCostDelta",
    (const std::allocator<char> *)(v2 + 432));
  std::allocator<char>::~allocator(v2 + 432);
  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 448);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FALLING_DAMAGE_RATIO,
    "Actor_FallingDamageRatio",
    (const std::allocator<char> *)(v2 + 448));
  std::allocator<char>::~allocator(v2 + 448);
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 464);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_HP_THRESHOLD_RATIO,
    "Actor_HpThresholdRatio",
    (const std::allocator<char> *)(v2 + 464));
  std::allocator<char>::~allocator(v2 + 464);
  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 480);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FLY_BACK_SPEED_MAX_RATIO,
    "Actor_FlyBackSpeedMaxRatio",
    (const std::allocator<char> *)(v2 + 480));
  std::allocator<char>::~allocator(v2 + 480);
  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 496);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FLY_HORIZONTAL_SPEED_MAX_RATIO,
    "Actor_FlyHorizontalSpeedMaxRatio",
    (const std::allocator<char> *)(v2 + 496));
  std::allocator<char>::~allocator(v2 + 496);
  *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 512);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FLY_ROTATION_ANGULAR_VELOCITY_RATIO,
    "Actor_FlyRotationAngularVelocityRatio",
    (const std::allocator<char> *)(v2 + 512));
  std::allocator<char>::~allocator(v2 + 512);
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 528);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FLY_DOWN_SPEED_RATIO,
    "Actor_FlyDownSpeedRatio",
    (const std::allocator<char> *)(v2 + 528));
  std::allocator<char>::~allocator(v2 + 528);
  *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 544);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FLY_FORWARD_SPEED_MAX_RATIO,
    "Actor_FlyForwardSpeedMaxRatio",
    (const std::allocator<char> *)(v2 + 544));
  std::allocator<char>::~allocator(v2 + 544);
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 560);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FLY_OVERALL_SPEED_RATIO,
    "Actor_FlyOverallSpeedRatio",
    (const std::allocator<char> *)(v2 + 560));
  std::allocator<char>::~allocator(v2 + 560);
  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 576);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_MAX_HP_RATIO,
    "Actor_MaxHPRatio",
    (const std::allocator<char> *)(v2 + 576));
  std::allocator<char>::~allocator(v2 + 576);
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 592);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_MAX_HP_DELTA,
    "Actor_MaxHPDelta",
    (const std::allocator<char> *)(v2 + 592));
  std::allocator<char>::~allocator(v2 + 592);
  *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 608);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DEFENCE_RATIO,
    "Actor_DefenceRatio",
    (const std::allocator<char> *)(v2 + 608));
  std::allocator<char>::~allocator(v2 + 608);
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 624);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DEFENCE_DELTA,
    "Actor_DefenceDelta",
    (const std::allocator<char> *)(v2 + 624));
  std::allocator<char>::~allocator(v2 + 624);
  *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 640);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ATTACK_RATIO,
    "Actor_AttackRatio",
    (const std::allocator<char> *)(v2 + 640));
  std::allocator<char>::~allocator(v2 + 640);
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 656);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ATTACK_DELTA,
    "Actor_AttackDelta",
    (const std::allocator<char> *)(v2 + 656));
  std::allocator<char>::~allocator(v2 + 656);
  *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 672);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_CRITICAL_DELTA,
    "Actor_CriticalDelta",
    (const std::allocator<char> *)(v2 + 672));
  std::allocator<char>::~allocator(v2 + 672);
  *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 688);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ANTI_CRITICAL_DELTA,
    "Actor_AntiCriticalDelta",
    (const std::allocator<char> *)(v2 + 688));
  std::allocator<char>::~allocator(v2 + 688);
  *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 704);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_CRITICAL_HURT_DELTA,
    "Actor_CriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 704));
  std::allocator<char>::~allocator(v2 + 704);
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 720);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_HIT_HEAD_DMG_RATIO,
    "Actor_HitHeadDmgRatio",
    (const std::allocator<char> *)(v2 + 720));
  std::allocator<char>::~allocator(v2 + 720);
  *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 736);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_CHARGE_EFFICIENCY_DELTA,
    "Actor_ChargeEfficiencyDelta",
    (const std::allocator<char> *)(v2 + 736));
  std::allocator<char>::~allocator(v2 + 736);
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 752);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ADD_HURT_DELTA,
    "Actor_AddHurtDelta",
    (const std::allocator<char> *)(v2 + 752));
  std::allocator<char>::~allocator(v2 + 752);
  *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 768);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_SUB_HURT_DELTA,
    "Actor_SubHurtDelta",
    (const std::allocator<char> *)(v2 + 768));
  std::allocator<char>::~allocator(v2 + 768);
  *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 784);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_HEAL_ADD_DELTA,
    "Actor_HealAddDelta",
    (const std::allocator<char> *)(v2 + 784));
  std::allocator<char>::~allocator(v2 + 784);
  *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 800);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_HEALED_ADD_DELTA,
    "Actor_HealedAddDelta",
    (const std::allocator<char> *)(v2 + 800));
  std::allocator<char>::~allocator(v2 + 800);
  *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 816);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_EFFECT_HIT_DELTA,
    "Actor_EffectHitDelta",
    (const std::allocator<char> *)(v2 + 816));
  std::allocator<char>::~allocator(v2 + 816);
  *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 832);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_EFFECT_RESIST_DELTA,
    "Actor_EffectResistDelta",
    (const std::allocator<char> *)(v2 + 832));
  std::allocator<char>::~allocator(v2 + 832);
  *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 848);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FREEZE_RESIST_DELTA,
    "Actor_FreezeResistDelta",
    (const std::allocator<char> *)(v2 + 848));
  std::allocator<char>::~allocator(v2 + 848);
  *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 864);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DIZZY_RESIST_DELTA,
    "Actor_DizzyResistDelta",
    (const std::allocator<char> *)(v2 + 864));
  std::allocator<char>::~allocator(v2 + 864);
  *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 880);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FREEZE_SHORTEN_DELTA,
    "Actor_FreezeShortenDelta",
    (const std::allocator<char> *)(v2 + 880));
  std::allocator<char>::~allocator(v2 + 880);
  *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 896);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DIZZY_SHORTEN_DELTA,
    "Actor_DizzyShortenDelta",
    (const std::allocator<char> *)(v2 + 896));
  std::allocator<char>::~allocator(v2 + 896);
  *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 912);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FIRE_ADD_HURT_DELTA,
    "Actor_FireAddHurtDelta",
    (const std::allocator<char> *)(v2 + 912));
  std::allocator<char>::~allocator(v2 + 912);
  *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 928);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEC_ADD_HURT_DELTA,
    "Actor_ElecAddHurtDelta",
    (const std::allocator<char> *)(v2 + 928));
  std::allocator<char>::~allocator(v2 + 928);
  *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 944);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WATER_ADD_HURT_DELTA,
    "Actor_WaterAddHurtDelta",
    (const std::allocator<char> *)(v2 + 944));
  std::allocator<char>::~allocator(v2 + 944);
  *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 960);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_GRASS_ADD_HURT_DELTA,
    "Actor_GrassAddHurtDelta",
    (const std::allocator<char> *)(v2 + 960));
  std::allocator<char>::~allocator(v2 + 960);
  *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 976);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WIND_ADD_HURT_DELTA,
    "Actor_WindAddHurtDelta",
    (const std::allocator<char> *)(v2 + 976));
  std::allocator<char>::~allocator(v2 + 976);
  *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 992);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ICE_ADD_HURT_DELTA,
    "Actor_IceAddHurtDelta",
    (const std::allocator<char> *)(v2 + 992));
  std::allocator<char>::~allocator(v2 + 992);
  *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1008);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ROCK_ADD_HURT_DELTA,
    "Actor_RockAddHurtDelta",
    (const std::allocator<char> *)(v2 + 1008));
  std::allocator<char>::~allocator(v2 + 1008);
  *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1024);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_PHYSICAL_ADD_HURT_DELTA,
    "Actor_PhysicalAddHurtDelta",
    (const std::allocator<char> *)(v2 + 1024));
  std::allocator<char>::~allocator(v2 + 1024);
  *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1040);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_PHYSICAL_SUB_HURT_DELTA,
    "Actor_PhysicalSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1040));
  std::allocator<char>::~allocator(v2 + 1040);
  *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1056);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FIRE_SUB_HURT_DELTA,
    "Actor_FireSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1056));
  std::allocator<char>::~allocator(v2 + 1056);
  *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1072);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEC_SUB_HURT_DELTA,
    "Actor_ElecSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1072));
  std::allocator<char>::~allocator(v2 + 1072);
  *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1088);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WATER_SUB_HURT_DELTA,
    "Actor_WaterSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1088));
  std::allocator<char>::~allocator(v2 + 1088);
  *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1104);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_GRASS_SUB_HURT_DELTA,
    "Actor_GrassSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1104));
  std::allocator<char>::~allocator(v2 + 1104);
  *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1120);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WIND_SUB_HURT_DELTA,
    "Actor_WindSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1120));
  std::allocator<char>::~allocator(v2 + 1120);
  *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1136);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ICE_SUB_HURT_DELTA,
    "Actor_IceSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1136));
  std::allocator<char>::~allocator(v2 + 1136);
  *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1152);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ROCK_SUB_HURT_DELTA,
    "Actor_RockSubHurtDelta",
    (const std::allocator<char> *)(v2 + 1152));
  std::allocator<char>::~allocator(v2 + 1152);
  *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1168);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_ATTACK_ROCK_RATIO,
    "Actor_ElemAttackByRockRatio",
    (const std::allocator<char> *)(v2 + 1168));
  std::allocator<char>::~allocator(v2 + 1168);
  *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1184);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_DEFENSE_ROCK_RATIO,
    "Actor_ElemDefenseByRockRatio",
    (const std::allocator<char> *)(v2 + 1184));
  std::allocator<char>::~allocator(v2 + 1184);
  *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1200);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_MASTERY_DELTA,
    "Actor_ElemMasteryDelta",
    (const std::allocator<char> *)(v2 + 1200));
  std::allocator<char>::~allocator(v2 + 1200);
  *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1216);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA,
    "Actor_ElemReactSwirlFireDelta",
    (const std::allocator<char> *)(v2 + 1216));
  std::allocator<char>::~allocator(v2 + 1216);
  *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1232);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SWIRL_ICE_DELTA,
    "Actor_ElemReactSwirlIceDelta",
    (const std::allocator<char> *)(v2 + 1232));
  std::allocator<char>::~allocator(v2 + 1232);
  *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1248);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SWIRL_WATER_DELTA,
    "Actor_ElemReactSwirlWaterDelta",
    (const std::allocator<char> *)(v2 + 1248));
  std::allocator<char>::~allocator(v2 + 1248);
  *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1264);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA,
    "Actor_ElemReactSwirlElectricDelta",
    (const std::allocator<char> *)(v2 + 1264));
  std::allocator<char>::~allocator(v2 + 1264);
  *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1280);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SCONDUCT_DELTA,
    "Actor_ElemReactSConductDelta",
    (const std::allocator<char> *)(v2 + 1280));
  std::allocator<char>::~allocator(v2 + 1280);
  *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1296);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_STEAM_DELTA,
    "Actor_ElemReactSteamDelta",
    (const std::allocator<char> *)(v2 + 1296));
  std::allocator<char>::~allocator(v2 + 1296);
  *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1312);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_MELT_DELTA,
    "Actor_ElemReactMeltDelta",
    (const std::allocator<char> *)(v2 + 1312));
  std::allocator<char>::~allocator(v2 + 1312);
  *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1328);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_ELECTRIC_DELTA,
    "Actor_ElemReactElectricDelta",
    (const std::allocator<char> *)(v2 + 1328));
  std::allocator<char>::~allocator(v2 + 1328);
  *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1344);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_BURN_DELTA,
    "Actor_ElemReactBurnDelta",
    (const std::allocator<char> *)(v2 + 1344));
  std::allocator<char>::~allocator(v2 + 1344);
  *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1360);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_FREEZE_DELTA,
    "Actor_ElemReactFreezeDelta",
    (const std::allocator<char> *)(v2 + 1360));
  std::allocator<char>::~allocator(v2 + 1360);
  *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1376);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_EXPLODE_DELTA,
    "Actor_ElemReactExplodeDelta",
    (const std::allocator<char> *)(v2 + 1376));
  std::allocator<char>::~allocator(v2 + 1376);
  *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1392);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_FROZENBROKEN_DELTA,
    "Actor_ElemReactFrozenBrokenDelta",
    (const std::allocator<char> *)(v2 + 1392));
  std::allocator<char>::~allocator(v2 + 1392);
  *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1408);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERDOSE_DELTA,
    "Actor_ElemReactOverdoseDelta",
    (const std::allocator<char> *)(v2 + 1408));
  std::allocator<char>::~allocator(v2 + 1408);
  *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1424);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA,
    "Actor_ElemReactOverdoseElectricDelta",
    (const std::allocator<char> *)(v2 + 1424));
  std::allocator<char>::~allocator(v2 + 1424);
  *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1440);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA,
    "Actor_ElemReactOverdoseGrassDelta",
    (const std::allocator<char> *)(v2 + 1440));
  std::allocator<char>::~allocator(v2 + 1440);
  *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1456);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_DELTA,
    "Actor_ElemReactOvergrowDelta",
    (const std::allocator<char> *)(v2 + 1456));
  std::allocator<char>::~allocator(v2 + 1456);
  *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1472);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA,
    "Actor_ElemReactOvergrowFireDelta",
    (const std::allocator<char> *)(v2 + 1472));
  std::allocator<char>::~allocator(v2 + 1472);
  *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1488);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA,
    "Actor_ElemReactOvergrowElectricDelta",
    (const std::allocator<char> *)(v2 + 1488));
  std::allocator<char>::~allocator(v2 + 1488);
  *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1504);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA,
    "Actor_ElemReactOvergrowDeltaVariation",
    (const std::allocator<char> *)(v2 + 1504));
  std::allocator<char>::~allocator(v2 + 1504);
  *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1520);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA,
    "Actor_ElemReactOvergrowVariationExtraDelta",
    (const std::allocator<char> *)(v2 + 1520));
  std::allocator<char>::~allocator(v2 + 1520);
  *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1536);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DEFENCE_IGNORE_RATIO,
    "Actor_DefenseIgnoreRatio",
    (const std::allocator<char> *)(v2 + 1536));
  std::allocator<char>::~allocator(v2 + 1536);
  *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1552);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DEFENCE_IGNORE_DELTA,
    "Actor_DefenseIgnoreDelta",
    (const std::allocator<char> *)(v2 + 1552));
  std::allocator<char>::~allocator(v2 + 1552);
  *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1568);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_PHYSICAL_MUTE_HURT_DELTA,
    "Actor_PhysicalMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1568));
  std::allocator<char>::~allocator(v2 + 1568);
  *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1584);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FIRE_MUTE_HURT_DELTA,
    "Actor_FireMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1584));
  std::allocator<char>::~allocator(v2 + 1584);
  *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1600);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEC_MUTE_HURT_DELTA,
    "Actor_ElecMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1600));
  std::allocator<char>::~allocator(v2 + 1600);
  *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1616);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WATER_MUTE_HURT_DELTA,
    "Actor_WaterMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1616));
  std::allocator<char>::~allocator(v2 + 1616);
  *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1632);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_GRASS_MUTE_HURT_DELTA,
    "Actor_GrassMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1632));
  std::allocator<char>::~allocator(v2 + 1632);
  *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1648);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WIND_MUTE_HURT_DELTA,
    "Actor_WindMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1648));
  std::allocator<char>::~allocator(v2 + 1648);
  *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1664);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ICE_MUTE_HURT_DELTA,
    "Actor_IceMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1664));
  std::allocator<char>::~allocator(v2 + 1664);
  *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1680);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ROCK_MUTE_HURT_DELTA,
    "Actor_RockMuteHurtDelta",
    (const std::allocator<char> *)(v2 + 1680));
  std::allocator<char>::~allocator(v2 + 1680);
  *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1696);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_SKILL_CD_MINUS_RATIO,
    "Actor_SkillCDMinusRatio",
    (const std::allocator<char> *)(v2 + 1696));
  std::allocator<char>::~allocator(v2 + 1696);
  *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1712);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_SHIELD_COST_MINUS_RATIO,
    "Actor_ShieldCostMinusRatio",
    (const std::allocator<char> *)(v2 + 1712));
  std::allocator<char>::~allocator(v2 + 1712);
  *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1728);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ATTACK_EXTRA_DELTA,
    "Actor_AttackExtraDelta",
    (const std::allocator<char> *)(v2 + 1728));
  std::allocator<char>::~allocator(v2 + 1728);
  *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1744);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_DEFENCE_EXTRA_DELTA,
    "Actor_DefenceExtraDelta",
    (const std::allocator<char> *)(v2 + 1744));
  std::allocator<char>::~allocator(v2 + 1744);
  *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1760);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_CRITICAL_EXTRA_DELTA,
    "Actor_CriticalExtraDelta",
    (const std::allocator<char> *)(v2 + 1760));
  std::allocator<char>::~allocator(v2 + 1760);
  *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1776);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ANTI_CRITICAL_EXTRA_DELTA,
    "Actor_AntiCriticalExtraDelta",
    (const std::allocator<char> *)(v2 + 1776));
  std::allocator<char>::~allocator(v2 + 1776);
  *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1792);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_CRITICAL_HURT_EXTRA_DELTA,
    "Actor_CriticalHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1792));
  std::allocator<char>::~allocator(v2 + 1792);
  *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1808);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_CHARGE_EFFICIENCY_EXTRA_DELTA,
    "Actor_ChargeEfficiencyExtraDelta",
    (const std::allocator<char> *)(v2 + 1808));
  std::allocator<char>::~allocator(v2 + 1808);
  *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1824);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_MASTERY_EXTRA_DELTA,
    "Actor_ElemMasteryExtraDelta",
    (const std::allocator<char> *)(v2 + 1824));
  std::allocator<char>::~allocator(v2 + 1824);
  *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1840);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_PHYSICAL_SUB_HURT_EXTRA_DELTA,
    "Actor_PhysicalSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1840));
  std::allocator<char>::~allocator(v2 + 1840);
  *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1856);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FIRE_ADD_HURT_EXTRA_DELTA,
    "Actor_FireAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1856));
  std::allocator<char>::~allocator(v2 + 1856);
  *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1872);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEC_ADD_HURT_EXTRA_DELTA,
    "Actor_ElecAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1872));
  std::allocator<char>::~allocator(v2 + 1872);
  *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1888);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WATER_ADD_HURT_EXTRA_DELTA,
    "Actor_WaterAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1888));
  std::allocator<char>::~allocator(v2 + 1888);
  *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1904);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_GRASS_ADD_HURT_EXTRA_DELTA,
    "Actor_GrassAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1904));
  std::allocator<char>::~allocator(v2 + 1904);
  *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1920);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WIND_ADD_HURT_EXTRA_DELTA,
    "Actor_WindAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1920));
  std::allocator<char>::~allocator(v2 + 1920);
  *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1936);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ICE_ADD_HURT_EXTRA_DELTA,
    "Actor_IceAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1936));
  std::allocator<char>::~allocator(v2 + 1936);
  *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1952);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ROCK_ADD_HURT_EXTRA_DELTA,
    "Actor_RockAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1952));
  std::allocator<char>::~allocator(v2 + 1952);
  *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1968);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_FIRE_SUB_HURT_EXTRA_DELTA,
    "Actor_FireSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1968));
  std::allocator<char>::~allocator(v2 + 1968);
  *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 1984);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEC_SUB_HURT_EXTRA_DELTA,
    "Actor_ElecSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 1984));
  std::allocator<char>::~allocator(v2 + 1984);
  *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2000);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WATER_SUB_HURT_EXTRA_DELTA,
    "Actor_WaterSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 2000));
  std::allocator<char>::~allocator(v2 + 2000);
  *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2016);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_GRASS_SUB_HURT_EXTRA_DELTA,
    "Actor_GrassSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 2016));
  std::allocator<char>::~allocator(v2 + 2016);
  *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2032);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_WIND_SUB_HURT_EXTRA_DELTA,
    "Actor_WindSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 2032));
  std::allocator<char>::~allocator(v2 + 2032);
  *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2048);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ICE_SUB_HURT_EXTRA_DELTA,
    "Actor_IceSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 2048));
  std::allocator<char>::~allocator(v2 + 2048);
  *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2064);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ROCK_SUB_HURT_EXTRA_DELTA,
    "Actor_RockSubHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 2064));
  std::allocator<char>::~allocator(v2 + 2064);
  *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2080);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_SKILL_CD_MINUS_EXTRA_RATIO,
    "Actor_SkillCDMinusExtraRatio",
    (const std::allocator<char> *)(v2 + 2080));
  std::allocator<char>::~allocator(v2 + 2080);
  *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2096);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_SHIELD_COST_MINUS_EXTRA_RATIO,
    "Actor_ShieldCostMinusExtraRatio",
    (const std::allocator<char> *)(v2 + 2096));
  std::allocator<char>::~allocator(v2 + 2096);
  *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_PHYSICAL_ADD_HURT_EXTRA_DELTA,
    "Actor_PhysicalAddHurtExtraDelta",
    (const std::allocator<char> *)(v2 + 2112));
  std::allocator<char>::~allocator(v2 + 2112);
  *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_CRITICAL_DELTA,
    "Actor_ElemCriticalDelta",
    (const std::allocator<char> *)(v2 + 2128));
  std::allocator<char>::~allocator(v2 + 2128);
  *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_CRITICAL_HURT_DELTA,
    "Actor_ElemCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2144));
  std::allocator<char>::~allocator(v2 + 2144);
  *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_DELTA,
    "Actor_ElemExplodeCriticalDelta",
    (const std::allocator<char> *)(v2 + 2160));
  std::allocator<char>::~allocator(v2 + 2160);
  *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_HURT_DELTA,
    "Actor_ElemExplodeCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2176));
  std::allocator<char>::~allocator(v2 + 2176);
  *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_DELTA,
    "Actor_ElemSwirlCriticalDelta",
    (const std::allocator<char> *)(v2 + 2192));
  std::allocator<char>::~allocator(v2 + 2192);
  *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_HURT_DELTA,
    "Actor_ElemSwirlCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2208));
  std::allocator<char>::~allocator(v2 + 2208);
  *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2224);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_DELTA,
    "Actor_ElemElectricCriticalDelta",
    (const std::allocator<char> *)(v2 + 2224));
  std::allocator<char>::~allocator(v2 + 2224);
  *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2240);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_HURT_DELTA,
    "Actor_ElemElectricCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2240));
  std::allocator<char>::~allocator(v2 + 2240);
  *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2256);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_DELTA,
    "Actor_ElemSuperConductCriticalDelta",
    (const std::allocator<char> *)(v2 + 2256));
  std::allocator<char>::~allocator(v2 + 2256);
  *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2272);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_HURT_DELTA,
    "Actor_ElemSuperConductCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2272));
  std::allocator<char>::~allocator(v2 + 2272);
  *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2288);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_BURN_CRITICAL_DELTA,
    "Actor_ElemBurnCriticalDelta",
    (const std::allocator<char> *)(v2 + 2288));
  std::allocator<char>::~allocator(v2 + 2288);
  *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2304);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_BURN_CRITICAL_HURT_DELTA,
    "Actor_ElemBurnCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2304));
  std::allocator<char>::~allocator(v2 + 2304);
  *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2320);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_DELTA,
    "Actor_ElemFrozenBrokenCriticalDelta",
    (const std::allocator<char> *)(v2 + 2320));
  std::allocator<char>::~allocator(v2 + 2320);
  *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2336);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_HURT_DELTA,
    "Actor_ElemFrozenBrokenCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2336));
  std::allocator<char>::~allocator(v2 + 2336);
  *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2352);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_DELTA,
    "Actor_ElemOvergrowCriticalDelta",
    (const std::allocator<char> *)(v2 + 2352));
  std::allocator<char>::~allocator(v2 + 2352);
  *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2368);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_HURT_DELTA,
    "Actor_ElemOvergrowCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2368));
  std::allocator<char>::~allocator(v2 + 2368);
  *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2384);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_DELTA,
    "Actor_ElemOvergrowFireCriticalDelta",
    (const std::allocator<char> *)(v2 + 2384));
  std::allocator<char>::~allocator(v2 + 2384);
  *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2400);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_HURT_DELTA,
    "Actor_ElemOvergrowFireCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2400));
  std::allocator<char>::~allocator(v2 + 2400);
  *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2416);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_DELTA,
    "Actor_ElemOvergrowElectricCriticalDelta",
    (const std::allocator<char> *)(v2 + 2416));
  std::allocator<char>::~allocator(v2 + 2416);
  *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 2432);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)&this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_HURT_DELTA,
    "Actor_ElemOvergrowElectricCriticalHurtDelta",
    (const std::allocator<char> *)(v2 + 2432));
  std::allocator<char>::~allocator(v2 + 2432);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF812C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 308) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2464LL, v6);
  }
};

// Line 773: range 000000000F781254-000000000F781D2B
void __cdecl data::AbilityProperty::~AbilityProperty(data::AbilityProperty *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityProperty + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityProperty = v2;
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_BURN_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_BURN_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_PHYSICAL_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_SHIELD_COST_MINUS_EXTRA_RATIO);
  std::string::~string((void *)&this->ACTOR_SKILL_CD_MINUS_EXTRA_RATIO);
  std::string::~string((void *)&this->ACTOR_ROCK_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ICE_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_WIND_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_GRASS_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_WATER_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEC_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_FIRE_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ROCK_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ICE_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_WIND_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_GRASS_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_WATER_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEC_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_FIRE_ADD_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_PHYSICAL_SUB_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_MASTERY_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_CHARGE_EFFICIENCY_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_CRITICAL_HURT_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ANTI_CRITICAL_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_CRITICAL_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_DEFENCE_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ATTACK_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_SHIELD_COST_MINUS_RATIO);
  std::string::~string((void *)&this->ACTOR_SKILL_CD_MINUS_RATIO);
  std::string::~string((void *)&this->ACTOR_ROCK_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ICE_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_WIND_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_GRASS_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_WATER_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEC_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_FIRE_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_PHYSICAL_MUTE_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_DEFENCE_IGNORE_DELTA);
  std::string::~string((void *)&this->ACTOR_DEFENCE_IGNORE_RATIO);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERGROW_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_OVERDOSE_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_FROZENBROKEN_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_EXPLODE_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_FREEZE_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_BURN_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_ELECTRIC_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_MELT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_STEAM_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SCONDUCT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SWIRL_WATER_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SWIRL_ICE_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_MASTERY_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEM_DEFENSE_ROCK_RATIO);
  std::string::~string((void *)&this->ACTOR_ELEM_ATTACK_ROCK_RATIO);
  std::string::~string((void *)&this->ACTOR_ROCK_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ICE_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_WIND_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_GRASS_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_WATER_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEC_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_FIRE_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_PHYSICAL_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_PHYSICAL_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ROCK_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ICE_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_WIND_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_GRASS_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_WATER_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ELEC_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_FIRE_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_DIZZY_SHORTEN_DELTA);
  std::string::~string((void *)&this->ACTOR_FREEZE_SHORTEN_DELTA);
  std::string::~string((void *)&this->ACTOR_DIZZY_RESIST_DELTA);
  std::string::~string((void *)&this->ACTOR_FREEZE_RESIST_DELTA);
  std::string::~string((void *)&this->ACTOR_EFFECT_RESIST_DELTA);
  std::string::~string((void *)&this->ACTOR_EFFECT_HIT_DELTA);
  std::string::~string((void *)&this->ACTOR_HEALED_ADD_DELTA);
  std::string::~string((void *)&this->ACTOR_HEAL_ADD_DELTA);
  std::string::~string((void *)&this->ACTOR_SUB_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ADD_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_CHARGE_EFFICIENCY_DELTA);
  std::string::~string((void *)&this->ACTOR_HIT_HEAD_DMG_RATIO);
  std::string::~string((void *)&this->ACTOR_CRITICAL_HURT_DELTA);
  std::string::~string((void *)&this->ACTOR_ANTI_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_CRITICAL_DELTA);
  std::string::~string((void *)&this->ACTOR_ATTACK_DELTA);
  std::string::~string((void *)&this->ACTOR_ATTACK_RATIO);
  std::string::~string((void *)&this->ACTOR_DEFENCE_DELTA);
  std::string::~string((void *)&this->ACTOR_DEFENCE_RATIO);
  std::string::~string((void *)&this->ACTOR_MAX_HP_DELTA);
  std::string::~string((void *)&this->ACTOR_MAX_HP_RATIO);
  std::string::~string((void *)&this->ACTOR_FLY_OVERALL_SPEED_RATIO);
  std::string::~string((void *)&this->ACTOR_FLY_FORWARD_SPEED_MAX_RATIO);
  std::string::~string((void *)&this->ACTOR_FLY_DOWN_SPEED_RATIO);
  std::string::~string((void *)&this->ACTOR_FLY_ROTATION_ANGULAR_VELOCITY_RATIO);
  std::string::~string((void *)&this->ACTOR_FLY_HORIZONTAL_SPEED_MAX_RATIO);
  std::string::~string((void *)&this->ACTOR_FLY_BACK_SPEED_MAX_RATIO);
  std::string::~string((void *)&this->ACTOR_HP_THRESHOLD_RATIO);
  std::string::~string((void *)&this->ACTOR_FALLING_DAMAGE_RATIO);
  std::string::~string((void *)&this->ACTOR_ENERGY_COST_DELTA);
  std::string::~string((void *)&this->ACTOR_ADSORBATE_PICK_RADIUS_DELTA);
  std::string::~string((void *)&this->ACTOR_RATIO_BULLET_MOVE_SURROUND_RADIUS_RATIO);
  std::string::~string((void *)&this->ACTOR_RATIO_BULLET_MOVE_ANGULAR_VELOCITY_RATIO);
  std::string::~string((void *)&this->ACTOR_RATIO_BULLET_MOVE_SPEED_RATIO);
  std::string::~string((void *)&this->ACTOR_ADD_GRAVITY_SCALE);
  std::string::~string((void *)&this->ACTOR_TIME_SCALE_RATIO);
  std::string::~string((void *)&this->ACTOR_ENDURE_DELTA);
  std::string::~string((void *)&this->ACTOR_WEIGHT_DELTA);
  std::string::~string((void *)&this->ACTOR_DEBUFF_DURATION_RATIO_DELTA);
  std::string::~string((void *)&this->ACTOR_RECOVER_STAMINA_RATIO);
  std::string::~string((void *)&this->ACTOR_RECOVER_STAMINA_DELTA);
  std::string::~string((void *)&this->ACTOR_COST_STAMINA_RATIO);
  std::string::~string((void *)&this->ACTOR_COST_STAMINA_DELTA);
  std::string::~string((void *)&this->ACTOR_MAX_STAMINA_DELTA);
  std::string::~string((void *)&this->ACTOR_MAX_STAMINA_RATIO);
  std::string::~string((void *)&this->ACTOR_ANI_DEFENCE_DELTA);
  std::string::~string((void *)&this->ACTOR_ANI_DAMAGE_DELTA);
  std::string::~string((void *)&this->ENTITY_ANIMATOR_OVERALL_SPEED_MULTIPLIED);
  std::string::~string((void *)&this->ENTITY_ANIMATOR_OVERALL_SPEED);
  std::string::~string((void *)&this->ENTITY_ANIMATOR_ATTACK_SPEED);
  std::string::~string((void *)&this->ENTITY_ANIMATOR_MOVE_SPEED);
  std::string::~string((void *)&this->ENTITY_LIFE_TIME_DELTA);
  std::string::~string((void *)&this->ENTITY_WEIGHT_RATIO);
  std::string::~string((void *)&this->ENTITY_MASS_RATIO);
  std::string::~string((void *)&this->ENTITY_CHARGE_SPEED_RATIO_DELTA);
};
