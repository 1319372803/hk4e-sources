// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigRegionalPlay.h

// Line 96: range 000000001271E59A-000000001271E7DC
void __cdecl data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(data::ConfigRegionalPlayBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  std::enable_shared_from_this<data::ConfigRegionalPlayBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigRegionalPlayBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_type, v1);
  }
  this->play_type = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode_type, v3);
  }
  this->mode_type = REGIONAL_PLAY_MODE_STANDARD;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_config_id, v3);
  }
  this->default_config_id = 0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bind_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bind_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bind_scene, v4);
  }
  this->bind_scene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bind_polygon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bind_polygon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bind_polygon_type, v4);
  }
  this->bind_polygon_type = Normal_0;
  std::string::basic_string(&this->play_status_sgv);
  std::vector<std::string>::vector(&this->ability_group_name_list);
  if ( *(char *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_team, v4, &this->is_team);
  this->is_team = 0;
  std::vector<data::ConfigRegionalPlayVarData>::vector(&this->var_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 96: range 000000001271EC46-000000001271F0A7
void __cdecl data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(
        data::ConfigRegionalPlayBase *const this,
        const data::ConfigRegionalPlayBase *a2)
{
  std::enable_shared_from_this<data::ConfigRegionalPlayBase> *v2; // rsi
  int (**v3)(...); // rdx
  data::RegionalPlayType play_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::RegionalPlayModeType mode_type; // ecx
  char v8; // dl
  uint32_t default_config_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t bind_scene; // ecx
  char v13; // dl
  data::PolygonType bind_polygon_type; // ecx
  char v15; // al
  data::StringList *p_ability_group_name_list; // rsi
  bool is_team; // cl
  char v18; // al
  data::ConfigRegionalPlayVarDataArray *p_var_list; // rsi
  bool is_json_loaded; // cl
  char v21; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigRegionalPlayBase>;
  std::enable_shared_from_this<data::ConfigRegionalPlayBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigRegionalPlayBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigRegionalPlayBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_type);
  }
  play_type = a2->play_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->play_type, v2);
  }
  this->play_type = play_type;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mode_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mode_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mode_type);
  }
  mode_type = a2->mode_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->mode_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->mode_type, v6);
  }
  this->mode_type = mode_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->default_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->default_config_id);
  }
  default_config_id = a2->default_config_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->default_config_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->default_config_id, v6);
  }
  this->default_config_id = default_config_id;
  v11 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bind_scene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bind_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->bind_scene);
  }
  bind_scene = a2->bind_scene;
  v13 = *(_BYTE *)(((unsigned __int64)&this->bind_scene >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->bind_scene, v11);
  }
  this->bind_scene = bind_scene;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bind_polygon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bind_polygon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bind_polygon_type);
  }
  bind_polygon_type = a2->bind_polygon_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->bind_polygon_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->bind_polygon_type, v11);
  }
  this->bind_polygon_type = bind_polygon_type;
  std::string::basic_string(&this->play_status_sgv, &a2->play_status_sgv);
  p_ability_group_name_list = &a2->ability_group_name_list;
  std::vector<std::string>::vector(&this->ability_group_name_list, &a2->ability_group_name_list);
  if ( *(char *)(((unsigned __int64)&a2->is_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_team, p_ability_group_name_list, &a2->is_team);
  is_team = a2->is_team;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_team >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_ability_group_name_list) = v18 != 0;
    __asan_report_store1(&this->is_team, p_ability_group_name_list, &this->is_team);
  }
  this->is_team = is_team;
  p_var_list = &a2->var_list;
  std::vector<data::ConfigRegionalPlayVarData>::vector(&this->var_list, &a2->var_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_var_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(p_var_list) = v21 != 0;
    __asan_report_store1(&this->is_json_loaded, p_var_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 112: range 000000001271F56C-000000001271F596
void __cdecl data::ConfigRegionalPlayBase::~ConfigRegionalPlayBase(data::ConfigRegionalPlayBase *const this)
{
  data::ConfigRegionalPlayBase::~ConfigRegionalPlayBase(this);
  operator delete(this, 0x90uLL);
};

// Line 112: range 000000001271F4EA-000000001271F56B
void __cdecl data::ConfigRegionalPlayBase::~ConfigRegionalPlayBase(data::ConfigRegionalPlayBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::vector<data::ConfigRegionalPlayVarData>::~vector(&this->var_list);
  std::vector<std::string>::~vector(&this->ability_group_name_list);
  std::string::~string(&this->play_status_sgv);
  std::enable_shared_from_this<data::ConfigRegionalPlayBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigRegionalPlayBase>);
};

// Line 117: range 000000001215DC22-000000001215DC32
const char *__cdecl data::ConfigRegionalPlayBase::getTypeName(const data::ConfigRegionalPlayBase *const this)
{
  return "ConfigRegionalPlayBase";
};

// Line 118: range 000000001215DC34-000000001215DDD0
int32_t __cdecl data::ConfigRegionalPlayBase::getHashNum(const data::ConfigRegionalPlayBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRegionalPlayBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRegionalPlayBase",
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

// Line 144: range 000000001271F598-000000001271F65E
void __cdecl data::ConfigRegionalPlayMichiaeMatsuri::ConfigRegionalPlayMichiaeMatsuri(
        data::ConfigRegionalPlayMichiaeMatsuri *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayMichiaeMatsuri + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::basic_string(&this->dark_pressure_sgv);
  std::string::basic_string(&this->crystal_energy_sgv);
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offering_id, v1);
  }
  this->offering_id = 0;
  std::string::basic_string(&this->crystal_level_sgv);
};

// Line 144: range 000000001271FA14-000000001271FB9C
void __cdecl data::ConfigRegionalPlayMichiaeMatsuri::ConfigRegionalPlayMichiaeMatsuri(
        data::ConfigRegionalPlayMichiaeMatsuri *const this,
        const data::ConfigRegionalPlayMichiaeMatsuri *a2)
{
  int (**v2)(...); // rdx
  std::string *p_crystal_energy_sgv; // rsi
  uint32_t offering_id; // ecx
  char v5; // al

  data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayMichiaeMatsuri + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::basic_string(&this->dark_pressure_sgv, &a2->dark_pressure_sgv);
  p_crystal_energy_sgv = &a2->crystal_energy_sgv;
  std::string::basic_string(&this->crystal_energy_sgv, &a2->crystal_energy_sgv);
  if ( *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->offering_id);
  }
  offering_id = a2->offering_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_crystal_energy_sgv) = v5 != 0;
    __asan_report_store4(&this->offering_id, p_crystal_energy_sgv);
  }
  this->offering_id = offering_id;
  std::string::basic_string(&this->crystal_level_sgv, &a2->crystal_level_sgv);
};

// Line 154: range 000000001274CAFC-000000001274CB26
void __cdecl data::ConfigRegionalPlayMichiaeMatsuri::~ConfigRegionalPlayMichiaeMatsuri(
        data::ConfigRegionalPlayMichiaeMatsuri *const this)
{
  data::ConfigRegionalPlayMichiaeMatsuri::~ConfigRegionalPlayMichiaeMatsuri(this);
  operator delete(this, 0xF8uLL);
};

// Line 154: range 000000001274CA78-000000001274CAFB
void __cdecl data::ConfigRegionalPlayMichiaeMatsuri::~ConfigRegionalPlayMichiaeMatsuri(
        data::ConfigRegionalPlayMichiaeMatsuri *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayMichiaeMatsuri + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::~string(&this->crystal_level_sgv);
  std::string::~string(&this->crystal_energy_sgv);
  std::string::~string(&this->dark_pressure_sgv);
  data::ConfigRegionalPlayBase::~ConfigRegionalPlayBase(this);
};

// Line 159: range 000000001215DDD2-000000001215DDE2
const char *__cdecl data::ConfigRegionalPlayMichiaeMatsuri::getTypeName(
        const data::ConfigRegionalPlayMichiaeMatsuri *const this)
{
  return "ConfigRegionalPlayMichiaeMatsuri";
};

// Line 160: range 000000001215DDE4-000000001215DF80
int32_t __cdecl data::ConfigRegionalPlayMichiaeMatsuri::getHashNum(
        const data::ConfigRegionalPlayMichiaeMatsuri *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRegionalPlayMichiaeMatsuri::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRegionalPlayMichiaeMatsuri",
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

// Line 176: range 000000001271FE86-000000001271FEC7
void __cdecl data::ConfigRegionalPlayMichiaeMatsuriFactory::ConfigRegionalPlayMichiaeMatsuriFactory(
        data::ConfigRegionalPlayMichiaeMatsuriFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayMichiaeMatsuriFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayMichiaeMatsuriFactory = v2;
};

// Line 184: range 00000000127201D0-0000000012720241
void __cdecl data::ConfigRegionalPlayLightStone::ConfigRegionalPlayLightStone(
        data::ConfigRegionalPlayLightStone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayLightStone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::basic_string(&this->energy_sgv);
  std::string::basic_string(&this->level_sgv);
};

// Line 184: range 00000000127205F6-00000000127206C8
void __cdecl data::ConfigRegionalPlayLightStone::ConfigRegionalPlayLightStone(
        data::ConfigRegionalPlayLightStone *const this,
        const data::ConfigRegionalPlayLightStone *a2)
{
  int (**v2)(...); // rdx

  data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayLightStone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::basic_string(&this->energy_sgv, &a2->energy_sgv);
  std::string::basic_string(&this->level_sgv, &a2->level_sgv);
};

// Line 192: range 000000001274C9DA-000000001274CA4B
void __cdecl data::ConfigRegionalPlayLightStone::~ConfigRegionalPlayLightStone(
        data::ConfigRegionalPlayLightStone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayLightStone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::~string(&this->level_sgv);
  std::string::~string(&this->energy_sgv);
  data::ConfigRegionalPlayBase::~ConfigRegionalPlayBase(this);
};

// Line 192: range 000000001274CA4C-000000001274CA76
void __cdecl data::ConfigRegionalPlayLightStone::~ConfigRegionalPlayLightStone(
        data::ConfigRegionalPlayLightStone *const this)
{
  data::ConfigRegionalPlayLightStone::~ConfigRegionalPlayLightStone(this);
  operator delete(this, 0xD0uLL);
};

// Line 197: range 000000001215DF82-000000001215DF92
const char *__cdecl data::ConfigRegionalPlayLightStone::getTypeName(
        const data::ConfigRegionalPlayLightStone *const this)
{
  return "ConfigRegionalPlayLightStone";
};

// Line 198: range 000000001215DF94-000000001215E130
int32_t __cdecl data::ConfigRegionalPlayLightStone::getHashNum(const data::ConfigRegionalPlayLightStone *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRegionalPlayLightStone::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRegionalPlayLightStone",
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

// Line 214: range 00000000127209B2-00000000127209F3
void __cdecl data::ConfigRegionalPlayLightStoneFactory::ConfigRegionalPlayLightStoneFactory(
        data::ConfigRegionalPlayLightStoneFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayLightStoneFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayLightStoneFactory = v2;
};

// Line 222: range 0000000012720CFC-0000000012720D6D
void __cdecl data::ConfigRegionalPlayDeathZone::ConfigRegionalPlayDeathZone(
        data::ConfigRegionalPlayDeathZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayDeathZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::basic_string(&this->erosion_sgv);
  std::string::basic_string(&this->erosion_level_sgv);
};

// Line 222: range 0000000012721122-00000000127211F4
void __cdecl data::ConfigRegionalPlayDeathZone::ConfigRegionalPlayDeathZone(
        data::ConfigRegionalPlayDeathZone *const this,
        const data::ConfigRegionalPlayDeathZone *a2)
{
  int (**v2)(...); // rdx

  data::ConfigRegionalPlayBase::ConfigRegionalPlayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayDeathZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::basic_string(&this->erosion_sgv, &a2->erosion_sgv);
  std::string::basic_string(&this->erosion_level_sgv, &a2->erosion_level_sgv);
};

// Line 230: range 000000001274C93C-000000001274C9AD
void __cdecl data::ConfigRegionalPlayDeathZone::~ConfigRegionalPlayDeathZone(
        data::ConfigRegionalPlayDeathZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayDeathZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayBase = v2;
  std::string::~string(&this->erosion_level_sgv);
  std::string::~string(&this->erosion_sgv);
  data::ConfigRegionalPlayBase::~ConfigRegionalPlayBase(this);
};

// Line 230: range 000000001274C9AE-000000001274C9D8
void __cdecl data::ConfigRegionalPlayDeathZone::~ConfigRegionalPlayDeathZone(
        data::ConfigRegionalPlayDeathZone *const this)
{
  data::ConfigRegionalPlayDeathZone::~ConfigRegionalPlayDeathZone(this);
  operator delete(this, 0xD0uLL);
};

// Line 235: range 000000001215E132-000000001215E142
const char *__cdecl data::ConfigRegionalPlayDeathZone::getTypeName(const data::ConfigRegionalPlayDeathZone *const this)
{
  return "ConfigRegionalPlayDeathZone";
};

// Line 236: range 000000001215E144-000000001215E2E0
int32_t __cdecl data::ConfigRegionalPlayDeathZone::getHashNum(const data::ConfigRegionalPlayDeathZone *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRegionalPlayDeathZone::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRegionalPlayDeathZone",
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

// Line 252: range 00000000127214DE-000000001272151F
void __cdecl data::ConfigRegionalPlayDeathZoneFactory::ConfigRegionalPlayDeathZoneFactory(
        data::ConfigRegionalPlayDeathZoneFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRegionalPlayDeathZoneFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRegionalPlayDeathZoneFactory = v2;
};

// Line 260: range 000000001217AEE4-000000001217B004
void __cdecl data::ConfigDeathZone::ConfigDeathZone(data::ConfigDeathZone *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_default_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_default_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_default_open, v2, v3);
  this->is_default_open = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v2);
  }
  this->level = 0;
  std::vector<unsigned int>::vector(&this->group_list);
  std::vector<unsigned int>::vector(&this->polygon_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 260: range 000000000F9AD9FC-000000000F9ADC41
void __cdecl data::ConfigDeathZone::ConfigDeathZone(data::ConfigDeathZone *const this, const data::ConfigDeathZone *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_default_open; // cl
  char v7; // dl
  __int64 v8; // rdx
  uint32_t level; // ecx
  char v10; // al
  data::UInt32List *p_polygon_list; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  const data::ConfigDeathZone *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
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
  v4 = ((_BYTE)v14 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v14->is_default_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v14->is_default_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v14->is_default_open, v4, v5);
  is_default_open = v14->is_default_open;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_default_open >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_default_open, v4, v8);
  this->is_default_open = is_default_open;
  if ( *(_BYTE *)(((unsigned __int64)&v14->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->level);
  }
  level = v14->level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v4) = v10 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  std::vector<unsigned int>::vector(&this->group_list, &v14->group_list);
  p_polygon_list = &v14->polygon_list;
  std::vector<unsigned int>::vector(&this->polygon_list, &v14->polygon_list);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_polygon_list, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_polygon_list) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_polygon_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 260: range 000000001238431E-000000001238453C
void __cdecl data::ConfigDeathZone::ConfigDeathZone(data::ConfigDeathZone *const this, data::ConfigDeathZone *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_default_open; // cl
  char v7; // dl
  __int64 v8; // rdx
  uint32_t level; // ecx
  char v10; // al
  data::UInt32List *p_polygon_list; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  data::ConfigDeathZone *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
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
  v4 = ((_BYTE)v14 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v14->is_default_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v14->is_default_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v14->is_default_open, v4, v5);
  is_default_open = v14->is_default_open;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_default_open >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_default_open, v4, v8);
  this->is_default_open = is_default_open;
  if ( *(_BYTE *)(((unsigned __int64)&v14->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->level);
  }
  level = v14->level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v4) = v10 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  std::vector<unsigned int>::vector(&this->group_list, &v14->group_list);
  p_polygon_list = &v14->polygon_list;
  std::vector<unsigned int>::vector(&this->polygon_list, &v14->polygon_list);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_polygon_list, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_polygon_list) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_polygon_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 260: range 000000000F9485FA-000000000F948628
void __cdecl data::ConfigDeathZone::~ConfigDeathZone(data::ConfigDeathZone *const this)
{
  std::vector<unsigned int>::~vector(&this->polygon_list);
  std::vector<unsigned int>::~vector(&this->group_list);
};
