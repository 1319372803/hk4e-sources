// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigWidgetNew.h

// Line 175: range 000000000E42BE10-000000000E42BEA2
void __cdecl data::ConfigWidgetIconChange::ConfigWidgetIconChange(data::ConfigWidgetIconChange *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->quest_id = 0;
  std::string::basic_string(&this->icon_path);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 175: range 000000000E2259E0-000000000E225AEE
void __cdecl data::ConfigWidgetIconChange::ConfigWidgetIconChange(
        data::ConfigWidgetIconChange *const this,
        const data::ConfigWidgetIconChange *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  std::string *p_icon_path; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigWidgetIconChange *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->quest_id = quest_id;
  p_icon_path = &v7->icon_path;
  std::string::basic_string(&this->icon_path, &v7->icon_path);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_icon_path, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_icon_path) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_icon_path, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 175: range 000000000E225AF0-000000000E225B0E
void __cdecl data::ConfigWidgetIconChange::~ConfigWidgetIconChange(data::ConfigWidgetIconChange *const this)
{
  std::string::~string(&this->icon_path);
};

// Line 199: range 000000000E411FFC-000000000E412197
void __cdecl data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(data::ConfigBaseWidgetToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::enable_shared_from_this<data::ConfigBaseWidgetToy>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseWidgetToy>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseWidgetToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v1);
  }
  this->material_id = 0;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_consume_material >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_consume_material >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_consume_material, v3, v4);
  this->is_consume_material = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_group, v3);
  }
  this->cd_group = 0;
  std::vector<data::WidgetOccupyTag>::vector(&this->tags);
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->business_type, v3);
  }
  this->business_type = Resident;
  v5 = ((_BYTE)this + 68) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 199: range 000000000E41278E-000000000E412A8F
void __cdecl data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(
        data::ConfigBaseWidgetToy *const this,
        const data::ConfigBaseWidgetToy *a2)
{
  std::enable_shared_from_this<data::ConfigBaseWidgetToy> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t material_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_consume_material; // cl
  char v9; // dl
  __int64 v10; // rdx
  uint32_t cd_group; // ecx
  char v12; // al
  data::WidgetOccupyTagArray *p_tags; // rsi
  data::WidgetBusinessType business_type; // ecx
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_json_loaded; // cl
  char v19; // dl
  __int64 v20; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseWidgetToy>;
  std::enable_shared_from_this<data::ConfigBaseWidgetToy>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseWidgetToy>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseWidgetToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseWidgetToy = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->material_id, v2);
  }
  this->material_id = material_id;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_consume_material >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_consume_material >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_consume_material, v6, v7);
  is_consume_material = a2->is_consume_material;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_consume_material >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_consume_material, v6, v10);
  this->is_consume_material = is_consume_material;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd_group);
  }
  cd_group = a2->cd_group;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cd_group >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v6) = v12 != 0;
    __asan_report_store4(&this->cd_group, v6);
  }
  this->cd_group = cd_group;
  p_tags = &a2->tags;
  std::vector<data::WidgetOccupyTag>::vector(&this->tags, &a2->tags);
  if ( *(_BYTE *)(((unsigned __int64)&a2->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->business_type);
  }
  business_type = a2->business_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_tags) = v15 != 0;
    __asan_report_store4(&this->business_type, p_tags);
  }
  this->business_type = business_type;
  v16 = ((_BYTE)a2 + 68) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&a2->is_json_loaded, v16, v17);
  is_json_loaded = a2->is_json_loaded;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_json_loaded, v16, v20);
  this->is_json_loaded = is_json_loaded;
};

// Line 211: range 000000000E412D78-000000000E412DD9
void __cdecl data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(data::ConfigBaseWidgetToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseWidgetToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<data::WidgetOccupyTag>::~vector(&this->tags);
  std::enable_shared_from_this<data::ConfigBaseWidgetToy>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseWidgetToy>);
};

// Line 211: range 000000000E412DDA-000000000E412E04
void __cdecl data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(data::ConfigBaseWidgetToy *const this)
{
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
  operator delete(this, 0x48uLL);
};

// Line 216: range 000000000E190F02-000000000E190F12
const char *__cdecl data::ConfigBaseWidgetToy::getTypeName(const data::ConfigBaseWidgetToy *const this)
{
  return "ConfigBaseWidgetToy";
};

// Line 217: range 000000000E190F14-000000000E1910B0
int32_t __cdecl data::ConfigBaseWidgetToy::getHashNum(const data::ConfigBaseWidgetToy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseWidgetToy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseWidgetToy",
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

// Line 243: range 000000000E412E06-000000000E412F6B
void __cdecl data::ConfigWidgetToyAnchorPoint::ConfigWidgetToyAnchorPoint(data::ConfigWidgetToyAnchorPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAnchorPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cool_down, v1);
  }
  this->cool_down = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lasting_time, v3);
  }
  this->lasting_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count_in_scene, v3);
  }
  this->max_count_in_scene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->gadget_id = 0;
  std::vector<unsigned int>::vector(&this->invalid_scene_ids);
};

// Line 243: range 000000000E413316-000000000E4135A0
void __cdecl data::ConfigWidgetToyAnchorPoint::ConfigWidgetToyAnchorPoint(
        data::ConfigWidgetToyAnchorPoint *const this,
        const data::ConfigWidgetToyAnchorPoint *a2)
{
  int (**v2)(...); // rdx
  uint32_t cool_down; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t lasting_time; // ecx
  char v7; // dl
  uint32_t max_count_in_scene; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gadget_id; // ecx
  char v12; // dl
  const data::ConfigWidgetToyAnchorPoint *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAnchorPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cool_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cool_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cool_down);
  }
  cool_down = a2->cool_down;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cool_down, a2);
  }
  this->cool_down = cool_down;
  v5 = (((_BYTE)v13 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->lasting_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->lasting_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->lasting_time);
  }
  lasting_time = v13->lasting_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->lasting_time, v5);
  }
  this->lasting_time = lasting_time;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->max_count_in_scene);
  }
  max_count_in_scene = v13->max_count_in_scene;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_count_in_scene, v5);
  }
  this->max_count_in_scene = max_count_in_scene;
  v10 = (((_BYTE)v13 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gadget_id);
  }
  gadget_id = v13->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gadget_id, v10);
  }
  this->gadget_id = gadget_id;
  std::vector<unsigned int>::vector(&this->invalid_scene_ids, &v13->invalid_scene_ids);
};

// Line 254: range 000000000E433B22-000000000E433B4C
void __cdecl data::ConfigWidgetToyAnchorPoint::~ConfigWidgetToyAnchorPoint(
        data::ConfigWidgetToyAnchorPoint *const this)
{
  data::ConfigWidgetToyAnchorPoint::~ConfigWidgetToyAnchorPoint(this);
  operator delete(this, 0x70uLL);
};

// Line 254: range 000000000E433AC4-000000000E433B21
void __cdecl data::ConfigWidgetToyAnchorPoint::~ConfigWidgetToyAnchorPoint(
        data::ConfigWidgetToyAnchorPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAnchorPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::~vector(&this->invalid_scene_ids);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 259: range 000000000E1910B2-000000000E1910C2
const char *__cdecl data::ConfigWidgetToyAnchorPoint::getTypeName(const data::ConfigWidgetToyAnchorPoint *const this)
{
  return "ConfigWidgetToyAnchorPoint";
};

// Line 260: range 000000000E1910C4-000000000E191260
int32_t __cdecl data::ConfigWidgetToyAnchorPoint::getHashNum(const data::ConfigWidgetToyAnchorPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyAnchorPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyAnchorPoint",
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

// Line 276: range 000000000E41388A-000000000E4138CB
void __cdecl data::ConfigWidgetToyAnchorPointFactory::ConfigWidgetToyAnchorPointFactory(
        data::ConfigWidgetToyAnchorPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAnchorPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyAnchorPointFactory = v2;
};

// Line 284: range 000000000E413BD4-000000000E413E37
void __cdecl data::ConfigWidgetToyBonfire::ConfigWidgetToyBonfire(data::ConfigWidgetToyBonfire *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBonfire + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cool_down, v1);
  }
  this->cool_down = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lasting_time, v3);
  }
  this->lasting_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count_in_scene, v3);
  }
  this->max_count_in_scene = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_count_by_player, v4);
  }
  this->max_count_by_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v4);
  }
  this->gadget_id = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v5);
  }
  this->distance_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v5);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_destroy_distance, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->combat_destroy_distance = 0.0;
};

// Line 284: range 000000000E4141EC-000000000E414635
void __cdecl data::ConfigWidgetToyBonfire::ConfigWidgetToyBonfire(
        data::ConfigWidgetToyBonfire *const this,
        const data::ConfigWidgetToyBonfire *a2)
{
  int (**v2)(...); // rdx
  uint32_t cool_down; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t lasting_time; // ecx
  char v7; // dl
  uint32_t max_count_in_scene; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t max_count_by_player; // ecx
  char v12; // dl
  uint32_t gadget_id; // ecx
  char v14; // al
  float distance_to_avatar; // xmm0_4
  __int64 v16; // rsi
  float radius; // xmm0_4
  float combat_destroy_distance; // xmm0_4
  const data::ConfigWidgetToyBonfire *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBonfire + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cool_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cool_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cool_down);
  }
  cool_down = a2->cool_down;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cool_down, a2);
  }
  this->cool_down = cool_down;
  v5 = (((_BYTE)v19 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->lasting_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->lasting_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->lasting_time);
  }
  lasting_time = v19->lasting_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->lasting_time, v5);
  }
  this->lasting_time = lasting_time;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->max_count_in_scene);
  }
  max_count_in_scene = v19->max_count_in_scene;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_count_in_scene, v5);
  }
  this->max_count_in_scene = max_count_in_scene;
  v10 = (((_BYTE)v19 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_count_by_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_count_by_player);
  }
  max_count_by_player = v19->max_count_by_player;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->max_count_by_player, v10);
  }
  this->max_count_by_player = max_count_by_player;
  if ( *(_BYTE *)(((unsigned __int64)&v19->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->gadget_id);
  }
  gadget_id = v19->gadget_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->gadget_id, v10);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->distance_to_avatar);
  }
  distance_to_avatar = v19->distance_to_avatar;
  v16 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v16);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v19->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->radius);
  }
  radius = v19->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v16);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&v19->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->combat_destroy_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->combat_destroy_distance);
  }
  combat_destroy_distance = v19->combat_destroy_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_destroy_distance, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->combat_destroy_distance = combat_destroy_distance;
};

// Line 298: range 000000000E433A4A-000000000E433A97
void __cdecl data::ConfigWidgetToyBonfire::~ConfigWidgetToyBonfire(data::ConfigWidgetToyBonfire *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBonfire + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 298: range 000000000E433A98-000000000E433AC2
void __cdecl data::ConfigWidgetToyBonfire::~ConfigWidgetToyBonfire(data::ConfigWidgetToyBonfire *const this)
{
  data::ConfigWidgetToyBonfire::~ConfigWidgetToyBonfire(this);
  operator delete(this, 0x68uLL);
};

// Line 303: range 000000000E191262-000000000E191272
const char *__cdecl data::ConfigWidgetToyBonfire::getTypeName(const data::ConfigWidgetToyBonfire *const this)
{
  return "ConfigWidgetToyBonfire";
};

// Line 304: range 000000000E191274-000000000E191410
int32_t __cdecl data::ConfigWidgetToyBonfire::getHashNum(const data::ConfigWidgetToyBonfire *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyBonfire::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyBonfire",
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

// Line 320: range 000000000E41491E-000000000E41495F
void __cdecl data::ConfigWidgetToyBonfireFactory::ConfigWidgetToyBonfireFactory(
        data::ConfigWidgetToyBonfireFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBonfireFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyBonfireFactory = v2;
};

// Line 328: range 000000000E414C68-000000000E414CCD
void __cdecl data::ConfigWidgetToyLunchBoxHealMaterial::ConfigWidgetToyLunchBoxHealMaterial(
        data::ConfigWidgetToyLunchBoxHealMaterial *const this)
{
  __int64 v1; // rsi

  std::vector<unsigned int>::vector(&this->notice_add_hp_materials);
  std::vector<unsigned int>::vector(&this->other_add_hp_materials);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 328: range 000000000E2165E2-000000000E2166BB
void __cdecl data::ConfigWidgetToyLunchBoxHealMaterial::ConfigWidgetToyLunchBoxHealMaterial(
        data::ConfigWidgetToyLunchBoxHealMaterial *const this,
        const data::ConfigWidgetToyLunchBoxHealMaterial *a2)
{
  data::UInt32Array *p_other_add_hp_materials; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<unsigned int>::vector(&this->notice_add_hp_materials, &a2->notice_add_hp_materials);
  p_other_add_hp_materials = &a2->other_add_hp_materials;
  std::vector<unsigned int>::vector(&this->other_add_hp_materials, p_other_add_hp_materials);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_other_add_hp_materials, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_other_add_hp_materials) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_other_add_hp_materials, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 328: range 000000000E2166BC-000000000E2166E6
void __cdecl data::ConfigWidgetToyLunchBoxHealMaterial::~ConfigWidgetToyLunchBoxHealMaterial(
        data::ConfigWidgetToyLunchBoxHealMaterial *const this)
{
  std::vector<unsigned int>::~vector(&this->other_add_hp_materials);
  std::vector<unsigned int>::~vector(&this->notice_add_hp_materials);
};

// Line 352: range 000000000E414CCE-000000000E414D3B
void __cdecl data::ConfigWidgetToyLunchBox::ConfigWidgetToyLunchBox(data::ConfigWidgetToyLunchBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyLunchBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::vector(&this->revive_materials);
  data::ConfigWidgetToyLunchBoxHealMaterial::ConfigWidgetToyLunchBoxHealMaterial(&this->heal_materials);
};

// Line 352: range 000000000E4150F8-000000000E4151BE
void __cdecl data::ConfigWidgetToyLunchBox::ConfigWidgetToyLunchBox(
        data::ConfigWidgetToyLunchBox *const this,
        const data::ConfigWidgetToyLunchBox *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyLunchBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::vector(&this->revive_materials, &a2->revive_materials);
  data::ConfigWidgetToyLunchBoxHealMaterial::ConfigWidgetToyLunchBoxHealMaterial(
    &this->heal_materials,
    &a2->heal_materials);
};

// Line 360: range 000000000E433A1E-000000000E433A48
void __cdecl data::ConfigWidgetToyLunchBox::~ConfigWidgetToyLunchBox(data::ConfigWidgetToyLunchBox *const this)
{
  data::ConfigWidgetToyLunchBox::~ConfigWidgetToyLunchBox(this);
  operator delete(this, 0x98uLL);
};

// Line 360: range 000000000E4339B0-000000000E433A1D
void __cdecl data::ConfigWidgetToyLunchBox::~ConfigWidgetToyLunchBox(data::ConfigWidgetToyLunchBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyLunchBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetToyLunchBoxHealMaterial::~ConfigWidgetToyLunchBoxHealMaterial(&this->heal_materials);
  std::vector<unsigned int>::~vector(&this->revive_materials);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 365: range 000000000E191412-000000000E191422
const char *__cdecl data::ConfigWidgetToyLunchBox::getTypeName(const data::ConfigWidgetToyLunchBox *const this)
{
  return "ConfigWidgetToyLunchBox";
};

// Line 366: range 000000000E191424-000000000E1915C0
int32_t __cdecl data::ConfigWidgetToyLunchBox::getHashNum(const data::ConfigWidgetToyLunchBox *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyLunchBox::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyLunchBox",
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

// Line 382: range 000000000E4154A8-000000000E4154E9
void __cdecl data::ConfigWidgetToyLunchBoxFactory::ConfigWidgetToyLunchBoxFactory(
        data::ConfigWidgetToyLunchBoxFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyLunchBoxFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyLunchBoxFactory = v2;
};

// Line 390: range 000000000E4157F2-000000000E415989
void __cdecl data::ConfigWidgetToyClintDetector::ConfigWidgetToyClintDetector(
        data::ConfigWidgetToyClintDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->allow_city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->allow_city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->allow_city_id, v3);
  }
  this->allow_city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_group, v3);
  }
  this->hint_group = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v4);
  }
  this->distance_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v4);
  }
  this->height = 0.0;
};

// Line 390: range 000000000E415D3E-000000000E416005
void __cdecl data::ConfigWidgetToyClintDetector::ConfigWidgetToyClintDetector(
        data::ConfigWidgetToyClintDetector *const this,
        const data::ConfigWidgetToyClintDetector *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t allow_city_id; // ecx
  char v7; // dl
  uint32_t hint_group; // ecx
  char v9; // al
  float distance_to_avatar; // xmm0_4
  __int64 v11; // rsi
  float height; // xmm0_4
  const data::ConfigWidgetToyClintDetector *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_id, a2);
  }
  this->gadget_id = gadget_id;
  v5 = (((_BYTE)v13 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->allow_city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->allow_city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->allow_city_id);
  }
  allow_city_id = v13->allow_city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->allow_city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->allow_city_id, v5);
  }
  this->allow_city_id = allow_city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->hint_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->hint_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->hint_group);
  }
  hint_group = v13->hint_group;
  v9 = *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->hint_group, v5);
  }
  this->hint_group = hint_group;
  if ( *(_BYTE *)(((unsigned __int64)&v13->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->distance_to_avatar);
  }
  distance_to_avatar = v13->distance_to_avatar;
  v11 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v11);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v13->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->height);
  }
  height = v13->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v11);
  }
  this->height = height;
};

// Line 401: range 000000000E433984-000000000E4339AE
void __cdecl data::ConfigWidgetToyClintDetector::~ConfigWidgetToyClintDetector(
        data::ConfigWidgetToyClintDetector *const this)
{
  data::ConfigWidgetToyClintDetector::~ConfigWidgetToyClintDetector(this);
  operator delete(this, 0x60uLL);
};

// Line 401: range 000000000E433936-000000000E433983
void __cdecl data::ConfigWidgetToyClintDetector::~ConfigWidgetToyClintDetector(
        data::ConfigWidgetToyClintDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 406: range 000000000E1915C2-000000000E1915D2
const char *__cdecl data::ConfigWidgetToyClintDetector::getTypeName(
        const data::ConfigWidgetToyClintDetector *const this)
{
  return "ConfigWidgetToyClintDetector";
};

// Line 407: range 000000000E1915D4-000000000E191770
int32_t __cdecl data::ConfigWidgetToyClintDetector::getHashNum(const data::ConfigWidgetToyClintDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyClintDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyClintDetector",
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

// Line 423: range 000000000E4162EE-000000000E41632F
void __cdecl data::ConfigWidgetToyClintDetectorFactory::ConfigWidgetToyClintDetectorFactory(
        data::ConfigWidgetToyClintDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyClintDetectorFactory = v2;
};

// Line 431: range 000000000E416638-000000000E41691D
void __cdecl data::ConfigWidgetToyOneoffGatherPointDetector::ConfigWidgetToyOneoffGatherPointDetector(
        data::ConfigWidgetToyOneoffGatherPointDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_radius, v1);
  }
  this->hint_radius = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->nearby_radius, v3);
  }
  this->nearby_radius = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->grid_search_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grid_search_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->grid_search_range, v3);
  }
  this->grid_search_range = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->success_gadget_id, v4);
  }
  this->success_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->failed_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->failed_gadget_id, v4);
  }
  this->failed_gadget_id = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_point_type, v5);
  }
  this->gather_point_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_group, v5);
  }
  this->hint_group = 0;
  v6 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_last_time, v6);
  }
  this->effect_last_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_to_avatar, v6);
  }
  this->distance_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->height = 0.0;
};

// Line 431: range 000000000E416CC8-000000000E417208
void __cdecl data::ConfigWidgetToyOneoffGatherPointDetector::ConfigWidgetToyOneoffGatherPointDetector(
        data::ConfigWidgetToyOneoffGatherPointDetector *const this,
        const data::ConfigWidgetToyOneoffGatherPointDetector *a2)
{
  int (**v2)(...); // rdx
  uint32_t hint_radius; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t nearby_radius; // ecx
  char v7; // dl
  uint32_t grid_search_range; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t success_gadget_id; // ecx
  char v12; // dl
  uint32_t failed_gadget_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t gather_point_type; // ecx
  char v17; // dl
  uint32_t hint_group; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t effect_last_time; // ecx
  char v22; // dl
  float distance_to_avatar; // xmm0_4
  float height; // xmm0_4
  const data::ConfigWidgetToyOneoffGatherPointDetector *v25; // [rsp+0h] [rbp-10h]

  v25 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hint_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hint_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hint_radius);
  }
  hint_radius = a2->hint_radius;
  v4 = *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->hint_radius, a2);
  }
  this->hint_radius = hint_radius;
  v5 = (((_BYTE)v25 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->nearby_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->nearby_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->nearby_radius);
  }
  nearby_radius = v25->nearby_radius;
  v7 = *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->nearby_radius, v5);
  }
  this->nearby_radius = nearby_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v25->grid_search_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->grid_search_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->grid_search_range);
  }
  grid_search_range = v25->grid_search_range;
  v9 = *(_BYTE *)(((unsigned __int64)&this->grid_search_range >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->grid_search_range, v5);
  }
  this->grid_search_range = grid_search_range;
  v10 = (((_BYTE)v25 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->success_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->success_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->success_gadget_id);
  }
  success_gadget_id = v25->success_gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->success_gadget_id, v10);
  }
  this->success_gadget_id = success_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->failed_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->failed_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->failed_gadget_id);
  }
  failed_gadget_id = v25->failed_gadget_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->failed_gadget_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->failed_gadget_id, v10);
  }
  this->failed_gadget_id = failed_gadget_id;
  v15 = (((_BYTE)v25 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->gather_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->gather_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->gather_point_type);
  }
  gather_point_type = v25->gather_point_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->gather_point_type, v15);
  }
  this->gather_point_type = gather_point_type;
  if ( *(_BYTE *)(((unsigned __int64)&v25->hint_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->hint_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->hint_group);
  }
  hint_group = v25->hint_group;
  v19 = *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->hint_group, v15);
  }
  this->hint_group = hint_group;
  v20 = (((_BYTE)v25 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->effect_last_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->effect_last_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->effect_last_time);
  }
  effect_last_time = v25->effect_last_time;
  v22 = *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v22 != 0;
  if ( v22 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v22 )
    __asan_report_store4(&this->effect_last_time, v20);
  this->effect_last_time = effect_last_time;
  if ( *(_BYTE *)(((unsigned __int64)&v25->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->distance_to_avatar);
  }
  distance_to_avatar = v25->distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_to_avatar, v20);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v25->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->height);
  }
  height = v25->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->height = height;
};

// Line 447: range 000000000E43390A-000000000E433934
void __cdecl data::ConfigWidgetToyOneoffGatherPointDetector::~ConfigWidgetToyOneoffGatherPointDetector(
        data::ConfigWidgetToyOneoffGatherPointDetector *const this)
{
  data::ConfigWidgetToyOneoffGatherPointDetector::~ConfigWidgetToyOneoffGatherPointDetector(this);
  operator delete(this, 0x70uLL);
};

// Line 447: range 000000000E4338BC-000000000E433909
void __cdecl data::ConfigWidgetToyOneoffGatherPointDetector::~ConfigWidgetToyOneoffGatherPointDetector(
        data::ConfigWidgetToyOneoffGatherPointDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 452: range 000000000E191772-000000000E191782
const char *__cdecl data::ConfigWidgetToyOneoffGatherPointDetector::getTypeName(
        const data::ConfigWidgetToyOneoffGatherPointDetector *const this)
{
  return "ConfigWidgetToyOneoffGatherPointDetector";
};

// Line 453: range 000000000E191784-000000000E191920
int32_t __cdecl data::ConfigWidgetToyOneoffGatherPointDetector::getHashNum(
        const data::ConfigWidgetToyOneoffGatherPointDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyOneoffGatherPointDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyOneoffGatherPointDetector",
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

// Line 469: range 000000000E4174F2-000000000E417533
void __cdecl data::ConfigWidgetToyOneoffGatherPointDetectorFactory::ConfigWidgetToyOneoffGatherPointDetectorFactory(
        data::ConfigWidgetToyOneoffGatherPointDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOneoffGatherPointDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyOneoffGatherPointDetectorFactory = v2;
};

// Line 477: range 000000000E41783C-000000000E417A50
void __cdecl data::ConfigWidgetToyClintCollector::ConfigWidgetToyClintCollector(
        data::ConfigWidgetToyClintCollector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintCollector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v1);
  }
  this->target_type = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type, v3);
  }
  this->element_type = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recharge_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recharge_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recharge_points, v3);
  }
  this->recharge_points = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_points, v4);
  }
  this->max_points = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_gadget_id, v4);
  }
  this->effect_gadget_id = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_gadget_id, v5);
  }
  this->use_gadget_id = 0;
  if ( *(char *)(((unsigned __int64)&this->allow_other_world >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->allow_other_world, v5, &this->allow_other_world);
  this->allow_other_world = 0;
};

// Line 477: range 000000000E417E06-000000000E4181C2
void __cdecl data::ConfigWidgetToyClintCollector::ConfigWidgetToyClintCollector(
        data::ConfigWidgetToyClintCollector *const this,
        const data::ConfigWidgetToyClintCollector *a2)
{
  int (**v2)(...); // rdx
  data::CollectorType target_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ElementType element_type; // ecx
  char v7; // dl
  uint32_t recharge_points; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t max_points; // ecx
  char v12; // dl
  uint32_t effect_gadget_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t use_gadget_id; // ecx
  char v17; // dl
  bool allow_other_world; // cl
  char v19; // al
  const data::ConfigWidgetToyClintCollector *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintCollector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->target_type, a2);
  }
  this->target_type = target_type;
  v5 = (((_BYTE)v20 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->element_type);
  }
  element_type = v20->element_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->element_type, v5);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&v20->recharge_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->recharge_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->recharge_points);
  }
  recharge_points = v20->recharge_points;
  v9 = *(_BYTE *)(((unsigned __int64)&this->recharge_points >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->recharge_points, v5);
  }
  this->recharge_points = recharge_points;
  v10 = (((_BYTE)v20 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->max_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->max_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->max_points);
  }
  max_points = v20->max_points;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_points >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->max_points, v10);
  }
  this->max_points = max_points;
  if ( *(_BYTE *)(((unsigned __int64)&v20->effect_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->effect_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->effect_gadget_id);
  }
  effect_gadget_id = v20->effect_gadget_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->effect_gadget_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->effect_gadget_id, v10);
  }
  this->effect_gadget_id = effect_gadget_id;
  v15 = (((_BYTE)v20 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->use_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->use_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->use_gadget_id);
  }
  use_gadget_id = v20->use_gadget_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v17 )
    __asan_report_store4(&this->use_gadget_id, v15);
  this->use_gadget_id = use_gadget_id;
  if ( *(char *)(((unsigned __int64)&v20->allow_other_world >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->allow_other_world, v15, &v20->allow_other_world);
  allow_other_world = v20->allow_other_world;
  v19 = *(_BYTE *)(((unsigned __int64)&this->allow_other_world >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->allow_other_world, v15, &this->allow_other_world);
  }
  this->allow_other_world = allow_other_world;
};

// Line 490: range 000000000E433890-000000000E4338BA
void __cdecl data::ConfigWidgetToyClintCollector::~ConfigWidgetToyClintCollector(
        data::ConfigWidgetToyClintCollector *const this)
{
  data::ConfigWidgetToyClintCollector::~ConfigWidgetToyClintCollector(this);
  operator delete(this, 0x68uLL);
};

// Line 490: range 000000000E433842-000000000E43388F
void __cdecl data::ConfigWidgetToyClintCollector::~ConfigWidgetToyClintCollector(
        data::ConfigWidgetToyClintCollector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintCollector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 495: range 000000000E191922-000000000E191932
const char *__cdecl data::ConfigWidgetToyClintCollector::getTypeName(
        const data::ConfigWidgetToyClintCollector *const this)
{
  return "ConfigWidgetToyClintCollector";
};

// Line 496: range 000000000E191934-000000000E191AD0
int32_t __cdecl data::ConfigWidgetToyClintCollector::getHashNum(const data::ConfigWidgetToyClintCollector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyClintCollector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyClintCollector",
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

// Line 512: range 000000000E4184AC-000000000E4184ED
void __cdecl data::ConfigWidgetToyClintCollectorFactory::ConfigWidgetToyClintCollectorFactory(
        data::ConfigWidgetToyClintCollectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyClintCollectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyClintCollectorFactory = v2;
};

// Line 520: range 000000000E4187F6-000000000E41894B
void __cdecl data::ConfigWidgetToyTreasureMapDetector::ConfigWidgetToyTreasureMapDetector(
        data::ConfigWidgetToyTreasureMapDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_succ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius_succ, v3);
  }
  this->radius_succ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_range, v3);
  }
  this->detect_range = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_duration, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->gadget_duration = 0;
};

// Line 520: range 000000000E418D06-000000000E418F52
void __cdecl data::ConfigWidgetToyTreasureMapDetector::ConfigWidgetToyTreasureMapDetector(
        data::ConfigWidgetToyTreasureMapDetector *const this,
        const data::ConfigWidgetToyTreasureMapDetector *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t radius_succ; // ecx
  char v7; // dl
  uint32_t detect_range; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gadget_duration; // ecx
  char v12; // dl
  const data::ConfigWidgetToyTreasureMapDetector *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_id, a2);
  }
  this->gadget_id = gadget_id;
  v5 = (((_BYTE)v13 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->radius_succ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->radius_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->radius_succ);
  }
  radius_succ = v13->radius_succ;
  v7 = *(_BYTE *)(((unsigned __int64)&this->radius_succ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->radius_succ, v5);
  }
  this->radius_succ = radius_succ;
  if ( *(_BYTE *)(((unsigned __int64)&v13->detect_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->detect_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->detect_range);
  }
  detect_range = v13->detect_range;
  v9 = *(_BYTE *)(((unsigned __int64)&this->detect_range >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->detect_range, v5);
  }
  this->detect_range = detect_range;
  v10 = (((_BYTE)v13 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gadget_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gadget_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gadget_duration);
  }
  gadget_duration = v13->gadget_duration;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gadget_duration, v10);
  }
  this->gadget_duration = gadget_duration;
};

// Line 530: range 000000000E433816-000000000E433840
void __cdecl data::ConfigWidgetToyTreasureMapDetector::~ConfigWidgetToyTreasureMapDetector(
        data::ConfigWidgetToyTreasureMapDetector *const this)
{
  data::ConfigWidgetToyTreasureMapDetector::~ConfigWidgetToyTreasureMapDetector(this);
  operator delete(this, 0x58uLL);
};

// Line 530: range 000000000E4337C8-000000000E433815
void __cdecl data::ConfigWidgetToyTreasureMapDetector::~ConfigWidgetToyTreasureMapDetector(
        data::ConfigWidgetToyTreasureMapDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 535: range 000000000E191AD2-000000000E191AE2
const char *__cdecl data::ConfigWidgetToyTreasureMapDetector::getTypeName(
        const data::ConfigWidgetToyTreasureMapDetector *const this)
{
  return "ConfigWidgetToyTreasureMapDetector";
};

// Line 536: range 000000000E191AE4-000000000E191C80
int32_t __cdecl data::ConfigWidgetToyTreasureMapDetector::getHashNum(
        const data::ConfigWidgetToyTreasureMapDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyTreasureMapDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyTreasureMapDetector",
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

// Line 552: range 000000000E41923C-000000000E41927D
void __cdecl data::ConfigWidgetToyTreasureMapDetectorFactory::ConfigWidgetToyTreasureMapDetectorFactory(
        data::ConfigWidgetToyTreasureMapDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureMapDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyTreasureMapDetectorFactory = v2;
};

// Line 560: range 000000000E419586-000000000E419657
void __cdecl data::ConfigWidgetToyTreasureSeelie::ConfigWidgetToyTreasureSeelie(
        data::ConfigWidgetToyTreasureSeelie *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureSeelie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_duration, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->gadget_duration = 0;
};

// Line 560: range 000000000E419A7C-000000000E419BCE
void __cdecl data::ConfigWidgetToyTreasureSeelie::ConfigWidgetToyTreasureSeelie(
        data::ConfigWidgetToyTreasureSeelie *const this,
        const data::ConfigWidgetToyTreasureSeelie *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_duration; // ecx
  char v7; // dl
  const data::ConfigWidgetToyTreasureSeelie *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureSeelie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_id, a2);
  }
  this->gadget_id = gadget_id;
  v5 = (((_BYTE)v8 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gadget_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gadget_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gadget_duration);
  }
  gadget_duration = v8->gadget_duration;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_duration, v5);
  }
  this->gadget_duration = gadget_duration;
};

// Line 568: range 000000000E43374E-000000000E43379B
void __cdecl data::ConfigWidgetToyTreasureSeelie::~ConfigWidgetToyTreasureSeelie(
        data::ConfigWidgetToyTreasureSeelie *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureSeelie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 568: range 000000000E43379C-000000000E4337C6
void __cdecl data::ConfigWidgetToyTreasureSeelie::~ConfigWidgetToyTreasureSeelie(
        data::ConfigWidgetToyTreasureSeelie *const this)
{
  data::ConfigWidgetToyTreasureSeelie::~ConfigWidgetToyTreasureSeelie(this);
  operator delete(this, 0x50uLL);
};

// Line 573: range 000000000E191C82-000000000E191C92
const char *__cdecl data::ConfigWidgetToyTreasureSeelie::getTypeName(
        const data::ConfigWidgetToyTreasureSeelie *const this)
{
  return "ConfigWidgetToyTreasureSeelie";
};

// Line 574: range 000000000E191C94-000000000E191E30
int32_t __cdecl data::ConfigWidgetToyTreasureSeelie::getHashNum(const data::ConfigWidgetToyTreasureSeelie *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyTreasureSeelie::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyTreasureSeelie",
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

// Line 590: range 000000000E419EB8-000000000E419EF9
void __cdecl data::ConfigWidgetToyTreasureSeelieFactory::ConfigWidgetToyTreasureSeelieFactory(
        data::ConfigWidgetToyTreasureSeelieFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTreasureSeelieFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyTreasureSeelieFactory = v2;
};

// Line 598: range 000000000E41A202-000000000E41A28F
void __cdecl data::ConfigWidgetToyBlessingCamera::ConfigWidgetToyBlessingCamera(
        data::ConfigWidgetToyBlessingCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBlessingCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)this + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_fixed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_fixed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_fixed, v3, v4);
  this->is_fixed = 0;
};

// Line 598: range 000000000E41A6AA-000000000E41A782
void __cdecl data::ConfigWidgetToyBlessingCamera::ConfigWidgetToyBlessingCamera(
        data::ConfigWidgetToyBlessingCamera *const this,
        const data::ConfigWidgetToyBlessingCamera *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_fixed; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(
    (data::ConfigBaseWidgetToy *const)this,
    (const data::ConfigBaseWidgetToy *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBlessingCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)a2 + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_fixed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_fixed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_fixed, v3, v4);
  is_fixed = a2->is_fixed;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_fixed >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_fixed, v3, v7);
  this->is_fixed = is_fixed;
};

// Line 605: range 000000000E4336D4-000000000E433721
void __cdecl data::ConfigWidgetToyBlessingCamera::~ConfigWidgetToyBlessingCamera(
        data::ConfigWidgetToyBlessingCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBlessingCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
};

// Line 605: range 000000000E433722-000000000E43374C
void __cdecl data::ConfigWidgetToyBlessingCamera::~ConfigWidgetToyBlessingCamera(
        data::ConfigWidgetToyBlessingCamera *const this)
{
  data::ConfigWidgetToyBlessingCamera::~ConfigWidgetToyBlessingCamera(this);
  operator delete(this, 0x48uLL);
};

// Line 610: range 000000000E191E32-000000000E191E42
const char *__cdecl data::ConfigWidgetToyBlessingCamera::getTypeName(
        const data::ConfigWidgetToyBlessingCamera *const this)
{
  return "ConfigWidgetToyBlessingCamera";
};

// Line 611: range 000000000E191E44-000000000E191FE0
int32_t __cdecl data::ConfigWidgetToyBlessingCamera::getHashNum(const data::ConfigWidgetToyBlessingCamera *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyBlessingCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyBlessingCamera",
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

// Line 627: range 000000000E41AA6C-000000000E41AAAD
void __cdecl data::ConfigWidgetToyBlessingCameraFactory::ConfigWidgetToyBlessingCameraFactory(
        data::ConfigWidgetToyBlessingCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyBlessingCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyBlessingCameraFactory = v2;
};

// Line 649: range 000000000E41AF16-000000000E41AFA1
void __cdecl data::ConfigWidgetScanCamera::ConfigWidgetScanCamera(data::ConfigWidgetScanCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetScanCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scan_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scan_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scan_type, v1);
  }
  this->scan_type = 0;
};

// Line 649: range 000000000E41B3C6-000000000E41B493
void __cdecl data::ConfigWidgetScanCamera::ConfigWidgetScanCamera(
        data::ConfigWidgetScanCamera *const this,
        const data::ConfigWidgetScanCamera *a2)
{
  int (**v2)(...); // rdx
  data::ScanCameraType scan_type; // ecx
  char v4; // al

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetScanCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scan_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scan_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scan_type);
  }
  scan_type = a2->scan_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scan_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->scan_type, a2);
  }
  this->scan_type = scan_type;
};

// Line 656: range 000000000E4336A8-000000000E4336D2
void __cdecl data::ConfigWidgetScanCamera::~ConfigWidgetScanCamera(data::ConfigWidgetScanCamera *const this)
{
  data::ConfigWidgetScanCamera::~ConfigWidgetScanCamera(this);
  operator delete(this, 0x50uLL);
};

// Line 656: range 000000000E43365A-000000000E4336A7
void __cdecl data::ConfigWidgetScanCamera::~ConfigWidgetScanCamera(data::ConfigWidgetScanCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetScanCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 661: range 000000000E191FE2-000000000E191FF2
const char *__cdecl data::ConfigWidgetScanCamera::getTypeName(const data::ConfigWidgetScanCamera *const this)
{
  return "ConfigWidgetScanCamera";
};

// Line 662: range 000000000E191FF4-000000000E192190
int32_t __cdecl data::ConfigWidgetScanCamera::getHashNum(const data::ConfigWidgetScanCamera *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetScanCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetScanCamera",
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

// Line 678: range 000000000E41B77C-000000000E41B7BD
void __cdecl data::ConfigWidgetScanCameraFactory::ConfigWidgetScanCameraFactory(
        data::ConfigWidgetScanCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetScanCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetScanCameraFactory = v2;
};

// Line 686: range 000000000E41BAC6-000000000E41BD23
void __cdecl data::ConfigWidgetToyGadgetBuilder::ConfigWidgetToyGadgetBuilder(
        data::ConfigWidgetToyGadgetBuilder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lasting_time, v1);
  }
  this->lasting_time = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_count_in_scene, v3);
  }
  this->max_count_in_scene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count_by_player, v3);
  }
  this->max_count_by_player = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v4);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_to_avatar, v4);
  }
  this->distance_to_avatar = 0.0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_to_avatar, v5);
  }
  this->height_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v5);
  }
  this->radius = 0.0;
  v6 = ((_BYTE)this + 100) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->check_collision >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->check_collision >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->check_collision, v6, v7);
  this->check_collision = 0;
};

// Line 686: range 000000000E41C0D8-000000000E41C51C
void __cdecl data::ConfigWidgetToyGadgetBuilder::ConfigWidgetToyGadgetBuilder(
        data::ConfigWidgetToyGadgetBuilder *const this,
        const data::ConfigWidgetToyGadgetBuilder *a2)
{
  int (**v2)(...); // rdx
  uint32_t lasting_time; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_count_in_scene; // ecx
  char v7; // dl
  uint32_t max_count_by_player; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gadget_id; // ecx
  char v12; // dl
  float distance_to_avatar; // xmm0_4
  float height_to_avatar; // xmm0_4
  __int64 v15; // rsi
  float radius; // xmm0_4
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool check_collision; // cl
  char v20; // dl
  __int64 v21; // rdx
  const data::ConfigWidgetToyGadgetBuilder *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->lasting_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->lasting_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->lasting_time);
  }
  lasting_time = a2->lasting_time;
  v4 = *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->lasting_time, a2);
  }
  this->lasting_time = lasting_time;
  v5 = (((_BYTE)v22 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->max_count_in_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->max_count_in_scene);
  }
  max_count_in_scene = v22->max_count_in_scene;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_count_in_scene, v5);
  }
  this->max_count_in_scene = max_count_in_scene;
  if ( *(_BYTE *)(((unsigned __int64)&v22->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->max_count_by_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->max_count_by_player);
  }
  max_count_by_player = v22->max_count_by_player;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_count_by_player, v5);
  }
  this->max_count_by_player = max_count_by_player;
  v10 = (((_BYTE)v22 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->gadget_id);
  }
  gadget_id = v22->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
    __asan_report_store4(&this->gadget_id, v10);
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v22->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->distance_to_avatar);
  }
  distance_to_avatar = v22->distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_to_avatar, v10);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v22->height_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->height_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->height_to_avatar);
  }
  height_to_avatar = v22->height_to_avatar;
  v15 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_to_avatar, v15);
  }
  this->height_to_avatar = height_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v22->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->radius);
  }
  radius = v22->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v15);
  }
  this->radius = radius;
  v17 = ((_BYTE)v22 + 100) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v22->check_collision >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v22->check_collision >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v22->check_collision, v17, v18);
  check_collision = v22->check_collision;
  v20 = *(_BYTE *)(((unsigned __int64)&this->check_collision >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->check_collision, v17, v21);
  this->check_collision = check_collision;
};

// Line 700: range 000000000E43362E-000000000E433658
void __cdecl data::ConfigWidgetToyGadgetBuilder::~ConfigWidgetToyGadgetBuilder(
        data::ConfigWidgetToyGadgetBuilder *const this)
{
  data::ConfigWidgetToyGadgetBuilder::~ConfigWidgetToyGadgetBuilder(this);
  operator delete(this, 0x68uLL);
};

// Line 700: range 000000000E4335E0-000000000E43362D
void __cdecl data::ConfigWidgetToyGadgetBuilder::~ConfigWidgetToyGadgetBuilder(
        data::ConfigWidgetToyGadgetBuilder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 705: range 000000000E192192-000000000E1921A2
const char *__cdecl data::ConfigWidgetToyGadgetBuilder::getTypeName(
        const data::ConfigWidgetToyGadgetBuilder *const this)
{
  return "ConfigWidgetToyGadgetBuilder";
};

// Line 706: range 000000000E1921A4-000000000E192340
int32_t __cdecl data::ConfigWidgetToyGadgetBuilder::getHashNum(const data::ConfigWidgetToyGadgetBuilder *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyGadgetBuilder::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyGadgetBuilder",
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

// Line 722: range 000000000E41C806-000000000E41C847
void __cdecl data::ConfigWidgetToyGadgetBuilderFactory::ConfigWidgetToyGadgetBuilderFactory(
        data::ConfigWidgetToyGadgetBuilderFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyGadgetBuilderFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyGadgetBuilderFactory = v2;
};

// Line 730: range 000000000E41CB50-000000000E41CDAF
void __cdecl data::ConfigWidgetToyMiracleRing::ConfigWidgetToyMiracleRing(data::ConfigWidgetToyMiracleRing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyMiracleRing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)this + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_allowed_in_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_allowed_in_dungeon, v3, v4);
  this->is_allowed_in_dungeon = 0;
  v5 = ((_BYTE)this + 70) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_allowed_in_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_allowed_in_room, v5, v6);
  this->is_allowed_in_room = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count_in_scene, v5);
  }
  this->max_count_in_scene = 0;
  v7 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_count_by_player, v7);
  }
  this->max_count_by_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_gadget_id, v7);
  }
  this->create_gadget_id = 0;
  v8 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v8);
  }
  this->distance_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v8);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_destroy_distance, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->combat_destroy_distance = 0.0;
};

// Line 730: range 000000000E41D164-000000000E41D5B3
void __cdecl data::ConfigWidgetToyMiracleRing::ConfigWidgetToyMiracleRing(
        data::ConfigWidgetToyMiracleRing *const this,
        const data::ConfigWidgetToyMiracleRing *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_allowed_in_dungeon; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_allowed_in_room; // cl
  char v11; // dl
  __int64 v12; // rdx
  uint32_t max_count_in_scene; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t max_count_by_player; // ecx
  char v17; // dl
  uint32_t create_gadget_id; // ecx
  char v19; // al
  float distance_to_avatar; // xmm0_4
  __int64 v21; // rsi
  float radius; // xmm0_4
  float combat_destroy_distance; // xmm0_4

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(
    (data::ConfigBaseWidgetToy *const)this,
    (const data::ConfigBaseWidgetToy *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyMiracleRing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)a2 + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_allowed_in_dungeon, v3, v4);
  is_allowed_in_dungeon = a2->is_allowed_in_dungeon;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_dungeon >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_allowed_in_dungeon, v3, v7);
  this->is_allowed_in_dungeon = is_allowed_in_dungeon;
  v8 = ((_BYTE)a2 + 70) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_allowed_in_room, v8, v9);
  is_allowed_in_room = a2->is_allowed_in_room;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_room >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 70) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_allowed_in_room, v8, v12);
  this->is_allowed_in_room = is_allowed_in_room;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_count_in_scene);
  }
  max_count_in_scene = a2->max_count_in_scene;
  v14 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v8) = v14 != 0;
    __asan_report_store4(&this->max_count_in_scene, v8);
  }
  this->max_count_in_scene = max_count_in_scene;
  v15 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_count_by_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_count_by_player);
  }
  max_count_by_player = a2->max_count_by_player;
  v17 = *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->max_count_by_player, v15);
  }
  this->max_count_by_player = max_count_by_player;
  if ( *(_BYTE *)(((unsigned __int64)&a2->create_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->create_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->create_gadget_id);
  }
  create_gadget_id = a2->create_gadget_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->create_gadget_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->create_gadget_id, v15);
  }
  this->create_gadget_id = create_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance_to_avatar);
  }
  distance_to_avatar = a2->distance_to_avatar;
  v21 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v21);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v21);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->combat_destroy_distance >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->combat_destroy_distance);
  }
  combat_destroy_distance = a2->combat_destroy_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_destroy_distance, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->combat_destroy_distance = combat_destroy_distance;
};

// Line 744: range 000000000E433566-000000000E4335B3
void __cdecl data::ConfigWidgetToyMiracleRing::~ConfigWidgetToyMiracleRing(
        data::ConfigWidgetToyMiracleRing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyMiracleRing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
};

// Line 744: range 000000000E4335B4-000000000E4335DE
void __cdecl data::ConfigWidgetToyMiracleRing::~ConfigWidgetToyMiracleRing(
        data::ConfigWidgetToyMiracleRing *const this)
{
  data::ConfigWidgetToyMiracleRing::~ConfigWidgetToyMiracleRing(this);
  operator delete(this, 0x60uLL);
};

// Line 749: range 000000000E192342-000000000E192352
const char *__cdecl data::ConfigWidgetToyMiracleRing::getTypeName(const data::ConfigWidgetToyMiracleRing *const this)
{
  return "ConfigWidgetToyMiracleRing";
};

// Line 750: range 000000000E192354-000000000E1924F0
int32_t __cdecl data::ConfigWidgetToyMiracleRing::getHashNum(const data::ConfigWidgetToyMiracleRing *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyMiracleRing::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyMiracleRing",
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

// Line 766: range 000000000E41D89C-000000000E41D8DD
void __cdecl data::ConfigWidgetToyMiracleRingFactory::ConfigWidgetToyMiracleRingFactory(
        data::ConfigWidgetToyMiracleRingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyMiracleRingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyMiracleRingFactory = v2;
};

// Line 774: range 000000000E41DBE6-000000000E41DC43
void __cdecl data::ConfigWidgetToyOpenPage::ConfigWidgetToyOpenPage(data::ConfigWidgetToyOpenPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOpenPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->page_name);
};

// Line 774: range 000000000E41DFF8-000000000E41E08E
void __cdecl data::ConfigWidgetToyOpenPage::ConfigWidgetToyOpenPage(
        data::ConfigWidgetToyOpenPage *const this,
        const data::ConfigWidgetToyOpenPage *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOpenPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->page_name, &a2->page_name);
};

// Line 781: range 000000000E41E3D6-000000000E41E400
void __cdecl data::ConfigWidgetToyOpenPage::~ConfigWidgetToyOpenPage(data::ConfigWidgetToyOpenPage *const this)
{
  data::ConfigWidgetToyOpenPage::~ConfigWidgetToyOpenPage(this);
  operator delete(this, 0x68uLL);
};

// Line 781: range 000000000E41E378-000000000E41E3D5
void __cdecl data::ConfigWidgetToyOpenPage::~ConfigWidgetToyOpenPage(data::ConfigWidgetToyOpenPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyOpenPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->page_name);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 786: range 000000000E1924F2-000000000E192502
const char *__cdecl data::ConfigWidgetToyOpenPage::getTypeName(const data::ConfigWidgetToyOpenPage *const this)
{
  return "ConfigWidgetToyOpenPage";
};

// Line 787: range 000000000E192504-000000000E1926A0
int32_t __cdecl data::ConfigWidgetToyOpenPage::getHashNum(const data::ConfigWidgetToyOpenPage *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyOpenPage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyOpenPage",
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

// Line 806: range 000000000E41E402-000000000E41E44F
void __cdecl data::ConfigWidgetToyInstrument::ConfigWidgetToyInstrument(data::ConfigWidgetToyInstrument *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetToyOpenPage::ConfigWidgetToyOpenPage(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyInstrument + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 806: range 000000000E41E804-000000000E41E85C
void __cdecl data::ConfigWidgetToyInstrument::ConfigWidgetToyInstrument(
        data::ConfigWidgetToyInstrument *const this,
        const data::ConfigWidgetToyInstrument *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetToyOpenPage::ConfigWidgetToyOpenPage(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyInstrument + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 812: range 000000000E4334EC-000000000E433539
void __cdecl data::ConfigWidgetToyInstrument::~ConfigWidgetToyInstrument(data::ConfigWidgetToyInstrument *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyInstrument + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetToyOpenPage::~ConfigWidgetToyOpenPage(this);
};

// Line 812: range 000000000E43353A-000000000E433564
void __cdecl data::ConfigWidgetToyInstrument::~ConfigWidgetToyInstrument(data::ConfigWidgetToyInstrument *const this)
{
  data::ConfigWidgetToyInstrument::~ConfigWidgetToyInstrument(this);
  operator delete(this, 0x68uLL);
};

// Line 817: range 000000000E1926A2-000000000E1926B2
const char *__cdecl data::ConfigWidgetToyInstrument::getTypeName(const data::ConfigWidgetToyInstrument *const this)
{
  return "ConfigWidgetToyInstrument";
};

// Line 818: range 000000000E1926B4-000000000E192850
int32_t __cdecl data::ConfigWidgetToyInstrument::getHashNum(const data::ConfigWidgetToyInstrument *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyInstrument::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyInstrument",
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

// Line 834: range 000000000E41EB46-000000000E41EB87
void __cdecl data::ConfigWidgetToyInstrumentFactory::ConfigWidgetToyInstrumentFactory(
        data::ConfigWidgetToyInstrumentFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyInstrumentFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyInstrumentFactory = v2;
};

// Line 842: range 000000000E41EE90-000000000E41EF0F
void __cdecl data::ConfigWidgetToyWaterSprite::ConfigWidgetToyWaterSprite(data::ConfigWidgetToyWaterSprite *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyWaterSprite + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->ability_trigger_name);
  std::string::basic_string(&this->ability_trigger_name_second);
};

// Line 842: range 000000000E41F2BE-000000000E41F3B9
void __cdecl data::ConfigWidgetToyWaterSprite::ConfigWidgetToyWaterSprite(
        data::ConfigWidgetToyWaterSprite *const this,
        const data::ConfigWidgetToyWaterSprite *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyWaterSprite + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  std::string::basic_string(&this->ability_trigger_name, &a2->ability_trigger_name);
  std::string::basic_string(&this->ability_trigger_name_second, &a2->ability_trigger_name_second);
};

// Line 851: range 000000000E4334C0-000000000E4334EA
void __cdecl data::ConfigWidgetToyWaterSprite::~ConfigWidgetToyWaterSprite(
        data::ConfigWidgetToyWaterSprite *const this)
{
  data::ConfigWidgetToyWaterSprite::~ConfigWidgetToyWaterSprite(this);
  operator delete(this, 0xA8uLL);
};

// Line 851: range 000000000E433440-000000000E4334BF
void __cdecl data::ConfigWidgetToyWaterSprite::~ConfigWidgetToyWaterSprite(
        data::ConfigWidgetToyWaterSprite *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyWaterSprite + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->ability_trigger_name_second);
  std::string::~string(&this->ability_trigger_name);
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 856: range 000000000E192852-000000000E192862
const char *__cdecl data::ConfigWidgetToyWaterSprite::getTypeName(const data::ConfigWidgetToyWaterSprite *const this)
{
  return "ConfigWidgetToyWaterSprite";
};

// Line 857: range 000000000E192864-000000000E192A00
int32_t __cdecl data::ConfigWidgetToyWaterSprite::getHashNum(const data::ConfigWidgetToyWaterSprite *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyWaterSprite::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyWaterSprite",
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

// Line 873: range 000000000E41F6A2-000000000E41F6E3
void __cdecl data::ConfigWidgetToyWaterSpriteFactory::ConfigWidgetToyWaterSpriteFactory(
        data::ConfigWidgetToyWaterSpriteFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyWaterSpriteFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyWaterSpriteFactory = v2;
};

// Line 881: range 000000000E41F9EC-000000000E41FAAB
void __cdecl data::ConfigWidgetToyTakePhoto::ConfigWidgetToyTakePhoto(data::ConfigWidgetToyTakePhoto *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)this + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->has_camera_effect, v3, v4);
  this->has_camera_effect = 0;
  std::string::basic_string(&this->camera_uieffect);
  std::string::basic_string(&this->camera_screen_effect);
  std::string::basic_string(&this->main_camera_effect);
};

// Line 881: range 000000000E41FE5A-000000000E41FFD5
void __cdecl data::ConfigWidgetToyTakePhoto::ConfigWidgetToyTakePhoto(
        data::ConfigWidgetToyTakePhoto *const this,
        const data::ConfigWidgetToyTakePhoto *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool has_camera_effect; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(
    (data::ConfigBaseWidgetToy *const)this,
    (const data::ConfigBaseWidgetToy *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)a2 + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->has_camera_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->has_camera_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->has_camera_effect, v3, v4);
  has_camera_effect = a2->has_camera_effect;
  v6 = *(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_camera_effect, v3, v7);
  this->has_camera_effect = has_camera_effect;
  std::string::basic_string(&this->camera_uieffect, &a2->camera_uieffect);
  std::string::basic_string(&this->camera_screen_effect, &a2->camera_screen_effect);
  std::string::basic_string(&this->main_camera_effect, &a2->main_camera_effect);
};

// Line 891: range 000000000E433414-000000000E43343E
void __cdecl data::ConfigWidgetToyTakePhoto::~ConfigWidgetToyTakePhoto(data::ConfigWidgetToyTakePhoto *const this)
{
  data::ConfigWidgetToyTakePhoto::~ConfigWidgetToyTakePhoto(this);
  operator delete(this, 0xA8uLL);
};

// Line 891: range 000000000E433394-000000000E433413
void __cdecl data::ConfigWidgetToyTakePhoto::~ConfigWidgetToyTakePhoto(data::ConfigWidgetToyTakePhoto *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->main_camera_effect);
  std::string::~string(&this->camera_screen_effect);
  std::string::~string(&this->camera_uieffect);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
};

// Line 896: range 000000000E192A02-000000000E192A12
const char *__cdecl data::ConfigWidgetToyTakePhoto::getTypeName(const data::ConfigWidgetToyTakePhoto *const this)
{
  return "ConfigWidgetToyTakePhoto";
};

// Line 897: range 000000000E192A14-000000000E192BB0
int32_t __cdecl data::ConfigWidgetToyTakePhoto::getHashNum(const data::ConfigWidgetToyTakePhoto *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyTakePhoto::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyTakePhoto",
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

// Line 913: range 000000000E4202BE-000000000E4202FF
void __cdecl data::ConfigWidgetToyTakePhotoFactory::ConfigWidgetToyTakePhotoFactory(
        data::ConfigWidgetToyTakePhotoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyTakePhotoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyTakePhotoFactory = v2;
};

// Line 921: range 000000000E420608-000000000E4207FB
void __cdecl data::ConfigWidgetToyFeather::ConfigWidgetToyFeather(data::ConfigWidgetToyFeather *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyFeather + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)this + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->show_on_radar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->show_on_radar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->show_on_radar, v3, v4);
  this->show_on_radar = 0;
  std::string::basic_string(&this->ui_camera_effect);
  std::string::basic_string(&this->main_camera_effect);
  if ( *(char *)(((unsigned __int64)&this->show_hint >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_hint, v3, &this->show_hint);
  this->show_hint = 0;
  v5 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_hint_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_hint_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_hint_distance, v5);
  }
  this->show_hint_distance = 0.0;
  std::vector<unsigned int>::vector(&this->show_hint_entity_idlist);
  std::string::basic_string(&this->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->exclude_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exclude_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exclude_suite_index, v5);
  }
  this->exclude_suite_index = 0;
  std::string::basic_string(&this->ability_group_name);
  if ( *(char *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_team, v5, &this->is_team);
  this->is_team = 0;
};

// Line 921: range 000000000E420BB0-000000000E420FAA
void __cdecl data::ConfigWidgetToyFeather::ConfigWidgetToyFeather(
        data::ConfigWidgetToyFeather *const this,
        const data::ConfigWidgetToyFeather *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool show_on_radar; // cl
  char v6; // dl
  __int64 v7; // rdx
  std::string *p_main_camera_effect; // rsi
  bool show_hint; // cl
  char v10; // al
  float show_hint_distance; // xmm0_4
  std::string *p_ability_name; // rsi
  uint32_t exclude_suite_index; // ecx
  char v14; // al
  std::string *p_ability_group_name; // rsi
  bool is_team; // cl
  char v17; // al

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(
    (data::ConfigBaseWidgetToy *const)this,
    (const data::ConfigBaseWidgetToy *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyFeather + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)a2 + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->show_on_radar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->show_on_radar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->show_on_radar, v3, v4);
  show_on_radar = a2->show_on_radar;
  v6 = *(_BYTE *)(((unsigned __int64)&this->show_on_radar >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->show_on_radar, v3, v7);
  this->show_on_radar = show_on_radar;
  std::string::basic_string(&this->ui_camera_effect, &a2->ui_camera_effect);
  p_main_camera_effect = &a2->main_camera_effect;
  std::string::basic_string(&this->main_camera_effect, &a2->main_camera_effect);
  if ( *(char *)(((unsigned __int64)&a2->show_hint >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->show_hint, p_main_camera_effect, &a2->show_hint);
  show_hint = a2->show_hint;
  v10 = *(_BYTE *)(((unsigned __int64)&this->show_hint >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_main_camera_effect) = v10 != 0;
    __asan_report_store1(&this->show_hint, p_main_camera_effect, &this->show_hint);
  }
  this->show_hint = show_hint;
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_hint_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->show_hint_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->show_hint_distance);
  }
  show_hint_distance = a2->show_hint_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_hint_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_hint_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_hint_distance, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->show_hint_distance = show_hint_distance;
  std::vector<unsigned int>::vector(&this->show_hint_entity_idlist, &a2->show_hint_entity_idlist);
  p_ability_name = &a2->ability_name;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->exclude_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->exclude_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->exclude_suite_index);
  }
  exclude_suite_index = a2->exclude_suite_index;
  v14 = *(_BYTE *)(((unsigned __int64)&this->exclude_suite_index >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_ability_name) = v14 != 0;
    __asan_report_store4(&this->exclude_suite_index, p_ability_name);
  }
  this->exclude_suite_index = exclude_suite_index;
  p_ability_group_name = &a2->ability_group_name;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  if ( *(char *)(((unsigned __int64)&a2->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_team, p_ability_group_name, &a2->is_team);
  is_team = a2->is_team;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_ability_group_name) = v17 != 0;
    __asan_report_store1(&this->is_team, p_ability_group_name, &this->is_team);
  }
  this->is_team = is_team;
};

// Line 937: range 000000000E4332C4-000000000E433367
void __cdecl data::ConfigWidgetToyFeather::~ConfigWidgetToyFeather(data::ConfigWidgetToyFeather *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyFeather + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->ability_group_name);
  std::string::~string(&this->ability_name);
  std::vector<unsigned int>::~vector(&this->show_hint_entity_idlist);
  std::string::~string(&this->main_camera_effect);
  std::string::~string(&this->ui_camera_effect);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
};

// Line 937: range 000000000E433368-000000000E433392
void __cdecl data::ConfigWidgetToyFeather::~ConfigWidgetToyFeather(data::ConfigWidgetToyFeather *const this)
{
  data::ConfigWidgetToyFeather::~ConfigWidgetToyFeather(this);
  operator delete(this, 0xF8uLL);
};

// Line 942: range 000000000E192BB2-000000000E192BC2
const char *__cdecl data::ConfigWidgetToyFeather::getTypeName(const data::ConfigWidgetToyFeather *const this)
{
  return "ConfigWidgetToyFeather";
};

// Line 943: range 000000000E192BC4-000000000E192D60
int32_t __cdecl data::ConfigWidgetToyFeather::getHashNum(const data::ConfigWidgetToyFeather *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyFeather::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyFeather",
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

// Line 959: range 000000000E421294-000000000E4212D5
void __cdecl data::ConfigWidgetToyFeatherFactory::ConfigWidgetToyFeatherFactory(
        data::ConfigWidgetToyFeatherFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyFeatherFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyFeatherFactory = v2;
};

// Line 982: range 000000000E42173E-000000000E42188F
void __cdecl data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(
        data::ConfigWidgetToyCreateGadgetBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCreateGadgetBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  v3 = ((_BYTE)this + 76) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_set_camera >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_set_camera >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_set_camera, v3, v4);
  this->is_set_camera = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_camera_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_camera_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_camera_angle, v3);
  }
  this->set_camera_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->do_bag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->do_bag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->do_bag_type, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->do_bag_type = 0;
};

// Line 982: range 000000000E421C4A-000000000E421E94
void __cdecl data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(
        data::ConfigWidgetToyCreateGadgetBase *const this,
        const data::ConfigWidgetToyCreateGadgetBase *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_set_camera; // cl
  char v8; // dl
  __int64 v9; // rdx
  float set_camera_angle; // xmm0_4
  __int64 v11; // rsi
  data::CreateSeverGadgetOpType do_bag_type; // ecx
  char v13; // dl
  const data::ConfigWidgetToyCreateGadgetBase *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCreateGadgetBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_id, a2);
  }
  this->gadget_id = gadget_id;
  v5 = ((_BYTE)v14 + 76) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v14->is_set_camera >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v14->is_set_camera >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v14->is_set_camera, v5, v6);
  is_set_camera = v14->is_set_camera;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_set_camera >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_set_camera, v5, v9);
  this->is_set_camera = is_set_camera;
  if ( *(_BYTE *)(((unsigned __int64)&v14->set_camera_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->set_camera_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->set_camera_angle);
  }
  set_camera_angle = v14->set_camera_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_camera_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_camera_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_camera_angle, v5);
  }
  this->set_camera_angle = set_camera_angle;
  v11 = (((_BYTE)v14 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->do_bag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->do_bag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->do_bag_type);
  }
  do_bag_type = v14->do_bag_type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->do_bag_type >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->do_bag_type, v11);
  }
  this->do_bag_type = do_bag_type;
};

// Line 992: range 000000000E42217E-000000000E4221CB
void __cdecl data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(
        data::ConfigWidgetToyCreateGadgetBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCreateGadgetBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 992: range 000000000E4221CC-000000000E4221F6
void __cdecl data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(
        data::ConfigWidgetToyCreateGadgetBase *const this)
{
  data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(this);
  operator delete(this, 0x58uLL);
};

// Line 997: range 000000000E192D62-000000000E192D72
const char *__cdecl data::ConfigWidgetToyCreateGadgetBase::getTypeName(
        const data::ConfigWidgetToyCreateGadgetBase *const this)
{
  return "ConfigWidgetToyCreateGadgetBase";
};

// Line 998: range 000000000E192D74-000000000E192F10
int32_t __cdecl data::ConfigWidgetToyCreateGadgetBase::getHashNum(
        const data::ConfigWidgetToyCreateGadgetBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyCreateGadgetBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyCreateGadgetBase",
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

// Line 1017: range 000000000E4221F8-000000000E422295
void __cdecl data::ConfigWidgetToyAdeptiAbode::ConfigWidgetToyAdeptiAbode(data::ConfigWidgetToyAdeptiAbode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAdeptiAbode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_last_time, v1);
  }
  this->effect_last_time = 0.0;
};

// Line 1017: range 000000000E42264A-000000000E422758
void __cdecl data::ConfigWidgetToyAdeptiAbode::ConfigWidgetToyAdeptiAbode(
        data::ConfigWidgetToyAdeptiAbode *const this,
        const data::ConfigWidgetToyAdeptiAbode *a2)
{
  int (**v2)(...); // rdx
  float effect_last_time; // xmm0_4

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAdeptiAbode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_last_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_last_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_last_time);
  }
  effect_last_time = a2->effect_last_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_last_time, &a2->ability_name);
  }
  this->effect_last_time = effect_last_time;
};

// Line 1025: range 000000000E43323A-000000000E433297
void __cdecl data::ConfigWidgetToyAdeptiAbode::~ConfigWidgetToyAdeptiAbode(
        data::ConfigWidgetToyAdeptiAbode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAdeptiAbode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->ability_name);
  data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(this);
};

// Line 1025: range 000000000E433298-000000000E4332C2
void __cdecl data::ConfigWidgetToyAdeptiAbode::~ConfigWidgetToyAdeptiAbode(
        data::ConfigWidgetToyAdeptiAbode *const this)
{
  data::ConfigWidgetToyAdeptiAbode::~ConfigWidgetToyAdeptiAbode(this);
  operator delete(this, 0x80uLL);
};

// Line 1030: range 000000000E192F12-000000000E192F22
const char *__cdecl data::ConfigWidgetToyAdeptiAbode::getTypeName(const data::ConfigWidgetToyAdeptiAbode *const this)
{
  return "ConfigWidgetToyAdeptiAbode";
};

// Line 1031: range 000000000E192F24-000000000E1930C0
int32_t __cdecl data::ConfigWidgetToyAdeptiAbode::getHashNum(const data::ConfigWidgetToyAdeptiAbode *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyAdeptiAbode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyAdeptiAbode",
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

// Line 1047: range 000000000E422A42-000000000E422A83
void __cdecl data::ConfigWidgetToyAdeptiAbodeFactory::ConfigWidgetToyAdeptiAbodeFactory(
        data::ConfigWidgetToyAdeptiAbodeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAdeptiAbodeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyAdeptiAbodeFactory = v2;
};

// Line 1055: range 000000000E422D8C-000000000E422E17
void __cdecl data::ConfigWidgetAddBuff::ConfigWidgetAddBuff(data::ConfigWidgetAddBuff *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuff + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_id, v1);
  }
  this->buff_id = 0;
};

// Line 1055: range 000000000E42323C-000000000E423309
void __cdecl data::ConfigWidgetAddBuff::ConfigWidgetAddBuff(
        data::ConfigWidgetAddBuff *const this,
        const data::ConfigWidgetAddBuff *a2)
{
  int (**v2)(...); // rdx
  uint32_t buff_id; // ecx
  char v4; // al

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuff + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->buff_id);
  }
  buff_id = a2->buff_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->buff_id, a2);
  }
  this->buff_id = buff_id;
};

// Line 1062: range 000000000E4331C0-000000000E43320D
void __cdecl data::ConfigWidgetAddBuff::~ConfigWidgetAddBuff(data::ConfigWidgetAddBuff *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuff + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 1062: range 000000000E43320E-000000000E433238
void __cdecl data::ConfigWidgetAddBuff::~ConfigWidgetAddBuff(data::ConfigWidgetAddBuff *const this)
{
  data::ConfigWidgetAddBuff::~ConfigWidgetAddBuff(this);
  operator delete(this, 0x50uLL);
};

// Line 1067: range 000000000E1930C2-000000000E1930D2
const char *__cdecl data::ConfigWidgetAddBuff::getTypeName(const data::ConfigWidgetAddBuff *const this)
{
  return "ConfigWidgetAddBuff";
};

// Line 1068: range 000000000E1930D4-000000000E193270
int32_t __cdecl data::ConfigWidgetAddBuff::getHashNum(const data::ConfigWidgetAddBuff *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAddBuff::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAddBuff",
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

// Line 1084: range 000000000E4235F2-000000000E423633
void __cdecl data::ConfigWidgetAddBuffFactory::ConfigWidgetAddBuffFactory(data::ConfigWidgetAddBuffFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuffFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAddBuffFactory = v2;
};

// Line 1092: range 000000000E42393C-000000000E4239C7
void __cdecl data::ConfigWidgetToyCamera::ConfigWidgetToyCamera(data::ConfigWidgetToyCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_id, v1);
  }
  this->camera_id = 0;
};

// Line 1092: range 000000000E423DEC-000000000E423EB9
void __cdecl data::ConfigWidgetToyCamera::ConfigWidgetToyCamera(
        data::ConfigWidgetToyCamera *const this,
        const data::ConfigWidgetToyCamera *a2)
{
  int (**v2)(...); // rdx
  uint32_t camera_id; // ecx
  char v4; // al

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camera_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camera_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camera_id);
  }
  camera_id = a2->camera_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->camera_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->camera_id, a2);
  }
  this->camera_id = camera_id;
};

// Line 1099: range 000000000E433194-000000000E4331BE
void __cdecl data::ConfigWidgetToyCamera::~ConfigWidgetToyCamera(data::ConfigWidgetToyCamera *const this)
{
  data::ConfigWidgetToyCamera::~ConfigWidgetToyCamera(this);
  operator delete(this, 0x50uLL);
};

// Line 1099: range 000000000E433146-000000000E433193
void __cdecl data::ConfigWidgetToyCamera::~ConfigWidgetToyCamera(data::ConfigWidgetToyCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 1104: range 000000000E193272-000000000E193282
const char *__cdecl data::ConfigWidgetToyCamera::getTypeName(const data::ConfigWidgetToyCamera *const this)
{
  return "ConfigWidgetToyCamera";
};

// Line 1105: range 000000000E193284-000000000E193420
int32_t __cdecl data::ConfigWidgetToyCamera::getHashNum(const data::ConfigWidgetToyCamera *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyCamera",
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

// Line 1121: range 000000000E4241A2-000000000E4241E3
void __cdecl data::ConfigWidgetToyCameraFactory::ConfigWidgetToyCameraFactory(
        data::ConfigWidgetToyCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyCameraFactory = v2;
};

// Line 1129: range 000000000E4244EC-000000000E424584
void __cdecl data::ConfigWidgetToyAbilityGroupGenerator::ConfigWidgetToyAbilityGroupGenerator(
        data::ConfigWidgetToyAbilityGroupGenerator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAbilityGroupGenerator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name);
  if ( *(char *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_team, v1, &this->is_team);
  this->is_team = 0;
};

// Line 1129: range 000000000E424930-000000000E424A3C
void __cdecl data::ConfigWidgetToyAbilityGroupGenerator::ConfigWidgetToyAbilityGroupGenerator(
        data::ConfigWidgetToyAbilityGroupGenerator *const this,
        const data::ConfigWidgetToyAbilityGroupGenerator *a2)
{
  int (**v2)(...); // rdx
  std::string *p_ability_group_name; // rsi
  bool is_team; // cl
  char v5; // al

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAbilityGroupGenerator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  p_ability_group_name = &a2->ability_group_name;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  if ( *(char *)(((unsigned __int64)&a2->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_team, p_ability_group_name, &a2->is_team);
  is_team = a2->is_team;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_ability_group_name) = v5 != 0;
    __asan_report_store1(&this->is_team, p_ability_group_name, &this->is_team);
  }
  this->is_team = is_team;
};

// Line 1137: range 000000000E42EAC6-000000000E42EAF0
void __cdecl data::ConfigWidgetToyAbilityGroupGenerator::~ConfigWidgetToyAbilityGroupGenerator(
        data::ConfigWidgetToyAbilityGroupGenerator *const this)
{
  data::ConfigWidgetToyAbilityGroupGenerator::~ConfigWidgetToyAbilityGroupGenerator(this);
  operator delete(this, 0x70uLL);
};

// Line 1137: range 000000000E42EA68-000000000E42EAC5
void __cdecl data::ConfigWidgetToyAbilityGroupGenerator::~ConfigWidgetToyAbilityGroupGenerator(
        data::ConfigWidgetToyAbilityGroupGenerator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyAbilityGroupGenerator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 1142: range 000000000E193422-000000000E193432
const char *__cdecl data::ConfigWidgetToyAbilityGroupGenerator::getTypeName(
        const data::ConfigWidgetToyAbilityGroupGenerator *const this)
{
  return "ConfigWidgetToyAbilityGroupGenerator";
};

// Line 1143: range 000000000E193434-000000000E1935D0
int32_t __cdecl data::ConfigWidgetToyAbilityGroupGenerator::getHashNum(
        const data::ConfigWidgetToyAbilityGroupGenerator *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyAbilityGroupGenerator::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyAbilityGroupGenerator",
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

// Line 1162: range 000000000E424D5E-000000000E424EA5
void __cdecl data::ConfigWidgetUseAttachAbilityGroup::ConfigWidgetUseAttachAbilityGroup(
        data::ConfigWidgetUseAttachAbilityGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->ability_group_name_second);
  if ( *(_BYTE *)(((unsigned __int64)&this->shared_cd_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shared_cd_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shared_cd_group, v1);
  }
  this->shared_cd_group = 0;
  std::vector<data::WidgetSkillReplaceType>::vector(&this->replace_skill_hint_list);
  if ( *(char *)(((unsigned __int64)&this->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_update_cdafter_ability_trigger, v1, &this->is_update_cdafter_ability_trigger);
  this->is_update_cdafter_ability_trigger = 0;
  v3 = ((_BYTE)this - 87) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_skip_take_off_ability_group_when_change_avatar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_skip_take_off_ability_group_when_change_avatar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_skip_take_off_ability_group_when_change_avatar, v3, v4);
  this->is_skip_take_off_ability_group_when_change_avatar = 0;
};

// Line 1162: range 000000000E425380-000000000E425604
void __cdecl data::ConfigWidgetUseAttachAbilityGroup::ConfigWidgetUseAttachAbilityGroup(
        data::ConfigWidgetUseAttachAbilityGroup *const this,
        const data::ConfigWidgetUseAttachAbilityGroup *a2)
{
  int (**v2)(...); // rdx
  std::string *p_ability_group_name_second; // rsi
  uint32_t shared_cd_group; // ecx
  char v5; // al
  data::WidgetSkillReplaceTypeArray *p_replace_skill_hint_list; // rsi
  bool is_update_cdafter_ability_trigger; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_skip_take_off_ability_group_when_change_avatar; // cl
  char v12; // dl
  __int64 v13; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  p_ability_group_name_second = &a2->ability_group_name_second;
  std::string::basic_string(&this->ability_group_name_second, &a2->ability_group_name_second);
  if ( *(_BYTE *)(((unsigned __int64)&a2->shared_cd_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->shared_cd_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->shared_cd_group);
  }
  shared_cd_group = a2->shared_cd_group;
  v5 = *(_BYTE *)(((unsigned __int64)&this->shared_cd_group >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_ability_group_name_second) = v5 != 0;
    __asan_report_store4(&this->shared_cd_group, p_ability_group_name_second);
  }
  this->shared_cd_group = shared_cd_group;
  p_replace_skill_hint_list = &a2->replace_skill_hint_list;
  std::vector<data::WidgetSkillReplaceType>::vector(&this->replace_skill_hint_list, &a2->replace_skill_hint_list);
  if ( *(char *)(((unsigned __int64)&a2->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &a2->is_update_cdafter_ability_trigger,
      p_replace_skill_hint_list,
      &a2->is_update_cdafter_ability_trigger);
  is_update_cdafter_ability_trigger = a2->is_update_cdafter_ability_trigger;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_replace_skill_hint_list) = v8 != 0;
    __asan_report_store1(
      &this->is_update_cdafter_ability_trigger,
      p_replace_skill_hint_list,
      &this->is_update_cdafter_ability_trigger);
  }
  this->is_update_cdafter_ability_trigger = is_update_cdafter_ability_trigger;
  v9 = ((_BYTE)a2 - 87) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_skip_take_off_ability_group_when_change_avatar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_skip_take_off_ability_group_when_change_avatar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_skip_take_off_ability_group_when_change_avatar, v9, v10);
  is_skip_take_off_ability_group_when_change_avatar = a2->is_skip_take_off_ability_group_when_change_avatar;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_skip_take_off_ability_group_when_change_avatar >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this - 87) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_skip_take_off_ability_group_when_change_avatar, v9, v13);
  this->is_skip_take_off_ability_group_when_change_avatar = is_skip_take_off_ability_group_when_change_avatar;
};

// Line 1174: range 000000000E4278E4-000000000E427963
void __cdecl data::ConfigWidgetUseAttachAbilityGroup::~ConfigWidgetUseAttachAbilityGroup(
        data::ConfigWidgetUseAttachAbilityGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<data::WidgetSkillReplaceType>::~vector(&this->replace_skill_hint_list);
  std::string::~string(&this->ability_group_name_second);
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 1174: range 000000000E427964-000000000E42798E
void __cdecl data::ConfigWidgetUseAttachAbilityGroup::~ConfigWidgetUseAttachAbilityGroup(
        data::ConfigWidgetUseAttachAbilityGroup *const this)
{
  data::ConfigWidgetUseAttachAbilityGroup::~ConfigWidgetUseAttachAbilityGroup(this);
  operator delete(this, 0xB0uLL);
};

// Line 1179: range 000000000E1935D2-000000000E1935E2
const char *__cdecl data::ConfigWidgetUseAttachAbilityGroup::getTypeName(
        const data::ConfigWidgetUseAttachAbilityGroup *const this)
{
  return "ConfigWidgetUseAttachAbilityGroup";
};

// Line 1180: range 000000000E1935E4-000000000E193780
int32_t __cdecl data::ConfigWidgetUseAttachAbilityGroup::getHashNum(
        const data::ConfigWidgetUseAttachAbilityGroup *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetUseAttachAbilityGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetUseAttachAbilityGroup",
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

// Line 1199: range 000000000E4258EE-000000000E42599B
void __cdecl data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(
        data::ConfigWidgetUseAttachAbilityTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->trigger_ability_name);
  if ( *(char *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_team, v1, &this->is_team);
  this->is_team = 0;
};

// Line 1199: range 000000000E425D50-000000000E425E96
void __cdecl data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(
        data::ConfigWidgetUseAttachAbilityTrigger *const this,
        const data::ConfigWidgetUseAttachAbilityTrigger *a2)
{
  int (**v2)(...); // rdx
  std::string *p_trigger_ability_name; // rsi
  bool is_team; // cl
  char v5; // al

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  p_trigger_ability_name = &a2->trigger_ability_name;
  std::string::basic_string(&this->trigger_ability_name, &a2->trigger_ability_name);
  if ( *(char *)(((unsigned __int64)&a2->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_team, p_trigger_ability_name, &a2->is_team);
  is_team = a2->is_team;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_trigger_ability_name) = v5 != 0;
    __asan_report_store1(&this->is_team, p_trigger_ability_name, &this->is_team);
  }
  this->is_team = is_team;
};

// Line 1208: range 000000000E426C14-000000000E426C81
void __cdecl data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger(
        data::ConfigWidgetUseAttachAbilityTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->trigger_ability_name);
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 1208: range 000000000E426C82-000000000E426CAC
void __cdecl data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger(
        data::ConfigWidgetUseAttachAbilityTrigger *const this)
{
  data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger(this);
  operator delete(this, 0x90uLL);
};

// Line 1213: range 000000000E193782-000000000E193792
const char *__cdecl data::ConfigWidgetUseAttachAbilityTrigger::getTypeName(
        const data::ConfigWidgetUseAttachAbilityTrigger *const this)
{
  return "ConfigWidgetUseAttachAbilityTrigger";
};

// Line 1214: range 000000000E193794-000000000E193930
int32_t __cdecl data::ConfigWidgetUseAttachAbilityTrigger::getHashNum(
        const data::ConfigWidgetUseAttachAbilityTrigger *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetUseAttachAbilityTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetUseAttachAbilityTrigger",
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

// Line 1233: range 000000000E426180-000000000E4261CD
void __cdecl data::ConfigWidgetDigScanner::ConfigWidgetDigScanner(data::ConfigWidgetDigScanner *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetDigScanner + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1233: range 000000000E426588-000000000E4265E0
void __cdecl data::ConfigWidgetDigScanner::ConfigWidgetDigScanner(
        data::ConfigWidgetDigScanner *const this,
        const data::ConfigWidgetDigScanner *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetDigScanner + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1239: range 000000000E4330CC-000000000E433119
void __cdecl data::ConfigWidgetDigScanner::~ConfigWidgetDigScanner(data::ConfigWidgetDigScanner *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetDigScanner + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(this);
};

// Line 1239: range 000000000E43311A-000000000E433144
void __cdecl data::ConfigWidgetDigScanner::~ConfigWidgetDigScanner(data::ConfigWidgetDigScanner *const this)
{
  data::ConfigWidgetDigScanner::~ConfigWidgetDigScanner(this);
  operator delete(this, 0x58uLL);
};

// Line 1244: range 000000000E193932-000000000E193942
const char *__cdecl data::ConfigWidgetDigScanner::getTypeName(const data::ConfigWidgetDigScanner *const this)
{
  return "ConfigWidgetDigScanner";
};

// Line 1245: range 000000000E193944-000000000E193AE0
int32_t __cdecl data::ConfigWidgetDigScanner::getHashNum(const data::ConfigWidgetDigScanner *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetDigScanner::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetDigScanner",
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

// Line 1261: range 000000000E4268CA-000000000E42690B
void __cdecl data::ConfigWidgetDigScannerFactory::ConfigWidgetDigScannerFactory(
        data::ConfigWidgetDigScannerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetDigScannerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetDigScannerFactory = v2;
};

// Line 1269: range 000000000E426CAE-000000000E426D8B
void __cdecl data::ConfigWidgetToyCrystal::ConfigWidgetToyCrystal(data::ConfigWidgetToyCrystal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger((data::ConfigWidgetUseAttachAbilityTrigger *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCrystal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->energy_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->energy_cost, v3);
  }
  this->energy_cost = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->meter_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->meter_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->meter_type, v3);
  }
  this->meter_type = 0;
};

// Line 1269: range 000000000E427148-000000000E4272B1
void __cdecl data::ConfigWidgetToyCrystal::ConfigWidgetToyCrystal(
        data::ConfigWidgetToyCrystal *const this,
        const data::ConfigWidgetToyCrystal *a2)
{
  int (**v2)(...); // rdx
  float energy_cost; // xmm0_4
  __int64 v4; // rsi
  data::RegionalPlayVarType meter_type; // ecx
  char v6; // al

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(
    (data::ConfigWidgetUseAttachAbilityTrigger *const)this,
    (const data::ConfigWidgetUseAttachAbilityTrigger *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCrystal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->energy_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->energy_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->energy_cost);
  }
  energy_cost = a2->energy_cost;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->energy_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->energy_cost, v4);
  }
  this->energy_cost = energy_cost;
  if ( *(_BYTE *)(((unsigned __int64)&a2->meter_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->meter_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->meter_type);
  }
  meter_type = a2->meter_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->meter_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->meter_type, v4);
  }
  this->meter_type = meter_type;
};

// Line 1277: range 000000000E433052-000000000E43309F
void __cdecl data::ConfigWidgetToyCrystal::~ConfigWidgetToyCrystal(data::ConfigWidgetToyCrystal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCrystal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger((data::ConfigWidgetUseAttachAbilityTrigger *const)this);
};

// Line 1277: range 000000000E4330A0-000000000E4330CA
void __cdecl data::ConfigWidgetToyCrystal::~ConfigWidgetToyCrystal(data::ConfigWidgetToyCrystal *const this)
{
  data::ConfigWidgetToyCrystal::~ConfigWidgetToyCrystal(this);
  operator delete(this, 0x98uLL);
};

// Line 1282: range 000000000E193AE2-000000000E193AF2
const char *__cdecl data::ConfigWidgetToyCrystal::getTypeName(const data::ConfigWidgetToyCrystal *const this)
{
  return "ConfigWidgetToyCrystal";
};

// Line 1283: range 000000000E193AF4-000000000E193C90
int32_t __cdecl data::ConfigWidgetToyCrystal::getHashNum(const data::ConfigWidgetToyCrystal *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyCrystal::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyCrystal",
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

// Line 1299: range 000000000E42759A-000000000E4275DB
void __cdecl data::ConfigWidgetToyCrystalFactory::ConfigWidgetToyCrystalFactory(
        data::ConfigWidgetToyCrystalFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyCrystalFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyCrystalFactory = v2;
};

// Line 1307: range 000000000E427990-000000000E427A74
void __cdecl data::ConfigWidgetCaptureAnimal::ConfigWidgetCaptureAnimal(data::ConfigWidgetCaptureAnimal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigWidgetUseAttachAbilityGroup::ConfigWidgetUseAttachAbilityGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCaptureAnimal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::vector(&this->capture_tag_array);
  if ( *(char *)(((unsigned __int64)&this->is_enter_codex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter_codex, v1, &this->is_enter_codex);
  this->is_enter_codex = 0;
  v3 = ((_BYTE)this - 55) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_show_codex_entry >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_show_codex_entry >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_show_codex_entry, v3, v4);
  this->is_show_codex_entry = 0;
};

// Line 1307: range 000000000E427E2A-000000000E427FCF
void __cdecl data::ConfigWidgetCaptureAnimal::ConfigWidgetCaptureAnimal(
        data::ConfigWidgetCaptureAnimal *const this,
        const data::ConfigWidgetCaptureAnimal *a2)
{
  int (**v2)(...); // rdx
  data::UInt32Array *p_capture_tag_array; // rsi
  bool is_enter_codex; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_show_codex_entry; // cl
  char v9; // dl
  __int64 v10; // rdx

  data::ConfigWidgetUseAttachAbilityGroup::ConfigWidgetUseAttachAbilityGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCaptureAnimal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  p_capture_tag_array = &a2->capture_tag_array;
  std::vector<unsigned int>::vector(&this->capture_tag_array, &a2->capture_tag_array);
  if ( *(char *)(((unsigned __int64)&a2->is_enter_codex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_enter_codex, p_capture_tag_array, &a2->is_enter_codex);
  is_enter_codex = a2->is_enter_codex;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_enter_codex >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_capture_tag_array) = v5 != 0;
    __asan_report_store1(&this->is_enter_codex, p_capture_tag_array, &this->is_enter_codex);
  }
  this->is_enter_codex = is_enter_codex;
  v6 = ((_BYTE)a2 - 55) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_show_codex_entry >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_show_codex_entry >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_show_codex_entry, v6, v7);
  is_show_codex_entry = a2->is_show_codex_entry;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_show_codex_entry >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this - 55) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_show_codex_entry, v6, v10);
  this->is_show_codex_entry = is_show_codex_entry;
};

// Line 1316: range 000000000E432FC6-000000000E433025
void __cdecl data::ConfigWidgetCaptureAnimal::~ConfigWidgetCaptureAnimal(data::ConfigWidgetCaptureAnimal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCaptureAnimal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::~vector(&this->capture_tag_array);
  data::ConfigWidgetUseAttachAbilityGroup::~ConfigWidgetUseAttachAbilityGroup(this);
};

// Line 1316: range 000000000E433026-000000000E433050
void __cdecl data::ConfigWidgetCaptureAnimal::~ConfigWidgetCaptureAnimal(data::ConfigWidgetCaptureAnimal *const this)
{
  data::ConfigWidgetCaptureAnimal::~ConfigWidgetCaptureAnimal(this);
  operator delete(this, 0xD0uLL);
};

// Line 1321: range 000000000E193C92-000000000E193CA2
const char *__cdecl data::ConfigWidgetCaptureAnimal::getTypeName(const data::ConfigWidgetCaptureAnimal *const this)
{
  return "ConfigWidgetCaptureAnimal";
};

// Line 1322: range 000000000E193CA4-000000000E193E40
int32_t __cdecl data::ConfigWidgetCaptureAnimal::getHashNum(const data::ConfigWidgetCaptureAnimal *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetCaptureAnimal::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetCaptureAnimal",
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

// Line 1338: range 000000000E4282B8-000000000E4282F9
void __cdecl data::ConfigWidgetCaptureAnimalFactory::ConfigWidgetCaptureAnimalFactory(
        data::ConfigWidgetCaptureAnimalFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCaptureAnimalFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetCaptureAnimalFactory = v2;
};

// Line 1346: range 000000000E428602-000000000E42864F
void __cdecl data::ConfigWidgetFireworksLauncher::ConfigWidgetFireworksLauncher(
        data::ConfigWidgetFireworksLauncher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFireworksLauncher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1346: range 000000000E428A0A-000000000E428A62
void __cdecl data::ConfigWidgetFireworksLauncher::ConfigWidgetFireworksLauncher(
        data::ConfigWidgetFireworksLauncher *const this,
        const data::ConfigWidgetFireworksLauncher *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFireworksLauncher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1352: range 000000000E432F4C-000000000E432F99
void __cdecl data::ConfigWidgetFireworksLauncher::~ConfigWidgetFireworksLauncher(
        data::ConfigWidgetFireworksLauncher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFireworksLauncher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(this);
};

// Line 1352: range 000000000E432F9A-000000000E432FC4
void __cdecl data::ConfigWidgetFireworksLauncher::~ConfigWidgetFireworksLauncher(
        data::ConfigWidgetFireworksLauncher *const this)
{
  data::ConfigWidgetFireworksLauncher::~ConfigWidgetFireworksLauncher(this);
  operator delete(this, 0x58uLL);
};

// Line 1357: range 000000000E193E42-000000000E193E52
const char *__cdecl data::ConfigWidgetFireworksLauncher::getTypeName(
        const data::ConfigWidgetFireworksLauncher *const this)
{
  return "ConfigWidgetFireworksLauncher";
};

// Line 1358: range 000000000E193E54-000000000E193FF0
int32_t __cdecl data::ConfigWidgetFireworksLauncher::getHashNum(const data::ConfigWidgetFireworksLauncher *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetFireworksLauncher::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetFireworksLauncher",
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

// Line 1374: range 000000000E428D4C-000000000E428D8D
void __cdecl data::ConfigWidgetFireworksLauncherFactory::ConfigWidgetFireworksLauncherFactory(
        data::ConfigWidgetFireworksLauncherFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFireworksLauncherFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetFireworksLauncherFactory = v2;
};

// Line 1382: range 000000000E429096-000000000E4290E3
void __cdecl data::ConfigWidgetRockBoardDetector::ConfigWidgetRockBoardDetector(
        data::ConfigWidgetRockBoardDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetRockBoardDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1382: range 000000000E42949E-000000000E4294F6
void __cdecl data::ConfigWidgetRockBoardDetector::ConfigWidgetRockBoardDetector(
        data::ConfigWidgetRockBoardDetector *const this,
        const data::ConfigWidgetRockBoardDetector *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetToyCreateGadgetBase::ConfigWidgetToyCreateGadgetBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetRockBoardDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1388: range 000000000E432F20-000000000E432F4A
void __cdecl data::ConfigWidgetRockBoardDetector::~ConfigWidgetRockBoardDetector(
        data::ConfigWidgetRockBoardDetector *const this)
{
  data::ConfigWidgetRockBoardDetector::~ConfigWidgetRockBoardDetector(this);
  operator delete(this, 0x58uLL);
};

// Line 1388: range 000000000E432ED2-000000000E432F1F
void __cdecl data::ConfigWidgetRockBoardDetector::~ConfigWidgetRockBoardDetector(
        data::ConfigWidgetRockBoardDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetRockBoardDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetToyCreateGadgetBase::~ConfigWidgetToyCreateGadgetBase(this);
};

// Line 1393: range 000000000E193FF2-000000000E194002
const char *__cdecl data::ConfigWidgetRockBoardDetector::getTypeName(
        const data::ConfigWidgetRockBoardDetector *const this)
{
  return "ConfigWidgetRockBoardDetector";
};

// Line 1394: range 000000000E194004-000000000E1941A0
int32_t __cdecl data::ConfigWidgetRockBoardDetector::getHashNum(const data::ConfigWidgetRockBoardDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetRockBoardDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetRockBoardDetector",
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

// Line 1410: range 000000000E4297E0-000000000E429821
void __cdecl data::ConfigWidgetRockBoardDetectorFactory::ConfigWidgetRockBoardDetectorFactory(
        data::ConfigWidgetRockBoardDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetRockBoardDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetRockBoardDetectorFactory = v2;
};

// Line 1418: range 000000000E429B2A-000000000E42A018
void __cdecl data::ConfigWidgetLightStone::ConfigWidgetLightStone(data::ConfigWidgetLightStone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLightStone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::vector(&this->level_energy_limit_array);
  std::vector<unsigned int>::vector(&this->level_cd_group_id_array);
  if ( *(_BYTE *)(((unsigned __int64)&this->quick_use_open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quick_use_open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quick_use_open_level, v1);
  }
  this->quick_use_open_level = 0;
  v3 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sky_crystal_detector_open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sky_crystal_detector_open_level >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sky_crystal_detector_open_level, v3);
  }
  this->sky_crystal_detector_open_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_type, v3);
  }
  this->energy_type = LightStoneEnergy;
  v4 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_chain_id, v4);
  }
  this->gadget_chain_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quick_use_cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quick_use_cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quick_use_cost_energy, v4);
  }
  this->quick_use_cost_energy = 1;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->trigger_ability_name);
  if ( *(char *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_team, v4, &this->is_team);
  this->is_team = 0;
  v5 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hint_radius, v5);
  }
  this->hint_radius = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->nearby_radius, v5);
  }
  this->nearby_radius = 0;
  v6 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grid_search_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_search_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grid_search_range, v6);
  }
  this->grid_search_range = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->success_gadget_id, v6);
  }
  this->success_gadget_id = 0;
  v7 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->failed_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->failed_gadget_id, v7);
  }
  this->failed_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gather_point_type, v7);
  }
  this->gather_point_type = 0;
  v8 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hint_group, v8);
  }
  this->hint_group = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_last_time, v8);
  }
  this->effect_last_time = 0;
  v9 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v9);
  }
  this->distance_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v9);
  }
  this->height = 0.0;
};

// Line 1418: range 000000000E42A3CE-000000000E42AD4F
void __cdecl data::ConfigWidgetLightStone::ConfigWidgetLightStone(
        data::ConfigWidgetLightStone *const this,
        const data::ConfigWidgetLightStone *a2)
{
  int (**v2)(...); // rdx
  data::UInt32Array *p_level_cd_group_id_array; // rsi
  uint32_t quick_use_open_level; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t sky_crystal_detector_open_level; // ecx
  char v8; // dl
  data::RegionalPlayVarType energy_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t gadget_chain_id; // ecx
  char v13; // dl
  uint32_t quick_use_cost_energy; // ecx
  char v15; // al
  std::string *p_trigger_ability_name; // rsi
  bool is_team; // cl
  char v18; // al
  __int64 v19; // rsi
  uint32_t hint_radius; // ecx
  char v21; // dl
  uint32_t nearby_radius; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t grid_search_range; // ecx
  char v26; // dl
  uint32_t success_gadget_id; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t failed_gadget_id; // ecx
  char v31; // dl
  uint32_t gather_point_type; // ecx
  char v33; // al
  __int64 v34; // rsi
  uint32_t hint_group; // ecx
  char v36; // dl
  uint32_t effect_last_time; // ecx
  char v38; // al
  float distance_to_avatar; // xmm0_4
  __int64 v40; // rsi
  float height; // xmm0_4

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLightStone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::vector<unsigned int>::vector(&this->level_energy_limit_array, &a2->level_energy_limit_array);
  p_level_cd_group_id_array = &a2->level_cd_group_id_array;
  std::vector<unsigned int>::vector(&this->level_cd_group_id_array, &a2->level_cd_group_id_array);
  if ( *(_BYTE *)(((unsigned __int64)&a2->quick_use_open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quick_use_open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quick_use_open_level);
  }
  quick_use_open_level = a2->quick_use_open_level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->quick_use_open_level >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_level_cd_group_id_array) = v5 != 0;
    __asan_report_store4(&this->quick_use_open_level, p_level_cd_group_id_array);
  }
  this->quick_use_open_level = quick_use_open_level;
  v6 = (((_BYTE)a2 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sky_crystal_detector_open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->sky_crystal_detector_open_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->sky_crystal_detector_open_level);
  }
  sky_crystal_detector_open_level = a2->sky_crystal_detector_open_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->sky_crystal_detector_open_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->sky_crystal_detector_open_level, v6);
  }
  this->sky_crystal_detector_open_level = sky_crystal_detector_open_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->energy_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->energy_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->energy_type);
  }
  energy_type = a2->energy_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->energy_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->energy_type, v6);
  }
  this->energy_type = energy_type;
  v11 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_chain_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gadget_chain_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gadget_chain_id);
  }
  gadget_chain_id = a2->gadget_chain_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->gadget_chain_id, v11);
  }
  this->gadget_chain_id = gadget_chain_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quick_use_cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quick_use_cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quick_use_cost_energy);
  }
  quick_use_cost_energy = a2->quick_use_cost_energy;
  v15 = *(_BYTE *)(((unsigned __int64)&this->quick_use_cost_energy >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->quick_use_cost_energy, v11);
  }
  this->quick_use_cost_energy = quick_use_cost_energy;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  p_trigger_ability_name = &a2->trigger_ability_name;
  std::string::basic_string(&this->trigger_ability_name, &a2->trigger_ability_name);
  if ( *(char *)(((unsigned __int64)&a2->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_team, p_trigger_ability_name, &a2->is_team);
  is_team = a2->is_team;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_trigger_ability_name) = v18 != 0;
    __asan_report_store1(&this->is_team, p_trigger_ability_name, &this->is_team);
  }
  this->is_team = is_team;
  v19 = (((_BYTE)a2 - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hint_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hint_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hint_radius);
  }
  hint_radius = a2->hint_radius;
  v21 = *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this - 44) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->hint_radius, v19);
  }
  this->hint_radius = hint_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->nearby_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->nearby_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->nearby_radius);
  }
  nearby_radius = a2->nearby_radius;
  v23 = *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v19) = v23 != 0;
    __asan_report_store4(&this->nearby_radius, v19);
  }
  this->nearby_radius = nearby_radius;
  v24 = (((_BYTE)a2 - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->grid_search_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->grid_search_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->grid_search_range);
  }
  grid_search_range = a2->grid_search_range;
  v26 = *(_BYTE *)(((unsigned __int64)&this->grid_search_range >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this - 36) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->grid_search_range, v24);
  }
  this->grid_search_range = grid_search_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->success_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->success_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->success_gadget_id);
  }
  success_gadget_id = a2->success_gadget_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store4(&this->success_gadget_id, v24);
  }
  this->success_gadget_id = success_gadget_id;
  v29 = (((_BYTE)a2 - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->failed_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->failed_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->failed_gadget_id);
  }
  failed_gadget_id = a2->failed_gadget_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->failed_gadget_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->failed_gadget_id, v29);
  }
  this->failed_gadget_id = failed_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gather_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gather_point_type);
  }
  gather_point_type = a2->gather_point_type;
  v33 = *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->gather_point_type, v29);
  }
  this->gather_point_type = gather_point_type;
  v34 = (((_BYTE)a2 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hint_group >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hint_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hint_group);
  }
  hint_group = a2->hint_group;
  v36 = *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000);
  if ( v36 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v36 )
  {
    LOBYTE(v34) = v36 != 0;
    __asan_report_store4(&this->hint_group, v34);
  }
  this->hint_group = hint_group;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_last_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_last_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_last_time);
  }
  effect_last_time = a2->effect_last_time;
  v38 = *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000);
  if ( v38 != 0 && v38 <= 3 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store4(&this->effect_last_time, v34);
  }
  this->effect_last_time = effect_last_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance_to_avatar);
  }
  distance_to_avatar = a2->distance_to_avatar;
  v40 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v40);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->height);
  }
  height = a2->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v40);
  }
  this->height = height;
};

// Line 1444: range 000000000E432E14-000000000E432EA5
void __cdecl data::ConfigWidgetLightStone::~ConfigWidgetLightStone(data::ConfigWidgetLightStone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLightStone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->trigger_ability_name);
  std::string::~string(&this->ability_group_name);
  std::vector<unsigned int>::~vector(&this->level_cd_group_id_array);
  std::vector<unsigned int>::~vector(&this->level_energy_limit_array);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy(this);
};

// Line 1444: range 000000000E432EA6-000000000E432ED0
void __cdecl data::ConfigWidgetLightStone::~ConfigWidgetLightStone(data::ConfigWidgetLightStone *const this)
{
  data::ConfigWidgetLightStone::~ConfigWidgetLightStone(this);
  operator delete(this, 0x100uLL);
};

// Line 1449: range 000000000E1941A2-000000000E1941B2
const char *__cdecl data::ConfigWidgetLightStone::getTypeName(const data::ConfigWidgetLightStone *const this)
{
  return "ConfigWidgetLightStone";
};

// Line 1450: range 000000000E1941B4-000000000E194350
int32_t __cdecl data::ConfigWidgetLightStone::getHashNum(const data::ConfigWidgetLightStone *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetLightStone::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetLightStone",
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

// Line 1466: range 000000000E42B038-000000000E42B079
void __cdecl data::ConfigWidgetLightStoneFactory::ConfigWidgetLightStoneFactory(
        data::ConfigWidgetLightStoneFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLightStoneFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetLightStoneFactory = v2;
};

// Line 1474: range 000000000E42B382-000000000E42B3CF
void __cdecl data::ConfigWidgetActivityGacha::ConfigWidgetActivityGacha(data::ConfigWidgetActivityGacha *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetActivityGacha + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1474: range 000000000E42B784-000000000E42B7DC
void __cdecl data::ConfigWidgetActivityGacha::ConfigWidgetActivityGacha(
        data::ConfigWidgetActivityGacha *const this,
        const data::ConfigWidgetActivityGacha *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetActivityGacha + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1480: range 000000000E432DE8-000000000E432E12
void __cdecl data::ConfigWidgetActivityGacha::~ConfigWidgetActivityGacha(data::ConfigWidgetActivityGacha *const this)
{
  data::ConfigWidgetActivityGacha::~ConfigWidgetActivityGacha(this);
  operator delete(this, 0x90uLL);
};

// Line 1480: range 000000000E432D9A-000000000E432DE7
void __cdecl data::ConfigWidgetActivityGacha::~ConfigWidgetActivityGacha(data::ConfigWidgetActivityGacha *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetActivityGacha + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger(this);
};

// Line 1485: range 000000000E194352-000000000E194362
const char *__cdecl data::ConfigWidgetActivityGacha::getTypeName(const data::ConfigWidgetActivityGacha *const this)
{
  return "ConfigWidgetActivityGacha";
};

// Line 1486: range 000000000E194364-000000000E194500
int32_t __cdecl data::ConfigWidgetActivityGacha::getHashNum(const data::ConfigWidgetActivityGacha *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetActivityGacha::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetActivityGacha",
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

// Line 1502: range 000000000E42BAC6-000000000E42BB07
void __cdecl data::ConfigWidgetActivityGachaFactory::ConfigWidgetActivityGachaFactory(
        data::ConfigWidgetActivityGachaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetActivityGachaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetActivityGachaFactory = v2;
};

// Line 1510: range 000000000E42BEA4-000000000E42BF03
void __cdecl data::ConfigWidgetAranaraController::ConfigWidgetAranaraController(
        data::ConfigWidgetAranaraController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAranaraController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetIconChange::ConfigWidgetIconChange(&this->icon_change);
};

// Line 1510: range 000000000E42C2BE-000000000E42C359
void __cdecl data::ConfigWidgetAranaraController::ConfigWidgetAranaraController(
        data::ConfigWidgetAranaraController *const this,
        const data::ConfigWidgetAranaraController *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAranaraController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetIconChange::ConfigWidgetIconChange(&this->icon_change, &a2->icon_change);
};

// Line 1517: range 000000000E432D0E-000000000E432D6D
void __cdecl data::ConfigWidgetAranaraController::~ConfigWidgetAranaraController(
        data::ConfigWidgetAranaraController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAranaraController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetIconChange::~ConfigWidgetIconChange(&this->icon_change);
  data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger(this);
};

// Line 1517: range 000000000E432D6E-000000000E432D98
void __cdecl data::ConfigWidgetAranaraController::~ConfigWidgetAranaraController(
        data::ConfigWidgetAranaraController *const this)
{
  data::ConfigWidgetAranaraController::~ConfigWidgetAranaraController(this);
  operator delete(this, 0xC0uLL);
};

// Line 1522: range 000000000E194502-000000000E194512
const char *__cdecl data::ConfigWidgetAranaraController::getTypeName(
        const data::ConfigWidgetAranaraController *const this)
{
  return "ConfigWidgetAranaraController";
};

// Line 1523: range 000000000E194514-000000000E1946B0
int32_t __cdecl data::ConfigWidgetAranaraController::getHashNum(const data::ConfigWidgetAranaraController *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAranaraController::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAranaraController",
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

// Line 1539: range 000000000E42C642-000000000E42C683
void __cdecl data::ConfigWidgetAranaraControllerFactory::ConfigWidgetAranaraControllerFactory(
        data::ConfigWidgetAranaraControllerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAranaraControllerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAranaraControllerFactory = v2;
};

// Line 1547: range 000000000E42C98C-000000000E42CAB6
void __cdecl data::ConfigWidgetToyHitTree::ConfigWidgetToyHitTree(data::ConfigWidgetToyHitTree *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger((data::ConfigWidgetUseAttachAbilityTrigger *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyHitTree + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_radius, v3);
  }
  this->hit_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_num_limit, v3);
  }
  this->hit_num_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_radius_tolerance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_radius_tolerance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_radius_tolerance, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->hit_radius_tolerance = 0.0;
};

// Line 1547: range 000000000E42CE74-000000000E42D06F
void __cdecl data::ConfigWidgetToyHitTree::ConfigWidgetToyHitTree(
        data::ConfigWidgetToyHitTree *const this,
        const data::ConfigWidgetToyHitTree *a2)
{
  int (**v2)(...); // rdx
  float hit_radius; // xmm0_4
  __int64 v4; // rsi
  uint32_t hit_num_limit; // ecx
  char v6; // al
  float hit_radius_tolerance; // xmm0_4

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(
    (data::ConfigWidgetUseAttachAbilityTrigger *const)this,
    (const data::ConfigWidgetUseAttachAbilityTrigger *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyHitTree + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hit_radius);
  }
  hit_radius = a2->hit_radius;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_radius, v4);
  }
  this->hit_radius = hit_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hit_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_num_limit);
  }
  hit_num_limit = a2->hit_num_limit;
  v6 = *(_BYTE *)(((unsigned __int64)&this->hit_num_limit >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->hit_num_limit, v4);
  }
  this->hit_num_limit = hit_num_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_radius_tolerance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_radius_tolerance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hit_radius_tolerance);
  }
  hit_radius_tolerance = a2->hit_radius_tolerance;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_radius_tolerance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_radius_tolerance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_radius_tolerance, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->hit_radius_tolerance = hit_radius_tolerance;
};

// Line 1556: range 000000000E432CE2-000000000E432D0C
void __cdecl data::ConfigWidgetToyHitTree::~ConfigWidgetToyHitTree(data::ConfigWidgetToyHitTree *const this)
{
  data::ConfigWidgetToyHitTree::~ConfigWidgetToyHitTree(this);
  operator delete(this, 0x98uLL);
};

// Line 1556: range 000000000E432C94-000000000E432CE1
void __cdecl data::ConfigWidgetToyHitTree::~ConfigWidgetToyHitTree(data::ConfigWidgetToyHitTree *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyHitTree + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger((data::ConfigWidgetUseAttachAbilityTrigger *const)this);
};

// Line 1561: range 000000000E1946B2-000000000E1946C2
const char *__cdecl data::ConfigWidgetToyHitTree::getTypeName(const data::ConfigWidgetToyHitTree *const this)
{
  return "ConfigWidgetToyHitTree";
};

// Line 1562: range 000000000E1946C4-000000000E194860
int32_t __cdecl data::ConfigWidgetToyHitTree::getHashNum(const data::ConfigWidgetToyHitTree *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetToyHitTree::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetToyHitTree",
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

// Line 1578: range 000000000E42D358-000000000E42D399
void __cdecl data::ConfigWidgetToyHitTreeFactory::ConfigWidgetToyHitTreeFactory(
        data::ConfigWidgetToyHitTreeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetToyHitTreeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetToyHitTreeFactory = v2;
};

// Line 1586: range 000000000E42D6A2-000000000E42D74F
void __cdecl data::ConfigWidgetBackground::ConfigWidgetBackground(data::ConfigWidgetBackground *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBackground + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)this + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->default_active_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->default_active_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->default_active_state, v3, v4);
  this->default_active_state = 0;
  std::string::basic_string(&this->active_name_key);
  std::string::basic_string(&this->deactive_name_key);
};

// Line 1586: range 000000000E42DB0A-000000000E42DC50
void __cdecl data::ConfigWidgetBackground::ConfigWidgetBackground(
        data::ConfigWidgetBackground *const this,
        const data::ConfigWidgetBackground *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool default_active_state; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseWidgetToy::ConfigBaseWidgetToy(
    (data::ConfigBaseWidgetToy *const)this,
    (const data::ConfigBaseWidgetToy *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBackground + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = ((_BYTE)a2 + 69) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->default_active_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->default_active_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->default_active_state, v3, v4);
  default_active_state = a2->default_active_state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->default_active_state >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->default_active_state, v3, v7);
  this->default_active_state = default_active_state;
  std::string::basic_string(&this->active_name_key, &a2->active_name_key);
  std::string::basic_string(&this->deactive_name_key, &a2->deactive_name_key);
};

// Line 1595: range 000000000E42DFA8-000000000E42DFD2
void __cdecl data::ConfigWidgetBackground::~ConfigWidgetBackground(data::ConfigWidgetBackground *const this)
{
  data::ConfigWidgetBackground::~ConfigWidgetBackground(this);
  operator delete(this, 0x88uLL);
};

// Line 1595: range 000000000E42DF3A-000000000E42DFA7
void __cdecl data::ConfigWidgetBackground::~ConfigWidgetBackground(data::ConfigWidgetBackground *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBackground + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->deactive_name_key);
  std::string::~string(&this->active_name_key);
  data::ConfigBaseWidgetToy::~ConfigBaseWidgetToy((data::ConfigBaseWidgetToy *const)this);
};

// Line 1600: range 000000000E194862-000000000E194872
const char *__cdecl data::ConfigWidgetBackground::getTypeName(const data::ConfigWidgetBackground *const this)
{
  return "ConfigWidgetBackground";
};

// Line 1601: range 000000000E194874-000000000E194A10
int32_t __cdecl data::ConfigWidgetBackground::getHashNum(const data::ConfigWidgetBackground *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetBackground::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetBackground",
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

// Line 1620: range 000000000E42DFD4-000000000E42E021
void __cdecl data::ConfigWidgetFishing::ConfigWidgetFishing(data::ConfigWidgetFishing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetBackground::ConfigWidgetBackground(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFishing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1620: range 000000000E42E3DC-000000000E42E434
void __cdecl data::ConfigWidgetFishing::ConfigWidgetFishing(
        data::ConfigWidgetFishing *const this,
        const data::ConfigWidgetFishing *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetBackground::ConfigWidgetBackground(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFishing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
};

// Line 1626: range 000000000E432C1A-000000000E432C67
void __cdecl data::ConfigWidgetFishing::~ConfigWidgetFishing(data::ConfigWidgetFishing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFishing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetBackground::~ConfigWidgetBackground(this);
};

// Line 1626: range 000000000E432C68-000000000E432C92
void __cdecl data::ConfigWidgetFishing::~ConfigWidgetFishing(data::ConfigWidgetFishing *const this)
{
  data::ConfigWidgetFishing::~ConfigWidgetFishing(this);
  operator delete(this, 0x88uLL);
};

// Line 1631: range 000000000E194A12-000000000E194A22
const char *__cdecl data::ConfigWidgetFishing::getTypeName(const data::ConfigWidgetFishing *const this)
{
  return "ConfigWidgetFishing";
};

// Line 1632: range 000000000E194A24-000000000E194BC0
int32_t __cdecl data::ConfigWidgetFishing::getHashNum(const data::ConfigWidgetFishing *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetFishing::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetFishing",
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

// Line 1648: range 000000000E42E71E-000000000E42E75F
void __cdecl data::ConfigWidgetFishingFactory::ConfigWidgetFishingFactory(data::ConfigWidgetFishingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetFishingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetFishingFactory = v2;
};

// Line 1656: range 000000000E42EAF2-000000000E42EBEA
void __cdecl data::ConfigWidgetWeatherWizard::ConfigWidgetWeatherWizard(data::ConfigWidgetWeatherWizard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigWidgetToyAbilityGroupGenerator::ConfigWidgetToyAbilityGroupGenerator((data::ConfigWidgetToyAbilityGroupGenerator *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWeatherWizard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shield_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shield_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shield_max, v3);
  }
  this->shield_max = 0;
  std::string::basic_string(&this->level_sgvkey);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_chain_id, v3);
  }
  this->gadget_chain_id = 0;
  std::string::basic_string(&this->team_gvkey);
};

// Line 1656: range 000000000E42EFAC-000000000E42F17B
void __cdecl data::ConfigWidgetWeatherWizard::ConfigWidgetWeatherWizard(
        data::ConfigWidgetWeatherWizard *const this,
        const data::ConfigWidgetWeatherWizard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t shield_max; // ecx
  char v5; // dl
  std::string *p_level_sgvkey; // rsi
  uint32_t gadget_chain_id; // ecx
  char v8; // al

  data::ConfigWidgetToyAbilityGroupGenerator::ConfigWidgetToyAbilityGroupGenerator(
    (data::ConfigWidgetToyAbilityGroupGenerator *const)this,
    (const data::ConfigWidgetToyAbilityGroupGenerator *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWeatherWizard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shield_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->shield_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->shield_max);
  }
  shield_max = a2->shield_max;
  v5 = *(_BYTE *)(((unsigned __int64)&this->shield_max >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->shield_max, v3);
  }
  this->shield_max = shield_max;
  p_level_sgvkey = &a2->level_sgvkey;
  std::string::basic_string(&this->level_sgvkey, &a2->level_sgvkey);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_chain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_chain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_chain_id);
  }
  gadget_chain_id = a2->gadget_chain_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->gadget_chain_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_level_sgvkey) = v8 != 0;
    __asan_report_store4(&this->gadget_chain_id, p_level_sgvkey);
  }
  this->gadget_chain_id = gadget_chain_id;
  std::string::basic_string(&this->team_gvkey, &a2->team_gvkey);
};

// Line 1666: range 000000000E432B7E-000000000E432BED
void __cdecl data::ConfigWidgetWeatherWizard::~ConfigWidgetWeatherWizard(data::ConfigWidgetWeatherWizard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWeatherWizard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  std::string::~string(&this->team_gvkey);
  std::string::~string(&this->level_sgvkey);
  data::ConfigWidgetToyAbilityGroupGenerator::~ConfigWidgetToyAbilityGroupGenerator((data::ConfigWidgetToyAbilityGroupGenerator *const)this);
};

// Line 1666: range 000000000E432BEE-000000000E432C18
void __cdecl data::ConfigWidgetWeatherWizard::~ConfigWidgetWeatherWizard(data::ConfigWidgetWeatherWizard *const this)
{
  data::ConfigWidgetWeatherWizard::~ConfigWidgetWeatherWizard(this);
  operator delete(this, 0xB8uLL);
};

// Line 1671: range 000000000E194BC2-000000000E194BD2
const char *__cdecl data::ConfigWidgetWeatherWizard::getTypeName(const data::ConfigWidgetWeatherWizard *const this)
{
  return "ConfigWidgetWeatherWizard";
};

// Line 1672: range 000000000E194BD4-000000000E194D70
int32_t __cdecl data::ConfigWidgetWeatherWizard::getHashNum(const data::ConfigWidgetWeatherWizard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetWeatherWizard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetWeatherWizard",
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

// Line 1688: range 000000000E42F464-000000000E42F4A5
void __cdecl data::ConfigWidgetWeatherWizardFactory::ConfigWidgetWeatherWizardFactory(
        data::ConfigWidgetWeatherWizardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWeatherWizardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetWeatherWizardFactory = v2;
};

// Line 1696: range 000000000E42F7AE-000000000E42F889
void __cdecl data::ConfigWidgetCoinCollect::ConfigWidgetCoinCollect(data::ConfigWidgetCoinCollect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger((data::ConfigWidgetUseAttachAbilityTrigger *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCoinCollect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->energy_limit, v3);
  }
  this->energy_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_energy_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_energy_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_energy_cost, v3);
  }
  this->skill_energy_cost = 0;
};

// Line 1696: range 000000000E42FC46-000000000E42FDAC
void __cdecl data::ConfigWidgetCoinCollect::ConfigWidgetCoinCollect(
        data::ConfigWidgetCoinCollect *const this,
        const data::ConfigWidgetCoinCollect *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t energy_limit; // ecx
  char v5; // dl
  uint32_t skill_energy_cost; // ecx
  char v7; // al

  data::ConfigWidgetUseAttachAbilityTrigger::ConfigWidgetUseAttachAbilityTrigger(
    (data::ConfigWidgetUseAttachAbilityTrigger *const)this,
    (const data::ConfigWidgetUseAttachAbilityTrigger *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCoinCollect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidgetToy = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->energy_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->energy_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->energy_limit);
  }
  energy_limit = a2->energy_limit;
  v5 = *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->energy_limit, v3);
  }
  this->energy_limit = energy_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_energy_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_energy_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_energy_cost);
  }
  skill_energy_cost = a2->skill_energy_cost;
  v7 = *(_BYTE *)(((unsigned __int64)&this->skill_energy_cost >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->skill_energy_cost, v3);
  }
  this->skill_energy_cost = skill_energy_cost;
};

// Line 1704: range 000000000E432B04-000000000E432B51
void __cdecl data::ConfigWidgetCoinCollect::~ConfigWidgetCoinCollect(data::ConfigWidgetCoinCollect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCoinCollect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidgetToy = v2;
  data::ConfigWidgetUseAttachAbilityTrigger::~ConfigWidgetUseAttachAbilityTrigger((data::ConfigWidgetUseAttachAbilityTrigger *const)this);
};

// Line 1704: range 000000000E432B52-000000000E432B7C
void __cdecl data::ConfigWidgetCoinCollect::~ConfigWidgetCoinCollect(data::ConfigWidgetCoinCollect *const this)
{
  data::ConfigWidgetCoinCollect::~ConfigWidgetCoinCollect(this);
  operator delete(this, 0x98uLL);
};

// Line 1709: range 000000000E194D72-000000000E194D82
const char *__cdecl data::ConfigWidgetCoinCollect::getTypeName(const data::ConfigWidgetCoinCollect *const this)
{
  return "ConfigWidgetCoinCollect";
};

// Line 1710: range 000000000E194D84-000000000E194F20
int32_t __cdecl data::ConfigWidgetCoinCollect::getHashNum(const data::ConfigWidgetCoinCollect *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetCoinCollect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetCoinCollect",
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

// Line 1726: range 000000000E430096-000000000E4300D7
void __cdecl data::ConfigWidgetCoinCollectFactory::ConfigWidgetCoinCollectFactory(
        data::ConfigWidgetCoinCollectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCoinCollectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetCoinCollectFactory = v2;
};
