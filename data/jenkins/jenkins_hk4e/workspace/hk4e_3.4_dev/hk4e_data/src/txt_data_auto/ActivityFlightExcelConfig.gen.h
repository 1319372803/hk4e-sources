// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityFlightExcelConfig.gen.h

// Line 19: range 00000000133422D4-0000000013342399
void __cdecl data::FlightDailyPointFactor::FlightDailyPointFactor(data::FlightDailyPointFactor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightDailyPointFactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightDailyPointFactor = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, v1);
  }
  this->time_factor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->gold_factor = 0;
};

// Line 19: range 000000001340F7F0-000000001340F92F
void __cdecl data::FlightDailyPointFactor::FlightDailyPointFactor(
        data::FlightDailyPointFactor *const this,
        const data::FlightDailyPointFactor *a2)
{
  int (**v2)(...); // rdx
  uint32_t time_factor; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gold_factor; // ecx
  char v7; // dl
  const data::FlightDailyPointFactor *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FlightDailyPointFactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FlightDailyPointFactor = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time_factor);
  }
  time_factor = a2->time_factor;
  v4 = *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->time_factor, a2);
  }
  this->time_factor = time_factor;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gold_factor);
  }
  gold_factor = v8->gold_factor;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gold_factor, v5);
  }
  this->gold_factor = gold_factor;
};

// Line 22: range 00000000132A79A0-00000000132A79E1
void __cdecl data::FlightDailyPointFactor::~FlightDailyPointFactor(data::FlightDailyPointFactor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightDailyPointFactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightDailyPointFactor = v2;
};

// Line 22: range 00000000132A79E2-00000000132A7A0C
void __cdecl data::FlightDailyPointFactor::~FlightDailyPointFactor(data::FlightDailyPointFactor *const this)
{
  data::FlightDailyPointFactor::~FlightDailyPointFactor(this);
  operator delete(this, 0x10uLL);
};

// Line 32: range 0000000012EC237A-0000000012EC249D
void __cdecl data::FlightActivityExcelConfig::FlightActivityExcelConfig(data::FlightActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FlightActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->preview_reward_id, v3);
  }
  this->preview_reward_id = 0;
  std::vector<unsigned int>::vector(&this->medal_id);
  std::vector<data::FlightDailyPointFactor>::vector(&this->daily_factor_vec);
};

// Line 32: range 00000000133AEA04-00000000133AEC15
void __cdecl data::FlightActivityExcelConfig::FlightActivityExcelConfig(
        data::FlightActivityExcelConfig *const this,
        const data::FlightActivityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t preview_reward_id; // ecx
  char v9; // al
  const data::FlightActivityExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FlightActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FlightActivityExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_id);
  }
  activity_id = v10->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->preview_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->preview_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->preview_reward_id);
  }
  preview_reward_id = v10->preview_reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->preview_reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->preview_reward_id, v5);
  }
  this->preview_reward_id = preview_reward_id;
  std::vector<unsigned int>::vector(&this->medal_id, &v10->medal_id);
  std::vector<data::FlightDailyPointFactor>::vector(&this->daily_factor_vec, &v10->daily_factor_vec);
};

// Line 35: range 000000001342642A-0000000013426454
void __cdecl data::FlightActivityExcelConfig::~FlightActivityExcelConfig(data::FlightActivityExcelConfig *const this)
{
  data::FlightActivityExcelConfig::~FlightActivityExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 35: range 00000000134263C8-0000000013426429
void __cdecl data::FlightActivityExcelConfig::~FlightActivityExcelConfig(data::FlightActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightActivityExcelConfig = v2;
  std::vector<data::FlightDailyPointFactor>::~vector(&this->daily_factor_vec);
  std::vector<unsigned int>::~vector(&this->medal_id);
};

// Line 50: range 00000000133424F6-0000000013342575
void __cdecl data::FlightDailyInfo::FlightDailyInfo(data::FlightDailyInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightDailyInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightDailyInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher, v1);
  }
  this->watcher = 0;
};

// Line 50: range 000000001340F9EE-000000001340FAA8
void __cdecl data::FlightDailyInfo::FlightDailyInfo(data::FlightDailyInfo *const this, const data::FlightDailyInfo *a2)
{
  int (**v2)(...); // rdx
  uint32_t watcher; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::FlightDailyInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FlightDailyInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->watcher >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->watcher >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->watcher);
  }
  watcher = a2->watcher;
  v4 = *(_BYTE *)(((unsigned __int64)&this->watcher >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->watcher, a2);
  }
  this->watcher = watcher;
};

// Line 53: range 00000000132A8098-00000000132A80C2
void __cdecl data::FlightDailyInfo::~FlightDailyInfo(data::FlightDailyInfo *const this)
{
  data::FlightDailyInfo::~FlightDailyInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 53: range 00000000132A8056-00000000132A8097
void __cdecl data::FlightDailyInfo::~FlightDailyInfo(data::FlightDailyInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightDailyInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightDailyInfo = v2;
};

// Line 62: range 0000000012EC24F2-0000000012EC2581
void __cdecl data::FlightActivityMedalExcelConfig::FlightActivityMedalExcelConfig(
        data::FlightActivityMedalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightActivityMedalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightActivityMedalExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::FlightDailyInfo>::vector(&this->daily_info);
};

// Line 62: range 00000000133AED56-00000000133AEE2B
void __cdecl data::FlightActivityMedalExcelConfig::FlightActivityMedalExcelConfig(
        data::FlightActivityMedalExcelConfig *const this,
        const data::FlightActivityMedalExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::FlightActivityMedalExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FlightActivityMedalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FlightActivityMedalExcelConfig = v2;
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
  std::vector<data::FlightDailyInfo>::vector(&this->daily_info, &v5->daily_info);
};

// Line 65: range 000000001342634A-000000001342639B
void __cdecl data::FlightActivityMedalExcelConfig::~FlightActivityMedalExcelConfig(
        data::FlightActivityMedalExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightActivityMedalExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightActivityMedalExcelConfig = v2;
  std::vector<data::FlightDailyInfo>::~vector(&this->daily_info);
};

// Line 65: range 000000001342639C-00000000134263C6
void __cdecl data::FlightActivityMedalExcelConfig::~FlightActivityMedalExcelConfig(
        data::FlightActivityMedalExcelConfig *const this)
{
  data::FlightActivityMedalExcelConfig::~FlightActivityMedalExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 77: range 00000000133AEF6C-00000000133AF026
void __cdecl data::FlightActivityDayExcelConfig::FlightActivityDayExcelConfig(
        data::FlightActivityDayExcelConfig *const this,
        const data::FlightActivityDayExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::FlightActivityDayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FlightActivityDayExcelConfig = v2;
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
};

// Line 80: range 00000000134262DC-000000001342631D
void __cdecl data::FlightActivityDayExcelConfig::~FlightActivityDayExcelConfig(
        data::FlightActivityDayExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FlightActivityDayExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FlightActivityDayExcelConfig = v2;
};

// Line 80: range 000000001342631E-0000000013426348
void __cdecl data::FlightActivityDayExcelConfig::~FlightActivityDayExcelConfig(
        data::FlightActivityDayExcelConfig *const this)
{
  data::FlightActivityDayExcelConfig::~FlightActivityDayExcelConfig(this);
  operator delete(this, 0x10uLL);
};
