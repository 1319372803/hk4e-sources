// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/dynamic_talent.h

// Line 19: range 0000000014E16D18-0000000014E16D75
void __cdecl DynamicTalent::~DynamicTalent(DynamicTalent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DynamicTalent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalent = v2;
  std::string::~string(&this->open_config_);
  BaseTalent::~BaseTalent(this);
};

// Line 4258: range 00000000149F1FA8-00000000149F2043
void __cdecl DynamicTalent::DynamicTalent(DynamicTalent *const this, Avatar *avatar, const std::string *open_config)
{
  int (**v3)(...); // rdx

  BaseTalent::BaseTalent(this, avatar, 0);
  v3 = (int (**)(...))(&`vtable for'DynamicTalent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, avatar);
  this->_vptr_BaseTalent = v3;
  std::string::basic_string(&this->open_config_, open_config);
};
