// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigEntityAudio.h

// Line 19: range 000000000ED73C7A-000000000ED73D63
void __cdecl data::ConfigEntityAudio::ConfigEntityAudio(data::ConfigEntityAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigEntityAudio>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigEntityAudio>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEntityAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigAnimationAudio::ConfigAnimationAudio(&this->anim_audio);
  data::ConfigWwiseString::ConfigWwiseString(&this->init_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->enable_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->disable_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->destroy_event);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 74: range 00000000126D69E2-00000000126D6BDE
void __cdecl data::ConfigEntityAudio::ConfigEntityAudio(
        data::ConfigEntityAudio *const this,
        const data::ConfigEntityAudio *a2)
{
  std::enable_shared_from_this<data::ConfigEntityAudio> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigWwiseString *p_destroy_event; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigEntityAudio>;
  std::enable_shared_from_this<data::ConfigEntityAudio>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigEntityAudio>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigEntityAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigEntityAudio = v3;
  data::ConfigAnimationAudio::ConfigAnimationAudio(&this->anim_audio, &a2->anim_audio);
  data::ConfigWwiseString::ConfigWwiseString(&this->init_event, &a2->init_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->enable_event, &a2->enable_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->disable_event, &a2->disable_event);
  p_destroy_event = &a2->destroy_event;
  data::ConfigWwiseString::ConfigWwiseString(&this->destroy_event, &a2->destroy_event);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_destroy_event, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_destroy_event) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_destroy_event, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 86: range 00000000126D6EC8-00000000126D6F71
void __cdecl data::ConfigEntityAudio::~ConfigEntityAudio(data::ConfigEntityAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEntityAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::~ConfigWwiseString(&this->destroy_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->disable_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->enable_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->init_event);
  data::ConfigAnimationAudio::~ConfigAnimationAudio(&this->anim_audio);
  std::enable_shared_from_this<data::ConfigEntityAudio>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigEntityAudio>);
};

// Line 86: range 00000000126D6F72-00000000126D6F9C
void __cdecl data::ConfigEntityAudio::~ConfigEntityAudio(data::ConfigEntityAudio *const this)
{
  data::ConfigEntityAudio::~ConfigEntityAudio(this);
  operator delete(this, 0x130uLL);
};

// Line 91: range 000000001213340C-000000001213341C
const char *__cdecl data::ConfigEntityAudio::getTypeName(const data::ConfigEntityAudio *const this)
{
  return "ConfigEntityAudio";
};

// Line 92: range 000000001213341E-00000000121335BA
int32_t __cdecl data::ConfigEntityAudio::getHashNum(const data::ConfigEntityAudio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEntityAudio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEntityAudio",
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

// Line 111: range 000000000ED73D64-000000000ED73DF6
void __cdecl data::ConfigGadgetAudio::ConfigGadgetAudio(data::ConfigGadgetAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigEntityAudio::ConfigEntityAudio((data::ConfigEntityAudio *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  v3 = ((_BYTE)this + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->triggers_speech >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->triggers_speech >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->triggers_speech, v3, v4);
  this->triggers_speech = 0;
};

// Line 111: range 00000000126D6F9E-00000000126D7080
void __cdecl data::ConfigGadgetAudio::ConfigGadgetAudio(
        data::ConfigGadgetAudio *const this,
        const data::ConfigGadgetAudio *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool triggers_speech; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigEntityAudio::ConfigEntityAudio((data::ConfigEntityAudio *const)this, (const data::ConfigEntityAudio *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntityAudio = v2;
  v3 = ((_BYTE)a2 + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->triggers_speech >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->triggers_speech >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->triggers_speech, v3, v4);
  triggers_speech = a2->triggers_speech;
  v6 = *(_BYTE *)(((unsigned __int64)&this->triggers_speech >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->triggers_speech, v3, v7);
  this->triggers_speech = triggers_speech;
};

// Line 118: range 00000000126D73B8-00000000126D73E2
void __cdecl data::ConfigGadgetAudio::~ConfigGadgetAudio(data::ConfigGadgetAudio *const this)
{
  data::ConfigGadgetAudio::~ConfigGadgetAudio(this);
  operator delete(this, 0x130uLL);
};

// Line 118: range 00000000126D736A-00000000126D73B7
void __cdecl data::ConfigGadgetAudio::~ConfigGadgetAudio(data::ConfigGadgetAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigEntityAudio::~ConfigEntityAudio((data::ConfigEntityAudio *const)this);
};

// Line 123: range 00000000121335BC-00000000121335CC
const char *__cdecl data::ConfigGadgetAudio::getTypeName(const data::ConfigGadgetAudio *const this)
{
  return "ConfigGadgetAudio";
};

// Line 124: range 00000000121335CE-000000001213376A
int32_t __cdecl data::ConfigGadgetAudio::getHashNum(const data::ConfigGadgetAudio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetAudio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetAudio",
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

// Line 143: range 00000000126D73E4-00000000126D7518
void __cdecl data::ConfigVehicleAudio::ConfigVehicleAudio(data::ConfigVehicleAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGadgetAudio::ConfigGadgetAudio(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->collision_event);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_velocity, v1);
  }
  this->max_velocity = 0.0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_cooldown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_cooldown >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->collision_audio_trigger_cooldown, v3);
  }
  this->collision_audio_trigger_cooldown = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collision_audio_trigger_threshold, v3);
  }
  this->collision_audio_trigger_threshold = 0.0;
};

// Line 143: range 00000000126D78C8-00000000126D7AF6
void __cdecl data::ConfigVehicleAudio::ConfigVehicleAudio(
        data::ConfigVehicleAudio *const this,
        const data::ConfigVehicleAudio *a2)
{
  int (**v2)(...); // rdx
  float max_velocity; // xmm0_4
  __int64 v4; // rsi
  uint32_t collision_audio_trigger_cooldown; // ecx
  char v6; // dl
  float collision_audio_trigger_threshold; // xmm0_4

  data::ConfigGadgetAudio::ConfigGadgetAudio(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->collision_event, &a2->collision_event);
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_velocity);
  }
  max_velocity = a2->max_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_velocity, &a2->collision_event);
  }
  this->max_velocity = max_velocity;
  v4 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->collision_audio_trigger_cooldown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->collision_audio_trigger_cooldown >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->collision_audio_trigger_cooldown);
  }
  collision_audio_trigger_cooldown = a2->collision_audio_trigger_cooldown;
  v6 = *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_cooldown >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v6 )
    __asan_report_store4(&this->collision_audio_trigger_cooldown, v4);
  this->collision_audio_trigger_cooldown = collision_audio_trigger_cooldown;
  if ( *(_BYTE *)(((unsigned __int64)&a2->collision_audio_trigger_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->collision_audio_trigger_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->collision_audio_trigger_threshold);
  }
  collision_audio_trigger_threshold = a2->collision_audio_trigger_threshold;
  if ( *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collision_audio_trigger_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collision_audio_trigger_threshold, v4);
  }
  this->collision_audio_trigger_threshold = collision_audio_trigger_threshold;
};

// Line 153: range 000000001274E90C-000000001274E96B
void __cdecl data::ConfigVehicleAudio::~ConfigVehicleAudio(data::ConfigVehicleAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::~ConfigWwiseString(&this->collision_event);
  data::ConfigGadgetAudio::~ConfigGadgetAudio(this);
};

// Line 153: range 000000001274E96C-000000001274E996
void __cdecl data::ConfigVehicleAudio::~ConfigVehicleAudio(data::ConfigVehicleAudio *const this)
{
  data::ConfigVehicleAudio::~ConfigVehicleAudio(this);
  operator delete(this, 0x168uLL);
};

// Line 158: range 000000001213376C-000000001213377C
const char *__cdecl data::ConfigVehicleAudio::getTypeName(const data::ConfigVehicleAudio *const this)
{
  return "ConfigVehicleAudio";
};

// Line 159: range 000000001213377E-000000001213391A
int32_t __cdecl data::ConfigVehicleAudio::getHashNum(const data::ConfigVehicleAudio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigVehicleAudio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVehicleAudio",
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

// Line 175: range 00000000126D7DE0-00000000126D7E21
void __cdecl data::ConfigVehicleAudioFactory::ConfigVehicleAudioFactory(data::ConfigVehicleAudioFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleAudioFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVehicleAudioFactory = v2;
};

// Line 183: range 000000000ED7657A-000000000ED765C7
void __cdecl data::ConfigCharacterAudio::ConfigCharacterAudio(data::ConfigCharacterAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigEntityAudio::ConfigEntityAudio(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCharacterAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
};

// Line 183: range 00000000126D84DE-00000000126D8536
void __cdecl data::ConfigCharacterAudio::ConfigCharacterAudio(
        data::ConfigCharacterAudio *const this,
        const data::ConfigCharacterAudio *a2)
{
  int (**v2)(...); // rdx

  data::ConfigEntityAudio::ConfigEntityAudio(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCharacterAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntityAudio = v2;
};

// Line 189: range 00000000126D886E-00000000126D8898
void __cdecl data::ConfigCharacterAudio::~ConfigCharacterAudio(data::ConfigCharacterAudio *const this)
{
  data::ConfigCharacterAudio::~ConfigCharacterAudio(this);
  operator delete(this, 0x130uLL);
};

// Line 189: range 00000000126D8820-00000000126D886D
void __cdecl data::ConfigCharacterAudio::~ConfigCharacterAudio(data::ConfigCharacterAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCharacterAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigEntityAudio::~ConfigEntityAudio(this);
};

// Line 194: range 000000001213391C-000000001213392C
const char *__cdecl data::ConfigCharacterAudio::getTypeName(const data::ConfigCharacterAudio *const this)
{
  return "ConfigCharacterAudio";
};

// Line 195: range 000000001213392E-0000000012133ACA
int32_t __cdecl data::ConfigCharacterAudio::getHashNum(const data::ConfigCharacterAudio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigCharacterAudio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCharacterAudio",
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

// Line 214: range 000000000ED76684-000000000ED767AB
void __cdecl data::ConfigAvatarAudio::ConfigAvatarAudio(data::ConfigAvatarAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCharacterAudio::ConfigCharacterAudio(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigMoveStateAudio::ConfigMoveStateAudio(&this->move_state_audio);
  data::ConfigCombatSpeech::ConfigCombatSpeech(&this->combat_speech);
  data::ConfigWwiseString::ConfigWwiseString(&this->voice_switch);
  data::ConfigWwiseString::ConfigWwiseString(&this->body_type_switch);
  if ( *(_BYTE *)(((unsigned __int64)&this->listener_liftup >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listener_liftup >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->listener_liftup, v1);
  }
  this->listener_liftup = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->surface_prober_liftup >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->surface_prober_liftup >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->surface_prober_liftup, (((_BYTE)this - 20) & 7u) + 3);
  }
  this->surface_prober_liftup = 0.0;
};

// Line 214: range 00000000126D889A-00000000126D8AEE
void __cdecl data::ConfigAvatarAudio::ConfigAvatarAudio(
        data::ConfigAvatarAudio *const this,
        const data::ConfigAvatarAudio *a2)
{
  int (**v2)(...); // rdx
  float listener_liftup; // xmm0_4
  float surface_prober_liftup; // xmm0_4

  data::ConfigCharacterAudio::ConfigCharacterAudio(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigMoveStateAudio::ConfigMoveStateAudio(&this->move_state_audio, &a2->move_state_audio);
  data::ConfigCombatSpeech::ConfigCombatSpeech(&this->combat_speech, &a2->combat_speech);
  data::ConfigWwiseString::ConfigWwiseString(&this->voice_switch, &a2->voice_switch);
  data::ConfigWwiseString::ConfigWwiseString(&this->body_type_switch, &a2->body_type_switch);
  if ( *(_BYTE *)(((unsigned __int64)&a2->listener_liftup >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->listener_liftup >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->listener_liftup);
  }
  listener_liftup = a2->listener_liftup;
  if ( *(_BYTE *)(((unsigned __int64)&this->listener_liftup >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->listener_liftup >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->listener_liftup, &a2->body_type_switch);
  }
  this->listener_liftup = listener_liftup;
  if ( *(_BYTE *)(((unsigned __int64)&a2->surface_prober_liftup >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->surface_prober_liftup >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->surface_prober_liftup);
  }
  surface_prober_liftup = a2->surface_prober_liftup;
  if ( *(_BYTE *)(((unsigned __int64)&this->surface_prober_liftup >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->surface_prober_liftup >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->surface_prober_liftup, (((_BYTE)this - 20) & 7u) + 3);
  }
  this->surface_prober_liftup = surface_prober_liftup;
};

// Line 226: range 000000001274E84A-000000001274E8DF
void __cdecl data::ConfigAvatarAudio::~ConfigAvatarAudio(data::ConfigAvatarAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::~ConfigWwiseString(&this->body_type_switch);
  data::ConfigWwiseString::~ConfigWwiseString(&this->voice_switch);
  data::ConfigCombatSpeech::~ConfigCombatSpeech(&this->combat_speech);
  data::ConfigMoveStateAudio::~ConfigMoveStateAudio(&this->move_state_audio);
  data::ConfigCharacterAudio::~ConfigCharacterAudio(this);
};

// Line 226: range 000000001274E8E0-000000001274E90A
void __cdecl data::ConfigAvatarAudio::~ConfigAvatarAudio(data::ConfigAvatarAudio *const this)
{
  data::ConfigAvatarAudio::~ConfigAvatarAudio(this);
  operator delete(this, 0x1F0uLL);
};

// Line 231: range 0000000012133ACC-0000000012133ADC
const char *__cdecl data::ConfigAvatarAudio::getTypeName(const data::ConfigAvatarAudio *const this)
{
  return "ConfigAvatarAudio";
};

// Line 232: range 0000000012133ADE-0000000012133C7A
int32_t __cdecl data::ConfigAvatarAudio::getHashNum(const data::ConfigAvatarAudio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAvatarAudio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAvatarAudio",
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

// Line 248: range 00000000126D8DD8-00000000126D8E19
void __cdecl data::ConfigAvatarAudioFactory::ConfigAvatarAudioFactory(data::ConfigAvatarAudioFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarAudioFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAvatarAudioFactory = v2;
};

// Line 256: range 000000000ED76B8E-000000000ED76BFF
void __cdecl data::ConfigMonsterAudio::ConfigMonsterAudio(data::ConfigMonsterAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCharacterAudio::ConfigCharacterAudio(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->random_variant_switch_group);
  std::vector<data::ConfigWwiseString>::vector(&this->random_variant_switch_values);
};

// Line 256: range 00000000126D9122-00000000126D91F4
void __cdecl data::ConfigMonsterAudio::ConfigMonsterAudio(
        data::ConfigMonsterAudio *const this,
        const data::ConfigMonsterAudio *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCharacterAudio::ConfigCharacterAudio(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntityAudio = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->random_variant_switch_group, &a2->random_variant_switch_group);
  std::vector<data::ConfigWwiseString>::vector(&this->random_variant_switch_values, &a2->random_variant_switch_values);
};

// Line 264: range 000000001274E7AC-000000001274E81D
void __cdecl data::ConfigMonsterAudio::~ConfigMonsterAudio(data::ConfigMonsterAudio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterAudio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntityAudio = v2;
  std::vector<data::ConfigWwiseString>::~vector(&this->random_variant_switch_values);
  data::ConfigWwiseString::~ConfigWwiseString(&this->random_variant_switch_group);
  data::ConfigCharacterAudio::~ConfigCharacterAudio(this);
};

// Line 264: range 000000001274E81E-000000001274E848
void __cdecl data::ConfigMonsterAudio::~ConfigMonsterAudio(data::ConfigMonsterAudio *const this)
{
  data::ConfigMonsterAudio::~ConfigMonsterAudio(this);
  operator delete(this, 0x170uLL);
};

// Line 269: range 0000000012133C7C-0000000012133C8C
const char *__cdecl data::ConfigMonsterAudio::getTypeName(const data::ConfigMonsterAudio *const this)
{
  return "ConfigMonsterAudio";
};

// Line 270: range 0000000012133C8E-0000000012133E2A
int32_t __cdecl data::ConfigMonsterAudio::getHashNum(const data::ConfigMonsterAudio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMonsterAudio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMonsterAudio",
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

// Line 286: range 00000000126D94DE-00000000126D951F
void __cdecl data::ConfigMonsterAudioFactory::ConfigMonsterAudioFactory(data::ConfigMonsterAudioFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterAudioFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMonsterAudioFactory = v2;
};
