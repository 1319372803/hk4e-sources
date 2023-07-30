// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigDebugMsgBoard.h

// Line 19: range 000000001428A0E2-000000001428A225
void __cdecl data::DebugBlletinInfo::DebugBlletinInfo(data::DebugBlletinInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::DebugBlletinInfo>::enable_shared_from_this(&this->std::enable_shared_from_this<data::DebugBlletinInfo>);
  v2 = (int (**)(...))(&`vtable for'data::DebugBlletinInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DebugBlletinInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->board_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->board_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->board_id, v3);
  }
  this->board_id = 0;
  std::string::basic_string(&this->content);
  std::string::basic_string(&this->author);
  std::string::basic_string(&this->create_time);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001428A694-000000001428A90C
void __cdecl data::DebugBlletinInfo::DebugBlletinInfo(
        data::DebugBlletinInfo *const this,
        const data::DebugBlletinInfo *a2)
{
  std::enable_shared_from_this<data::DebugBlletinInfo> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t id; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t board_id; // ecx
  char v8; // dl
  std::string *p_create_time; // rsi
  bool is_json_loaded; // cl
  char v11; // al

  v2 = &a2->std::enable_shared_from_this<data::DebugBlletinInfo>;
  std::enable_shared_from_this<data::DebugBlletinInfo>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::DebugBlletinInfo>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::DebugBlletinInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_DebugBlletinInfo = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->id, v2);
  }
  this->id = id;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->board_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->board_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->board_id);
  }
  board_id = a2->board_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->board_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->board_id, v6);
  }
  this->board_id = board_id;
  std::string::basic_string(&this->content, &a2->content);
  std::string::basic_string(&this->author, &a2->author);
  p_create_time = &a2->create_time;
  std::string::basic_string(&this->create_time, &a2->create_time);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_create_time, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_create_time) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_create_time, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 31: range 000000001428AC78-000000001428ACA2
void __cdecl data::DebugBlletinInfo::~DebugBlletinInfo(data::DebugBlletinInfo *const this)
{
  data::DebugBlletinInfo::~DebugBlletinInfo(this);
  operator delete(this, 0x88uLL);
};

// Line 31: range 000000001428ABF6-000000001428AC77
void __cdecl data::DebugBlletinInfo::~DebugBlletinInfo(data::DebugBlletinInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DebugBlletinInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DebugBlletinInfo = v2;
  std::string::~string(&this->create_time);
  std::string::~string(&this->author);
  std::string::~string(&this->content);
  std::enable_shared_from_this<data::DebugBlletinInfo>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::DebugBlletinInfo>);
};

// Line 36: range 0000000013C1B676-0000000013C1B686
const char *__cdecl data::DebugBlletinInfo::getTypeName(const data::DebugBlletinInfo *const this)
{
  return "DebugBlletinInfo";
};

// Line 37: range 0000000013C1B688-0000000013C1B824
int32_t __cdecl data::DebugBlletinInfo::getHashNum(const data::DebugBlletinInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::DebugBlletinInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DebugBlletinInfo",
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

// Line 56: range 000000001428ACA4-000000001428ADA3
void __cdecl data::DebugBoardInfo::DebugBoardInfo(data::DebugBoardInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::DebugBlletinInfo::DebugBlletinInfo((data::DebugBlletinInfo *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DebugBoardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DebugBlletinInfo = v2;
  v3 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = 0;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->location);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
};

// Line 56: range 000000001428B158-000000001428B338
void __cdecl data::DebugBoardInfo::DebugBoardInfo(data::DebugBoardInfo *const this, const data::DebugBoardInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t type; // ecx
  char v5; // dl
  std::string *p_location; // rsi
  uint32_t scene_id; // ecx
  char v8; // al

  data::DebugBlletinInfo::DebugBlletinInfo((data::DebugBlletinInfo *const)this, (const data::DebugBlletinInfo *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DebugBoardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DebugBlletinInfo = v2;
  v3 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->type, v3);
  }
  this->type = type;
  std::string::basic_string(&this->title, &a2->title);
  p_location = &a2->location;
  std::string::basic_string(&this->location, &a2->location);
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_location) = v8 != 0;
    __asan_report_store4(&this->scene_id, p_location);
  }
  this->scene_id = scene_id;
};

// Line 66: range 00000000142A10E4-00000000142A1155
void __cdecl data::DebugBoardInfo::~DebugBoardInfo(data::DebugBoardInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DebugBoardInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DebugBlletinInfo = v2;
  std::string::~string(&this->location);
  std::string::~string(&this->title);
  data::DebugBlletinInfo::~DebugBlletinInfo((data::DebugBlletinInfo *const)this);
};

// Line 66: range 00000000142A1156-00000000142A1180
void __cdecl data::DebugBoardInfo::~DebugBoardInfo(data::DebugBoardInfo *const this)
{
  data::DebugBoardInfo::~DebugBoardInfo(this);
  operator delete(this, 0xD0uLL);
};

// Line 71: range 0000000013C1B826-0000000013C1B836
const char *__cdecl data::DebugBoardInfo::getTypeName(const data::DebugBoardInfo *const this)
{
  return "DebugBoardInfo";
};

// Line 72: range 0000000013C1B838-0000000013C1B9D4
int32_t __cdecl data::DebugBoardInfo::getHashNum(const data::DebugBoardInfo *const this)
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
  *(_QWORD *)(v1 + 16) = data::DebugBoardInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DebugBoardInfo",
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

// Line 88: range 000000001428B622-000000001428B663
void __cdecl data::DebugBoardInfoFactory::DebugBoardInfoFactory(data::DebugBoardInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DebugBoardInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DebugBoardInfoFactory = v2;
};
