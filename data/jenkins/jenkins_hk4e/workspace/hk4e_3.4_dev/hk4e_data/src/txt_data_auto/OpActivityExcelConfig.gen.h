// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/OpActivityExcelConfig.gen.h

// Line 88: range 000000001477EA14-000000001477EB75
void __cdecl data::OpActivityScheduleExcelConfig::OpActivityScheduleExcelConfig(
        data::OpActivityScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::OpActivityScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpActivityScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::string::basic_string(&this->begin_time_str);
  std::string::basic_string(&this->end_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time, v1);
  }
  this->begin_time = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time, v3);
  }
  this->end_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->op_activity_id, v3);
  }
  this->op_activity_id = 0;
};

// Line 88: range 0000000014D64188-0000000014D6440E
void __cdecl data::OpActivityScheduleExcelConfig::OpActivityScheduleExcelConfig(
        data::OpActivityScheduleExcelConfig *const this,
        const data::OpActivityScheduleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  std::string *p_end_time_str; // rsi
  uint32_t begin_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t end_time; // ecx
  char v10; // dl
  uint32_t op_activity_id; // ecx
  char v12; // al
  const data::OpActivityScheduleExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OpActivityScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OpActivityScheduleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  std::string::basic_string(&this->begin_time_str, &v13->begin_time_str);
  p_end_time_str = &v13->end_time_str;
  std::string::basic_string(&this->end_time_str, &v13->end_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&v13->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->begin_time);
  }
  begin_time = v13->begin_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_end_time_str) = v7 != 0;
    __asan_report_store4(&this->begin_time, p_end_time_str);
  }
  this->begin_time = begin_time;
  v8 = (((_BYTE)v13 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->end_time);
  }
  end_time = v13->end_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->end_time, v8);
  }
  this->end_time = end_time;
  if ( *(_BYTE *)(((unsigned __int64)&v13->op_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->op_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->op_activity_id);
  }
  op_activity_id = v13->op_activity_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->op_activity_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->op_activity_id, v8);
  }
  this->op_activity_id = op_activity_id;
};

// Line 91: range 0000000014DE8A1E-0000000014DE8A7F
void __cdecl data::OpActivityScheduleExcelConfig::~OpActivityScheduleExcelConfig(
        data::OpActivityScheduleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OpActivityScheduleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpActivityScheduleExcelConfig = v2;
  std::string::~string(&this->end_time_str);
  std::string::~string(&this->begin_time_str);
};

// Line 91: range 0000000014DE8A80-0000000014DE8AAA
void __cdecl data::OpActivityScheduleExcelConfig::~OpActivityScheduleExcelConfig(
        data::OpActivityScheduleExcelConfig *const this)
{
  data::OpActivityScheduleExcelConfig::~OpActivityScheduleExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 107: range 000000001477EB76-000000001477EC89
void __cdecl data::OpActivityExcelConfig::OpActivityExcelConfig(data::OpActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::OpActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->op_activity_id, v1);
  }
  this->op_activity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_type, v3);
  }
  this->bonus_type = TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_value, v3);
  }
  this->bonus_value = 0;
  std::vector<unsigned int>::vector(&this->bonus_list);
};

// Line 107: range 0000000014D64550-0000000014D6471F
void __cdecl data::OpActivityExcelConfig::OpActivityExcelConfig(
        data::OpActivityExcelConfig *const this,
        const data::OpActivityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t op_activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::OpActivityBonusType bonus_type; // ecx
  char v7; // dl
  uint32_t bonus_value; // ecx
  char v9; // al
  const data::OpActivityExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OpActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OpActivityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->op_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->op_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->op_activity_id);
  }
  op_activity_id = a2->op_activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->op_activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->op_activity_id, a2);
  }
  this->op_activity_id = op_activity_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->bonus_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->bonus_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->bonus_type);
  }
  bonus_type = v10->bonus_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->bonus_type, v5);
  }
  this->bonus_type = bonus_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->bonus_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->bonus_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->bonus_value);
  }
  bonus_value = v10->bonus_value;
  v9 = *(_BYTE *)(((unsigned __int64)&this->bonus_value >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->bonus_value, v5);
  }
  this->bonus_value = bonus_value;
  std::vector<unsigned int>::vector(&this->bonus_list, &v10->bonus_list);
};

// Line 110: range 0000000014DE89A0-0000000014DE89F1
void __cdecl data::OpActivityExcelConfig::~OpActivityExcelConfig(data::OpActivityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OpActivityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpActivityExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->bonus_list);
};

// Line 110: range 0000000014DE89F2-0000000014DE8A1C
void __cdecl data::OpActivityExcelConfig::~OpActivityExcelConfig(data::OpActivityExcelConfig *const this)
{
  data::OpActivityExcelConfig::~OpActivityExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 124: range 000000001477EC8A-000000001477EE31
void __cdecl data::OpActivityBonusExcelConfig::OpActivityBonusExcelConfig(data::OpActivityBonusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::OpActivityBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpActivityBonusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_id, v1);
  }
  this->bonus_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->source_type, v3);
  }
  this->source_type = SOURCE_TYPE_NONE;
  std::string::basic_string(&this->source_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_level, v3);
  }
  this->open_level = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_ratio, v4);
  }
  this->bonus_ratio = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->track_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->track_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->track_type, v4);
  }
  this->track_type = TrackNone;
  std::vector<unsigned int>::vector(&this->track_para);
};

// Line 124: range 0000000014D64860-0000000014D64B6B
void __cdecl data::OpActivityBonusExcelConfig::OpActivityBonusExcelConfig(
        data::OpActivityBonusExcelConfig *const this,
        const data::OpActivityBonusExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t bonus_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::OpActivityBonusSourceType source_type; // ecx
  char v7; // dl
  std::string *p_source_param; // rsi
  uint32_t open_level; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t bonus_ratio; // ecx
  char v13; // dl
  data::OpActivityTrackType track_type; // ecx
  char v15; // al
  const data::OpActivityBonusExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OpActivityBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OpActivityBonusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bonus_id);
  }
  bonus_id = a2->bonus_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->bonus_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->bonus_id, a2);
  }
  this->bonus_id = bonus_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->source_type);
  }
  source_type = v16->source_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->source_type, v5);
  }
  this->source_type = source_type;
  p_source_param = &v16->source_param;
  std::string::basic_string(&this->source_param, &v16->source_param);
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->open_level);
  }
  open_level = v16->open_level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_source_param) = v10 != 0;
    __asan_report_store4(&this->open_level, p_source_param);
  }
  this->open_level = open_level;
  v11 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->bonus_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->bonus_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->bonus_ratio);
  }
  bonus_ratio = v16->bonus_ratio;
  v13 = *(_BYTE *)(((unsigned __int64)&this->bonus_ratio >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->bonus_ratio, v11);
  }
  this->bonus_ratio = bonus_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&v16->track_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->track_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->track_type);
  }
  track_type = v16->track_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->track_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->track_type, v11);
  }
  this->track_type = track_type;
  std::vector<unsigned int>::vector(&this->track_para, &v16->track_para);
};

// Line 127: range 0000000014DE8912-0000000014DE8973
void __cdecl data::OpActivityBonusExcelConfig::~OpActivityBonusExcelConfig(
        data::OpActivityBonusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OpActivityBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OpActivityBonusExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->track_para);
  std::string::~string(&this->source_param);
};

// Line 127: range 0000000014DE8974-0000000014DE899E
void __cdecl data::OpActivityBonusExcelConfig::~OpActivityBonusExcelConfig(
        data::OpActivityBonusExcelConfig *const this)
{
  data::OpActivityBonusExcelConfig::~OpActivityBonusExcelConfig(this);
  operator delete(this, 0x58uLL);
};
