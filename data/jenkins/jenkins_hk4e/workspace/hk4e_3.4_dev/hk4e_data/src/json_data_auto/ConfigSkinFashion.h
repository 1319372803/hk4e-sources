// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigSkinFashion.h

// Line 19: range 000000001217FAE4-000000001217FB49
void __cdecl data::ConfigSkinFashionEffects::ConfigSkinFashionEffects(data::ConfigSkinFashionEffects *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->old_effects);
  std::vector<std::string>::vector(&this->new_effects);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001265C966-000000001265CA3F
void __cdecl data::ConfigSkinFashionEffects::ConfigSkinFashionEffects(
        data::ConfigSkinFashionEffects *const this,
        const data::ConfigSkinFashionEffects *a2)
{
  data::StringList *p_new_effects; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->old_effects, &a2->old_effects);
  p_new_effects = &a2->new_effects;
  std::vector<std::string>::vector(&this->new_effects, p_new_effects);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_new_effects, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_new_effects) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_new_effects, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000001217FB4A-000000001217FB74
void __cdecl data::ConfigSkinFashionEffects::~ConfigSkinFashionEffects(data::ConfigSkinFashionEffects *const this)
{
  std::vector<std::string>::~vector(&this->new_effects);
  std::vector<std::string>::~vector(&this->old_effects);
};

// Line 43: range 000000001217FB76-000000001217FBDB
void __cdecl data::ConfigSkinFashionGadgets::ConfigSkinFashionGadgets(data::ConfigSkinFashionGadgets *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->old_gadgets);
  std::vector<std::string>::vector(&this->new_gadgets);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 43: range 000000001265CA40-000000001265CB19
void __cdecl data::ConfigSkinFashionGadgets::ConfigSkinFashionGadgets(
        data::ConfigSkinFashionGadgets *const this,
        const data::ConfigSkinFashionGadgets *a2)
{
  data::StringList *p_new_gadgets; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->old_gadgets, &a2->old_gadgets);
  p_new_gadgets = &a2->new_gadgets;
  std::vector<std::string>::vector(&this->new_gadgets, p_new_gadgets);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_new_gadgets, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_new_gadgets) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_new_gadgets, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 43: range 000000001217FBDC-000000001217FC06
void __cdecl data::ConfigSkinFashionGadgets::~ConfigSkinFashionGadgets(data::ConfigSkinFashionGadgets *const this)
{
  std::vector<std::string>::~vector(&this->new_gadgets);
  std::vector<std::string>::~vector(&this->old_gadgets);
};

// Line 67: range 000000001217FC08-000000001217FC6D
void __cdecl data::ConfigSkinInfo::ConfigSkinInfo(data::ConfigSkinInfo *const this)
{
  __int64 v1; // rsi

  data::ConfigSkinFashionEffects::ConfigSkinFashionEffects(&this->effects);
  data::ConfigSkinFashionGadgets::ConfigSkinFashionGadgets(&this->gadgets);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 67: range 000000001265CB1A-000000001265CBF3
void __cdecl data::ConfigSkinInfo::ConfigSkinInfo(data::ConfigSkinInfo *const this, const data::ConfigSkinInfo *a2)
{
  data::ConfigSkinFashionGadgets *p_gadgets; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigSkinFashionEffects::ConfigSkinFashionEffects(&this->effects, &a2->effects);
  p_gadgets = &a2->gadgets;
  data::ConfigSkinFashionGadgets::ConfigSkinFashionGadgets(&this->gadgets, p_gadgets);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_gadgets, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_gadgets) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_gadgets, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 67: range 000000001217FC6E-000000001217FC98
void __cdecl data::ConfigSkinInfo::~ConfigSkinInfo(data::ConfigSkinInfo *const this)
{
  data::ConfigSkinFashionGadgets::~ConfigSkinFashionGadgets(&this->gadgets);
  data::ConfigSkinFashionEffects::~ConfigSkinFashionEffects(&this->effects);
};
