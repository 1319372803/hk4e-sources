// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BattlePassExcelConfig.cpp

// Line 18: range 0000000012E8C4D8-0000000012E8C5B1
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const BattlePassRewardTag *tag)
{
  common::milog::MiLogStream *v2; // rbx
  const std::string *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax

  v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(stream, (const char (*)[16])"[unlock_status:");
  if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(tag);
  }
  v3 = proto::BattlePassUnlockStatus_Name[abi:cxx11](tag->unlock_status);
  v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, v3);
  v5 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v4, (const char (*)[8])",level:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &tag->level);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])",reward_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &tag->reward_id);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])"]");
  return stream;
};

// Line 24: range 0000000012E8C5B2-0000000012E8C7F7
int32_t __cdecl BattlePassExcelConfigMgr::checkConfig(
        BattlePassExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BattlePassExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( BattlePassExcelConfigMgr::checkBattlePassSceduleConfig(this, txt_config_mgr)
    || BattlePassExcelConfigMgr::checkBattlePassLevelConfig(this, txt_config_mgr)
    || BattlePassExcelConfigMgr::checkBattlePassRewardConfig(this, txt_config_mgr)
    || BattlePassExcelConfigMgr::checkBattlePassMissionConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
      "checkConfig",
      31);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v6, (const char (*)[49])byte_1AAC0740);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 38: range 0000000012E8C7F8-0000000012E8C8A7
uint32_t __cdecl BattlePassExcelConfigMgr::getCycleBeginTime(
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t config_begin_time)
{
  uint32_t off_time; // [rsp+14h] [rbp-Ch]
  __int64 week_day; // [rsp+18h] [rbp-8h]

  if ( !config_begin_time || schedule_id == 9998 )
    return config_begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_offset_sec >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_offset_sec >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_offset_sec);
  }
  week_day = common::tools::TimeUtils::getTimeWeekDay(config_begin_time, this->daily_offset_sec);
  if ( week_day <= 1 )
    return config_begin_time;
  off_time = 86400 * (week_day - 1);
  if ( config_begin_time >= off_time )
    return config_begin_time - off_time;
  else
    return 0;
};

// Line 58: range 0000000012E8C8A8-0000000012E8E51F
int32_t __cdecl BattlePassExcelConfigMgr::checkBattlePassSceduleConfig(
        BattlePassExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *finish_mail_id; // rsi
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  MailExcelConfigMgr *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  uint32_t v30; // ecx
  char v31; // dl
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v38; // rax
  _DWORD *v39; // rdx
  uint32_t end_time; // r15d
  uint32_t v41; // esi
  uint32_t v42; // edx
  __int64 v43; // rsi
  uint32_t v44; // ecx
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  unsigned int *p_end_time; // rdx
  std::pair<unsigned int,unsigned int> *v57; // rax
  int v58; // edx
  unsigned __int64 n; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  int v63; // edx
  uint32_t cycle_days; // [rsp+24h] [rbp-43Ch]
  uint32_t last_end_time; // [rsp+28h] [rbp-438h]
  data::BattlePassScheduleExcelConfigMap *__for_range; // [rsp+30h] [rbp-430h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-428h]
  const unsigned int *schedule_id; // [rsp+40h] [rbp-420h]
  std::tuple_element<1,std::pair<unsigned int const,data::BattlePassScheduleExcelConfig> >::type *config; // [rsp+48h] [rbp-418h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-410h]
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range_1; // [rsp+58h] [rbp-408h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *begin_time; // [rsp+60h] [rbp-400h]
  std::tuple_element<1,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *p; // [rsp+68h] [rbp-3F8h]
  char v76[1008]; // [rsp+70h] [rbp-3F0h] BYREF

  v3 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(960LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 4 12 all_days:110 48 8 14 __for_begin:60 80 8 12 __for_end:60 112 8 15 __for_begin:106 144"
                        " 8 13 __for_end:106 176 8 9 <unknown> 208 8 15 __for_begin:126 240 8 13 __for_end:126 272 12 9 <"
                        "unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <u"
                        "nknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 48 20 sc"
                        "hedule_time_map:59";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::checkBattlePassSceduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = 0x4000000;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862749] = -202116109;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::map((std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v3 + 880));
  __for_range = &this->battle_pass_schedule_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    finish_mail_id = (const char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false> *)(v3 + 80)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *const)(v3 + 48));
    schedule_id = std::get<0ul,unsigned int const,data::BattlePassScheduleExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::BattlePassScheduleExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    if ( *schedule_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->extra_paid_reward_id);
      }
      if ( config->extra_paid_reward_id
        && (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              config->extra_paid_reward_id,
                              ITEM_LIMIT_BATTLE_PASS_PAID_REWARD) != 1 )
      {
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BattlePassExcelConfig.cpp",
          "checkBattlePassSceduleConfig",
          71);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 368),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v9, (const char (*)[24])byte_1AAC09E0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->id);
        v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v11, (const char (*)[23])byte_1AAC0A20);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->extra_paid_reward_id);
        finish_mail_id = byte_1AAC0A60;
        common::milog::MiLogStream::operator<<<char [95],(char *[95])0>(v13, (const char (*)[95])byte_1AAC0A60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
      }
      else
      {
        p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->over_limit_mail_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->over_limit_mail_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->over_limit_mail_id);
        }
        if ( data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, config->over_limit_mail_id) )
        {
          v20 = &txt_config_mgr->mail_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&config->finish_mail_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->finish_mail_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->finish_mail_id);
          }
          finish_mail_id = (const char *)config->finish_mail_id;
          if ( data::MailExcelConfigMgrBase::findMailExcelConfig(v20, (__int64)finish_mail_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->buy_level_cost_coin_num >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->buy_level_cost_coin_num >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->buy_level_cost_coin_num);
            }
            if ( config->buy_level_cost_coin_num )
            {
              if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->begin_time);
              }
              if ( config->begin_time )
                goto LABEL_48;
              finish_mail_id = (const char *)((((_BYTE)config + 84) & 7u) + 3);
              if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->end_time);
              }
              if ( config->end_time )
              {
LABEL_48:
                if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->begin_time);
                }
                v30 = config->begin_time;
                v31 = *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000);
                LOBYTE(finish_mail_id) = v31 != 0;
                if ( v31 != 0 && (char)((((_BYTE)config + 84) & 7) + 3) >= v31 )
                  __asan_report_load4(&config->end_time);
                if ( v30 <= config->end_time )
                {
                  cycle_days = 0;
                  __for_range_0 = &config->cycle_list;
                  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 112, finish_mail_id);
                  *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin(__for_range_0);
                  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 144, finish_mail_id);
                  *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_0);
                  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144)) )
                  {
                    v38 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
                    v39 = v38;
                    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v38);
                    }
                    cycle_days += *v39;
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
                  }
                  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3)
                                                                          + 0x7FFF8000) )
                  {
                    __asan_report_load4(&config->end_time);
                  }
                  end_time = config->end_time;
                  if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&config->begin_time);
                  }
                  v41 = config->begin_time;
                  if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4(schedule_id);
                  }
                  v42 = v41;
                  v43 = *schedule_id;
                  v44 = (end_time - BattlePassExcelConfigMgr::getCycleBeginTime(this, v43, v42)) / 0x15180;
                  v45 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
                  if ( v45 != 0 && v45 <= 3 )
                  {
                    LOBYTE(v43) = v45 != 0;
                    __asan_report_store4(v3 + 32, v43);
                  }
                  *(_DWORD *)(v3 + 32) = v44;
                  if ( cycle_days >= *(_DWORD *)(v3 + 32) )
                  {
                    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
                           (std::map<unsigned int,std::pair<unsigned int,unsigned int>> *)(v3 + 880),
                           &config->begin_time) )
                    {
                      *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 752, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 752),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/BattlePassExcelConfig.cpp",
                        "checkBattlePassSceduleConfig",
                        119);
                      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 752),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v53 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                              v52,
                              (const char (*)[24])byte_1AAC09E0);
                      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &config->id);
                      v55 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                              v54,
                              (const char (*)[20])byte_1AAC0CC0);
                      finish_mail_id = byte_1AA632A0;
                      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v55,
                        (const char (*)[18])byte_1AA632A0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
                      *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v8 = 0;
                    }
                    else
                    {
                      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
                      p_end_time = &config->end_time;
                      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v3 + 176, &config->begin_time);
                      *(std::pair<unsigned int,unsigned int> *)(v3 + 176) = std::make_pair<unsigned int const&,unsigned int &>(
                                                                              schedule_id,
                                                                              p_end_time);
                      v57 = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                              (std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v3 + 880),
                              &config->begin_time);
                      finish_mail_id = (const char *)(v3 + 176);
                      std::pair<unsigned int,unsigned int>::operator=(
                        v57,
                        (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 176));
                      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
                      v8 = 2;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 688, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 688),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
                      "checkBattlePassSceduleConfig",
                      113);
                    v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 688),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v47 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                            v46,
                            (const char (*)[24])byte_1AAC09E0);
                    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &config->id);
                    v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v48,
                            (const char (*)[14])byte_1AAC0C40);
                    v50 = common::milog::MiLogStream::operator<<<unsigned int>(v49, &config->cycle_list);
                    v51 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                            v50,
                            (const char (*)[29])byte_1AAC0C80);
                    finish_mail_id = (const char *)(v3 + 32);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v3 + 32));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
                    *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v8 = 0;
                  }
                }
                else
                {
                  *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 624, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 624),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/BattlePassExcelConfig.cpp",
                    "checkBattlePassSceduleConfig",
                    101);
                  v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 624),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v33 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v32,
                          (const char (*)[24])byte_1AAC09E0);
                  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &config->id);
                  v35 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          v34,
                          (const char (*)[32])byte_1AAC0BC0);
                  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &config->begin_time);
                  v37 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v36, (const char (*)[4])" > ");
                  finish_mail_id = (const char *)&config->end_time;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &config->end_time);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
                  *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v8 = 0;
                }
              }
              else
              {
                v8 = 1;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 560, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 560),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/BattlePassExcelConfig.cpp",
                "checkBattlePassSceduleConfig",
                90);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 560),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v26,
                      (const char (*)[24])byte_1AAC09E0);
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->id);
              v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v28,
                      (const char (*)[33])byte_1AAC0B60);
              finish_mail_id = byte_1AA632A0;
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v29, (const char (*)[18])byte_1AA632A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
              *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v8 = 0;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 496, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 496),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/BattlePassExcelConfig.cpp",
              "checkBattlePassSceduleConfig",
              84);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v21,
                    (const char (*)[24])byte_1AAC09E0);
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->id);
            v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v23,
                    (const char (*)[23])byte_1AAC0B20);
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->finish_mail_id);
            finish_mail_id = byte_1AA632A0;
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v25, (const char (*)[18])byte_1AA632A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v8 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BattlePassExcelConfig.cpp",
            "checkBattlePassSceduleConfig",
            78);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v15, (const char (*)[24])byte_1AAC09E0);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->id);
          v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v17, (const char (*)[23])byte_1AAC0AE0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->over_limit_mail_id);
          finish_mail_id = byte_1AA632A0;
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])byte_1AA632A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v8 = 0;
        }
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BattlePassExcelConfig.cpp",
        "checkBattlePassSceduleConfig",
        64);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 304),
             (const char (*)[16])"[CONFIG_ERROR] ");
      finish_mail_id = byte_1AAC0980;
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AAC0980);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      v58 = 0;
      goto LABEL_88;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *const)(v3 + 48));
  }
  v58 = 1;
LABEL_88:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v58 == 1 )
  {
    last_end_time = 0;
    __for_range_1 = (std::map<unsigned int,std::pair<unsigned int,unsigned int>> *)(v3 + 880);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, finish_mail_id);
    *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v3 + 208) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, finish_mail_id);
    *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v3 + 240) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range_1);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v3 + 208),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v3 + 240)) )
      {
        v63 = 1;
        goto LABEL_109;
      }
      *(_WORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 1024;
      n = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v3 + 208));
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 283) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 91) & 7) >= *(_BYTE *)(((v3 + 283) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 12LL);
      }
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v3 + 272) = *(_QWORD *)n;
      *(_DWORD *)(v3 + 280) = *(_DWORD *)(n + 8);
      begin_time = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>((std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *)(v3 + 272));
      p = std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>((std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *)(v3 + 272));
      if ( *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)begin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(begin_time);
      }
      if ( last_end_time > *begin_time )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->second);
      }
      last_end_time = p->second;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v3 + 208));
    }
    *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 816, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 816),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
      "checkBattlePassSceduleConfig",
      130);
    v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 816),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v61 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v60, (const char (*)[24])byte_1AAC09E0);
    v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, (const unsigned int *)p);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v62, (const char (*)[29])byte_1AAC0D00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
    *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v63 = 0;
LABEL_109:
    *(_WORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v63 == 1 )
      v2 = 0;
  }
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::~map((std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v3 + 880));
  if ( v76 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8074) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 139: range 0000000012E8E520-0000000012E8EF9A
int32_t __cdecl BattlePassExcelConfigMgr::checkBattlePassLevelConfig(
        BattlePassExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  uint32_t level_up_need_point; // r15d
  const unsigned int *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  uint32_t *v14; // rdx
  char v15; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v16; // rdx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // edx
  int32_t result; // eax
  data::BattlePassLevelExcelConfigMap *__for_range; // [rsp+28h] [rbp-208h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-200h]
  const unsigned int *level; // [rsp+38h] [rbp-1F8h]
  std::tuple_element<1,std::pair<unsigned int const,data::BattlePassLevelExcelConfig> >::type *config; // [rsp+40h] [rbp-1F0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *level_0; // [rsp+50h] [rbp-1E0h]
  char v29[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 13 ori_level:150 48 8 15 __for_begin:141 80 8 13 __for_end:141 112 8 9 <unknown> 144 8 15"
                        " __for_begin:151 176 8 13 __for_end:151 208 32 9 <unknown> 272 32 9 <unknown> 336 48 19 level_point_map:140";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::checkBattlePassLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
  __for_range = &this->battle_pass_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassLevelExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::BattlePassLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassLevelExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::BattlePassLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false> *)(v3 + 80)) )
    {
      v10 = 1;
      goto LABEL_20;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false,false> *const)(v3 + 48));
    level = std::get<0ul,unsigned int const,data::BattlePassLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::BattlePassLevelExcelConfig>(__in);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
           (std::map<unsigned int,unsigned int> *)(v3 + 336),
           level) )
    {
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->level_up_need_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->level_up_need_point >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->level_up_need_point);
    }
    level_up_need_point = config->level_up_need_point;
    v12 = level;
    v13 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v3 + 336), level);
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v13, v12);
    }
    *v14 = level_up_need_point;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassLevelExcelConfig>,false,false> *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 208),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/BattlePassExcelConfig.cpp",
    "checkBattlePassLevelConfig",
    145);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 208),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])byte_1AAC0E60);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, level);
  v6 = byte_1AAC0EA0;
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])byte_1AAC0EA0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_20:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v6);
    *(_DWORD *)(v3 + 32) = 0;
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 336);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 176) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 176)) )
      {
        v21 = 1;
        goto LABEL_45;
      }
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 144));
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 112, v3 + 176);
      if ( ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v16->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v16 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v16, 8LL);
      }
      *(std::pair<unsigned int const,unsigned int> *)(v3 + 112) = *v16;
      level_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 112));
      std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)level_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(level_0);
      }
      v17 = *level_0;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      if ( v17 != *(_DWORD *)(v3 + 32) )
        break;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      ++*(_DWORD *)(v3 + 32);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 144));
    }
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
      "checkBattlePassLevelConfig",
      155);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 272),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])byte_1AAC0E60);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v20, (const char (*)[25])byte_1AAC0EE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v21 = 0;
LABEL_45:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v21 == 1 )
      v2 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 164: range 0000000012E8EF9C-0000000012E8F812
int32_t __cdecl BattlePassExcelConfigMgr::checkBattlePassRewardConfig(
        BattlePassExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  BattlePassExcelConfigMgr *v8; // rcx
  uint32_t *p_level; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  _BOOL4 v21; // r15d
  unsigned __int64 v22; // rax
  int v23; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>> *__for_range; // [rsp+20h] [rbp-1C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false,false>::reference __in; // [rsp+28h] [rbp-1B8h]
  const unsigned int *index_id; // [rsp+30h] [rbp-1B0h]
  std::unordered_set<BattlePassRewardTag> *reward_set; // [rsp+38h] [rbp-1A8h]
  const BattlePassRewardTag *tag; // [rsp+48h] [rbp-198h]
  char v31[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:166 64 8 13 __for_end:166 96 8 15 __for_begin:169 128 8 13 __for_end:169 1"
                        "60 24 17 reward_id_vec:168 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::checkBattlePassRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->battle_pass_reward_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false> *)(v3 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false,false> *const)(v3 + 32));
    index_id = std::get<0ul,unsigned int const,std::unordered_set<BattlePassRewardTag>>(__in);
    reward_set = std::get<1ul,unsigned int const,std::unordered_set<BattlePassRewardTag>>(__in);
    v7 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_set<BattlePassRewardTag>::iterator *)(v3 + 96) = std::unordered_set<BattlePassRewardTag>::begin(reward_set);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_set<BattlePassRewardTag>::iterator *)(v3 + 128) = std::unordered_set<BattlePassRewardTag>::end(reward_set);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<BattlePassRewardTag,false>(
              (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v3 + 128)) )
      {
        v15 = 1;
        goto LABEL_30;
      }
      tag = std::__detail::_Node_iterator<BattlePassRewardTag,true,false>::operator*((const std::__detail::_Node_iterator<BattlePassRewardTag,true,false> *const)(v3 + 96));
      v8 = this;
      p_level = &tag->level;
      if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_level);
      }
      if ( !data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(v8, tag->level) )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BattlePassExcelConfig.cpp",
          "checkBattlePassRewardConfig",
          173);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])byte_1AAC1020);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, index_id);
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v12, (const char (*)[24])byte_1AAC1060);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &tag->level);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])byte_1AAC10A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
        goto LABEL_30;
      }
      if ( *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tag + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&tag->reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              tag->reward_id,
                              ITEM_LIMIT_BATTLE_PASS_LEVEL_REWARD) != 1 )
        break;
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 160), &tag->reward_id);
      std::__detail::_Node_iterator<BattlePassRewardTag,true,false>::operator++((std::__detail::_Node_iterator<BattlePassRewardTag,true,false> *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
      "checkBattlePassRewardConfig",
      178);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v16, (const char (*)[22])byte_1AAC1020);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, index_id);
    v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])byte_1AAC10E0);
    v20 = operator<<(v19, tag);
    common::milog::MiLogStream::operator<<<char [107],(char *[107])0>(v20, (const char (*)[107])byte_1AAC1120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v15 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    v21 = v15 == 1;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
    v22 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v22 = -1800;
    *(_BYTE *)(v22 + 2) = -8;
    if ( !v21 )
    {
      v23 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false,false> *const)(v3 + 32));
  }
  v23 = 1;
LABEL_34:
  if ( v23 == 1 )
    v2 = 0;
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 188: range 0000000012E8F814-0000000012E8FC04
int32_t __cdecl BattlePassExcelConfigMgr::checkBattlePassMissionConfig(
        BattlePassExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BattlePassMissionRefreshType *p_refresh_type; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::BattlePassMissionExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *mission_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *mission_config; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:190 64 8 13 __for_end:190 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BattlePassExcelConfigMgr::checkBattlePassMissionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->battle_pass_mission_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *const)(v2 + 32));
    mission_id = std::get<0ul,unsigned int const,data::BattlePassMissionExcelConfig>(v13);
    mission_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BattlePassMissionExcelConfig>(v13);
    p_refresh_type = &mission_config->refresh_type;
    if ( *(_BYTE *)(((unsigned __int64)p_refresh_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_refresh_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_refresh_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_refresh_type);
    }
    if ( mission_config->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE_CROSS_SCHEDULE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&mission_config->schedule_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mission_config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mission_config->schedule_id);
      }
      if ( mission_config->schedule_id )
      {
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 96, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BattlePassExcelConfig.cpp",
          "checkBattlePassMissionConfig",
          196);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])"mission:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, mission_id);
        v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v8, (const char (*)[51])byte_1AAC12A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &mission_config->schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 205: range 0000000012E8FC06-0000000012E8FE4B
int32_t __cdecl BattlePassExcelConfigMgr::rewriteConfig(
        BattlePassExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BattlePassExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( BattlePassExcelConfigMgr::rewriteBattlePassSceduleConfig(this, txt_config_mgr)
    || BattlePassExcelConfigMgr::rewriteBattlePassLevelConfig(this, txt_config_mgr)
    || BattlePassExcelConfigMgr::rewriteBattlePassRewardConfig(this, txt_config_mgr)
    || BattlePassExcelConfigMgr::rewriteBattlePassMissionConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
      "rewriteConfig",
      212);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v6, (const char (*)[49])byte_1AAC1300);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 219: range 0000000012E8FE4C-0000000012E9084A
int32_t __cdecl BattlePassExcelConfigMgr::rewriteBattlePassSceduleConfig(
        BattlePassExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t TimeOffsetSec; // edx
  char v7; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  data::DbBattlePassConfigMgr *p_battle_pass_config_mgr; // rcx
  __int64 v16; // rsi
  __int64 v17; // rsi
  uint32_t begin_date; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t end_date; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  uint32_t daily_offset_sec; // ecx
  uint32_t v31; // ecx
  char v32; // al
  uint32_t v33; // ecx
  uint32_t v34; // ecx
  char v35; // dl
  int v36; // eax
  int32_t result; // eax
  TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-170h]
  data::BattlePassScheduleExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-150h]
  const unsigned int *schedule_id; // [rsp+28h] [rbp-148h]
  std::tuple_element<1,std::pair<unsigned int const,data::BattlePassScheduleExcelConfig> >::type *config; // [rsp+30h] [rbp-140h]
  const data::BattlePassDbScheduleConfig *db_config_ptr; // [rsp+38h] [rbp-138h]
  char v44[304]; // [rsp+40h] [rbp-130h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 18 begin_day_time:237 48 4 16 end_day_time:238 64 8 15 __for_begin:221 96 8 13 __for_end:"
                        "221 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::rewriteBattlePassSceduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  TimeOffsetSec = ConstValueExcelConfigMgr::getTimeOffsetSec(&txt_config_mgr->const_value_config_mgr);
  v7 = *(_BYTE *)(((unsigned __int64)&this->daily_offset_sec >> 3) + 0x7FFF8000);
  LOBYTE(txt_config_mgr) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(&this->daily_offset_sec, txt_config_mgr);
  this->daily_offset_sec = TimeOffsetSec;
  __for_range = &this->battle_pass_schedule_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *const)(v3 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::BattlePassScheduleExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::BattlePassScheduleExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&config->mail_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->mail_config_id);
    }
    if ( config->mail_config_id
      && MailExcelConfigMgr::checkAndRecordMailIdAndLimitType(
           &txt_config_mgra->mail_config_mgr,
           config->mail_config_id,
           ITEM_LIMIT_BATTLE_PASS_NOTIFY_MAIL_REWARD) )
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BattlePassExcelConfig.cpp",
        "rewriteBattlePassSceduleConfig",
        226);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v9, (const char (*)[26])byte_1AAC1440);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, schedule_id);
      v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])" mail_config_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->mail_config_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1AAC14C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    else
    {
      p_battle_pass_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgra)->db_config_mgr.db_local_config_mgr.battle_pass_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(schedule_id);
      }
      v16 = *schedule_id;
      db_config_ptr = data::DbBattlePassConfigMgr::findBattlePassScheduleConfig(p_battle_pass_config_mgr, v16);
      if ( db_config_ptr )
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v17 = (((_BYTE)db_config_ptr + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&db_config_ptr->begin_date >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)db_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&db_config_ptr->begin_date >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&db_config_ptr->begin_date);
        }
        begin_date = db_config_ptr->begin_date;
        v19 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v17) = v19 != 0;
          __asan_report_store4(v3 + 32, v17);
        }
        *(_DWORD *)(v3 + 32) = begin_date;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v20 = (((_BYTE)db_config_ptr + 8) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&db_config_ptr->end_date >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)db_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&db_config_ptr->end_date >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&db_config_ptr->end_date);
        }
        end_date = db_config_ptr->end_date;
        v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v22 != 0 && v22 <= 3 )
        {
          LOBYTE(v20) = v22 != 0;
          __asan_report_store4(v3 + 48, v20);
        }
        *(_DWORD *)(v3 + 48) = end_date;
        if ( *(_DWORD *)(v3 + 32) && *(_DWORD *)(v3 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->daily_offset_sec >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->daily_offset_sec >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->daily_offset_sec);
          }
          daily_offset_sec = this->daily_offset_sec;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v31 = *(_DWORD *)(v3 + 32) + daily_offset_sec;
          v32 = *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000);
          if ( v32 != 0 && v32 <= 3 )
          {
            LOBYTE(v20) = v32 != 0;
            __asan_report_store4(&config->begin_time, v20);
          }
          config->begin_time = v31;
          v33 = this->daily_offset_sec;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v34 = *(_DWORD *)(v3 + 48) + v33;
          v35 = *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000);
          if ( v35 != 0 && (char)((((_BYTE)config + 84) & 7) + 3) >= v35 )
          {
            LOBYTE(v20) = v35 != 0;
            __asan_report_store4(&config->end_time, v20);
          }
          config->end_time = v34;
          v14 = 2;
        }
        else
        {
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BattlePassExcelConfig.cpp",
            "rewriteBattlePassSceduleConfig",
            241);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v23, (const char (*)[26])byte_1AAC1440);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, schedule_id);
          v26 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v25, (const char (*)[59])byte_1AAC1500);
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v3 + 32));
          v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AAC1560);
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v29, (const char (*)[23])byte_1AAC15A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&config->begin_time, v16);
        }
        config->begin_time = 0;
        if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&config->end_time, (((_BYTE)config + 84) & 7u) + 3);
        }
        config->end_time = 0;
        v14 = 1;
      }
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v14 )
    {
      v36 = 0;
      goto LABEL_58;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *const)(v3 + 64));
  }
  v36 = 1;
LABEL_58:
  if ( v36 == 1 )
    v2 = 0;
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 255: range 0000000012E9084C-0000000012E9085E
int32_t __cdecl BattlePassExcelConfigMgr::rewriteBattlePassLevelConfig(
        BattlePassExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 260: range 0000000012E90860-0000000012E912EE
int32_t __cdecl BattlePassExcelConfigMgr::rewriteBattlePassRewardConfig(
        BattlePassExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  unsigned int *v9; // rdx
  char v10; // cl
  int v11; // eax
  std::unordered_set<BattlePassRewardTag> *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::unordered_set<BattlePassRewardTag> *v17; // rax
  int v18; // edx
  int v19; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  unsigned int *v21; // rdx
  int v22; // eax
  std::unordered_set<BattlePassRewardTag> *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::unordered_set<BattlePassRewardTag> *v28; // rax
  int v29; // edx
  int32_t result; // eax
  unsigned int reward_id; // [rsp+18h] [rbp-1F8h]
  unsigned int reward_id_0; // [rsp+1Ch] [rbp-1F4h]
  data::BattlePassRewardExcelConfigVec *__for_range; // [rsp+20h] [rbp-1F0h]
  data::BattlePassRewardExcelConfig *config; // [rsp+28h] [rbp-1E8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-1E0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+38h] [rbp-1D8h]
  char v37[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 15 __for_begin:261 64 8 13 __for_end:261 96 8 15 __for_begin:263 128 8 13 __for_end:263 "
                        "160 8 15 __for_begin:277 192 8 13 __for_end:277 224 12 12 free_tag:269 256 12 12 paid_tag:283 28"
                        "8 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::rewriteBattlePassRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219020288;
  v5[536862728] = -219020288;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->battle_pass_reward_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::BattlePassRewardExcelConfig>::iterator *)(v3 + 32) = std::vector<data::BattlePassRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::BattlePassRewardExcelConfig>::iterator *)(v3 + 64) = std::vector<data::BattlePassRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !__gnu_cxx::operator!=<data::BattlePassRewardExcelConfig *,std::vector<data::BattlePassRewardExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::BattlePassRewardExcelConfig*,std::vector<data::BattlePassRewardExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::BattlePassRewardExcelConfig*,std::vector<data::BattlePassRewardExcelConfig> > *)(v3 + 64)) )
      break;
    config = __gnu_cxx::__normal_iterator<data::BattlePassRewardExcelConfig *,std::vector<data::BattlePassRewardExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::BattlePassRewardExcelConfig*,std::vector<data::BattlePassRewardExcelConfig> > *const)(v3 + 32));
    __for_range_0 = &config->free_reward_id_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 128);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128)) )
        break;
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      LOBYTE(v7) = v10 != 0;
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
        __asan_report_load4(v8);
      reward_id = *v9;
      if ( *v9 )
      {
        *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 1024;
        if ( *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->level);
        }
        BattlePassRewardTag::BattlePassRewardTag(
          (BattlePassRewardTag *const)(v3 + 224),
          BATTLE_PASS_UNLOCK_FREE,
          config->level,
          reward_id);
        v12 = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::operator[](
                &this->battle_pass_reward_map,
                &config->index_id);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<BattlePassRewardTag>,BattlePassRewardTag>(
               v12,
               (const BattlePassRewardTag *)(v3 + 224)) )
        {
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BattlePassExcelConfig.cpp",
            "rewriteBattlePassRewardConfig",
            272);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v13, (const char (*)[22])byte_1AAC1020);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->index_id);
          v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v15, (const char (*)[27])byte_1AAC1720);
          v7 = (char *)(v3 + 224);
          operator<<(v16, (const BattlePassRewardTag *)(v3 + 224));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 1;
        }
        else
        {
          v17 = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::operator[](
                  &this->battle_pass_reward_map,
                  &config->index_id);
          v7 = (char *)(v3 + 224);
          std::unordered_set<BattlePassRewardTag>::insert(
            v17,
            (const std::unordered_set<BattlePassRewardTag>::value_type *)(v3 + 224));
          v11 = 2;
        }
      }
      else
      {
        v11 = 0;
      }
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
      if ( v11 && v11 != 2 )
      {
        v18 = 0;
        goto LABEL_32;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
    }
    v18 = 1;
LABEL_32:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v18 != 1 )
    {
      v19 = 0;
      goto LABEL_60;
    }
    __for_range_1 = &config->paid_reward_id_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v7);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
    {
      v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      reward_id_0 = *v21;
      if ( *v21 )
      {
        *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 1024;
        if ( *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->level);
        }
        BattlePassRewardTag::BattlePassRewardTag(
          (BattlePassRewardTag *const)(v3 + 256),
          BATTLE_PASS_UNLOCK_PAID,
          config->level,
          reward_id_0);
        v23 = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::operator[](
                &this->battle_pass_reward_map,
                &config->index_id);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<BattlePassRewardTag>,BattlePassRewardTag>(
               v23,
               (const BattlePassRewardTag *)(v3 + 256)) )
        {
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 352, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 352),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BattlePassExcelConfig.cpp",
            "rewriteBattlePassRewardConfig",
            286);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v24, (const char (*)[22])byte_1AAC1020);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->index_id);
          v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v26, (const char (*)[27])byte_1AAC1720);
          operator<<(v27, (const BattlePassRewardTag *)(v3 + 256));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v22 = 1;
        }
        else
        {
          v28 = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::operator[](
                  &this->battle_pass_reward_map,
                  &config->index_id);
          std::unordered_set<BattlePassRewardTag>::insert(
            v28,
            (const std::unordered_set<BattlePassRewardTag>::value_type *)(v3 + 256));
          v22 = 2;
        }
      }
      else
      {
        v22 = 0;
      }
      *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v22 && v22 != 2 )
      {
        v29 = 0;
        goto LABEL_56;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    v29 = 1;
LABEL_56:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
    {
      v19 = 0;
      goto LABEL_60;
    }
    __gnu_cxx::__normal_iterator<data::BattlePassRewardExcelConfig *,std::vector<data::BattlePassRewardExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::BattlePassRewardExcelConfig*,std::vector<data::BattlePassRewardExcelConfig> > *const)(v3 + 32));
  }
  v19 = 1;
LABEL_60:
  if ( v19 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 296: range 0000000012E912F0-0000000012E9167A
int32_t __cdecl BattlePassExcelConfigMgr::rewriteBattlePassMissionConfig(
        BattlePassExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  data::BattlePassMissionExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-E8h]
  uint32_t *mission_id; // [rsp+20h] [rbp-E0h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:297 64 8 13 __for_end:297 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::rewriteBattlePassMissionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->battle_pass_mission_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *const)(v3 + 32));
    mission_id = std::get<0ul,unsigned int const,data::BattlePassMissionExcelConfig>(__in);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v7 = (data::WatcherConfig *)std::get<1ul,unsigned int const,data::BattlePassMissionExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)mission_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)mission_id;
      __asan_report_load4(mission_id);
    }
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *mission_id, v7) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/BattlePassExcelConfig.cpp",
    "rewriteBattlePassMissionConfig",
    301);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         v8,
         (const char (*)[37])"addWatcherConfig failed, mission_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, mission_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 309: range 0000000012E9167C-0000000012E91949
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl BattlePassExcelConfigMgr::getCurScheduleId(const BattlePassExcelConfigMgr *const this, uint32_t now)
{
  uint32_t v2; // r14d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  uint32_t result; // eax
  data::BattlePassScheduleExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::reference v9; // [rsp+18h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BattlePassScheduleExcelConfig> >::type *schedule_id; // [rsp+20h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassScheduleExcelConfig> >::type *config; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:310 64 8 13 __for_end:310";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>::__node_type *)BattlePassExcelConfigMgr::getCurScheduleId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->battle_pass_schedule_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], *(_QWORD *)&now);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], *(_QWORD *)&now);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::BattlePassScheduleExcelConfig>::end(__for_range)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>(
            v3 + 4,
            v3 + 8) )
    {
      v6 = 1;
      goto LABEL_21;
    }
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::operator*(v3 + 4);
    schedule_id = std::get<0ul,unsigned int const,data::BattlePassScheduleExcelConfig>(v9);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassScheduleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BattlePassScheduleExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->begin_time);
    }
    if ( now >= config->begin_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->end_time);
      }
      if ( now < config->end_time )
        break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false,false>::operator++(v3 + 4);
  }
  if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(schedule_id);
  }
  v2 = *schedule_id;
  v6 = 0;
LABEL_21:
  if ( v6 == 1 )
    v2 = 0;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassScheduleExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 322: range 0000000012E9194A-0000000012E922C4
// local variable allocation has failed, the output may be wrong!
std::tuple<unsigned int,unsigned int,unsigned int> __cdecl BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t now)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int *v7; // r8
  int *v8; // r9
  std::tuple<unsigned int,unsigned int,unsigned int> v9; // rax
  uint32_t CycleBeginTime; // edx
  int *v11; // r8
  int *v12; // r9
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rsi
  uint32_t end_time; // ecx
  char v17; // al
  char *v18; // rsi
  unsigned int *v19; // r8
  unsigned int *v20; // r9
  unsigned int *v21; // rax
  unsigned int *v22; // rdx
  int v23; // ecx
  int v24; // ecx
  char v25; // al
  int v26; // ecx
  uint32_t nowa; // [rsp+8h] [rbp-198h]
  const BattlePassExcelConfigMgr *thisa; // [rsp+10h] [rbp-190h]
  uint32_t pass_time; // [rsp+28h] [rbp-178h]
  unsigned int day_num; // [rsp+2Ch] [rbp-174h]
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+30h] [rbp-170h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-168h]
  char v34[352]; // [rsp+40h] [rbp-160h] BYREF

  thisa = *(const BattlePassExcelConfigMgr **)&schedule_id;
  nowa = v3;
  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 14 begin_time:328 112 4 9 <unknown> 1"
                        "28 4 9 <unknown> 144 4 9 <unknown> 160 4 7 idx:333 176 4 12 end_time:335 192 8 15 __for_begin:33"
                        "6 224 8 13 __for_end:336 256 12 9 <unknown> 288 12 9 <unknown>";
  *(_QWORD *)(v4 + 16) = BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -219020288;
  v6[536862729] = -202177536;
  schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                          *(const data::BattlePassExcelConfigMgrBase *const *)&schedule_id,
                          now);
  if ( schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config_ptr->begin_time);
    }
    v14 = now;
    CycleBeginTime = BattlePassExcelConfigMgr::getCycleBeginTime(thisa, now, schedule_config_ptr->begin_time);
    v13 = *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v13 != 0;
    if ( v13 != 0 && v13 <= 3 )
      __asan_report_store4(v4 + 96, v14);
    *(_DWORD *)(v4 + 96) = CycleBeginTime;
    if ( nowa >= *(_DWORD *)(v4 + 96) )
      goto LABEL_31;
    v14 = (((_BYTE)schedule_config_ptr + 84) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->end_time);
    }
    if ( nowa < schedule_config_ptr->end_time )
    {
LABEL_31:
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 160, v14);
      *(_DWORD *)(v4 + 160) = 1;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 96);
      pass_time = nowa - *(_DWORD *)(v4 + 96);
      v15 = (((_BYTE)schedule_config_ptr + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config_ptr->end_time);
      }
      end_time = schedule_config_ptr->end_time;
      v17 = *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000);
      LOBYTE(v15) = v17 != 0;
      if ( v17 != 0 && v17 <= 3 )
        __asan_report_store4(v4 + 176, v15);
      *(_DWORD *)(v4 + 176) = end_time;
      __for_range = &schedule_config_ptr->cycle_list;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v15);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 192) = std::vector<unsigned int>::begin(__for_range);
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v15);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 224) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v18 = (char *)(v4 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 224)) )
          break;
        v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 192));
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        day_num = *v22;
        if ( pass_time < 86400 * *v22 )
        {
          v23 = 86400 * day_num;
          if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 96);
          v24 = *(_DWORD *)(v4 + 96) + v23;
          v25 = *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000);
          if ( v25 != 0 && v25 <= 3 )
          {
            LOBYTE(v18) = v25 != 0;
            __asan_report_store4(v4 + 176, v18);
          }
          *(_DWORD *)(v4 + 176) = v24;
          break;
        }
        pass_time -= 86400 * day_num;
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 160);
        ++*(_DWORD *)(v4 + 160);
        v26 = 86400 * day_num;
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 96);
        *(_DWORD *)(v4 + 96) += v26;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 192));
      }
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->battle_pass_schedule_excel_config_map._M_h._M_buckets + 3) >> 3)
                    + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->battle_pass_schedule_excel_config_map._M_h._M_buckets
                                                            + 3) >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 12LL);
      }
      v9 = std::make_tuple<unsigned int &,unsigned int &,unsigned int &>(
             (unsigned int *)this,
             (unsigned int *)(v4 + 160),
             (unsigned int *)(v4 + 96),
             (unsigned int *)(v4 + 176),
             v19,
             v20);
    }
    else
    {
      if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 144, v14);
      *(_DWORD *)(v4 + 144) = 0;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 128, v14);
      *(_DWORD *)(v4 + 128) = 0;
      if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 112, v14);
      *(_DWORD *)(v4 + 112) = 0;
      if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 299) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 43) & 7) >= *(_BYTE *)(((v4 + 299) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 288, 12LL);
      }
      std::make_tuple<int,int,int>((int *)(v4 + 288), (int *)(v4 + 112), (int *)(v4 + 128), (int *)(v4 + 144), v11, v12);
      std::tuple<unsigned int,unsigned int,unsigned int>::tuple<int,int,int,void,true>(
        (std::tuple<unsigned int,unsigned int,unsigned int> *const)this,
        (std::tuple<int,int,int> *)(v4 + 288));
    }
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80, now);
    *(_DWORD *)(v4 + 80) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 64, now);
    *(_DWORD *)(v4 + 64) = 0;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 48, now);
    *(_DWORD *)(v4 + 48) = 0;
    if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 267) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 11) & 7) >= *(_BYTE *)(((v4 + 267) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 256, 12LL);
    }
    std::make_tuple<int,int,int>((int *)(v4 + 256), (int *)(v4 + 48), (int *)(v4 + 64), (int *)(v4 + 80), v7, v8);
    std::tuple<unsigned int,unsigned int,unsigned int>::tuple<int,int,int,void,true>(
      (std::tuple<unsigned int,unsigned int,unsigned int> *const)this,
      (std::tuple<int,int,int> *)(v4 + 256));
  }
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    v9.std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl = -168430091;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v9.std::_Tuple_impl<1,unsigned int,unsigned int> = (std::_Tuple_impl<1,unsigned int,unsigned int>)this;
  return v9;
};

// Line 364: range 0000000012E922C6-0000000012E9260C
std::unordered_set<unsigned int> *__cdecl BattlePassExcelConfigMgr::getDailyMissionSet(
        std::unordered_set<unsigned int> *retstr,
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::BattlePassMissionExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:365 64 8 13 __for_end:365";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)BattlePassExcelConfigMgr::getDailyMissionSet;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::unordered_set<unsigned int>::unordered_set(retstr);
  if ( schedule_id )
  {
    __for_range = &this->battle_pass_mission_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[4], this);
    v3[4]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::begin(__for_range)._M_cur;
    if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[8], this);
    v3[8]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>(
              v3 + 4,
              v3 + 8) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator*(v3 + 4);
      id = std::get<0ul,unsigned int const,data::BattlePassMissionExcelConfig>(v9);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BattlePassMissionExcelConfig>(v9);
      if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->schedule_id);
      }
      if ( !config->schedule_id || schedule_id == config->schedule_id )
      {
        if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&config->is_disuse, &v3[8], &config->is_disuse);
        if ( !config->is_disuse )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&config->refresh_type);
          }
          if ( config->refresh_type == BATTLE_PASS_MISSION_REFRESH_DAILY )
            std::unordered_set<unsigned int>::insert(retstr, id);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator++(v3 + 4);
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 369: range 0000000012E9260E-0000000012E92955
std::unordered_set<unsigned int> *__cdecl BattlePassExcelConfigMgr::getInScheduleCycleMissionSet(
        std::unordered_set<unsigned int> *retstr,
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::BattlePassMissionExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:370 64 8 13 __for_end:370";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)BattlePassExcelConfigMgr::getInScheduleCycleMissionSet;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::unordered_set<unsigned int>::unordered_set(retstr);
  if ( schedule_id )
  {
    __for_range = &this->battle_pass_mission_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[4], this);
    v3[4]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::begin(__for_range)._M_cur;
    if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[8], this);
    v3[8]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>(
              v3 + 4,
              v3 + 8) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator*(v3 + 4);
      id = std::get<0ul,unsigned int const,data::BattlePassMissionExcelConfig>(v9);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BattlePassMissionExcelConfig>(v9);
      if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->schedule_id);
      }
      if ( !config->schedule_id || schedule_id == config->schedule_id )
      {
        if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&config->is_disuse, &v3[8], &config->is_disuse);
        if ( !config->is_disuse )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&config->refresh_type);
          }
          if ( config->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE )
            std::unordered_set<unsigned int>::insert(retstr, id);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator++(v3 + 4);
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 374: range 0000000012E92956-0000000012E92C9D
std::unordered_set<unsigned int> *__cdecl BattlePassExcelConfigMgr::getScheduleMissionSet(
        std::unordered_set<unsigned int> *retstr,
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::BattlePassMissionExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:375 64 8 13 __for_end:375";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)BattlePassExcelConfigMgr::getScheduleMissionSet;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::unordered_set<unsigned int>::unordered_set(retstr);
  if ( schedule_id )
  {
    __for_range = &this->battle_pass_mission_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[4], this);
    v3[4]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::begin(__for_range)._M_cur;
    if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[8], this);
    v3[8]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>(
              v3 + 4,
              v3 + 8) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator*(v3 + 4);
      id = std::get<0ul,unsigned int const,data::BattlePassMissionExcelConfig>(v9);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BattlePassMissionExcelConfig>(v9);
      if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->schedule_id);
      }
      if ( !config->schedule_id || schedule_id == config->schedule_id )
      {
        if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&config->is_disuse, &v3[8], &config->is_disuse);
        if ( !config->is_disuse )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&config->refresh_type);
          }
          if ( config->refresh_type == BATTLE_PASS_MISSION_REFRESH_SCHEDULE )
            std::unordered_set<unsigned int>::insert(retstr, id);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator++(v3 + 4);
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 380: range 0000000012E92C9E-0000000012E93021
__int64 __fastcall BattlePassExcelConfigMgr::findBattlePassRewardIdByTag(
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id,
        BattlePassRewardTag tag)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>> *p_battle_pass_reward_map; // rdx
  const std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::key_type *p_level_reward_index_id; // rcx
  __int64 v9; // rsi
  const std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::key_type *v10; // rsi
  std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>> *v11; // rdx
  bool v12; // al
  bool v13; // al
  std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::pointer v14; // rdx
  uint32_t *p_reward_id; // rax
  const data::BattlePassScheduleExcelConfig *battle_pass_reward_config_ptr; // [rsp+20h] [rbp-F0h]
  std::unordered_set<BattlePassRewardTag> *reward_set; // [rsp+28h] [rbp-E8h]
  char v19[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 12 map_iter:386 64 8 9 <unknown> 96 8 15 reward_iter:392 128 8 9 <unknown> 160 12 7 tag:379";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::findBattlePassRewardIdByTag;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202177536;
  *(BattlePassRewardTag *)(v3 + 160) = tag;
  battle_pass_reward_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                                    this,
                                    schedule_id);
  if ( battle_pass_reward_config_ptr )
  {
    p_battle_pass_reward_map = &this->battle_pass_reward_map;
    p_level_reward_index_id = &battle_pass_reward_config_ptr->level_reward_index_id;
    v9 = *(unsigned __int8 *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v3 + 32, v9);
    v10 = p_level_reward_index_id;
    *(std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::find(p_battle_pass_reward_map, p_level_reward_index_id);
    v11 = &this->battle_pass_reward_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v10);
    *(std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::end(v11);
    v12 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false> *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 0LL;
    }
    else
    {
      reward_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false,false> *const)(v3 + 32))->second;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v3 + 64);
      *(std::unordered_set<BattlePassRewardTag>::const_iterator *)(v3 + 96) = std::unordered_set<BattlePassRewardTag>::find(
                                                                                reward_set,
                                                                                (const std::unordered_set<BattlePassRewardTag>::key_type *)(v3 + 160));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v3 + 160);
      *(std::unordered_set<BattlePassRewardTag>::const_iterator *)(v3 + 128) = std::unordered_set<BattlePassRewardTag>::end(reward_set);
      v13 = std::__detail::operator==<BattlePassRewardTag,false>(
              (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v3 + 128));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        result = 0LL;
      }
      else
      {
        v14 = std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator->((const std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false> *const)(v3 + 96));
        p_reward_id = &v14->reward_id;
        if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_reward_id);
        }
        result = v14->reward_id;
      }
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 401: range 0000000012E93022-0000000012E93803
std::unordered_set<BattlePassRewardTag> *__cdecl BattlePassExcelConfigMgr::getBattlePassScheduleAllRewardTagSet(
        std::unordered_set<BattlePassRewardTag> *retstr,
        const BattlePassExcelConfigMgr *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  BattlePassRewardTag *v6; // r14
  std::vector<BattlePassRewardTag>::iterator v7; // rax
  std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>> *p_battle_pass_reward_map; // rdx
  const std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::key_type *p_level_reward_index_id; // rcx
  __int64 v10; // rsi
  const std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::key_type *v11; // rsi
  std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>> *v12; // rdx
  char *v13; // rsi
  bool v14; // al
  BattlePassRewardTag *M_current; // r14
  std::vector<BattlePassRewardTag>::iterator v16; // rax
  BattlePassRewardTag *v17; // r14
  std::vector<BattlePassRewardTag>::iterator v18; // rax
  const data::BattlePassScheduleExcelConfig *battle_pass_reward_config_ptr; // [rsp+28h] [rbp-1C8h]
  std::unordered_set<BattlePassRewardTag> *__for_range; // [rsp+30h] [rbp-1C0h]
  std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::reference tag; // [rsp+38h] [rbp-1B8h]
  char v25[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 8 12 set_iter:408 224 8 9 <"
                        "unknown> 256 8 15 __for_begin:413 288 8 13 __for_end:413 320 24 14 result_vec:402";
  *(_QWORD *)(v3 + 16) = BattlePassExcelConfigMgr::getBattlePassScheduleAllRewardTagSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862725] = -234753535;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  std::vector<BattlePassRewardTag>::vector((std::vector<BattlePassRewardTag> *const)(v3 + 320));
  battle_pass_reward_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                                    this,
                                    schedule_id);
  if ( battle_pass_reward_config_ptr )
  {
    p_battle_pass_reward_map = &this->battle_pass_reward_map;
    p_level_reward_index_id = &battle_pass_reward_config_ptr->level_reward_index_id;
    v10 = *(unsigned __int8 *)(((v3 + 192) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v10 )
      __asan_report_store8(v3 + 192, v10);
    v11 = p_level_reward_index_id;
    *(std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::find(p_battle_pass_reward_map, p_level_reward_index_id);
    v12 = &this->battle_pass_reward_map;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v11);
    *(std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::unordered_set<BattlePassRewardTag>>::end(v12);
    v13 = (char *)(v3 + 224);
    v14 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false> *)(v3 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false> *)(v3 + 224));
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<BattlePassRewardTag>::allocator((std::allocator<BattlePassRewardTag> *const)(v3 + 128));
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
      M_current = std::vector<BattlePassRewardTag>::end((std::vector<BattlePassRewardTag> *const)(v3 + 320))._M_current;
      v16._M_current = std::vector<BattlePassRewardTag>::begin((std::vector<BattlePassRewardTag> *const)(v3 + 320))._M_current;
      std::unordered_set<BattlePassRewardTag>::unordered_set<__gnu_cxx::__normal_iterator<BattlePassRewardTag*,std::vector<BattlePassRewardTag>>>(
        retstr,
        v16,
        (__gnu_cxx::__normal_iterator<BattlePassRewardTag*,std::vector<BattlePassRewardTag> >)M_current,
        0LL,
        (const std::unordered_set<BattlePassRewardTag>::hasher *)(v3 + 96),
        (const std::unordered_set<BattlePassRewardTag>::key_equal *)(v3 + 112),
        (const std::unordered_set<BattlePassRewardTag>::allocator_type *)(v3 + 128));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      std::allocator<BattlePassRewardTag>::~allocator((std::allocator<BattlePassRewardTag> *const)(v3 + 128));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<BattlePassRewardTag> >,false,false> *const)(v3 + 192))->second;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v13);
      *(std::unordered_set<BattlePassRewardTag>::const_iterator *)(v3 + 256) = std::unordered_set<BattlePassRewardTag>::begin(__for_range);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v13);
      *(std::unordered_set<BattlePassRewardTag>::const_iterator *)(v3 + 288) = std::unordered_set<BattlePassRewardTag>::end(__for_range);
      while ( std::__detail::operator!=<BattlePassRewardTag,false>(
                (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v3 + 256),
                (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v3 + 288)) )
      {
        tag = std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator*((const std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false> *const)(v3 + 256));
        std::vector<BattlePassRewardTag>::emplace_back<BattlePassRewardTag const&>(
          (std::vector<BattlePassRewardTag> *const)(v3 + 320),
          tag,
          tag);
        std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator++((std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false> *const)(v3 + 256));
      }
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 1;
      std::allocator<BattlePassRewardTag>::allocator((std::allocator<BattlePassRewardTag> *const)(v3 + 176));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 1;
      v17 = std::vector<BattlePassRewardTag>::end((std::vector<BattlePassRewardTag> *const)(v3 + 320))._M_current;
      v18._M_current = std::vector<BattlePassRewardTag>::begin((std::vector<BattlePassRewardTag> *const)(v3 + 320))._M_current;
      std::unordered_set<BattlePassRewardTag>::unordered_set<__gnu_cxx::__normal_iterator<BattlePassRewardTag*,std::vector<BattlePassRewardTag>>>(
        retstr,
        v18,
        (__gnu_cxx::__normal_iterator<BattlePassRewardTag*,std::vector<BattlePassRewardTag> >)v17,
        0LL,
        (const std::unordered_set<BattlePassRewardTag>::hasher *)(v3 + 144),
        (const std::unordered_set<BattlePassRewardTag>::key_equal *)(v3 + 160),
        (const std::unordered_set<BattlePassRewardTag>::allocator_type *)(v3 + 176));
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      std::allocator<BattlePassRewardTag>::~allocator((std::allocator<BattlePassRewardTag> *const)(v3 + 176));
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    }
  }
  else
  {
    std::allocator<BattlePassRewardTag>::allocator((std::allocator<BattlePassRewardTag> *const)(v3 + 80));
    v6 = std::vector<BattlePassRewardTag>::end((std::vector<BattlePassRewardTag> *const)(v3 + 320))._M_current;
    v7._M_current = std::vector<BattlePassRewardTag>::begin((std::vector<BattlePassRewardTag> *const)(v3 + 320))._M_current;
    std::unordered_set<BattlePassRewardTag>::unordered_set<__gnu_cxx::__normal_iterator<BattlePassRewardTag*,std::vector<BattlePassRewardTag>>>(
      retstr,
      v7,
      (__gnu_cxx::__normal_iterator<BattlePassRewardTag*,std::vector<BattlePassRewardTag> >)v6,
      0LL,
      (const std::unordered_set<BattlePassRewardTag>::hasher *)(v3 + 48),
      (const std::unordered_set<BattlePassRewardTag>::key_equal *)(v3 + 64),
      (const std::unordered_set<BattlePassRewardTag>::allocator_type *)(v3 + 80));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    std::allocator<BattlePassRewardTag>::~allocator((std::allocator<BattlePassRewardTag> *const)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  }
  std::vector<BattlePassRewardTag>::~vector((std::vector<BattlePassRewardTag> *const)(v3 + 320));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 421: range 0000000012E93804-0000000012E93AD8
std::unordered_set<unsigned int> *__cdecl BattlePassExcelConfigMgr::getCrossScheduleCycleMissionSet(
        std::unordered_set<unsigned int> *retstr,
        const BattlePassExcelConfigMgr *const this)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BattlePassMissionExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::reference v7; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:423 64 8 13 __for_end:423";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)BattlePassExcelConfigMgr::getCrossScheduleCycleMissionSet;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::unordered_set<unsigned int>::unordered_set(retstr);
  __for_range = &this->battle_pass_mission_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], this);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], this);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::BattlePassMissionExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::BattlePassMissionExcelConfig>(v7);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BattlePassMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BattlePassMissionExcelConfig>(v7);
    if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_disuse, &v2[8], &config->is_disuse);
    if ( !config->is_disuse )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->refresh_type >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->refresh_type);
      }
      if ( config->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE_CROSS_SCHEDULE )
        std::unordered_set<unsigned int>::insert(retstr, id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false,false>::operator++(v2 + 4);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassMissionExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 438: range 0000000012E93ADA-0000000012E93D43
bool __fastcall BattlePassExcelConfigMgr::isCrossScheduleCycleMission(
        const BattlePassExcelConfigMgr *const this,
        uint32_t mission_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const data::BattlePassMissionExcelConfig *mission_config_ptr; // [rsp+18h] [rbp-A8h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 mission_id:437 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BattlePassExcelConfigMgr::isCrossScheduleCycleMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = mission_id;
  mission_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassMissionExcelConfig(
                         this,
                         *(unsigned int *)(v2 + 48));
  if ( mission_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&mission_config_ptr->refresh_type);
    }
    result = mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE_CROSS_SCHEDULE;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/BattlePassExcelConfig.cpp",
      "isCrossScheduleCycleMission",
      444);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[9])"mission:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
