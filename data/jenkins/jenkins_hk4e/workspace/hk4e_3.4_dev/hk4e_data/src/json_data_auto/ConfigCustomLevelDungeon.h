// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCustomLevelDungeon.h

// Line 19: range 0000000013C18C22-0000000013C18D05
void __cdecl data::ConfigCustomLevelRoomBasic::ConfigCustomLevelRoomBasic(data::ConfigCustomLevelRoomBasic *const this)
{
  __int64 v1; // rsi

  data::Vector::Vector(&this->deploy_start_pos);
  data::Vector::Vector(&this->deploy_bound);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_cost, v1);
  }
  this->total_cost = 0;
  std::vector<unsigned int>::vector(&this->pre_rooms);
  std::vector<unsigned int>::vector(&this->next_rooms);
  data::Vector::Vector(&this->born_pos);
  data::Vector::Vector(&this->born_rot);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000000F947FEE-000000000F9482CE
void __cdecl data::ConfigCustomLevelRoomBasic::ConfigCustomLevelRoomBasic(
        data::ConfigCustomLevelRoomBasic *const this,
        const data::ConfigCustomLevelRoomBasic *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  uint32_t total_cost; // ecx
  char v5; // al
  data::UInt32Array *p_next_rooms; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // al
  const data::ConfigCustomLevelRoomBasic *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load16(a2);
  v2 = *(_QWORD *)&a2->deploy_start_pos.z;
  *(_QWORD *)&this->deploy_start_pos.x = *(_QWORD *)&a2->deploy_start_pos.x;
  *(_QWORD *)&this->deploy_start_pos.z = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->deploy_bound >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->deploy_bound >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->deploy_bound);
  v3 = *(_QWORD *)&a2->deploy_bound.z;
  *(_QWORD *)&this->deploy_bound.x = *(_QWORD *)&a2->deploy_bound.x;
  *(_QWORD *)&this->deploy_bound.z = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->total_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->total_cost);
  }
  total_cost = a2->total_cost;
  v5 = *(_BYTE *)(((unsigned __int64)&this->total_cost >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(a2) = v5 != 0;
    __asan_report_store4(&this->total_cost, a2);
  }
  this->total_cost = total_cost;
  std::vector<unsigned int>::vector(&this->pre_rooms, &v11->pre_rooms);
  p_next_rooms = &v11->next_rooms;
  std::vector<unsigned int>::vector(&this->next_rooms, &v11->next_rooms);
  if ( *(_WORD *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v11->born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v11->born_pos);
  v7 = *(_QWORD *)&v11->born_pos.z;
  *(_QWORD *)&this->born_pos.x = *(_QWORD *)&v11->born_pos.x;
  *(_QWORD *)&this->born_pos.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v11->born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v11->born_rot);
  v8 = *(_QWORD *)&v11->born_rot.z;
  *(_QWORD *)&this->born_rot.x = *(_QWORD *)&v11->born_rot.x;
  *(_QWORD *)&this->born_rot.z = v8;
  if ( *(char *)(((unsigned __int64)&v11->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_json_loaded, p_next_rooms, &v11->is_json_loaded);
  is_json_loaded = v11->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_next_rooms) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_next_rooms, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000013E79428-0000000013E796E1
void __cdecl data::ConfigCustomLevelRoomBasic::ConfigCustomLevelRoomBasic(
        data::ConfigCustomLevelRoomBasic *const this,
        data::ConfigCustomLevelRoomBasic *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  uint32_t total_cost; // ecx
  char v5; // al
  data::UInt32Array *p_next_rooms; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // al
  data::ConfigCustomLevelRoomBasic *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load16(a2);
  v2 = *(_QWORD *)&a2->deploy_start_pos.z;
  *(_QWORD *)&this->deploy_start_pos.x = *(_QWORD *)&a2->deploy_start_pos.x;
  *(_QWORD *)&this->deploy_start_pos.z = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->deploy_bound >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->deploy_bound >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->deploy_bound);
  v3 = *(_QWORD *)&a2->deploy_bound.z;
  *(_QWORD *)&this->deploy_bound.x = *(_QWORD *)&a2->deploy_bound.x;
  *(_QWORD *)&this->deploy_bound.z = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->total_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->total_cost);
  }
  total_cost = a2->total_cost;
  v5 = *(_BYTE *)(((unsigned __int64)&this->total_cost >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(a2) = v5 != 0;
    __asan_report_store4(&this->total_cost, a2);
  }
  this->total_cost = total_cost;
  std::vector<unsigned int>::vector(&this->pre_rooms, &v11->pre_rooms);
  p_next_rooms = &v11->next_rooms;
  std::vector<unsigned int>::vector(&this->next_rooms, &v11->next_rooms);
  if ( *(_WORD *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v11->born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v11->born_pos);
  v7 = *(_QWORD *)&v11->born_pos.z;
  *(_QWORD *)&this->born_pos.x = *(_QWORD *)&v11->born_pos.x;
  *(_QWORD *)&this->born_pos.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v11->born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v11->born_rot);
  v8 = *(_QWORD *)&v11->born_rot.z;
  *(_QWORD *)&this->born_rot.x = *(_QWORD *)&v11->born_rot.x;
  *(_QWORD *)&this->born_rot.z = v8;
  if ( *(char *)(((unsigned __int64)&v11->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_json_loaded, p_next_rooms, &v11->is_json_loaded);
  is_json_loaded = v11->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_next_rooms) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_next_rooms, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 48: range 000000000F94721C-000000000F94724A
void __cdecl data::ConfigCustomLevelRoomBasic::~ConfigCustomLevelRoomBasic(
        data::ConfigCustomLevelRoomBasic *const this)
{
  std::vector<unsigned int>::~vector(&this->next_rooms);
  std::vector<unsigned int>::~vector(&this->pre_rooms);
};

// Line 48: range 0000000013C18ADE-0000000013C18C21
void __cdecl data::ConfigCustomLevelRoomExtraData::ConfigCustomLevelRoomExtraData(
        data::ConfigCustomLevelRoomExtraData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->index = 0;
  data::Vector::Vector(&this->occupy_pos);
  data::Vector::Vector(&this->occupy_bound);
  std::vector<data::PileTag>::vector(&this->pile_tags);
  if ( *(char *)(((unsigned __int64)&this->is_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gadget, v1, &this->is_gadget);
  this->is_gadget = 0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v2);
  }
  this->config_id = 0;
  data::Vector::Vector(&this->gadget_rot);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 48: range 000000000F9F3154-000000000F9F35AD
void __cdecl data::ConfigCustomLevelRoomExtraData::ConfigCustomLevelRoomExtraData(
        data::ConfigCustomLevelRoomExtraData *const this,
        const data::ConfigCustomLevelRoomExtraData *a2)
{
  uint32_t index; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  data::PileTagArray *p_pile_tags; // rsi
  bool is_gadget; // cl
  char v8; // al
  __int64 v9; // rsi
  uint32_t config_id; // ecx
  char v11; // dl
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // al
  const data::ConfigCustomLevelRoomExtraData *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  index = a2->index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->index = index;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupy_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupy_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->occupy_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->occupy_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupy_pos, 16LL);
  }
  if ( (((unsigned __int8)v15 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->occupy_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v15->occupy_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v15->occupy_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->occupy_pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->occupy_pos, 16LL);
  }
  v4 = *(_QWORD *)&v15->occupy_pos.z;
  *(_QWORD *)&this->occupy_pos.x = *(_QWORD *)&v15->occupy_pos.x;
  *(_QWORD *)&this->occupy_pos.z = v4;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupy_bound >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupy_bound >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->occupy_bound.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->occupy_bound.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupy_bound, 16LL);
  }
  if ( (((unsigned __int8)v15 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->occupy_bound >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v15->occupy_bound >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v15->occupy_bound.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->occupy_bound.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->occupy_bound, 16LL);
  }
  v5 = *(_QWORD *)&v15->occupy_bound.z;
  *(_QWORD *)&this->occupy_bound.x = *(_QWORD *)&v15->occupy_bound.x;
  *(_QWORD *)&this->occupy_bound.z = v5;
  p_pile_tags = &v15->pile_tags;
  std::vector<data::PileTag>::vector(&this->pile_tags, &v15->pile_tags);
  if ( *(char *)(((unsigned __int64)&v15->is_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_gadget, p_pile_tags, &v15->is_gadget);
  is_gadget = v15->is_gadget;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_gadget >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_pile_tags) = v8 != 0;
    __asan_report_store1(&this->is_gadget, p_pile_tags, &this->is_gadget);
  }
  this->is_gadget = is_gadget;
  v9 = (((_BYTE)v15 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->config_id);
  }
  config_id = v15->config_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v11 )
    __asan_report_store4(&this->config_id, v9);
  this->config_id = config_id;
  if ( *(_WORD *)(((unsigned __int64)&this->gadget_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v15->gadget_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v15->gadget_rot);
  v12 = *(_QWORD *)&v15->gadget_rot.z;
  *(_QWORD *)&this->gadget_rot.x = *(_QWORD *)&v15->gadget_rot.x;
  *(_QWORD *)&this->gadget_rot.z = v12;
  if ( *(char *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_json_loaded, v9, &v15->is_json_loaded);
  is_json_loaded = v15->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v9) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, v9, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 48: range 0000000013E78A44-0000000013E78E9D
void __cdecl data::ConfigCustomLevelRoomExtraData::ConfigCustomLevelRoomExtraData(
        data::ConfigCustomLevelRoomExtraData *const this,
        data::ConfigCustomLevelRoomExtraData *a2)
{
  uint32_t index; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  data::PileTagArray *p_pile_tags; // rsi
  bool is_gadget; // cl
  char v8; // al
  __int64 v9; // rsi
  uint32_t config_id; // ecx
  char v11; // dl
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // al
  data::ConfigCustomLevelRoomExtraData *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  index = a2->index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->index = index;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupy_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupy_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->occupy_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->occupy_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupy_pos, 16LL);
  }
  if ( (((unsigned __int8)v15 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->occupy_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v15->occupy_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v15->occupy_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->occupy_pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->occupy_pos, 16LL);
  }
  v4 = *(_QWORD *)&v15->occupy_pos.z;
  *(_QWORD *)&this->occupy_pos.x = *(_QWORD *)&v15->occupy_pos.x;
  *(_QWORD *)&this->occupy_pos.z = v4;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupy_bound >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupy_bound >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->occupy_bound.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->occupy_bound.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupy_bound, 16LL);
  }
  if ( (((unsigned __int8)v15 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->occupy_bound >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v15->occupy_bound >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v15->occupy_bound.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&v15->occupy_bound.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->occupy_bound, 16LL);
  }
  v5 = *(_QWORD *)&v15->occupy_bound.z;
  *(_QWORD *)&this->occupy_bound.x = *(_QWORD *)&v15->occupy_bound.x;
  *(_QWORD *)&this->occupy_bound.z = v5;
  p_pile_tags = &v15->pile_tags;
  std::vector<data::PileTag>::vector(&this->pile_tags, &v15->pile_tags);
  if ( *(char *)(((unsigned __int64)&v15->is_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_gadget, p_pile_tags, &v15->is_gadget);
  is_gadget = v15->is_gadget;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_gadget >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_pile_tags) = v8 != 0;
    __asan_report_store1(&this->is_gadget, p_pile_tags, &this->is_gadget);
  }
  this->is_gadget = is_gadget;
  v9 = (((_BYTE)v15 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->config_id);
  }
  config_id = v15->config_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v11 )
    __asan_report_store4(&this->config_id, v9);
  this->config_id = config_id;
  if ( *(_WORD *)(((unsigned __int64)&this->gadget_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v15->gadget_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v15->gadget_rot);
  v12 = *(_QWORD *)&v15->gadget_rot.z;
  *(_QWORD *)&this->gadget_rot.x = *(_QWORD *)&v15->gadget_rot.x;
  *(_QWORD *)&this->gadget_rot.z = v12;
  if ( *(char *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_json_loaded, v9, &v15->is_json_loaded);
  is_json_loaded = v15->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v9) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, v9, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 48: range 000000000F9F2906-000000000F9F2924
void __cdecl data::ConfigCustomLevelRoomExtraData::~ConfigCustomLevelRoomExtraData(
        data::ConfigCustomLevelRoomExtraData *const this)
{
  std::vector<data::PileTag>::~vector(&this->pile_tags);
};

// Line 82: range 000000000F947A02-000000000F947C8A
data::ConfigCustomLevelRoomSetting *__cdecl data::ConfigCustomLevelRoomSetting::operator=(
        data::ConfigCustomLevelRoomSetting *const this,
        const data::ConfigCustomLevelRoomSetting *a2)
{
  uint32_t room_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t component_limit_config; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  data::ConfigCustomLevelRoomExtraDataList *p_extra_data; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigCustomLevelRoomSetting *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  room_id = a2->room_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->room_id = room_id;
  v4 = (((_BYTE)v13 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->component_limit_config >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->component_limit_config >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->component_limit_config);
  }
  component_limit_config = v13->component_limit_config;
  v6 = *(_BYTE *)(((unsigned __int64)&this->component_limit_config >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->component_limit_config, v4);
  }
  this->component_limit_config = component_limit_config;
  if ( *(_WORD *)(((unsigned __int64)&this->player_init_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v13->player_init_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v13->player_init_pos);
  v7 = *(_QWORD *)&v13->player_init_pos.z;
  *(_QWORD *)&this->player_init_pos.x = *(_QWORD *)&v13->player_init_pos.x;
  *(_QWORD *)&this->player_init_pos.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->player_init_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v13->player_init_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v13->player_init_rot);
  v8 = *(_QWORD *)&v13->player_init_rot.z;
  *(_QWORD *)&this->player_init_rot.x = *(_QWORD *)&v13->player_init_rot.x;
  *(_QWORD *)&this->player_init_rot.z = v8;
  data::ConfigCustomLevelRoomBasic::operator=(&this->basic_data, &v13->basic_data);
  p_extra_data = &v13->extra_data;
  std::vector<data::ConfigCustomLevelRoomExtraData>::operator=(&this->extra_data, &v13->extra_data);
  if ( *(char *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_json_loaded, p_extra_data, &v13->is_json_loaded);
  is_json_loaded = v13->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_extra_data) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_extra_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 82: range 0000000013C18D3E-0000000013C18E4D
void __cdecl data::ConfigCustomLevelRoomSetting::ConfigCustomLevelRoomSetting(
        data::ConfigCustomLevelRoomSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->room_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->component_limit_config >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->component_limit_config >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->component_limit_config, v2);
  }
  this->component_limit_config = 0;
  data::Vector::Vector(&this->player_init_pos);
  data::Vector::Vector(&this->player_init_rot);
  data::ConfigCustomLevelRoomBasic::ConfigCustomLevelRoomBasic(&this->basic_data);
  std::vector<data::ConfigCustomLevelRoomExtraData>::vector(&this->extra_data);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 82: range 000000000F9482D0-000000000F94857C
void __cdecl data::ConfigCustomLevelRoomSetting::ConfigCustomLevelRoomSetting(
        data::ConfigCustomLevelRoomSetting *const this,
        const data::ConfigCustomLevelRoomSetting *a2)
{
  uint32_t room_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t component_limit_config; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  data::ConfigCustomLevelRoomExtraDataList *p_extra_data; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigCustomLevelRoomSetting *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  room_id = a2->room_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->room_id = room_id;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->component_limit_config >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->component_limit_config >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->component_limit_config);
  }
  component_limit_config = v12->component_limit_config;
  v6 = *(_BYTE *)(((unsigned __int64)&this->component_limit_config >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->component_limit_config, v4);
  }
  this->component_limit_config = component_limit_config;
  if ( *(_WORD *)(((unsigned __int64)&this->player_init_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->player_init_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->player_init_pos);
  v7 = *(_QWORD *)&v12->player_init_pos.z;
  *(_QWORD *)&this->player_init_pos.x = *(_QWORD *)&v12->player_init_pos.x;
  *(_QWORD *)&this->player_init_pos.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->player_init_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->player_init_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->player_init_rot);
  v8 = *(_QWORD *)&v12->player_init_rot.z;
  *(_QWORD *)&this->player_init_rot.x = *(_QWORD *)&v12->player_init_rot.x;
  *(_QWORD *)&this->player_init_rot.z = v8;
  data::ConfigCustomLevelRoomBasic::ConfigCustomLevelRoomBasic(&this->basic_data, &v12->basic_data);
  p_extra_data = &v12->extra_data;
  std::vector<data::ConfigCustomLevelRoomExtraData>::vector(&this->extra_data, &v12->extra_data);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_extra_data, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_extra_data) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_extra_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 82: range 0000000013E7972E-0000000013E799B3
void __cdecl data::ConfigCustomLevelRoomSetting::ConfigCustomLevelRoomSetting(
        data::ConfigCustomLevelRoomSetting *const this,
        data::ConfigCustomLevelRoomSetting *a2)
{
  uint32_t room_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t component_limit_config; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  data::ConfigCustomLevelRoomExtraDataList *p_extra_data; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  data::ConfigCustomLevelRoomSetting *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  room_id = a2->room_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->room_id = room_id;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->component_limit_config >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->component_limit_config >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->component_limit_config);
  }
  component_limit_config = v12->component_limit_config;
  v6 = *(_BYTE *)(((unsigned __int64)&this->component_limit_config >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->component_limit_config, v4);
  }
  this->component_limit_config = component_limit_config;
  if ( *(_WORD *)(((unsigned __int64)&this->player_init_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->player_init_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->player_init_pos);
  v7 = *(_QWORD *)&v12->player_init_pos.z;
  *(_QWORD *)&this->player_init_pos.x = *(_QWORD *)&v12->player_init_pos.x;
  *(_QWORD *)&this->player_init_pos.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->player_init_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->player_init_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->player_init_rot);
  v8 = *(_QWORD *)&v12->player_init_rot.z;
  *(_QWORD *)&this->player_init_rot.x = *(_QWORD *)&v12->player_init_rot.x;
  *(_QWORD *)&this->player_init_rot.z = v8;
  data::ConfigCustomLevelRoomBasic::ConfigCustomLevelRoomBasic(&this->basic_data, &v12->basic_data);
  p_extra_data = &v12->extra_data;
  std::vector<data::ConfigCustomLevelRoomExtraData>::vector(&this->extra_data, &v12->extra_data);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_extra_data, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_extra_data) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_extra_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 82: range 000000000F94724C-000000000F94727C
void __cdecl data::ConfigCustomLevelRoomSetting::~ConfigCustomLevelRoomSetting(
        data::ConfigCustomLevelRoomSetting *const this)
{
  std::vector<data::ConfigCustomLevelRoomExtraData>::~vector(&this->extra_data);
  data::ConfigCustomLevelRoomBasic::~ConfigCustomLevelRoomBasic(&this->basic_data);
};

// Line 115: range 000000000F785C84-000000000F785E1A
data::ConfigCustomLevelDungeon *__cdecl data::ConfigCustomLevelDungeon::operator=(
        data::ConfigCustomLevelDungeon *const this,
        const data::ConfigCustomLevelDungeon *a2)
{
  uint32_t dungeon_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t start_room_id; // ecx
  char v6; // dl
  data::ConfiCustomLevelRoomSettingList *p_room_list; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::ConfigCustomLevelDungeon *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dungeon_id = a2->dungeon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->dungeon_id = dungeon_id;
  v4 = (((_BYTE)v11 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->start_room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->start_room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->start_room_id);
  }
  start_room_id = v11->start_room_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->start_room_id, v4);
  }
  this->start_room_id = start_room_id;
  p_room_list = &v11->room_list;
  std::vector<data::ConfigCustomLevelRoomSetting>::operator=(&this->room_list, &v11->room_list);
  if ( *(char *)(((unsigned __int64)&v11->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_json_loaded, p_room_list, &v11->is_json_loaded);
  is_json_loaded = v11->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_room_list) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_room_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 115: range 000000000F785B8A-000000000F785C62
void __cdecl data::ConfigCustomLevelDungeon::ConfigCustomLevelDungeon(data::ConfigCustomLevelDungeon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->dungeon_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_room_id, v2);
  }
  this->start_room_id = 0;
  std::vector<data::ConfigCustomLevelRoomSetting>::vector(&this->room_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 115: range 000000000F785C64-000000000F785C82
void __cdecl data::ConfigCustomLevelDungeon::~ConfigCustomLevelDungeon(data::ConfigCustomLevelDungeon *const this)
{
  std::vector<data::ConfigCustomLevelRoomSetting>::~vector(&this->room_list);
};

// Line 872: range 000000000F947744-000000000F947A00
data::ConfigCustomLevelRoomBasic *__cdecl data::ConfigCustomLevelRoomBasic::operator=(
        data::ConfigCustomLevelRoomBasic *const this,
        const data::ConfigCustomLevelRoomBasic *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  uint32_t total_cost; // ecx
  char v5; // al
  data::UInt32Array *p_next_rooms; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // al
  const data::ConfigCustomLevelRoomBasic *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load16(a2);
  v2 = *(_QWORD *)&a2->deploy_start_pos.z;
  *(_QWORD *)&this->deploy_start_pos.x = *(_QWORD *)&a2->deploy_start_pos.x;
  *(_QWORD *)&this->deploy_start_pos.z = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->deploy_bound >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->deploy_bound >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->deploy_bound);
  v3 = *(_QWORD *)&a2->deploy_bound.z;
  *(_QWORD *)&this->deploy_bound.x = *(_QWORD *)&a2->deploy_bound.x;
  *(_QWORD *)&this->deploy_bound.z = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->total_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->total_cost);
  }
  total_cost = a2->total_cost;
  v5 = *(_BYTE *)(((unsigned __int64)&this->total_cost >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(a2) = v5 != 0;
    __asan_report_store4(&this->total_cost, a2);
  }
  this->total_cost = total_cost;
  std::vector<unsigned int>::operator=(&this->pre_rooms, &v12->pre_rooms);
  p_next_rooms = &v12->next_rooms;
  std::vector<unsigned int>::operator=(&this->next_rooms, &v12->next_rooms);
  if ( *(_WORD *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->born_pos);
  v7 = *(_QWORD *)&v12->born_pos.z;
  *(_QWORD *)&this->born_pos.x = *(_QWORD *)&v12->born_pos.x;
  *(_QWORD *)&this->born_pos.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v12->born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v12->born_rot);
  v8 = *(_QWORD *)&v12->born_rot.z;
  *(_QWORD *)&this->born_rot.x = *(_QWORD *)&v12->born_rot.x;
  *(_QWORD *)&this->born_rot.z = v8;
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_next_rooms, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_next_rooms) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_next_rooms, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 872: range 000000000F9F29AE-000000000F9F2E0A
data::ConfigCustomLevelRoomExtraData *__cdecl data::ConfigCustomLevelRoomExtraData::operator=(
        data::ConfigCustomLevelRoomExtraData *const this,
        const data::ConfigCustomLevelRoomExtraData *a2)
{
  uint32_t index; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  data::PileTagArray *p_pile_tags; // rsi
  bool is_gadget; // cl
  char v8; // al
  __int64 v9; // rsi
  uint32_t config_id; // ecx
  char v11; // dl
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // al
  const data::ConfigCustomLevelRoomExtraData *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  index = a2->index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->index = index;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupy_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupy_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->occupy_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->occupy_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupy_pos, 16LL);
  }
  if ( (((unsigned __int8)v16 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v16->occupy_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v16->occupy_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v16->occupy_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v16 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v16->occupy_pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v16->occupy_pos, 16LL);
  }
  v4 = *(_QWORD *)&v16->occupy_pos.z;
  *(_QWORD *)&this->occupy_pos.x = *(_QWORD *)&v16->occupy_pos.x;
  *(_QWORD *)&this->occupy_pos.z = v4;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupy_bound >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupy_bound >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->occupy_bound.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->occupy_bound.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupy_bound, 16LL);
  }
  if ( (((unsigned __int8)v16 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v16->occupy_bound >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v16->occupy_bound >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v16->occupy_bound.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v16 + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&v16->occupy_bound.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v16->occupy_bound, 16LL);
  }
  v5 = *(_QWORD *)&v16->occupy_bound.z;
  *(_QWORD *)&this->occupy_bound.x = *(_QWORD *)&v16->occupy_bound.x;
  *(_QWORD *)&this->occupy_bound.z = v5;
  p_pile_tags = &v16->pile_tags;
  std::vector<data::PileTag>::operator=(&this->pile_tags, &v16->pile_tags);
  if ( *(char *)(((unsigned __int64)&v16->is_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_gadget, p_pile_tags, &v16->is_gadget);
  is_gadget = v16->is_gadget;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_gadget >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_pile_tags) = v8 != 0;
    __asan_report_store1(&this->is_gadget, p_pile_tags, &this->is_gadget);
  }
  this->is_gadget = is_gadget;
  v9 = (((_BYTE)v16 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->config_id);
  }
  config_id = v16->config_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v11 )
    __asan_report_store4(&this->config_id, v9);
  this->config_id = config_id;
  if ( *(_WORD *)(((unsigned __int64)&this->gadget_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v16->gadget_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v16->gadget_rot);
  v12 = *(_QWORD *)&v16->gadget_rot.z;
  *(_QWORD *)&this->gadget_rot.x = *(_QWORD *)&v16->gadget_rot.x;
  *(_QWORD *)&this->gadget_rot.z = v12;
  if ( *(char *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_json_loaded, v9, &v16->is_json_loaded);
  is_json_loaded = v16->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v9) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, v9, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};
