// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigVODPlay.h

// Line 32: range 000000000ED928C0-000000000ED9294F
void __cdecl data::ConfigVODIntee::ConfigVODIntee(data::ConfigVODIntee *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->excel_config_id = 0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 55: range 0000000012701792-00000000127018E7
void __cdecl data::ConfigVODPlayer::ConfigVODPlayer(data::ConfigVODPlayer *const this, const data::ConfigVODPlayer *a2)
{
  std::enable_shared_from_this<data::ConfigVODPlayer> *v2; // rsi
  int (**v3)(...); // rdx
  data::VODPlayerType vod_player_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigVODPlayer>;
  std::enable_shared_from_this<data::ConfigVODPlayer>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigVODPlayer>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigVODPlayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigVODPlayer = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vod_player_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vod_player_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vod_player_type);
  }
  vod_player_type = a2->vod_player_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->vod_player_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->vod_player_type, v2);
  }
  this->vod_player_type = vod_player_type;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 63: range 0000000012701B82-0000000012701BAC
void __cdecl data::ConfigVODPlayer::~ConfigVODPlayer(data::ConfigVODPlayer *const this)
{
  data::ConfigVODPlayer::~ConfigVODPlayer(this);
  operator delete(this, 0x20uLL);
};

// Line 63: range 0000000012701B30-0000000012701B81
void __cdecl data::ConfigVODPlayer::~ConfigVODPlayer(data::ConfigVODPlayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVODPlayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVODPlayer = v2;
  std::enable_shared_from_this<data::ConfigVODPlayer>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigVODPlayer>);
};

// Line 68: range 00000000121460F2-0000000012146102
const char *__cdecl data::ConfigVODPlayer::getTypeName(const data::ConfigVODPlayer *const this)
{
  return "ConfigVODPlayer";
};

// Line 69: range 0000000012146104-00000000121462A0
int32_t __cdecl data::ConfigVODPlayer::getHashNum(const data::ConfigVODPlayer *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigVODPlayer::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVODPlayer",
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

// Line 95: range 000000000ED75A8C-000000000ED75BAF
void __cdecl data::ConfigLivePlayer::ConfigLivePlayer(data::ConfigLivePlayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigVODPlayer::ConfigVODPlayer(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLivePlayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVODPlayer = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->live_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->live_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->live_id, v1);
  }
  this->live_id = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_on_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_on_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_on_radius, v3);
  }
  this->turn_on_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_off_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_off_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_off_radius, v3);
  }
  this->turn_off_radius = 0.0;
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->cue_point_ability_map);
};

// Line 95: range 0000000012701BAE-0000000012701DB9
void __cdecl data::ConfigLivePlayer::ConfigLivePlayer(
        data::ConfigLivePlayer *const this,
        const data::ConfigLivePlayer *a2)
{
  int (**v2)(...); // rdx
  uint32_t live_id; // ecx
  char v4; // al
  float turn_on_radius; // xmm0_4
  __int64 v6; // rsi
  float turn_off_radius; // xmm0_4
  const data::ConfigLivePlayer *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  data::ConfigVODPlayer::ConfigVODPlayer(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLivePlayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigVODPlayer = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->live_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->live_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->live_id);
  }
  live_id = a2->live_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->live_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->live_id, a2);
  }
  this->live_id = live_id;
  if ( *(_BYTE *)(((unsigned __int64)&v8->turn_on_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->turn_on_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->turn_on_radius);
  }
  turn_on_radius = v8->turn_on_radius;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_on_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_on_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_on_radius, v6);
  }
  this->turn_on_radius = turn_on_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v8->turn_off_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->turn_off_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->turn_off_radius);
  }
  turn_off_radius = v8->turn_off_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_off_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_off_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_off_radius, v6);
  }
  this->turn_off_radius = turn_off_radius;
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->cue_point_ability_map, &v8->cue_point_ability_map);
};

// Line 105: range 000000001274D5CA-000000001274D627
void __cdecl data::ConfigLivePlayer::~ConfigLivePlayer(data::ConfigLivePlayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLivePlayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVODPlayer = v2;
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->cue_point_ability_map);
  data::ConfigVODPlayer::~ConfigVODPlayer(this);
};

// Line 105: range 000000001274D628-000000001274D652
void __cdecl data::ConfigLivePlayer::~ConfigLivePlayer(data::ConfigLivePlayer *const this)
{
  data::ConfigLivePlayer::~ConfigLivePlayer(this);
  operator delete(this, 0x68uLL);
};

// Line 110: range 00000000121462A2-00000000121462B2
const char *__cdecl data::ConfigLivePlayer::getTypeName(const data::ConfigLivePlayer *const this)
{
  return "ConfigLivePlayer";
};

// Line 111: range 00000000121462B4-0000000012146450
int32_t __cdecl data::ConfigLivePlayer::getHashNum(const data::ConfigLivePlayer *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLivePlayer::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLivePlayer",
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

// Line 127: range 00000000127020A2-00000000127020E3
void __cdecl data::ConfigLivePlayerFactory::ConfigLivePlayerFactory(data::ConfigLivePlayerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLivePlayerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLivePlayerFactory = v2;
};

// Line 147: range 000000000ED759BC-000000000ED75A8B
void __cdecl data::ConfigVODPlayer::ConfigVODPlayer(data::ConfigVODPlayer *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigVODPlayer>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigVODPlayer>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVODPlayer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVODPlayer = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->vod_player_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vod_player_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vod_player_type, v1);
  }
  this->vod_player_type = Live;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};
