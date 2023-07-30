// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/NpcExcelConfig.gen.h

// Line 42: range 0000000014779D68-000000001477A092
void __cdecl data::NpcExcelConfig::NpcExcelConfig(data::NpcExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::NpcExcelConfig::NpcExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::EntityExcelConfig::EntityExcelConfig(this);
  v5 = (int (**)(...))(&`vtable for'data::NpcExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v5;
  std::string::basic_string(&this->json_name);
  std::string::basic_string(&this->json_path);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->json_path_path_decorator,
    "Data/_BinOutput/Npc/*.MiHoYoBinData",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->has_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_combat, "Data/_BinOutput/Npc/*.MiHoYoBinData", &this->has_combat);
  this->has_combat = 0;
  v6 = ((_BYTE)this - 71) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->has_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->has_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_move, v6, v7);
  this->has_move = 0;
  v8 = ((_BYTE)this - 70) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->has_audio, v8, v9);
  this->has_audio = 0;
  v10 = ((_BYTE)this - 69) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_daily >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_daily >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_daily, v10, v11);
  this->is_daily = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_met_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_met_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_met_id, (((_BYTE)this - 68) & 7u) + 3);
  }
  this->first_met_id = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 42: range 0000000014D59FA8-0000000014D5A35E
void __cdecl data::NpcExcelConfig::NpcExcelConfig(data::NpcExcelConfig *const this, const data::NpcExcelConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_json_path_path_decorator; // rsi
  bool has_combat; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool has_move; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool has_audio; // cl
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_daily; // cl
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rsi
  uint32_t first_met_id; // ecx
  char v23; // dl

  data::EntityExcelConfig::EntityExcelConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::NpcExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
  std::string::basic_string(&this->json_name, &a2->json_name);
  std::string::basic_string(&this->json_path, &a2->json_path);
  p_json_path_path_decorator = &a2->json_path_path_decorator;
  std::string::basic_string(&this->json_path_path_decorator, &a2->json_path_path_decorator);
  if ( *(char *)(((unsigned __int64)&a2->has_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_combat, p_json_path_path_decorator, &a2->has_combat);
  has_combat = a2->has_combat;
  v5 = *(_BYTE *)(((unsigned __int64)&this->has_combat >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_json_path_path_decorator) = v5 != 0;
    __asan_report_store1(&this->has_combat, p_json_path_path_decorator, &this->has_combat);
  }
  this->has_combat = has_combat;
  v6 = ((_BYTE)a2 - 71) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->has_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->has_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->has_move, v6, v7);
  has_move = a2->has_move;
  v9 = *(_BYTE *)(((unsigned __int64)&this->has_move >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this - 71) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->has_move, v6, v10);
  this->has_move = has_move;
  v11 = ((_BYTE)a2 - 70) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->has_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->has_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->has_audio, v11, v12);
  has_audio = a2->has_audio;
  v14 = *(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this - 70) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->has_audio, v11, v15);
  this->has_audio = has_audio;
  v16 = ((_BYTE)a2 - 69) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&a2->is_daily >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&a2->is_daily >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&a2->is_daily, v16, v17);
  is_daily = a2->is_daily;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_daily >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this - 69) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_daily, v16, v20);
  this->is_daily = is_daily;
  v21 = (((_BYTE)a2 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->first_met_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->first_met_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->first_met_id);
  }
  first_met_id = a2->first_met_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->first_met_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->first_met_id, v21);
  }
  this->first_met_id = first_met_id;
};

// Line 46: range 0000000014DEBBCE-0000000014DEBC51
void __cdecl data::NpcExcelConfig::~NpcExcelConfig(data::NpcExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  std::string::~string(&this->json_path_path_decorator);
  std::string::~string(&this->json_path);
  std::string::~string(&this->json_name);
  data::EntityExcelConfig::~EntityExcelConfig(this);
};

// Line 46: range 0000000014DEBC52-0000000014DEBC7C
void __cdecl data::NpcExcelConfig::~NpcExcelConfig(data::NpcExcelConfig *const this)
{
  data::NpcExcelConfig::~NpcExcelConfig(this);
  operator delete(this, 0x1C0uLL);
};

// Line 64: range 000000001477A094-000000001477A161
void __cdecl data::NpcFirstMetExcelConfig::NpcFirstMetExcelConfig(data::NpcFirstMetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcFirstMetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcFirstMetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->sub_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
};

// Line 64: range 0000000014D5A4A0-0000000014D5A5EA
void __cdecl data::NpcFirstMetExcelConfig::NpcFirstMetExcelConfig(
        data::NpcFirstMetExcelConfig *const this,
        const data::NpcFirstMetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_sub_quest_id_list; // rsi
  uint32_t avatar_id; // ecx
  char v7; // al
  const data::NpcFirstMetExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NpcFirstMetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NpcFirstMetExcelConfig = v2;
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
  p_sub_quest_id_list = &v8->sub_quest_id_list;
  std::vector<unsigned int>::vector(&this->sub_quest_id_list, &v8->sub_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->avatar_id);
  }
  avatar_id = v8->avatar_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_sub_quest_id_list) = v7 != 0;
    __asan_report_store4(&this->avatar_id, p_sub_quest_id_list);
  }
  this->avatar_id = avatar_id;
};

// Line 67: range 0000000014DEBB50-0000000014DEBBA1
void __cdecl data::NpcFirstMetExcelConfig::~NpcFirstMetExcelConfig(data::NpcFirstMetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NpcFirstMetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NpcFirstMetExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->sub_quest_id_list);
};

// Line 67: range 0000000014DEBBA2-0000000014DEBBCC
void __cdecl data::NpcFirstMetExcelConfig::~NpcFirstMetExcelConfig(data::NpcFirstMetExcelConfig *const this)
{
  data::NpcFirstMetExcelConfig::~NpcFirstMetExcelConfig(this);
  operator delete(this, 0x30uLL);
};
