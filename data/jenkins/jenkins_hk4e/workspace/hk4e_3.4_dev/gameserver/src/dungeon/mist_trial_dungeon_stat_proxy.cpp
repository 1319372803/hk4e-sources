// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/mist_trial_dungeon_stat_proxy.cpp

// Line 25: range 000000001556E1F4-000000001556F8DF
int32_t __cdecl MistTrialDungeonStatProxy::init(
        MistTrialDungeonStatProxy *const this,
        const std::vector<unsigned int> *focus_stat_id_set)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const std::string *v13; // rax
  const std::string *v14; // rax
  bool v15; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  const std::string *v18; // rax
  bool v19; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  const std::string *v22; // rax
  bool v23; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v24; // rax
  _DWORD *v25; // rdx
  const std::string *v26; // rax
  bool v27; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v28; // rax
  _DWORD *v29; // rdx
  const std::string *v30; // rax
  bool v31; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v32; // rax
  _DWORD *v33; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_stat_type_id_set_map; // rcx
  common::milog::MiLogStream *v35; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+16h] [rbp-18Ah] BYREF
  bool is_fail; // [rsp+17h] [rbp-189h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  std::vector<std::string>::iterator __for_begin_0; // [rsp+28h] [rbp-178h] BYREF
  std::vector<std::string>::iterator __for_end_0; // [rsp+30h] [rbp-170h] BYREF
  const ActivityMistTrialExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-168h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-160h]
  const data::ActivityMistTrialStatisticsListExcelConfig *stat_config_ptr; // [rsp+48h] [rbp-158h]
  std::vector<unsigned int> *__for_range_5; // [rsp+50h] [rbp-150h]
  std::set<unsigned int> *related_stat_id_set_3; // [rsp+58h] [rbp-148h]
  std::unordered_set<unsigned int> *element_reaction_set; // [rsp+60h] [rbp-140h]
  std::vector<unsigned int> *__for_range_2; // [rsp+68h] [rbp-138h]
  std::vector<unsigned int> *__for_range_3; // [rsp+70h] [rbp-130h]
  std::set<unsigned int> *related_stat_id_set_1; // [rsp+78h] [rbp-128h]
  std::vector<unsigned int> *__for_range_1; // [rsp+80h] [rbp-120h]
  std::set<unsigned int> *related_stat_id_set_0; // [rsp+88h] [rbp-118h]
  std::vector<std::string> *__for_range_0; // [rsp+90h] [rbp-110h]
  std::string *attack_tag; // [rsp+98h] [rbp-108h]
  std::set<unsigned int> *related_stat_id_set; // [rsp+A0h] [rbp-100h]
  std::vector<unsigned int> *__for_range_4; // [rsp+A8h] [rbp-F8h]
  std::set<unsigned int> *related_stat_id_set_2; // [rsp+B0h] [rbp-F0h]
  std::set<unsigned int> *stat_id_set; // [rsp+B8h] [rbp-E8h]
  std::shared_ptr<Config> v60; // [rsp+C0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v61; // [rsp+D0h] [rbp-D0h] BYREF
  char v62[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 10 stat_id:29 48 4 19 weapon_gadget_id:79 64 24 24 element_reatcion_vec:162";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  MistTrialDungeonStatProxy::reset(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v60);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v60);
  __for_range = focus_stat_id_set;
  __for_begin._M_current = std::vector<unsigned int>::begin(focus_stat_id_set)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(focus_stat_id_set)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    stat_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialStatisticsListExcelConfig(
                        config_mgr,
                        *(_DWORD *)(v2 + 32));
    if ( stat_config_ptr )
    {
      is_fail = 0;
      if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_name >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_name >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stat_config_ptr->stat_name);
      }
      switch ( stat_config_ptr->stat_name )
      {
        case MIST_TRIAL_STAT_TYPE_FINISH_CHALLENGE_COUNT:
          if ( std::vector<std::string>::size(&stat_config_ptr->param) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v61, ",", &__a);
            v26 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
            v27 = common::tools::StringUtils::splitToList<unsigned int>(
                    v26,
                    (const std::string *)&v61,
                    (std::vector<unsigned int> *)(v2 + 64),
                    0) != 0;
            std::string::~string(&v61);
            std::allocator<char>::~allocator(&__a);
            if ( v27 )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                142);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v61,
                (const char (*)[32])"[MIST_TRIAL] splitToList failed");
              common::milog::MiLogStream::~MiLogStream(&v61);
              is_fail = 1;
            }
            else
            {
              __for_range_4 = (std::vector<unsigned int> *)(v2 + 64);
              __for_begin_0._M_current = (std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
              __for_end_0._M_current = (std::string *)std::vector<unsigned int>::end(__for_range_4)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
              {
                v28 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                v29 = v28;
                if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v28);
                }
                *(_DWORD *)(v2 + 48) = *v29;
                related_stat_id_set_2 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                          &this->challenge_index_related_stat_id_map_,
                                          (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
                std::set<unsigned int>::insert(
                  related_stat_id_set_2,
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
              }
            }
            goto LABEL_70;
          }
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "init",
            135);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v61,
            (const char (*)[46])"[MIST_TRIAL] challenge index param not enough");
          common::milog::MiLogStream::~MiLogStream(&v61);
          is_fail = 1;
          break;
        case MIST_TRIAL_STAT_TYPE_KILL_MONSTER_BY_ATTACK_TAG:
          if ( std::vector<std::string>::size(&stat_config_ptr->param) )
          {
            std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 64));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v61, ",", &__a);
            v8 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
            v9 = common::tools::StringUtils::splitToList(
                   v8,
                   (const std::string *)&v61,
                   (std::vector<std::string> *)(v2 + 64),
                   0) != 0;
            std::string::~string(&v61);
            std::allocator<char>::~allocator(&__a);
            if ( v9 )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                52);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v61,
                (const char (*)[32])"[MIST_TRIAL] splitToList failed");
              common::milog::MiLogStream::~MiLogStream(&v61);
              is_fail = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                56);
              v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v61,
                      (const char (*)[25])"[MIST_TRIAL] attack tag:");
              v11 = common::milog::MiLogStream::operator<<<std::string>(
                      v10,
                      (const std::vector<std::string> *)(v2 + 64));
              v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" param0:");
              v13 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, v13);
              common::milog::MiLogStream::~MiLogStream(&v61);
              __for_range_0 = (std::vector<std::string> *)(v2 + 64);
              __for_begin_0._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v2 + 64))._M_current;
              __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
              {
                attack_tag = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin_0);
                related_stat_id_set = std::unordered_map<std::string,std::set<unsigned int>>::operator[](
                                        &this->attack_tag_related_stat_id_map_,
                                        attack_tag);
                std::set<unsigned int>::insert(
                  related_stat_id_set,
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
                __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin_0);
              }
            }
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v61,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
              "init",
              45);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v61,
              (const char (*)[41])"[MIST_TRIAL] attack tag param not enough");
            common::milog::MiLogStream::~MiLogStream(&v61);
            is_fail = 1;
          }
          break;
        case MIST_TRIAL_STAT_TYPE_KILL_SHIELD_COUNT:
          if ( std::vector<std::string>::size(&stat_config_ptr->param) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v61, ",", &__a);
            v14 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
            v15 = common::tools::StringUtils::splitToList<unsigned int>(
                    v14,
                    (const std::string *)&v61,
                    (std::vector<unsigned int> *)(v2 + 64),
                    0) != 0;
            std::string::~string(&v61);
            std::allocator<char>::~allocator(&__a);
            if ( v15 )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                75);
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v61,
                (const char (*)[41])"[MIST_TRIAL] attack tag param not enough");
              common::milog::MiLogStream::~MiLogStream(&v61);
              is_fail = 1;
            }
            else
            {
              __for_range_1 = (std::vector<unsigned int> *)(v2 + 64);
              __for_begin_0._M_current = (std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
              __for_end_0._M_current = (std::string *)std::vector<unsigned int>::end(__for_range_1)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
              {
                v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                v17 = v16;
                if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v16);
                }
                *(_DWORD *)(v2 + 48) = *v17;
                related_stat_id_set_0 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                          &this->monster_weapon_gadget_id_related_stat_id_map_,
                                          (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
                std::set<unsigned int>::insert(
                  related_stat_id_set_0,
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
              }
            }
            goto LABEL_70;
          }
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "init",
            68);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v61,
            (const char (*)[41])"[MIST_TRIAL] attack tag param not enough");
          common::milog::MiLogStream::~MiLogStream(&v61);
          is_fail = 1;
          break;
        case MIST_TRIAL_STAT_TYPE_DISABLE_GEAR_COUNT:
          if ( std::vector<std::string>::size(&stat_config_ptr->param) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v61, ",", &__a);
            v22 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
            v23 = common::tools::StringUtils::splitToList<unsigned int>(
                    v22,
                    (const std::string *)&v61,
                    (std::vector<unsigned int> *)(v2 + 64),
                    0) != 0;
            std::string::~string(&v61);
            std::allocator<char>::~allocator(&__a);
            if ( v23 )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                120);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v61,
                (const char (*)[32])"[MIST_TRIAL] splitToList failed");
              common::milog::MiLogStream::~MiLogStream(&v61);
              is_fail = 1;
            }
            else
            {
              __for_range_3 = (std::vector<unsigned int> *)(v2 + 64);
              __for_begin_0._M_current = (std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
              __for_end_0._M_current = (std::string *)std::vector<unsigned int>::end(__for_range_3)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
              {
                v24 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                v25 = v24;
                if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v24);
                }
                *(_DWORD *)(v2 + 48) = *v25;
                related_stat_id_set_1 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                          &this->disable_gadget_id_related_stat_id_map_,
                                          (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
                std::set<unsigned int>::insert(
                  related_stat_id_set_1,
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
              }
            }
            goto LABEL_70;
          }
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "init",
            113);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v61,
            (const char (*)[41])"[MIST_TRIAL] attack tag param not enough");
          common::milog::MiLogStream::~MiLogStream(&v61);
          is_fail = 1;
          break;
        case MIST_TRIAL_STAT_TYPE_ELEMENT_REACTION_TYPE_NUM:
          if ( std::vector<std::string>::size(&stat_config_ptr->param) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v61, ",", &__a);
            v18 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
            v19 = common::tools::StringUtils::splitToList<unsigned int>(
                    v18,
                    (const std::string *)&v61,
                    (std::vector<unsigned int> *)(v2 + 64),
                    0) != 0;
            std::string::~string(&v61);
            std::allocator<char>::~allocator(&__a);
            if ( v19 )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                97);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v61,
                (const char (*)[32])"[MIST_TRIAL] splitToList failed");
              common::milog::MiLogStream::~MiLogStream(&v61);
              is_fail = 1;
            }
            else
            {
              element_reaction_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                                       &this->element_reaction_stat_id_reaction_type_map_,
                                       (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
              __for_range_2 = (std::vector<unsigned int> *)(v2 + 64);
              __for_begin_0._M_current = (std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
              __for_end_0._M_current = (std::string *)std::vector<unsigned int>::end(__for_range_2)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
              {
                v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                v21 = v20;
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v20);
                }
                *(_DWORD *)(v2 + 48) = *v21;
                std::unordered_set<unsigned int>::insert(
                  element_reaction_set,
                  (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
                std::unordered_set<unsigned int>::insert(
                  &this->stat_realted_reaction_type_set_,
                  (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
              }
            }
            goto LABEL_70;
          }
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "init",
            90);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v61,
            (const char (*)[41])"[MIST_TRIAL] attack tag param not enough");
          common::milog::MiLogStream::~MiLogStream(&v61);
          is_fail = 1;
          break;
        case MIST_TRIAL_STAT_TYPE_ELEMENT_REACTION_COUNT:
          if ( std::vector<std::string>::size(&stat_config_ptr->param) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v61, ",", &__a);
            v30 = std::vector<std::string>::operator[](&stat_config_ptr->param, 0LL);
            v31 = common::tools::StringUtils::splitToList<unsigned int>(
                    v30,
                    (const std::string *)&v61,
                    (std::vector<unsigned int> *)(v2 + 64),
                    0) != 0;
            std::string::~string(&v61);
            std::allocator<char>::~allocator(&__a);
            if ( v31 )
            {
              common::milog::MiLogStream::create(
                &v61,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "init",
                165);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v61,
                (const char (*)[32])"[MIST_TRIAL] splitToList failed");
              common::milog::MiLogStream::~MiLogStream(&v61);
              is_fail = 1;
            }
            else
            {
              __for_range_5 = (std::vector<unsigned int> *)(v2 + 64);
              __for_begin_0._M_current = (std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
              __for_end_0._M_current = (std::string *)std::vector<unsigned int>::end(__for_range_5)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
              {
                v32 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                v33 = v32;
                if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v32);
                }
                *(_DWORD *)(v2 + 48) = *v33;
                related_stat_id_set_3 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                          &this->reatcion_type_related_stat_id_map_,
                                          (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
                std::set<unsigned int>::insert(
                  related_stat_id_set_3,
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
                std::unordered_set<unsigned int>::insert(
                  &this->stat_realted_reaction_type_set_,
                  (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
              }
            }
LABEL_70:
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v61,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
              "init",
              158);
            common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v61,
              (const char (*)[53])"[MIST_TRIAL] element reaction count param not enough");
            common::milog::MiLogStream::~MiLogStream(&v61);
            is_fail = 1;
          }
          break;
        default:
          break;
      }
      if ( !is_fail )
      {
        p_stat_type_id_set_map = &this->stat_type_id_set_map_;
        if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_name >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_name >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stat_config_ptr->stat_name);
        }
        *(_DWORD *)(v2 + 48) = stat_config_ptr->stat_name;
        stat_id_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                        p_stat_type_id_set_map,
                        (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
        std::set<unsigned int>::insert(stat_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
          "init",
          186);
        v35 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v61,
                (const char (*)[41])"[MIST_TRIAL] init with stat_id, stat_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "init",
        34);
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v61,
             (const char (*)[50])"[MIST_TRIAL] stat_config_ptr is nullptr, stat_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v61);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_);
  this->is_enable_ = 1;
  result = 0;
  if ( v62 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 193: range 000000001556F8E0-0000000015570795
void __cdecl MistTrialDungeonStatProxy::onCreatureHurt(
        MistTrialDungeonStatProxy *const this,
        Creature *attacker,
        Creature *defenser,
        HurtContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Creature *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  char v10; // r15
  bool v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Uid; // edx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // edx
  Creature *v16; // rdx
  unsigned __int64 v17; // rax
  Creature *v18; // rdx
  unsigned __int64 v19; // rax
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  float final_damage; // edx
  uint32_t v28; // esi
  _BOOL4 v29; // r14d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  float v32; // xmm1_4
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t v37; // edi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  __int64 Guid; // rax
  unsigned int val; // [rsp+3Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-F0h] BYREF
  char v45[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 23 defenser_avatar_ptr:209 64 16 23 attacker_avatar_ptr:260 96 16 17 top_owner_ptr:263 1"
                        "28 16 14 player_ptr:281";
  *(_QWORD *)(v4 + 16) = MistTrialDungeonStatProxy::onCreatureHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&context->reason);
    }
    if ( context->reason == CHANGE_HP_SUB_AVATAR
      || context->reason == CHANGE_HP_SUB_MONSTER
      || context->reason == CHANGE_HP_SUB_GEAR )
    {
      v7 = defenser;
      if ( *(_BYTE *)(((unsigned __int64)defenser >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = *(_QWORD *)defenser->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = (*(__int64 (__fastcall **)(Creature *))v8)(v7);
      if ( v9 == 1 )
      {
        toThisPtr<Creature>((Creature *)(v4 + 128));
        std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 32));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 128));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "onCreatureHurt",
            212);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v44,
            (const char (*)[44])"[MIST_TRIAL] defenser_avatar_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&context->reason >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&context->reason);
          }
          if ( context->reason == CHANGE_HP_SUB_GEAR )
          {
            toThisPtr<Creature>((Creature *)(v4 + 64));
            if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v4 + 64), 0LL) )
            {
              std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              Creature::findTopOwner((const Creature *const)(v4 + 96));
              v10 = 0;
              v11 = 1;
              if ( !std::operator==<Creature>((const std::shared_ptr<Creature> *)(v4 + 96), 0LL) )
              {
                std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v4 + 128));
                v10 = 1;
                if ( !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v4 + 128), 0LL) )
                  v11 = 0;
              }
              if ( v10 )
                std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 128));
              if ( v11 )
              {
                v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
                Uid = Avatar::getUid(v12);
                MistTrialDungeonStatProxy::triggerBeingHitByGear(this, Uid);
              }
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 96));
            }
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 64));
          }
          if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&context->final_damage);
          }
          if ( context->final_damage >= 0.0 )
          {
            v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v15 = Avatar::getUid(v14);
            MistTrialDungeonStatProxy::triggerBeingHit(this, v15);
          }
          v16 = attacker;
          if ( *(_BYTE *)(((unsigned __int64)attacker >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v17 = *(_QWORD *)attacker->baseclass_0 + 24LL;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(Creature *))v17)(v16) == 4 )
            goto LABEL_49;
          v18 = attacker;
          if ( *(_BYTE *)(((unsigned __int64)attacker >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = *(_QWORD *)attacker->baseclass_0 + 24LL;
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(Creature *))v19)(v18) == 2 )
LABEL_49:
            v20 = 1;
          else
            v20 = 0;
          if ( v20 )
          {
            toThisPtr<Creature>((Creature *)(v4 + 128));
            std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 64));
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 128));
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                "onCreatureHurt",
                239);
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v44,
                (const char (*)[28])"defenser_avatar_ptr is null");
              common::milog::MiLogStream::~MiLogStream(&v44);
            }
            else
            {
              v21 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                v21 = __asan_report_load8();
              v22 = *(_QWORD *)v21 + 152LL;
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                v21 = __asan_report_load8();
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v22)(v4 + 96, v21);
              if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                  "onCreatureHurt",
                  245);
                v23 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                        &v44,
                        (const char (*)[58])byte_25806FE0);
                v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v23, &context->final_damage);
                v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])", uid:");
                v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                val = Player::getUid(v26);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
                common::milog::MiLogStream::~MiLogStream(&v44);
                MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v4 + 128));
                if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 128)) )
                {
                  common::milog::MiLogStream::create(
                    &v44,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                    "onCreatureHurt",
                    249);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v44,
                    (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
                  common::milog::MiLogStream::~MiLogStream(&v44);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load4(&context->final_damage);
                  }
                  final_damage = context->final_damage;
                  if ( *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&this->damage_beard_);
                  }
                  v28 = (int)SAFE_ADD<unsigned int,float>(this->damage_beard_, final_damage);
                  if ( *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&this->damage_beard_);
                  }
                  this->damage_beard_ = v28;
                }
                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 128));
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
      }
      else if ( v9 == 2 )
      {
        toThisPtr<Creature>((Creature *)(v4 + 128));
        std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 64));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 128));
        if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64))
          || ((Creature::findTopOwner((const Creature *const)(v4 + 96)),
               !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v4 + 96)))
            ? (std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 128)),
               std::shared_ptr<Avatar>::operator=(
                 (std::shared_ptr<Avatar> *const)(v4 + 64),
                 (std::shared_ptr<Avatar> *)(v4 + 128)),
               std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 128)),
               v29 = !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)))
            : (v29 = 0),
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 96)),
              v29) )
        {
          if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
          {
            v30 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
              v30 = __asan_report_load8();
            v31 = *(_QWORD *)v30 + 152LL;
            if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
              v30 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v31)(v4 + 128, v30);
            if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&context->final_damage);
              }
              v32 = context->final_damage;
              if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->strongest_blow_once_);
              }
              if ( v32 > (float)(int)this->strongest_blow_once_ )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
                  "onCreatureHurt",
                  286);
                v33 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v44,
                        (const char (*)[37])byte_258070A0);
                v34 = common::milog::MiLogStream::operator<<<float,(float *)0>(v33, &context->final_damage);
                v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])", uid:");
                v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                val = Player::getUid(v36);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
                common::milog::MiLogStream::~MiLogStream(&v44);
                if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4(&context->final_damage);
                }
                v37 = (int)context->final_damage;
                if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  v37 = (_DWORD)this + 652;
                  __asan_report_store4(&this->strongest_blow_once_);
                }
                this->strongest_blow_once_ = v37;
                v38 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                Guid = Avatar::getGuid(v38);
                if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_avatar_guid_ >> 3) + 0x7FFF8000) )
                  Guid = __asan_report_store8(&this->strongest_blow_avatar_guid_);
                this->strongest_blow_avatar_guid_ = Guid;
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
      }
    }
  }
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 299: range 0000000015570796-000000001557080F
void __cdecl MistTrialDungeonStatProxy::onChallengeFinish(
        MistTrialDungeonStatProxy *const this,
        uint32_t challenge_index,
        bool is_success)
{
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ && is_success )
    MistTrialDungeonStatProxy::triggerFinishChallenge(this, challenge_index);
};

// Line 312: range 0000000015570810-00000000155710B8
void __cdecl MistTrialDungeonStatProxy::onMonsterDie(
        MistTrialDungeonStatProxy *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // edx
  common::milog::MiLogStream *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int v17; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t Uid; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  AbilityComp *AbilityComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t v23; // edx
  unsigned int EntityId; // [rsp+24h] [rbp-11Ch] BYREF
  char *val; // [rsp+28h] [rbp-118h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-110h] BYREF
  char v28[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 21 dungeon_scene_ptr:319 64 16 16 creature_ptr:327 96 16 23 attacker_avatar_ptr:335 128 "
                        "16 17 top_owner_ptr:338 160 16 15 monster_ptr:342";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::onMonsterDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v3 + 32));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "onMonsterDie",
        322);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v27,
        (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      OwnerUid = Scene::getOwnerUid((const Scene *const)v6);
      MistTrialDungeonStatProxy::triggerKillMonsterCount(this, OwnerUid);
      std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v3 + 64), &context->attacker_ptr);
      if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
          "onMonsterDie",
          330);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v27,
          (const char (*)[30])"[MIST_TRIAL] attacker is null");
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
          "onMonsterDie",
          333);
        v8 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
               &v27,
               (const char (*)[75])"[MIST_TRIAL] MistTrialDungeonStatProxy::onMonsterDie++,creature_ptr->type:");
        v9 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( !v9 )
        {
          __asan_handle_no_return();
          __cxa_bad_typeid();
        }
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v10 = *(_QWORD *)v9;
        if ( *(_BYTE *)(((unsigned __int64)(v10 - 8) >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        val = (char *)std::type_info::name(*(const std::type_info *const *)(v10 - 8));
        v11 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v11,
                (const char (*)[19])", creature_ptr-id:");
        v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        EntityId = Entity::getEntityId((const Entity *const)v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &EntityId);
        common::milog::MiLogStream::~MiLogStream(&v27);
        std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 96));
        if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
          goto LABEL_39;
        std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Creature::findTopOwner((const Creature *const)(v3 + 128));
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "onMonsterDie",
            341);
          v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v27,
                  (const char (*)[48])"[MIST_TRIAL] top_owner_ptr is null, monster_id:");
          EntityId = Monster::getMonsterId(monster);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &EntityId);
          common::milog::MiLogStream::~MiLogStream(&v27);
          std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v3 + 160));
          if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
              "onMonsterDie",
              345);
            v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v27,
                    (const char (*)[47])"[MIST_TRIAL], attacker is monster, monster_id:");
            v16 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            EntityId = Monster::getMonsterId(v16);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &EntityId);
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 160));
          v17 = 0;
        }
        else
        {
          std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 160));
          std::shared_ptr<Avatar>::operator=(
            (std::shared_ptr<Avatar> *const)(v3 + 96),
            (std::shared_ptr<Avatar> *)(v3 + 160));
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
              "onMonsterDie",
              354);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v27,
              (const char (*)[41])"[MIST_TRIAL] attacker_avatar_ptr is null");
            common::milog::MiLogStream::~MiLogStream(&v27);
            v17 = 0;
          }
          else
          {
            v17 = 1;
          }
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 128));
        if ( v17 == 1 )
        {
LABEL_39:
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
              "onMonsterDie",
              361);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v27,
              (const char (*)[41])"[MIST_TRIAL] attacker_avatar_ptr is null");
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          else
          {
            v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            Uid = Avatar::getUid(v18);
            MistTrialDungeonStatProxy::triggerKillMonsterByAttackTag(this, Uid, &context->attack_tag);
            v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            AbilityComp = Creature::getAbilityComp(v20);
            if ( AbilityComp::hasAvatarShield(AbilityComp) )
            {
              v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              v23 = Avatar::getUid(v22);
              MistTrialDungeonStatProxy::triggerKillMonsterWithShield(this, v23);
            }
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 64));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  }
  if ( v28 == (char *)v3 )
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
};

// Line 372: range 00000000155710BA-000000001557112C
void __cdecl MistTrialDungeonStatProxy::onGagdetStateChange(
        MistTrialDungeonStatProxy *const this,
        uint32_t gadget_id,
        uint32_t state)
{
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ && state == 202 )
    MistTrialDungeonStatProxy::triggerStopGear(this, gadget_id);
};

// Line 384: range 000000001557112E-00000000155711A6
void __cdecl MistTrialDungeonStatProxy::onAvatarHeal(
        MistTrialDungeonStatProxy *const this,
        uint32_t delta_hp,
        Avatar *avatar)
{
  uint32_t Uid; // ecx

  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    Uid = Avatar::getUid(avatar);
    MistTrialDungeonStatProxy::triggerAvatarHeal(this, Uid, delta_hp);
  }
};

// Line 393: range 00000000155711A8-0000000015571212
void __cdecl MistTrialDungeonStatProxy::onMonsterDelWeapon(
        MistTrialDungeonStatProxy *const this,
        Monster *monster,
        uint32_t weapon_gadget_id)
{
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
    MistTrialDungeonStatProxy::triggerMonsterDelWeapon(this, weapon_gadget_id);
};

// Line 402: range 0000000015571214-00000000155719EC
void __fastcall MistTrialDungeonStatProxy::onMonsterTriggerElementReaction(
        MistTrialDungeonStatProxy *const this,
        const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int v13; // r14d
  std::unordered_map<data::ElementReactionType,unsigned int>::mapped_type *v14; // rax
  uint32_t v15; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t Uid; // eax
  uint32_t v18; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t v20; // eax
  unsigned int value; // [rsp+24h] [rbp-FCh] BYREF
  char *val; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 reaction_type:401 64 16 23 attacker_avatar_ptr:413 96 16 14 player_ptr:439 128 16 21 d"
                        "ungeon_scene_ptr:443";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::onMonsterTriggerElementReaction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = reaction_type;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
  {
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)p_attacker_ptr) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "onMonsterTriggerElementReaction",
        410);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v24,
        (const char (*)[30])"[MIST_TRIAL] attacker is null");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 64));
      if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 64), 0LL) )
        goto LABEL_38;
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_attacker_ptr);
      Creature::findTopOwner((const Creature *const)(v3 + 96));
      if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
          "onMonsterTriggerElementReaction",
          419);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v24,
          (const char (*)[35])"[MIST_TRIAL] top_owner_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = 0;
      }
      else
      {
        std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 128));
        std::shared_ptr<Avatar>::operator=(
          (std::shared_ptr<Avatar> *const)(v3 + 64),
          (std::shared_ptr<Avatar> *)(v3 + 128));
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "onMonsterTriggerElementReaction",
            427);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v24,
            (const char (*)[41])"[MIST_TRIAL] attacker_avatar_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v6 = 0;
        }
        else
        {
          v6 = 1;
        }
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 96));
      if ( v6 == 1 )
      {
LABEL_38:
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "onMonsterTriggerElementReaction",
            434);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v24,
            (const char (*)[41])"[MIST_TRIAL] attacker_avatar_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8();
          v8 = *(_QWORD *)v7 + 152LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v3 + 96, v7);
          if ( !std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
            goto LABEL_29;
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
            "onMonsterTriggerElementReaction",
            442);
          v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(&v24, (const char (*)[58])byte_258074E0);
          val = (char *)data::enumValToStr((data::ElementReactionType)*(_DWORD *)(v3 + 48));
          v10 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
          v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          value = Player::getUid(v12);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &value);
          common::milog::MiLogStream::~MiLogStream(&v24);
          MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v3 + 128));
          if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
              "onMonsterTriggerElementReaction",
              446);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v24,
              (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
            common::milog::MiLogStream::~MiLogStream(&v24);
            v13 = 0;
          }
          else
          {
            v14 = std::unordered_map<data::ElementReactionType,unsigned int>::operator[](
                    &this->element_reaction_type_count_map_,
                    (const std::unordered_map<data::ElementReactionType,unsigned int>::key_type *)(v3 + 48));
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            ++*v14;
            v13 = 1;
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
          if ( v13 == 1 )
          {
LABEL_29:
            value = *(_DWORD *)(v3 + 48);
            if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                   &this->stat_realted_reaction_type_set_,
                   &value) )
            {
              v15 = *(_DWORD *)(v3 + 48);
              v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              Uid = Avatar::getUid(v16);
              MistTrialDungeonStatProxy::triggerElementReactionNum(this, Uid, v15);
              v18 = *(_DWORD *)(v3 + 48);
              v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v20 = Avatar::getUid(v19);
              MistTrialDungeonStatProxy::triggerElementReactionCount(this, v20, v18);
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
    }
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 462: range 00000000155719EE-0000000015571A54
void __cdecl MistTrialDungeonStatProxy::onEnergySkillEvent(MistTrialDungeonStatProxy *const this, uint32_t uid)
{
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  if ( this->is_enable_ )
    MistTrialDungeonStatProxy::triggerEnergySkillEvent(this, uid);
};

// Line 471: range 0000000015571A56-0000000015571DD7
void __fastcall MistTrialDungeonStatProxy::updatePlayerStat(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        uint32_t stat_id,
        uint32_t add_val)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  uint32_t v10; // eax
  Player *v11; // rax
  PlayerWatcherComp *WatcherComp; // r15
  uint32_t v13; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t DungeonId; // eax
  std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *stat_value_map; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 7 uid:470 48 4 11 stat_id:470 64 16 21 dungeon_scene_ptr:481 96 16 14 player_ptr:487";
  *(_QWORD *)(v4 + 16) = MistTrialDungeonStatProxy::updatePlayerStat;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = uid;
  *(_DWORD *)(v4 + 48) = stat_id;
  stat_value_map = std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                     &this->player_stat_value_map_,
                     (const std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v4 + 32));
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
         stat_value_map,
         (const unsigned int *)(v4 + 48)) )
  {
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
           stat_value_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *v7 += add_val;
  }
  else
  {
    v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
           stat_value_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    *v9 = add_val;
  }
  MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v4 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
      "updatePlayerStat",
      484);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v19,
      (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v10 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    Scene::findPlayer((const Scene *const)(v4 + 96), v10);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 96)) )
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      WatcherComp = Player::getWatcherComp(v11);
      v13 = *(_DWORD *)(v4 + 48);
      v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      DungeonId = DungeonScene::getDungeonId(v14);
      PlayerWatcherComp::triggerMistTrialStatUpdate(WatcherComp, DungeonId, v13, add_val);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 495: range 0000000015571DD8-0000000015572161
void __fastcall MistTrialDungeonStatProxy::triggerElementReactionNum(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        uint32_t reaction_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::pointer v8; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *player_element_map; // [rsp+30h] [rbp-D0h]
  std::unordered_set<unsigned int> *stat_set; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 stat_id:501 64 4 7 uid:494 80 4 17 reaction_type:494 96 8 13 stat_iter:496 128 8 13 type_iter:503";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::triggerElementReactionNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 64) = uid;
  *(_DWORD *)(v3 + 80) = reaction_type;
  *(_DWORD *)(v3 + 48) = 9;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96),
          &__y) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 96))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v3 + 48) = *v7;
      *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(
                                                                                                     &this->element_reaction_stat_id_reaction_type_map_,
                                                                                                     (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 48));
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->element_reaction_stat_id_reaction_type_map_)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)&__y) )
      {
        v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 128));
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               &v8->second,
               (const unsigned int *)(v3 + 80)) )
        {
          player_element_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>::operator[](
                                 &this->player_triggered_element_reaction_type_map_,
                                 (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>::key_type *)(v3 + 64));
          stat_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                       player_element_map,
                       (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 48));
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                  stat_set,
                  (const unsigned int *)(v3 + 80)) )
          {
            MistTrialDungeonStatProxy::updatePlayerStat(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 48), 1u);
            std::unordered_set<unsigned int>::insert(
              stat_set,
              (const std::unordered_set<unsigned int>::value_type *)(v3 + 80));
          }
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 523: range 0000000015572162-000000001557239D
void __fastcall MistTrialDungeonStatProxy::triggerElementReactionCount(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        uint32_t reaction_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 reaction_type:522 64 8 13 stat_iter:524";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::triggerElementReactionCount;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = reaction_type;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->reatcion_type_related_stat_id_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->reatcion_type_related_stat_id_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, *v7, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 536: range 000000001557239E-000000001557280E
void __fastcall MistTrialDungeonStatProxy::triggerFinishChallenge(
        MistTrialDungeonStatProxy *const this,
        uint32_t challenge_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *v5; // rax
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  uint32_t uid; // [rsp+18h] [rbp-148h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-130h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-128h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-110h] BYREF
  char v18[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 19 challenge_index:535 48 8 13 stat_iter:537 80 16 21 dungeon_scene_ptr:542 112 48 11 uid_set:548";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerFinishChallenge;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = challenge_index;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->challenge_index_related_stat_id_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->challenge_index_related_stat_id_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 48),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_0) )
  {
    MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v2 + 80));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "triggerFinishChallenge",
        545);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v17,
        (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
      v5 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      Scene::getPlayerUidSet(v5, (std::set<unsigned int> *)(v2 + 112));
      __for_range = (std::set<unsigned int> *)(v2 + 112);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 112))._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        uid = *v7;
        __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 48))->second;
        __for_begin_0._M_node = std::set<unsigned int>::begin(__for_range_0)._M_node;
        __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          MistTrialDungeonStatProxy::updatePlayerStat(this, uid, *v9, 1u);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 560: range 0000000015572810-00000000155729E8
void __cdecl MistTrialDungeonStatProxy::triggerBeingHitByGear(MistTrialDungeonStatProxy *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __x; // [rsp+10h] [rbp-80h] BYREF
  uint32_t stat_id; // [rsp+14h] [rbp-7Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 13 stat_iter:561";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerBeingHitByGear;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __x = 2;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      &__x);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      stat_id = *v6;
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, stat_id, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 573: range 00000000155729EA-0000000015572BC2
void __cdecl MistTrialDungeonStatProxy::triggerBeingHit(MistTrialDungeonStatProxy *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __x; // [rsp+10h] [rbp-80h] BYREF
  uint32_t stat_id; // [rsp+14h] [rbp-7Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 13 stat_iter:574";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerBeingHit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __x = 6;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      &__x);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      stat_id = *v6;
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, stat_id, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 587: range 0000000015572BC4-0000000015572E51
void __cdecl MistTrialDungeonStatProxy::triggerKillMonsterByAttackTag(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        const std::string *attack_tag)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 13 stat_iter:588";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::triggerKillMonsterByAttackTag;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<std::string,std::set<unsigned int>>::find(
                                                                                     &this->attack_tag_related_stat_id_map_,
                                                                                     attack_tag);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<std::string,std::set<unsigned int>>::end(&this->attack_tag_related_stat_id_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::set<unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
      "triggerKillMonsterByAttackTag",
      591);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v13,
           (const char (*)[48])"[MIST_TRIAL] attack_tag not found, attack_tag: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, attack_tag);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<std::string const,std::set<unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true> *const)(v3 + 32))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, *v8, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 601: range 0000000015572E52-0000000015573031
void __cdecl MistTrialDungeonStatProxy::triggerAvatarHeal(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        uint32_t heal_hp)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __x; // [rsp+10h] [rbp-80h] BYREF
  uint32_t stat_id; // [rsp+14h] [rbp-7Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 13 stat_iter:602";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::triggerAvatarHeal;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __x = 4;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      &__x);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 32),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      stat_id = *v7;
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, stat_id, heal_hp);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 614: range 0000000015573032-000000001557320A
void __cdecl MistTrialDungeonStatProxy::triggerKillMonsterWithShield(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __x; // [rsp+10h] [rbp-80h] BYREF
  uint32_t stat_id; // [rsp+14h] [rbp-7Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 13 stat_iter:615";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerKillMonsterWithShield;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __x = 7;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      &__x);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      stat_id = *v6;
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, stat_id, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 627: range 000000001557320C-000000001557367C
void __fastcall MistTrialDungeonStatProxy::triggerStopGear(MistTrialDungeonStatProxy *const this, uint32_t gadget_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *v5; // rax
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  uint32_t uid; // [rsp+18h] [rbp-148h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-130h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-128h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-110h] BYREF
  char v18[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 gadget_id:626 48 8 13 stat_iter:628 80 16 21 dungeon_scene_ptr:633 112 48 11 uid_set:639";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerStopGear;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = gadget_id;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->disable_gadget_id_related_stat_id_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->disable_gadget_id_related_stat_id_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 48),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_0) )
  {
    MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v2 + 80));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "triggerStopGear",
        636);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v17,
        (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
      v5 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      Scene::getPlayerUidSet(v5, (std::set<unsigned int> *)(v2 + 112));
      __for_range = (std::set<unsigned int> *)(v2 + 112);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 112))._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        uid = *v7;
        __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 48))->second;
        __for_begin_0._M_node = std::set<unsigned int>::begin(__for_range_0)._M_node;
        __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          MistTrialDungeonStatProxy::updatePlayerStat(this, uid, *v9, 1u);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 651: range 000000001557367E-0000000015573AEE
void __fastcall MistTrialDungeonStatProxy::triggerMonsterDelWeapon(
        MistTrialDungeonStatProxy *const this,
        uint32_t weapon_gadget_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *v5; // rax
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  uint32_t uid; // [rsp+18h] [rbp-148h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-130h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-128h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-110h] BYREF
  char v18[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 20 weapon_gadget_id:650 48 8 13 stat_iter:652 80 16 21 dungeon_scene_ptr:657 112 48 11 uid_set:663";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerMonsterDelWeapon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = weapon_gadget_id;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->monster_weapon_gadget_id_related_stat_id_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->monster_weapon_gadget_id_related_stat_id_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 48),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_0) )
  {
    MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v2 + 80));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "triggerMonsterDelWeapon",
        660);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v17,
        (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
      v5 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      Scene::getPlayerUidSet(v5, (std::set<unsigned int> *)(v2 + 112));
      __for_range = (std::set<unsigned int> *)(v2 + 112);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 112))._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        uid = *v7;
        __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 48))->second;
        __for_begin_0._M_node = std::set<unsigned int>::begin(__for_range_0)._M_node;
        __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          MistTrialDungeonStatProxy::updatePlayerStat(this, uid, *v9, 1u);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 675: range 0000000015573AF0-0000000015573EAB
void __cdecl MistTrialDungeonStatProxy::triggerEnergySkillEvent(MistTrialDungeonStatProxy *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  uint32_t v7; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __x; // [rsp+10h] [rbp-F0h] BYREF
  uint32_t stat_id; // [rsp+14h] [rbp-ECh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 13 stat_iter:676 64 16 21 dungeon_scene_ptr:687 96 16 14 player_ptr:693";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerEnergySkillEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  __x = 11;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      &__x);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      stat_id = *v6;
      MistTrialDungeonStatProxy::updatePlayerStat(this, uid, stat_id, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    MistTrialDungeonStatProxy::getDungeonScene((MistTrialDungeonStatProxy *const)(v2 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "triggerEnergySkillEvent",
        690);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v13,
        (const char (*)[39])"[MIST_TRIAL] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v7 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::findPlayer((const Scene *const)(v2 + 96), v7);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->element_burst_count_);
        }
        ++this->element_burst_count_;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 702: range 0000000015573EAC-000000001557416C
void __fastcall MistTrialDungeonStatProxy::triggerKillMonsterCount(MistTrialDungeonStatProxy *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __x; // [rsp+10h] [rbp-C0h] BYREF
  uint32_t stat_id; // [rsp+14h] [rbp-BCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:701 64 8 13 stat_iter:704";
  *(_QWORD *)(v2 + 16) = MistTrialDungeonStatProxy::triggerKillMonsterCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
    "triggerKillMonsterCount",
    703);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v13,
         (const char (*)[43])"mist_test, triggerKillMonsterCount++, uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v13);
  __x = 12;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->stat_type_id_set_map_,
                                                                                      &__x);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->stat_type_id_set_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      stat_id = *v7;
      MistTrialDungeonStatProxy::updatePlayerStat(this, *(_DWORD *)(v2 + 48), stat_id, 1u);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 716: range 000000001557416E-000000001557436E
void __cdecl MistTrialDungeonStatProxy::reset(MistTrialDungeonStatProxy *const this)
{
  std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::clear(&this->player_stat_value_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::clear(&this->stat_type_id_set_map_);
  std::unordered_map<std::string,std::set<unsigned int>>::clear(&this->attack_tag_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::clear(&this->monster_weapon_gadget_id_related_stat_id_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::clear(&this->element_reaction_stat_id_reaction_type_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>::clear(&this->player_triggered_element_reaction_type_map_);
  std::unordered_set<unsigned int>::clear(&this->stat_realted_reaction_type_set_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::clear(&this->disable_gadget_id_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::clear(&this->challenge_index_related_stat_id_map_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_);
  this->is_enable_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_beard_);
  }
  this->damage_beard_ = 0;
  std::unordered_map<data::ElementReactionType,unsigned int>::clear(&this->element_reaction_type_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_burst_count_);
  }
  this->element_burst_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->strongest_blow_once_);
  }
  this->strongest_blow_once_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->strongest_blow_avatar_guid_);
  this->strongest_blow_avatar_guid_ = 0LL;
};

// Line 736: range 0000000015574370-0000000015574698
__int64 __fastcall MistTrialDungeonStatProxy::getStatValue(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        uint32_t stat_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 7 uid:735 48 4 11 stat_id:735 64 8 12 uid_iter:737 96 8 13 stat_iter:743";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::getStatValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = stat_id;
  *(std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(
                                                                                                   &this->player_stat_value_map_,
                                                                                                   (const std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(&this->player_stat_value_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
      "getStatValue",
      740);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v15,
           (const char (*)[33])"[MIST_TRIAL] uid not found, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > > *const)(v3 + 64));
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &v8->second,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > > *const)(v3 + 64));
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(&v9->second)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
        "getStatValue",
        746);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v15,
              (const char (*)[41])"[MIST_TRIAL] stat_id not found, stat_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0LL;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
      p_second = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v11->second;
    }
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 753: range 000000001557469A-0000000015574898
__int64 __fastcall MistTrialDungeonStatProxy::getStatMap(
        MistTrialDungeonStatProxy *const this,
        uint32_t uid,
        std::unordered_map<unsigned int,unsigned int> *stat_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:752 64 8 12 uid_iter:754";
  *(_QWORD *)(v3 + 16) = MistTrialDungeonStatProxy::getStatMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(
                                                                                                   &this->player_stat_value_map_,
                                                                                                   (const std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(&this->player_stat_value_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/mist_trial_dungeon_stat_proxy.cpp",
      "getStatMap",
      757);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v11,
           (const char (*)[33])"[MIST_TRIAL] uid not found, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > > *const)(v3 + 64));
    std::unordered_map<unsigned int,unsigned int>::operator=(stat_map, &v8->second);
  }
  result = 0LL;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
