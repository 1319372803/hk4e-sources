// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MailExcelConfig.gen.h

// Line 42: range 0000000014D49DAC-0000000014D4A05C
void __cdecl data::MailExcelConfig::MailExcelConfig(data::MailExcelConfig *const this, const data::MailExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t expire_days; // ecx
  char v7; // dl
  bool is_star; // cl
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_id; // ecx
  char v12; // dl
  bool is_collectible; // cl
  char v14; // al
  const data::MailExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MailExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->expire_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->expire_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->expire_days);
  }
  expire_days = v15->expire_days;
  v7 = *(_BYTE *)(((unsigned __int64)&this->expire_days >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->expire_days, v5);
  this->expire_days = expire_days;
  if ( *(char *)(((unsigned __int64)&v15->is_star >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_star, v5, &v15->is_star);
  is_star = v15->is_star;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_star >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_star, v5, &this->is_star);
  }
  this->is_star = is_star;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->reward_id);
  }
  reward_id = v15->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->reward_id, v10);
  this->reward_id = reward_id;
  if ( *(char *)(((unsigned __int64)&v15->is_collectible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_collectible, v10, &v15->is_collectible);
  is_collectible = v15->is_collectible;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_collectible, v10, &this->is_collectible);
  }
  this->is_collectible = is_collectible;
};

// Line 45: range 0000000014DEA082-0000000014DEA0C3
void __cdecl data::MailExcelConfig::~MailExcelConfig(data::MailExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MailExcelConfig = v2;
};

// Line 45: range 0000000014DEA0C4-0000000014DEA0EE
void __cdecl data::MailExcelConfig::~MailExcelConfig(data::MailExcelConfig *const this)
{
  data::MailExcelConfig::~MailExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 60: range 000000001476A2B2-000000001476A403
void __cdecl data::BirthdayMailExcelConfig::BirthdayMailExcelConfig(data::BirthdayMailExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BirthdayMailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BirthdayMailExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mail_id, v3);
  }
  this->mail_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  std::string::basic_string(&this->effective_date);
  if ( *(_BYTE *)(((unsigned __int64)&this->effective_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effective_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effective_timestamp, v3);
  }
  this->effective_timestamp = 0;
};

// Line 60: range 0000000014D4A19E-0000000014D4A3E2
void __cdecl data::BirthdayMailExcelConfig::BirthdayMailExcelConfig(
        data::BirthdayMailExcelConfig *const this,
        const data::BirthdayMailExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t mail_id; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  std::string *p_effective_date; // rsi
  uint32_t effective_timestamp; // ecx
  char v12; // al
  const data::BirthdayMailExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BirthdayMailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BirthdayMailExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->mail_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->mail_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->mail_id);
  }
  mail_id = v13->mail_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->mail_id, v5);
  }
  this->mail_id = mail_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  p_effective_date = &v13->effective_date;
  std::string::basic_string(&this->effective_date, &v13->effective_date);
  if ( *(_BYTE *)(((unsigned __int64)&v13->effective_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->effective_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->effective_timestamp);
  }
  effective_timestamp = v13->effective_timestamp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->effective_timestamp >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_effective_date) = v12 != 0;
    __asan_report_store4(&this->effective_timestamp, p_effective_date);
  }
  this->effective_timestamp = effective_timestamp;
};

// Line 63: range 0000000014DEA004-0000000014DEA055
void __cdecl data::BirthdayMailExcelConfig::~BirthdayMailExcelConfig(data::BirthdayMailExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BirthdayMailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BirthdayMailExcelConfig = v2;
  std::string::~string(&this->effective_date);
};

// Line 63: range 0000000014DEA056-0000000014DEA080
void __cdecl data::BirthdayMailExcelConfig::~BirthdayMailExcelConfig(data::BirthdayMailExcelConfig *const this)
{
  data::BirthdayMailExcelConfig::~BirthdayMailExcelConfig(this);
  operator delete(this, 0x40uLL);
};
