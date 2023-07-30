// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DungeonElementChallengeExcelConfig.gen.h

// Line 18: range 0000000013C05C86-0000000013C05D15
void __cdecl data::DungeonElementChallengeExcelConfig::DungeonElementChallengeExcelConfig(
        data::DungeonElementChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonElementChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonElementChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_id);
};

// Line 18: range 00000000141C55A6-00000000141C567B
void __cdecl data::DungeonElementChallengeExcelConfig::DungeonElementChallengeExcelConfig(
        data::DungeonElementChallengeExcelConfig *const this,
        const data::DungeonElementChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  const data::DungeonElementChallengeExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonElementChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonElementChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dungeon_id, a2);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_id, &v5->trial_avatar_id);
};

// Line 21: range 00000000142A3E4E-00000000142A3E9F
void __cdecl data::DungeonElementChallengeExcelConfig::~DungeonElementChallengeExcelConfig(
        data::DungeonElementChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonElementChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonElementChallengeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->trial_avatar_id);
};

// Line 21: range 00000000142A3EA0-00000000142A3ECA
void __cdecl data::DungeonElementChallengeExcelConfig::~DungeonElementChallengeExcelConfig(
        data::DungeonElementChallengeExcelConfig *const this)
{
  data::DungeonElementChallengeExcelConfig::~DungeonElementChallengeExcelConfig(this);
  operator delete(this, 0x28uLL);
};
