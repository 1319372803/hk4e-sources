// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_rebate_config_mgr.h

// Line 25: range 000000000CE4688C-000000000CE468F3
void __cdecl data::RebateConfig::RebateConfig(data::RebateConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->account_type = 0;
  std::string::basic_string(&this->account_uid);
  std::vector<data::IdCountConfig>::vector(&this->id_count_config_vec);
};

// Line 25: range 000000000D3C20F6-000000000D3C21A9
void __cdecl data::RebateConfig::RebateConfig(data::RebateConfig *const this, data::RebateConfig *a2)
{
  uint32_t account_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  account_type = a2->account_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->account_type = account_type;
  std::string::basic_string(&this->account_uid, &a2->account_uid);
  std::vector<data::IdCountConfig>::vector(&this->id_count_config_vec, &a2->id_count_config_vec);
};

// Line 25: range 000000000CE468F4-000000000CE46922
void __cdecl data::RebateConfig::~RebateConfig(data::RebateConfig *const this)
{
  std::vector<data::IdCountConfig>::~vector(&this->id_count_config_vec);
  std::string::~string(&this->account_uid);
};
