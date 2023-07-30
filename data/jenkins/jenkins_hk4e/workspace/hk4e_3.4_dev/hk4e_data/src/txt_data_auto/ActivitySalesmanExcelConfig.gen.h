// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySalesmanExcelConfig.gen.h

// Line 92: range 0000000013BD1840-0000000013BD1999
void __cdecl data::SalesmanSpecialReward::SalesmanSpecialReward(data::SalesmanSpecialReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SalesmanSpecialReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalesmanSpecialReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_type, v1);
  }
  this->reward_type = SPECIAL_REWARD;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->obtain_method >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtain_method >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obtain_method, v3);
  }
  this->obtain_method = METHOD_DAY_PROBABILITY;
  std::string::basic_string(&this->obtain_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v3);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->preview_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->preview_id = 0;
};

// Line 92: range 00000000141838A6-0000000014183AFA
void __cdecl data::SalesmanSpecialReward::SalesmanSpecialReward(
        data::SalesmanSpecialReward *const this,
        const data::SalesmanSpecialReward *a2)
{
  int (**v2)(...); // rdx
  data::SalesmanSpecialRewardType reward_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::SalesmanSpecialRewardObtainMethod obtain_method; // ecx
  char v7; // dl
  std::string *p_obtain_param; // rsi
  uint32_t id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t preview_id; // ecx
  char v13; // dl
  const data::SalesmanSpecialReward *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SalesmanSpecialReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SalesmanSpecialReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reward_type);
  }
  reward_type = a2->reward_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->reward_type, a2);
  }
  this->reward_type = reward_type;
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->obtain_method >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->obtain_method >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->obtain_method);
  }
  obtain_method = v14->obtain_method;
  v7 = *(_BYTE *)(((unsigned __int64)&this->obtain_method >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->obtain_method, v5);
  }
  this->obtain_method = obtain_method;
  p_obtain_param = &v14->obtain_param;
  std::string::basic_string(&this->obtain_param, &v14->obtain_param);
  if ( *(_BYTE *)(((unsigned __int64)&v14->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->id);
  }
  id = v14->id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_obtain_param) = v10 != 0;
    __asan_report_store4(&this->id, p_obtain_param);
  }
  this->id = id;
  v11 = (((_BYTE)v14 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->preview_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->preview_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->preview_id);
  }
  preview_id = v14->preview_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->preview_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->preview_id, v11);
  }
  this->preview_id = preview_id;
};

// Line 95: range 00000000142A4CBA-00000000142A4D0B
void __cdecl data::SalesmanSpecialReward::~SalesmanSpecialReward(data::SalesmanSpecialReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SalesmanSpecialReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalesmanSpecialReward = v2;
  std::string::~string(&this->obtain_param);
};

// Line 95: range 00000000142A4D0C-00000000142A4D36
void __cdecl data::SalesmanSpecialReward::~SalesmanSpecialReward(data::SalesmanSpecialReward *const this)
{
  data::SalesmanSpecialReward::~SalesmanSpecialReward(this);
  operator delete(this, 0x38uLL);
};

// Line 108: range 0000000013BD199A-0000000013BD1A69
void __cdecl data::ActivitySalesmanExcelConfig::ActivitySalesmanExcelConfig(
        data::ActivitySalesmanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySalesmanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySalesmanExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->daily_config_id_list);
  std::vector<unsigned int>::vector(&this->normal_reward_id_list);
  std::vector<unsigned int>::vector(&this->special_reward_id_list);
  std::vector<float>::vector(&this->special_prob_list);
  data::SalesmanSpecialReward::SalesmanSpecialReward(&this->special_reward);
};

// Line 108: range 0000000014183AFC-0000000014183CA3
void __cdecl data::ActivitySalesmanExcelConfig::ActivitySalesmanExcelConfig(
        data::ActivitySalesmanExcelConfig *const this,
        const data::ActivitySalesmanExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  const data::ActivitySalesmanExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySalesmanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySalesmanExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->daily_config_id_list, &v5->daily_config_id_list);
  std::vector<unsigned int>::vector(&this->normal_reward_id_list, &v5->normal_reward_id_list);
  std::vector<unsigned int>::vector(&this->special_reward_id_list, &v5->special_reward_id_list);
  std::vector<float>::vector(&this->special_prob_list, &v5->special_prob_list);
  data::SalesmanSpecialReward::SalesmanSpecialReward(&this->special_reward, &v5->special_reward);
};

// Line 111: range 00000000142A4BFC-00000000142A4C8D
void __cdecl data::ActivitySalesmanExcelConfig::~ActivitySalesmanExcelConfig(
        data::ActivitySalesmanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySalesmanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySalesmanExcelConfig = v2;
  data::SalesmanSpecialReward::~SalesmanSpecialReward(&this->special_reward);
  std::vector<float>::~vector(&this->special_prob_list);
  std::vector<unsigned int>::~vector(&this->special_reward_id_list);
  std::vector<unsigned int>::~vector(&this->normal_reward_id_list);
  std::vector<unsigned int>::~vector(&this->daily_config_id_list);
};

// Line 111: range 00000000142A4C8E-00000000142A4CB8
void __cdecl data::ActivitySalesmanExcelConfig::~ActivitySalesmanExcelConfig(
        data::ActivitySalesmanExcelConfig *const this)
{
  data::ActivitySalesmanExcelConfig::~ActivitySalesmanExcelConfig(this);
  operator delete(this, 0xA8uLL);
};

// Line 127: range 0000000013BD1A6A-0000000013BD1B37
void __cdecl data::ActivitySalesmanDailyExcelConfig::ActivitySalesmanDailyExcelConfig(
        data::ActivitySalesmanDailyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySalesmanDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySalesmanDailyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_config_id, v1);
  }
  this->daily_config_id = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_talk_id, v1);
  }
  this->daily_talk_id = 0;
};

// Line 127: range 0000000014183DE4-0000000014183F2E
void __cdecl data::ActivitySalesmanDailyExcelConfig::ActivitySalesmanDailyExcelConfig(
        data::ActivitySalesmanDailyExcelConfig *const this,
        const data::ActivitySalesmanDailyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t daily_config_id; // ecx
  char v4; // al
  std::vector<data::IdCountConfig> *p_cost_item_list; // rsi
  uint32_t daily_talk_id; // ecx
  char v7; // al
  const data::ActivitySalesmanDailyExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySalesmanDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySalesmanDailyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->daily_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->daily_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->daily_config_id);
  }
  daily_config_id = a2->daily_config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->daily_config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->daily_config_id, a2);
  }
  this->daily_config_id = daily_config_id;
  p_cost_item_list = &v8->cost_item_list;
  std::vector<data::IdCountConfig>::vector(&this->cost_item_list, &v8->cost_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->daily_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->daily_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->daily_talk_id);
  }
  daily_talk_id = v8->daily_talk_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->daily_talk_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_cost_item_list) = v7 != 0;
    __asan_report_store4(&this->daily_talk_id, p_cost_item_list);
  }
  this->daily_talk_id = daily_talk_id;
};

// Line 130: range 00000000142A4B7E-00000000142A4BCF
void __cdecl data::ActivitySalesmanDailyExcelConfig::~ActivitySalesmanDailyExcelConfig(
        data::ActivitySalesmanDailyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySalesmanDailyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySalesmanDailyExcelConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->cost_item_list);
};

// Line 130: range 00000000142A4BD0-00000000142A4BFA
void __cdecl data::ActivitySalesmanDailyExcelConfig::~ActivitySalesmanDailyExcelConfig(
        data::ActivitySalesmanDailyExcelConfig *const this)
{
  data::ActivitySalesmanDailyExcelConfig::~ActivitySalesmanDailyExcelConfig(this);
  operator delete(this, 0x30uLL);
};
