// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WatcherExcelConfig.h

// Line 42: range 000000000F00F8C6-000000000F00F97F
bool __cdecl std::equal_to<data::WatcherPredicateConfig>::operator()(
        const std::equal_to<data::WatcherPredicateConfig> *const this,
        const WatcherPredicate *lhs,
        const WatcherPredicate *rhs)
{
  data::WatcherPredicateType predicate_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->predicate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->predicate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->predicate_type);
  }
  predicate_type = lhs->predicate_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->predicate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->predicate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->predicate_type);
  }
  return predicate_type == rhs->predicate_type
      && std::operator==<unsigned int,std::allocator<unsigned int>>(&lhs->param_list, &rhs->param_list);
};

// Line 49: range 000000000F00F67E-000000000F00F8C4
std::size_t __cdecl std::hash<data::WatcherPredicateConfig>::operator()(
        const std::hash<data::WatcherPredicateConfig> *const this,
        const WatcherPredicate *predicate)
{
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  unsigned int *v6; // rdx
  std::size_t result; // rax
  __int64 hash; // [rsp+20h] [rbp-90h]
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v3;
  }
  v2->_M_current = (const unsigned int *)1102416563;
  v2[1]._M_current = (const unsigned int *)"2 32 8 14 __for_begin:31 64 8 12 __for_end:31";
  v2[2]._M_current = (const unsigned int *)std::hash<data::WatcherPredicateConfig>::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&predicate->predicate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&predicate->predicate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&predicate->predicate_type);
  }
  hash = (unsigned int)predicate->predicate_type;
  __for_range = &predicate->param_list;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], predicate);
  v2[4]._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], predicate);
  v2[8]._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(v2 + 4, v2 + 8) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(v2 + 4);
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    hash = 1000000007 * hash + *v6;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(v2 + 4);
  }
  result = hash;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const unsigned int *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 54: range 000000000F05E93C-000000000F05E9AF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AbilityStatePassTimeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AbilityStatePassTimeWatcherParam> *const this,
        data::WatcherConfig *config,
        AbilityStatePassTimeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064478-000000000F0644EB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AccumulateDailyLoginWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AccumulateDailyLoginWatcherParam> *const this,
        data::WatcherConfig *config,
        AccumulateDailyLoginWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0617F4-000000000F061867
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllCampWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllCampWatcherParam> *const this,
        data::WatcherConfig *config,
        ActivityChannellerSlabFinishAllCampWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0618DC-000000000F06194F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam> *const this,
        data::WatcherConfig *config,
        ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0619C4-000000000F061A37
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05C980-000000000F05C9F3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityExpeditionFinishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityExpeditionFinishWatcherParam> *const this,
        data::WatcherConfig *config,
        ActivityExpeditionFinishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E41A-000000000CE6E48D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityScoreExceedValueWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityScoreExceedValueWatcherParam> *const this,
        data::WatcherConfig *config,
        ActivityScoreExceedValueWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062CEC-000000000F062D5F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyReliquaryUpgradeNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyReliquaryUpgradeNumWatcherParam> *const this,
        data::WatcherConfig *config,
        AnyReliquaryUpgradeNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05C4C2-000000000F05C535
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyRequaryUpgradeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyRequaryUpgradeWatcherParam> *const this,
        data::WatcherConfig *config,
        AnyRequaryUpgradeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062C04-000000000F062C77
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyWeaponUpgradeNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyWeaponUpgradeNumWatcherParam> *const this,
        data::WatcherConfig *config,
        AnyWeaponUpgradeNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BFBC-000000000F05C02F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarExpeditionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarExpeditionWatcherParam> *const this,
        data::WatcherConfig *config,
        AvatarExpeditionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BD04-000000000F05BD77
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteExcludingPlayerWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteExcludingPlayerWatcherParam> *const this,
        data::WatcherConfig *config,
        AvatarPromoteExcludingPlayerWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05AD4C-000000000F05ADBF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteWatcherParam> *const this,
        data::WatcherConfig *config,
        AvatarPromoteWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05AC64-000000000F05ACD7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarUpgradeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarUpgradeWatcherParam> *const this,
        data::WatcherConfig *config,
        AvatarUpgradeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70962-000000000CE709D5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderChallengeModuleLevelScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderChallengeModuleLevelScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        BartenderChallengeModuleLevelScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70A4A-000000000CE70ABD
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderUnlockFormulaWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderUnlockFormulaWatcherParam> *const this,
        data::WatcherConfig *config,
        BartenderUnlockFormulaWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6B8C8-000000000CE6B93B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingExchangePicNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingExchangePicNumWatcherParam> *const this,
        data::WatcherConfig *config,
        BlessingExchangePicNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6B9B0-000000000CE6BA23
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingRedeemRewardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingRedeemRewardWatcherParam> *const this,
        data::WatcherConfig *config,
        BlessingRedeemRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E8F4-000000000CE6E967
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        BounceConjuringScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE744BC-000000000CE7452F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelBallElemReactionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelBallElemReactionWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerDungeonLevelBallElemReactionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE740CA-000000000CE7413D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelComboWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelComboWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerDungeonLevelComboWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73FE2-000000000CE74055
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerDungeonLevelScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73EFA-000000000CE73F6D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishDungeonLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishDungeonLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerFinishDungeonLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7429A-000000000CE7430D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelBallElemReactionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelBallElemReactionWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerWorldLevelBallElemReactionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73E12-000000000CE73E85
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelComboWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelComboWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerWorldLevelComboWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE741B2-000000000CE74225
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelElemReactionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelElemReactionWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerWorldLevelElemReactionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73D2A-000000000CE73D9D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerWorldLevelScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E5EA-000000000CE6E65D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuoyantCombatReachNewScoreLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuoyantCombatReachNewScoreLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        BuoyantCombatReachNewScoreLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05CFEA-000000000F05D05D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuyShopGoodsAndWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuyShopGoodsAndWatcherParam> *const this,
        data::WatcherConfig *config,
        BuyShopGoodsAndWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73876-000000000CE738E9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CharAmusementFinishStageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CharAmusementFinishStageWatcherParam> *const this,
        data::WatcherConfig *config,
        CharAmusementFinishStageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6EAC4-000000000CE6EB37
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessCostBuildingPointsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessCostBuildingPointsWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessCostBuildingPointsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6EBAC-000000000CE6EC1F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonAddScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonAddScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessDungeonAddScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6EF4C-000000000CE6EFBF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountGreaterThanWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountGreaterThanWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessDungeonCardCountGreaterThanWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6EE64-000000000CE6EED7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountLessOrEqualWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountLessOrEqualWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessDungeonCardCountLessOrEqualWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6EC94-000000000CE6ED07
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonEscapedMonstersWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonEscapedMonstersWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessDungeonEscapedMonstersWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6ED7C-000000000CE6EDEF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonTowerCountWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonTowerCountWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessDungeonTowerCountWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E9DC-000000000CE6EA4F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessKillMonstersWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessKillMonstersWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessKillMonstersWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F034-000000000CE6F0A7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        ChessLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F059F8C-000000000F059FFF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityLevelUpWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityLevelUpWatcherParam> *const this,
        data::WatcherConfig *config,
        CityLevelUpWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06028C-000000000F0602FF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationFinishRequestWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationFinishRequestWatcherParam> *const this,
        data::WatcherConfig *config,
        CityReputationFinishRequestWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0601A4-000000000F060217
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        CityReputationLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FEEC-000000000F05FF5F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ClimbWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ClimbWatcherParam> *const this,
        data::WatcherConfig *config,
        ClimbWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7395E-000000000CE739D1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CoinCollectResultReachWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CoinCollectResultReachWatcherParam> *const this,
        data::WatcherConfig *config,
        CoinCollectResultReachWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F5B0-000000000F05F623
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CollectSetOfReadingsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CollectSetOfReadingsWatcherParam> *const this,
        data::WatcherConfig *config,
        CollectSetOfReadingsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0593D8-000000000F05944B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombatMulticondConfigCommonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombatMulticondConfigCommonWatcherParam> *const this,
        data::WatcherConfig *config,
        CombatMulticondConfigCommonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06220C-000000000F06227F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombineItemCountWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombineItemCountWatcherParam> *const this,
        data::WatcherConfig *config,
        CombineItemCountWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064DAC-000000000F064E1F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CreateCustomDungeonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CreateCustomDungeonWatcherParam> *const this,
        data::WatcherConfig *config,
        CreateCustomDungeonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6B4E8-000000000CE6B55B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxBallWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxBallWatcherParam> *const this,
        data::WatcherConfig *config,
        CrucibleMaxBallWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6B5D0-000000000CE6B643
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        CrucibleMaxScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71416-000000000CE71489
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkLevelScoreReachWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkLevelScoreReachWatcherParam> *const this,
        data::WatcherConfig *config,
        CrystalLinkLevelScoreReachWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE714FE-000000000CE71571
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkTotalMaxScoreReachWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkTotalMaxScoreReachWatcherParam> *const this,
        data::WatcherConfig *config,
        CrystalLinkTotalMaxScoreReachWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0600BC-000000000F06012F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarAbilityStateWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarAbilityStateWatcherParam> *const this,
        data::WatcherConfig *config,
        CurAvatarAbilityStateWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FFD4-000000000F060047
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarHurtWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarHurtWatcherParam> *const this,
        data::WatcherConfig *config,
        CurAvatarHurtWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06514C-000000000F0651BF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CustomDungeonOfficialCoinWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CustomDungeonOfficialCoinWatcherParam> *const this,
        data::WatcherConfig *config,
        CustomDungeonOfficialCoinWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05DD38-000000000F05DDAB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskVarEqualWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskVarEqualWatcherParam> *const this,
        data::WatcherConfig *config,
        DailyTaskVarEqualWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BDEC-000000000F05BE5F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskWatcherParam> *const this,
        data::WatcherConfig *config,
        DailyTaskWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FE04-000000000F05FE77
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DashWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DashWatcherParam> *const this,
        data::WatcherConfig *config,
        DashWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05EC7C-000000000F05ECEF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliverItemToSalesmanWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliverItemToSalesmanWatcherParam> *const this,
        data::WatcherConfig *config,
        DeliverItemToSalesmanWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C97C-000000000CE6C9EF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliveryFinishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliveryFinishWatcherParam> *const this,
        data::WatcherConfig *config,
        DeliveryFinishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05CD20-000000000F05CD93
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCombineWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCombineWatcherParam> *const this,
        data::WatcherConfig *config,
        DoCombineWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05CC38-000000000F05CCAB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCompoundWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCompoundWatcherParam> *const this,
        data::WatcherConfig *config,
        DoCompoundWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05CA68-000000000F05CADB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCookWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCookWatcherParam> *const this,
        data::WatcherConfig *config,
        DoCookWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05CB50-000000000F05CBC3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoForgeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoForgeWatcherParam> *const this,
        data::WatcherConfig *config,
        DoForgeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FC34-000000000F05FCA7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneDungeonWithSameElementAvatarsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneDungeonWithSameElementAvatarsWatcherParam> *const this,
        data::WatcherConfig *config,
        DoneDungeonWithSameElementAvatarsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FA64-000000000F05FAD7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerGadgetUnhurtWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerGadgetUnhurtWatcherParam> *const this,
        data::WatcherConfig *config,
        DoneTowerGadgetUnhurtWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F97C-000000000F05F9EF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerStarsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerStarsWatcherParam> *const this,
        data::WatcherConfig *config,
        DoneTowerStarsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FB4C-000000000F05FBBF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerUnhurtWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerUnhurtWatcherParam> *const this,
        data::WatcherConfig *config,
        DoneTowerUnhurtWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7468C-000000000CE746FF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DuelHeartFinishLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DuelHeartFinishLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        DuelHeartFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05974E-000000000F0597C1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DungeonEntryToBeExploredWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DungeonEntryToBeExploredWatcherParam> *const this,
        data::WatcherConfig *config,
        DungeonEntryToBeExploredWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6B30A-000000000CE6B37D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        EffigyChallengeScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7378E-000000000CE73801
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeV2FinishRoomWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeV2FinishRoomWatcherParam> *const this,
        data::WatcherConfig *config,
        EffigyChallengeV2FinishRoomWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE745A4-000000000CE74617
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElectroherculesBattleFinishLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElectroherculesBattleFinishLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        ElectroherculesBattleFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F116-000000000F05F189
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementTypeChangeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementTypeChangeWatcherParam> *const this,
        data::WatcherConfig *config,
        ElementTypeChangeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F059E32-000000000F059EA5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterClimateAreaWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterClimateAreaWatcherParam> *const this,
        data::WatcherConfig *config,
        EnterClimateAreaWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06665A-000000000F0666CD
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterSceneNotDungeonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterSceneNotDungeonWatcherParam> *const this,
        data::WatcherConfig *config,
        EnterSceneNotDungeonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06367E-000000000F0636F1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterVehicleWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterVehicleWatcherParam> *const this,
        data::WatcherConfig *config,
        EnterVehicleWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062DD4-000000000F062E47
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionAccumulableValueWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionAccumulableValueWatcherParam> *const this,
        data::WatcherConfig *config,
        ExhibitionAccumulableValueWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062EBC-000000000F062F2F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionReplaceableValueSettleNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionReplaceableValueSettleNumWatcherParam> *const this,
        data::WatcherConfig *config,
        ExhibitionReplaceableValueSettleNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BC1C-000000000F05BC8F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FetterMaxLevelAvatarNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FetterMaxLevelAvatarNumWatcherParam> *const this,
        data::WatcherConfig *config,
        FetterMaxLevelAvatarNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6CDC0-000000000CE6CE33
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FindHilichurlFinishLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FindHilichurlFinishLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        FindHilichurlFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E068-000000000CE6E0DB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishAllArenaChallengeWatcherInScheduleWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishAllArenaChallengeWatcherInScheduleWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishAllArenaChallengeWatcherInScheduleWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063B06-000000000F063B79
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeInDurationWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeInDurationWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishChallengeInDurationWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063CAA-000000000F063D1D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeLeftTimeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeLeftTimeWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishChallengeLeftTimeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065064-000000000F0650D7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishCustomDungeonOfficialWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishCustomDungeonOfficialWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishCustomDungeonOfficialWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06170C-000000000F06177F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishDungeonAndChallengeRemainTimeGreaterWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishDungeonAndChallengeRemainTimeGreaterWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishDungeonAndChallengeRemainTimeGreaterWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05E11C-000000000F05E18F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestAndWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestAndWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishParentQuestAndWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05E204-000000000F05E277
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestOrWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestOrWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishParentQuestOrWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71D26-000000000CE71D99
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageRoundWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageRoundWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishRogueDiaryStageRoundWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71C3E-000000000CE71CB1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishRogueDiaryStageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0609F0-000000000F060A63
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomClimateMeterWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomClimateMeterWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishSpecifiedTypeBlossomClimateMeterWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06045C-000000000F0604CF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishSpecifiedTypeBlossomWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05C0A4-000000000F05C117
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishTowerLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishTowerLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        FinishTowerLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE704BA-000000000CE7052D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FireworksChallengeReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FireworksChallengeReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        FireworksChallengeReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064818-000000000F06488B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingEmptyPoolWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingEmptyPoolWatcherParam> *const this,
        data::WatcherConfig *config,
        FishingEmptyPoolWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064730-000000000F0647A3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingFailNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingFailNumWatcherParam> *const this,
        data::WatcherConfig *config,
        FishingFailNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0649E8-000000000F064A5B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingKeepBonusWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingKeepBonusWatcherParam> *const this,
        data::WatcherConfig *config,
        FishingKeepBonusWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064900-000000000F064973
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingShockFishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingShockFishWatcherParam> *const this,
        data::WatcherConfig *config,
        FishingShockFishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064648-000000000F0646BB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingSuccNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingSuccNumWatcherParam> *const this,
        data::WatcherConfig *config,
        FishingSuccNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6DBC0-000000000CE6DC33
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishInLimitTimeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishInLimitTimeWatcherParam> *const this,
        data::WatcherConfig *config,
        FleurFairDungeonFinishInLimitTimeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6DCA8-000000000CE6DD1B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishKeepEnergyWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishKeepEnergyWatcherParam> *const this,
        data::WatcherConfig *config,
        FleurFairDungeonFinishKeepEnergyWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6DE98-000000000CE6DF0B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishWithBuffNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishWithBuffNumWatcherParam> *const this,
        data::WatcherConfig *config,
        FleurFairDungeonFinishWithBuffNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6DF80-000000000CE6DFF3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonMissionFinishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonMissionFinishWatcherParam> *const this,
        data::WatcherConfig *config,
        FleurFairDungeonMissionFinishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05FD1C-000000000F05FD8F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FlyWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FlyWatcherParam> *const this,
        data::WatcherConfig *config,
        FlyWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05CF02-000000000F05CF75
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ForgeWeaponWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ForgeWeaponWatcherParam> *const this,
        data::WatcherConfig *config,
        ForgeWeaponWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05EB94-000000000F05EC07
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FullSatiationTeamAvatarNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FullSatiationTeamAvatarNumWatcherParam> *const this,
        data::WatcherConfig *config,
        FullSatiationTeamAvatarNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE734D6-000000000CE73549
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCaptureFungusWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCaptureFungusWatcherParam> *const this,
        data::WatcherConfig *config,
        FungusFighterCaptureFungusWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE735BE-000000000CE73631
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCultivateFungusWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCultivateFungusWatcherParam> *const this,
        data::WatcherConfig *config,
        FungusFighterCultivateFungusWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE736A6-000000000CE73719
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterTrainingReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterTrainingReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        FungusFighterTrainingReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065EF6-000000000F065F69
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardBossChallengeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardBossChallengeWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGFinishHardBossChallengeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065D26-000000000F065D99
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardCharacterChallengeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardCharacterChallengeWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGFinishHardCharacterChallengeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065E0E-000000000F065E81
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishNormalBossChallengeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishNormalBossChallengeWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGFinishNormalBossChallengeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0657B6-000000000F065829
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishWeekChallengeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishWeekChallengeWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGFinishWeekChallengeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065C3E-000000000F065CB1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFullProficiencyCharacterNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFullProficiencyCharacterNumWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGFullProficiencyCharacterNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0654FE-000000000F065571
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCardWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGObtainCardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0656CE-000000000F065741
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCharacterCardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCharacterCardWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGObtainCharacterCardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0655E6-000000000F065659
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCoinWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCoinWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGObtainCoinWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065B56-000000000F065BC9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockCharacterGoldFaceNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockCharacterGoldFaceNumWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGUnlockCharacterGoldFaceNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065A6E-000000000F065AE1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockGoldFaceNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockGoldFaceNumWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGUnlockGoldFaceNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065986-000000000F0659F9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGValidDeckNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGValidDeckNumWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGValidDeckNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06589E-000000000F065911
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGWorldChallengeTotalStarNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGWorldChallengeTotalStarNumWatcherParam> *const this,
        data::WatcherConfig *config,
        GCGWorldChallengeTotalStarNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71B56-000000000CE71BC9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaConvertRobotWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaConvertRobotWatcherParam> *const this,
        data::WatcherConfig *config,
        GachaConvertRobotWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE717B6-000000000CE71829
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaFinishStageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaFinishStageWatcherParam> *const this,
        data::WatcherConfig *config,
        GachaFinishStageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71986-000000000CE719F9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGetRobotWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGetRobotWatcherParam> *const this,
        data::WatcherConfig *config,
        GachaGetRobotWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71A6E-000000000CE71AE1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGiveRobotWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGiveRobotWatcherParam> *const this,
        data::WatcherConfig *config,
        GachaGiveRobotWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7189E-000000000CE71911
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaMakeRobotWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaMakeRobotWatcherParam> *const this,
        data::WatcherConfig *config,
        GachaMakeRobotWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BB34-000000000F05BBA7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaNumWatcherParam> *const this,
        data::WatcherConfig *config,
        GachaNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F1FE-000000000F05F271
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GadgetInteractableWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GadgetInteractableWatcherParam> *const this,
        data::WatcherConfig *config,
        GadgetInteractableWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D8E8-000000000CE6D95B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBalloonReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBalloonReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        GalleryBalloonReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E502-000000000CE6E575
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBuoyantCombatReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBuoyantCombatReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        GalleryBuoyantCombatReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D9D0-000000000CE6DA43
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFallReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFallReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        GalleryFallReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064390-000000000F064403
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFishReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFishReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        GalleryFishReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE703D2-000000000CE70445
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GallerySalvageReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GallerySalvageReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        GallerySalvageReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064CC4-000000000F064D37
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryTriathlonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryTriathlonWatcherParam> *const this,
        data::WatcherConfig *config,
        GalleryTriathlonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE720C6-000000000CE72139
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishJigsawPictureWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishJigsawPictureWatcherParam> *const this,
        data::WatcherConfig *config,
        GearFinishJigsawPictureWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71FDE-000000000CE72051
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishStageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishStageWatcherParam> *const this,
        data::WatcherConfig *config,
        GearFinishStageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72826-000000000CE72899
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCampFinishLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCampFinishLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        GravenInnocenceCampFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72636-000000000CE726A9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCarveCompleteWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCarveCompleteWatcherParam> *const this,
        data::WatcherConfig *config,
        GravenInnocenceCarveCompleteWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F065416-000000000F065489
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceRaceWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceRaceWatcherParam> *const this,
        data::WatcherConfig *config,
        GravenInnocenceRaceWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F060374-000000000F0603E7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupFlightChallengeReachPointsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupFlightChallengeReachPointsWatcherParam> *const this,
        data::WatcherConfig *config,
        GroupFlightChallengeReachPointsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6E6D2-000000000CE6E745
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupSummerTimeSprintBoatReachPointsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupSummerTimeSprintBoatReachPointsWatcherParam> *const this,
        data::WatcherConfig *config,
        GroupSummerTimeSprintBoatReachPointsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062864-000000000F0628D7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllEventRewardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllEventRewardWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarAllEventRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06294C-000000000F0629BF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllTalkWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllTalkWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarAllTalkWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062694-000000000F062707
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarEventRewardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarEventRewardWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarEventRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062B1C-000000000F062B8F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarFetterGetWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarFetterGetWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarFetterGetWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F062A34-000000000F062AA7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarInCountWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarInCountWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarInCountWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0625AC-000000000F06261F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarShowInWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarShowInWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarShowInWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06277C-000000000F0627EF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarTalkWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarTalkWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeAvatarTalkWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061D64-000000000F061DD7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeCoinWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeCoinWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeCoinWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061E4C-000000000F061EBF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeComfortLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeComfortLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeComfortLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063F74-000000000F063FE7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeDoPlantWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeDoPlantWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeDoPlantWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0624C4-000000000F062537
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterHomeRoomWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterHomeRoomWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeEnterHomeRoomWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0622F4-000000000F062367
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterSelfHomeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterSelfHomeWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeEnterSelfHomeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061B94-000000000F061C07
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureMakeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureMakeWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeFurnitureMakeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06201C-000000000F06208F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureSuiteTypeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureSuiteTypeWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeFurnitureSuiteTypeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061C7C-000000000F061CEF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061F34-000000000F061FA7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLimitedShopBuyWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLimitedShopBuyWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeLimitedShopBuyWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F0623DC-000000000F06244F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeModuleComfortWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeModuleComfortWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeModuleComfortWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06532E-000000000F0653A1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockBgmCountWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockBgmCountWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeUnlockBgmCountWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061AAC-000000000F061B1F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockFurnitureWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockFurnitureWatcherParam> *const this,
        data::WatcherConfig *config,
        HomeUnlockFurnitureWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C894-000000000CE6C907
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFailWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFailWatcherParam> *const this,
        data::WatcherConfig *config,
        HuntingFailWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C7AC-000000000CE6C81F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFinishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFinishWatcherParam> *const this,
        data::WatcherConfig *config,
        HuntingFinishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7254E-000000000CE725C1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InstableSprayReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InstableSprayReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        InstableSprayReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05A65E-000000000F05A6D1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InteractGadgetWithInteractIdWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InteractGadgetWithInteractIdWatcherParam> *const this,
        data::WatcherConfig *config,
        InteractGadgetWithInteractIdWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE715E6-000000000CE71659
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriChessStageReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriChessStageReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        IrodoriChessStageReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70D02-000000000CE70D75
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishFlowerThemeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishFlowerThemeWatcherParam> *const this,
        data::WatcherConfig *config,
        IrodoriFinishFlowerThemeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70ED2-000000000CE70F45
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishMasterStageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishMasterStageWatcherParam> *const this,
        data::WatcherConfig *config,
        IrodoriFinishMasterStageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70DEA-000000000CE70E5D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishPoetryThemeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishPoetryThemeWatcherParam> *const this,
        data::WatcherConfig *config,
        IrodoriFinishPoetryThemeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE721AE-000000000CE72221
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IslandPartyReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IslandPartyReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        IslandPartyReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05D2B4-000000000F05D327
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<KillGroupSpecificMonsterWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<KillGroupSpecificMonsterWatcherParam> *const this,
        data::WatcherConfig *config,
        KillGroupSpecificMonsterWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE74774-000000000CE747E7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3RaceWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3RaceWatcherParam> *const this,
        data::WatcherConfig *config,
        LanV3RaceWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7485C-000000000CE748CF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3ShadowFinishLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3ShadowFinishLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        LanV3ShadowFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05D674-000000000F05D6E7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LoginWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LoginWatcherParam> *const this,
        data::WatcherConfig *config,
        LoginWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE716CE-000000000CE71741
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LuminanceStoneChallengeReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LuminanceStoneChallengeReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        LuminanceStoneChallengeReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F11C-000000000CE6F18F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LunaRiteSearchWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LunaRiteSearchWatcherParam> *const this,
        data::WatcherConfig *config,
        LunaRiteSearchWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061454-000000000F0614C7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MainCoopVarEqualWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MainCoopVarEqualWatcherParam> *const this,
        data::WatcherConfig *config,
        MainCoopVarEqualWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05EAAC-000000000F05EB1F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxCriticalDamageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxCriticalDamageWatcherParam> *const this,
        data::WatcherConfig *config,
        MaxCriticalDamageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05ED64-000000000F05EDD7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxDashTimeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxDashTimeWatcherParam> *const this,
        data::WatcherConfig *config,
        MaxDashTimeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05EF34-000000000F05EFA7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyMapDistanceWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyMapDistanceWatcherParam> *const this,
        data::WatcherConfig *config,
        MaxFlyMapDistanceWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05EE4C-000000000F05EEBF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyTimeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyTimeWatcherParam> *const this,
        data::WatcherConfig *config,
        MaxFlyTimeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C40C-000000000CE6C47F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleBuildingPointGteqWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleBuildingPointGteqWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleBuildingPointGteqWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D630-000000000CE6D6A3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultEscapeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultEscapeWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleDifficultEscapeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D800-000000000CE6D873
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearIdNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearIdNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleDifficultGearIdNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D718-000000000CE6D78B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleDifficultGearNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C324-000000000CE6C397
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndEscapeMonsterWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndEscapeMonsterWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleEndEscapeMonsterWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D26C-000000000CE6D2DF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndFinChallengeGteqWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndFinChallengeGteqWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleEndFinChallengeGteqWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D184-000000000CE6D1F7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndGearKillGteqWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndGearKillGteqWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleEndGearKillGteqWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6CEA8-000000000CE6CF1B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndPureGearDamageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndPureGearDamageWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleEndPureGearDamageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C23C-000000000CE6C2AF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleEndWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6D44E-000000000CE6D4C1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleInteractGteqWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleInteractGteqWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleInteractGteqWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C5DC-000000000CE6C64F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleLastRoundWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleLastRoundWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleLastRoundWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C4F4-000000000CE6C567
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleRoundGteqWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleRoundGteqWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleRoundGteqWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C6C4-000000000CE6C737
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleWatcherFinishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleWatcherFinishWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBattleWatcherFinishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C154-000000000CE6C1C7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBuildingPointWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBuildingPointWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusBuildingPointWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6BDC2-000000000CE6BE35
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusDifficultScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6C06C-000000000CE6C0DF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusKillMonsterWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusKillMonsterWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusKillMonsterWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6BB80-000000000CE6BBF3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusLevelupGearWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusLevelupGearWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusLevelupGearWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6BA98-000000000CE6BB0B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusUnlockGearWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusUnlockGearWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusUnlockGearWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70C1A-000000000CE70C8D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70B32-000000000CE70BA5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061090-000000000F061103
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingDeliverItemWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingDeliverItemWatcherParam> *const this,
        data::WatcherConfig *config,
        MiracleRingDeliverItemWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061178-000000000F0611EB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingTakeRewardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingTakeRewardWatcherParam> *const this,
        data::WatcherConfig *config,
        MiracleRingTakeRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F6B2-000000000F05F725
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpDungeonSucceedWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpDungeonSucceedWatcherParam> *const this,
        data::WatcherConfig *config,
        MpDungeonSucceedWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064560-000000000F0645D3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterIdNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterIdNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MpKillMonsterIdNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F79A-000000000F05F80D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MpKillMonsterNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05D0D2-000000000F05D145
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayBattleWinWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayBattleWinWatcherParam> *const this,
        data::WatcherConfig *config,
        MpPlayBattleWinWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05D58C-000000000F05D5FF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachRecordWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachRecordWatcherParam> *const this,
        data::WatcherConfig *config,
        MpPlayReachRecordWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05D4A4-000000000F05D517
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        MpPlayReachScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72466-000000000CE724D9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelOnceWeaknessNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelOnceWeaknessNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MuqadasPotionLevelOnceWeaknessNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72296-000000000CE72309
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        MuqadasPotionLevelScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7237E-000000000CE723F1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelWeaknessNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelWeaknessNumWatcherParam> *const this,
        data::WatcherConfig *config,
        MuqadasPotionLevelWeaknessNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71EF6-000000000CE71F69
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSaveUgcWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSaveUgcWatcherParam> *const this,
        data::WatcherConfig *config,
        MusicGameSaveUgcWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71E0E-000000000CE71E81
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSettleOthersUgcWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSettleOthersUgcWatcherParam> *const this,
        data::WatcherConfig *config,
        MusicGameSettleOthersUgcWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05A99A-000000000F05AA0D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainAvatarWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainAvatarWatcherParam> *const this,
        data::WatcherConfig *config,
        ObtainAvatarWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BA4C-000000000F05BABF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainReliquaryNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainReliquaryNumWatcherParam> *const this,
        data::WatcherConfig *config,
        ObtainReliquaryNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06153C-000000000F0615AF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodTypeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodTypeWatcherParam> *const this,
        data::WatcherConfig *config,
        ObtainWoodTypeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F061624-000000000F061697
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodWatcherParam> *const this,
        data::WatcherConfig *config,
        ObtainWoodWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F060BC0-000000000F060C33
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<OfferingLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<OfferingLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        OfferingLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7132E-000000000CE713A1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PhotoFinishPosWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PhotoFinishPosWatcherParam> *const this,
        data::WatcherConfig *config,
        PhotoFinishPosWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06348E-000000000F063501
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlaceMiracleRingWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlaceMiracleRingWatcherParam> *const this,
        data::WatcherConfig *config,
        PlaceMiracleRingWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F68C-000000000CE6F6FF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerCommonObtainFlowerTypeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerCommonObtainFlowerTypeWatcherParam> *const this,
        data::WatcherConfig *config,
        PlantFlowerCommonObtainFlowerTypeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F4BC-000000000CE6F52F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerGiveFlowerWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerGiveFlowerWatcherParam> *const this,
        data::WatcherConfig *config,
        PlantFlowerGiveFlowerWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F5A4-000000000CE6F617
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerObtainFlowerTypeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerObtainFlowerTypeWatcherParam> *const this,
        data::WatcherConfig *config,
        PlantFlowerObtainFlowerTypeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F3D4-000000000CE6F447
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerSetWishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerSetWishWatcherParam> *const this,
        data::WatcherConfig *config,
        PlantFlowerSetWishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064F7C-000000000F064FEF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayOtherCustomDungeonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayOtherCustomDungeonWatcherParam> *const this,
        data::WatcherConfig *config,
        PlayOtherCustomDungeonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05AB7C-000000000F05ABEF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayerLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayerLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        PlayerLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B964-000000000F05B9D7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PossessMaterialNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PossessMaterialNumWatcherParam> *const this,
        data::WatcherConfig *config,
        PossessMaterialNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE705A2-000000000CE70615
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageLevelPassNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageLevelPassNumWatcherParam> *const this,
        data::WatcherConfig *config,
        PotionStageLevelPassNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7068A-000000000CE706FD
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageObtainMedalNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageObtainMedalNumWatcherParam> *const this,
        data::WatcherConfig *config,
        PotionStageObtainMedalNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70772-000000000CE707E5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageReachTotalScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageReachTotalScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        PotionStageReachTotalScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE702EA-000000000CE7035D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ProjectionFinishLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ProjectionFinishLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        ProjectionFinishLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F064E94-000000000F064F07
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PublishCustomDungeonWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PublishCustomDungeonWatcherParam> *const this,
        data::WatcherConfig *config,
        PublishCustomDungeonWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05DEC4-000000000F05DF37
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<QuestGlobalVarEqualWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<QuestGlobalVarEqualWatcherParam> *const this,
        data::WatcherConfig *config,
        QuestGlobalVarEqualWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05BED4-000000000F05BF47
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RandTaskWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RandTaskWatcherParam> *const this,
        data::WatcherConfig *config,
        RandTaskWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B782-000000000F05B7F5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquarySetNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquarySetNumWatcherParam> *const this,
        data::WatcherConfig *config,
        ReliquarySetNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B1E6-000000000F05B259
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeEqualRankLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeEqualRankLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        ReliquaryUpgradeEqualRankLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B004-000000000F05B077
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeWatcherParam> *const this,
        data::WatcherConfig *config,
        ReliquaryUpgradeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE733EE-000000000CE73461
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RockBoardExploreFinishStageWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RockBoardExploreFinishStageWatcherParam> *const this,
        data::WatcherConfig *config,
        RockBoardExploreFinishStageWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70032-000000000CE700A5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueCurseNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueCurseNumWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueCurseNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F774-000000000CE6F7E7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueDestoryGadgetNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueDestoryGadgetNumWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueDestoryGadgetNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6FB58-000000000CE6FBCB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishAllChallengeCellWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishAllChallengeCellWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueFinishAllChallengeCellWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6FC40-000000000CE6FCB3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishNoAvatarDeadWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishNoAvatarDeadWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueFinishNoAvatarDeadWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6FD28-000000000CE6FD9B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarElementTypeNumLessThanWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarElementTypeNumLessThanWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueFinishWithAvatarElementTypeNumLessThanWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F900-000000000CE6F973
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueKillMonsterNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueKillMonsterNumWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueKillMonsterNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7011A-000000000CE7018D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueSelectCardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueSelectCardWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueSelectCardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6FF4A-000000000CE6FFBD
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueShikigamiUpgradeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueShikigamiUpgradeWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueShikigamiUpgradeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6CCD8-000000000CE6CD4B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SeaLampMiniQuestWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SeaLampMiniQuestWatcherParam> *const this,
        data::WatcherConfig *config,
        SeaLampMiniQuestWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F060820-000000000F060893
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ShieldSourceNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ShieldSourceNumWatcherParam> *const this,
        data::WatcherConfig *config,
        ShieldSourceNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F2E6-000000000F05F359
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SkilledAtRecipeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SkilledAtRecipeWatcherParam> *const this,
        data::WatcherConfig *config,
        SkilledAtRecipeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F060908-000000000F06097B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponAwakenWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponAwakenWatcherParam> *const this,
        data::WatcherConfig *config,
        SpecifiedWeaponAwakenWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B3C8-000000000F05B43B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponUpgradeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponUpgradeWatcherParam> *const this,
        data::WatcherConfig *config,
        SpecifiedWeaponUpgradeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7115E-000000000CE711D1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceGiveFoodTimesWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceGiveFoodTimesWatcherParam> *const this,
        data::WatcherConfig *config,
        SpiceGiveFoodTimesWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71246-000000000CE712B9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaSuccessfulTimesWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaSuccessfulTimesWatcherParam> *const this,
        data::WatcherConfig *config,
        SpiceMakeFormulaSuccessfulTimesWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE71076-000000000CE710E9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaTimesWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaTimesWatcherParam> *const this,
        data::WatcherConfig *config,
        SpiceMakeFormulaTimesWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05C5AA-000000000F05C61D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<StartAvatarExpeditionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<StartAvatarExpeditionWatcherParam> *const this,
        data::WatcherConfig *config,
        StartAvatarExpeditionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F204-000000000CE6F277
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoStageScoreReachWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoStageScoreReachWatcherParam> *const this,
        data::WatcherConfig *config,
        SumoStageScoreReachWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6F2EC-000000000CE6F35F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoTotalMaxScoreReachWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoTotalMaxScoreReachWatcherParam> *const this,
        data::WatcherConfig *config,
        SumoTotalMaxScoreReachWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05A7B8-000000000F05A82B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TakeDungeonFirstPassRewardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TakeDungeonFirstPassRewardWatcherParam> *const this,
        data::WatcherConfig *config,
        TakeDungeonFirstPassRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05E034-000000000F05E0A7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TalkNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TalkNumWatcherParam> *const this,
        data::WatcherConfig *config,
        TalkNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73A46-000000000CE73AB9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeamChainScoreReachWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeamChainScoreReachWatcherParam> *const this,
        data::WatcherConfig *config,
        TeamChainScoreReachWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05F4C8-000000000F05F53B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeleportWithCertainPortalWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeleportWithCertainPortalWatcherParam> *const this,
        data::WatcherConfig *config,
        TeleportWithCertainPortalWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F060AD8-000000000F060B4B
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TowerStarsNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TowerStarsNumWatcherParam> *const this,
        data::WatcherConfig *config,
        TowerStarsNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE6CA64-000000000CE6CAD7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureMapDoneRegionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureMapDoneRegionWatcherParam> *const this,
        data::WatcherConfig *config,
        TreasureMapDoneRegionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B69A-000000000F05B70D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockRecipeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockRecipeWatcherParam> *const this,
        data::WatcherConfig *config,
        UnlockRecipeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063E8C-000000000F063EFF
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockSpecificAnimalCodexWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockSpecificAnimalCodexWatcherParam> *const this,
        data::WatcherConfig *config,
        UnlockSpecificAnimalCodexWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B5B2-000000000F05B625
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UpgradeTalentWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UpgradeTalentWatcherParam> *const this,
        data::WatcherConfig *config,
        UpgradeTalentWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F060738-000000000F0607AB
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UseEnergySkillNumTimeLimitWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UseEnergySkillNumTimeLimitWatcherParam> *const this,
        data::WatcherConfig *config,
        UseEnergySkillNumTimeLimitWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063A1E-000000000F063A91
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDashWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDashWatcherParam> *const this,
        data::WatcherConfig *config,
        VehicleDashWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063766-000000000F0637D9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDurationWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDurationWatcherParam> *const this,
        data::WatcherConfig *config,
        VehicleDurationWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F06384E-000000000F0638C1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleFriendsWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleFriendsWatcherParam> *const this,
        data::WatcherConfig *config,
        VehicleFriendsWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F063936-000000000F0639A9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleKilledByMonsterWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleKilledByMonsterWatcherParam> *const this,
        data::WatcherConfig *config,
        VehicleKilledByMonsterWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7304E-000000000CE730C1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageCollectDecorationNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageCollectDecorationNumWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageCollectDecorationNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72F66-000000000CE72FD9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageDecorationCompleteWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageDecorationCompleteWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageDecorationCompleteWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73136-000000000CE731A9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageFinishCampWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageFinishCampWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageFinishCampWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72E7E-000000000CE72EF1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingBossWeakTimesWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingBossWeakTimesWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingBossWeakTimesWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72ADE-000000000CE72B51
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNoBattleNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNoBattleNumWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingCaptureNoBattleNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE729F6-000000000CE72A69
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNumWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingCaptureNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72BC6-000000000CE72C39
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureTypeNumWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureTypeNumWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingCaptureTypeNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72D96-000000000CE72E09
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossInTimeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossInTimeWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingFinishBossInTimeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE72CAE-000000000CE72D21
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingFinishBossWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7290E-000000000CE72981
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageHuntingScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE7321E-000000000CE73291
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketCoinAWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketCoinAWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageMarketCoinAWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE73306-000000000CE73379
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketContentFinishWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketContentFinishWatcherParam> *const this,
        data::WatcherConfig *config,
        VintageMarketContentFinishWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05AF1C-000000000F05AF8F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponPromoteWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponPromoteWatcherParam> *const this,
        data::WatcherConfig *config,
        WeaponPromoteWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05AE34-000000000F05AEA7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponUpgradeWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponUpgradeWatcherParam> *const this,
        data::WatcherConfig *config,
        WeaponUpgradeWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05B4B0-000000000F05B523
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WearReliquaryWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WearReliquaryWatcherParam> *const this,
        data::WatcherConfig *config,
        WearReliquaryWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000CE70202-000000000CE70275
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WinterCampSnowmanCompleteWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WinterCampSnowmanCompleteWatcherParam> *const this,
        data::WatcherConfig *config,
        WinterCampSnowmanCompleteWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F05C1E6-000000000F05C259
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldBossRewardWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldBossRewardWatcherParam> *const this,
        data::WatcherConfig *config,
        WorldBossRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 54: range 000000000F059666-000000000F0596D9
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldLevelUpWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldLevelUpWatcherParam> *const this,
        data::WatcherConfig *config,
        WorldLevelUpWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 58: range 000000000F05E9B0-000000000F05EA22
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AbilityStatePassTimeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AbilityStatePassTimeWatcherParam> *const this)
{
  AbilityStatePassTimeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AbilityStatePassTimeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0644EC-000000000F06455E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AccumulateDailyLoginWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AccumulateDailyLoginWatcherParam> *const this)
{
  AccumulateDailyLoginWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AccumulateDailyLoginWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061868-000000000F0618DA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllCampWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllCampWatcherParam> *const this)
{
  ActivityChannellerSlabFinishAllCampWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ActivityChannellerSlabFinishAllCampWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061950-000000000F0619C2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam> *const this)
{
  ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000F061A38-000000000F061AAA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam> *const this)
{
  ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000F05C9F4-000000000F05CA66
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityExpeditionFinishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityExpeditionFinishWatcherParam> *const this)
{
  ActivityExpeditionFinishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ActivityExpeditionFinishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E48E-000000000CE6E500
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityScoreExceedValueWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ActivityScoreExceedValueWatcherParam> *const this)
{
  ActivityScoreExceedValueWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ActivityScoreExceedValueWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062D60-000000000F062DD2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyReliquaryUpgradeNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyReliquaryUpgradeNumWatcherParam> *const this)
{
  AnyReliquaryUpgradeNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AnyReliquaryUpgradeNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05C536-000000000F05C5A8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyRequaryUpgradeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyRequaryUpgradeWatcherParam> *const this)
{
  AnyRequaryUpgradeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AnyRequaryUpgradeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062C78-000000000F062CEA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyWeaponUpgradeNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AnyWeaponUpgradeNumWatcherParam> *const this)
{
  AnyWeaponUpgradeNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AnyWeaponUpgradeNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05C030-000000000F05C0A2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarExpeditionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarExpeditionWatcherParam> *const this)
{
  AvatarExpeditionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AvatarExpeditionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05BD78-000000000F05BDEA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteExcludingPlayerWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteExcludingPlayerWatcherParam> *const this)
{
  AvatarPromoteExcludingPlayerWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AvatarPromoteExcludingPlayerWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05ADC0-000000000F05AE32
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarPromoteWatcherParam> *const this)
{
  AvatarPromoteWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AvatarPromoteWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05ACD8-000000000F05AD4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarUpgradeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<AvatarUpgradeWatcherParam> *const this)
{
  AvatarUpgradeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<AvatarUpgradeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE709D6-000000000CE70A48
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderChallengeModuleLevelScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderChallengeModuleLevelScoreWatcherParam> *const this)
{
  BartenderChallengeModuleLevelScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BartenderChallengeModuleLevelScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70ABE-000000000CE70B30
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderUnlockFormulaWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BartenderUnlockFormulaWatcherParam> *const this)
{
  BartenderUnlockFormulaWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BartenderUnlockFormulaWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6B93C-000000000CE6B9AE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingExchangePicNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingExchangePicNumWatcherParam> *const this)
{
  BlessingExchangePicNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BlessingExchangePicNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6BA24-000000000CE6BA96
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingRedeemRewardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BlessingRedeemRewardWatcherParam> *const this)
{
  BlessingRedeemRewardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BlessingRedeemRewardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E880-000000000CE6E8F2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringFinishCountWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringFinishCountWatcherParam> *const this)
{
  BounceConjuringFinishCountWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BounceConjuringFinishCountWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E968-000000000CE6E9DA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringScoreWatcherParam> *const this)
{
  BounceConjuringScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BounceConjuringScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE74530-000000000CE745A2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelBallElemReactionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelBallElemReactionWatcherParam> *const this)
{
  BrickBreakerDungeonLevelBallElemReactionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerDungeonLevelBallElemReactionWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000CE7413E-000000000CE741B0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelComboWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelComboWatcherParam> *const this)
{
  BrickBreakerDungeonLevelComboWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerDungeonLevelComboWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE74448-000000000CE744BA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelElemReactionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelElemReactionWatcherParam> *const this)
{
  BrickBreakerDungeonLevelElemReactionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerDungeonLevelElemReactionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE74056-000000000CE740C8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelScoreWatcherParam> *const this)
{
  BrickBreakerDungeonLevelScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerDungeonLevelScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73F6E-000000000CE73FE0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishDungeonLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishDungeonLevelWatcherParam> *const this)
{
  BrickBreakerFinishDungeonLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerFinishDungeonLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73CB6-000000000CE73D28
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishWorldLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishWorldLevelWatcherParam> *const this)
{
  BrickBreakerFinishWorldLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerFinishWorldLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7430E-000000000CE74380
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelBallElemReactionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelBallElemReactionWatcherParam> *const this)
{
  BrickBreakerWorldLevelBallElemReactionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerWorldLevelBallElemReactionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73E86-000000000CE73EF8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelComboWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelComboWatcherParam> *const this)
{
  BrickBreakerWorldLevelComboWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerWorldLevelComboWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE74226-000000000CE74298
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelElemReactionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelElemReactionWatcherParam> *const this)
{
  BrickBreakerWorldLevelElemReactionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerWorldLevelElemReactionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73D9E-000000000CE73E10
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerWorldLevelScoreWatcherParam> *const this)
{
  BrickBreakerWorldLevelScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BrickBreakerWorldLevelScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E65E-000000000CE6E6D0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuoyantCombatReachNewScoreLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuoyantCombatReachNewScoreLevelWatcherParam> *const this)
{
  BuoyantCombatReachNewScoreLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BuoyantCombatReachNewScoreLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05D05E-000000000F05D0D0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuyShopGoodsAndWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BuyShopGoodsAndWatcherParam> *const this)
{
  BuyShopGoodsAndWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<BuyShopGoodsAndWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE738EA-000000000CE7395C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CharAmusementFinishStageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CharAmusementFinishStageWatcherParam> *const this)
{
  CharAmusementFinishStageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CharAmusementFinishStageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6EB38-000000000CE6EBAA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessCostBuildingPointsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessCostBuildingPointsWatcherParam> *const this)
{
  ChessCostBuildingPointsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessCostBuildingPointsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6EC20-000000000CE6EC92
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonAddScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonAddScoreWatcherParam> *const this)
{
  ChessDungeonAddScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessDungeonAddScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6EFC0-000000000CE6F032
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountGreaterThanWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountGreaterThanWatcherParam> *const this)
{
  ChessDungeonCardCountGreaterThanWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessDungeonCardCountGreaterThanWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6EED8-000000000CE6EF4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountLessOrEqualWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonCardCountLessOrEqualWatcherParam> *const this)
{
  ChessDungeonCardCountLessOrEqualWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessDungeonCardCountLessOrEqualWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6ED08-000000000CE6ED7A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonEscapedMonstersWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonEscapedMonstersWatcherParam> *const this)
{
  ChessDungeonEscapedMonstersWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessDungeonEscapedMonstersWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6EDF0-000000000CE6EE62
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonTowerCountWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessDungeonTowerCountWatcherParam> *const this)
{
  ChessDungeonTowerCountWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessDungeonTowerCountWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6EA50-000000000CE6EAC2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessKillMonstersWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessKillMonstersWatcherParam> *const this)
{
  ChessKillMonstersWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessKillMonstersWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F0A8-000000000CE6F11A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ChessLevelWatcherParam> *const this)
{
  ChessLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ChessLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05A000-000000000F05A072
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityLevelUpWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityLevelUpWatcherParam> *const this)
{
  CityLevelUpWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CityLevelUpWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060300-000000000F060372
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationFinishRequestWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationFinishRequestWatcherParam> *const this)
{
  CityReputationFinishRequestWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CityReputationFinishRequestWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060218-000000000F06028A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CityReputationLevelWatcherParam> *const this)
{
  CityReputationLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CityReputationLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05FF60-000000000F05FFD2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ClimbWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ClimbWatcherParam> *const this)
{
  ClimbWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ClimbWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE739D2-000000000CE73A44
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CoinCollectResultReachWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CoinCollectResultReachWatcherParam> *const this)
{
  CoinCollectResultReachWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CoinCollectResultReachWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F624-000000000F05F696
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CollectSetOfReadingsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CollectSetOfReadingsWatcherParam> *const this)
{
  CollectSetOfReadingsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CollectSetOfReadingsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05944C-000000000F0594BE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombatMulticondConfigCommonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombatMulticondConfigCommonWatcherParam> *const this)
{
  CombatMulticondConfigCommonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CombatMulticondConfigCommonWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062280-000000000F0622F2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombineItemCountWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CombineItemCountWatcherParam> *const this)
{
  CombineItemCountWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CombineItemCountWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064E20-000000000F064E92
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CreateCustomDungeonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CreateCustomDungeonWatcherParam> *const this)
{
  CreateCustomDungeonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CreateCustomDungeonWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6B474-000000000CE6B4E6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleElementScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleElementScoreWatcherParam> *const this)
{
  CrucibleElementScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CrucibleElementScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6B55C-000000000CE6B5CE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxBallWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxBallWatcherParam> *const this)
{
  CrucibleMaxBallWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CrucibleMaxBallWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6B644-000000000CE6B6B6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleMaxScoreWatcherParam> *const this)
{
  CrucibleMaxScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CrucibleMaxScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7148A-000000000CE714FC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkLevelScoreReachWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkLevelScoreReachWatcherParam> *const this)
{
  CrystalLinkLevelScoreReachWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CrystalLinkLevelScoreReachWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71572-000000000CE715E4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkTotalMaxScoreReachWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrystalLinkTotalMaxScoreReachWatcherParam> *const this)
{
  CrystalLinkTotalMaxScoreReachWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CrystalLinkTotalMaxScoreReachWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060130-000000000F0601A2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarAbilityStateWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarAbilityStateWatcherParam> *const this)
{
  CurAvatarAbilityStateWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CurAvatarAbilityStateWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060048-000000000F0600BA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarHurtWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CurAvatarHurtWatcherParam> *const this)
{
  CurAvatarHurtWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CurAvatarHurtWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0651C0-000000000F065232
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CustomDungeonOfficialCoinWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CustomDungeonOfficialCoinWatcherParam> *const this)
{
  CustomDungeonOfficialCoinWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<CustomDungeonOfficialCoinWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05DDAC-000000000F05DE1E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskVarEqualWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskVarEqualWatcherParam> *const this)
{
  DailyTaskVarEqualWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DailyTaskVarEqualWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05BE60-000000000F05BED2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DailyTaskWatcherParam> *const this)
{
  DailyTaskWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DailyTaskWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05FE78-000000000F05FEEA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DashWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DashWatcherParam> *const this)
{
  DashWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DashWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05ECF0-000000000F05ED62
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliverItemToSalesmanWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliverItemToSalesmanWatcherParam> *const this)
{
  DeliverItemToSalesmanWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DeliverItemToSalesmanWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C9F0-000000000CE6CA62
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliveryFinishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DeliveryFinishWatcherParam> *const this)
{
  DeliveryFinishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DeliveryFinishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05CD94-000000000F05CE06
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCombineWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCombineWatcherParam> *const this)
{
  DoCombineWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoCombineWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05CCAC-000000000F05CD1E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCompoundWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCompoundWatcherParam> *const this)
{
  DoCompoundWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoCompoundWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05CADC-000000000F05CB4E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCookWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoCookWatcherParam> *const this)
{
  DoCookWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoCookWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05CBC4-000000000F05CC36
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoForgeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoForgeWatcherParam> *const this)
{
  DoForgeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoForgeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05FCA8-000000000F05FD1A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneDungeonWithSameElementAvatarsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneDungeonWithSameElementAvatarsWatcherParam> *const this)
{
  DoneDungeonWithSameElementAvatarsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoneDungeonWithSameElementAvatarsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05FAD8-000000000F05FB4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerGadgetUnhurtWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerGadgetUnhurtWatcherParam> *const this)
{
  DoneTowerGadgetUnhurtWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoneTowerGadgetUnhurtWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F9F0-000000000F05FA62
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerStarsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerStarsWatcherParam> *const this)
{
  DoneTowerStarsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoneTowerStarsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05FBC0-000000000F05FC32
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerUnhurtWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DoneTowerUnhurtWatcherParam> *const this)
{
  DoneTowerUnhurtWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DoneTowerUnhurtWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE74700-000000000CE74772
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DuelHeartFinishLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DuelHeartFinishLevelWatcherParam> *const this)
{
  DuelHeartFinishLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DuelHeartFinishLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0597C2-000000000F059834
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DungeonEntryToBeExploredWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<DungeonEntryToBeExploredWatcherParam> *const this)
{
  DungeonEntryToBeExploredWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<DungeonEntryToBeExploredWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6B37E-000000000CE6B3F0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeScoreWatcherParam> *const this)
{
  EffigyChallengeScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<EffigyChallengeScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73802-000000000CE73874
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeV2FinishRoomWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EffigyChallengeV2FinishRoomWatcherParam> *const this)
{
  EffigyChallengeV2FinishRoomWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<EffigyChallengeV2FinishRoomWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE74618-000000000CE7468A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElectroherculesBattleFinishLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElectroherculesBattleFinishLevelWatcherParam> *const this)
{
  ElectroherculesBattleFinishLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ElectroherculesBattleFinishLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0595F2-000000000F059664
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementBallWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementBallWatcherParam> *const this)
{
  ElementBallWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ElementBallWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F18A-000000000F05F1FC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementTypeChangeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementTypeChangeWatcherParam> *const this)
{
  ElementTypeChangeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ElementTypeChangeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F059EA6-000000000F059F18
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterClimateAreaWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterClimateAreaWatcherParam> *const this)
{
  EnterClimateAreaWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<EnterClimateAreaWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0666CE-000000000F066740
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterSceneNotDungeonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterSceneNotDungeonWatcherParam> *const this)
{
  EnterSceneNotDungeonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<EnterSceneNotDungeonWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0636F2-000000000F063764
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterVehicleWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<EnterVehicleWatcherParam> *const this)
{
  EnterVehicleWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<EnterVehicleWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062E48-000000000F062EBA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionAccumulableValueWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionAccumulableValueWatcherParam> *const this)
{
  ExhibitionAccumulableValueWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ExhibitionAccumulableValueWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062F30-000000000F062FA2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionReplaceableValueSettleNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ExhibitionReplaceableValueSettleNumWatcherParam> *const this)
{
  ExhibitionReplaceableValueSettleNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ExhibitionReplaceableValueSettleNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05BC90-000000000F05BD02
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FetterMaxLevelAvatarNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FetterMaxLevelAvatarNumWatcherParam> *const this)
{
  FetterMaxLevelAvatarNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FetterMaxLevelAvatarNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6CE34-000000000CE6CEA6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FindHilichurlFinishLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FindHilichurlFinishLevelWatcherParam> *const this)
{
  FindHilichurlFinishLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FindHilichurlFinishLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E0DC-000000000CE6E14E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishAllArenaChallengeWatcherInScheduleWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishAllArenaChallengeWatcherInScheduleWatcherParam> *const this)
{
  FinishAllArenaChallengeWatcherInScheduleWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishAllArenaChallengeWatcherInScheduleWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000F063B7A-000000000F063BEC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeInDurationWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeInDurationWatcherParam> *const this)
{
  FinishChallengeInDurationWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishChallengeInDurationWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F063D1E-000000000F063D90
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeLeftTimeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishChallengeLeftTimeWatcherParam> *const this)
{
  FinishChallengeLeftTimeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishChallengeLeftTimeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0650D8-000000000F06514A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishCustomDungeonOfficialWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishCustomDungeonOfficialWatcherParam> *const this)
{
  FinishCustomDungeonOfficialWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishCustomDungeonOfficialWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061780-000000000F0617F2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishDungeonAndChallengeRemainTimeGreaterWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishDungeonAndChallengeRemainTimeGreaterWatcherParam> *const this)
{
  FinishDungeonAndChallengeRemainTimeGreaterWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishDungeonAndChallengeRemainTimeGreaterWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000F05E190-000000000F05E202
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestAndWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestAndWatcherParam> *const this)
{
  FinishParentQuestAndWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishParentQuestAndWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05E278-000000000F05E2EA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestOrWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishParentQuestOrWatcherParam> *const this)
{
  FinishParentQuestOrWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishParentQuestOrWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71D9A-000000000CE71E0C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageRoundWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageRoundWatcherParam> *const this)
{
  FinishRogueDiaryStageRoundWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishRogueDiaryStageRoundWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71CB2-000000000CE71D24
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishRogueDiaryStageWatcherParam> *const this)
{
  FinishRogueDiaryStageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishRogueDiaryStageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060A64-000000000F060AD6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomClimateMeterWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomClimateMeterWatcherParam> *const this)
{
  FinishSpecifiedTypeBlossomClimateMeterWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishSpecifiedTypeBlossomClimateMeterWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0604D0-000000000F060542
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishSpecifiedTypeBlossomWatcherParam> *const this)
{
  FinishSpecifiedTypeBlossomWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishSpecifiedTypeBlossomWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05C118-000000000F05C18A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishTowerLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FinishTowerLevelWatcherParam> *const this)
{
  FinishTowerLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FinishTowerLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7052E-000000000CE705A0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FireworksChallengeReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FireworksChallengeReachScoreWatcherParam> *const this)
{
  FireworksChallengeReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FireworksChallengeReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F06488C-000000000F0648FE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingEmptyPoolWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingEmptyPoolWatcherParam> *const this)
{
  FishingEmptyPoolWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FishingEmptyPoolWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0647A4-000000000F064816
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingFailNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingFailNumWatcherParam> *const this)
{
  FishingFailNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FishingFailNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064A5C-000000000F064ACE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingKeepBonusWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingKeepBonusWatcherParam> *const this)
{
  FishingKeepBonusWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FishingKeepBonusWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064974-000000000F0649E6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingShockFishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingShockFishWatcherParam> *const this)
{
  FishingShockFishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FishingShockFishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0646BC-000000000F06472E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingSuccNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FishingSuccNumWatcherParam> *const this)
{
  FishingSuccNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FishingSuccNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6DC34-000000000CE6DCA6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishInLimitTimeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishInLimitTimeWatcherParam> *const this)
{
  FleurFairDungeonFinishInLimitTimeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FleurFairDungeonFinishInLimitTimeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6DD1C-000000000CE6DD8E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishKeepEnergyWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishKeepEnergyWatcherParam> *const this)
{
  FleurFairDungeonFinishKeepEnergyWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FleurFairDungeonFinishKeepEnergyWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6DF0C-000000000CE6DF7E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishWithBuffNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonFinishWithBuffNumWatcherParam> *const this)
{
  FleurFairDungeonFinishWithBuffNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FleurFairDungeonFinishWithBuffNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6DFF4-000000000CE6E066
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonMissionFinishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FleurFairDungeonMissionFinishWatcherParam> *const this)
{
  FleurFairDungeonMissionFinishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FleurFairDungeonMissionFinishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05FD90-000000000F05FE02
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FlyWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FlyWatcherParam> *const this)
{
  FlyWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FlyWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05CF76-000000000F05CFE8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ForgeWeaponWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ForgeWeaponWatcherParam> *const this)
{
  ForgeWeaponWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ForgeWeaponWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05EC08-000000000F05EC7A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FullSatiationTeamAvatarNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FullSatiationTeamAvatarNumWatcherParam> *const this)
{
  FullSatiationTeamAvatarNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FullSatiationTeamAvatarNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7354A-000000000CE735BC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCaptureFungusWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCaptureFungusWatcherParam> *const this)
{
  FungusFighterCaptureFungusWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FungusFighterCaptureFungusWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73632-000000000CE736A4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCultivateFungusWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterCultivateFungusWatcherParam> *const this)
{
  FungusFighterCultivateFungusWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FungusFighterCultivateFungusWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7371A-000000000CE7378C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterTrainingReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<FungusFighterTrainingReachScoreWatcherParam> *const this)
{
  FungusFighterTrainingReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<FungusFighterTrainingReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065F6A-000000000F065FDC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardBossChallengeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardBossChallengeWatcherParam> *const this)
{
  GCGFinishHardBossChallengeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGFinishHardBossChallengeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065D9A-000000000F065E0C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardCharacterChallengeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishHardCharacterChallengeWatcherParam> *const this)
{
  GCGFinishHardCharacterChallengeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGFinishHardCharacterChallengeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065E82-000000000F065EF4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishNormalBossChallengeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishNormalBossChallengeWatcherParam> *const this)
{
  GCGFinishNormalBossChallengeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGFinishNormalBossChallengeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F06582A-000000000F06589C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishWeekChallengeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFinishWeekChallengeWatcherParam> *const this)
{
  GCGFinishWeekChallengeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGFinishWeekChallengeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065CB2-000000000F065D24
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFullProficiencyCharacterNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGFullProficiencyCharacterNumWatcherParam> *const this)
{
  GCGFullProficiencyCharacterNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGFullProficiencyCharacterNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065572-000000000F0655E4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCardWatcherParam> *const this)
{
  GCGObtainCardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGObtainCardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065742-000000000F0657B4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCharacterCardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCharacterCardWatcherParam> *const this)
{
  GCGObtainCharacterCardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGObtainCharacterCardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F06565A-000000000F0656CC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCoinWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGObtainCoinWatcherParam> *const this)
{
  GCGObtainCoinWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGObtainCoinWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065BCA-000000000F065C3C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockCharacterGoldFaceNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockCharacterGoldFaceNumWatcherParam> *const this)
{
  GCGUnlockCharacterGoldFaceNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGUnlockCharacterGoldFaceNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065AE2-000000000F065B54
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockGoldFaceNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGUnlockGoldFaceNumWatcherParam> *const this)
{
  GCGUnlockGoldFaceNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGUnlockGoldFaceNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0659FA-000000000F065A6C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGValidDeckNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGValidDeckNumWatcherParam> *const this)
{
  GCGValidDeckNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGValidDeckNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F065912-000000000F065984
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGWorldChallengeTotalStarNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GCGWorldChallengeTotalStarNumWatcherParam> *const this)
{
  GCGWorldChallengeTotalStarNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GCGWorldChallengeTotalStarNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71BCA-000000000CE71C3C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaConvertRobotWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaConvertRobotWatcherParam> *const this)
{
  GachaConvertRobotWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GachaConvertRobotWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7182A-000000000CE7189C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaFinishStageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaFinishStageWatcherParam> *const this)
{
  GachaFinishStageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GachaFinishStageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE719FA-000000000CE71A6C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGetRobotWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGetRobotWatcherParam> *const this)
{
  GachaGetRobotWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GachaGetRobotWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71AE2-000000000CE71B54
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGiveRobotWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaGiveRobotWatcherParam> *const this)
{
  GachaGiveRobotWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GachaGiveRobotWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71912-000000000CE71984
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaMakeRobotWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaMakeRobotWatcherParam> *const this)
{
  GachaMakeRobotWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GachaMakeRobotWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05BBA8-000000000F05BC1A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GachaNumWatcherParam> *const this)
{
  GachaNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GachaNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F272-000000000F05F2E4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GadgetInteractableWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GadgetInteractableWatcherParam> *const this)
{
  GadgetInteractableWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GadgetInteractableWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D95C-000000000CE6D9CE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBalloonReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBalloonReachScoreWatcherParam> *const this)
{
  GalleryBalloonReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GalleryBalloonReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E576-000000000CE6E5E8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBuoyantCombatReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryBuoyantCombatReachScoreWatcherParam> *const this)
{
  GalleryBuoyantCombatReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GalleryBuoyantCombatReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6DA44-000000000CE6DAB6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFallReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFallReachScoreWatcherParam> *const this)
{
  GalleryFallReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GalleryFallReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064404-000000000F064476
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFishReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryFishReachScoreWatcherParam> *const this)
{
  GalleryFishReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GalleryFishReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70446-000000000CE704B8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GallerySalvageReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GallerySalvageReachScoreWatcherParam> *const this)
{
  GallerySalvageReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GallerySalvageReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064D38-000000000F064DAA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryTriathlonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GalleryTriathlonWatcherParam> *const this)
{
  GalleryTriathlonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GalleryTriathlonWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7213A-000000000CE721AC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishJigsawPictureWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishJigsawPictureWatcherParam> *const this)
{
  GearFinishJigsawPictureWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GearFinishJigsawPictureWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72052-000000000CE720C4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishStageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GearFinishStageWatcherParam> *const this)
{
  GearFinishStageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GearFinishStageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7289A-000000000CE7290C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCampFinishLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCampFinishLevelWatcherParam> *const this)
{
  GravenInnocenceCampFinishLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GravenInnocenceCampFinishLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE726AA-000000000CE7271C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCarveCompleteWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceCarveCompleteWatcherParam> *const this)
{
  GravenInnocenceCarveCompleteWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GravenInnocenceCarveCompleteWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F06548A-000000000F0654FC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceRaceWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GravenInnocenceRaceWatcherParam> *const this)
{
  GravenInnocenceRaceWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GravenInnocenceRaceWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0603E8-000000000F06045A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupFlightChallengeReachPointsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupFlightChallengeReachPointsWatcherParam> *const this)
{
  GroupFlightChallengeReachPointsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GroupFlightChallengeReachPointsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E746-000000000CE6E7B8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupSummerTimeSprintBoatReachPointsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<GroupSummerTimeSprintBoatReachPointsWatcherParam> *const this)
{
  GroupSummerTimeSprintBoatReachPointsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<GroupSummerTimeSprintBoatReachPointsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0628D8-000000000F06294A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllEventRewardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllEventRewardWatcherParam> *const this)
{
  HomeAvatarAllEventRewardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarAllEventRewardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0629C0-000000000F062A32
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllTalkWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarAllTalkWatcherParam> *const this)
{
  HomeAvatarAllTalkWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarAllTalkWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062708-000000000F06277A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarEventRewardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarEventRewardWatcherParam> *const this)
{
  HomeAvatarEventRewardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarEventRewardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062B90-000000000F062C02
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarFetterGetWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarFetterGetWatcherParam> *const this)
{
  HomeAvatarFetterGetWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarFetterGetWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062AA8-000000000F062B1A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarInCountWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarInCountWatcherParam> *const this)
{
  HomeAvatarInCountWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarInCountWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062620-000000000F062692
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarShowInWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarShowInWatcherParam> *const this)
{
  HomeAvatarShowInWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarShowInWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0627F0-000000000F062862
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarTalkWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeAvatarTalkWatcherParam> *const this)
{
  HomeAvatarTalkWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeAvatarTalkWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061DD8-000000000F061E4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeCoinWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeCoinWatcherParam> *const this)
{
  HomeCoinWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeCoinWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061EC0-000000000F061F32
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeComfortLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeComfortLevelWatcherParam> *const this)
{
  HomeComfortLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeComfortLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F063FE8-000000000F06405A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeDoPlantWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeDoPlantWatcherParam> *const this)
{
  HomeDoPlantWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeDoPlantWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062538-000000000F0625AA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterHomeRoomWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterHomeRoomWatcherParam> *const this)
{
  HomeEnterHomeRoomWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeEnterHomeRoomWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062368-000000000F0623DA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterSelfHomeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeEnterSelfHomeWatcherParam> *const this)
{
  HomeEnterSelfHomeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeEnterSelfHomeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061C08-000000000F061C7A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureMakeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureMakeWatcherParam> *const this)
{
  HomeFurnitureMakeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeFurnitureMakeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062090-000000000F062102
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureSuiteTypeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeFurnitureSuiteTypeWatcherParam> *const this)
{
  HomeFurnitureSuiteTypeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeFurnitureSuiteTypeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061CF0-000000000F061D62
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLevelWatcherParam> *const this)
{
  HomeLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061FA8-000000000F06201A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLimitedShopBuyWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeLimitedShopBuyWatcherParam> *const this)
{
  HomeLimitedShopBuyWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeLimitedShopBuyWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F062450-000000000F0624C2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeModuleComfortWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeModuleComfortWatcherParam> *const this)
{
  HomeModuleComfortWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeModuleComfortWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0653A2-000000000F065414
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockBgmCountWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockBgmCountWatcherParam> *const this)
{
  HomeUnlockBgmCountWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeUnlockBgmCountWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061B20-000000000F061B92
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockFurnitureWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HomeUnlockFurnitureWatcherParam> *const this)
{
  HomeUnlockFurnitureWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HomeUnlockFurnitureWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C908-000000000CE6C97A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFailWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFailWatcherParam> *const this)
{
  HuntingFailWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HuntingFailWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C820-000000000CE6C892
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFinishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<HuntingFinishWatcherParam> *const this)
{
  HuntingFinishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<HuntingFinishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE725C2-000000000CE72634
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InstableSprayReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InstableSprayReachScoreWatcherParam> *const this)
{
  InstableSprayReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<InstableSprayReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05A6D2-000000000F05A744
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InteractGadgetWithInteractIdWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<InteractGadgetWithInteractIdWatcherParam> *const this)
{
  InteractGadgetWithInteractIdWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<InteractGadgetWithInteractIdWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7165A-000000000CE716CC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriChessStageReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriChessStageReachScoreWatcherParam> *const this)
{
  IrodoriChessStageReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<IrodoriChessStageReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70D76-000000000CE70DE8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishFlowerThemeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishFlowerThemeWatcherParam> *const this)
{
  IrodoriFinishFlowerThemeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<IrodoriFinishFlowerThemeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70F46-000000000CE70FB8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishMasterStageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishMasterStageWatcherParam> *const this)
{
  IrodoriFinishMasterStageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<IrodoriFinishMasterStageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70E5E-000000000CE70ED0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishPoetryThemeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IrodoriFinishPoetryThemeWatcherParam> *const this)
{
  IrodoriFinishPoetryThemeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<IrodoriFinishPoetryThemeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72222-000000000CE72294
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IslandPartyReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<IslandPartyReachScoreWatcherParam> *const this)
{
  IslandPartyReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<IslandPartyReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05D328-000000000F05D39A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<KillGroupSpecificMonsterWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<KillGroupSpecificMonsterWatcherParam> *const this)
{
  KillGroupSpecificMonsterWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<KillGroupSpecificMonsterWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE747E8-000000000CE7485A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3RaceWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3RaceWatcherParam> *const this)
{
  LanV3RaceWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<LanV3RaceWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE748D0-000000000CE74942
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3ShadowFinishLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LanV3ShadowFinishLevelWatcherParam> *const this)
{
  LanV3ShadowFinishLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<LanV3ShadowFinishLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05D6E8-000000000F05D75A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LoginWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LoginWatcherParam> *const this)
{
  LoginWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<LoginWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71742-000000000CE717B4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LuminanceStoneChallengeReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LuminanceStoneChallengeReachScoreWatcherParam> *const this)
{
  LuminanceStoneChallengeReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<LuminanceStoneChallengeReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F190-000000000CE6F202
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LunaRiteSearchWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<LunaRiteSearchWatcherParam> *const this)
{
  LunaRiteSearchWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<LunaRiteSearchWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0614C8-000000000F06153A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MainCoopVarEqualWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MainCoopVarEqualWatcherParam> *const this)
{
  MainCoopVarEqualWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MainCoopVarEqualWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05EB20-000000000F05EB92
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxCriticalDamageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxCriticalDamageWatcherParam> *const this)
{
  MaxCriticalDamageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MaxCriticalDamageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05EDD8-000000000F05EE4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxDashTimeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxDashTimeWatcherParam> *const this)
{
  MaxDashTimeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MaxDashTimeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05EFA8-000000000F05F01A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyMapDistanceWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyMapDistanceWatcherParam> *const this)
{
  MaxFlyMapDistanceWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MaxFlyMapDistanceWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05EEC0-000000000F05EF32
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyTimeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MaxFlyTimeWatcherParam> *const this)
{
  MaxFlyTimeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MaxFlyTimeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C480-000000000CE6C4F2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleBuildingPointGteqWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleBuildingPointGteqWatcherParam> *const this)
{
  MechanicusBattleBuildingPointGteqWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleBuildingPointGteqWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D6A4-000000000CE6D716
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultEscapeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultEscapeWatcherParam> *const this)
{
  MechanicusBattleDifficultEscapeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleDifficultEscapeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D874-000000000CE6D8E6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearIdNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearIdNumWatcherParam> *const this)
{
  MechanicusBattleDifficultGearIdNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleDifficultGearIdNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D78C-000000000CE6D7FE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleDifficultGearNumWatcherParam> *const this)
{
  MechanicusBattleDifficultGearNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleDifficultGearNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C398-000000000CE6C40A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndEscapeMonsterWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndEscapeMonsterWatcherParam> *const this)
{
  MechanicusBattleEndEscapeMonsterWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleEndEscapeMonsterWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D2E0-000000000CE6D352
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndFinChallengeGteqWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndFinChallengeGteqWatcherParam> *const this)
{
  MechanicusBattleEndFinChallengeGteqWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleEndFinChallengeGteqWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D1F8-000000000CE6D26A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndGearKillGteqWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndGearKillGteqWatcherParam> *const this)
{
  MechanicusBattleEndGearKillGteqWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleEndGearKillGteqWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6CF1C-000000000CE6CF8E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndPureGearDamageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndPureGearDamageWatcherParam> *const this)
{
  MechanicusBattleEndPureGearDamageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleEndPureGearDamageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C2B0-000000000CE6C322
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleEndWatcherParam> *const this)
{
  MechanicusBattleEndWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleEndWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6D4C2-000000000CE6D534
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleInteractGteqWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleInteractGteqWatcherParam> *const this)
{
  MechanicusBattleInteractGteqWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleInteractGteqWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C650-000000000CE6C6C2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleLastRoundWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleLastRoundWatcherParam> *const this)
{
  MechanicusBattleLastRoundWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleLastRoundWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C568-000000000CE6C5DA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleRoundGteqWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleRoundGteqWatcherParam> *const this)
{
  MechanicusBattleRoundGteqWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleRoundGteqWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C738-000000000CE6C7AA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleWatcherFinishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBattleWatcherFinishWatcherParam> *const this)
{
  MechanicusBattleWatcherFinishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBattleWatcherFinishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C1C8-000000000CE6C23A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBuildingPointWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusBuildingPointWatcherParam> *const this)
{
  MechanicusBuildingPointWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusBuildingPointWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6BFF8-000000000CE6C06A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultEqWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultEqWatcherParam> *const this)
{
  MechanicusDifficultEqWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusDifficultEqWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6BE36-000000000CE6BEA8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultScoreWatcherParam> *const this)
{
  MechanicusDifficultScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusDifficultScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6BD4E-000000000CE6BDC0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultWatcherParam> *const this)
{
  MechanicusDifficultWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusDifficultWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6C0E0-000000000CE6C152
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusKillMonsterWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusKillMonsterWatcherParam> *const this)
{
  MechanicusKillMonsterWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusKillMonsterWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6BBF4-000000000CE6BC66
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusLevelupGearWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusLevelupGearWatcherParam> *const this)
{
  MechanicusLevelupGearWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusLevelupGearWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6BB0C-000000000CE6BB7E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusUnlockGearWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusUnlockGearWatcherParam> *const this)
{
  MechanicusUnlockGearWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MechanicusUnlockGearWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70C8E-000000000CE70D00
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam> *const this)
{
  MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000CE70BA6-000000000CE70C18
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam> *const this)
{
  MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000F061104-000000000F061176
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingDeliverItemWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingDeliverItemWatcherParam> *const this)
{
  MiracleRingDeliverItemWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MiracleRingDeliverItemWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0611EC-000000000F06125E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingTakeRewardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MiracleRingTakeRewardWatcherParam> *const this)
{
  MiracleRingTakeRewardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MiracleRingTakeRewardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6E29E-000000000CE6E310
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MistTrialDungeonStatWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MistTrialDungeonStatWatcherParam> *const this)
{
  MistTrialDungeonStatWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MistTrialDungeonStatWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F726-000000000F05F798
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpDungeonSucceedWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpDungeonSucceedWatcherParam> *const this)
{
  MpDungeonSucceedWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MpDungeonSucceedWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0645D4-000000000F064646
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterIdNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterIdNumWatcherParam> *const this)
{
  MpKillMonsterIdNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MpKillMonsterIdNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F80E-000000000F05F880
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpKillMonsterNumWatcherParam> *const this)
{
  MpKillMonsterNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MpKillMonsterNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05D146-000000000F05D1B8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayBattleWinWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayBattleWinWatcherParam> *const this)
{
  MpPlayBattleWinWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MpPlayBattleWinWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05D600-000000000F05D672
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachRecordWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachRecordWatcherParam> *const this)
{
  MpPlayReachRecordWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MpPlayReachRecordWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05D518-000000000F05D58A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MpPlayReachScoreWatcherParam> *const this)
{
  MpPlayReachScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MpPlayReachScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE724DA-000000000CE7254C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelOnceWeaknessNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelOnceWeaknessNumWatcherParam> *const this)
{
  MuqadasPotionLevelOnceWeaknessNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MuqadasPotionLevelOnceWeaknessNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7230A-000000000CE7237C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelScoreWatcherParam> *const this)
{
  MuqadasPotionLevelScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MuqadasPotionLevelScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE723F2-000000000CE72464
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelWeaknessNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MuqadasPotionLevelWeaknessNumWatcherParam> *const this)
{
  MuqadasPotionLevelWeaknessNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MuqadasPotionLevelWeaknessNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71F6A-000000000CE71FDC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSaveUgcWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSaveUgcWatcherParam> *const this)
{
  MusicGameSaveUgcWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MusicGameSaveUgcWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE71E82-000000000CE71EF4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSettleOthersUgcWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MusicGameSettleOthersUgcWatcherParam> *const this)
{
  MusicGameSettleOthersUgcWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<MusicGameSettleOthersUgcWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05AA0E-000000000F05AA80
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainAvatarWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainAvatarWatcherParam> *const this)
{
  ObtainAvatarWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ObtainAvatarWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05BAC0-000000000F05BB32
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainReliquaryNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainReliquaryNumWatcherParam> *const this)
{
  ObtainReliquaryNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ObtainReliquaryNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0615B0-000000000F061622
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodTypeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodTypeWatcherParam> *const this)
{
  ObtainWoodTypeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ObtainWoodTypeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F061698-000000000F06170A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ObtainWoodWatcherParam> *const this)
{
  ObtainWoodWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ObtainWoodWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060C34-000000000F060CA6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<OfferingLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<OfferingLevelWatcherParam> *const this)
{
  OfferingLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<OfferingLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE713A2-000000000CE71414
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PhotoFinishPosWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PhotoFinishPosWatcherParam> *const this)
{
  PhotoFinishPosWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PhotoFinishPosWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F063502-000000000F063574
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlaceMiracleRingWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlaceMiracleRingWatcherParam> *const this)
{
  PlaceMiracleRingWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlaceMiracleRingWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F700-000000000CE6F772
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerCommonObtainFlowerTypeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerCommonObtainFlowerTypeWatcherParam> *const this)
{
  PlantFlowerCommonObtainFlowerTypeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlantFlowerCommonObtainFlowerTypeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F530-000000000CE6F5A2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerGiveFlowerWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerGiveFlowerWatcherParam> *const this)
{
  PlantFlowerGiveFlowerWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlantFlowerGiveFlowerWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F618-000000000CE6F68A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerObtainFlowerTypeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerObtainFlowerTypeWatcherParam> *const this)
{
  PlantFlowerObtainFlowerTypeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlantFlowerObtainFlowerTypeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F448-000000000CE6F4BA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerSetWishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlantFlowerSetWishWatcherParam> *const this)
{
  PlantFlowerSetWishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlantFlowerSetWishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064FF0-000000000F065062
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayOtherCustomDungeonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayOtherCustomDungeonWatcherParam> *const this)
{
  PlayOtherCustomDungeonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlayOtherCustomDungeonWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05ABF0-000000000F05AC62
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayerLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PlayerLevelWatcherParam> *const this)
{
  PlayerLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PlayerLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B9D8-000000000F05BA4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PossessMaterialNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PossessMaterialNumWatcherParam> *const this)
{
  PossessMaterialNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PossessMaterialNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70616-000000000CE70688
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageLevelPassNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageLevelPassNumWatcherParam> *const this)
{
  PotionStageLevelPassNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PotionStageLevelPassNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE706FE-000000000CE70770
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageObtainMedalNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageObtainMedalNumWatcherParam> *const this)
{
  PotionStageObtainMedalNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PotionStageObtainMedalNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE707E6-000000000CE70858
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageReachTotalScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PotionStageReachTotalScoreWatcherParam> *const this)
{
  PotionStageReachTotalScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PotionStageReachTotalScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7035E-000000000CE703D0
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ProjectionFinishLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ProjectionFinishLevelWatcherParam> *const this)
{
  ProjectionFinishLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ProjectionFinishLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F064F08-000000000F064F7A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PublishCustomDungeonWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<PublishCustomDungeonWatcherParam> *const this)
{
  PublishCustomDungeonWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<PublishCustomDungeonWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05DF38-000000000F05DFAA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<QuestGlobalVarEqualWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<QuestGlobalVarEqualWatcherParam> *const this)
{
  QuestGlobalVarEqualWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<QuestGlobalVarEqualWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05BF48-000000000F05BFBA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RandTaskWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RandTaskWatcherParam> *const this)
{
  RandTaskWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RandTaskWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B7F6-000000000F05B868
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquarySetNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquarySetNumWatcherParam> *const this)
{
  ReliquarySetNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ReliquarySetNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B25A-000000000F05B2CC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeEqualRankLevelWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeEqualRankLevelWatcherParam> *const this)
{
  ReliquaryUpgradeEqualRankLevelWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ReliquaryUpgradeEqualRankLevelWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B078-000000000F05B0EA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ReliquaryUpgradeWatcherParam> *const this)
{
  ReliquaryUpgradeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ReliquaryUpgradeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73462-000000000CE734D4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RockBoardExploreFinishStageWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RockBoardExploreFinishStageWatcherParam> *const this)
{
  RockBoardExploreFinishStageWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RockBoardExploreFinishStageWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE700A6-000000000CE70118
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueCurseNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueCurseNumWatcherParam> *const this)
{
  RogueCurseNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueCurseNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F7E8-000000000CE6F85A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueDestoryGadgetNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueDestoryGadgetNumWatcherParam> *const this)
{
  RogueDestoryGadgetNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueDestoryGadgetNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6FBCC-000000000CE6FC3E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishAllChallengeCellWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishAllChallengeCellWatcherParam> *const this)
{
  RogueFinishAllChallengeCellWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueFinishAllChallengeCellWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6FCB4-000000000CE6FD26
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishNoAvatarDeadWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishNoAvatarDeadWatcherParam> *const this)
{
  RogueFinishNoAvatarDeadWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueFinishNoAvatarDeadWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6FD9C-000000000CE6FE0E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarElementTypeNumLessThanWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarElementTypeNumLessThanWatcherParam> *const this)
{
  RogueFinishWithAvatarElementTypeNumLessThanWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueFinishWithAvatarElementTypeNumLessThanWatcherParam &>(
    &this->watcher_config->param,
    watcher_param);
};

// Line 58: range 000000000CE6FED6-000000000CE6FF48
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarNumLessThanWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarNumLessThanWatcherParam> *const this)
{
  RogueFinishWithAvatarNumLessThanWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueFinishWithAvatarNumLessThanWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6FAE4-000000000CE6FB56
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithoutUsingSpringCellWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithoutUsingSpringCellWatcherParam> *const this)
{
  RogueFinishWithoutUsingSpringCellWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueFinishWithoutUsingSpringCellWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F974-000000000CE6F9E6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueKillMonsterNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueKillMonsterNumWatcherParam> *const this)
{
  RogueKillMonsterNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueKillMonsterNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7018E-000000000CE70200
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueSelectCardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueSelectCardWatcherParam> *const this)
{
  RogueSelectCardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueSelectCardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6FFBE-000000000CE70030
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueShikigamiUpgradeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueShikigamiUpgradeWatcherParam> *const this)
{
  RogueShikigamiUpgradeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<RogueShikigamiUpgradeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6CD4C-000000000CE6CDBE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SeaLampMiniQuestWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SeaLampMiniQuestWatcherParam> *const this)
{
  SeaLampMiniQuestWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SeaLampMiniQuestWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060894-000000000F060906
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ShieldSourceNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ShieldSourceNumWatcherParam> *const this)
{
  ShieldSourceNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<ShieldSourceNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F35A-000000000F05F3CC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SkilledAtRecipeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SkilledAtRecipeWatcherParam> *const this)
{
  SkilledAtRecipeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SkilledAtRecipeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F06097C-000000000F0609EE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponAwakenWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponAwakenWatcherParam> *const this)
{
  SpecifiedWeaponAwakenWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SpecifiedWeaponAwakenWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B43C-000000000F05B4AE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponUpgradeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpecifiedWeaponUpgradeWatcherParam> *const this)
{
  SpecifiedWeaponUpgradeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SpecifiedWeaponUpgradeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE711D2-000000000CE71244
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceGiveFoodTimesWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceGiveFoodTimesWatcherParam> *const this)
{
  SpiceGiveFoodTimesWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SpiceGiveFoodTimesWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE712BA-000000000CE7132C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaSuccessfulTimesWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaSuccessfulTimesWatcherParam> *const this)
{
  SpiceMakeFormulaSuccessfulTimesWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SpiceMakeFormulaSuccessfulTimesWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE710EA-000000000CE7115C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaTimesWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SpiceMakeFormulaTimesWatcherParam> *const this)
{
  SpiceMakeFormulaTimesWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SpiceMakeFormulaTimesWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05C61E-000000000F05C690
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<StartAvatarExpeditionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<StartAvatarExpeditionWatcherParam> *const this)
{
  StartAvatarExpeditionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<StartAvatarExpeditionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F278-000000000CE6F2EA
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoStageScoreReachWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoStageScoreReachWatcherParam> *const this)
{
  SumoStageScoreReachWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SumoStageScoreReachWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6F360-000000000CE6F3D2
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoTotalMaxScoreReachWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<SumoTotalMaxScoreReachWatcherParam> *const this)
{
  SumoTotalMaxScoreReachWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<SumoTotalMaxScoreReachWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05A82C-000000000F05A89E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TakeDungeonFirstPassRewardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TakeDungeonFirstPassRewardWatcherParam> *const this)
{
  TakeDungeonFirstPassRewardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TakeDungeonFirstPassRewardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05E0A8-000000000F05E11A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TalkNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TalkNumWatcherParam> *const this)
{
  TalkNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TalkNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73ABA-000000000CE73B2C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeamChainScoreReachWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeamChainScoreReachWatcherParam> *const this)
{
  TeamChainScoreReachWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TeamChainScoreReachWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05F53C-000000000F05F5AE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeleportWithCertainPortalWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TeleportWithCertainPortalWatcherParam> *const this)
{
  TeleportWithCertainPortalWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TeleportWithCertainPortalWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F060B4C-000000000F060BBE
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TowerStarsNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TowerStarsNumWatcherParam> *const this)
{
  TowerStarsNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TowerStarsNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6CAD8-000000000CE6CB4A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureMapDoneRegionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureMapDoneRegionWatcherParam> *const this)
{
  TreasureMapDoneRegionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TreasureMapDoneRegionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE6CC64-000000000CE6CCD6
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureSeelieDoneRegionWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureSeelieDoneRegionWatcherParam> *const this)
{
  TreasureSeelieDoneRegionWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<TreasureSeelieDoneRegionWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B70E-000000000F05B780
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockRecipeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockRecipeWatcherParam> *const this)
{
  UnlockRecipeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<UnlockRecipeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F063F00-000000000F063F72
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockSpecificAnimalCodexWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UnlockSpecificAnimalCodexWatcherParam> *const this)
{
  UnlockSpecificAnimalCodexWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<UnlockSpecificAnimalCodexWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B626-000000000F05B698
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UpgradeTalentWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UpgradeTalentWatcherParam> *const this)
{
  UpgradeTalentWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<UpgradeTalentWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0607AC-000000000F06081E
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UseEnergySkillNumTimeLimitWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<UseEnergySkillNumTimeLimitWatcherParam> *const this)
{
  UseEnergySkillNumTimeLimitWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<UseEnergySkillNumTimeLimitWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F063A92-000000000F063B04
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDashWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDashWatcherParam> *const this)
{
  VehicleDashWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VehicleDashWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0637DA-000000000F06384C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDurationWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleDurationWatcherParam> *const this)
{
  VehicleDurationWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VehicleDurationWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0638C2-000000000F063934
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleFriendsWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleFriendsWatcherParam> *const this)
{
  VehicleFriendsWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VehicleFriendsWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0639AA-000000000F063A1C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleKilledByMonsterWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VehicleKilledByMonsterWatcherParam> *const this)
{
  VehicleKilledByMonsterWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VehicleKilledByMonsterWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE730C2-000000000CE73134
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageCollectDecorationNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageCollectDecorationNumWatcherParam> *const this)
{
  VintageCollectDecorationNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageCollectDecorationNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72FDA-000000000CE7304C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageDecorationCompleteWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageDecorationCompleteWatcherParam> *const this)
{
  VintageDecorationCompleteWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageDecorationCompleteWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE731AA-000000000CE7321C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageFinishCampWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageFinishCampWatcherParam> *const this)
{
  VintageFinishCampWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageFinishCampWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72EF2-000000000CE72F64
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingBossWeakTimesWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingBossWeakTimesWatcherParam> *const this)
{
  VintageHuntingBossWeakTimesWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingBossWeakTimesWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72B52-000000000CE72BC4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNoBattleNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNoBattleNumWatcherParam> *const this)
{
  VintageHuntingCaptureNoBattleNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingCaptureNoBattleNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72A6A-000000000CE72ADC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureNumWatcherParam> *const this)
{
  VintageHuntingCaptureNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingCaptureNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72C3A-000000000CE72CAC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureTypeNumWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingCaptureTypeNumWatcherParam> *const this)
{
  VintageHuntingCaptureTypeNumWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingCaptureTypeNumWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72E0A-000000000CE72E7C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossInTimeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossInTimeWatcherParam> *const this)
{
  VintageHuntingFinishBossInTimeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingFinishBossInTimeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72D22-000000000CE72D94
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingFinishBossWatcherParam> *const this)
{
  VintageHuntingFinishBossWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingFinishBossWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE72982-000000000CE729F4
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingScoreWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageHuntingScoreWatcherParam> *const this)
{
  VintageHuntingScoreWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageHuntingScoreWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE73292-000000000CE73304
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketCoinAWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketCoinAWatcherParam> *const this)
{
  VintageMarketCoinAWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageMarketCoinAWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE7337A-000000000CE733EC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketContentFinishWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<VintageMarketContentFinishWatcherParam> *const this)
{
  VintageMarketContentFinishWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<VintageMarketContentFinishWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05AF90-000000000F05B002
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponPromoteWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponPromoteWatcherParam> *const this)
{
  WeaponPromoteWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<WeaponPromoteWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05AEA8-000000000F05AF1A
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponUpgradeWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WeaponUpgradeWatcherParam> *const this)
{
  WeaponUpgradeWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<WeaponUpgradeWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05B524-000000000F05B596
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WearReliquaryWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WearReliquaryWatcherParam> *const this)
{
  WearReliquaryWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<WearReliquaryWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000CE70276-000000000CE702E8
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WinterCampSnowmanCompleteWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WinterCampSnowmanCompleteWatcherParam> *const this)
{
  WinterCampSnowmanCompleteWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<WinterCampSnowmanCompleteWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F05C25A-000000000F05C2CC
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldBossRewardWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldBossRewardWatcherParam> *const this)
{
  WorldBossRewardWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<WorldBossRewardWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 58: range 000000000F0596DA-000000000F05974C
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldLevelUpWatcherParam>::~WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<WorldLevelUpWatcherParam> *const this)
{
  WorldLevelUpWatcherParam *watcher_param; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->watcher_param);
  watcher_param = this->watcher_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::any::operator=<WorldLevelUpWatcherParam &>(&this->watcher_config->param, watcher_param);
};

// Line 74: range 000000000CE6E80C-000000000CE6E87F
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringFinishCountWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BounceConjuringFinishCountWatcherParam> *const this,
        data::WatcherConfig *config,
        BounceConjuringFinishCountWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 74: range 000000000CE743D4-000000000CE74447
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelElemReactionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerDungeonLevelElemReactionWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerDungeonLevelElemReactionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 74: range 000000000CE6BF84-000000000CE6BFF7
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultEqWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultEqWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusDifficultEqWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 74: range 000000000CE6E22A-000000000CE6E29D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MistTrialDungeonStatWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MistTrialDungeonStatWatcherParam> *const this,
        data::WatcherConfig *config,
        MistTrialDungeonStatWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 74: range 000000000CE6FE62-000000000CE6FED5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarNumLessThanWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithAvatarNumLessThanWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueFinishWithAvatarNumLessThanWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 129: range 000000000F0289D6-000000000F028A2E
void __cdecl CombatConfigCommonParam::CombatConfigCommonParam(CombatConfigCommonParam *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_feature_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_feature_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_feature_id, v1);
  }
  this->avatar_feature_id = 0;
};

// Line 129: range 000000000F0D3B52-000000000F0D3BEC
void __cdecl CombatConfigCommonParam::CombatConfigCommonParam(
        CombatConfigCommonParam *const this,
        const CombatConfigCommonParam *a2)
{
  uint32_t avatar_feature_id; // ecx
  char v3; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_feature_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_feature_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_feature_id);
  }
  avatar_feature_id = a2->avatar_feature_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->avatar_feature_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->avatar_feature_id, a2);
  }
  this->avatar_feature_id = avatar_feature_id;
};

// Line 129: range 000000000F028A30-000000000F028A4A
void __cdecl CombatConfigCommonParam::~CombatConfigCommonParam(CombatConfigCommonParam *const this)
{
  std::string::~string(this);
};

// Line 137: range 000000000F028A4C-000000000F028AA4
void __cdecl CombatMulticondConfigCommonWatcherParam::CombatMulticondConfigCommonWatcherParam(
        CombatMulticondConfigCommonWatcherParam *const this)
{
  __int64 v1; // rsi

  std::unordered_set<unsigned int>::unordered_set(&this->stage_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic_type, v1);
  }
  this->logic_type = LOGIC_NONE;
};

// Line 137: range 000000000F129100-000000000F12919A
void __cdecl CombatMulticondConfigCommonWatcherParam::CombatMulticondConfigCommonWatcherParam(
        CombatMulticondConfigCommonWatcherParam *const this,
        const CombatMulticondConfigCommonWatcherParam *a2)
{
  data::LogicType logic_type; // ecx
  char v3; // al

  std::unordered_set<unsigned int>::unordered_set(&this->stage_id_set, &a2->stage_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->logic_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->logic_type);
  }
  logic_type = a2->logic_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->logic_type, a2);
  }
  this->logic_type = logic_type;
};

// Line 137: range 000000000F028AA6-000000000F028AC0
void __cdecl CombatMulticondConfigCommonWatcherParam::~CombatMulticondConfigCommonWatcherParam(
        CombatMulticondConfigCommonWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->stage_id_set);
};

// Line 167: range 000000000F028AC2-000000000F028B2A
void __cdecl UnlockGateTempleWatcherParam::UnlockGateTempleWatcherParam(UnlockGateTempleWatcherParam *const this)
{
  __int64 v1; // rsi

  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
};

// Line 167: range 000000000F0D4184-000000000F0D425C
void __cdecl UnlockGateTempleWatcherParam::UnlockGateTempleWatcherParam(
        UnlockGateTempleWatcherParam *const this,
        const UnlockGateTempleWatcherParam *a2)
{
  uint32_t city_id; // ecx
  char v3; // al
  const UnlockGateTempleWatcherParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set, &a2->gadget_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&v4->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->city_id, a2);
  }
  this->city_id = city_id;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &v4->area_id_set);
};

// Line 167: range 000000000F028B2C-000000000F028B56
void __cdecl UnlockGateTempleWatcherParam::~UnlockGateTempleWatcherParam(UnlockGateTempleWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_id_set);
};

// Line 176: range 000000000F028B58-000000000F028B72
void __cdecl UnlockAreaWatcherParam::UnlockAreaWatcherParam(UnlockAreaWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
};

// Line 176: range 000000000F0D4778-000000000F0D479D
void __cdecl UnlockAreaWatcherParam::UnlockAreaWatcherParam(
        UnlockAreaWatcherParam *const this,
        const UnlockAreaWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &a2->area_id_set);
};

// Line 176: range 000000000F028B74-000000000F028B8E
void __cdecl UnlockAreaWatcherParam::~UnlockAreaWatcherParam(UnlockAreaWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
};

// Line 181: range 000000000F0DE260-000000000F0DE285
void __cdecl ElementReactionTimeLimitNumWatcherParam::ElementReactionTimeLimitNumWatcherParam(
        ElementReactionTimeLimitNumWatcherParam *const this,
        const ElementReactionTimeLimitNumWatcherParam *a2)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->type_num_map, &a2->type_num_map);
};

// Line 181: range 000000000F0E3AB8-000000000F0E3ADD
void __cdecl WeeklyBossKillWatcherParam::WeeklyBossKillWatcherParam(
        WeeklyBossKillWatcherParam *const this,
        const WeeklyBossKillWatcherParam *a2)
{
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(
    &this->group_monsters_config_map,
    &a2->group_monsters_config_map);
};

// Line 183: range 000000000F028B90-000000000F028C27
void __cdecl UnlockTransPointWatcherParam::UnlockTransPointWatcherParam(UnlockTransPointWatcherParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->city_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_normal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_normal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_normal, v2, v3);
  this->is_normal = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
};

// Line 183: range 000000000F0D4AF6-000000000F0D4C0E
void __cdecl UnlockTransPointWatcherParam::UnlockTransPointWatcherParam(
        UnlockTransPointWatcherParam *const this,
        const UnlockTransPointWatcherParam *a2)
{
  uint32_t city_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_normal; // cl
  char v7; // dl
  __int64 v8; // rdx
  const UnlockTransPointWatcherParam *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  city_id = a2->city_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->city_id = city_id;
  v4 = ((_BYTE)v9 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_normal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_normal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_normal, v4, v5);
  is_normal = v9->is_normal;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_normal >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_normal, v4, v8);
  this->is_normal = is_normal;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &v9->area_id_set);
};

// Line 183: range 000000000F028C28-000000000F028C46
void __cdecl UnlockTransPointWatcherParam::~UnlockTransPointWatcherParam(UnlockTransPointWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
};

// Line 192: range 000000000F028C48-000000000F028CB0
void __cdecl OpenChestWithGadgetIdWatcherParam::OpenChestWithGadgetIdWatcherParam(
        OpenChestWithGadgetIdWatcherParam *const this)
{
  __int64 v1; // rsi

  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
};

// Line 192: range 000000000F0D4F68-000000000F0D5040
void __cdecl OpenChestWithGadgetIdWatcherParam::OpenChestWithGadgetIdWatcherParam(
        OpenChestWithGadgetIdWatcherParam *const this,
        const OpenChestWithGadgetIdWatcherParam *a2)
{
  uint32_t city_id; // ecx
  char v3; // al
  const OpenChestWithGadgetIdWatcherParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set, &a2->gadget_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&v4->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->city_id, a2);
  }
  this->city_id = city_id;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &v4->area_id_set);
};

// Line 192: range 000000000F028CB2-000000000F028CDC
void __cdecl OpenChestWithGadgetIdWatcherParam::~OpenChestWithGadgetIdWatcherParam(
        OpenChestWithGadgetIdWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_id_set);
};

// Line 209: range 000000000F028DAC-000000000F028E01
void __cdecl MonsterDieWatcherParam::MonsterDieWatcherParam(MonsterDieWatcherParam *const this)
{
  __int64 v1; // rsi

  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set);
  if ( *(char *)(((unsigned __int64)&this->is_allow_mp >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_allow_mp, v1, &this->is_allow_mp);
  this->is_allow_mp = 0;
};

// Line 209: range 000000000F0D58D0-000000000F0D596B
void __cdecl MonsterDieWatcherParam::MonsterDieWatcherParam(
        MonsterDieWatcherParam *const this,
        const MonsterDieWatcherParam *a2)
{
  bool is_allow_mp; // cl
  char v3; // al

  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set, &a2->monster_id_set);
  if ( *(char *)(((unsigned __int64)&a2->is_allow_mp >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_allow_mp, a2, &a2->is_allow_mp);
  is_allow_mp = a2->is_allow_mp;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_allow_mp >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_allow_mp, a2, &this->is_allow_mp);
  }
  this->is_allow_mp = is_allow_mp;
};

// Line 209: range 000000000F028E02-000000000F028E1C
void __cdecl MonsterDieWatcherParam::~MonsterDieWatcherParam(MonsterDieWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_id_set);
};

// Line 223: range 000000000F0E43EE-000000000F0E4481
void __cdecl KillGadgetsBySpecificSkillWatcherParam::KillGadgetsBySpecificSkillWatcherParam(
        KillGadgetsBySpecificSkillWatcherParam *const this,
        const KillGadgetsBySpecificSkillWatcherParam *a2)
{
  std::set<std::string>::set(&this->ability_name_set, &a2->ability_name_set);
  std::set<unsigned int>::set(&this->gadget_id_set, &a2->gadget_id_set);
  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
};

// Line 233: range 000000000F028E1E-000000000F028E38
void __cdecl PlatformStartMoveWatcherParam::PlatformStartMoveWatcherParam(PlatformStartMoveWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set);
};

// Line 233: range 000000000F0D671C-000000000F0D6741
void __cdecl PlatformStartMoveWatcherParam::PlatformStartMoveWatcherParam(
        PlatformStartMoveWatcherParam *const this,
        const PlatformStartMoveWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set, &a2->gadget_id_set);
};

// Line 233: range 000000000F028E3A-000000000F028E54
void __cdecl PlatformStartMoveWatcherParam::~PlatformStartMoveWatcherParam(PlatformStartMoveWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_id_set);
};

// Line 240: range 000000000F0295AE-000000000F029615
void __cdecl GroupNotifyWatcherParam::GroupNotifyWatcherParam(GroupNotifyWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->city_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::set(&this->param_set);
};

// Line 240: range 000000000F0DDE06-000000000F0DDEE0
void __cdecl GroupNotifyWatcherParam::GroupNotifyWatcherParam(
        GroupNotifyWatcherParam *const this,
        const GroupNotifyWatcherParam *a2)
{
  uint32_t city_id; // ecx
  char v3; // al
  const GroupNotifyWatcherParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  city_id = a2->city_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->city_id = city_id;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &v4->area_id_set);
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::set(&this->param_set, &v4->param_set);
};

// Line 240: range 000000000F029616-000000000F029644
void __cdecl GroupNotifyWatcherParam::~GroupNotifyWatcherParam(GroupNotifyWatcherParam *const this)
{
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::~set(&this->param_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
};

// Line 249: range 000000000F028EAE-000000000F028EC8
void __cdecl TakeGeneralRewardWatcherParam::TakeGeneralRewardWatcherParam(TakeGeneralRewardWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set);
};

// Line 249: range 000000000F0D6E76-000000000F0D6E9B
void __cdecl TakeGeneralRewardWatcherParam::TakeGeneralRewardWatcherParam(
        TakeGeneralRewardWatcherParam *const this,
        const TakeGeneralRewardWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set, &a2->gadget_id_set);
};

// Line 249: range 000000000F028ECA-000000000F028EE4
void __cdecl TakeGeneralRewardWatcherParam::~TakeGeneralRewardWatcherParam(TakeGeneralRewardWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_id_set);
};

// Line 256: range 000000000F028EE6-000000000F028F00
void __cdecl InteractGadgetWithInteractIdWatcherParam::InteractGadgetWithInteractIdWatcherParam(
        InteractGadgetWithInteractIdWatcherParam *const this)
{
  std::set<unsigned int>::set(&this->gadget_interact_id_set);
};

// Line 256: range 000000000F12A90E-000000000F12A933
void __cdecl InteractGadgetWithInteractIdWatcherParam::InteractGadgetWithInteractIdWatcherParam(
        InteractGadgetWithInteractIdWatcherParam *const this,
        const InteractGadgetWithInteractIdWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->gadget_interact_id_set, &a2->gadget_interact_id_set);
};

// Line 256: range 000000000F028F02-000000000F028F1C
void __cdecl InteractGadgetWithInteractIdWatcherParam::~InteractGadgetWithInteractIdWatcherParam(
        InteractGadgetWithInteractIdWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->gadget_interact_id_set);
};

// Line 263: range 000000000F028F1E-000000000F028F38
void __cdecl TakeDungeonFirstPassRewardWatcherParam::TakeDungeonFirstPassRewardWatcherParam(
        TakeDungeonFirstPassRewardWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->dungeon_id_set);
};

// Line 263: range 000000000F12AC8C-000000000F12ACB1
void __cdecl TakeDungeonFirstPassRewardWatcherParam::TakeDungeonFirstPassRewardWatcherParam(
        TakeDungeonFirstPassRewardWatcherParam *const this,
        const TakeDungeonFirstPassRewardWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->dungeon_id_set, &a2->dungeon_id_set);
};

// Line 263: range 000000000F028F3A-000000000F028F54
void __cdecl TakeDungeonFirstPassRewardWatcherParam::~TakeDungeonFirstPassRewardWatcherParam(
        TakeDungeonFirstPassRewardWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->dungeon_id_set);
};

// Line 304: range 000000000CE73C42-000000000CE73CB5
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishWorldLevelWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<BrickBreakerFinishWorldLevelWatcherParam> *const this,
        data::WatcherConfig *config,
        BrickBreakerFinishWorldLevelWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 367: range 000000000F028F96-000000000F028FB0
void __cdecl ObtainMaterialNumWatcherParam::ObtainMaterialNumWatcherParam(ObtainMaterialNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->material_id_set);
};

// Line 367: range 000000000F0D8A9A-000000000F0D8ABF
void __cdecl ObtainMaterialNumWatcherParam::ObtainMaterialNumWatcherParam(
        ObtainMaterialNumWatcherParam *const this,
        const ObtainMaterialNumWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->material_id_set, &a2->material_id_set);
};

// Line 367: range 000000000F028FB2-000000000F028FCC
void __cdecl ObtainMaterialNumWatcherParam::~ObtainMaterialNumWatcherParam(ObtainMaterialNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->material_id_set);
};

// Line 425: range 000000000F028FCE-000000000F028FE8
void __cdecl AvatarExpeditionWatcherParam::AvatarExpeditionWatcherParam(AvatarExpeditionWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->city_id_set);
};

// Line 425: range 000000000F12EFA6-000000000F12EFCB
void __cdecl AvatarExpeditionWatcherParam::AvatarExpeditionWatcherParam(
        AvatarExpeditionWatcherParam *const this,
        const AvatarExpeditionWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->city_id_set, &a2->city_id_set);
};

// Line 425: range 000000000F028FEA-000000000F029004
void __cdecl AvatarExpeditionWatcherParam::~AvatarExpeditionWatcherParam(AvatarExpeditionWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->city_id_set);
};

// Line 432: range 000000000F029006-000000000F02911C
void __cdecl FinishTowerLevelWatcherParam::FinishTowerLevelWatcherParam(FinishTowerLevelWatcherParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->target_tower_floor_index = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_tower_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_tower_level_index >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_tower_level_index, v2);
  }
  this->target_tower_level_index = 0;
  if ( *(char *)(((unsigned __int64)&this->is_trace_back >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trace_back, v2, &this->is_trace_back);
  this->is_trace_back = 1;
  std::unordered_set<unsigned int>::unordered_set(&this->use_avatar_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic_type, v2);
  }
  this->logic_type = LOGIC_AND;
};

// Line 432: range 000000000F12F324-000000000F12F52C
void __cdecl FinishTowerLevelWatcherParam::FinishTowerLevelWatcherParam(
        FinishTowerLevelWatcherParam *const this,
        const FinishTowerLevelWatcherParam *a2)
{
  uint32_t target_tower_floor_index; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t target_tower_level_index; // ecx
  char v6; // dl
  bool is_trace_back; // cl
  char v8; // al
  std::unordered_set<unsigned int> *p_use_avatar_id_set; // rsi
  data::LogicType logic_type; // ecx
  char v11; // al
  const FinishTowerLevelWatcherParam *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  target_tower_floor_index = a2->target_tower_floor_index;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->target_tower_floor_index = target_tower_floor_index;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->target_tower_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->target_tower_level_index >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->target_tower_level_index);
  }
  target_tower_level_index = v12->target_tower_level_index;
  v6 = *(_BYTE *)(((unsigned __int64)&this->target_tower_level_index >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->target_tower_level_index, v4);
  this->target_tower_level_index = target_tower_level_index;
  if ( *(char *)(((unsigned __int64)&v12->is_trace_back >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_trace_back, v4, &v12->is_trace_back);
  is_trace_back = v12->is_trace_back;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_trace_back >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->is_trace_back, v4, &this->is_trace_back);
  }
  this->is_trace_back = is_trace_back;
  p_use_avatar_id_set = &v12->use_avatar_id_set;
  std::unordered_set<unsigned int>::unordered_set(&this->use_avatar_id_set, &v12->use_avatar_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&v12->logic_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->logic_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->logic_type);
  }
  logic_type = v12->logic_type;
  v11 = *(_BYTE *)(((unsigned __int64)&this->logic_type >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_use_avatar_id_set) = v11 != 0;
    __asan_report_store4(&this->logic_type, p_use_avatar_id_set);
  }
  this->logic_type = logic_type;
};

// Line 432: range 000000000F02911E-000000000F02913C
void __cdecl FinishTowerLevelWatcherParam::~FinishTowerLevelWatcherParam(FinishTowerLevelWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->use_avatar_id_set);
};

// Line 450: range 000000000F02913E-000000000F029158
void __cdecl FinishDungeonWatcherParam::FinishDungeonWatcherParam(FinishDungeonWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->dungeon_id_set);
};

// Line 450: range 000000000F0D9678-000000000F0D969D
void __cdecl FinishDungeonWatcherParam::FinishDungeonWatcherParam(
        FinishDungeonWatcherParam *const this,
        const FinishDungeonWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->dungeon_id_set, &a2->dungeon_id_set);
};

// Line 450: range 000000000F02915A-000000000F029174
void __cdecl FinishDungeonWatcherParam::~FinishDungeonWatcherParam(FinishDungeonWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->dungeon_id_set);
};

// Line 469: range 000000000F029176-000000000F029190
void __cdecl OpenBlossomChestWatcherParam::OpenBlossomChestWatcherParam(OpenBlossomChestWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->refresh_type_set);
};

// Line 469: range 000000000F0D9AFA-000000000F0D9B1F
void __cdecl OpenBlossomChestWatcherParam::OpenBlossomChestWatcherParam(
        OpenBlossomChestWatcherParam *const this,
        const OpenBlossomChestWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->refresh_type_set, &a2->refresh_type_set);
};

// Line 469: range 000000000F029192-000000000F0291AC
void __cdecl OpenBlossomChestWatcherParam::~OpenBlossomChestWatcherParam(OpenBlossomChestWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->refresh_type_set);
};

// Line 476: range 000000000F0291AE-000000000F0291C8
void __cdecl FinishBlossomProgressWatcherParam::FinishBlossomProgressWatcherParam(
        FinishBlossomProgressWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->refresh_id_set);
};

// Line 476: range 000000000F0D9E78-000000000F0D9E9D
void __cdecl FinishBlossomProgressWatcherParam::FinishBlossomProgressWatcherParam(
        FinishBlossomProgressWatcherParam *const this,
        const FinishBlossomProgressWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->refresh_id_set, &a2->refresh_id_set);
};

// Line 476: range 000000000F0291CA-000000000F0291E4
void __cdecl FinishBlossomProgressWatcherParam::~FinishBlossomProgressWatcherParam(
        FinishBlossomProgressWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->refresh_id_set);
};

// Line 483: range 000000000F0298AC-000000000F029949
void __cdecl FinishBlossomGroupVariableGTWatcherParam::FinishBlossomGroupVariableGTWatcherParam(
        FinishBlossomGroupVariableGTWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->refresh_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->variable_value, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->variable_value = 0;
  std::string::basic_string(&this->variable_name);
};

// Line 483: range 000000000F0E1058-000000000F0E1175
void __cdecl FinishBlossomGroupVariableGTWatcherParam::FinishBlossomGroupVariableGTWatcherParam(
        FinishBlossomGroupVariableGTWatcherParam *const this,
        const FinishBlossomGroupVariableGTWatcherParam *a2)
{
  uint32_t refresh_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t variable_value; // ecx
  char v6; // dl
  const FinishBlossomGroupVariableGTWatcherParam *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  refresh_type = a2->refresh_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->refresh_type = refresh_type;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->variable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->variable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->variable_value);
  }
  variable_value = v7->variable_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->variable_value, v4);
  }
  this->variable_value = variable_value;
  std::string::basic_string(&this->variable_name, &v7->variable_name);
};

// Line 483: range 000000000F02994A-000000000F029968
void __cdecl FinishBlossomGroupVariableGTWatcherParam::~FinishBlossomGroupVariableGTWatcherParam(
        FinishBlossomGroupVariableGTWatcherParam *const this)
{
  std::string::~string(&this->variable_name);
};

// Line 534: range 000000000F0291E6-000000000F029210
void __cdecl BuyShopGoodsWatcherParam::BuyShopGoodsWatcherParam(BuyShopGoodsWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->shop_type_set);
  std::unordered_set<unsigned int>::unordered_set(&this->goods_type_set);
};

// Line 534: range 000000000F0DA85C-000000000F0DA8BF
void __cdecl BuyShopGoodsWatcherParam::BuyShopGoodsWatcherParam(
        BuyShopGoodsWatcherParam *const this,
        const BuyShopGoodsWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->shop_type_set, &a2->shop_type_set);
  std::unordered_set<unsigned int>::unordered_set(&this->goods_type_set, &a2->goods_type_set);
};

// Line 534: range 000000000F029212-000000000F02923C
void __cdecl BuyShopGoodsWatcherParam::~BuyShopGoodsWatcherParam(BuyShopGoodsWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->goods_type_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->shop_type_set);
};

// Line 549: range 000000000F02923E-000000000F029295
void __cdecl BuyShopGoodsAndWatcherParam::BuyShopGoodsAndWatcherParam(BuyShopGoodsAndWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->shop_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->goods_id_set);
};

// Line 549: range 000000000F13100E-000000000F1310A6
void __cdecl BuyShopGoodsAndWatcherParam::BuyShopGoodsAndWatcherParam(
        BuyShopGoodsAndWatcherParam *const this,
        const BuyShopGoodsAndWatcherParam *a2)
{
  uint32_t shop_id; // ecx
  char v3; // al
  const BuyShopGoodsAndWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  shop_id = a2->shop_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->shop_id = shop_id;
  std::unordered_set<unsigned int>::unordered_set(&this->goods_id_set, &v4->goods_id_set);
};

// Line 549: range 000000000F029296-000000000F0292B4
void __cdecl BuyShopGoodsAndWatcherParam::~BuyShopGoodsAndWatcherParam(BuyShopGoodsAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->goods_id_set);
};

// Line 564: range 000000000F0292B6-000000000F0292D0
void __cdecl KillGroupMonsterWatcherParam::KillGroupMonsterWatcherParam(KillGroupMonsterWatcherParam *const this)
{
  std::vector<unsigned int>::vector(&this->group_id_vec);
};

// Line 564: range 000000000F0DAD9E-000000000F0DADC3
void __cdecl KillGroupMonsterWatcherParam::KillGroupMonsterWatcherParam(
        KillGroupMonsterWatcherParam *const this,
        const KillGroupMonsterWatcherParam *a2)
{
  std::vector<unsigned int>::vector(&this->group_id_vec, &a2->group_id_vec);
};

// Line 564: range 000000000F0292D2-000000000F0292EC
void __cdecl KillGroupMonsterWatcherParam::~KillGroupMonsterWatcherParam(KillGroupMonsterWatcherParam *const this)
{
  std::vector<unsigned int>::~vector(&this->group_id_vec);
};

// Line 578: range 000000000F0292EE-000000000F029339
void __cdecl MpPlayGroupStatisticWatcherParam::MpPlayGroupStatisticWatcherParam(
        MpPlayGroupStatisticWatcherParam *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->variable_value, v1);
  this->variable_value = 0LL;
};

// Line 578: range 000000000F0DB55E-000000000F0DB652
void __cdecl MpPlayGroupStatisticWatcherParam::MpPlayGroupStatisticWatcherParam(
        MpPlayGroupStatisticWatcherParam *const this,
        MpPlayGroupStatisticWatcherParam *a2)
{
  int64_t variable_value; // rdx
  data::OrderingType order_type; // ecx
  char v4; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->variable_value >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->variable_value);
  variable_value = a2->variable_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->variable_value, a2);
  this->variable_value = variable_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->order_type);
  }
  order_type = a2->order_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->order_type, a2);
  }
  this->order_type = order_type;
};

// Line 578: range 000000000F0DB19E-000000000F0DB292
void __cdecl MpPlayGroupStatisticWatcherParam::MpPlayGroupStatisticWatcherParam(
        MpPlayGroupStatisticWatcherParam *const this,
        const MpPlayGroupStatisticWatcherParam *a2)
{
  int64_t variable_value; // rdx
  data::OrderingType order_type; // ecx
  char v4; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->variable_value >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->variable_value);
  variable_value = a2->variable_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->variable_value, a2);
  this->variable_value = variable_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->order_type);
  }
  order_type = a2->order_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->order_type, a2);
  }
  this->order_type = order_type;
};

// Line 578: range 000000000F02933A-000000000F029354
void __cdecl MpPlayGroupStatisticWatcherParam::~MpPlayGroupStatisticWatcherParam(
        MpPlayGroupStatisticWatcherParam *const this)
{
  std::string::~string(this);
};

// Line 611: range 000000000F029356-000000000F029370
void __cdecl CostMaterialWatcherParam::CostMaterialWatcherParam(CostMaterialWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set);
};

// Line 611: range 000000000F0DB846-000000000F0DB86B
void __cdecl CostMaterialWatcherParam::CostMaterialWatcherParam(
        CostMaterialWatcherParam *const this,
        const CostMaterialWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set, &a2->item_id_set);
};

// Line 611: range 000000000F029372-000000000F02938C
void __cdecl CostMaterialWatcherParam::~CostMaterialWatcherParam(CostMaterialWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->item_id_set);
};

// Line 623: range 000000000CE6B400-000000000CE6B473
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleElementScoreWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<CrucibleElementScoreWatcherParam> *const this,
        data::WatcherConfig *config,
        CrucibleElementScoreWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 629: range 000000000F02938E-000000000F0293A8
void __cdecl UseItemWatcherParam::UseItemWatcherParam(UseItemWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set);
};

// Line 629: range 000000000F0DC092-000000000F0DC0B7
void __cdecl UseItemWatcherParam::UseItemWatcherParam(UseItemWatcherParam *const this, const UseItemWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set, &a2->item_id_set);
};

// Line 629: range 000000000F0293AA-000000000F0293C4
void __cdecl UseItemWatcherParam::~UseItemWatcherParam(UseItemWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->item_id_set);
};

// Line 633: range 000000000CE6BCDA-000000000CE6BD4D
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<MechanicusDifficultWatcherParam> *const this,
        data::WatcherConfig *config,
        MechanicusDifficultWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 633: range 000000000CE6FA70-000000000CE6FAE3
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithoutUsingSpringCellWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<RogueFinishWithoutUsingSpringCellWatcherParam> *const this,
        data::WatcherConfig *config,
        RogueFinishWithoutUsingSpringCellWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 633: range 000000000CE6CBF0-000000000CE6CC63
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureSeelieDoneRegionWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<TreasureSeelieDoneRegionWatcherParam> *const this,
        data::WatcherConfig *config,
        TreasureSeelieDoneRegionWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 636: range 000000000F0293C6-000000000F02942D
void __cdecl LevelAvatarFinishDungeonCountWatcherParam::LevelAvatarFinishDungeonCountWatcherParam(
        LevelAvatarFinishDungeonCountWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->avatar_level = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->avatar_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->dungeon_id_set);
};

// Line 636: range 000000000F0DC410-000000000F0DC4EA
void __cdecl LevelAvatarFinishDungeonCountWatcherParam::LevelAvatarFinishDungeonCountWatcherParam(
        LevelAvatarFinishDungeonCountWatcherParam *const this,
        const LevelAvatarFinishDungeonCountWatcherParam *a2)
{
  uint32_t avatar_level; // ecx
  char v3; // al
  const LevelAvatarFinishDungeonCountWatcherParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  avatar_level = a2->avatar_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->avatar_level = avatar_level;
  std::unordered_set<unsigned int>::unordered_set(&this->avatar_id_set, &v4->avatar_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->dungeon_id_set, &v4->dungeon_id_set);
};

// Line 636: range 000000000F02942E-000000000F02945C
void __cdecl LevelAvatarFinishDungeonCountWatcherParam::~LevelAvatarFinishDungeonCountWatcherParam(
        LevelAvatarFinishDungeonCountWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->dungeon_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->avatar_id_set);
};

// Line 646: range 000000000F02945E-000000000F029478
void __cdecl FinishQuestAndWatcherParam::FinishQuestAndWatcherParam(FinishQuestAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->quest_id_set);
};

// Line 646: range 000000000F0DC844-000000000F0DC869
void __cdecl FinishQuestAndWatcherParam::FinishQuestAndWatcherParam(
        FinishQuestAndWatcherParam *const this,
        const FinishQuestAndWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->quest_id_set, &a2->quest_id_set);
};

// Line 646: range 000000000F02947A-000000000F029494
void __cdecl FinishQuestAndWatcherParam::~FinishQuestAndWatcherParam(FinishQuestAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->quest_id_set);
};

// Line 653: range 000000000F029496-000000000F0294B0
void __cdecl FinishQuestOrWatcherParam::FinishQuestOrWatcherParam(FinishQuestOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->quest_id_set);
};

// Line 653: range 000000000F0DCBC2-000000000F0DCBE7
void __cdecl FinishQuestOrWatcherParam::FinishQuestOrWatcherParam(
        FinishQuestOrWatcherParam *const this,
        const FinishQuestOrWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->quest_id_set, &a2->quest_id_set);
};

// Line 653: range 000000000F0294B2-000000000F0294CC
void __cdecl FinishQuestOrWatcherParam::~FinishQuestOrWatcherParam(FinishQuestOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->quest_id_set);
};

// Line 683: range 000000000F0294CE-000000000F0294E8
void __cdecl FinishParentQuestAndWatcherParam::FinishParentQuestAndWatcherParam(
        FinishParentQuestAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->parent_quest_id_set);
};

// Line 683: range 000000000F133610-000000000F133635
void __cdecl FinishParentQuestAndWatcherParam::FinishParentQuestAndWatcherParam(
        FinishParentQuestAndWatcherParam *const this,
        const FinishParentQuestAndWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->parent_quest_id_set, &a2->parent_quest_id_set);
};

// Line 683: range 000000000F0294EA-000000000F029504
void __cdecl FinishParentQuestAndWatcherParam::~FinishParentQuestAndWatcherParam(
        FinishParentQuestAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->parent_quest_id_set);
};

// Line 690: range 000000000F029506-000000000F029520
void __cdecl FinishParentQuestOrWatcherParam::FinishParentQuestOrWatcherParam(
        FinishParentQuestOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->parent_quest_id_set);
};

// Line 690: range 000000000F13398E-000000000F1339B3
void __cdecl FinishParentQuestOrWatcherParam::FinishParentQuestOrWatcherParam(
        FinishParentQuestOrWatcherParam *const this,
        const FinishParentQuestOrWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->parent_quest_id_set, &a2->parent_quest_id_set);
};

// Line 690: range 000000000F029522-000000000F02953C
void __cdecl FinishParentQuestOrWatcherParam::~FinishParentQuestOrWatcherParam(
        FinishParentQuestOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->parent_quest_id_set);
};

// Line 699: range 000000000F029646-000000000F029660
void __cdecl ElementReactionTimeLimitNumWatcherParam::ElementReactionTimeLimitNumWatcherParam(
        ElementReactionTimeLimitNumWatcherParam *const this)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->type_num_map);
};

// Line 699: range 000000000F029662-000000000F02967C
void __cdecl ElementReactionTimeLimitNumWatcherParam::~ElementReactionTimeLimitNumWatcherParam(
        ElementReactionTimeLimitNumWatcherParam *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->type_num_map);
};

// Line 707: range 000000000F02967E-000000000F029698
void __cdecl ElementReactionTimeLimitKillNumWatcherParam::ElementReactionTimeLimitKillNumWatcherParam(
        ElementReactionTimeLimitKillNumWatcherParam *const this)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->type_num_map);
};

// Line 707: range 000000000F0DE5DE-000000000F0DE603
void __cdecl ElementReactionTimeLimitKillNumWatcherParam::ElementReactionTimeLimitKillNumWatcherParam(
        ElementReactionTimeLimitKillNumWatcherParam *const this,
        const ElementReactionTimeLimitKillNumWatcherParam *a2)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->type_num_map, &a2->type_num_map);
};

// Line 707: range 000000000F02969A-000000000F0296B4
void __cdecl ElementReactionTimeLimitKillNumWatcherParam::~ElementReactionTimeLimitKillNumWatcherParam(
        ElementReactionTimeLimitKillNumWatcherParam *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->type_num_map);
};

// Line 715: range 000000000F0296B6-000000000F0296D0
void __cdecl ElementReactionTimeLimitDamageNumWatcherParam::ElementReactionTimeLimitDamageNumWatcherParam(
        ElementReactionTimeLimitDamageNumWatcherParam *const this)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->type_num_map);
};

// Line 715: range 000000000F0DE95C-000000000F0DE981
void __cdecl ElementReactionTimeLimitDamageNumWatcherParam::ElementReactionTimeLimitDamageNumWatcherParam(
        ElementReactionTimeLimitDamageNumWatcherParam *const this,
        const ElementReactionTimeLimitDamageNumWatcherParam *a2)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->type_num_map, &a2->type_num_map);
};

// Line 715: range 000000000F0296D2-000000000F0296EC
void __cdecl ElementReactionTimeLimitDamageNumWatcherParam::~ElementReactionTimeLimitDamageNumWatcherParam(
        ElementReactionTimeLimitDamageNumWatcherParam *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->type_num_map);
};

// Line 769: range 000000000F0296EE-000000000F02975A
void __cdecl SitDownInPointWatcherParam::SitDownInPointWatcherParam(SitDownInPointWatcherParam *const this)
{
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->scene_id = 0;
};

// Line 798: range 000000000F02975C-000000000F029776
void __cdecl KilledByCertainMonsterWatcherParam::KilledByCertainMonsterWatcherParam(
        KilledByCertainMonsterWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->describel_id_set);
};

// Line 798: range 000000000F0DF6B2-000000000F0DF6D7
void __cdecl KilledByCertainMonsterWatcherParam::KilledByCertainMonsterWatcherParam(
        KilledByCertainMonsterWatcherParam *const this,
        const KilledByCertainMonsterWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->describel_id_set, &a2->describel_id_set);
};

// Line 798: range 000000000F029778-000000000F029792
void __cdecl KilledByCertainMonsterWatcherParam::~KilledByCertainMonsterWatcherParam(
        KilledByCertainMonsterWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->describel_id_set);
};

// Line 826: range 000000000F029794-000000000F0297AE
void __cdecl MpKillMonsterNumWatcherParam::MpKillMonsterNumWatcherParam(MpKillMonsterNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_type_id_set);
};

// Line 826: range 000000000F136E66-000000000F136E8B
void __cdecl MpKillMonsterNumWatcherParam::MpKillMonsterNumWatcherParam(
        MpKillMonsterNumWatcherParam *const this,
        const MpKillMonsterNumWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_type_id_set, &a2->monster_type_id_set);
};

// Line 826: range 000000000F0297B0-000000000F0297CA
void __cdecl MpKillMonsterNumWatcherParam::~MpKillMonsterNumWatcherParam(MpKillMonsterNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_type_id_set);
};

// Line 833: range 000000000F0297CC-000000000F0297E6
void __cdecl MpAreaGatherTimesWatcherParam::MpAreaGatherTimesWatcherParam(MpAreaGatherTimesWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
};

// Line 833: range 000000000F0DFC38-000000000F0DFC5D
void __cdecl MpAreaGatherTimesWatcherParam::MpAreaGatherTimesWatcherParam(
        MpAreaGatherTimesWatcherParam *const this,
        const MpAreaGatherTimesWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &a2->area_id_set);
};

// Line 833: range 000000000F0297E8-000000000F029802
void __cdecl MpAreaGatherTimesWatcherParam::~MpAreaGatherTimesWatcherParam(MpAreaGatherTimesWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
};

// Line 870: range 000000000F028E56-000000000F028E80
void __cdecl WorldGatherWatcherParam::WorldGatherWatcherParam(WorldGatherWatcherParam *const this)
{
  std::set<unsigned int>::set(&this->group_id_set);
  std::set<unsigned int>::set(&this->point_type_set);
};

// Line 870: range 000000000F0D6DC8-000000000F0D6E08
void __cdecl WorldGatherWatcherParam::WorldGatherWatcherParam(
        WorldGatherWatcherParam *const this,
        WorldGatherWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
  std::set<unsigned int>::set(&this->point_type_set, &a2->point_type_set);
};

// Line 870: range 000000000F0D6A9A-000000000F0D6AFD
void __cdecl WorldGatherWatcherParam::WorldGatherWatcherParam(
        WorldGatherWatcherParam *const this,
        const WorldGatherWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
  std::set<unsigned int>::set(&this->point_type_set, &a2->point_type_set);
};

// Line 870: range 000000000F028E82-000000000F028EAC
void __cdecl WorldGatherWatcherParam::~WorldGatherWatcherParam(WorldGatherWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->point_type_set);
  std::set<unsigned int>::~set(&this->group_id_set);
};

// Line 917: range 000000000F029804-000000000F02981E
void __cdecl CityReputationFinishRequestWatcherParam::CityReputationFinishRequestWatcherParam(
        CityReputationFinishRequestWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->city_id_set);
};

// Line 917: range 000000000F1394AA-000000000F1394CF
void __cdecl CityReputationFinishRequestWatcherParam::CityReputationFinishRequestWatcherParam(
        CityReputationFinishRequestWatcherParam *const this,
        const CityReputationFinishRequestWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->city_id_set, &a2->city_id_set);
};

// Line 917: range 000000000F029820-000000000F02983A
void __cdecl CityReputationFinishRequestWatcherParam::~CityReputationFinishRequestWatcherParam(
        CityReputationFinishRequestWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->city_id_set);
};

// Line 940: range 000000000F029874-000000000F02988E
void __cdecl BattleForMonsterDieOrWatcherParam::BattleForMonsterDieOrWatcherParam(
        BattleForMonsterDieOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set);
};

// Line 940: range 000000000F0E09CE-000000000F0E09F3
void __cdecl BattleForMonsterDieOrWatcherParam::BattleForMonsterDieOrWatcherParam(
        BattleForMonsterDieOrWatcherParam *const this,
        const BattleForMonsterDieOrWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set, &a2->monster_id_set);
};

// Line 940: range 000000000F029890-000000000F0298AA
void __cdecl BattleForMonsterDieOrWatcherParam::~BattleForMonsterDieOrWatcherParam(
        BattleForMonsterDieOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_id_set);
};

// Line 947: range 000000000F02983C-000000000F029856
void __cdecl BattleForMonsterDieAndWatcherParam::BattleForMonsterDieAndWatcherParam(
        BattleForMonsterDieAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set);
};

// Line 947: range 000000000F0E0650-000000000F0E0675
void __cdecl BattleForMonsterDieAndWatcherParam::BattleForMonsterDieAndWatcherParam(
        BattleForMonsterDieAndWatcherParam *const this,
        const BattleForMonsterDieAndWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set, &a2->monster_id_set);
};

// Line 947: range 000000000F029858-000000000F029872
void __cdecl BattleForMonsterDieAndWatcherParam::~BattleForMonsterDieAndWatcherParam(
        BattleForMonsterDieAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_id_set);
};

// Line 1001: range 000000000F02996A-000000000F029984
void __cdecl UnlockSpecificRecipeOrWatcherParam::UnlockSpecificRecipeOrWatcherParam(
        UnlockSpecificRecipeOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->recipe_id_set);
};

// Line 1001: range 000000000F0E14CE-000000000F0E14F3
void __cdecl UnlockSpecificRecipeOrWatcherParam::UnlockSpecificRecipeOrWatcherParam(
        UnlockSpecificRecipeOrWatcherParam *const this,
        const UnlockSpecificRecipeOrWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->recipe_id_set, &a2->recipe_id_set);
};

// Line 1001: range 000000000F029986-000000000F0299A0
void __cdecl UnlockSpecificRecipeOrWatcherParam::~UnlockSpecificRecipeOrWatcherParam(
        UnlockSpecificRecipeOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->recipe_id_set);
};

// Line 1009: range 000000000F0299A2-000000000F0299BC
void __cdecl CurAvatarHurtBySpecificAbilityWatcherParam::CurAvatarHurtBySpecificAbilityWatcherParam(
        CurAvatarHurtBySpecificAbilityWatcherParam *const this)
{
  std::unordered_set<std::string>::unordered_set(&this->ability_name_set);
};

// Line 1009: range 000000000F0E1872-000000000F0E1897
void __cdecl CurAvatarHurtBySpecificAbilityWatcherParam::CurAvatarHurtBySpecificAbilityWatcherParam(
        CurAvatarHurtBySpecificAbilityWatcherParam *const this,
        const CurAvatarHurtBySpecificAbilityWatcherParam *a2)
{
  std::unordered_set<std::string>::unordered_set(&this->ability_name_set, &a2->ability_name_set);
};

// Line 1009: range 000000000F0299BE-000000000F0299D8
void __cdecl CurAvatarHurtBySpecificAbilityWatcherParam::~CurAvatarHurtBySpecificAbilityWatcherParam(
        CurAvatarHurtBySpecificAbilityWatcherParam *const this)
{
  std::unordered_set<std::string>::~unordered_set(&this->ability_name_set);
};

// Line 1009: range 000000000F05957E-000000000F0595F1
void __cdecl WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementBallWatcherParam>::WatcherConfigRewriteGuard(
        WatcherExcelConfigMgr::WatcherConfigRewriteGuard<ElementBallWatcherParam> *const this,
        data::WatcherConfig *config,
        ElementBallWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, config);
  this->watcher_config = config;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_param >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->watcher_param, config);
  this->watcher_param = param;
};

// Line 1017: range 000000000F0299DA-000000000F0299F4
void __cdecl KilledBySpecificAbilityWatcherParam::KilledBySpecificAbilityWatcherParam(
        KilledBySpecificAbilityWatcherParam *const this)
{
  std::unordered_set<std::string>::unordered_set(&this->ability_name_set);
};

// Line 1017: range 000000000F0E1BF0-000000000F0E1C15
void __cdecl KilledBySpecificAbilityWatcherParam::KilledBySpecificAbilityWatcherParam(
        KilledBySpecificAbilityWatcherParam *const this,
        const KilledBySpecificAbilityWatcherParam *a2)
{
  std::unordered_set<std::string>::unordered_set(&this->ability_name_set, &a2->ability_name_set);
};

// Line 1017: range 000000000F0299F6-000000000F029A10
void __cdecl KilledBySpecificAbilityWatcherParam::~KilledBySpecificAbilityWatcherParam(
        KilledBySpecificAbilityWatcherParam *const this)
{
  std::unordered_set<std::string>::~unordered_set(&this->ability_name_set);
};

// Line 1024: range 000000000F028CDE-000000000F028D46
void __cdecl OpenWorldChestWatcherParam::OpenWorldChestWatcherParam(OpenWorldChestWatcherParam *const this)
{
  __int64 v1; // rsi

  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
};

// Line 1024: range 000000000F0D539A-000000000F0D5472
void __cdecl OpenWorldChestWatcherParam::OpenWorldChestWatcherParam(
        OpenWorldChestWatcherParam *const this,
        const OpenWorldChestWatcherParam *a2)
{
  uint32_t city_id; // ecx
  char v3; // al
  const OpenWorldChestWatcherParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_id_set, &a2->gadget_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&v4->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->city_id, a2);
  }
  this->city_id = city_id;
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &v4->area_id_set);
};

// Line 1024: range 000000000F028D48-000000000F028D72
void __cdecl OpenWorldChestWatcherParam::~OpenWorldChestWatcherParam(OpenWorldChestWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_id_set);
};

// Line 1033: range 000000000F028D74-000000000F028D8E
void __cdecl EnterClimateAreaWatcherParam::EnterClimateAreaWatcherParam(EnterClimateAreaWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->json_climate_type_set);
};

// Line 1033: range 000000000F12A048-000000000F12A06D
void __cdecl EnterClimateAreaWatcherParam::EnterClimateAreaWatcherParam(
        EnterClimateAreaWatcherParam *const this,
        const EnterClimateAreaWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->json_climate_type_set, &a2->json_climate_type_set);
};

// Line 1033: range 000000000F028D90-000000000F028DAA
void __cdecl EnterClimateAreaWatcherParam::~EnterClimateAreaWatcherParam(EnterClimateAreaWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->json_climate_type_set);
};

// Line 1052: range 000000000F029A12-000000000F029A69
void __cdecl MainCoopSavePointAndWatcherParam::MainCoopSavePointAndWatcherParam(
        MainCoopSavePointAndWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->main_coop_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->save_point_set);
};

// Line 1052: range 000000000F0E2072-000000000F0E210A
void __cdecl MainCoopSavePointAndWatcherParam::MainCoopSavePointAndWatcherParam(
        MainCoopSavePointAndWatcherParam *const this,
        const MainCoopSavePointAndWatcherParam *a2)
{
  uint32_t main_coop_id; // ecx
  char v3; // al
  const MainCoopSavePointAndWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  main_coop_id = a2->main_coop_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->main_coop_id = main_coop_id;
  std::unordered_set<unsigned int>::unordered_set(&this->save_point_set, &v4->save_point_set);
};

// Line 1052: range 000000000F029A6A-000000000F029A88
void __cdecl MainCoopSavePointAndWatcherParam::~MainCoopSavePointAndWatcherParam(
        MainCoopSavePointAndWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->save_point_set);
};

// Line 1060: range 000000000F029A8A-000000000F029AE1
void __cdecl MainCoopSavePointOrWatcherParam::MainCoopSavePointOrWatcherParam(
        MainCoopSavePointOrWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->main_coop_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->save_point_set);
};

// Line 1060: range 000000000F0E2464-000000000F0E24FC
void __cdecl MainCoopSavePointOrWatcherParam::MainCoopSavePointOrWatcherParam(
        MainCoopSavePointOrWatcherParam *const this,
        const MainCoopSavePointOrWatcherParam *a2)
{
  uint32_t main_coop_id; // ecx
  char v3; // al
  const MainCoopSavePointOrWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  main_coop_id = a2->main_coop_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->main_coop_id = main_coop_id;
  std::unordered_set<unsigned int>::unordered_set(&this->save_point_set, &v4->save_point_set);
};

// Line 1060: range 000000000F029AE2-000000000F029B00
void __cdecl MainCoopSavePointOrWatcherParam::~MainCoopSavePointOrWatcherParam(
        MainCoopSavePointOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->save_point_set);
};

// Line 1165: range 000000000F029B02-000000000F029B1C
void __cdecl HomeArrangementFurnitureCountWatcherParam::HomeArrangementFurnitureCountWatcherParam(
        HomeArrangementFurnitureCountWatcherParam *const this)
{
  std::set<unsigned int>::set(&this->furniture_type_set);
};

// Line 1165: range 000000000F0E3262-000000000F0E3287
void __cdecl HomeArrangementFurnitureCountWatcherParam::HomeArrangementFurnitureCountWatcherParam(
        HomeArrangementFurnitureCountWatcherParam *const this,
        HomeArrangementFurnitureCountWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->furniture_type_set, &a2->furniture_type_set);
};

// Line 1165: range 000000000F0E2F72-000000000F0E2F97
void __cdecl HomeArrangementFurnitureCountWatcherParam::HomeArrangementFurnitureCountWatcherParam(
        HomeArrangementFurnitureCountWatcherParam *const this,
        const HomeArrangementFurnitureCountWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->furniture_type_set, &a2->furniture_type_set);
};

// Line 1165: range 000000000F029B1E-000000000F029B38
void __cdecl HomeArrangementFurnitureCountWatcherParam::~HomeArrangementFurnitureCountWatcherParam(
        HomeArrangementFurnitureCountWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->furniture_type_set);
};

// Line 1270: range 000000000F029B72-000000000F029B8C
void __cdecl WeeklyBossKillWatcherParam::WeeklyBossKillWatcherParam(WeeklyBossKillWatcherParam *const this)
{
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->group_monsters_config_map);
};

// Line 1270: range 000000000F0E3DCE-000000000F0E3DF3
void __cdecl WeeklyBossKillWatcherParam::WeeklyBossKillWatcherParam(
        WeeklyBossKillWatcherParam *const this,
        WeeklyBossKillWatcherParam *a2)
{
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(
    &this->group_monsters_config_map,
    &a2->group_monsters_config_map);
};

// Line 1270: range 000000000F029B8E-000000000F029BA8
void __cdecl WeeklyBossKillWatcherParam::~WeeklyBossKillWatcherParam(WeeklyBossKillWatcherParam *const this)
{
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->group_monsters_config_map);
};

// Line 1277: range 000000000F029BAA-000000000F029C12
void __cdecl GroupVariableSetValueToWatcherParam::GroupVariableSetValueToWatcherParam(
        GroupVariableSetValueToWatcherParam *const this)
{
  __int64 v1; // rsi

  std::set<unsigned int>::set(&this->group_id_set);
  std::string::basic_string(&this->var_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
};

// Line 1277: range 000000000F0E42A6-000000000F0E435B
void __cdecl GroupVariableSetValueToWatcherParam::GroupVariableSetValueToWatcherParam(
        GroupVariableSetValueToWatcherParam *const this,
        GroupVariableSetValueToWatcherParam *a2)
{
  std::string *p_var_name; // rsi
  int32_t value; // ecx
  char v4; // al

  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
  p_var_name = &a2->var_name;
  std::string::basic_string(&this->var_name, p_var_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_var_name) = v4 != 0;
    __asan_report_store4(&this->value, p_var_name);
  }
  this->value = value;
};

// Line 1277: range 000000000F0E3F02-000000000F0E3FDA
void __cdecl GroupVariableSetValueToWatcherParam::GroupVariableSetValueToWatcherParam(
        GroupVariableSetValueToWatcherParam *const this,
        const GroupVariableSetValueToWatcherParam *a2)
{
  std::string *p_var_name; // rsi
  int32_t value; // ecx
  char v4; // al

  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
  p_var_name = &a2->var_name;
  std::string::basic_string(&this->var_name, p_var_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_var_name) = v4 != 0;
    __asan_report_store4(&this->value, p_var_name);
  }
  this->value = value;
};

// Line 1277: range 000000000F029C14-000000000F029C3E
void __cdecl GroupVariableSetValueToWatcherParam::~GroupVariableSetValueToWatcherParam(
        GroupVariableSetValueToWatcherParam *const this)
{
  std::string::~string(&this->var_name);
  std::set<unsigned int>::~set(&this->group_id_set);
};

// Line 1286: range 000000000F029C40-000000000F029C7A
void __cdecl KillGadgetsBySpecificSkillWatcherParam::KillGadgetsBySpecificSkillWatcherParam(
        KillGadgetsBySpecificSkillWatcherParam *const this)
{
  std::set<std::string>::set(&this->ability_name_set);
  std::set<unsigned int>::set(&this->gadget_id_set);
  std::set<unsigned int>::set(&this->group_id_set);
};

// Line 1286: range 000000000F0E474C-000000000F0E47A7
void __cdecl KillGadgetsBySpecificSkillWatcherParam::KillGadgetsBySpecificSkillWatcherParam(
        KillGadgetsBySpecificSkillWatcherParam *const this,
        KillGadgetsBySpecificSkillWatcherParam *a2)
{
  std::set<std::string>::set(&this->ability_name_set, &a2->ability_name_set);
  std::set<unsigned int>::set(&this->gadget_id_set, &a2->gadget_id_set);
  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
};

// Line 1286: range 000000000F029C7C-000000000F029CB6
void __cdecl KillGadgetsBySpecificSkillWatcherParam::~KillGadgetsBySpecificSkillWatcherParam(
        KillGadgetsBySpecificSkillWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->group_id_set);
  std::set<unsigned int>::~set(&this->gadget_id_set);
  std::set<std::string>::~set(&this->ability_name_set);
};

// Line 1295: range 000000000F029CB8-000000000F029CE2
void __cdecl KillMonstersWithoutVehicleWatcherParam::KillMonstersWithoutVehicleWatcherParam(
        KillMonstersWithoutVehicleWatcherParam *const this)
{
  std::set<unsigned int>::set(&this->monster_id_set);
  std::set<unsigned int>::set(&this->group_id_set);
};

// Line 1295: range 000000000F0E4B42-000000000F0E4B82
void __cdecl KillMonstersWithoutVehicleWatcherParam::KillMonstersWithoutVehicleWatcherParam(
        KillMonstersWithoutVehicleWatcherParam *const this,
        KillMonstersWithoutVehicleWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->monster_id_set, &a2->monster_id_set);
  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
};

// Line 1295: range 000000000F0E4814-000000000F0E4877
void __cdecl KillMonstersWithoutVehicleWatcherParam::KillMonstersWithoutVehicleWatcherParam(
        KillMonstersWithoutVehicleWatcherParam *const this,
        const KillMonstersWithoutVehicleWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->monster_id_set, &a2->monster_id_set);
  std::set<unsigned int>::set(&this->group_id_set, &a2->group_id_set);
};

// Line 1295: range 000000000F029CE4-000000000F029D0E
void __cdecl KillMonstersWithoutVehicleWatcherParam::~KillMonstersWithoutVehicleWatcherParam(
        KillMonstersWithoutVehicleWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->group_id_set);
  std::set<unsigned int>::~set(&this->monster_id_set);
};

// Line 1309: range 000000000F029D10-000000000F029D3A
void __cdecl KillMonsterByTagWatcherParam::KillMonsterByTagWatcherParam(KillMonsterByTagWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->describe_id_set);
};

// Line 1309: range 000000000F0E4FA0-000000000F0E4FE0
void __cdecl KillMonsterByTagWatcherParam::KillMonsterByTagWatcherParam(
        KillMonsterByTagWatcherParam *const this,
        KillMonsterByTagWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &a2->area_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->describe_id_set, &a2->describe_id_set);
};

// Line 1309: range 000000000F0E4C72-000000000F0E4CD5
void __cdecl KillMonsterByTagWatcherParam::KillMonsterByTagWatcherParam(
        KillMonsterByTagWatcherParam *const this,
        const KillMonsterByTagWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->area_id_set, &a2->area_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->describe_id_set, &a2->describe_id_set);
};

// Line 1309: range 000000000F029D3C-000000000F029D66
void __cdecl KillMonsterByTagWatcherParam::~KillMonsterByTagWatcherParam(KillMonsterByTagWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->describe_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->area_id_set);
};

// Line 1380: range 000000000F029D68-000000000F029D82
void __cdecl UnlockSpecificForgeOrWatcherParam::UnlockSpecificForgeOrWatcherParam(
        UnlockSpecificForgeOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->forge_id_set);
};

// Line 1380: range 000000000F0E5466-000000000F0E548B
void __cdecl UnlockSpecificForgeOrWatcherParam::UnlockSpecificForgeOrWatcherParam(
        UnlockSpecificForgeOrWatcherParam *const this,
        const UnlockSpecificForgeOrWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->forge_id_set, &a2->forge_id_set);
};

// Line 1380: range 000000000F029D84-000000000F029D9E
void __cdecl UnlockSpecificForgeOrWatcherParam::~UnlockSpecificForgeOrWatcherParam(
        UnlockSpecificForgeOrWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->forge_id_set);
};

// Line 1393: range 000000000F029DA0-000000000F029DBA
void __cdecl ArrangementFurnitureWatcherParam::ArrangementFurnitureWatcherParam(
        ArrangementFurnitureWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->furniture_id_set);
};

// Line 1393: range 000000000F0E5BD8-000000000F0E5BFD
void __cdecl ArrangementFurnitureWatcherParam::ArrangementFurnitureWatcherParam(
        ArrangementFurnitureWatcherParam *const this,
        ArrangementFurnitureWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->furniture_id_set, &a2->furniture_id_set);
};

// Line 1393: range 000000000F0E58E8-000000000F0E590D
void __cdecl ArrangementFurnitureWatcherParam::ArrangementFurnitureWatcherParam(
        ArrangementFurnitureWatcherParam *const this,
        const ArrangementFurnitureWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->furniture_id_set, &a2->furniture_id_set);
};

// Line 1393: range 000000000F029DBC-000000000F029DD6
void __cdecl ArrangementFurnitureWatcherParam::~ArrangementFurnitureWatcherParam(
        ArrangementFurnitureWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->furniture_id_set);
};

// Line 1399: range 000000000F029DD8-000000000F029E2D
void __cdecl HomeGatherCountWatcherParam::HomeGatherCountWatcherParam(HomeGatherCountWatcherParam *const this)
{
  __int64 v1; // rsi

  std::unordered_set<unsigned int>::unordered_set(&this->home_gather_id_set);
  if ( *(char *)(((unsigned __int64)&this->is_check_all >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_check_all, v1, &this->is_check_all);
  this->is_check_all = 0;
};

// Line 1399: range 000000000F0E5FD0-000000000F0E606B
void __cdecl HomeGatherCountWatcherParam::HomeGatherCountWatcherParam(
        HomeGatherCountWatcherParam *const this,
        HomeGatherCountWatcherParam *a2)
{
  bool is_check_all; // cl
  char v3; // al

  std::unordered_set<unsigned int>::unordered_set(&this->home_gather_id_set, &a2->home_gather_id_set);
  if ( *(char *)(((unsigned __int64)&a2->is_check_all >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_check_all, a2, &a2->is_check_all);
  is_check_all = a2->is_check_all;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_check_all >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_check_all, a2, &this->is_check_all);
  }
  this->is_check_all = is_check_all;
};

// Line 1399: range 000000000F0E5C6A-000000000F0E5D05
void __cdecl HomeGatherCountWatcherParam::HomeGatherCountWatcherParam(
        HomeGatherCountWatcherParam *const this,
        const HomeGatherCountWatcherParam *a2)
{
  bool is_check_all; // cl
  char v3; // al

  std::unordered_set<unsigned int>::unordered_set(&this->home_gather_id_set, &a2->home_gather_id_set);
  if ( *(char *)(((unsigned __int64)&a2->is_check_all >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_check_all, a2, &a2->is_check_all);
  is_check_all = a2->is_check_all;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_check_all >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_check_all, a2, &this->is_check_all);
  }
  this->is_check_all = is_check_all;
};

// Line 1399: range 000000000F029E2E-000000000F029E48
void __cdecl HomeGatherCountWatcherParam::~HomeGatherCountWatcherParam(HomeGatherCountWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->home_gather_id_set);
};

// Line 1406: range 000000000F029E4A-000000000F029E64
void __cdecl HomeFieldGatherCountWatcherParam::HomeFieldGatherCountWatcherParam(
        HomeFieldGatherCountWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->field_furniture_id_set);
};

// Line 1406: range 000000000F0E63C8-000000000F0E63ED
void __cdecl HomeFieldGatherCountWatcherParam::HomeFieldGatherCountWatcherParam(
        HomeFieldGatherCountWatcherParam *const this,
        HomeFieldGatherCountWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->field_furniture_id_set, &a2->field_furniture_id_set);
};

// Line 1406: range 000000000F0E60D8-000000000F0E60FD
void __cdecl HomeFieldGatherCountWatcherParam::HomeFieldGatherCountWatcherParam(
        HomeFieldGatherCountWatcherParam *const this,
        const HomeFieldGatherCountWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->field_furniture_id_set, &a2->field_furniture_id_set);
};

// Line 1406: range 000000000F029E66-000000000F029E80
void __cdecl HomeFieldGatherCountWatcherParam::~HomeFieldGatherCountWatcherParam(
        HomeFieldGatherCountWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->field_furniture_id_set);
};

// Line 1428: range 000000000F029E82-000000000F029E9C
void __cdecl MpKillMonsterIdNumWatcherParam::MpKillMonsterIdNumWatcherParam(MpKillMonsterIdNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set);
};

// Line 1428: range 000000000F1459CE-000000000F1459F3
void __cdecl MpKillMonsterIdNumWatcherParam::MpKillMonsterIdNumWatcherParam(
        MpKillMonsterIdNumWatcherParam *const this,
        const MpKillMonsterIdNumWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set, &a2->monster_id_set);
};

// Line 1428: range 000000000F029E9E-000000000F029EB8
void __cdecl MpKillMonsterIdNumWatcherParam::~MpKillMonsterIdNumWatcherParam(
        MpKillMonsterIdNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_id_set);
};

// Line 1434: range 000000000F029EBA-000000000F029F4E
void __cdecl FishingSuccNumWatcherParam::FishingSuccNumWatcherParam(FishingSuccNumWatcherParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_furniture_fish = 0;
  v2 = ((_BYTE)this + 1) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_in_other_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_in_other_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_in_other_world, v2, v3);
  this->is_in_other_world = 0;
  std::set<unsigned int>::set(&this->feature_tag_set);
};

// Line 1434: range 000000000F145D4C-000000000F145E65
void __cdecl FishingSuccNumWatcherParam::FishingSuccNumWatcherParam(
        FishingSuccNumWatcherParam *const this,
        const FishingSuccNumWatcherParam *a2)
{
  bool is_furniture_fish; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_in_other_world; // cl
  char v7; // dl
  __int64 v8; // rdx
  const FishingSuccNumWatcherParam *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_furniture_fish = a2->is_furniture_fish;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_furniture_fish = is_furniture_fish;
  v4 = ((_BYTE)v9 + 1) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_in_other_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_in_other_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_in_other_world, v4, v5);
  is_in_other_world = v9->is_in_other_world;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_in_other_world >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_in_other_world, v4, v8);
  this->is_in_other_world = is_in_other_world;
  std::set<unsigned int>::set(&this->feature_tag_set, &v9->feature_tag_set);
};

// Line 1434: range 000000000F029F50-000000000F029F6E
void __cdecl FishingSuccNumWatcherParam::~FishingSuccNumWatcherParam(FishingSuccNumWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->feature_tag_set);
};

// Line 1457: range 000000000F029F70-000000000F029F8A
void __cdecl FishingKeepBonusWatcherParam::FishingKeepBonusWatcherParam(FishingKeepBonusWatcherParam *const this)
{
  std::set<unsigned int>::set(&this->feature_tag_set);
};

// Line 1457: range 000000000F1468F0-000000000F146915
void __cdecl FishingKeepBonusWatcherParam::FishingKeepBonusWatcherParam(
        FishingKeepBonusWatcherParam *const this,
        const FishingKeepBonusWatcherParam *a2)
{
  std::set<unsigned int>::set(&this->feature_tag_set, &a2->feature_tag_set);
};

// Line 1457: range 000000000F029F8C-000000000F029FA6
void __cdecl FishingKeepBonusWatcherParam::~FishingKeepBonusWatcherParam(FishingKeepBonusWatcherParam *const this)
{
  std::set<unsigned int>::~set(&this->feature_tag_set);
};

// Line 1464: range 000000000F028F56-000000000F028F74
void __cdecl UnlockScenePointWatcherParam::UnlockScenePointWatcherParam(UnlockScenePointWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->point_id_set);
};

// Line 1464: range 000000000F0D72F8-000000000F0D7390
void __cdecl UnlockScenePointWatcherParam::UnlockScenePointWatcherParam(
        UnlockScenePointWatcherParam *const this,
        const UnlockScenePointWatcherParam *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  const UnlockScenePointWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_id = scene_id;
  std::unordered_set<unsigned int>::unordered_set(&this->point_id_set, &v4->point_id_set);
};

// Line 1464: range 000000000F028F76-000000000F028F94
void __cdecl UnlockScenePointWatcherParam::~UnlockScenePointWatcherParam(UnlockScenePointWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->point_id_set);
};

// Line 1472: range 000000000F029FA8-000000000F029FC2
void __cdecl ObtainItemNumWatcherParam::ObtainItemNumWatcherParam(ObtainItemNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set);
};

// Line 1472: range 000000000F0E686A-000000000F0E688F
void __cdecl ObtainItemNumWatcherParam::ObtainItemNumWatcherParam(
        ObtainItemNumWatcherParam *const this,
        const ObtainItemNumWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set, &a2->item_id_set);
};

// Line 1472: range 000000000F029FC4-000000000F029FDE
void __cdecl ObtainItemNumWatcherParam::~ObtainItemNumWatcherParam(ObtainItemNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->item_id_set);
};

// Line 1479: range 000000000F029FE0-000000000F02A057
void __cdecl CaptureAnimalWatcherParam::CaptureAnimalWatcherParam(CaptureAnimalWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->material_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->capture_tag_set);
  std::unordered_set<unsigned int>::unordered_set(&this->describe_id_set);
};

// Line 1479: range 000000000F0E6BE8-000000000F0E6CF2
void __cdecl CaptureAnimalWatcherParam::CaptureAnimalWatcherParam(
        CaptureAnimalWatcherParam *const this,
        const CaptureAnimalWatcherParam *a2)
{
  uint32_t material_id; // ecx
  char v3; // al
  const CaptureAnimalWatcherParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  material_id = a2->material_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->material_id = material_id;
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set, &v4->monster_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->capture_tag_set, &v4->capture_tag_set);
  std::unordered_set<unsigned int>::unordered_set(&this->describe_id_set, &v4->describe_id_set);
};

// Line 1479: range 000000000F02A058-000000000F02A096
void __cdecl CaptureAnimalWatcherParam::~CaptureAnimalWatcherParam(CaptureAnimalWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->describe_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->capture_tag_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_id_set);
};

// Line 1528: range 000000000F02A098-000000000F02A0B2
void __cdecl CaptureEnvAnimalReachNumWatcherParam::CaptureEnvAnimalReachNumWatcherParam(
        CaptureEnvAnimalReachNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set);
};

// Line 1528: range 000000000F0E7358-000000000F0E737D
void __cdecl CaptureEnvAnimalReachNumWatcherParam::CaptureEnvAnimalReachNumWatcherParam(
        CaptureEnvAnimalReachNumWatcherParam *const this,
        const CaptureEnvAnimalReachNumWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->monster_id_set, &a2->monster_id_set);
};

// Line 1528: range 000000000F02A0B4-000000000F02A0CE
void __cdecl CaptureEnvAnimalReachNumWatcherParam::~CaptureEnvAnimalReachNumWatcherParam(
        CaptureEnvAnimalReachNumWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->monster_id_set);
};

// Line 1623: range 000000000F02A0D0-000000000F02A124
void __cdecl GCGChallengeProgressWatcherParam::GCGChallengeProgressWatcherParam(
        GCGChallengeProgressWatcherParam *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_win = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->gcg_challenge_id_set);
};

// Line 1623: range 000000000F0E8D9C-000000000F0E8E35
void __cdecl GCGChallengeProgressWatcherParam::GCGChallengeProgressWatcherParam(
        GCGChallengeProgressWatcherParam *const this,
        const GCGChallengeProgressWatcherParam *a2)
{
  bool is_win; // cl
  char v3; // al
  const GCGChallengeProgressWatcherParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_win = a2->is_win;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_win = is_win;
  std::unordered_set<unsigned int>::unordered_set(&this->gcg_challenge_id_set, &v4->gcg_challenge_id_set);
};

// Line 1623: range 000000000F02A126-000000000F02A144
void __cdecl GCGChallengeProgressWatcherParam::~GCGChallengeProgressWatcherParam(
        GCGChallengeProgressWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->gcg_challenge_id_set);
};

// Line 1631: range 000000000F02A146-000000000F02A170
void __cdecl BuyShopItemIdWatcherParam::BuyShopItemIdWatcherParam(BuyShopItemIdWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->shop_type_set);
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set);
};

// Line 1631: range 000000000F0E918E-000000000F0E91F1
void __cdecl BuyShopItemIdWatcherParam::BuyShopItemIdWatcherParam(
        BuyShopItemIdWatcherParam *const this,
        const BuyShopItemIdWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->shop_type_set, &a2->shop_type_set);
  std::unordered_set<unsigned int>::unordered_set(&this->item_id_set, &a2->item_id_set);
};

// Line 1631: range 000000000F02A172-000000000F02A19C
void __cdecl BuyShopItemIdWatcherParam::~BuyShopItemIdWatcherParam(BuyShopItemIdWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->item_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->shop_type_set);
};

// Line 1639: range 000000000F02A19E-000000000F02A1C8
void __cdecl BuyShopGoodsCountWatcherParam::BuyShopGoodsCountWatcherParam(BuyShopGoodsCountWatcherParam *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->shop_type_set);
  std::unordered_set<unsigned int>::unordered_set(&this->material_type_set);
};

// Line 1639: range 000000000F0E954A-000000000F0E95AD
void __cdecl BuyShopGoodsCountWatcherParam::BuyShopGoodsCountWatcherParam(
        BuyShopGoodsCountWatcherParam *const this,
        const BuyShopGoodsCountWatcherParam *a2)
{
  std::unordered_set<unsigned int>::unordered_set(&this->shop_type_set, &a2->shop_type_set);
  std::unordered_set<unsigned int>::unordered_set(&this->material_type_set, &a2->material_type_set);
};

// Line 1639: range 000000000F02A1CA-000000000F02A1F4
void __cdecl BuyShopGoodsCountWatcherParam::~BuyShopGoodsCountWatcherParam(BuyShopGoodsCountWatcherParam *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->material_type_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->shop_type_set);
};
