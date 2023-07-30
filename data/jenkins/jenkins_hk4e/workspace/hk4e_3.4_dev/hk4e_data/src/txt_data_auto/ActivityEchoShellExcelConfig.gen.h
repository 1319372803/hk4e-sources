// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityEchoShellExcelConfig.gen.h

// Line 43: range 0000000012EBB018-0000000012EBB169
void __cdecl data::EchoShellExcelConfig::EchoShellExcelConfig(data::EchoShellExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EchoShellExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EchoShellExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->echo_shell_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->echo_shell_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->echo_shell_type, v3);
  }
  this->echo_shell_type = ECHO_SHELL_TYPE_NORMAL_ECHO;
  if ( *(_BYTE *)(((unsigned __int64)&this->story_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->story_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->story_id, v3);
  }
  this->story_id = 0;
  std::vector<unsigned int>::vector(&this->reminder_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->related_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->related_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->related_dungeon_id, v3);
  }
  this->related_dungeon_id = 0;
};

// Line 43: range 000000001339D29A-000000001339D4DE
void __cdecl data::EchoShellExcelConfig::EchoShellExcelConfig(
        data::EchoShellExcelConfig *const this,
        const data::EchoShellExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::EchoShellType echo_shell_type; // ecx
  char v7; // dl
  uint32_t story_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_reminder_list; // rsi
  uint32_t related_dungeon_id; // ecx
  char v12; // al
  const data::EchoShellExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EchoShellExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EchoShellExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->echo_shell_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->echo_shell_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->echo_shell_type);
  }
  echo_shell_type = v13->echo_shell_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->echo_shell_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->echo_shell_type, v5);
  }
  this->echo_shell_type = echo_shell_type;
  if ( *(_BYTE *)(((unsigned __int64)&v13->story_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->story_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->story_id);
  }
  story_id = v13->story_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->story_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->story_id, v5);
  }
  this->story_id = story_id;
  p_reminder_list = &v13->reminder_list;
  std::vector<unsigned int>::vector(&this->reminder_list, &v13->reminder_list);
  if ( *(_BYTE *)(((unsigned __int64)&v13->related_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->related_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->related_dungeon_id);
  }
  related_dungeon_id = v13->related_dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->related_dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_reminder_list) = v12 != 0;
    __asan_report_store4(&this->related_dungeon_id, p_reminder_list);
  }
  this->related_dungeon_id = related_dungeon_id;
};

// Line 46: range 00000000134244A0-00000000134244CA
void __cdecl data::EchoShellExcelConfig::~EchoShellExcelConfig(data::EchoShellExcelConfig *const this)
{
  data::EchoShellExcelConfig::~EchoShellExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 46: range 000000001342444E-000000001342449F
void __cdecl data::EchoShellExcelConfig::~EchoShellExcelConfig(data::EchoShellExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EchoShellExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EchoShellExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reminder_list);
};

// Line 61: range 000000001339D620-000000001339D7D4
void __cdecl data::EchoShellRewardExcelConfig::EchoShellRewardExcelConfig(
        data::EchoShellRewardExcelConfig *const this,
        const data::EchoShellRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_id; // ecx
  char v7; // dl
  uint32_t shell_count; // ecx
  char v9; // al
  const data::EchoShellRewardExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EchoShellRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EchoShellRewardExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->shell_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->shell_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->shell_count);
  }
  shell_count = v10->shell_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->shell_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->shell_count, v5);
  }
  this->shell_count = shell_count;
};

// Line 64: range 0000000013424422-000000001342444C
void __cdecl data::EchoShellRewardExcelConfig::~EchoShellRewardExcelConfig(
        data::EchoShellRewardExcelConfig *const this)
{
  data::EchoShellRewardExcelConfig::~EchoShellRewardExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 64: range 00000000134243E0-0000000013424421
void __cdecl data::EchoShellRewardExcelConfig::~EchoShellRewardExcelConfig(
        data::EchoShellRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EchoShellRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EchoShellRewardExcelConfig = v2;
};

// Line 77: range 000000001339D916-000000001339DACA
void __cdecl data::EchoShellFloatSignalExcelConfig::EchoShellFloatSignalExcelConfig(
        data::EchoShellFloatSignalExcelConfig *const this,
        const data::EchoShellFloatSignalExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  uint32_t config_id; // ecx
  char v9; // al
  const data::EchoShellFloatSignalExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EchoShellFloatSignalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EchoShellFloatSignalExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->group_id);
  }
  group_id = v10->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->config_id);
  }
  config_id = v10->config_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->config_id, v5);
  }
  this->config_id = config_id;
};

// Line 80: range 0000000013424372-00000000134243B3
void __cdecl data::EchoShellFloatSignalExcelConfig::~EchoShellFloatSignalExcelConfig(
        data::EchoShellFloatSignalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EchoShellFloatSignalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EchoShellFloatSignalExcelConfig = v2;
};

// Line 80: range 00000000134243B4-00000000134243DE
void __cdecl data::EchoShellFloatSignalExcelConfig::~EchoShellFloatSignalExcelConfig(
        data::EchoShellFloatSignalExcelConfig *const this)
{
  data::EchoShellFloatSignalExcelConfig::~EchoShellFloatSignalExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 93: range 000000001339DC0C-000000001339DD4B
void __cdecl data::EchoShellPreviewExcelConfig::EchoShellPreviewExcelConfig(
        data::EchoShellPreviewExcelConfig *const this,
        const data::EchoShellPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  const data::EchoShellPreviewExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EchoShellPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EchoShellPreviewExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->activity_id);
  }
  activity_id = v8->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
};

// Line 96: range 0000000013424346-0000000013424370
void __cdecl data::EchoShellPreviewExcelConfig::~EchoShellPreviewExcelConfig(
        data::EchoShellPreviewExcelConfig *const this)
{
  data::EchoShellPreviewExcelConfig::~EchoShellPreviewExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 96: range 0000000013424304-0000000013424345
void __cdecl data::EchoShellPreviewExcelConfig::~EchoShellPreviewExcelConfig(
        data::EchoShellPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EchoShellPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EchoShellPreviewExcelConfig = v2;
};

// Line 108: range 000000001339DE8C-000000001339E040
void __cdecl data::EchoShellSummerTimeDungeonExcelConfig::EchoShellSummerTimeDungeonExcelConfig(
        data::EchoShellSummerTimeDungeonExcelConfig *const this,
        const data::EchoShellSummerTimeDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t total_chest_count; // ecx
  char v7; // dl
  uint32_t total_shell_count; // ecx
  char v9; // al
  const data::EchoShellSummerTimeDungeonExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EchoShellSummerTimeDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EchoShellSummerTimeDungeonExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->total_chest_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->total_chest_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->total_chest_count);
  }
  total_chest_count = v10->total_chest_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->total_chest_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->total_chest_count, v5);
  }
  this->total_chest_count = total_chest_count;
  if ( *(_BYTE *)(((unsigned __int64)&v10->total_shell_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->total_shell_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->total_shell_count);
  }
  total_shell_count = v10->total_shell_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->total_shell_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->total_shell_count, v5);
  }
  this->total_shell_count = total_shell_count;
};

// Line 111: range 00000000134242D8-0000000013424302
void __cdecl data::EchoShellSummerTimeDungeonExcelConfig::~EchoShellSummerTimeDungeonExcelConfig(
        data::EchoShellSummerTimeDungeonExcelConfig *const this)
{
  data::EchoShellSummerTimeDungeonExcelConfig::~EchoShellSummerTimeDungeonExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 111: range 0000000013424296-00000000134242D7
void __cdecl data::EchoShellSummerTimeDungeonExcelConfig::~EchoShellSummerTimeDungeonExcelConfig(
        data::EchoShellSummerTimeDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EchoShellSummerTimeDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EchoShellSummerTimeDungeonExcelConfig = v2;
};
