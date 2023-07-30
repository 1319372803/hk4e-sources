// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/LevelTagExcelConfig.gen.h

// Line 18: range 00000000147668C6-0000000014766A03
void __cdecl data::LevelTagExcelConfig::LevelTagExcelConfig(data::LevelTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->level_tag_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  std::vector<unsigned int>::vector(&this->add_scene_tag_id_list);
  std::vector<unsigned int>::vector(&this->remove_scene_tag_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_tag_fixed_enviro_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_tag_fixed_enviro_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_tag_fixed_enviro_time, v1);
  }
  this->level_tag_fixed_enviro_time = 0.0;
  std::vector<unsigned int>::vector(&this->load_dynamic_group_list);
};

// Line 18: range 0000000014D46AAE-0000000014D46D12
void __cdecl data::LevelTagExcelConfig::LevelTagExcelConfig(
        data::LevelTagExcelConfig *const this,
        const data::LevelTagExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_level_tag_name; // rsi
  uint32_t scene_id; // ecx
  char v7; // al
  float level_tag_fixed_enviro_time; // xmm0_4
  const data::LevelTagExcelConfig *v9; // [rsp+0h] [rbp-20h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LevelTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LevelTagExcelConfig = v2;
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
  p_level_tag_name = &v9->level_tag_name;
  std::string::basic_string(&this->level_tag_name, &v9->level_tag_name);
  if ( *(_BYTE *)(((unsigned __int64)&v9->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->scene_id);
  }
  scene_id = v9->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_level_tag_name) = v7 != 0;
    __asan_report_store4(&this->scene_id, p_level_tag_name);
  }
  this->scene_id = scene_id;
  std::vector<unsigned int>::vector(&this->add_scene_tag_id_list, &v9->add_scene_tag_id_list);
  std::vector<unsigned int>::vector(&this->remove_scene_tag_id_list, &v9->remove_scene_tag_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v9->level_tag_fixed_enviro_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->level_tag_fixed_enviro_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->level_tag_fixed_enviro_time);
  }
  level_tag_fixed_enviro_time = v9->level_tag_fixed_enviro_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_tag_fixed_enviro_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_tag_fixed_enviro_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_tag_fixed_enviro_time, &v9->remove_scene_tag_id_list);
  }
  this->level_tag_fixed_enviro_time = level_tag_fixed_enviro_time;
  std::vector<unsigned int>::vector(&this->load_dynamic_group_list, &v9->load_dynamic_group_list);
};

// Line 21: range 0000000014DE7DBA-0000000014DE7DE4
void __cdecl data::LevelTagExcelConfig::~LevelTagExcelConfig(data::LevelTagExcelConfig *const this)
{
  data::LevelTagExcelConfig::~LevelTagExcelConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 21: range 0000000014DE7D38-0000000014DE7DB9
void __cdecl data::LevelTagExcelConfig::~LevelTagExcelConfig(data::LevelTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->load_dynamic_group_list);
  std::vector<unsigned int>::~vector(&this->remove_scene_tag_id_list);
  std::vector<unsigned int>::~vector(&this->add_scene_tag_id_list);
  std::string::~string(&this->level_tag_name);
};

// Line 38: range 000000001477BC94-000000001477BCC4
data::LevelTagGroup *__cdecl data::LevelTagGroup::operator=(
        data::LevelTagGroup *const this,
        const data::LevelTagGroup *a2)
{
  std::vector<unsigned int>::operator=(&this->level_tag_id_list, &a2->level_tag_id_list);
  return this;
};

// Line 38: range 0000000014CBE184-0000000014CBE1D5
void __cdecl data::LevelTagGroup::LevelTagGroup(data::LevelTagGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagGroup = v2;
  std::vector<unsigned int>::vector(&this->level_tag_id_list);
};

// Line 38: range 0000000014D468B8-0000000014D46918
void __cdecl data::LevelTagGroup::LevelTagGroup(data::LevelTagGroup *const this, const data::LevelTagGroup *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LevelTagGroup = v2;
  std::vector<unsigned int>::vector(&this->level_tag_id_list, &a2->level_tag_id_list);
};

// Line 41: range 0000000014BFE28E-0000000014BFE2DF
void __cdecl data::LevelTagGroup::~LevelTagGroup(data::LevelTagGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagGroup = v2;
  std::vector<unsigned int>::~vector(&this->level_tag_id_list);
};

// Line 41: range 0000000014BFE2E0-0000000014BFE30A
void __cdecl data::LevelTagGroup::~LevelTagGroup(data::LevelTagGroup *const this)
{
  data::LevelTagGroup::~LevelTagGroup(this);
  operator delete(this, 0x20uLL);
};

// Line 50: range 0000000014CBE330-0000000014CBE391
void __cdecl data::CustomGadgetSlotGroup::CustomGadgetSlotGroup(data::CustomGadgetSlotGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetSlotGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomGadgetSlotGroup = v2;
  std::string::basic_string(&this->slot_identifier);
  std::vector<unsigned int>::vector(&this->slot_list);
};

// Line 50: range 0000000014D46988-0000000014D46A2A
void __cdecl data::CustomGadgetSlotGroup::CustomGadgetSlotGroup(
        data::CustomGadgetSlotGroup *const this,
        const data::CustomGadgetSlotGroup *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetSlotGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomGadgetSlotGroup = v2;
  std::string::basic_string(&this->slot_identifier, &a2->slot_identifier);
  std::vector<unsigned int>::vector(&this->slot_list, &a2->slot_list);
};

// Line 53: range 0000000014BFEF74-0000000014BFEF9E
void __cdecl data::CustomGadgetSlotGroup::~CustomGadgetSlotGroup(data::CustomGadgetSlotGroup *const this)
{
  data::CustomGadgetSlotGroup::~CustomGadgetSlotGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 53: range 0000000014BFEF12-0000000014BFEF73
void __cdecl data::CustomGadgetSlotGroup::~CustomGadgetSlotGroup(data::CustomGadgetSlotGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetSlotGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomGadgetSlotGroup = v2;
  std::vector<unsigned int>::~vector(&this->slot_list);
  std::string::~string(&this->slot_identifier);
};

// Line 63: range 0000000014766A58-0000000014766B35
void __cdecl data::LevelTagGroupsExcelConfig::LevelTagGroupsExcelConfig(data::LevelTagGroupsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagGroupsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::LevelTagGroup>::vector(&this->level_tag_group_list);
  std::vector<unsigned int>::vector(&this->initial_level_tag_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->change_cd, v1);
  }
  this->change_cd = 0;
};

// Line 63: range 0000000014D46E54-0000000014D46FE0
void __cdecl data::LevelTagGroupsExcelConfig::LevelTagGroupsExcelConfig(
        data::LevelTagGroupsExcelConfig *const this,
        const data::LevelTagGroupsExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_initial_level_tag_id_list; // rsi
  uint32_t change_cd; // ecx
  char v7; // al
  const data::LevelTagGroupsExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LevelTagGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LevelTagGroupsExcelConfig = v2;
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
  std::vector<data::LevelTagGroup>::vector(&this->level_tag_group_list, &v8->level_tag_group_list);
  p_initial_level_tag_id_list = &v8->initial_level_tag_id_list;
  std::vector<unsigned int>::vector(&this->initial_level_tag_id_list, &v8->initial_level_tag_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->change_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->change_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->change_cd);
  }
  change_cd = v8->change_cd;
  v7 = *(_BYTE *)(((unsigned __int64)&this->change_cd >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_initial_level_tag_id_list) = v7 != 0;
    __asan_report_store4(&this->change_cd, p_initial_level_tag_id_list);
  }
  this->change_cd = change_cd;
};

// Line 66: range 0000000014DE7D0C-0000000014DE7D36
void __cdecl data::LevelTagGroupsExcelConfig::~LevelTagGroupsExcelConfig(data::LevelTagGroupsExcelConfig *const this)
{
  data::LevelTagGroupsExcelConfig::~LevelTagGroupsExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 66: range 0000000014DE7CAA-0000000014DE7D0B
void __cdecl data::LevelTagGroupsExcelConfig::~LevelTagGroupsExcelConfig(data::LevelTagGroupsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagGroupsExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->initial_level_tag_id_list);
  std::vector<data::LevelTagGroup>::~vector(&this->level_tag_group_list);
};

// Line 80: range 0000000014766B36-0000000014766C0B
void __cdecl data::LevelTagResetExcelConfig::LevelTagResetExcelConfig(data::LevelTagResetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagResetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagResetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->series_id_list);
};

// Line 80: range 0000000014D47122-0000000014D4727C
void __cdecl data::LevelTagResetExcelConfig::LevelTagResetExcelConfig(
        data::LevelTagResetExcelConfig *const this,
        const data::LevelTagResetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  const data::LevelTagResetExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LevelTagResetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LevelTagResetExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->series_id_list, &v8->series_id_list);
};

// Line 83: range 0000000014DE7C7E-0000000014DE7CA8
void __cdecl data::LevelTagResetExcelConfig::~LevelTagResetExcelConfig(data::LevelTagResetExcelConfig *const this)
{
  data::LevelTagResetExcelConfig::~LevelTagResetExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 83: range 0000000014DE7C2C-0000000014DE7C7D
void __cdecl data::LevelTagResetExcelConfig::~LevelTagResetExcelConfig(data::LevelTagResetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagResetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagResetExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->series_id_list);
};

// Line 96: range 0000000014766C60-0000000014766D73
void __cdecl data::CustomGadgetSlotLevelTagConfig::CustomGadgetSlotLevelTagConfig(
        data::CustomGadgetSlotLevelTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetSlotLevelTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomGadgetSlotLevelTagConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::CustomGadgetSlotGroup>::vector(&this->slot_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_tag_id, v1);
  }
  this->level_tag_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->gadget_id = 0;
};

// Line 96: range 0000000014D473BE-0000000014D4758D
void __cdecl data::CustomGadgetSlotLevelTagConfig::CustomGadgetSlotLevelTagConfig(
        data::CustomGadgetSlotLevelTagConfig *const this,
        const data::CustomGadgetSlotLevelTagConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::CustomGadgetSlotGroup> *p_slot_map; // rsi
  uint32_t level_tag_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t gadget_id; // ecx
  char v10; // dl
  const data::CustomGadgetSlotLevelTagConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetSlotLevelTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CustomGadgetSlotLevelTagConfig = v2;
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
  p_slot_map = &v11->slot_map;
  std::vector<data::CustomGadgetSlotGroup>::vector(&this->slot_map, &v11->slot_map);
  if ( *(_BYTE *)(((unsigned __int64)&v11->level_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->level_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->level_tag_id);
  }
  level_tag_id = v11->level_tag_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_slot_map) = v7 != 0;
    __asan_report_store4(&this->level_tag_id, p_slot_map);
  }
  this->level_tag_id = level_tag_id;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->gadget_id);
  }
  gadget_id = v11->gadget_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->gadget_id, v8);
  }
  this->gadget_id = gadget_id;
};

// Line 99: range 0000000014DE7C00-0000000014DE7C2A
void __cdecl data::CustomGadgetSlotLevelTagConfig::~CustomGadgetSlotLevelTagConfig(
        data::CustomGadgetSlotLevelTagConfig *const this)
{
  data::CustomGadgetSlotLevelTagConfig::~CustomGadgetSlotLevelTagConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 99: range 0000000014DE7BAE-0000000014DE7BFF
void __cdecl data::CustomGadgetSlotLevelTagConfig::~CustomGadgetSlotLevelTagConfig(
        data::CustomGadgetSlotLevelTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CustomGadgetSlotLevelTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CustomGadgetSlotLevelTagConfig = v2;
  std::vector<data::CustomGadgetSlotGroup>::~vector(&this->slot_map);
};
