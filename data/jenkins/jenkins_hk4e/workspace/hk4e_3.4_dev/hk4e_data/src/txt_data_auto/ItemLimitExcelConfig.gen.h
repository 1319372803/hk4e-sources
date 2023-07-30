// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ItemLimitExcelConfig.gen.h

// Line 171: range 0000000014766360-000000001476652E
void __cdecl data::ItemLimitExcelConfig::ItemLimitExcelConfig(data::ItemLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_type, v1);
  }
  this->item_type = ITEM_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index_value, v3);
  }
  this->index_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type, v3);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  std::string::basic_string(&this->output_limit_str);
  if ( *(char *)(((unsigned __int64)&this->is_forbid_alert >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_forbid_alert, v3, &this->is_forbid_alert);
  this->is_forbid_alert = 0;
  v4 = ((_BYTE)this + 57) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_forbid_output >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_output >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_forbid_output, v4, v5);
  this->is_forbid_output = 0;
  v6 = ((_BYTE)this + 58) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_allow_unspecified_item_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_allow_unspecified_item_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_allow_unspecified_item_limit, v6, v7);
  this->is_allow_unspecified_item_limit = 0;
};

// Line 171: range 00000000149BADE6-00000000149BB12B
void __cdecl data::ItemLimitExcelConfig::ItemLimitExcelConfig(
        data::ItemLimitExcelConfig *const this,
        const data::ItemLimitExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ItemType item_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t index_value; // ecx
  char v7; // dl
  data::ItemLimitType item_limit_type; // ecx
  char v9; // al
  std::string *p_output_limit_str; // rsi
  bool is_forbid_alert; // cl
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_forbid_output; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool is_allow_unspecified_item_limit; // cl
  char v21; // dl
  __int64 v22; // rdx
  const data::ItemLimitExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ItemLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_type);
  }
  item_type = a2->item_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_type, a2);
  }
  this->item_type = item_type;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->index_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->index_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->index_value);
  }
  index_value = v23->index_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->index_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->index_value, v5);
  }
  this->index_value = index_value;
  if ( *(_BYTE *)(((unsigned __int64)&v23->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->item_limit_type);
  }
  item_limit_type = v23->item_limit_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_limit_type, v5);
  }
  this->item_limit_type = item_limit_type;
  p_output_limit_str = &v23->output_limit_str;
  std::string::basic_string(&this->output_limit_str, &v23->output_limit_str);
  if ( *(char *)(((unsigned __int64)&v23->is_forbid_alert >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_forbid_alert, p_output_limit_str, &v23->is_forbid_alert);
  is_forbid_alert = v23->is_forbid_alert;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_alert >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_output_limit_str) = v12 != 0;
    __asan_report_store1(&this->is_forbid_alert, p_output_limit_str, &this->is_forbid_alert);
  }
  this->is_forbid_alert = is_forbid_alert;
  v13 = ((_BYTE)v23 + 57) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v23->is_forbid_output >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v23->is_forbid_output >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v23->is_forbid_output, v13, v14);
  is_forbid_output = v23->is_forbid_output;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_output >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_forbid_output, v13, v17);
  this->is_forbid_output = is_forbid_output;
  v18 = ((_BYTE)v23 + 58) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v23->is_allow_unspecified_item_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v23->is_allow_unspecified_item_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v23->is_allow_unspecified_item_limit, v18, v19);
  is_allow_unspecified_item_limit = v23->is_allow_unspecified_item_limit;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_allow_unspecified_item_limit >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 58) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->is_allow_unspecified_item_limit, v18, v22);
  this->is_allow_unspecified_item_limit = is_allow_unspecified_item_limit;
};

// Line 174: range 0000000014DEC426-0000000014DEC450
void __cdecl data::ItemLimitExcelConfig::~ItemLimitExcelConfig(data::ItemLimitExcelConfig *const this)
{
  data::ItemLimitExcelConfig::~ItemLimitExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 174: range 0000000014DEC3D4-0000000014DEC425
void __cdecl data::ItemLimitExcelConfig::~ItemLimitExcelConfig(data::ItemLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemLimitExcelConfig = v2;
  std::string::~string(&this->output_limit_str);
};

// Line 191: range 0000000013C05396-0000000013C05407
void __cdecl data::OutputControlConfig::OutputControlConfig(data::OutputControlConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OutputControlConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  data::OptionalLimitConfig::OptionalLimitConfig(&this->daily_output_limit);
  data::OptionalLimitConfig::OptionalLimitConfig(&this->total_output_limit);
  data::OptionalLimitConfig::OptionalLimitConfig(&this->activity_output_limit);
};

// Line 191: range 00000000141C4A9A-00000000141C4B30
void __cdecl data::OutputControlConfig::OutputControlConfig(
        data::OutputControlConfig *const this,
        const data::OutputControlConfig *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OutputControlConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OutputControlConfig = v2;
  data::OptionalLimitConfig::OptionalLimitConfig(&this->daily_output_limit, &a2->daily_output_limit);
  data::OptionalLimitConfig::OptionalLimitConfig(&this->total_output_limit, &a2->total_output_limit);
  data::OptionalLimitConfig::OptionalLimitConfig(&this->activity_output_limit, &a2->activity_output_limit);
};

// Line 194: range 0000000013C05408-0000000013C05479
void __cdecl data::OutputControlConfig::~OutputControlConfig(data::OutputControlConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OutputControlConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  data::OptionalLimitConfig::~OptionalLimitConfig(&this->activity_output_limit);
  data::OptionalLimitConfig::~OptionalLimitConfig(&this->total_output_limit);
  data::OptionalLimitConfig::~OptionalLimitConfig(&this->daily_output_limit);
};

// Line 194: range 0000000013C0547A-0000000013C054A4
void __cdecl data::OutputControlConfig::~OutputControlConfig(data::OutputControlConfig *const this)
{
  data::OutputControlConfig::~OutputControlConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 203: range 0000000014766530-0000000014766758
void __cdecl data::OutputControlLimitExcelConfig::OutputControlLimitExcelConfig(
        data::OutputControlLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi

  data::OutputControlConfig::OutputControlConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::OutputControlLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type, v1);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_control_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->output_control_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->output_control_type, v3);
  }
  this->output_control_type = OUTPUT_CONTROL_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_ignore_item_limit_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_item_limit_type, v3, &this->is_ignore_item_limit_type);
  this->is_ignore_item_limit_type = 0;
  v4 = ((_BYTE)this + 65) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_need_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_need_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_need_oneoff, v4, v5);
  this->is_need_oneoff = 0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_type, v6);
  }
  this->refresh_type = ITEM_LIMIT_REFRESH_NONE;
  std::string::basic_string(&this->daily_limit_str);
  std::string::basic_string(&this->total_limit_str);
  std::string::basic_string(&this->activity_limit_str);
  std::vector<std::string>::vector(&this->allowed_control_types);
  std::vector<unsigned int>::vector(&this->allowed_item_ids);
  if ( *(char *)(((unsigned __int64)&this->is_forbid_alert_on_output_control_daily_limit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_forbid_alert_on_output_control_daily_limit,
      v6,
      &this->is_forbid_alert_on_output_control_daily_limit);
  this->is_forbid_alert_on_output_control_daily_limit = 0;
};

// Line 203: range 0000000014D45948-0000000014D45DA6
void __cdecl data::OutputControlLimitExcelConfig::OutputControlLimitExcelConfig(
        data::OutputControlLimitExcelConfig *const this,
        const data::OutputControlLimitExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ItemLimitType item_limit_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::OutputControlType output_control_type; // ecx
  char v7; // dl
  bool is_ignore_item_limit_type; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_need_oneoff; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  data::ItemLimitRefreshType refresh_type; // ecx
  char v17; // dl
  std::vector<unsigned int> *p_allowed_item_ids; // rsi
  bool is_forbid_alert_on_output_control_daily_limit; // cl
  char v20; // al
  const data::OutputControlLimitExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  data::OutputControlConfig::OutputControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::OutputControlLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OutputControlConfig = v2;
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
  v5 = (((_BYTE)v21 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->output_control_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->output_control_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->output_control_type);
  }
  output_control_type = v21->output_control_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->output_control_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
    __asan_report_store4(&this->output_control_type, v5);
  this->output_control_type = output_control_type;
  if ( *(char *)(((unsigned __int64)&v21->is_ignore_item_limit_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_ignore_item_limit_type, v5, &v21->is_ignore_item_limit_type);
  is_ignore_item_limit_type = v21->is_ignore_item_limit_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_item_limit_type >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_ignore_item_limit_type, v5, &this->is_ignore_item_limit_type);
  }
  this->is_ignore_item_limit_type = is_ignore_item_limit_type;
  v10 = ((_BYTE)v21 + 65) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v21->is_need_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v21->is_need_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v21->is_need_oneoff, v10, v11);
  is_need_oneoff = v21->is_need_oneoff;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_need_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_need_oneoff, v10, v14);
  this->is_need_oneoff = is_need_oneoff;
  v15 = (((_BYTE)v21 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->refresh_type);
  }
  refresh_type = v21->refresh_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->refresh_type, v15);
  }
  this->refresh_type = refresh_type;
  std::string::basic_string(&this->daily_limit_str, &v21->daily_limit_str);
  std::string::basic_string(&this->total_limit_str, &v21->total_limit_str);
  std::string::basic_string(&this->activity_limit_str, &v21->activity_limit_str);
  std::vector<std::string>::vector(&this->allowed_control_types, &v21->allowed_control_types);
  p_allowed_item_ids = &v21->allowed_item_ids;
  std::vector<unsigned int>::vector(&this->allowed_item_ids, &v21->allowed_item_ids);
  if ( *(char *)(((unsigned __int64)&v21->is_forbid_alert_on_output_control_daily_limit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v21->is_forbid_alert_on_output_control_daily_limit,
      p_allowed_item_ids,
      &v21->is_forbid_alert_on_output_control_daily_limit);
  is_forbid_alert_on_output_control_daily_limit = v21->is_forbid_alert_on_output_control_daily_limit;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_alert_on_output_control_daily_limit >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_allowed_item_ids) = v20 != 0;
    __asan_report_store1(
      &this->is_forbid_alert_on_output_control_daily_limit,
      p_allowed_item_ids,
      &this->is_forbid_alert_on_output_control_daily_limit);
  }
  this->is_forbid_alert_on_output_control_daily_limit = is_forbid_alert_on_output_control_daily_limit;
};

// Line 207: range 0000000014DEC304-0000000014DEC3A7
void __cdecl data::OutputControlLimitExcelConfig::~OutputControlLimitExcelConfig(
        data::OutputControlLimitExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OutputControlLimitExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OutputControlConfig = v2;
  std::vector<unsigned int>::~vector(&this->allowed_item_ids);
  std::vector<std::string>::~vector(&this->allowed_control_types);
  std::string::~string(&this->activity_limit_str);
  std::string::~string(&this->total_limit_str);
  std::string::~string(&this->daily_limit_str);
  data::OutputControlConfig::~OutputControlConfig(this);
};

// Line 207: range 0000000014DEC3A8-0000000014DEC3D2
void __cdecl data::OutputControlLimitExcelConfig::~OutputControlLimitExcelConfig(
        data::OutputControlLimitExcelConfig *const this)
{
  data::OutputControlLimitExcelConfig::~OutputControlLimitExcelConfig(this);
  operator delete(this, 0xE0uLL);
};

// Line 228: range 000000001476675A-00000000147667E9
void __cdecl data::ItemLimitConstValueExcelConfig::ItemLimitConstValueExcelConfig(
        data::ItemLimitConstValueExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemLimitConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemLimitConstValueExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->name, v1);
  }
  this->name = 0;
  std::string::basic_string(&this->value);
};

// Line 228: range 0000000014D45EE8-0000000014D45FBD
void __cdecl data::ItemLimitConstValueExcelConfig::ItemLimitConstValueExcelConfig(
        data::ItemLimitConstValueExcelConfig *const this,
        const data::ItemLimitConstValueExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ItemLimitConstValueType name; // ecx
  char v4; // al
  const data::ItemLimitConstValueExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ItemLimitConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemLimitConstValueExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->name >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->name >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->name);
  }
  name = a2->name;
  v4 = *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->name, a2);
  }
  this->name = name;
  std::string::basic_string(&this->value, &v5->value);
};

// Line 231: range 0000000014DEC286-0000000014DEC2D7
void __cdecl data::ItemLimitConstValueExcelConfig::~ItemLimitConstValueExcelConfig(
        data::ItemLimitConstValueExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemLimitConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemLimitConstValueExcelConfig = v2;
  std::string::~string(&this->value);
};

// Line 231: range 0000000014DEC2D8-0000000014DEC302
void __cdecl data::ItemLimitConstValueExcelConfig::~ItemLimitConstValueExcelConfig(
        data::ItemLimitConstValueExcelConfig *const this)
{
  data::ItemLimitConstValueExcelConfig::~ItemLimitConstValueExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 243: range 00000000147667EA-00000000147668C4
void __cdecl data::ItemLimitWhiteListExcelConfig::ItemLimitWhiteListExcelConfig(
        data::ItemLimitWhiteListExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemLimitWhiteListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemLimitWhiteListExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->white_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->white_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->white_type, v1);
  }
  this->white_type = ITEM_LIMIT_WHITE_NONE;
  std::string::basic_string(&this->sub_type_str);
  std::vector<unsigned int>::vector(&this->param_list);
  if ( *(char *)(((unsigned __int64)&this->is_extra_white_list >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_extra_white_list, v1, &this->is_extra_white_list);
  this->is_extra_white_list = 0;
};

// Line 243: range 00000000149BBD0A-00000000149BBE97
void __cdecl data::ItemLimitWhiteListExcelConfig::ItemLimitWhiteListExcelConfig(
        data::ItemLimitWhiteListExcelConfig *const this,
        const data::ItemLimitWhiteListExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ItemLimitWhiteType white_type; // ecx
  char v4; // al
  std::vector<unsigned int> *p_param_list; // rsi
  bool is_extra_white_list; // cl
  char v7; // al
  const data::ItemLimitWhiteListExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ItemLimitWhiteListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemLimitWhiteListExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->white_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->white_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->white_type);
  }
  white_type = a2->white_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->white_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->white_type, a2);
  }
  this->white_type = white_type;
  std::string::basic_string(&this->sub_type_str, &v8->sub_type_str);
  p_param_list = &v8->param_list;
  std::vector<unsigned int>::vector(&this->param_list, &v8->param_list);
  if ( *(char *)(((unsigned __int64)&v8->is_extra_white_list >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_extra_white_list, p_param_list, &v8->is_extra_white_list);
  is_extra_white_list = v8->is_extra_white_list;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_extra_white_list >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_param_list) = v7 != 0;
    __asan_report_store1(&this->is_extra_white_list, p_param_list, &this->is_extra_white_list);
  }
  this->is_extra_white_list = is_extra_white_list;
};

// Line 246: range 0000000014DEC1F8-0000000014DEC259
void __cdecl data::ItemLimitWhiteListExcelConfig::~ItemLimitWhiteListExcelConfig(
        data::ItemLimitWhiteListExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ItemLimitWhiteListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemLimitWhiteListExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->param_list);
  std::string::~string(&this->sub_type_str);
};

// Line 246: range 0000000014DEC25A-0000000014DEC284
void __cdecl data::ItemLimitWhiteListExcelConfig::~ItemLimitWhiteListExcelConfig(
        data::ItemLimitWhiteListExcelConfig *const this)
{
  data::ItemLimitWhiteListExcelConfig::~ItemLimitWhiteListExcelConfig(this);
  operator delete(this, 0x50uLL);
};
