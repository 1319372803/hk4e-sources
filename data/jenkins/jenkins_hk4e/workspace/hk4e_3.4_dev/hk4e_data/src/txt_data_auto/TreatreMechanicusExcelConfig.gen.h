// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TreatreMechanicusExcelConfig.gen.h

// Line 100: range 000000000CE1F4FA-000000000CE1F8C4
void __cdecl data::MechanicBuildingExcelConfig::MechanicBuildingExcelConfig(
        data::MechanicBuildingExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  std::any *p_global_value_map; // rcx
  int v12; // r8d
  char v13; // dl
  char v14[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MechanicBuildingExcelConfig::MechanicBuildingExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = (int (**)(...))(&`vtable for'data::MechanicBuildingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicBuildingExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v6);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_effect_level1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_effect_level1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_effect_level1, v6);
  }
  this->special_effect_level1 = 0;
  v7 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_effect_level2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_effect_level2 >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_effect_level2, v7);
  }
  this->special_effect_level2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_effect_id1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_effect_id1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_effect_id1, v7);
  }
  this->special_effect_id1 = 0;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_effect_id2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_effect_id2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_effect_id2, v8);
  }
  this->special_effect_id2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_level, v8);
  }
  this->max_level = 0;
  std::vector<data::SGVConfig>::vector(&this->open_conds);
  if ( *(_BYTE *)(((unsigned __int64)&this->build_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->build_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->build_limit, v8);
  }
  this->build_limit = 0;
  v9 = ((_BYTE)this + 68) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_enable_rotate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_enable_rotate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_enable_rotate, v9, v10);
  this->is_enable_rotate = 0;
  p_global_value_map = &this->global_value_map;
  v12 = 0;
  v13 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)(((v2 + 32) & 7) + 3) >= v13 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(v2 + 32, v9);
  }
  *(_DWORD *)(v2 + 32) = v12;
  std::any::any<int,int,std::any::_Manager_internal<int>,true,true>(p_global_value_map, (int *)(v2 + 32));
  std::vector<unsigned int>::vector(&this->default_dungeon_list);
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 100: range 000000000D378348-000000000D378872
void __cdecl data::MechanicBuildingExcelConfig::MechanicBuildingExcelConfig(
        data::MechanicBuildingExcelConfig *const this,
        const data::MechanicBuildingExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  uint32_t special_effect_level1; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t special_effect_level2; // ecx
  char v12; // dl
  uint32_t special_effect_id1; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t special_effect_id2; // ecx
  char v17; // dl
  uint32_t max_level; // ecx
  char v19; // al
  std::vector<data::SGVConfig> *p_open_conds; // rsi
  uint32_t build_limit; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_enable_rotate; // cl
  char v26; // dl
  __int64 v27; // rdx
  const data::MechanicBuildingExcelConfig *v28; // [rsp+0h] [rbp-20h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicBuildingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicBuildingExcelConfig = v2;
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
  v5 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->gadget_id);
  }
  gadget_id = v28->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->special_effect_level1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->special_effect_level1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->special_effect_level1);
  }
  special_effect_level1 = v28->special_effect_level1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->special_effect_level1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->special_effect_level1, v5);
  }
  this->special_effect_level1 = special_effect_level1;
  v10 = (((_BYTE)v28 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->special_effect_level2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->special_effect_level2 >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->special_effect_level2);
  }
  special_effect_level2 = v28->special_effect_level2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->special_effect_level2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->special_effect_level2, v10);
  }
  this->special_effect_level2 = special_effect_level2;
  if ( *(_BYTE *)(((unsigned __int64)&v28->special_effect_id1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->special_effect_id1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->special_effect_id1);
  }
  special_effect_id1 = v28->special_effect_id1;
  v14 = *(_BYTE *)(((unsigned __int64)&this->special_effect_id1 >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->special_effect_id1, v10);
  }
  this->special_effect_id1 = special_effect_id1;
  v15 = (((_BYTE)v28 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->special_effect_id2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->special_effect_id2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->special_effect_id2);
  }
  special_effect_id2 = v28->special_effect_id2;
  v17 = *(_BYTE *)(((unsigned __int64)&this->special_effect_id2 >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->special_effect_id2, v15);
  }
  this->special_effect_id2 = special_effect_id2;
  if ( *(_BYTE *)(((unsigned __int64)&v28->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->max_level);
  }
  max_level = v28->max_level;
  v19 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->max_level, v15);
  }
  this->max_level = max_level;
  p_open_conds = &v28->open_conds;
  std::vector<data::SGVConfig>::vector(&this->open_conds, &v28->open_conds);
  if ( *(_BYTE *)(((unsigned __int64)&v28->build_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->build_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->build_limit);
  }
  build_limit = v28->build_limit;
  v22 = *(_BYTE *)(((unsigned __int64)&this->build_limit >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_open_conds) = v22 != 0;
    __asan_report_store4(&this->build_limit, p_open_conds);
  }
  this->build_limit = build_limit;
  v23 = ((_BYTE)v28 + 68) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v28->is_enable_rotate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v28->is_enable_rotate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v28->is_enable_rotate, v23, v24);
  is_enable_rotate = v28->is_enable_rotate;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_enable_rotate >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_enable_rotate, v23, v27);
  this->is_enable_rotate = is_enable_rotate;
  std::any::any(&this->global_value_map, &v28->global_value_map);
  std::vector<unsigned int>::vector(&this->default_dungeon_list, &v28->default_dungeon_list);
};

// Line 103: range 000000000D491E4E-000000000D491E78
void __cdecl data::MechanicBuildingExcelConfig::~MechanicBuildingExcelConfig(
        data::MechanicBuildingExcelConfig *const this)
{
  data::MechanicBuildingExcelConfig::~MechanicBuildingExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 103: range 000000000D491DDC-000000000D491E4D
void __cdecl data::MechanicBuildingExcelConfig::~MechanicBuildingExcelConfig(
        data::MechanicBuildingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicBuildingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicBuildingExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->default_dungeon_list);
  std::any::~any(&this->global_value_map);
  std::vector<data::SGVConfig>::~vector(&this->open_conds);
};

// Line 125: range 000000000CE1F8C6-000000000CE1FA9B
void __cdecl data::MechanicusExcelConfig::MechanicusExcelConfig(data::MechanicusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MechanicusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mechanicus_id, v1);
  }
  this->mechanicus_id = 0;
  std::vector<unsigned int>::vector(&this->sequence_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->ticket_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ticket_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ticket_item_id, v1);
  }
  this->ticket_item_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ticket_cost_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ticket_cost_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ticket_cost_count, v3);
  }
  this->ticket_cost_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_player_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_player_limit, v3);
  }
  this->match_player_limit = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->teach_difficult_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->teach_difficult_level, v4);
  }
  this->teach_difficult_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_time, v4);
  }
  this->punish_time = 0;
};

// Line 125: range 000000000D3789B4-000000000D378CF2
void __cdecl data::MechanicusExcelConfig::MechanicusExcelConfig(
        data::MechanicusExcelConfig *const this,
        const data::MechanicusExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t mechanicus_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_sequence_list; // rsi
  uint32_t ticket_item_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t ticket_cost_count; // ecx
  char v10; // dl
  uint32_t match_player_limit; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t teach_difficult_level; // ecx
  char v15; // dl
  uint32_t punish_time; // ecx
  char v17; // al
  const data::MechanicusExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mechanicus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mechanicus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mechanicus_id);
  }
  mechanicus_id = a2->mechanicus_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mechanicus_id, a2);
  }
  this->mechanicus_id = mechanicus_id;
  p_sequence_list = &v18->sequence_list;
  std::vector<unsigned int>::vector(&this->sequence_list, &v18->sequence_list);
  if ( *(_BYTE *)(((unsigned __int64)&v18->ticket_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->ticket_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->ticket_item_id);
  }
  ticket_item_id = v18->ticket_item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->ticket_item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_sequence_list) = v7 != 0;
    __asan_report_store4(&this->ticket_item_id, p_sequence_list);
  }
  this->ticket_item_id = ticket_item_id;
  v8 = (((_BYTE)v18 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->ticket_cost_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->ticket_cost_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->ticket_cost_count);
  }
  ticket_cost_count = v18->ticket_cost_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->ticket_cost_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->ticket_cost_count, v8);
  }
  this->ticket_cost_count = ticket_cost_count;
  if ( *(_BYTE *)(((unsigned __int64)&v18->match_player_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->match_player_limit);
  }
  match_player_limit = v18->match_player_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->match_player_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->match_player_limit, v8);
  }
  this->match_player_limit = match_player_limit;
  v13 = (((_BYTE)v18 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->teach_difficult_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->teach_difficult_level);
  }
  teach_difficult_level = v18->teach_difficult_level;
  v15 = *(_BYTE *)(((unsigned __int64)&this->teach_difficult_level >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->teach_difficult_level, v13);
  }
  this->teach_difficult_level = teach_difficult_level;
  if ( *(_BYTE *)(((unsigned __int64)&v18->punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->punish_time);
  }
  punish_time = v18->punish_time;
  v17 = *(_BYTE *)(((unsigned __int64)&this->punish_time >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->punish_time, v13);
  }
  this->punish_time = punish_time;
};

// Line 128: range 000000000D491DB0-000000000D491DDA
void __cdecl data::MechanicusExcelConfig::~MechanicusExcelConfig(data::MechanicusExcelConfig *const this)
{
  data::MechanicusExcelConfig::~MechanicusExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 128: range 000000000D491D5E-000000000D491DAF
void __cdecl data::MechanicusExcelConfig::~MechanicusExcelConfig(data::MechanicusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->sequence_list);
};

// Line 145: range 000000000CE1FA9C-000000000CE1FC33
void __cdecl data::MechanicusSequenceExcelConfig::MechanicusSequenceExcelConfig(
        data::MechanicusSequenceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MechanicusSequenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusSequenceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sequence_id, v1);
  }
  this->sequence_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mechanicus_id, v3);
  }
  this->mechanicus_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_level, v3);
  }
  this->open_level = 0;
  std::vector<unsigned int>::vector(&this->open_gear_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_level_limite >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_level_limite >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_level_limite, v3);
  }
  this->gear_level_limite = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_money_limite >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gear_money_limite >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gear_money_limite, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->gear_money_limite = 0;
};

// Line 145: range 000000000D378E34-000000000D3790FD
void __cdecl data::MechanicusSequenceExcelConfig::MechanicusSequenceExcelConfig(
        data::MechanicusSequenceExcelConfig *const this,
        const data::MechanicusSequenceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sequence_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t mechanicus_id; // ecx
  char v7; // dl
  uint32_t open_level; // ecx
  char v9; // al
  std::vector<unsigned int> *p_open_gear_list; // rsi
  uint32_t gear_level_limite; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t gear_money_limite; // ecx
  char v15; // dl
  const data::MechanicusSequenceExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusSequenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusSequenceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sequence_id);
  }
  sequence_id = a2->sequence_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sequence_id, a2);
  }
  this->sequence_id = sequence_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->mechanicus_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->mechanicus_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->mechanicus_id);
  }
  mechanicus_id = v16->mechanicus_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->mechanicus_id, v5);
  }
  this->mechanicus_id = mechanicus_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->open_level);
  }
  open_level = v16->open_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_level, v5);
  }
  this->open_level = open_level;
  p_open_gear_list = &v16->open_gear_list;
  std::vector<unsigned int>::vector(&this->open_gear_list, &v16->open_gear_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->gear_level_limite >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->gear_level_limite >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->gear_level_limite);
  }
  gear_level_limite = v16->gear_level_limite;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gear_level_limite >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_open_gear_list) = v12 != 0;
    __asan_report_store4(&this->gear_level_limite, p_open_gear_list);
  }
  this->gear_level_limite = gear_level_limite;
  v13 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->gear_money_limite >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->gear_money_limite >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->gear_money_limite);
  }
  gear_money_limite = v16->gear_money_limite;
  v15 = *(_BYTE *)(((unsigned __int64)&this->gear_money_limite >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->gear_money_limite, v13);
  }
  this->gear_money_limite = gear_money_limite;
};

// Line 148: range 000000000D491CE0-000000000D491D31
void __cdecl data::MechanicusSequenceExcelConfig::~MechanicusSequenceExcelConfig(
        data::MechanicusSequenceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusSequenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusSequenceExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->open_gear_list);
};

// Line 148: range 000000000D491D32-000000000D491D5C
void __cdecl data::MechanicusSequenceExcelConfig::~MechanicusSequenceExcelConfig(
        data::MechanicusSequenceExcelConfig *const this)
{
  data::MechanicusSequenceExcelConfig::~MechanicusSequenceExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 164: range 000000000CE1FC34-000000000CE1FD81
void __cdecl data::MechanicusMapExcelConfig::MechanicusMapExcelConfig(data::MechanicusMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusMapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mechanicus_map_id, v1);
  }
  this->mechanicus_map_id = 0;
  std::string::basic_string(&this->map_name);
  std::string::basic_string(&this->desc);
  std::string::basic_string(&this->unlock_tips);
  std::string::basic_string(&this->map_icon_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->build_gear_limit, v1);
  }
  this->build_gear_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->dungeon_id = 0;
};

// Line 164: range 000000000D37923E-000000000D3794C3
void __cdecl data::MechanicusMapExcelConfig::MechanicusMapExcelConfig(
        data::MechanicusMapExcelConfig *const this,
        const data::MechanicusMapExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t mechanicus_map_id; // ecx
  char v4; // al
  std::string *p_map_icon_path; // rsi
  uint32_t build_gear_limit; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t dungeon_id; // ecx
  char v10; // dl
  const data::MechanicusMapExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusMapExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mechanicus_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mechanicus_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mechanicus_map_id);
  }
  mechanicus_map_id = a2->mechanicus_map_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mechanicus_map_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mechanicus_map_id, a2);
  }
  this->mechanicus_map_id = mechanicus_map_id;
  std::string::basic_string(&this->map_name, &v11->map_name);
  std::string::basic_string(&this->desc, &v11->desc);
  std::string::basic_string(&this->unlock_tips, &v11->unlock_tips);
  p_map_icon_path = &v11->map_icon_path;
  std::string::basic_string(&this->map_icon_path, &v11->map_icon_path);
  if ( *(_BYTE *)(((unsigned __int64)&v11->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->build_gear_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->build_gear_limit);
  }
  build_gear_limit = v11->build_gear_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_map_icon_path) = v7 != 0;
    __asan_report_store4(&this->build_gear_limit, p_map_icon_path);
  }
  this->build_gear_limit = build_gear_limit;
  v8 = (((_BYTE)v11 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->dungeon_id);
  }
  dungeon_id = v11->dungeon_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->dungeon_id, v8);
  }
  this->dungeon_id = dungeon_id;
};

// Line 167: range 000000000D491CB4-000000000D491CDE
void __cdecl data::MechanicusMapExcelConfig::~MechanicusMapExcelConfig(data::MechanicusMapExcelConfig *const this)
{
  data::MechanicusMapExcelConfig::~MechanicusMapExcelConfig(this);
  operator delete(this, 0x98uLL);
};

// Line 167: range 000000000D491C32-000000000D491CB3
void __cdecl data::MechanicusMapExcelConfig::~MechanicusMapExcelConfig(data::MechanicusMapExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusMapExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusMapExcelConfig = v2;
  std::string::~string(&this->map_icon_path);
  std::string::~string(&this->unlock_tips);
  std::string::~string(&this->desc);
  std::string::~string(&this->map_name);
};

// Line 184: range 000000000D12F05C-000000000D12F3B0
data::MechanicusGearLevelUpExcelConfig *__cdecl data::MechanicusGearLevelUpExcelConfig::operator=(
        data::MechanicusGearLevelUpExcelConfig *const this,
        const data::MechanicusGearLevelUpExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t gear_id; // ecx
  char v6; // dl
  uint32_t gear_level; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t gear_level_up_money; // ecx
  char v11; // dl
  uint32_t build_cost; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t demolition_refund; // ecx
  char v16; // dl
  const data::MechanicusGearLevelUpExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gear_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gear_id);
  }
  gear_id = v18->gear_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gear_id, v4);
  }
  this->gear_id = gear_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->gear_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->gear_level);
  }
  gear_level = v18->gear_level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->gear_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->gear_level, v4);
  }
  this->gear_level = gear_level;
  v9 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_level_up_money >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gear_level_up_money >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gear_level_up_money);
  }
  gear_level_up_money = v18->gear_level_up_money;
  v11 = *(_BYTE *)(((unsigned __int64)&this->gear_level_up_money >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->gear_level_up_money, v9);
  }
  this->gear_level_up_money = gear_level_up_money;
  if ( *(_BYTE *)(((unsigned __int64)&v18->build_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->build_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->build_cost);
  }
  build_cost = v18->build_cost;
  v13 = *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->build_cost, v9);
  }
  this->build_cost = build_cost;
  v14 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->demolition_refund >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->demolition_refund >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->demolition_refund);
  }
  demolition_refund = v18->demolition_refund;
  v16 = *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->demolition_refund, v14);
  }
  this->demolition_refund = demolition_refund;
  std::vector<data::SGVConfig>::operator=(&this->global_value_param, &v18->global_value_param);
  std::any::operator=(&this->global_value_map, &v18->global_value_map);
  std::vector<unsigned int>::operator=(&this->effect_list, &v18->effect_list);
  return this;
};

// Line 184: range 000000000CE1FD82-000000000CE20090
void __cdecl data::MechanicusGearLevelUpExcelConfig::MechanicusGearLevelUpExcelConfig(
        data::MechanicusGearLevelUpExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  std::any *p_global_value_map; // rcx
  int v10; // r8d
  char v11; // dl
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MechanicusGearLevelUpExcelConfig::MechanicusGearLevelUpExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = (int (**)(...))(&`vtable for'data::MechanicusGearLevelUpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusGearLevelUpExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gear_id, v6);
  }
  this->gear_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_level, v6);
  }
  this->gear_level = 0;
  v7 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_level_up_money >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gear_level_up_money >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gear_level_up_money, v7);
  }
  this->gear_level_up_money = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->build_cost, v7);
  }
  this->build_cost = 0;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->demolition_refund, v8);
  }
  this->demolition_refund = 0;
  std::vector<data::SGVConfig>::vector(&this->global_value_param);
  p_global_value_map = &this->global_value_map;
  v10 = 0;
  v11 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)(((v2 + 32) & 7) + 3) >= v11 )
  {
    LOBYTE(v8) = v11 != 0;
    __asan_report_store4(v2 + 32, v8);
  }
  *(_DWORD *)(v2 + 32) = v10;
  std::any::any<int,int,std::any::_Manager_internal<int>,true,true>(p_global_value_map, (int *)(v2 + 32));
  std::vector<unsigned int>::vector(&this->effect_list);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 184: range 000000000D03D806-000000000D03DBC6
void __cdecl data::MechanicusGearLevelUpExcelConfig::MechanicusGearLevelUpExcelConfig(
        data::MechanicusGearLevelUpExcelConfig *const this,
        const data::MechanicusGearLevelUpExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gear_id; // ecx
  char v7; // dl
  uint32_t gear_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gear_level_up_money; // ecx
  char v12; // dl
  uint32_t build_cost; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t demolition_refund; // ecx
  char v17; // dl
  const data::MechanicusGearLevelUpExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusGearLevelUpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusGearLevelUpExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gear_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gear_id);
  }
  gear_id = v18->gear_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gear_id, v5);
  }
  this->gear_id = gear_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->gear_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->gear_level);
  }
  gear_level = v18->gear_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gear_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gear_level, v5);
  }
  this->gear_level = gear_level;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_level_up_money >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gear_level_up_money >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gear_level_up_money);
  }
  gear_level_up_money = v18->gear_level_up_money;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gear_level_up_money >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gear_level_up_money, v10);
  }
  this->gear_level_up_money = gear_level_up_money;
  if ( *(_BYTE *)(((unsigned __int64)&v18->build_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->build_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->build_cost);
  }
  build_cost = v18->build_cost;
  v14 = *(_BYTE *)(((unsigned __int64)&this->build_cost >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->build_cost, v10);
  }
  this->build_cost = build_cost;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->demolition_refund >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->demolition_refund >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->demolition_refund);
  }
  demolition_refund = v18->demolition_refund;
  v17 = *(_BYTE *)(((unsigned __int64)&this->demolition_refund >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->demolition_refund, v15);
  }
  this->demolition_refund = demolition_refund;
  std::vector<data::SGVConfig>::vector(&this->global_value_param, &v18->global_value_param);
  std::any::any(&this->global_value_map, &v18->global_value_map);
  std::vector<unsigned int>::vector(&this->effect_list, &v18->effect_list);
};

// Line 187: range 000000000D491C06-000000000D491C30
void __cdecl data::MechanicusGearLevelUpExcelConfig::~MechanicusGearLevelUpExcelConfig(
        data::MechanicusGearLevelUpExcelConfig *const this)
{
  data::MechanicusGearLevelUpExcelConfig::~MechanicusGearLevelUpExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 187: range 000000000D491B94-000000000D491C05
void __cdecl data::MechanicusGearLevelUpExcelConfig::~MechanicusGearLevelUpExcelConfig(
        data::MechanicusGearLevelUpExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusGearLevelUpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusGearLevelUpExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->effect_list);
  std::any::~any(&this->global_value_map);
  std::vector<data::SGVConfig>::~vector(&this->global_value_param);
};

// Line 206: range 000000000CE20092-000000000CE20125
void __cdecl data::MechanicusWatcherExcelConfig::MechanicusWatcherExcelConfig(
        data::MechanicusWatcherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::MechanicusWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_tokens >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_tokens >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_tokens, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->reward_tokens = 0;
};

// Line 206: range 000000000D379744-000000000D379821
void __cdecl data::MechanicusWatcherExcelConfig::MechanicusWatcherExcelConfig(
        data::MechanicusWatcherExcelConfig *const this,
        const data::MechanicusWatcherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t reward_tokens; // ecx
  char v5; // dl

  data::WatcherConfig::WatcherConfig((data::WatcherConfig *const)this, (const data::WatcherConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::MechanicusWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WatcherConfig = v2;
  v3 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_tokens >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->reward_tokens >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->reward_tokens);
  }
  reward_tokens = a2->reward_tokens;
  v5 = *(_BYTE *)(((unsigned __int64)&this->reward_tokens >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->reward_tokens, v3);
  }
  this->reward_tokens = reward_tokens;
};

// Line 210: range 000000000D491B1A-000000000D491B67
void __cdecl data::MechanicusWatcherExcelConfig::~MechanicusWatcherExcelConfig(
        data::MechanicusWatcherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusWatcherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WatcherConfig = v2;
  data::WatcherConfig::~WatcherConfig((data::WatcherConfig *const)this);
};

// Line 210: range 000000000D491B68-000000000D491B92
void __cdecl data::MechanicusWatcherExcelConfig::~MechanicusWatcherExcelConfig(
        data::MechanicusWatcherExcelConfig *const this)
{
  data::MechanicusWatcherExcelConfig::~MechanicusWatcherExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 221: range 000000000CE20126-000000000CE20239
void __cdecl data::MechanicusDifficultyExcelConfig::MechanicusDifficultyExcelConfig(
        data::MechanicusDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  std::vector<unsigned int>::vector(&this->dungeon_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_rate, v1);
  }
  this->coin_rate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->build_gear_limit, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->build_gear_limit = 0;
};

// Line 221: range 000000000D379962-000000000D379B31
void __cdecl data::MechanicusDifficultyExcelConfig::MechanicusDifficultyExcelConfig(
        data::MechanicusDifficultyExcelConfig *const this,
        const data::MechanicusDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  std::vector<unsigned int> *p_dungeon_list; // rsi
  uint32_t coin_rate; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t build_gear_limit; // ecx
  char v10; // dl
  const data::MechanicusDifficultyExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  p_dungeon_list = &v11->dungeon_list;
  std::vector<unsigned int>::vector(&this->dungeon_list, &v11->dungeon_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->coin_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->coin_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->coin_rate);
  }
  coin_rate = v11->coin_rate;
  v7 = *(_BYTE *)(((unsigned __int64)&this->coin_rate >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_dungeon_list) = v7 != 0;
    __asan_report_store4(&this->coin_rate, p_dungeon_list);
  }
  this->coin_rate = coin_rate;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->build_gear_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->build_gear_limit);
  }
  build_gear_limit = v11->build_gear_limit;
  v10 = *(_BYTE *)(((unsigned __int64)&this->build_gear_limit >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->build_gear_limit, v8);
  }
  this->build_gear_limit = build_gear_limit;
};

// Line 224: range 000000000D491A9C-000000000D491AED
void __cdecl data::MechanicusDifficultyExcelConfig::~MechanicusDifficultyExcelConfig(
        data::MechanicusDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusDifficultyExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_list);
};

// Line 224: range 000000000D491AEE-000000000D491B18
void __cdecl data::MechanicusDifficultyExcelConfig::~MechanicusDifficultyExcelConfig(
        data::MechanicusDifficultyExcelConfig *const this)
{
  data::MechanicusDifficultyExcelConfig::~MechanicusDifficultyExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 238: range 000000000D379C72-000000000D379FA5
void __cdecl data::MechanicusCardExcelConfig::MechanicusCardExcelConfig(
        data::MechanicusCardExcelConfig *const this,
        const data::MechanicusCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t cost_points; // ecx
  char v7; // dl
  data::MechanicusCardType card_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t effect_id; // ecx
  char v12; // dl
  uint32_t last_round; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t gear_id; // ecx
  char v17; // dl
  const data::MechanicusCardExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusCardExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->cost_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->cost_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->cost_points);
  }
  cost_points = v18->cost_points;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cost_points >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cost_points, v5);
  }
  this->cost_points = cost_points;
  if ( *(_BYTE *)(((unsigned __int64)&v18->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->card_type);
  }
  card_type = v18->card_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->card_type, v5);
  }
  this->card_type = card_type;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->effect_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->effect_id);
  }
  effect_id = v18->effect_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->effect_id, v10);
  }
  this->effect_id = effect_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->last_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->last_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->last_round);
  }
  last_round = v18->last_round;
  v14 = *(_BYTE *)(((unsigned __int64)&this->last_round >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->last_round, v10);
  }
  this->last_round = last_round;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gear_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gear_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gear_id);
  }
  gear_id = v18->gear_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->gear_id, v15);
  }
  this->gear_id = gear_id;
};

// Line 241: range 000000000D491A2E-000000000D491A6F
void __cdecl data::MechanicusCardExcelConfig::~MechanicusCardExcelConfig(data::MechanicusCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusCardExcelConfig = v2;
};

// Line 241: range 000000000D491A70-000000000D491A9A
void __cdecl data::MechanicusCardExcelConfig::~MechanicusCardExcelConfig(data::MechanicusCardExcelConfig *const this)
{
  data::MechanicusCardExcelConfig::~MechanicusCardExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 257: range 000000000CE2023A-000000000CE2041F
void __cdecl data::MechanicusCardEffectExcelConfig::MechanicusCardEffectExcelConfig(
        data::MechanicusCardEffectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusCardEffectExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = MECHANICUS_CARD_TARGET_NONE;
  std::vector<unsigned int>::vector(&this->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type, v3);
  }
  this->effect_type = MECHANICUS_CARD_EFFECT_NONE;
  std::string::basic_string(&this->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_param1, v3);
  }
  this->effect_param1 = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_param2, v4);
  }
  this->effect_param2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_param3, v4);
  }
  this->effect_param3 = 0;
};

// Line 257: range 000000000D37A0E6-000000000D37A466
void __cdecl data::MechanicusCardEffectExcelConfig::MechanicusCardEffectExcelConfig(
        data::MechanicusCardEffectExcelConfig *const this,
        const data::MechanicusCardEffectExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MechanicusCardTargetType target_type; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_target_param_list; // rsi
  data::MechanicusCardEffectType effect_type; // ecx
  char v10; // al
  std::string *p_effect_str_param; // rsi
  int32_t effect_param1; // ecx
  char v13; // al
  __int64 v14; // rsi
  int32_t effect_param2; // ecx
  char v16; // dl
  int32_t effect_param3; // ecx
  char v18; // al
  const data::MechanicusCardEffectExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusCardEffectExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v19->target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->target_type);
  }
  target_type = v19->target_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->target_type, v5);
  }
  this->target_type = target_type;
  p_target_param_list = &v19->target_param_list;
  std::vector<unsigned int>::vector(&this->target_param_list, &v19->target_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_type);
  }
  effect_type = v19->effect_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_target_param_list) = v10 != 0;
    __asan_report_store4(&this->effect_type, p_target_param_list);
  }
  this->effect_type = effect_type;
  p_effect_str_param = &v19->effect_str_param;
  std::string::basic_string(&this->effect_str_param, &v19->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_param1);
  }
  effect_param1 = v19->effect_param1;
  v13 = *(_BYTE *)(((unsigned __int64)&this->effect_param1 >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_effect_str_param) = v13 != 0;
    __asan_report_store4(&this->effect_param1, p_effect_str_param);
  }
  this->effect_param1 = effect_param1;
  v14 = (((_BYTE)v19 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->effect_param2);
  }
  effect_param2 = v19->effect_param2;
  v16 = *(_BYTE *)(((unsigned __int64)&this->effect_param2 >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->effect_param2, v14);
  }
  this->effect_param2 = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&v19->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->effect_param3);
  }
  effect_param3 = v19->effect_param3;
  v18 = *(_BYTE *)(((unsigned __int64)&this->effect_param3 >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store4(&this->effect_param3, v14);
  }
  this->effect_param3 = effect_param3;
};

// Line 260: range 000000000D4919A0-000000000D491A01
void __cdecl data::MechanicusCardEffectExcelConfig::~MechanicusCardEffectExcelConfig(
        data::MechanicusCardEffectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusCardEffectExcelConfig = v2;
  std::string::~string(&this->effect_str_param);
  std::vector<unsigned int>::~vector(&this->target_param_list);
};

// Line 260: range 000000000D491A02-000000000D491A2C
void __cdecl data::MechanicusCardEffectExcelConfig::~MechanicusCardEffectExcelConfig(
        data::MechanicusCardEffectExcelConfig *const this)
{
  data::MechanicusCardEffectExcelConfig::~MechanicusCardEffectExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 278: range 000000000D37A5A8-000000000D37A7E1
void __cdecl data::MechanicusCardCurseExcelConfig::MechanicusCardCurseExcelConfig(
        data::MechanicusCardCurseExcelConfig *const this,
        const data::MechanicusCardCurseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t effect_id; // ecx
  char v7; // dl
  uint32_t last_round; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weight; // ecx
  char v12; // dl
  const data::MechanicusCardCurseExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardCurseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusCardCurseExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->effect_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->effect_id);
  }
  effect_id = v13->effect_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->effect_id, v5);
  }
  this->effect_id = effect_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->last_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->last_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->last_round);
  }
  last_round = v13->last_round;
  v9 = *(_BYTE *)(((unsigned __int64)&this->last_round >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->last_round, v5);
  }
  this->last_round = last_round;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
};

// Line 281: range 000000000D491932-000000000D491973
void __cdecl data::MechanicusCardCurseExcelConfig::~MechanicusCardCurseExcelConfig(
        data::MechanicusCardCurseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusCardCurseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusCardCurseExcelConfig = v2;
};

// Line 281: range 000000000D491974-000000000D49199E
void __cdecl data::MechanicusCardCurseExcelConfig::~MechanicusCardCurseExcelConfig(
        data::MechanicusCardCurseExcelConfig *const this)
{
  data::MechanicusCardCurseExcelConfig::~MechanicusCardCurseExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 295: range 000000000D37A922-000000000D37A9DC
void __cdecl data::MechanicusMapPointExcelConfig::MechanicusMapPointExcelConfig(
        data::MechanicusMapPointExcelConfig *const this,
        const data::MechanicusMapPointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::MechanicusMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MechanicusMapPointExcelConfig = v2;
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

// Line 298: range 000000000D4918C4-000000000D491905
void __cdecl data::MechanicusMapPointExcelConfig::~MechanicusMapPointExcelConfig(
        data::MechanicusMapPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MechanicusMapPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MechanicusMapPointExcelConfig = v2;
};

// Line 298: range 000000000D491906-000000000D491930
void __cdecl data::MechanicusMapPointExcelConfig::~MechanicusMapPointExcelConfig(
        data::MechanicusMapPointExcelConfig *const this)
{
  data::MechanicusMapPointExcelConfig::~MechanicusMapPointExcelConfig(this);
  operator delete(this, 0x10uLL);
};
