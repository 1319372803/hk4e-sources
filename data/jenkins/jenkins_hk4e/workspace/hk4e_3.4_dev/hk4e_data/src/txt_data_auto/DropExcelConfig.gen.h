// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DropExcelConfig.gen.h

// Line 111: range 0000000013C769EA-0000000013C76D78
data::DropNode *__cdecl data::DropNode::operator=(data::DropNode *const this, const data::DropNode *a2)
{
  uint32_t id; // ecx
  char v3; // al
  std::string *p_num_interval; // rsi
  uint32_t weight; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t min_count; // ecx
  char v9; // dl
  uint32_t max_count; // ecx
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool is_floating_number; // cl
  char v15; // dl
  __int64 v16; // rdx
  uint32_t weight_min; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t weight_max; // ecx
  char v21; // dl
  const data::DropNode *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
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
  p_num_interval = &v23->num_interval;
  std::string::operator=(&this->num_interval, &v23->num_interval);
  if ( *(_BYTE *)(((unsigned __int64)&v23->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->weight);
  }
  weight = v23->weight;
  v6 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_num_interval) = v6 != 0;
    __asan_report_store4(&this->weight, p_num_interval);
  }
  this->weight = weight;
  v7 = (((_BYTE)v23 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->min_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->min_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->min_count);
  }
  min_count = v23->min_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->min_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->min_count, v7);
  }
  this->min_count = min_count;
  if ( *(_BYTE *)(((unsigned __int64)&v23->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->max_count);
  }
  max_count = v23->max_count;
  v11 = *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store4(&this->max_count, v7);
  }
  this->max_count = max_count;
  v12 = ((_BYTE)v23 + 60) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v23->is_floating_number >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v23->is_floating_number >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v23->is_floating_number, v12, v13);
  is_floating_number = v23->is_floating_number;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_floating_number >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_floating_number, v12, v16);
  this->is_floating_number = is_floating_number;
  if ( *(_BYTE *)(((unsigned __int64)&v23->weight_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->weight_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->weight_min);
  }
  weight_min = v23->weight_min;
  v18 = *(_BYTE *)(((unsigned __int64)&this->weight_min >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v12) = v18 != 0;
    __asan_report_store4(&this->weight_min, v12);
  }
  this->weight_min = weight_min;
  v19 = (((_BYTE)v23 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->weight_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->weight_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->weight_max);
  }
  weight_max = v23->weight_max;
  v21 = *(_BYTE *)(((unsigned __int64)&this->weight_max >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->weight_max, v19);
  }
  this->weight_max = weight_max;
  return this;
};

// Line 111: range 000000001412A0D0-000000001412A2E5
void __cdecl data::DropNode::DropNode(data::DropNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::DropNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DropNode = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->num_interval);
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v1);
  }
  this->weight = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_count, v3);
  }
  this->min_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count, v3);
  }
  this->max_count = 0;
  v4 = ((_BYTE)this + 60) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_floating_number >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_floating_number >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_floating_number, v4, v5);
  this->is_floating_number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight_min, v4);
  }
  this->weight_min = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight_max, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->weight_max = 0;
};

// Line 111: range 00000000141C4514-00000000141C48D2
void __cdecl data::DropNode::DropNode(data::DropNode *const this, const data::DropNode *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_num_interval; // rsi
  uint32_t weight; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t min_count; // ecx
  char v10; // dl
  uint32_t max_count; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_floating_number; // cl
  char v16; // dl
  __int64 v17; // rdx
  uint32_t weight_min; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t weight_max; // ecx
  char v22; // dl
  const data::DropNode *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DropNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DropNode = v2;
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
  p_num_interval = &v23->num_interval;
  std::string::basic_string(&this->num_interval, &v23->num_interval);
  if ( *(_BYTE *)(((unsigned __int64)&v23->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->weight);
  }
  weight = v23->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_num_interval) = v7 != 0;
    __asan_report_store4(&this->weight, p_num_interval);
  }
  this->weight = weight;
  v8 = (((_BYTE)v23 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->min_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->min_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->min_count);
  }
  min_count = v23->min_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->min_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->min_count, v8);
  }
  this->min_count = min_count;
  if ( *(_BYTE *)(((unsigned __int64)&v23->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->max_count);
  }
  max_count = v23->max_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->max_count, v8);
  }
  this->max_count = max_count;
  v13 = ((_BYTE)v23 + 60) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v23->is_floating_number >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v23->is_floating_number >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v23->is_floating_number, v13, v14);
  is_floating_number = v23->is_floating_number;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_floating_number >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_floating_number, v13, v17);
  this->is_floating_number = is_floating_number;
  if ( *(_BYTE *)(((unsigned __int64)&v23->weight_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->weight_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->weight_min);
  }
  weight_min = v23->weight_min;
  v19 = *(_BYTE *)(((unsigned __int64)&this->weight_min >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v13) = v19 != 0;
    __asan_report_store4(&this->weight_min, v13);
  }
  this->weight_min = weight_min;
  v20 = (((_BYTE)v23 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->weight_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->weight_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->weight_max);
  }
  weight_max = v23->weight_max;
  v22 = *(_BYTE *)(((unsigned __int64)&this->weight_max >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->weight_max, v20);
  }
  this->weight_max = weight_max;
};

// Line 114: range 0000000014056EE6-0000000014056F37
void __cdecl data::DropNode::~DropNode(data::DropNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DropNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DropNode = v2;
  std::string::~string(&this->num_interval);
};

// Line 114: range 0000000014056F38-0000000014056F62
void __cdecl data::DropNode::~DropNode(data::DropNode *const this)
{
  data::DropNode::~DropNode(this);
  operator delete(this, 0x48uLL);
};

// Line 130: range 0000000013C054FA-0000000013C0578D
void __cdecl data::DropExcelConfig::DropExcelConfig(data::DropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::OutputControlConfig::OutputControlConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::DropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_level, v3);
  }
  this->min_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_level, v3);
  }
  this->max_level = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->random_type, v4);
  }
  this->random_type = DROP_RANDOM_BY_WEIGHT;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v4);
  }
  this->level = 0;
  std::vector<data::DropNode>::vector(&this->nodes);
  if ( *(_BYTE *)(((unsigned __int64)&this->node_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->node_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->node_type, v4);
  }
  this->node_type = DROP_NODE_LEAF;
  v5 = ((_BYTE)this + 108) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_need_gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_need_gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_need_gadget_id, v5, v6);
  this->is_need_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type, v5);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  std::string::basic_string(&this->daily_output_limit_str);
  std::string::basic_string(&this->total_output_limit_str);
  std::string::basic_string(&this->activity_output_limit_str);
};

// Line 130: range 00000000141C4B32-00000000141C5037
void __cdecl data::DropExcelConfig::DropExcelConfig(data::DropExcelConfig *const this, const data::DropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t min_level; // ecx
  char v7; // dl
  uint32_t max_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::DropRandomType random_type; // ecx
  char v12; // dl
  uint32_t level; // ecx
  char v14; // al
  std::vector<data::DropNode> *p_nodes; // rsi
  data::DropNodeType node_type; // ecx
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool is_need_gadget_id; // cl
  char v21; // dl
  __int64 v22; // rdx
  data::ItemLimitType item_limit_type; // ecx
  char v24; // al
  const data::DropExcelConfig *v25; // [rsp+0h] [rbp-20h]

  v25 = a2;
  data::OutputControlConfig::OutputControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::DropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OutputControlConfig = v2;
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
  v5 = (((_BYTE)v25 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->min_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->min_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->min_level);
  }
  min_level = v25->min_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->min_level, v5);
  }
  this->min_level = min_level;
  if ( *(_BYTE *)(((unsigned __int64)&v25->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->max_level);
  }
  max_level = v25->max_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_level, v5);
  }
  this->max_level = max_level;
  v10 = (((_BYTE)v25 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->random_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->random_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->random_type);
  }
  random_type = v25->random_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->random_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->random_type, v10);
  }
  this->random_type = random_type;
  if ( *(_BYTE *)(((unsigned __int64)&v25->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->level);
  }
  level = v25->level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->level, v10);
  }
  this->level = level;
  p_nodes = &v25->nodes;
  std::vector<data::DropNode>::vector(&this->nodes, &v25->nodes);
  if ( *(_BYTE *)(((unsigned __int64)&v25->node_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->node_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->node_type);
  }
  node_type = v25->node_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->node_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_nodes) = v17 != 0;
    __asan_report_store4(&this->node_type, p_nodes);
  }
  this->node_type = node_type;
  v18 = ((_BYTE)v25 + 108) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v25->is_need_gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v25->is_need_gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v25->is_need_gadget_id, v18, v19);
  is_need_gadget_id = v25->is_need_gadget_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_need_gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->is_need_gadget_id, v18, v22);
  this->is_need_gadget_id = is_need_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->item_limit_type);
  }
  item_limit_type = v25->item_limit_type;
  v24 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v18) = v24 != 0;
    __asan_report_store4(&this->item_limit_type, v18);
  }
  this->item_limit_type = item_limit_type;
  std::string::basic_string(&this->daily_output_limit_str, &v25->daily_output_limit_str);
  std::string::basic_string(&this->total_output_limit_str, &v25->total_output_limit_str);
  std::string::basic_string(&this->activity_output_limit_str, &v25->activity_output_limit_str);
};

// Line 134: range 00000000142A61E4-00000000142A620E
void __cdecl data::DropExcelConfig::~DropExcelConfig(data::DropExcelConfig *const this)
{
  data::DropExcelConfig::~DropExcelConfig(this);
  operator delete(this, 0xD8uLL);
};

// Line 134: range 00000000142A6152-00000000142A61E3
void __cdecl data::DropExcelConfig::~DropExcelConfig(data::DropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  std::string::~string(&this->activity_output_limit_str);
  std::string::~string(&this->total_output_limit_str);
  std::string::~string(&this->daily_output_limit_str);
  std::vector<data::DropNode>::~vector(&this->nodes);
  data::OutputControlConfig::~OutputControlConfig(this);
};

// Line 156: range 0000000013F6CA50-0000000013F6CC59
data::DropSubfieldExcelConfig *__cdecl data::DropSubfieldExcelConfig::operator=(
        data::DropSubfieldExcelConfig *const this,
        const data::DropSubfieldExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t max_level; // ecx
  char v6; // dl
  uint32_t drop_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v11; // dl
  const data::DropSubfieldExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
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
  v4 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->max_level);
  }
  max_level = v13->max_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->max_level, v4);
  }
  this->max_level = max_level;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->item_limit_type);
  }
  item_limit_type = v13->item_limit_type;
  v11 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->item_limit_type, v9);
  }
  this->item_limit_type = item_limit_type;
  return this;
};

// Line 156: range 0000000013E2B414-0000000013E2B64D
void __cdecl data::DropSubfieldExcelConfig::DropSubfieldExcelConfig(
        data::DropSubfieldExcelConfig *const this,
        const data::DropSubfieldExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_level; // ecx
  char v7; // dl
  uint32_t drop_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v12; // dl
  const data::DropSubfieldExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DropSubfieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DropSubfieldExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->max_level);
  }
  max_level = v13->max_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_level, v5);
  }
  this->max_level = max_level;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->item_limit_type);
  }
  item_limit_type = v13->item_limit_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->item_limit_type, v10);
  }
  this->item_limit_type = item_limit_type;
};

// Line 159: range 00000000142A6126-00000000142A6150
void __cdecl data::DropSubfieldExcelConfig::~DropSubfieldExcelConfig(data::DropSubfieldExcelConfig *const this)
{
  data::DropSubfieldExcelConfig::~DropSubfieldExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 159: range 00000000142A60E4-00000000142A6125
void __cdecl data::DropSubfieldExcelConfig::~DropSubfieldExcelConfig(data::DropSubfieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DropSubfieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DropSubfieldExcelConfig = v2;
};

// Line 173: range 000000001412A468-000000001412A4F7
void __cdecl data::DropSubfieldEntry::DropSubfieldEntry(data::DropSubfieldEntry *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DropSubfieldEntry + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DropSubfieldEntry = v2;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_subfield_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_subfield_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_subfield_id, v1);
  }
  this->drop_subfield_id = 0;
};

// Line 173: range 00000000141C4942-00000000141C4A17
void __cdecl data::DropSubfieldEntry::DropSubfieldEntry(
        data::DropSubfieldEntry *const this,
        const data::DropSubfieldEntry *a2)
{
  int (**v2)(...); // rdx
  std::string *p_name; // rsi
  uint32_t drop_subfield_id; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::DropSubfieldEntry + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DropSubfieldEntry = v2;
  p_name = &a2->name;
  std::string::basic_string(&this->name, &a2->name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_subfield_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_subfield_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->drop_subfield_id);
  }
  drop_subfield_id = a2->drop_subfield_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->drop_subfield_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_name) = v5 != 0;
    __asan_report_store4(&this->drop_subfield_id, p_name);
  }
  this->drop_subfield_id = drop_subfield_id;
};

// Line 176: range 00000000140577C8-0000000014057819
void __cdecl data::DropSubfieldEntry::~DropSubfieldEntry(data::DropSubfieldEntry *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DropSubfieldEntry + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DropSubfieldEntry = v2;
  std::string::~string(&this->name);
};

// Line 176: range 000000001405781A-0000000014057844
void __cdecl data::DropSubfieldEntry::~DropSubfieldEntry(data::DropSubfieldEntry *const this)
{
  data::DropSubfieldEntry::~DropSubfieldEntry(this);
  operator delete(this, 0x30uLL);
};

// Line 186: range 0000000013C057E2-0000000013C0593B
void __cdecl data::EntityDropSubfieldExcelConfig::EntityDropSubfieldExcelConfig(
        data::EntityDropSubfieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EntityDropSubfieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityDropSubfieldExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id, v1);
  }
  this->entity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_type, v3);
  }
  this->entity_type = DATA_ENTITY_NONE;
  std::vector<data::DropSubfieldEntry>::vector(&this->subfield_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_count, v3);
  }
  this->max_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_max_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->daily_max_count, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->daily_max_count = 0;
};

// Line 186: range 0000000013E2BC5E-0000000013E2BEB2
void __cdecl data::EntityDropSubfieldExcelConfig::EntityDropSubfieldExcelConfig(
        data::EntityDropSubfieldExcelConfig *const this,
        const data::EntityDropSubfieldExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t entity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::DataEntityType entity_type; // ecx
  char v7; // dl
  std::vector<data::DropSubfieldEntry> *p_subfield_vec; // rsi
  uint32_t max_count; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t daily_max_count; // ecx
  char v13; // dl
  const data::EntityDropSubfieldExcelConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EntityDropSubfieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityDropSubfieldExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entity_id);
  }
  entity_id = a2->entity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->entity_id, a2);
  }
  this->entity_id = entity_id;
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->entity_type);
  }
  entity_type = v14->entity_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->entity_type, v5);
  }
  this->entity_type = entity_type;
  p_subfield_vec = &v14->subfield_vec;
  std::vector<data::DropSubfieldEntry>::vector(&this->subfield_vec, &v14->subfield_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v14->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->max_count);
  }
  max_count = v14->max_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_subfield_vec) = v10 != 0;
    __asan_report_store4(&this->max_count, p_subfield_vec);
  }
  this->max_count = max_count;
  v11 = (((_BYTE)v14 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->daily_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->daily_max_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->daily_max_count);
  }
  daily_max_count = v14->daily_max_count;
  v13 = *(_BYTE *)(((unsigned __int64)&this->daily_max_count >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->daily_max_count, v11);
  }
  this->daily_max_count = daily_max_count;
};

// Line 189: range 00000000142A6066-00000000142A60B7
void __cdecl data::EntityDropSubfieldExcelConfig::~EntityDropSubfieldExcelConfig(
        data::EntityDropSubfieldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EntityDropSubfieldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityDropSubfieldExcelConfig = v2;
  std::vector<data::DropSubfieldEntry>::~vector(&this->subfield_vec);
};

// Line 189: range 00000000142A60B8-00000000142A60E2
void __cdecl data::EntityDropSubfieldExcelConfig::~EntityDropSubfieldExcelConfig(
        data::EntityDropSubfieldExcelConfig *const this)
{
  data::EntityDropSubfieldExcelConfig::~EntityDropSubfieldExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 204: range 0000000013C0593C-0000000013C05A4F
void __cdecl data::BaseDropIndexConfig::BaseDropIndexConfig(data::BaseDropIndexConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseDropIndexConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDropIndexConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_level, v1);
  }
  this->min_level = 0;
  std::string::basic_string(&this->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_count, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->drop_count = 0;
};

// Line 204: range 0000000013E2C416-0000000013E2C5E5
void __cdecl data::BaseDropIndexConfig::BaseDropIndexConfig(
        data::BaseDropIndexConfig *const this,
        const data::BaseDropIndexConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t min_level; // ecx
  char v4; // al
  std::string *p_drop_tag; // rsi
  uint32_t drop_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t drop_count; // ecx
  char v10; // dl
  const data::BaseDropIndexConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BaseDropIndexConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseDropIndexConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_level);
  }
  min_level = a2->min_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->min_level, a2);
  }
  this->min_level = min_level;
  p_drop_tag = &v11->drop_tag;
  std::string::basic_string(&this->drop_tag, &v11->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&v11->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->drop_id);
  }
  drop_id = v11->drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_drop_tag) = v7 != 0;
    __asan_report_store4(&this->drop_id, p_drop_tag);
  }
  this->drop_id = drop_id;
  v8 = (((_BYTE)v11 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->drop_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->drop_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->drop_count);
  }
  drop_count = v11->drop_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->drop_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->drop_count, v8);
  }
  this->drop_count = drop_count;
};

// Line 207: range 0000000013C05A50-0000000013C05AA1
void __cdecl data::BaseDropIndexConfig::~BaseDropIndexConfig(data::BaseDropIndexConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseDropIndexConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDropIndexConfig = v2;
  std::string::~string(&this->drop_tag);
};

// Line 207: range 0000000013C05AA2-0000000013C05ACC
void __cdecl data::BaseDropIndexConfig::~BaseDropIndexConfig(data::BaseDropIndexConfig *const this)
{
  data::BaseDropIndexConfig::~BaseDropIndexConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 219: range 0000000013C05ACE-0000000013C05B1B
void __cdecl data::MonsterDropExcelConfig::MonsterDropExcelConfig(data::MonsterDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::BaseDropIndexConfig::BaseDropIndexConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::MonsterDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDropIndexConfig = v2;
};

// Line 219: range 0000000013E2C5E6-0000000013E2C63E
void __cdecl data::MonsterDropExcelConfig::MonsterDropExcelConfig(
        data::MonsterDropExcelConfig *const this,
        const data::MonsterDropExcelConfig *a2)
{
  int (**v2)(...); // rdx

  data::BaseDropIndexConfig::BaseDropIndexConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::MonsterDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseDropIndexConfig = v2;
};

// Line 223: range 00000000142A5FEC-00000000142A6039
void __cdecl data::MonsterDropExcelConfig::~MonsterDropExcelConfig(data::MonsterDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDropIndexConfig = v2;
  data::BaseDropIndexConfig::~BaseDropIndexConfig(this);
};

// Line 223: range 00000000142A603A-00000000142A6064
void __cdecl data::MonsterDropExcelConfig::~MonsterDropExcelConfig(data::MonsterDropExcelConfig *const this)
{
  data::MonsterDropExcelConfig::~MonsterDropExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 231: range 0000000013C05B1C-0000000013C05BB7
void __cdecl data::ChestDropExcelConfig::ChestDropExcelConfig(data::ChestDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::BaseDropIndexConfig::BaseDropIndexConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ChestDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDropIndexConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type, v1);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  std::string::basic_string(&this->category);
};

// Line 231: range 0000000013E2CBA2-0000000013E2CCAD
void __cdecl data::ChestDropExcelConfig::ChestDropExcelConfig(
        data::ChestDropExcelConfig *const this,
        const data::ChestDropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ItemLimitType item_limit_type; // ecx
  char v4; // al
  const data::ChestDropExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  data::BaseDropIndexConfig::BaseDropIndexConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ChestDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseDropIndexConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_limit_type);
  }
  item_limit_type = a2->item_limit_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_limit_type, a2);
  }
  this->item_limit_type = item_limit_type;
  std::string::basic_string(&this->category, &v5->category);
};

// Line 235: range 00000000142A5F62-00000000142A5FBF
void __cdecl data::ChestDropExcelConfig::~ChestDropExcelConfig(data::ChestDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChestDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseDropIndexConfig = v2;
  std::string::~string(&this->category);
  data::BaseDropIndexConfig::~BaseDropIndexConfig(this);
};

// Line 235: range 00000000142A5FC0-00000000142A5FEA
void __cdecl data::ChestDropExcelConfig::~ChestDropExcelConfig(data::ChestDropExcelConfig *const this)
{
  data::ChestDropExcelConfig::~ChestDropExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 247: range 0000000013C05BB8-0000000013C05C85
void __cdecl data::TagArrangeLimitConfig::TagArrangeLimitConfig(data::TagArrangeLimitConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TagArrangeLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TagArrangeLimitConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = DROP_LIMIT_DROPTAG;
  std::string::basic_string(&this->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->arrange_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrange_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrange_limit, v1);
  }
  this->arrange_limit = 0;
};

// Line 247: range 0000000013E2D210-0000000013E2D35A
void __cdecl data::TagArrangeLimitConfig::TagArrangeLimitConfig(
        data::TagArrangeLimitConfig *const this,
        const data::TagArrangeLimitConfig *a2)
{
  int (**v2)(...); // rdx
  data::DropLimitType type; // ecx
  char v4; // al
  std::string *p_drop_tag; // rsi
  uint32_t arrange_limit; // ecx
  char v7; // al
  const data::TagArrangeLimitConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TagArrangeLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TagArrangeLimitConfig = v2;
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
  p_drop_tag = &v8->drop_tag;
  std::string::basic_string(&this->drop_tag, &v8->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&v8->arrange_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->arrange_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->arrange_limit);
  }
  arrange_limit = v8->arrange_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->arrange_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_drop_tag) = v7 != 0;
    __asan_report_store4(&this->arrange_limit, p_drop_tag);
  }
  this->arrange_limit = arrange_limit;
};

// Line 250: range 00000000142A5F36-00000000142A5F60
void __cdecl data::TagArrangeLimitConfig::~TagArrangeLimitConfig(data::TagArrangeLimitConfig *const this)
{
  data::TagArrangeLimitConfig::~TagArrangeLimitConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 250: range 00000000142A5EE4-00000000142A5F35
void __cdecl data::TagArrangeLimitConfig::~TagArrangeLimitConfig(data::TagArrangeLimitConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TagArrangeLimitConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TagArrangeLimitConfig = v2;
  std::string::~string(&this->drop_tag);
};
