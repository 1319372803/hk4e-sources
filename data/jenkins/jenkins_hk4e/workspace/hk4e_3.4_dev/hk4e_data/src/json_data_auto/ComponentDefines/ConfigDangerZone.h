// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigDangerZone.h

// Line 19: range 000000000ED74F5C-000000000ED75031
void __cdecl data::ConfigPolygonZone::ConfigPolygonZone(data::ConfigPolygonZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigPolygonZone>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPolygonZone>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPolygonZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPolygonZone = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->check_cd, v1);
  }
  this->check_cd = 0.1;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001273BCAE-000000001273BE06
void __cdecl data::ConfigPolygonZone::ConfigPolygonZone(
        data::ConfigPolygonZone *const this,
        const data::ConfigPolygonZone *a2)
{
  std::enable_shared_from_this<data::ConfigPolygonZone> *v2; // rsi
  int (**v3)(...); // rdx
  float check_cd; // xmm0_4
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigPolygonZone>;
  std::enable_shared_from_this<data::ConfigPolygonZone>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPolygonZone>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPolygonZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPolygonZone = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->check_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->check_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->check_cd);
  }
  check_cd = a2->check_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->check_cd, v2);
  }
  this->check_cd = check_cd;
  v5 = ((_BYTE)a2 + 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 27: range 000000001270285E-0000000012702888
void __cdecl data::ConfigPolygonZone::~ConfigPolygonZone(data::ConfigPolygonZone *const this)
{
  data::ConfigPolygonZone::~ConfigPolygonZone(this);
  operator delete(this, 0x20uLL);
};

// Line 27: range 000000001270280C-000000001270285D
void __cdecl data::ConfigPolygonZone::~ConfigPolygonZone(data::ConfigPolygonZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPolygonZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPolygonZone = v2;
  std::enable_shared_from_this<data::ConfigPolygonZone>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPolygonZone>);
};

// Line 32: range 000000001215D712-000000001215D722
const char *__cdecl data::ConfigPolygonZone::getTypeName(const data::ConfigPolygonZone *const this)
{
  return "ConfigPolygonZone";
};

// Line 33: range 000000001215D724-000000001215D8C0
int32_t __cdecl data::ConfigPolygonZone::getHashNum(const data::ConfigPolygonZone *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigPolygonZone::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPolygonZone",
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

// Line 52: range 000000000ED75032-000000000ED7508F
void __cdecl data::ConfigDangerZone::ConfigDangerZone(data::ConfigDangerZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPolygonZone::ConfigPolygonZone(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDangerZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPolygonZone = v2;
  std::vector<std::string>::vector(&this->zonelist);
};

// Line 52: range 000000001273C050-000000001273C0E6
void __cdecl data::ConfigDangerZone::ConfigDangerZone(
        data::ConfigDangerZone *const this,
        const data::ConfigDangerZone *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPolygonZone::ConfigPolygonZone(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDangerZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPolygonZone = v2;
  std::vector<std::string>::vector(&this->zonelist, &a2->zonelist);
};

// Line 59: range 000000001274BAF4-000000001274BB1E
void __cdecl data::ConfigDangerZone::~ConfigDangerZone(data::ConfigDangerZone *const this)
{
  data::ConfigDangerZone::~ConfigDangerZone(this);
  operator delete(this, 0x38uLL);
};

// Line 59: range 000000001274BA96-000000001274BAF3
void __cdecl data::ConfigDangerZone::~ConfigDangerZone(data::ConfigDangerZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDangerZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPolygonZone = v2;
  std::vector<std::string>::~vector(&this->zonelist);
  data::ConfigPolygonZone::~ConfigPolygonZone(this);
};

// Line 64: range 000000001215D8C2-000000001215D8D2
const char *__cdecl data::ConfigDangerZone::getTypeName(const data::ConfigDangerZone *const this)
{
  return "ConfigDangerZone";
};

// Line 65: range 000000001215D8D4-000000001215DA70
int32_t __cdecl data::ConfigDangerZone::getHashNum(const data::ConfigDangerZone *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDangerZone::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDangerZone",
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

// Line 81: range 000000001273C3D0-000000001273C411
void __cdecl data::ConfigDangerZoneFactory::ConfigDangerZoneFactory(data::ConfigDangerZoneFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDangerZoneFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDangerZoneFactory = v2;
};

// Line 89: range 000000000ED75484-000000000ED755E0
void __cdecl data::ConfigFishingZone::ConfigFishingZone(data::ConfigFishingZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigPolygonZone::ConfigPolygonZone(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPolygonZone = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->valid_radius, v1);
  }
  this->valid_radius = 0.0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_radius, v3);
  }
  this->flee_radius = 0.0;
  if ( *(char *)(((unsigned __int64)&this->disable_in_multiplayer >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_in_multiplayer, v3, &this->disable_in_multiplayer);
  this->disable_in_multiplayer = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_radius, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->born_radius = 2.0;
};

// Line 89: range 000000001273C71A-000000001273C970
void __cdecl data::ConfigFishingZone::ConfigFishingZone(
        data::ConfigFishingZone *const this,
        const data::ConfigFishingZone *a2)
{
  int (**v2)(...); // rdx
  float valid_radius; // xmm0_4
  float flee_radius; // xmm0_4
  __int64 v5; // rsi
  bool disable_in_multiplayer; // cl
  char v7; // al
  float born_radius; // xmm0_4

  data::ConfigPolygonZone::ConfigPolygonZone(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPolygonZone = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->valid_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->valid_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->valid_radius);
  }
  valid_radius = a2->valid_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->valid_radius, a2);
  }
  this->valid_radius = valid_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->flee_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->flee_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->flee_radius);
  }
  flee_radius = a2->flee_radius;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->flee_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flee_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flee_radius, v5);
  }
  this->flee_radius = flee_radius;
  if ( *(char *)(((unsigned __int64)&a2->disable_in_multiplayer >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_in_multiplayer, v5, &a2->disable_in_multiplayer);
  disable_in_multiplayer = a2->disable_in_multiplayer;
  v7 = *(_BYTE *)(((unsigned __int64)&this->disable_in_multiplayer >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->disable_in_multiplayer, v5, &this->disable_in_multiplayer);
  }
  this->disable_in_multiplayer = disable_in_multiplayer;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->born_radius);
  }
  born_radius = a2->born_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_radius, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->born_radius = born_radius;
};

// Line 99: range 000000001274BA1C-000000001274BA69
void __cdecl data::ConfigFishingZone::~ConfigFishingZone(data::ConfigFishingZone *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPolygonZone = v2;
  data::ConfigPolygonZone::~ConfigPolygonZone(this);
};

// Line 99: range 000000001274BA6A-000000001274BA94
void __cdecl data::ConfigFishingZone::~ConfigFishingZone(data::ConfigFishingZone *const this)
{
  data::ConfigFishingZone::~ConfigFishingZone(this);
  operator delete(this, 0x30uLL);
};

// Line 104: range 000000001215DA72-000000001215DA82
const char *__cdecl data::ConfigFishingZone::getTypeName(const data::ConfigFishingZone *const this)
{
  return "ConfigFishingZone";
};

// Line 105: range 000000001215DA84-000000001215DC20
int32_t __cdecl data::ConfigFishingZone::getHashNum(const data::ConfigFishingZone *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigFishingZone::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFishingZone",
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

// Line 121: range 000000001273CBBA-000000001273CBFB
void __cdecl data::ConfigFishingZoneFactory::ConfigFishingZoneFactory(data::ConfigFishingZoneFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingZoneFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFishingZoneFactory = v2;
};
