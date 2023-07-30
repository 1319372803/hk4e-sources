// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/RenameExcelConfig.gen.h

// Line 41: range 00000000147855F8-0000000014785897
void __cdecl data::AvatarRenameExcelConfig::AvatarRenameExcelConfig(data::AvatarRenameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AvatarRenameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarRenameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->rename_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rename_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rename_id, v1);
  }
  this->rename_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = AVATAR_RENAME_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->related_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->related_avatar_id, v3);
  }
  this->related_avatar_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rename_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rename_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rename_item_id, v4);
  }
  this->rename_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rename_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rename_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rename_quest_id, v4);
  }
  this->rename_quest_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rename_pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rename_pre_quest_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rename_pre_quest_id, v5);
  }
  this->rename_pre_quest_id = 0;
  std::vector<unsigned int>::vector(&this->keyword_easter_egg_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_fail_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audit_fail_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audit_fail_mail_id, v5);
  }
  this->audit_fail_mail_id = 0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_mail_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reset_mail_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reset_mail_id, v6);
  }
  this->reset_mail_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ip_reset_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ip_reset_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ip_reset_mail_id, v6);
  }
  this->ip_reset_mail_id = 0;
};

// Line 41: range 0000000014D616B2-0000000014D61B6F
void __cdecl data::AvatarRenameExcelConfig::AvatarRenameExcelConfig(
        data::AvatarRenameExcelConfig *const this,
        const data::AvatarRenameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t rename_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::AvatarRenameType type; // ecx
  char v7; // dl
  uint32_t related_avatar_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t rename_item_id; // ecx
  char v12; // dl
  uint32_t rename_quest_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t rename_pre_quest_id; // ecx
  char v17; // dl
  std::vector<unsigned int> *p_keyword_easter_egg_group_list; // rsi
  uint32_t audit_fail_mail_id; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t reset_mail_id; // ecx
  char v23; // dl
  uint32_t ip_reset_mail_id; // ecx
  char v25; // al
  const data::AvatarRenameExcelConfig *v26; // [rsp+0h] [rbp-10h]

  v26 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarRenameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarRenameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rename_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rename_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rename_id);
  }
  rename_id = a2->rename_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->rename_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->rename_id, a2);
  }
  this->rename_id = rename_id;
  v5 = (((_BYTE)v26 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->type);
  }
  type = v26->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v26->related_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->related_avatar_id);
  }
  related_avatar_id = v26->related_avatar_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->related_avatar_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->related_avatar_id, v5);
  }
  this->related_avatar_id = related_avatar_id;
  v10 = (((_BYTE)v26 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->rename_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->rename_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->rename_item_id);
  }
  rename_item_id = v26->rename_item_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rename_item_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->rename_item_id, v10);
  }
  this->rename_item_id = rename_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->rename_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->rename_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->rename_quest_id);
  }
  rename_quest_id = v26->rename_quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->rename_quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->rename_quest_id, v10);
  }
  this->rename_quest_id = rename_quest_id;
  v15 = (((_BYTE)v26 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->rename_pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->rename_pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->rename_pre_quest_id);
  }
  rename_pre_quest_id = v26->rename_pre_quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->rename_pre_quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->rename_pre_quest_id, v15);
  }
  this->rename_pre_quest_id = rename_pre_quest_id;
  p_keyword_easter_egg_group_list = &v26->keyword_easter_egg_group_list;
  std::vector<unsigned int>::vector(&this->keyword_easter_egg_group_list, &v26->keyword_easter_egg_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v26->audit_fail_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->audit_fail_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->audit_fail_mail_id);
  }
  audit_fail_mail_id = v26->audit_fail_mail_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->audit_fail_mail_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_keyword_easter_egg_group_list) = v20 != 0;
    __asan_report_store4(&this->audit_fail_mail_id, p_keyword_easter_egg_group_list);
  }
  this->audit_fail_mail_id = audit_fail_mail_id;
  v21 = (((_BYTE)v26 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->reset_mail_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->reset_mail_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->reset_mail_id);
  }
  reset_mail_id = v26->reset_mail_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->reset_mail_id >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->reset_mail_id, v21);
  }
  this->reset_mail_id = reset_mail_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->ip_reset_mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->ip_reset_mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->ip_reset_mail_id);
  }
  ip_reset_mail_id = v26->ip_reset_mail_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->ip_reset_mail_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->ip_reset_mail_id, v21);
  }
  this->ip_reset_mail_id = ip_reset_mail_id;
};

// Line 44: range 0000000014DE71F6-0000000014DE7247
void __cdecl data::AvatarRenameExcelConfig::~AvatarRenameExcelConfig(data::AvatarRenameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarRenameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarRenameExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->keyword_easter_egg_group_list);
};

// Line 44: range 0000000014DE7248-0000000014DE7272
void __cdecl data::AvatarRenameExcelConfig::~AvatarRenameExcelConfig(data::AvatarRenameExcelConfig *const this)
{
  data::AvatarRenameExcelConfig::~AvatarRenameExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 64: range 0000000014785898-0000000014785937
void __cdecl data::AvatarInappropriateNameExcelConfig::AvatarInappropriateNameExcelConfig(
        data::AvatarInappropriateNameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarInappropriateNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarInappropriateNameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->rename_id_list);
  std::vector<std::string>::vector(&this->invalid_name_list);
};

// Line 64: range 0000000014D6E362-0000000014D6E479
void __cdecl data::AvatarInappropriateNameExcelConfig::AvatarInappropriateNameExcelConfig(
        data::AvatarInappropriateNameExcelConfig *const this,
        const data::AvatarInappropriateNameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::AvatarInappropriateNameExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarInappropriateNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarInappropriateNameExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->rename_id_list, &v5->rename_id_list);
  std::vector<std::string>::vector(&this->invalid_name_list, &v5->invalid_name_list);
};

// Line 67: range 0000000014DE7168-0000000014DE71C9
void __cdecl data::AvatarInappropriateNameExcelConfig::~AvatarInappropriateNameExcelConfig(
        data::AvatarInappropriateNameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarInappropriateNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarInappropriateNameExcelConfig = v2;
  std::vector<std::string>::~vector(&this->invalid_name_list);
  std::vector<unsigned int>::~vector(&this->rename_id_list);
};

// Line 67: range 0000000014DE71CA-0000000014DE71F4
void __cdecl data::AvatarInappropriateNameExcelConfig::~AvatarInappropriateNameExcelConfig(
        data::AvatarInappropriateNameExcelConfig *const this)
{
  data::AvatarInappropriateNameExcelConfig::~AvatarInappropriateNameExcelConfig(this);
  operator delete(this, 0x40uLL);
};
