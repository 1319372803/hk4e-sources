// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/draft/player_draft_comp.cpp

// Line 36: range 00000000175EAFB2-00000000175EB0E9
bool __cdecl DraftInfo::isActive(DraftInfo *const this)
{
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->stage);
  }
  if ( this->stage == INVITING )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->invite_deadline_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_deadline_time >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->invite_deadline_time);
    }
    return now < this->invite_deadline_time;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->stage);
    }
    if ( this->stage == TWICE_CONFIRMING )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->twice_confirm_deadline_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->twice_confirm_deadline_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->twice_confirm_deadline_time);
      }
      return now < this->twice_confirm_deadline_time;
    }
    else
    {
      return 0;
    }
  }
};

// Line 53: range 00000000175EB0EA-00000000175EB272
void __fastcall DraftInfo::addInviteAgreeUid(DraftInfo *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:52 64 8 7 iter:54";
  *(_QWORD *)(v2 + 16) = DraftInfo::addInviteAgreeUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->invite_agree_uid_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->invite_agree_uid_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->invite_agree_uid_vec)._M_current;
  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
         &__rhs) )
  {
    std::vector<unsigned int>::push_back(
      &this->invite_agree_uid_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 62: range 00000000175EB274-00000000175EB3FC
void __fastcall DraftInfo::addInviteDisagreeUid(DraftInfo *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:61 64 8 7 iter:63";
  *(_QWORD *)(v2 + 16) = DraftInfo::addInviteDisagreeUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->invite_disagree_uid_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->invite_disagree_uid_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->invite_disagree_uid_vec)._M_current;
  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
         &__rhs) )
  {
    std::vector<unsigned int>::push_back(
      &this->invite_disagree_uid_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 71: range 00000000175EB3FE-00000000175EB586
void __fastcall DraftInfo::addTwiceConfirmAgreeUid(DraftInfo *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:70 64 8 7 iter:72";
  *(_QWORD *)(v2 + 16) = DraftInfo::addTwiceConfirmAgreeUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->twice_agree_uid_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->twice_agree_uid_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->twice_agree_uid_vec)._M_current;
  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
         &__rhs) )
  {
    std::vector<unsigned int>::push_back(
      &this->twice_agree_uid_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 80: range 00000000175EB588-00000000175EB710
void __fastcall DraftInfo::adTwiceConfirmDisagreeUid(DraftInfo *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:79 64 8 7 iter:81";
  *(_QWORD *)(v2 + 16) = DraftInfo::adTwiceConfirmDisagreeUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->twice_disagree_uid_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->twice_disagree_uid_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->twice_disagree_uid_vec)._M_current;
  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
         &__rhs) )
  {
    std::vector<unsigned int>::push_back(
      &this->twice_disagree_uid_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 89: range 00000000175EB712-00000000175EB770
int32_t __cdecl PlayerDraftComp::onLogout(PlayerDraftComp *const this)
{
  if ( DraftInfo::isActive(&this->draft_info_) )
    DraftInfo::clear(&this->draft_info_);
  if ( common::tools::MiTimer::isActive(&this->twice_confirm_timer_) )
    common::tools::MiTimer::cancel(&this->twice_confirm_timer_);
  return 0;
};

// Line 102: range 00000000175EC846-00000000175EE272
__int64 __fastcall PlayerDraftComp::checkDraftExec(
        PlayerDraftComp *const this,
        uint32_t draft_id,
        std::unordered_map<unsigned int,int> *fail_uid_reason_map)
{
  unsigned int v3; // r13d
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  SceneGalleryComp *GalleryComp; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // al
  char *v16; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  char v19; // cl
  int v20; // r15d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r15
  common::milog::MiLogStream *v26; // rax
  int v27; // r15d
  World *v28; // r15
  PlayerMatchComp *MatchComp; // rax
  PlayerMatchComp *v30; // rax
  int v31; // r15d
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  int v33; // r15d
  BrickBreakerActivity *v34; // rax
  int v35; // r15d
  SeaLampV3Activity *v36; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned __int64 v38; // rdx
  char v39; // al
  char *v40; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v41; // rax
  _DWORD *v42; // rdx
  char v43; // cl
  _BOOL4 v44; // r15d
  PlayerMpComp *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // r15
  Scene *v52; // r15
  common::milog::MiLogStream *v53; // rax
  int v54; // r15d
  common::milog::MiLogStream *v55; // rax
  __int64 result; // rax
  int32_t ret_1; // [rsp+2Ch] [rbp-1E4h]
  int32_t ret; // [rsp+30h] [rbp-1E0h]
  int32_t ret_0; // [rsp+34h] [rbp-1DCh]
  unsigned int stage_id; // [rsp+38h] [rbp-1D8h]
  unsigned int stage_id_0; // [rsp+3Ch] [rbp-1D4h]
  const data::DraftExcelConfig *config_ptr; // [rsp+40h] [rbp-1D0h]
  const data::GalleryExcelConfig *gallery_ptr; // [rsp+48h] [rbp-1C8h]
  common::milog::MiLogStream v65; // [rsp+50h] [rbp-1C0h] BYREF
  PlayerDraftComp::checkDraftExec::<lambda(Player&)> p___f; // [rsp+70h] [rbp-1A0h] BYREF
  char v67[368]; // [rsp+A0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 7 ret:315 64 4 12 draft_id:101 80 16 13 scene_ptr:110 112 16 13 world_ptr:289 144 16 13 w"
                        "orld_ptr:136 176 24 22 stage_open_checker:197 240 40 22 stage_open_checker:317";
  *(_QWORD *)(v4 + 16) = PlayerDraftComp::checkDraftExec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 64) = draft_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 144));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v7->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkDraftExec",
      106);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v65,
           (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v65);
    v3 = -1;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkDraftExec",
      113);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v65,
      (const char (*)[26])"[DRAFT] cur scene is null");
    common::milog::MiLogStream::~MiLogStream(&v65);
    v3 = -1;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->exec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->exec);
  }
  switch ( config_ptr->exec )
  {
    case DRAFT_EXEC_GALLERY:
    case DRAFT_EXEC_AUTOSTART_GALLERY:
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 144));
      p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144))->design_config.txt_config_mgr.gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->param);
      }
      gallery_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, config_ptr->param);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
      if ( gallery_ptr )
      {
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        GalleryComp = Scene::getGalleryComp(v11);
        if ( !SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
          goto LABEL_89;
        v3 = 523;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkDraftExec",
          125);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v65,
                (const char (*)[41])"[DRAFT] gallery_ptr is null, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config_ptr->param);
        common::milog::MiLogStream::~MiLogStream(&v65);
        v3 = -1;
      }
      goto LABEL_131;
    case DRAFT_EXEC_HIDE_AND_SEEK:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 144));
      if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 144), 0LL) )
        goto LABEL_27;
      v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v14 = (unsigned __int64)(v13->_vptr_World + 2);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13->_vptr_World + 2);
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14)(v13) == 1 )
        v15 = 0;
      else
LABEL_27:
        v15 = 1;
      if ( v15 )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkDraftExec",
          140);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          &v65,
          (const char (*)[46])"[DRAFT] cur world can not start hide_and_seek");
        common::milog::MiLogStream::~MiLogStream(&v65);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
        v16 = (char *)(v4 + 48);
        v17 = std::unordered_map<unsigned int,int>::operator[](
                fail_uid_reason_map,
                (std::unordered_map<unsigned int,int>::key_type *)(v4 + 48));
        v18 = v17;
        v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
        {
          LOBYTE(v16) = v19 != 0;
          __asan_report_store4(v17, v16, v17);
        }
        *v18 = 527;
        v3 = 527;
        v20 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        MpComp = Player::getMpComp(this->player_);
        if ( !PlayerMpComp::isInMpMode(MpComp) )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "checkDraftExec",
            147);
          v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v65,
                  (const char (*)[45])"draft cannot start in single mode, draft_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v65);
          v3 = -1;
          v20 = 0;
        }
        else
        {
          v23 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          if ( World::getPlayerCount(v23) > 1 )
          {
            *(_DWORD *)(v4 + 48) = 0;
            v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
            p___f.__ret = (int32_t *)(v4 + 48);
            p___f.__fail_uid_reason_map = fail_uid_reason_map;
            std::shared_ptr<PlayerWorld>::shared_ptr(
              &p___f.__world_ptr,
              (const std::shared_ptr<PlayerWorld> *)(v4 + 144));
            p___f.__this = this;
            std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v65,
              &p___f);
            World::foreachPlayer(v25, (std::function<ForeachPolicy(Player&)> *)&v65);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v65);
            PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::~Player(&p___f);
            if ( *(_DWORD *)(v4 + 48) )
            {
              common::milog::MiLogStream::create(
                &v65,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/draft/player_draft_comp.cpp",
                "checkDraftExec",
                181);
              v26 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v65,
                      (const char (*)[41])"[DRAFT] checkDraftExec failed, draft_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v4 + 64));
              common::milog::MiLogStream::~MiLogStream(&v65);
              v3 = *(_DWORD *)(v4 + 48);
              v20 = 0;
            }
            else
            {
              v20 = 1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/draft/player_draft_comp.cpp",
              "checkDraftExec",
              153);
            v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v65,
                    (const char (*)[45])"draft cannot start in single mode, draft_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v65);
            v3 = -1;
            v20 = 0;
          }
        }
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 144));
      if ( v20 )
        goto LABEL_89;
      goto LABEL_131;
    case DRAFT_EXEC_CHAR_AMUSEMENT:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 144));
      if ( std::operator==<World>((const std::shared_ptr<World> *)(v4 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkDraftExec",
          191);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v65, (const char (*)[14])"world is null");
        common::milog::MiLogStream::~MiLogStream(&v65);
        v3 = -1;
        v27 = 0;
      }
      else
      {
        *(_DWORD *)(v4 + 48) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->param);
        }
        stage_id = config_ptr->param;
        *(_QWORD *)(v4 + 176) = v4 + 48;
        *(_QWORD *)(v4 + 184) = fail_uid_reason_map;
        *(_DWORD *)(v4 + 192) = stage_id;
        v28 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#2},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v65,
          *(PlayerDraftComp::checkDraftExec::<lambda(Player&)>_0 *)(v4 + 176));
        World::foreachPlayer(v28, (std::function<ForeachPolicy(Player&)> *)&v65);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v65);
        if ( *(_DWORD *)(v4 + 48) )
        {
          v3 = *(_DWORD *)(v4 + 48);
          v27 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          MatchComp = Player::getMatchComp(this->player_);
          if ( PlayerMatchComp::isInMatch(MatchComp) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v30 = Player::getMatchComp(this->player_);
            PlayerMatchComp::cancelGeneralMatch(v30);
          }
          v27 = 1;
        }
      }
      std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 144));
      if ( v27 )
        goto LABEL_89;
      goto LABEL_131;
    case DRAFT_EXEC_BRICK_BREAKER:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v4 + 144));
      if ( std::operator==<BrickBreakerActivity>((const std::shared_ptr<BrickBreakerActivity> *)(v4 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkDraftExec",
          255);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v65,
          (const char (*)[21])"activity is not open");
        common::milog::MiLogStream::~MiLogStream(&v65);
        v3 = 860;
        v33 = 0;
      }
      else
      {
        v34 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        ret_0 = BrickBreakerActivity::checkBrickBreakerDraftExec(v34, *(_DWORD *)(v4 + 64), fail_uid_reason_map);
        if ( ret_0 )
        {
          v3 = ret_0;
          v33 = 0;
        }
        else
        {
          v33 = 1;
        }
      }
      std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v4 + 144));
      if ( v33 )
        goto LABEL_89;
      goto LABEL_131;
    case DRAFT_EXEC_COIN_COLLECT:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v4 + 144));
      if ( std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v4 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkDraftExec",
          240);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v65,
          (const char (*)[34])"coin collect activity is not open");
        common::milog::MiLogStream::~MiLogStream(&v65);
        v3 = 860;
        v31 = 0;
      }
      else
      {
        v32 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        ret = CoinCollectActivity::checkCoinCollectDraftExec(v32, *(_DWORD *)(v4 + 64), fail_uid_reason_map);
        if ( ret )
        {
          v3 = ret;
          v31 = 0;
        }
        else
        {
          v31 = 1;
        }
      }
      std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v4 + 144));
      if ( v31 )
        goto LABEL_89;
      goto LABEL_131;
    case DRAFT_EXEC_LAN_V3_BOAT_MULTI:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v4 + 144));
      if ( std::operator==<SeaLampV3Activity>((const std::shared_ptr<SeaLampV3Activity> *)(v4 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkDraftExec",
          270);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v65,
          (const char (*)[21])"activity is not open");
        common::milog::MiLogStream::~MiLogStream(&v65);
        v3 = 860;
        v35 = 0;
      }
      else
      {
        v36 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        ret_1 = SeaLampV3Activity::checkLanV3MultiDraftExec(v36, *(_DWORD *)(v4 + 64), fail_uid_reason_map);
        if ( ret_1 )
        {
          v3 = ret_1;
          v35 = 0;
        }
        else
        {
          v35 = 1;
        }
      }
      std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v4 + 144));
      if ( v35 )
        goto LABEL_89;
      goto LABEL_131;
    default:
LABEL_89:
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exec_sub_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->exec_sub_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->exec_sub_type);
      }
      if ( config_ptr->exec_sub_type != DRAFT_EXEC_SUB_ISLAND_PARTY )
        goto LABEL_130;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 112));
      if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 112), 0LL) )
        goto LABEL_100;
      v37 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v37);
      v38 = (unsigned __int64)(v37->_vptr_World + 2);
      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v37->_vptr_World + 2);
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v38)(v37) == 1 )
        v39 = 0;
      else
LABEL_100:
        v39 = 1;
      if ( !v39 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v45 = Player::getMpComp(this->player_);
        if ( !PlayerMpComp::isInMpMode(v45) )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "checkDraftExec",
            300);
          v46 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v65,
                  (const char (*)[45])"draft cannot start in single mode, draft_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v65);
          v3 = -1;
          v44 = 0;
          goto LABEL_129;
        }
        v47 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        if ( World::getPlayerCount(v47) <= 1 )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "checkDraftExec",
            306);
          v48 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v65,
                  (const char (*)[45])"draft cannot start in single mode, draft_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v65);
          v3 = -1;
          v44 = 0;
          goto LABEL_129;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 144));
        v49 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        stage_id_0 = ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId(
                       &v49->design_config.txt_config_mgr.activity_island_party_mgr,
                       *(_DWORD *)(v4 + 64));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
        if ( !stage_id_0 )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/draft/player_draft_comp.cpp",
            "checkDraftExec",
            312);
          v50 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v65,
                  (const char (*)[41])"island party stage not found, draft_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v65);
          v3 = -1;
          v44 = 0;
          goto LABEL_129;
        }
        *(_DWORD *)(v4 + 48) = 0;
        *(_QWORD *)(v4 + 240) = v4 + 48;
        *(_QWORD *)(v4 + 248) = fail_uid_reason_map;
        std::shared_ptr<PlayerWorld>::shared_ptr(
          (std::shared_ptr<PlayerWorld> *const)(v4 + 256),
          (const std::shared_ptr<PlayerWorld> *)(v4 + 112));
        *(_DWORD *)(v4 + 272) = stage_id_0;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->invite_type);
        }
        if ( config_ptr->invite_type == DRAFT_INVITE_WORLD )
        {
          v51 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::Player(
            (PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const)&p___f,
            (const PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *)(v4 + 240));
          std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v65,
            (PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *)&p___f);
          World::foreachPlayer(v51, (std::function<ForeachPolicy(Player&)> *)&v65);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v65);
          PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::~Player((PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const)&p___f);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->invite_type);
          }
          if ( config_ptr->invite_type != DRAFT_INVITE_SCENE )
          {
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/draft/player_draft_comp.cpp",
              "checkDraftExec",
              349);
            v53 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v65,
                    (const char (*)[30])"[DRAFT] invalid invite type: ");
            common::milog::MiLogStream::operator<<<data::DraftInviteType,(data::DraftInviteType*)0>(
              v53,
              &config_ptr->invite_type);
            common::milog::MiLogStream::~MiLogStream(&v65);
            v3 = -1;
            v54 = 0;
LABEL_128:
            PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::~Player((PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const)(v4 + 240));
            v44 = v54 != 0;
            goto LABEL_129;
          }
          v52 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::Player(
            (PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const)&p___f,
            (const PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *)(v4 + 240));
          std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v65,
            (PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *)&p___f);
          Scene::foreachPlayer(v52, (std::function<ForeachPolicy(Player&)> *)&v65);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v65);
          PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::~Player((PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const)&p___f);
        }
        if ( *(_DWORD *)(v4 + 48) )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/draft/player_draft_comp.cpp",
            "checkDraftExec",
            354);
          v55 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v65,
                  (const char (*)[41])"[DRAFT] checkDraftExec failed, draft_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v65);
          v3 = *(_DWORD *)(v4 + 48);
          v54 = 0;
        }
        else
        {
          v54 = 1;
        }
        goto LABEL_128;
      }
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "checkDraftExec",
        293);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        &v65,
        (const char (*)[56])"[DRAFT] cur world can not start autostart gallery draft");
      common::milog::MiLogStream::~MiLogStream(&v65);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      v40 = (char *)(v4 + 48);
      v41 = std::unordered_map<unsigned int,int>::operator[](
              fail_uid_reason_map,
              (std::unordered_map<unsigned int,int>::key_type *)(v4 + 48));
      v42 = v41;
      v43 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
      if ( v43 != 0 && (char)(((unsigned __int8)v41 & 7) + 3) >= v43 )
      {
        LOBYTE(v40) = v43 != 0;
        __asan_report_store4(v41, v40, v41);
      }
      *v42 = 527;
      v3 = 527;
      v44 = 0;
LABEL_129:
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 112));
      if ( v44 )
LABEL_130:
        v3 = 0;
LABEL_131:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 80));
LABEL_132:
      result = v3;
      if ( v67 == (char *)v4 )
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
        *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
  }
};

// Line 158: range 00000000175EB772-00000000175EBCD9
ForeachPolicy __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator()(
        const PlayerDraftComp::checkDraftExec::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // r14
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // r14
  unsigned int *p_val; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  int32_t *ret; // rdx
  char v13; // cl
  ForeachPolicy v14; // r14d
  HideAndSeekActivity *v15; // rcx
  int32_t *v16; // r14
  int32_t canStartHideAndSeek; // ecx
  char v18; // dl
  __int64 v19; // rdx
  int32_t *v20; // rdx
  common::milog::MiLogStream *v21; // r14
  int32_t *v22; // rdx
  int32_t v23; // r15d
  std::unordered_map<unsigned int,int> *v24; // r14
  unsigned int *v25; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v26; // rax
  int32_t *v27; // rdx
  char v28; // cl
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-90h] BYREF
  char v33[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:161";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v2 + 32));
  v5 = (char *)(v2 + 32);
  if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "operator()",
      164);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v32,
           (const char (*)[39])"[DRAFT] activity is not opening, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__fail_uid_reason_map);
    fail_uid_reason_map = __closure->__fail_uid_reason_map;
    val = Player::getUid(player);
    p_val = &val;
    v9 = std::unordered_map<unsigned int,int>::operator[](fail_uid_reason_map, &val);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(p_val) = v11 != 0;
      __asan_report_store4(v9, p_val, v9);
    }
    *v10 = 860;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    ret = __closure->__ret;
    v13 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v13 )
    {
      LOBYTE(p_val) = v13 != 0;
      __asan_report_store4(__closure->__ret, p_val, ret);
    }
    *ret = 860;
    v14 = FOREACH_BREAK;
  }
  else
  {
    v15 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v16 = __closure->__ret;
    canStartHideAndSeek = HideAndSeekActivity::canStartHideAndSeek(v15);
    v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v18 != 0;
    v19 = (v18 != 0) & (unsigned __int8)((char)(((unsigned __int8)v16 & 7) + 3) >= v18);
    if ( (_BYTE)v19 )
      __asan_report_store4(v16, v5, v19);
    *v16 = canStartHideAndSeek;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v20 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__ret);
    }
    if ( *v20 )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/draft/player_draft_comp.cpp",
        "operator()",
        173);
      v21 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v32,
              (const char (*)[50])"[DRAFT] player can not start hide and seek, uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v22 = __closure->__ret;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__ret);
      }
      v23 = *v22;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__fail_uid_reason_map);
      v24 = __closure->__fail_uid_reason_map;
      val = Player::getUid(player);
      v25 = &val;
      v26 = std::unordered_map<unsigned int,int>::operator[](v24, &val);
      v27 = v26;
      v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
      if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
      {
        LOBYTE(v25) = v28 != 0;
        __asan_report_store4(v26, v25, v26);
      }
      *v27 = v23;
      v14 = FOREACH_BREAK;
    }
    else
    {
      v14 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v2 + 32));
  result = v14;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 158: range 000000001760531C-000000001760544D
void __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::Player(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)> *const this,
        PlayerDraftComp::checkDraftExec::<lambda(Player&)> *a2)
{
  int32_t *ret; // rdx
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // rdx
  PlayerDraftComp *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  ret = a2->__ret;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__ret = ret;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__fail_uid_reason_map);
  fail_uid_reason_map = a2->__fail_uid_reason_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__fail_uid_reason_map, a2);
  this->__fail_uid_reason_map = fail_uid_reason_map;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__this);
  v4 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, &a2->__world_ptr);
  this->__this = v4;
};

// Line 158: range 0000000017605518-0000000017605649
void __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::Player(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)> *const this,
        const PlayerDraftComp::checkDraftExec::<lambda(Player&)> *a2)
{
  int32_t *ret; // rdx
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // rdx
  PlayerDraftComp *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  ret = a2->__ret;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__ret = ret;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__fail_uid_reason_map);
  fail_uid_reason_map = a2->__fail_uid_reason_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__fail_uid_reason_map, a2);
  this->__fail_uid_reason_map = fail_uid_reason_map;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__this);
  v4 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, &a2->__world_ptr);
  this->__this = v4;
};

// Line 158: range 00000000175EBCDA-00000000175EBCF8
void __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::~Player(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)> *const this)
{
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->__world_ptr);
};

// Line 197: range 00000000175EBCFA-00000000175EC1D2
ForeachPolicy __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#2}::operator()(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // r14
  std::unordered_map<unsigned int,int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  int32_t *ret; // rdx
  char v11; // cl
  ForeachPolicy v12; // r14d
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::unordered_map<unsigned int,int> *v17; // r14
  std::unordered_map<unsigned int,int>::key_type *v18; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  char v21; // cl
  int32_t *v22; // rdx
  char v23; // cl
  ForeachPolicy result; // eax
  std::unordered_map<unsigned int,int>::key_type __k; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-90h] BYREF
  char v27[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:199";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CharAmusementActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<CharAmusementActivity>((const std::shared_ptr<CharAmusementActivity> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "operator()",
      202);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v26, (const char (*)[19])"activity is closed");
    common::milog::MiLogStream::~MiLogStream(&v26);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__fail_uid_reason_map);
    fail_uid_reason_map = __closure->__fail_uid_reason_map;
    __k = Player::getUid(player);
    p_k = &__k;
    v7 = std::unordered_map<unsigned int,int>::operator[](fail_uid_reason_map, &__k);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(p_k) = v9 != 0;
      __asan_report_store4(v7, p_k, v7);
    }
    *v8 = 860;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    ret = __closure->__ret;
    v11 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v11 )
    {
      LOBYTE(p_k) = v11 != 0;
      __asan_report_store4(__closure->__ret, p_k, ret);
    }
    *ret = 860;
    v12 = FOREACH_BREAK;
  }
  else
  {
    v13 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__stage_id);
    }
    if ( !CharAmusementActivity::isOpenByStageId(v13, __closure->__stage_id) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/draft/player_draft_comp.cpp",
        "operator()",
        209);
      v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v26,
              (const char (*)[27])"stage not open, stage_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__closure->__stage_id);
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", fail_uid: ");
      __k = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &__k);
      common::milog::MiLogStream::~MiLogStream(&v26);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__fail_uid_reason_map);
      v17 = __closure->__fail_uid_reason_map;
      __k = Player::getUid(player);
      v18 = &__k;
      v19 = std::unordered_map<unsigned int,int>::operator[](v17, &__k);
      v20 = v19;
      v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(v19, v18, v19);
      }
      *v20 = 10436;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v22 = __closure->__ret;
      v23 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
      if ( v23 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v23 )
      {
        LOBYTE(v18) = v23 != 0;
        __asan_report_store4(__closure->__ret, v18, v22);
      }
      *v22 = 10436;
      v12 = FOREACH_BREAK;
    }
    else
    {
      v12 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v2 + 32));
  result = v12;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 317: range 00000000175EC1D4-00000000175EC6D6
ForeachPolicy __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::operator()(
        const PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // r14
  unsigned int *p_val; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  int32_t *ret; // rdx
  char v12; // cl
  ForeachPolicy v13; // r14d
  std::__shared_ptr_access<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::unordered_map<unsigned int,int> *v18; // r14
  unsigned int *v19; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  char v22; // cl
  int32_t *v23; // rdx
  char v24; // cl
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-90h] BYREF
  char v28[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:320";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<IslandPartyActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<IslandPartyActivity>(0LL, (const std::shared_ptr<IslandPartyActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "operator()",
      323);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v27,
           (const char (*)[39])"[DRAFT] activity is not opening, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__fail_uid_reason_map);
    fail_uid_reason_map = __closure->__fail_uid_reason_map;
    val = Player::getUid(player);
    p_val = &val;
    v8 = std::unordered_map<unsigned int,int>::operator[](fail_uid_reason_map, &val);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(p_val) = v10 != 0;
      __asan_report_store4(v8, p_val, v8);
    }
    *v9 = 860;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    ret = __closure->__ret;
    v12 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v12 )
    {
      LOBYTE(p_val) = v12 != 0;
      __asan_report_store4(__closure->__ret, p_val, ret);
    }
    *ret = 860;
    v13 = FOREACH_BREAK;
  }
  else
  {
    v14 = std::__shared_ptr_access<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__stage_id);
    }
    if ( !IslandPartyActivity::isStageOpen(v14, __closure->__stage_id) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/draft/player_draft_comp.cpp",
        "operator()",
        331);
      v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v27,
              (const char (*)[43])"[DRAFT] island party stage not open, uid: ");
      val = Player::getUid(player);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])", stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &__closure->__stage_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__fail_uid_reason_map);
      v18 = __closure->__fail_uid_reason_map;
      val = Player::getUid(player);
      v19 = &val;
      v20 = std::unordered_map<unsigned int,int>::operator[](v18, &val);
      v21 = v20;
      v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
      {
        LOBYTE(v19) = v22 != 0;
        __asan_report_store4(v20, v19, v20);
      }
      *v21 = 10371;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v23 = __closure->__ret;
      v24 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
      if ( v24 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v24 )
      {
        LOBYTE(v19) = v24 != 0;
        __asan_report_store4(__closure->__ret, v19, v23);
      }
      *v23 = 10371;
      v13 = FOREACH_BREAK;
    }
    else
    {
      v13 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<IslandPartyActivity>::~shared_ptr((std::shared_ptr<IslandPartyActivity> *const)(v2 + 32));
  result = v13;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 317: range 0000000017605A92-0000000017605BDE
void __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::Player(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const this,
        PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *a2)
{
  int32_t *ret; // rdx
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // rdx
  std::shared_ptr<PlayerWorld> *p_world_ptr; // rsi
  unsigned int stage_id; // ecx
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  ret = a2->__ret;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__ret = ret;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__fail_uid_reason_map);
  fail_uid_reason_map = a2->__fail_uid_reason_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__fail_uid_reason_map, a2);
  this->__fail_uid_reason_map = fail_uid_reason_map;
  p_world_ptr = &a2->__world_ptr;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__stage_id);
  }
  stage_id = a2->__stage_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->__stage_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_world_ptr) = v6 != 0;
    __asan_report_store4(&this->__stage_id, p_world_ptr, &this->__stage_id);
  }
  this->__stage_id = stage_id;
};

// Line 317: range 00000000175EC6F8-00000000175EC844
void __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::Player(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const this,
        const PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *a2)
{
  int32_t *ret; // rdx
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // rdx
  std::shared_ptr<PlayerWorld> *p_world_ptr; // rsi
  unsigned int stage_id; // ecx
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  ret = a2->__ret;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__ret = ret;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__fail_uid_reason_map);
  fail_uid_reason_map = a2->__fail_uid_reason_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__fail_uid_reason_map, a2);
  this->__fail_uid_reason_map = fail_uid_reason_map;
  p_world_ptr = &a2->__world_ptr;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__stage_id);
  }
  stage_id = a2->__stage_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->__stage_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_world_ptr) = v6 != 0;
    __asan_report_store4(&this->__stage_id, p_world_ptr, &this->__stage_id);
  }
  this->__stage_id = stage_id;
};

// Line 317: range 00000000175EC6D8-00000000175EC6F6
void __cdecl PlayerDraftComp::checkDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#3}::~Player(
        PlayerDraftComp::checkDraftExec::<lambda(Player&)>_1 *const this)
{
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->__world_ptr);
};

// Line 369: range 00000000175EE4AA-00000000175EF519
PlayerDraftComp *__fastcall PlayerDraftComp::startDraftProgress(
        PlayerDraftComp *const this,
        unsigned __int64 draft_id,
        std::unordered_map<unsigned int,int> *fail_uid_reason_map,
        std::unordered_map<unsigned int,int> *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  int v10; // ecx
  char v11; // al
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int Now; // edi
  __int64 v19; // rsi
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rdx
  World *v24; // r14
  __int64 v25; // rsi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  PlayerDraftComp::startDraftProgress::<lambda(Player&)> v29; // [rsp-20h] [rbp-1E0h]
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // [rsp+8h] [rbp-1B8h]
  int v32; // [rsp+1Ch] [rbp-1A4h]
  unsigned int __args_1; // [rsp+3Ch] [rbp-184h] BYREF
  const data::DraftExcelConfig *config_ptr; // [rsp+40h] [rbp-180h]
  std::tuple<proto::Retcode,unsigned int> v37; // [rsp+48h] [rbp-178h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-150h] BYREF
  char v40[304]; // [rsp+90h] [rbp-130h] BYREF

  v32 = (int)fail_uid_reason_map;
  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 13 owner_uid:370 64 4 7 ret:400 80 4 19 guest_check_ret:414 96 4 19 wrong_guest_uid:415 1"
                        "12 4 12 draft_id:368 128 16 13 world_ptr:384 160 16 13 scene_ptr:390 192 32 10 notify:442";
  *(_QWORD *)(v4 + 16) = PlayerDraftComp::startDraftProgress;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 112) = v32;
  if ( *(_BYTE *)(((draft_id + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(draft_id + 24);
  *(_DWORD *)(v4 + 48) = Player::getUid(*(const Player *const *)(draft_id + 24));
  if ( DraftInfo::isActive((DraftInfo *const)(draft_id + 32)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "startDraftProgress",
      374);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v39, (const char (*)[24])"[DRAFT] draft is active");
    common::milog::MiLogStream::~MiLogStream(&v39);
    __args_1 = 9651;
    std::make_tuple<proto::Retcode,unsigned int &>(
      (proto::Retcode *)&v37,
      &__args_1,
      (proto::Retcode *)(v4 + 48),
      &__args_1);
    std::tuple<int,unsigned int>::tuple<proto::Retcode,unsigned int,true>(
      (std::tuple<int,unsigned int> *const)this,
      &v37);
    goto LABEL_66;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 160));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v7->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v4 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "startDraftProgress",
      380);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v39,
           (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream(&v39);
    __args_1 = -1;
    std::make_tuple<proto::Retcode,unsigned int &>(
      (proto::Retcode *)&v37,
      &__args_1,
      (proto::Retcode *)(v4 + 48),
      &__args_1);
    std::tuple<int,unsigned int>::tuple<proto::Retcode,unsigned int,true>(
      (std::tuple<int,unsigned int> *const)this,
      &v37);
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((draft_id + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(draft_id + 24);
  Player::getSceneComp(*(Player *const *)(draft_id + 24));
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 128));
  if ( !std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v4 + 128)) )
  {
    if ( *(_BYTE *)(((draft_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(draft_id + 24);
    Player::getSceneComp(*(Player *const *)(draft_id + 24));
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 160));
    v9 = (char *)(v4 + 160);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/draft/player_draft_comp.cpp",
        "startDraftProgress",
        394);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v39, (const char (*)[22])"[DRAFT] scene is null");
      common::milog::MiLogStream::~MiLogStream(&v39);
      __args_1 = -1;
      std::make_tuple<proto::Retcode,unsigned int &>(
        (proto::Retcode *)&v37,
        &__args_1,
        (proto::Retcode *)(v4 + 48),
        &__args_1);
      std::tuple<int,unsigned int>::tuple<proto::Retcode,unsigned int,true>(
        (std::tuple<int,unsigned int> *const)this,
        &v37);
LABEL_64:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 160));
      goto LABEL_65;
    }
    DraftInfo::clear((DraftInfo *const)(draft_id + 32));
    v10 = *(_DWORD *)(v4 + 112);
    v11 = *(_BYTE *)(((draft_id + 32) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(draft_id + 32, v9, draft_id + 32);
    }
    *(_DWORD *)(draft_id + 32) = v10;
    *(_DWORD *)(v4 + 64) = PlayerDraftComp::checkDraftExec((PlayerDraftComp *const)draft_id, *(_DWORD *)(v4 + 112), a4);
    if ( *(_DWORD *)(v4 + 64) )
    {
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
LABEL_23:
      std::make_tuple<int &,unsigned int &>(
        (int *)this,
        (unsigned int *)(v4 + 64),
        (int *)(v4 + 48),
        (unsigned int *)(v4 + 64));
      goto LABEL_64;
    }
    if ( *(_BYTE *)(((draft_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(draft_id + 24);
    MpComp = Player::getMpComp(*(Player *const *)(draft_id + 24));
    if ( PlayerMpComp::isInMpMode(MpComp)
      && (v13 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
          World::getPlayerCount(v13) > 1) )
    {
      *(_DWORD *)(v4 + 64) = PlayerDraftComp::checkOwnerDraftStart(
                               (PlayerDraftComp *const)draft_id,
                               *(_DWORD *)(v4 + 112));
      if ( *(_DWORD *)(v4 + 64) )
      {
        if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_store_n(this, 8LL);
        }
        goto LABEL_23;
      }
      *(_DWORD *)(v4 + 80) = 0;
      *(_DWORD *)(v4 + 96) = 0;
      v30 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      v39.log_ = (common::milog::MiLog *)(v4 + 80);
      v39.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 96);
      v39.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)draft_id;
      LODWORD(v39.ostr_) = *(_DWORD *)(v4 + 112);
      HIDWORD(v39.ostr_) = *(_DWORD *)(v4 + 48);
      *(_OWORD *)&v29.__this = __PAIR128__((unsigned __int64)v39.ostr_, draft_id);
      v29.__wrong_guest_uid = (uint32_t *)(v4 + 96);
      v29.__guest_check_ret = (int32_t *)(v4 + 80);
      std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::startDraftProgress(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1},void,void>(
        &p_func,
        v29);
      World::foreachPlayer(v30, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
      if ( *(_DWORD *)(v4 + 80) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/draft/player_draft_comp.cpp",
          "startDraftProgress",
          433);
        v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[39])"[DRAFT] guest check failed, wrong_uid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v4 + 96));
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" fail_ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_store_n(this, 8LL);
        }
        std::make_tuple<int &,unsigned int &>(
          (int *)this,
          (unsigned int *)(v4 + 80),
          (int *)(v4 + 96),
          (unsigned int *)(v4 + 80));
        goto LABEL_64;
      }
      if ( *(char *)(((draft_id + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(draft_id + 48, &p_func, draft_id + 48);
      *(_BYTE *)(draft_id + 48) = 0;
      Now = common::tools::TimeUtils::getNow();
      v19 = (((_BYTE)config_ptr + 60) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->confirm_count_down >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->confirm_count_down >> 3)
                                                                  + 0x7FFF8000) )
      {
        Now = (_DWORD)config_ptr + 60;
        __asan_report_load4(&config_ptr->confirm_count_down);
      }
      v20 = Now + config_ptr->confirm_count_down;
      v21 = *(_BYTE *)(((draft_id + 36) >> 3) + 0x7FFF8000);
      LOBYTE(v19) = v21 != 0;
      v22 = (v21 != 0) & (unsigned __int8)((char)(((draft_id + 36) & 7) + 3) >= v21);
      if ( (_BYTE)v22 )
        __asan_report_store4(draft_id + 36, v19, v22);
      *(_DWORD *)(draft_id + 36) = v20;
      if ( *(_BYTE *)(((draft_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(draft_id + 24);
      __args_1 = Player::getUid(*(const Player *const *)(draft_id + 24));
      std::vector<unsigned int>::operator=(
        (std::vector<unsigned int> *const)(draft_id + 56),
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__args_1));
      v23 = (*(_BYTE *)(((draft_id + 44) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((draft_id + 44) & 7) + 3) >= *(_BYTE *)(((draft_id + 44) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v23 )
        __asan_report_store4(draft_id + 44, (((_BYTE)draft_id + 44) & 7u) + 3, v23);
      *(_DWORD *)(draft_id + 44) = 1;
      proto::DraftOwnerInviteNotify::DraftOwnerInviteNotify((proto::DraftOwnerInviteNotify *const)(v4 + 192));
      proto::DraftOwnerInviteNotify::set_draft_id(
        (proto::DraftOwnerInviteNotify *const)(v4 + 192),
        *(_DWORD *)(v4 + 112));
      if ( *(_BYTE *)(((draft_id + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((draft_id + 36) & 7) + 3) >= *(_BYTE *)(((draft_id + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(draft_id + 36);
      }
      proto::DraftOwnerInviteNotify::set_invite_deadline_time(
        (proto::DraftOwnerInviteNotify *const)(v4 + 192),
        *(_DWORD *)(draft_id + 36));
      v24 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::startDraftProgress(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#2},void,void>(
        &p_func,
        (PlayerDraftComp::startDraftProgress::<lambda(Player&)>_0)(v4 + 192));
      World::foreachPlayer(v24, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
      proto::DraftOwnerInviteNotify::~DraftOwnerInviteNotify((proto::DraftOwnerInviteNotify *const)(v4 + 192));
    }
    else
    {
      v25 = *(unsigned int *)(v4 + 112);
      *(_DWORD *)(v4 + 96) = PlayerDraftComp::checkSinglePlayerDraftStart((PlayerDraftComp *const)draft_id, v25);
      if ( *(_DWORD *)(v4 + 96) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/draft/player_draft_comp.cpp",
          "startDraftProgress",
          457);
        v26 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v39,
                (const char (*)[47])"[DRAFT] single player mode check failed, ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v39);
        if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_store_n(this, 8LL);
        }
        std::make_tuple<int &,unsigned int &>(
          (int *)this,
          (unsigned int *)(v4 + 96),
          (int *)(v4 + 48),
          (unsigned int *)(v4 + 96));
        goto LABEL_64;
      }
      if ( *(char *)(((draft_id + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(draft_id + 48, v25, draft_id + 48);
      *(_BYTE *)(draft_id + 48) = 1;
      if ( PlayerDraftComp::transferPlayerToDraftPos((PlayerDraftComp *const)draft_id, *(_DWORD *)(v4 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "startDraftProgress",
          464);
        v27 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v39,
                (const char (*)[51])"[DRAFT] transferPlayerToDraftPos failed, draft_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v39);
        __args_1 = 0;
        if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_store_n(this, 8LL);
        }
        std::make_tuple<int,unsigned int &>((int *)this, &__args_1, (int *)(v4 + 48), &__args_1);
        goto LABEL_64;
      }
      PlayerDraftComp::onDraftProgressFinish((PlayerDraftComp *const)draft_id, *(_DWORD *)(v4 + 112));
    }
    __args_1 = 0;
    *(_DWORD *)(v4 + 96) = 0;
    std::make_tuple<proto::Retcode,int>(
      (proto::Retcode *)&v37,
      (int *)(v4 + 96),
      (proto::Retcode *)&__args_1,
      (int *)(v4 + 96));
    std::tuple<int,unsigned int>::tuple<proto::Retcode,int,true>(
      (std::tuple<int,unsigned int> *const)this,
      (std::tuple<proto::Retcode,int> *)&v37);
    goto LABEL_64;
  }
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/draft/player_draft_comp.cpp",
    "startDraftProgress",
    387);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v39, (const char (*)[22])"[DRAFT] world is null");
  common::milog::MiLogStream::~MiLogStream(&v39);
  __args_1 = -1;
  std::make_tuple<proto::Retcode,unsigned int &>(
    (proto::Retcode *)&v37,
    &__args_1,
    (proto::Retcode *)(v4 + 48),
    &__args_1);
  std::tuple<int,unsigned int>::tuple<proto::Retcode,unsigned int,true>((std::tuple<int,unsigned int> *const)this, &v37);
LABEL_65:
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 128));
LABEL_66:
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 416: range 00000000175EE274-00000000175EE456
ForeachPolicy __cdecl PlayerDraftComp::startDraftProgress(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator()(
        const PlayerDraftComp::startDraftProgress::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerDraftComp *this; // rcx
  __int64 draft_id; // rsi
  int32_t *guest_check_ret; // rdx
  char v7; // cl
  uint32_t *wrong_guest_uid; // rbx
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  int32_t r; // [rsp+1Ch] [rbp-14h]

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__owner_uid);
  }
  if ( Uid == __closure->__owner_uid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__draft_id);
  }
  draft_id = __closure->__draft_id;
  r = PlayerDraftComp::checkGuestDraftStart(this, draft_id, player);
  if ( !r )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  guest_check_ret = __closure->__guest_check_ret;
  v7 = *(_BYTE *)(((unsigned __int64)__closure->__guest_check_ret >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)(((__int64)__closure->__guest_check_ret & 7) + 3) >= v7 )
  {
    LOBYTE(draft_id) = v7 != 0;
    __asan_report_store4(__closure->__guest_check_ret, draft_id, guest_check_ret);
  }
  *guest_check_ret = r;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__wrong_guest_uid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__wrong_guest_uid);
  wrong_guest_uid = __closure->__wrong_guest_uid;
  v9 = Player::getUid(player);
  v10 = *(_BYTE *)(((unsigned __int64)wrong_guest_uid >> 3) + 0x7FFF8000);
  LOBYTE(draft_id) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)wrong_guest_uid & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(wrong_guest_uid, draft_id, v11);
  *wrong_guest_uid = v9;
  return 1;
};

// Line 445: range 00000000175EE458-00000000175EE4A8
ForeachPolicy __cdecl PlayerDraftComp::startDraftProgress(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#2}::operator()(
        const PlayerDraftComp::startDraftProgress::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 474: range 00000000175EF51A-00000000175F1DE0
__int64 __fastcall PlayerDraftComp::onDraftProgressFinish(PlayerDraftComp *const this, uint32_t draft_id)
{
  unsigned int started; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v10; // rax
  Scene *v11; // rax
  Scene *v12; // rax
  SceneGalleryComp *GalleryComp; // rcx
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  Scene *v16; // rax
  SceneGalleryComp *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  HideAndSeekActivity *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Scene *v23; // rax
  std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  _BOOL4 v26; // r15d
  std::set<unsigned int> *v27; // rax
  std::set<unsigned int> *v28; // r9
  std::set<unsigned int> *v29; // rax
  std::set<unsigned int> *v30; // r9
  int v31; // r15d
  SceneTransferAwaiter *v32; // rax
  Scene *v33; // rax
  SceneGalleryComp *v34; // r15
  std::shared_ptr<SceneTransferAwaiter> *v35; // rax
  common::milog::MiLogStream *v36; // rax
  _BOOL4 v37; // r15d
  uint32_t v38; // eax
  common::milog::MiLogStream *v39; // rax
  _BOOL4 v40; // r15d
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t v42; // r15d
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v45; // rax
  int v46; // r15d
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  DungeonScene *v49; // rax
  DungeonScene *v50; // rax
  DungeonScene *v51; // rax
  DungeonSceneTeam *DungeonSceneTeam; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  uint32_t SceneId; // ecx
  uint32_t v55; // ecx
  uint32_t v56; // ecx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  Player *v59; // rax
  PlayerDungeonComp *DungeonComp; // r15
  PlayerSceneComp *SceneComp; // rax
  bool v62; // r15
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  Player *v65; // rax
  PlayerDungeonComp *v66; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  Player *v69; // rax
  PlayerSceneComp *v70; // rax
  uint32_t CurSceneId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  common::milog::MiLogStream *v73; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  common::milog::MiLogStream *v75; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  unsigned __int64 v77; // rdx
  char v78; // al
  int v79; // r15d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v81; // r15
  PlayerWorld *v82; // rax
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  PlayerMpComp *v84; // rax
  char v85; // al
  common::milog::MiLogStream *v86; // r13
  PlayerWorld *v87; // rax
  common::milog::MiLogStream *v88; // r13
  BrickBreakerActivity *p_param; // rdi
  common::milog::MiLogStream *v90; // r13
  SeaLampV3Activity *v91; // r13
  __int64 result; // rax
  const unsigned int *v93; // [rsp+0h] [rbp-340h]
  unsigned int *v94; // [rsp+8h] [rbp-338h]
  const Vector3 *__l; // [rsp+10h] [rbp-330h]
  std::vector<unsigned int> *gm_level_id_vec; // [rsp+20h] [rbp-320h]
  uint32_t gm_level_id_veca; // [rsp+20h] [rbp-320h]
  const Vector3 *gm_level_id_vecb; // [rsp+20h] [rbp-320h]
  bool is_single_mode; // [rsp+4Ah] [rbp-2F6h]
  bool is_pre_in_single_mp_mode; // [rsp+4Bh] [rbp-2F5h]
  int32_t ret; // [rsp+4Ch] [rbp-2F4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+50h] [rbp-2F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+58h] [rbp-2E8h] BYREF
  const data::DraftExcelConfig *config_ptr; // [rsp+60h] [rbp-2E0h]
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+68h] [rbp-2D8h]
  const data::GalleryExcelConfig *gallery_config_ptr_0; // [rsp+70h] [rbp-2D0h]
  std::set<unsigned int> *__for_range; // [rsp+78h] [rbp-2C8h]
  const unsigned int *uid; // [rsp+80h] [rbp-2C0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+88h] [rbp-2B8h]
  common::milog::MiLogStream v110; // [rsp+90h] [rbp-2B0h] BYREF
  unsigned int v111[164]; // [rsp+B0h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v111;
  v94 = v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 4 12 level_id:648 48 4 14 gallery_id:655 64 4 14 gallery_id:535 80 4 12 draft_id:473 96 16"
                        " 13 world_ptr:487 128 16 13 scene_ptr:494 160 16 16 activity_ptr:579 192 16 21 dungeon_scene_ptr"
                        ":587 224 16 14 player_ptr:616 256 16 20 player_world_ptr:662 288 16 16 activity_ptr:719 320 48 1"
                        "8 agreed_uid_set:502 400 48 11 uid_set:508 480 96 11 context:595";
  *(_QWORD *)(v3 + 16) = PlayerDraftComp::onDraftProgressFinish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -219021312;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862734] = -218959118;
  v5[536862738] = -202116109;
  *(_DWORD *)(v3 + 80) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->draft_info_);
  }
  if ( this->draft_info_.draft_id == *(_DWORD *)(v3 + 80) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 288));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
    config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                   &v7->design_config.txt_config_mgr.draft_config_mgr,
                   *(_DWORD *)(v3 + 80));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v110,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "onDraftProgressFinish",
          490);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v110,
          (const char (*)[22])"[DRAFT] world is null");
        common::milog::MiLogStream::~MiLogStream(&v110);
        started = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v110,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "onDraftProgressFinish",
            497);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v110,
            (const char (*)[22])"[DRAFT] scene is null");
          common::milog::MiLogStream::~MiLogStream(&v110);
          started = -1;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->draft_info_.is_single_mode >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&this->draft_info_.is_single_mode);
          is_single_mode = this->draft_info_.is_single_mode;
          M_current = std::vector<unsigned int>::begin(&this->draft_info_.invite_agree_uid_vec)._M_current;
          v10._M_current = std::vector<unsigned int>::end(&this->draft_info_.invite_agree_uid_vec)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v3 + 320),
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            v10);
          DraftInfo::clear(&this->draft_info_);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exec >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->exec >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->exec);
          }
          switch ( config_ptr->exec )
          {
            case DRAFT_EXEC_GALLERY:
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 400));
              v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Scene::getPlayerUidSet(v11, (std::set<unsigned int> *)(v3 + 400));
              v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              GalleryComp = Scene::getGalleryComp(v12);
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_load4(&config_ptr->param);
              }
              if ( SceneGalleryComp::initGallery(
                     GalleryComp,
                     config_ptr->param,
                     (const std::set<unsigned int> *)(v3 + 400)) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  512);
                v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v110,
                        (const char (*)[41])"[DRAFT] gallery init failed, gallery_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config_ptr->param);
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = -1;
                v15 = 0;
              }
              else
              {
                v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v17 = Scene::getGalleryComp(v16);
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                            + 0x7FFF8000) )
                {
                  __asan_report_load4(&config_ptr->param);
                }
                if ( SceneGalleryComp::startGallery(v17, config_ptr->param) )
                {
                  common::milog::MiLogStream::create(
                    &v110,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/draft/player_draft_comp.cpp",
                    "onDraftProgressFinish",
                    517);
                  v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v110,
                          (const char (*)[42])"[DRAFT] gallery start failed, gallery_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config_ptr->param);
                  common::milog::MiLogStream::~MiLogStream(&v110);
                  started = -1;
                  v15 = 0;
                }
                else
                {
                  v15 = 1;
                }
              }
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 400));
              if ( v15 )
                goto LABEL_188;
              break;
            case DRAFT_EXEC_HIDE_AND_SEEK:
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::getActivityComp(this->player_);
              PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v3 + 288));
              if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v3 + 288)) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  527);
                v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v110,
                        (const char (*)[39])"[DRAFT] activity is not opening, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = 860;
              }
              else
              {
                v20 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                started = HideAndSeekActivity::startHideAndSeekByDraft(v20);
              }
              std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v3 + 288));
              break;
            case DRAFT_EXEC_AUTOSTART_GALLERY:
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_load4(&config_ptr->param);
              }
              *(_DWORD *)(v3 + 64) = config_ptr->param;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v3 + 288));
              v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
              gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                     &v21->design_config.txt_config_mgr.gallery_config_mgr,
                                     *(_DWORD *)(v3 + 64));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
              if ( gallery_config_ptr )
              {
                if ( PlayerDraftComp::transferPlayerToAutoStartGalleryPos(
                       this,
                       *(_DWORD *)(v3 + 64),
                       (const std::set<unsigned int> *)(v3 + 320)) )
                {
                  started = -1;
                }
                else
                {
                  v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  Scene::getGalleryComp(v23);
                  SceneGalleryComp::getSceneTransferAwaiter((const SceneGalleryComp *const)(v3 + 192));
                  if ( std::operator!=<SceneTransferAwaiter>(
                         (const std::shared_ptr<SceneTransferAwaiter> *)(v3 + 192),
                         0LL)
                    && (v24 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192)),
                        SceneTransferAwaiter::isActive(v24)) )
                  {
                    common::milog::MiLogStream::create(
                      &v110,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/draft/player_draft_comp.cpp",
                      "onDraftProgressFinish",
                      550);
                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v110,
                      (const char (*)[35])"transfer awaiter is already active");
                    common::milog::MiLogStream::~MiLogStream(&v110);
                    started = -1;
                    v26 = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v3 + 224) = 0LL;
                    *(_QWORD *)(v3 + 232) = 0LL;
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exec_sub_type >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&config_ptr->exec_sub_type >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&config_ptr->exec_sub_type);
                    }
                    if ( config_ptr->exec_sub_type == DRAFT_EXEC_SUB_ISLAND_PARTY )
                    {
                      v27 = (std::set<unsigned int> *)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      common::tools::perf::make_shared<IslandPartyDraftGallerySceneTransferAwaiter,Scene &,std::set<unsigned int> &,unsigned int const&,unsigned int &>(
                        (Scene *)(v3 + 256),
                        v27,
                        (const unsigned int *)(v3 + 320),
                        &gallery_config_ptr->transfer_timeout,
                        (Scene *)(v3 + 64),
                        v28,
                        v93,
                        v111);
                      std::shared_ptr<SceneTransferAwaiter>::operator=<IslandPartyDraftGallerySceneTransferAwaiter>(
                        (std::shared_ptr<SceneTransferAwaiter> *const)(v3 + 224),
                        (std::shared_ptr<IslandPartyDraftGallerySceneTransferAwaiter> *)(v3 + 256));
                      std::shared_ptr<IslandPartyDraftGallerySceneTransferAwaiter>::~shared_ptr((std::shared_ptr<IslandPartyDraftGallerySceneTransferAwaiter> *const)(v3 + 256));
                    }
                    else
                    {
                      v29 = (std::set<unsigned int> *)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      common::tools::perf::make_shared<DraftGallerySceneTransferAwaiter,Scene &,std::set<unsigned int> &,unsigned int const&,unsigned int &>(
                        (Scene *)(v3 + 288),
                        v29,
                        (const unsigned int *)(v3 + 320),
                        &gallery_config_ptr->transfer_timeout,
                        (Scene *)(v3 + 64),
                        v30,
                        v93,
                        v111);
                      std::shared_ptr<SceneTransferAwaiter>::operator=<DraftGallerySceneTransferAwaiter>(
                        (std::shared_ptr<SceneTransferAwaiter> *const)(v3 + 224),
                        (std::shared_ptr<DraftGallerySceneTransferAwaiter> *)(v3 + 288));
                      std::shared_ptr<DraftGallerySceneTransferAwaiter>::~shared_ptr((std::shared_ptr<DraftGallerySceneTransferAwaiter> *const)(v3 + 288));
                    }
                    if ( std::operator==<SceneTransferAwaiter>(
                           (const std::shared_ptr<SceneTransferAwaiter> *)(v3 + 224),
                           0LL) )
                    {
                      started = -1;
                      v31 = 0;
                    }
                    else
                    {
                      v32 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                      SceneTransferAwaiter::start(v32);
                      v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      v34 = Scene::getGalleryComp(v33);
                      v35 = std::move<std::shared_ptr<SceneTransferAwaiter> &>((std::shared_ptr<SceneTransferAwaiter> *)(v3 + 224));
                      std::shared_ptr<SceneTransferAwaiter>::shared_ptr(
                        (std::shared_ptr<SceneTransferAwaiter> *const)(v3 + 288),
                        v35);
                      SceneGalleryComp::attachSceneTransferAwaiter(v34, (SceneTransferAwaiterPtr *)(v3 + 288));
                      std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)(v3 + 288));
                      v31 = 1;
                    }
                    std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)(v3 + 224));
                    v26 = v31 != 0;
                  }
                  std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)(v3 + 192));
                  if ( v26 )
                    goto LABEL_188;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  539);
                v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v110,
                        (const char (*)[39])"gallery config not found, gallery_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = -1;
              }
              break;
            case DRAFT_EXEC_CHAR_AMUSEMENT:
              if ( is_single_mode )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                std::set<unsigned int>::operator=(
                  (std::set<unsigned int> *const)(v3 + 320),
                  (std::initializer_list<unsigned int>)__PAIR128__(1LL, v3 + 64));
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::getActivityComp(this->player_);
              PlayerActivityComp::findOpenningActivity<CharAmusementActivity>((PlayerActivityComp *const)(v3 + 160));
              if ( std::operator==<CharAmusementActivity>(
                     (const std::shared_ptr<CharAmusementActivity> *)(v3 + 160),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  582);
                v36 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v110,
                        (const char (*)[34])"activity closed, agreed_uid_set: ");
                common::milog::MiLogStream::operator<<<unsigned int>(v36, (const std::set<unsigned int> *)(v3 + 320));
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = -1;
                v37 = 0;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                            + 0x7FFF8000) )
                {
                  __asan_report_load4(&config_ptr->param);
                }
                *(_DWORD *)(v3 + 64) = config_ptr->param;
                v38 = (unsigned int)std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                CharAmusementActivity::createActivityDungeon((CharAmusementActivity *const)(v3 + 192), v38);
                if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 192), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v110,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/draft/player_draft_comp.cpp",
                    "onDraftProgressFinish",
                    590);
                  v39 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          &v110,
                          (const char (*)[33])"create dungeon failed, stage_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v110);
                  started = -1;
                  v40 = 0;
                }
                else
                {
                  CharAmusementDungeonContext::CharAmusementDungeonContext((CharAmusementDungeonContext *const)(v3 + 480));
                  v41 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  gm_level_id_vec = (std::vector<unsigned int> *)CharAmusementActivity::getGmLevelIdVec(v41);
                  v42 = *(_DWORD *)(v3 + 64);
                  v43 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  ScheduleId = BaseActivity::getScheduleId(v43);
                  if ( CharAmusementDungeonContext::init(
                         (CharAmusementDungeonContext *const)(v3 + 480),
                         ScheduleId,
                         v42,
                         (const std::set<unsigned int> *)(v3 + 320),
                         gm_level_id_vec) )
                  {
                    common::milog::MiLogStream::create(
                      &v110,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/draft/player_draft_comp.cpp",
                      "onDraftProgressFinish",
                      598);
                    v45 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                            &v110,
                            (const char (*)[32])"init context failed, stage_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v110);
                    started = -1;
                    v46 = 0;
                  }
                  else
                  {
                    v47 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    CharAmusementActivity::clearGmLevelIdVec(v47);
                    if ( CharAmusementDungeonContext::randomAssignTrialAvatar((CharAmusementDungeonContext *const)(v3 + 480)) )
                    {
                      common::milog::MiLogStream::create(
                        &v110,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/draft/player_draft_comp.cpp",
                        "onDraftProgressFinish",
                        604);
                      v48 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              &v110,
                              (const char (*)[46])"random assign trial avatar failed, stage_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v48,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v110);
                      started = -1;
                      v46 = 0;
                    }
                    else
                    {
                      v49 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                      DungeonScene::setDungeonExtraData<CharAmusementDungeonContext>(
                        v49,
                        (const CharAmusementDungeonContext *)(v3 + 480));
                      v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                      DungeonScene::setTeamUidSet(v50, (const std::set<unsigned int> *)(v3 + 320));
                      v51 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                      DungeonSceneTeam = DungeonScene::getDungeonSceneTeam(v51);
                      v53 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                      SceneId = Scene::getSceneId((const Scene *const)v53);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      DungeonSceneTeam::initSceneTeam(DungeonSceneTeam, this->player_, SceneId);
                      __for_range = (std::set<unsigned int> *)(v3 + 320);
                      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 320))._M_node;
                      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 320))._M_node;
                      while ( std::operator!=(&__for_begin, &__for_end) )
                      {
                        uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
                        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&config_ptr->invite_type);
                        }
                        if ( config_ptr->invite_type == DRAFT_INVITE_WORLD )
                        {
                          v55 = (unsigned int)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(uid);
                          }
                          World::findPlayerPtr((World *const)(v3 + 224), v55);
                        }
                        else
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&config_ptr->invite_type);
                          }
                          if ( config_ptr->invite_type == DRAFT_INVITE_SCENE )
                          {
                            v56 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                            if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(uid);
                            }
                            Scene::findPlayer((const Scene *const)(v3 + 224), v56);
                          }
                          else
                          {
                            std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 224), 0LL);
                          }
                        }
                        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 224), 0LL) )
                        {
                          common::milog::MiLogStream::create(
                            &v110,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/draft/player_draft_comp.cpp",
                            "onDraftProgressFinish",
                            621);
                          v57 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                  &v110,
                                  (const char (*)[22])"player is null, uid: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, uid);
                          common::milog::MiLogStream::~MiLogStream(&v110);
                        }
                        else
                        {
                          std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                          Player::getCurAvatar((Player *const)(v3 + 256));
                          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 256), 0LL) )
                          {
                            common::milog::MiLogStream::create(
                              &v110,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/draft/player_draft_comp.cpp",
                              "onDraftProgressFinish",
                              627);
                            v58 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                    &v110,
                                    (const char (*)[25])off_26161280);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, uid);
                            common::milog::MiLogStream::~MiLogStream(&v110);
                          }
                          else
                          {
                            v59 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                            DungeonComp = Player::getDungeonComp(v59);
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            SceneComp = Player::getSceneComp(this->player_);
                            gm_level_id_veca = PlayerSceneComp::getCurSceneId(SceneComp);
                            std::shared_ptr<DungeonScene>::shared_ptr(
                              (std::shared_ptr<DungeonScene> *const)(v3 + 288),
                              (const std::shared_ptr<DungeonScene> *)(v3 + 192));
                            v62 = PlayerDungeonComp::enterDungeon(
                                    DungeonComp,
                                    (DungeonScenePtr *)(v3 + 288),
                                    gm_level_id_veca,
                                    0) != 0;
                            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 288));
                            if ( v62 )
                            {
                              common::milog::MiLogStream::create(
                                &v110,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/draft/player_draft_comp.cpp",
                                "onDraftProgressFinish",
                                633);
                              v63 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                      &v110,
                                      (const char (*)[32])"enter dungeon failed, stage_id:");
                              v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v63,
                                      (const unsigned int *)(v3 + 64));
                              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v64,
                                (const char (*)[7])", uid:");
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8(&this->player_);
                              Player::getUid(this->player_);
                              common::milog::MiLogStream::~MiLogStream(&v110);
                            }
                            else
                            {
                              v65 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                              v66 = Player::getDungeonComp(v65);
                              v67 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                              gm_level_id_vecb = Entity::getRotation((const Entity *const)v67);
                              v68 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                              __l = Entity::getPosition((const Entity *const)v68);
                              v69 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                              v70 = Player::getSceneComp(v69);
                              CurSceneId = PlayerSceneComp::getCurSceneId(v70);
                              PlayerDungeonComp::setQuitPosRot(v66, CurSceneId, __l, gm_level_id_vecb);
                            }
                          }
                          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 256));
                        }
                        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 224));
                        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
                      }
                      v46 = 1;
                    }
                  }
                  CharAmusementDungeonContext::~CharAmusementDungeonContext((CharAmusementDungeonContext *const)(v3 + 480));
                  v40 = v46 != 0;
                }
                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 192));
                v37 = v40;
              }
              std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v3 + 160));
              if ( v37 )
                goto LABEL_188;
              break;
            case DRAFT_EXEC_BRICK_BREAKER:
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::getActivityComp(this->player_);
              PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v3 + 288));
              if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v3 + 288)) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  712);
                v88 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v110,
                        (const char (*)[39])"[DRAFT] activity is not opening, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v88,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = 860;
              }
              else
              {
                p_param = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                            + 0x7FFF8000) )
                {
                  p_param = (BrickBreakerActivity *)&config_ptr->param;
                  __asan_report_load4(&config_ptr->param);
                }
                started = BrickBreakerActivity::initBrickBreakerPlay(
                            p_param,
                            config_ptr->param,
                            (const std::set<unsigned int> *)(v3 + 320),
                            0);
              }
              std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v3 + 288));
              break;
            case DRAFT_EXEC_COIN_COLLECT:
              if ( is_single_mode )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                std::set<unsigned int>::operator=(
                  (std::set<unsigned int> *const)(v3 + 320),
                  (std::initializer_list<unsigned int>)__PAIR128__(1LL, v3 + 64));
              }
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->param >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_load4(&config_ptr->param);
              }
              *(_DWORD *)(v3 + 32) = config_ptr->param;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v3 + 288));
              v72 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
              level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                                   &v72->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                                   *(_DWORD *)(v3 + 32));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
              if ( level_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&level_config_ptr->gallery_id);
                }
                *(_DWORD *)(v3 + 48) = level_config_ptr->gallery_id;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v3 + 288));
                v74 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                gallery_config_ptr_0 = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                         &v74->design_config.txt_config_mgr.gallery_config_mgr,
                                         *(_DWORD *)(v3 + 48));
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
                if ( gallery_config_ptr_0 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  Player::getSceneComp(this->player_);
                  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 256));
                  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 256), 0LL) )
                    goto LABEL_136;
                  v76 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v76);
                  v77 = (unsigned __int64)(v76->_vptr_World + 2);
                  if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v76->_vptr_World + 2);
                  if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v77)(v76) == 1 )
                    v78 = 0;
                  else
LABEL_136:
                    v78 = 1;
                  if ( v78 )
                  {
                    common::milog::MiLogStream::create(
                      &v110,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/draft/player_draft_comp.cpp",
                      "onDraftProgressFinish",
                      665);
                    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v110,
                      (const char (*)[51])"[CoinCollect] cur world can not start coin collect");
                    common::milog::MiLogStream::~MiLogStream(&v110);
                    started = -1;
                    v79 = 0;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    MpComp = Player::getMpComp(this->player_);
                    is_pre_in_single_mp_mode = PlayerMpComp::isInSingleMpMode(MpComp);
                    if ( is_single_mode && !is_pre_in_single_mp_mode )
                    {
                      common::milog::MiLogStream::create(
                        &v110,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/draft/player_draft_comp.cpp",
                        "onDraftProgressFinish",
                        671);
                      v81 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                              &v110,
                              (const char (*)[42])"[CoinCollect] set world in mp mode, uid: ");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v81,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v110);
                      v82 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                      PlayerWorld::setIsInMpMode(v82, 1);
                    }
                    if ( PlayerDraftComp::transferPlayerToAutoStartGalleryPos(
                           this,
                           *(_DWORD *)(v3 + 48),
                           (const std::set<unsigned int> *)(v3 + 320)) )
                    {
                      common::milog::MiLogStream::create(
                        &v110,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/draft/player_draft_comp.cpp",
                        "onDraftProgressFinish",
                        680);
                      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v110,
                        (const char (*)[37])"[CoinCollect] transfer player failed");
                      common::milog::MiLogStream::~MiLogStream(&v110);
                      ret = -1;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      Player::getActivityComp(this->player_);
                      PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v3 + 288));
                      if ( std::operator==<CoinCollectActivity>(
                             (const std::shared_ptr<CoinCollectActivity> *)(v3 + 288),
                             0LL) )
                      {
                        common::milog::MiLogStream::create(
                          &v110,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/draft/player_draft_comp.cpp",
                          "onDraftProgressFinish",
                          688);
                        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          &v110,
                          (const char (*)[48])"[CoinCollect] coin collect activity is not open");
                        common::milog::MiLogStream::~MiLogStream(&v110);
                        ret = -1;
                      }
                      else
                      {
                        v83 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                        ret = CoinCollectActivity::startCoinCollectTransferGuard(
                                v83,
                                *(_DWORD *)(v3 + 80),
                                *(_DWORD *)(v3 + 32),
                                (const std::set<unsigned int> *)(v3 + 320),
                                is_pre_in_single_mp_mode);
                      }
                      std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v3 + 288));
                    }
                    if ( ret )
                    {
                      if ( is_pre_in_single_mp_mode )
                        goto LABEL_161;
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v84 = Player::getMpComp(this->player_);
                      if ( PlayerMpComp::isInSingleMpMode(v84) )
                        v85 = 1;
                      else
LABEL_161:
                        v85 = 0;
                      if ( v85 )
                      {
                        common::milog::MiLogStream::create(
                          &v110,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/draft/player_draft_comp.cpp",
                          "onDraftProgressFinish",
                          700);
                        v86 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                &v110,
                                (const char (*)[46])"[CoinCollect] set world in not mp mode, uid: ");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v86,
                          (const unsigned int *)(v3 + 64));
                        common::milog::MiLogStream::~MiLogStream(&v110);
                        v87 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                        PlayerWorld::setIsInMpMode(v87, 0);
                      }
                      started = ret;
                      v79 = 0;
                    }
                    else
                    {
                      v79 = 1;
                    }
                  }
                  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 256));
                  if ( v79 )
                    goto LABEL_188;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v110,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/draft/player_draft_comp.cpp",
                    "onDraftProgressFinish",
                    659);
                  v75 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          &v110,
                          (const char (*)[53])"[CoinCollect] gallery config not found, gallery_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v75,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v110);
                  started = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  652);
                v73 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v110,
                        (const char (*)[49])"[CoinCollect] level config not found, level_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v73,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = -1;
              }
              break;
            case DRAFT_EXEC_LAN_V3_BOAT_MULTI:
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::getActivityComp(this->player_);
              PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v3 + 288));
              if ( std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v3 + 288)) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onDraftProgressFinish",
                  722);
                v90 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v110,
                        (const char (*)[39])"[DRAFT] activity is not opening, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v90,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v110);
                started = 860;
              }
              else
              {
                v91 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                std::set<unsigned int>::set(
                  (std::set<unsigned int> *const)(v3 + 400),
                  (const std::set<unsigned int> *)(v3 + 320));
                started = SeaLampV3Activity::startLanV3BoatPlay(v91, (std::set<unsigned int> *)(v3 + 400), 0, 0);
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 400));
              }
              std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v3 + 288));
              break;
            default:
LABEL_188:
              started = 0;
              break;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 320));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      }
      std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v110,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "onDraftProgressFinish",
        483);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v110,
             (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v110);
      started = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v110,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "onDraftProgressFinish",
      477);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v110,
           (const char (*)[29])"[DRAFT] draft id not match: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v110);
    started = -1;
  }
  result = started;
  if ( v94 == (unsigned int *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 736: range 00000000175F1DE2-00000000175F28FD
__int64 __fastcall PlayerDraftComp::onGuestReplyDraftInvite(
        PlayerDraftComp *const this,
        uint32_t draft_id,
        uint32_t guest_uid,
        bool is_agree)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  World *v13; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t PlayerCount; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::vector<unsigned int>::size_type v17; // r14
  bool v18; // al
  World *v19; // rax
  Scene *v20; // rax
  __int64 result; // rax
  bool is_world_draft; // [rsp+2Fh] [rbp-141h]
  uint32_t now; // [rsp+30h] [rbp-140h]
  unsigned int total_player_count; // [rsp+34h] [rbp-13Ch]
  const data::DraftExcelConfig *config_ptr; // [rsp+38h] [rbp-138h]
  char v28[304]; // [rsp+40h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 12 draft_id:735 64 16 13 world_ptr:764 96 16 13 scene_ptr:771 128 32 16 reply_notify:778 "
                        "192 32 17 result_notify:802";
  *(_QWORD *)(v4 + 16) = PlayerDraftComp::onGuestReplyDraftInvite;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->draft_info_);
  }
  if ( this->draft_info_.draft_id != *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/draft/player_draft_comp.cpp",
      "onGuestReplyDraftInvite",
      740);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[29])"[DRAFT] draft id not match: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v8 = -1;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_info_.stage);
  }
  if ( this->draft_info_.stage != INVITING )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "onGuestReplyDraftInvite",
      746);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[32])"[DRAFT] draft stage incorrect: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v8 = -1;
    goto LABEL_54;
  }
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_.invite_deadline_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_info_.invite_deadline_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_info_.invite_deadline_time);
  }
  if ( now > this->draft_info_.invite_deadline_time )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/draft/player_draft_comp.cpp",
      "onGuestReplyDraftInvite",
      753);
    v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v4 + 192),
            (const char (*)[36])"[DRAFT] draft is expired, draft_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v8 = 9659;
    goto LABEL_54;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v11->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "onGuestReplyDraftInvite",
      760);
    v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v4 + 192),
            (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v8 = -1;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 64));
  if ( !std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "onGuestReplyDraftInvite",
        774);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)(v4 + 192),
        (const char (*)[22])"[DRAFT] scene is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      v8 = -1;
LABEL_52:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
      goto LABEL_53;
    }
    proto::DraftGuestReplyInviteNotify::DraftGuestReplyInviteNotify((proto::DraftGuestReplyInviteNotify *const)(v4 + 128));
    proto::DraftGuestReplyInviteNotify::set_draft_id(
      (proto::DraftGuestReplyInviteNotify *const)(v4 + 128),
      *(_DWORD *)(v4 + 48));
    proto::DraftGuestReplyInviteNotify::set_guest_uid((proto::DraftGuestReplyInviteNotify *const)(v4 + 128), guest_uid);
    proto::DraftGuestReplyInviteNotify::set_is_agree((proto::DraftGuestReplyInviteNotify *const)(v4 + 128), is_agree);
    v13 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    World::notifyAllPlayer<proto::DraftGuestReplyInviteNotify>(
      v13,
      (const proto::DraftGuestReplyInviteNotify *)(v4 + 128),
      guest_uid);
    if ( is_agree )
      DraftInfo::addInviteAgreeUid(&this->draft_info_, guest_uid);
    else
      DraftInfo::addInviteDisagreeUid(&this->draft_info_, guest_uid);
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->invite_type);
    }
    is_world_draft = config_ptr->invite_type == DRAFT_INVITE_WORLD;
    if ( config_ptr->invite_type == DRAFT_INVITE_WORLD )
    {
      v14 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      PlayerCount = World::getPlayerCount(v14);
    }
    else
    {
      v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      PlayerCount = Scene::getPlayerCount(v16);
    }
    total_player_count = PlayerCount;
    v17 = std::vector<unsigned int>::size(&this->draft_info_.invite_agree_uid_vec);
    if ( v17 + std::vector<unsigned int>::size(&this->draft_info_.invite_disagree_uid_vec) >= total_player_count )
    {
      proto::DraftInviteResultNotify::DraftInviteResultNotify((proto::DraftInviteResultNotify *const)(v4 + 192));
      proto::DraftInviteResultNotify::set_draft_id(
        (proto::DraftInviteResultNotify *const)(v4 + 192),
        *(_DWORD *)(v4 + 48));
      v18 = std::vector<unsigned int>::empty(&this->draft_info_.invite_disagree_uid_vec);
      proto::DraftInviteResultNotify::set_is_all_argee((proto::DraftInviteResultNotify *const)(v4 + 192), v18);
      if ( is_world_draft )
      {
        v19 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        World::notifyAllPlayer<proto::DraftInviteResultNotify>(
          v19,
          (const proto::DraftInviteResultNotify *)(v4 + 192),
          0);
      }
      else
      {
        v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        Scene::notifyAllPlayer<proto::DraftInviteResultNotify>(v20, (proto::DraftInviteResultNotify *)(v4 + 192), 0);
      }
      if ( !std::vector<unsigned int>::empty(&this->draft_info_.invite_disagree_uid_vec) )
        DraftInfo::clear(&this->draft_info_);
      proto::DraftInviteResultNotify::~DraftInviteResultNotify((proto::DraftInviteResultNotify *const)(v4 + 192));
    }
    if ( std::vector<unsigned int>::size(&this->draft_info_.invite_agree_uid_vec) >= total_player_count )
    {
      if ( PlayerDraftComp::transferPlayerToDraftPos(this, *(_DWORD *)(v4 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "onGuestReplyDraftInvite",
          825);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v4 + 192),
          (const char (*)[33])"[DRAFT] player jump scene failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        v8 = -1;
LABEL_51:
        proto::DraftGuestReplyInviteNotify::~DraftGuestReplyInviteNotify((proto::DraftGuestReplyInviteNotify *const)(v4 + 128));
        goto LABEL_52;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_need_twice_confirm >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)config_ptr + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_need_twice_confirm >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&config_ptr->is_need_twice_confirm);
      }
      if ( !config_ptr->is_need_twice_confirm )
      {
        v8 = PlayerDraftComp::onDraftProgressFinish(this, *(_DWORD *)(v4 + 48));
        goto LABEL_51;
      }
      if ( PlayerDraftComp::startTwiceConfirmProgress(this, *(_DWORD *)(v4 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "onGuestReplyDraftInvite",
          833);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v4 + 192),
          (const char (*)[41])"[DRAFT] startTwiceConfirmProgress failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        v8 = -1;
        goto LABEL_51;
      }
    }
    v8 = 0;
    goto LABEL_51;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/draft/player_draft_comp.cpp",
    "onGuestReplyDraftInvite",
    767);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
    (common::milog::MiLogStream *const)(v4 + 192),
    (const char (*)[22])"[DRAFT] world is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
  v8 = -1;
LABEL_53:
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 64));
LABEL_54:
  result = v8;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 847: range 00000000175F28FE-00000000175F3377
__int64 __fastcall PlayerDraftComp::checkOwnerDraftStart(PlayerDraftComp *const this, uint32_t draft_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t PlayerCount; // ecx
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  data::SceneType SceneType; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  data::SceneType v16; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  char *v28; // [rsp+20h] [rbp-E0h] BYREF
  const data::DraftExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 draft_id:846 64 16 13 world_ptr:848 96 16 13 scene_ptr:882";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::checkOwnerDraftStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkOwnerDraftStart",
      851);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v30, (const char (*)[22])"[DRAFT] world is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = 9655;
    goto LABEL_49;
  }
  v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  OwnerUid = World::getOwnerUid(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( OwnerUid != Player::getUid(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkOwnerDraftStart",
      857);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v30,
      (const char (*)[27])"[DRAFT] owner not in world");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = 9652;
    goto LABEL_49;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v8->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkOwnerDraftStart",
      864);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v30,
           (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
    goto LABEL_49;
  }
  if ( *(char *)(((unsigned __int64)&config_ptr->enable_mp >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&config_ptr->enable_mp);
  if ( !config_ptr->enable_mp )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkOwnerDraftStart",
      871);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v30,
      (const char (*)[35])"[DRAFT] draft config not enable mp");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = 9653;
    goto LABEL_49;
  }
  v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  PlayerCount = World::getPlayerCount(v10);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->min_player_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->min_player_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->min_player_count);
  }
  if ( PlayerCount < config_ptr->min_player_count )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkOwnerDraftStart",
      878);
    v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v30,
            (const char (*)[63])"[DRAFT] owner is in mp mode, and world player count less than:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config_ptr->min_player_count);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = 9654;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->start_limit_type);
    }
    if ( config_ptr->start_limit_type == DRAFT_START_LIMIT_NOT_IN_HOME_DUNGEON )
    {
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      SceneType = Scene::getSceneType(v13);
      if ( SceneExcelConfigMgr::isHomeScene(SceneType)
        || (v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
            v16 = Scene::getSceneType(v15),
            SceneExcelConfigMgr::isDungeonScene(v16)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkOwnerDraftStart",
          894);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v30, (const char (*)[39])off_26161980);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v5 = 9655;
        goto LABEL_48;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->start_limit_type);
      }
      if ( config_ptr->start_limit_type != DRAFT_START_LIMIT_SCENE )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkOwnerDraftStart",
          909);
        v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v30,
                (const char (*)[30])"invalid DraftStartLimitType: ");
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->start_limit_type);
        }
        v28 = (char *)data::enumValToStr(config_ptr->start_limit_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v24, (const char *const *)&v28);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v5 = -1;
        goto LABEL_48;
      }
      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      SceneId = Scene::getSceneId(v18);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->scene_id);
      }
      if ( SceneId != config_ptr->scene_id )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkOwnerDraftStart",
          903);
        v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v30,
                (const char (*)[48])"[DRAFT] owner not in draft scene, cur_scene_id:");
        v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        val = Scene::getSceneId(v21);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v22,
                (const char (*)[17])" draft_scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config_ptr->scene_id);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v5 = 9655;
        goto LABEL_48;
      }
    }
    v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( PlayerWorld::isHasOtherPlayerPreEnter(v25) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/draft/player_draft_comp.cpp",
        "checkOwnerDraftStart",
        916);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v30,
        (const char (*)[36])"[DRAFT] player is entering my world");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v5 = 9656;
    }
    else
    {
      v5 = 0;
    }
    goto LABEL_48;
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/draft/player_draft_comp.cpp",
    "checkOwnerDraftStart",
    885);
  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v30, (const char (*)[26])"[DRAFT] cur scene is null");
  common::milog::MiLogStream::~MiLogStream(&v30);
  v5 = -1;
LABEL_48:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
LABEL_49:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  result = v5;
  if ( v31 == (char *)v2 )
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

// Line 924: range 00000000175F3378-00000000175F33A5
int32_t __cdecl PlayerDraftComp::checkDraftSceneEnterable(PlayerDraftComp *const this)
{
  if ( DraftInfo::isActive(&this->draft_info_) )
    return -1;
  else
    return 0;
};

// Line 933: range 00000000175F33A6-00000000175F3B07
__int64 __fastcall PlayerDraftComp::checkGuestDraftStart(
        PlayerDraftComp *const this,
        uint32_t draft_id,
        Player *guest_player)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  uint32_t Uid; // r14d
  common::milog::MiLogStream *v10; // rbx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  data::SceneType SceneType; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  data::SceneType v17; // eax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  __int64 result; // rax
  unsigned int v28; // [rsp+20h] [rbp-C0h] BYREF
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const data::DraftExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 draft_id:932 64 16 13 scene_ptr:955";
  *(_QWORD *)(v3 + 16) = PlayerDraftComp::checkGuestDraftStart;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = draft_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v6->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    if ( Uid == Player::getUid(guest_player) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "checkGuestDraftStart",
        944);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v31,
              (const char (*)[46])"[DRAFT] owner should not be guest, guest_uid:");
      val = Player::getUid(guest_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v8 = -1;
    }
    else
    {
      SceneComp = Player::getSceneComp(guest_player);
      if ( PlayerSceneComp::isInTransfer(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkGuestDraftStart",
          951);
        v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v31,
                (const char (*)[51])"[DRAFT] guest player is in transfering, guest_uid:");
        val = Player::getUid(guest_player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v8 = 9657;
      }
      else
      {
        Player::getSceneComp(guest_player);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "checkGuestDraftStart",
            958);
          v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v31,
                  (const char (*)[51])"[DRAFT] guest player scene_ptr is null, guest_uid:");
          val = Player::getUid(guest_player);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v8 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->invite_type);
          }
          if ( config_ptr->invite_type == DRAFT_INVITE_WORLD )
          {
            v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            SceneType = Scene::getSceneType(v14);
            if ( SceneExcelConfigMgr::isDungeonScene(SceneType)
              || (v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
                  v17 = Scene::getSceneType(v16),
                  SceneExcelConfigMgr::isRoomScene(v17)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/draft/player_draft_comp.cpp",
                "checkGuestDraftStart",
                968);
              v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v31,
                      (const char (*)[43])"guest player not in world scene guest_uid:");
              val = Player::getUid(guest_player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
              common::milog::MiLogStream::~MiLogStream(&v31);
              v8 = 9658;
            }
            else
            {
              v8 = 0;
            }
          }
          else
          {
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            SceneId = Scene::getSceneId(v20);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->scene_id);
            }
            if ( SceneId == config_ptr->scene_id )
            {
              v8 = 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/draft/player_draft_comp.cpp",
                "checkGuestDraftStart",
                978);
              v22 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v31,
                      (const char (*)[64])"[DRAFT] guest player scene not match to draft scene, guest_uid:");
              v28 = Player::getUid(guest_player);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v28);
              v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v23,
                      (const char (*)[15])" cur_scene_id:");
              v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              val = Scene::getSceneId(v25);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
              common::milog::MiLogStream::~MiLogStream(&v31);
              v8 = 9658;
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkGuestDraftStart",
      937);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v31,
           (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v8 = -1;
  }
  result = v8;
  if ( v32 == (char *)v3 )
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

// Line 987: range 00000000175F3B08-00000000175F447A
__int64 __fastcall PlayerDraftComp::checkSinglePlayerDraftStart(PlayerDraftComp *const this, uint32_t draft_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  data::SceneType SceneType; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  data::SceneType v15; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  char *v27; // [rsp+20h] [rbp-E0h] BYREF
  const data::DraftExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 draft_id:986 64 16 13 world_ptr:988 96 16 14 scene_ptr:1015";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::checkSinglePlayerDraftStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkSinglePlayerDraftStart",
      991);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v29, (const char (*)[22])"[DRAFT] world is null");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = 9655;
    goto LABEL_43;
  }
  v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  OwnerUid = World::getOwnerUid(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( OwnerUid != Player::getUid(this->player_) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkSinglePlayerDraftStart",
      997);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v29,
      (const char (*)[27])"[DRAFT] owner not in world");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = 9652;
    goto LABEL_43;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v8->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkSinglePlayerDraftStart",
      1004);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v29,
           (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
    goto LABEL_43;
  }
  v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( World::getPlayerCount(v10) != 1 )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/draft/player_draft_comp.cpp",
      "checkSinglePlayerDraftStart",
      1011);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v29,
            (const char (*)[39])"[DRAFT] world has more than 1 player, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = 9653;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->start_limit_type);
    }
    if ( config_ptr->start_limit_type == DRAFT_START_LIMIT_NOT_IN_HOME_DUNGEON )
    {
      v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      SceneType = Scene::getSceneType(v12);
      if ( SceneExcelConfigMgr::isHomeScene(SceneType)
        || (v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
            v15 = Scene::getSceneType(v14),
            SceneExcelConfigMgr::isDungeonScene(v15)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkSinglePlayerDraftStart",
          1027);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v29, (const char (*)[39])off_26161980);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = 9655;
        goto LABEL_42;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->start_limit_type);
      }
      if ( config_ptr->start_limit_type != DRAFT_START_LIMIT_SCENE )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkSinglePlayerDraftStart",
          1042);
        v23 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v29,
                (const char (*)[30])"invalid DraftStartLimitType: ");
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->start_limit_type >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->start_limit_type);
        }
        v27 = (char *)data::enumValToStr(config_ptr->start_limit_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)&v27);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = -1;
        goto LABEL_42;
      }
      v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      SceneId = Scene::getSceneId(v17);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->scene_id);
      }
      if ( SceneId != config_ptr->scene_id )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "checkSinglePlayerDraftStart",
          1036);
        v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v29,
                (const char (*)[48])"[DRAFT] owner not in draft scene, cur_scene_id:");
        v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        val = Scene::getSceneId(v20);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v21,
                (const char (*)[17])" draft_scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config_ptr->scene_id);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = 9655;
        goto LABEL_42;
      }
    }
    v24 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( PlayerWorld::isHasOtherPlayerPreEnter(v24) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/draft/player_draft_comp.cpp",
        "checkSinglePlayerDraftStart",
        1049);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v29,
        (const char (*)[36])"[DRAFT] player is entering my world");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = 9656;
    }
    else
    {
      v5 = 0;
    }
    goto LABEL_42;
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/draft/player_draft_comp.cpp",
    "checkSinglePlayerDraftStart",
    1018);
  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v29, (const char (*)[26])"[DRAFT] cur scene is null");
  common::milog::MiLogStream::~MiLogStream(&v29);
  v5 = -1;
LABEL_42:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
LABEL_43:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 1057: range 00000000175F447C-00000000175F4C7E
__int64 __fastcall PlayerDraftComp::startTwiceConfirmProgress(PlayerDraftComp *const this, uint32_t draft_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rdx
  __int64 Now; // rsi
  uint32_t v11; // ecx
  char v12; // al
  World *v13; // rax
  PlayerUnixTimer *p_twice_confirm_timer; // rdi
  char v15; // al
  common::milog::MiLogStream *v16; // rcx
  __int64 result; // rax
  const data::DraftExcelConfig *config_ptr; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-110h] BYREF
  char v21[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 draft_id:1056 64 16 14 world_ptr:1077 96 16 14 scene_ptr:1084 128 32 19 confirm_notify:1073";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::startTwiceConfirmProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->draft_info_);
  }
  if ( this->draft_info_.draft_id == *(_DWORD *)(v2 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                   &v7->design_config.txt_config_mgr.draft_config_mgr,
                   *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( config_ptr )
    {
      v9 = (*(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store4(&this->draft_info_.stage, (((_BYTE)this + 44) & 7u) + 3, v9);
      this->draft_info_.stage = TWICE_CONFIRMING;
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->twice_confirm_count_down >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->twice_confirm_count_down >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->twice_confirm_count_down);
      }
      v11 = Now + config_ptr->twice_confirm_count_down;
      v12 = *(_BYTE *)(((unsigned __int64)&this->draft_info_.twice_confirm_deadline_time >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(Now) = v12 != 0;
        __asan_report_store4(
          &this->draft_info_.twice_confirm_deadline_time,
          Now,
          &this->draft_info_.twice_confirm_deadline_time);
      }
      this->draft_info_.twice_confirm_deadline_time = v11;
      proto::DraftOwnerTwiceConfirmNotify::DraftOwnerTwiceConfirmNotify((proto::DraftOwnerTwiceConfirmNotify *const)(v2 + 128));
      proto::DraftOwnerTwiceConfirmNotify::set_draft_id(
        (proto::DraftOwnerTwiceConfirmNotify *const)(v2 + 128),
        *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_.twice_confirm_deadline_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->draft_info_.twice_confirm_deadline_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->draft_info_.twice_confirm_deadline_time);
      }
      proto::DraftOwnerTwiceConfirmNotify::set_twice_confirm_deadline_time(
        (proto::DraftOwnerTwiceConfirmNotify *const)(v2 + 128),
        this->draft_info_.twice_confirm_deadline_time);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "startTwiceConfirmProgress",
          1080);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v20,
          (const char (*)[22])"[DRAFT] world is null");
        common::milog::MiLogStream::~MiLogStream(&v20);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "startTwiceConfirmProgress",
            1087);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v20,
            (const char (*)[22])"[DRAFT] scene is null");
          common::milog::MiLogStream::~MiLogStream(&v20);
          v6 = -1;
        }
        else
        {
          v13 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          World::notifyAllPlayer<proto::DraftOwnerTwiceConfirmNotify>(
            v13,
            (const proto::DraftOwnerTwiceConfirmNotify *)(v2 + 128),
            0);
          if ( common::tools::MiTimer::isActive(&this->twice_confirm_timer_) )
            goto LABEL_31;
          p_twice_confirm_timer = &this->twice_confirm_timer_;
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->twice_confirm_count_down >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->twice_confirm_count_down >> 3) + 0x7FFF8000) <= 3 )
          {
            p_twice_confirm_timer = (PlayerUnixTimer *)&config_ptr->twice_confirm_count_down;
            __asan_report_load4(&config_ptr->twice_confirm_count_down);
          }
          if ( PlayerUnixTimer::startS(
                 p_twice_confirm_timer,
                 config_ptr->twice_confirm_count_down,
                 0,
                 "./src/player/draft/player_draft_comp.cpp",
                 "startTwiceConfirmProgress",
                 1093) )
          {
            v15 = 1;
          }
          else
          {
LABEL_31:
            v15 = 0;
          }
          if ( v15 )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/draft/player_draft_comp.cpp",
              "startTwiceConfirmProgress",
              1095);
            v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v20,
                    (const char (*)[31])"[DRAFT] timer activate failed.");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v16, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v20);
            v6 = -1;
          }
          else
          {
            v6 = 0;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
      }
      std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 64));
      proto::DraftOwnerTwiceConfirmNotify::~DraftOwnerTwiceConfirmNotify((proto::DraftOwnerTwiceConfirmNotify *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "startTwiceConfirmProgress",
        1067);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v20,
             (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "startTwiceConfirmProgress",
      1060);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v20,
           (const char (*)[29])"[DRAFT] draft id not match: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  result = v6;
  if ( v21 == (char *)v2 )
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
  return result;
};

// Line 1102: range 00000000175F4C80-00000000175F56C4
__int64 __fastcall PlayerDraftComp::onGuestReplyDraftTwiceConfirm(
        PlayerDraftComp *const this,
        uint32_t draft_id,
        uint32_t guest_uid,
        bool is_agree)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  World *v16; // rax
  std::vector<unsigned int>::size_type v17; // r14
  unsigned __int64 v18; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  bool v20; // al
  Scene *v21; // rax
  std::vector<unsigned int>::size_type v22; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 result; // rax
  uint32_t now; // [rsp+24h] [rbp-14Ch]
  const data::DraftExcelConfig *config_ptr; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Player> v30; // [rsp+30h] [rbp-140h] BYREF
  char v31[304]; // [rsp+40h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 draft_id:1101 64 16 14 world_ptr:1130 96 16 14 scene_ptr:1139 128 32 17 reply_notify:1"
                        "151 192 32 18 result_notify:1168";
  *(_QWORD *)(v4 + 16) = PlayerDraftComp::onGuestReplyDraftTwiceConfirm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->draft_info_);
  }
  if ( this->draft_info_.draft_id == *(_DWORD *)(v4 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->draft_info_.stage);
    }
    if ( this->draft_info_.stage == TWICE_CONFIRMING )
    {
      now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_.twice_confirm_deadline_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->draft_info_.twice_confirm_deadline_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->draft_info_.twice_confirm_deadline_time);
      }
      if ( now <= this->draft_info_.twice_confirm_deadline_time )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                       &v11->design_config.txt_config_mgr.draft_config_mgr,
                       *(_DWORD *)(v4 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 64));
          if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v4 + 64)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 192),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/draft/player_draft_comp.cpp",
              "onGuestReplyDraftTwiceConfirm",
              1133);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[22])"[DRAFT] world is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
            v8 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 192),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/draft/player_draft_comp.cpp",
                "onGuestReplyDraftTwiceConfirm",
                1142);
              common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[22])"[DRAFT] scene is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
              v8 = -1;
            }
            else
            {
              v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              Scene::findPlayer((const Scene *const)&v30, v13);
              v14 = std::operator==<Player>(0LL, &v30);
              std::shared_ptr<Player>::~shared_ptr(&v30);
              if ( v14 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 192),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "onGuestReplyDraftTwiceConfirm",
                  1147);
                v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                        (common::milog::MiLogStream *const)(v4 + 192),
                        (const char (*)[52])"[DRAFT] guest current scene not correct, draft_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
                v8 = -1;
              }
              else
              {
                proto::DraftGuestReplyTwiceConfirmNotify::DraftGuestReplyTwiceConfirmNotify((proto::DraftGuestReplyTwiceConfirmNotify *const)(v4 + 128));
                proto::DraftGuestReplyTwiceConfirmNotify::set_draft_id(
                  (proto::DraftGuestReplyTwiceConfirmNotify *const)(v4 + 128),
                  *(_DWORD *)(v4 + 48));
                proto::DraftGuestReplyTwiceConfirmNotify::set_guest_uid(
                  (proto::DraftGuestReplyTwiceConfirmNotify *const)(v4 + 128),
                  guest_uid);
                proto::DraftGuestReplyTwiceConfirmNotify::set_is_agree(
                  (proto::DraftGuestReplyTwiceConfirmNotify *const)(v4 + 128),
                  is_agree);
                v16 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                World::notifyAllPlayer<proto::DraftGuestReplyTwiceConfirmNotify>(
                  v16,
                  (const proto::DraftGuestReplyTwiceConfirmNotify *)(v4 + 128),
                  guest_uid);
                if ( is_agree )
                  DraftInfo::addTwiceConfirmAgreeUid(&this->draft_info_, guest_uid);
                else
                  DraftInfo::adTwiceConfirmDisagreeUid(&this->draft_info_, guest_uid);
                v17 = std::vector<unsigned int>::size(&this->draft_info_.twice_agree_uid_vec);
                v18 = std::vector<unsigned int>::size(&this->draft_info_.twice_disagree_uid_vec) + v17;
                v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                if ( v18 >= Scene::getPlayerCount(v19) )
                {
                  proto::DraftTwiceConfirmResultNotify::DraftTwiceConfirmResultNotify((proto::DraftTwiceConfirmResultNotify *const)(v4 + 192));
                  proto::DraftTwiceConfirmResultNotify::set_draft_id(
                    (proto::DraftTwiceConfirmResultNotify *const)(v4 + 192),
                    *(_DWORD *)(v4 + 48));
                  v20 = std::vector<unsigned int>::empty(&this->draft_info_.twice_agree_uid_vec);
                  proto::DraftTwiceConfirmResultNotify::set_is_all_argee(
                    (proto::DraftTwiceConfirmResultNotify *const)(v4 + 192),
                    v20);
                  v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  Scene::notifyAllPlayer<proto::DraftTwiceConfirmResultNotify>(
                    v21,
                    (proto::DraftTwiceConfirmResultNotify *)(v4 + 192),
                    0);
                  proto::DraftTwiceConfirmResultNotify::~DraftTwiceConfirmResultNotify((proto::DraftTwiceConfirmResultNotify *const)(v4 + 192));
                }
                v22 = std::vector<unsigned int>::size(&this->draft_info_.twice_agree_uid_vec);
                v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                if ( v22 >= Scene::getPlayerCount(v23)
                  && (unsigned int)PlayerDraftComp::onDraftProgressFinish(this, *(_DWORD *)(v4 + 48)) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v4 + 192),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/draft/player_draft_comp.cpp",
                    "onGuestReplyDraftTwiceConfirm",
                    1178);
                  v24 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                          (common::milog::MiLogStream *const)(v4 + 192),
                          (const char (*)[50])"[DRAFT] onDraftProgressFinish failed , draft_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v4 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
                  v8 = -1;
                }
                else
                {
                  v8 = 0;
                }
                proto::DraftGuestReplyTwiceConfirmNotify::~DraftGuestReplyTwiceConfirmNotify((proto::DraftGuestReplyTwiceConfirmNotify *const)(v4 + 128));
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
          }
          std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 64));
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "onGuestReplyDraftTwiceConfirm",
            1126);
          v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  (common::milog::MiLogStream *const)(v4 + 192),
                  (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
          v8 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/draft/player_draft_comp.cpp",
          "onGuestReplyDraftTwiceConfirm",
          1119);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[36])"[DRAFT] draft is expired, draft_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        v8 = 9660;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "onGuestReplyDraftTwiceConfirm",
        1112);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)(v4 + 192),
             (const char (*)[32])"[DRAFT] draft stage incorrect: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "onGuestReplyDraftTwiceConfirm",
      1106);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[29])"[DRAFT] draft id not match: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v8 = -1;
  }
  result = v8;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1186: range 00000000175F56C6-00000000175F59BF
void __cdecl PlayerDraftComp::onTwiceConfirmTimer(PlayerDraftComp *const this, uint64_t now_ms)
{
  DraftExcelConfigMgr *p_draft_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  const data::DraftExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->draft_info_);
  }
  if ( this->draft_info_.draft_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_info_.stage >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->draft_info_.stage);
    }
    if ( this->draft_info_.stage == TWICE_CONFIRMING )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v6);
      p_draft_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.draft_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->draft_info_);
      }
      config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(p_draft_config_mgr, this->draft_info_.draft_id);
      std::shared_ptr<Config>::~shared_ptr(&v6);
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_exec_when_count_down_over >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)config_ptr + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_exec_when_count_down_over >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(&config_ptr->is_exec_when_count_down_over);
        }
        if ( !config_ptr->is_exec_when_count_down_over )
          goto LABEL_18;
        if ( *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->draft_info_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->draft_info_);
        }
        if ( (unsigned int)PlayerDraftComp::onDraftProgressFinish(this, this->draft_info_.draft_id) )
        {
          common::milog::MiLogStream::create(
            &v7,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "onTwiceConfirmTimer",
            1201);
          v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                 &v7,
                 (const char (*)[50])"[DRAFT] onDraftProgressFinish failed , draft_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->draft_info_.draft_id);
          common::milog::MiLogStream::~MiLogStream(&v7);
        }
        else
        {
LABEL_18:
          DraftInfo::clear(&this->draft_info_);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v7,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "onTwiceConfirmTimer",
          1194);
        v3 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v7,
               (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->draft_info_.draft_id);
        common::milog::MiLogStream::~MiLogStream(&v7);
      }
    }
  }
};

// Line 1211: range 00000000175F607E-00000000175F677E
__int64 __fastcall PlayerDraftComp::transferPlayerToDraftPos(PlayerDraftComp *const this, uint32_t draft_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  World *v8; // r14
  Scene *v9; // r14
  __int64 result; // rax
  const data::DraftExcelConfig *config_ptr; // [rsp+18h] [rbp-168h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-160h] BYREF
  PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> p___f; // [rsp+40h] [rbp-140h] BYREF
  char v14[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 8 idx:1246 64 4 13 draft_id:1210 80 16 14 scene_ptr:1232 112 16 14 world_ptr:1239 144 40 "
                        "20 transfer_player:1248";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::transferPlayerToDraftPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 64) = draft_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 112));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                 &v5->design_config.txt_config_mgr.draft_config_mgr,
                 *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exec >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->exec >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->exec);
    }
    if ( config_ptr->exec == DRAFT_EXEC_HIDE_AND_SEEK
      || config_ptr->exec == DRAFT_EXEC_AUTOSTART_GALLERY
      || config_ptr->exec == DRAFT_EXEC_CHAR_AMUSEMENT
      || config_ptr->exec == DRAFT_EXEC_COIN_COLLECT
      || config_ptr->exec == DRAFT_EXEC_BRICK_BREAKER
      || config_ptr->exec == DRAFT_EXEC_LAN_V3_BOAT_MULTI )
    {
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "transferPlayerToDraftPos",
          1235);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v12,
          (const char (*)[26])"[DRAFT] scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v12);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 112));
        if ( std::operator==<World>((const std::shared_ptr<World> *)(v2 + 112), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "transferPlayerToDraftPos",
            1242);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v12, (const char (*)[18])off_261623C0);
          common::milog::MiLogStream::~MiLogStream(&v12);
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(v2 + 48) = 0;
          *(_QWORD *)(v2 + 144) = this;
          *(_QWORD *)(v2 + 152) = v2 + 48;
          *(_DWORD *)(v2 + 160) = *(_DWORD *)(v2 + 64);
          std::shared_ptr<Scene>::shared_ptr(
            (std::shared_ptr<Scene> *const)(v2 + 168),
            (const std::shared_ptr<Scene> *)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->invite_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->invite_type);
          }
          if ( config_ptr->invite_type == DRAFT_INVITE_WORLD )
          {
            v8 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::Player(
              &p___f,
              (const PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *)(v2 + 144));
            std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v12,
              &p___f);
            World::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v12);
          }
          else
          {
            v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::Player(
              &p___f,
              (const PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *)(v2 + 144));
            std::function<ForeachPolicy ()(Player &)>::function<PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v12,
              &p___f);
            Scene::foreachPlayer(v9, (std::function<ForeachPolicy(Player&)> *)&v12);
          }
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v12);
          PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::~Player(&p___f);
          v7 = 0;
          PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::~Player((PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *const)(v2 + 144));
        }
        std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 112));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "transferPlayerToDraftPos",
      1215);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v12,
           (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  result = v7;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1248: range 00000000175F59C0-00000000175F5F0F
ForeachPolicy __cdecl PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerDraftComp *this; // rdi
  uint32_t *idx; // rdx
  uint32_t v7; // esi
  common::milog::MiLogStream *v8; // rax
  ForeachPolicy result; // eax
  Scene *v10; // r14
  uint32_t Uid; // eax
  PlayerSceneComp *SceneComp; // r14
  Scene *v13; // rax
  bool v14; // bl
  common::milog::MiLogStream *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int val; // [rsp+1Ch] [rbp-154h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-130h] BYREF
  char v22[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 12 8 pos:1250 80 12 8 rot:1251 112 48 20 player_location:1258";
  *(_QWORD *)(v2 + 16) = PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  Vector3::Vector3((Vector3 *const)(v2 + 48), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v2 + 80), 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__idx >> 3) + 0x7FFF8000) )
  {
    this = (PlayerDraftComp *)&__closure->__idx;
    __asan_report_load8(&__closure->__idx);
  }
  idx = __closure->__idx;
  if ( *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
  {
    this = (PlayerDraftComp *)__closure->__idx;
    __asan_report_load4(this);
  }
  v7 = *idx;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (PlayerDraftComp *)&__closure->__draft_id;
    __asan_report_load4(&__closure->__draft_id);
  }
  if ( PlayerDraftComp::findDraftPos(this, __closure->__draft_id, (Vector3 *)(v2 + 48), (Vector3 *)(v2 + 80), v7) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "operator()",
      1254);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v20,
           (const char (*)[41])"[DRAFT] findBornPosRot failed, draft_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__closure->__draft_id);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = FOREACH_CONTINUE;
  }
  else
  {
    ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v2 + 112));
    *(_QWORD *)(v2 + 112) = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 120) = *(_DWORD *)(v2 + 56);
    *(_QWORD *)(v2 + 124) = *(_QWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 88);
    *(_QWORD *)(v2 + 136) = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 56);
    *(_QWORD *)(v2 + 148) = *(_QWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 156) = *(_DWORD *)(v2 + 88);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__scene_ptr);
    Uid = Player::getUid(player);
    Scene::setPlayerLocation(v10, Uid, (const ScenePlayerLocation *)(v2 + 112));
    SceneComp = Player::getSceneComp(player);
    TransferReason::TransferReason(&p_reason, ENTER_REASON_DRAFT_TRANSFER);
    v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__scene_ptr);
    v14 = PlayerSceneComp::jumpToScene(
            SceneComp,
            v13,
            (const Vector3 *)(v2 + 48),
            (const Vector3 *)(v2 + 80),
            0,
            &p_reason) != 0;
    TransferReason::~TransferReason(&p_reason);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "operator()",
        1267);
      v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v20,
              (const char (*)[33])"[DRAFT] jumpToScene failed, uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__idx >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__idx);
      v16 = (unsigned __int64)__closure->__idx;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load4(__closure->__idx);
      ++*(_DWORD *)v16;
      result = FOREACH_CONTINUE;
    }
  }
  if ( v22 == (char *)v2 )
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
  return result;
};

// Line 1248: range 0000000017606270-00000000176063BC
void __cdecl PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::Player(
        PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *const this,
        PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *a2)
{
  PlayerDraftComp *v2; // rdx
  uint32_t *idx; // rdx
  uint32_t draft_id; // ecx
  char v5; // al
  PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__idx >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__idx);
  idx = a2->__idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->__idx >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__idx, a2);
  this->__idx = idx;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__draft_id);
  }
  draft_id = a2->__draft_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->__draft_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(a2) = v5 != 0;
    __asan_report_store4(&this->__draft_id, a2, &this->__draft_id);
  }
  this->__draft_id = draft_id;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &v6->__scene_ptr);
};

// Line 1248: range 00000000175F5F30-00000000175F607C
void __cdecl PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::Player(
        PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *const this,
        const PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *a2)
{
  PlayerDraftComp *v2; // rdx
  uint32_t *idx; // rdx
  uint32_t draft_id; // ecx
  char v5; // al
  const PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__idx >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__idx);
  idx = a2->__idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->__idx >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__idx, a2);
  this->__idx = idx;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__draft_id);
  }
  draft_id = a2->__draft_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->__draft_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(a2) = v5 != 0;
    __asan_report_store4(&this->__draft_id, a2, &this->__draft_id);
  }
  this->__draft_id = draft_id;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &v6->__scene_ptr);
};

// Line 1248: range 00000000175F5F10-00000000175F5F2E
void __cdecl PlayerDraftComp::transferPlayerToDraftPos(unsigned int)::{lambda(Player &)#1}::~Player(
        PlayerDraftComp::transferPlayerToDraftPos::<lambda(Player&)> *const this)
{
  std::shared_ptr<Scene>::~shared_ptr(&this->__scene_ptr);
};

// Line 1289: range 00000000175F6780-00000000175F6FAF
__int64 __fastcall PlayerDraftComp::findDraftPos(
        PlayerDraftComp *const this,
        uint32_t draft_id,
        unsigned __int64 pos,
        unsigned __int64 rot,
        uint32_t idx)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<data::DraftTransferConfig>::size_type v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  const data::DraftExcelConfig *config_ptr; // [rsp+20h] [rbp-E0h]
  const data::DraftTransferConfig *transfer_config; // [rsp+28h] [rbp-D8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-D0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 13 draft_id:1288 48 4 8 idx:1288 64 16 14 scene_ptr:1290";
  *(_QWORD *)(v5 + 16) = PlayerDraftComp::findDraftPos;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 32) = draft_id;
  *(_DWORD *)(v5 + 48) = idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "findDraftPos",
      1293);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v27,
      (const char (*)[26])"[DRAFT] scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v8 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                   &v9->design_config.txt_config_mgr.draft_config_mgr,
                   *(_DWORD *)(v5 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( config_ptr )
    {
      v11 = *(unsigned int *)(v5 + 48);
      if ( v11 < std::vector<data::DraftTransferConfig>::size(&config_ptr->transfer_config) )
      {
        transfer_config = std::vector<data::DraftTransferConfig>::operator[](
                            &config_ptr->transfer_config,
                            *(unsigned int *)(v5 + 48));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v26);
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.lua_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&transfer_config->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&transfer_config->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&transfer_config->group_id);
        }
        group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, transfer_config->group_id);
        std::shared_ptr<Config>::~shared_ptr(&v26);
        if ( group_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&transfer_config->config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)transfer_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer_config->config_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&transfer_config->config_id);
          }
          point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                      group_script_config_ptr,
                                      transfer_config->config_id);
          if ( point_script_config_ptr )
          {
            if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(pos, 12LL);
            }
            if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                  + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                     + 3) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
            }
            *(_QWORD *)pos = *(_QWORD *)&point_script_config_ptr->pos.x;
            *(float *)(pos + 8) = point_script_config_ptr->pos.z;
            if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(rot, 12LL);
            }
            if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                     + 3) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
            }
            *(_QWORD *)rot = *(_QWORD *)&point_script_config_ptr->rot.x;
            *(float *)(rot + 8) = point_script_config_ptr->rot.z;
            v8 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/draft/player_draft_comp.cpp",
              "findDraftPos",
              1318);
            v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v27,
                    (const char (*)[44])"[DRAFT] findPointConfig failed, config_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &transfer_config->config_id);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v8 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "findDraftPos",
            1311);
          v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v27,
                  (const char (*)[49])"[DRAFT] findGroupScriptConfig failed, group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &transfer_config->group_id);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v8 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "findDraftPos",
          1304);
        v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v27,
                (const char (*)[48])"[DRAFT] transfer index out of range, draft_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v5 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v8 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "findDraftPos",
        1299);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v27,
              (const char (*)[43])"[DRAFT] draft config not found, draft_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v8 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  result = v8;
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1327: range 00000000175F6FB0-00000000175F7AEF
__int64 __fastcall PlayerDraftComp::transferPlayerToAutoStartGalleryPos(
        PlayerDraftComp *const this,
        uint32_t gallery_id,
        const std::set<unsigned int> *uid_set)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::set<unsigned int>::size_type v9; // r15
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // eax
  std::vector<unsigned int>::const_reference v18; // rax
  _DWORD *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  Vector3 *p_pos; // r15
  Scene *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  const Vector3 *rot; // [rsp+8h] [rbp-1C8h]
  PlayerSceneComp *SceneComp; // [rsp+10h] [rbp-1C0h]
  uint32_t idx; // [rsp+3Ch] [rbp-194h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-188h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+50h] [rbp-180h]
  const std::vector<unsigned int> *config_id_vec; // [rsp+58h] [rbp-178h]
  const GroupScriptConfig *group_config_ptr; // [rsp+60h] [rbp-170h]
  const std::set<unsigned int> *__for_range; // [rsp+68h] [rbp-168h]
  const unsigned int *uid; // [rsp+70h] [rbp-160h]
  const PointScriptConfig *point_config_ptr; // [rsp+78h] [rbp-158h]
  common::milog::MiLogStream v40; // [rsp+80h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+A0h] [rbp-130h] BYREF
  char v42[240]; // [rsp+E0h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 13 group_id:1349 64 4 14 config_id:1378 80 4 15 gallery_id:1326 96 16 14 scene_ptr:1328 1"
                        "28 16 14 world_ptr:1335 160 16 15 player_ptr:1367";
  *(_QWORD *)(v4 + 16) = PlayerDraftComp::transferPlayerToAutoStartGalleryPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 80) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/draft/player_draft_comp.cpp",
      "transferPlayerToAutoStartGalleryPos",
      1331);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v40,
      (const char (*)[26])"[DRAFT] scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 128));
    if ( std::operator==<World>((const std::shared_ptr<World> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/draft/player_draft_comp.cpp",
        "transferPlayerToAutoStartGalleryPos",
        1338);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v40,
        (const char (*)[26])"[DRAFT] world_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v3 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 160));
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                             &v7->design_config.txt_config_mgr.gallery_config_mgr,
                             *(_DWORD *)(v4 + 80));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
      if ( gallery_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&gallery_config_ptr->transfer_group_id);
        }
        *(_DWORD *)(v4 + 48) = gallery_config_ptr->transfer_group_id;
        config_id_vec = &gallery_config_ptr->transfer_config_id_list;
        v9 = std::vector<unsigned int>::size(&gallery_config_ptr->transfer_config_id_list);
        if ( v9 >= std::set<unsigned int>::size(uid_set) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 160));
          v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          group_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                               &v11->design_config.lua_config_mgr,
                               *(_DWORD *)(v4 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
          if ( group_config_ptr )
          {
            idx = 0;
            __for_range = uid_set;
            __for_begin._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
            __for_end._M_node = std::set<unsigned int>::end(uid_set)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
              v13 = (unsigned int)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(uid);
              }
              World::findPlayerPtr((World *const)(v4 + 160), v13);
              if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "transferPlayerToAutoStartGalleryPos",
                  1370);
                v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v40,
                        (const char (*)[23])"player not found, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, uid);
                common::milog::MiLogStream::~MiLogStream(&v40);
                v15 = 0;
              }
              else if ( idx < std::vector<unsigned int>::size(config_id_vec) )
              {
                v17 = idx++;
                v18 = std::vector<unsigned int>::operator[](config_id_vec, v17);
                v19 = v18;
                if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v18);
                }
                *(_DWORD *)(v4 + 64) = *v19;
                point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v4 + 64));
                if ( point_config_ptr )
                {
                  v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                  SceneComp = Player::getSceneComp(v23);
                  TransferReason::TransferReason(&p_reason, ENTER_REASON_DRAFT_TRANSFER);
                  rot = &point_config_ptr->rot;
                  p_pos = &point_config_ptr->pos;
                  v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  LOBYTE(p_pos) = PlayerSceneComp::jumpToScene(SceneComp, v25, p_pos, rot, 0, &p_reason) != 0;
                  TransferReason::~TransferReason(&p_reason);
                  if ( (_BYTE)p_pos )
                  {
                    common::milog::MiLogStream::create(
                      &v40,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/draft/player_draft_comp.cpp",
                      "transferPlayerToAutoStartGalleryPos",
                      1387);
                    v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            &v40,
                            (const char (*)[25])"jump to scene fail, uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, uid);
                    common::milog::MiLogStream::~MiLogStream(&v40);
                    v15 = 0;
                  }
                  else
                  {
                    v15 = 2;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v40,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/draft/player_draft_comp.cpp",
                    "transferPlayerToAutoStartGalleryPos",
                    1382);
                  v20 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          &v40,
                          (const char (*)[35])"point config not found, group_id: ");
                  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v20,
                          (const unsigned int *)(v4 + 48));
                  v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v21,
                          (const char (*)[14])", config_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v4 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v40);
                  v3 = -1;
                  v15 = 1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/draft/player_draft_comp.cpp",
                  "transferPlayerToAutoStartGalleryPos",
                  1375);
                v16 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                        &v40,
                        (const char (*)[57])"transfer point config_id vec is not enough, gallery_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 80));
                common::milog::MiLogStream::~MiLogStream(&v40);
                v3 = -1;
                v15 = 1;
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
              if ( v15 && v15 != 2 )
                goto LABEL_39;
              std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
            }
            v3 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/draft/player_draft_comp.cpp",
              "transferPlayerToAutoStartGalleryPos",
              1359);
            v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v40,
                    (const char (*)[42])"group script config not found, group_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v40);
            v3 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/draft/player_draft_comp.cpp",
            "transferPlayerToAutoStartGalleryPos",
            1353);
          v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v40,
                  (const char (*)[57])"transfer point config_id vec is not enough, gallery_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v40);
          v3 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/draft/player_draft_comp.cpp",
          "transferPlayerToAutoStartGalleryPos",
          1345);
        v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v40,
               (const char (*)[39])"gallery config not found, gallery_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v40);
        v3 = -1;
      }
    }
LABEL_39:
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 128));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  result = v3;
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1393: range 000000001760F550-000000001760F573
void __cdecl GLOBAL__sub_I_merge_merge_foundation_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 1393: range 000000001760DF58-000000001760EE36
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::exception_ptr *v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  char *v12; // rcx
  char *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  char *v16; // rcx
  char v17; // dl
  char *v18; // rcx
  char v19; // dl
  __int64 v20; // rdx
  const std::piecewise_construct_t *v21; // rdx
  const boost::system::error_category *ssl_category; // rax
  const boost::system::error_category *stream_category; // rax
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  char v26; // dl
  __int64 v27; // rdx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  char v30; // dl
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  char v34; // dl
  __int64 v35; // rdx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  char v38; // dl
  __int64 v39; // rdx
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  char v42; // dl
  __int64 v43; // rdx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  char v46; // dl
  __int64 v47; // rdx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  char v50; // dl
  __int64 v51; // rdx
  const char *v52; // rcx
  _BYTE *v53; // rcx
  _BYTE *v54; // rcx
  char v55; // dl
  __int64 v56; // rdx
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  char v59; // dl
  __int64 v60; // rdx
  _BYTE *v61; // rcx
  _BYTE *v62; // rcx
  char v63; // dl
  __int64 v64; // rdx
  const char *v65; // rcx
  _BYTE *v66; // rcx
  _BYTE *v67; // rcx
  char v68; // dl
  __int64 v69; // rdx
  _BYTE *v70; // rcx
  _BYTE *v71; // rcx
  char v72; // dl
  __int64 v73; // rdx
  _BYTE *v74; // rcx
  _BYTE *v75; // rcx
  char v76; // dl
  __int64 v77; // rdx
  _BYTE *v78; // rcx
  _BYTE *v79; // rcx
  char v80; // dl
  __int64 v81; // rdx
  _BYTE *v82; // rcx
  _BYTE *v83; // rcx
  char v84; // dl
  __int64 v85; // rdx
  luabind::detail::class_id v86; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_foundation_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v7 = (const boost::exception_ptr *)5;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      v12 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
            v7,
            v15);
        *v13 = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16(&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>();
        v7 = &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
      v17 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                     + 0x7FFF8000);
      LOBYTE(v7) = v17 != 0;
      if ( v17 != 0
        && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v17 )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
      }
      if ( !*v16 )
      {
        v18 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store1(
            &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
            v7,
            v20);
        *v18 = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16(&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>();
        v7 = &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
          &_dso_handle);
      }
      v21 = boost::container::std_piecewise_construct_holder<0>::dummy;
      if ( *(_BYTE *)(((unsigned __int64)&boost::container::piecewise_construct >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::container::piecewise_construct, v7);
      boost::container::piecewise_construct = v21;
      ssl_category = boost::asio::error::get_ssl_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::ssl_category >> 3) + 0x7FFF8000) )
        ssl_category = (const boost::system::error_category *)__asan_report_store8(
                                                                &boost::asio::error::ssl_category,
                                                                v7);
      boost::asio::error::ssl_category = ssl_category;
      stream_category = boost::asio::ssl::error::get_stream_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::ssl::error::stream_category >> 3) + 0x7FFF8000) )
        stream_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::ssl::error::stream_category,
                                                                   v7);
      boost::asio::ssl::error::stream_category = stream_category;
      v24 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v24 )
      {
        v25 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v26 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v26 != 0;
        v27 = (v26 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v26);
        if ( (_BYTE)v27 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v27);
        *v25 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v28 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v28 )
      {
        v29 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        v30 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v30 != 0;
        v31 = (v30 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= v30);
        if ( (_BYTE)v31 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
            v7,
            v31);
        *v29 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v32 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v32 )
      {
        v33 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        v34 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v34 != 0;
        v35 = (v34 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= v34);
        if ( (_BYTE)v35 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
            v7,
            v35);
        *v33 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v36 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v36 )
      {
        v37 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        v38 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v38 != 0;
        v39 = (v38 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= v38);
        if ( (_BYTE)v39 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
            v7,
            v39);
        *v37 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v40 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_);
      }
      if ( !*v40 )
      {
        v41 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
        v42 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v42 != 0;
        v43 = (v42 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= v42);
        if ( (_BYTE)v43 )
          __asan_report_store1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_, v7, v43);
        *v41 = 1;
        boost::asio::ssl::detail::openssl_init<true>::openssl_init(&boost::asio::ssl::detail::openssl_init<true>::instance_);
        v7 = (const boost::exception_ptr *)&boost::asio::ssl::detail::openssl_init<true>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
          &boost::asio::ssl::detail::openssl_init<true>::instance_,
          &_dso_handle);
      }
      v44 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v44 )
      {
        v45 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v46 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v46 != 0;
        v47 = (v46 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v46);
        if ( (_BYTE)v47 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v47);
        *v45 = 1;
        v7 = (const boost::exception_ptr *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v48 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v48 )
      {
        v49 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v50 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v50 != 0;
        v51 = (v50 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v50);
        if ( (_BYTE)v51 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v51);
        *v49 = 1;
        v52 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v52;
      }
      v53 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v53 )
      {
        v54 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v55 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v55 != 0;
        v56 = (v55 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v55);
        if ( (_BYTE)v56 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v56);
        *v54 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v57 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v57 )
      {
        v58 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v59 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v59 != 0;
        v60 = (v59 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v59);
        if ( (_BYTE)v60 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v60);
        *v58 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v61 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v61 )
      {
        v62 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v63 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v63 != 0;
        v64 = (v63 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v63);
        if ( (_BYTE)v64 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v64);
        *v62 = 1;
        v65 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v65;
      }
      v66 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v66 )
      {
        v67 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        v68 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v68 != 0;
        v69 = (v68 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= v68);
        if ( (_BYTE)v69 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
            v7,
            v69);
        *v67 = 1;
        boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v70 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v70 )
      {
        v71 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        v72 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v72 != 0;
        v73 = (v72 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= v72);
        if ( (_BYTE)v73 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
            v7,
            v73);
        *v71 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v74 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
      }
      if ( !*v74 )
      {
        v75 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        v76 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v76 != 0;
        v77 = (v76 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= v76);
        if ( (_BYTE)v77 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
            v7,
            v77);
        *v75 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
          &_dso_handle);
      }
      v78 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v78 )
      {
        v79 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        v80 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v80 != 0;
        v81 = (v80 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= v80);
        if ( (_BYTE)v81 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
            v7,
            v81);
        *v79 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
      v82 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v82 )
      {
        v83 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        v84 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v84 != 0;
        v85 = (v84 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= v84);
        if ( (_BYTE)v85 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id, v7, v85);
        *v83 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v86 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v86 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext>::id,
                  &`typeinfo for'ScriptContext);
        luabind::detail::registered_class<ScriptContext>::id = v86;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 1393: range 000000001760F43D-000000001760F54F
// local variable allocation has failed, the output may be wrong!
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  char v4; // dl
  __int64 v5; // rdx
  luabind::detail::class_id v6; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_foundation_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        v4 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v4 != 0;
        v5 = (v4 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= v4);
        if ( (_BYTE)v5 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id,
            *(_QWORD *)&__priority,
            v5);
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v6 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v6 = __asan_report_store8(
                 &luabind::detail::registered_class<ScriptContext *>::id,
                 &`typeinfo for'ScriptContext *);
        luabind::detail::registered_class<ScriptContext *>::id = v6;
      }
    }
    __asan_after_dynamic_init();
  }
};
