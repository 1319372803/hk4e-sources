// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityGroupLinksExcelConfig.gen.h

// Line 97: range 0000000012EC8396-0000000012EC8425
void __cdecl data::ActivityGroupLinksExcelConfig::ActivityGroupLinksExcelConfig(
        data::ActivityGroupLinksExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGroupLinksExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGroupLinksExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->link_id, v1);
  }
  this->link_id = 0;
  std::vector<unsigned int>::vector(&this->set_list);
};

// Line 97: range 00000000133B823E-00000000133B8313
void __cdecl data::ActivityGroupLinksExcelConfig::ActivityGroupLinksExcelConfig(
        data::ActivityGroupLinksExcelConfig *const this,
        const data::ActivityGroupLinksExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t link_id; // ecx
  char v4; // al
  const data::ActivityGroupLinksExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGroupLinksExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGroupLinksExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->link_id);
  }
  link_id = a2->link_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->link_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->link_id, a2);
  }
  this->link_id = link_id;
  std::vector<unsigned int>::vector(&this->set_list, &v5->set_list);
};

// Line 100: range 000000001342409E-00000000134240EF
void __cdecl data::ActivityGroupLinksExcelConfig::~ActivityGroupLinksExcelConfig(
        data::ActivityGroupLinksExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGroupLinksExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGroupLinksExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->set_list);
};

// Line 100: range 00000000134240F0-000000001342411A
void __cdecl data::ActivityGroupLinksExcelConfig::~ActivityGroupLinksExcelConfig(
        data::ActivityGroupLinksExcelConfig *const this)
{
  data::ActivityGroupLinksExcelConfig::~ActivityGroupLinksExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 112: range 0000000012EC8426-0000000012EC877C
void __cdecl data::GroupLinksBundleExcelConfig::GroupLinksBundleExcelConfig(
        data::GroupLinksBundleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GroupLinksBundleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GroupLinksBundleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->link_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->link_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->link_type, v3);
  }
  this->link_type = DISCRETE;
  std::vector<unsigned int>::vector(&this->group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_group, v3);
  }
  this->hint_group = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hint_radius, v4);
  }
  this->hint_radius = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_type, v4);
  }
  this->reward_type = NONE_17;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level, v5);
  }
  this->revise_level = 0;
  v6 = ((_BYTE)this + 60) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_default_activate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_default_activate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_default_activate, v6, v7);
  this->is_default_activate = 0;
  v8 = ((_BYTE)this + 61) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->auto_tracing_after_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->auto_tracing_after_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->auto_tracing_after_active, v8, v9);
  this->auto_tracing_after_active = 0;
  v10 = ((_BYTE)this + 62) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_default_show_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_default_show_mark >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_default_show_mark, v10, v11);
  this->is_default_show_mark = 0;
  v12 = ((_BYTE)this + 63) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->show_area_on_map >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->show_area_on_map >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->show_area_on_map, v12, v13);
  this->show_area_on_map = 0;
  if ( *(char *)(((unsigned __int64)&this->always_show_area >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->always_show_area, v12, &this->always_show_area);
  this->always_show_area = 0;
};

// Line 112: range 00000000133B8454-00000000133B8A8D
void __cdecl data::GroupLinksBundleExcelConfig::GroupLinksBundleExcelConfig(
        data::GroupLinksBundleExcelConfig *const this,
        const data::GroupLinksBundleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ActivityGroupLinkType link_type; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_group_list; // rsi
  uint32_t hint_group; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t hint_radius; // ecx
  char v13; // dl
  data::ActivityGroupLinkRewardType reward_type; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t reward_id; // ecx
  char v18; // dl
  uint32_t revise_level; // ecx
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool is_default_activate; // cl
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  bool auto_tracing_after_active; // cl
  char v29; // dl
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool is_default_show_mark; // cl
  char v34; // dl
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  bool show_area_on_map; // cl
  char v39; // dl
  __int64 v40; // rdx
  bool always_show_area; // cl
  char v42; // al
  const data::GroupLinksBundleExcelConfig *v43; // [rsp+0h] [rbp-10h]

  v43 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GroupLinksBundleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GroupLinksBundleExcelConfig = v2;
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
  v5 = (((_BYTE)v43 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->link_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->link_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->link_type);
  }
  link_type = v43->link_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->link_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->link_type, v5);
  }
  this->link_type = link_type;
  p_group_list = &v43->group_list;
  std::vector<unsigned int>::vector(&this->group_list, &v43->group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v43->hint_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->hint_group >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->hint_group);
  }
  hint_group = v43->hint_group;
  v10 = *(_BYTE *)(((unsigned __int64)&this->hint_group >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_group_list) = v10 != 0;
    __asan_report_store4(&this->hint_group, p_group_list);
  }
  this->hint_group = hint_group;
  v11 = (((_BYTE)v43 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->hint_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->hint_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->hint_radius);
  }
  hint_radius = v43->hint_radius;
  v13 = *(_BYTE *)(((unsigned __int64)&this->hint_radius >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->hint_radius, v11);
  }
  this->hint_radius = hint_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v43->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->reward_type);
  }
  reward_type = v43->reward_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->reward_type, v11);
  }
  this->reward_type = reward_type;
  v16 = (((_BYTE)v43 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v43->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v43 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v43->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v43->reward_id);
  }
  reward_id = v43->reward_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->reward_id, v16);
  }
  this->reward_id = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v43->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v43->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v43->revise_level);
  }
  revise_level = v43->revise_level;
  v20 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->revise_level, v16);
  }
  this->revise_level = revise_level;
  v21 = ((_BYTE)v43 + 60) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&v43->is_default_activate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&v43->is_default_activate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&v43->is_default_activate, v21, v22);
  is_default_activate = v43->is_default_activate;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_default_activate >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_default_activate, v21, v25);
  this->is_default_activate = is_default_activate;
  v26 = ((_BYTE)v43 + 61) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&v43->auto_tracing_after_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&v43->auto_tracing_after_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&v43->auto_tracing_after_active, v26, v27);
  auto_tracing_after_active = v43->auto_tracing_after_active;
  v29 = *(_BYTE *)(((unsigned __int64)&this->auto_tracing_after_active >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v29 != 0;
  v30 = (v29 != 0) & (unsigned __int8)((((unsigned __int8)this + 61) & 7) >= v29);
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->auto_tracing_after_active, v26, v30);
  this->auto_tracing_after_active = auto_tracing_after_active;
  v31 = ((_BYTE)v43 + 62) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v43->is_default_show_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v43->is_default_show_mark >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v43->is_default_show_mark, v31, v32);
  is_default_show_mark = v43->is_default_show_mark;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_default_show_mark >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this + 62) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->is_default_show_mark, v31, v35);
  this->is_default_show_mark = is_default_show_mark;
  v36 = ((_BYTE)v43 + 63) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&v43->show_area_on_map >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&v43->show_area_on_map >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&v43->show_area_on_map, v36, v37);
  show_area_on_map = v43->show_area_on_map;
  v39 = *(_BYTE *)(((unsigned __int64)&this->show_area_on_map >> 3) + 0x7FFF8000);
  LOBYTE(v36) = v39 != 0;
  v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this + 63) & 7) >= v39);
  if ( (_BYTE)v40 )
    __asan_report_store1(&this->show_area_on_map, v36, v40);
  this->show_area_on_map = show_area_on_map;
  if ( *(char *)(((unsigned __int64)&v43->always_show_area >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v43->always_show_area, v36, &v43->always_show_area);
  always_show_area = v43->always_show_area;
  v42 = *(_BYTE *)(((unsigned __int64)&this->always_show_area >> 3) + 0x7FFF8000);
  if ( v42 < 0 )
  {
    LOBYTE(v36) = v42 != 0;
    __asan_report_store1(&this->always_show_area, v36, &this->always_show_area);
  }
  this->always_show_area = always_show_area;
};

// Line 115: range 0000000013424020-0000000013424071
void __cdecl data::GroupLinksBundleExcelConfig::~GroupLinksBundleExcelConfig(
        data::GroupLinksBundleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GroupLinksBundleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GroupLinksBundleExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->group_list);
};

// Line 115: range 0000000013424072-000000001342409C
void __cdecl data::GroupLinksBundleExcelConfig::~GroupLinksBundleExcelConfig(
        data::GroupLinksBundleExcelConfig *const this)
{
  data::GroupLinksBundleExcelConfig::~GroupLinksBundleExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 138: range 00000000133B8BCE-00000000133B8D82
void __cdecl data::GroupLinksBundleRewardExcelConfig::GroupLinksBundleRewardExcelConfig(
        data::GroupLinksBundleRewardExcelConfig *const this,
        const data::GroupLinksBundleRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t reward_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_preview_id; // ecx
  char v7; // dl
  uint32_t drop_id; // ecx
  char v9; // al
  const data::GroupLinksBundleRewardExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GroupLinksBundleRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GroupLinksBundleRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_id);
  }
  reward_id = a2->reward_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->reward_id, a2);
  }
  this->reward_id = reward_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->reward_preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->reward_preview_id);
  }
  reward_preview_id = v10->reward_preview_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_preview_id, v5);
  }
  this->reward_preview_id = reward_preview_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->drop_id);
  }
  drop_id = v10->drop_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->drop_id, v5);
  }
  this->drop_id = drop_id;
};

// Line 141: range 0000000013423FB2-0000000013423FF3
void __cdecl data::GroupLinksBundleRewardExcelConfig::~GroupLinksBundleRewardExcelConfig(
        data::GroupLinksBundleRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GroupLinksBundleRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GroupLinksBundleRewardExcelConfig = v2;
};

// Line 141: range 0000000013423FF4-000000001342401E
void __cdecl data::GroupLinksBundleRewardExcelConfig::~GroupLinksBundleRewardExcelConfig(
        data::GroupLinksBundleRewardExcelConfig *const this)
{
  data::GroupLinksBundleRewardExcelConfig::~GroupLinksBundleRewardExcelConfig(this);
  operator delete(this, 0x18uLL);
};
