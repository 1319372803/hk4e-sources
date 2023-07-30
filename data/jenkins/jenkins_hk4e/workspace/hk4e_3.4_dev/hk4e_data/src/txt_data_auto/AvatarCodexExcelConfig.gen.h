// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarCodexExcelConfig.gen.h

// Line 17: range 0000000013BDAEAE-0000000013BDAFFC
void __cdecl data::AvatarCodexExcelConfig::AvatarCodexExcelConfig(data::AvatarCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AvatarCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCodexExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sort_id, v1);
  }
  this->sort_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sort_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sort_factor, v3);
  }
  this->sort_factor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v3);
  }
  this->avatar_id = 0;
  std::string::basic_string(&this->begin_time);
  if ( *(char *)(((unsigned __int64)&this->hide_when_dont_have >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->hide_when_dont_have, v3, &this->hide_when_dont_have);
  this->hide_when_dont_have = 0;
};

// Line 17: range 0000000013DDEB18-0000000013DDED5D
void __cdecl data::AvatarCodexExcelConfig::AvatarCodexExcelConfig(
        data::AvatarCodexExcelConfig *const this,
        const data::AvatarCodexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sort_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t sort_factor; // ecx
  char v7; // dl
  uint32_t avatar_id; // ecx
  char v9; // al
  std::string *p_begin_time; // rsi
  bool hide_when_dont_have; // cl
  char v12; // al
  const data::AvatarCodexExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarCodexExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sort_id);
  }
  sort_id = a2->sort_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sort_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sort_id, a2);
  }
  this->sort_id = sort_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->sort_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->sort_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->sort_factor);
  }
  sort_factor = v13->sort_factor;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sort_factor >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->sort_factor, v5);
  }
  this->sort_factor = sort_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v13->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->avatar_id);
  }
  avatar_id = v13->avatar_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->avatar_id, v5);
  }
  this->avatar_id = avatar_id;
  p_begin_time = &v13->begin_time;
  std::string::basic_string(&this->begin_time, &v13->begin_time);
  if ( *(char *)(((unsigned __int64)&v13->hide_when_dont_have >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->hide_when_dont_have, p_begin_time, &v13->hide_when_dont_have);
  hide_when_dont_have = v13->hide_when_dont_have;
  v12 = *(_BYTE *)(((unsigned __int64)&this->hide_when_dont_have >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_begin_time) = v12 != 0;
    __asan_report_store1(&this->hide_when_dont_have, p_begin_time, &this->hide_when_dont_have);
  }
  this->hide_when_dont_have = hide_when_dont_have;
};

// Line 20: range 00000000142A2038-00000000142A2089
void __cdecl data::AvatarCodexExcelConfig::~AvatarCodexExcelConfig(data::AvatarCodexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCodexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCodexExcelConfig = v2;
  std::string::~string(&this->begin_time);
};

// Line 20: range 00000000142A208A-00000000142A20B4
void __cdecl data::AvatarCodexExcelConfig::~AvatarCodexExcelConfig(data::AvatarCodexExcelConfig *const this)
{
  data::AvatarCodexExcelConfig::~AvatarCodexExcelConfig(this);
  operator delete(this, 0x40uLL);
};
