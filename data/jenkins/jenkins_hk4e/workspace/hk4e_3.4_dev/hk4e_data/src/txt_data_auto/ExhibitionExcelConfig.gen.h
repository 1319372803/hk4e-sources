// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ExhibitionExcelConfig.gen.h

// Line 264: range 0000000014C724D2-0000000014C72561
void __cdecl data::ExhibitionDisplayCondParam::ExhibitionDisplayCondParam(data::ExhibitionDisplayCondParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionDisplayCondParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionDisplayCondParam = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_type, v1);
  }
  this->param_type = EXHIBITION_DISPLAY_COND_PARAM_NONE;
  std::string::basic_string(&this->param);
};

// Line 264: range 0000000014D15140-0000000014D15215
void __cdecl data::ExhibitionDisplayCondParam::ExhibitionDisplayCondParam(
        data::ExhibitionDisplayCondParam *const this,
        const data::ExhibitionDisplayCondParam *a2)
{
  int (**v2)(...); // rdx
  data::ExhibitionDisplayCondParamType param_type; // ecx
  char v4; // al
  const data::ExhibitionDisplayCondParam *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionDisplayCondParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionDisplayCondParam = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param_type);
  }
  param_type = a2->param_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->param_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->param_type, a2);
  }
  this->param_type = param_type;
  std::string::basic_string(&this->param, &v5->param);
};

// Line 267: range 0000000014B9A246-0000000014B9A270
void __cdecl data::ExhibitionDisplayCondParam::~ExhibitionDisplayCondParam(
        data::ExhibitionDisplayCondParam *const this)
{
  data::ExhibitionDisplayCondParam::~ExhibitionDisplayCondParam(this);
  operator delete(this, 0x30uLL);
};

// Line 267: range 0000000014B9A1F4-0000000014B9A245
void __cdecl data::ExhibitionDisplayCondParam::~ExhibitionDisplayCondParam(
        data::ExhibitionDisplayCondParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionDisplayCondParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionDisplayCondParam = v2;
  std::string::~string(&this->param);
};

// Line 277: range 0000000014740642-0000000014740834
void __cdecl data::PlayerExhibitionExcelConfig::PlayerExhibitionExcelConfig(
        data::PlayerExhibitionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::PlayerExhibitionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerExhibitionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->series_id, v3);
  }
  this->series_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->key_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->key_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->key_type, v3);
  }
  this->key_type = EXHIBITION_KEY_NONE;
  std::string::basic_string(&this->trigger_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->replaceable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replaceable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replaceable_value, v3);
  }
  this->replaceable_value = 0;
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->accumulable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accumulable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->accumulable_value, v4);
  }
  this->accumulable_value = 0;
  if ( *(char *)(((unsigned __int64)&this->is_abandoned >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_abandoned, v4, &this->is_abandoned);
  this->is_abandoned = 0;
  std::vector<std::string>::vector(&this->trigger_param);
  std::vector<std::string>::vector(&this->trigger_param_list);
};

// Line 277: range 0000000014D15298-0000000014D15649
void __cdecl data::PlayerExhibitionExcelConfig::PlayerExhibitionExcelConfig(
        data::PlayerExhibitionExcelConfig *const this,
        const data::PlayerExhibitionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t series_id; // ecx
  char v7; // dl
  data::ExhibitionKeyType key_type; // ecx
  char v9; // al
  std::string *p_trigger_type; // rsi
  uint32_t replaceable_value; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t accumulable_value; // ecx
  char v15; // dl
  bool is_abandoned; // cl
  char v17; // al
  const data::PlayerExhibitionExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PlayerExhibitionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerExhibitionExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->series_id);
  }
  series_id = v18->series_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->series_id, v5);
  }
  this->series_id = series_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->key_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->key_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->key_type);
  }
  key_type = v18->key_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->key_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->key_type, v5);
  }
  this->key_type = key_type;
  p_trigger_type = &v18->trigger_type;
  std::string::basic_string(&this->trigger_type, &v18->trigger_type);
  if ( *(_BYTE *)(((unsigned __int64)&v18->replaceable_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->replaceable_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->replaceable_value);
  }
  replaceable_value = v18->replaceable_value;
  v12 = *(_BYTE *)(((unsigned __int64)&this->replaceable_value >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_trigger_type) = v12 != 0;
    __asan_report_store4(&this->replaceable_value, p_trigger_type);
  }
  this->replaceable_value = replaceable_value;
  v13 = (((_BYTE)v18 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->accumulable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->accumulable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->accumulable_value);
  }
  accumulable_value = v18->accumulable_value;
  v15 = *(_BYTE *)(((unsigned __int64)&this->accumulable_value >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v15 )
    __asan_report_store4(&this->accumulable_value, v13);
  this->accumulable_value = accumulable_value;
  if ( *(char *)(((unsigned __int64)&v18->is_abandoned >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_abandoned, v13, &v18->is_abandoned);
  is_abandoned = v18->is_abandoned;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_abandoned >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store1(&this->is_abandoned, v13, &this->is_abandoned);
  }
  this->is_abandoned = is_abandoned;
  std::vector<std::string>::vector(&this->trigger_param, &v18->trigger_param);
  std::vector<std::string>::vector(&this->trigger_param_list, &v18->trigger_param_list);
};

// Line 280: range 0000000014DE837C-0000000014DE83ED
void __cdecl data::PlayerExhibitionExcelConfig::~PlayerExhibitionExcelConfig(
        data::PlayerExhibitionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PlayerExhibitionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerExhibitionExcelConfig = v2;
  std::vector<std::string>::~vector(&this->trigger_param_list);
  std::vector<std::string>::~vector(&this->trigger_param);
  std::string::~string(&this->trigger_type);
};

// Line 280: range 0000000014DE83EE-0000000014DE8418
void __cdecl data::PlayerExhibitionExcelConfig::~PlayerExhibitionExcelConfig(
        data::PlayerExhibitionExcelConfig *const this)
{
  data::PlayerExhibitionExcelConfig::~PlayerExhibitionExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 299: range 0000000014740836-00000000147408F5
void __cdecl data::ExhibitionLuaKeyExcelConfig::ExhibitionLuaKeyExcelConfig(
        data::ExhibitionLuaKeyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionLuaKeyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionLuaKeyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->trigger_type);
  std::vector<unsigned int>::vector(&this->scene_list);
  std::vector<unsigned int>::vector(&this->group_list);
  std::vector<unsigned int>::vector(&this->group_tag_list);
};

// Line 299: range 0000000014D1578A-0000000014D15901
void __cdecl data::ExhibitionLuaKeyExcelConfig::ExhibitionLuaKeyExcelConfig(
        data::ExhibitionLuaKeyExcelConfig *const this,
        const data::ExhibitionLuaKeyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ExhibitionLuaKeyExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionLuaKeyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionLuaKeyExcelConfig = v2;
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
  std::string::basic_string(&this->trigger_type, &v5->trigger_type);
  std::vector<unsigned int>::vector(&this->scene_list, &v5->scene_list);
  std::vector<unsigned int>::vector(&this->group_list, &v5->group_list);
  std::vector<unsigned int>::vector(&this->group_tag_list, &v5->group_tag_list);
};

// Line 302: range 0000000014DE82CE-0000000014DE834F
void __cdecl data::ExhibitionLuaKeyExcelConfig::~ExhibitionLuaKeyExcelConfig(
        data::ExhibitionLuaKeyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionLuaKeyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionLuaKeyExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->group_tag_list);
  std::vector<unsigned int>::~vector(&this->group_list);
  std::vector<unsigned int>::~vector(&this->scene_list);
  std::string::~string(&this->trigger_type);
};

// Line 302: range 0000000014DE8350-0000000014DE837A
void __cdecl data::ExhibitionLuaKeyExcelConfig::~ExhibitionLuaKeyExcelConfig(
        data::ExhibitionLuaKeyExcelConfig *const this)
{
  data::ExhibitionLuaKeyExcelConfig::~ExhibitionLuaKeyExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 317: range 000000001474094A-0000000014740A5D
void __cdecl data::ExhibitionDisplayExcelConfig::ExhibitionDisplayExcelConfig(
        data::ExhibitionDisplayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionDisplayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionDisplayExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->display_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->display_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->display_id, v1);
  }
  this->display_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->series_id, v3);
  }
  this->series_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v3);
  }
  this->cond_type = EXHIBITION_DISPLAY_COND_NONE;
  std::vector<data::ExhibitionDisplayCondParam>::vector(&this->cond_param);
};

// Line 317: range 0000000014D15A42-0000000014D15C11
void __cdecl data::ExhibitionDisplayExcelConfig::ExhibitionDisplayExcelConfig(
        data::ExhibitionDisplayExcelConfig *const this,
        const data::ExhibitionDisplayExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t display_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t series_id; // ecx
  char v7; // dl
  data::ExhibitionDisplayCondType cond_type; // ecx
  char v9; // al
  const data::ExhibitionDisplayExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionDisplayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionDisplayExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->display_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->display_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->display_id);
  }
  display_id = a2->display_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->display_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->display_id, a2);
  }
  this->display_id = display_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->series_id);
  }
  series_id = v10->series_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->series_id, v5);
  }
  this->series_id = series_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->cond_type);
  }
  cond_type = v10->cond_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->cond_type, v5);
  }
  this->cond_type = cond_type;
  std::vector<data::ExhibitionDisplayCondParam>::vector(&this->cond_param, &v10->cond_param);
};

// Line 320: range 0000000014DE8250-0000000014DE82A1
void __cdecl data::ExhibitionDisplayExcelConfig::~ExhibitionDisplayExcelConfig(
        data::ExhibitionDisplayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionDisplayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionDisplayExcelConfig = v2;
  std::vector<data::ExhibitionDisplayCondParam>::~vector(&this->cond_param);
};

// Line 320: range 0000000014DE82A2-0000000014DE82CC
void __cdecl data::ExhibitionDisplayExcelConfig::~ExhibitionDisplayExcelConfig(
        data::ExhibitionDisplayExcelConfig *const this)
{
  data::ExhibitionDisplayExcelConfig::~ExhibitionDisplayExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 334: range 0000000014740A5E-0000000014740B6E
void __cdecl data::ExhibitionSeriesExcelConfig::ExhibitionSeriesExcelConfig(
        data::ExhibitionSeriesExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionSeriesExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionSeriesExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->series_id, v1);
  }
  this->series_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->series_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->series_type, v3);
  }
  this->series_type = EXHIBITION_SERIES_NONE;
  std::string::basic_string(&this->series_param);
  if ( *(char *)(((unsigned __int64)&this->is_reset_when_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reset_when_start, v3, &this->is_reset_when_start);
  this->is_reset_when_start = 0;
};

// Line 334: range 0000000014D15D52-0000000014D15F22
void __cdecl data::ExhibitionSeriesExcelConfig::ExhibitionSeriesExcelConfig(
        data::ExhibitionSeriesExcelConfig *const this,
        const data::ExhibitionSeriesExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t series_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ExhibitionSeriesType series_type; // ecx
  char v7; // dl
  std::string *p_series_param; // rsi
  bool is_reset_when_start; // cl
  char v10; // al
  const data::ExhibitionSeriesExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionSeriesExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionSeriesExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->series_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->series_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->series_id);
  }
  series_id = a2->series_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->series_id, a2);
  }
  this->series_id = series_id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->series_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->series_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->series_type);
  }
  series_type = v11->series_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->series_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->series_type, v5);
  }
  this->series_type = series_type;
  p_series_param = &v11->series_param;
  std::string::basic_string(&this->series_param, &v11->series_param);
  if ( *(char *)(((unsigned __int64)&v11->is_reset_when_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_reset_when_start, p_series_param, &v11->is_reset_when_start);
  is_reset_when_start = v11->is_reset_when_start;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_reset_when_start >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_series_param) = v10 != 0;
    __asan_report_store1(&this->is_reset_when_start, p_series_param, &this->is_reset_when_start);
  }
  this->is_reset_when_start = is_reset_when_start;
};

// Line 337: range 0000000014DE81D2-0000000014DE8223
void __cdecl data::ExhibitionSeriesExcelConfig::~ExhibitionSeriesExcelConfig(
        data::ExhibitionSeriesExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionSeriesExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionSeriesExcelConfig = v2;
  std::string::~string(&this->series_param);
};

// Line 337: range 0000000014DE8224-0000000014DE824E
void __cdecl data::ExhibitionSeriesExcelConfig::~ExhibitionSeriesExcelConfig(
        data::ExhibitionSeriesExcelConfig *const this)
{
  data::ExhibitionSeriesExcelConfig::~ExhibitionSeriesExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 351: range 0000000013C09C48-0000000013C09E81
void __cdecl data::ExhibitionCardExcelConfig::ExhibitionCardExcelConfig(
        data::ExhibitionCardExcelConfig *const this,
        const data::ExhibitionCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t display_id; // ecx
  char v7; // dl
  uint32_t series_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t display_param_order; // ecx
  char v12; // dl
  const data::ExhibitionCardExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionCardExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->display_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->display_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->display_id);
  }
  display_id = v13->display_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->display_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->display_id, v5);
  }
  this->display_id = display_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->series_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->series_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->series_id);
  }
  series_id = v13->series_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->series_id, v5);
  }
  this->series_id = series_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->display_param_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->display_param_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->display_param_order);
  }
  display_param_order = v13->display_param_order;
  v12 = *(_BYTE *)(((unsigned __int64)&this->display_param_order >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->display_param_order, v10);
  }
  this->display_param_order = display_param_order;
};

// Line 354: range 00000000142A3A90-00000000142A3ABA
void __cdecl data::ExhibitionCardExcelConfig::~ExhibitionCardExcelConfig(data::ExhibitionCardExcelConfig *const this)
{
  data::ExhibitionCardExcelConfig::~ExhibitionCardExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 354: range 00000000142A3A4E-00000000142A3A8F
void __cdecl data::ExhibitionCardExcelConfig::~ExhibitionCardExcelConfig(data::ExhibitionCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionCardExcelConfig = v2;
};

// Line 368: range 0000000013C09FD4-0000000013C0A307
void __cdecl data::ExhibitionScoreExcelConfig::ExhibitionScoreExcelConfig(
        data::ExhibitionScoreExcelConfig *const this,
        const data::ExhibitionScoreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t display_id; // ecx
  char v7; // dl
  uint32_t series_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t display_param_order; // ecx
  char v12; // dl
  data::ExhibitionScoreType score_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t score; // ecx
  char v17; // dl
  const data::ExhibitionScoreExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionScoreExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->display_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->display_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->display_id);
  }
  display_id = v18->display_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->display_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->display_id, v5);
  }
  this->display_id = display_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->series_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->series_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->series_id);
  }
  series_id = v18->series_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->series_id, v5);
  }
  this->series_id = series_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->display_param_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->display_param_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->display_param_order);
  }
  display_param_order = v18->display_param_order;
  v12 = *(_BYTE *)(((unsigned __int64)&this->display_param_order >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->display_param_order, v10);
  }
  this->display_param_order = display_param_order;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->score_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->score_type);
  }
  score_type = v18->score_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->score_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->score_type, v10);
  }
  this->score_type = score_type;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->score);
  }
  score = v18->score;
  v17 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->score, v15);
  }
  this->score = score;
};

// Line 371: range 00000000142A3A22-00000000142A3A4C
void __cdecl data::ExhibitionScoreExcelConfig::~ExhibitionScoreExcelConfig(
        data::ExhibitionScoreExcelConfig *const this)
{
  data::ExhibitionScoreExcelConfig::~ExhibitionScoreExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 371: range 00000000142A39E0-00000000142A3A21
void __cdecl data::ExhibitionScoreExcelConfig::~ExhibitionScoreExcelConfig(
        data::ExhibitionScoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionScoreExcelConfig = v2;
};

// Line 387: range 0000000013C0A48E-0000000013C0A737
void __cdecl data::ExhibitionListExcelConfig::ExhibitionListExcelConfig(
        data::ExhibitionListExcelConfig *const this,
        const data::ExhibitionListExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool default_show; // cl
  char v8; // dl
  __int64 v9; // rdx
  uint32_t display_id; // ecx
  char v11; // al
  __int64 v12; // rsi
  uint32_t series_id; // ecx
  char v14; // dl
  uint32_t display_param_order; // ecx
  char v16; // al
  const data::ExhibitionListExcelConfig *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExhibitionListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExhibitionListExcelConfig = v2;
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
  v5 = ((_BYTE)v17 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v17->default_show >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v17->default_show >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v17->default_show, v5, v6);
  default_show = v17->default_show;
  v8 = *(_BYTE *)(((unsigned __int64)&this->default_show >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->default_show, v5, v9);
  this->default_show = default_show;
  if ( *(_BYTE *)(((unsigned __int64)&v17->display_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->display_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->display_id);
  }
  display_id = v17->display_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->display_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->display_id, v5);
  }
  this->display_id = display_id;
  v12 = (((_BYTE)v17 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->series_id);
  }
  series_id = v17->series_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->series_id, v12);
  }
  this->series_id = series_id;
  if ( *(_BYTE *)(((unsigned __int64)&v17->display_param_order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->display_param_order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->display_param_order);
  }
  display_param_order = v17->display_param_order;
  v16 = *(_BYTE *)(((unsigned __int64)&this->display_param_order >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->display_param_order, v12);
  }
  this->display_param_order = display_param_order;
};

// Line 390: range 00000000142A39B4-00000000142A39DE
void __cdecl data::ExhibitionListExcelConfig::~ExhibitionListExcelConfig(data::ExhibitionListExcelConfig *const this)
{
  data::ExhibitionListExcelConfig::~ExhibitionListExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 390: range 00000000142A3972-00000000142A39B3
void __cdecl data::ExhibitionListExcelConfig::~ExhibitionListExcelConfig(data::ExhibitionListExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExhibitionListExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExhibitionListExcelConfig = v2;
};
