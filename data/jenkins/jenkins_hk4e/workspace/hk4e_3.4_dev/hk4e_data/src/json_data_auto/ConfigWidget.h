// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigWidget.h

// Line 35: range 000000000E400BB6-000000000E400EC5
void __cdecl data::ConfigBaseWidget::ConfigBaseWidget(data::ConfigBaseWidget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx

  std::enable_shared_from_this<data::ConfigBaseWidget>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseWidget>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseWidget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = ((_BYTE)this + 29) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_equipable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_equipable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_equipable, v5, v6);
  this->is_equipable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cool_down, v5);
  }
  this->cool_down = 0;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down_on_fail >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cool_down_on_fail >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cool_down_on_fail, v7);
  }
  this->cool_down_on_fail = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cool_down_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cool_down_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cool_down_group, v7);
  }
  this->cool_down_group = 0;
  v8 = ((_BYTE)this + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_cd_under_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_cd_under_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_cd_under_time_scale, v8, v9);
  this->is_cd_under_time_scale = 0;
  v10 = ((_BYTE)this + 45) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_allowed_in_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_allowed_in_dungeon, v10, v11);
  this->is_allowed_in_dungeon = 0;
  v12 = ((_BYTE)this + 46) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->is_allowed_in_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_allowed_in_room, v12, v13);
  this->is_allowed_in_room = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ornaments_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ornaments_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ornaments_type, v12);
  }
  this->ornaments_type = None_19;
  v14 = ((_BYTE)this + 52) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_json_loaded, v14, v15);
  this->is_json_loaded = 0;
};

// Line 35: range 000000000E40136E-000000000E401927
void __cdecl data::ConfigBaseWidget::ConfigBaseWidget(
        data::ConfigBaseWidget *const this,
        const data::ConfigBaseWidget *a2)
{
  std::enable_shared_from_this<data::ConfigBaseWidget> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t material_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_consume_material; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_equipable; // cl
  char v14; // dl
  __int64 v15; // rdx
  uint32_t cool_down; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t cool_down_on_fail; // ecx
  char v20; // dl
  uint32_t cool_down_group; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_cd_under_time_scale; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool is_allowed_in_dungeon; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool is_allowed_in_room; // cl
  char v36; // dl
  __int64 v37; // rdx
  data::OrnamentsType ornaments_type; // ecx
  char v39; // al
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool is_json_loaded; // cl
  char v43; // dl
  __int64 v44; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseWidget>;
  std::enable_shared_from_this<data::ConfigBaseWidget>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseWidget>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseWidget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseWidget = v3;
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
  v11 = ((_BYTE)a2 + 29) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->is_equipable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->is_equipable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->is_equipable, v11, v12);
  is_equipable = a2->is_equipable;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_equipable >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_equipable, v11, v15);
  this->is_equipable = is_equipable;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cool_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cool_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cool_down);
  }
  cool_down = a2->cool_down;
  v17 = *(_BYTE *)(((unsigned __int64)&this->cool_down >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v11) = v17 != 0;
    __asan_report_store4(&this->cool_down, v11);
  }
  this->cool_down = cool_down;
  v18 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cool_down_on_fail >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cool_down_on_fail >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cool_down_on_fail);
  }
  cool_down_on_fail = a2->cool_down_on_fail;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cool_down_on_fail >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->cool_down_on_fail, v18);
  }
  this->cool_down_on_fail = cool_down_on_fail;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cool_down_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cool_down_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cool_down_group);
  }
  cool_down_group = a2->cool_down_group;
  v22 = *(_BYTE *)(((unsigned __int64)&this->cool_down_group >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->cool_down_group, v18);
  }
  this->cool_down_group = cool_down_group;
  v23 = ((_BYTE)a2 + 44) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&a2->is_cd_under_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&a2->is_cd_under_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&a2->is_cd_under_time_scale, v23, v24);
  is_cd_under_time_scale = a2->is_cd_under_time_scale;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_cd_under_time_scale >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_cd_under_time_scale, v23, v27);
  this->is_cd_under_time_scale = is_cd_under_time_scale;
  v28 = ((_BYTE)a2 + 45) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&a2->is_allowed_in_dungeon, v28, v29);
  is_allowed_in_dungeon = a2->is_allowed_in_dungeon;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_dungeon >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_allowed_in_dungeon, v28, v32);
  this->is_allowed_in_dungeon = is_allowed_in_dungeon;
  v33 = ((_BYTE)a2 + 46) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&a2->is_allowed_in_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&a2->is_allowed_in_room, v33, v34);
  is_allowed_in_room = a2->is_allowed_in_room;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_allowed_in_room >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 46) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->is_allowed_in_room, v33, v37);
  this->is_allowed_in_room = is_allowed_in_room;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ornaments_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ornaments_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ornaments_type);
  }
  ornaments_type = a2->ornaments_type;
  v39 = *(_BYTE *)(((unsigned __int64)&this->ornaments_type >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v33) = v39 != 0;
    __asan_report_store4(&this->ornaments_type, v33);
  }
  this->ornaments_type = ornaments_type;
  v40 = ((_BYTE)a2 + 52) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&a2->is_json_loaded, v40, v41);
  is_json_loaded = a2->is_json_loaded;
  v43 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->is_json_loaded, v40, v44);
  this->is_json_loaded = is_json_loaded;
};

// Line 52: range 000000000E401B70-000000000E401BC1
void __cdecl data::ConfigBaseWidget::~ConfigBaseWidget(data::ConfigBaseWidget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseWidget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::enable_shared_from_this<data::ConfigBaseWidget>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseWidget>);
};

// Line 52: range 000000000E401BC2-000000000E401BEC
void __cdecl data::ConfigBaseWidget::~ConfigBaseWidget(data::ConfigBaseWidget *const this)
{
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
  operator delete(this, 0x38uLL);
};

// Line 57: range 000000000E194F22-000000000E194F32
const char *__cdecl data::ConfigBaseWidget::getTypeName(const data::ConfigBaseWidget *const this)
{
  return "ConfigBaseWidget";
};

// Line 58: range 000000000E194F34-000000000E1950D0
int32_t __cdecl data::ConfigBaseWidget::getHashNum(const data::ConfigBaseWidget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseWidget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseWidget",
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

// Line 84: range 000000000E401BEE-000000000E401D0D
void __cdecl data::ConfigWidgetAnchorPoint::ConfigWidgetAnchorPoint(data::ConfigWidgetAnchorPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAnchorPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lasting_time, v1);
  }
  this->lasting_time = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_count_in_scene, v3);
  }
  this->max_count_in_scene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  std::vector<unsigned int>::vector(&this->invalid_scene_ids);
};

// Line 84: range 000000000E4020C2-000000000E4022C7
void __cdecl data::ConfigWidgetAnchorPoint::ConfigWidgetAnchorPoint(
        data::ConfigWidgetAnchorPoint *const this,
        const data::ConfigWidgetAnchorPoint *a2)
{
  int (**v2)(...); // rdx
  uint32_t lasting_time; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_count_in_scene; // ecx
  char v7; // dl
  uint32_t gadget_id; // ecx
  char v9; // al
  const data::ConfigWidgetAnchorPoint *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAnchorPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v10 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->max_count_in_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->max_count_in_scene);
  }
  max_count_in_scene = v10->max_count_in_scene;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_count_in_scene, v5);
  }
  this->max_count_in_scene = max_count_in_scene;
  if ( *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->gadget_id);
  }
  gadget_id = v10->gadget_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  std::vector<unsigned int>::vector(&this->invalid_scene_ids, &v10->invalid_scene_ids);
};

// Line 94: range 000000000E43459A-000000000E4345C4
void __cdecl data::ConfigWidgetAnchorPoint::~ConfigWidgetAnchorPoint(data::ConfigWidgetAnchorPoint *const this)
{
  data::ConfigWidgetAnchorPoint::~ConfigWidgetAnchorPoint(this);
  operator delete(this, 0x60uLL);
};

// Line 94: range 000000000E43453C-000000000E434599
void __cdecl data::ConfigWidgetAnchorPoint::~ConfigWidgetAnchorPoint(data::ConfigWidgetAnchorPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAnchorPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::vector<unsigned int>::~vector(&this->invalid_scene_ids);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 99: range 000000000E1950D2-000000000E1950E2
const char *__cdecl data::ConfigWidgetAnchorPoint::getTypeName(const data::ConfigWidgetAnchorPoint *const this)
{
  return "ConfigWidgetAnchorPoint";
};

// Line 100: range 000000000E1950E4-000000000E195280
int32_t __cdecl data::ConfigWidgetAnchorPoint::getHashNum(const data::ConfigWidgetAnchorPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAnchorPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAnchorPoint",
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

// Line 116: range 000000000E4025B0-000000000E4025F1
void __cdecl data::ConfigWidgetAnchorPointFactory::ConfigWidgetAnchorPointFactory(
        data::ConfigWidgetAnchorPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAnchorPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAnchorPointFactory = v2;
};

// Line 124: range 000000000E4028FA-000000000E402B17
void __cdecl data::ConfigWidgetBonfire::ConfigWidgetBonfire(data::ConfigWidgetBonfire *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBonfire + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lasting_time, v1);
  }
  this->lasting_time = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) )
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
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
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
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v5);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combat_destroy_distance, v5);
  }
  this->combat_destroy_distance = 0.0;
};

// Line 124: range 000000000E402ED2-000000000E403296
void __cdecl data::ConfigWidgetBonfire::ConfigWidgetBonfire(
        data::ConfigWidgetBonfire *const this,
        const data::ConfigWidgetBonfire *a2)
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
  float radius; // xmm0_4
  __int64 v15; // rsi
  float combat_destroy_distance; // xmm0_4
  const data::ConfigWidgetBonfire *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBonfire + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v17 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->max_count_in_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->max_count_in_scene);
  }
  max_count_in_scene = v17->max_count_in_scene;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_count_in_scene, v5);
  }
  this->max_count_in_scene = max_count_in_scene;
  if ( *(_BYTE *)(((unsigned __int64)&v17->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->max_count_by_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->max_count_by_player);
  }
  max_count_by_player = v17->max_count_by_player;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_count_by_player, v5);
  }
  this->max_count_by_player = max_count_by_player;
  v10 = (((_BYTE)v17 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->gadget_id);
  }
  gadget_id = v17->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
    __asan_report_store4(&this->gadget_id, v10);
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v17->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->distance_to_avatar);
  }
  distance_to_avatar = v17->distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_to_avatar, v10);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v17->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->radius);
  }
  radius = v17->radius;
  v15 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v15);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&v17->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->combat_destroy_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->combat_destroy_distance);
  }
  combat_destroy_distance = v17->combat_destroy_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combat_destroy_distance, v15);
  }
  this->combat_destroy_distance = combat_destroy_distance;
};

// Line 137: range 000000000E434510-000000000E43453A
void __cdecl data::ConfigWidgetBonfire::~ConfigWidgetBonfire(data::ConfigWidgetBonfire *const this)
{
  data::ConfigWidgetBonfire::~ConfigWidgetBonfire(this);
  operator delete(this, 0x58uLL);
};

// Line 137: range 000000000E4344C2-000000000E43450F
void __cdecl data::ConfigWidgetBonfire::~ConfigWidgetBonfire(data::ConfigWidgetBonfire *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBonfire + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 142: range 000000000E195282-000000000E195292
const char *__cdecl data::ConfigWidgetBonfire::getTypeName(const data::ConfigWidgetBonfire *const this)
{
  return "ConfigWidgetBonfire";
};

// Line 143: range 000000000E195294-000000000E195430
int32_t __cdecl data::ConfigWidgetBonfire::getHashNum(const data::ConfigWidgetBonfire *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetBonfire::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetBonfire",
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

// Line 159: range 000000000E4034E0-000000000E403521
void __cdecl data::ConfigWidgetBonfireFactory::ConfigWidgetBonfireFactory(data::ConfigWidgetBonfireFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBonfireFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetBonfireFactory = v2;
};

// Line 167: range 000000000E40382A-000000000E4038B5
void __cdecl data::ConfigWidgetCondenseResin::ConfigWidgetCondenseResin(data::ConfigWidgetCondenseResin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCondenseResin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_resin_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_resin_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replace_resin_count, v1);
  }
  this->replace_resin_count = 0;
};

// Line 167: range 000000000E403CBA-000000000E403D87
void __cdecl data::ConfigWidgetCondenseResin::ConfigWidgetCondenseResin(
        data::ConfigWidgetCondenseResin *const this,
        const data::ConfigWidgetCondenseResin *a2)
{
  int (**v2)(...); // rdx
  uint32_t replace_resin_count; // ecx
  char v4; // al

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCondenseResin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->replace_resin_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->replace_resin_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->replace_resin_count);
  }
  replace_resin_count = a2->replace_resin_count;
  v4 = *(_BYTE *)(((unsigned __int64)&this->replace_resin_count >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->replace_resin_count, a2);
  }
  this->replace_resin_count = replace_resin_count;
};

// Line 174: range 000000000E434496-000000000E4344C0
void __cdecl data::ConfigWidgetCondenseResin::~ConfigWidgetCondenseResin(data::ConfigWidgetCondenseResin *const this)
{
  data::ConfigWidgetCondenseResin::~ConfigWidgetCondenseResin(this);
  operator delete(this, 0x40uLL);
};

// Line 174: range 000000000E434448-000000000E434495
void __cdecl data::ConfigWidgetCondenseResin::~ConfigWidgetCondenseResin(data::ConfigWidgetCondenseResin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCondenseResin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 179: range 000000000E195432-000000000E195442
const char *__cdecl data::ConfigWidgetCondenseResin::getTypeName(const data::ConfigWidgetCondenseResin *const this)
{
  return "ConfigWidgetCondenseResin";
};

// Line 180: range 000000000E195444-000000000E1955E0
int32_t __cdecl data::ConfigWidgetCondenseResin::getHashNum(const data::ConfigWidgetCondenseResin *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetCondenseResin::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetCondenseResin",
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

// Line 196: range 000000000E403FD0-000000000E404011
void __cdecl data::ConfigWidgetCondenseResinFactory::ConfigWidgetCondenseResinFactory(
        data::ConfigWidgetCondenseResinFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetCondenseResinFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetCondenseResinFactory = v2;
};

// Line 204: range 000000000E40431A-000000000E40437F
void __cdecl data::ConfigWidgetLunchBoxHealMaterial::ConfigWidgetLunchBoxHealMaterial(
        data::ConfigWidgetLunchBoxHealMaterial *const this)
{
  __int64 v1; // rsi

  std::vector<unsigned int>::vector(&this->notice_add_hp_materials);
  std::vector<unsigned int>::vector(&this->other_add_hp_materials);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 204: range 000000000E2073CC-000000000E2074A5
void __cdecl data::ConfigWidgetLunchBoxHealMaterial::ConfigWidgetLunchBoxHealMaterial(
        data::ConfigWidgetLunchBoxHealMaterial *const this,
        const data::ConfigWidgetLunchBoxHealMaterial *a2)
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

// Line 204: range 000000000E2074A6-000000000E2074D0
void __cdecl data::ConfigWidgetLunchBoxHealMaterial::~ConfigWidgetLunchBoxHealMaterial(
        data::ConfigWidgetLunchBoxHealMaterial *const this)
{
  std::vector<unsigned int>::~vector(&this->other_add_hp_materials);
  std::vector<unsigned int>::~vector(&this->notice_add_hp_materials);
};

// Line 228: range 000000000E404380-000000000E4043ED
void __cdecl data::ConfigWidgetLunchBox::ConfigWidgetLunchBox(data::ConfigWidgetLunchBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLunchBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::vector<unsigned int>::vector(&this->revive_materials);
  data::ConfigWidgetLunchBoxHealMaterial::ConfigWidgetLunchBoxHealMaterial(&this->heal_materials);
};

// Line 228: range 000000000E4047A8-000000000E40486E
void __cdecl data::ConfigWidgetLunchBox::ConfigWidgetLunchBox(
        data::ConfigWidgetLunchBox *const this,
        const data::ConfigWidgetLunchBox *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLunchBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  std::vector<unsigned int>::vector(&this->revive_materials, &a2->revive_materials);
  data::ConfigWidgetLunchBoxHealMaterial::ConfigWidgetLunchBoxHealMaterial(&this->heal_materials, &a2->heal_materials);
};

// Line 236: range 000000000E4343AE-000000000E43441B
void __cdecl data::ConfigWidgetLunchBox::~ConfigWidgetLunchBox(data::ConfigWidgetLunchBox *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLunchBox + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigWidgetLunchBoxHealMaterial::~ConfigWidgetLunchBoxHealMaterial(&this->heal_materials);
  std::vector<unsigned int>::~vector(&this->revive_materials);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 236: range 000000000E43441C-000000000E434446
void __cdecl data::ConfigWidgetLunchBox::~ConfigWidgetLunchBox(data::ConfigWidgetLunchBox *const this)
{
  data::ConfigWidgetLunchBox::~ConfigWidgetLunchBox(this);
  operator delete(this, 0x88uLL);
};

// Line 241: range 000000000E1955E2-000000000E1955F2
const char *__cdecl data::ConfigWidgetLunchBox::getTypeName(const data::ConfigWidgetLunchBox *const this)
{
  return "ConfigWidgetLunchBox";
};

// Line 242: range 000000000E1955F4-000000000E195790
int32_t __cdecl data::ConfigWidgetLunchBox::getHashNum(const data::ConfigWidgetLunchBox *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetLunchBox::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetLunchBox",
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

// Line 258: range 000000000E404B58-000000000E404B99
void __cdecl data::ConfigWidgetLunchBoxFactory::ConfigWidgetLunchBoxFactory(
        data::ConfigWidgetLunchBoxFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetLunchBoxFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetLunchBoxFactory = v2;
};

// Line 266: range 000000000E404EA2-000000000E405187
void __cdecl data::ConfigWidgetOneoffGatherPointDetector::ConfigWidgetOneoffGatherPointDetector(
        data::ConfigWidgetOneoffGatherPointDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_radius, v1);
  }
  this->hint_radius = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000) )
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
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000) )
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
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000) )
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
  v6 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000) )
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
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->height = 0.0;
};

// Line 266: range 000000000E40553C-000000000E405A7C
void __cdecl data::ConfigWidgetOneoffGatherPointDetector::ConfigWidgetOneoffGatherPointDetector(
        data::ConfigWidgetOneoffGatherPointDetector *const this,
        const data::ConfigWidgetOneoffGatherPointDetector *a2)
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
  const data::ConfigWidgetOneoffGatherPointDetector *v25; // [rsp+0h] [rbp-10h]

  v25 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v25 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->nearby_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->nearby_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->nearby_radius);
  }
  nearby_radius = v25->nearby_radius;
  v7 = *(_BYTE *)(((unsigned __int64)&this->nearby_radius >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
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
  v10 = (((_BYTE)v25 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->success_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->success_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->success_gadget_id);
  }
  success_gadget_id = v25->success_gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->success_gadget_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
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
  v15 = (((_BYTE)v25 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->gather_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->gather_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->gather_point_type);
  }
  gather_point_type = v25->gather_point_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gather_point_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v17 )
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
  v20 = (((_BYTE)v25 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->effect_last_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->effect_last_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->effect_last_time);
  }
  effect_last_time = v25->effect_last_time;
  v22 = *(_BYTE *)(((unsigned __int64)&this->effect_last_time >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v22 != 0;
  if ( v22 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v22 )
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
    && (char)((((_BYTE)v25 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->height);
  }
  height = v25->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->height = height;
};

// Line 282: range 000000000E434334-000000000E434381
void __cdecl data::ConfigWidgetOneoffGatherPointDetector::~ConfigWidgetOneoffGatherPointDetector(
        data::ConfigWidgetOneoffGatherPointDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 282: range 000000000E434382-000000000E4343AC
void __cdecl data::ConfigWidgetOneoffGatherPointDetector::~ConfigWidgetOneoffGatherPointDetector(
        data::ConfigWidgetOneoffGatherPointDetector *const this)
{
  data::ConfigWidgetOneoffGatherPointDetector::~ConfigWidgetOneoffGatherPointDetector(this);
  operator delete(this, 0x60uLL);
};

// Line 287: range 000000000E195792-000000000E1957A2
const char *__cdecl data::ConfigWidgetOneoffGatherPointDetector::getTypeName(
        const data::ConfigWidgetOneoffGatherPointDetector *const this)
{
  return "ConfigWidgetOneoffGatherPointDetector";
};

// Line 288: range 000000000E1957A4-000000000E195940
int32_t __cdecl data::ConfigWidgetOneoffGatherPointDetector::getHashNum(
        const data::ConfigWidgetOneoffGatherPointDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetOneoffGatherPointDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetOneoffGatherPointDetector",
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

// Line 304: range 000000000E405CC6-000000000E405D07
void __cdecl data::ConfigWidgetOneoffGatherPointDetectorFactory::ConfigWidgetOneoffGatherPointDetectorFactory(
        data::ConfigWidgetOneoffGatherPointDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOneoffGatherPointDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetOneoffGatherPointDetectorFactory = v2;
};

// Line 312: range 000000000E406010-000000000E4061A7
void __cdecl data::ConfigWidgetClientDetector::ConfigWidgetClientDetector(data::ConfigWidgetClientDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->allow_city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->allow_city_id >> 3) + 0x7FFF8000) )
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
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
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

// Line 312: range 000000000E4065CC-000000000E406893
void __cdecl data::ConfigWidgetClientDetector::ConfigWidgetClientDetector(
        data::ConfigWidgetClientDetector *const this,
        const data::ConfigWidgetClientDetector *a2)
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
  const data::ConfigWidgetClientDetector *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v13 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->allow_city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->allow_city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->allow_city_id);
  }
  allow_city_id = v13->allow_city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->allow_city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
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
    && (char)((((_BYTE)v13 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->distance_to_avatar);
  }
  distance_to_avatar = v13->distance_to_avatar;
  v11 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
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

// Line 323: range 000000000E434308-000000000E434332
void __cdecl data::ConfigWidgetClientDetector::~ConfigWidgetClientDetector(
        data::ConfigWidgetClientDetector *const this)
{
  data::ConfigWidgetClientDetector::~ConfigWidgetClientDetector(this);
  operator delete(this, 0x50uLL);
};

// Line 323: range 000000000E4342BA-000000000E434307
void __cdecl data::ConfigWidgetClientDetector::~ConfigWidgetClientDetector(
        data::ConfigWidgetClientDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 328: range 000000000E195942-000000000E195952
const char *__cdecl data::ConfigWidgetClientDetector::getTypeName(const data::ConfigWidgetClientDetector *const this)
{
  return "ConfigWidgetClientDetector";
};

// Line 329: range 000000000E195954-000000000E195AF0
int32_t __cdecl data::ConfigWidgetClientDetector::getHashNum(const data::ConfigWidgetClientDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetClientDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetClientDetector",
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

// Line 345: range 000000000E406ADC-000000000E406B1D
void __cdecl data::ConfigWidgetClientDetectorFactory::ConfigWidgetClientDetectorFactory(
        data::ConfigWidgetClientDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetClientDetectorFactory = v2;
};

// Line 353: range 000000000E406E26-000000000E40703A
void __cdecl data::ConfigWidgetClientCollector::ConfigWidgetClientCollector(
        data::ConfigWidgetClientCollector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientCollector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v1);
  }
  this->target_type = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
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
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_points >> 3) + 0x7FFF8000) )
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
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_gadget_id, v5);
  }
  this->use_gadget_id = 0;
  if ( *(char *)(((unsigned __int64)&this->allow_other_world >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->allow_other_world, v5, &this->allow_other_world);
  this->allow_other_world = 0;
};

// Line 353: range 000000000E4073F6-000000000E4077B2
void __cdecl data::ConfigWidgetClientCollector::ConfigWidgetClientCollector(
        data::ConfigWidgetClientCollector *const this,
        const data::ConfigWidgetClientCollector *a2)
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
  const data::ConfigWidgetClientCollector *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientCollector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v20 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->element_type);
  }
  element_type = v20->element_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
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
  v10 = (((_BYTE)v20 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->max_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->max_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->max_points);
  }
  max_points = v20->max_points;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_points >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
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
  v15 = (((_BYTE)v20 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->use_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->use_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->use_gadget_id);
  }
  use_gadget_id = v20->use_gadget_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v17 )
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

// Line 366: range 000000000E43428E-000000000E4342B8
void __cdecl data::ConfigWidgetClientCollector::~ConfigWidgetClientCollector(
        data::ConfigWidgetClientCollector *const this)
{
  data::ConfigWidgetClientCollector::~ConfigWidgetClientCollector(this);
  operator delete(this, 0x58uLL);
};

// Line 366: range 000000000E434240-000000000E43428D
void __cdecl data::ConfigWidgetClientCollector::~ConfigWidgetClientCollector(
        data::ConfigWidgetClientCollector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientCollector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 371: range 000000000E195AF2-000000000E195B02
const char *__cdecl data::ConfigWidgetClientCollector::getTypeName(const data::ConfigWidgetClientCollector *const this)
{
  return "ConfigWidgetClientCollector";
};

// Line 372: range 000000000E195B04-000000000E195CA0
int32_t __cdecl data::ConfigWidgetClientCollector::getHashNum(const data::ConfigWidgetClientCollector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetClientCollector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetClientCollector",
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

// Line 388: range 000000000E4079FC-000000000E407A3D
void __cdecl data::ConfigWidgetClientCollectorFactory::ConfigWidgetClientCollectorFactory(
        data::ConfigWidgetClientCollectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetClientCollectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetClientCollectorFactory = v2;
};

// Line 396: range 000000000E407D46-000000000E407DD1
void __cdecl data::ConfigWidgetAttachAvatar::ConfigWidgetAttachAvatar(data::ConfigWidgetAttachAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAttachAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_gadget_id, v1);
  }
  this->use_gadget_id = 0;
};

// Line 396: range 000000000E4081D6-000000000E4082A3
void __cdecl data::ConfigWidgetAttachAvatar::ConfigWidgetAttachAvatar(
        data::ConfigWidgetAttachAvatar *const this,
        const data::ConfigWidgetAttachAvatar *a2)
{
  int (**v2)(...); // rdx
  uint32_t use_gadget_id; // ecx
  char v4; // al

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAttachAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->use_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->use_gadget_id);
  }
  use_gadget_id = a2->use_gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->use_gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->use_gadget_id, a2);
  }
  this->use_gadget_id = use_gadget_id;
};

// Line 403: range 000000000E4341C6-000000000E434213
void __cdecl data::ConfigWidgetAttachAvatar::~ConfigWidgetAttachAvatar(data::ConfigWidgetAttachAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAttachAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 403: range 000000000E434214-000000000E43423E
void __cdecl data::ConfigWidgetAttachAvatar::~ConfigWidgetAttachAvatar(data::ConfigWidgetAttachAvatar *const this)
{
  data::ConfigWidgetAttachAvatar::~ConfigWidgetAttachAvatar(this);
  operator delete(this, 0x40uLL);
};

// Line 408: range 000000000E195CA2-000000000E195CB2
const char *__cdecl data::ConfigWidgetAttachAvatar::getTypeName(const data::ConfigWidgetAttachAvatar *const this)
{
  return "ConfigWidgetAttachAvatar";
};

// Line 409: range 000000000E195CB4-000000000E195E50
int32_t __cdecl data::ConfigWidgetAttachAvatar::getHashNum(const data::ConfigWidgetAttachAvatar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAttachAvatar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAttachAvatar",
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

// Line 425: range 000000000E4084EC-000000000E40852D
void __cdecl data::ConfigWidgetAttachAvatarFactory::ConfigWidgetAttachAvatarFactory(
        data::ConfigWidgetAttachAvatarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAttachAvatarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAttachAvatarFactory = v2;
};

// Line 433: range 000000000E408836-000000000E40898B
void __cdecl data::ConfigWidgetTreasureMapDetector::ConfigWidgetTreasureMapDetector(
        data::ConfigWidgetTreasureMapDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_succ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius_succ >> 3) + 0x7FFF8000) )
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
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_duration, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->gadget_duration = 0;
};

// Line 433: range 000000000E408DA6-000000000E408FF2
void __cdecl data::ConfigWidgetTreasureMapDetector::ConfigWidgetTreasureMapDetector(
        data::ConfigWidgetTreasureMapDetector *const this,
        const data::ConfigWidgetTreasureMapDetector *a2)
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
  const data::ConfigWidgetTreasureMapDetector *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v13 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->radius_succ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->radius_succ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->radius_succ);
  }
  radius_succ = v13->radius_succ;
  v7 = *(_BYTE *)(((unsigned __int64)&this->radius_succ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
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
  v10 = (((_BYTE)v13 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gadget_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gadget_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gadget_duration);
  }
  gadget_duration = v13->gadget_duration;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_duration >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gadget_duration, v10);
  }
  this->gadget_duration = gadget_duration;
};

// Line 443: range 000000000E43419A-000000000E4341C4
void __cdecl data::ConfigWidgetTreasureMapDetector::~ConfigWidgetTreasureMapDetector(
        data::ConfigWidgetTreasureMapDetector *const this)
{
  data::ConfigWidgetTreasureMapDetector::~ConfigWidgetTreasureMapDetector(this);
  operator delete(this, 0x48uLL);
};

// Line 443: range 000000000E43414C-000000000E434199
void __cdecl data::ConfigWidgetTreasureMapDetector::~ConfigWidgetTreasureMapDetector(
        data::ConfigWidgetTreasureMapDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 448: range 000000000E195E52-000000000E195E62
const char *__cdecl data::ConfigWidgetTreasureMapDetector::getTypeName(
        const data::ConfigWidgetTreasureMapDetector *const this)
{
  return "ConfigWidgetTreasureMapDetector";
};

// Line 449: range 000000000E195E64-000000000E196000
int32_t __cdecl data::ConfigWidgetTreasureMapDetector::getHashNum(
        const data::ConfigWidgetTreasureMapDetector *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetTreasureMapDetector::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetTreasureMapDetector",
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

// Line 465: range 000000000E40923C-000000000E40927D
void __cdecl data::ConfigWidgetTreasureMapDetectorFactory::ConfigWidgetTreasureMapDetectorFactory(
        data::ConfigWidgetTreasureMapDetectorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTreasureMapDetectorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetTreasureMapDetectorFactory = v2;
};

// Line 473: range 000000000E409586-000000000E4097E3
void __cdecl data::ConfigWidgetGadgetBuilder::ConfigWidgetGadgetBuilder(data::ConfigWidgetGadgetBuilder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lasting_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lasting_time, v1);
  }
  this->lasting_time = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) )
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
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
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
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) )
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
  v6 = ((_BYTE)this + 84) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->check_collision >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->check_collision >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->check_collision, v6, v7);
  this->check_collision = 0;
};

// Line 473: range 000000000E409B9E-000000000E409FE2
void __cdecl data::ConfigWidgetGadgetBuilder::ConfigWidgetGadgetBuilder(
        data::ConfigWidgetGadgetBuilder *const this,
        const data::ConfigWidgetGadgetBuilder *a2)
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
  const data::ConfigWidgetGadgetBuilder *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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
  v5 = (((_BYTE)v22 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->max_count_in_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->max_count_in_scene);
  }
  max_count_in_scene = v22->max_count_in_scene;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
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
  v10 = (((_BYTE)v22 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->gadget_id);
  }
  gadget_id = v22->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
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
    && (char)((((_BYTE)v22 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->height_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->height_to_avatar);
  }
  height_to_avatar = v22->height_to_avatar;
  v15 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_to_avatar >> 3) + 0x7FFF8000) )
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
  v17 = ((_BYTE)v22 + 84) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v22->check_collision >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v22->check_collision >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v22->check_collision, v17, v18);
  check_collision = v22->check_collision;
  v20 = *(_BYTE *)(((unsigned __int64)&this->check_collision >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->check_collision, v17, v21);
  this->check_collision = check_collision;
};

// Line 487: range 000000000E4340D2-000000000E43411F
void __cdecl data::ConfigWidgetGadgetBuilder::~ConfigWidgetGadgetBuilder(data::ConfigWidgetGadgetBuilder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 487: range 000000000E434120-000000000E43414A
void __cdecl data::ConfigWidgetGadgetBuilder::~ConfigWidgetGadgetBuilder(data::ConfigWidgetGadgetBuilder *const this)
{
  data::ConfigWidgetGadgetBuilder::~ConfigWidgetGadgetBuilder(this);
  operator delete(this, 0x58uLL);
};

// Line 492: range 000000000E196002-000000000E196012
const char *__cdecl data::ConfigWidgetGadgetBuilder::getTypeName(const data::ConfigWidgetGadgetBuilder *const this)
{
  return "ConfigWidgetGadgetBuilder";
};

// Line 493: range 000000000E196014-000000000E1961B0
int32_t __cdecl data::ConfigWidgetGadgetBuilder::getHashNum(const data::ConfigWidgetGadgetBuilder *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetGadgetBuilder::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetGadgetBuilder",
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

// Line 509: range 000000000E40A22C-000000000E40A26D
void __cdecl data::ConfigWidgetGadgetBuilderFactory::ConfigWidgetGadgetBuilderFactory(
        data::ConfigWidgetGadgetBuilderFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetGadgetBuilderFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetGadgetBuilderFactory = v2;
};

// Line 517: range 000000000E40A576-000000000E40A633
void __cdecl data::ConfigWidgetTakePhoto::ConfigWidgetTakePhoto(data::ConfigWidgetTakePhoto *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidget::ConfigBaseWidget((data::ConfigBaseWidget *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  v3 = ((_BYTE)this + 53) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->has_camera_effect, v3, v4);
  this->has_camera_effect = 0;
  std::string::basic_string(&this->camera_uieffect);
  std::string::basic_string(&this->camera_screen_effect);
  std::string::basic_string(&this->main_camera_effect);
};

// Line 517: range 000000000E40A9F0-000000000E40AB66
void __cdecl data::ConfigWidgetTakePhoto::ConfigWidgetTakePhoto(
        data::ConfigWidgetTakePhoto *const this,
        const data::ConfigWidgetTakePhoto *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool has_camera_effect; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseWidget::ConfigBaseWidget((data::ConfigBaseWidget *const)this, (const data::ConfigBaseWidget *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  v3 = ((_BYTE)a2 + 53) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->has_camera_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->has_camera_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->has_camera_effect, v3, v4);
  has_camera_effect = a2->has_camera_effect;
  v6 = *(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_camera_effect, v3, v7);
  this->has_camera_effect = has_camera_effect;
  std::string::basic_string(&this->camera_uieffect, &a2->camera_uieffect);
  std::string::basic_string(&this->camera_screen_effect, &a2->camera_screen_effect);
  std::string::basic_string(&this->main_camera_effect, &a2->main_camera_effect);
};

// Line 527: range 000000000E434028-000000000E4340A5
void __cdecl data::ConfigWidgetTakePhoto::~ConfigWidgetTakePhoto(data::ConfigWidgetTakePhoto *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::~string(&this->main_camera_effect);
  std::string::~string(&this->camera_screen_effect);
  std::string::~string(&this->camera_uieffect);
  data::ConfigBaseWidget::~ConfigBaseWidget((data::ConfigBaseWidget *const)this);
};

// Line 527: range 000000000E4340A6-000000000E4340D0
void __cdecl data::ConfigWidgetTakePhoto::~ConfigWidgetTakePhoto(data::ConfigWidgetTakePhoto *const this)
{
  data::ConfigWidgetTakePhoto::~ConfigWidgetTakePhoto(this);
  operator delete(this, 0x98uLL);
};

// Line 532: range 000000000E1961B2-000000000E1961C2
const char *__cdecl data::ConfigWidgetTakePhoto::getTypeName(const data::ConfigWidgetTakePhoto *const this)
{
  return "ConfigWidgetTakePhoto";
};

// Line 533: range 000000000E1961C4-000000000E196360
int32_t __cdecl data::ConfigWidgetTakePhoto::getHashNum(const data::ConfigWidgetTakePhoto *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetTakePhoto::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetTakePhoto",
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

// Line 549: range 000000000E40AE50-000000000E40AE91
void __cdecl data::ConfigWidgetTakePhotoFactory::ConfigWidgetTakePhotoFactory(
        data::ConfigWidgetTakePhotoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetTakePhotoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetTakePhotoFactory = v2;
};

// Line 557: range 000000000E40B19A-000000000E40B227
void __cdecl data::ConfigWidgetBlessingCamera::ConfigWidgetBlessingCamera(data::ConfigWidgetBlessingCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseWidget::ConfigBaseWidget((data::ConfigBaseWidget *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBlessingCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  v3 = ((_BYTE)this + 53) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_fixed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_fixed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_fixed, v3, v4);
  this->is_fixed = 0;
};

// Line 557: range 000000000E40B61C-000000000E40B6F4
void __cdecl data::ConfigWidgetBlessingCamera::ConfigWidgetBlessingCamera(
        data::ConfigWidgetBlessingCamera *const this,
        const data::ConfigWidgetBlessingCamera *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_fixed; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseWidget::ConfigBaseWidget((data::ConfigBaseWidget *const)this, (const data::ConfigBaseWidget *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBlessingCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  v3 = ((_BYTE)a2 + 53) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_fixed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_fixed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_fixed, v3, v4);
  is_fixed = a2->is_fixed;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_fixed >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_fixed, v3, v7);
  this->is_fixed = is_fixed;
};

// Line 564: range 000000000E433FAE-000000000E433FFB
void __cdecl data::ConfigWidgetBlessingCamera::~ConfigWidgetBlessingCamera(
        data::ConfigWidgetBlessingCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBlessingCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget((data::ConfigBaseWidget *const)this);
};

// Line 564: range 000000000E433FFC-000000000E434026
void __cdecl data::ConfigWidgetBlessingCamera::~ConfigWidgetBlessingCamera(
        data::ConfigWidgetBlessingCamera *const this)
{
  data::ConfigWidgetBlessingCamera::~ConfigWidgetBlessingCamera(this);
  operator delete(this, 0x38uLL);
};

// Line 569: range 000000000E196362-000000000E196372
const char *__cdecl data::ConfigWidgetBlessingCamera::getTypeName(const data::ConfigWidgetBlessingCamera *const this)
{
  return "ConfigWidgetBlessingCamera";
};

// Line 570: range 000000000E196374-000000000E196510
int32_t __cdecl data::ConfigWidgetBlessingCamera::getHashNum(const data::ConfigWidgetBlessingCamera *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetBlessingCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetBlessingCamera",
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

// Line 586: range 000000000E40B93E-000000000E40B97F
void __cdecl data::ConfigWidgetBlessingCameraFactory::ConfigWidgetBlessingCameraFactory(
        data::ConfigWidgetBlessingCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetBlessingCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetBlessingCameraFactory = v2;
};

// Line 594: range 000000000E40BC88-000000000E40BE67
void __cdecl data::ConfigWidgetMiracleRing::ConfigWidgetMiracleRing(data::ConfigWidgetMiracleRing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetMiracleRing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count_in_scene, v1);
  }
  this->max_count_in_scene = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_count_by_player, v3);
  }
  this->max_count_by_player = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v4);
  }
  this->distance_to_avatar = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v4);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_destroy_distance, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->combat_destroy_distance = 0.0;
};

// Line 594: range 000000000E40C28C-000000000E40C5DB
void __cdecl data::ConfigWidgetMiracleRing::ConfigWidgetMiracleRing(
        data::ConfigWidgetMiracleRing *const this,
        const data::ConfigWidgetMiracleRing *a2)
{
  int (**v2)(...); // rdx
  uint32_t max_count_in_scene; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_count_by_player; // ecx
  char v7; // dl
  uint32_t gadget_id; // ecx
  char v9; // al
  float distance_to_avatar; // xmm0_4
  __int64 v11; // rsi
  float radius; // xmm0_4
  float combat_destroy_distance; // xmm0_4
  const data::ConfigWidgetMiracleRing *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetMiracleRing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_count_in_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_count_in_scene);
  }
  max_count_in_scene = a2->max_count_in_scene;
  v4 = *(_BYTE *)(((unsigned __int64)&this->max_count_in_scene >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->max_count_in_scene, a2);
  }
  this->max_count_in_scene = max_count_in_scene;
  v5 = (((_BYTE)v14 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->max_count_by_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->max_count_by_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->max_count_by_player);
  }
  max_count_by_player = v14->max_count_by_player;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_count_by_player >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_count_by_player, v5);
  }
  this->max_count_by_player = max_count_by_player;
  if ( *(_BYTE *)(((unsigned __int64)&v14->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->gadget_id);
  }
  gadget_id = v14->gadget_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v14->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->distance_to_avatar);
  }
  distance_to_avatar = v14->distance_to_avatar;
  v11 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance_to_avatar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance_to_avatar, v11);
  }
  this->distance_to_avatar = distance_to_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&v14->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->radius);
  }
  radius = v14->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v11);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&v14->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->combat_destroy_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->combat_destroy_distance);
  }
  combat_destroy_distance = v14->combat_destroy_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_destroy_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_destroy_distance, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->combat_destroy_distance = combat_destroy_distance;
};

// Line 606: range 000000000E433F82-000000000E433FAC
void __cdecl data::ConfigWidgetMiracleRing::~ConfigWidgetMiracleRing(data::ConfigWidgetMiracleRing *const this)
{
  data::ConfigWidgetMiracleRing::~ConfigWidgetMiracleRing(this);
  operator delete(this, 0x50uLL);
};

// Line 606: range 000000000E433F34-000000000E433F81
void __cdecl data::ConfigWidgetMiracleRing::~ConfigWidgetMiracleRing(data::ConfigWidgetMiracleRing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetMiracleRing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 611: range 000000000E196512-000000000E196522
const char *__cdecl data::ConfigWidgetMiracleRing::getTypeName(const data::ConfigWidgetMiracleRing *const this)
{
  return "ConfigWidgetMiracleRing";
};

// Line 612: range 000000000E196524-000000000E1966C0
int32_t __cdecl data::ConfigWidgetMiracleRing::getHashNum(const data::ConfigWidgetMiracleRing *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetMiracleRing::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetMiracleRing",
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

// Line 628: range 000000000E40C824-000000000E40C865
void __cdecl data::ConfigWidgetMiracleRingFactory::ConfigWidgetMiracleRingFactory(
        data::ConfigWidgetMiracleRingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetMiracleRingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetMiracleRingFactory = v2;
};

// Line 636: range 000000000E40CB6E-000000000E40CBEB
void __cdecl data::ConfigWidgetWaterSprite::ConfigWidgetWaterSprite(data::ConfigWidgetWaterSprite *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSprite + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->ability_trigger_name);
  std::string::basic_string(&this->ability_trigger_name_second);
};

// Line 636: range 000000000E40CFA8-000000000E40D09E
void __cdecl data::ConfigWidgetWaterSprite::ConfigWidgetWaterSprite(
        data::ConfigWidgetWaterSprite *const this,
        const data::ConfigWidgetWaterSprite *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSprite + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  std::string::basic_string(&this->ability_trigger_name, &a2->ability_trigger_name);
  std::string::basic_string(&this->ability_trigger_name_second, &a2->ability_trigger_name_second);
};

// Line 645: range 000000000E433E8A-000000000E433F07
void __cdecl data::ConfigWidgetWaterSprite::~ConfigWidgetWaterSprite(data::ConfigWidgetWaterSprite *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSprite + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::~string(&this->ability_trigger_name_second);
  std::string::~string(&this->ability_trigger_name);
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 645: range 000000000E433F08-000000000E433F32
void __cdecl data::ConfigWidgetWaterSprite::~ConfigWidgetWaterSprite(data::ConfigWidgetWaterSprite *const this)
{
  data::ConfigWidgetWaterSprite::~ConfigWidgetWaterSprite(this);
  operator delete(this, 0x98uLL);
};

// Line 650: range 000000000E1966C2-000000000E1966D2
const char *__cdecl data::ConfigWidgetWaterSprite::getTypeName(const data::ConfigWidgetWaterSprite *const this)
{
  return "ConfigWidgetWaterSprite";
};

// Line 651: range 000000000E1966D4-000000000E196870
int32_t __cdecl data::ConfigWidgetWaterSprite::getHashNum(const data::ConfigWidgetWaterSprite *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetWaterSprite::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetWaterSprite",
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

// Line 667: range 000000000E40D388-000000000E40D3C9
void __cdecl data::ConfigWidgetWaterSpriteFactory::ConfigWidgetWaterSpriteFactory(
        data::ConfigWidgetWaterSpriteFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSpriteFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetWaterSpriteFactory = v2;
};

// Line 675: range 000000000E40D6D2-000000000E40D72F
void __cdecl data::ConfigWidgetWaterSpriteToy::ConfigWidgetWaterSpriteToy(data::ConfigWidgetWaterSpriteToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSpriteToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name);
};

// Line 675: range 000000000E40DAEA-000000000E40DB80
void __cdecl data::ConfigWidgetWaterSpriteToy::ConfigWidgetWaterSpriteToy(
        data::ConfigWidgetWaterSpriteToy *const this,
        const data::ConfigWidgetWaterSpriteToy *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSpriteToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
};

// Line 682: range 000000000E433E00-000000000E433E5D
void __cdecl data::ConfigWidgetWaterSpriteToy::~ConfigWidgetWaterSpriteToy(
        data::ConfigWidgetWaterSpriteToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSpriteToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 682: range 000000000E433E5E-000000000E433E88
void __cdecl data::ConfigWidgetWaterSpriteToy::~ConfigWidgetWaterSpriteToy(
        data::ConfigWidgetWaterSpriteToy *const this)
{
  data::ConfigWidgetWaterSpriteToy::~ConfigWidgetWaterSpriteToy(this);
  operator delete(this, 0x58uLL);
};

// Line 687: range 000000000E196872-000000000E196882
const char *__cdecl data::ConfigWidgetWaterSpriteToy::getTypeName(const data::ConfigWidgetWaterSpriteToy *const this)
{
  return "ConfigWidgetWaterSpriteToy";
};

// Line 688: range 000000000E196884-000000000E196A20
int32_t __cdecl data::ConfigWidgetWaterSpriteToy::getHashNum(const data::ConfigWidgetWaterSpriteToy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetWaterSpriteToy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetWaterSpriteToy",
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

// Line 704: range 000000000E40DE6A-000000000E40DEAB
void __cdecl data::ConfigWidgetWaterSpriteToyFactory::ConfigWidgetWaterSpriteToyFactory(
        data::ConfigWidgetWaterSpriteToyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetWaterSpriteToyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetWaterSpriteToyFactory = v2;
};

// Line 712: range 000000000E40E1B4-000000000E40E211
void __cdecl data::ConfigWidgetAbilityGroupGenerator::ConfigWidgetAbilityGroupGenerator(
        data::ConfigWidgetAbilityGroupGenerator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAbilityGroupGenerator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name);
};

// Line 712: range 000000000E40E5CC-000000000E40E662
void __cdecl data::ConfigWidgetAbilityGroupGenerator::ConfigWidgetAbilityGroupGenerator(
        data::ConfigWidgetAbilityGroupGenerator *const this,
        const data::ConfigWidgetAbilityGroupGenerator *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAbilityGroupGenerator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
};

// Line 719: range 000000000E433D76-000000000E433DD3
void __cdecl data::ConfigWidgetAbilityGroupGenerator::~ConfigWidgetAbilityGroupGenerator(
        data::ConfigWidgetAbilityGroupGenerator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAbilityGroupGenerator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 719: range 000000000E433DD4-000000000E433DFE
void __cdecl data::ConfigWidgetAbilityGroupGenerator::~ConfigWidgetAbilityGroupGenerator(
        data::ConfigWidgetAbilityGroupGenerator *const this)
{
  data::ConfigWidgetAbilityGroupGenerator::~ConfigWidgetAbilityGroupGenerator(this);
  operator delete(this, 0x58uLL);
};

// Line 724: range 000000000E196A22-000000000E196A32
const char *__cdecl data::ConfigWidgetAbilityGroupGenerator::getTypeName(
        const data::ConfigWidgetAbilityGroupGenerator *const this)
{
  return "ConfigWidgetAbilityGroupGenerator";
};

// Line 725: range 000000000E196A34-000000000E196BD0
int32_t __cdecl data::ConfigWidgetAbilityGroupGenerator::getHashNum(
        const data::ConfigWidgetAbilityGroupGenerator *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAbilityGroupGenerator::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAbilityGroupGenerator",
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

// Line 741: range 000000000E40E94C-000000000E40E98D
void __cdecl data::ConfigWidgetAbilityGroupGeneratorFactory::ConfigWidgetAbilityGroupGeneratorFactory(
        data::ConfigWidgetAbilityGroupGeneratorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAbilityGroupGeneratorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAbilityGroupGeneratorFactory = v2;
};

// Line 749: range 000000000E40EC96-000000000E40ECF3
void __cdecl data::ConfigWidgetOpenPage::ConfigWidgetOpenPage(data::ConfigWidgetOpenPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOpenPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->page_name);
};

// Line 749: range 000000000E40F0AE-000000000E40F144
void __cdecl data::ConfigWidgetOpenPage::ConfigWidgetOpenPage(
        data::ConfigWidgetOpenPage *const this,
        const data::ConfigWidgetOpenPage *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOpenPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->page_name, &a2->page_name);
};

// Line 756: range 000000000E433CEC-000000000E433D49
void __cdecl data::ConfigWidgetOpenPage::~ConfigWidgetOpenPage(data::ConfigWidgetOpenPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOpenPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::~string(&this->page_name);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 756: range 000000000E433D4A-000000000E433D74
void __cdecl data::ConfigWidgetOpenPage::~ConfigWidgetOpenPage(data::ConfigWidgetOpenPage *const this)
{
  data::ConfigWidgetOpenPage::~ConfigWidgetOpenPage(this);
  operator delete(this, 0x58uLL);
};

// Line 761: range 000000000E196BD2-000000000E196BE2
const char *__cdecl data::ConfigWidgetOpenPage::getTypeName(const data::ConfigWidgetOpenPage *const this)
{
  return "ConfigWidgetOpenPage";
};

// Line 762: range 000000000E196BE4-000000000E196D80
int32_t __cdecl data::ConfigWidgetOpenPage::getHashNum(const data::ConfigWidgetOpenPage *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetOpenPage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetOpenPage",
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

// Line 778: range 000000000E40F42E-000000000E40F46F
void __cdecl data::ConfigWidgetOpenPageFactory::ConfigWidgetOpenPageFactory(
        data::ConfigWidgetOpenPageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetOpenPageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetOpenPageFactory = v2;
};

// Line 786: range 000000000E40F778-000000000E40F835
void __cdecl data::ConfigWidgetUseAttachAbilityGroupToy::ConfigWidgetUseAttachAbilityGroupToy(
        data::ConfigWidgetUseAttachAbilityGroupToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroupToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name);
  std::string::basic_string(&this->ability_group_name_second);
  std::string::basic_string(&this->ability_name);
  if ( *(char *)(((unsigned __int64)&this->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_update_cdafter_ability_trigger, v1, &this->is_update_cdafter_ability_trigger);
  this->is_update_cdafter_ability_trigger = 0;
};

// Line 786: range 000000000E40FBF0-000000000E40FD66
void __cdecl data::ConfigWidgetUseAttachAbilityGroupToy::ConfigWidgetUseAttachAbilityGroupToy(
        data::ConfigWidgetUseAttachAbilityGroupToy *const this,
        const data::ConfigWidgetUseAttachAbilityGroupToy *a2)
{
  int (**v2)(...); // rdx
  std::string *p_ability_name; // rsi
  bool is_update_cdafter_ability_trigger; // cl
  char v5; // al

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroupToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
  std::string::basic_string(&this->ability_group_name_second, &a2->ability_group_name_second);
  p_ability_name = &a2->ability_name;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  if ( *(char *)(((unsigned __int64)&a2->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_update_cdafter_ability_trigger, p_ability_name, &a2->is_update_cdafter_ability_trigger);
  is_update_cdafter_ability_trigger = a2->is_update_cdafter_ability_trigger;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_ability_name) = v5 != 0;
    __asan_report_store1(
      &this->is_update_cdafter_ability_trigger,
      p_ability_name,
      &this->is_update_cdafter_ability_trigger);
  }
  this->is_update_cdafter_ability_trigger = is_update_cdafter_ability_trigger;
};

// Line 796: range 000000000E433C42-000000000E433CBF
void __cdecl data::ConfigWidgetUseAttachAbilityGroupToy::~ConfigWidgetUseAttachAbilityGroupToy(
        data::ConfigWidgetUseAttachAbilityGroupToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroupToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  std::string::~string(&this->ability_name);
  std::string::~string(&this->ability_group_name_second);
  std::string::~string(&this->ability_group_name);
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 796: range 000000000E433CC0-000000000E433CEA
void __cdecl data::ConfigWidgetUseAttachAbilityGroupToy::~ConfigWidgetUseAttachAbilityGroupToy(
        data::ConfigWidgetUseAttachAbilityGroupToy *const this)
{
  data::ConfigWidgetUseAttachAbilityGroupToy::~ConfigWidgetUseAttachAbilityGroupToy(this);
  operator delete(this, 0xA0uLL);
};

// Line 801: range 000000000E196D82-000000000E196D92
const char *__cdecl data::ConfigWidgetUseAttachAbilityGroupToy::getTypeName(
        const data::ConfigWidgetUseAttachAbilityGroupToy *const this)
{
  return "ConfigWidgetUseAttachAbilityGroupToy";
};

// Line 802: range 000000000E196D94-000000000E196F30
int32_t __cdecl data::ConfigWidgetUseAttachAbilityGroupToy::getHashNum(
        const data::ConfigWidgetUseAttachAbilityGroupToy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetUseAttachAbilityGroupToy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetUseAttachAbilityGroupToy",
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

// Line 818: range 000000000E410050-000000000E410091
void __cdecl data::ConfigWidgetUseAttachAbilityGroupToyFactory::ConfigWidgetUseAttachAbilityGroupToyFactory(
        data::ConfigWidgetUseAttachAbilityGroupToyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseAttachAbilityGroupToyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetUseAttachAbilityGroupToyFactory = v2;
};

// Line 826: range 000000000E41039A-000000000E4103E7
void __cdecl data::ConfigWidgetUseItemToy::ConfigWidgetUseItemToy(data::ConfigWidgetUseItemToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseItemToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
};

// Line 826: range 000000000E4107DC-000000000E410834
void __cdecl data::ConfigWidgetUseItemToy::ConfigWidgetUseItemToy(
        data::ConfigWidgetUseItemToy *const this,
        const data::ConfigWidgetUseItemToy *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseItemToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
};

// Line 832: range 000000000E433BC8-000000000E433C15
void __cdecl data::ConfigWidgetUseItemToy::~ConfigWidgetUseItemToy(data::ConfigWidgetUseItemToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseItemToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 832: range 000000000E433C16-000000000E433C40
void __cdecl data::ConfigWidgetUseItemToy::~ConfigWidgetUseItemToy(data::ConfigWidgetUseItemToy *const this)
{
  data::ConfigWidgetUseItemToy::~ConfigWidgetUseItemToy(this);
  operator delete(this, 0x38uLL);
};

// Line 837: range 000000000E196F32-000000000E196F42
const char *__cdecl data::ConfigWidgetUseItemToy::getTypeName(const data::ConfigWidgetUseItemToy *const this)
{
  return "ConfigWidgetUseItemToy";
};

// Line 838: range 000000000E196F44-000000000E1970E0
int32_t __cdecl data::ConfigWidgetUseItemToy::getHashNum(const data::ConfigWidgetUseItemToy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetUseItemToy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetUseItemToy",
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

// Line 854: range 000000000E410A7E-000000000E410ABF
void __cdecl data::ConfigWidgetUseItemToyFactory::ConfigWidgetUseItemToyFactory(
        data::ConfigWidgetUseItemToyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetUseItemToyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetUseItemToyFactory = v2;
};

// Line 862: range 000000000E410DC8-000000000E410E53
void __cdecl data::ConfigWidgetAddBuffToy::ConfigWidgetAddBuffToy(data::ConfigWidgetAddBuffToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseWidget::ConfigBaseWidget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuffToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_id, v1);
  }
  this->buff_id = 0;
};

// Line 862: range 000000000E411258-000000000E411325
void __cdecl data::ConfigWidgetAddBuffToy::ConfigWidgetAddBuffToy(
        data::ConfigWidgetAddBuffToy *const this,
        const data::ConfigWidgetAddBuffToy *a2)
{
  int (**v2)(...); // rdx
  uint32_t buff_id; // ecx
  char v4; // al

  data::ConfigBaseWidget::ConfigBaseWidget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuffToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseWidget = v2;
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

// Line 869: range 000000000E433B4E-000000000E433B9B
void __cdecl data::ConfigWidgetAddBuffToy::~ConfigWidgetAddBuffToy(data::ConfigWidgetAddBuffToy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuffToy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseWidget = v2;
  data::ConfigBaseWidget::~ConfigBaseWidget(this);
};

// Line 869: range 000000000E433B9C-000000000E433BC6
void __cdecl data::ConfigWidgetAddBuffToy::~ConfigWidgetAddBuffToy(data::ConfigWidgetAddBuffToy *const this)
{
  data::ConfigWidgetAddBuffToy::~ConfigWidgetAddBuffToy(this);
  operator delete(this, 0x40uLL);
};

// Line 874: range 000000000E1970E2-000000000E1970F2
const char *__cdecl data::ConfigWidgetAddBuffToy::getTypeName(const data::ConfigWidgetAddBuffToy *const this)
{
  return "ConfigWidgetAddBuffToy";
};

// Line 875: range 000000000E1970F4-000000000E197290
int32_t __cdecl data::ConfigWidgetAddBuffToy::getHashNum(const data::ConfigWidgetAddBuffToy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAddBuffToy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAddBuffToy",
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

// Line 891: range 000000000E41156E-000000000E4115AF
void __cdecl data::ConfigWidgetAddBuffToyFactory::ConfigWidgetAddBuffToyFactory(
        data::ConfigWidgetAddBuffToyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAddBuffToyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAddBuffToyFactory = v2;
};
