// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigManekin.h

// Line 26: range 000000001216C93C-000000001216C991
void __cdecl data::ConfigManekinEquip::ConfigManekinEquip(data::ConfigManekinEquip *const this)
{
  __int64 v1; // rsi

  std::unordered_map<int,data::Vector>::unordered_map(&this->equiped_rotation);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 26: range 000000001263F1BC-000000001263F257
void __cdecl data::ConfigManekinEquip::ConfigManekinEquip(
        data::ConfigManekinEquip *const this,
        const data::ConfigManekinEquip *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::unordered_map<int,data::Vector>::unordered_map(&this->equiped_rotation, &a2->equiped_rotation);
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

// Line 26: range 000000001216C992-000000001216C9AC
void __cdecl data::ConfigManekinEquip::~ConfigManekinEquip(data::ConfigManekinEquip *const this)
{
  std::unordered_map<int,data::Vector>::~unordered_map(&this->equiped_rotation);
};
