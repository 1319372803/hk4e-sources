// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_gameplay_recommendation_config_mgr.h

// Line 24: range 000000000C889E74-000000000C889F11
void __cdecl data::DbGameplayRecommendationConfig::DbGameplayRecommendationConfig(
        data::DbGameplayRecommendationConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = 0;
  proto::GameplayRecommendationConfig::GameplayRecommendationConfig(&this->proto_gameplay_recommendation_config);
};

// Line 24: range 000000000C84D036-000000000C84D054
void __cdecl data::DbGameplayRecommendationConfig::~DbGameplayRecommendationConfig(
        data::DbGameplayRecommendationConfig *const this)
{
  proto::GameplayRecommendationConfig::~GameplayRecommendationConfig(&this->proto_gameplay_recommendation_config);
};

// Line 31: range 000000000C889F12-000000000C889F2C
void __cdecl data::DbGameplayRecommendationConfigMgr::DbGameplayRecommendationConfigMgr(
        data::DbGameplayRecommendationConfigMgr *const this)
{
  data::DbGameplayRecommendationConfig::DbGameplayRecommendationConfig(&this->current_recommendation_config);
};

// Line 31: range 000000000C84D056-000000000C84D070
void __cdecl data::DbGameplayRecommendationConfigMgr::~DbGameplayRecommendationConfigMgr(
        data::DbGameplayRecommendationConfigMgr *const this)
{
  data::DbGameplayRecommendationConfig::~DbGameplayRecommendationConfig(&this->current_recommendation_config);
};
