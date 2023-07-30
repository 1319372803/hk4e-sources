// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CompoundExcelConfig.gen.h

// Line 42: range 0000000013BF4C20-0000000013BF4E45
void __cdecl data::CompoundExcelConfig::CompoundExcelConfig(data::CompoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CompoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CompoundExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = COMPOUND_NONE;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_default_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_default_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_default_unlocked, v4, v5);
  this->is_default_unlocked = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time, v4);
  }
  this->cost_time = 0;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->queue_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->queue_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->queue_size, v6);
  }
  this->queue_size = 0;
  std::vector<data::IdCountConfig>::vector(&this->input_vec);
  std::vector<data::IdCountConfig>::vector(&this->output_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v6);
  }
  this->drop_id = 0;
};

// Line 42: range 00000000141B49D0-00000000141B4DD0
void __cdecl data::CompoundExcelConfig::CompoundExcelConfig(
        data::CompoundExcelConfig *const this,
        const data::CompoundExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  data::CompoundType type; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_default_unlocked; // cl
  char v13; // dl
  __int64 v14; // rdx
  uint32_t cost_time; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t queue_size; // ecx
  char v19; // dl
  std::vector<data::IdCountConfig> *p_output_vec; // rsi
  uint32_t drop_id; // ecx
  char v22; // al
  const data::CompoundExcelConfig *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CompoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CompoundExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->group_id);
  }
  group_id = v23->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->type);
  }
  type = v23->type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  v10 = ((_BYTE)v23 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v23->is_default_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v23->is_default_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v23->is_default_unlocked, v10, v11);
  is_default_unlocked = v23->is_default_unlocked;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_default_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_default_unlocked, v10, v14);
  this->is_default_unlocked = is_default_unlocked;
  if ( *(_BYTE *)(((unsigned __int64)&v23->cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->cost_time);
  }
  cost_time = v23->cost_time;
  v16 = *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->cost_time, v10);
  }
  this->cost_time = cost_time;
  v17 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->queue_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->queue_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->queue_size);
  }
  queue_size = v23->queue_size;
  v19 = *(_BYTE *)(((unsigned __int64)&this->queue_size >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->queue_size, v17);
  }
  this->queue_size = queue_size;
  std::vector<data::IdCountConfig>::vector(&this->input_vec, &v23->input_vec);
  p_output_vec = &v23->output_vec;
  std::vector<data::IdCountConfig>::vector(&this->output_vec, &v23->output_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v23->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->drop_id);
  }
  drop_id = v23->drop_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_output_vec) = v22 != 0;
    __asan_report_store4(&this->drop_id, p_output_vec);
  }
  this->drop_id = drop_id;
};

// Line 45: range 00000000142A5DDC-00000000142A5E3D
void __cdecl data::CompoundExcelConfig::~CompoundExcelConfig(data::CompoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CompoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CompoundExcelConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->output_vec);
  std::vector<data::IdCountConfig>::~vector(&this->input_vec);
};

// Line 45: range 00000000142A5E3E-00000000142A5E68
void __cdecl data::CompoundExcelConfig::~CompoundExcelConfig(data::CompoundExcelConfig *const this)
{
  data::CompoundExcelConfig::~CompoundExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 64: range 00000000141B4F12-00000000141B5051
void __cdecl data::CompoundBoostExcelConfig::CompoundBoostExcelConfig(
        data::CompoundBoostExcelConfig *const this,
        const data::CompoundBoostExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t boost_time; // ecx
  char v7; // dl
  const data::CompoundBoostExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CompoundBoostExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CompoundBoostExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->boost_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->boost_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->boost_time);
  }
  boost_time = v8->boost_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->boost_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->boost_time, v5);
  }
  this->boost_time = boost_time;
};

// Line 67: range 00000000142A5D6E-00000000142A5DAF
void __cdecl data::CompoundBoostExcelConfig::~CompoundBoostExcelConfig(data::CompoundBoostExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CompoundBoostExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CompoundBoostExcelConfig = v2;
};

// Line 67: range 00000000142A5DB0-00000000142A5DDA
void __cdecl data::CompoundBoostExcelConfig::~CompoundBoostExcelConfig(data::CompoundBoostExcelConfig *const this)
{
  data::CompoundBoostExcelConfig::~CompoundBoostExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 79: range 0000000013BF4E46-0000000013BF4ED5
void __cdecl data::RandomCompoundDisplayExcelConfig::RandomCompoundDisplayExcelConfig(
        data::RandomCompoundDisplayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomCompoundDisplayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomCompoundDisplayExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::IdCountConfig>::vector(&this->outputs);
};

// Line 79: range 00000000141B5192-00000000141B5267
void __cdecl data::RandomCompoundDisplayExcelConfig::RandomCompoundDisplayExcelConfig(
        data::RandomCompoundDisplayExcelConfig *const this,
        const data::RandomCompoundDisplayExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::RandomCompoundDisplayExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomCompoundDisplayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomCompoundDisplayExcelConfig = v2;
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
  std::vector<data::IdCountConfig>::vector(&this->outputs, &v5->outputs);
};

// Line 82: range 00000000142A5CF0-00000000142A5D41
void __cdecl data::RandomCompoundDisplayExcelConfig::~RandomCompoundDisplayExcelConfig(
        data::RandomCompoundDisplayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomCompoundDisplayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomCompoundDisplayExcelConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->outputs);
};

// Line 82: range 00000000142A5D42-00000000142A5D6C
void __cdecl data::RandomCompoundDisplayExcelConfig::~RandomCompoundDisplayExcelConfig(
        data::RandomCompoundDisplayExcelConfig *const this)
{
  data::RandomCompoundDisplayExcelConfig::~RandomCompoundDisplayExcelConfig(this);
  operator delete(this, 0x28uLL);
};
