// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityExpeditionExcelConfig.gen.h

// Line 17: range 00000000133AA638-00000000133AA6F2
void __cdecl data::ExpeditionActivityPreviewExcelConfig::ExpeditionActivityPreviewExcelConfig(
        data::ExpeditionActivityPreviewExcelConfig *const this,
        const data::ExpeditionActivityPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionActivityPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionActivityPreviewExcelConfig = v2;
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
};

// Line 20: range 0000000013425CF8-0000000013425D22
void __cdecl data::ExpeditionActivityPreviewExcelConfig::~ExpeditionActivityPreviewExcelConfig(
        data::ExpeditionActivityPreviewExcelConfig *const this)
{
  data::ExpeditionActivityPreviewExcelConfig::~ExpeditionActivityPreviewExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 20: range 0000000013425CB6-0000000013425CF7
void __cdecl data::ExpeditionActivityPreviewExcelConfig::~ExpeditionActivityPreviewExcelConfig(
        data::ExpeditionActivityPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionActivityPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionActivityPreviewExcelConfig = v2;
};

// Line 31: range 0000000012EC018E-0000000012EC02F7
void __cdecl data::ExpeditionPathExcelConfig::ExpeditionPathExcelConfig(data::ExpeditionPathExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionPathExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionPathExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id, v3);
  }
  this->difficulty_id = 0;
  std::string::basic_string(&this->super_element);
  if ( *(_BYTE *)(((unsigned __int64)&this->basic_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->basic_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->basic_reward_id, v3);
  }
  this->basic_reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_reward_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->bonus_reward_id = 0;
  std::vector<unsigned int>::vector(&this->level_reward_list);
};

// Line 31: range 00000000133AA834-00000000133AAACA
void __cdecl data::ExpeditionPathExcelConfig::ExpeditionPathExcelConfig(
        data::ExpeditionPathExcelConfig *const this,
        const data::ExpeditionPathExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t difficulty_id; // ecx
  char v7; // dl
  std::string *p_super_element; // rsi
  uint32_t basic_reward_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t bonus_reward_id; // ecx
  char v13; // dl
  const data::ExpeditionPathExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionPathExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionPathExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->difficulty_id);
  }
  difficulty_id = v14->difficulty_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->difficulty_id, v5);
  }
  this->difficulty_id = difficulty_id;
  p_super_element = &v14->super_element;
  std::string::basic_string(&this->super_element, &v14->super_element);
  if ( *(_BYTE *)(((unsigned __int64)&v14->basic_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->basic_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->basic_reward_id);
  }
  basic_reward_id = v14->basic_reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->basic_reward_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_super_element) = v10 != 0;
    __asan_report_store4(&this->basic_reward_id, p_super_element);
  }
  this->basic_reward_id = basic_reward_id;
  v11 = (((_BYTE)v14 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->bonus_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->bonus_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->bonus_reward_id);
  }
  bonus_reward_id = v14->bonus_reward_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->bonus_reward_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->bonus_reward_id, v11);
  }
  this->bonus_reward_id = bonus_reward_id;
  std::vector<unsigned int>::vector(&this->level_reward_list, &v14->level_reward_list);
};

// Line 34: range 0000000013425C8A-0000000013425CB4
void __cdecl data::ExpeditionPathExcelConfig::~ExpeditionPathExcelConfig(data::ExpeditionPathExcelConfig *const this)
{
  data::ExpeditionPathExcelConfig::~ExpeditionPathExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 34: range 0000000013425C28-0000000013425C89
void __cdecl data::ExpeditionPathExcelConfig::~ExpeditionPathExcelConfig(data::ExpeditionPathExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionPathExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionPathExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_reward_list);
  std::string::~string(&this->super_element);
};

// Line 50: range 00000000133AAC0C-00000000133AAFB7
void __cdecl data::ExpeditionDifficultyExcelConfig::ExpeditionDifficultyExcelConfig(
        data::ExpeditionDifficultyExcelConfig *const this,
        const data::ExpeditionDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t need_hours; // ecx
  char v7; // dl
  uint32_t min_player; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t max_player; // ecx
  char v12; // dl
  uint32_t min_refresh_count; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t max_refresh_count; // ecx
  char v17; // dl
  float coef; // xmm0_4
  const data::ExpeditionDifficultyExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionDifficultyExcelConfig = v2;
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
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->need_hours >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->need_hours >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->need_hours);
  }
  need_hours = v19->need_hours;
  v7 = *(_BYTE *)(((unsigned __int64)&this->need_hours >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->need_hours, v5);
  }
  this->need_hours = need_hours;
  if ( *(_BYTE *)(((unsigned __int64)&v19->min_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->min_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->min_player);
  }
  min_player = v19->min_player;
  v9 = *(_BYTE *)(((unsigned __int64)&this->min_player >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->min_player, v5);
  }
  this->min_player = min_player;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_player);
  }
  max_player = v19->max_player;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_player >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->max_player, v10);
  }
  this->max_player = max_player;
  if ( *(_BYTE *)(((unsigned __int64)&v19->min_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->min_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->min_refresh_count);
  }
  min_refresh_count = v19->min_refresh_count;
  v14 = *(_BYTE *)(((unsigned __int64)&this->min_refresh_count >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->min_refresh_count, v10);
  }
  this->min_refresh_count = min_refresh_count;
  v15 = (((_BYTE)v19 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_refresh_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_refresh_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_refresh_count);
  }
  max_refresh_count = v19->max_refresh_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->max_refresh_count >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
    __asan_report_store4(&this->max_refresh_count, v15);
  this->max_refresh_count = max_refresh_count;
  if ( *(_BYTE *)(((unsigned __int64)&v19->coef >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->coef >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->coef);
  }
  coef = v19->coef;
  if ( *(_BYTE *)(((unsigned __int64)&this->coef >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coef >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coef, v15);
  }
  this->coef = coef;
};

// Line 53: range 0000000013425BFC-0000000013425C26
void __cdecl data::ExpeditionDifficultyExcelConfig::~ExpeditionDifficultyExcelConfig(
        data::ExpeditionDifficultyExcelConfig *const this)
{
  data::ExpeditionDifficultyExcelConfig::~ExpeditionDifficultyExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 53: range 0000000013425BBA-0000000013425BFB
void __cdecl data::ExpeditionDifficultyExcelConfig::~ExpeditionDifficultyExcelConfig(
        data::ExpeditionDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionDifficultyExcelConfig = v2;
};

// Line 70: range 00000000133AB0F8-00000000133AB2AF
void __cdecl data::ExpeditionBonusExcelConfig::ExpeditionBonusExcelConfig(
        data::ExpeditionBonusExcelConfig *const this,
        const data::ExpeditionBonusExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t avatar_level; // ecx
  char v7; // dl
  float probability; // xmm0_4
  const data::ExpeditionBonusExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionBonusExcelConfig = v2;
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
  v5 = (((_BYTE)v9 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->avatar_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->avatar_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->avatar_level);
  }
  avatar_level = v9->avatar_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->avatar_level, v5);
  this->avatar_level = avatar_level;
  if ( *(_BYTE *)(((unsigned __int64)&v9->probability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->probability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->probability);
  }
  probability = v9->probability;
  if ( *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->probability, v5);
  }
  this->probability = probability;
};

// Line 73: range 0000000013425B8E-0000000013425BB8
void __cdecl data::ExpeditionBonusExcelConfig::~ExpeditionBonusExcelConfig(
        data::ExpeditionBonusExcelConfig *const this)
{
  data::ExpeditionBonusExcelConfig::~ExpeditionBonusExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 73: range 0000000013425B4C-0000000013425B8D
void __cdecl data::ExpeditionBonusExcelConfig::~ExpeditionBonusExcelConfig(
        data::ExpeditionBonusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionBonusExcelConfig = v2;
};

// Line 86: range 00000000133AB3F0-00000000133AB4AA
void __cdecl data::ExpeditionActivityMarkerExcelConfig::ExpeditionActivityMarkerExcelConfig(
        data::ExpeditionActivityMarkerExcelConfig *const this,
        const data::ExpeditionActivityMarkerExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionActivityMarkerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionActivityMarkerExcelConfig = v2;
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
};

// Line 89: range 0000000013425B20-0000000013425B4A
void __cdecl data::ExpeditionActivityMarkerExcelConfig::~ExpeditionActivityMarkerExcelConfig(
        data::ExpeditionActivityMarkerExcelConfig *const this)
{
  data::ExpeditionActivityMarkerExcelConfig::~ExpeditionActivityMarkerExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 89: range 0000000013425ADE-0000000013425B1F
void __cdecl data::ExpeditionActivityMarkerExcelConfig::~ExpeditionActivityMarkerExcelConfig(
        data::ExpeditionActivityMarkerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionActivityMarkerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionActivityMarkerExcelConfig = v2;
};

// Line 100: range 00000000133AB5EC-00000000133AB89A
void __cdecl data::ExpeditionChallengeExcelConfig::ExpeditionChallengeExcelConfig(
        data::ExpeditionChallengeExcelConfig *const this,
        const data::ExpeditionChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t unlock_time; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_challenge_index; // ecx
  char v12; // dl
  uint32_t reward_id; // ecx
  char v14; // al
  const data::ExpeditionChallengeExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExpeditionChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExpeditionChallengeExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->unlock_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->unlock_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->unlock_time);
  }
  unlock_time = v15->unlock_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->unlock_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->unlock_time, v5);
  }
  this->unlock_time = unlock_time;
  if ( *(_BYTE *)(((unsigned __int64)&v15->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->group_id);
  }
  group_id = v15->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->reward_challenge_index >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->reward_challenge_index);
  }
  reward_challenge_index = v15->reward_challenge_index;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_challenge_index >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->reward_challenge_index, v10);
  }
  this->reward_challenge_index = reward_challenge_index;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->reward_id);
  }
  reward_id = v15->reward_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
};

// Line 103: range 0000000013425AB2-0000000013425ADC
void __cdecl data::ExpeditionChallengeExcelConfig::~ExpeditionChallengeExcelConfig(
        data::ExpeditionChallengeExcelConfig *const this)
{
  data::ExpeditionChallengeExcelConfig::~ExpeditionChallengeExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 103: range 0000000013425A70-0000000013425AB1
void __cdecl data::ExpeditionChallengeExcelConfig::~ExpeditionChallengeExcelConfig(
        data::ExpeditionChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExpeditionChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExpeditionChallengeExcelConfig = v2;
};
