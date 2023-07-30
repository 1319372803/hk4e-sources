// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Gadget/ConfigCustomNode.h

// Line 18: range 0000000013C24150-0000000013C24228
void __cdecl data::ConfigCustomNodeInfo::ConfigCustomNodeInfo(data::ConfigCustomNodeInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->parent_index = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v2);
  }
  this->config_id = 0;
  std::string::basic_string(&this->slot_identifier);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 18: range 0000000013C2422A-0000000013C24248
void __cdecl data::ConfigCustomNodeInfo::~ConfigCustomNodeInfo(data::ConfigCustomNodeInfo *const this)
{
  std::string::~string(&this->slot_identifier);
};

// Line 872: range 0000000013E9366C-0000000013E937FF
void __cdecl data::ConfigCustomNodeInfo::ConfigCustomNodeInfo(
        data::ConfigCustomNodeInfo *const this,
        data::ConfigCustomNodeInfo *a2)
{
  int32_t parent_index; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t config_id; // ecx
  char v6; // dl
  std::string *p_slot_identifier; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::ConfigCustomNodeInfo *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  parent_index = a2->parent_index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->parent_index = parent_index;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->config_id);
  }
  config_id = v10->config_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->config_id, v4);
  }
  this->config_id = config_id;
  p_slot_identifier = &v10->slot_identifier;
  std::string::basic_string(&this->slot_identifier, &v10->slot_identifier);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_slot_identifier, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_slot_identifier) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_slot_identifier, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};
