// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/team_chain_gallery.cpp

// Line 27: range 0000000018044338-00000000180444FE
void __cdecl TeamChainGallery::toClient(TeamChainGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryTeamChainInfo *team_chain_gallery_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  team_chain_gallery_info = proto::SceneGalleryInfo::mutable_team_chain_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_total_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_total_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTeamChainInfo::set_cur_total_score(team_chain_gallery_info, this->cur_total_score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTeamChainInfo::set_cur_gallery_idx(team_chain_gallery_info, this->gallery_idx_);
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTeamChainInfo::set_killed_monster_cnt(team_chain_gallery_info, this->killed_monster_cnt_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTeamChainInfo::set_total_target_kill_cnt(team_chain_gallery_info, this->total_target_kill_cnt_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryTeamChainInfo::set_gallery_score_end_time(team_chain_gallery_info, this->score_end_time_);
};

// Line 40: range 0000000018044500-0000000018044A76
int32_t __cdecl TeamChainGallery::updatePlayerScore(
        TeamChainGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  const luabind::adl::object *v9; // rsi
  uint32_t v10; // ecx
  char v11; // dl
  bool v12; // dl
  bool v13; // r12
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v18; // [rsp+23h] [rbp-CDh]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-B1h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 17 total_kill_cnt:47 64 4 19 kill_monster_cnt:52";
  *(_QWORD *)(v4 + 16) = TeamChainGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "total_kill_cnt", &__a);
    v9 = param_table;
    v18 = !ScriptUtil::getTableValue<unsigned int>(
             &ScriptUtil::no_exception_instance,
             param_table,
             (const std::string *)&v20,
             (unsigned int *)(v4 + 48))
       && *(_DWORD *)(v4 + 48);
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    if ( v18 )
    {
      v10 = *(_DWORD *)(v4 + 48);
      v11 = *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v11 != 0;
      v12 = v11 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v11;
      if ( v12 )
        __asan_report_store4(&this->total_target_kill_cnt_, v9, v12);
      this->total_target_kill_cnt_ = v10;
    }
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "kill_monster_cnt", &__a);
    v13 = !ScriptUtil::getTableValue<unsigned int>(
             &ScriptUtil::no_exception_instance,
             param_table,
             (const std::string *)&v20,
             (unsigned int *)(v4 + 64))
       && *(_DWORD *)(v4 + 64);
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    if ( v13 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->killed_monster_cnt_;
    }
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/team_chain_gallery.cpp",
      "updatePlayerScore",
      58);
    v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v20,
            (const char (*)[25])"[TeamChain] killed_cnt: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->killed_monster_cnt_);
    v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])", total_kill_cnt: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->total_target_kill_cnt_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/team_chain_gallery.cpp",
      "updatePlayerScore",
      43);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v20,
           (const char (*)[44])"[TEAMCHAIN] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 63: range 0000000018044A78-00000000180456EF
void __cdecl TeamChainGallery::onStart(TeamChainGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  TeamChainDungeonContext *v6; // rax
  std::vector<TeamChainRoomTeamInfo>::size_type v7; // r14
  TeamChainDungeonContext *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  TeamChainDungeonContext *v12; // rax
  ActivityTeamChainExcelConfigMgr *p_activity_team_chain_config_mgr; // r14
  TeamChainDungeonContext *v14; // rdx
  TeamChainDungeonContext *v15; // rax
  std::vector<unsigned int> *p_skill_no_vec; // rsi
  uint32_t v17; // ecx
  char v18; // al
  TeamChainDungeonContext *v19; // rax
  unsigned int *M_current; // r14
  TeamChainDungeonContext *v21; // rax
  std::vector<unsigned int>::iterator v22; // rax
  uint32_t v23; // edi
  __int64 v24; // rsi
  bool v25; // dl
  uint32_t start_time; // ecx
  uint32_t v27; // ecx
  char v28; // al
  TeamChainDungeonContext *v29; // rax
  std::vector<TeamChainRoomAvatarInfo>::size_type v30; // r14
  uint32_t v31; // r15d
  uint32_t v32; // r14d
  unsigned __int64 v33; // rax
  bool v34; // r14
  __int64 v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::vector<TeamChainRoomAvatarInfo>::const_reference v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  const ActivityTeamChainExcelConfigMgr *v49; // [rsp+10h] [rbp-190h]
  unsigned __int64 val; // [rsp+28h] [rbp-178h] BYREF
  const data::TeamChainOverallExcelConfig *overall_config_ptr; // [rsp+30h] [rbp-170h]
  const std::vector<TeamChainRoomAvatarInfo> *room_avatar_info_vec; // [rsp+38h] [rbp-168h]
  std::shared_ptr<Config> v54; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v55; // [rsp+50h] [rbp-150h] BYREF
  char v56[304]; // [rsp+70h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 11 room_idx:85 64 4 7 idx:106 80 16 16 cur_scene_ptr:64 112 16 18 cur_dungeon_ptr:70 144 "
                        "72 14 context_opt:78";
  *(_QWORD *)(v1 + 16) = TeamChainGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)(v1 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/team_chain_gallery.cpp",
      "onStart",
      67);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v55,
      (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v55);
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 112));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/team_chain_gallery.cpp",
        "onStart",
        73);
      v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v55,
             (const char (*)[47])"[GALLERY] dynamic cast to dungeon scene failed");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v1 + 64) = Scene::getSceneId(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 64));
      common::milog::MiLogStream::~MiLogStream(&v55);
    }
    else
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
        (std::optional<TeamChainDungeonContext> *)(v1 + 144),
        v5);
      if ( !std::optional<TeamChainDungeonContext>::has_value((const std::optional<TeamChainDungeonContext> *const)(v1 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/team_chain_gallery.cpp",
          "onStart",
          81);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v55, (const char (*)[20])"[TeamChain] no data");
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      else
      {
        v6 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
        *(_DWORD *)(v1 + 48) = std::vector<unsigned int>::size(&v6->room_score_vec);
        v7 = *(unsigned int *)(v1 + 48);
        v8 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
        if ( v7 < std::vector<TeamChainRoomTeamInfo>::size(&v8->room_team_info_vec) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v54);
          p_activity_team_chain_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
          v14 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&v14->schedule_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->schedule_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          overall_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainOverallExcelConfig(
                                 p_activity_team_chain_config_mgr,
                                 v14->schedule_id);
          std::shared_ptr<Config>::~shared_ptr(&v54);
          if ( overall_config_ptr )
          {
            v15 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
            p_skill_no_vec = &std::vector<TeamChainRoomTeamInfo>::operator[](
                                &v15->room_team_info_vec,
                                *(unsigned int *)(v1 + 48))->skill_no_vec;
            std::vector<unsigned int>::operator=(&this->choose_skill_vec_, p_skill_no_vec);
            v17 = *(_DWORD *)(v1 + 48) + 1;
            v18 = *(_BYTE *)(((unsigned __int64)&this->gallery_idx_ >> 3) + 0x7FFF8000);
            if ( v18 != 0 && v18 <= 3 )
            {
              LOBYTE(p_skill_no_vec) = v18 != 0;
              __asan_report_store4(&this->gallery_idx_, p_skill_no_vec, (_BYTE)this + 48);
            }
            this->gallery_idx_ = v17;
            v19 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
            M_current = std::vector<unsigned int>::end(&v19->room_score_vec)._M_current;
            v21 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
            v22._M_current = std::vector<unsigned int>::begin(&v21->room_score_vec)._M_current;
            v23 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                    v22,
                    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                    0);
            v24 = (((_BYTE)this + 44) & 7u) + 3;
            v25 = *(_BYTE *)(((unsigned __int64)&this->cur_total_score_ >> 3) + 0x7FFF8000) != 0
               && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_total_score_ >> 3)
                                                                   + 0x7FFF8000);
            if ( v25 )
            {
              v23 = (_DWORD)this + 300;
              __asan_report_store4(&this->cur_total_score_, v24, v25);
            }
            this->cur_total_score_ = v23;
            if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            start_time = this->start_time_;
            if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->gallery_score_duration >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->gallery_score_duration >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v27 = overall_config_ptr->gallery_score_duration + start_time;
            v28 = *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000);
            if ( v28 != 0 && v28 <= 3 )
            {
              LOBYTE(v24) = v28 != 0;
              __asan_report_store4(&this->score_end_time_, v24, (_BYTE)this + 80);
            }
            this->score_end_time_ = v27;
            v29 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
            room_avatar_info_vec = (const std::vector<TeamChainRoomAvatarInfo> *)std::vector<TeamChainRoomTeamInfo>::operator[](
                                                                                   &v29->room_team_info_vec,
                                                                                   *(unsigned int *)(v1 + 48));
            for ( *(_DWORD *)(v1 + 64) = 0; ; ++*(_DWORD *)(v1 + 64) )
            {
              v30 = *(unsigned int *)(v1 + 64);
              if ( v30 >= std::vector<TeamChainRoomAvatarInfo>::size(room_avatar_info_vec) )
                break;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v54);
              v49 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
              v31 = *(_DWORD *)(v1 + 64);
              v32 = *(_DWORD *)(v1 + 48);
              v33 = (unsigned __int64)std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
              if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v33 >> 3) + 0x7FFF8000) <= 3 )
                v33 = __asan_report_load4();
              v34 = !ActivityTeamChainExcelConfigMgr::isStageRoomIdxInChain(v49, *(_DWORD *)v33, v32, v31);
              std::shared_ptr<Config>::~shared_ptr(&v54);
              if ( !v34 )
              {
                v35 = (__int64)std::vector<TeamChainRoomAvatarInfo>::operator[](
                                 room_avatar_info_vec,
                                 *(unsigned int *)(v1 + 64));
                if ( *(_BYTE *)(((unsigned __int64)(v35 + 16) >> 3) + 0x7FFF8000) )
                  v35 = __asan_report_load8();
                if ( *(_QWORD *)(v35 + 16) )
                {
                  v37 = std::vector<TeamChainRoomAvatarInfo>::operator[](
                          room_avatar_info_vec,
                          *(unsigned int *)(v1 + 64));
                  std::vector<unsigned long>::push_back(&this->chain_avatar_guid_vec_, &v37->in_dungeon_avatar_guid);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v55,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_gallery/team_chain_gallery.cpp",
                    "onStart",
                    114);
                  v36 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                          &v55,
                          (const char (*)[27])"room avatar guid is zero: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v1 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v55);
                }
              }
            }
            std::string::operator=(
              &this->chain_avatar_ability_group_name_,
              &overall_config_ptr->chain_avatar_ability_group_name);
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_gallery/team_chain_gallery.cpp",
              "onStart",
              122);
            v38 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v55,
                    (const char (*)[27])"[TeamChain] choose skill: ");
            v39 = common::milog::MiLogStream::operator<<<unsigned int>(v38, &this->choose_skill_vec_);
            v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v39,
                    (const char (*)[12])", cur_idx: ");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &this->gallery_idx_);
            v42 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v41,
                    (const char (*)[14])", cur_score: ");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &this->cur_total_score_);
            v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v43,
                    (const char (*)[13])", duration: ");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    &overall_config_ptr->gallery_score_duration);
            v46 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v45,
                    (const char (*)[25])", chain_avatar_uid_vec: ");
            v47 = common::milog::MiLogStream::operator<<<unsigned long>(v46, &this->chain_avatar_guid_vec_);
            v48 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    v47,
                    (const char (*)[37])", chain_avatar_ability_group_name_: ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v48,
              &this->chain_avatar_ability_group_name_);
            common::milog::MiLogStream::~MiLogStream(&v55);
            TeamChainGallery::addHostAbilityGroup(this);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/team_chain_gallery.cpp",
              "onStart",
              94);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v55,
              (const char (*)[38])"[TeamChain] overall config is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v55);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/team_chain_gallery.cpp",
            "onStart",
            88);
          v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 &v55,
                 (const char (*)[23])"[TeamChain] room_idx: ");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v1 + 48));
          v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v10,
                  (const char (*)[39])" bigger than room_team_info_vec size: ");
          v12 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
          val = std::vector<TeamChainRoomTeamInfo>::size(&v12->room_team_info_vec);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v55);
        }
      }
      std::optional<TeamChainDungeonContext>::~optional((std::optional<TeamChainDungeonContext> *const)(v1 + 144));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 112));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 80));
  if ( v56 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 130: range 00000000180456F0-00000000180462CC
void __fastcall TeamChainGallery::onStop(TeamChainGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  ActivityTeamChainExcelConfigMgr *p_activity_team_chain_config_mgr; // r14
  TeamChainDungeonContext *v12; // rdx
  ActivityTeamChainExcelConfigMgr *v13; // r14
  __int64 v14; // rax
  common::milog::MiLogStream *v15; // r14
  TeamChainDungeonContext *v16; // rax
  common::milog::MiLogStream *v17; // rax
  float base_score; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  common::milog::MiLogStream *v22; // rax
  TeamChainDungeonContext *v23; // rax
  DungeonScene *v24; // r14
  TeamChainDungeonContext *v25; // rax
  uint32_t now; // [rsp+1Ch] [rbp-174h]
  const data::TeamChainOverallExcelConfig *overall_config_ptr; // [rsp+20h] [rbp-170h]
  const data::TeamChainDifficultyExcelConfig *difficulty_config_ptr; // [rsp+28h] [rbp-168h]
  std::shared_ptr<Player> p_owner_player_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-150h] BYREF
  char v31[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 19 left_score_time:136 48 4 17 gallery_score:176 64 4 10 reason:129 80 16 17 cur_scene_pt"
                        "r:146 112 16 19 cur_dungeon_ptr:152 144 72 15 context_opt:158";
  *(_QWORD *)(v2 + 16) = TeamChainGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 64) = reason;
  std::shared_ptr<Player>::shared_ptr(&p_owner_player_ptr, 0LL);
  TeamChainGallery::delHostAbilityGroup(this, &p_owner_player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&p_owner_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now >= this->score_end_time_ )
    v5 = 0;
  else
    v5 = this->score_end_time_ - now;
  *(_DWORD *)(v2 + 32) = v5;
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/team_chain_gallery.cpp",
    "onStop",
    137);
  v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v30,
         (const char (*)[36])"[GALLERY] onStop, left_score_time: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", stop reason: ");
  common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
    v8,
    (const proto::GalleryStopReason *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( *(_DWORD *)(v2 + 64) == 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<Scene,Scene>((Scene *)(v2 + 80));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/team_chain_gallery.cpp",
        "onStop",
        149);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v30,
        (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 112));
      if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/team_chain_gallery.cpp",
          "onStop",
          155);
        v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v30,
               (const char (*)[47])"[GALLERY] dynamic cast to dungeon scene failed");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 48) = Scene::getSceneId(this->scene_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
          (std::optional<TeamChainDungeonContext> *)(v2 + 144),
          v10);
        if ( !std::optional<TeamChainDungeonContext>::has_value((const std::optional<TeamChainDungeonContext> *const)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/team_chain_gallery.cpp",
            "onStop",
            161);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v30,
            (const char (*)[20])"[TeamChain] no data");
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&p_owner_player_ptr);
          p_activity_team_chain_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_owner_player_ptr)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
          v12 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&v12->schedule_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->schedule_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          overall_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainOverallExcelConfig(
                                 p_activity_team_chain_config_mgr,
                                 v12->schedule_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_owner_player_ptr);
          if ( overall_config_ptr )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&p_owner_player_ptr);
            v13 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_owner_player_ptr)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
            v14 = (__int64)std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 144));
            if ( *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000) <= 3 )
            {
              v14 = __asan_report_load4();
            }
            difficulty_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainDifficultyExcelConfig(
                                      v13,
                                      *(_DWORD *)(v14 + 8));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_owner_player_ptr);
            if ( difficulty_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->base_score >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)overall_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->base_score >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              base_score = (float)(int)overall_config_ptr->base_score;
              if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a1 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a1 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v19 = (float)((float)*(int *)(v2 + 32)
                          * (float)(overall_config_ptr->score_param_a1 * (float)*(int *)(v2 + 32)))
                  + base_score;
              if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a2 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)overall_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a2 >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v20 = v19 + (float)((float)*(int *)(v2 + 32) * overall_config_ptr->score_param_a2);
              if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a3 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a3 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v21 = v20 + overall_config_ptr->score_param_a3;
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_magnification >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)difficulty_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_magnification >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 48) = (int)(float)((float)(int)difficulty_config_ptr->score_magnification * v21);
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_gallery/team_chain_gallery.cpp",
                "onStop",
                180);
              v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v30,
                      (const char (*)[30])"[GALLERY] onStop, new score: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v30);
              v23 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 144));
              std::vector<unsigned int>::push_back(
                &v23->room_score_vec,
                (const std::vector<unsigned int>::value_type *)(v2 + 48));
              v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              v25 = std::optional<TeamChainDungeonContext>::operator*((std::optional<TeamChainDungeonContext> *const)(v2 + 144));
              DungeonScene::setDungeonExtraData<TeamChainDungeonContext>(v24, v25);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/team_chain_gallery.cpp",
                "onStop",
                173);
              v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v30,
                      (const char (*)[25])"[TeamChain] difficulty: ");
              v16 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 144));
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v16->difficulty);
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])off_2648B580);
              common::milog::MiLogStream::~MiLogStream(&v30);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/team_chain_gallery.cpp",
              "onStop",
              167);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v30,
              (const char (*)[38])"[TeamChain] overall config is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
        }
        std::optional<TeamChainDungeonContext>::~optional((std::optional<TeamChainDungeonContext> *const)(v2 + 144));
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 112));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  }
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 188: range 00000000180462CE-000000001804635C
void __cdecl TeamChainGallery::onPlayerLeaveScene(TeamChainGallery *const this, Player *player)
{
  std::enable_shared_from_this<Player> v2; // [rsp+10h] [rbp-20h] BYREF

  BaseGallery::onPlayerLeaveScene((BaseGallery *const)this, player);
  if ( BaseGallery::isStart((BaseGallery *const)this) )
  {
    std::enable_shared_from_this<Player>::shared_from_this(&v2);
    TeamChainGallery::delHostAbilityGroup(this, (PlayerPtr *)&v2);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v2);
  }
};

// Line 200: range 000000001804635E-0000000018046AC4
void __cdecl TeamChainGallery::addHostAbilityGroup(TeamChainGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  PlayerAbilityGroupComp *v15; // r14
  common::milog::MiLogStream *i; // r14
  Player *v17; // rax
  PlayerAbilityGroupComp *v18; // r14
  common::milog::MiLogStream *j; // r14
  Player *v20; // rax
  PlayerAbilityGroupComp *v21; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-140h]
  std::initializer_list<std::string > v23; // [rsp+10h] [rbp-130h]
  std::allocator<std::string > __a; // [rsp+3Bh] [rbp-105h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-104h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-100h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-F8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-F0h]
  const data::TeamChainBuffExcelConfig *skill_config_ptr; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v30; // [rsp+60h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v32; // [rsp+90h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+B0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 skill_no:210 64 16 20 owner_player_ptr:201";
  *(_QWORD *)(v1 + 16) = TeamChainGallery::addHostAbilityGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v1 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/team_chain_gallery.cpp",
      "addHostAbilityGroup",
      204);
    v4 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v32, (const char (*)[10])"scene_id ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])" gallery ");
    *(_DWORD *)(v1 + 48) = BaseGallery::getGalleryId((const BaseGallery *const)this);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" doesnot have owner");
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    AbilityGroupComp = Player::getAbilityGroupComp(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_GALLERY, this->gallery_id_);
    __for_range = &this->choose_skill_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->choose_skill_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->choose_skill_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v10;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
      skill_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainBuffExcelConfig(
                           &v11->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                           *(_DWORD *)(v1 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v30);
      if ( skill_config_ptr )
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v15 = Player::getAbilityGroupComp(v14);
        std::string::basic_string(&v32, &skill_config_ptr->ability_group_name);
        __l._M_array = (std::initializer_list<std::string >::iterator)&v32;
        __l._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, __l, &__a);
        PlayerAbilityGroupComp::addTeamAbilityGroup(v15, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v33; i != &v32; std::string::~string(i) )
          --i;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/team_chain_gallery.cpp",
          "addHostAbilityGroup",
          215);
        v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v32,
                (const char (*)[23])"[TeamChain] skill_no: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])off_2648B580);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v18 = Player::getAbilityGroupComp(v17);
    std::string::basic_string(&v32, &this->chain_avatar_ability_group_name_);
    v23._M_array = (std::initializer_list<std::string >::iterator)&v32;
    v23._M_len = 1LL;
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, v23, &__a);
    PlayerAbilityGroupComp::addGuidFilterAbilityGroup(v18, &this->chain_avatar_guid_vec_, &group_vec, 0);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    for ( j = (common::milog::MiLogStream *)v33; j != &v32; std::string::~string(j) )
      --j;
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v21 = Player::getAbilityGroupComp(v20);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v21);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 226: range 0000000018046AC6-000000001804724B
void __cdecl TeamChainGallery::delHostAbilityGroup(TeamChainGallery *const this, PlayerPtr *p_owner_player_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r12
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  PlayerAbilityGroupComp *v16; // r12
  common::milog::MiLogStream *i; // r12
  Player *v18; // rax
  PlayerAbilityGroupComp *v19; // r12
  common::milog::MiLogStream *j; // r12
  Player *v21; // rax
  PlayerAbilityGroupComp *v22; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-120h]
  std::initializer_list<std::string > v24; // [rsp+10h] [rbp-110h]
  std::allocator<std::string > __a; // [rsp+3Bh] [rbp-E5h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-E4h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-D8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-D0h]
  const data::TeamChainBuffExcelConfig *skill_config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Player> __r; // [rsp+60h] [rbp-C0h] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v33; // [rsp+90h] [rbp-90h] BYREF
  char v34[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 skill_no:238";
  *(_QWORD *)(v2 + 16) = TeamChainGallery::delHostAbilityGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !std::operator==<Player>(p_owner_player_ptr, 0LL) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)&__r);
  std::shared_ptr<Player>::operator=(p_owner_player_ptr, &__r);
  std::shared_ptr<Player>::~shared_ptr(&__r);
  if ( std::operator==<Player>(p_owner_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/team_chain_gallery.cpp",
      "delHostAbilityGroup",
      232);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v33, (const char (*)[10])"scene_id ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" gallery ");
    *(_DWORD *)(v2 + 32) = BaseGallery::getGalleryId((const BaseGallery *const)this);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" doesnot have owner");
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
LABEL_11:
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
    AbilityGroupComp = Player::getAbilityGroupComp(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_GALLERY, this->gallery_id_);
    __for_range = &this->choose_skill_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->choose_skill_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->choose_skill_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v11;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
      skill_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainBuffExcelConfig(
                           &v12->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                           *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      if ( skill_config_ptr )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        v16 = Player::getAbilityGroupComp(v15);
        std::string::basic_string(&v33, &skill_config_ptr->ability_group_name);
        __l._M_array = (std::initializer_list<std::string >::iterator)&v33;
        __l._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, __l, &__a);
        PlayerAbilityGroupComp::delTeamAbilityGroup(v16, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v34; i != &v33; std::string::~string(i) )
          --i;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/team_chain_gallery.cpp",
          "delHostAbilityGroup",
          243);
        v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v33,
                (const char (*)[23])"[TeamChain] skill_no: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])off_2648B580);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
    v19 = Player::getAbilityGroupComp(v18);
    std::string::basic_string(&v33, &this->chain_avatar_ability_group_name_);
    v24._M_array = (std::initializer_list<std::string >::iterator)&v33;
    v24._M_len = 1LL;
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, v24, &__a);
    PlayerAbilityGroupComp::delGuidFilterAbilityGroup(v19, &this->chain_avatar_guid_vec_, &group_vec);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    for ( j = (common::milog::MiLogStream *)v34; j != &v33; std::string::~string(j) )
      --j;
    v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
    v22 = Player::getAbilityGroupComp(v21);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v22);
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
