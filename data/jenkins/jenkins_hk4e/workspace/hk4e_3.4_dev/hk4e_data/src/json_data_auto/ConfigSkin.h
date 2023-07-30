// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigSkin.h

// Line 18: range 00000000127280BA-0000000012728146
void __cdecl data::ConfigSkin::ConfigSkin(data::ConfigSkin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigSkin>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigSkin>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkin = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 18: range 0000000012728610-00000000127286E6
void __cdecl data::ConfigSkin::ConfigSkin(data::ConfigSkin *const this, const data::ConfigSkin *a2)
{
  std::enable_shared_from_this<data::ConfigSkin> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigSkin>;
  std::enable_shared_from_this<data::ConfigSkin>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigSkin>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigSkin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigSkin = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 25: range 0000000012728982-00000000127289AC
void __cdecl data::ConfigSkin::~ConfigSkin(data::ConfigSkin *const this)
{
  data::ConfigSkin::~ConfigSkin(this);
  operator delete(this, 0x20uLL);
};

// Line 25: range 0000000012728930-0000000012728981
void __cdecl data::ConfigSkin::~ConfigSkin(data::ConfigSkin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkin = v2;
  std::enable_shared_from_this<data::ConfigSkin>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigSkin>);
};

// Line 30: range 000000001217F1D8-000000001217F1E8
const char *__cdecl data::ConfigSkin::getTypeName(const data::ConfigSkin *const this)
{
  return "ConfigSkin";
};

// Line 31: range 000000001217F1EA-000000001217F386
int32_t __cdecl data::ConfigSkin::getHashNum(const data::ConfigSkin *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigSkin::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSkin",
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

// Line 50: range 000000001217F5BC-000000001217F7C9
void __cdecl data::SkinColor::SkinColor(data::SkinColor *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SkinColor::SkinColor;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index, v1);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->channel, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->channel = 0;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(&this->color, "000000FF", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, "000000FF", &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 50: range 000000001265BCA8-000000001265BE7B
void __cdecl data::SkinColor::SkinColor(data::SkinColor *const this, const data::SkinColor *a2)
{
  int32_t index; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t channel; // ecx
  char v6; // dl
  std::string *p_color; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::SkinColor *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->index);
  }
  index = a2->index;
  v3 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->index, a2);
  }
  this->index = index;
  v4 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->channel);
  }
  channel = v10->channel;
  v6 = *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->channel, v4);
  }
  this->channel = channel;
  p_color = &v10->color;
  std::string::basic_string(&this->color, &v10->color);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_color, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_color) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_color, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 000000001238CEF0-000000001238D0A0
void __cdecl data::SkinColor::SkinColor(data::SkinColor *const this, data::SkinColor *a2)
{
  int32_t index; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t channel; // ecx
  char v6; // dl
  std::string *p_color; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::SkinColor *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->index);
  }
  index = a2->index;
  v3 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->index, a2);
  }
  this->index = index;
  v4 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->channel);
  }
  channel = v10->channel;
  v6 = *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->channel, v4);
  }
  this->channel = channel;
  p_color = &v10->color;
  std::string::basic_string(&this->color, &v10->color);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_color, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_color) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_color, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 000000001217F7CA-000000001217F7F4
void __cdecl data::SkinColor::~SkinColor(data::SkinColor *const this)
{
  std::string::~string(&this->color);
  std::string::~string(this);
};

// Line 81: range 00000000127289E6-0000000012728A43
void __cdecl data::ConfigMonsterSkin::ConfigMonsterSkin(data::ConfigMonsterSkin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigSkin::ConfigSkin(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterSkin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkin = v2;
  std::vector<data::SkinColor>::vector(&this->skin_colors);
};

// Line 81: range 0000000012728E38-0000000012728ECE
void __cdecl data::ConfigMonsterSkin::ConfigMonsterSkin(
        data::ConfigMonsterSkin *const this,
        const data::ConfigMonsterSkin *a2)
{
  int (**v2)(...); // rdx

  data::ConfigSkin::ConfigSkin(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterSkin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigSkin = v2;
  std::vector<data::SkinColor>::vector(&this->skin_colors, &a2->skin_colors);
};

// Line 88: range 000000001274C54C-000000001274C5A9
void __cdecl data::ConfigMonsterSkin::~ConfigMonsterSkin(data::ConfigMonsterSkin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterSkin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkin = v2;
  std::vector<data::SkinColor>::~vector(&this->skin_colors);
  data::ConfigSkin::~ConfigSkin(this);
};

// Line 88: range 000000001274C5AA-000000001274C5D4
void __cdecl data::ConfigMonsterSkin::~ConfigMonsterSkin(data::ConfigMonsterSkin *const this)
{
  data::ConfigMonsterSkin::~ConfigMonsterSkin(this);
  operator delete(this, 0x38uLL);
};

// Line 93: range 000000001217F388-000000001217F398
const char *__cdecl data::ConfigMonsterSkin::getTypeName(const data::ConfigMonsterSkin *const this)
{
  return "ConfigMonsterSkin";
};

// Line 94: range 000000001217F39A-000000001217F536
int32_t __cdecl data::ConfigMonsterSkin::getHashNum(const data::ConfigMonsterSkin *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMonsterSkin::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMonsterSkin",
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

// Line 110: range 00000000127291B8-00000000127291F9
void __cdecl data::ConfigMonsterSkinFactory::ConfigMonsterSkinFactory(data::ConfigMonsterSkinFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterSkinFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMonsterSkinFactory = v2;
};
