// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/SceneExcelConfig.h

// Line 22: range 000000000D35D130-000000000D35D24D
void __cdecl SceneExcelConfigMgr::SceneTriggerConfig::SceneTriggerConfig(
        SceneExcelConfigMgr::SceneTriggerConfig *const this,
        const SceneExcelConfigMgr::SceneTriggerConfig *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t group_id; // ecx
  char v6; // dl
  const SceneExcelConfigMgr::SceneTriggerConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_id = scene_id;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->group_id);
  }
  group_id = v7->group_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = group_id;
  std::string::basic_string(&this->trigger_name, &v7->trigger_name);
};

// Line 22: range 000000000CE0B600-000000000CE0B61E
void __cdecl SceneExcelConfigMgr::SceneTriggerConfig::~SceneTriggerConfig(
        SceneExcelConfigMgr::SceneTriggerConfig *const this)
{
  std::string::~string(&this->trigger_name);
};

// Line 44: range 000000000CDFD5CC-000000000CDFD5ED
bool __cdecl SceneExcelConfigMgr::isPlayerScene(data::SceneType scene_type)
{
  return scene_type == SCENE_WORLD || scene_type == SCENE_ROOM;
};

// Line 54: range 000000000CDFD5EE-000000000CDFD60F
bool __cdecl SceneExcelConfigMgr::isWorldScene(data::SceneType scene_type)
{
  return scene_type == SCENE_WORLD || scene_type == SCENE_HOME_WORLD;
};

// Line 56: range 000000000F7764A3-000000000F7764C2
bool __cdecl SceneExcelConfigMgr::isHomeScene(data::SceneType scene_type)
{
  return (unsigned int)(scene_type - 4) <= 1;
};

// Line 80: range 000000000CDFD610-000000000CDFD631
bool __cdecl SceneExcelConfigMgr::isRoomScene(data::SceneType scene_type)
{
  return scene_type == SCENE_ROOM || scene_type == SCENE_HOME_ROOM;
};
