// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityCoinCollectExcelConfig.gen.h

// Line 17: range 0000000012EB7E76-0000000012EB8115
void __cdecl data::CoinCollectExcelConfig::CoinCollectExcelConfig(data::CoinCollectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CoinCollectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoinCollectExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cutscene_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cutscene_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cutscene_time, v3);
  }
  this->cutscene_time = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->draft_id, v4);
  }
  this->draft_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->groupbundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->groupbundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->groupbundle_id, v5);
  }
  this->groupbundle_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_trans_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_trans_point_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_trans_point_id, v6);
  }
  this->gallery_trans_point_id = 0;
  std::vector<unsigned int>::vector(&this->skill_no_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_balloons_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_balloons_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_balloons_num, v6);
  }
  this->total_balloons_num = 0;
};

// Line 17: range 0000000013396790-0000000013396C4D
void __cdecl data::CoinCollectExcelConfig::CoinCollectExcelConfig(
        data::CoinCollectExcelConfig *const this,
        const data::CoinCollectExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t cutscene_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t draft_id; // ecx
  char v12; // dl
  uint32_t group_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t groupbundle_id; // ecx
  char v17; // dl
  uint32_t gallery_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t gallery_trans_point_id; // ecx
  char v22; // dl
  std::vector<unsigned int> *p_skill_no_list; // rsi
  uint32_t total_balloons_num; // ecx
  char v25; // al
  const data::CoinCollectExcelConfig *v26; // [rsp+0h] [rbp-10h]

  v26 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoinCollectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoinCollectExcelConfig = v2;
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
  v5 = (((_BYTE)v26 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->day_index);
  }
  day_index = v26->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v26->cutscene_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->cutscene_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->cutscene_time);
  }
  cutscene_time = v26->cutscene_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cutscene_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->cutscene_time, v5);
  }
  this->cutscene_time = cutscene_time;
  v10 = (((_BYTE)v26 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->draft_id);
  }
  draft_id = v26->draft_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->draft_id, v10);
  }
  this->draft_id = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->group_id);
  }
  group_id = v26->group_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->group_id, v10);
  }
  this->group_id = group_id;
  v15 = (((_BYTE)v26 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->groupbundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->groupbundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->groupbundle_id);
  }
  groupbundle_id = v26->groupbundle_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->groupbundle_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->groupbundle_id, v15);
  }
  this->groupbundle_id = groupbundle_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->gallery_id);
  }
  gallery_id = v26->gallery_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->gallery_id, v15);
  }
  this->gallery_id = gallery_id;
  v20 = (((_BYTE)v26 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->gallery_trans_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->gallery_trans_point_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->gallery_trans_point_id);
  }
  gallery_trans_point_id = v26->gallery_trans_point_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->gallery_trans_point_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->gallery_trans_point_id, v20);
  }
  this->gallery_trans_point_id = gallery_trans_point_id;
  p_skill_no_list = &v26->skill_no_list;
  std::vector<unsigned int>::vector(&this->skill_no_list, &v26->skill_no_list);
  if ( *(_BYTE *)(((unsigned __int64)&v26->total_balloons_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->total_balloons_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->total_balloons_num);
  }
  total_balloons_num = v26->total_balloons_num;
  v25 = *(_BYTE *)(((unsigned __int64)&this->total_balloons_num >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_skill_no_list) = v25 != 0;
    __asan_report_store4(&this->total_balloons_num, p_skill_no_list);
  }
  this->total_balloons_num = total_balloons_num;
};

// Line 20: range 0000000013420F6C-0000000013420FBD
void __cdecl data::CoinCollectExcelConfig::~CoinCollectExcelConfig(data::CoinCollectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoinCollectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoinCollectExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->skill_no_list);
};

// Line 20: range 0000000013420FBE-0000000013420FE8
void __cdecl data::CoinCollectExcelConfig::~CoinCollectExcelConfig(data::CoinCollectExcelConfig *const this)
{
  data::CoinCollectExcelConfig::~CoinCollectExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 40: range 0000000012EB8116-0000000012EB8220
void __cdecl data::CoinCollectSkillExcelConfig::CoinCollectSkillExcelConfig(
        data::CoinCollectSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoinCollectSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoinCollectSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_name);
  if ( *(char *)(((unsigned __int64)&this->collect_range_bigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->collect_range_bigger, v1, &this->collect_range_bigger);
  this->collect_range_bigger = 0;
  v3 = ((_BYTE)this + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->recharge_speed_faster >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->recharge_speed_faster >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->recharge_speed_faster, v3, v4);
  this->recharge_speed_faster = 0;
};

// Line 40: range 0000000013396D8E-0000000013396F59
void __cdecl data::CoinCollectSkillExcelConfig::CoinCollectSkillExcelConfig(
        data::CoinCollectSkillExcelConfig *const this,
        const data::CoinCollectSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_ability_name; // rsi
  bool collect_range_bigger; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool recharge_speed_faster; // cl
  char v11; // dl
  __int64 v12; // rdx
  const data::CoinCollectSkillExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoinCollectSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoinCollectSkillExcelConfig = v2;
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
  p_ability_name = &v13->ability_name;
  std::string::basic_string(&this->ability_name, &v13->ability_name);
  if ( *(char *)(((unsigned __int64)&v13->collect_range_bigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->collect_range_bigger, p_ability_name, &v13->collect_range_bigger);
  collect_range_bigger = v13->collect_range_bigger;
  v7 = *(_BYTE *)(((unsigned __int64)&this->collect_range_bigger >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_ability_name) = v7 != 0;
    __asan_report_store1(&this->collect_range_bigger, p_ability_name, &this->collect_range_bigger);
  }
  this->collect_range_bigger = collect_range_bigger;
  v8 = ((_BYTE)v13 + 49) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v13->recharge_speed_faster >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v13->recharge_speed_faster >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v13->recharge_speed_faster, v8, v9);
  recharge_speed_faster = v13->recharge_speed_faster;
  v11 = *(_BYTE *)(((unsigned __int64)&this->recharge_speed_faster >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->recharge_speed_faster, v8, v12);
  this->recharge_speed_faster = recharge_speed_faster;
};

// Line 43: range 0000000013420EEE-0000000013420F3F
void __cdecl data::CoinCollectSkillExcelConfig::~CoinCollectSkillExcelConfig(
        data::CoinCollectSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoinCollectSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoinCollectSkillExcelConfig = v2;
  std::string::~string(&this->ability_name);
};

// Line 43: range 0000000013420F40-0000000013420F6A
void __cdecl data::CoinCollectSkillExcelConfig::~CoinCollectSkillExcelConfig(
        data::CoinCollectSkillExcelConfig *const this)
{
  data::CoinCollectSkillExcelConfig::~CoinCollectSkillExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 57: range 000000001339709A-0000000013397348
void __cdecl data::CoinCollectOverallExcelConfig::CoinCollectOverallExcelConfig(
        data::CoinCollectOverallExcelConfig *const this,
        const data::CoinCollectOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_days; // ecx
  char v7; // dl
  uint32_t prepare_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t idle_after_prepare_time; // ecx
  char v12; // dl
  uint32_t gallery_extra_time; // ecx
  char v14; // al
  const data::CoinCollectOverallExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CoinCollectOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CoinCollectOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->activity_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->activity_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->activity_days);
  }
  activity_days = v15->activity_days;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_days >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_days, v5);
  }
  this->activity_days = activity_days;
  if ( *(_BYTE *)(((unsigned __int64)&v15->prepare_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->prepare_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->prepare_time);
  }
  prepare_time = v15->prepare_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->prepare_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->prepare_time, v5);
  }
  this->prepare_time = prepare_time;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->idle_after_prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->idle_after_prepare_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->idle_after_prepare_time);
  }
  idle_after_prepare_time = v15->idle_after_prepare_time;
  v12 = *(_BYTE *)(((unsigned __int64)&this->idle_after_prepare_time >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->idle_after_prepare_time, v10);
  }
  this->idle_after_prepare_time = idle_after_prepare_time;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gallery_extra_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->gallery_extra_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->gallery_extra_time);
  }
  gallery_extra_time = v15->gallery_extra_time;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gallery_extra_time >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->gallery_extra_time, v10);
  }
  this->gallery_extra_time = gallery_extra_time;
};

// Line 60: range 0000000013420E80-0000000013420EC1
void __cdecl data::CoinCollectOverallExcelConfig::~CoinCollectOverallExcelConfig(
        data::CoinCollectOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CoinCollectOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CoinCollectOverallExcelConfig = v2;
};

// Line 60: range 0000000013420EC2-0000000013420EEC
void __cdecl data::CoinCollectOverallExcelConfig::~CoinCollectOverallExcelConfig(
        data::CoinCollectOverallExcelConfig *const this)
{
  data::CoinCollectOverallExcelConfig::~CoinCollectOverallExcelConfig(this);
  operator delete(this, 0x20uLL);
};
