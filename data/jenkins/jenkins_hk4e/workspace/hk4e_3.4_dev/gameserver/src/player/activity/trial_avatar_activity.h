// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/trial_avatar_activity.h

// Line 31: range 0000000018327252-00000000183272B1
void __cdecl TrialAvatarActivity::~TrialAvatarActivity(TrialAvatarActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TrialAvatarActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,std::pair<bool,bool>>::~map(&this->receive_reward_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 31: range 00000000183272B2-00000000183272DC
void __cdecl TrialAvatarActivity::~TrialAvatarActivity(TrialAvatarActivity *const this)
{
  TrialAvatarActivity::~TrialAvatarActivity(this);
  operator delete(this, 0x3D8uLL);
};

// Line 37: range 0000000016D62456-0000000016D624C6
void __cdecl TrialAvatarActivity::TrialAvatarActivity(
        TrialAvatarActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'TrialAvatarActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  std::map<unsigned int,std::pair<bool,bool>>::map(&this->receive_reward_map_);
};

// Line 80: range 000000001384A423-000000001384A42D
data::NewActivityType __cdecl TrialAvatarActivity::getActivityStaticType()
{
  return 4;
};
