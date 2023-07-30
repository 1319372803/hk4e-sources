// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/vintage_hunting_gallery.cpp

// Line 26: range 000000001804A32C-000000001804A38A
int32_t __cdecl BaseStageInfo::toClient(const BaseStageInfo *const this, proto::SceneGalleryVintageHuntingInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryVintageHuntingInfo::set_stage_id(info, this->stage_id);
  return 0;
};

// Line 33: range 000000001804A38C-000000001804A3D8
void __cdecl BaseStageInfo::clear(BaseStageInfo *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1, (_BYTE)this + 8);
  }
  this->stage_id = 0;
};

// Line 38: range 000000001804A3DA-000000001804A543
int32_t __cdecl VintageHuntingFirstStageInfo::toClient(
        const VintageHuntingFirstStageInfo *const this,
        proto::SceneGalleryVintageHuntingInfo *info)
{
  proto::VintageHuntingFirstStageInfo *first_stage_info; // [rsp+18h] [rbp-8h]

  BaseStageInfo::toClient((const BaseStageInfo *const)this, info);
  first_stage_info = proto::SceneGalleryVintageHuntingInfo::mutable_first_stage_info(info);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingFirstStageInfo::set_score(first_stage_info, this->score);
  if ( *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingFirstStageInfo::set_timid_cnt(first_stage_info, this->timid_cnt);
  if ( *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingFirstStageInfo::set_brutal_cnt(first_stage_info, this->brutal_cnt);
  if ( *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingFirstStageInfo::set_elite_cnt(first_stage_info, this->elite_cnt);
  return 0;
};

// Line 49: range 000000001804A544-000000001804A666
void __cdecl VintageHuntingFirstStageInfo::clear(VintageHuntingFirstStageInfo *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl

  BaseStageInfo::clear((BaseStageInfo *const)this);
  v1 = (((_BYTE)this + 12) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->score, v1, v2);
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timid_cnt, v1, (_BYTE)this + 16);
  }
  this->timid_cnt = 0;
  v3 = (((_BYTE)this + 20) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->brutal_cnt, v3, v4);
  this->brutal_cnt = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elite_cnt, v3, (_BYTE)this + 24);
  }
  this->elite_cnt = 0;
};

// Line 58: range 000000001804A668-000000001804A793
int32_t __cdecl VintageHuntingSecondStageInfo::toClient(
        const VintageHuntingSecondStageInfo *const this,
        proto::SceneGalleryVintageHuntingInfo *info)
{
  proto::VintageHuntingSecondStageInfo *second_stage_info; // [rsp+18h] [rbp-8h]

  BaseStageInfo::toClient((const BaseStageInfo *const)this, info);
  second_stage_info = proto::SceneGalleryVintageHuntingInfo::mutable_second_stage_info(info);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingSecondStageInfo::set_capture_animal_num(second_stage_info, this->capture_animal_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingSecondStageInfo::set_left_num(second_stage_info, this->left_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::VintageHuntingSecondStageInfo::set_total_num(second_stage_info, this->total_num);
  return 0;
};

// Line 68: range 000000001804A794-000000001804A8F0
void __cdecl VintageHuntingSecondStageInfo::clear(VintageHuntingSecondStageInfo *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  bool v3; // dl

  BaseStageInfo::clear((BaseStageInfo *const)this);
  v1 = (((_BYTE)this + 12) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->capture_animal_num, v1, v2);
  this->capture_animal_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_no_battle_animal_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_no_battle_animal_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_no_battle_animal_num, v1, (_BYTE)this + 16);
  }
  this->capture_no_battle_animal_num = 0;
  std::set<unsigned int>::clear(&this->capture_animal_type_set);
  std::map<unsigned int,unsigned int>::clear(&this->animal_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->no_battle_animal_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_num, v1, (_BYTE)this - 88);
  }
  this->left_num = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->total_num, (((_BYTE)this - 84) & 7u) + 3, v3);
  this->total_num = 0;
};

// Line 80: range 000000001804A8F2-000000001804A92B
int32_t __cdecl VintageHuntingThirdStageInfo::toClient(
        const VintageHuntingThirdStageInfo *const this,
        proto::SceneGalleryVintageHuntingInfo *info)
{
  BaseStageInfo::toClient((const BaseStageInfo *const)this, info);
  proto::SceneGalleryVintageHuntingInfo::mutable_third_stage_info(info);
  return 0;
};

// Line 88: range 000000001804A92C-000000001804A98C
void __cdecl VintageHuntingThirdStageInfo::clear(VintageHuntingThirdStageInfo *const this)
{
  bool v1; // dl

  BaseStageInfo::clear((BaseStageInfo *const)this);
  v1 = *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->boss_weak_times, (((_BYTE)this + 12) & 7u) + 3, v1);
  this->boss_weak_times = 0;
};

// Line 95: range 000000001804A98E-000000001804AC1A
std::shared_ptr<BaseStageInfo> *__fastcall StageInfoFactory::initStageInfo(
        std::shared_ptr<BaseStageInfo> *stage_id,
        __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<VintageHuntingFirstStageInfo> __r; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<VintageHuntingSecondStageInfo> v9; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<VintageHuntingThirdStageInfo> v10; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 stage_id:94";
  *(_QWORD *)(v2 + 16) = StageInfoFactory::initStageInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  if ( *(_WORD *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    __asan_report_store16(stage_id, a2);
  stage_id->_M_ptr = 0LL;
  stage_id->_M_refcount._M_pi = 0LL;
  v5 = *(_DWORD *)(v2 + 32);
  if ( v5 == 3 )
  {
    common::tools::perf::make_shared<VintageHuntingThirdStageInfo,unsigned int &>(
      (unsigned int *)&v10,
      (unsigned int *)(v2 + 32));
    std::shared_ptr<BaseStageInfo>::operator=<VintageHuntingThirdStageInfo>(stage_id, &v10);
    std::shared_ptr<VintageHuntingThirdStageInfo>::~shared_ptr(&v10);
  }
  else
  {
    if ( v5 > 3 )
      goto LABEL_14;
    if ( v5 == 1 )
    {
      common::tools::perf::make_shared<VintageHuntingFirstStageInfo,unsigned int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v2 + 32));
      std::shared_ptr<BaseStageInfo>::operator=<VintageHuntingFirstStageInfo>(stage_id, &__r);
      std::shared_ptr<VintageHuntingFirstStageInfo>::~shared_ptr(&__r);
      goto LABEL_15;
    }
    if ( v5 == 2 )
    {
      common::tools::perf::make_shared<VintageHuntingSecondStageInfo,unsigned int &>(
        (unsigned int *)&v9,
        (unsigned int *)(v2 + 32));
      std::shared_ptr<BaseStageInfo>::operator=<VintageHuntingSecondStageInfo>(stage_id, &v9);
      std::shared_ptr<VintageHuntingSecondStageInfo>::~shared_ptr(&v9);
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "initStageInfo",
        109);
      v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v11,
             (const char (*)[47])"[VINTAGE] not support hunting stage, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
  }
LABEL_15:
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return stage_id;
};

// Line 117: range 000000001804AC1C-000000001804AD26
void __cdecl VintageHuntingGallery::toClient(VintageHuntingGallery *const this, proto::SceneGalleryInfo *client_info)
{
  unsigned __int64 v2; // rax
  void (__fastcall **v3)(unsigned __int64, proto::SceneGalleryVintageHuntingInfo *); // rdx
  proto::SceneGalleryVintageHuntingInfo *vintage_hunting_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  vintage_hunting_info = proto::SceneGalleryInfo::mutable_vintage_hunting_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryVintageHuntingInfo::set_stage_id(vintage_hunting_info, this->stage_id_);
  if ( std::operator!=<BaseStageInfo>(&this->stage_info_ptr_, 0LL) )
  {
    v2 = (unsigned __int64)std::__shared_ptr_access<BaseStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_info_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(void (__fastcall ***)(unsigned __int64, proto::SceneGalleryVintageHuntingInfo *))v2;
    if ( *(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL) )
      v2 = __asan_report_load8();
    (*v3)(v2, vintage_hunting_info);
  }
};

// Line 128: range 000000001804ADE0-000000001804C0E9
void __cdecl VintageHuntingGallery::onStart(VintageHuntingGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  VintageHuntingGallery *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Uid; // ecx
  char v10; // dl
  bool v11; // dl
  Player *v12; // rax
  __int64 v13; // rsi
  std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ActivityId; // edx
  char v18; // al
  ActivityVintageExcelConfigMgr *p_activity_vintage_config_mgr; // rcx
  uint32_t HuntingStageIdByGalleryId; // ecx
  char v21; // dl
  __int64 gallery_id; // rsi
  bool v23; // dl
  common::milog::MiLogStream *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // dl
  bool v28; // dl
  ActivityVintageExcelConfigMgr *v29; // rcx
  common::milog::MiLogStream *v30; // rax
  Player *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  Player *v33; // rax
  uint32_t AvatarComp; // eax
  Player *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint64_t Guid; // rax
  Player *v39; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint64_t v42; // rax
  bool v43; // r14
  common::milog::MiLogStream *v44; // rax
  Player *v45; // rax
  PlayerGroupLinkComp *GroupLinkComp; // rdi
  uint32_t activity_id; // ecx
  common::milog::MiLogStream *v48; // rcx
  common::milog::MiLogStream *v49; // rax
  uint32_t trial_avatar_vec; // [rsp+10h] [rbp-1F0h]
  std::vector<unsigned int> *trial_avatar_veca; // [rsp+10h] [rbp-1F0h]
  PlayerAvatarComp *trial_avatar_vecb; // [rsp+10h] [rbp-1F0h]
  std::allocator<long unsigned int> __a; // [rsp+23h] [rbp-1DDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-1DCh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-1D0h] BYREF
  const data::ActivityVintageHuntingExcelConfig *hunting_stage_config_ptr; // [rsp+38h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-1C0h]
  const unsigned int *group_bundle_id; // [rsp+48h] [rbp-1B8h]
  proto::TrialAvatarGrantRecord stage_id; // [rsp+50h] [rbp-1B0h] BYREF
  std::vector<long unsigned int> avatar_guid_vec; // [rsp+70h] [rbp-190h] BYREF
  std::function<void()> rollbacker; // [rsp+90h] [rbp-170h] BYREF
  char v64[336]; // [rsp+B0h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 19 trial_avatar_id:182 48 16 20 owner_player_ptr:135 80 16 16 activity_ptr:152 112 16 20 "
                        "trial_avatar_ptr:191 144 32 10 record:189 208 40 21 gallery_committer:129";
  *(_QWORD *)(v1 + 16) = VintageHuntingGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  std::function<void ()(void)>::function<VintageHuntingGallery::onStart(void)::{lambda(void)#1},void,void>(
    &rollbacker,
    (VintageHuntingGallery::onStart::<lambda()>)this);
  common::tools::ScopedCommitter::ScopedCommitter((common::tools::ScopedCommitter *const)(v1 + 208), &rollbacker);
  std::function<void ()(void)>::~function(&rollbacker);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, VintageHuntingGallery *))v5)(v1 + 48, v4);
  v6 = 0LL;
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&rollbacker,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "onStart",
      138);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)&rollbacker,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
  }
  else
  {
    VintageHuntingGallery::clearGalleryData(this);
    if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_resource_guard_);
    if ( this->is_resource_guard_ )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&rollbacker,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "onStart",
        146);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             (common::milog::MiLogStream *const)&rollbacker,
             (const char (*)[40])"[VINTAGE] is_resource_guard, owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_resource_guard_, 0LL, &this->is_resource_guard_);
      this->is_resource_guard_ = 1;
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      Uid = Player::getUid(v8);
      v10 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v10 != 0;
      v11 = v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10;
      if ( v11 )
        __asan_report_store4(&this->owner_uid_, v6, v11);
      this->owner_uid_ = Uid;
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      Player::getActivityComp(v12);
      PlayerActivityComp::findOpenningActivity<VintageActivity>((PlayerActivityComp *const)(v1 + 80));
      v13 = 0LL;
      if ( !std::operator==<VintageActivity>((const std::shared_ptr<VintageActivity> *)(v1 + 80), 0LL) )
      {
        v14 = std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        v13 = 0LL;
        if ( BaseActivity::isOpening((const BaseActivity *const)v14, 0) )
        {
          v16 = std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          ActivityId = BaseActivity::getActivityId((const BaseActivity *const)v16);
          v18 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
          if ( v18 != 0 && v18 <= 3 )
          {
            LOBYTE(v13) = v18 != 0;
            __asan_report_store4(&this->activity_id_, v13, ActivityId);
          }
          this->activity_id_ = ActivityId;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&stage_id.grant_reason_);
          p_activity_vintage_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&stage_id.grant_reason_)->design_config.txt_config_mgr.activity_vintage_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          gallery_id = this->gallery_id_;
          HuntingStageIdByGalleryId = ActivityVintageExcelConfigMgr::getHuntingStageIdByGalleryId(
                                        p_activity_vintage_config_mgr,
                                        gallery_id);
          v21 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
          LOBYTE(gallery_id) = v21 != 0;
          v23 = v21 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v21;
          if ( v23 )
            __asan_report_store4(&this->stage_id_, gallery_id, v23);
          this->stage_id_ = HuntingStageIdByGalleryId;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&stage_id.grant_reason_);
          if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( this->stage_id_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            StageInfoFactory::initStageInfo((std::shared_ptr<BaseStageInfo> *)&stage_id, this->stage_id_);
            std::shared_ptr<BaseStageInfo>::operator=(
              &this->stage_info_ptr_,
              (std::shared_ptr<BaseStageInfo> *)&stage_id);
            std::shared_ptr<BaseStageInfo>::~shared_ptr((std::shared_ptr<BaseStageInfo> *const)&stage_id);
            if ( std::operator==<BaseStageInfo>(0LL, &this->stage_info_ptr_) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&rollbacker,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                "onStart",
                168);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)&rollbacker,
                (const char (*)[31])"[VINTAGE] initStageInfo error.");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
            }
            else
            {
              v25 = (((_BYTE)this + 52) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              trial_avatar_vec = this->stage_id_;
              v26 = (__int64)std::__shared_ptr_access<BaseStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_info_ptr_);
              v27 = *(_BYTE *)(((unsigned __int64)(v26 + 8) >> 3) + 0x7FFF8000);
              LOBYTE(v25) = v27 != 0;
              v28 = v27 != 0 && v27 <= 3;
              if ( v28 )
                v26 = __asan_report_store4(v26 + 8, v25, v28);
              *(_DWORD *)(v26 + 8) = trial_avatar_vec;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&stage_id.grant_reason_);
              v29 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&stage_id.grant_reason_)->design_config.txt_config_mgr.activity_vintage_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              hunting_stage_config_ptr = data::ActivityVintageExcelConfigMgrBase::findActivityVintageHuntingExcelConfig(
                                           v29,
                                           this->stage_id_);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&stage_id.grant_reason_);
              if ( hunting_stage_config_ptr )
              {
                v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
                *(_DWORD *)(v1 + 32) = VintageHuntingGallery::getVintageHuntingTrialAvatarId(
                                         this,
                                         v31,
                                         &hunting_stage_config_ptr->trial_avatar_id_list);
                if ( *(_DWORD *)(v1 + 32) )
                {
                  proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v1 + 144));
                  proto::TrialAvatarGrantRecord::set_grant_reason(
                    (proto::TrialAvatarGrantRecord *const)(v1 + 144),
                    0xCu);
                  v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
                  AvatarComp = (unsigned int)Player::getAvatarComp(v33);
                  PlayerAvatarComp::createTrialAvatar(
                    (PlayerAvatarComp *const)(v1 + 112),
                    AvatarComp,
                    *(_DWORD *)(v1 + 32));
                  if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v1 + 112)) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&rollbacker,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                      "onStart",
                      194);
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      (common::milog::MiLogStream *const)&rollbacker,
                      (const char (*)[36])"[VINTAGE] createTrialAvatar nullptr");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                  }
                  else
                  {
                    v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
                    trial_avatar_veca = (std::vector<unsigned int> *)Player::getAvatarComp(v35);
                    std::shared_ptr<TrialAvatar>::shared_ptr(
                      (std::shared_ptr<TrialAvatar> *const)&stage_id,
                      (const std::shared_ptr<TrialAvatar> *)(v1 + 112));
                    PlayerAvatarComp::addTrialAvatar(
                      (PlayerAvatarComp *const)&stage_id.grant_reason_,
                      (TrialAvatarPtr *)trial_avatar_veca,
                      &stage_id);
                    LOBYTE(trial_avatar_veca) = std::operator==<TrialAvatar>(
                                                  0LL,
                                                  (const std::shared_ptr<TrialAvatar> *)&stage_id.grant_reason_);
                    std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&stage_id.grant_reason_);
                    std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&stage_id);
                    if ( (_BYTE)trial_avatar_veca )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&rollbacker,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                        "onStart",
                        199);
                      v36 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                              (common::milog::MiLogStream *const)&rollbacker,
                              (const char (*)[50])"[VINTAGE] addTrialAvatar failed, trial_avatar_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v1 + 32));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                    }
                    else
                    {
                      v37 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
                      Guid = Avatar::getGuid(v37);
                      if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
                        Guid = __asan_report_store8(&this->grant_trial_avatar_guid_, &stage_id.grant_reason_);
                      this->grant_trial_avatar_guid_ = Guid;
                      v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
                      trial_avatar_vecb = Player::getAvatarComp(v39);
                      v40 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
                      __for_end._M_current = (const unsigned int *)Avatar::getGuid(v40);
                      std::allocator<unsigned long>::allocator(&__a);
                      std::vector<unsigned long>::vector(
                        &avatar_guid_vec,
                        (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__for_end),
                        &__a);
                      v41 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
                      v42 = Avatar::getGuid(v41);
                      v43 = PlayerAvatarComp::lockTeamAvatar(
                              trial_avatar_vecb,
                              v42,
                              &avatar_guid_vec,
                              CHANGE_SCENE_TEAM_REASON_VINTAGE_HUNTING) != 0;
                      std::vector<unsigned long>::~vector(&avatar_guid_vec);
                      std::allocator<unsigned long>::~allocator(&__a);
                      if ( v43 )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&rollbacker,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                          "onStart",
                          205);
                        v44 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                (common::milog::MiLogStream *const)&rollbacker,
                                (const char (*)[50])"[VINTAGE] lockTeamAvatar failed, trial_avatar_id:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v44,
                          (const unsigned int *)(v1 + 32));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                      }
                      else
                      {
                        __for_range = &hunting_stage_config_ptr->group_bundle_id_list;
                        __for_begin._M_current = std::vector<unsigned int>::begin(&hunting_stage_config_ptr->group_bundle_id_list)._M_current;
                        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
                        while ( 1 )
                        {
                          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                  &__for_begin,
                                  &__for_end) )
                          {
                            common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v1 + 208));
                            BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)&rollbacker,
                              &common::milog::MiLogDefault::default_log_obj_,
                              1u,
                              "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                              "onStart",
                              226);
                            v49 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                                    (common::milog::MiLogStream *const)&rollbacker,
                                    (const char (*)[57])"[VINTAGE] vintage hunting gallery start succ, stage_id_:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v49,
                              &this->stage_id_);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                            goto LABEL_69;
                          }
                          group_bundle_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
                          v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
                          GroupLinkComp = Player::getGroupLinkComp(v45);
                          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                          {
                            GroupLinkComp = (PlayerGroupLinkComp *)&this->activity_id_;
                            __asan_report_load4();
                          }
                          activity_id = this->activity_id_;
                          if ( *(_BYTE *)(((unsigned __int64)group_bundle_id >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)group_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_bundle_id >> 3)
                                                                                              + 0x7FFF8000) )
                          {
                            GroupLinkComp = (PlayerGroupLinkComp *)group_bundle_id;
                            __asan_report_load4();
                          }
                          PlayerGroupLinkComp::registerGroupBundle(GroupLinkComp, *group_bundle_id, activity_id);
                          if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4();
                          }
                          if ( this->stage_ != START )
                            break;
                          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&rollbacker,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                          "onStart",
                          217);
                        v48 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                (common::milog::MiLogStream *const)&rollbacker,
                                (const char (*)[42])"[VINTAGE] gallery stage not right, stage:");
                        if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4();
                        }
                        val = this->stage_;
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                      }
                    }
                  }
LABEL_69:
                  std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v1 + 112));
                  proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v1 + 144));
                }
                else
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&rollbacker,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                    "onStart",
                    185);
                  v32 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                          (common::milog::MiLogStream *const)&rollbacker,
                          (const char (*)[60])"[VINTAGE] getVintageHuntingTrialAvatarId failed, stage_id_:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &this->stage_id_);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&rollbacker,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
                  "onStart",
                  177);
                v30 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        (common::milog::MiLogStream *const)&rollbacker,
                        (const char (*)[66])"[VINTAGE] findActivityVintageHuntingExcelConfig fails, stage_id_:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->stage_id_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&rollbacker,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
              "onStart",
              161);
            v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    (common::milog::MiLogStream *const)&rollbacker,
                    (const char (*)[41])"[VINTAGE] stage_id_ is zero, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
          }
        }
      }
      std::shared_ptr<VintageActivity>::~shared_ptr((std::shared_ptr<VintageActivity> *const)(v1 + 80));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 48));
  common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v1 + 208));
  if ( v64 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 129: range 000000001804AD28-000000001804ADDE
void __cdecl VintageHuntingGallery::onStart(void)::{lambda(void)#1}::operator()(
        const VintageHuntingGallery::onStart::<lambda()> *const __closure)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
    "operator()",
    131);
  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
    &v1,
    (const char (*)[35])"[VINTAGE] gallery play init failed");
  common::milog::MiLogStream::~MiLogStream(&v1);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  VintageHuntingGallery::stopPlay(__closure->__this, 1, GALLERY_STOP_PLAY_INIT_FAILED);
};

// Line 230: range 000000001804C0EA-000000001804CBF7
void __cdecl VintageHuntingGallery::onStop(VintageHuntingGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GameserverService *v5; // rax
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // rax
  uint32_t stage_id; // eax
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  unsigned int *p_elite_cnt; // r14
  unsigned int *p_timid_cnt; // r15
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // rax
  PlayerEventComp *v15; // r14
  common::milog::MiLogStream *v16; // rax
  int v17; // r14d
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 *p_capture_no_battle_animal_num; // r14
  uint32_t *p_total_num; // r15
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *v22; // rax
  PlayerEventComp *v23; // r14
  common::milog::MiLogStream *v24; // rax
  int v25; // r14d
  bool *p_boss_weak_times; // r8
  uint32_t v27; // eax
  Player *v28; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned int *v32; // [rsp-8h] [rbp-128h]
  unsigned int *v33; // [rsp+0h] [rbp-120h]
  unsigned int *v34; // [rsp+8h] [rbp-118h]
  uint32_t *p_brutal_cnt; // [rsp+8h] [rbp-118h]
  unsigned int *p_animal_count_map; // [rsp+8h] [rbp-118h]
  unsigned int *v37; // [rsp+10h] [rbp-110h]
  proto::GalleryStopReason reasona; // [rsp+14h] [rbp-10Ch]
  proto::GalleryStopReason reasonb; // [rsp+14h] [rbp-10Ch]
  proto::GalleryStopReason reasonc; // [rsp+14h] [rbp-10Ch]
  VintageHuntingGallery *thisa; // [rsp+18h] [rbp-108h]
  unsigned int *v42; // [rsp+20h] [rbp-100h]
  unsigned __int64 *v43; // [rsp+28h] [rbp-F8h] BYREF
  uint32_t v44; // [rsp+30h] [rbp-F0h] BYREF
  uint32_t now_time; // [rsp+34h] [rbp-ECh]
  unsigned int __args_0[2]; // [rsp+38h] [rbp-E8h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v48; // [rsp+50h] [rbp-D0h] BYREF
  unsigned int v49[44]; // [rsp+70h] [rbp-B0h] BYREF

  thisa = this;
  HIDWORD(v37) = reason;
  v2 = (unsigned __int64)v49;
  v33 = v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 player_ptr:236 64 16 19 third_stage_ptr:280 96 16 13 event_ptr:288";
  *(_QWORD *)(v2 + 16) = VintageHuntingGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_resource_guard_);
  if ( this->is_resource_guard_ )
    VintageHuntingGallery::recycleGalleryResource(this);
  v5 = ServiceBox::findService<GameserverService>();
  v6 = (unsigned int)GameserverService::getGameThreadLocal(v5) + 16;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 32), v6);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "onStop",
      239);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v48,
           (const char (*)[40])"[VINTAGE] findPlayer failed, owner_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->owner_uid_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_id = this->stage_id_;
  if ( stage_id == 3 )
  {
    std::dynamic_pointer_cast<VintageHuntingThirdStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v2 + 64));
    if ( std::operator==<VintageHuntingThirdStageInfo>(
           0LL,
           (const std::shared_ptr<VintageHuntingThirdStageInfo> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "onStop",
        283);
      v24 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
              &v48,
              (const char (*)[77])"[VINTAGE] dynamic_pointer_cast VintageHuntingThirdStageInfo fails, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v25 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      now_time = Scene::getSceneTimeSeconds(this->scene_);
      HIBYTE(v43) = reason == GALLERY_STOP_FINISHED;
      p_boss_weak_times = (bool *)&std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->boss_weak_times;
      if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( now_time > this->end_time_ )
        v27 = 0;
      else
        v27 = this->end_time_ - now_time;
      v44 = v27;
      common::tools::perf::make_shared<GalleryVintageHuntingStageThreeSettleEvent,unsigned int &,unsigned int &,unsigned int,unsigned int &,bool>(
        (unsigned int *)(v2 + 96),
        &this->activity_id_,
        &this->stage_id_,
        &v44,
        p_boss_weak_times,
        (unsigned int *)((char *)&v43 + 7),
        v49,
        v34,
        v37,
        (bool *)this);
      v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v28);
      std::shared_ptr<BaseEvent>::shared_ptr<GalleryVintageHuntingStageThreeSettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<GalleryVintageHuntingStageThreeSettleEvent> *)(v2 + 96));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      VintageHuntingGallery::LogVintageHuntingStageThree(thisa, reasonc);
      std::shared_ptr<GalleryVintageHuntingStageThreeSettleEvent>::~shared_ptr((std::shared_ptr<GalleryVintageHuntingStageThreeSettleEvent> *const)(v2 + 96));
      v25 = 1;
    }
    std::shared_ptr<VintageHuntingThirdStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingThirdStageInfo> *const)(v2 + 64));
    if ( !v25 )
      goto LABEL_43;
LABEL_42:
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "onStop",
      301);
    v31 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v48,
            (const char (*)[51])"[VINTAGE] vintage hunting gallery stop, stage_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &thisa->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    goto LABEL_43;
  }
  if ( stage_id > 3 )
  {
LABEL_41:
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "onStop",
      296);
    v30 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v48,
            (const char (*)[45])"[VINTAGE] gallery unsupport stage, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    goto LABEL_43;
  }
  if ( stage_id == 1 )
  {
    std::dynamic_pointer_cast<VintageHuntingFirstStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v2 + 64));
    if ( std::operator==<VintageHuntingFirstStageInfo>(
           0LL,
           (const std::shared_ptr<VintageHuntingFirstStageInfo> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "onStop",
        250);
      v9 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
             &v48,
             (const char (*)[77])"[VINTAGE] dynamic_pointer_cast VintageHuntingFirstStageInfo fails, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v10 = 0;
    }
    else
    {
      p_elite_cnt = &std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->elite_cnt;
      p_brutal_cnt = &std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->brutal_cnt;
      p_timid_cnt = &std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->timid_cnt;
      v13 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::tools::perf::make_shared<GalleryVintageHuntingStageOneSettleEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)(v2 + 96),
        &this->activity_id_,
        &this->stage_id_,
        &v13->score,
        p_timid_cnt,
        p_brutal_cnt,
        p_elite_cnt,
        v32,
        v49,
        p_brutal_cnt,
        v37,
        (unsigned int *)this);
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v15 = Player::getEventComp(v14);
      std::shared_ptr<BaseEvent>::shared_ptr<GalleryVintageHuntingStageOneSettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<GalleryVintageHuntingStageOneSettleEvent> *)(v2 + 96));
      PlayerEventComp::notifyEvent(v15, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      VintageHuntingGallery::LogVintageHuntingStageOne(thisa, reasona);
      std::shared_ptr<GalleryVintageHuntingStageOneSettleEvent>::~shared_ptr((std::shared_ptr<GalleryVintageHuntingStageOneSettleEvent> *const)(v2 + 96));
      v10 = 1;
    }
    std::shared_ptr<VintageHuntingFirstStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingFirstStageInfo> *const)(v2 + 64));
    if ( !v10 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( stage_id != 2 )
    goto LABEL_41;
  std::dynamic_pointer_cast<VintageHuntingSecondStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v2 + 64));
  if ( std::operator==<VintageHuntingSecondStageInfo>(
         0LL,
         (const std::shared_ptr<VintageHuntingSecondStageInfo> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "onStop",
      266);
    v16 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
            &v48,
            (const char (*)[78])"[VINTAGE] dynamic_pointer_cast VintageHuntingSecondStageInfo fails, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v17 = 0;
  }
  else
  {
    v18 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_QWORD *)__args_0 = std::set<unsigned int>::size(&v18->capture_animal_type_set);
    p_capture_no_battle_animal_num = (unsigned __int64 *)&std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->capture_no_battle_animal_num;
    p_animal_count_map = (unsigned int *)&std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->animal_count_map;
    p_total_num = &std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->total_num;
    v21 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<GalleryVintageHuntingStageTwoSettleEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &,std::map<unsigned int,unsigned int> &,unsigned int &,unsigned long>(
      (unsigned int *)(v2 + 96),
      &this->activity_id_,
      &this->stage_id_,
      &v21->capture_animal_num,
      (std::map<unsigned int,unsigned int> *)p_total_num,
      p_animal_count_map,
      p_capture_no_battle_animal_num,
      __args_0,
      v49,
      p_animal_count_map,
      v37,
      (std::map<unsigned int,unsigned int> *)this,
      v42,
      v43);
    v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v23 = Player::getEventComp(v22);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryVintageHuntingStageTwoSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GalleryVintageHuntingStageTwoSettleEvent> *)(v2 + 96));
    PlayerEventComp::notifyEvent(v23, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    VintageHuntingGallery::LogVintageHuntingStageTwo(thisa, reasonb);
    std::shared_ptr<GalleryVintageHuntingStageTwoSettleEvent>::~shared_ptr((std::shared_ptr<GalleryVintageHuntingStageTwoSettleEvent> *const)(v2 + 96));
    v17 = 1;
  }
  std::shared_ptr<VintageHuntingSecondStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingSecondStageInfo> *const)(v2 + 64));
  if ( v17 )
    goto LABEL_42;
LABEL_43:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v33 == (unsigned int *)v2 )
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

// Line 305: range 000000001804CBF8-000000001804CDD4
void __fastcall VintageHuntingGallery::stopPlay(
        VintageHuntingGallery *const this,
        bool is_interrupt,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  SceneGalleryComp *GalleryComp; // rdi
  proto::GalleryStopReason v8; // ecx
  bool v9; // dl
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-80h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 reason:304";
  *(_QWORD *)(v3 + 16) = VintageHuntingGallery::stopPlay;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = reason;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
    "stopPlay",
    306);
  v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v12,
         (const char (*)[30])"[VINTAGE] stopPlay, reason = ");
  common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
    v6,
    (const proto::GalleryStopReason *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  v8 = *(_DWORD *)(v3 + 32);
  v9 = is_interrupt;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
    __asan_report_load4();
  }
  SceneGalleryComp::forceStopAndClearGallery(GalleryComp, this->gallery_id_, v9, v8);
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 000000001804CDD6-000000001804E4E2
int32_t __cdecl VintageHuntingGallery::updatePlayerScore(
        VintageHuntingGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rcx
  uint32_t stage_id; // eax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned int TimidScore; // eax
  unsigned int v14; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  __int64 v16; // rsi
  SelectType v17; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  char v19; // cl
  unsigned int v20; // r15d
  __int64 v21; // rax
  SelectType v22; // r15d
  __int64 v23; // rax
  char v24; // dl
  __int64 v25; // rsi
  bool v26; // dl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  unsigned int BrutalScore; // eax
  unsigned int v29; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  __int64 v31; // rsi
  SelectType v32; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  char v34; // cl
  unsigned int v35; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  __int64 v37; // rsi
  SelectType v38; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  char v40; // cl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  unsigned int EliteScore; // eax
  unsigned int v43; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  __int64 v45; // rsi
  SelectType v46; // r15d
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rdx
  char v48; // cl
  unsigned int v49; // r15d
  __int64 v50; // rax
  SelectType v51; // r15d
  __int64 v52; // rax
  char v53; // dl
  __int64 v54; // rsi
  bool v55; // dl
  common::milog::MiLogStream *v56; // rax
  int v57; // r15d
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  char *v61; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v62; // rax
  _DWORD *v63; // rdx
  char v64; // cl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  common::milog::MiLogStream *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  bool v70; // r15
  __int64 v71; // rax
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  int v74; // r15d
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  char *v76; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v77; // rax
  _DWORD *v78; // rdx
  char v79; // cl
  __int64 v80; // rax
  const luabind::adl::object *v81; // rsi
  bool v82; // r15
  int v83; // r15d
  __int64 v84; // rax
  char v85; // dl
  bool v86; // dl
  const luabind::adl::object *v87; // rsi
  bool v88; // r15
  uint32_t v89; // r15d
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // rdx
  char v91; // cl
  common::milog::MiLogStream *v92; // rax
  int v93; // r15d
  bool v94; // r15
  __int64 v95; // rax
  common::milog::MiLogStream *v96; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+37h] [rbp-139h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+38h] [rbp-138h] BYREF
  common::milog::MiLogStream v101; // [rsp+40h] [rbp-130h] BYREF
  char v102[272]; // [rsp+60h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 48 4 14 monster_id:365 64 4 12 left_num:409 80 4 13 is_finish:449 96 8 8 iter:369 128 8 8 iter"
                        ":397 160 16 20 second_stage_ptr:357 192 16 19 third_stage_ptr:425";
  *(_QWORD *)(v5 + 16) = VintageHuntingGallery::updatePlayerScore;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ != START )
  {
    common::milog::MiLogStream::create(
      &v101,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "updatePlayerScore",
      314);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v101,
           (const char (*)[42])"[VINTAGE] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v5 + 80) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream(&v101);
    v4 = -1;
    goto LABEL_100;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_id = this->stage_id_;
  if ( stage_id == 3 )
  {
    std::dynamic_pointer_cast<VintageHuntingThirdStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v5 + 192));
    if ( std::operator==<VintageHuntingThirdStageInfo>(
           0LL,
           (const std::shared_ptr<VintageHuntingThirdStageInfo> *)(v5 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v101,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "updatePlayerScore",
        428);
      v92 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
              &v101,
              (const char (*)[77])"[VINTAGE] dynamic_pointer_cast VintageHuntingThirdStageInfo fails, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream(&v101);
      v4 = -1;
      v93 = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 80) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "go_weak", &__a);
      v94 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v101,
              (unsigned int *)(v5 + 80)) == 0;
      std::string::~string(&v101);
      std::allocator<char>::~allocator(&__a);
      if ( v94 )
      {
        v95 = (__int64)std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        if ( *(_BYTE *)(((unsigned __int64)(v95 + 12) >> 3) + 0x7FFF8000) != 0
          && (char)(((v95 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v95 + 12) >> 3) + 0x7FFF8000) )
        {
          v95 = __asan_report_load4();
        }
        *(_DWORD *)(v95 + 12) += *(_DWORD *)(v5 + 80);
      }
      v93 = 1;
    }
    std::shared_ptr<VintageHuntingThirdStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingThirdStageInfo> *const)(v5 + 192));
    if ( !v93 )
      goto LABEL_100;
LABEL_97:
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    *(_DWORD *)(v5 + 80) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "is_finish", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v101,
      (unsigned int *)(v5 + 80));
    std::string::~string(&v101);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v5 + 80) )
      VintageHuntingGallery::stopPlay(this, 0, GALLERY_STOP_FINISHED);
    v4 = 0;
    goto LABEL_100;
  }
  if ( stage_id > 3 )
  {
LABEL_96:
    common::milog::MiLogStream::create(
      &v101,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "updatePlayerScore",
      442);
    v96 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v101,
            (const char (*)[37])"[VINTAGE] unsupport stage, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v101);
    v4 = -1;
    goto LABEL_100;
  }
  if ( stage_id == 1 )
  {
    std::dynamic_pointer_cast<VintageHuntingFirstStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v5 + 160));
    if ( std::operator==<VintageHuntingFirstStageInfo>(
           0LL,
           (const std::shared_ptr<VintageHuntingFirstStageInfo> *)(v5 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v101,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "updatePlayerScore",
        325);
      v10 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
              &v101,
              (const char (*)[77])"[VINTAGE] dynamic_pointer_cast VintageHuntingFirstStageInfo fails, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream(&v101);
      v4 = -1;
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 48) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "add_timid_cnt", &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v101,
        (unsigned int *)(v5 + 48));
      std::string::~string(&v101);
      std::allocator<char>::~allocator(&__a);
      if ( *(_DWORD *)(v5 + 48) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 192));
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        TimidScore = ActivityVintageExcelConfigMgr::getTimidScore(&v12->design_config.txt_config_mgr.activity_vintage_config_mgr);
        v14 = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 48), TimidScore);
        v15 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v15->score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->score >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v16 = v14;
        v17 = SAFE_ADD<unsigned int,unsigned int>(v15->score, v14);
        v18 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v19 = *(_BYTE *)(((unsigned __int64)&v18->score >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)((((_BYTE)v18 + 12) & 7) + 3) >= v19 )
        {
          LOBYTE(v16) = v19 != 0;
          __asan_report_store4(&v18->score, v16, (_BYTE)v18);
        }
        v18->score = v17;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 192));
        v20 = *(_DWORD *)(v5 + 48);
        v21 = (__int64)std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)(v21 + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v21 + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = __asan_report_load4();
        }
        v25 = v20;
        v22 = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v21 + 16), v20);
        v23 = (__int64)std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v24 = *(_BYTE *)(((unsigned __int64)(v23 + 16) >> 3) + 0x7FFF8000);
        LOBYTE(v25) = v24 != 0;
        v26 = v24 != 0 && v24 <= 3;
        if ( v26 )
          v23 = __asan_report_store4(v23 + 16, v25, v26);
        *(_DWORD *)(v23 + 16) = v22;
      }
      *(_DWORD *)(v5 + 64) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "add_brutal_cnt", &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v101,
        (unsigned int *)(v5 + 64));
      std::string::~string(&v101);
      std::allocator<char>::~allocator(&__a);
      if ( *(_DWORD *)(v5 + 64) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 192));
        v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        BrutalScore = ActivityVintageExcelConfigMgr::getBrutalScore(&v27->design_config.txt_config_mgr.activity_vintage_config_mgr);
        v29 = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 64), BrutalScore);
        v30 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v30->score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v30 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->score >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v31 = v29;
        v32 = SAFE_ADD<unsigned int,unsigned int>(v30->score, v29);
        v33 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v34 = *(_BYTE *)(((unsigned __int64)&v33->score >> 3) + 0x7FFF8000);
        if ( v34 != 0 && (char)((((_BYTE)v33 + 12) & 7) + 3) >= v34 )
        {
          LOBYTE(v31) = v34 != 0;
          __asan_report_store4(&v33->score, v31, (_BYTE)v33);
        }
        v33->score = v32;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 192));
        v35 = *(_DWORD *)(v5 + 64);
        v36 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v36->brutal_cnt >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v36 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->brutal_cnt >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v37 = v35;
        v38 = SAFE_ADD<unsigned int,unsigned int>(v36->brutal_cnt, v35);
        v39 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v40 = *(_BYTE *)(((unsigned __int64)&v39->brutal_cnt >> 3) + 0x7FFF8000);
        if ( v40 != 0 && (char)((((_BYTE)v39 + 20) & 7) + 3) >= v40 )
        {
          LOBYTE(v37) = v40 != 0;
          __asan_report_store4(&v39->brutal_cnt, v37, (_BYTE)v39);
        }
        v39->brutal_cnt = v38;
      }
      *(_DWORD *)(v5 + 80) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "add_elite_cnt", &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v101,
        (unsigned int *)(v5 + 80));
      std::string::~string(&v101);
      std::allocator<char>::~allocator(&__a);
      if ( *(_DWORD *)(v5 + 80) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 192));
        v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        EliteScore = ActivityVintageExcelConfigMgr::getEliteScore(&v41->design_config.txt_config_mgr.activity_vintage_config_mgr);
        v43 = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 80), EliteScore);
        v44 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v44->score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v44 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->score >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v45 = v43;
        v46 = SAFE_ADD<unsigned int,unsigned int>(v44->score, v43);
        v47 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v48 = *(_BYTE *)(((unsigned __int64)&v47->score >> 3) + 0x7FFF8000);
        if ( v48 != 0 && (char)((((_BYTE)v47 + 12) & 7) + 3) >= v48 )
        {
          LOBYTE(v45) = v48 != 0;
          __asan_report_store4(&v47->score, v45, (_BYTE)v47);
        }
        v47->score = v46;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 192));
        v49 = *(_DWORD *)(v5 + 80);
        v50 = (__int64)std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)(v50 + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v50 + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          v50 = __asan_report_load4();
        }
        v54 = v49;
        v51 = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v50 + 24), v49);
        v52 = (__int64)std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v53 = *(_BYTE *)(((unsigned __int64)(v52 + 24) >> 3) + 0x7FFF8000);
        LOBYTE(v54) = v53 != 0;
        v55 = v53 != 0 && v53 <= 3;
        if ( v55 )
          v52 = __asan_report_store4(v52 + 24, v54, v55);
        *(_DWORD *)(v52 + 24) = v51;
      }
      v11 = 1;
    }
    std::shared_ptr<VintageHuntingFirstStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingFirstStageInfo> *const)(v5 + 160));
    if ( !v11 )
      goto LABEL_100;
    goto LABEL_97;
  }
  if ( stage_id != 2 )
    goto LABEL_96;
  std::dynamic_pointer_cast<VintageHuntingSecondStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v5 + 160));
  if ( std::operator==<VintageHuntingSecondStageInfo>(
         0LL,
         (const std::shared_ptr<VintageHuntingSecondStageInfo> *)(v5 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v101,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "updatePlayerScore",
      360);
    v56 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
            &v101,
            (const char (*)[78])"[VINTAGE] dynamic_pointer_cast VintageHuntingSecondStageInfo fails, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v101);
    v4 = -1;
    v57 = 0;
  }
  else
  {
    *(_DWORD *)(v5 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "monster_id", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v101,
      (unsigned int *)(v5 + 48));
    std::string::~string(&v101);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v5 + 48) )
    {
      v58 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                      &v58->animal_count_map,
                                                                      (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
      v59 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      __y._M_node = std::map<unsigned int,unsigned int>::end(&v59->animal_count_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 96),
             &__y) )
      {
        v60 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        v61 = (char *)(v5 + 48);
        v62 = std::map<unsigned int,unsigned int>::operator[](
                &v60->animal_count_map,
                (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
        v63 = v62;
        v64 = *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000);
        if ( v64 != 0 && (char)(((unsigned __int8)v62 & 7) + 3) >= v64 )
        {
          LOBYTE(v61) = v64 != 0;
          __asan_report_store4(v62, v61, (_BYTE)v62);
        }
        *v63 = 1;
        *(_DWORD *)(v5 + 80) = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 192));
        v65 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
        *(_DWORD *)(v5 + 80) = ActivityVintageExcelConfigMgr::getTypeIdByMonsterId(
                                 &v65->design_config.txt_config_mgr.activity_vintage_config_mgr,
                                 *(_DWORD *)(v5 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 192));
        if ( *(_DWORD *)(v5 + 80) )
        {
          v66 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          std::set<unsigned int>::insert(
            &v66->capture_animal_type_set,
            (const std::set<unsigned int>::value_type *)(v5 + 80));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
            "updatePlayerScore",
            382);
          v67 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v101,
                  (const char (*)[50])"[VINTAGE] getTypeIdByMonsterId fails, monster_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v101);
        }
      }
      else
      {
        v68 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v68 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)(((v68 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v68 + 4) >> 3) + 0x7FFF8000) )
        {
          v68 = __asan_report_load4();
        }
        ++*(_DWORD *)(v68 + 4);
      }
      v69 = (__int64)std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      if ( *(_BYTE *)(((unsigned __int64)(v69 + 12) >> 3) + 0x7FFF8000) != 0
        && (char)(((v69 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v69 + 12) >> 3) + 0x7FFF8000) )
      {
        v69 = __asan_report_load4();
      }
      ++*(_DWORD *)(v69 + 12);
      *(_DWORD *)(v5 + 80) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "sneak_count", &__a);
      v70 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v101,
              (unsigned int *)(v5 + 80)) == 0;
      std::string::~string(&v101);
      std::allocator<char>::~allocator(&__a);
      if ( v70 )
      {
        v71 = (__int64)std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)(v71 + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v71 + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          v71 = __asan_report_load4();
        }
        *(_DWORD *)(v71 + 16) += *(_DWORD *)(v5 + 80);
        v72 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                         &v72->no_battle_animal_count_map,
                                                                         (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
        v73 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
        __y._M_node = std::map<unsigned int,unsigned int>::end(&v73->no_battle_animal_count_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 128),
               &__y) )
        {
          v74 = *(_DWORD *)(v5 + 80);
          v75 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v76 = (char *)(v5 + 48);
          v77 = std::map<unsigned int,unsigned int>::operator[](
                  &v75->no_battle_animal_count_map,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
          v78 = v77;
          v79 = *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000);
          if ( v79 != 0 && (char)(((unsigned __int8)v77 & 7) + 3) >= v79 )
          {
            LOBYTE(v76) = v79 != 0;
            __asan_report_store4(v77, v76, (_BYTE)v77);
          }
          *v78 = v74;
        }
        else
        {
          v80 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 128));
          if ( *(_BYTE *)(((unsigned __int64)(v80 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)(((v80 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v80 + 4) >> 3) + 0x7FFF8000) )
          {
            v80 = __asan_report_load4();
          }
          *(_DWORD *)(v80 + 4) += *(_DWORD *)(v5 + 80);
        }
      }
    }
    *(_DWORD *)(v5 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "left_num", &__a);
    v81 = param_table;
    v82 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v101,
            (unsigned int *)(v5 + 64)) == 0;
    std::string::~string(&v101);
    std::allocator<char>::~allocator(&__a);
    if ( v82 )
    {
      v83 = *(_DWORD *)(v5 + 64);
      v84 = (__int64)std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      v85 = *(_BYTE *)(((unsigned __int64)(v84 + 168) >> 3) + 0x7FFF8000);
      LOBYTE(v81) = v85 != 0;
      v86 = v85 != 0 && v85 <= 3;
      if ( v86 )
        v84 = __asan_report_store4(v84 + 168, v81, v86);
      *(_DWORD *)(v84 + 168) = v83;
    }
    *(_DWORD *)(v5 + 80) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v101, "total_num", &__a);
    v87 = param_table;
    v88 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v101,
            (unsigned int *)(v5 + 80)) == 0;
    std::string::~string(&v101);
    std::allocator<char>::~allocator(&__a);
    if ( v88 )
    {
      v89 = *(_DWORD *)(v5 + 80);
      v90 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
      v91 = *(_BYTE *)(((unsigned __int64)&v90->total_num >> 3) + 0x7FFF8000);
      if ( v91 != 0 && (char)((((_BYTE)v90 - 84) & 7) + 3) >= v91 )
      {
        LOBYTE(v87) = v91 != 0;
        __asan_report_store4(&v90->total_num, v87, (_BYTE)v90);
      }
      v90->total_num = v89;
    }
    v57 = 1;
  }
  std::shared_ptr<VintageHuntingSecondStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingSecondStageInfo> *const)(v5 + 160));
  if ( v57 )
    goto LABEL_97;
LABEL_100:
  result = v4;
  if ( v102 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 460: range 000000001804E4E4-000000001804E648
void __cdecl VintageHuntingGallery::clearGalleryData(VintageHuntingGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  bool v3; // dl
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->owner_uid_, v1, v2);
  this->owner_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_, v1, (_BYTE)this + 48);
  }
  this->activity_id_ = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->stage_id_, (((_BYTE)this + 52) & 7u) + 3, v3);
  this->stage_id_ = 0;
  if ( std::operator!=<BaseStageInfo>(&this->stage_info_ptr_, 0LL) )
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<BaseStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_info_ptr_);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    v5 = *(_QWORD *)v4 + 8LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v5)(v4);
  }
};

// Line 471: range 000000001804E64A-000000001804E9F6
uint32_t __cdecl VintageHuntingGallery::getVintageHuntingTrialAvatarId(
        VintageHuntingGallery *const this,
        Player *player,
        const std::vector<unsigned int> *trial_avatar_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v7; // rax
  uint32_t v8; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t avatar_id; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  uint64_t choose_guid; // [rsp+38h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 trial_avatar_id:478 64 16 14 avatar_ptr:473";
  *(_QWORD *)(v3 + 16) = VintageHuntingGallery::getVintageHuntingTrialAvatarId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  AvatarComp = Player::getAvatarComp(player);
  choose_guid = PlayerAvatarComp::getChooseAvatarGuid(AvatarComp);
  v7 = Player::getAvatarComp(player);
  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)v7);
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
  {
    v8 = 0;
  }
  else
  {
    __for_range = trial_avatar_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(trial_avatar_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(trial_avatar_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                  &v10->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                  *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( trial_avatar_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        avatar_id = trial_avatar_config_ptr->avatar.avatar_id;
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( avatar_id == Avatar::getAvatarId(v13) )
        {
          v8 = *(_DWORD *)(v3 + 48);
          goto LABEL_18;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
          "getVintageHuntingTrialAvatarId",
          483);
        v11 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v22,
                (const char (*)[62])"[VINTAGE] findTrialAvatarExcelConfig failed, trial_avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v8 = 0;
  }
LABEL_18:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  result = v8;
  if ( v23 == (char *)v3 )
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

// Line 496: range 000000001804E9F8-000000001804EBC9
void __cdecl VintageHuntingGallery::onAvatarDie(VintageHuntingGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
    "onAvatarDie",
    497);
  v2 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v10,
         (const char (*)[28])"[VINTAGE] onAvatarDie, uid:");
  val = Player::getUid(player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  val = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &val) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "onAvatarDie",
      500);
    v3 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v10,
           (const char (*)[44])"[VINTAGE] uid not in player_info_map_. uid:");
    val = Player::getUid(player);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v4,
           (const char (*)[25])", player_info_map_ size:");
    v9 = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &v9);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    VintageHuntingGallery::stopPlay(this, 0, GALLERY_STOP_AVATAR_DIE);
  }
};

// Line 508: range 000000001804EBCA-000000001804F37C
void __cdecl VintageHuntingGallery::recycleGalleryResource(VintageHuntingGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ActivityVintageExcelConfigMgr *p_activity_vintage_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerGroupLinkComp *GroupLinkComp; // rcx
  Player *v11; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Player *v13; // rax
  PlayerAvatarComp *v14; // rcx
  Player *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  char v18; // [rsp+Fh] [rbp-101h]
  char v19; // [rsp+10h] [rbp-100h]
  PlayerAvatarComp *v20; // [rsp+10h] [rbp-100h]
  std::allocator<long unsigned int> __a; // [rsp+27h] [rbp-E9h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const data::ActivityVintageHuntingExcelConfig *hunting_stage_config_ptr; // [rsp+38h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const unsigned int *group_bundle_id; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-C0h] BYREF
  std::vector<long unsigned int> del_avatar_guid_vec; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-90h] BYREF
  char v30[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:518";
  *(_QWORD *)(v1 + 16) = VintageHuntingGallery::recycleGalleryResource;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
    "recycleGalleryResource",
    509);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v29,
    (const char (*)[48])"[VINTAGE] gallery begin recycleGalleryResource.");
  common::milog::MiLogStream::~MiLogStream(&v29);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_activity_vintage_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_vintage_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  hunting_stage_config_ptr = data::ActivityVintageExcelConfigMgrBase::findActivityVintageHuntingExcelConfig(
                               p_activity_vintage_config_mgr,
                               this->stage_id_);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( hunting_stage_config_ptr )
  {
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 16;
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v1 + 32), v7);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "recycleGalleryResource",
        521);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v29,
             (const char (*)[40])"[VINTAGE] findPlayer failed, owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      __for_range = &hunting_stage_config_ptr->group_bundle_id_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&hunting_stage_config_ptr->group_bundle_id_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&hunting_stage_config_ptr->group_bundle_id_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        group_bundle_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        GroupLinkComp = Player::getGroupLinkComp(v9);
        if ( *(_BYTE *)(((unsigned __int64)group_bundle_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_bundle_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, *group_bundle_id, 1);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      AvatarComp = Player::getAvatarComp(v11);
      PlayerAvatarComp::unlockTeamAvatar(AvatarComp, CHANGE_SCENE_TEAM_REASON_VINTAGE_HUNTING);
      v19 = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !this->grant_trial_avatar_guid_ )
        goto LABEL_23;
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v14 = Player::getAvatarComp(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&v27, (uint64_t)v14);
      v19 = 1;
      if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&v27) )
        v18 = 0;
      else
LABEL_23:
        v18 = 1;
      if ( v19 )
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&v27);
      if ( !v18 )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v20 = Player::getAvatarComp(v15);
        if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __for_end._M_current = (const unsigned int *)this->grant_trial_avatar_guid_;
        std::allocator<unsigned long>::allocator(&__a);
        std::vector<unsigned long>::vector(
          &del_avatar_guid_vec,
          (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__for_end),
          &__a);
        v16 = PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(v20, &del_avatar_guid_vec) != 0;
        std::vector<unsigned long>::~vector(&del_avatar_guid_vec);
        std::allocator<unsigned long>::~allocator(&__a);
        if ( v16 )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
            "recycleGalleryResource",
            540);
          v17 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                  &v29,
                  (const char (*)[69])"[VINTAGE] delInformalAvatarBatchAndReplaceByAvatarTeam failed, guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &this->grant_trial_avatar_guid_);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "recycleGalleryResource",
      513);
    v5 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v29,
           (const char (*)[66])"[VINTAGE] findActivityVintageHuntingExcelConfig fails, stage_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 546: range 000000001804F37E-000000001804FCED
// local variable allocation has failed, the output may be wrong!
void __fastcall VintageHuntingGallery::LogVintageHuntingStageOne(
        VintageHuntingGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  int v11; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  int v21; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  __int64 v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  __int64 v29; // rax
  Player *v30; // r14
  std::string v31; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-110h] BYREF
  char v34[240]; // [rsp+50h] [rbp-F0h] BYREF

  v31._M_string_length = (std::string::size_type)this;
  HIDWORD(v31._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:561 64 4 7 now:592 80 4 10 reason:545 96 16 20 owner_player_ptr:547 128 16 19 f"
                        "irst_stage_ptr:554 160 16 11 log_ptr:562";
  *(_QWORD *)(v2 + 16) = VintageHuntingGallery::LogVintageHuntingStageOne;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 80) = HIDWORD(v31._M_dataplus._M_p);
  M_string_length = v31._M_string_length;
  if ( *(_BYTE *)((v31._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v31._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 96, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "LogVintageHuntingStageOne",
      550);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v33,
      (const char (*)[35])"[VINTAGE] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v33);
    goto LABEL_45;
  }
  std::dynamic_pointer_cast<VintageHuntingFirstStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v2 + 128));
  if ( !std::operator==<VintageHuntingFirstStageInfo>(
          0LL,
          (const std::shared_ptr<VintageHuntingFirstStageInfo> *)(v2 + 128)) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE6Au, v31);
    std::string::~string(&v33);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyVintageHuntingStageOneSettle>();
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    if ( *(_BYTE *)(((v31._M_string_length + 308) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v31._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v31._M_string_length + 308) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_stage_id(v10, *(_DWORD *)(v31._M_string_length + 308));
    v11 = *(_DWORD *)(v2 + 80);
    if ( v11 == 8 )
    {
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_result(v14, 2u);
    }
    else
    {
      if ( v11 > 8 )
        goto LABEL_25;
      if ( v11 == 5 )
      {
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_result(v15, 3u);
        goto LABEL_26;
      }
      if ( v11 > 5 )
      {
LABEL_25:
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
          "LogVintageHuntingStageOne",
          588);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v33,
                (const char (*)[30])"[VINTAGE] unknow stop reason:");
        common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
          v16,
          (const proto::GalleryStopReason *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v33);
        goto LABEL_26;
      }
      if ( v11 == 1 )
      {
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_result(v12, 0);
      }
      else
      {
        if ( v11 != 2 )
          goto LABEL_25;
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_result(v13, 1u);
      }
    }
LABEL_26:
    if ( *(_BYTE *)(((v31._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = Scene::getSceneTimeSeconds(*(Scene *const *)(v31._M_string_length + 24));
    if ( *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(v31._M_string_length + 104) <= *(_DWORD *)(v2 + 64) )
    {
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v21 = *(_DWORD *)(v2 + 64);
      if ( *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_use_time(
        v20,
        v21 - *(_DWORD *)(v31._M_string_length + 104));
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v23 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v23->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_score(v22, v23->score);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v25 = (__int64)std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)(v25 + 16) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v25 + 16) >> 3) + 0x7FFF8000) <= 3 )
      {
        v25 = __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_capture_timid_count(v24, *(_DWORD *)(v25 + 16));
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v27 = std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v27->brutal_cnt >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v27 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->brutal_cnt >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_capture_brutal_count(v26, v27->brutal_cnt);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v29 = (__int64)std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingFirstStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)(v29 + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v29 + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        v29 = __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageOneSettle::set_capture_elite_count(v28, *(_DWORD *)(v29 + 24));
      v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageOneSettle,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v31._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageOneSettle> *)(v2 + 160));
      Player::printStatLog(v30, (MessagePtr *)&v31._anon_0, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v31._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "LogVintageHuntingStageOne",
        595);
      v17 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
              &v33,
              (const char (*)[74])"[VINTAGE] LogVintageHuntingStageOne, now is smaller than start_time. now:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
      v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])", start_time_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v19,
        (const unsigned int *)(v31._M_string_length + 104));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageOneSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageOneSettle> *const)(v2 + 160));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    goto LABEL_44;
  }
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
    "LogVintageHuntingStageOne",
    557);
  v7 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
         &v33,
         (const char (*)[77])"[VINTAGE] dynamic_pointer_cast VintageHuntingFirstStageInfo fails, stage_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v7,
    (const unsigned int *)(v31._M_string_length + 308));
  common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_44:
  std::shared_ptr<VintageHuntingFirstStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingFirstStageInfo> *const)(v2 + 128));
LABEL_45:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 609: range 000000001804FCEE-0000000018050949
// local variable allocation has failed, the output may be wrong!
void __fastcall VintageHuntingGallery::LogVintageHuntingStageTwo(
        VintageHuntingGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  int v21; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v24; // rax
  std::pair<unsigned int const,unsigned int> *v25; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v27; // rax
  std::pair<unsigned int const,unsigned int> *v28; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *v30; // r14
  std::string v31; // [rsp+0h] [rbp-1A0h] OVERLAPPED BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-178h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *monster_id_0; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+40h] [rbp-160h]
  proto_log::HuntingAnimalLog *log_animal_info_0; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *monster_id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-148h]
  proto_log::HuntingAnimalLog *log_animal_info; // [rsp+60h] [rbp-140h]
  std::pair<unsigned int const,unsigned int> v41; // [rsp+68h] [rbp-138h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v44; // [rsp+90h] [rbp-110h] BYREF
  char v45[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v31._M_string_length = (std::string::size_type)this;
  HIDWORD(v31._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:624 64 4 7 now:660 80 4 10 reason:608 96 16 20 owner_player_ptr:610 128 16 20 s"
                        "econd_stage_ptr:617 160 16 11 log_ptr:625";
  *(_QWORD *)(v2 + 16) = VintageHuntingGallery::LogVintageHuntingStageTwo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 80) = HIDWORD(v31._M_dataplus._M_p);
  M_string_length = v31._M_string_length;
  if ( *(_BYTE *)((v31._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v31._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 96, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "LogVintageHuntingStageTwo",
      613);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v44,
      (const char (*)[35])"[VINTAGE] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    std::dynamic_pointer_cast<VintageHuntingSecondStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v2 + 128));
    if ( std::operator==<VintageHuntingSecondStageInfo>(
           0LL,
           (const std::shared_ptr<VintageHuntingSecondStageInfo> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "LogVintageHuntingStageTwo",
        620);
      v7 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
             &v44,
             (const char (*)[78])"[VINTAGE] dynamic_pointer_cast VintageHuntingSecondStageInfo fails, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)(v31._M_string_length + 308));
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v8);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE6Bu, v31);
      std::string::~string(&v44);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle>();
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      if ( *(_BYTE *)(((v31._M_string_length + 308) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(v31._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v31._M_string_length + 308) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_stage_id(v10, *(_DWORD *)(v31._M_string_length + 308));
      switch ( *(_DWORD *)(v2 + 80) )
      {
        case 1:
          v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_result(v12, 1u);
          break;
        case 2:
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_result(v13, 2u);
          break;
        case 3:
          v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_result(v11, 0);
          break;
        case 5:
          v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_result(v15, 4u);
          break;
        case 8:
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_result(v14, 3u);
          break;
        default:
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
            "LogVintageHuntingStageTwo",
            656);
          v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v44,
                  (const char (*)[30])"[VINTAGE] unknow stop reason:");
          common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
            v16,
            (const proto::GalleryStopReason *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v44);
          break;
      }
      if ( *(_BYTE *)(((v31._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Scene::getSceneTimeSeconds(*(Scene *const *)(v31._M_string_length + 24));
      if ( *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_DWORD *)(v31._M_string_length + 104) <= *(_DWORD *)(v2 + 64) )
      {
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v21 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v31._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_use_time(
          v20,
          v21 - *(_DWORD *)(v31._M_string_length + 104));
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v23 = std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v23->capture_animal_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->capture_animal_num >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::set_capture_num(v22, v23->capture_animal_num);
        __for_range = &std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->animal_count_map;
        *((std::map<unsigned int,unsigned int>::iterator *)&v31._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,unsigned int>::begin(__for_range);
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&v31._anon_0._M_allocated_capacity
                + 1,
                  &__for_end) )
        {
          v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v31._anon_0._M_allocated_capacity
                + 1);
          v25 = v24;
          if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v24, 8LL);
          }
          v41 = *v25;
          monster_id = std::get<0ul,unsigned int const,unsigned int>(&v41);
          num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v41);
          v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          log_animal_info = proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::add_capture_vec(v26);
          if ( *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::HuntingAnimalLog::set_monster_id(log_animal_info, *monster_id);
          if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::HuntingAnimalLog::set_num(log_animal_info, *num);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
            (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v31._anon_0._M_allocated_capacity
          + 1);
        }
        __for_range_0 = &std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingSecondStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->no_battle_animal_count_map;
        *((std::map<unsigned int,unsigned int>::iterator *)&v31._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&v31._anon_0._M_allocated_capacity
                + 1,
                  &__for_end) )
        {
          v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v31._anon_0._M_allocated_capacity
                + 1);
          v28 = v27;
          if ( ((unsigned __int8)v27 & 7) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v27 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v27, 8LL);
          }
          v41 = *v28;
          monster_id_0 = std::get<0ul,unsigned int const,unsigned int>(&v41);
          num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v41);
          v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          log_animal_info_0 = proto_log::PlayerLogBodyVintageHuntingStageTwoSettle::add_capture_no_battle_vec(v29);
          if ( *(_BYTE *)(((unsigned __int64)monster_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)monster_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id_0 >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::HuntingAnimalLog::set_monster_id(log_animal_info_0, *monster_id_0);
          if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::HuntingAnimalLog::set_num(log_animal_info_0, *num_0);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
            (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v31._anon_0._M_allocated_capacity
          + 1);
        }
        v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle> *)(v2 + 160));
        Player::printStatLog(v30, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
          "LogVintageHuntingStageTwo",
          663);
        v17 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                &v44,
                (const char (*)[74])"[VINTAGE] LogVintageHuntingStageTwo, now is smaller than start_time. now:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])", start_time_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v19,
          (const unsigned int *)(v31._M_string_length + 104));
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageTwoSettle> *const)(v2 + 160));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    std::shared_ptr<VintageHuntingSecondStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingSecondStageInfo> *const)(v2 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 686: range 000000001805094A-00000000180511C3
// local variable allocation has failed, the output may be wrong!
void __fastcall VintageHuntingGallery::LogVintageHuntingStageThree(
        VintageHuntingGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  int v21; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  Player *v24; // r14
  std::string v25; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-110h] BYREF
  char v28[240]; // [rsp+50h] [rbp-F0h] BYREF

  v25._M_string_length = (std::string::size_type)this;
  HIDWORD(v25._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:701 64 4 7 now:737 80 4 10 reason:685 96 16 20 owner_player_ptr:687 128 16 19 t"
                        "hird_stage_ptr:694 160 16 11 log_ptr:702";
  *(_QWORD *)(v2 + 16) = VintageHuntingGallery::LogVintageHuntingStageThree;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 80) = HIDWORD(v25._M_dataplus._M_p);
  M_string_length = v25._M_string_length;
  if ( *(_BYTE *)((v25._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v25._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 96, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
      "LogVintageHuntingStageThree",
      690);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v27,
      (const char (*)[35])"[VINTAGE] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    std::dynamic_pointer_cast<VintageHuntingThirdStageInfo,BaseStageInfo>((const std::shared_ptr<BaseStageInfo> *)(v2 + 128));
    if ( std::operator==<VintageHuntingThirdStageInfo>(
           0LL,
           (const std::shared_ptr<VintageHuntingThirdStageInfo> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
        "LogVintageHuntingStageThree",
        697);
      v7 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
             &v27,
             (const char (*)[77])"[VINTAGE] dynamic_pointer_cast VintageHuntingThirdStageInfo fails, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)(v25._M_string_length + 308));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v8);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE6Cu, v25);
      std::string::~string(&v27);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle>();
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      if ( *(_BYTE *)(((v25._M_string_length + 308) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(v25._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v25._M_string_length + 308) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_stage_id(v10, *(_DWORD *)(v25._M_string_length + 308));
      switch ( *(_DWORD *)(v2 + 80) )
      {
        case 1:
          v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_result(v12, 1u);
          break;
        case 2:
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_result(v13, 2u);
          break;
        case 5:
          v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_result(v15, 4u);
          break;
        case 8:
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_result(v14, 3u);
          break;
        case 9:
          v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_result(v11, 0);
          break;
        default:
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
            "LogVintageHuntingStageThree",
            733);
          v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v27,
                  (const char (*)[30])"[VINTAGE] unknow stop reason:");
          common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
            v16,
            (const proto::GalleryStopReason *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v27);
          break;
      }
      if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Scene::getSceneTimeSeconds(*(Scene *const *)(v25._M_string_length + 24));
      if ( *(_BYTE *)(((v25._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v25._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_DWORD *)(v25._M_string_length + 104) <= *(_DWORD *)(v2 + 64) )
      {
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v21 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((v25._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v25._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_use_time(
          v20,
          v21 - *(_DWORD *)(v25._M_string_length + 104));
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v23 = std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VintageHuntingThirdStageInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v23->boss_weak_times >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->boss_weak_times >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyVintageHuntingStageThreeSettle::set_boss_weak_times(v22, v23->boss_weak_times);
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&v25._anon_0,
          (const std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle> *)(v2 + 160));
        Player::printStatLog(v24, (MessagePtr *)&v25._anon_0, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v25._anon_0);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/vintage_hunting_gallery.cpp",
          "LogVintageHuntingStageThree",
          740);
        v17 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                &v27,
                (const char (*)[76])"[VINTAGE] LogVintageHuntingStageThree, now is smaller than start_time. now:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])", start_time_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v19,
          (const unsigned int *)(v25._M_string_length + 104));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyVintageHuntingStageThreeSettle> *const)(v2 + 160));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    std::shared_ptr<VintageHuntingThirdStageInfo>::~shared_ptr((std::shared_ptr<VintageHuntingThirdStageInfo> *const)(v2 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
