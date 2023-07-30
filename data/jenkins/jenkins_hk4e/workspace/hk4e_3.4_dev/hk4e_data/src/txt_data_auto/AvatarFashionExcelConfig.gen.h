// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarFashionExcelConfig.gen.h

// Line 41: range 000000001419C18A-000000001419C2C9
void __cdecl data::AvatarFlycloakExcelConfig::AvatarFlycloakExcelConfig(
        data::AvatarFlycloakExcelConfig *const this,
        const data::AvatarFlycloakExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t flycloak_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_id; // ecx
  char v7; // dl
  const data::AvatarFlycloakExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarFlycloakExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarFlycloakExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->flycloak_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->flycloak_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->flycloak_id);
  }
  flycloak_id = a2->flycloak_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->flycloak_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->flycloak_id, a2);
  }
  this->flycloak_id = flycloak_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->material_id);
  }
  material_id = v8->material_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
};

// Line 44: range 00000000142A4B10-00000000142A4B51
void __cdecl data::AvatarFlycloakExcelConfig::~AvatarFlycloakExcelConfig(data::AvatarFlycloakExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarFlycloakExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarFlycloakExcelConfig = v2;
};

// Line 44: range 00000000142A4B52-00000000142A4B7C
void __cdecl data::AvatarFlycloakExcelConfig::~AvatarFlycloakExcelConfig(data::AvatarFlycloakExcelConfig *const this)
{
  data::AvatarFlycloakExcelConfig::~AvatarFlycloakExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 56: range 0000000013BDDF66-0000000013BDE64C
void __cdecl data::AvatarCostumeExcelConfig::AvatarCostumeExcelConfig(data::AvatarCostumeExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarCostumeExcelConfig::AvatarCostumeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -202116351;
  v5 = (int (**)(...))(&`vtable for'data::AvatarCostumeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCostumeExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->skin_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skin_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skin_id, v1);
  }
  this->skin_id = 0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index_id, v6);
  }
  this->index_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v6);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->character_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->character_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->character_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->character_id = 0;
  std::string::basic_string(&this->prefab_path);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->prefab_path_path_decorator,
    "*.GameObject",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->prefab_remote_path);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->prefab_remote_path_path_decorator,
    "*.GameObject",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->controller_path);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    &this->controller_path_path_decorator,
    "*.AnimatorController",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->controller_remote_path);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    &this->controller_remote_path_path_decorator,
    "*.AnimatorController",
    (const std::allocator<char> *)(v2 + 96));
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->is_default >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_default, "*.AnimatorController", &this->is_default);
  this->is_default = 0;
  v7 = ((_BYTE)this + 25) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_default_unlock, v7, v8);
  this->is_default_unlock = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_hash, v7);
  this->prefab_path_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_remote_hash, v7);
  this->prefab_path_remote_hash = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quality, v7);
  }
  this->quality = 0;
  v9 = ((_BYTE)this + 52) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_domestic_wear_by_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_domestic_wear_by_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_domestic_wear_by_default, v9, v10);
  this->is_domestic_wear_by_default = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 56: range 000000001419C40A-000000001419CAB8
void __cdecl data::AvatarCostumeExcelConfig::AvatarCostumeExcelConfig(
        data::AvatarCostumeExcelConfig *const this,
        const data::AvatarCostumeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t skin_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t index_id; // ecx
  char v7; // dl
  uint32_t item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t character_id; // ecx
  char v12; // dl
  std::string *p_controller_remote_path_path_decorator; // rsi
  bool is_default; // cl
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_default_unlock; // cl
  char v19; // dl
  __int64 v20; // rdx
  uint64_t prefab_path_hash; // rdx
  uint64_t prefab_path_remote_hash; // rdx
  uint32_t quality; // ecx
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool is_domestic_wear_by_default; // cl
  char v28; // dl
  __int64 v29; // rdx
  const data::AvatarCostumeExcelConfig *v30; // [rsp+0h] [rbp-20h]

  v30 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarCostumeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarCostumeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skin_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skin_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skin_id);
  }
  skin_id = a2->skin_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->skin_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->skin_id, a2);
  }
  this->skin_id = skin_id;
  v5 = (((_BYTE)v30 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->index_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->index_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->index_id);
  }
  index_id = v30->index_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->index_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->index_id, v5);
  }
  this->index_id = index_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->item_id);
  }
  item_id = v30->item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  v10 = (((_BYTE)v30 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->character_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->character_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->character_id);
  }
  character_id = v30->character_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->character_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->character_id, v10);
  }
  this->character_id = character_id;
  std::string::basic_string(&this->prefab_path, &v30->prefab_path);
  std::string::basic_string(&this->prefab_path_path_decorator, &v30->prefab_path_path_decorator);
  std::string::basic_string(&this->prefab_remote_path, &v30->prefab_remote_path);
  std::string::basic_string(&this->prefab_remote_path_path_decorator, &v30->prefab_remote_path_path_decorator);
  std::string::basic_string(&this->controller_path, &v30->controller_path);
  std::string::basic_string(&this->controller_path_path_decorator, &v30->controller_path_path_decorator);
  std::string::basic_string(&this->controller_remote_path, &v30->controller_remote_path);
  p_controller_remote_path_path_decorator = &v30->controller_remote_path_path_decorator;
  std::string::basic_string(&this->controller_remote_path_path_decorator, &v30->controller_remote_path_path_decorator);
  if ( *(char *)(((unsigned __int64)&v30->is_default >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v30->is_default, p_controller_remote_path_path_decorator, &v30->is_default);
  is_default = v30->is_default;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_default >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_controller_remote_path_path_decorator) = v15 != 0;
    __asan_report_store1(&this->is_default, p_controller_remote_path_path_decorator, &this->is_default);
  }
  this->is_default = is_default;
  v16 = ((_BYTE)v30 + 25) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v30->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v30->is_default_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v30->is_default_unlock, v16, v17);
  is_default_unlock = v30->is_default_unlock;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_default_unlock, v16, v20);
  this->is_default_unlock = is_default_unlock;
  if ( *(_BYTE *)(((unsigned __int64)&v30->prefab_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v30->prefab_path_hash);
  prefab_path_hash = v30->prefab_path_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_hash, v16);
  this->prefab_path_hash = prefab_path_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v30->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v30->prefab_path_remote_hash);
  prefab_path_remote_hash = v30->prefab_path_remote_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->prefab_path_remote_hash, v16);
  this->prefab_path_remote_hash = prefab_path_remote_hash;
  if ( *(_BYTE *)(((unsigned __int64)&v30->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->quality);
  }
  quality = v30->quality;
  v24 = *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v16) = v24 != 0;
    __asan_report_store4(&this->quality, v16);
  }
  this->quality = quality;
  v25 = ((_BYTE)v30 + 52) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v30->is_domestic_wear_by_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v30->is_domestic_wear_by_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v30->is_domestic_wear_by_default, v25, v26);
  is_domestic_wear_by_default = v30->is_domestic_wear_by_default;
  v28 = *(_BYTE *)(((unsigned __int64)&this->is_domestic_wear_by_default >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->is_domestic_wear_by_default, v25, v29);
  this->is_domestic_wear_by_default = is_domestic_wear_by_default;
};

// Line 59: range 00000000142A4A1A-00000000142A4AE3
void __cdecl data::AvatarCostumeExcelConfig::~AvatarCostumeExcelConfig(data::AvatarCostumeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCostumeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCostumeExcelConfig = v2;
  std::string::~string(&this->controller_remote_path_path_decorator);
  std::string::~string(&this->controller_remote_path);
  std::string::~string(&this->controller_path_path_decorator);
  std::string::~string(&this->controller_path);
  std::string::~string(&this->prefab_remote_path_path_decorator);
  std::string::~string(&this->prefab_remote_path);
  std::string::~string(&this->prefab_path_path_decorator);
  std::string::~string(&this->prefab_path);
};

// Line 59: range 00000000142A4AE4-00000000142A4B0E
void __cdecl data::AvatarCostumeExcelConfig::~AvatarCostumeExcelConfig(data::AvatarCostumeExcelConfig *const this)
{
  data::AvatarCostumeExcelConfig::~AvatarCostumeExcelConfig(this);
  operator delete(this, 0x138uLL);
};

// Line 87: range 000000001419CBFA-000000001419CD39
void __cdecl data::AvatarReplaceCostumeExcelConfig::AvatarReplaceCostumeExcelConfig(
        data::AvatarReplaceCostumeExcelConfig *const this,
        const data::AvatarReplaceCostumeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t replace_costume_id; // ecx
  char v7; // dl
  const data::AvatarReplaceCostumeExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarReplaceCostumeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarReplaceCostumeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->replace_costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->replace_costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->replace_costume_id);
  }
  replace_costume_id = v8->replace_costume_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->replace_costume_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->replace_costume_id, v5);
  }
  this->replace_costume_id = replace_costume_id;
};

// Line 90: range 00000000142A49AC-00000000142A49ED
void __cdecl data::AvatarReplaceCostumeExcelConfig::~AvatarReplaceCostumeExcelConfig(
        data::AvatarReplaceCostumeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarReplaceCostumeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarReplaceCostumeExcelConfig = v2;
};

// Line 90: range 00000000142A49EE-00000000142A4A18
void __cdecl data::AvatarReplaceCostumeExcelConfig::~AvatarReplaceCostumeExcelConfig(
        data::AvatarReplaceCostumeExcelConfig *const this)
{
  data::AvatarReplaceCostumeExcelConfig::~AvatarReplaceCostumeExcelConfig(this);
  operator delete(this, 0x10uLL);
};
