// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ComponentDefines/CommonExcelConfig.gen.h

// Line 75: range 00000000110E7CB8-00000000110E7DF7
void __cdecl data::FightPropGrowConfig::FightPropGrowConfig(
        data::FightPropGrowConfig *const this,
        const data::FightPropGrowConfig *a2)
{
  int (**v2)(...); // rdx
  data::FightPropType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GrowCurveType grow_curve; // ecx
  char v7; // dl
  const data::FightPropGrowConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FightPropGrowConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FightPropGrowConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->grow_curve >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->grow_curve >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->grow_curve);
  }
  grow_curve = v8->grow_curve;
  v7 = *(_BYTE *)(((unsigned __int64)&this->grow_curve >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->grow_curve, v5);
  }
  this->grow_curve = grow_curve;
};

// Line 75: range 000000000D0FAFE2-000000000D0FB121
void __cdecl data::IdCountConfig::IdCountConfig(data::IdCountConfig *const this, const data::IdCountConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  const data::IdCountConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::IdCountConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IdCountConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
};

// Line 91: range 0000000010A044B2-0000000010A04503
void __cdecl data::FetterConditionConfig::~FetterConditionConfig(data::FetterConditionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterConditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConditionConfig = v2;
  std::vector<unsigned int>::~vector(&this->param_list);
};

// Line 820: range 0000000012F49AD2-0000000012F49BE4
data::PropValConfig *__cdecl data::PropValConfig::operator=(
        data::PropValConfig *const this,
        const data::PropValConfig *a2)
{
  data::FightPropType prop_type; // ecx
  char v3; // al
  float value; // xmm0_4
  const data::PropValConfig *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->value);
  }
  value = v6->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->value = value;
  return this;
};

// Line 1843: range 000000000CE262C4-000000000CE2655D
void __cdecl data::ItemConfig::ItemConfig(data::ItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_type, v3);
  }
  this->item_type = ITEM_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank, v4);
  }
  this->rank = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v4);
  }
  this->gadget_id = 0;
  v5 = ((_BYTE)this + 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->dropable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->dropable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->dropable, v5, v6);
  this->dropable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_level, v5);
  }
  this->use_level = 0;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->global_item_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->global_item_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->global_item_limit, v7);
  }
  this->global_item_limit = 0;
  std::string::basic_string(&this->control_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_rank_level, v7);
  }
  this->item_rank_level = 0;
};

// Line 1843: range 000000000D381F3C-000000000D3823F4
void __cdecl data::ItemConfig::ItemConfig(data::ItemConfig *const this, const data::ItemConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ItemType item_type; // ecx
  char v7; // dl
  uint32_t weight; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t rank; // ecx
  char v12; // dl
  uint32_t gadget_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool dropable; // cl
  char v18; // dl
  __int64 v19; // rdx
  uint32_t use_level; // ecx
  char v21; // al
  __int64 v22; // rsi
  uint32_t global_item_limit; // ecx
  char v24; // dl
  std::string *p_control_type; // rsi
  uint32_t item_rank_level; // ecx
  char v27; // al
  const data::ItemConfig *v28; // [rsp+0h] [rbp-10h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemConfig = v2;
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
  v5 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->item_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->item_type);
  }
  item_type = v28->item_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_type, v5);
  }
  this->item_type = item_type;
  if ( *(_BYTE *)(((unsigned __int64)&v28->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->weight);
  }
  weight = v28->weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  v10 = (((_BYTE)v28 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->rank);
  }
  rank = v28->rank;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->rank, v10);
  }
  this->rank = rank;
  if ( *(_BYTE *)(((unsigned __int64)&v28->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->gadget_id);
  }
  gadget_id = v28->gadget_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->gadget_id, v10);
  }
  this->gadget_id = gadget_id;
  v15 = ((_BYTE)v28 + 28) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v28->dropable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v28->dropable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v28->dropable, v15, v16);
  dropable = v28->dropable;
  v18 = *(_BYTE *)(((unsigned __int64)&this->dropable >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->dropable, v15, v19);
  this->dropable = dropable;
  if ( *(_BYTE *)(((unsigned __int64)&v28->use_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->use_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->use_level);
  }
  use_level = v28->use_level;
  v21 = *(_BYTE *)(((unsigned __int64)&this->use_level >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v15) = v21 != 0;
    __asan_report_store4(&this->use_level, v15);
  }
  this->use_level = use_level;
  v22 = (((_BYTE)v28 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->global_item_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->global_item_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->global_item_limit);
  }
  global_item_limit = v28->global_item_limit;
  v24 = *(_BYTE *)(((unsigned __int64)&this->global_item_limit >> 3) + 0x7FFF8000);
  if ( v24 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v24 )
  {
    LOBYTE(v22) = v24 != 0;
    __asan_report_store4(&this->global_item_limit, v22);
  }
  this->global_item_limit = global_item_limit;
  p_control_type = &v28->control_type;
  std::string::basic_string(&this->control_type, &v28->control_type);
  if ( *(_BYTE *)(((unsigned __int64)&v28->item_rank_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->item_rank_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->item_rank_level);
  }
  item_rank_level = v28->item_rank_level;
  v27 = *(_BYTE *)(((unsigned __int64)&this->item_rank_level >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_control_type) = v27 != 0;
    __asan_report_store4(&this->item_rank_level, p_control_type);
  }
  this->item_rank_level = item_rank_level;
};

// Line 1846: range 000000000CE2655E-000000000CE265AF
void __cdecl data::ItemConfig::~ItemConfig(data::ItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  std::string::~string(&this->control_type);
};

// Line 1846: range 000000000CE265B0-000000000CE265DA
void __cdecl data::ItemConfig::~ItemConfig(data::ItemConfig *const this)
{
  data::ItemConfig::~ItemConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 1864: range 0000000013BDBE96-0000000013BDC467
void __cdecl data::EntityExcelConfig::EntityExcelConfig(data::EntityExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int (**v5)(...); // rdx
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::EntityExcelConfig::EntityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -202116351;
  v5 = (int (**)(...))(&`vtable for'data::EntityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->prefab_path);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->prefab_path_path_decorator,
    "*.GameObject",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->prefab_path_remote);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->prefab_path_remote_path_decorator,
    "*.GameObject",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->controller_path);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    &this->controller_path_path_decorator,
    "*.AnimatorController",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->controller_path_remote);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    &this->controller_path_remote_path_decorator,
    "*.AnimatorController",
    (const std::allocator<char> *)(v2 + 96));
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_hash, "*.AnimatorController");
  this->prefab_path_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_remote_hash, "*.AnimatorController");
  this->prefab_path_remote_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->controller_path_hash, "*.AnimatorController");
  this->controller_path_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->controller_path_remote_hash, "*.AnimatorController");
  this->controller_path_remote_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_id, "*.AnimatorController");
  }
  this->camp_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1864: range 000000001419941C-00000000141998B6
void __cdecl data::EntityExcelConfig::EntityExcelConfig(
        data::EntityExcelConfig *const this,
        const data::EntityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_controller_path_remote_path_decorator; // rsi
  uint64_t prefab_path_hash; // rdx
  uint64_t prefab_path_remote_hash; // rdx
  uint64_t controller_path_hash; // rdx
  uint64_t controller_path_remote_hash; // rdx
  uint32_t camp_id; // ecx
  char v11; // al
  const data::EntityExcelConfig *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EntityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
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
  std::string::basic_string(&this->name, &v12->name);
  std::string::basic_string(&this->prefab_path, &v12->prefab_path);
  std::string::basic_string(&this->prefab_path_path_decorator, &v12->prefab_path_path_decorator);
  std::string::basic_string(&this->prefab_path_remote, &v12->prefab_path_remote);
  std::string::basic_string(&this->prefab_path_remote_path_decorator, &v12->prefab_path_remote_path_decorator);
  std::string::basic_string(&this->controller_path, &v12->controller_path);
  std::string::basic_string(&this->controller_path_path_decorator, &v12->controller_path_path_decorator);
  std::string::basic_string(&this->controller_path_remote, &v12->controller_path_remote);
  p_controller_path_remote_path_decorator = &v12->controller_path_remote_path_decorator;
  std::string::basic_string(&this->controller_path_remote_path_decorator, &v12->controller_path_remote_path_decorator);
  if ( *(_BYTE *)(((unsigned __int64)&v12->prefab_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v12->prefab_path_hash);
  prefab_path_hash = v12->prefab_path_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_hash, p_controller_path_remote_path_decorator);
  this->prefab_path_hash = prefab_path_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v12->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v12->prefab_path_remote_hash);
  prefab_path_remote_hash = v12->prefab_path_remote_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_remote_hash, p_controller_path_remote_path_decorator);
  this->prefab_path_remote_hash = prefab_path_remote_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v12->controller_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v12->controller_path_hash);
  controller_path_hash = v12->controller_path_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->controller_path_hash, p_controller_path_remote_path_decorator);
  this->controller_path_hash = controller_path_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v12->controller_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v12->controller_path_remote_hash);
  controller_path_remote_hash = v12->controller_path_remote_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->controller_path_remote_hash, p_controller_path_remote_path_decorator);
  this->controller_path_remote_hash = controller_path_remote_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v12->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->camp_id);
  }
  camp_id = v12->camp_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_controller_path_remote_path_decorator) = v11 != 0;
    __asan_report_store4(&this->camp_id, p_controller_path_remote_path_decorator);
  }
  this->camp_id = camp_id;
};

// Line 1867: range 0000000013BDC544-0000000013BDC56E
void __cdecl data::EntityExcelConfig::~EntityExcelConfig(data::EntityExcelConfig *const this)
{
  data::EntityExcelConfig::~EntityExcelConfig(this);
  operator delete(this, 0x158uLL);
};

// Line 1867: range 0000000013BDC468-0000000013BDC543
void __cdecl data::EntityExcelConfig::~EntityExcelConfig(data::EntityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EntityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  std::string::~string(&this->controller_path_remote_path_decorator);
  std::string::~string(&this->controller_path_remote);
  std::string::~string(&this->controller_path_path_decorator);
  std::string::~string(&this->controller_path);
  std::string::~string(&this->prefab_path_remote_path_decorator);
  std::string::~string(&this->prefab_path_remote);
  std::string::~string(&this->prefab_path_path_decorator);
  std::string::~string(&this->prefab_path);
  std::string::~string(&this->name);
};

// Line 1890: range 0000000012F490A2-0000000012F491B1
data::FightPropGrowConfig *__cdecl data::FightPropGrowConfig::operator=(
        data::FightPropGrowConfig *const this,
        const data::FightPropGrowConfig *a2)
{
  data::FightPropType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::GrowCurveType grow_curve; // ecx
  char v6; // dl
  const data::FightPropGrowConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->grow_curve >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->grow_curve >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->grow_curve);
  }
  grow_curve = v8->grow_curve;
  v6 = *(_BYTE *)(((unsigned __int64)&this->grow_curve >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->grow_curve, v4);
  }
  this->grow_curve = grow_curve;
  return this;
};

// Line 1890: range 0000000010A03FD4-0000000010A04099
void __cdecl data::FightPropGrowConfig::FightPropGrowConfig(data::FightPropGrowConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FightPropGrowConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FightPropGrowConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = FIGHT_PROP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_curve >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_curve >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grow_curve, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->grow_curve = GROW_CURVE_NONE;
};

// Line 1893: range 0000000010A04224-0000000010A0424E
void __cdecl data::FightPropGrowConfig::~FightPropGrowConfig(data::FightPropGrowConfig *const this)
{
  data::FightPropGrowConfig::~FightPropGrowConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 1893: range 0000000010A041E2-0000000010A04223
void __cdecl data::FightPropGrowConfig::~FightPropGrowConfig(data::FightPropGrowConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FightPropGrowConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FightPropGrowConfig = v2;
};

// Line 1903: range 0000000013BDC5C4-0000000013BDCCAE
void __cdecl data::CreatureExcelConfig::CreatureExcelConfig(data::CreatureExcelConfig *const this)
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
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi

  data::EntityExcelConfig::EntityExcelConfig((data::EntityExcelConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::CreatureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_base >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_base >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_base, v3);
  }
  this->hp_base = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_base, v3);
  }
  this->attack_base = 0.0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_base >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defense_base >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defense_base, v4);
  }
  this->defense_base = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->critical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->critical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->critical, v4);
  }
  this->critical = 0.0;
  v5 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->anti_critical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_critical >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anti_critical, v5);
  }
  this->anti_critical = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->critical_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->critical_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->critical_hurt, v5);
  }
  this->critical_hurt = 0.0;
  v6 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_sub_hurt, v6);
  }
  this->fire_sub_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->grass_sub_hurt, v6);
  }
  this->grass_sub_hurt = 0.0;
  v7 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->water_sub_hurt, v7);
  }
  this->water_sub_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elec_sub_hurt, v7);
  }
  this->elec_sub_hurt = 0.0;
  v8 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wind_sub_hurt, v8);
  }
  this->wind_sub_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ice_sub_hurt, v8);
  }
  this->ice_sub_hurt = 0.0;
  v9 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rock_sub_hurt, v9);
  }
  this->rock_sub_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_add_hurt, v9);
  }
  this->fire_add_hurt = 0.0;
  v10 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grass_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grass_add_hurt, v10);
  }
  this->grass_add_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->water_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->water_add_hurt, v10);
  }
  this->water_add_hurt = 0.0;
  v11 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->elec_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elec_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->elec_add_hurt, v11);
  }
  this->elec_add_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wind_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wind_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wind_add_hurt, v11);
  }
  this->wind_add_hurt = 0.0;
  v12 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ice_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ice_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ice_add_hurt, v12);
  }
  this->ice_add_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rock_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rock_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rock_add_hurt, v12);
  }
  this->rock_add_hurt = 0.0;
  std::vector<data::FightPropGrowConfig>::vector(&this->prop_grow_curves);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_mastery >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_mastery >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_mastery, v12);
  }
  this->element_mastery = 0.0;
  v13 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->physical_sub_hurt, v13);
  }
  this->physical_sub_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->physical_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->physical_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->physical_add_hurt, v13);
  }
  this->physical_add_hurt = 0.0;
};

// Line 1903: range 00000000141998B8-000000001419A5B1
void __cdecl data::CreatureExcelConfig::CreatureExcelConfig(
        data::CreatureExcelConfig *const this,
        const data::CreatureExcelConfig *a2)
{
  int (**v2)(...); // rdx
  float hp_base; // xmm0_4
  __int64 v4; // rsi
  float attack_base; // xmm0_4
  float defense_base; // xmm0_4
  __int64 v7; // rsi
  float critical; // xmm0_4
  float anti_critical; // xmm0_4
  __int64 v10; // rsi
  float critical_hurt; // xmm0_4
  float fire_sub_hurt; // xmm0_4
  __int64 v13; // rsi
  float grass_sub_hurt; // xmm0_4
  float water_sub_hurt; // xmm0_4
  __int64 v16; // rsi
  float elec_sub_hurt; // xmm0_4
  float wind_sub_hurt; // xmm0_4
  __int64 v19; // rsi
  float ice_sub_hurt; // xmm0_4
  float rock_sub_hurt; // xmm0_4
  __int64 v22; // rsi
  float fire_add_hurt; // xmm0_4
  float grass_add_hurt; // xmm0_4
  __int64 v25; // rsi
  float water_add_hurt; // xmm0_4
  float elec_add_hurt; // xmm0_4
  __int64 v28; // rsi
  float wind_add_hurt; // xmm0_4
  float ice_add_hurt; // xmm0_4
  __int64 v31; // rsi
  float rock_add_hurt; // xmm0_4
  float element_mastery; // xmm0_4
  float physical_sub_hurt; // xmm0_4
  __int64 v35; // rsi
  float physical_add_hurt; // xmm0_4

  data::EntityExcelConfig::EntityExcelConfig((data::EntityExcelConfig *const)this, (const data::EntityExcelConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::CreatureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hp_base >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hp_base >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hp_base);
  }
  hp_base = a2->hp_base;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_base >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_base >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_base, v4);
  }
  this->hp_base = hp_base;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attack_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attack_base);
  }
  attack_base = a2->attack_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_base, v4);
  }
  this->attack_base = attack_base;
  if ( *(_BYTE *)(((unsigned __int64)&a2->defense_base >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->defense_base >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->defense_base);
  }
  defense_base = a2->defense_base;
  v7 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_base >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defense_base >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defense_base, v7);
  }
  this->defense_base = defense_base;
  if ( *(_BYTE *)(((unsigned __int64)&a2->critical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->critical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->critical);
  }
  critical = a2->critical;
  if ( *(_BYTE *)(((unsigned __int64)&this->critical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->critical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->critical, v7);
  }
  this->critical = critical;
  if ( *(_BYTE *)(((unsigned __int64)&a2->anti_critical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->anti_critical >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->anti_critical);
  }
  anti_critical = a2->anti_critical;
  v10 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->anti_critical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_critical >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anti_critical, v10);
  }
  this->anti_critical = anti_critical;
  if ( *(_BYTE *)(((unsigned __int64)&a2->critical_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->critical_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->critical_hurt);
  }
  critical_hurt = a2->critical_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->critical_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->critical_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->critical_hurt, v10);
  }
  this->critical_hurt = critical_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fire_sub_hurt);
  }
  fire_sub_hurt = a2->fire_sub_hurt;
  v13 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_sub_hurt, v13);
  }
  this->fire_sub_hurt = fire_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->grass_sub_hurt);
  }
  grass_sub_hurt = a2->grass_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->grass_sub_hurt, v13);
  }
  this->grass_sub_hurt = grass_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->water_sub_hurt);
  }
  water_sub_hurt = a2->water_sub_hurt;
  v16 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->water_sub_hurt, v16);
  }
  this->water_sub_hurt = water_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->elec_sub_hurt);
  }
  elec_sub_hurt = a2->elec_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elec_sub_hurt, v16);
  }
  this->elec_sub_hurt = elec_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->wind_sub_hurt);
  }
  wind_sub_hurt = a2->wind_sub_hurt;
  v19 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wind_sub_hurt, v19);
  }
  this->wind_sub_hurt = wind_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ice_sub_hurt);
  }
  ice_sub_hurt = a2->ice_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ice_sub_hurt, v19);
  }
  this->ice_sub_hurt = ice_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rock_sub_hurt);
  }
  rock_sub_hurt = a2->rock_sub_hurt;
  v22 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rock_sub_hurt, v22);
  }
  this->rock_sub_hurt = rock_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fire_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fire_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fire_add_hurt);
  }
  fire_add_hurt = a2->fire_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_add_hurt, v22);
  }
  this->fire_add_hurt = fire_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->grass_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->grass_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->grass_add_hurt);
  }
  grass_add_hurt = a2->grass_add_hurt;
  v25 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grass_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grass_add_hurt, v25);
  }
  this->grass_add_hurt = grass_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->water_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->water_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->water_add_hurt);
  }
  water_add_hurt = a2->water_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->water_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->water_add_hurt, v25);
  }
  this->water_add_hurt = water_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->elec_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->elec_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->elec_add_hurt);
  }
  elec_add_hurt = a2->elec_add_hurt;
  v28 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->elec_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elec_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->elec_add_hurt, v28);
  }
  this->elec_add_hurt = elec_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wind_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->wind_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->wind_add_hurt);
  }
  wind_add_hurt = a2->wind_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->wind_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wind_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wind_add_hurt, v28);
  }
  this->wind_add_hurt = wind_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ice_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ice_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ice_add_hurt);
  }
  ice_add_hurt = a2->ice_add_hurt;
  v31 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ice_add_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ice_add_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ice_add_hurt, v31);
  }
  this->ice_add_hurt = ice_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rock_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rock_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rock_add_hurt);
  }
  rock_add_hurt = a2->rock_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->rock_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rock_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rock_add_hurt, v31);
  }
  this->rock_add_hurt = rock_add_hurt;
  std::vector<data::FightPropGrowConfig>::vector(&this->prop_grow_curves, &a2->prop_grow_curves);
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_mastery >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_mastery >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_mastery);
  }
  element_mastery = a2->element_mastery;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_mastery >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_mastery >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_mastery, &a2->prop_grow_curves);
  }
  this->element_mastery = element_mastery;
  if ( *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->physical_sub_hurt);
  }
  physical_sub_hurt = a2->physical_sub_hurt;
  v35 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->physical_sub_hurt, v35);
  }
  this->physical_sub_hurt = physical_sub_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->physical_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->physical_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->physical_add_hurt);
  }
  physical_add_hurt = a2->physical_add_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->physical_add_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->physical_add_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->physical_add_hurt, v35);
  }
  this->physical_add_hurt = physical_add_hurt;
};

// Line 1907: range 0000000013BDCCB0-0000000013BDCD0F
void __cdecl data::CreatureExcelConfig::~CreatureExcelConfig(data::CreatureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CreatureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  std::vector<data::FightPropGrowConfig>::~vector(&this->prop_grow_curves);
  data::EntityExcelConfig::~EntityExcelConfig((data::EntityExcelConfig *const)this);
};

// Line 1907: range 0000000013BDCD10-0000000013BDCD3A
void __cdecl data::CreatureExcelConfig::~CreatureExcelConfig(data::CreatureExcelConfig *const this)
{
  data::CreatureExcelConfig::~CreatureExcelConfig(this);
  operator delete(this, 0x1D0uLL);
};

// Line 1952: range 000000000CE54716-000000000CE54825
data::IdCountConfig *__cdecl data::IdCountConfig::operator=(
        data::IdCountConfig *const this,
        const data::IdCountConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t count; // ecx
  char v6; // dl
  const data::IdCountConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->count, v4);
  }
  this->count = count;
  return this;
};

// Line 1952: range 000000000CE46924-000000000CE469E9
void __cdecl data::IdCountConfig::IdCountConfig(data::IdCountConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IdCountConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IdCountConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->count = 0;
};

// Line 1955: range 000000000D4936E2-000000000D493723
void __cdecl data::IdCountConfig::~IdCountConfig(data::IdCountConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IdCountConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IdCountConfig = v2;
};

// Line 1955: range 000000000D493724-000000000D49374E
void __cdecl data::IdCountConfig::~IdCountConfig(data::IdCountConfig *const this)
{
  data::IdCountConfig::~IdCountConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 1978: range 000000000D2E8626-000000000D2E86ED
void __cdecl data::PropValConfig::PropValConfig(data::PropValConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PropValConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PropValConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_type, v1);
  }
  this->prop_type = FIGHT_PROP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->value = 0.0;
};

// Line 1978: range 000000000D3E5EB0-000000000D3E5FF2
void __cdecl data::PropValConfig::PropValConfig(data::PropValConfig *const this, const data::PropValConfig *a2)
{
  int (**v2)(...); // rdx
  data::FightPropType prop_type; // ecx
  char v4; // al
  float value; // xmm0_4
  const data::PropValConfig *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PropValConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PropValConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->prop_type, a2);
  }
  this->prop_type = prop_type;
  if ( *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->value);
  }
  value = v6->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->value = value;
};

// Line 1981: range 000000000D24A96E-000000000D24A998
void __cdecl data::PropValConfig::~PropValConfig(data::PropValConfig *const this)
{
  data::PropValConfig::~PropValConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 1981: range 000000000D24A92C-000000000D24A96D
void __cdecl data::PropValConfig::~PropValConfig(data::PropValConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PropValConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PropValConfig = v2;
};

// Line 1991: range 0000000014CA6FD8-0000000014CA70DD
void __cdecl data::GrowCurveInfo::GrowCurveInfo(data::GrowCurveInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GrowCurveInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GrowCurveInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = GROW_CURVE_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->arith >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arith >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->arith, v3);
  }
  this->arith = ARITH_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0.0;
};

// Line 1991: range 0000000014D8F94E-0000000014D8FB05
void __cdecl data::GrowCurveInfo::GrowCurveInfo(data::GrowCurveInfo *const this, const data::GrowCurveInfo *a2)
{
  int (**v2)(...); // rdx
  data::GrowCurveType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ArithType arith; // ecx
  char v7; // dl
  float value; // xmm0_4
  const data::GrowCurveInfo *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GrowCurveInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GrowCurveInfo = v2;
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
  v5 = (((_BYTE)v9 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->arith >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->arith >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->arith);
  }
  arith = v9->arith;
  v7 = *(_BYTE *)(((unsigned __int64)&this->arith >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->arith, v5);
  this->arith = arith;
  if ( *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->value);
  }
  value = v9->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v5);
  }
  this->value = value;
};

// Line 1994: range 0000000014BE02B6-0000000014BE02E0
void __cdecl data::GrowCurveInfo::~GrowCurveInfo(data::GrowCurveInfo *const this)
{
  data::GrowCurveInfo::~GrowCurveInfo(this);
  operator delete(this, 0x18uLL);
};

// Line 1994: range 0000000014BE0274-0000000014BE02B5
void __cdecl data::GrowCurveInfo::~GrowCurveInfo(data::GrowCurveInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GrowCurveInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GrowCurveInfo = v2;
};

// Line 2005: range 0000000013F787E0-0000000013F78846
data::BaseTalentConfig *__cdecl data::BaseTalentConfig::operator=(
        data::BaseTalentConfig *const this,
        const data::BaseTalentConfig *a2)
{
  std::string::operator=(&this->open_config, &a2->open_config);
  std::vector<data::PropValConfig>::operator=(&this->add_props, &a2->add_props);
  std::vector<float>::operator=(&this->param_list, &a2->param_list);
  return this;
};

// Line 2005: range 000000000CE19EEA-000000000CE19F5B
void __cdecl data::BaseTalentConfig::BaseTalentConfig(data::BaseTalentConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseTalentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  std::string::basic_string(&this->open_config);
  std::vector<data::PropValConfig>::vector(&this->add_props);
  std::vector<float>::vector(&this->param_list);
};

// Line 2005: range 000000000D372FDA-000000000D3730AC
void __cdecl data::BaseTalentConfig::BaseTalentConfig(
        data::BaseTalentConfig *const this,
        const data::BaseTalentConfig *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseTalentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentConfig = v2;
  std::string::basic_string(&this->open_config, &a2->open_config);
  std::vector<data::PropValConfig>::vector(&this->add_props, &a2->add_props);
  std::vector<float>::vector(&this->param_list, &a2->param_list);
};

// Line 2008: range 000000000CE19F5C-000000000CE19FCD
void __cdecl data::BaseTalentConfig::~BaseTalentConfig(data::BaseTalentConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseTalentConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  std::vector<float>::~vector(&this->param_list);
  std::vector<data::PropValConfig>::~vector(&this->add_props);
  std::string::~string(&this->open_config);
};

// Line 2008: range 000000000CE19FCE-000000000CE19FF8
void __cdecl data::BaseTalentConfig::~BaseTalentConfig(data::BaseTalentConfig *const this)
{
  data::BaseTalentConfig::~BaseTalentConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 2019: range 0000000013C6F9E8-0000000013C6FB6C
data::RandomItemConfig *__cdecl data::RandomItemConfig::operator=(
        data::RandomItemConfig *const this,
        const data::RandomItemConfig *a2)
{
  uint32_t item_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t count; // ecx
  char v6; // dl
  uint32_t weight; // ecx
  char v8; // al
  const data::RandomItemConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->count);
  }
  count = v10->count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->count, v4);
  }
  this->count = count;
  if ( *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->weight);
  }
  weight = v10->weight;
  v8 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->weight, v4);
  }
  this->weight = weight;
  return this;
};

// Line 2019: range 000000001410EB78-000000001410EC7B
void __cdecl data::RandomItemConfig::RandomItemConfig(data::RandomItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RandomItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomItemConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count, v3);
  }
  this->count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
};

// Line 2019: range 00000000142630CA-000000001426327E
void __cdecl data::RandomItemConfig::RandomItemConfig(
        data::RandomItemConfig *const this,
        const data::RandomItemConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  uint32_t weight; // ecx
  char v9; // al
  const data::RandomItemConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomItemConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->count);
  }
  count = v10->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
  if ( *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->weight);
  }
  weight = v10->weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
};

// Line 2022: range 0000000014033B5E-0000000014033B9F
void __cdecl data::RandomItemConfig::~RandomItemConfig(data::RandomItemConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomItemConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomItemConfig = v2;
};

// Line 2022: range 0000000014033BA0-0000000014033BCA
void __cdecl data::RandomItemConfig::~RandomItemConfig(data::RandomItemConfig *const this)
{
  data::RandomItemConfig::~RandomItemConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 2033: range 000000000CE4EF5A-000000000CE4F06A
data::OptionalLimitConfig *__cdecl data::OptionalLimitConfig::operator=(
        data::OptionalLimitConfig *const this,
        const data::OptionalLimitConfig *a2)
{
  bool is_unlimited; // cl
  char v3; // al
  __int64 v4; // rsi
  uint32_t limit_count; // ecx
  char v6; // dl
  const data::OptionalLimitConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(char *)(((unsigned __int64)&a2->is_unlimited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_unlimited, a2, &a2->is_unlimited);
  is_unlimited = a2->is_unlimited;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_unlimited >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_unlimited, a2, &this->is_unlimited);
  }
  this->is_unlimited = is_unlimited;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->limit_count);
  }
  limit_count = v8->limit_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->limit_count, v4);
  }
  this->limit_count = limit_count;
  return this;
};

// Line 2033: range 0000000013C052D2-0000000013C05394
void __cdecl data::OptionalLimitConfig::OptionalLimitConfig(data::OptionalLimitConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OptionalLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OptionalLimitConfig = v2;
  if ( *(char *)(((unsigned __int64)&this->is_unlimited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlimited, v1, &this->is_unlimited);
  this->is_unlimited = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->limit_count = 0;
};

// Line 2033: range 000000000CFEE840-000000000CFEE980
void __cdecl data::OptionalLimitConfig::OptionalLimitConfig(
        data::OptionalLimitConfig *const this,
        const data::OptionalLimitConfig *a2)
{
  int (**v2)(...); // rdx
  bool is_unlimited; // cl
  char v4; // al
  __int64 v5; // rsi
  uint32_t limit_count; // ecx
  char v7; // dl
  const data::OptionalLimitConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OptionalLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OptionalLimitConfig = v2;
  if ( *(char *)(((unsigned __int64)&a2->is_unlimited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_unlimited, a2, &a2->is_unlimited);
  is_unlimited = a2->is_unlimited;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_unlimited >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->is_unlimited, a2, &this->is_unlimited);
  }
  this->is_unlimited = is_unlimited;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->limit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->limit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->limit_count);
  }
  limit_count = v8->limit_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->limit_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->limit_count, v5);
  }
  this->limit_count = limit_count;
};

// Line 2036: range 000000000D4936B6-000000000D4936E0
void __cdecl data::OptionalLimitConfig::~OptionalLimitConfig(data::OptionalLimitConfig *const this)
{
  data::OptionalLimitConfig::~OptionalLimitConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 2036: range 000000000D493674-000000000D4936B5
void __cdecl data::OptionalLimitConfig::~OptionalLimitConfig(data::OptionalLimitConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OptionalLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OptionalLimitConfig = v2;
};

// Line 2044: range 0000000013BED262-0000000013BED347
void __cdecl data::BaseServerBuffConfig::BaseServerBuffConfig(data::BaseServerBuffConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseServerBuffConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseServerBuffConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_buff_id, v1);
  }
  this->server_buff_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_buff_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_buff_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_buff_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->server_buff_type = SERVER_BUFF_NONE;
  std::string::basic_string(&this->ability_name);
  std::string::basic_string(&this->modifier_name);
};

// Line 2044: range 00000000141AA73C-00000000141AA8D8
void __cdecl data::BaseServerBuffConfig::BaseServerBuffConfig(
        data::BaseServerBuffConfig *const this,
        const data::BaseServerBuffConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t server_buff_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ServerBuffType server_buff_type; // ecx
  char v7; // dl
  const data::BaseServerBuffConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BaseServerBuffConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseServerBuffConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->server_buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->server_buff_id);
  }
  server_buff_id = a2->server_buff_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->server_buff_id, a2);
  }
  this->server_buff_id = server_buff_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->server_buff_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->server_buff_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->server_buff_type);
  }
  server_buff_type = v8->server_buff_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->server_buff_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->server_buff_type, v5);
  }
  this->server_buff_type = server_buff_type;
  std::string::basic_string(&this->ability_name, &v8->ability_name);
  std::string::basic_string(&this->modifier_name, &v8->modifier_name);
};

// Line 2047: range 0000000013BED348-0000000013BED3A9
void __cdecl data::BaseServerBuffConfig::~BaseServerBuffConfig(data::BaseServerBuffConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseServerBuffConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseServerBuffConfig = v2;
  std::string::~string(&this->modifier_name);
  std::string::~string(&this->ability_name);
};

// Line 2047: range 0000000013BED3AA-0000000013BED3D4
void __cdecl data::BaseServerBuffConfig::~BaseServerBuffConfig(data::BaseServerBuffConfig *const this)
{
  data::BaseServerBuffConfig::~BaseServerBuffConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 2059: range 000000000CE172A6-000000000CE17345
void __cdecl data::WatcherTriggerConfig::WatcherTriggerConfig(data::WatcherTriggerConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WatcherTriggerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherTriggerConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_type, v1);
  }
  this->trigger_type = TRIGGER_NONE;
  std::vector<std::string>::vector(&this->param_list);
  std::vector<unsigned int>::vector(&this->param_vec);
};

// Line 2059: range 000000000D36FFCC-000000000D3700E3
void __cdecl data::WatcherTriggerConfig::WatcherTriggerConfig(
        data::WatcherTriggerConfig *const this,
        const data::WatcherTriggerConfig *a2)
{
  int (**v2)(...); // rdx
  data::WatcherTriggerType trigger_type; // ecx
  char v4; // al
  const data::WatcherTriggerConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WatcherTriggerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherTriggerConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_type);
  }
  trigger_type = a2->trigger_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->trigger_type, a2);
  }
  this->trigger_type = trigger_type;
  std::vector<std::string>::vector(&this->param_list, &v5->param_list);
  std::vector<unsigned int>::vector(&this->param_vec, &v5->param_vec);
};

// Line 2062: range 000000000D4935E6-000000000D493647
void __cdecl data::WatcherTriggerConfig::~WatcherTriggerConfig(data::WatcherTriggerConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WatcherTriggerConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherTriggerConfig = v2;
  std::vector<unsigned int>::~vector(&this->param_vec);
  std::vector<std::string>::~vector(&this->param_list);
};

// Line 2062: range 000000000D493648-000000000D493672
void __cdecl data::WatcherTriggerConfig::~WatcherTriggerConfig(data::WatcherTriggerConfig *const this)
{
  data::WatcherTriggerConfig::~WatcherTriggerConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 2073: range 000000000CE17346-000000000CE1756F
void __cdecl data::WatcherConfig::WatcherConfig(data::WatcherConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  std::any *p_param; // rcx
  int v7; // r8d
  char v8; // dl
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::WatcherConfig::WatcherConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = (int (**)(...))(&`vtable for'data::WatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  data::WatcherTriggerConfig::WatcherTriggerConfig(&this->trigger_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress, v1);
  }
  this->progress = 0;
  p_param = &this->param;
  v7 = 0;
  v8 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)(((v2 + 32) & 7) + 3) >= v8 )
  {
    LOBYTE(v1) = v8 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = v7;
  std::any::any<int,int,std::any::_Manager_internal<int>,true,true>(p_param, (int *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_disuse, v2 + 32, &this->is_disuse);
  this->is_disuse = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2073: range 000000000D3700E4-000000000D3702E6
void __cdecl data::WatcherConfig::WatcherConfig(data::WatcherConfig *const this, const data::WatcherConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  data::WatcherTriggerConfig *p_trigger_config; // rsi
  uint32_t progress; // ecx
  char v7; // al
  std::any *p_param; // rsi
  bool is_disuse; // cl
  char v10; // al
  const data::WatcherConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
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
  p_trigger_config = &v11->trigger_config;
  data::WatcherTriggerConfig::WatcherTriggerConfig(&this->trigger_config, &v11->trigger_config);
  if ( *(_BYTE *)(((unsigned __int64)&v11->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->progress);
  }
  progress = v11->progress;
  v7 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_trigger_config) = v7 != 0;
    __asan_report_store4(&this->progress, p_trigger_config);
  }
  this->progress = progress;
  p_param = &v11->param;
  std::any::any(&this->param, &v11->param);
  if ( *(char *)(((unsigned __int64)&v11->is_disuse >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_disuse, p_param, &v11->is_disuse);
  is_disuse = v11->is_disuse;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_disuse >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_param) = v10 != 0;
    __asan_report_store1(&this->is_disuse, p_param, &this->is_disuse);
  }
  this->is_disuse = is_disuse;
};

// Line 2076: range 000000000CE17570-000000000CE175D1
void __cdecl data::WatcherConfig::~WatcherConfig(data::WatcherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WatcherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  std::any::~any(&this->param);
  data::WatcherTriggerConfig::~WatcherTriggerConfig(&this->trigger_config);
};

// Line 2076: range 000000000CE175D2-000000000CE175FC
void __cdecl data::WatcherConfig::~WatcherConfig(data::WatcherConfig *const this)
{
  data::WatcherConfig::~WatcherConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 2089: range 000000000F02000E-000000000F0201A5
void __cdecl data::QuestGuide::QuestGuide(data::QuestGuide *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::QuestGuide + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestGuide = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_GUIDE_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_guide >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_guide >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_guide, v3);
  }
  this->auto_guide = QUEST_GUIDE_AUTO_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_scene, v3);
  }
  this->guide_scene = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_style >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_style >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_style, v4);
  }
  this->guide_style = QUEST_GUIDE_STYLE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_layer, v4);
  }
  this->guide_layer = QUEST_GUIDE_LAYER_NONE;
};

// Line 2089: range 000000000F104B78-000000000F104E41
void __cdecl data::QuestGuide::QuestGuide(data::QuestGuide *const this, const data::QuestGuide *a2)
{
  int (**v2)(...); // rdx
  data::QuestGuideType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::QuestGuideAuto auto_guide; // ecx
  char v7; // dl
  std::vector<std::string> *p_param; // rsi
  uint32_t guide_scene; // ecx
  char v10; // al
  __int64 v11; // rsi
  data::QuestGuideStyle guide_style; // ecx
  char v13; // dl
  data::QuestGuideLayer guide_layer; // ecx
  char v15; // al
  const data::QuestGuide *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestGuide + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestGuide = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->auto_guide >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->auto_guide >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->auto_guide);
  }
  auto_guide = v16->auto_guide;
  v7 = *(_BYTE *)(((unsigned __int64)&this->auto_guide >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->auto_guide, v5);
  }
  this->auto_guide = auto_guide;
  p_param = &v16->param;
  std::vector<std::string>::vector(&this->param, &v16->param);
  if ( *(_BYTE *)(((unsigned __int64)&v16->guide_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->guide_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->guide_scene);
  }
  guide_scene = v16->guide_scene;
  v10 = *(_BYTE *)(((unsigned __int64)&this->guide_scene >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_param) = v10 != 0;
    __asan_report_store4(&this->guide_scene, p_param);
  }
  this->guide_scene = guide_scene;
  v11 = (((_BYTE)v16 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->guide_style >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->guide_style >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->guide_style);
  }
  guide_style = v16->guide_style;
  v13 = *(_BYTE *)(((unsigned __int64)&this->guide_style >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->guide_style, v11);
  }
  this->guide_style = guide_style;
  if ( *(_BYTE *)(((unsigned __int64)&v16->guide_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->guide_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->guide_layer);
  }
  guide_layer = v16->guide_layer;
  v15 = *(_BYTE *)(((unsigned __int64)&this->guide_layer >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->guide_layer, v11);
  }
  this->guide_layer = guide_layer;
};

// Line 2092: range 000000000F1C6198-000000000F1C61C2
void __cdecl data::QuestGuide::~QuestGuide(data::QuestGuide *const this)
{
  data::QuestGuide::~QuestGuide(this);
  operator delete(this, 0x38uLL);
};

// Line 2092: range 000000000F1C6146-000000000F1C6197
void __cdecl data::QuestGuide::~QuestGuide(data::QuestGuide *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestGuide + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestGuide = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 2117: range 0000000013C8823E-0000000013C882E3
data::FetterConditionConfig *__cdecl data::FetterConditionConfig::operator=(
        data::FetterConditionConfig *const this,
        const data::FetterConditionConfig *a2)
{
  data::FetterCondType cond_type; // ecx
  char v3; // al
  const data::FetterConditionConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<unsigned int>::operator=(&this->param_list, &v5->param_list);
  return this;
};

// Line 2117: range 0000000010A042D4-0000000010A04363
void __cdecl data::FetterConditionConfig::FetterConditionConfig(data::FetterConditionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterConditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConditionConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = FETTER_COND_NONE;
  std::vector<unsigned int>::vector(&this->param_list);
};

// Line 2117: range 0000000010CBF732-0000000010CBF807
void __cdecl data::FetterConditionConfig::FetterConditionConfig(
        data::FetterConditionConfig *const this,
        const data::FetterConditionConfig *a2)
{
  int (**v2)(...); // rdx
  data::FetterCondType cond_type; // ecx
  char v4; // al
  const data::FetterConditionConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FetterConditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FetterConditionConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<unsigned int>::vector(&this->param_list, &v5->param_list);
};

// Line 2120: range 0000000010A04504-0000000010A0452E
void __cdecl data::FetterConditionConfig::~FetterConditionConfig(data::FetterConditionConfig *const this)
{
  data::FetterConditionConfig::~FetterConditionConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 2130: range 00000000147428E8-00000000147429DD
void __cdecl data::FetterConfig::FetterConfig(data::FetterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fetter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fetter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fetter_id, v1);
  }
  this->fetter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->avatar_id = 0;
  std::vector<data::FetterConditionConfig>::vector(&this->open_conds);
  std::vector<data::FetterConditionConfig>::vector(&this->finish_conds);
  std::vector<data::FetterConditionConfig>::vector(&this->conceal_conds);
};

// Line 2130: range 0000000014D18CCE-0000000014D18E9A
void __cdecl data::FetterConfig::FetterConfig(data::FetterConfig *const this, const data::FetterConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t fetter_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t avatar_id; // ecx
  char v7; // dl
  const data::FetterConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FetterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FetterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fetter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fetter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fetter_id);
  }
  fetter_id = a2->fetter_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->fetter_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->fetter_id, a2);
  }
  this->fetter_id = fetter_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->avatar_id);
  }
  avatar_id = v8->avatar_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->avatar_id, v5);
  }
  this->avatar_id = avatar_id;
  std::vector<data::FetterConditionConfig>::vector(&this->open_conds, &v8->open_conds);
  std::vector<data::FetterConditionConfig>::vector(&this->finish_conds, &v8->finish_conds);
  std::vector<data::FetterConditionConfig>::vector(&this->conceal_conds, &v8->conceal_conds);
};

// Line 2133: range 0000000014742A50-0000000014742A7A
void __cdecl data::FetterConfig::~FetterConfig(data::FetterConfig *const this)
{
  data::FetterConfig::~FetterConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 2133: range 00000000147429DE-0000000014742A4F
void __cdecl data::FetterConfig::~FetterConfig(data::FetterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  std::vector<data::FetterConditionConfig>::~vector(&this->conceal_conds);
  std::vector<data::FetterConditionConfig>::~vector(&this->finish_conds);
  std::vector<data::FetterConditionConfig>::~vector(&this->open_conds);
};

// Line 2146: range 000000000D41272A-000000000D4127D2
data::SGVConfig *__cdecl data::SGVConfig::operator=(data::SGVConfig *const this, const data::SGVConfig *a2)
{
  std::string *p_key; // rsi
  float value; // xmm0_4

  p_key = &a2->key;
  std::string::operator=(&this->key, p_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, p_key);
  }
  this->value = value;
  return this;
};

// Line 2146: range 000000000D2EFEF8-000000000D2EFF89
void __cdecl data::SGVConfig::SGVConfig(data::SGVConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SGVConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SGVConfig = v2;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0.0;
};

// Line 2146: range 000000000D3781EC-000000000D3782C4
void __cdecl data::SGVConfig::SGVConfig(data::SGVConfig *const this, const data::SGVConfig *a2)
{
  int (**v2)(...); // rdx
  float value; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::SGVConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SGVConfig = v2;
  std::string::basic_string(&this->key, &a2->key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, &a2->key);
  }
  this->value = value;
};

// Line 2149: range 000000000D2544D2-000000000D2544FC
void __cdecl data::SGVConfig::~SGVConfig(data::SGVConfig *const this)
{
  data::SGVConfig::~SGVConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 2149: range 000000000D254480-000000000D2544D1
void __cdecl data::SGVConfig::~SGVConfig(data::SGVConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SGVConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SGVConfig = v2;
  std::string::~string(&this->key);
};

// Line 2159: range 00000000135C53BC-00000000135C54E4
void __cdecl data::CustomSlotConfig::CustomSlotConfig(data::CustomSlotConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomSlotConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomSlotConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->slot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slot_id, v1);
  }
  this->slot_id = 0;
  std::vector<unsigned int>::vector(&this->optional_parts_id_list);
  if ( *(char *)(((unsigned __int64)&this->is_necessary >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_necessary, v1, &this->is_necessary);
  this->is_necessary = 0;
  std::vector<unsigned int>::vector(&this->default_parts_id_list);
  std::vector<unsigned int>::vector(&this->pass_part_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_parts_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_parts_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_parts_id, v1);
  }
  this->init_parts_id = 0;
};

// Line 2159: range 0000000013798CE2-0000000013798F14
void __cdecl data::CustomSlotConfig::CustomSlotConfig(
        data::CustomSlotConfig *const this,
        const data::CustomSlotConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t slot_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_optional_parts_id_list; // rsi
  bool is_necessary; // cl
  char v7; // al
  std::vector<unsigned int> *p_pass_part_id_list; // rsi
  uint32_t init_parts_id; // ecx
  char v10; // al
  const data::CustomSlotConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomSlotConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomSlotConfig = v2;
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
  p_optional_parts_id_list = &v11->optional_parts_id_list;
  std::vector<unsigned int>::vector(&this->optional_parts_id_list, &v11->optional_parts_id_list);
  if ( *(char *)(((unsigned __int64)&v11->is_necessary >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_necessary, p_optional_parts_id_list, &v11->is_necessary);
  is_necessary = v11->is_necessary;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_necessary >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_optional_parts_id_list) = v7 != 0;
    __asan_report_store1(&this->is_necessary, p_optional_parts_id_list, &this->is_necessary);
  }
  this->is_necessary = is_necessary;
  std::vector<unsigned int>::vector(&this->default_parts_id_list, &v11->default_parts_id_list);
  p_pass_part_id_list = &v11->pass_part_id_list;
  std::vector<unsigned int>::vector(&this->pass_part_id_list, &v11->pass_part_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->init_parts_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->init_parts_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->init_parts_id);
  }
  init_parts_id = v11->init_parts_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->init_parts_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_pass_part_id_list) = v10 != 0;
    __asan_report_store4(&this->init_parts_id, p_pass_part_id_list);
  }
  this->init_parts_id = init_parts_id;
};

// Line 2162: range 00000000135C54E6-00000000135C5557
void __cdecl data::CustomSlotConfig::~CustomSlotConfig(data::CustomSlotConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomSlotConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomSlotConfig = v2;
  std::vector<unsigned int>::~vector(&this->pass_part_id_list);
  std::vector<unsigned int>::~vector(&this->default_parts_id_list);
  std::vector<unsigned int>::~vector(&this->optional_parts_id_list);
};

// Line 2162: range 00000000135C5558-00000000135C5582
void __cdecl data::CustomSlotConfig::~CustomSlotConfig(data::CustomSlotConfig *const this)
{
  data::CustomSlotConfig::~CustomSlotConfig(this);
  operator delete(this, 0x68uLL);
};
