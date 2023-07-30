// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityDragonSpineExcelConfig.gen.h

// Line 67: range 0000000012EB9B38-0000000012EB9D15
void __cdecl data::DragonSpinePreviewExcelConfig::DragonSpinePreviewExcelConfig(
        data::DragonSpinePreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DragonSpinePreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpinePreviewExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_level, v3);
  }
  this->unlock_level = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_preview_id, v4);
  }
  this->reward_preview_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->content_duration, v4);
  }
  this->content_duration = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->quest_id_list);
};

// Line 67: range 000000001339A7DA-000000001339AB28
void __cdecl data::DragonSpinePreviewExcelConfig::DragonSpinePreviewExcelConfig(
        data::DragonSpinePreviewExcelConfig *const this,
        const data::DragonSpinePreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t unlock_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_preview_id; // ecx
  char v12; // dl
  uint32_t content_duration; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t quest_id; // ecx
  char v17; // dl
  const data::DragonSpinePreviewExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DragonSpinePreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DragonSpinePreviewExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->activity_id);
  }
  activity_id = v18->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->unlock_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->unlock_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->unlock_level);
  }
  unlock_level = v18->unlock_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_level, v5);
  }
  this->unlock_level = unlock_level;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reward_preview_id);
  }
  reward_preview_id = v18->reward_preview_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->reward_preview_id, v10);
  }
  this->reward_preview_id = reward_preview_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->content_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->content_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->content_duration);
  }
  content_duration = v18->content_duration;
  v14 = *(_BYTE *)(((unsigned __int64)&this->content_duration >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->content_duration, v10);
  }
  this->content_duration = content_duration;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->quest_id);
  }
  quest_id = v18->quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->quest_id, v15);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->quest_id_list, &v18->quest_id_list);
};

// Line 70: range 00000000134262B0-00000000134262DA
void __cdecl data::DragonSpinePreviewExcelConfig::~DragonSpinePreviewExcelConfig(
        data::DragonSpinePreviewExcelConfig *const this)
{
  data::DragonSpinePreviewExcelConfig::~DragonSpinePreviewExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 70: range 000000001342625E-00000000134262AF
void __cdecl data::DragonSpinePreviewExcelConfig::~DragonSpinePreviewExcelConfig(
        data::DragonSpinePreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DragonSpinePreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpinePreviewExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->quest_id_list);
};

// Line 87: range 0000000012EB9D16-0000000012EB9EBD
void __cdecl data::DragonSpineStageExcelConfig::DragonSpineStageExcelConfig(
        data::DragonSpineStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  std::vector<unsigned int>::vector(&this->coin_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->openday >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->openday >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->openday, v3);
  }
  this->openday = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_quest_id, v4);
  }
  this->pre_quest_id = 0;
  std::vector<unsigned int>::vector(&this->mission_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview_id, v4);
  }
  this->reward_preview_id = 0;
};

// Line 87: range 000000001339AC6A-000000001339AF75
void __cdecl data::DragonSpineStageExcelConfig::DragonSpineStageExcelConfig(
        data::DragonSpineStageExcelConfig *const this,
        const data::DragonSpineStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_coin_id_list; // rsi
  uint32_t openday; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t pre_quest_id; // ecx
  char v13; // dl
  std::vector<unsigned int> *p_mission_id_list; // rsi
  uint32_t reward_preview_id; // ecx
  char v16; // al
  const data::DragonSpineStageExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DragonSpineStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DragonSpineStageExcelConfig = v2;
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
  v5 = (((_BYTE)v17 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->chapter_id);
  }
  chapter_id = v17->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  p_coin_id_list = &v17->coin_id_list;
  std::vector<unsigned int>::vector(&this->coin_id_list, &v17->coin_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v17->openday >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->openday >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->openday);
  }
  openday = v17->openday;
  v10 = *(_BYTE *)(((unsigned __int64)&this->openday >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_coin_id_list) = v10 != 0;
    __asan_report_store4(&this->openday, p_coin_id_list);
  }
  this->openday = openday;
  v11 = (((_BYTE)v17 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->pre_quest_id);
  }
  pre_quest_id = v17->pre_quest_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->pre_quest_id, v11);
  }
  this->pre_quest_id = pre_quest_id;
  p_mission_id_list = &v17->mission_id_list;
  std::vector<unsigned int>::vector(&this->mission_id_list, &v17->mission_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v17->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->reward_preview_id);
  }
  reward_preview_id = v17->reward_preview_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_mission_id_list) = v16 != 0;
    __asan_report_store4(&this->reward_preview_id, p_mission_id_list);
  }
  this->reward_preview_id = reward_preview_id;
};

// Line 90: range 00000000134261D0-0000000013426231
void __cdecl data::DragonSpineStageExcelConfig::~DragonSpineStageExcelConfig(
        data::DragonSpineStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->mission_id_list);
  std::vector<unsigned int>::~vector(&this->coin_id_list);
};

// Line 90: range 0000000013426232-000000001342625C
void __cdecl data::DragonSpineStageExcelConfig::~DragonSpineStageExcelConfig(
        data::DragonSpineStageExcelConfig *const this)
{
  data::DragonSpineStageExcelConfig::~DragonSpineStageExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 107: range 000000001332621C-00000000133262AB
void __cdecl data::DragonSpineMissionFinishConfig::DragonSpineMissionFinishConfig(
        data::DragonSpineMissionFinishConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineMissionFinishConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineMissionFinishConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = DRAGON_SPINE_EXEC_TYPE_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 107: range 000000001339A682-000000001339A757
void __cdecl data::DragonSpineMissionFinishConfig::DragonSpineMissionFinishConfig(
        data::DragonSpineMissionFinishConfig *const this,
        const data::DragonSpineMissionFinishConfig *a2)
{
  int (**v2)(...); // rdx
  data::DragonSpineMissionFinishExecType type; // ecx
  char v4; // al
  const data::DragonSpineMissionFinishConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DragonSpineMissionFinishConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DragonSpineMissionFinishConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 110: range 00000000132856D8-0000000013285702
void __cdecl data::DragonSpineMissionFinishConfig::~DragonSpineMissionFinishConfig(
        data::DragonSpineMissionFinishConfig *const this)
{
  data::DragonSpineMissionFinishConfig::~DragonSpineMissionFinishConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 110: range 0000000013285686-00000000132856D7
void __cdecl data::DragonSpineMissionFinishConfig::~DragonSpineMissionFinishConfig(
        data::DragonSpineMissionFinishConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineMissionFinishConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineMissionFinishConfig = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 120: range 0000000012EB9F12-0000000012EBA025
void __cdecl data::DragonSpineMissionExcelConfig::DragonSpineMissionExcelConfig(
        data::DragonSpineMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineMissionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, v3);
  }
  this->watcher_id = 0;
  std::vector<data::DragonSpineMissionFinishConfig>::vector(&this->finish_exec);
};

// Line 120: range 000000001339B0B6-000000001339B285
void __cdecl data::DragonSpineMissionExcelConfig::DragonSpineMissionExcelConfig(
        data::DragonSpineMissionExcelConfig *const this,
        const data::DragonSpineMissionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  uint32_t watcher_id; // ecx
  char v9; // al
  const data::DragonSpineMissionExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DragonSpineMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DragonSpineMissionExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->chapter_id);
  }
  chapter_id = v10->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->watcher_id);
  }
  watcher_id = v10->watcher_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = watcher_id;
  std::vector<data::DragonSpineMissionFinishConfig>::vector(&this->finish_exec, &v10->finish_exec);
};

// Line 123: range 0000000013426152-00000000134261A3
void __cdecl data::DragonSpineMissionExcelConfig::~DragonSpineMissionExcelConfig(
        data::DragonSpineMissionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineMissionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineMissionExcelConfig = v2;
  std::vector<data::DragonSpineMissionFinishConfig>::~vector(&this->finish_exec);
};

// Line 123: range 00000000134261A4-00000000134261CE
void __cdecl data::DragonSpineMissionExcelConfig::~DragonSpineMissionExcelConfig(
        data::DragonSpineMissionExcelConfig *const this)
{
  data::DragonSpineMissionExcelConfig::~DragonSpineMissionExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 137: range 000000001339B3C6-000000001339B57A
void __cdecl data::DragonSpineEnhanceExcelConfig::DragonSpineEnhanceExcelConfig(
        data::DragonSpineEnhanceExcelConfig *const this,
        const data::DragonSpineEnhanceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_ability_group_id; // ecx
  char v7; // dl
  uint32_t process; // ecx
  char v9; // al
  const data::DragonSpineEnhanceExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DragonSpineEnhanceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DragonSpineEnhanceExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_ability_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_ability_group_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_ability_group_id);
  }
  activity_ability_group_id = v10->activity_ability_group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_ability_group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_ability_group_id, v5);
  }
  this->activity_ability_group_id = activity_ability_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->process >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->process >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->process);
  }
  process = v10->process;
  v9 = *(_BYTE *)(((unsigned __int64)&this->process >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->process, v5);
  }
  this->process = process;
};

// Line 140: range 00000000134260E4-0000000013426125
void __cdecl data::DragonSpineEnhanceExcelConfig::~DragonSpineEnhanceExcelConfig(
        data::DragonSpineEnhanceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DragonSpineEnhanceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DragonSpineEnhanceExcelConfig = v2;
};

// Line 140: range 0000000013426126-0000000013426150
void __cdecl data::DragonSpineEnhanceExcelConfig::~DragonSpineEnhanceExcelConfig(
        data::DragonSpineEnhanceExcelConfig *const this)
{
  data::DragonSpineEnhanceExcelConfig::~DragonSpineEnhanceExcelConfig(this);
  operator delete(this, 0x18uLL);
};
