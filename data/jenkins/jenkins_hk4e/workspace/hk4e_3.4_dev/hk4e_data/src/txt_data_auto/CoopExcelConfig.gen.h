// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CoopExcelConfig.gen.h

// Line 116: range 0000000014117012-00000000141170A1
void __cdecl data::CoopCondConfig::CoopCondConfig(data::CoopCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = COOP_COND_NONE;
  std::vector<unsigned int>::vector(&this->args);
};

// Line 116: range 0000000013C08700-0000000013C087D5
void __cdecl data::CoopCondConfig::CoopCondConfig(data::CoopCondConfig *const this, const data::CoopCondConfig *a2)
{
  int (**v2)(...); // rdx
  data::CoopTaskCondType cond_type; // ecx
  char v4; // al
  const data::CoopCondConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoopCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoopCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<unsigned int>::vector(&this->args, &v5->args);
};

// Line 119: range 00000000142A455A-00000000142A4584
void __cdecl data::CoopCondConfig::~CoopCondConfig(data::CoopCondConfig *const this)
{
  data::CoopCondConfig::~CoopCondConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 119: range 00000000142A4508-00000000142A4559
void __cdecl data::CoopCondConfig::~CoopCondConfig(data::CoopCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopCondConfig = v2;
  std::vector<unsigned int>::~vector(&this->args);
};

// Line 129: range 0000000013BF9270-0000000013BF933D
void __cdecl data::MainCoopExcelConfig::MainCoopExcelConfig(data::MainCoopExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MainCoopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MainCoopExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->main_coop_cfg);
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_series >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_quest_series >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_quest_series, v1);
  }
  this->main_quest_series = 0;
};

// Line 129: range 00000000141B8C4C-00000000141B8D96
void __cdecl data::MainCoopExcelConfig::MainCoopExcelConfig(
        data::MainCoopExcelConfig *const this,
        const data::MainCoopExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_main_coop_cfg; // rsi
  uint32_t main_quest_series; // ecx
  char v7; // al
  const data::MainCoopExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MainCoopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MainCoopExcelConfig = v2;
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
  p_main_coop_cfg = &v8->main_coop_cfg;
  std::string::basic_string(&this->main_coop_cfg, &v8->main_coop_cfg);
  if ( *(_BYTE *)(((unsigned __int64)&v8->main_quest_series >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->main_quest_series >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->main_quest_series);
  }
  main_quest_series = v8->main_quest_series;
  v7 = *(_BYTE *)(((unsigned __int64)&this->main_quest_series >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_main_coop_cfg) = v7 != 0;
    __asan_report_store4(&this->main_quest_series, p_main_coop_cfg);
  }
  this->main_quest_series = main_quest_series;
};

// Line 132: range 00000000142A448A-00000000142A44DB
void __cdecl data::MainCoopExcelConfig::~MainCoopExcelConfig(data::MainCoopExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MainCoopExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MainCoopExcelConfig = v2;
  std::string::~string(&this->main_coop_cfg);
};

// Line 132: range 00000000142A44DC-00000000142A4506
void __cdecl data::MainCoopExcelConfig::~MainCoopExcelConfig(data::MainCoopExcelConfig *const this)
{
  data::MainCoopExcelConfig::~MainCoopExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 145: range 00000000141B8ED8-00000000141B9187
void __cdecl data::CoopInteractionExcelConfig::CoopInteractionExcelConfig(
        data::CoopInteractionExcelConfig *const this,
        const data::CoopInteractionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t npc_id; // ecx
  char v7; // dl
  uint32_t main_quest_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t priority; // ecx
  char v12; // dl
  bool is_auto; // cl
  char v14; // al
  const data::CoopInteractionExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoopInteractionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoopInteractionExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->npc_id);
  }
  npc_id = v15->npc_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->npc_id, v5);
  }
  this->npc_id = npc_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->main_quest_id);
  }
  main_quest_id = v15->main_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->main_quest_id, v5);
  }
  this->main_quest_id = main_quest_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->priority);
  }
  priority = v15->priority;
  v12 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->priority, v10);
  this->priority = priority;
  if ( *(char *)(((unsigned __int64)&v15->is_auto >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_auto, v10, &v15->is_auto);
  is_auto = v15->is_auto;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_auto >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_auto, v10, &this->is_auto);
  }
  this->is_auto = is_auto;
};

// Line 148: range 00000000142A445E-00000000142A4488
void __cdecl data::CoopInteractionExcelConfig::~CoopInteractionExcelConfig(
        data::CoopInteractionExcelConfig *const this)
{
  data::CoopInteractionExcelConfig::~CoopInteractionExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 148: range 00000000142A441C-00000000142A445D
void __cdecl data::CoopInteractionExcelConfig::~CoopInteractionExcelConfig(
        data::CoopInteractionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopInteractionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopInteractionExcelConfig = v2;
};

// Line 163: range 0000000013BF9392-0000000013BF94FB
void __cdecl data::CoopChapterExcelConfig::CoopChapterExcelConfig(data::CoopChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CoopChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopChapterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id, v3);
  }
  this->avatar_id = 0;
  std::vector<data::CoopCondConfig>::vector(&this->unlock_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_material_id, v3);
  }
  this->open_material_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_material_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_material_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_material_num, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->open_material_num = 0;
  std::string::basic_string(&this->begin_time_str);
};

// Line 163: range 00000000141B92C8-00000000141B955E
void __cdecl data::CoopChapterExcelConfig::CoopChapterExcelConfig(
        data::CoopChapterExcelConfig *const this,
        const data::CoopChapterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t avatar_id; // ecx
  char v7; // dl
  std::vector<data::CoopCondConfig> *p_unlock_cond; // rsi
  uint32_t open_material_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t open_material_num; // ecx
  char v13; // dl
  const data::CoopChapterExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoopChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoopChapterExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v14->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->avatar_id);
  }
  avatar_id = v14->avatar_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->avatar_id, v5);
  }
  this->avatar_id = avatar_id;
  p_unlock_cond = &v14->unlock_cond;
  std::vector<data::CoopCondConfig>::vector(&this->unlock_cond, &v14->unlock_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v14->open_material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->open_material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->open_material_id);
  }
  open_material_id = v14->open_material_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->open_material_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_unlock_cond) = v10 != 0;
    __asan_report_store4(&this->open_material_id, p_unlock_cond);
  }
  this->open_material_id = open_material_id;
  v11 = (((_BYTE)v14 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->open_material_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->open_material_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->open_material_num);
  }
  open_material_num = v14->open_material_num;
  v13 = *(_BYTE *)(((unsigned __int64)&this->open_material_num >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->open_material_num, v11);
  }
  this->open_material_num = open_material_num;
  std::string::basic_string(&this->begin_time_str, &v14->begin_time_str);
};

// Line 166: range 00000000142A43F0-00000000142A441A
void __cdecl data::CoopChapterExcelConfig::~CoopChapterExcelConfig(data::CoopChapterExcelConfig *const this)
{
  data::CoopChapterExcelConfig::~CoopChapterExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 166: range 00000000142A438E-00000000142A43EF
void __cdecl data::CoopChapterExcelConfig::~CoopChapterExcelConfig(data::CoopChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopChapterExcelConfig = v2;
  std::string::~string(&this->begin_time_str);
  std::vector<data::CoopCondConfig>::~vector(&this->unlock_cond);
};

// Line 182: range 0000000013BF94FC-0000000013BF960F
void __cdecl data::CoopRewardExcelConfig::CoopRewardExcelConfig(data::CoopRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::CoopCondConfig>::vector(&this->reward_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chapter_id, v1);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->reward_id = 0;
};

// Line 182: range 00000000141B96A0-00000000141B986F
void __cdecl data::CoopRewardExcelConfig::CoopRewardExcelConfig(
        data::CoopRewardExcelConfig *const this,
        const data::CoopRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::CoopCondConfig> *p_reward_cond; // rsi
  uint32_t chapter_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t reward_id; // ecx
  char v10; // dl
  const data::CoopRewardExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoopRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoopRewardExcelConfig = v2;
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
  p_reward_cond = &v11->reward_cond;
  std::vector<data::CoopCondConfig>::vector(&this->reward_cond, &v11->reward_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v11->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->chapter_id);
  }
  chapter_id = v11->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_reward_cond) = v7 != 0;
    __asan_report_store4(&this->chapter_id, p_reward_cond);
  }
  this->chapter_id = chapter_id;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->reward_id);
  }
  reward_id = v11->reward_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->reward_id, v8);
  }
  this->reward_id = reward_id;
};

// Line 185: range 00000000142A4362-00000000142A438C
void __cdecl data::CoopRewardExcelConfig::~CoopRewardExcelConfig(data::CoopRewardExcelConfig *const this)
{
  data::CoopRewardExcelConfig::~CoopRewardExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 185: range 00000000142A4310-00000000142A4361
void __cdecl data::CoopRewardExcelConfig::~CoopRewardExcelConfig(data::CoopRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopRewardExcelConfig = v2;
  std::vector<data::CoopCondConfig>::~vector(&this->reward_cond);
};

// Line 199: range 0000000013BF9610-0000000013BF9769
void __cdecl data::CoopCGExcelConfig::CoopCGExcelConfig(data::CoopCGExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CoopCGExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopCGExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_point_id, v3);
  }
  this->unlock_point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cg_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cg_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cg_type, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->cg_type = CG_NONE;
  std::vector<data::CoopCondConfig>::vector(&this->unlock_cond);
};

// Line 199: range 00000000141B99B0-00000000141B9C04
void __cdecl data::CoopCGExcelConfig::CoopCGExcelConfig(
        data::CoopCGExcelConfig *const this,
        const data::CoopCGExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  uint32_t unlock_point_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::CoopCGType cg_type; // ecx
  char v12; // dl
  const data::CoopCGExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoopCGExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoopCGExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->chapter_id);
  }
  chapter_id = v13->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->unlock_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->unlock_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->unlock_point_id);
  }
  unlock_point_id = v13->unlock_point_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_point_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_point_id, v5);
  }
  this->unlock_point_id = unlock_point_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->cg_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->cg_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->cg_type);
  }
  cg_type = v13->cg_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cg_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->cg_type, v10);
  }
  this->cg_type = cg_type;
  std::vector<data::CoopCondConfig>::vector(&this->unlock_cond, &v13->unlock_cond);
};

// Line 202: range 00000000142A42E4-00000000142A430E
void __cdecl data::CoopCGExcelConfig::~CoopCGExcelConfig(data::CoopCGExcelConfig *const this)
{
  data::CoopCGExcelConfig::~CoopCGExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 202: range 00000000142A4292-00000000142A42E3
void __cdecl data::CoopCGExcelConfig::~CoopCGExcelConfig(data::CoopCGExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopCGExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopCGExcelConfig = v2;
  std::vector<data::CoopCondConfig>::~vector(&this->unlock_cond);
};

// Line 217: range 0000000013BF976A-0000000013BF98DB
void __cdecl data::CoopPointExcelConfig::CoopPointExcelConfig(data::CoopPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CoopPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopPointExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = POINT_NONE;
  std::vector<unsigned int>::vector(&this->end_quest_list);
  std::vector<unsigned int>::vector(&this->end_main_coop);
  if ( *(_BYTE *)(((unsigned __int64)&this->accept_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->accept_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->accept_quest, v3);
  }
  this->accept_quest = 0;
  std::vector<unsigned int>::vector(&this->post_point_list);
};

// Line 217: range 00000000141B9D46-00000000141B9FFC
void __cdecl data::CoopPointExcelConfig::CoopPointExcelConfig(
        data::CoopPointExcelConfig *const this,
        const data::CoopPointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  data::CoopPointType type; // ecx
  char v9; // al
  std::vector<unsigned int> *p_end_main_coop; // rsi
  uint32_t accept_quest; // ecx
  char v12; // al
  const data::CoopPointExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoopPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoopPointExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->chapter_id);
  }
  chapter_id = v13->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->type);
  }
  type = v13->type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  std::vector<unsigned int>::vector(&this->end_quest_list, &v13->end_quest_list);
  p_end_main_coop = &v13->end_main_coop;
  std::vector<unsigned int>::vector(&this->end_main_coop, &v13->end_main_coop);
  if ( *(_BYTE *)(((unsigned __int64)&v13->accept_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->accept_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->accept_quest);
  }
  accept_quest = v13->accept_quest;
  v12 = *(_BYTE *)(((unsigned __int64)&this->accept_quest >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_end_main_coop) = v12 != 0;
    __asan_report_store4(&this->accept_quest, p_end_main_coop);
  }
  this->accept_quest = accept_quest;
  std::vector<unsigned int>::vector(&this->post_point_list, &v13->post_point_list);
};

// Line 220: range 00000000142A4266-00000000142A4290
void __cdecl data::CoopPointExcelConfig::~CoopPointExcelConfig(data::CoopPointExcelConfig *const this)
{
  data::CoopPointExcelConfig::~CoopPointExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 220: range 00000000142A41F4-00000000142A4265
void __cdecl data::CoopPointExcelConfig::~CoopPointExcelConfig(data::CoopPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoopPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoopPointExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->post_point_list);
  std::vector<unsigned int>::~vector(&this->end_main_coop);
  std::vector<unsigned int>::~vector(&this->end_quest_list);
};
