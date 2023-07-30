// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityRegionSearch.gen.h

// Line 87: range 000000001336CDF4-000000001336CE83
void __cdecl data::RegionSearchCond::RegionSearchCond(data::RegionSearchCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = REGION_SEARCH_COND_NONE;
  std::vector<int>::vector(&this->param);
};

// Line 87: range 00000000133CA5A4-00000000133CA679
void __cdecl data::RegionSearchCond::RegionSearchCond(
        data::RegionSearchCond *const this,
        const data::RegionSearchCond *a2)
{
  int (**v2)(...); // rdx
  data::RegionSearchCondType type; // ecx
  char v4; // al
  const data::RegionSearchCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RegionSearchCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RegionSearchCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::vector(&this->param, &v5->param);
};

// Line 90: range 00000000132DD7F6-00000000132DD847
void __cdecl data::RegionSearchCond::~RegionSearchCond(data::RegionSearchCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchCond = v2;
  std::vector<int>::~vector(&this->param);
};

// Line 90: range 00000000132DD848-00000000132DD872
void __cdecl data::RegionSearchCond::~RegionSearchCond(data::RegionSearchCond *const this)
{
  data::RegionSearchCond::~RegionSearchCond(this);
  operator delete(this, 0x28uLL);
};

// Line 100: range 0000000012ED4312-0000000012ED44E9
void __cdecl data::RegionSearchExcelConfig::RegionSearchExcelConfig(data::RegionSearchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->search_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->search_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->search_type, v3);
  }
  this->search_type = REGION_SEARCH_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_clear_material >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_clear_material >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_clear_material, v4, v5);
  this->is_clear_material = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->search_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->search_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->search_group_id, v4);
  }
  this->search_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->revise_level = 0;
  std::string::basic_string(&this->ability_group);
};

// Line 100: range 00000000133CA6FC-00000000133CAA45
void __cdecl data::RegionSearchExcelConfig::RegionSearchExcelConfig(
        data::RegionSearchExcelConfig *const this,
        const data::RegionSearchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RegionSearchType search_type; // ecx
  char v7; // dl
  uint32_t material_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_clear_material; // cl
  char v13; // dl
  __int64 v14; // rdx
  uint32_t search_group_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t revise_level; // ecx
  char v19; // dl
  const data::RegionSearchExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RegionSearchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RegionSearchExcelConfig = v2;
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
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->search_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->search_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->search_type);
  }
  search_type = v20->search_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->search_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->search_type, v5);
  }
  this->search_type = search_type;
  if ( *(_BYTE *)(((unsigned __int64)&v20->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->material_id);
  }
  material_id = v20->material_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  v10 = ((_BYTE)v20 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v20->is_clear_material >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v20->is_clear_material >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v20->is_clear_material, v10, v11);
  is_clear_material = v20->is_clear_material;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_clear_material >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_clear_material, v10, v14);
  this->is_clear_material = is_clear_material;
  if ( *(_BYTE *)(((unsigned __int64)&v20->search_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->search_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->search_group_id);
  }
  search_group_id = v20->search_group_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->search_group_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->search_group_id, v10);
  }
  this->search_group_id = search_group_id;
  v17 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->revise_level);
  }
  revise_level = v20->revise_level;
  v19 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->revise_level, v17);
  }
  this->revise_level = revise_level;
  std::string::basic_string(&this->ability_group, &v20->ability_group);
};

// Line 103: range 00000000134255EC-000000001342563D
void __cdecl data::RegionSearchExcelConfig::~RegionSearchExcelConfig(data::RegionSearchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchExcelConfig = v2;
  std::string::~string(&this->ability_group);
};

// Line 103: range 000000001342563E-0000000013425668
void __cdecl data::RegionSearchExcelConfig::~RegionSearchExcelConfig(data::RegionSearchExcelConfig *const this)
{
  data::RegionSearchExcelConfig::~RegionSearchExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 120: range 0000000012ED453E-0000000012ED46E5
void __cdecl data::RegionSearchCondExcelConfig::RegionSearchCondExcelConfig(
        data::RegionSearchCondExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchCondExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic_type, v3);
  }
  this->logic_type = LOGIC_NONE;
  std::vector<data::RegionSearchCond>::vector(&this->cond);
  std::vector<unsigned int>::vector(&this->region_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_progress, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->total_progress = 0;
};

// Line 120: range 00000000133CAB86-00000000133CAE91
void __cdecl data::RegionSearchCondExcelConfig::RegionSearchCondExcelConfig(
        data::RegionSearchCondExcelConfig *const this,
        const data::RegionSearchCondExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  data::LogicType logic_type; // ecx
  char v9; // al
  std::vector<unsigned int> *p_region_list; // rsi
  uint32_t reward_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t total_progress; // ecx
  char v15; // dl
  const data::RegionSearchCondExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RegionSearchCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RegionSearchCondExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->group_id);
  }
  group_id = v16->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->logic_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->logic_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->logic_type);
  }
  logic_type = v16->logic_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->logic_type, v5);
  }
  this->logic_type = logic_type;
  std::vector<data::RegionSearchCond>::vector(&this->cond, &v16->cond);
  p_region_list = &v16->region_list;
  std::vector<unsigned int>::vector(&this->region_list, &v16->region_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->reward_id);
  }
  reward_id = v16->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_region_list) = v12 != 0;
    __asan_report_store4(&this->reward_id, p_region_list);
  }
  this->reward_id = reward_id;
  v13 = (((_BYTE)v16 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->total_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->total_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->total_progress);
  }
  total_progress = v16->total_progress;
  v15 = *(_BYTE *)(((unsigned __int64)&this->total_progress >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->total_progress, v13);
  }
  this->total_progress = total_progress;
};

// Line 123: range 000000001342555E-00000000134255BF
void __cdecl data::RegionSearchCondExcelConfig::~RegionSearchCondExcelConfig(
        data::RegionSearchCondExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchCondExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchCondExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->region_list);
  std::vector<data::RegionSearchCond>::~vector(&this->cond);
};

// Line 123: range 00000000134255C0-00000000134255EA
void __cdecl data::RegionSearchCondExcelConfig::~RegionSearchCondExcelConfig(
        data::RegionSearchCondExcelConfig *const this)
{
  data::RegionSearchCondExcelConfig::~RegionSearchCondExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 140: range 0000000012ED46E6-0000000012ED48D5
void __cdecl data::RegionSearchRegionExcelConfig::RegionSearchRegionExcelConfig(
        data::RegionSearchRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchRegionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<float>::vector(&this->region_center);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_radius, v1);
  }
  this->region_radius = 0.0;
  std::vector<unsigned int>::vector(&this->oneoff_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->oneoff_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->oneoff_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->oneoff_group_num, v1);
  }
  this->oneoff_group_num = 0;
  std::vector<unsigned int>::vector(&this->recycle_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->recycle_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recycle_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recycle_group_num, v1);
  }
  this->recycle_group_num = 0;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->recycle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recycle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recycle_type, v3);
  }
  this->recycle_type = REGION_SEARCH_RECYCLE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->recycle_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recycle_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recycle_param, v3);
  }
  this->recycle_param = 0;
};

// Line 140: range 00000000133CAFD2-00000000133CB375
void __cdecl data::RegionSearchRegionExcelConfig::RegionSearchRegionExcelConfig(
        data::RegionSearchRegionExcelConfig *const this,
        const data::RegionSearchRegionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  float region_radius; // xmm0_4
  std::vector<unsigned int> *p_oneoff_group_list; // rsi
  uint32_t oneoff_group_num; // ecx
  char v8; // al
  std::vector<unsigned int> *p_recycle_group_list; // rsi
  uint32_t recycle_group_num; // ecx
  char v11; // al
  __int64 v12; // rsi
  data::RegionSearchRecycleType recycle_type; // ecx
  char v14; // dl
  uint32_t recycle_param; // ecx
  char v16; // al
  const data::RegionSearchRegionExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RegionSearchRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RegionSearchRegionExcelConfig = v2;
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
  std::vector<float>::vector(&this->region_center, &v17->region_center);
  if ( *(_BYTE *)(((unsigned __int64)&v17->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->region_radius);
  }
  region_radius = v17->region_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_radius, &v17->region_center);
  }
  this->region_radius = region_radius;
  p_oneoff_group_list = &v17->oneoff_group_list;
  std::vector<unsigned int>::vector(&this->oneoff_group_list, &v17->oneoff_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v17->oneoff_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->oneoff_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->oneoff_group_num);
  }
  oneoff_group_num = v17->oneoff_group_num;
  v8 = *(_BYTE *)(((unsigned __int64)&this->oneoff_group_num >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_oneoff_group_list) = v8 != 0;
    __asan_report_store4(&this->oneoff_group_num, p_oneoff_group_list);
  }
  this->oneoff_group_num = oneoff_group_num;
  p_recycle_group_list = &v17->recycle_group_list;
  std::vector<unsigned int>::vector(&this->recycle_group_list, &v17->recycle_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v17->recycle_group_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->recycle_group_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->recycle_group_num);
  }
  recycle_group_num = v17->recycle_group_num;
  v11 = *(_BYTE *)(((unsigned __int64)&this->recycle_group_num >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_recycle_group_list) = v11 != 0;
    __asan_report_store4(&this->recycle_group_num, p_recycle_group_list);
  }
  this->recycle_group_num = recycle_group_num;
  v12 = (((_BYTE)v17 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->recycle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->recycle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->recycle_type);
  }
  recycle_type = v17->recycle_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->recycle_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->recycle_type, v12);
  }
  this->recycle_type = recycle_type;
  if ( *(_BYTE *)(((unsigned __int64)&v17->recycle_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->recycle_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->recycle_param);
  }
  recycle_param = v17->recycle_param;
  v16 = *(_BYTE *)(((unsigned __int64)&this->recycle_param >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->recycle_param, v12);
  }
  this->recycle_param = recycle_param;
};

// Line 143: range 00000000134254C0-0000000013425531
void __cdecl data::RegionSearchRegionExcelConfig::~RegionSearchRegionExcelConfig(
        data::RegionSearchRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RegionSearchRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RegionSearchRegionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->recycle_group_list);
  std::vector<unsigned int>::~vector(&this->oneoff_group_list);
  std::vector<float>::~vector(&this->region_center);
};

// Line 143: range 0000000013425532-000000001342555C
void __cdecl data::RegionSearchRegionExcelConfig::~RegionSearchRegionExcelConfig(
        data::RegionSearchRegionExcelConfig *const this)
{
  data::RegionSearchRegionExcelConfig::~RegionSearchRegionExcelConfig(this);
  operator delete(this, 0x78uLL);
};
