// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityRockBoardExploreExcelConfig.gen.h

// Line 17: range 00000000133CB576-00000000133CB7AF
void __cdecl data::ActivityRockBoardExploreStageExcelConfig::ActivityRockBoardExploreStageExcelConfig(
        data::ActivityRockBoardExploreStageExcelConfig *const this,
        const data::ActivityRockBoardExploreStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_bundle_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t drop_id; // ecx
  char v12; // dl
  const data::ActivityRockBoardExploreStageExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityRockBoardExploreStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityRockBoardExploreStageExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->group_bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->group_bundle_id);
  }
  group_bundle_id = v13->group_bundle_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_bundle_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_bundle_id, v5);
  }
  this->group_bundle_id = group_bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->open_day);
  }
  open_day = v13->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->drop_id);
  }
  drop_id = v13->drop_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->drop_id, v10);
  }
  this->drop_id = drop_id;
};

// Line 20: range 0000000013421AA0-0000000013421AE1
void __cdecl data::ActivityRockBoardExploreStageExcelConfig::~ActivityRockBoardExploreStageExcelConfig(
        data::ActivityRockBoardExploreStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityRockBoardExploreStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityRockBoardExploreStageExcelConfig = v2;
};

// Line 20: range 0000000013421AE2-0000000013421B0C
void __cdecl data::ActivityRockBoardExploreStageExcelConfig::~ActivityRockBoardExploreStageExcelConfig(
        data::ActivityRockBoardExploreStageExcelConfig *const this)
{
  data::ActivityRockBoardExploreStageExcelConfig::~ActivityRockBoardExploreStageExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 34: range 00000000133CB8F0-00000000133CBAA4
void __cdecl data::ActivityRockBoardExploreQuestExcelConfig::ActivityRockBoardExploreQuestExcelConfig(
        data::ActivityRockBoardExploreQuestExcelConfig *const this,
        const data::ActivityRockBoardExploreQuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t quest_stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  const data::ActivityRockBoardExploreQuestExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityRockBoardExploreQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityRockBoardExploreQuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quest_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quest_stage_id);
  }
  quest_stage_id = a2->quest_stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->quest_stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->quest_stage_id, a2);
  }
  this->quest_stage_id = quest_stage_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->quest_id);
  }
  quest_id = v10->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->open_day);
  }
  open_day = v10->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
};

// Line 37: range 0000000013421A32-0000000013421A73
void __cdecl data::ActivityRockBoardExploreQuestExcelConfig::~ActivityRockBoardExploreQuestExcelConfig(
        data::ActivityRockBoardExploreQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityRockBoardExploreQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityRockBoardExploreQuestExcelConfig = v2;
};

// Line 37: range 0000000013421A74-0000000013421A9E
void __cdecl data::ActivityRockBoardExploreQuestExcelConfig::~ActivityRockBoardExploreQuestExcelConfig(
        data::ActivityRockBoardExploreQuestExcelConfig *const this)
{
  data::ActivityRockBoardExploreQuestExcelConfig::~ActivityRockBoardExploreQuestExcelConfig(this);
  operator delete(this, 0x18uLL);
};
