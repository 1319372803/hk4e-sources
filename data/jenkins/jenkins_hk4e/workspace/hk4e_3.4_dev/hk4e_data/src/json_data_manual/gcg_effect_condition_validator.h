// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_manual/gcg_effect_condition_validator.h

// Line 47: range 000000000CE39F2C-000000000CE39FA0
void __cdecl GCGEffectConditionValidator::~GCGEffectConditionValidator(GCGEffectConditionValidator *const this)
{
  std::map<std::string,std::function<int ()(HK4EDesignConfig const&,data::ConfigGCGSkill const&,std::shared_ptr<data::ConfigGCGEffect>,bool)>>::~map(&this->effect_name_validator_map_);
  std::map<std::string,std::set<data::GCGTriggerType>>::~map(&this->condition_limit_trigger_map_);
  std::map<ConditionLayerType,std::set<std::string>>::~map(&this->layer_info_map_);
  std::map<std::string,ConditionNodeTagType>::~map(&this->condition_next_link_map_);
  std::map<std::string,std::set<ConditionNodeTagType>>::~map(&this->condition_tag_info_map_);
  std::string::~string(&this->cur_skill_name_);
};

// Line 59: range 000000000F777024-000000000F777050
std::string *__cdecl GCGEffectConditionValidator::getCurSkillName[abi:cxx11](
        std::string *retstr,
        const GCGEffectConditionValidator *const this)
{
  std::string::basic_string(retstr, &this->cur_skill_name_);
  return retstr;
};

// Line 62: range 000000000F777052-000000000F77709B
void __cdecl GCGEffectConditionValidator::markErrorCausedByNotRegister(GCGEffectConditionValidator *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_caused_by_not_regiseter_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_caused_by_not_regiseter_, v1, &this->is_caused_by_not_regiseter_);
  this->is_caused_by_not_regiseter_ = 1;
};

// Line 63: range 000000000F77709C-000000000F7770E5
void __cdecl GCGEffectConditionValidator::clearErrorCausedByNotRegister(GCGEffectConditionValidator *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_caused_by_not_regiseter_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_caused_by_not_regiseter_, v1, &this->is_caused_by_not_regiseter_);
  this->is_caused_by_not_regiseter_ = 0;
};

// Line 64: range 000000000F7770E6-000000000F77712E
bool __cdecl GCGEffectConditionValidator::checkHasOccurNotRegisterConditionError(
        const GCGEffectConditionValidator *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_caused_by_not_regiseter_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_caused_by_not_regiseter_, v1, &this->is_caused_by_not_regiseter_);
  return this->is_caused_by_not_regiseter_;
};
