// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySpiceExcelConfig.gen.h

// Line 17: range 0000000013BD60C2-0000000013BD6259
void __cdecl data::ActivitySpiceExcelConfig::ActivitySpiceExcelConfig(data::ActivitySpiceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySpiceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v3);
  }
  this->schedule_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->spice_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spice_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->spice_id, v4);
  }
  this->spice_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->fetter_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fetter_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fetter_value, v4);
  }
  this->fetter_value = 0;
};

// Line 17: range 000000001418AED6-000000001418B19F
void __cdecl data::ActivitySpiceExcelConfig::ActivitySpiceExcelConfig(
        data::ActivitySpiceExcelConfig *const this,
        const data::ActivitySpiceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t schedule_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t spice_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t fetter_value; // ecx
  char v15; // al
  const data::ActivitySpiceExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySpiceExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v16->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->activity_id);
  }
  activity_id = v16->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->schedule_id);
  }
  schedule_id = v16->schedule_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->spice_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->spice_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->spice_id);
  }
  spice_id = v16->spice_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->spice_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->spice_id, v10);
  }
  this->spice_id = spice_id;
  p_watcher_id_list = &v16->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v16->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->fetter_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->fetter_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->fetter_value);
  }
  fetter_value = v16->fetter_value;
  v15 = *(_BYTE *)(((unsigned __int64)&this->fetter_value >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v15 != 0;
    __asan_report_store4(&this->fetter_value, p_watcher_id_list);
  }
  this->fetter_value = fetter_value;
};

// Line 20: range 00000000142A2EE4-00000000142A2F0E
void __cdecl data::ActivitySpiceExcelConfig::~ActivitySpiceExcelConfig(data::ActivitySpiceExcelConfig *const this)
{
  data::ActivitySpiceExcelConfig::~ActivitySpiceExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 20: range 00000000142A2E92-00000000142A2EE3
void __cdecl data::ActivitySpiceExcelConfig::~ActivitySpiceExcelConfig(data::ActivitySpiceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySpiceExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 36: range 0000000013BD625A-0000000013BD638D
void __cdecl data::ActivitySpiceStageDataExcelConfig::ActivitySpiceStageDataExcelConfig(
        data::ActivitySpiceStageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySpiceStageDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day_index, v3);
  }
  this->open_day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fetter_inc_cnt_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fetter_inc_cnt_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fetter_inc_cnt_limit, v3);
  }
  this->fetter_inc_cnt_limit = 0;
  std::vector<unsigned int>::vector(&this->material_id_list);
  std::vector<unsigned int>::vector(&this->material_num_list);
  std::vector<unsigned int>::vector(&this->material_order_list);
};

// Line 36: range 000000001418B2E0-000000001418B521
void __cdecl data::ActivitySpiceStageDataExcelConfig::ActivitySpiceStageDataExcelConfig(
        data::ActivitySpiceStageDataExcelConfig *const this,
        const data::ActivitySpiceStageDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day_index; // ecx
  char v7; // dl
  uint32_t fetter_inc_cnt_limit; // ecx
  char v9; // al
  const data::ActivitySpiceStageDataExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySpiceStageDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->open_day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->open_day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->open_day_index);
  }
  open_day_index = v10->open_day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day_index, v5);
  }
  this->open_day_index = open_day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v10->fetter_inc_cnt_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->fetter_inc_cnt_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->fetter_inc_cnt_limit);
  }
  fetter_inc_cnt_limit = v10->fetter_inc_cnt_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->fetter_inc_cnt_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->fetter_inc_cnt_limit, v5);
  }
  this->fetter_inc_cnt_limit = fetter_inc_cnt_limit;
  std::vector<unsigned int>::vector(&this->material_id_list, &v10->material_id_list);
  std::vector<unsigned int>::vector(&this->material_num_list, &v10->material_num_list);
  std::vector<unsigned int>::vector(&this->material_order_list, &v10->material_order_list);
};

// Line 39: range 00000000142A2E66-00000000142A2E90
void __cdecl data::ActivitySpiceStageDataExcelConfig::~ActivitySpiceStageDataExcelConfig(
        data::ActivitySpiceStageDataExcelConfig *const this)
{
  data::ActivitySpiceStageDataExcelConfig::~ActivitySpiceStageDataExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 39: range 00000000142A2DF4-00000000142A2E65
void __cdecl data::ActivitySpiceStageDataExcelConfig::~ActivitySpiceStageDataExcelConfig(
        data::ActivitySpiceStageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySpiceStageDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->material_order_list);
  std::vector<unsigned int>::~vector(&this->material_num_list);
  std::vector<unsigned int>::~vector(&this->material_id_list);
};

// Line 55: range 000000001418B662-000000001418B7A1
void __cdecl data::ActivitySpiceFoodExcelConfig::ActivitySpiceFoodExcelConfig(
        data::ActivitySpiceFoodExcelConfig *const this,
        const data::ActivitySpiceFoodExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t normal_food_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t special_food_id; // ecx
  char v7; // dl
  const data::ActivitySpiceFoodExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceFoodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySpiceFoodExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->normal_food_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->normal_food_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->normal_food_id);
  }
  normal_food_id = a2->normal_food_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->normal_food_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->normal_food_id, a2);
  }
  this->normal_food_id = normal_food_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->special_food_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->special_food_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->special_food_id);
  }
  special_food_id = v8->special_food_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->special_food_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->special_food_id, v5);
  }
  this->special_food_id = special_food_id;
};

// Line 58: range 00000000142A2DC8-00000000142A2DF2
void __cdecl data::ActivitySpiceFoodExcelConfig::~ActivitySpiceFoodExcelConfig(
        data::ActivitySpiceFoodExcelConfig *const this)
{
  data::ActivitySpiceFoodExcelConfig::~ActivitySpiceFoodExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 58: range 00000000142A2D86-00000000142A2DC7
void __cdecl data::ActivitySpiceFoodExcelConfig::~ActivitySpiceFoodExcelConfig(
        data::ActivitySpiceFoodExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceFoodExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySpiceFoodExcelConfig = v2;
};

// Line 70: range 000000001418B8E2-000000001418BA21
void __cdecl data::ActivitySpiceGivingExcelConfig::ActivitySpiceGivingExcelConfig(
        data::ActivitySpiceGivingExcelConfig *const this,
        const data::ActivitySpiceGivingExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t giving_data_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t character_id; // ecx
  char v7; // dl
  const data::ActivitySpiceGivingExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceGivingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySpiceGivingExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->giving_data_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->giving_data_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->giving_data_id);
  }
  giving_data_id = a2->giving_data_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->giving_data_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->giving_data_id, a2);
  }
  this->giving_data_id = giving_data_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->character_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->character_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->character_id);
  }
  character_id = v8->character_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->character_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->character_id, v5);
  }
  this->character_id = character_id;
};

// Line 73: range 00000000142A2D5A-00000000142A2D84
void __cdecl data::ActivitySpiceGivingExcelConfig::~ActivitySpiceGivingExcelConfig(
        data::ActivitySpiceGivingExcelConfig *const this)
{
  data::ActivitySpiceGivingExcelConfig::~ActivitySpiceGivingExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 73: range 00000000142A2D18-00000000142A2D59
void __cdecl data::ActivitySpiceGivingExcelConfig::~ActivitySpiceGivingExcelConfig(
        data::ActivitySpiceGivingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySpiceGivingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySpiceGivingExcelConfig = v2;
};
