// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/HomeWorldExcelConfig.gen.h

// Line 48: range 0000000013733618-0000000013733659
void __cdecl data::ConfigHomeGather::~ConfigHomeGather(data::ConfigHomeGather *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigHomeGather + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHomeGather = v2;
};

// Line 290: range 00000000137936A4-000000001379394D
void __cdecl data::HomeWorldFurnitureTypeExcelConfig::HomeWorldFurnitureTypeExcelConfig(
        data::HomeWorldFurnitureTypeExcelConfig *const this,
        const data::HomeWorldFurnitureTypeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t type_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t type_category_id; // ecx
  char v7; // dl
  data::FurnitureDeployType scene_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_show_in_bag; // cl
  char v13; // dl
  __int64 v14; // rdx
  uint32_t limit; // ecx
  char v16; // al
  const data::HomeWorldFurnitureTypeExcelConfig *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFurnitureTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldFurnitureTypeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type_id);
  }
  type_id = a2->type_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type_id, a2);
  }
  this->type_id = type_id;
  v5 = (((_BYTE)v17 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->type_category_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->type_category_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->type_category_id);
  }
  type_category_id = v17->type_category_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_category_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type_category_id, v5);
  }
  this->type_category_id = type_category_id;
  if ( *(_BYTE *)(((unsigned __int64)&v17->scene_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->scene_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->scene_type);
  }
  scene_type = v17->scene_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->scene_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->scene_type, v5);
  }
  this->scene_type = scene_type;
  v10 = ((_BYTE)v17 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v17->is_show_in_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v17->is_show_in_bag >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v17->is_show_in_bag, v10, v11);
  is_show_in_bag = v17->is_show_in_bag;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_show_in_bag >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_show_in_bag, v10, v14);
  this->is_show_in_bag = is_show_in_bag;
  if ( *(_BYTE *)(((unsigned __int64)&v17->limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->limit);
  }
  limit = v17->limit;
  v16 = *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->limit, v10);
  }
  this->limit = limit;
};

// Line 293: range 00000000137CA476-00000000137CA4B7
void __cdecl data::HomeWorldFurnitureTypeExcelConfig::~HomeWorldFurnitureTypeExcelConfig(
        data::HomeWorldFurnitureTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFurnitureTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldFurnitureTypeExcelConfig = v2;
};

// Line 293: range 00000000137CA4B8-00000000137CA4E2
void __cdecl data::HomeWorldFurnitureTypeExcelConfig::~HomeWorldFurnitureTypeExcelConfig(
        data::HomeWorldFurnitureTypeExcelConfig *const this)
{
  data::HomeWorldFurnitureTypeExcelConfig::~HomeWorldFurnitureTypeExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 308: range 00000000135C3822-00000000135C3C7E
void __cdecl data::HomeWorldFurnitureExcelConfig::HomeWorldFurnitureExcelConfig(
        data::HomeWorldFurnitureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  data::ItemConfig::ItemConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  std::vector<unsigned int>::vector(&this->furniture_gadget_id);
  std::vector<unsigned int>::vector(&this->furn_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->surface_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surface_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->surface_type, v1);
  }
  this->surface_type = Ground_0;
  v3 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrange_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrange_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->arrange_limit, v3);
  }
  this->arrange_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_furniture_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_furniture_type, v3);
  }
  this->special_furniture_type = NormalFurnitrue;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_scene_id, v4);
  }
  this->room_scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort, v4);
  }
  this->comfort = 0;
  v5 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_limit, v5);
  }
  this->stack_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost, v5);
  }
  this->cost = 0;
  v6 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->discount_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->discount_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->discount_cost, v6);
  }
  this->discount_cost = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_combinable_light >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_combinable_light >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_combinable_light, v6);
  }
  this->is_combinable_light = 0;
  v7 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank_level, v7);
  }
  this->rank_level = 0;
  std::string::basic_string(&this->json_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->push_tips_id, v7);
  }
  this->push_tips_id = 0;
  v8 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_indicator_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->float_indicator_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->float_indicator_id, v8);
  }
  this->float_indicator_id = 0;
  if ( *(char *)(((unsigned __int64)&this->block_lego_text >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->block_lego_text, v8, &this->block_lego_text);
  this->block_lego_text = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_record_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_record_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_record_type, (((_BYTE)this - 44) & 7u) + 3);
  }
  this->group_record_type = GROUP_RECORD_TYPE_NONE;
};

// Line 308: range 0000000013793A8E-00000000137942E8
void __cdecl data::HomeWorldFurnitureExcelConfig::HomeWorldFurnitureExcelConfig(
        data::HomeWorldFurnitureExcelConfig *const this,
        const data::HomeWorldFurnitureExcelConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<unsigned int> *p_furn_type; // rsi
  data::FurnitureDeploySurfaceType surface_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t arrange_limit; // ecx
  char v8; // dl
  data::SpeicalFurnitureType special_furniture_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t room_scene_id; // ecx
  char v13; // dl
  uint32_t comfort; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t stack_limit; // ecx
  char v18; // dl
  uint32_t cost; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t discount_cost; // ecx
  char v23; // dl
  uint32_t is_combinable_light; // ecx
  char v25; // al
  __int64 v26; // rsi
  uint32_t rank_level; // ecx
  char v28; // dl
  std::string *p_json_name; // rsi
  uint32_t push_tips_id; // ecx
  char v31; // al
  __int64 v32; // rsi
  uint32_t float_indicator_id; // ecx
  char v34; // dl
  bool block_lego_text; // cl
  char v36; // al
  __int64 v37; // rsi
  data::GroupRecordType group_record_type; // ecx
  char v39; // dl

  data::ItemConfig::ItemConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemConfig = v2;
  std::vector<unsigned int>::vector(&this->furniture_gadget_id, &a2->furniture_gadget_id);
  p_furn_type = &a2->furn_type;
  std::vector<unsigned int>::vector(&this->furn_type, &a2->furn_type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->surface_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->surface_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->surface_type);
  }
  surface_type = a2->surface_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->surface_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_furn_type) = v5 != 0;
    __asan_report_store4(&this->surface_type, p_furn_type);
  }
  this->surface_type = surface_type;
  v6 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->arrange_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->arrange_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->arrange_limit);
  }
  arrange_limit = a2->arrange_limit;
  v8 = *(_BYTE *)(((unsigned __int64)&this->arrange_limit >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->arrange_limit, v6);
  }
  this->arrange_limit = arrange_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special_furniture_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->special_furniture_type);
  }
  special_furniture_type = a2->special_furniture_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->special_furniture_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->special_furniture_type, v6);
  }
  this->special_furniture_type = special_furniture_type;
  v11 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->room_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->room_scene_id);
  }
  room_scene_id = a2->room_scene_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->room_scene_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->room_scene_id, v11);
  }
  this->room_scene_id = room_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->comfort >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->comfort >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->comfort);
  }
  comfort = a2->comfort;
  v15 = *(_BYTE *)(((unsigned __int64)&this->comfort >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->comfort, v11);
  }
  this->comfort = comfort;
  v16 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stack_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->stack_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->stack_limit);
  }
  stack_limit = a2->stack_limit;
  v18 = *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->stack_limit, v16);
  }
  this->stack_limit = stack_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost);
  }
  cost = a2->cost;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cost >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->cost, v16);
  }
  this->cost = cost;
  v21 = (((_BYTE)a2 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->discount_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->discount_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->discount_cost);
  }
  discount_cost = a2->discount_cost;
  v23 = *(_BYTE *)(((unsigned __int64)&this->discount_cost >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->discount_cost, v21);
  }
  this->discount_cost = discount_cost;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_combinable_light >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_combinable_light >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_combinable_light);
  }
  is_combinable_light = a2->is_combinable_light;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_combinable_light >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->is_combinable_light, v21);
  }
  this->is_combinable_light = is_combinable_light;
  v26 = (((_BYTE)a2 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rank_level);
  }
  rank_level = a2->rank_level;
  v28 = *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->rank_level, v26);
  }
  this->rank_level = rank_level;
  p_json_name = &a2->json_name;
  std::string::basic_string(&this->json_name, &a2->json_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->push_tips_id);
  }
  push_tips_id = a2->push_tips_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(p_json_name) = v31 != 0;
    __asan_report_store4(&this->push_tips_id, p_json_name);
  }
  this->push_tips_id = push_tips_id;
  v32 = (((_BYTE)a2 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->float_indicator_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->float_indicator_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->float_indicator_id);
  }
  float_indicator_id = a2->float_indicator_id;
  v34 = *(_BYTE *)(((unsigned __int64)&this->float_indicator_id >> 3) + 0x7FFF8000);
  LOBYTE(v32) = v34 != 0;
  if ( v34 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v34 )
    __asan_report_store4(&this->float_indicator_id, v32);
  this->float_indicator_id = float_indicator_id;
  if ( *(char *)(((unsigned __int64)&a2->block_lego_text >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->block_lego_text, v32, &a2->block_lego_text);
  block_lego_text = a2->block_lego_text;
  v36 = *(_BYTE *)(((unsigned __int64)&this->block_lego_text >> 3) + 0x7FFF8000);
  if ( v36 < 0 )
  {
    LOBYTE(v32) = v36 != 0;
    __asan_report_store1(&this->block_lego_text, v32, &this->block_lego_text);
  }
  this->block_lego_text = block_lego_text;
  v37 = (((_BYTE)a2 - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_record_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->group_record_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->group_record_type);
  }
  group_record_type = a2->group_record_type;
  v39 = *(_BYTE *)(((unsigned __int64)&this->group_record_type >> 3) + 0x7FFF8000);
  if ( v39 != 0 && (char)((((_BYTE)this - 44) & 7) + 3) >= v39 )
  {
    LOBYTE(v37) = v39 != 0;
    __asan_report_store4(&this->group_record_type, v37);
  }
  this->group_record_type = group_record_type;
};

// Line 312: range 00000000137CA44A-00000000137CA474
void __cdecl data::HomeWorldFurnitureExcelConfig::~HomeWorldFurnitureExcelConfig(
        data::HomeWorldFurnitureExcelConfig *const this)
{
  data::HomeWorldFurnitureExcelConfig::~HomeWorldFurnitureExcelConfig(this);
  operator delete(this, 0xD8uLL);
};

// Line 312: range 00000000137CA3CA-00000000137CA449
void __cdecl data::HomeWorldFurnitureExcelConfig::~HomeWorldFurnitureExcelConfig(
        data::HomeWorldFurnitureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  std::string::~string(&this->json_name);
  std::vector<unsigned int>::~vector(&this->furn_type);
  std::vector<unsigned int>::~vector(&this->furniture_gadget_id);
  data::ItemConfig::~ItemConfig(this);
};

// Line 339: range 00000000135C3C80-00000000135C3D93
void __cdecl data::HomeWorldSpecialFurnitureExcelConfig::HomeWorldSpecialFurnitureExcelConfig(
        data::HomeWorldSpecialFurnitureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldSpecialFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldSpecialFurnitureExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id, v3);
  }
  this->furniture_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  std::vector<unsigned int>::vector(&this->gadget_id);
};

// Line 339: range 000000001379442A-00000000137945F9
void __cdecl data::HomeWorldSpecialFurnitureExcelConfig::HomeWorldSpecialFurnitureExcelConfig(
        data::HomeWorldSpecialFurnitureExcelConfig *const this,
        const data::HomeWorldSpecialFurnitureExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t furniture_id; // ecx
  char v7; // dl
  uint32_t scene_id; // ecx
  char v9; // al
  const data::HomeWorldSpecialFurnitureExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldSpecialFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldSpecialFurnitureExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->furniture_id);
  }
  furniture_id = v10->furniture_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->furniture_id, v5);
  }
  this->furniture_id = furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->scene_id);
  }
  scene_id = v10->scene_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  std::vector<unsigned int>::vector(&this->gadget_id, &v10->gadget_id);
};

// Line 342: range 00000000137CA39E-00000000137CA3C8
void __cdecl data::HomeWorldSpecialFurnitureExcelConfig::~HomeWorldSpecialFurnitureExcelConfig(
        data::HomeWorldSpecialFurnitureExcelConfig *const this)
{
  data::HomeWorldSpecialFurnitureExcelConfig::~HomeWorldSpecialFurnitureExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 342: range 00000000137CA34C-00000000137CA39D
void __cdecl data::HomeWorldSpecialFurnitureExcelConfig::~HomeWorldSpecialFurnitureExcelConfig(
        data::HomeWorldSpecialFurnitureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldSpecialFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldSpecialFurnitureExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->gadget_id);
};

// Line 356: range 000000001379473A-0000000013794973
void __cdecl data::HomeworldAnimalExcelConfig::HomeworldAnimalExcelConfig(
        data::HomeworldAnimalExcelConfig *const this,
        const data::HomeworldAnimalExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t furniture_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t monster_id; // ecx
  char v7; // dl
  uint32_t is_rebirth; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t rebirth_cd; // ecx
  char v12; // dl
  const data::HomeworldAnimalExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeworldAnimalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeworldAnimalExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->furniture_id);
  }
  furniture_id = a2->furniture_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->furniture_id, a2);
  }
  this->furniture_id = furniture_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->monster_id);
  }
  monster_id = v13->monster_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->monster_id, v5);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->is_rebirth >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->is_rebirth >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->is_rebirth);
  }
  is_rebirth = v13->is_rebirth;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_rebirth >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->is_rebirth, v5);
  }
  this->is_rebirth = is_rebirth;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->rebirth_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->rebirth_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->rebirth_cd);
  }
  rebirth_cd = v13->rebirth_cd;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rebirth_cd >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->rebirth_cd, v10);
  }
  this->rebirth_cd = rebirth_cd;
};

// Line 359: range 00000000137CA2DE-00000000137CA31F
void __cdecl data::HomeworldAnimalExcelConfig::~HomeworldAnimalExcelConfig(
        data::HomeworldAnimalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeworldAnimalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeworldAnimalExcelConfig = v2;
};

// Line 359: range 00000000137CA320-00000000137CA34A
void __cdecl data::HomeworldAnimalExcelConfig::~HomeworldAnimalExcelConfig(
        data::HomeworldAnimalExcelConfig *const this)
{
  data::HomeworldAnimalExcelConfig::~HomeworldAnimalExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 373: range 00000000135C3D94-00000000135C3EE7
void __cdecl data::HomeworldModuleExcelConfig::HomeworldModuleExcelConfig(data::HomeworldModuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeworldModuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeworldModuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_free >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_free >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_free, v3, v4);
  this->is_free = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_scene_id, v3);
  }
  this->world_scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_room_scene_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->default_room_scene_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->default_room_scene_id = 0;
  std::vector<unsigned int>::vector(&this->optional_room_scene_id_vec);
};

// Line 373: range 0000000013794AB4-0000000013794D03
void __cdecl data::HomeworldModuleExcelConfig::HomeworldModuleExcelConfig(
        data::HomeworldModuleExcelConfig *const this,
        const data::HomeworldModuleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_free; // cl
  char v8; // dl
  __int64 v9; // rdx
  uint32_t world_scene_id; // ecx
  char v11; // al
  __int64 v12; // rsi
  uint32_t default_room_scene_id; // ecx
  char v14; // dl
  const data::HomeworldModuleExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeworldModuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeworldModuleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = ((_BYTE)v15 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v15->is_free >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v15->is_free >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v15->is_free, v5, v6);
  is_free = v15->is_free;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_free >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_free, v5, v9);
  this->is_free = is_free;
  if ( *(_BYTE *)(((unsigned __int64)&v15->world_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->world_scene_id);
  }
  world_scene_id = v15->world_scene_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->world_scene_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->world_scene_id, v5);
  }
  this->world_scene_id = world_scene_id;
  v12 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->default_room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->default_room_scene_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->default_room_scene_id);
  }
  default_room_scene_id = v15->default_room_scene_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->default_room_scene_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->default_room_scene_id, v12);
  }
  this->default_room_scene_id = default_room_scene_id;
  std::vector<unsigned int>::vector(&this->optional_room_scene_id_vec, &v15->optional_room_scene_id_vec);
};

// Line 376: range 00000000137CA260-00000000137CA2B1
void __cdecl data::HomeworldModuleExcelConfig::~HomeworldModuleExcelConfig(
        data::HomeworldModuleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeworldModuleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeworldModuleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->optional_room_scene_id_vec);
};

// Line 376: range 00000000137CA2B2-00000000137CA2DC
void __cdecl data::HomeworldModuleExcelConfig::~HomeworldModuleExcelConfig(
        data::HomeworldModuleExcelConfig *const this)
{
  data::HomeworldModuleExcelConfig::~HomeworldModuleExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 391: range 00000000135C3EE8-00000000135C4060
void __cdecl data::FurnitureSuiteExcelConfig::FurnitureSuiteExcelConfig(data::FurnitureSuiteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FurnitureSuiteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FurnitureSuiteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->suite_id, v1);
  }
  this->suite_id = 0;
  std::string::basic_string(&this->json_name);
  std::string::basic_string(&this->suite_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->drawing_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drawing_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drawing_id, v1);
  }
  this->drawing_id = 0;
  std::vector<unsigned int>::vector(&this->favorite_npc_excel_id_vec);
  std::string::basic_string(&this->trans_str);
  std::vector<unsigned int>::vector(&this->furn_type);
  std::string::basic_string(&this->item_icon);
  std::string::basic_string(&this->map_icon);
  if ( *(_BYTE *)(((unsigned __int64)&this->inter_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inter_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inter_ratio, v1);
  }
  this->inter_ratio = 0.0;
};

// Line 391: range 0000000013794E44-0000000013795158
void __cdecl data::FurnitureSuiteExcelConfig::FurnitureSuiteExcelConfig(
        data::FurnitureSuiteExcelConfig *const this,
        const data::FurnitureSuiteExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t suite_id; // ecx
  char v4; // al
  std::string *p_suite_name; // rsi
  uint32_t drawing_id; // ecx
  char v7; // al
  float inter_ratio; // xmm0_4
  const data::FurnitureSuiteExcelConfig *v9; // [rsp+0h] [rbp-20h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FurnitureSuiteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FurnitureSuiteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->suite_id);
  }
  suite_id = a2->suite_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->suite_id, a2);
  }
  this->suite_id = suite_id;
  std::string::basic_string(&this->json_name, &v9->json_name);
  p_suite_name = &v9->suite_name;
  std::string::basic_string(&this->suite_name, &v9->suite_name);
  if ( *(_BYTE *)(((unsigned __int64)&v9->drawing_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->drawing_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->drawing_id);
  }
  drawing_id = v9->drawing_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->drawing_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_suite_name) = v7 != 0;
    __asan_report_store4(&this->drawing_id, p_suite_name);
  }
  this->drawing_id = drawing_id;
  std::vector<unsigned int>::vector(&this->favorite_npc_excel_id_vec, &v9->favorite_npc_excel_id_vec);
  std::string::basic_string(&this->trans_str, &v9->trans_str);
  std::vector<unsigned int>::vector(&this->furn_type, &v9->furn_type);
  std::string::basic_string(&this->item_icon, &v9->item_icon);
  std::string::basic_string(&this->map_icon, &v9->map_icon);
  if ( *(_BYTE *)(((unsigned __int64)&v9->inter_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->inter_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->inter_ratio);
  }
  inter_ratio = v9->inter_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->inter_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inter_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inter_ratio, &v9->map_icon);
  }
  this->inter_ratio = inter_ratio;
};

// Line 394: range 00000000137CA17C-00000000137CA233
void __cdecl data::FurnitureSuiteExcelConfig::~FurnitureSuiteExcelConfig(data::FurnitureSuiteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FurnitureSuiteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FurnitureSuiteExcelConfig = v2;
  std::string::~string(&this->map_icon);
  std::string::~string(&this->item_icon);
  std::vector<unsigned int>::~vector(&this->furn_type);
  std::string::~string(&this->trans_str);
  std::vector<unsigned int>::~vector(&this->favorite_npc_excel_id_vec);
  std::string::~string(&this->suite_name);
  std::string::~string(&this->json_name);
};

// Line 394: range 00000000137CA234-00000000137CA25E
void __cdecl data::FurnitureSuiteExcelConfig::~FurnitureSuiteExcelConfig(data::FurnitureSuiteExcelConfig *const this)
{
  data::FurnitureSuiteExcelConfig::~FurnitureSuiteExcelConfig(this);
  operator delete(this, 0xF0uLL);
};

// Line 414: range 00000000135C4062-00000000135C4409
void __cdecl data::HomeworldLevelExcelConfig::HomeworldLevelExcelConfig(data::HomeworldLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeworldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeworldLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp, v3);
  }
  this->exp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_point_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_point_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_point_limit, v3);
  }
  this->comfort_point_limit = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_coin_store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_coin_store_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_coin_store_limit, v4);
  }
  this->home_coin_store_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_fetter_exp_store_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_fetter_exp_store_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_fetter_exp_store_limit, v4);
  }
  this->home_fetter_exp_store_limit = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_make_slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_make_slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_make_slot_count, v5);
  }
  this->furniture_make_slot_count = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->outdoor_unlock_block_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->outdoor_unlock_block_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->outdoor_unlock_block_count, v6);
  }
  this->outdoor_unlock_block_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->free_unlock_module_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->free_unlock_module_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->free_unlock_module_count, v6);
  }
  this->free_unlock_module_count = 0;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->deploy_npc_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deploy_npc_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->deploy_npc_count, v7);
  }
  this->deploy_npc_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->djinn_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->djinn_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->djinn_gadget_id, v7);
  }
  this->djinn_gadget_id = 0;
  v8 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_shop_goods_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_shop_goods_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_shop_goods_count, v8);
  }
  this->limit_shop_goods_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_shop_goods_extra_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_shop_goods_extra_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_shop_goods_extra_count, v8);
  }
  this->limit_shop_goods_extra_count = 0;
  std::vector<std::string>::vector(&this->level_funcs);
};

// Line 414: range 000000001379529A-000000001379594B
void __cdecl data::HomeworldLevelExcelConfig::HomeworldLevelExcelConfig(
        data::HomeworldLevelExcelConfig *const this,
        const data::HomeworldLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exp; // ecx
  char v7; // dl
  uint32_t comfort_point_limit; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t home_coin_store_limit; // ecx
  char v12; // dl
  uint32_t home_fetter_exp_store_limit; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t reward_id; // ecx
  char v17; // dl
  uint32_t furniture_make_slot_count; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t outdoor_unlock_block_count; // ecx
  char v22; // dl
  uint32_t free_unlock_module_count; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t deploy_npc_count; // ecx
  char v27; // dl
  uint32_t djinn_gadget_id; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t limit_shop_goods_count; // ecx
  char v32; // dl
  uint32_t limit_shop_goods_extra_count; // ecx
  char v34; // al
  const data::HomeworldLevelExcelConfig *v35; // [rsp+0h] [rbp-10h]

  v35 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeworldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeworldLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  v5 = (((_BYTE)v35 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->exp);
  }
  exp = v35->exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->exp, v5);
  }
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&v35->comfort_point_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->comfort_point_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->comfort_point_limit);
  }
  comfort_point_limit = v35->comfort_point_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->comfort_point_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->comfort_point_limit, v5);
  }
  this->comfort_point_limit = comfort_point_limit;
  v10 = (((_BYTE)v35 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->home_coin_store_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->home_coin_store_limit >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->home_coin_store_limit);
  }
  home_coin_store_limit = v35->home_coin_store_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->home_coin_store_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->home_coin_store_limit, v10);
  }
  this->home_coin_store_limit = home_coin_store_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v35->home_fetter_exp_store_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->home_fetter_exp_store_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->home_fetter_exp_store_limit);
  }
  home_fetter_exp_store_limit = v35->home_fetter_exp_store_limit;
  v14 = *(_BYTE *)(((unsigned __int64)&this->home_fetter_exp_store_limit >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->home_fetter_exp_store_limit, v10);
  }
  this->home_fetter_exp_store_limit = home_fetter_exp_store_limit;
  v15 = (((_BYTE)v35 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->reward_id);
  }
  reward_id = v35->reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reward_id, v15);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v35->furniture_make_slot_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->furniture_make_slot_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->furniture_make_slot_count);
  }
  furniture_make_slot_count = v35->furniture_make_slot_count;
  v19 = *(_BYTE *)(((unsigned __int64)&this->furniture_make_slot_count >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->furniture_make_slot_count, v15);
  }
  this->furniture_make_slot_count = furniture_make_slot_count;
  v20 = (((_BYTE)v35 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->outdoor_unlock_block_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->outdoor_unlock_block_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->outdoor_unlock_block_count);
  }
  outdoor_unlock_block_count = v35->outdoor_unlock_block_count;
  v22 = *(_BYTE *)(((unsigned __int64)&this->outdoor_unlock_block_count >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->outdoor_unlock_block_count, v20);
  }
  this->outdoor_unlock_block_count = outdoor_unlock_block_count;
  if ( *(_BYTE *)(((unsigned __int64)&v35->free_unlock_module_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->free_unlock_module_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->free_unlock_module_count);
  }
  free_unlock_module_count = v35->free_unlock_module_count;
  v24 = *(_BYTE *)(((unsigned __int64)&this->free_unlock_module_count >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->free_unlock_module_count, v20);
  }
  this->free_unlock_module_count = free_unlock_module_count;
  v25 = (((_BYTE)v35 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->deploy_npc_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->deploy_npc_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->deploy_npc_count);
  }
  deploy_npc_count = v35->deploy_npc_count;
  v27 = *(_BYTE *)(((unsigned __int64)&this->deploy_npc_count >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->deploy_npc_count, v25);
  }
  this->deploy_npc_count = deploy_npc_count;
  if ( *(_BYTE *)(((unsigned __int64)&v35->djinn_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->djinn_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->djinn_gadget_id);
  }
  djinn_gadget_id = v35->djinn_gadget_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->djinn_gadget_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->djinn_gadget_id, v25);
  }
  this->djinn_gadget_id = djinn_gadget_id;
  v30 = (((_BYTE)v35 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v35->limit_shop_goods_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->limit_shop_goods_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->limit_shop_goods_count);
  }
  limit_shop_goods_count = v35->limit_shop_goods_count;
  v32 = *(_BYTE *)(((unsigned __int64)&this->limit_shop_goods_count >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->limit_shop_goods_count, v30);
  }
  this->limit_shop_goods_count = limit_shop_goods_count;
  if ( *(_BYTE *)(((unsigned __int64)&v35->limit_shop_goods_extra_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->limit_shop_goods_extra_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->limit_shop_goods_extra_count);
  }
  limit_shop_goods_extra_count = v35->limit_shop_goods_extra_count;
  v34 = *(_BYTE *)(((unsigned __int64)&this->limit_shop_goods_extra_count >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v30) = v34 != 0;
    __asan_report_store4(&this->limit_shop_goods_extra_count, v30);
  }
  this->limit_shop_goods_extra_count = limit_shop_goods_extra_count;
  std::vector<std::string>::vector(&this->level_funcs, &v35->level_funcs);
};

// Line 417: range 00000000137CA150-00000000137CA17A
void __cdecl data::HomeworldLevelExcelConfig::~HomeworldLevelExcelConfig(data::HomeworldLevelExcelConfig *const this)
{
  data::HomeworldLevelExcelConfig::~HomeworldLevelExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 417: range 00000000137CA0FE-00000000137CA14F
void __cdecl data::HomeworldLevelExcelConfig::~HomeworldLevelExcelConfig(data::HomeworldLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeworldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeworldLevelExcelConfig = v2;
  std::vector<std::string>::~vector(&this->level_funcs);
};

// Line 441: range 00000000135C440A-00000000135C4635
void __cdecl data::FurnitureMakeExcelConfig::FurnitureMakeExcelConfig(data::FurnitureMakeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FurnitureMakeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FurnitureMakeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_item_id, v3);
  }
  this->furniture_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, v3);
  }
  this->count = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp, v4);
  }
  this->exp = 0;
  std::vector<data::IdCountConfig>::vector(&this->material_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->make_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->make_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->make_time, v4);
  }
  this->make_time = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_accelerate_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_accelerate_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_accelerate_time, v5);
  }
  this->max_accelerate_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quick_fetch_material_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quick_fetch_material_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quick_fetch_material_num, v5);
  }
  this->quick_fetch_material_num = 0;
  std::vector<unsigned int>::vector(&this->talent_return_disable_index_list);
};

// Line 441: range 0000000013795A8C-0000000013795E91
void __cdecl data::FurnitureMakeExcelConfig::FurnitureMakeExcelConfig(
        data::FurnitureMakeExcelConfig *const this,
        const data::FurnitureMakeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t furniture_item_id; // ecx
  char v7; // dl
  uint32_t count; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t exp; // ecx
  char v12; // dl
  std::vector<data::IdCountConfig> *p_material_items; // rsi
  uint32_t make_time; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t max_accelerate_time; // ecx
  char v18; // dl
  uint32_t quick_fetch_material_num; // ecx
  char v20; // al
  const data::FurnitureMakeExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FurnitureMakeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FurnitureMakeExcelConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->furniture_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->furniture_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->furniture_item_id);
  }
  furniture_item_id = v21->furniture_item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->furniture_item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->furniture_item_id, v5);
  }
  this->furniture_item_id = furniture_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->count);
  }
  count = v21->count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->exp);
  }
  exp = v21->exp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->exp, v10);
  }
  this->exp = exp;
  p_material_items = &v21->material_items;
  std::vector<data::IdCountConfig>::vector(&this->material_items, &v21->material_items);
  if ( *(_BYTE *)(((unsigned __int64)&v21->make_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->make_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->make_time);
  }
  make_time = v21->make_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->make_time >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_material_items) = v15 != 0;
    __asan_report_store4(&this->make_time, p_material_items);
  }
  this->make_time = make_time;
  v16 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->max_accelerate_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->max_accelerate_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->max_accelerate_time);
  }
  max_accelerate_time = v21->max_accelerate_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->max_accelerate_time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->max_accelerate_time, v16);
  }
  this->max_accelerate_time = max_accelerate_time;
  if ( *(_BYTE *)(((unsigned __int64)&v21->quick_fetch_material_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->quick_fetch_material_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->quick_fetch_material_num);
  }
  quick_fetch_material_num = v21->quick_fetch_material_num;
  v20 = *(_BYTE *)(((unsigned __int64)&this->quick_fetch_material_num >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->quick_fetch_material_num, v16);
  }
  this->quick_fetch_material_num = quick_fetch_material_num;
  std::vector<unsigned int>::vector(&this->talent_return_disable_index_list, &v21->talent_return_disable_index_list);
};

// Line 444: range 00000000137CA070-00000000137CA0D1
void __cdecl data::FurnitureMakeExcelConfig::~FurnitureMakeExcelConfig(data::FurnitureMakeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FurnitureMakeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FurnitureMakeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->talent_return_disable_index_list);
  std::vector<data::IdCountConfig>::~vector(&this->material_items);
};

// Line 444: range 00000000137CA0D2-00000000137CA0FC
void __cdecl data::FurnitureMakeExcelConfig::~FurnitureMakeExcelConfig(data::FurnitureMakeExcelConfig *const this)
{
  data::FurnitureMakeExcelConfig::~FurnitureMakeExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 463: range 00000000135C4636-00000000135C4745
void __cdecl data::HomeWorldShopSubTagExcelConfig::HomeWorldShopSubTagExcelConfig(
        data::HomeWorldShopSubTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldShopSubTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldShopSubTagExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_id, v1);
  }
  this->sub_id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->show_new_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->show_new_mark >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->show_new_mark, v3, v4);
  this->show_new_mark = 0;
  v5 = ((_BYTE)this + 13) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->show_limit_promote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->show_limit_promote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->show_limit_promote, v5, v6);
  this->show_limit_promote = 0;
  std::string::basic_string(&this->sub_tag);
};

// Line 463: range 0000000013795FD2-00000000137961A7
void __cdecl data::HomeWorldShopSubTagExcelConfig::HomeWorldShopSubTagExcelConfig(
        data::HomeWorldShopSubTagExcelConfig *const this,
        const data::HomeWorldShopSubTagExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sub_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool show_new_mark; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool show_limit_promote; // cl
  char v13; // dl
  __int64 v14; // rdx
  const data::HomeWorldShopSubTagExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldShopSubTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldShopSubTagExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sub_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_id);
  }
  sub_id = a2->sub_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sub_id, a2);
  }
  this->sub_id = sub_id;
  v5 = ((_BYTE)v15 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v15->show_new_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v15->show_new_mark >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v15->show_new_mark, v5, v6);
  show_new_mark = v15->show_new_mark;
  v8 = *(_BYTE *)(((unsigned __int64)&this->show_new_mark >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->show_new_mark, v5, v9);
  this->show_new_mark = show_new_mark;
  v10 = ((_BYTE)v15 + 13) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->show_limit_promote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->show_limit_promote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->show_limit_promote, v10, v11);
  show_limit_promote = v15->show_limit_promote;
  v13 = *(_BYTE *)(((unsigned __int64)&this->show_limit_promote >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->show_limit_promote, v10, v14);
  this->show_limit_promote = show_limit_promote;
  std::string::basic_string(&this->sub_tag, &v15->sub_tag);
};

// Line 466: range 00000000137C9FF2-00000000137CA043
void __cdecl data::HomeWorldShopSubTagExcelConfig::~HomeWorldShopSubTagExcelConfig(
        data::HomeWorldShopSubTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldShopSubTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldShopSubTagExcelConfig = v2;
  std::string::~string(&this->sub_tag);
};

// Line 466: range 00000000137CA044-00000000137CA06E
void __cdecl data::HomeWorldShopSubTagExcelConfig::~HomeWorldShopSubTagExcelConfig(
        data::HomeWorldShopSubTagExcelConfig *const this)
{
  data::HomeWorldShopSubTagExcelConfig::~HomeWorldShopSubTagExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 480: range 00000000147C8B96-00000000147C8C3B
data::HomeWorldLimitShopCond *__cdecl data::HomeWorldLimitShopCond::operator=(
        data::HomeWorldLimitShopCond *const this,
        const data::HomeWorldLimitShopCond *a2)
{
  data::HomeWorldLimitShopCondType condition; // ecx
  char v3; // al
  const data::HomeWorldLimitShopCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->condition);
  }
  condition = a2->condition;
  v3 = *(_BYTE *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->condition, a2);
  }
  this->condition = condition;
  std::vector<unsigned int>::operator=(&this->condition_param, &v5->condition_param);
  return this;
};

// Line 480: range 0000000013769F82-000000001376A011
void __cdecl data::HomeWorldLimitShopCond::HomeWorldLimitShopCond(data::HomeWorldLimitShopCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLimitShopCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldLimitShopCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->condition, v1);
  }
  this->condition = HOMEWORLD_LIMIT_SHOP_COND_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->condition_param);
};

// Line 480: range 00000000137934F4-00000000137935C9
void __cdecl data::HomeWorldLimitShopCond::HomeWorldLimitShopCond(
        data::HomeWorldLimitShopCond *const this,
        const data::HomeWorldLimitShopCond *a2)
{
  int (**v2)(...); // rdx
  data::HomeWorldLimitShopCondType condition; // ecx
  char v4; // al
  const data::HomeWorldLimitShopCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLimitShopCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldLimitShopCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->condition);
  }
  condition = a2->condition;
  v4 = *(_BYTE *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->condition, a2);
  }
  this->condition = condition;
  std::vector<unsigned int>::vector(&this->condition_param, &v5->condition_param);
};

// Line 483: range 0000000013731BE6-0000000013731C10
void __cdecl data::HomeWorldLimitShopCond::~HomeWorldLimitShopCond(data::HomeWorldLimitShopCond *const this)
{
  data::HomeWorldLimitShopCond::~HomeWorldLimitShopCond(this);
  operator delete(this, 0x28uLL);
};

// Line 483: range 0000000013731B94-0000000013731BE5
void __cdecl data::HomeWorldLimitShopCond::~HomeWorldLimitShopCond(data::HomeWorldLimitShopCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLimitShopCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldLimitShopCond = v2;
  std::vector<unsigned int>::~vector(&this->condition_param);
};

// Line 493: range 00000000135C479A-00000000135C4939
void __cdecl data::HomeWorldLimitShopExcelConfig::HomeWorldLimitShopExcelConfig(
        data::HomeWorldLimitShopExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLimitShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldLimitShopExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->goods_id, v1);
  }
  this->goods_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pool_id, v3);
  }
  this->pool_id = 0;
  std::vector<data::HomeWorldLimitShopCond>::vector(&this->cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->buy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buy_limit, v3);
  }
  this->buy_limit = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
};

// Line 493: range 00000000137962E8-00000000137965E3
void __cdecl data::HomeWorldLimitShopExcelConfig::HomeWorldLimitShopExcelConfig(
        data::HomeWorldLimitShopExcelConfig *const this,
        const data::HomeWorldLimitShopExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t goods_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  uint32_t pool_id; // ecx
  char v9; // al
  std::vector<data::HomeWorldLimitShopCond> *p_cond; // rsi
  uint32_t buy_limit; // ecx
  char v12; // al
  std::vector<data::IdCountConfig> *p_cost_items; // rsi
  uint32_t weight; // ecx
  char v15; // al
  const data::HomeWorldLimitShopExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLimitShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldLimitShopExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->goods_id);
  }
  goods_id = a2->goods_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->goods_id, a2);
  }
  this->goods_id = goods_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->item_id);
  }
  item_id = v16->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->pool_id);
  }
  pool_id = v16->pool_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->pool_id, v5);
  }
  this->pool_id = pool_id;
  p_cond = &v16->cond;
  std::vector<data::HomeWorldLimitShopCond>::vector(&this->cond, &v16->cond);
  if ( *(_BYTE *)(((unsigned __int64)&v16->buy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->buy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->buy_limit);
  }
  buy_limit = v16->buy_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->buy_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_cond) = v12 != 0;
    __asan_report_store4(&this->buy_limit, p_cond);
  }
  this->buy_limit = buy_limit;
  p_cost_items = &v16->cost_items;
  std::vector<data::IdCountConfig>::vector(&this->cost_items, &v16->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&v16->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->weight);
  }
  weight = v16->weight;
  v15 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_cost_items) = v15 != 0;
    __asan_report_store4(&this->weight, p_cost_items);
  }
  this->weight = weight;
};

// Line 496: range 00000000137C9FC6-00000000137C9FF0
void __cdecl data::HomeWorldLimitShopExcelConfig::~HomeWorldLimitShopExcelConfig(
        data::HomeWorldLimitShopExcelConfig *const this)
{
  data::HomeWorldLimitShopExcelConfig::~HomeWorldLimitShopExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 496: range 00000000137C9F64-00000000137C9FC5
void __cdecl data::HomeWorldLimitShopExcelConfig::~HomeWorldLimitShopExcelConfig(
        data::HomeWorldLimitShopExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLimitShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldLimitShopExcelConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->cost_items);
  std::vector<data::HomeWorldLimitShopCond>::~vector(&this->cond);
};

// Line 513: range 000000001367BEE2-000000001367C096
void __cdecl data::HomeWorldLeastShopExcelConfig::HomeWorldLeastShopExcelConfig(
        data::HomeWorldLeastShopExcelConfig *const this,
        const data::HomeWorldLeastShopExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t pool_id; // ecx
  char v7; // dl
  uint32_t count; // ecx
  char v9; // al
  const data::HomeWorldLeastShopExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLeastShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldLeastShopExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->pool_id);
  }
  pool_id = v10->pool_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->pool_id, v5);
  }
  this->pool_id = pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->count);
  }
  count = v10->count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
};

// Line 516: range 00000000137C9F38-00000000137C9F62
void __cdecl data::HomeWorldLeastShopExcelConfig::~HomeWorldLeastShopExcelConfig(
        data::HomeWorldLeastShopExcelConfig *const this)
{
  data::HomeWorldLeastShopExcelConfig::~HomeWorldLeastShopExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 516: range 00000000137C9EF6-00000000137C9F37
void __cdecl data::HomeWorldLeastShopExcelConfig::~HomeWorldLeastShopExcelConfig(
        data::HomeWorldLeastShopExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldLeastShopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldLeastShopExcelConfig = v2;
};

// Line 529: range 00000000135C493A-00000000135C4B68
void __cdecl data::HomeWorldAreaComfortExcelConfig::HomeWorldAreaComfortExcelConfig(
        data::HomeWorldAreaComfortExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldAreaComfortExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldAreaComfortExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_type, v4);
  }
  this->area_type = InteriorArea;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_comfort >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_comfort >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_comfort, v4);
  }
  this->max_comfort = 0;
  std::string::basic_string(&this->safe_point_str);
  std::string::basic_string(&this->player_safe_point_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->high_load_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->high_load_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->high_load_limit, v4);
  }
  this->high_load_limit = 0;
  std::vector<float>::vector(&this->area_center_pos);
  std::vector<float>::vector(&this->area_center_rot);
  std::string::basic_string(&this->blueprint_safe_point_str);
};

// Line 529: range 000000001379677A-0000000013796BD3
void __cdecl data::HomeWorldAreaComfortExcelConfig::HomeWorldAreaComfortExcelConfig(
        data::HomeWorldAreaComfortExcelConfig *const this,
        const data::HomeWorldAreaComfortExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  uint32_t area_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::HomeWorldAreaType area_type; // ecx
  char v12; // dl
  std::string *p_name; // rsi
  uint32_t max_comfort; // ecx
  char v15; // al
  std::string *p_player_safe_point_str; // rsi
  uint32_t high_load_limit; // ecx
  char v18; // al
  const data::HomeWorldAreaComfortExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldAreaComfortExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldAreaComfortExcelConfig = v2;
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
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->scene_id);
  }
  scene_id = v19->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->area_id);
  }
  area_id = v19->area_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->area_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->area_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->area_type);
  }
  area_type = v19->area_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->area_type, v10);
  }
  this->area_type = area_type;
  p_name = &v19->name;
  std::string::basic_string(&this->name, &v19->name);
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_comfort >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->max_comfort >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->max_comfort);
  }
  max_comfort = v19->max_comfort;
  v15 = *(_BYTE *)(((unsigned __int64)&this->max_comfort >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_name) = v15 != 0;
    __asan_report_store4(&this->max_comfort, p_name);
  }
  this->max_comfort = max_comfort;
  std::string::basic_string(&this->safe_point_str, &v19->safe_point_str);
  p_player_safe_point_str = &v19->player_safe_point_str;
  std::string::basic_string(&this->player_safe_point_str, &v19->player_safe_point_str);
  if ( *(_BYTE *)(((unsigned __int64)&v19->high_load_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->high_load_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->high_load_limit);
  }
  high_load_limit = v19->high_load_limit;
  v18 = *(_BYTE *)(((unsigned __int64)&this->high_load_limit >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_player_safe_point_str) = v18 != 0;
    __asan_report_store4(&this->high_load_limit, p_player_safe_point_str);
  }
  this->high_load_limit = high_load_limit;
  std::vector<float>::vector(&this->area_center_pos, &v19->area_center_pos);
  std::vector<float>::vector(&this->area_center_rot, &v19->area_center_rot);
  std::string::basic_string(&this->blueprint_safe_point_str, &v19->blueprint_safe_point_str);
};

// Line 532: range 00000000137C9E22-00000000137C9EC9
void __cdecl data::HomeWorldAreaComfortExcelConfig::~HomeWorldAreaComfortExcelConfig(
        data::HomeWorldAreaComfortExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldAreaComfortExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldAreaComfortExcelConfig = v2;
  std::string::~string(&this->blueprint_safe_point_str);
  std::vector<float>::~vector(&this->area_center_rot);
  std::vector<float>::~vector(&this->area_center_pos);
  std::string::~string(&this->player_safe_point_str);
  std::string::~string(&this->safe_point_str);
  std::string::~string(&this->name);
};

// Line 532: range 00000000137C9ECA-00000000137C9EF4
void __cdecl data::HomeWorldAreaComfortExcelConfig::~HomeWorldAreaComfortExcelConfig(
        data::HomeWorldAreaComfortExcelConfig *const this)
{
  data::HomeWorldAreaComfortExcelConfig::~HomeWorldAreaComfortExcelConfig(this);
  operator delete(this, 0xD8uLL);
};

// Line 554: range 00000000135C4B6A-00000000135C4E08
void __cdecl data::HomeWorldComfortLevelExcelConfig::HomeWorldComfortLevelExcelConfig(
        data::HomeWorldComfortLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HomeWorldComfortLevelExcelConfig::HomeWorldComfortLevelExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = (int (**)(...))(&`vtable for'data::HomeWorldComfortLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldComfortLevelExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->comfort >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->comfort, v6);
  }
  this->comfort = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_coin_produce_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_coin_produce_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_coin_produce_rate, v6);
  }
  this->home_coin_produce_rate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->companionship_exp_produce_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->companionship_exp_produce_rate >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->companionship_exp_produce_rate, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->companionship_exp_produce_rate = 0;
  std::string::basic_string(&this->level_name);
  std::string::basic_string(&this->level_icon);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->level_icon_path_decorator,
    "ART/UI/Atlas/HomeworldComfortIcon/*.Texture",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 554: range 0000000013796D14-0000000013796FDA
void __cdecl data::HomeWorldComfortLevelExcelConfig::HomeWorldComfortLevelExcelConfig(
        data::HomeWorldComfortLevelExcelConfig *const this,
        const data::HomeWorldComfortLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t comfort; // ecx
  char v7; // dl
  uint32_t home_coin_produce_rate; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t companionship_exp_produce_rate; // ecx
  char v12; // dl
  const data::HomeWorldComfortLevelExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldComfortLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldComfortLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->comfort >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->comfort >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->comfort);
  }
  comfort = v13->comfort;
  v7 = *(_BYTE *)(((unsigned __int64)&this->comfort >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->comfort, v5);
  }
  this->comfort = comfort;
  if ( *(_BYTE *)(((unsigned __int64)&v13->home_coin_produce_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->home_coin_produce_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->home_coin_produce_rate);
  }
  home_coin_produce_rate = v13->home_coin_produce_rate;
  v9 = *(_BYTE *)(((unsigned __int64)&this->home_coin_produce_rate >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->home_coin_produce_rate, v5);
  }
  this->home_coin_produce_rate = home_coin_produce_rate;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->companionship_exp_produce_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->companionship_exp_produce_rate >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->companionship_exp_produce_rate);
  }
  companionship_exp_produce_rate = v13->companionship_exp_produce_rate;
  v12 = *(_BYTE *)(((unsigned __int64)&this->companionship_exp_produce_rate >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->companionship_exp_produce_rate, v10);
  }
  this->companionship_exp_produce_rate = companionship_exp_produce_rate;
  std::string::basic_string(&this->level_name, &v13->level_name);
  std::string::basic_string(&this->level_icon, &v13->level_icon);
  std::string::basic_string(&this->level_icon_path_decorator, &v13->level_icon_path_decorator);
};

// Line 557: range 00000000137C9D84-00000000137C9DF5
void __cdecl data::HomeWorldComfortLevelExcelConfig::~HomeWorldComfortLevelExcelConfig(
        data::HomeWorldComfortLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldComfortLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldComfortLevelExcelConfig = v2;
  std::string::~string(&this->level_icon_path_decorator);
  std::string::~string(&this->level_icon);
  std::string::~string(&this->level_name);
};

// Line 557: range 00000000137C9DF6-00000000137C9E20
void __cdecl data::HomeWorldComfortLevelExcelConfig::~HomeWorldComfortLevelExcelConfig(
        data::HomeWorldComfortLevelExcelConfig *const this)
{
  data::HomeWorldComfortLevelExcelConfig::~HomeWorldComfortLevelExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 574: range 000000001379711C-000000001379773D
void __cdecl data::HomeWorldEventExcelConfig::HomeWorldEventExcelConfig(
        data::HomeWorldEventExcelConfig *const this,
        const data::HomeWorldEventExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t event_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::HomeAvatarEventType event_type; // ecx
  char v7; // dl
  uint32_t avatar_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t talk_id; // ecx
  char v12; // dl
  uint32_t reward_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t furniture_suit_id; // ecx
  char v17; // dl
  uint32_t lasttime; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t order; // ecx
  char v22; // dl
  data::HomeAvatarEventCondType condition_type1; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t condition_param1; // ecx
  char v27; // dl
  data::HomeAvatarEventCondType condition_type2; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t condition_param2; // ecx
  char v32; // dl
  const data::HomeWorldEventExcelConfig *v33; // [rsp+0h] [rbp-10h]

  v33 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldEventExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->event_id);
  }
  event_id = a2->event_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->event_id, a2);
  }
  this->event_id = event_id;
  v5 = (((_BYTE)v33 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->event_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->event_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->event_type);
  }
  event_type = v33->event_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->event_type, v5);
  }
  this->event_type = event_type;
  if ( *(_BYTE *)(((unsigned __int64)&v33->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->avatar_id);
  }
  avatar_id = v33->avatar_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->avatar_id, v5);
  }
  this->avatar_id = avatar_id;
  v10 = (((_BYTE)v33 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->talk_id);
  }
  talk_id = v33->talk_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->talk_id, v10);
  }
  this->talk_id = talk_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->reward_id);
  }
  reward_id = v33->reward_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
  v15 = (((_BYTE)v33 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->furniture_suit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->furniture_suit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->furniture_suit_id);
  }
  furniture_suit_id = v33->furniture_suit_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->furniture_suit_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->furniture_suit_id, v15);
  }
  this->furniture_suit_id = furniture_suit_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->lasttime >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->lasttime >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->lasttime);
  }
  lasttime = v33->lasttime;
  v19 = *(_BYTE *)(((unsigned __int64)&this->lasttime >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->lasttime, v15);
  }
  this->lasttime = lasttime;
  v20 = (((_BYTE)v33 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->order);
  }
  order = v33->order;
  v22 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->order, v20);
  }
  this->order = order;
  if ( *(_BYTE *)(((unsigned __int64)&v33->condition_type1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->condition_type1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->condition_type1);
  }
  condition_type1 = v33->condition_type1;
  v24 = *(_BYTE *)(((unsigned __int64)&this->condition_type1 >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->condition_type1, v20);
  }
  this->condition_type1 = condition_type1;
  v25 = (((_BYTE)v33 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->condition_param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->condition_param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->condition_param1);
  }
  condition_param1 = v33->condition_param1;
  v27 = *(_BYTE *)(((unsigned __int64)&this->condition_param1 >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->condition_param1, v25);
  }
  this->condition_param1 = condition_param1;
  if ( *(_BYTE *)(((unsigned __int64)&v33->condition_type2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->condition_type2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->condition_type2);
  }
  condition_type2 = v33->condition_type2;
  v29 = *(_BYTE *)(((unsigned __int64)&this->condition_type2 >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->condition_type2, v25);
  }
  this->condition_type2 = condition_type2;
  v30 = (((_BYTE)v33 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->condition_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->condition_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->condition_param2);
  }
  condition_param2 = v33->condition_param2;
  v32 = *(_BYTE *)(((unsigned __int64)&this->condition_param2 >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->condition_param2, v30);
  }
  this->condition_param2 = condition_param2;
};

// Line 577: range 00000000137C9D16-00000000137C9D57
void __cdecl data::HomeWorldEventExcelConfig::~HomeWorldEventExcelConfig(data::HomeWorldEventExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldEventExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldEventExcelConfig = v2;
};

// Line 577: range 00000000137C9D58-00000000137C9D82
void __cdecl data::HomeWorldEventExcelConfig::~HomeWorldEventExcelConfig(data::HomeWorldEventExcelConfig *const this)
{
  data::HomeWorldEventExcelConfig::~HomeWorldEventExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 599: range 0000000014758C1C-0000000014758E25
data::ConfigHomeGather *__cdecl data::ConfigHomeGather::operator=(
        data::ConfigHomeGather *const this,
        const data::ConfigHomeGather *a2)
{
  uint32_t home_gather_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t bundle_id; // ecx
  char v6; // dl
  uint32_t drop_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t weight; // ecx
  char v11; // dl
  const data::ConfigHomeGather *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->home_gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->home_gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->home_gather_id);
  }
  home_gather_id = a2->home_gather_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->home_gather_id, a2);
  }
  this->home_gather_id = home_gather_id;
  v4 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->bundle_id);
  }
  bundle_id = v13->bundle_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->bundle_id, v4);
  }
  this->bundle_id = bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->drop_id);
  }
  drop_id = v13->drop_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->drop_id, v4);
  }
  this->drop_id = drop_id;
  v9 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v11 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->weight, v9);
  }
  this->weight = weight;
  return this;
};

// Line 599: range 000000001376A174-000000001376A2BD
void __cdecl data::ConfigHomeGather::ConfigHomeGather(data::ConfigHomeGather *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ConfigHomeGather + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHomeGather = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_gather_id, v1);
  }
  this->home_gather_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bundle_id, v3);
  }
  this->bundle_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v3);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->weight = 0;
};

// Line 599: range 00000000137BED0E-00000000137BEF47
void __cdecl data::ConfigHomeGather::ConfigHomeGather(
        data::ConfigHomeGather *const this,
        const data::ConfigHomeGather *a2)
{
  int (**v2)(...); // rdx
  uint32_t home_gather_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t bundle_id; // ecx
  char v7; // dl
  uint32_t drop_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weight; // ecx
  char v12; // dl
  const data::ConfigHomeGather *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ConfigHomeGather + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigHomeGather = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->home_gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->home_gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->home_gather_id);
  }
  home_gather_id = a2->home_gather_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->home_gather_id, a2);
  }
  this->home_gather_id = home_gather_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->bundle_id);
  }
  bundle_id = v13->bundle_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->bundle_id, v5);
  }
  this->bundle_id = bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->drop_id);
  }
  drop_id = v13->drop_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->drop_id, v5);
  }
  this->drop_id = drop_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
};

// Line 602: range 000000001373365A-0000000013733684
void __cdecl data::ConfigHomeGather::~ConfigHomeGather(data::ConfigHomeGather *const this)
{
  data::ConfigHomeGather::~ConfigHomeGather(this);
  operator delete(this, 0x18uLL);
};

// Line 614: range 00000000135C4E5E-00000000135C5105
void __cdecl data::HomeWorldPlantExcelConfig::HomeWorldPlantExcelConfig(data::HomeWorldPlantExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldPlantExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldPlantExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seed_id, v1);
  }
  this->seed_id = 0;
  std::vector<unsigned int>::vector(&this->gather_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_gather_id, v1);
  }
  this->home_gather_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bundle_id, v3);
  }
  this->bundle_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v3);
  }
  this->drop_id = 0;
  std::vector<data::ConfigHomeGather>::vector(&this->config_home_gather);
  if ( *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_id, v3);
  }
  this->field_id = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, v4);
  }
  this->time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprout_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sprout_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sprout_time, v4);
  }
  this->sprout_time = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->collect_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->collect_num, v5);
  }
  this->collect_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprout_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sprout_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sprout_gadget_id, v5);
  }
  this->sprout_gadget_id = 0;
};

// Line 614: range 000000001379787E-0000000013797D6D
void __cdecl data::HomeWorldPlantExcelConfig::HomeWorldPlantExcelConfig(
        data::HomeWorldPlantExcelConfig *const this,
        const data::HomeWorldPlantExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t seed_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_gather_id_vec; // rsi
  uint32_t home_gather_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t bundle_id; // ecx
  char v10; // dl
  uint32_t drop_id; // ecx
  char v12; // al
  std::vector<data::ConfigHomeGather> *p_config_home_gather; // rsi
  uint32_t field_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t time; // ecx
  char v18; // dl
  uint32_t sprout_time; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t collect_num; // ecx
  char v23; // dl
  uint32_t sprout_gadget_id; // ecx
  char v25; // al
  const data::HomeWorldPlantExcelConfig *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldPlantExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldPlantExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->seed_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->seed_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->seed_id);
  }
  seed_id = a2->seed_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->seed_id, a2);
  }
  this->seed_id = seed_id;
  p_gather_id_vec = &v26->gather_id_vec;
  std::vector<unsigned int>::vector(&this->gather_id_vec, &v26->gather_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v26->home_gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->home_gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->home_gather_id);
  }
  home_gather_id = v26->home_gather_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_gather_id_vec) = v7 != 0;
    __asan_report_store4(&this->home_gather_id, p_gather_id_vec);
  }
  this->home_gather_id = home_gather_id;
  v8 = (((_BYTE)v26 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->bundle_id);
  }
  bundle_id = v26->bundle_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->bundle_id, v8);
  }
  this->bundle_id = bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->drop_id);
  }
  drop_id = v26->drop_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->drop_id, v8);
  }
  this->drop_id = drop_id;
  p_config_home_gather = &v26->config_home_gather;
  std::vector<data::ConfigHomeGather>::vector(&this->config_home_gather, &v26->config_home_gather);
  if ( *(_BYTE *)(((unsigned __int64)&v26->field_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->field_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->field_id);
  }
  field_id = v26->field_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_config_home_gather) = v15 != 0;
    __asan_report_store4(&this->field_id, p_config_home_gather);
  }
  this->field_id = field_id;
  v16 = (((_BYTE)v26 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->time);
  }
  time = v26->time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->time, v16);
  }
  this->time = time;
  if ( *(_BYTE *)(((unsigned __int64)&v26->sprout_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->sprout_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->sprout_time);
  }
  sprout_time = v26->sprout_time;
  v20 = *(_BYTE *)(((unsigned __int64)&this->sprout_time >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->sprout_time, v16);
  }
  this->sprout_time = sprout_time;
  v21 = (((_BYTE)v26 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->collect_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->collect_num);
  }
  collect_num = v26->collect_num;
  v23 = *(_BYTE *)(((unsigned __int64)&this->collect_num >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->collect_num, v21);
  }
  this->collect_num = collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&v26->sprout_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->sprout_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->sprout_gadget_id);
  }
  sprout_gadget_id = v26->sprout_gadget_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->sprout_gadget_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->sprout_gadget_id, v21);
  }
  this->sprout_gadget_id = sprout_gadget_id;
};

// Line 617: range 00000000137C9C88-00000000137C9CE9
void __cdecl data::HomeWorldPlantExcelConfig::~HomeWorldPlantExcelConfig(data::HomeWorldPlantExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldPlantExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldPlantExcelConfig = v2;
  std::vector<data::ConfigHomeGather>::~vector(&this->config_home_gather);
  std::vector<unsigned int>::~vector(&this->gather_id_vec);
};

// Line 617: range 00000000137C9CEA-00000000137C9D14
void __cdecl data::HomeWorldPlantExcelConfig::~HomeWorldPlantExcelConfig(data::HomeWorldPlantExcelConfig *const this)
{
  data::HomeWorldPlantExcelConfig::~HomeWorldPlantExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 638: range 00000000135C5106-00000000135C51DB
void __cdecl data::HomeWorldFarmFieldExcelConfig::HomeWorldFarmFieldExcelConfig(
        data::HomeWorldFarmFieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFarmFieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldFarmFieldExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_item_id, v1);
  }
  this->field_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_slot_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_slot_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_slot_num, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->field_slot_num = 0;
  std::vector<unsigned int>::vector(&this->field_slot_gadget_id);
};

// Line 638: range 0000000013797EAE-0000000013798008
void __cdecl data::HomeWorldFarmFieldExcelConfig::HomeWorldFarmFieldExcelConfig(
        data::HomeWorldFarmFieldExcelConfig *const this,
        const data::HomeWorldFarmFieldExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t field_item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t field_slot_num; // ecx
  char v7; // dl
  const data::HomeWorldFarmFieldExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFarmFieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldFarmFieldExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->field_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->field_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->field_item_id);
  }
  field_item_id = a2->field_item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->field_item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->field_item_id, a2);
  }
  this->field_item_id = field_item_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->field_slot_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->field_slot_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->field_slot_num);
  }
  field_slot_num = v8->field_slot_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->field_slot_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->field_slot_num, v5);
  }
  this->field_slot_num = field_slot_num;
  std::vector<unsigned int>::vector(&this->field_slot_gadget_id, &v8->field_slot_gadget_id);
};

// Line 641: range 00000000137C9C0A-00000000137C9C5B
void __cdecl data::HomeWorldFarmFieldExcelConfig::~HomeWorldFarmFieldExcelConfig(
        data::HomeWorldFarmFieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldFarmFieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldFarmFieldExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->field_slot_gadget_id);
};

// Line 641: range 00000000137C9C5C-00000000137C9C86
void __cdecl data::HomeWorldFarmFieldExcelConfig::~HomeWorldFarmFieldExcelConfig(
        data::HomeWorldFarmFieldExcelConfig *const this)
{
  data::HomeWorldFarmFieldExcelConfig::~HomeWorldFarmFieldExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 654: range 00000000135C51DC-00000000135C526B
void __cdecl data::HomeWorldExtraFurnitureExcelConfig::HomeWorldExtraFurnitureExcelConfig(
        data::HomeWorldExtraFurnitureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldExtraFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldExtraFurnitureExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id, v1);
  }
  this->furniture_id = 0;
  std::vector<std::string>::vector(&this->extra_data);
};

// Line 654: range 000000001379814A-000000001379821F
void __cdecl data::HomeWorldExtraFurnitureExcelConfig::HomeWorldExtraFurnitureExcelConfig(
        data::HomeWorldExtraFurnitureExcelConfig *const this,
        const data::HomeWorldExtraFurnitureExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t furniture_id; // ecx
  char v4; // al
  const data::HomeWorldExtraFurnitureExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldExtraFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldExtraFurnitureExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->furniture_id);
  }
  furniture_id = a2->furniture_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->furniture_id, a2);
  }
  this->furniture_id = furniture_id;
  std::vector<std::string>::vector(&this->extra_data, &v5->extra_data);
};

// Line 657: range 00000000137C9BDE-00000000137C9C08
void __cdecl data::HomeWorldExtraFurnitureExcelConfig::~HomeWorldExtraFurnitureExcelConfig(
        data::HomeWorldExtraFurnitureExcelConfig *const this)
{
  data::HomeWorldExtraFurnitureExcelConfig::~HomeWorldExtraFurnitureExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 657: range 00000000137C9B8C-00000000137C9BDD
void __cdecl data::HomeWorldExtraFurnitureExcelConfig::~HomeWorldExtraFurnitureExcelConfig(
        data::HomeWorldExtraFurnitureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldExtraFurnitureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldExtraFurnitureExcelConfig = v2;
  std::vector<std::string>::~vector(&this->extra_data);
};

// Line 669: range 00000000135C526C-00000000135C53BA
void __cdecl data::HomeWorldNPCExcelConfig::HomeWorldNPCExcelConfig(data::HomeWorldNPCExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldNPCExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldNPCExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id, v1);
  }
  this->furniture_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id, v3);
  }
  this->avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->npc_id, v3);
  }
  this->npc_id = 0;
  std::vector<unsigned int>::vector(&this->talk_i_ds);
  if ( *(char *)(((unsigned __int64)&this->is_npc >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_npc, v3, &this->is_npc);
  this->is_npc = 0;
};

// Line 669: range 0000000013798360-00000000137985A5
void __cdecl data::HomeWorldNPCExcelConfig::HomeWorldNPCExcelConfig(
        data::HomeWorldNPCExcelConfig *const this,
        const data::HomeWorldNPCExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t furniture_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t avatar_id; // ecx
  char v7; // dl
  uint32_t npc_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_talk_i_ds; // rsi
  bool is_npc; // cl
  char v12; // al
  const data::HomeWorldNPCExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldNPCExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldNPCExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->furniture_id);
  }
  furniture_id = a2->furniture_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->furniture_id, a2);
  }
  this->furniture_id = furniture_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->avatar_id);
  }
  avatar_id = v13->avatar_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->avatar_id, v5);
  }
  this->avatar_id = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->npc_id);
  }
  npc_id = v13->npc_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->npc_id, v5);
  }
  this->npc_id = npc_id;
  p_talk_i_ds = &v13->talk_i_ds;
  std::vector<unsigned int>::vector(&this->talk_i_ds, &v13->talk_i_ds);
  if ( *(char *)(((unsigned __int64)&v13->is_npc >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_npc, p_talk_i_ds, &v13->is_npc);
  is_npc = v13->is_npc;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_npc >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_talk_i_ds) = v12 != 0;
    __asan_report_store1(&this->is_npc, p_talk_i_ds, &this->is_npc);
  }
  this->is_npc = is_npc;
};

// Line 672: range 00000000137C9B0E-00000000137C9B5F
void __cdecl data::HomeWorldNPCExcelConfig::~HomeWorldNPCExcelConfig(data::HomeWorldNPCExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldNPCExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldNPCExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->talk_i_ds);
};

// Line 672: range 00000000137C9B60-00000000137C9B8A
void __cdecl data::HomeWorldNPCExcelConfig::~HomeWorldNPCExcelConfig(data::HomeWorldNPCExcelConfig *const this)
{
  data::HomeWorldNPCExcelConfig::~HomeWorldNPCExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 687: range 00000000137986E6-0000000013798920
void __cdecl data::HomeWorldBgmExcelConfig::HomeWorldBgmExcelConfig(
        data::HomeWorldBgmExcelConfig *const this,
        const data::HomeWorldBgmExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t bgm_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_default_unlock; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_room_scene_usable; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_world_scene_usable; // cl
  char v18; // dl
  __int64 v19; // rdx
  const data::HomeWorldBgmExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldBgmExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldBgmExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bgm_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bgm_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bgm_id);
  }
  bgm_id = a2->bgm_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->bgm_id, a2);
  }
  this->bgm_id = bgm_id;
  v5 = ((_BYTE)v20 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v20->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v20->is_default_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v20->is_default_unlock, v5, v6);
  is_default_unlock = v20->is_default_unlock;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_default_unlock, v5, v9);
  this->is_default_unlock = is_default_unlock;
  v10 = ((_BYTE)v20 + 13) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v20->is_room_scene_usable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v20->is_room_scene_usable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v20->is_room_scene_usable, v10, v11);
  is_room_scene_usable = v20->is_room_scene_usable;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_room_scene_usable >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_room_scene_usable, v10, v14);
  this->is_room_scene_usable = is_room_scene_usable;
  v15 = ((_BYTE)v20 + 14) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v20->is_world_scene_usable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v20->is_world_scene_usable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v20->is_world_scene_usable, v15, v16);
  is_world_scene_usable = v20->is_world_scene_usable;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_world_scene_usable >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 14) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_world_scene_usable, v15, v19);
  this->is_world_scene_usable = is_world_scene_usable;
};

// Line 690: range 00000000137C9AA0-00000000137C9AE1
void __cdecl data::HomeWorldBgmExcelConfig::~HomeWorldBgmExcelConfig(data::HomeWorldBgmExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldBgmExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldBgmExcelConfig = v2;
};

// Line 690: range 00000000137C9AE2-00000000137C9B0C
void __cdecl data::HomeWorldBgmExcelConfig::~HomeWorldBgmExcelConfig(data::HomeWorldBgmExcelConfig *const this)
{
  data::HomeWorldBgmExcelConfig::~HomeWorldBgmExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 704: range 0000000013798A62-0000000013798BA1
void __cdecl data::HomeWorldServerGadgetExcelConfig::HomeWorldServerGadgetExcelConfig(
        data::HomeWorldServerGadgetExcelConfig *const this,
        const data::HomeWorldServerGadgetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t furniture_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t server_gadget_id; // ecx
  char v7; // dl
  const data::HomeWorldServerGadgetExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldServerGadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldServerGadgetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->furniture_id);
  }
  furniture_id = a2->furniture_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->furniture_id, a2);
  }
  this->furniture_id = furniture_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->server_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->server_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->server_gadget_id);
  }
  server_gadget_id = v8->server_gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->server_gadget_id, v5);
  }
  this->server_gadget_id = server_gadget_id;
};

// Line 707: range 00000000137C9A74-00000000137C9A9E
void __cdecl data::HomeWorldServerGadgetExcelConfig::~HomeWorldServerGadgetExcelConfig(
        data::HomeWorldServerGadgetExcelConfig *const this)
{
  data::HomeWorldServerGadgetExcelConfig::~HomeWorldServerGadgetExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 707: range 00000000137C9A32-00000000137C9A73
void __cdecl data::HomeWorldServerGadgetExcelConfig::~HomeWorldServerGadgetExcelConfig(
        data::HomeWorldServerGadgetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldServerGadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldServerGadgetExcelConfig = v2;
};

// Line 719: range 00000000135C5584-00000000135C55D1
void __cdecl data::CusmtomGadgetSlotExcelConfig::CusmtomGadgetSlotExcelConfig(
        data::CusmtomGadgetSlotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::CustomSlotConfig::CustomSlotConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::CusmtomGadgetSlotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomSlotConfig = v2;
};

// Line 719: range 0000000013798F16-0000000013798F6E
void __cdecl data::CusmtomGadgetSlotExcelConfig::CusmtomGadgetSlotExcelConfig(
        data::CusmtomGadgetSlotExcelConfig *const this,
        const data::CusmtomGadgetSlotExcelConfig *a2)
{
  int (**v2)(...); // rdx

  data::CustomSlotConfig::CustomSlotConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::CusmtomGadgetSlotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomSlotConfig = v2;
};

// Line 723: range 00000000137C99B8-00000000137C9A05
void __cdecl data::CusmtomGadgetSlotExcelConfig::~CusmtomGadgetSlotExcelConfig(
        data::CusmtomGadgetSlotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CusmtomGadgetSlotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomSlotConfig = v2;
  data::CustomSlotConfig::~CustomSlotConfig(this);
};

// Line 723: range 00000000137C9A06-00000000137C9A30
void __cdecl data::CusmtomGadgetSlotExcelConfig::~CusmtomGadgetSlotExcelConfig(
        data::CusmtomGadgetSlotExcelConfig *const this)
{
  data::CusmtomGadgetSlotExcelConfig::~CusmtomGadgetSlotExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 731: range 00000000135C55D2-00000000135C56F5
void __cdecl data::CusmtomGadgetConfigIdExcelConfig::CusmtomGadgetConfigIdExcelConfig(
        data::CusmtomGadgetConfigIdExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CusmtomGadgetConfigIdExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CusmtomGadgetConfigIdExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  std::string::basic_string(&this->option_name);
  std::string::basic_string(&this->option_title);
};

// Line 731: range 00000000137990B0-00000000137992C1
void __cdecl data::CusmtomGadgetConfigIdExcelConfig::CusmtomGadgetConfigIdExcelConfig(
        data::CusmtomGadgetConfigIdExcelConfig *const this,
        const data::CusmtomGadgetConfigIdExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  uint32_t gadget_id; // ecx
  char v9; // al
  const data::CusmtomGadgetConfigIdExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CusmtomGadgetConfigIdExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CusmtomGadgetConfigIdExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->item_id);
  }
  item_id = v10->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
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
  std::string::basic_string(&this->option_name, &v10->option_name);
  std::string::basic_string(&this->option_title, &v10->option_title);
};

// Line 734: range 00000000137C992A-00000000137C998B
void __cdecl data::CusmtomGadgetConfigIdExcelConfig::~CusmtomGadgetConfigIdExcelConfig(
        data::CusmtomGadgetConfigIdExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CusmtomGadgetConfigIdExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CusmtomGadgetConfigIdExcelConfig = v2;
  std::string::~string(&this->option_title);
  std::string::~string(&this->option_name);
};

// Line 734: range 00000000137C998C-00000000137C99B6
void __cdecl data::CusmtomGadgetConfigIdExcelConfig::~CusmtomGadgetConfigIdExcelConfig(
        data::CusmtomGadgetConfigIdExcelConfig *const this)
{
  data::CusmtomGadgetConfigIdExcelConfig::~CusmtomGadgetConfigIdExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 749: range 00000000135C56F6-00000000135C5785
void __cdecl data::CustomGadgetRootExcelConfig::CustomGadgetRootExcelConfig(
        data::CustomGadgetRootExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetRootExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomGadgetRootExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->root_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->root_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->root_gadget_id, v1);
  }
  this->root_gadget_id = 0;
  std::string::basic_string(&this->recommend_config);
};

// Line 749: range 0000000013799402-00000000137994D7
void __cdecl data::CustomGadgetRootExcelConfig::CustomGadgetRootExcelConfig(
        data::CustomGadgetRootExcelConfig *const this,
        const data::CustomGadgetRootExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t root_gadget_id; // ecx
  char v4; // al
  const data::CustomGadgetRootExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetRootExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomGadgetRootExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->root_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->root_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->root_gadget_id);
  }
  root_gadget_id = a2->root_gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->root_gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->root_gadget_id, a2);
  }
  this->root_gadget_id = root_gadget_id;
  std::string::basic_string(&this->recommend_config, &v5->recommend_config);
};

// Line 752: range 00000000137C98FE-00000000137C9928
void __cdecl data::CustomGadgetRootExcelConfig::~CustomGadgetRootExcelConfig(
        data::CustomGadgetRootExcelConfig *const this)
{
  data::CustomGadgetRootExcelConfig::~CustomGadgetRootExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 752: range 00000000137C98AC-00000000137C98FD
void __cdecl data::CustomGadgetRootExcelConfig::~CustomGadgetRootExcelConfig(
        data::CustomGadgetRootExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetRootExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomGadgetRootExcelConfig = v2;
  std::string::~string(&this->recommend_config);
};

// Line 764: range 0000000014D3504C-0000000014D35200
void __cdecl data::HomeWorldWoodExchangeMaterialConfig::HomeWorldWoodExchangeMaterialConfig(
        data::HomeWorldWoodExchangeMaterialConfig *const this,
        const data::HomeWorldWoodExchangeMaterialConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_count; // ecx
  char v7; // dl
  uint32_t wood_count; // ecx
  char v9; // al
  const data::HomeWorldWoodExchangeMaterialConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldWoodExchangeMaterialConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldWoodExchangeMaterialConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->item_count);
  }
  item_count = v10->item_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_count, v5);
  }
  this->item_count = item_count;
  if ( *(_BYTE *)(((unsigned __int64)&v10->wood_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->wood_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->wood_count);
  }
  wood_count = v10->wood_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->wood_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->wood_count, v5);
  }
  this->wood_count = wood_count;
};

// Line 767: range 0000000014DECF48-0000000014DECF89
void __cdecl data::HomeWorldWoodExchangeMaterialConfig::~HomeWorldWoodExchangeMaterialConfig(
        data::HomeWorldWoodExchangeMaterialConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldWoodExchangeMaterialConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldWoodExchangeMaterialConfig = v2;
};

// Line 767: range 0000000014DECF8A-0000000014DECFB4
void __cdecl data::HomeWorldWoodExchangeMaterialConfig::~HomeWorldWoodExchangeMaterialConfig(
        data::HomeWorldWoodExchangeMaterialConfig *const this)
{
  data::HomeWorldWoodExchangeMaterialConfig::~HomeWorldWoodExchangeMaterialConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 776: range 00000000135C5786-00000000135C5899
void __cdecl data::HomeWorldWoodExcelConfig::HomeWorldWoodExcelConfig(data::HomeWorldWoodExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldWoodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldWoodExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->wood_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wood_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wood_id, v1);
  }
  this->wood_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exchange_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exchange_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exchange_limit, v3);
  }
  this->exchange_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_type, v3);
  }
  this->refresh_type = HOME_WORLD_WOOD_REFRESH_NONE;
  std::vector<std::vector<unsigned int>>::vector(&this->material_list);
};

// Line 776: range 0000000013799618-00000000137997E7
void __cdecl data::HomeWorldWoodExcelConfig::HomeWorldWoodExcelConfig(
        data::HomeWorldWoodExcelConfig *const this,
        const data::HomeWorldWoodExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t wood_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exchange_limit; // ecx
  char v7; // dl
  data::HomeWorldWoodRefreshType refresh_type; // ecx
  char v9; // al
  const data::HomeWorldWoodExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HomeWorldWoodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldWoodExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wood_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->wood_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->wood_id);
  }
  wood_id = a2->wood_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->wood_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->wood_id, a2);
  }
  this->wood_id = wood_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->exchange_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->exchange_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->exchange_limit);
  }
  exchange_limit = v10->exchange_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exchange_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->exchange_limit, v5);
  }
  this->exchange_limit = exchange_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v10->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->refresh_type);
  }
  refresh_type = v10->refresh_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->refresh_type, v5);
  }
  this->refresh_type = refresh_type;
  std::vector<std::vector<unsigned int>>::vector(&this->material_list, &v10->material_list);
};

// Line 779: range 00000000137C9880-00000000137C98AA
void __cdecl data::HomeWorldWoodExcelConfig::~HomeWorldWoodExcelConfig(data::HomeWorldWoodExcelConfig *const this)
{
  data::HomeWorldWoodExcelConfig::~HomeWorldWoodExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 779: range 00000000137C982E-00000000137C987F
void __cdecl data::HomeWorldWoodExcelConfig::~HomeWorldWoodExcelConfig(data::HomeWorldWoodExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldWoodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldWoodExcelConfig = v2;
  std::vector<std::vector<unsigned int>>::~vector(&this->material_list);
};

// Line 793: range 0000000013799928-00000000137999E2
void __cdecl data::HomeWorldBlueprintSlotExcelConfig::HomeWorldBlueprintSlotExcelConfig(
        data::HomeWorldBlueprintSlotExcelConfig *const this,
        const data::HomeWorldBlueprintSlotExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t slot_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldBlueprintSlotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HomeWorldBlueprintSlotExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->slot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->slot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->slot_id);
  }
  slot_id = a2->slot_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->slot_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->slot_id, a2);
  }
  this->slot_id = slot_id;
};

// Line 796: range 00000000137C9802-00000000137C982C
void __cdecl data::HomeWorldBlueprintSlotExcelConfig::~HomeWorldBlueprintSlotExcelConfig(
        data::HomeWorldBlueprintSlotExcelConfig *const this)
{
  data::HomeWorldBlueprintSlotExcelConfig::~HomeWorldBlueprintSlotExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 796: range 00000000137C97C0-00000000137C9801
void __cdecl data::HomeWorldBlueprintSlotExcelConfig::~HomeWorldBlueprintSlotExcelConfig(
        data::HomeWorldBlueprintSlotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HomeWorldBlueprintSlotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HomeWorldBlueprintSlotExcelConfig = v2;
};
