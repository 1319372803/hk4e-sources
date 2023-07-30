// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCustomLevelBrick.h

// Line 47: range 000000000F785714-000000000F785B00
data::ConfigCustomLevelBrick *__cdecl data::ConfigCustomLevelBrick::operator=(
        data::ConfigCustomLevelBrick *const this,
        const data::ConfigCustomLevelBrick *a2)
{
  __int64 v2; // rdx
  float camera_focus_dis; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_creater; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::CreaterDir creater_dir; // ecx
  char v10; // al
  __int64 v11; // rsi
  data::CreaterBornTag born_tag; // ecx
  char v13; // dl
  uint32_t server_gadget_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t config_level; // ecx
  char v18; // dl
  bool is_json_loaded; // cl
  char v20; // al

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load16(a2);
  v2 = *(_QWORD *)&a2->brick_size.z;
  *(_QWORD *)&this->brick_size.x = *(_QWORD *)&a2->brick_size.x;
  *(_QWORD *)&this->brick_size.z = v2;
  std::vector<data::PileTag>::operator=(&this->pile_tags, &a2->pile_tags);
  if ( *(_BYTE *)(((unsigned __int64)&a2->camera_focus_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camera_focus_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camera_focus_dis);
  }
  camera_focus_dis = a2->camera_focus_dis;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_focus_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_focus_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_focus_dis, &a2->pile_tags);
  }
  this->camera_focus_dis = camera_focus_dis;
  v4 = ((_BYTE)a2 + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_creater >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_creater >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_creater, v4, v5);
  is_creater = a2->is_creater;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_creater >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_creater, v4, v8);
  this->is_creater = is_creater;
  if ( *(_BYTE *)(((unsigned __int64)&a2->creater_dir >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->creater_dir >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->creater_dir);
  }
  creater_dir = a2->creater_dir;
  v10 = *(_BYTE *)(((unsigned __int64)&this->creater_dir >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v4) = v10 != 0;
    __asan_report_store4(&this->creater_dir, v4);
  }
  this->creater_dir = creater_dir;
  v11 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->born_tag);
  }
  born_tag = a2->born_tag;
  v13 = *(_BYTE *)(((unsigned __int64)&this->born_tag >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->born_tag, v11);
  }
  this->born_tag = born_tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->server_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->server_gadget_id);
  }
  server_gadget_id = a2->server_gadget_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->server_gadget_id, v11);
  }
  this->server_gadget_id = server_gadget_id;
  v16 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_level);
  }
  config_level = a2->config_level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
    __asan_report_store4(&this->config_level, v16);
  this->config_level = config_level;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v16, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store1(&this->is_json_loaded, v16, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 47: range 000000000F9CCD7E-000000000F9CCF6B
void __cdecl data::ConfigCustomLevelBrick::ConfigCustomLevelBrick(data::ConfigCustomLevelBrick *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::Vector::Vector(&this->brick_size);
  std::vector<data::PileTag>::vector(&this->pile_tags);
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_focus_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_focus_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_focus_dis, v1);
  }
  this->camera_focus_dis = 0.0;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_creater >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_creater >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_creater, v2, v3);
  this->is_creater = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->creater_dir >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->creater_dir >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->creater_dir, v2);
  }
  this->creater_dir = Down;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_tag, v4);
  }
  this->born_tag = VerticalCoordinate;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_gadget_id, v4);
  }
  this->server_gadget_id = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_level, v5);
  }
  this->config_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 47: range 00000000141EFD36-00000000141F011F
void __cdecl data::ConfigCustomLevelBrick::ConfigCustomLevelBrick(
        data::ConfigCustomLevelBrick *const this,
        const data::ConfigCustomLevelBrick *a2)
{
  __int64 v2; // rdx
  float camera_focus_dis; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_creater; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::CreaterDir creater_dir; // ecx
  char v10; // al
  __int64 v11; // rsi
  data::CreaterBornTag born_tag; // ecx
  char v13; // dl
  uint32_t server_gadget_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t config_level; // ecx
  char v18; // dl
  bool is_json_loaded; // cl
  char v20; // al

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load16(a2);
  v2 = *(_QWORD *)&a2->brick_size.z;
  *(_QWORD *)&this->brick_size.x = *(_QWORD *)&a2->brick_size.x;
  *(_QWORD *)&this->brick_size.z = v2;
  std::vector<data::PileTag>::vector(&this->pile_tags, &a2->pile_tags);
  if ( *(_BYTE *)(((unsigned __int64)&a2->camera_focus_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camera_focus_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camera_focus_dis);
  }
  camera_focus_dis = a2->camera_focus_dis;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_focus_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_focus_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_focus_dis, &a2->pile_tags);
  }
  this->camera_focus_dis = camera_focus_dis;
  v4 = ((_BYTE)a2 + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_creater >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_creater >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_creater, v4, v5);
  is_creater = a2->is_creater;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_creater >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_creater, v4, v8);
  this->is_creater = is_creater;
  if ( *(_BYTE *)(((unsigned __int64)&a2->creater_dir >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->creater_dir >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->creater_dir);
  }
  creater_dir = a2->creater_dir;
  v10 = *(_BYTE *)(((unsigned __int64)&this->creater_dir >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v4) = v10 != 0;
    __asan_report_store4(&this->creater_dir, v4);
  }
  this->creater_dir = creater_dir;
  v11 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->born_tag);
  }
  born_tag = a2->born_tag;
  v13 = *(_BYTE *)(((unsigned __int64)&this->born_tag >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->born_tag, v11);
  }
  this->born_tag = born_tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->server_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->server_gadget_id);
  }
  server_gadget_id = a2->server_gadget_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->server_gadget_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->server_gadget_id, v11);
  }
  this->server_gadget_id = server_gadget_id;
  v16 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_level);
  }
  config_level = a2->config_level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
    __asan_report_store4(&this->config_level, v16);
  this->config_level = config_level;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v16, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store1(&this->is_json_loaded, v16, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 47: range 000000000F9723A6-000000000F9723C4
void __cdecl data::ConfigCustomLevelBrick::~ConfigCustomLevelBrick(data::ConfigCustomLevelBrick *const this)
{
  std::vector<data::PileTag>::~vector(&this->pile_tags);
};
