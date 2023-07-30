// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GadgetExcelConfig.gen.h

// Line 93: range 000000001474EE5A-000000001474F150
void __cdecl data::GadgetExcelConfig::GadgetExcelConfig(data::GadgetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi

  data::EntityExcelConfig::EntityExcelConfig((data::EntityExcelConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::GadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = None_10;
  std::string::basic_string(&this->json_name);
  if ( *(char *)(((unsigned __int64)&this->has_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_move, v3, &this->has_move);
  this->has_move = 0;
  v4 = ((_BYTE)this + 121) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->has_audio, v4, v5);
  this->has_audio = 0;
  v6 = ((_BYTE)this + 122) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_equip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_equip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_equip, v6, v7);
  this->is_equip = 0;
  v8 = ((_BYTE)this + 123) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_interactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_interactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_interactive, v8, v9);
  this->is_interactive = 0;
  v10 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vision_level, v10);
  }
  this->vision_level = VISION_LEVEL_NORMAL;
  std::string::basic_string(&this->server_script);
  std::string::basic_string(&this->item_json_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_prop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_prop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_prop_id, v10);
  }
  this->mp_prop_id = 0;
  v11 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chain_id, v11);
  }
  this->chain_id = 0;
  if ( *(char *)(((unsigned __int64)&this->has_dynamic_barrier >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_dynamic_barrier, v11, &this->has_dynamic_barrier);
  this->has_dynamic_barrier = 0;
};

// Line 93: range 0000000014D2870C-0000000014D28CDF
void __cdecl data::GadgetExcelConfig::GadgetExcelConfig(
        data::GadgetExcelConfig *const this,
        const data::GadgetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::EntityType type; // ecx
  char v5; // dl
  std::string *p_json_name; // rsi
  bool has_move; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool has_audio; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_equip; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_interactive; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  data::VisionLevelType vision_level; // ecx
  char v26; // dl
  std::string *p_item_json_name; // rsi
  uint32_t mp_prop_id; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t chain_id; // ecx
  char v32; // dl
  bool has_dynamic_barrier; // cl
  char v34; // al

  data::EntityExcelConfig::EntityExcelConfig((data::EntityExcelConfig *const)this, (const data::EntityExcelConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::GadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
  v3 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->type, v3);
  }
  this->type = type;
  p_json_name = &a2->json_name;
  std::string::basic_string(&this->json_name, &a2->json_name);
  if ( *(char *)(((unsigned __int64)&a2->has_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_move, p_json_name, &a2->has_move);
  has_move = a2->has_move;
  v8 = *(_BYTE *)(((unsigned __int64)&this->has_move >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_json_name) = v8 != 0;
    __asan_report_store1(&this->has_move, p_json_name, &this->has_move);
  }
  this->has_move = has_move;
  v9 = ((_BYTE)a2 + 121) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->has_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->has_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->has_audio, v9, v10);
  has_audio = a2->has_audio;
  v12 = *(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->has_audio, v9, v13);
  this->has_audio = has_audio;
  v14 = ((_BYTE)a2 + 122) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->is_equip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->is_equip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->is_equip, v14, v15);
  is_equip = a2->is_equip;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_equip >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 122) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_equip, v14, v18);
  this->is_equip = is_equip;
  v19 = ((_BYTE)a2 + 123) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&a2->is_interactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&a2->is_interactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&a2->is_interactive, v19, v20);
  is_interactive = a2->is_interactive;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_interactive >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 123) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_interactive, v19, v23);
  this->is_interactive = is_interactive;
  v24 = (((_BYTE)a2 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vision_level);
  }
  vision_level = a2->vision_level;
  v26 = *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->vision_level, v24);
  }
  this->vision_level = vision_level;
  std::string::basic_string(&this->server_script, &a2->server_script);
  p_item_json_name = &a2->item_json_name;
  std::string::basic_string(&this->item_json_name, &a2->item_json_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_prop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mp_prop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mp_prop_id);
  }
  mp_prop_id = a2->mp_prop_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->mp_prop_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(p_item_json_name) = v29 != 0;
    __asan_report_store4(&this->mp_prop_id, p_item_json_name);
  }
  this->mp_prop_id = mp_prop_id;
  v30 = (((_BYTE)a2 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->chain_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->chain_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->chain_id);
  }
  chain_id = a2->chain_id;
  v32 = *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v32 != 0;
  if ( v32 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v32 )
    __asan_report_store4(&this->chain_id, v30);
  this->chain_id = chain_id;
  if ( *(char *)(((unsigned __int64)&a2->has_dynamic_barrier >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_dynamic_barrier, v30, &a2->has_dynamic_barrier);
  has_dynamic_barrier = a2->has_dynamic_barrier;
  v34 = *(_BYTE *)(((unsigned __int64)&this->has_dynamic_barrier >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(v30) = v34 != 0;
    __asan_report_store1(&this->has_dynamic_barrier, v30, &this->has_dynamic_barrier);
  }
  this->has_dynamic_barrier = has_dynamic_barrier;
};

// Line 97: range 0000000014DECB9A-0000000014DECBC4
void __cdecl data::GadgetExcelConfig::~GadgetExcelConfig(data::GadgetExcelConfig *const this)
{
  data::GadgetExcelConfig::~GadgetExcelConfig(this);
  operator delete(this, 0x1D0uLL);
};

// Line 97: range 0000000014DECB16-0000000014DECB99
void __cdecl data::GadgetExcelConfig::~GadgetExcelConfig(data::GadgetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  std::string::~string(&this->item_json_name);
  std::string::~string(&this->server_script);
  std::string::~string(&this->json_name);
  data::EntityExcelConfig::~EntityExcelConfig((data::EntityExcelConfig *const)this);
};

// Line 119: range 0000000014D28E20-0000000014D291D1
void __cdecl data::GadgetPropExcelConfig::GadgetPropExcelConfig(
        data::GadgetPropExcelConfig *const this,
        const data::GadgetPropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  float hp; // xmm0_4
  __int64 v6; // rsi
  data::GrowCurveType hp_curve; // ecx
  char v8; // al
  float attack; // xmm0_4
  __int64 v10; // rsi
  data::GrowCurveType attack_curve; // ecx
  char v12; // al
  float defense; // xmm0_4
  __int64 v14; // rsi
  data::GrowCurveType defense_curve; // ecx
  char v16; // al
  const data::GadgetPropExcelConfig *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GadgetPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GadgetPropExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v17->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->hp);
  }
  hp = v17->hp;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp, v6);
  }
  this->hp = hp;
  if ( *(_BYTE *)(((unsigned __int64)&v17->hp_curve >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->hp_curve >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->hp_curve);
  }
  hp_curve = v17->hp_curve;
  v8 = *(_BYTE *)(((unsigned __int64)&this->hp_curve >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->hp_curve, v6);
  }
  this->hp_curve = hp_curve;
  if ( *(_BYTE *)(((unsigned __int64)&v17->attack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->attack >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->attack);
  }
  attack = v17->attack;
  v10 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack, v10);
  }
  this->attack = attack;
  if ( *(_BYTE *)(((unsigned __int64)&v17->attack_curve >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->attack_curve >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->attack_curve);
  }
  attack_curve = v17->attack_curve;
  v12 = *(_BYTE *)(((unsigned __int64)&this->attack_curve >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->attack_curve, v10);
  }
  this->attack_curve = attack_curve;
  if ( *(_BYTE *)(((unsigned __int64)&v17->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->defense);
  }
  defense = v17->defense;
  v14 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defense, v14);
  }
  this->defense = defense;
  if ( *(_BYTE *)(((unsigned __int64)&v17->defense_curve >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->defense_curve >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->defense_curve);
  }
  defense_curve = v17->defense_curve;
  v16 = *(_BYTE *)(((unsigned __int64)&this->defense_curve >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->defense_curve, v14);
  }
  this->defense_curve = defense_curve;
};

// Line 122: range 0000000014DECAA8-0000000014DECAE9
void __cdecl data::GadgetPropExcelConfig::~GadgetPropExcelConfig(data::GadgetPropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetPropExcelConfig = v2;
};

// Line 122: range 0000000014DECAEA-0000000014DECB14
void __cdecl data::GadgetPropExcelConfig::~GadgetPropExcelConfig(data::GadgetPropExcelConfig *const this)
{
  data::GadgetPropExcelConfig::~GadgetPropExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 139: range 000000001474F152-000000001474F1F1
void __cdecl data::LandSoundExcelConfig::LandSoundExcelConfig(data::LandSoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LandSoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LandSoundExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->audio_name);
};

// Line 139: range 0000000014D29312-0000000014D29429
void __cdecl data::LandSoundExcelConfig::LandSoundExcelConfig(
        data::LandSoundExcelConfig *const this,
        const data::LandSoundExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::LandSoundExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LandSoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LandSoundExcelConfig = v2;
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
  std::string::basic_string(&this->name, &v5->name);
  std::string::basic_string(&this->audio_name, &v5->audio_name);
};

// Line 142: range 0000000014DECA7C-0000000014DECAA6
void __cdecl data::LandSoundExcelConfig::~LandSoundExcelConfig(data::LandSoundExcelConfig *const this)
{
  data::LandSoundExcelConfig::~LandSoundExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 142: range 0000000014DECA1A-0000000014DECA7B
void __cdecl data::LandSoundExcelConfig::~LandSoundExcelConfig(data::LandSoundExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LandSoundExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LandSoundExcelConfig = v2;
  std::string::~string(&this->audio_name);
  std::string::~string(&this->name);
};

// Line 155: range 00000000147C4B42-00000000147C4BE7
data::GadgetInteractActionConfig *__cdecl data::GadgetInteractActionConfig::operator=(
        data::GadgetInteractActionConfig *const this,
        const data::GadgetInteractActionConfig *a2)
{
  data::InteractActionType action_type; // ecx
  char v3; // al
  const data::GadgetInteractActionConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action_type);
  }
  action_type = a2->action_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->action_type, a2);
  }
  this->action_type = action_type;
  std::vector<unsigned int>::operator=(&this->param, &v5->param);
  return this;
};

// Line 155: range 0000000014C911E0-0000000014C9126F
void __cdecl data::GadgetInteractActionConfig::GadgetInteractActionConfig(data::GadgetInteractActionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractActionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetInteractActionConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_type, v1);
  }
  this->action_type = INTERACT_ACTION_NONE;
  std::vector<unsigned int>::vector(&this->param);
};

// Line 155: range 0000000014D28470-0000000014D28545
void __cdecl data::GadgetInteractActionConfig::GadgetInteractActionConfig(
        data::GadgetInteractActionConfig *const this,
        const data::GadgetInteractActionConfig *a2)
{
  int (**v2)(...); // rdx
  data::InteractActionType action_type; // ecx
  char v4; // al
  const data::GadgetInteractActionConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractActionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GadgetInteractActionConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action_type);
  }
  action_type = a2->action_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->action_type, a2);
  }
  this->action_type = action_type;
  std::vector<unsigned int>::vector(&this->param, &v5->param);
};

// Line 158: range 0000000014BC1C8A-0000000014BC1CB4
void __cdecl data::GadgetInteractActionConfig::~GadgetInteractActionConfig(
        data::GadgetInteractActionConfig *const this)
{
  data::GadgetInteractActionConfig::~GadgetInteractActionConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 158: range 0000000014BC1C38-0000000014BC1C89
void __cdecl data::GadgetInteractActionConfig::~GadgetInteractActionConfig(
        data::GadgetInteractActionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractActionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetInteractActionConfig = v2;
  std::vector<unsigned int>::~vector(&this->param);
};

// Line 168: range 00000000147C49A0-00000000147C4A45
data::GadgetInteractCond *__cdecl data::GadgetInteractCond::operator=(
        data::GadgetInteractCond *const this,
        const data::GadgetInteractCond *a2)
{
  data::InteractCondType cond_type; // ecx
  char v3; // al
  const data::GadgetInteractCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<std::string>::operator=(&this->param, &v5->param);
  return this;
};

// Line 168: range 0000000014C913D2-0000000014C91461
void __cdecl data::GadgetInteractCond::GadgetInteractCond(data::GadgetInteractCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetInteractCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = INTERACT_COND_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 168: range 0000000014D285B4-0000000014D28689
void __cdecl data::GadgetInteractCond::GadgetInteractCond(
        data::GadgetInteractCond *const this,
        const data::GadgetInteractCond *a2)
{
  int (**v2)(...); // rdx
  data::InteractCondType cond_type; // ecx
  char v4; // al
  const data::GadgetInteractCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GadgetInteractCond = v2;
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
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 171: range 0000000014BC1D78-0000000014BC1DA2
void __cdecl data::GadgetInteractCond::~GadgetInteractCond(data::GadgetInteractCond *const this)
{
  data::GadgetInteractCond::~GadgetInteractCond(this);
  operator delete(this, 0x28uLL);
};

// Line 171: range 0000000014BC1D26-0000000014BC1D77
void __cdecl data::GadgetInteractCond::~GadgetInteractCond(data::GadgetInteractCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetInteractCond = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 181: range 000000001474F29A-000000001474F4CC
void __cdecl data::GadgetInteractExcelConfig::GadgetInteractExcelConfig(data::GadgetInteractExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetInteractExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->interact_id, v1);
  }
  this->interact_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action_type, v3);
  }
  this->action_type = INTERACT_ACTION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param1, v3);
  }
  this->param1 = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param2, v4);
  }
  this->param2 = 0;
  std::vector<data::GadgetInteractActionConfig>::vector(&this->action_list);
  if ( *(char *)(((unsigned __int64)&this->is_guest_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guest_interact, v4, &this->is_guest_interact);
  this->is_guest_interact = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_items);
  std::vector<data::GadgetInteractCond>::vector(&this->cond_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_comb, v4);
  }
  this->cond_comb = LOGIC_NONE;
  v5 = ((_BYTE)this + 108) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_mp_mode_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_mp_mode_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_mp_mode_interact, v5, v6);
  this->is_mp_mode_interact = 0;
};

// Line 181: range 0000000014D2956A-0000000014D2999B
void __cdecl data::GadgetInteractExcelConfig::GadgetInteractExcelConfig(
        data::GadgetInteractExcelConfig *const this,
        const data::GadgetInteractExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t interact_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::InteractActionType action_type; // ecx
  char v7; // dl
  uint32_t param1; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t param2; // ecx
  char v12; // dl
  std::vector<data::GadgetInteractActionConfig> *p_action_list; // rsi
  bool is_guest_interact; // cl
  char v15; // al
  std::vector<data::GadgetInteractCond> *p_cond_list; // rsi
  data::LogicType cond_comb; // ecx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_mp_mode_interact; // cl
  char v22; // dl
  __int64 v23; // rdx
  const data::GadgetInteractExcelConfig *v24; // [rsp+0h] [rbp-20h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GadgetInteractExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->interact_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->interact_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->interact_id);
  }
  interact_id = a2->interact_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->interact_id, a2);
  }
  this->interact_id = interact_id;
  v5 = (((_BYTE)v24 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->action_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->action_type);
  }
  action_type = v24->action_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->action_type, v5);
  }
  this->action_type = action_type;
  if ( *(_BYTE *)(((unsigned __int64)&v24->param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->param1);
  }
  param1 = v24->param1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->param1, v5);
  }
  this->param1 = param1;
  v10 = (((_BYTE)v24 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->param2);
  }
  param2 = v24->param2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->param2, v10);
  }
  this->param2 = param2;
  p_action_list = &v24->action_list;
  std::vector<data::GadgetInteractActionConfig>::vector(&this->action_list, &v24->action_list);
  if ( *(char *)(((unsigned __int64)&v24->is_guest_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v24->is_guest_interact, p_action_list, &v24->is_guest_interact);
  is_guest_interact = v24->is_guest_interact;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_guest_interact >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_action_list) = v15 != 0;
    __asan_report_store1(&this->is_guest_interact, p_action_list, &this->is_guest_interact);
  }
  this->is_guest_interact = is_guest_interact;
  std::vector<data::IdCountConfig>::vector(&this->cost_items, &v24->cost_items);
  p_cond_list = &v24->cond_list;
  std::vector<data::GadgetInteractCond>::vector(&this->cond_list, &v24->cond_list);
  if ( *(_BYTE *)(((unsigned __int64)&v24->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->cond_comb);
  }
  cond_comb = v24->cond_comb;
  v18 = *(_BYTE *)(((unsigned __int64)&this->cond_comb >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_cond_list) = v18 != 0;
    __asan_report_store4(&this->cond_comb, p_cond_list);
  }
  this->cond_comb = cond_comb;
  v19 = ((_BYTE)v24 + 108) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v24->is_mp_mode_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v24->is_mp_mode_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v24->is_mp_mode_interact, v19, v20);
  is_mp_mode_interact = v24->is_mp_mode_interact;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_mp_mode_interact >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_mp_mode_interact, v19, v23);
  this->is_mp_mode_interact = is_mp_mode_interact;
};

// Line 184: range 0000000014DEC97C-0000000014DEC9ED
void __cdecl data::GadgetInteractExcelConfig::~GadgetInteractExcelConfig(data::GadgetInteractExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetInteractExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetInteractExcelConfig = v2;
  std::vector<data::GadgetInteractCond>::~vector(&this->cond_list);
  std::vector<data::IdCountConfig>::~vector(&this->cost_items);
  std::vector<data::GadgetInteractActionConfig>::~vector(&this->action_list);
};

// Line 184: range 0000000014DEC9EE-0000000014DECA18
void __cdecl data::GadgetInteractExcelConfig::~GadgetInteractExcelConfig(data::GadgetInteractExcelConfig *const this)
{
  data::GadgetInteractExcelConfig::~GadgetInteractExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 204: range 000000001474F4CE-000000001474F61C
void __cdecl data::GadgetChainExcelConfig::GadgetChainExcelConfig(data::GadgetChainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GadgetChainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetChainExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chain_id, v1);
  }
  this->chain_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_level, v3);
  }
  this->init_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_level, v3);
  }
  this->max_level = 0;
  std::vector<unsigned int>::vector(&this->buff_list);
  if ( *(char *)(((unsigned __int64)&this->is_allow_lua_revise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_allow_lua_revise, v3, &this->is_allow_lua_revise);
  this->is_allow_lua_revise = 0;
};

// Line 204: range 0000000014D29ADC-0000000014D29D21
void __cdecl data::GadgetChainExcelConfig::GadgetChainExcelConfig(
        data::GadgetChainExcelConfig *const this,
        const data::GadgetChainExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t chain_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t init_level; // ecx
  char v7; // dl
  uint32_t max_level; // ecx
  char v9; // al
  std::vector<unsigned int> *p_buff_list; // rsi
  bool is_allow_lua_revise; // cl
  char v12; // al
  const data::GadgetChainExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GadgetChainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GadgetChainExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->chain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->chain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->chain_id);
  }
  chain_id = a2->chain_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->chain_id, a2);
  }
  this->chain_id = chain_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->init_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->init_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->init_level);
  }
  init_level = v13->init_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->init_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->init_level, v5);
  }
  this->init_level = init_level;
  if ( *(_BYTE *)(((unsigned __int64)&v13->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->max_level);
  }
  max_level = v13->max_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_level, v5);
  }
  this->max_level = max_level;
  p_buff_list = &v13->buff_list;
  std::vector<unsigned int>::vector(&this->buff_list, &v13->buff_list);
  if ( *(char *)(((unsigned __int64)&v13->is_allow_lua_revise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_allow_lua_revise, p_buff_list, &v13->is_allow_lua_revise);
  is_allow_lua_revise = v13->is_allow_lua_revise;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_allow_lua_revise >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_buff_list) = v12 != 0;
    __asan_report_store1(&this->is_allow_lua_revise, p_buff_list, &this->is_allow_lua_revise);
  }
  this->is_allow_lua_revise = is_allow_lua_revise;
};

// Line 207: range 0000000014DEC950-0000000014DEC97A
void __cdecl data::GadgetChainExcelConfig::~GadgetChainExcelConfig(data::GadgetChainExcelConfig *const this)
{
  data::GadgetChainExcelConfig::~GadgetChainExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 207: range 0000000014DEC8FE-0000000014DEC94F
void __cdecl data::GadgetChainExcelConfig::~GadgetChainExcelConfig(data::GadgetChainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetChainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetChainExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->buff_list);
};
