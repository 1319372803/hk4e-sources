// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TrialAvatarActivityExcelConfig.h

// Line 20: range 000000000CE0DD44-000000000CE0DED9
data::ActivityTrialAvatarConfig *__cdecl data::ActivityTrialAvatarConfig::operator=(
        data::ActivityTrialAvatarConfig *const this,
        data::ActivityTrialAvatarConfig *a2)
{
  uint32_t trial_config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t trial_avatar_id; // ecx
  char v6; // dl
  uint32_t dungeon_id; // ecx
  char v8; // al
  data::ActivityTrialAvatarConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  trial_config_id = a2->trial_config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->trial_config_id = trial_config_id;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->trial_avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->trial_avatar_id);
  }
  trial_avatar_id = v10->trial_avatar_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->trial_avatar_id, v4);
  }
  this->trial_avatar_id = trial_avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->dungeon_id);
  }
  dungeon_id = v10->dungeon_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::operator=(&this->avatar_id_vec, &v10->avatar_id_vec);
  return this;
};

// Line 20: range 000000000CE0DC48-000000000CE0DD23
void __cdecl data::ActivityTrialAvatarConfig::ActivityTrialAvatarConfig(data::ActivityTrialAvatarConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->trial_config_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trial_avatar_id, v2);
  }
  this->trial_avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v2);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->avatar_id_vec);
};

// Line 20: range 000000000CE0DD24-000000000CE0DD42
void __cdecl data::ActivityTrialAvatarConfig::~ActivityTrialAvatarConfig(data::ActivityTrialAvatarConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->avatar_id_vec);
};
