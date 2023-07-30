// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ability_group/player_ability_group_comp.cpp

// Line 37: range 00000000179BA506-00000000179BA59B
void __cdecl AbilityGroupSourceParam::reset(AbilityGroupSourceParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->source_type = ABILITY_GROUP_SOURCE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->source_id);
  }
  this->source_id = 0;
};

// Line 43: range 00000000179BA59C-00000000179BA5BA
int32_t __cdecl PlayerAbilityGroupComp::init(PlayerAbilityGroupComp *const this)
{
  PlayerAbilityGroupComp::initEventObservers(this);
  return 0;
};

// Line 50: range 00000000179BA5BC-00000000179BA9E7
void __cdecl PlayerAbilityGroupComp::initEventObservers(PlayerAbilityGroupComp *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // [rsp+20h] [rbp-F0h]
  unsigned int val; // [rsp+34h] [rbp-DCh] BYREF
  PlayerEventComp *event_comp; // [rsp+38h] [rbp-D8h]
  PlayerEventComp v7; // [rsp+40h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 11 this_ptr:53 64 16 11 this_wtr:59";
  *(_QWORD *)(p_M_start + 16) = PlayerAbilityGroupComp::initEventObservers;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/ability_group/player_ability_group_comp.cpp",
    "initEventObservers",
    51);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_);
  toThisPtr<PlayerAbilityGroupComp>((PlayerAbilityGroupComp *)(p_M_start + 32));
  if ( std::operator==<PlayerAbilityGroupComp>(0LL, (const std::shared_ptr<PlayerAbilityGroupComp> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "initEventObservers",
      56);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)&v7.event_center_,
      (const char (*)[54])"dynamic_pointer_cast to PlayerAbilityGroupComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_);
  }
  else
  {
    std::weak_ptr<PlayerAbilityGroupComp>::weak_ptr<PlayerAbilityGroupComp,void>(
      (std::weak_ptr<PlayerAbilityGroupComp> *const)(p_M_start + 64),
      (const std::shared_ptr<PlayerAbilityGroupComp> *)(p_M_start + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerAbilityGroupComp>::weak_ptr(
      (std::weak_ptr<PlayerAbilityGroupComp> *const)&v7._M_weak_this._M_refcount,
      (const std::weak_ptr<PlayerAbilityGroupComp> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlayerAbilityGroupComp,SetAvatarTeamToSceneEvent>(
      &v7,
      (std::weak_ptr<PlayerAbilityGroupComp> *)event_comp,
      (void (*)(PlayerAbilityGroupComp *, const SetAvatarTeamToSceneEvent *))&v7._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerAbilityGroupComp>::~weak_ptr((std::weak_ptr<PlayerAbilityGroupComp> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerAbilityGroupComp>::weak_ptr(
      (std::weak_ptr<PlayerAbilityGroupComp> *const)&v7,
      (const std::weak_ptr<PlayerAbilityGroupComp> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlayerAbilityGroupComp,DelAvatarEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerAbilityGroupComp> *)event_comp,
      (void (*)(PlayerAbilityGroupComp *, const DelAvatarEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerAbilityGroupComp>::~weak_ptr((std::weak_ptr<PlayerAbilityGroupComp> *const)&v7);
    std::weak_ptr<PlayerAbilityGroupComp>::~weak_ptr((std::weak_ptr<PlayerAbilityGroupComp> *const)(p_M_start + 64));
  }
  std::shared_ptr<PlayerAbilityGroupComp>::~shared_ptr((std::shared_ptr<PlayerAbilityGroupComp> *const)(p_M_start + 32));
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 69: range 00000000179BA9E8-00000000179BADD0
void __cdecl PlayerAbilityGroupComp::getAllTargetAbilitiesAndTalentsFromAbilityGroup(
        PlayerAbilityGroupComp *const this,
        TargetAbilityVec *target_ability_vec,
        TargetTalentVec *target_talent_vec,
        AvatarPtr *p_avatar_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  std::shared_ptr<Avatar> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 7 guid:75";
  *(_QWORD *)(v4 + 16) = PlayerAbilityGroupComp::getAllTargetAbilitiesAndTalentsFromAbilityGroup;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( std::operator==<Avatar>(0LL, p_avatar_ptr) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "getAllTargetAbilitiesAndTalentsFromAbilityGroup",
      72);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"nullptr avatar_ptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    *(_QWORD *)(v4 + 32) = Avatar::getGuid(v8);
    if ( PlayerAbilityGroupComp::getIsNeedReload(this) )
    {
      std::shared_ptr<Avatar>::shared_ptr(&v12, p_avatar_ptr);
      PlayerAbilityGroupComp::reloadFilterAndFillInMap(this, &v12, &this->guid_reload_group_map_);
      std::shared_ptr<Avatar>::~shared_ptr(&v12);
      std::shared_ptr<Avatar>::shared_ptr(&v12, p_avatar_ptr);
      PlayerAbilityGroupComp::fillTargetAbilityAndTalentVecFromMap(
        this,
        &this->guid_reload_group_map_,
        target_ability_vec,
        target_talent_vec,
        &v12);
      std::shared_ptr<Avatar>::~shared_ptr(&v12);
    }
    else
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
              &this->guid_cur_group_map_,
              (const unsigned __int64 *)(v4 + 32)) )
      {
        std::shared_ptr<Avatar>::shared_ptr(&v12, p_avatar_ptr);
        PlayerAbilityGroupComp::reloadFilterAndFillInMap(this, &v12, &this->guid_cur_group_map_);
        std::shared_ptr<Avatar>::~shared_ptr(&v12);
      }
      std::shared_ptr<Avatar>::shared_ptr(&v12, p_avatar_ptr);
      PlayerAbilityGroupComp::fillTargetAbilityAndTalentVecFromMap(
        this,
        &this->guid_cur_group_map_,
        target_ability_vec,
        target_talent_vec,
        &v12);
      std::shared_ptr<Avatar>::~shared_ptr(&v12);
    }
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 98: range 00000000179BADD2-00000000179BB022
void __cdecl PlayerAbilityGroupComp::getCurSkillDepotAbilitiesFromAbilityGroup(
        PlayerAbilityGroupComp *const this,
        TargetAbilityVec *target_ability_vec,
        AvatarPtr *p_avatar_ptr)
{
  common::milog::MiLogStream *v3; // rbx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rbx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t SkillDepotId; // eax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t AvatarId; // ecx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  const data::AvatarSkillDepotExcelConfig *skill_depot_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<Avatar>(0LL, p_avatar_ptr) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "getCurSkillDepotAbilitiesFromAbilityGroup",
      101);
    v3 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v15,
           (const char (*)[25])"nullptr avatar_ptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.avatar_skill_config_mgr;
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    SkillDepotId = Avatar::getSkillDepotId(v5);
    skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                               p_avatar_skill_config_mgr,
                               SkillDepotId);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( skill_depot_config_ptr )
    {
      if ( (unsigned __int8)std::string::empty(&skill_depot_config_ptr->skill_depot_ability_group) != 1 )
      {
        v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
        AvatarId = Avatar::getAvatarId(v9);
        PlayerAbilityGroupComp::fillTargetAbilityVec(
          this,
          &skill_depot_config_ptr->skill_depot_ability_group,
          target_ability_vec,
          AvatarId);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "getCurSkillDepotAbilitiesFromAbilityGroup",
        107);
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v15,
             (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      val = Avatar::getSkillDepotId(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
};

// Line 118: range 00000000179BB024-00000000179BB068
void __cdecl PlayerAbilityGroupComp::tryRefreshAbilityGroup(PlayerAbilityGroupComp *const this)
{
  PlayerAbilityGroupComp::refreshTeamAbilityGroups(this);
  PlayerAbilityGroupComp::refreshAvatarAbilityGroups(this);
  PlayerAbilityGroupComp::clearRefreshData(this);
  AbilityGroupSourceParam::reset(&this->source_param_);
};

// Line 126: range 00000000179BB06A-00000000179BB4A9
std::vector<std::string> *__cdecl PlayerAbilityGroupComp::getCurAvatarAbilityGroupsByGm[abi:cxx11](
        std::vector<std::string> *retstr,
        PlayerAbilityGroupComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::unordered_set<std::string> *v6; // rax
  std::__detail::_Node_iterator_base<std::string,true>::__node_type *M_cur; // r14
  std::unordered_set<std::string> *v8; // rax
  std::__detail::_Node_iterator_base<std::string,true>::__node_type *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  std::unordered_map<std::string,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::unordered_map<std::string,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<std::string,unsigned int> *__for_range; // [rsp+20h] [rbp-D0h]
  const std::pair<const std::string,unsigned int> *v15; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 12 cur_guid:134 64 16 14 avatar_ptr:128";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::getCurAvatarAbilityGroupsByGm[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::vector<std::string>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v2 + 64));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "getCurAvatarAbilityGroupsByGm",
      131);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"curAvatar nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_QWORD *)(v2 + 32) = Avatar::getGuid(v5);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
           &this->guid_cur_group_map_,
           (const unsigned __int64 *)(v2 + 32)) )
    {
      v6 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
             &this->guid_cur_group_map_,
             (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v2 + 32));
      M_cur = std::unordered_set<std::string>::end(v6)._M_cur;
      v8 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
             &this->guid_cur_group_map_,
             (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v2 + 32));
      v9 = std::unordered_set<std::string>::begin(v8)._M_cur;
      std::vector<std::string>::assign<std::__detail::_Node_iterator<std::string,true,true>,void>(
        retstr,
        (std::__detail::_Node_iterator<std::string,true,true>)v9,
        (std::__detail::_Node_iterator<std::string,true,true>)M_cur);
    }
    __for_range = &this->filter_none_group_map_;
    __for_begin._M_cur = std::unordered_map<std::string,unsigned int>::begin(&this->filter_none_group_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<std::string,unsigned int>::end(&this->filter_none_group_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(&__for_begin, &__for_end) )
    {
      v15 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*(&__for_begin);
      group_name = std::get<0ul,std::string const,unsigned int>(v15);
      count = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v15);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *count )
      {
        std::vector<std::string>::push_back(retstr, group_name);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "getCurAvatarAbilityGroupsByGm",
          143);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v18,
                (const char (*)[49])"ability_group count 0 but not erase, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, group_name);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  if ( v19 == (char *)v2 )
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
  return retstr;
};

// Line 152: range 00000000179BB4AA-00000000179BBA08
void __cdecl PlayerAbilityGroupComp::addNoneFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<std::string> *group_vec,
        bool is_allow_duplicate)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::unordered_map<std::string,unsigned int>::mapped_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::unordered_map<std::string,unsigned int>::mapped_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int val; // [rsp+24h] [rbp-6Ch] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+38h] [rbp-58h]
  const std::string *group_name; // [rsp+40h] [rbp-50h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v24; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-30h] BYREF

  __for_range = group_vec;
  __for_begin._M_current = std::vector<std::string>::begin(group_vec)._M_current;
  __for_end._M_current = std::vector<std::string>::end(group_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    if ( (unsigned __int8)std::string::empty(group_name) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addNoneFilterAbilityGroup",
        157);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v25,
        (const char (*)[24])"empty AbilityGroup name");
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_24;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v3->design_config.json_config_mgr, group_name);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( !config_ability_group_ptr )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addNoneFilterAbilityGroup",
        163);
      v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v25,
             (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, group_name);
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_24;
    }
    if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(this, group_name) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(
             &this->del_group_set_,
             group_name) )
      {
        std::unordered_set<std::string>::erase(&this->del_group_set_, group_name);
      }
      else
      {
        std::unordered_set<std::string>::insert(&this->add_group_set_, group_name);
      }
      v5 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_none_group_map_, group_name);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
    }
    else
    {
      if ( !is_allow_duplicate )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addNoneFilterAbilityGroup",
          187);
        v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
               &v25,
               (const char (*)[74])"duplicated NoneFilterAbilityGroup, dont add ability_group, ability_group:");
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, group_name);
        v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])", cur_count:");
        v9 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_none_group_map_, group_name);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, v9);
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_23;
      }
      v5 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_none_group_map_, group_name);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
    }
    ++*v5;
    PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "addNoneFilterAbilityGroup",
      191);
    v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v25, (const char (*)[28])off_2626BBC0);
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, group_name);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", cur_count:");
    v15 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_none_group_map_, group_name);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_23:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
LABEL_24:
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
};

// Line 197: range 00000000179BBA0A-00000000179BC009
void __cdecl PlayerAbilityGroupComp::delNoneFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<std::string> *group_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::unordered_map<std::string,unsigned int>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+28h] [rbp-118h]
  const std::string *group_name; // [rsp+30h] [rbp-110h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-B0h] BYREF
  common::milog::MiLogStream v26; // [rsp+B0h] [rbp-90h] BYREF
  char v27[112]; // [rsp+D0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 cur_count:219";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::delNoneFilterAbilityGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = group_vec;
  __for_begin._M_current = std::vector<std::string>::begin(group_vec)._M_current;
  __for_end._M_current = std::vector<std::string>::end(group_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    if ( (unsigned __int8)std::string::empty(group_name) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "delNoneFilterAbilityGroup",
        202);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v23,
        (const char (*)[24])"empty AbilityGroup name");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v5->design_config.json_config_mgr, group_name);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( config_ability_group_ptr )
      {
        if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(this, group_name) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delNoneFilterAbilityGroup",
            215);
          v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                 &v25,
                 (const char (*)[51])"NoneFilterAbilityGroup is not existed, group_name:");
          v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, group_name);
          v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          v10 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_none_group_map_, group_name);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = --*v10;
          if ( !*(_DWORD *)(v2 + 32) )
          {
            if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(
                   &this->add_group_set_,
                   group_name) )
            {
              std::unordered_set<std::string>::erase(&this->add_group_set_, group_name);
            }
            else
            {
              std::unordered_set<std::string>::insert(&this->del_group_set_, group_name);
            }
            std::unordered_map<std::string,unsigned int>::erase(&this->filter_none_group_map_, group_name);
            PlayerAbilityGroupComp::tryUnregisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
          }
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delNoneFilterAbilityGroup",
            233);
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v26, (const char (*)[40])off_2626BCC0);
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, group_name);
          v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", cur_count:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 32));
          v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "delNoneFilterAbilityGroup",
          208);
        v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v24,
               (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, group_name);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 239: range 00000000179BC00A-00000000179BC7CC
void __cdecl PlayerAbilityGroupComp::addAvatarFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<unsigned int> *avatar_id_vec,
        const std::vector<std::string> *group_vec,
        bool is_allow_duplicate)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::unordered_map<std::string,unsigned int> *v6; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::unordered_map<std::string,unsigned int> *v9; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  std::unordered_map<std::string,unsigned int> *v14; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  std::unordered_map<std::string,unsigned int> *v23; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rbx
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+40h] [rbp-F0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  const uint32_t *avatar_id; // [rsp+50h] [rbp-E0h]
  const std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-D8h]
  const std::string *group_name; // [rsp+60h] [rbp-D0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v39; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v40; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v41; // [rsp+A0h] [rbp-90h] BYREF
  common::milog::MiLogStream v42; // [rsp+C0h] [rbp-70h] BYREF
  common::milog::MiLogStream v43; // [rsp+E0h] [rbp-50h] BYREF
  common::milog::MiLogStream v44; // [rsp+100h] [rbp-30h] BYREF

  __for_range = avatar_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
LABEL_2:
  if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    __for_range_0 = group_vec;
    __for_begin_0._M_current = std::vector<std::string>::begin(group_vec)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
      {
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        goto LABEL_2;
      }
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(group_name) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addAvatarFilterAbilityGroup",
          246);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v40,
          (const char (*)[24])"empty AbilityGroup name");
        common::milog::MiLogStream::~MiLogStream(&v40);
        goto LABEL_29;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v4->design_config.json_config_mgr, group_name);
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( !config_ability_group_ptr )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addAvatarFilterAbilityGroup",
          252);
        v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v41,
               (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, group_name);
        common::milog::MiLogStream::~MiLogStream(&v41);
        goto LABEL_29;
      }
      if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !PlayerAbilityGroupComp::isHasAbilityGroupInAvatarFilter(this, group_name, *avatar_id) )
        break;
      if ( is_allow_duplicate )
      {
        v9 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
               &this->filter_avatar_group_map_,
               avatar_id);
        v10 = std::unordered_map<std::string,unsigned int>::operator[](v9, group_name);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v10;
        PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
        goto LABEL_26;
      }
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addAvatarFilterAbilityGroup",
        273);
      v11 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v43,
              (const char (*)[64])"duplicated AvatarFilterAbilityGroup, do nothing, ability_group:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, group_name);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", cur_count:");
      v14 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
              &this->filter_avatar_group_map_,
              avatar_id);
      v15 = std::unordered_map<std::string,unsigned int>::operator[](v14, group_name);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v15);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v43);
LABEL_29:
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    v6 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
           &this->filter_avatar_group_map_,
           avatar_id);
    v7 = std::unordered_map<std::string,unsigned int>::operator[](v6, group_name);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v7;
    if ( !PlayerAbilityGroupComp::getIsNeedReload(this) )
    {
      PlayerAbilityGroupComp::setIsNeedReload(this, 1);
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addAvatarFilterAbilityGroup",
        262);
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v42,
             (const char (*)[56])"addAvatarFilterAbilityGroup setIsNeedReload(true), uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
LABEL_26:
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "addAvatarFilterAbilityGroup",
      277);
    v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v44, (const char (*)[41])off_2626BE20);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, avatar_id);
    v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])", group_name:");
    v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, group_name);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])", cur_count:");
    v23 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
            &this->filter_avatar_group_map_,
            avatar_id);
    v24 = std::unordered_map<std::string,unsigned int>::operator[](v23, group_name);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v24);
    v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    goto LABEL_29;
  }
};

// Line 285: range 00000000179BC7CE-00000000179BCFBF
void __cdecl PlayerAbilityGroupComp::delAvatarFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<unsigned int> *avatar_id_vec,
        const std::vector<std::string> *group_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::unordered_map<std::string,unsigned int> *v11; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v12; // rax
  std::unordered_map<std::string,unsigned int> *v13; // rax
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::mapped_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  const uint32_t *avatar_id; // [rsp+50h] [rbp-140h]
  const std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-138h]
  const std::string *group_name; // [rsp+60h] [rbp-130h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v34; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v36; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v37; // [rsp+C0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v38; // [rsp+E0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v39; // [rsp+100h] [rbp-90h] BYREF
  char v40[112]; // [rsp+120h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 cur_count:306";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::delAvatarFilterAbilityGroup;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = avatar_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    __for_range_0 = group_vec;
    __for_begin_0._M_current = std::vector<std::string>::begin(group_vec)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
    {
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(group_name) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "delAvatarFilterAbilityGroup",
          292);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v35,
          (const char (*)[24])"empty AbilityGroup name");
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v6->design_config.json_config_mgr, group_name);
        std::shared_ptr<Config>::~shared_ptr(&v34);
        if ( config_ability_group_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !PlayerAbilityGroupComp::isHasAbilityGroupInAvatarFilter(this, group_name, *avatar_id) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "delAvatarFilterAbilityGroup",
              303);
            v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                   &v37,
                   (const char (*)[53])"AvatarFilterAbilityGroup is not existed, group_name:");
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, group_name);
            v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
          else
          {
            v11 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                    &this->filter_avatar_group_map_,
                    avatar_id);
            v12 = std::unordered_map<std::string,unsigned int>::operator[](v11, group_name);
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 32) = --*v12;
            if ( !*(_DWORD *)(v3 + 32) )
            {
              v13 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_avatar_group_map_,
                      avatar_id);
              std::unordered_map<std::string,unsigned int>::erase(v13, group_name);
              v14 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_avatar_group_map_,
                      avatar_id);
              if ( !std::unordered_map<std::string,unsigned int>::size(v14) )
                std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::erase(
                  &this->filter_avatar_group_map_,
                  avatar_id);
              if ( !PlayerAbilityGroupComp::getIsNeedReload(this) )
              {
                PlayerAbilityGroupComp::setIsNeedReload(this, 1);
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/ability_group/player_ability_group_comp.cpp",
                  "delAvatarFilterAbilityGroup",
                  315);
                v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        &v38,
                        (const char (*)[56])"delAvatarFilterAbilityGroup setIsNeedReload(true), uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
                common::milog::MiLogStream::~MiLogStream(&v38);
              }
              PlayerAbilityGroupComp::tryUnregisterAbilitySourceGroupId(
                this,
                &config_ability_group_ptr->target_abilities);
            }
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "delAvatarFilterAbilityGroup",
              319);
            v16 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v39,
                    (const char (*)[41])off_2626BFE0);
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, avatar_id);
            v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v17,
                    (const char (*)[14])", group_name:");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, group_name);
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])", cur_count:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 32));
            v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delAvatarFilterAbilityGroup",
            298);
          v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v36,
                 (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, group_name);
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 327: range 00000000179BCFC0-00000000179BD84D
void __cdecl PlayerAbilityGroupComp::addGuidFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<long unsigned int> *guid_vec,
        const std::vector<std::string> *group_vec,
        bool is_allow_duplicate)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::unordered_map<std::string,unsigned int> *v10; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::unordered_map<std::string,unsigned int> *v13; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::unordered_map<std::string,unsigned int> *v20; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::unordered_map<std::string,unsigned int> *v29; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+40h] [rbp-150h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+48h] [rbp-148h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  const std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-138h]
  const std::string *group_name; // [rsp+60h] [rbp-130h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v44; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v45; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v46; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v47; // [rsp+C0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v48; // [rsp+E0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v49; // [rsp+100h] [rbp-90h] BYREF
  char v50[112]; // [rsp+120h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 guid:328";
  *(_QWORD *)(v4 + 16) = PlayerAbilityGroupComp::addGuidFilterAbilityGroup;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  __for_range = guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(guid_vec)._M_current;
LABEL_5:
  if ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v7 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    *(_QWORD *)(v4 + 32) = *(_QWORD *)v7;
    __for_range_0 = group_vec;
    __for_begin_0._M_current = std::vector<std::string>::begin(group_vec)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
      {
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
        goto LABEL_5;
      }
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(group_name) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addGuidFilterAbilityGroup",
          334);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v45,
          (const char (*)[24])"empty AbilityGroup name");
        common::milog::MiLogStream::~MiLogStream(&v45);
        goto LABEL_32;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
      config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v8->design_config.json_config_mgr, group_name);
      std::shared_ptr<Config>::~shared_ptr(&v44);
      if ( !config_ability_group_ptr )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addGuidFilterAbilityGroup",
          340);
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v46,
               (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, group_name);
        common::milog::MiLogStream::~MiLogStream(&v46);
        goto LABEL_32;
      }
      if ( !PlayerAbilityGroupComp::isHasAbilityGroupInGuidFilter(this, group_name, *(_QWORD *)(v4 + 32)) )
        break;
      if ( is_allow_duplicate )
      {
        v13 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
                &this->filter_guid_map_,
                (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v4 + 32));
        v14 = std::unordered_map<std::string,unsigned int>::operator[](v13, group_name);
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v14;
        PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
        goto LABEL_29;
      }
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addGuidFilterAbilityGroup",
        361);
      v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v48,
              (const char (*)[53])"duplicated GuidFilterAbilityGroup, do nothing, guid:");
      v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v15,
              (const unsigned __int64 *)(v4 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])", ability_group:");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, group_name);
      v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])", cur_count:");
      v20 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
              &this->filter_guid_map_,
              (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v4 + 32));
      v21 = std::unordered_map<std::string,unsigned int>::operator[](v20, group_name);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, v21);
      v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
      common::milog::MiLogStream::~MiLogStream(&v48);
LABEL_32:
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    v10 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
            &this->filter_guid_map_,
            (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v4 + 32));
    v11 = std::unordered_map<std::string,unsigned int>::operator[](v10, group_name);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v11;
    if ( !PlayerAbilityGroupComp::getIsNeedReload(this) )
    {
      PlayerAbilityGroupComp::setIsNeedReload(this, 1);
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addGuidFilterAbilityGroup",
        350);
      v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v47,
              (const char (*)[54])"addGuidFilterAbilityGroup setIsNeedReload(true), uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
LABEL_29:
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "addGuidFilterAbilityGroup",
      365);
    v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v49, (const char (*)[34])off_2626C1A0);
    v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v24,
            (const unsigned __int64 *)(v4 + 32));
    v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])", ability_group:");
    v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, group_name);
    v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])", cur_count:");
    v29 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
            &this->filter_guid_map_,
            (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v4 + 32));
    v30 = std::unordered_map<std::string,unsigned int>::operator[](v29, group_name);
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, v30);
    v32 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
    common::milog::MiLogStream::~MiLogStream(&v49);
    goto LABEL_32;
  }
  if ( v50 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 373: range 00000000179BD84E-00000000179BE040
void __cdecl PlayerAbilityGroupComp::delGuidFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<long unsigned int> *guid_vec,
        const std::vector<std::string> *group_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::unordered_map<std::string,unsigned int> *v12; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v13; // rax
  std::unordered_map<std::string,unsigned int> *v14; // rax
  std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::mapped_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  unsigned int val; // [rsp+2Ch] [rbp-184h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+40h] [rbp-170h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+48h] [rbp-168h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+50h] [rbp-160h]
  const std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-158h]
  const std::string *group_name; // [rsp+60h] [rbp-150h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+68h] [rbp-148h]
  std::shared_ptr<Config> v34; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v36; // [rsp+A0h] [rbp-110h] BYREF
  common::milog::MiLogStream v37; // [rsp+C0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v38; // [rsp+E0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v39; // [rsp+100h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+120h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 cur_count:394 64 8 8 guid:374";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::delGuidFilterAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  __for_range = guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    *(_QWORD *)(v3 + 64) = *(_QWORD *)v6;
    __for_range_0 = group_vec;
    __for_begin_0._M_current = std::vector<std::string>::begin(group_vec)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
    {
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(group_name) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "delGuidFilterAbilityGroup",
          380);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v35,
          (const char (*)[24])"empty AbilityGroup name");
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v7->design_config.json_config_mgr, group_name);
        std::shared_ptr<Config>::~shared_ptr(&v34);
        if ( config_ability_group_ptr )
        {
          if ( !PlayerAbilityGroupComp::isHasAbilityGroupInGuidFilter(this, group_name, *(_QWORD *)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "delGuidFilterAbilityGroup",
              391);
            v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                   &v37,
                   (const char (*)[51])"GuidFilterAbilityGroup is not existed, group_name:");
            v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, group_name);
            v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
          else
          {
            v12 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
                    &this->filter_guid_map_,
                    (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 64));
            v13 = std::unordered_map<std::string,unsigned int>::operator[](v12, group_name);
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = --*v13;
            if ( !*(_DWORD *)(v3 + 48) )
            {
              v14 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_guid_map_,
                      (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 64));
              std::unordered_map<std::string,unsigned int>::erase(v14, group_name);
              v15 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_guid_map_,
                      (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 64));
              if ( !std::unordered_map<std::string,unsigned int>::size(v15) )
                std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::erase(
                  &this->filter_guid_map_,
                  (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 64));
              if ( !PlayerAbilityGroupComp::getIsNeedReload(this) )
              {
                PlayerAbilityGroupComp::setIsNeedReload(this, 1);
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/ability_group/player_ability_group_comp.cpp",
                  "delGuidFilterAbilityGroup",
                  402);
                v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                        &v38,
                        (const char (*)[54])"delGuidFilterAbilityGroup setIsNeedReload(true), uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
                common::milog::MiLogStream::~MiLogStream(&v38);
              }
              PlayerAbilityGroupComp::tryUnregisterAbilitySourceGroupId(
                this,
                &config_ability_group_ptr->target_abilities);
            }
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "delGuidFilterAbilityGroup",
              406);
            v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v39,
                    (const char (*)[34])off_2626C340);
            v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v17,
                    (const unsigned __int64 *)(v3 + 64));
            v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v18,
                    (const char (*)[14])", group_name:");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, group_name);
            v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v20,
                    (const char (*)[13])", cur_count:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 48));
            v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delGuidFilterAbilityGroup",
            386);
          v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v36,
                 (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, group_name);
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( v40 == (char *)v3 )
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

// Line 414: range 00000000179BE042-00000000179BE834
void __cdecl PlayerAbilityGroupComp::addFeatureTagFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<unsigned int> *feature_tag_vec,
        const std::vector<std::string> *group_vec,
        bool is_allow_duplicate)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::unordered_map<std::string,unsigned int> *v6; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::unordered_map<std::string,unsigned int> *v9; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  std::unordered_map<std::string,unsigned int> *v16; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rbx
  std::unordered_map<std::string,unsigned int> *v25; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rbx
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+40h] [rbp-F0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  const uint32_t *feature_id; // [rsp+50h] [rbp-E0h]
  const std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-D8h]
  const std::string *group_name; // [rsp+60h] [rbp-D0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v41; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-90h] BYREF
  common::milog::MiLogStream v44; // [rsp+C0h] [rbp-70h] BYREF
  common::milog::MiLogStream v45; // [rsp+E0h] [rbp-50h] BYREF
  common::milog::MiLogStream v46; // [rsp+100h] [rbp-30h] BYREF

  __for_range = feature_tag_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(feature_tag_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(feature_tag_vec)._M_current;
LABEL_2:
  if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    feature_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    __for_range_0 = group_vec;
    __for_begin_0._M_current = std::vector<std::string>::begin(group_vec)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
      {
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        goto LABEL_2;
      }
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(group_name) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addFeatureTagFilterAbilityGroup",
          421);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v42,
          (const char (*)[41])"[ABILITY_GROUP] empty ability_group name");
        common::milog::MiLogStream::~MiLogStream(&v42);
        goto LABEL_29;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v41);
      v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
      config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v4->design_config.json_config_mgr, group_name);
      std::shared_ptr<Config>::~shared_ptr(&v41);
      if ( !config_ability_group_ptr )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addFeatureTagFilterAbilityGroup",
          427);
        v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v43,
               (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, group_name);
        common::milog::MiLogStream::~MiLogStream(&v43);
        goto LABEL_29;
      }
      if ( *(_BYTE *)(((unsigned __int64)feature_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)feature_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)feature_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !PlayerAbilityGroupComp::isHasAbilityGroupInFeatureFilter(this, group_name, *feature_id) )
        break;
      if ( is_allow_duplicate )
      {
        v9 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
               &this->filter_feature_tag_id_map_,
               feature_id);
        v10 = std::unordered_map<std::string,unsigned int>::operator[](v9, group_name);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v10;
        PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
        goto LABEL_26;
      }
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addFeatureTagFilterAbilityGroup",
        448);
      v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v45,
              (const char (*)[65])"duplicated FeatureTagFilterAbilityGroup, do nothing, feature_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, feature_id);
      v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])", ability_group:");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, group_name);
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", cur_count:");
      v16 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
              &this->filter_feature_tag_id_map_,
              feature_id);
      v17 = std::unordered_map<std::string,unsigned int>::operator[](v16, group_name);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, v17);
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
LABEL_29:
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    v6 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
           &this->filter_feature_tag_id_map_,
           feature_id);
    v7 = std::unordered_map<std::string,unsigned int>::operator[](v6, group_name);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v7;
    if ( !PlayerAbilityGroupComp::getIsNeedReload(this) )
    {
      PlayerAbilityGroupComp::setIsNeedReload(this, 1);
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addFeatureTagFilterAbilityGroup",
        437);
      v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v44,
             (const char (*)[60])"addFeatureTagFilterAbilityGroup setIsNeedReload(true), uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
LABEL_26:
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "addFeatureTagFilterAbilityGroup",
      453);
    v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(&v46, (const char (*)[46])off_2626C520);
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, feature_id);
    v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])", ability_group:");
    v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, group_name);
    v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])", cur_count:");
    v25 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
            &this->filter_feature_tag_id_map_,
            feature_id);
    v26 = std::unordered_map<std::string,unsigned int>::operator[](v25, group_name);
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, v26);
    v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
    common::milog::MiLogStream::~MiLogStream(&v46);
    goto LABEL_29;
  }
};

// Line 462: range 00000000179BE836-00000000179BF057
void __cdecl PlayerAbilityGroupComp::delFeatureTagFilterAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<unsigned int> *feature_tag_vec,
        const std::vector<std::string> *group_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::unordered_map<std::string,unsigned int> *v13; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v14; // rax
  std::unordered_map<std::string,unsigned int> *v15; // rax
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::mapped_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  const uint32_t *feature_id; // [rsp+50h] [rbp-140h]
  const std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-138h]
  const std::string *group_name; // [rsp+60h] [rbp-130h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v36; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v38; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v39; // [rsp+C0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v40; // [rsp+E0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v41; // [rsp+100h] [rbp-90h] BYREF
  char v42[112]; // [rsp+120h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 cur_count:483";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::delFeatureTagFilterAbilityGroup;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = feature_tag_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(feature_tag_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(feature_tag_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    feature_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    __for_range_0 = group_vec;
    __for_begin_0._M_current = std::vector<std::string>::begin(group_vec)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
    {
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(group_name) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "delFeatureTagFilterAbilityGroup",
          469);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v37,
          (const char (*)[41])"[ABILITY_GROUP] empty ability_group name");
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v36);
        v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
        config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v6->design_config.json_config_mgr, group_name);
        std::shared_ptr<Config>::~shared_ptr(&v36);
        if ( config_ability_group_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)feature_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)feature_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)feature_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !PlayerAbilityGroupComp::isHasAbilityGroupInFeatureFilter(this, group_name, *feature_id) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "delFeatureTagFilterAbilityGroup",
              480);
            v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                   &v39,
                   (const char (*)[56])"FeatureTagFilterAbilityGroup is not existed, feature_id");
            v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, feature_id);
            v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v9,
                    (const char (*)[14])", group_name:");
            v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, group_name);
            v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          else
          {
            v13 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                    &this->filter_feature_tag_id_map_,
                    feature_id);
            v14 = std::unordered_map<std::string,unsigned int>::operator[](v13, group_name);
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 32) = --*v14;
            if ( !*(_DWORD *)(v3 + 32) )
            {
              v15 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_feature_tag_id_map_,
                      feature_id);
              std::unordered_map<std::string,unsigned int>::erase(v15, group_name);
              v16 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_feature_tag_id_map_,
                      feature_id);
              if ( !std::unordered_map<std::string,unsigned int>::size(v16) )
                std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::erase(
                  &this->filter_feature_tag_id_map_,
                  feature_id);
              if ( !PlayerAbilityGroupComp::getIsNeedReload(this) )
              {
                PlayerAbilityGroupComp::setIsNeedReload(this, 1);
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/ability_group/player_ability_group_comp.cpp",
                  "delFeatureTagFilterAbilityGroup",
                  491);
                v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                        &v40,
                        (const char (*)[60])"delFeatureTagFilterAbilityGroup setIsNeedReload(true), uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
                common::milog::MiLogStream::~MiLogStream(&v40);
              }
              PlayerAbilityGroupComp::tryUnregisterAbilitySourceGroupId(
                this,
                &config_ability_group_ptr->target_abilities);
            }
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "delFeatureTagFilterAbilityGroup",
              495);
            v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v41,
                    (const char (*)[45])off_2626C6A0);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, feature_id);
            v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v19,
                    (const char (*)[14])", group_name:");
            v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, group_name);
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])", cur_count:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v3 + 32));
            v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
            common::milog::MiLogStream::~MiLogStream(&v41);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delFeatureTagFilterAbilityGroup",
            475);
          v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v38,
                 (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, group_name);
          common::milog::MiLogStream::~MiLogStream(&v38);
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 505: range 00000000179BF8A4-00000000179BFA60
void __cdecl PlayerAbilityGroupComp::refreshAvatarAbilityGroups(PlayerAbilityGroupComp *const this)
{
  PlayerAvatarComp *AvatarComp; // rbx
  PlayerAvatarComp *v3; // rbx
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerAbilityGroupComp::getIsNeedReload(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    std::function<ForeachPolicy ()(Avatar &)>::function<PlayerAbilityGroupComp::refreshAvatarAbilityGroups(void)::{lambda(Avatar &)#1},void,void>(
      &p_func,
      (PlayerAbilityGroupComp::refreshAvatarAbilityGroups::<lambda(Avatar&)>)this);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, &p_func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
    PlayerAbilityGroupComp::setIsNeedReload(this, 0);
    std::swap<unsigned long,std::unordered_set<std::string>,std::hash<unsigned long>,std::equal_to<unsigned long>,std::allocator<std::pair<unsigned long const,std::unordered_set<std::string>>>>(
      &this->guid_cur_group_map_,
      &this->guid_reload_group_map_);
    std::unordered_map<unsigned long,std::unordered_set<std::string>>::clear(&this->guid_reload_group_map_);
  }
  else if ( !std::unordered_set<std::string>::empty(&this->add_group_set_)
         || !std::unordered_set<std::string>::empty(&this->del_group_set_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getAvatarComp(this->player_);
    std::function<ForeachPolicy ()(Avatar &)>::function<PlayerAbilityGroupComp::refreshAvatarAbilityGroups(void)::{lambda(Avatar &)#2},void,void>(
      &p_func,
      (PlayerAbilityGroupComp::refreshAvatarAbilityGroups::<lambda(Avatar&)>)this);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(v3, &p_func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
  }
};

// Line 508: range 00000000179BF058-00000000179BF5FC
ForeachPolicy __cdecl PlayerAbilityGroupComp::refreshAvatarAbilityGroups(void)::{lambda(Avatar &)#1}::operator()(
        const PlayerAbilityGroupComp::refreshAvatarAbilityGroups::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  RefreshAbilityGuard *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerAbilityGroupComp *this; // r14
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *p_guid_reload_group_map; // r15
  PlayerAbilityGroupComp *v7; // r14
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *p_guid_cur_group_map; // r15
  uint64_t Guid; // rax
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *p_guid_add_group_map; // r14
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::mapped_type *v11; // rax
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *p_guid_del_group_map; // r14
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::mapped_type *v13; // rax
  char v14; // al
  AbilityComp *AbilityComp; // rax
  PlayerAbilityGroupComp *v16; // r14
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *v17; // r15
  std::unordered_set<std::string> *v18; // rdx
  PlayerAbilityGroupComp *v19; // r14
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *v20; // r15
  std::unordered_set<std::string> *v21; // rdx
  ForeachPolicy result; // eax
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *cur_guid_group_map; // [rsp+8h] [rbp-E8h]
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type __k; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type v25; // [rsp+28h] [rbp-C8h] BYREF
  AvatarPtr p_avatar_ptr; // [rsp+30h] [rbp-C0h] BYREF
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (RefreshAbilityGuard *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (RefreshAbilityGuard *)v3;
  }
  *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 25 refresh_ability_guard:519";
  v2->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerAbilityGroupComp::refreshAvatarAbilityGroups(void)::{lambda(Avatar &)#1}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  p_guid_reload_group_map = &__closure->__this->guid_reload_group_map_;
  toThisPtr<Avatar>((Avatar *)&p_avatar_ptr);
  PlayerAbilityGroupComp::reloadFilterAndFillInMap(this, &p_avatar_ptr, p_guid_reload_group_map);
  std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __closure->__this;
  cur_guid_group_map = &__closure->__this->guid_reload_group_map_;
  p_guid_cur_group_map = &__closure->__this->guid_cur_group_map_;
  Guid = Avatar::getGuid(avatar);
  PlayerAbilityGroupComp::initGuidAddAndDelGroup(v7, Guid, p_guid_cur_group_map, cur_guid_group_map);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !std::unordered_set<std::string>::empty(&__closure->__this->add_group_set_) )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !std::unordered_set<std::string>::empty(&__closure->__this->del_group_set_) )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_guid_add_group_map = &__closure->__this->guid_add_group_map_;
  __k = Avatar::getGuid(avatar);
  v11 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](p_guid_add_group_map, &__k);
  if ( !std::unordered_set<std::string>::empty(v11) )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_guid_del_group_map = &__closure->__this->guid_del_group_map_;
  v25 = Avatar::getGuid(avatar);
  v13 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](p_guid_del_group_map, &v25);
  if ( std::unordered_set<std::string>::empty(v13) )
    v14 = 1;
  else
LABEL_21:
    v14 = 0;
  if ( !v14 )
  {
    RefreshAbilityGuard::RefreshAbilityGuard(v2 + 1);
    RefreshAbilityGuard::addCreature(v2 + 1, avatar);
    AbilityComp = Creature::getAbilityComp(avatar);
    AbilityComp::setIsNeedRefresh(AbilityComp, 1);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAbilityGroupComp::foreachSetAndAddAbilityGroup(__closure->__this, avatar, &__closure->__this->add_group_set_);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAbilityGroupComp::foreachSetAndRemoveAbilityGroup(
      __closure->__this,
      avatar,
      &__closure->__this->del_group_set_);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = __closure->__this;
    v17 = &__closure->__this->guid_add_group_map_;
    v25 = Avatar::getGuid(avatar);
    v18 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](v17, &v25);
    PlayerAbilityGroupComp::foreachSetAndAddAbilityGroup(v16, avatar, v18);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = __closure->__this;
    v20 = &__closure->__this->guid_del_group_map_;
    v25 = Avatar::getGuid(avatar);
    v21 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](v20, &v25);
    PlayerAbilityGroupComp::foreachSetAndRemoveAbilityGroup(v19, avatar, v21);
    RefreshAbilityGuard::~RefreshAbilityGuard(v2 + 1);
  }
  result = FOREACH_CONTINUE;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 535: range 00000000179BF5FE-00000000179BF8A3
ForeachPolicy __cdecl PlayerAbilityGroupComp::refreshAvatarAbilityGroups(void)::{lambda(Avatar &)#2}::operator()(
        const PlayerAbilityGroupComp::refreshAvatarAbilityGroups::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  RefreshAbilityGuard *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  AbilityComp *AbilityComp; // rax
  ForeachPolicy result; // eax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (RefreshAbilityGuard *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (RefreshAbilityGuard *)v3;
  }
  *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 25 refresh_ability_guard:541";
  v2->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerAbilityGroupComp::refreshAvatarAbilityGroups(void)::{lambda(Avatar &)#2}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !std::unordered_set<std::string>::empty(&__closure->__this->add_group_set_) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( std::unordered_set<std::string>::empty(&__closure->__this->del_group_set_) )
    v5 = 1;
  else
LABEL_11:
    v5 = 0;
  if ( !v5 )
  {
    RefreshAbilityGuard::RefreshAbilityGuard(v2 + 1);
    RefreshAbilityGuard::addCreature(v2 + 1, avatar);
    AbilityComp = Creature::getAbilityComp(avatar);
    AbilityComp::setIsNeedRefresh(AbilityComp, 1);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAbilityGroupComp::foreachSetAndAddAbilityGroup(__closure->__this, avatar, &__closure->__this->add_group_set_);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAbilityGroupComp::foreachSetAndRemoveAbilityGroup(
      __closure->__this,
      avatar,
      &__closure->__this->del_group_set_);
    RefreshAbilityGuard::~RefreshAbilityGuard(v2 + 1);
  }
  result = FOREACH_CONTINUE;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 554: range 00000000179BFA62-00000000179C03A5
void __cdecl PlayerAbilityGroupComp::reloadFilterAndFillInMap(
        PlayerAbilityGroupComp *const this,
        AvatarPtr *p_avatar_ptr,
        std::unordered_map<long unsigned int,std::unordered_set<std::string>> *guid_group_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::unordered_set<std::string> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::unordered_set<std::string> *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::unordered_set<std::string> *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v14; // rdx
  common::milog::MiLogStream *v15; // rax
  std::unordered_set<std::string> *v16; // rax
  std::unordered_set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-198h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-190h] BYREF
  std::unordered_map<std::string,unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-188h] BYREF
  std::unordered_map<std::string,unsigned int>::iterator __for_end; // [rsp+40h] [rbp-180h] BYREF
  std::unordered_map<std::string,unsigned int> *__for_range; // [rsp+48h] [rbp-178h]
  const std::pair<const std::string,unsigned int> *v23; // [rsp+50h] [rbp-170h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name; // [rsp+58h] [rbp-168h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count; // [rsp+60h] [rbp-160h]
  std::unordered_map<std::string,unsigned int> *__for_range_0; // [rsp+68h] [rbp-158h]
  const std::pair<const std::string,unsigned int> *v27; // [rsp+70h] [rbp-150h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name_0; // [rsp+78h] [rbp-148h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count_0; // [rsp+80h] [rbp-140h]
  std::unordered_set<unsigned int> *__for_range_1; // [rsp+88h] [rbp-138h]
  std::unordered_map<std::string,unsigned int> *__for_range_2; // [rsp+90h] [rbp-130h]
  const std::pair<const std::string,unsigned int> *v32; // [rsp+98h] [rbp-128h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name_1; // [rsp+A0h] [rbp-120h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count_1; // [rsp+A8h] [rbp-118h]
  std::shared_ptr<Config> v35; // [rsp+B0h] [rbp-110h] BYREF
  common::milog::MiLogStream v36; // [rsp+C0h] [rbp-100h] BYREF
  char v37[224]; // [rsp+E0h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 avatar_id:560 48 4 6 id:590 64 8 8 guid:561 96 56 15 feature_set:587";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::reloadFilterAndFillInMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  if ( std::operator==<Avatar>(0LL, p_avatar_ptr) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "reloadFilterAndFillInMap",
      557);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v36, (const char (*)[19])"avatar_ptr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    *(_DWORD *)(v3 + 32) = Avatar::getAvatarId(v6);
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    *(_QWORD *)(v3 + 64) = Avatar::getGuid(v7);
    v8 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
           guid_group_map,
           (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v3 + 64));
    std::unordered_set<std::string>::clear(v8);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>,unsigned int>(
           &this->filter_avatar_group_map_,
           (const unsigned int *)(v3 + 32)) )
    {
      __for_range = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                      &this->filter_avatar_group_map_,
                      (const std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
      __for_begin._M_cur = std::unordered_map<std::string,unsigned int>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_map<std::string,unsigned int>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(&__for_begin, &__for_end) )
      {
        v23 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*(&__for_begin);
        group_name = std::get<0ul,std::string const,unsigned int>(v23);
        count = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v23);
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *count )
        {
          v10 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                  guid_group_map,
                  (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v3 + 64));
          std::unordered_set<std::string>::insert(v10, group_name);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "reloadFilterAndFillInMap",
            569);
          v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v36,
                 (const char (*)[49])"ability_group count 0 but not erase, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, group_name);
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
        std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++(&__for_begin);
      }
    }
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>,unsigned long>(
           &this->filter_guid_map_,
           (const unsigned __int64 *)(v3 + 64)) )
    {
      __for_range_0 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
                        &this->filter_guid_map_,
                        (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 64));
      __for_begin._M_cur = std::unordered_map<std::string,unsigned int>::begin(__for_range_0)._M_cur;
      __for_end._M_cur = std::unordered_map<std::string,unsigned int>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(&__for_begin, &__for_end) )
      {
        v27 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*(&__for_begin);
        group_name_0 = std::get<0ul,std::string const,unsigned int>(v27);
        count_0 = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v27);
        if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *count_0 )
        {
          v12 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                  guid_group_map,
                  (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v3 + 64));
          std::unordered_set<std::string>::insert(v12, group_name_0);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "reloadFilterAndFillInMap",
            581);
          v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v36,
                  (const char (*)[49])"ability_group count 0 but not erase, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, group_name_0);
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
        std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++(&__for_begin);
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    TxtConfigMgr::getAvatarFeatures(
      (std::unordered_set<unsigned int> *)(v3 + 96),
      &v13->design_config.txt_config_mgr,
      *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( !std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v3 + 96)) )
    {
      __for_range_1 = (std::unordered_set<unsigned int> *)(v3 + 96);
      __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 96))._M_cur;
      __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
      {
        v14 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v14;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>,unsigned int>(
               &this->filter_feature_tag_id_map_,
               (const unsigned int *)(v3 + 48)) )
        {
          __for_range_2 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
                            &this->filter_feature_tag_id_map_,
                            (const std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 48));
          __for_begin._M_cur = std::unordered_map<std::string,unsigned int>::begin(__for_range_2)._M_cur;
          __for_end._M_cur = std::unordered_map<std::string,unsigned int>::end(__for_range_2)._M_cur;
          while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(&__for_begin, &__for_end) )
          {
            v32 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*(&__for_begin);
            group_name_1 = std::get<0ul,std::string const,unsigned int>(v32);
            count_1 = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v32);
            if ( *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)count_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *count_1 )
            {
              v16 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                      guid_group_map,
                      (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v3 + 64));
              std::unordered_set<std::string>::insert(v16, group_name_1);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/ability_group/player_ability_group_comp.cpp",
                "reloadFilterAndFillInMap",
                598);
              v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v36,
                      (const char (*)[49])"ability_group count 0 but not erase, group_name:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, group_name_1);
              common::milog::MiLogStream::~MiLogStream(&v36);
            }
            std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++(&__for_begin);
          }
        }
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
      }
    }
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 96));
  }
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 610: range 00000000179C03A6-00000000179C0764
void __fastcall PlayerAbilityGroupComp::initGuidAddAndDelGroup(
        PlayerAbilityGroupComp *const this,
        uint64_t guid,
        std::unordered_map<long unsigned int,std::unordered_set<std::string>> *pre_guid_group_map,
        std::unordered_map<long unsigned int,std::unordered_set<std::string>> *cur_guid_group_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::unordered_set<std::string> *v8; // rax
  std::unordered_set<std::string> *v9; // rax
  std::unordered_set<std::string> *v10; // rax
  std::unordered_set<std::string> *v11; // rax
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::mapped_type *v12; // r14
  std::unordered_set<std::string> *v13; // rax
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::mapped_type *v14; // r14
  std::unordered_set<std::string> *v15; // rax
  std::unordered_set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_set<std::string>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_set<std::string> *__for_range; // [rsp+30h] [rbp-90h]
  std::unordered_set<std::string> *__for_range_0; // [rsp+38h] [rbp-88h]
  const std::string *group_name_0; // [rsp+40h] [rbp-80h]
  const std::string *group_name; // [rsp+48h] [rbp-78h]
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 guid:609";
  *(_QWORD *)(v4 + 16) = PlayerAbilityGroupComp::initGuidAddAndDelGroup;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = guid;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
         pre_guid_group_map,
         (const unsigned __int64 *)(v4 + 32))
    && common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
         cur_guid_group_map,
         (const unsigned __int64 *)(v4 + 32)) )
  {
    __for_range = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                    pre_guid_group_map,
                    (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
    __for_begin._M_cur = std::unordered_set<std::string>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_set<std::string>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
    {
      group_name = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
      v8 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
             cur_guid_group_map,
             (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(v8, group_name) )
      {
        v9 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
               &this->guid_del_group_map_,
               (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
        std::unordered_set<std::string>::insert(v9, group_name);
      }
      std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
    }
    __for_range_0 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                      cur_guid_group_map,
                      (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
    __for_begin._M_cur = std::unordered_set<std::string>::begin(__for_range_0)._M_cur;
    __for_end._M_cur = std::unordered_set<std::string>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
    {
      group_name_0 = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
      v10 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
              pre_guid_group_map,
              (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(v10, group_name_0) )
      {
        v11 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                &this->guid_add_group_map_,
                (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
        std::unordered_set<std::string>::insert(v11, group_name_0);
      }
      std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
    }
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
              cur_guid_group_map,
              (const unsigned __int64 *)(v4 + 32)) )
  {
    v12 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
            cur_guid_group_map,
            (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
    v13 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
            &this->guid_add_group_map_,
            (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
    std::unordered_set<std::string>::operator=(v13, v12);
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
              pre_guid_group_map,
              (const unsigned __int64 *)(v4 + 32)) )
  {
    v14 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
            pre_guid_group_map,
            (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
    v15 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
            &this->guid_del_group_map_,
            (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v4 + 32));
    std::unordered_set<std::string>::operator=(v15, v14);
  }
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 639: range 00000000179C0766-00000000179C07E0
void __cdecl PlayerAbilityGroupComp::clearRefreshData(PlayerAbilityGroupComp *const this)
{
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::clear(&this->guid_add_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::clear(&this->guid_del_group_map_);
  std::unordered_set<std::string>::clear(&this->add_group_set_);
  std::unordered_set<std::string>::clear(&this->del_group_set_);
  std::unordered_set<std::string>::clear(&this->team_add_group_set_);
  std::unordered_set<std::string>::clear(&this->team_del_group_set_);
};

// Line 649: range 00000000179C07E2-00000000179C0D60
void __cdecl PlayerAbilityGroupComp::foreachSetAndAddAbilityGroup(
        PlayerAbilityGroupComp *const this,
        Creature *creature,
        std::unordered_set<std::string> *group_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  AbilityComp *AbilityComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TalentComp *TalentComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int val; // [rsp+20h] [rbp-120h] BYREF
  int32_t ability_name_hash; // [rsp+24h] [rbp-11Ch]
  std::unordered_set<std::string>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_set<std::string>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin_0; // [rsp+38h] [rbp-108h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end_0; // [rsp+40h] [rbp-100h] BYREF
  std::unordered_set<std::string> *__for_range; // [rsp+48h] [rbp-F8h]
  const std::string *group_name; // [rsp+50h] [rbp-F0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+58h] [rbp-E8h]
  const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec; // [rsp+60h] [rbp-E0h]
  const data::ConfigDynamicTalentList *dynamic_talent_vec; // [rsp+68h] [rbp-D8h]
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range_0; // [rsp+70h] [rbp-D0h]
  const std::vector<data::ConfigDynamicTalent> *__for_range_1; // [rsp+78h] [rbp-C8h]
  const data::ConfigDynamicTalent *dynamic_talent; // [rsp+80h] [rbp-C0h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+88h] [rbp-B8h]
  std::shared_ptr<Config> v30; // [rsp+90h] [rbp-B0h] BYREF
  std::shared_ptr<Creature> v31; // [rsp+A0h] [rbp-A0h] BYREF
  common::milog::MiLogStream v32; // [rsp+B0h] [rbp-90h] BYREF
  char v33[112]; // [rsp+D0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:668";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::foreachSetAndAddAbilityGroup;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = group_set;
  __for_begin._M_cur = std::unordered_set<std::string>::begin(group_set)._M_cur;
  __for_end._M_cur = std::unordered_set<std::string>::end(group_set)._M_cur;
  while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
  {
    group_name = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v6->design_config.json_config_mgr, group_name);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( !config_ability_group_ptr )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "foreachSetAndAddAbilityGroup",
        655);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v32,
             (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, group_name);
      common::milog::MiLogStream::~MiLogStream(&v32);
      break;
    }
    entity_ability_entry_vec = &config_ability_group_ptr->target_abilities;
    dynamic_talent_vec = &config_ability_group_ptr->target_talents;
    __for_range_0 = &config_ability_group_ptr->target_abilities;
    __for_begin_0._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(&config_ability_group_ptr->target_abilities)._M_current;
    __for_end_0._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(&entry->ability_name) != 1 )
      {
        ability_name_hash = getStringHash(&entry->ability_name);
        AbilityComp = Creature::getAbilityComp(creature);
        AbilityComp::addTargetAbility(AbilityComp, ability_name_hash, 0);
      }
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin_0);
    }
    toThisPtr<Creature>((Creature *)&v31);
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 32));
    std::shared_ptr<Creature>::~shared_ptr(&v31);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
      __for_range_1 = dynamic_talent_vec;
      __for_begin_0._M_current = (const data::ConfigEntityAbilityEntry *)std::vector<data::ConfigDynamicTalent>::begin(dynamic_talent_vec)._M_current;
      __for_end_0._M_current = (const data::ConfigEntityAbilityEntry *)std::vector<data::ConfigDynamicTalent>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>(
                (const __gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *)&__for_begin_0,
                (const __gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *)&__for_end_0) )
      {
        dynamic_talent = __gnu_cxx::__normal_iterator<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *const)&__for_begin_0);
        if ( (unsigned __int8)std::string::empty(dynamic_talent) != 1 )
        {
          v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          TalentComp = Avatar::getTalentComp(v9);
          TalentComp::addDynamicTalent(TalentComp, &dynamic_talent->talent_name);
        }
        __gnu_cxx::__normal_iterator<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *const)&__for_begin_0);
      }
    }
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "foreachSetAndAddAbilityGroup",
      681);
    v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v32,
            (const char (*)[45])"[ABILITY_GROUP] addAbilityGroup, group_name:");
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, group_name);
    v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
  }
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 687: range 00000000179C0D62-00000000179C12E0
void __cdecl PlayerAbilityGroupComp::foreachSetAndRemoveAbilityGroup(
        PlayerAbilityGroupComp *const this,
        Creature *creature,
        std::unordered_set<std::string> *group_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  AbilityComp *AbilityComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TalentComp *TalentComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int val; // [rsp+20h] [rbp-120h] BYREF
  int32_t ability_name_hash; // [rsp+24h] [rbp-11Ch]
  std::unordered_set<std::string>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_set<std::string>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin_0; // [rsp+38h] [rbp-108h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end_0; // [rsp+40h] [rbp-100h] BYREF
  std::unordered_set<std::string> *__for_range; // [rsp+48h] [rbp-F8h]
  const std::string *group_name; // [rsp+50h] [rbp-F0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+58h] [rbp-E8h]
  const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec; // [rsp+60h] [rbp-E0h]
  const data::ConfigDynamicTalentList *dynamic_talent_vec; // [rsp+68h] [rbp-D8h]
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range_0; // [rsp+70h] [rbp-D0h]
  const std::vector<data::ConfigDynamicTalent> *__for_range_1; // [rsp+78h] [rbp-C8h]
  const data::ConfigDynamicTalent *dynamic_talent; // [rsp+80h] [rbp-C0h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+88h] [rbp-B8h]
  std::shared_ptr<Config> v30; // [rsp+90h] [rbp-B0h] BYREF
  std::shared_ptr<Creature> v31; // [rsp+A0h] [rbp-A0h] BYREF
  common::milog::MiLogStream v32; // [rsp+B0h] [rbp-90h] BYREF
  char v33[112]; // [rsp+D0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:706";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::foreachSetAndRemoveAbilityGroup;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = group_set;
  __for_begin._M_cur = std::unordered_set<std::string>::begin(group_set)._M_cur;
  __for_end._M_cur = std::unordered_set<std::string>::end(group_set)._M_cur;
  while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
  {
    group_name = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v6->design_config.json_config_mgr, group_name);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( !config_ability_group_ptr )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "foreachSetAndRemoveAbilityGroup",
        693);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v32,
             (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, group_name);
      common::milog::MiLogStream::~MiLogStream(&v32);
      break;
    }
    entity_ability_entry_vec = &config_ability_group_ptr->target_abilities;
    dynamic_talent_vec = &config_ability_group_ptr->target_talents;
    __for_range_0 = &config_ability_group_ptr->target_abilities;
    __for_begin_0._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(&config_ability_group_ptr->target_abilities)._M_current;
    __for_end_0._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin_0);
      if ( (unsigned __int8)std::string::empty(&entry->ability_name) != 1 )
      {
        ability_name_hash = getStringHash(&entry->ability_name);
        AbilityComp = Creature::getAbilityComp(creature);
        AbilityComp::removeTargetAbility(AbilityComp, ability_name_hash, 0);
      }
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin_0);
    }
    toThisPtr<Creature>((Creature *)&v31);
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 32));
    std::shared_ptr<Creature>::~shared_ptr(&v31);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
    {
      __for_range_1 = dynamic_talent_vec;
      __for_begin_0._M_current = (const data::ConfigEntityAbilityEntry *)std::vector<data::ConfigDynamicTalent>::begin(dynamic_talent_vec)._M_current;
      __for_end_0._M_current = (const data::ConfigEntityAbilityEntry *)std::vector<data::ConfigDynamicTalent>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>(
                (const __gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *)&__for_begin_0,
                (const __gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *)&__for_end_0) )
      {
        dynamic_talent = __gnu_cxx::__normal_iterator<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *const)&__for_begin_0);
        if ( (unsigned __int8)std::string::empty(dynamic_talent) != 1 )
        {
          v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          TalentComp = Avatar::getTalentComp(v9);
          TalentComp::removeDynamicTalent(TalentComp, &dynamic_talent->talent_name);
        }
        __gnu_cxx::__normal_iterator<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigDynamicTalent*,std::vector<data::ConfigDynamicTalent> > *const)&__for_begin_0);
      }
    }
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "foreachSetAndRemoveAbilityGroup",
      718);
    v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v32,
            (const char (*)[45])"[ABILITY_GROUP] delAbilityGroup, group_name:");
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, group_name);
    v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
  }
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 724: range 00000000179C12E2-00000000179C158C
void __cdecl PlayerAbilityGroupComp::fillTargetAbilityVec(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name,
        TargetAbilityVec *target_ability_vec,
        uint32_t avatar_id)
{
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v5; // rdx
  int *v6; // r8
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  int __args_0; // [rsp+28h] [rbp-78h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-74h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end; // [rsp+38h] [rbp-68h] BYREF
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+40h] [rbp-60h]
  const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec; // [rsp+48h] [rbp-58h]
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range; // [rsp+50h] [rbp-50h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.json_config_mgr;
  config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(p_json_config_mgr, ability_group_name);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( config_ability_group_ptr )
  {
    entity_ability_entry_vec = &config_ability_group_ptr->target_abilities;
    __for_range = &config_ability_group_ptr->target_abilities;
    __for_begin._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(&config_ability_group_ptr->target_abilities)._M_current;
    __for_end._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(&config_ability_group_ptr->target_abilities)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin,
              &__for_end) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin);
      val = 0;
      __args_0 = getStringHash(&entry->ability_name);
      std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<int,int>(
        target_ability_vec,
        &__args_0,
        (int *)&val,
        &__args_0,
        v6);
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "fillTargetAbilityVec",
      737);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v20,
           (const char (*)[47])"[ABILITY_GROUP] init ability_group group_name:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, ability_group_name);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])",  uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "fillTargetAbilityVec",
      728);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v20,
           (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, ability_group_name);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
};

// Line 742: range 00000000179C158E-00000000179C1734
void __cdecl PlayerAbilityGroupComp::fillTargetTalentVec(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name,
        TargetTalentVec *target_talent_vec,
        uint32_t avatar_id)
{
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v5; // rdx
  std::vector<data::ConfigDynamicTalent>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::vector<data::ConfigDynamicTalent>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+30h] [rbp-60h]
  const data::ConfigDynamicTalentList *dynamic_talent_vec; // [rsp+38h] [rbp-58h]
  const std::vector<data::ConfigDynamicTalent> *__for_range; // [rsp+40h] [rbp-50h]
  const data::ConfigDynamicTalent *dynamic_talent; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.json_config_mgr;
  config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(p_json_config_mgr, ability_group_name);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( config_ability_group_ptr )
  {
    dynamic_talent_vec = &config_ability_group_ptr->target_talents;
    __for_range = &config_ability_group_ptr->target_talents;
    __for_begin._M_current = std::vector<data::ConfigDynamicTalent>::begin(&config_ability_group_ptr->target_talents)._M_current;
    __for_end._M_current = std::vector<data::ConfigDynamicTalent>::end(&config_ability_group_ptr->target_talents)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>(
              &__for_begin,
              &__for_end) )
    {
      dynamic_talent = __gnu_cxx::__normal_iterator<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>::operator*(&__for_begin);
      if ( (unsigned __int8)std::string::empty(dynamic_talent) != 1 )
        std::vector<std::string>::emplace_back<std::string const&>(
          target_talent_vec,
          &dynamic_talent->talent_name,
          &dynamic_talent->talent_name);
      __gnu_cxx::__normal_iterator<data::ConfigDynamicTalent const*,std::vector<data::ConfigDynamicTalent>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "fillTargetTalentVec",
      746);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v14,
           (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, ability_group_name);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
};

// Line 761: range 00000000179C1736-00000000179C17BF
void __cdecl PlayerAbilityGroupComp::onSetAvatarTeamToSceneEvent(
        PlayerAbilityGroupComp *const this,
        const SetAvatarTeamToSceneEvent *event)
{
  if ( PlayerAbilityGroupComp::getIsNeedReload(this) )
  {
    PlayerAbilityGroupComp::setIsNeedReload(this, 0);
    std::swap<unsigned long,std::unordered_set<std::string>,std::hash<unsigned long>,std::equal_to<unsigned long>,std::allocator<std::pair<unsigned long const,std::unordered_set<std::string>>>>(
      &this->guid_cur_group_map_,
      &this->guid_reload_group_map_);
    std::unordered_map<unsigned long,std::unordered_set<std::string>>::clear(&this->guid_reload_group_map_);
  }
  PlayerAbilityGroupComp::clearRefreshData(this);
  PlayerAbilityGroupComp::printGuidCurGroupMapLog(this);
  PlayerAbilityGroupComp::printFeatureFilterGroup(this);
};

// Line 778: range 00000000179C17C0-00000000179C1899
void __cdecl PlayerAbilityGroupComp::onDelAvatarEvent(PlayerAbilityGroupComp *const this, const DelAvatarEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
         &this->guid_cur_group_map_,
         &event->avatar_guid) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "onDelAvatarEvent",
      781);
    v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v3, (const char (*)[32])off_2626CB20);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v2, &event->avatar_guid);
    common::milog::MiLogStream::~MiLogStream(&v3);
    std::unordered_map<unsigned long,std::unordered_set<std::string>>::erase(
      &this->guid_cur_group_map_,
      &event->avatar_guid);
  }
};

// Line 787: range 00000000179C189A-00000000179C1A4A
void __cdecl PlayerAbilityGroupComp::printGuidCurGroupMapLog(PlayerAbilityGroupComp *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::unordered_map<long unsigned int,std::unordered_set<std::string>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<std::string>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_set<std::string>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  std::unordered_map<long unsigned int,std::unordered_set<std::string>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<long unsigned int const,std::unordered_set<std::string> > *v9; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::unordered_set<std::string> > >::type *guid; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::unordered_set<std::string> > >::type *group_set; // [rsp+48h] [rbp-48h]
  const std::unordered_set<std::string> *__for_range_0; // [rsp+50h] [rbp-40h]
  const std::string *group_name; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  __for_range = &this->guid_cur_group_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,std::unordered_set<std::string>>::begin(&this->guid_cur_group_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::unordered_set<std::string>>::end(&this->guid_cur_group_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::unordered_set<std::string>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::unordered_set<std::string>>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,std::unordered_set<std::string>>(v9);
    group_set = (std::tuple_element<1,const std::pair<long unsigned int const,std::unordered_set<std::string> > >::type *)std::get<1ul,unsigned long const,std::unordered_set<std::string>>(v9);
    __for_range_0 = group_set;
    __for_begin_0._M_cur = std::unordered_set<std::string>::begin(group_set)._M_cur;
    __for_end_0._M_cur = std::unordered_set<std::string>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::string,true>(&__for_begin_0, &__for_end_0) )
    {
      group_name = std::__detail::_Node_const_iterator<std::string,true,true>::operator*(&__for_begin_0);
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "printGuidCurGroupMapLog",
        792);
      v1 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v14,
             (const char (*)[22])"[ABILITY_GROUP] guid:");
      v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, guid);
      v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" cur group:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, group_name);
      common::milog::MiLogStream::~MiLogStream(&v14);
      std::__detail::_Node_const_iterator<std::string,true,true>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::unordered_set<std::string>>,false,false>::operator++(&__for_begin);
  }
};

// Line 798: range 00000000179C1A4C-00000000179C1D06
void __cdecl PlayerAbilityGroupComp::printFeatureFilterGroup(PlayerAbilityGroupComp *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<std::string,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<std::string,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,std::unordered_map<std::string,unsigned int> > *v10; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<std::string,unsigned int> > >::type *feature_id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<std::string,unsigned int> > >::type *group_map; // [rsp+48h] [rbp-78h]
  const std::unordered_map<std::string,unsigned int> *__for_range_0; // [rsp+50h] [rbp-70h]
  const std::pair<const std::string,unsigned int> *v14; // [rsp+58h] [rbp-68h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name; // [rsp+60h] [rbp-60h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count; // [rsp+68h] [rbp-58h]
  common::milog::MiLogStream v17; // [rsp+70h] [rbp-50h] BYREF
  common::milog::MiLogStream v18; // [rsp+90h] [rbp-30h] BYREF

  __for_range = &this->filter_feature_tag_id_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::begin(&this->filter_feature_tag_id_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::end(&this->filter_feature_tag_id_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<std::string,unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<std::string,unsigned int>>,false,false>::operator*(&__for_begin);
    feature_id = std::get<0ul,unsigned int const,std::unordered_map<std::string,unsigned int>>(v10);
    group_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<std::string,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<std::string,unsigned int>>(v10);
    __for_range_0 = group_map;
    __for_begin_0._M_cur = std::unordered_map<std::string,unsigned int>::begin(group_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<std::string,unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(&__for_begin_0, &__for_end_0) )
    {
      v14 = std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*(&__for_begin_0);
      group_name = std::get<0ul,std::string const,unsigned int>(v14);
      count = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v14);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *count )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "printFeatureFilterGroup",
          808);
        v2 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v18,
               (const char (*)[28])"[ABILITY_GROUP] feature_id:");
        v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, feature_id);
        v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v3, (const char (*)[8])" group:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, group_name);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "printFeatureFilterGroup",
          805);
        v1 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v17,
               (const char (*)[49])"ability_group count 0 but not erase, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, group_name);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<std::string,unsigned int>>,false,false>::operator++(&__for_begin);
  }
};

// Line 814: range 00000000179C1D08-00000000179C23F8
void __cdecl PlayerAbilityGroupComp::fillTargetAbilityAndTalentVecFromMap(
        PlayerAbilityGroupComp *const this,
        std::unordered_map<long unsigned int,std::unordered_set<std::string>> *group_map,
        TargetAbilityVec *target_ability_vec,
        TargetTalentVec *target_talent_vec,
        AvatarPtr *p_avatar_ptr)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  common::milog::MiLogStream *v8; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t AvatarId; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  std::unordered_set<std::string> *v15; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // ecx
  unsigned int val; // [rsp+3Ch] [rbp-E4h] BYREF
  std::unordered_set<std::string>::iterator __for_begin; // [rsp+40h] [rbp-E0h] BYREF
  std::unordered_set<std::string>::iterator __for_end; // [rsp+48h] [rbp-D8h] BYREF
  std::unordered_map<std::string,unsigned int> *__for_range_1; // [rsp+50h] [rbp-D0h]
  const std::pair<const std::string,unsigned int> *v32; // [rsp+58h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name_1; // [rsp+60h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count_0; // [rsp+68h] [rbp-B8h]
  std::unordered_set<std::string> *__for_range; // [rsp+70h] [rbp-B0h]
  std::unordered_map<std::string,unsigned int> *__for_range_0; // [rsp+78h] [rbp-A8h]
  const std::pair<const std::string,unsigned int> *v37; // [rsp+80h] [rbp-A0h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *group_name_0; // [rsp+88h] [rbp-98h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count; // [rsp+90h] [rbp-90h]
  const std::string *group_name; // [rsp+98h] [rbp-88h]
  common::milog::MiLogStream v41; // [rsp+A0h] [rbp-80h] BYREF
  char v42[96]; // [rsp+C0h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 8 guid:820";
  *(_QWORD *)(v5 + 16) = PlayerAbilityGroupComp::fillTargetAbilityAndTalentVecFromMap;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  if ( std::operator==<Avatar>(0LL, p_avatar_ptr) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "fillTargetAbilityAndTalentVecFromMap",
      817);
    v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v41,
           (const char (*)[25])"nullptr avatar_ptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
  }
  else
  {
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    *(_QWORD *)(v5 + 32) = Avatar::getGuid(v9);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_set<std::string>>,unsigned long>(
           group_map,
           (const unsigned __int64 *)(v5 + 32)) )
    {
      __for_range = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                      group_map,
                      (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v5 + 32));
      __for_begin._M_cur = std::unordered_set<std::string>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_set<std::string>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
      {
        group_name = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
        v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
        AvatarId = Avatar::getAvatarId(v10);
        PlayerAbilityGroupComp::fillTargetAbilityVec(this, group_name, target_ability_vec, AvatarId);
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
        v13 = Avatar::getAvatarId(v12);
        PlayerAbilityGroupComp::fillTargetTalentVec(this, group_name, target_talent_vec, v13);
        std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
      }
      __for_range_0 = &this->filter_none_group_map_;
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)std::unordered_map<std::string,unsigned int>::begin(&this->filter_none_group_map_)._M_cur;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)std::unordered_map<std::string,unsigned int>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)&__for_end) )
      {
        v37 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)&__for_begin);
        group_name_0 = std::get<0ul,std::string const,unsigned int>(v37);
        count = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v37);
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *count )
        {
          v15 = std::unordered_map<unsigned long,std::unordered_set<std::string>>::operator[](
                  group_map,
                  (const std::unordered_map<long unsigned int,std::unordered_set<std::string>>::key_type *)(v5 + 32));
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(v15, group_name_0) )
          {
            v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
            v17 = Avatar::getAvatarId(v16);
            PlayerAbilityGroupComp::fillTargetAbilityVec(this, group_name_0, target_ability_vec, v17);
            v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
            v19 = Avatar::getAvatarId(v18);
            PlayerAbilityGroupComp::fillTargetTalentVec(this, group_name_0, target_talent_vec, v19);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "fillTargetAbilityAndTalentVecFromMap",
            833);
          v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v41,
                  (const char (*)[49])"ability_group count 0 but not erase, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, group_name_0);
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)&__for_begin);
      }
    }
    else
    {
      __for_range_1 = &this->filter_none_group_map_;
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)std::unordered_map<std::string,unsigned int>::begin(&this->filter_none_group_map_)._M_cur;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)std::unordered_map<std::string,unsigned int>::end(&this->filter_none_group_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)&__for_end) )
      {
        v32 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)&__for_begin);
        group_name_1 = std::get<0ul,std::string const,unsigned int>(v32);
        count_0 = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v32);
        if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *count_0 )
        {
          v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
          v22 = Avatar::getAvatarId(v21);
          PlayerAbilityGroupComp::fillTargetAbilityVec(this, group_name_1, target_ability_vec, v22);
          v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
          v24 = Avatar::getAvatarId(v23);
          PlayerAbilityGroupComp::fillTargetTalentVec(this, group_name_1, target_talent_vec, v24);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "fillTargetAbilityAndTalentVecFromMap",
            850);
          v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v41,
                  (const char (*)[49])"ability_group count 0 but not erase, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, group_name_1);
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)&__for_begin);
      }
    }
  }
  if ( v42 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 860: range 00000000179C23FA-00000000179C250A
bool __cdecl PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name)
{
  std::unordered_map<std::string,unsigned int>::mapped_type *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
          &this->filter_none_group_map_,
          ability_group_name) )
    return 0;
  v3 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_none_group_map_, ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *v3 )
    return 1;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/ability_group/player_ability_group_comp.cpp",
    "isHasAbilityGroupInNoneFilter",
    867);
  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
    &v4,
    (const char (*)[43])"ability_group count equal 0, but not erase");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 874: range 00000000179C250C-00000000179C272D
__int64 __fastcall PlayerAbilityGroupComp::isHasAbilityGroupInAvatarFilter(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name,
        uint32_t avatar_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::unordered_map<std::string,unsigned int> *v7; // rax
  std::unordered_map<std::string,unsigned int> *v8; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v9; // rdx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 avatar_id:873";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::isHasAbilityGroupInAvatarFilter;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = avatar_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>,unsigned int>(
          &this->filter_avatar_group_map_,
          (const unsigned int *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
           &this->filter_avatar_group_map_,
           (const std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
            v7,
            ability_group_name) )
    {
      result = 0LL;
    }
    else
    {
      v8 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
             &this->filter_avatar_group_map_,
             (const std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
      v9 = std::unordered_map<std::string,unsigned int>::operator[](v8, ability_group_name);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *v9 )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "isHasAbilityGroupInAvatarFilter",
          885);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v11,
          (const char (*)[43])"ability_group count equal 0, but not erase");
        common::milog::MiLogStream::~MiLogStream(&v11);
        result = 0LL;
      }
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 892: range 00000000179C272E-00000000179C2959
__int64 __fastcall PlayerAbilityGroupComp::isHasAbilityGroupInGuidFilter(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name,
        uint64_t guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::unordered_map<std::string,unsigned int> *v7; // rax
  std::unordered_map<std::string,unsigned int> *v8; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v9; // rdx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 guid:891";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::isHasAbilityGroupInGuidFilter;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = guid;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>,unsigned long>(
          &this->filter_guid_map_,
          (const unsigned __int64 *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
           &this->filter_guid_map_,
           (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
            v7,
            ability_group_name) )
    {
      result = 0LL;
    }
    else
    {
      v8 = std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::operator[](
             &this->filter_guid_map_,
             (const std::unordered_map<long unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
      v9 = std::unordered_map<std::string,unsigned int>::operator[](v8, ability_group_name);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *v9 )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "isHasAbilityGroupInGuidFilter",
          903);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v11,
          (const char (*)[43])"ability_group count equal 0, but not erase");
        common::milog::MiLogStream::~MiLogStream(&v11);
        result = 0LL;
      }
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 910: range 00000000179C295A-00000000179C2B83
__int64 __fastcall PlayerAbilityGroupComp::isHasAbilityGroupInFeatureFilter(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name,
        uint32_t tag_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::unordered_map<std::string,unsigned int> *v7; // rax
  std::unordered_map<std::string,unsigned int> *v8; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v9; // rdx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 tag_id:909";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::isHasAbilityGroupInFeatureFilter;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tag_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>,unsigned int>(
          &this->filter_feature_tag_id_map_,
          (const unsigned int *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
           &this->filter_feature_tag_id_map_,
           (const std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
            v7,
            ability_group_name) )
    {
      result = 0LL;
    }
    else
    {
      v8 = std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::operator[](
             &this->filter_feature_tag_id_map_,
             (const std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::key_type *)(v3 + 32));
      v9 = std::unordered_map<std::string,unsigned int>::operator[](v8, ability_group_name);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *v9 )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "isHasAbilityGroupInFeatureFilter",
          921);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v11,
          (const char (*)[43])"ability_group count equal 0, but not erase");
        common::milog::MiLogStream::~MiLogStream(&v11);
        result = 0LL;
      }
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 928: range 00000000179C2B84-00000000179C30EE
void __cdecl PlayerAbilityGroupComp::addTeamAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<std::string> *group_vec,
        bool is_allow_duplicate)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::unordered_map<std::string,unsigned int>::mapped_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::unordered_map<std::string,unsigned int>::mapped_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int val; // [rsp+24h] [rbp-6Ch] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+38h] [rbp-58h]
  const std::string *group_name; // [rsp+40h] [rbp-50h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v24; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-30h] BYREF

  __for_range = group_vec;
  __for_begin._M_current = std::vector<std::string>::begin(group_vec)._M_current;
  __for_end._M_current = std::vector<std::string>::end(group_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    if ( (unsigned __int8)std::string::empty(group_name) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addTeamAbilityGroup",
        933);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v25,
        (const char (*)[24])"empty AbilityGroup name");
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_24;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v3->design_config.json_config_mgr, group_name);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( !config_ability_group_ptr )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "addTeamAbilityGroup",
        939);
      v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v25,
             (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, group_name);
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_24;
    }
    if ( !PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(this, group_name) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(
             &this->team_del_group_set_,
             group_name) )
      {
        std::unordered_set<std::string>::erase(&this->team_del_group_set_, group_name);
      }
      else
      {
        std::unordered_set<std::string>::insert(&this->team_add_group_set_, group_name);
      }
      v5 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_team_group_map_, group_name);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
    }
    else
    {
      if ( !is_allow_duplicate )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "addTeamAbilityGroup",
          963);
        v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
               &v25,
               (const char (*)[74])"duplicated TeamFilterAbilityGroup, dont add ability_group, ability_group:");
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, group_name);
        v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])", cur_count:");
        v9 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_team_group_map_, group_name);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, v9);
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_23;
      }
      v5 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_team_group_map_, group_name);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
    }
    ++*v5;
    PlayerAbilityGroupComp::tryRegisterTeamAbilitySourceGroupId(this, &config_ability_group_ptr->target_abilities);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "addTeamAbilityGroup",
      967);
    v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v25, (const char (*)[28])off_2626CFC0);
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, group_name);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", cur_count:");
    v15 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_team_group_map_, group_name);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_23:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
LABEL_24:
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
};

// Line 973: range 00000000179C30F0-00000000179C36F5
void __cdecl PlayerAbilityGroupComp::delTeamAbilityGroup(
        PlayerAbilityGroupComp *const this,
        const std::vector<std::string> *group_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::unordered_map<std::string,unsigned int>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+28h] [rbp-118h]
  const std::string *group_name; // [rsp+30h] [rbp-110h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-B0h] BYREF
  common::milog::MiLogStream v26; // [rsp+B0h] [rbp-90h] BYREF
  char v27[112]; // [rsp+D0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 cur_count:995";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::delTeamAbilityGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = group_vec;
  __for_begin._M_current = std::vector<std::string>::begin(group_vec)._M_current;
  __for_end._M_current = std::vector<std::string>::end(group_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    if ( (unsigned __int8)std::string::empty(group_name) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "delTeamAbilityGroup",
        978);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v23,
        (const char (*)[24])"empty AbilityGroup name");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(&v5->design_config.json_config_mgr, group_name);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( config_ability_group_ptr )
      {
        if ( !PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(this, group_name) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delTeamAbilityGroup",
            991);
          v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                 &v25,
                 (const char (*)[51])"TeamFilterAbilityGroup is not existed, group_name:");
          v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, group_name);
          v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          v10 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_team_group_map_, group_name);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = --*v10;
          if ( !*(_DWORD *)(v2 + 32) )
          {
            if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(
                   &this->team_add_group_set_,
                   group_name) )
            {
              std::unordered_set<std::string>::erase(&this->team_add_group_set_, group_name);
            }
            else
            {
              std::unordered_set<std::string>::insert(&this->team_del_group_set_, group_name);
            }
            std::unordered_map<std::string,unsigned int>::erase(&this->filter_team_group_map_, group_name);
            PlayerAbilityGroupComp::tryUnregisterTeamAbilitySourceGroupId(
              this,
              &config_ability_group_ptr->target_abilities);
          }
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "delTeamAbilityGroup",
            1010);
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v26, (const char (*)[40])off_2626D0C0);
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, group_name);
          v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", cur_count:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 32));
          v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "delTeamAbilityGroup",
          984);
        v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v24,
               (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, group_name);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1017: range 00000000179C36F6-00000000179C380C
bool __cdecl PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(
        PlayerAbilityGroupComp *const this,
        const std::string *ability_group_name)
{
  std::unordered_map<std::string,unsigned int>::mapped_type *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
          &this->filter_team_group_map_,
          ability_group_name) )
    return 0;
  v3 = std::unordered_map<std::string,unsigned int>::operator[](&this->filter_team_group_map_, ability_group_name);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *v3 )
    return 1;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/ability_group/player_ability_group_comp.cpp",
    "isHasAbilityGroupInTeamFilter",
    1024);
  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
    &v4,
    (const char (*)[43])"ability_group count equal 0, but not erase");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 1031: range 00000000179C380E-00000000179C3BB6
void __cdecl PlayerAbilityGroupComp::refreshTeamAbilityGroups(PlayerAbilityGroupComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  AbilityComp *AbilityComp; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 20 team_entity_ptr:1035 80 48 26 refresh_ability_guard:1034";
  *(_QWORD *)(v1 + 16) = PlayerAbilityGroupComp::refreshTeamAbilityGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( !std::unordered_set<std::string>::empty(&this->team_add_group_set_)
    || !std::unordered_set<std::string>::empty(&this->team_del_group_set_) )
  {
    RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 48));
    if ( std::operator==<AvatarTeamEntity>((const std::shared_ptr<AvatarTeamEntity> *)(v1 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ability_group/player_ability_group_comp.cpp",
        "refreshTeamAbilityGroups",
        1038);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v12,
             (const char (*)[28])"getTeamEntity nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v6 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v1 + 80), v6);
      v7 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      AbilityComp = Creature::getAbilityComp(v7);
      AbilityComp::setIsNeedRefresh(AbilityComp, 1);
      v9 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      PlayerAbilityGroupComp::foreachSetAndAddAbilityGroup(this, v9, &this->team_add_group_set_);
      v10 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      PlayerAbilityGroupComp::foreachSetAndRemoveAbilityGroup(this, v10, &this->team_del_group_set_);
    }
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 48));
    RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v1 + 80));
  }
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1049: range 00000000179C3BB8-00000000179C411D
void __cdecl PlayerAbilityGroupComp::getTeamTargetAbilitiesFromAbilityGroup(
        PlayerAbilityGroupComp *const this,
        TargetAbilityVec *target_ability_vec,
        AvatarTeamEntityPtr *p_team_entity_ptr)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int __args_0; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::unordered_map<std::string,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  std::unordered_map<std::string,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin_0; // [rsp+40h] [rbp-90h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end_0; // [rsp+48h] [rbp-88h] BYREF
  std::unordered_map<std::string,unsigned int> *__for_range; // [rsp+50h] [rbp-80h]
  const std::pair<const std::string,unsigned int> *v19; // [rsp+58h] [rbp-78h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *ability_group_name; // [rsp+60h] [rbp-70h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *count; // [rsp+68h] [rbp-68h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+70h] [rbp-60h]
  const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec; // [rsp+78h] [rbp-58h]
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range_0; // [rsp+80h] [rbp-50h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+88h] [rbp-48h]
  std::shared_ptr<Config> v26; // [rsp+90h] [rbp-40h] BYREF
  common::milog::MiLogStream v27; // [rsp+A0h] [rbp-30h] BYREF

  if ( std::operator==<AvatarTeamEntity>(p_team_entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "getTeamTargetAbilitiesFromAbilityGroup",
      1052);
    v3 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v27,
           (const char (*)[30])"nullptr team_entity_ptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    __for_range = &this->filter_team_group_map_;
    __for_begin._M_cur = std::unordered_map<std::string,unsigned int>::begin(&this->filter_team_group_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<std::string,unsigned int>::end(&this->filter_team_group_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(&__for_begin, &__for_end) )
    {
      v19 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*(&__for_begin);
      ability_group_name = std::get<0ul,std::string const,unsigned int>(v19);
      count = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v19);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *count )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v26);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
        config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(
                                     &v7->design_config.json_config_mgr,
                                     ability_group_name);
        std::shared_ptr<Config>::~shared_ptr(&v26);
        if ( !config_ability_group_ptr )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "getTeamTargetAbilitiesFromAbilityGroup",
            1065);
          v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v27,
                 (const char (*)[42])"findAbilityGroupConfig fails, group_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, ability_group_name);
          common::milog::MiLogStream::~MiLogStream(&v27);
          return;
        }
        entity_ability_entry_vec = &config_ability_group_ptr->target_abilities;
        __for_range_0 = &config_ability_group_ptr->target_abilities;
        __for_begin_0._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(&config_ability_group_ptr->target_abilities)._M_current;
        __for_end_0._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin_0);
          val = 0;
          __args_0 = getStringHash(&entry->ability_name);
          std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<int,int>(
            target_ability_vec,
            &__args_0,
            (int *)&val,
            &__args_0,
            v9);
          __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin_0);
        }
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "getTeamTargetAbilitiesFromAbilityGroup",
          1074);
        v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v27,
                (const char (*)[52])"[ABILITY_GROUP] init team ability_group group_name:");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, ability_group_name);
        v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])",  uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ability_group/player_ability_group_comp.cpp",
          "getTeamTargetAbilitiesFromAbilityGroup",
          1059);
        v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v27,
               (const char (*)[49])"ability_group count 0 but not erase, group_name:");
        v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, ability_group_name);
        v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++(&__for_begin);
    }
  }
};

// Line 1080: range 00000000179C411E-00000000179C4333
void __cdecl PlayerAbilityGroupComp::addTeamAbilityGroupByGm(PlayerAbilityGroupComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::initializer_list<std::string > *i; // rbx
  std::allocator<std::string > __a; // [rsp+17h] [rbp-A9h] BYREF
  std::unordered_map<std::string,data::ConfigAbilityGroup>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<std::string,data::ConfigAbilityGroup>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const data::ConfigAbilityGroupMap *config_team_ability_group_map; // [rsp+28h] [rbp-98h]
  const std::unordered_map<std::string,data::ConfigAbilityGroup> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<const std::string,data::ConfigAbilityGroup> *v8; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<const std::string,data::ConfigAbilityGroup> >::type *name; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigAbilityGroup> >::type *group_config; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-70h] BYREF
  std::vector<std::string> group_vec; // [rsp+60h] [rbp-60h] BYREF
  std::initializer_list<std::string > __l; // [rsp+80h] [rbp-40h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  config_team_ability_group_map = JsonConfigMgr::getTeamAbilityGroupMap[abi:cxx11](&v1->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_range = config_team_ability_group_map;
  __for_begin._M_cur = std::unordered_map<std::string,data::ConfigAbilityGroup>::begin(config_team_ability_group_map)._M_cur;
  __for_end._M_cur = std::unordered_map<std::string,data::ConfigAbilityGroup>::end(config_team_ability_group_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigAbilityGroup>,true>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityGroup>,false,true>::operator*(&__for_begin);
    name = std::get<0ul,std::string const,data::ConfigAbilityGroup>(v8);
    group_config = (std::tuple_element<1,const std::pair<const std::string,data::ConfigAbilityGroup> >::type *)std::get<1ul,std::string const,data::ConfigAbilityGroup>(v8);
    std::string::basic_string(&__l, name);
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &__l), &__a);
    PlayerAbilityGroupComp::addTeamAbilityGroup(this, &group_vec, 0);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    for ( i = (std::initializer_list<std::string > *)&v14; i != &__l; std::string::~string(i) )
      i -= 2;
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityGroup>,false,true>::operator++(&__for_begin);
  }
};

// Line 1089: range 00000000179C4334-00000000179C4544
void __cdecl PlayerAbilityGroupComp::delTeamAbilityGroupByGm(PlayerAbilityGroupComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::initializer_list<std::string > *i; // rbx
  std::allocator<std::string > __a; // [rsp+17h] [rbp-A9h] BYREF
  std::unordered_map<std::string,data::ConfigAbilityGroup>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<std::string,data::ConfigAbilityGroup>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const data::ConfigAbilityGroupMap *config_team_ability_group_map; // [rsp+28h] [rbp-98h]
  const std::unordered_map<std::string,data::ConfigAbilityGroup> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<const std::string,data::ConfigAbilityGroup> *v8; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<const std::string,data::ConfigAbilityGroup> >::type *name; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigAbilityGroup> >::type *group_config; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-70h] BYREF
  std::vector<std::string> group_vec; // [rsp+60h] [rbp-60h] BYREF
  std::initializer_list<std::string > __l; // [rsp+80h] [rbp-40h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  config_team_ability_group_map = JsonConfigMgr::getTeamAbilityGroupMap[abi:cxx11](&v1->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_range = config_team_ability_group_map;
  __for_begin._M_cur = std::unordered_map<std::string,data::ConfigAbilityGroup>::begin(config_team_ability_group_map)._M_cur;
  __for_end._M_cur = std::unordered_map<std::string,data::ConfigAbilityGroup>::end(config_team_ability_group_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigAbilityGroup>,true>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityGroup>,false,true>::operator*(&__for_begin);
    name = std::get<0ul,std::string const,data::ConfigAbilityGroup>(v8);
    group_config = (std::tuple_element<1,const std::pair<const std::string,data::ConfigAbilityGroup> >::type *)std::get<1ul,std::string const,data::ConfigAbilityGroup>(v8);
    std::string::basic_string(&__l, name);
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &__l), &__a);
    PlayerAbilityGroupComp::delTeamAbilityGroup(this, &group_vec);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    for ( i = (std::initializer_list<std::string > *)&v14; i != &__l; std::string::~string(i) )
      i -= 2;
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityGroup>,false,true>::operator++(&__for_begin);
  }
};

// Line 1098: range 00000000179C4546-00000000179C49DF
void __fastcall PlayerAbilityGroupComp::markAbilityGroupSource(
        PlayerAbilityGroupComp *const this,
        data::AbilityGroupSourceType source_type,
        uint32_t source_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char *val; // [rsp+10h] [rbp-A0h] BYREF
  char *v20; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-90h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 source_id:1097";
  *(_QWORD *)(v3 + 16) = PlayerAbilityGroupComp::markAbilityGroupSource;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = source_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->source_param_.source_type )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->source_param_.source_id )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "markAbilityGroupSource",
      1101);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v21,
           (const char (*)[43])"duplicate mark abilitygroup source, error!");
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])"marked_source_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = (char *)data::enumValToStr(this->source_param_.source_type);
    v8 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])", input_source_type:");
    v20 = (char *)data::enumValToStr(source_type);
    v10 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&v20);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v10,
            (const char (*)[20])", marked_source_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->source_param_.source_id);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])", input_source_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->source_param_);
    }
    this->source_param_.source_type = source_type;
    v14 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store4(&this->source_param_.source_id);
    }
    this->source_param_.source_id = v14;
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "markAbilityGroupSource",
      1114);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v21,
            (const char (*)[20])"marked_source_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v20 = (char *)data::enumValToStr(this->source_param_.source_type);
    v16 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)&v20);
    v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v16,
            (const char (*)[20])", marked_source_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->source_param_.source_id);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1118: range 00000000179C49E0-00000000179C4EC6
void __cdecl PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId(
        PlayerAbilityGroupComp *const this,
        const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::pointer v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::pointer v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> __y; // [rsp+28h] [rbp-108h] BYREF
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range; // [rsp+30h] [rbp-100h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 20 source_group_id:1119 48 4 22 ability_name_hash:1129 64 8 9 iter:1130";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::tryRegisterAbilitySourceGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 32) = PlayerAbilityGroupComp::getCurAbilityGroupSourceGroupId(this);
  if ( *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "tryRegisterAbilitySourceGroupId",
      1124);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v22,
           (const char (*)[37])"getCurAbilityGroupSourceGroupId, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    __for_range = entity_ability_entry_vec;
    __for_begin._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(entity_ability_entry_vec)._M_current;
    __for_end._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(entity_ability_entry_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin,
              &__for_end) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin);
      if ( (unsigned __int8)std::string::empty(&entry->ability_name) != 1 )
      {
        *(_DWORD *)(v2 + 48) = getStringHash(&entry->ability_name);
        *(std::unordered_map<int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<int,unsigned int>::find(
                                                                         &this->avatar_ability_hash_to_source_group_map_,
                                                                         (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<int,unsigned int>::end(&this->avatar_ability_hash_to_source_group_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> *)(v2 + 64),
               &__y) )
        {
          v7 = std::unordered_map<int,unsigned int>::emplace<int &,unsigned int &>(
                 &this->avatar_ability_hash_to_source_group_map_,
                 (int *)(v2 + 48),
                 (unsigned int *)(v2 + 32),
                 (int *)&this->avatar_ability_hash_to_source_group_map_,
                 v6);
          if ( !v7.second )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "tryRegisterAbilitySourceGroupId",
              1135);
            v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v20,
                   (const char (*)[29])"duplicate ability_name_hash:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v20);
          }
        }
        else
        {
          v9 = std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v9->second == *(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "tryRegisterAbilitySourceGroupId",
              1145);
            v14 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    &v22,
                    (const char (*)[62])"duplicate tryRegisterAbilitySourceGroupId, register_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "tryRegisterAbilitySourceGroupId",
              1140);
            v10 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    &v21,
                    (const char (*)[59])"tryRegisterAbilitySourceGroupId failed, register_group_id:");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v2 + 32));
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v11,
                    (const char (*)[16])", cur_group_id:");
            v13 = std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false> *const)(v2 + 64));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->second);
            common::milog::MiLogStream::~MiLogStream(&v21);
          }
        }
      }
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin);
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 1152: range 00000000179C4EC8-00000000179C5213
void __cdecl PlayerAbilityGroupComp::tryUnregisterAbilitySourceGroupId(
        PlayerAbilityGroupComp *const this,
        const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 20 source_group_id:1153 48 4 22 ability_name_hash:1163 64 8 9 iter:1164";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::tryUnregisterAbilitySourceGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 32) = PlayerAbilityGroupComp::getCurAbilityGroupSourceGroupId(this);
  if ( *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ability_group/player_ability_group_comp.cpp",
      "tryUnregisterAbilitySourceGroupId",
      1158);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"getCurAbilityGroupSourceGroupId, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    __for_range = entity_ability_entry_vec;
    __for_begin._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(entity_ability_entry_vec)._M_current;
    __for_end._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(entity_ability_entry_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin,
              &__for_end) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin);
      if ( (unsigned __int8)std::string::empty(&entry->ability_name) != 1 )
      {
        *(_DWORD *)(v2 + 48) = getStringHash(&entry->ability_name);
        *(std::unordered_map<int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<int,unsigned int>::find(
                                                                         &this->avatar_ability_hash_to_source_group_map_,
                                                                         (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<int,unsigned int>::end(&this->avatar_ability_hash_to_source_group_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "tryUnregisterAbilitySourceGroupId",
            1167);
          v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 &v12,
                 (const char (*)[48])"find source group_id failed, ability_name_hash:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v12);
        }
        else
        {
          std::unordered_map<int,unsigned int>::erase(
            &this->avatar_ability_hash_to_source_group_map_,
            (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
        }
      }
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin);
    }
  }
  if ( v13 == (char *)v2 )
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

// Line 1178: range 00000000179C5214-00000000179C5675
void __cdecl PlayerAbilityGroupComp::tryRegisterTeamAbilitySourceGroupId(
        PlayerAbilityGroupComp *const this,
        const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::pointer v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> __y; // [rsp+28h] [rbp-108h] BYREF
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range; // [rsp+30h] [rbp-100h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v21; // [rsp+80h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 20 source_group_id:1179 48 4 22 ability_name_hash:1188 64 8 9 iter:1189";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::tryRegisterTeamAbilitySourceGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 32) = PlayerAbilityGroupComp::getCurAbilityGroupSourceGroupId(this);
  if ( *(_DWORD *)(v2 + 32) )
  {
    __for_range = entity_ability_entry_vec;
    __for_begin._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(entity_ability_entry_vec)._M_current;
    __for_end._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(entity_ability_entry_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin,
              &__for_end) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin);
      if ( (unsigned __int8)std::string::empty(&entry->ability_name) != 1 )
      {
        *(_DWORD *)(v2 + 48) = getStringHash(&entry->ability_name);
        *(std::unordered_map<int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<int,unsigned int>::find(
                                                                         &this->team_ability_hash_to_source_group_map_,
                                                                         (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<int,unsigned int>::end(&this->team_ability_hash_to_source_group_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> *)(v2 + 64),
               &__y) )
        {
          v6 = std::unordered_map<int,unsigned int>::emplace<int &,unsigned int &>(
                 &this->team_ability_hash_to_source_group_map_,
                 (int *)(v2 + 48),
                 (unsigned int *)(v2 + 32),
                 (int *)&this->team_ability_hash_to_source_group_map_,
                 v5);
          if ( !v6.second )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "tryRegisterTeamAbilitySourceGroupId",
              1194);
            v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v19,
                   (const char (*)[29])"duplicate ability_name_hash:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v19);
          }
        }
        else
        {
          v8 = std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v8->second == *(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "tryRegisterTeamAbilitySourceGroupId",
              1204);
            v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    &v21,
                    (const char (*)[62])"duplicate tryRegisterAbilitySourceGroupId, register_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v21);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/ability_group/player_ability_group_comp.cpp",
              "tryRegisterTeamAbilitySourceGroupId",
              1199);
            v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                   &v20,
                   (const char (*)[59])"tryRegisterAbilitySourceGroupId failed, register_group_id:");
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v9,
                    (const unsigned int *)(v2 + 32));
            v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v10,
                    (const char (*)[16])", cur_group_id:");
            v12 = std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<int const,unsigned int>,false,false> *const)(v2 + 64));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v12->second);
            common::milog::MiLogStream::~MiLogStream(&v20);
          }
        }
      }
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin);
    }
  }
  if ( v22 == (char *)v2 )
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

// Line 1211: range 00000000179C5676-00000000179C593D
void __cdecl PlayerAbilityGroupComp::tryUnregisterTeamAbilitySourceGroupId(
        PlayerAbilityGroupComp *const this,
        const data::ConfigEntityAbilityEntryList *entity_ability_entry_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<data::ConfigEntityAbilityEntry>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  const std::vector<data::ConfigEntityAbilityEntry> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::ConfigEntityAbilityEntry *entry; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 22 ability_name_hash:1221 64 8 9 iter:1222";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::tryUnregisterTeamAbilitySourceGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( PlayerAbilityGroupComp::getCurAbilityGroupSourceGroupId(this) )
  {
    __for_range = entity_ability_entry_vec;
    __for_begin._M_current = std::vector<data::ConfigEntityAbilityEntry>::begin(entity_ability_entry_vec)._M_current;
    __for_end._M_current = std::vector<data::ConfigEntityAbilityEntry>::end(entity_ability_entry_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>(
              &__for_begin,
              &__for_end) )
    {
      entry = __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator*(&__for_begin);
      if ( (unsigned __int8)std::string::empty(&entry->ability_name) != 1 )
      {
        *(_DWORD *)(v2 + 48) = getStringHash(&entry->ability_name);
        *(std::unordered_map<int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<int,unsigned int>::find(
                                                                         &this->team_ability_hash_to_source_group_map_,
                                                                         (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<int,unsigned int>::end(&this->team_ability_hash_to_source_group_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ability_group/player_ability_group_comp.cpp",
            "tryUnregisterTeamAbilitySourceGroupId",
            1225);
          v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 &v11,
                 (const char (*)[48])"find source group_id failed, ability_name_hash:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v11);
        }
        else
        {
          std::unordered_map<int,unsigned int>::erase(
            &this->team_ability_hash_to_source_group_map_,
            (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
        }
      }
      __gnu_cxx::__normal_iterator<data::ConfigEntityAbilityEntry const*,std::vector<data::ConfigEntityAbilityEntry>>::operator++(&__for_begin);
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 1236: range 00000000179C593E-00000000179C5B8D
uint32_t __cdecl PlayerAbilityGroupComp::getCurAbilityGroupSourceGroupId(const PlayerAbilityGroupComp *const this)
{
  data::AbilityGroupSourceType source_type; // eax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  const data::GalleryExcelConfig *config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->source_param_.source_type == ABILITY_GROUP_SOURCE_NONE )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !this->source_param_.source_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  source_type = this->source_param_.source_type;
  if ( source_type == ABILITY_GROUP_SOURCE_CHALLENGE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return this->source_param_.source_id;
  }
  else if ( source_type == ABILITY_GROUP_SOURCE_GALLERY )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v5);
    p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_param_.source_id >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                   p_gallery_config_mgr,
                   this->source_param_.source_id);
    std::shared_ptr<Config>::~shared_ptr(v5);
    if ( !config_ptr )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( config_ptr->control_group_id )
      return config_ptr->control_group_id;
    else
      return 0;
  }
  else
  {
    return 0;
  }
};

// Line 1262: range 00000000179C5B8E-00000000179C5D20
__int64 __fastcall PlayerAbilityGroupComp::getAvatarAbilitySourceGroupId(
        const PlayerAbilityGroupComp *const this,
        int32_t ability_name_hash)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<int const,unsigned int>,false,false>::pointer v6; // rdx
  std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 22 ability_name_hash:1261 64 8 9 iter:1263";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::getAvatarAbilitySourceGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = ability_name_hash;
  *(std::unordered_map<int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<int,unsigned int>::find(
                                                                         &this->avatar_ability_hash_to_source_group_map_,
                                                                         (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<int,unsigned int>::end(&this->avatar_ability_hash_to_source_group_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second;
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
  return result;
};

// Line 1272: range 00000000179C5D22-00000000179C5EB4
__int64 __fastcall PlayerAbilityGroupComp::getTeamAbilitySourceGroupId(
        const PlayerAbilityGroupComp *const this,
        int32_t ability_name_hash)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<int const,unsigned int>,false,false>::pointer v6; // rdx
  std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 22 ability_name_hash:1271 64 8 9 iter:1273";
  *(_QWORD *)(v2 + 16) = PlayerAbilityGroupComp::getTeamAbilitySourceGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = ability_name_hash;
  *(std::unordered_map<int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<int,unsigned int>::find(
                                                                         &this->team_ability_hash_to_source_group_map_,
                                                                         (const std::unordered_map<int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<int,unsigned int>::end(&this->team_ability_hash_to_source_group_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second;
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
  return result;
};
