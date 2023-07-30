// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/gcg_config_mgr.h

// Line 22: range 000000000D43072C-000000000D430841
void __cdecl GCGConfigMgr::GCGConfigMgr(GCGConfigMgr *const this)
{
  std::enable_shared_from_this<GCGConfigMgr>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_data_version);
  }
  this->client_data_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_data_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_data_version >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_data_version);
  }
  this->server_data_version = 0;
  GCGGameExcelConfigMgr::GCGGameExcelConfigMgr(&this->gcg_game_config_mgr);
  std::unordered_map<std::string,data::ConfigGCGSkill>::unordered_map(&this->config_gcg_card_skill_map_);
  std::unordered_map<std::string,std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>>::unordered_map(&this->skill_declared_value_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_round_limit_);
  }
  this->gcg_round_limit_ = 0;
};

// Line 22: range 000000000D4A2C34-000000000D4A2C82
void __cdecl GCGConfigMgr::~GCGConfigMgr(GCGConfigMgr *const this)
{
  std::unordered_map<std::string,std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>>::~unordered_map(&this->skill_declared_value_map_);
  std::unordered_map<std::string,data::ConfigGCGSkill>::~unordered_map(&this->config_gcg_card_skill_map_);
  GCGGameExcelConfigMgr::~GCGGameExcelConfigMgr(&this->gcg_game_config_mgr);
  std::enable_shared_from_this<GCGConfigMgr>::~enable_shared_from_this(this);
};

// Line 58: range 000000000F776EC2-000000000F776ED3
const GCGGameExcelConfigMgr *__cdecl GCGConfigMgr::getGCGGameExcelConfigMgr(const GCGConfigMgr *const this)
{
  return &this->gcg_game_config_mgr;
};
