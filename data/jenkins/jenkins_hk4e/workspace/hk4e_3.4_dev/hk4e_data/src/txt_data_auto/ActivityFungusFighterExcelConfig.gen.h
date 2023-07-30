// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityFungusFighterExcelConfig.gen.h

// Line 41: range 0000000012EC2B18-0000000012EC2CED
void __cdecl data::FungusExcelConfig::FungusExcelConfig(data::FungusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FungusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_id, v3);
  }
  this->camp_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_monster_id, v3);
  }
  this->capture_monster_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fight_monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fight_monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fight_monster_id, v4);
  }
  this->fight_monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_name_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_name_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_name_id, v4);
  }
  this->init_name_id = 0;
  std::vector<unsigned int>::vector(&this->name_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v4);
  }
  this->config_id = 0;
};

// Line 41: range 00000000133A3B34-00000000133A3E72
void __cdecl data::FungusExcelConfig::FungusExcelConfig(
        data::FungusExcelConfig *const this,
        const data::FungusExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t camp_id; // ecx
  char v7; // dl
  uint32_t capture_monster_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t fight_monster_id; // ecx
  char v12; // dl
  uint32_t init_name_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_name_id_list; // rsi
  uint32_t config_id; // ecx
  char v17; // al
  const data::FungusExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FungusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->camp_id);
  }
  camp_id = v18->camp_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->camp_id, v5);
  }
  this->camp_id = camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->capture_monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->capture_monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->capture_monster_id);
  }
  capture_monster_id = v18->capture_monster_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->capture_monster_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->capture_monster_id, v5);
  }
  this->capture_monster_id = capture_monster_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->fight_monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->fight_monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->fight_monster_id);
  }
  fight_monster_id = v18->fight_monster_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->fight_monster_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->fight_monster_id, v10);
  }
  this->fight_monster_id = fight_monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->init_name_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->init_name_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->init_name_id);
  }
  init_name_id = v18->init_name_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->init_name_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->init_name_id, v10);
  }
  this->init_name_id = init_name_id;
  p_name_id_list = &v18->name_id_list;
  std::vector<unsigned int>::vector(&this->name_id_list, &v18->name_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v18->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->config_id);
  }
  config_id = v18->config_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_name_id_list) = v17 != 0;
    __asan_report_store4(&this->config_id, p_name_id_list);
  }
  this->config_id = config_id;
};

// Line 44: range 0000000013421A06-0000000013421A30
void __cdecl data::FungusExcelConfig::~FungusExcelConfig(data::FungusExcelConfig *const this)
{
  data::FungusExcelConfig::~FungusExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 44: range 00000000134219B4-0000000013421A05
void __cdecl data::FungusExcelConfig::~FungusExcelConfig(data::FungusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->name_id_list);
};

// Line 61: range 00000000133AFA12-00000000133AFC4B
void __cdecl data::FungusCampExcelConfig::FungusCampExcelConfig(
        data::FungusCampExcelConfig *const this,
        const data::FungusCampExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t camp_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_link_id; // ecx
  char v7; // dl
  uint32_t task_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t pre_camp_id; // ecx
  char v12; // dl
  const data::FungusCampExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FungusCampExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusCampExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_id);
  }
  camp_id = a2->camp_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->camp_id, a2);
  }
  this->camp_id = camp_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->group_link_id);
  }
  group_link_id = v13->group_link_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_link_id, v5);
  }
  this->group_link_id = group_link_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->task_id);
  }
  task_id = v13->task_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->task_id, v5);
  }
  this->task_id = task_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->pre_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->pre_camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->pre_camp_id);
  }
  pre_camp_id = v13->pre_camp_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->pre_camp_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->pre_camp_id, v10);
  }
  this->pre_camp_id = pre_camp_id;
};

// Line 64: range 0000000013421988-00000000134219B2
void __cdecl data::FungusCampExcelConfig::~FungusCampExcelConfig(data::FungusCampExcelConfig *const this)
{
  data::FungusCampExcelConfig::~FungusCampExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 64: range 0000000013421946-0000000013421987
void __cdecl data::FungusCampExcelConfig::~FungusCampExcelConfig(data::FungusCampExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusCampExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusCampExcelConfig = v2;
};

// Line 78: range 00000000133AFD8C-00000000133AFE46
void __cdecl data::FungusNameExcelConfig::FungusNameExcelConfig(
        data::FungusNameExcelConfig *const this,
        const data::FungusNameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t name_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::FungusNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusNameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->name_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->name_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->name_id);
  }
  name_id = a2->name_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->name_id, a2);
  }
  this->name_id = name_id;
};

// Line 81: range 000000001342191A-0000000013421944
void __cdecl data::FungusNameExcelConfig::~FungusNameExcelConfig(data::FungusNameExcelConfig *const this)
{
  data::FungusNameExcelConfig::~FungusNameExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 81: range 00000000134218D8-0000000013421919
void __cdecl data::FungusNameExcelConfig::~FungusNameExcelConfig(data::FungusNameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusNameExcelConfig = v2;
};

// Line 92: range 0000000012EC2CEE-0000000012EC2F09
void __cdecl data::FungusCultivateExcelConfig::FungusCultivateExcelConfig(data::FungusCultivateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FungusCultivateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusCultivateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cultivate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cultivate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cultivate_id, v1);
  }
  this->cultivate_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fungus_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fungus_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fungus_id, v3);
  }
  this->fungus_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_id, v3);
  }
  this->task_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_step >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_step, v4);
  }
  this->min_step = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rotate_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rotate_limit, v4);
  }
  this->rotate_limit = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exchange_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exchange_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exchange_limit, v5);
  }
  this->exchange_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->copy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->copy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->copy_limit, v5);
  }
  this->copy_limit = 0;
  std::vector<std::vector<unsigned int>>::vector(&this->preset_template);
};

// Line 92: range 00000000133A4098-00000000133A445B
void __cdecl data::FungusCultivateExcelConfig::FungusCultivateExcelConfig(
        data::FungusCultivateExcelConfig *const this,
        const data::FungusCultivateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t cultivate_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t fungus_id; // ecx
  char v7; // dl
  uint32_t task_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t min_step; // ecx
  char v12; // dl
  uint32_t rotate_limit; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t exchange_limit; // ecx
  char v17; // dl
  uint32_t copy_limit; // ecx
  char v19; // al
  const data::FungusCultivateExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FungusCultivateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusCultivateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cultivate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cultivate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cultivate_id);
  }
  cultivate_id = a2->cultivate_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cultivate_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cultivate_id, a2);
  }
  this->cultivate_id = cultivate_id;
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->fungus_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->fungus_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->fungus_id);
  }
  fungus_id = v20->fungus_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->fungus_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->fungus_id, v5);
  }
  this->fungus_id = fungus_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->task_id);
  }
  task_id = v20->task_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->task_id, v5);
  }
  this->task_id = task_id;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->min_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->min_step >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->min_step);
  }
  min_step = v20->min_step;
  v12 = *(_BYTE *)(((unsigned __int64)&this->min_step >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->min_step, v10);
  }
  this->min_step = min_step;
  if ( *(_BYTE *)(((unsigned __int64)&v20->rotate_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->rotate_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->rotate_limit);
  }
  rotate_limit = v20->rotate_limit;
  v14 = *(_BYTE *)(((unsigned __int64)&this->rotate_limit >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->rotate_limit, v10);
  }
  this->rotate_limit = rotate_limit;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->exchange_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->exchange_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->exchange_limit);
  }
  exchange_limit = v20->exchange_limit;
  v17 = *(_BYTE *)(((unsigned __int64)&this->exchange_limit >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->exchange_limit, v15);
  }
  this->exchange_limit = exchange_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v20->copy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->copy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->copy_limit);
  }
  copy_limit = v20->copy_limit;
  v19 = *(_BYTE *)(((unsigned __int64)&this->copy_limit >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->copy_limit, v15);
  }
  this->copy_limit = copy_limit;
  std::vector<std::vector<unsigned int>>::vector(&this->preset_template, &v20->preset_template);
};

// Line 95: range 000000001342185A-00000000134218AB
void __cdecl data::FungusCultivateExcelConfig::~FungusCultivateExcelConfig(
        data::FungusCultivateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusCultivateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusCultivateExcelConfig = v2;
  std::vector<std::vector<unsigned int>>::~vector(&this->preset_template);
};

// Line 95: range 00000000134218AC-00000000134218D6
void __cdecl data::FungusCultivateExcelConfig::~FungusCultivateExcelConfig(
        data::FungusCultivateExcelConfig *const this)
{
  data::FungusCultivateExcelConfig::~FungusCultivateExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 113: range 0000000012EC2F0A-0000000012EC2FEF
void __cdecl data::FungusPlotDungeonExcelConfig::FungusPlotDungeonExcelConfig(
        data::FungusPlotDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusPlotDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusPlotDungeonExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->plot_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->plot_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->plot_stage_id, v1);
  }
  this->plot_stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->valid_fungus_id_list);
  std::vector<unsigned int>::vector(&this->locked_fungus_id_list);
};

// Line 113: range 00000000133A459C-00000000133A4738
void __cdecl data::FungusPlotDungeonExcelConfig::FungusPlotDungeonExcelConfig(
        data::FungusPlotDungeonExcelConfig *const this,
        const data::FungusPlotDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t plot_stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  const data::FungusPlotDungeonExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FungusPlotDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusPlotDungeonExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->plot_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->plot_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->plot_stage_id);
  }
  plot_stage_id = a2->plot_stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->plot_stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->plot_stage_id, a2);
  }
  this->plot_stage_id = plot_stage_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->dungeon_id);
  }
  dungeon_id = v8->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->valid_fungus_id_list, &v8->valid_fungus_id_list);
  std::vector<unsigned int>::vector(&this->locked_fungus_id_list, &v8->locked_fungus_id_list);
};

// Line 116: range 00000000134217CC-000000001342182D
void __cdecl data::FungusPlotDungeonExcelConfig::~FungusPlotDungeonExcelConfig(
        data::FungusPlotDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusPlotDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusPlotDungeonExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->locked_fungus_id_list);
  std::vector<unsigned int>::~vector(&this->valid_fungus_id_list);
};

// Line 116: range 000000001342182E-0000000013421858
void __cdecl data::FungusPlotDungeonExcelConfig::~FungusPlotDungeonExcelConfig(
        data::FungusPlotDungeonExcelConfig *const this)
{
  data::FungusPlotDungeonExcelConfig::~FungusPlotDungeonExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 130: range 0000000012EC2FF0-0000000012EC3159
void __cdecl data::FungusBaseExcelConfig::FungusBaseExcelConfig(data::FungusBaseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FungusBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusBaseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_limit, v3);
  }
  this->skill_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_skill_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_skill_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_skill_count, v3);
  }
  this->initial_skill_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fungus_fighter_team_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fungus_fighter_team_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fungus_fighter_team_num, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->fungus_fighter_team_num = 0;
  std::string::basic_string(&this->skill_name);
  std::vector<unsigned int>::vector(&this->pool_id_list);
};

// Line 130: range 00000000133B0182-00000000133B0418
void __cdecl data::FungusBaseExcelConfig::FungusBaseExcelConfig(
        data::FungusBaseExcelConfig *const this,
        const data::FungusBaseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t skill_limit; // ecx
  char v7; // dl
  uint32_t initial_skill_count; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t fungus_fighter_team_num; // ecx
  char v12; // dl
  const data::FungusBaseExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FungusBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusBaseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->skill_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->skill_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->skill_limit);
  }
  skill_limit = v13->skill_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->skill_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->skill_limit, v5);
  }
  this->skill_limit = skill_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v13->initial_skill_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->initial_skill_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->initial_skill_count);
  }
  initial_skill_count = v13->initial_skill_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->initial_skill_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->initial_skill_count, v5);
  }
  this->initial_skill_count = initial_skill_count;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->fungus_fighter_team_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->fungus_fighter_team_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->fungus_fighter_team_num);
  }
  fungus_fighter_team_num = v13->fungus_fighter_team_num;
  v12 = *(_BYTE *)(((unsigned __int64)&this->fungus_fighter_team_num >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->fungus_fighter_team_num, v10);
  }
  this->fungus_fighter_team_num = fungus_fighter_team_num;
  std::string::basic_string(&this->skill_name, &v13->skill_name);
  std::vector<unsigned int>::vector(&this->pool_id_list, &v13->pool_id_list);
};

// Line 133: range 00000000134217A0-00000000134217CA
void __cdecl data::FungusBaseExcelConfig::~FungusBaseExcelConfig(data::FungusBaseExcelConfig *const this)
{
  data::FungusBaseExcelConfig::~FungusBaseExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 133: range 000000001342173E-000000001342179F
void __cdecl data::FungusBaseExcelConfig::~FungusBaseExcelConfig(data::FungusBaseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusBaseExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->pool_id_list);
  std::string::~string(&this->skill_name);
};

// Line 149: range 0000000012EC315A-0000000012EC3559
void __cdecl data::FungusTrainingDungeonExcelConfig::FungusTrainingDungeonExcelConfig(
        data::FungusTrainingDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FungusTrainingDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusTrainingDungeonExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1);
  }
  this->dungeon_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_count, v3);
  }
  this->round_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->training_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->training_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->training_type, v3);
  }
  this->training_type = FUNGUS_TRAINING_DUNGEON_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->training_stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->training_stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->training_stage_id, v4);
  }
  this->training_stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->valid_fungus_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->backup_fungus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->backup_fungus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->backup_fungus_num, v4);
  }
  this->backup_fungus_num = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fungus_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fungus_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fungus_group_id, v5);
  }
  this->fungus_group_id = 0;
  std::vector<unsigned int>::vector(&this->point_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_point_config_id, v5);
  }
  this->transfer_point_config_id = 0;
  v6 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defend_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defend_config_id, v6);
  }
  this->defend_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_score, v6);
  }
  this->base_score = 0.0;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_time_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_time_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_time_score, v7);
  }
  this->base_time_score = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_param, v7);
  }
  this->time_param = 0.0;
  v8 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_param, v8);
  }
  this->die_param = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->defend_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->defend_param, v8);
  }
  this->defend_param = 0.0;
};

// Line 149: range 00000000133B055A-00000000133B0CD1
void __cdecl data::FungusTrainingDungeonExcelConfig::FungusTrainingDungeonExcelConfig(
        data::FungusTrainingDungeonExcelConfig *const this,
        const data::FungusTrainingDungeonExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t round_count; // ecx
  char v7; // dl
  data::FungusTrainingDungeonType training_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t training_stage_id; // ecx
  char v12; // dl
  uint32_t gallery_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_valid_fungus_id_list; // rsi
  uint32_t backup_fungus_num; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t fungus_group_id; // ecx
  char v20; // dl
  std::vector<unsigned int> *p_point_config_id_list; // rsi
  uint32_t transfer_point_config_id; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t defend_config_id; // ecx
  char v26; // dl
  float base_score; // xmm0_4
  float base_time_score; // xmm0_4
  __int64 v29; // rsi
  float time_param; // xmm0_4
  float die_param; // xmm0_4
  __int64 v32; // rsi
  float defend_param; // xmm0_4
  const data::FungusTrainingDungeonExcelConfig *v34; // [rsp+0h] [rbp-20h]

  v34 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FungusTrainingDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FungusTrainingDungeonExcelConfig = v2;
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
  v5 = (((_BYTE)v34 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->round_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->round_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->round_count);
  }
  round_count = v34->round_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->round_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->round_count, v5);
  }
  this->round_count = round_count;
  if ( *(_BYTE *)(((unsigned __int64)&v34->training_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->training_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->training_type);
  }
  training_type = v34->training_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->training_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->training_type, v5);
  }
  this->training_type = training_type;
  v10 = (((_BYTE)v34 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->training_stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->training_stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->training_stage_id);
  }
  training_stage_id = v34->training_stage_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->training_stage_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->training_stage_id, v10);
  }
  this->training_stage_id = training_stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v34->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->gallery_id);
  }
  gallery_id = v34->gallery_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  p_valid_fungus_id_list = &v34->valid_fungus_id_list;
  std::vector<unsigned int>::vector(&this->valid_fungus_id_list, &v34->valid_fungus_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v34->backup_fungus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->backup_fungus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->backup_fungus_num);
  }
  backup_fungus_num = v34->backup_fungus_num;
  v17 = *(_BYTE *)(((unsigned __int64)&this->backup_fungus_num >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_valid_fungus_id_list) = v17 != 0;
    __asan_report_store4(&this->backup_fungus_num, p_valid_fungus_id_list);
  }
  this->backup_fungus_num = backup_fungus_num;
  v18 = (((_BYTE)v34 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->fungus_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->fungus_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->fungus_group_id);
  }
  fungus_group_id = v34->fungus_group_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->fungus_group_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->fungus_group_id, v18);
  }
  this->fungus_group_id = fungus_group_id;
  p_point_config_id_list = &v34->point_config_id_list;
  std::vector<unsigned int>::vector(&this->point_config_id_list, &v34->point_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v34->transfer_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->transfer_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->transfer_point_config_id);
  }
  transfer_point_config_id = v34->transfer_point_config_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->transfer_point_config_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_point_config_id_list) = v23 != 0;
    __asan_report_store4(&this->transfer_point_config_id, p_point_config_id_list);
  }
  this->transfer_point_config_id = transfer_point_config_id;
  v24 = (((_BYTE)v34 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v34->defend_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->defend_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->defend_config_id);
  }
  defend_config_id = v34->defend_config_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->defend_config_id >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  if ( v26 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v26 )
    __asan_report_store4(&this->defend_config_id, v24);
  this->defend_config_id = defend_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v34->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->base_score);
  }
  base_score = v34->base_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_score, v24);
  }
  this->base_score = base_score;
  if ( *(_BYTE *)(((unsigned __int64)&v34->base_time_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->base_time_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->base_time_score);
  }
  base_time_score = v34->base_time_score;
  v29 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_time_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_time_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_time_score, v29);
  }
  this->base_time_score = base_time_score;
  if ( *(_BYTE *)(((unsigned __int64)&v34->time_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->time_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->time_param);
  }
  time_param = v34->time_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_param, v29);
  }
  this->time_param = time_param;
  if ( *(_BYTE *)(((unsigned __int64)&v34->die_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v34 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->die_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v34->die_param);
  }
  die_param = v34->die_param;
  v32 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_param, v32);
  }
  this->die_param = die_param;
  if ( *(_BYTE *)(((unsigned __int64)&v34->defend_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->defend_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v34->defend_param);
  }
  defend_param = v34->defend_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->defend_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->defend_param, v32);
  }
  this->defend_param = defend_param;
};

// Line 152: range 00000000134216B0-0000000013421711
void __cdecl data::FungusTrainingDungeonExcelConfig::~FungusTrainingDungeonExcelConfig(
        data::FungusTrainingDungeonExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FungusTrainingDungeonExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FungusTrainingDungeonExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->point_config_id_list);
  std::vector<unsigned int>::~vector(&this->valid_fungus_id_list);
};

// Line 152: range 0000000013421712-000000001342173C
void __cdecl data::FungusTrainingDungeonExcelConfig::~FungusTrainingDungeonExcelConfig(
        data::FungusTrainingDungeonExcelConfig *const this)
{
  data::FungusTrainingDungeonExcelConfig::~FungusTrainingDungeonExcelConfig(this);
  operator delete(this, 0x78uLL);
};
