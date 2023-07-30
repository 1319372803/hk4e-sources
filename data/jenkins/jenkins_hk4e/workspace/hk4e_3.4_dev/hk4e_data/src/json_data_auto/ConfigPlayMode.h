// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigPlayMode.h

// Line 157: range 0000000012174D6C-0000000012174DD1
void __cdecl data::ConfigActionPanelState::ConfigActionPanelState(data::ConfigActionPanelState *const this)
{
  __int64 v1; // rsi

  std::unordered_map<data::ActionSlotType,std::vector<data::ConfigActionButton>>::unordered_map(&this->slot_map);
  std::unordered_map<data::ActionSlotType,std::vector<data::ConfigActionButton>>::unordered_map(&this->slot_map_joypad_override);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 157: range 000000001264B6D6-000000001264B7AF
void __cdecl data::ConfigActionPanelState::ConfigActionPanelState(
        data::ConfigActionPanelState *const this,
        const data::ConfigActionPanelState *a2)
{
  data::SlotButtonMap *p_slot_map_joypad_override; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::unordered_map<data::ActionSlotType,std::vector<data::ConfigActionButton>>::unordered_map(
    &this->slot_map,
    &a2->slot_map);
  p_slot_map_joypad_override = &a2->slot_map_joypad_override;
  std::unordered_map<data::ActionSlotType,std::vector<data::ConfigActionButton>>::unordered_map(
    &this->slot_map_joypad_override,
    p_slot_map_joypad_override);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_slot_map_joypad_override, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_slot_map_joypad_override) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_slot_map_joypad_override, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 157: range 0000000012174DD2-0000000012174DFC
void __cdecl data::ConfigActionPanelState::~ConfigActionPanelState(data::ConfigActionPanelState *const this)
{
  std::unordered_map<data::ActionSlotType,std::vector<data::ConfigActionButton>>::~unordered_map(&this->slot_map_joypad_override);
  std::unordered_map<data::ActionSlotType,std::vector<data::ConfigActionButton>>::~unordered_map(&this->slot_map);
};

// Line 195: range 0000000012175014-0000000012175069
void __cdecl data::ConfigActionPanelMode::ConfigActionPanelMode(data::ConfigActionPanelMode *const this)
{
  __int64 v1; // rsi

  std::unordered_map<data::ActionPanelState,std::string>::unordered_map(&this->state_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 195: range 000000001264BD36-000000001264BDD1
void __cdecl data::ConfigActionPanelMode::ConfigActionPanelMode(
        data::ConfigActionPanelMode *const this,
        const data::ConfigActionPanelMode *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::unordered_map<data::ActionPanelState,std::string>::unordered_map(&this->state_map, &a2->state_map);
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

// Line 195: range 000000001217506A-0000000012175084
void __cdecl data::ConfigActionPanelMode::~ConfigActionPanelMode(data::ConfigActionPanelMode *const this)
{
  std::unordered_map<data::ActionPanelState,std::string>::~unordered_map(&this->state_map);
};
