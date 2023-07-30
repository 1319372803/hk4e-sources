// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigAIData.h

// Line 33: range 0000000012184BBE-0000000012184C90
void __cdecl data::ConfigAISituationData::ConfigAISituationData(data::ConfigAISituationData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type_id = Free_1;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_tree >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_tree >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_tree, v2, v3);
  this->is_tree = 0;
  std::string::basic_string(&this->config);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 33: range 0000000012749370-00000000127494FE
void __cdecl data::ConfigAISituationData::ConfigAISituationData(
        data::ConfigAISituationData *const this,
        const data::ConfigAISituationData *a2)
{
  data::AISituationType type_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_tree; // cl
  char v7; // dl
  __int64 v8; // rdx
  std::string *p_config; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigAISituationData *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type_id = a2->type_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type_id = type_id;
  v4 = ((_BYTE)v12 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->is_tree >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->is_tree >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->is_tree, v4, v5);
  is_tree = v12->is_tree;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_tree >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_tree, v4, v8);
  this->is_tree = is_tree;
  p_config = &v12->config;
  std::string::basic_string(&this->config, &v12->config);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_config, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_config) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_config, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 33: range 000000001239845E-00000000123985EC
void __cdecl data::ConfigAISituationData::ConfigAISituationData(
        data::ConfigAISituationData *const this,
        data::ConfigAISituationData *a2)
{
  data::AISituationType type_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_tree; // cl
  char v7; // dl
  __int64 v8; // rdx
  std::string *p_config; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  data::ConfigAISituationData *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type_id = a2->type_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type_id = type_id;
  v4 = ((_BYTE)v12 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->is_tree >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->is_tree >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->is_tree, v4, v5);
  is_tree = v12->is_tree;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_tree >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_tree, v4, v8);
  this->is_tree = is_tree;
  p_config = &v12->config;
  std::string::basic_string(&this->config, &v12->config);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_config, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_config) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_config, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 33: range 0000000012184C92-0000000012184CB0
void __cdecl data::ConfigAISituationData::~ConfigAISituationData(data::ConfigAISituationData *const this)
{
  std::string::~string(&this->config);
};

// Line 50: range 000000001218537E-0000000012185577
void __cdecl data::ConfigAIView::ConfigAIView(data::ConfigAIView *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->outer_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inner_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->inner_range, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->inner_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->touch_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->touch_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->touch_range, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->touch_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->feel_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->feel_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->feel_range, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->feel_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->half_radain >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->half_radain >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->half_radain, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->half_radain = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->height = 0.0;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 65: range 0000000012185578-0000000012185651
void __cdecl data::ConfigAICenter::ConfigAICenter(data::ConfigAICenter *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->center_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->outer_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->outer_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->outer_range, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->outer_range = 0.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 76: range 0000000012184CB2-0000000012184D8D
void __cdecl data::ConfigAIFightingStyle::ConfigAIFightingStyle(data::ConfigAIFightingStyle *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->equip_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->equip_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->equip_type, v1);
  }
  this->equip_type = None_6;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->parameter_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parameter_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parameter_value, v2);
  }
  this->parameter_value = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 76: range 0000000012668440-00000000126685D8
void __cdecl data::ConfigAIFightingStyle::ConfigAIFightingStyle(
        data::ConfigAIFightingStyle *const this,
        const data::ConfigAIFightingStyle *a2)
{
  data::EquipEntityType equip_type; // ecx
  char v3; // al
  float parameter_value; // xmm0_4
  __int64 v5; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  const data::ConfigAIFightingStyle *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v8->equip_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->equip_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->equip_type);
  }
  equip_type = a2->equip_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->equip_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->equip_type, a2);
  }
  this->equip_type = equip_type;
  if ( *(_BYTE *)(((unsigned __int64)&v8->parameter_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->parameter_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->parameter_value);
  }
  parameter_value = v8->parameter_value;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->parameter_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parameter_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parameter_value, v5);
  }
  this->parameter_value = parameter_value;
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, v5, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 76: range 0000000012184D8E-0000000012184DA8
void __cdecl data::ConfigAIFightingStyle::~ConfigAIFightingStyle(data::ConfigAIFightingStyle *const this)
{
  std::string::~string(this);
};

// Line 93: range 00000000121856C2-0000000012185717
void __cdecl data::ConfigAIFightingStyles::ConfigAIFightingStyles(data::ConfigAIFightingStyles *const this)
{
  __int64 v1; // rsi

  std::map<std::string,data::ConfigAIFightingStyle>::map(&this->fighting_style_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 93: range 0000000012668EA6-0000000012668F41
void __cdecl data::ConfigAIFightingStyles::ConfigAIFightingStyles(
        data::ConfigAIFightingStyles *const this,
        const data::ConfigAIFightingStyles *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::map<std::string,data::ConfigAIFightingStyle>::map(&this->fighting_style_map, &a2->fighting_style_map);
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

// Line 93: range 0000000012185718-0000000012185732
void __cdecl data::ConfigAIFightingStyles::~ConfigAIFightingStyles(data::ConfigAIFightingStyles *const this)
{
  std::map<std::string,data::ConfigAIFightingStyle>::~map(&this->fighting_style_map);
};

// Line 103: range 00000000126CDD5E-00000000126CDF82
void __cdecl data::ConfigAICareAbout::ConfigAICareAbout(data::ConfigAICareAbout *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  std::enable_shared_from_this<data::ConfigAICareAbout>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAICareAbout>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAbout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICareAbout = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_view_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inner_view_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inner_view_threat_grow, v1);
  }
  this->inner_view_threat_grow = 0.0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->outer_view_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->outer_view_threat_grow >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->outer_view_threat_grow, v3);
  }
  this->outer_view_threat_grow = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->touch_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->touch_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->touch_threat_grow, v3);
  }
  this->touch_threat_grow = 0.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->feel_threat_grow, v4);
  }
  this->feel_threat_grow = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->threat_down_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->threat_down_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->threat_down_speed, v4);
  }
  this->threat_down_speed = 0.0;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->relegation_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relegation_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->relegation_speed, v5);
  }
  this->relegation_speed = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 103: range 00000000126CE0B4-00000000126CE48A
void __cdecl data::ConfigAICareAbout::ConfigAICareAbout(
        data::ConfigAICareAbout *const this,
        const data::ConfigAICareAbout *a2)
{
  std::enable_shared_from_this<data::ConfigAICareAbout> *v2; // rsi
  int (**v3)(...); // rdx
  float inner_view_threat_grow; // xmm0_4
  float outer_view_threat_grow; // xmm0_4
  __int64 v6; // rsi
  float touch_threat_grow; // xmm0_4
  float feel_threat_grow; // xmm0_4
  __int64 v9; // rsi
  float threat_down_speed; // xmm0_4
  float relegation_speed; // xmm0_4
  __int64 v12; // rsi
  bool is_json_loaded; // cl
  char v14; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigAICareAbout>;
  std::enable_shared_from_this<data::ConfigAICareAbout>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAICareAbout>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAICareAbout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAICareAbout = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inner_view_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inner_view_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inner_view_threat_grow);
  }
  inner_view_threat_grow = a2->inner_view_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_view_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inner_view_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inner_view_threat_grow, v2);
  }
  this->inner_view_threat_grow = inner_view_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&a2->outer_view_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->outer_view_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->outer_view_threat_grow);
  }
  outer_view_threat_grow = a2->outer_view_threat_grow;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->outer_view_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->outer_view_threat_grow >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->outer_view_threat_grow, v6);
  }
  this->outer_view_threat_grow = outer_view_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&a2->touch_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->touch_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->touch_threat_grow);
  }
  touch_threat_grow = a2->touch_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&this->touch_threat_grow >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->touch_threat_grow >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->touch_threat_grow, v6);
  }
  this->touch_threat_grow = touch_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&a2->feel_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->feel_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->feel_threat_grow);
  }
  feel_threat_grow = a2->feel_threat_grow;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->feel_threat_grow >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->feel_threat_grow, v9);
  }
  this->feel_threat_grow = feel_threat_grow;
  if ( *(_BYTE *)(((unsigned __int64)&a2->threat_down_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->threat_down_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->threat_down_speed);
  }
  threat_down_speed = a2->threat_down_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->threat_down_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->threat_down_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->threat_down_speed, v9);
  }
  this->threat_down_speed = threat_down_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->relegation_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->relegation_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->relegation_speed);
  }
  relegation_speed = a2->relegation_speed;
  v12 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->relegation_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relegation_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->relegation_speed, v12);
  }
  this->relegation_speed = relegation_speed;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v12, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, v12, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 114: range 00000000126CE61E-00000000126CE648
void __cdecl data::ConfigAICareAbout::~ConfigAICareAbout(data::ConfigAICareAbout *const this)
{
  data::ConfigAICareAbout::~ConfigAICareAbout(this);
  operator delete(this, 0x38uLL);
};

// Line 114: range 00000000126CE5CC-00000000126CE61D
void __cdecl data::ConfigAICareAbout::~ConfigAICareAbout(data::ConfigAICareAbout *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAbout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICareAbout = v2;
  std::enable_shared_from_this<data::ConfigAICareAbout>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAICareAbout>);
};

// Line 125: range 00000000126CE64A-00000000126CE6DD
void __cdecl data::ConfigAICareAboutCamp::ConfigAICareAboutCamp(data::ConfigAICareAboutCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAICareAbout::ConfigAICareAbout((data::ConfigAICareAbout *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAboutCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICareAbout = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_type, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->target_type = None_22;
};

// Line 125: range 00000000126CE7B6-00000000126CE893
void __cdecl data::ConfigAICareAboutCamp::ConfigAICareAboutCamp(
        data::ConfigAICareAboutCamp *const this,
        const data::ConfigAICareAboutCamp *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::TargetType target_type; // ecx
  char v5; // dl

  data::ConfigAICareAbout::ConfigAICareAbout((data::ConfigAICareAbout *const)this, (const data::ConfigAICareAbout *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAboutCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAICareAbout = v2;
  v3 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = target_type;
};

// Line 129: range 000000001274BE9A-000000001274BEE7
void __cdecl data::ConfigAICareAboutCamp::~ConfigAICareAboutCamp(data::ConfigAICareAboutCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAboutCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICareAbout = v2;
  data::ConfigAICareAbout::~ConfigAICareAbout((data::ConfigAICareAbout *const)this);
};

// Line 129: range 000000001274BEE8-000000001274BF12
void __cdecl data::ConfigAICareAboutCamp::~ConfigAICareAboutCamp(data::ConfigAICareAboutCamp *const this)
{
  data::ConfigAICareAboutCamp::~ConfigAICareAboutCamp(this);
  operator delete(this, 0x38uLL);
};

// Line 140: range 00000000126CE984-00000000126CE9F1
void __cdecl data::ConfigAICareAboutTags::ConfigAICareAboutTags(data::ConfigAICareAboutTags *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAICareAbout::ConfigAICareAbout(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAboutTags + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICareAbout = v2;
  std::vector<std::string>::vector(&this->tags);
  std::vector<std::string>::vector(&this->no_tags);
};

// Line 140: range 00000000126CEAAA-00000000126CEB70
void __cdecl data::ConfigAICareAboutTags::ConfigAICareAboutTags(
        data::ConfigAICareAboutTags *const this,
        const data::ConfigAICareAboutTags *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAICareAbout::ConfigAICareAbout(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAboutTags + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAICareAbout = v2;
  std::vector<std::string>::vector(&this->tags, &a2->tags);
  std::vector<std::string>::vector(&this->no_tags, &a2->no_tags);
};

// Line 145: range 000000001274BE00-000000001274BE6D
void __cdecl data::ConfigAICareAboutTags::~ConfigAICareAboutTags(data::ConfigAICareAboutTags *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAICareAboutTags + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAICareAbout = v2;
  std::vector<std::string>::~vector(&this->no_tags);
  std::vector<std::string>::~vector(&this->tags);
  data::ConfigAICareAbout::~ConfigAICareAbout(this);
};

// Line 145: range 000000001274BE6E-000000001274BE98
void __cdecl data::ConfigAICareAboutTags::~ConfigAICareAboutTags(data::ConfigAICareAboutTags *const this)
{
  data::ConfigAICareAboutTags::~ConfigAICareAboutTags(this);
  operator delete(this, 0x68uLL);
};

// Line 161: range 0000000012185788-0000000012185971
void __cdecl data::ConfigAIData::ConfigAIData(data::ConfigAIData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAIData::ConfigAIData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->agent_name,
    "Undead01",
    (const std::allocator<char> *)(v1 + 32));
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_situation_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_situation_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_situation_type, "Undead01");
  }
  this->first_situation_type = Free_1;
  std::vector<data::ConfigAISituationData>::vector(&this->situation_list);
  data::ConfigAIView::ConfigAIView(&this->view);
  data::ConfigAICenter::ConfigAICenter(&this->center);
  data::ConfigAIFightingStyles::ConfigAIFightingStyles(&this->fighting_style);
  std::map<std::string,std::shared_ptr<data::ConfigAICareAbout>>::map(&this->care_abouts);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, "Undead01", &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 0000000012668F68-000000001266930F
void __cdecl data::ConfigAIData::ConfigAIData(data::ConfigAIData *const this, const data::ConfigAIData *a2)
{
  data::AISituationType first_situation_type; // ecx
  char v3; // al
  __int64 v4; // rbx
  data::ConfigAICareAboutListMap *p_care_abouts; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  const data::ConfigAIData *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v8->first_situation_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->first_situation_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->first_situation_type);
  }
  first_situation_type = a2->first_situation_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->first_situation_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->first_situation_type, a2);
  }
  this->first_situation_type = first_situation_type;
  std::vector<data::ConfigAISituationData>::vector(&this->situation_list, &v8->situation_list);
  if ( *(char *)(((unsigned __int64)&this->view >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->view.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->view.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->view, 28LL);
  }
  if ( *(char *)(((unsigned __int64)&v8->view >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v8->view.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v8 + 91) & 7) >= *(_BYTE *)(((unsigned __int64)(&v8->view.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v8->view, 28LL);
  }
  v4 = *(_QWORD *)&v8->view.touch_range;
  *(_QWORD *)&this->view.outer_range = *(_QWORD *)&v8->view.outer_range;
  *(_QWORD *)&this->view.touch_range = v4;
  *(_QWORD *)&this->view.half_radain = *(_QWORD *)&v8->view.half_radain;
  *(_DWORD *)&this->view.is_json_loaded = *(_DWORD *)&v8->view.is_json_loaded;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->center.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->center, 12LL);
  }
  if ( (((unsigned __int8)v8 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v8->center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v8->center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v8 + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&v8->center.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v8->center, 12LL);
  }
  this->center = v8->center;
  data::ConfigAIFightingStyles::ConfigAIFightingStyles(&this->fighting_style, &v8->fighting_style);
  p_care_abouts = &v8->care_abouts;
  std::map<std::string,std::shared_ptr<data::ConfigAICareAbout>>::map(&this->care_abouts, &v8->care_abouts);
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, p_care_abouts, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_care_abouts) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_care_abouts, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 161: range 0000000012185972-00000000121859BE
void __cdecl data::ConfigAIData::~ConfigAIData(data::ConfigAIData *const this)
{
  std::map<std::string,std::shared_ptr<data::ConfigAICareAbout>>::~map(&this->care_abouts);
  data::ConfigAIFightingStyles::~ConfigAIFightingStyles(&this->fighting_style);
  std::vector<data::ConfigAISituationData>::~vector(&this->situation_list);
  std::string::~string(this);
};
