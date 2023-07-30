// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityIslandPartyExcelConfig.gen.h

// Line 42: range 0000000012EBF292-0000000012EBF429
void __cdecl data::ActivityIslandPartyOverallExcelConfig::ActivityIslandPartyOverallExcelConfig(
        data::ActivityIslandPartyOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityIslandPartyOverallExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->card_display_countdown >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_display_countdown >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_display_countdown, v3);
  }
  this->card_display_countdown = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_display_countdown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_display_countdown >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_display_countdown, v4);
  }
  this->score_display_countdown = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_transfer_group_id, v4);
  }
  this->settle_transfer_group_id = 0;
  std::vector<unsigned int>::vector(&this->settle_transfer_config_id_list);
};

// Line 42: range 00000000133BCE22-00000000133BD0EB
void __cdecl data::ActivityIslandPartyOverallExcelConfig::ActivityIslandPartyOverallExcelConfig(
        data::ActivityIslandPartyOverallExcelConfig *const this,
        const data::ActivityIslandPartyOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t card_display_countdown; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t score_display_countdown; // ecx
  char v12; // dl
  uint32_t settle_transfer_group_id; // ecx
  char v14; // al
  const data::ActivityIslandPartyOverallExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityIslandPartyOverallExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->activity_id);
  }
  activity_id = v15->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->card_display_countdown >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->card_display_countdown >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->card_display_countdown);
  }
  card_display_countdown = v15->card_display_countdown;
  v9 = *(_BYTE *)(((unsigned __int64)&this->card_display_countdown >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->card_display_countdown, v5);
  }
  this->card_display_countdown = card_display_countdown;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->score_display_countdown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->score_display_countdown >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->score_display_countdown);
  }
  score_display_countdown = v15->score_display_countdown;
  v12 = *(_BYTE *)(((unsigned __int64)&this->score_display_countdown >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->score_display_countdown, v10);
  }
  this->score_display_countdown = score_display_countdown;
  if ( *(_BYTE *)(((unsigned __int64)&v15->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->settle_transfer_group_id);
  }
  settle_transfer_group_id = v15->settle_transfer_group_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->settle_transfer_group_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->settle_transfer_group_id, v10);
  }
  this->settle_transfer_group_id = settle_transfer_group_id;
  std::vector<unsigned int>::vector(&this->settle_transfer_config_id_list, &v15->settle_transfer_config_id_list);
};

// Line 45: range 00000000134223FA-000000001342244B
void __cdecl data::ActivityIslandPartyOverallExcelConfig::~ActivityIslandPartyOverallExcelConfig(
        data::ActivityIslandPartyOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityIslandPartyOverallExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->settle_transfer_config_id_list);
};

// Line 45: range 000000001342244C-0000000013422476
void __cdecl data::ActivityIslandPartyOverallExcelConfig::~ActivityIslandPartyOverallExcelConfig(
        data::ActivityIslandPartyOverallExcelConfig *const this)
{
  data::ActivityIslandPartyOverallExcelConfig::~ActivityIslandPartyOverallExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 61: range 0000000012ECAAA4-0000000012ECAC91
void __cdecl data::ActivityIslandPartyStageExcelConfig::ActivityIslandPartyStageExcelConfig(
        data::ActivityIslandPartyStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityIslandPartyStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_type, v3);
  }
  this->stage_type = STAGE_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->series_id, v4);
  }
  this->series_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id, v4);
  }
  this->match_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->draft_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->draft_id = 0;
  std::vector<unsigned int>::vector(&this->exhibition_score_id_list);
  std::vector<unsigned int>::vector(&this->exhibition_card_id_list);
};

// Line 61: range 00000000133A6F88-00000000133A7318
void __cdecl data::ActivityIslandPartyStageExcelConfig::ActivityIslandPartyStageExcelConfig(
        data::ActivityIslandPartyStageExcelConfig *const this,
        const data::ActivityIslandPartyStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ActivityIslandPartyStageType stage_type; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t series_id; // ecx
  char v12; // dl
  uint32_t match_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t draft_id; // ecx
  char v17; // dl
  const data::ActivityIslandPartyStageExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityIslandPartyStageExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->stage_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->stage_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->stage_type);
  }
  stage_type = v18->stage_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_type, v5);
  }
  this->stage_type = stage_type;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->gallery_id);
  }
  gallery_id = v18->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->series_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->series_id);
  }
  series_id = v18->series_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->series_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->series_id, v10);
  }
  this->series_id = series_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->match_id);
  }
  match_id = v18->match_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->match_id, v10);
  }
  this->match_id = match_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->draft_id);
  }
  draft_id = v18->draft_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->draft_id, v15);
  }
  this->draft_id = draft_id;
  std::vector<unsigned int>::vector(&this->exhibition_score_id_list, &v18->exhibition_score_id_list);
  std::vector<unsigned int>::vector(&this->exhibition_card_id_list, &v18->exhibition_card_id_list);
};

// Line 64: range 000000001342236C-00000000134223CD
void __cdecl data::ActivityIslandPartyStageExcelConfig::~ActivityIslandPartyStageExcelConfig(
        data::ActivityIslandPartyStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityIslandPartyStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->exhibition_card_id_list);
  std::vector<unsigned int>::~vector(&this->exhibition_score_id_list);
};

// Line 64: range 00000000134223CE-00000000134223F8
void __cdecl data::ActivityIslandPartyStageExcelConfig::~ActivityIslandPartyStageExcelConfig(
        data::ActivityIslandPartyStageExcelConfig *const this)
{
  data::ActivityIslandPartyStageExcelConfig::~ActivityIslandPartyStageExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 82: range 0000000012ECAC92-0000000012ECAD5F
void __cdecl data::ActivityIslandPartyScoreExcelConfig::ActivityIslandPartyScoreExcelConfig(
        data::ActivityIslandPartyScoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityIslandPartyScoreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v1);
  }
  this->score = 0;
};

// Line 82: range 00000000133BD2E6-00000000133BD430
void __cdecl data::ActivityIslandPartyScoreExcelConfig::ActivityIslandPartyScoreExcelConfig(
        data::ActivityIslandPartyScoreExcelConfig *const this,
        const data::ActivityIslandPartyScoreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_desc; // rsi
  uint32_t score; // ecx
  char v7; // al
  const data::ActivityIslandPartyScoreExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityIslandPartyScoreExcelConfig = v2;
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
  p_desc = &v8->desc;
  std::string::basic_string(&this->desc, &v8->desc);
  if ( *(_BYTE *)(((unsigned __int64)&v8->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->score);
  }
  score = v8->score;
  v7 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_desc) = v7 != 0;
    __asan_report_store4(&this->score, p_desc);
  }
  this->score = score;
};

// Line 85: range 00000000134222EE-000000001342233F
void __cdecl data::ActivityIslandPartyScoreExcelConfig::~ActivityIslandPartyScoreExcelConfig(
        data::ActivityIslandPartyScoreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityIslandPartyScoreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityIslandPartyScoreExcelConfig = v2;
  std::string::~string(&this->desc);
};

// Line 85: range 0000000013422340-000000001342236A
void __cdecl data::ActivityIslandPartyScoreExcelConfig::~ActivityIslandPartyScoreExcelConfig(
        data::ActivityIslandPartyScoreExcelConfig *const this)
{
  data::ActivityIslandPartyScoreExcelConfig::~ActivityIslandPartyScoreExcelConfig(this);
  operator delete(this, 0x38uLL);
};
