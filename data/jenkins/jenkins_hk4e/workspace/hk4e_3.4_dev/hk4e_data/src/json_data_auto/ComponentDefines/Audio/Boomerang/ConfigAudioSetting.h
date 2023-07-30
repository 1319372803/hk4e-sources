// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSetting.h

// Line 21: range 000000001428BE1E-000000001428BF61
void __cdecl data::AudioSettingSlider::AudioSettingSlider(data::AudioSettingSlider *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::AudioSettingSlider>::enable_shared_from_this(&this->std::enable_shared_from_this<data::AudioSettingSlider>);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->rtpc);
  std::string::basic_string(&this->text_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_value, v1);
  }
  this->min_value = 0;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_value, v3);
  }
  this->max_value = 10;
  std::vector<float>::vector(&this->each_values);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 000000001428D190-000000001428D408
void __cdecl data::AudioSettingSlider::AudioSettingSlider(
        data::AudioSettingSlider *const this,
        const data::AudioSettingSlider *a2)
{
  std::enable_shared_from_this<data::AudioSettingSlider> *v2; // rsi
  int (**v3)(...); // rdx
  std::string *p_text_map; // rsi
  uint32_t min_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t max_value; // ecx
  char v9; // dl
  data::FloatList *p_each_values; // rsi
  bool is_json_loaded; // cl
  char v12; // al

  v2 = &a2->std::enable_shared_from_this<data::AudioSettingSlider>;
  std::enable_shared_from_this<data::AudioSettingSlider>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::AudioSettingSlider>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::AudioSettingSlider + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_AudioSettingSlider = v3;
  data::ConfigWwiseString::ConfigWwiseString(&this->rtpc, &a2->rtpc);
  p_text_map = &a2->text_map;
  std::string::basic_string(&this->text_map, &a2->text_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_value);
  }
  min_value = a2->min_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->min_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_text_map) = v6 != 0;
    __asan_report_store4(&this->min_value, p_text_map);
  }
  this->min_value = min_value;
  v7 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_value);
  }
  max_value = a2->max_value;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->max_value, v7);
  }
  this->max_value = max_value;
  p_each_values = &a2->each_values;
  std::vector<float>::vector(&this->each_values, &a2->each_values);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_each_values, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_each_values) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, p_each_values, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 33: range 000000001428BF62-000000001428BFE3
void __cdecl data::AudioSettingSlider::~AudioSettingSlider(data::AudioSettingSlider *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  std::vector<float>::~vector(&this->each_values);
  std::string::~string(&this->text_map);
  data::ConfigWwiseString::~ConfigWwiseString(&this->rtpc);
  std::enable_shared_from_this<data::AudioSettingSlider>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::AudioSettingSlider>);
};

// Line 33: range 000000001428BFE4-000000001428C00E
void __cdecl data::AudioSettingSlider::~AudioSettingSlider(data::AudioSettingSlider *const this)
{
  data::AudioSettingSlider::~AudioSettingSlider(this);
  operator delete(this, 0x88uLL);
};

// Line 38: range 0000000013C1C6AE-0000000013C1C6BE
const char *__cdecl data::AudioSettingSlider::getTypeName(const data::AudioSettingSlider *const this)
{
  return "AudioSettingSlider";
};

// Line 39: range 0000000013C1C6C0-0000000013C1C85C
int32_t __cdecl data::AudioSettingSlider::getHashNum(const data::AudioSettingSlider *const this)
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
  *(_QWORD *)(v1 + 16) = data::AudioSettingSlider::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "AudioSettingSlider",
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

// Line 84: range 000000001428C876-000000001428C8C3
void __cdecl data::AudioSettingSlider_Simple::AudioSettingSlider_Simple(data::AudioSettingSlider_Simple *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::AudioSettingSlider::AudioSettingSlider(this);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_Simple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
};

// Line 84: range 000000001428D6F2-000000001428D74A
void __cdecl data::AudioSettingSlider_Simple::AudioSettingSlider_Simple(
        data::AudioSettingSlider_Simple *const this,
        const data::AudioSettingSlider_Simple *a2)
{
  int (**v2)(...); // rdx

  data::AudioSettingSlider::AudioSettingSlider(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_Simple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AudioSettingSlider = v2;
};

// Line 90: range 00000000142A10B8-00000000142A10E2
void __cdecl data::AudioSettingSlider_Simple::~AudioSettingSlider_Simple(data::AudioSettingSlider_Simple *const this)
{
  data::AudioSettingSlider_Simple::~AudioSettingSlider_Simple(this);
  operator delete(this, 0x88uLL);
};

// Line 90: range 00000000142A106A-00000000142A10B7
void __cdecl data::AudioSettingSlider_Simple::~AudioSettingSlider_Simple(data::AudioSettingSlider_Simple *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_Simple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  data::AudioSettingSlider::~AudioSettingSlider(this);
};

// Line 95: range 0000000013C1C85E-0000000013C1C86E
const char *__cdecl data::AudioSettingSlider_Simple::getTypeName(const data::AudioSettingSlider_Simple *const this)
{
  return "AudioSettingSlider_Simple";
};

// Line 96: range 0000000013C1C870-0000000013C1CA0C
int32_t __cdecl data::AudioSettingSlider_Simple::getHashNum(const data::AudioSettingSlider_Simple *const this)
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
  *(_QWORD *)(v1 + 16) = data::AudioSettingSlider_Simple::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "AudioSettingSlider_Simple",
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

// Line 112: range 000000001428DA34-000000001428DA75
void __cdecl data::AudioSettingSlider_SimpleFactory::AudioSettingSlider_SimpleFactory(
        data::AudioSettingSlider_SimpleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_SimpleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider_SimpleFactory = v2;
};

// Line 149: range 000000001428C010-000000001428C06F
void __cdecl data::AudioSettingSlider_PostEvent::AudioSettingSlider_PostEvent(
        data::AudioSettingSlider_PostEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::AudioSettingSlider::AudioSettingSlider(this);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->change_event);
};

// Line 149: range 000000001428DD7E-000000001428DE19
void __cdecl data::AudioSettingSlider_PostEvent::AudioSettingSlider_PostEvent(
        data::AudioSettingSlider_PostEvent *const this,
        const data::AudioSettingSlider_PostEvent *a2)
{
  int (**v2)(...); // rdx

  data::AudioSettingSlider::AudioSettingSlider(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AudioSettingSlider = v2;
  data::ConfigWwiseString::ConfigWwiseString(&this->change_event, &a2->change_event);
};

// Line 156: range 00000000142A103E-00000000142A1068
void __cdecl data::AudioSettingSlider_PostEvent::~AudioSettingSlider_PostEvent(
        data::AudioSettingSlider_PostEvent *const this)
{
  data::AudioSettingSlider_PostEvent::~AudioSettingSlider_PostEvent(this);
  operator delete(this, 0xB0uLL);
};

// Line 156: range 00000000142A0FDE-00000000142A103D
void __cdecl data::AudioSettingSlider_PostEvent::~AudioSettingSlider_PostEvent(
        data::AudioSettingSlider_PostEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  data::ConfigWwiseString::~ConfigWwiseString(&this->change_event);
  data::AudioSettingSlider::~AudioSettingSlider(this);
};

// Line 161: range 0000000013C1CA0E-0000000013C1CA1E
const char *__cdecl data::AudioSettingSlider_PostEvent::getTypeName(
        const data::AudioSettingSlider_PostEvent *const this)
{
  return "AudioSettingSlider_PostEvent";
};

// Line 162: range 0000000013C1CA20-0000000013C1CBBC
int32_t __cdecl data::AudioSettingSlider_PostEvent::getHashNum(const data::AudioSettingSlider_PostEvent *const this)
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
  *(_QWORD *)(v1 + 16) = data::AudioSettingSlider_PostEvent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "AudioSettingSlider_PostEvent",
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

// Line 178: range 000000001428E102-000000001428E143
void __cdecl data::AudioSettingSlider_PostEventFactory::AudioSettingSlider_PostEventFactory(
        data::AudioSettingSlider_PostEventFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostEventFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider_PostEventFactory = v2;
};

// Line 186: range 000000001428C45C-000000001428C4BB
void __cdecl data::AudioSettingSlider_PostVoice::AudioSettingSlider_PostVoice(
        data::AudioSettingSlider_PostVoice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::AudioSettingSlider::AudioSettingSlider(this);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostVoice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  std::vector<data::AudioSettingSlider_PostVoiceItem>::vector(&this->change_voice_array);
};

// Line 186: range 000000001428E44C-000000001428E4E7
void __cdecl data::AudioSettingSlider_PostVoice::AudioSettingSlider_PostVoice(
        data::AudioSettingSlider_PostVoice *const this,
        const data::AudioSettingSlider_PostVoice *a2)
{
  int (**v2)(...); // rdx

  data::AudioSettingSlider::AudioSettingSlider(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostVoice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AudioSettingSlider = v2;
  std::vector<data::AudioSettingSlider_PostVoiceItem>::vector(&this->change_voice_array, &a2->change_voice_array);
};

// Line 193: range 00000000142A0FB2-00000000142A0FDC
void __cdecl data::AudioSettingSlider_PostVoice::~AudioSettingSlider_PostVoice(
        data::AudioSettingSlider_PostVoice *const this)
{
  data::AudioSettingSlider_PostVoice::~AudioSettingSlider_PostVoice(this);
  operator delete(this, 0xA0uLL);
};

// Line 193: range 00000000142A0F52-00000000142A0FB1
void __cdecl data::AudioSettingSlider_PostVoice::~AudioSettingSlider_PostVoice(
        data::AudioSettingSlider_PostVoice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostVoice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider = v2;
  std::vector<data::AudioSettingSlider_PostVoiceItem>::~vector(&this->change_voice_array);
  data::AudioSettingSlider::~AudioSettingSlider(this);
};

// Line 198: range 0000000013C1CBBE-0000000013C1CBCE
const char *__cdecl data::AudioSettingSlider_PostVoice::getTypeName(
        const data::AudioSettingSlider_PostVoice *const this)
{
  return "AudioSettingSlider_PostVoice";
};

// Line 199: range 0000000013C1CBD0-0000000013C1CD6C
int32_t __cdecl data::AudioSettingSlider_PostVoice::getHashNum(const data::AudioSettingSlider_PostVoice *const this)
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
  *(_QWORD *)(v1 + 16) = data::AudioSettingSlider_PostVoice::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "AudioSettingSlider_PostVoice",
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

// Line 215: range 000000001428E7D0-000000001428E811
void __cdecl data::AudioSettingSlider_PostVoiceFactory::AudioSettingSlider_PostVoiceFactory(
        data::AudioSettingSlider_PostVoiceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AudioSettingSlider_PostVoiceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AudioSettingSlider_PostVoiceFactory = v2;
};

// Line 248: range 0000000013C1D620-0000000013C1D6B8
void __cdecl data::BusChannelConfig::BusChannelConfig(data::BusChannelConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  data::ConfigWwiseString::ConfigWwiseString(&this->bus);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_mask, v1);
  }
  this->channel_mask = 0;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 248: range 000000001429FB1C-000000001429FC36
void __cdecl data::BusChannelConfig::BusChannelConfig(
        data::BusChannelConfig *const this,
        const data::BusChannelConfig *a2)
{
  uint32_t channel_mask; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::BusChannelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  data::ConfigWwiseString::ConfigWwiseString(&this->bus, &a2->bus);
  if ( *(_BYTE *)(((unsigned __int64)&v9->channel_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->channel_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_mask);
  }
  channel_mask = a2->channel_mask;
  v3 = *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->channel_mask, a2);
  }
  this->channel_mask = channel_mask;
  v4 = ((_BYTE)v9 + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 248: range 0000000013E88DA8-0000000013E88EC2
void __cdecl data::BusChannelConfig::BusChannelConfig(data::BusChannelConfig *const this, data::BusChannelConfig *a2)
{
  uint32_t channel_mask; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::BusChannelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  data::ConfigWwiseString::ConfigWwiseString(&this->bus, &a2->bus);
  if ( *(_BYTE *)(((unsigned __int64)&v9->channel_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->channel_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_mask);
  }
  channel_mask = a2->channel_mask;
  v3 = *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->channel_mask, a2);
  }
  this->channel_mask = channel_mask;
  v4 = ((_BYTE)v9 + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 248: range 0000000013C1D6BA-0000000013C1D6D4
void __cdecl data::BusChannelConfig::~BusChannelConfig(data::BusChannelConfig *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->bus);
};

// Line 277: range 0000000013C1D72A-0000000013C1D7DD
void __cdecl data::OutputSetting::OutputSetting(data::OutputSetting *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  data::ConfigWwiseString::ConfigWwiseString(&this->bus);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_mask, v1);
  }
  this->channel_mask = 0;
  std::vector<data::BusChannelConfig>::vector(&this->bus_channel_config_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 277: range 00000000141F92B2-00000000141F9430
void __cdecl data::OutputSetting::OutputSetting(data::OutputSetting *const this, const data::OutputSetting *a2)
{
  data::ConfigWwiseString *p_bus; // rsi
  uint32_t channel_mask; // ecx
  char v4; // al
  data::BusChannelConfigList *p_bus_channel_config_list; // rsi
  bool is_json_loaded; // cl
  char v7; // al

  std::string::basic_string(this, a2);
  p_bus = &a2->bus;
  data::ConfigWwiseString::ConfigWwiseString(&this->bus, p_bus);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_mask);
  }
  channel_mask = a2->channel_mask;
  v4 = *(_BYTE *)(((unsigned __int64)&this->channel_mask >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_bus) = v4 != 0;
    __asan_report_store4(&this->channel_mask, p_bus);
  }
  this->channel_mask = channel_mask;
  p_bus_channel_config_list = &a2->bus_channel_config_list;
  std::vector<data::BusChannelConfig>::vector(&this->bus_channel_config_list, &a2->bus_channel_config_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_bus_channel_config_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_bus_channel_config_list) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_bus_channel_config_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 277: range 0000000013C1D7DE-0000000013C1D818
void __cdecl data::OutputSetting::~OutputSetting(data::OutputSetting *const this)
{
  std::vector<data::BusChannelConfig>::~vector(&this->bus_channel_config_list);
  data::ConfigWwiseString::~ConfigWwiseString(&this->bus);
  std::string::~string(this);
};

// Line 310: range 0000000013C1D84E-0000000013C1D8B3
void __cdecl data::AudioRequirement::AudioRequirement(data::AudioRequirement *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::vector<std::string>::vector(&this->values);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 310: range 00000000142A09AC-00000000142A0A85
void __cdecl data::AudioRequirement::AudioRequirement(
        data::AudioRequirement *const this,
        const data::AudioRequirement *a2)
{
  data::StringArray *p_values; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_values = &a2->values;
  std::vector<std::string>::vector(&this->values, p_values);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_values, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_values) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_values, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 310: range 0000000013E89A6A-0000000013E89B20
void __cdecl data::AudioRequirement::AudioRequirement(data::AudioRequirement *const this, data::AudioRequirement *a2)
{
  std::vector<std::string> *p_values; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_values = &a2->values;
  std::vector<std::string>::vector(&this->values, p_values);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_values, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_values) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_values, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 310: range 0000000013C1D8B4-0000000013C1D8DE
void __cdecl data::AudioRequirement::~AudioRequirement(data::AudioRequirement *const this)
{
  std::vector<std::string>::~vector(&this->values);
  std::string::~string(this);
};

// Line 344: range 0000000013C1D988-0000000013C1DA26
void __cdecl data::AudioPlatformSetting::AudioPlatformSetting(data::AudioPlatformSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::vector<std::vector<data::AudioRequirement>>::vector(&this->audio_apidefault_open_sl__esrequirements);
  if ( *(_BYTE *)(((unsigned __int64)&this->video_volume_coefficient >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->video_volume_coefficient >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->video_volume_coefficient, v1);
  }
  this->video_volume_coefficient = 1.0;
  v2 = ((_BYTE)this + 28) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 344: range 00000000141F97F8-00000000141F9915
void __cdecl data::AudioPlatformSetting::AudioPlatformSetting(
        data::AudioPlatformSetting *const this,
        const data::AudioPlatformSetting *a2)
{
  float video_volume_coefficient; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::vector<std::vector<data::AudioRequirement>>::vector(
    &this->audio_apidefault_open_sl__esrequirements,
    &a2->audio_apidefault_open_sl__esrequirements);
  if ( *(_BYTE *)(((unsigned __int64)&a2->video_volume_coefficient >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->video_volume_coefficient >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->video_volume_coefficient);
  }
  video_volume_coefficient = a2->video_volume_coefficient;
  if ( *(_BYTE *)(((unsigned __int64)&this->video_volume_coefficient >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->video_volume_coefficient >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->video_volume_coefficient, a2);
  }
  this->video_volume_coefficient = video_volume_coefficient;
  v3 = ((_BYTE)a2 + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 344: range 0000000013C1DA28-0000000013C1DA42
void __cdecl data::AudioPlatformSetting::~AudioPlatformSetting(data::AudioPlatformSetting *const this)
{
  std::vector<std::vector<data::AudioRequirement>>::~vector(&this->audio_apidefault_open_sl__esrequirements);
};
