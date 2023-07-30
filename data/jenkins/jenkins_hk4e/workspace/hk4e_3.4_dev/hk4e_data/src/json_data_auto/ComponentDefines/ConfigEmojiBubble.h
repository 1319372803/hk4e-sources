// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigEmojiBubble.h

// Line 19: range 0000000012192B72-0000000012192BD7
void __cdecl data::ConfigEmojiBubbleData::ConfigEmojiBubbleData(data::ConfigEmojiBubbleData *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::vector<std::string>::vector(&this->effects);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001267134C-0000000012671425
void __cdecl data::ConfigEmojiBubbleData::ConfigEmojiBubbleData(
        data::ConfigEmojiBubbleData *const this,
        const data::ConfigEmojiBubbleData *a2)
{
  data::StringArray *p_effects; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_effects = &a2->effects;
  std::vector<std::string>::vector(&this->effects, p_effects);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_effects, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_effects) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effects, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 00000000123AA8EA-00000000123AA9A0
void __cdecl data::ConfigEmojiBubbleData::ConfigEmojiBubbleData(
        data::ConfigEmojiBubbleData *const this,
        data::ConfigEmojiBubbleData *a2)
{
  std::vector<std::string> *p_effects; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_effects = &a2->effects;
  std::vector<std::string>::vector(&this->effects, p_effects);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_effects, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_effects) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effects, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000012192BD8-0000000012192C02
void __cdecl data::ConfigEmojiBubbleData::~ConfigEmojiBubbleData(data::ConfigEmojiBubbleData *const this)
{
  std::vector<std::string>::~vector(&this->effects);
  std::string::~string(this);
};

// Line 55: range 000000000ED98E16-000000000ED98E5F
void __cdecl data::ConfigEmojiBubble::ConfigEmojiBubble(data::ConfigEmojiBubble *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->is_json_loaded = 0;
};
