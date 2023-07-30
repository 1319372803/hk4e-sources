// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/feature_switch_mgr.h

// Line 28: range 000000000CF27F0E-000000000CF27F4F
void __cdecl BaseSwitch::~BaseSwitch(BaseSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
};

// Line 28: range 000000000CF27F50-000000000CF27F7A
void __cdecl BaseSwitch::~BaseSwitch(BaseSwitch *const this)
{
  BaseSwitch::~BaseSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 000000000CEC4FBC-000000000CEC4FCE
int32_t __cdecl BaseSwitch::parseFromJsonStr(BaseSwitch *const this, const std::string *str)
{
  return 0;
};

// Line 31: range 000000000CEC4FD0-000000000CEC4FE2
bool __cdecl BaseSwitch::operator==(const BaseSwitch *const this, const BaseSwitch *rhs)
{
  return 1;
};

// Line 32: range 000000000CEC4FE4-000000000CEC4FF5
bool __cdecl BaseSwitch::isSwitchFeatureClosed(const BaseSwitch *const this, uint32_t feature_id)
{
  return 0;
};

// Line 33: range 000000000CEC4FF6-000000000CEC500A
bool __cdecl BaseSwitch::isSwitchFeatureClosed(const BaseSwitch *const this, uint32_t feature_id, uint32_t feature_id2)
{
  return 0;
};

// Line 38: range 000000000CEC4F3A-000000000CEC4FBB
void __cdecl BaseSwitch::BaseSwitch(BaseSwitch *const this, uint32_t type)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->switch_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->switch_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->switch_type);
  }
  this->switch_type = type;
};

// Line 44: range 000000000C88C42A-000000000C88C444
void __cdecl FeatureSwitchMgr::FeatureSwitchMgr(FeatureSwitchMgr *const this)
{
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::map(&this->switch_map);
};

// Line 44: range 000000000C84DAD2-000000000C84DAEC
void __cdecl FeatureSwitchMgr::~FeatureSwitchMgr(FeatureSwitchMgr *const this)
{
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::~map(&this->switch_map);
};
