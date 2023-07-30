// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigNpcBornPos.h

// Line 20: range 000000001216FAD8-000000001216FCA2
void __cdecl data::ConfigNpcBornPos::ConfigNpcBornPos(data::ConfigNpcBornPos *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v2);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id, v2);
  }
  this->room_id = 0;
  data::Vector::Vector(&this->pos);
  data::Vector::Vector(&this->rot);
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->suite_id, v3);
  }
  this->suite_id = 0;
  std::vector<unsigned int>::vector(&this->suite_id_list);
  std::vector<std::vector<data::NpcCommonCond>>::vector(&this->pre_conditions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 000000000F9CB874-000000000F9CBDA4
void __cdecl data::ConfigNpcBornPos::ConfigNpcBornPos(
        data::ConfigNpcBornPos *const this,
        const data::ConfigNpcBornPos *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t config_id; // ecx
  char v6; // dl
  uint32_t room_id; // ecx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rsi
  uint32_t group_id; // ecx
  char v13; // dl
  uint32_t suite_id; // ecx
  char v15; // al
  data::NpcCommonConditions *p_pre_conditions; // rsi
  bool is_json_loaded; // cl
  char v18; // al
  const data::ConfigNpcBornPos *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v19 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->config_id);
  }
  config_id = v19->config_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->config_id, v4);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->room_id);
  }
  room_id = v19->room_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->room_id, v4);
  }
  this->room_id = room_id;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 16LL);
  }
  if ( (((unsigned __int8)v19 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v19->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v19->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v19->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v19 + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&v19->pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v19->pos, 16LL);
  }
  v9 = *(_QWORD *)&v19->pos.z;
  *(_QWORD *)&this->pos.x = *(_QWORD *)&v19->pos.x;
  *(_QWORD *)&this->pos.z = v9;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rot.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 16LL);
  }
  if ( (((unsigned __int8)v19 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&v19->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v19->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v19->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v19 + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&v19->rot.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v19->rot, 16LL);
  }
  v10 = *(_QWORD *)&v19->rot.z;
  *(_QWORD *)&this->rot.x = *(_QWORD *)&v19->rot.x;
  *(_QWORD *)&this->rot.z = v10;
  v11 = (((_BYTE)v19 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->group_id);
  }
  group_id = v19->group_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->group_id, v11);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->suite_id);
  }
  suite_id = v19->suite_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->suite_id, v11);
  }
  this->suite_id = suite_id;
  std::vector<unsigned int>::vector(&this->suite_id_list, &v19->suite_id_list);
  p_pre_conditions = &v19->pre_conditions;
  std::vector<std::vector<data::NpcCommonCond>>::vector(&this->pre_conditions, &v19->pre_conditions);
  if ( *(char *)(((unsigned __int64)&v19->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_json_loaded, p_pre_conditions, &v19->is_json_loaded);
  is_json_loaded = v19->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_pre_conditions) = v18 != 0;
    __asan_report_store1(&this->is_json_loaded, p_pre_conditions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000012360D52-000000001236125B
void __cdecl data::ConfigNpcBornPos::ConfigNpcBornPos(data::ConfigNpcBornPos *const this, data::ConfigNpcBornPos *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t config_id; // ecx
  char v6; // dl
  uint32_t room_id; // ecx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rsi
  uint32_t group_id; // ecx
  char v13; // dl
  uint32_t suite_id; // ecx
  char v15; // al
  data::NpcCommonConditions *p_pre_conditions; // rsi
  bool is_json_loaded; // cl
  char v18; // al
  data::ConfigNpcBornPos *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v19 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->config_id);
  }
  config_id = v19->config_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->config_id, v4);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->room_id);
  }
  room_id = v19->room_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->room_id, v4);
  }
  this->room_id = room_id;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 16LL);
  }
  if ( (((unsigned __int8)v19 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v19->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v19->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v19->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v19 + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&v19->pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v19->pos, 16LL);
  }
  v9 = *(_QWORD *)&v19->pos.z;
  *(_QWORD *)&this->pos.x = *(_QWORD *)&v19->pos.x;
  *(_QWORD *)&this->pos.z = v9;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rot.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 16LL);
  }
  if ( (((unsigned __int8)v19 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&v19->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v19->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v19->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v19 + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&v19->rot.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v19->rot, 16LL);
  }
  v10 = *(_QWORD *)&v19->rot.z;
  *(_QWORD *)&this->rot.x = *(_QWORD *)&v19->rot.x;
  *(_QWORD *)&this->rot.z = v10;
  v11 = (((_BYTE)v19 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->group_id);
  }
  group_id = v19->group_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->group_id, v11);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->suite_id);
  }
  suite_id = v19->suite_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->suite_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->suite_id, v11);
  }
  this->suite_id = suite_id;
  std::vector<unsigned int>::vector(&this->suite_id_list, &v19->suite_id_list);
  p_pre_conditions = &v19->pre_conditions;
  std::vector<std::vector<data::NpcCommonCond>>::vector(&this->pre_conditions, &v19->pre_conditions);
  if ( *(char *)(((unsigned __int64)&v19->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_json_loaded, p_pre_conditions, &v19->is_json_loaded);
  is_json_loaded = v19->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_pre_conditions) = v18 != 0;
    __asan_report_store1(&this->is_json_loaded, p_pre_conditions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 48: range 000000000F942128-000000000F942156
void __cdecl data::ConfigNpcBornPos::~ConfigNpcBornPos(data::ConfigNpcBornPos *const this)
{
  std::vector<std::vector<data::NpcCommonCond>>::~vector(&this->pre_conditions);
  std::vector<unsigned int>::~vector(&this->suite_id_list);
};

// Line 56: range 000000000F784B4E-000000000F784C28
void __cdecl data::ConfigLevelNpcBornPos::ConfigLevelNpcBornPos(data::ConfigLevelNpcBornPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigLevelNpcBornPos>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLevelNpcBornPos>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelNpcBornPos = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  std::vector<data::ConfigNpcBornPos>::vector(&this->born_pos_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 56: range 000000000F8793A2-000000000F87952F
void __cdecl data::ConfigLevelNpcBornPos::ConfigLevelNpcBornPos(
        data::ConfigLevelNpcBornPos *const this,
        const data::ConfigLevelNpcBornPos *a2)
{
  std::enable_shared_from_this<data::ConfigLevelNpcBornPos> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t scene_id; // ecx
  char v5; // al
  data::ConfigBornPosList *p_born_pos_list; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigLevelNpcBornPos>;
  std::enable_shared_from_this<data::ConfigLevelNpcBornPos>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigLevelNpcBornPos>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigLevelNpcBornPos = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->scene_id, v2);
  }
  this->scene_id = scene_id;
  p_born_pos_list = &a2->born_pos_list;
  std::vector<data::ConfigNpcBornPos>::vector(&this->born_pos_list, &a2->born_pos_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_born_pos_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_born_pos_list) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_born_pos_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 65: range 000000000FA0F47E-000000000FA0F4DF
void __cdecl data::ConfigLevelNpcBornPos::~ConfigLevelNpcBornPos(data::ConfigLevelNpcBornPos *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelNpcBornPos = v2;
  std::vector<data::ConfigNpcBornPos>::~vector(&this->born_pos_list);
  std::enable_shared_from_this<data::ConfigLevelNpcBornPos>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLevelNpcBornPos>);
};

// Line 65: range 000000000FA0F4E0-000000000FA0F50A
void __cdecl data::ConfigLevelNpcBornPos::~ConfigLevelNpcBornPos(data::ConfigLevelNpcBornPos *const this)
{
  data::ConfigLevelNpcBornPos::~ConfigLevelNpcBornPos(this);
  operator delete(this, 0x40uLL);
};

// Line 70: range 000000001216F740-000000001216F750
const char *__cdecl data::ConfigLevelNpcBornPos::getTypeName(const data::ConfigLevelNpcBornPos *const this)
{
  return "ConfigLevelNpcBornPos";
};

// Line 71: range 000000001216F752-000000001216F8EE
int32_t __cdecl data::ConfigLevelNpcBornPos::getHashNum(const data::ConfigLevelNpcBornPos *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLevelNpcBornPos::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLevelNpcBornPos",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 90: range 000000001271298C-00000000127129D9
void __cdecl data::ConfigLevelNpcBornPosNoGroup::ConfigLevelNpcBornPosNoGroup(
        data::ConfigLevelNpcBornPosNoGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLevelNpcBornPos::ConfigLevelNpcBornPos(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPosNoGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelNpcBornPos = v2;
};

// Line 90: range 0000000012712DDE-0000000012712E36
void __cdecl data::ConfigLevelNpcBornPosNoGroup::ConfigLevelNpcBornPosNoGroup(
        data::ConfigLevelNpcBornPosNoGroup *const this,
        const data::ConfigLevelNpcBornPosNoGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigLevelNpcBornPos::ConfigLevelNpcBornPos(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPosNoGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigLevelNpcBornPos = v2;
};

// Line 96: range 000000001274CFE2-000000001274D02F
void __cdecl data::ConfigLevelNpcBornPosNoGroup::~ConfigLevelNpcBornPosNoGroup(
        data::ConfigLevelNpcBornPosNoGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPosNoGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelNpcBornPos = v2;
  data::ConfigLevelNpcBornPos::~ConfigLevelNpcBornPos(this);
};

// Line 96: range 000000001274D030-000000001274D05A
void __cdecl data::ConfigLevelNpcBornPosNoGroup::~ConfigLevelNpcBornPosNoGroup(
        data::ConfigLevelNpcBornPosNoGroup *const this)
{
  data::ConfigLevelNpcBornPosNoGroup::~ConfigLevelNpcBornPosNoGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 101: range 000000001216F8F0-000000001216F900
const char *__cdecl data::ConfigLevelNpcBornPosNoGroup::getTypeName(
        const data::ConfigLevelNpcBornPosNoGroup *const this)
{
  return "ConfigLevelNpcBornPosNoGroup";
};

// Line 102: range 000000001216F902-000000001216FA9E
int32_t __cdecl data::ConfigLevelNpcBornPosNoGroup::getHashNum(const data::ConfigLevelNpcBornPosNoGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLevelNpcBornPosNoGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLevelNpcBornPosNoGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 118: range 0000000012713120-0000000012713161
void __cdecl data::ConfigLevelNpcBornPosNoGroupFactory::ConfigLevelNpcBornPosNoGroupFactory(
        data::ConfigLevelNpcBornPosNoGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelNpcBornPosNoGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelNpcBornPosNoGroupFactory = v2;
};
