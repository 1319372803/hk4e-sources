// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/talent_comp.cpp

// Line 38: range 000000001494BBB8-000000001494BC18
int32_t __cdecl SkillDepot::fromBin(SkillDepot *const this, const proto::AvatarSkillDepotBin *bin)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax

  v2 = proto::AvatarSkillDepotBin::talent_id_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v2, &this->bin_talent_vec);
  v3 = proto::AvatarSkillDepotBin::inherent_proud_skill_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v3, &this->bin_proud_skill_vec);
  return 0;
};

// Line 47: range 000000001494BC1A-000000001494BEBB
int32_t __cdecl SkillDepot::toBin(const SkillDepot *const this, bool is_cur_depot, proto::AvatarSkillDepotBin *bin)
{
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Level; // edx
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+38h] [rbp-38h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v13; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *__0; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v16; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+68h] [rbp-8h]

  if ( is_cur_depot )
  {
    __for_range = &this->unlocked_talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->unlocked_talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(&this->unlocked_talent_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v16);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v16);
      if ( *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)talent_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarSkillDepotBin::add_talent_id_list(bin, *talent_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    if ( std::operator!=<BaseTalent>(0LL, &this->core_proud_skill_ptr) )
    {
      v3 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->core_proud_skill_ptr);
      Level = BaseTalent::getLevel(v3);
      proto::AvatarSkillDepotBin::set_core_proud_skill_level(bin, Level);
    }
    __for_range_0 = &this->proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v13);
      __0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v13);
      if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarSkillDepotBin::add_inherent_proud_skill_list(bin, *proud_skill_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
  }
  else
  {
    v5 = proto::AvatarSkillDepotBin::mutable_talent_id_list(bin);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->bin_talent_vec, v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::AvatarSkillDepotBin::set_core_proud_skill_level(bin, this->bin_core_proud_skill_level);
    v6 = proto::AvatarSkillDepotBin::mutable_inherent_proud_skill_list(bin);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->bin_proud_skill_vec, v6);
  }
  return 0;
};

// Line 74: range 000000001494BEBC-000000001494C13E
void __cdecl SkillDepot::clearSkillDepot(SkillDepot *const this)
{
  __int64 v1; // rsi
  BaseTalentPtr *p_core_proud_skill_ptr; // rsi
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Level; // edx
  char v5; // al
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+20h] [rbp-50h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+28h] [rbp-48h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v10; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *__0; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v13; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+58h] [rbp-18h]
  std::shared_ptr<BaseTalent> __r; // [rsp+60h] [rbp-10h] BYREF

  std::vector<unsigned int>::clear(&this->bin_talent_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bin_core_proud_skill_level, v1, (_BYTE)this - 64);
  }
  this->bin_core_proud_skill_level = 0;
  std::vector<unsigned int>::clear(&this->bin_proud_skill_vec);
  __for_range = &this->unlocked_talent_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->unlocked_talent_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(&this->unlocked_talent_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v13);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v13);
    std::vector<unsigned int>::push_back(&this->bin_talent_vec, talent_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  p_core_proud_skill_ptr = &this->core_proud_skill_ptr;
  if ( std::operator!=<BaseTalent>(0LL, &this->core_proud_skill_ptr) )
  {
    v3 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->core_proud_skill_ptr);
    Level = BaseTalent::getLevel(v3);
    v5 = *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000);
    if ( v5 != 0 && v5 <= 3 )
    {
      LOBYTE(p_core_proud_skill_ptr) = v5 != 0;
      __asan_report_store4(&this->bin_core_proud_skill_level, p_core_proud_skill_ptr, Level);
    }
    this->bin_core_proud_skill_level = Level;
  }
  __for_range_0 = &this->proud_skill_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->proud_skill_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v10);
    __0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v10);
    std::vector<unsigned int>::push_back(&this->bin_proud_skill_vec, proud_skill_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::clear(&this->unlocked_talent_map);
  std::shared_ptr<BaseTalent>::shared_ptr(&__r, 0LL);
  std::shared_ptr<BaseTalent>::operator=(&this->core_proud_skill_ptr, &__r);
  std::shared_ptr<BaseTalent>::~shared_ptr(&__r);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::clear(&this->proud_skill_map);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::clear(&this->skill_talent_map);
};

// Line 100: range 000000001494C140-000000001494CAE6
int32_t __cdecl SkillDepot::checkSkillDepot(const SkillDepot *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  bool v5; // r14
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  const AvatarSkillExcelConfigMgr *v9; // rdi
  uint32_t v10; // edx
  bool v11; // r14
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  AvatarSkillExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rdx
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rcx
  bool v18; // r14
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v24; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-C0h]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+28h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-B0h]
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v34; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-90h] BYREF
  char v36[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 18 proud_skill_id:134";
  *(_QWORD *)(v1 + 16) = SkillDepot::checkSkillDepot;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v5 = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(p_avatar_skill_config_mgr, this->depot_id) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "checkSkillDepot",
      103);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v35,
           (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->depot_id);
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = -1;
    goto LABEL_38;
  }
  __for_range = &this->bin_talent_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->bin_talent_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->bin_talent_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.avatar_skill_config_mgr;
    v10 = *(_DWORD *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (const AvatarSkillExcelConfigMgr *)this;
      __asan_report_load4();
    }
    v11 = !AvatarSkillExcelConfigMgr::isTalentExistInSkillDepot(v9, this->depot_id, v10);
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "checkSkillDepot",
        111);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v35,
              (const char (*)[42])"isTalentExistInSkillDepot fail. depot_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->depot_id);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" talent_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = -1;
      goto LABEL_38;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->bin_core_proud_skill_level )
    goto LABEL_30;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    v15,
                                    this->depot_id);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( !avatar_skill_depot_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "checkSkillDepot",
      122);
    v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v35,
            (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->depot_id);
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = -1;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 32) = avatar_skill_depot_config_ptr->core_proud_skill_group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  p_avatar_talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.avatar_talent_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v18 = AvatarTalentExcelConfigMgr::findProudSkillId(
          p_avatar_talent_config_mgr,
          *(_DWORD *)(v1 + 32),
          this->bin_core_proud_skill_level) == 0;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( v18 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "checkSkillDepot",
      128);
    v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v35,
            (const char (*)[34])"findProudSkillId fails, depot_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->depot_id);
    v21 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v20,
            (const char (*)[23])" proud_skill_grpud_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v1 + 32));
    v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v22,
            (const char (*)[25])" core_proud_skill_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->bin_core_proud_skill_level);
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = -1;
  }
  else
  {
LABEL_30:
    __for_range_0 = &this->bin_proud_skill_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->bin_proud_skill_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v24 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v24;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
      proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
                                 &v25->design_config.txt_config_mgr.avatar_talent_config_mgr,
                                 *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( !proud_skill_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "checkSkillDepot",
          140);
        v26 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v35,
                (const char (*)[49])"findProudSkillExcelConfig fails, proud_skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v35);
        result = -1;
        goto LABEL_38;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
LABEL_38:
  if ( v36 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 150: range 000000001494CAE8-000000001494D078
int32_t __cdecl SkillDepot::initSkillDepot(SkillDepot *const this, Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rdx
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<BaseTalent> __a; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 27 inherent_proud_skill_id:169";
  *(_QWORD *)(v2 + 16) = SkillDepot::initSkillDepot;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->bin_talent_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->bin_talent_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->bin_talent_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    SkillDepot::emplaceTalent((SkillDepot *const)&__a, (Avatar *)this, (uint32_t)avatar);
    v6 = std::operator==<BaseTalent>(0LL, &__a);
    std::shared_ptr<BaseTalent>::~shared_ptr(&__a);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "initSkillDepot",
        155);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v22,
             (const char (*)[31])"emplaceTalent fail, talent_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, avatar);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
      goto LABEL_24;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_core_proud_skill_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->bin_core_proud_skill_level
    && (SkillDepot::setCoreProudSkill((SkillDepot *const)&__a, (Avatar *)this, (uint32_t)avatar),
        v10 = std::operator==<BaseTalent>(0LL, &__a),
        std::shared_ptr<BaseTalent>::~shared_ptr(&__a),
        v10) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "initSkillDepot",
      164);
    v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v22,
            (const char (*)[48])"setCoreProudSkill fail, core_proud_skill_level:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->bin_core_proud_skill_level);
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, avatar);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  else
  {
    __for_range_0 = &this->bin_proud_skill_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->bin_proud_skill_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v13;
      SkillDepot::emplaceInherentProudSkill((SkillDepot *const)&__a, (Avatar *)this, (uint32_t)avatar);
      v14 = std::operator==<BaseTalent>(0LL, &__a);
      std::shared_ptr<BaseTalent>::~shared_ptr(&__a);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "initSkillDepot",
          173);
        v15 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v22,
                (const char (*)[57])"emplaceInherentProudSkill fail, inherent_proud_skill_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, avatar);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_24;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
LABEL_24:
  if ( v23 == (char *)v2 )
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

// Line 182: range 000000001494D07A-000000001494D18B
uint32_t __cdecl SkillDepot::getCoreProudSkillLevel(const SkillDepot *const this)
{
  std::shared_ptr<BaseTalent> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t Level; // r14d
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<BaseTalent> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<BaseTalent> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 talent_ptr:183";
  v1[1]._M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)SkillDepot::getCoreProudSkillLevel;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::shared_ptr<BaseTalent>::shared_ptr(v1 + 2, &this->core_proud_skill_ptr);
  if ( std::operator==<BaseTalent>(0LL, v1 + 2) )
  {
    Level = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    Level = BaseTalent::getLevel(v5);
  }
  std::shared_ptr<BaseTalent>::~shared_ptr(v1 + 2);
  result = Level;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 194: range 000000001494D18C-000000001494D512
SkillDepot *__fastcall SkillDepot::emplaceTalent(
        SkillDepot *const this,
        Avatar *avatar,
        unsigned int *talent_id,
        int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::shared_ptr<BaseTalent> *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::shared_ptr<ActorTalent> v20; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 talent_id:193 64 16 14 talent_ptr:195";
  *(_QWORD *)(v4 + 16) = SkillDepot::emplaceTalent;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = a4;
  common::tools::perf::make_shared<ActorTalent,Avatar &,unsigned int &>(
    (Avatar *)&v20,
    talent_id,
    (Avatar *)(v4 + 48),
    talent_id);
  std::static_pointer_cast<BaseTalent,ActorTalent>((const std::shared_ptr<ActorTalent> *)(v4 + 64));
  std::shared_ptr<ActorTalent>::~shared_ptr(&v20);
  v7 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  v8 = *(_QWORD *)v7 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "emplaceTalent",
      198);
    v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v21,
            (const char (*)[29])"initMixins fails, talent_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)avatar);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    v13 = std::map<unsigned int,std::shared_ptr<BaseTalent>>::emplace<unsigned int &,std::shared_ptr<BaseTalent>&>(
            (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)&avatar->baseclass_0[8],
            (unsigned int *)(v4 + 48),
            (std::shared_ptr<BaseTalent> *)(v4 + 64),
            (unsigned int *)&avatar->baseclass_0[8],
            v9);
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "emplaceTalent",
        204);
      v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v21,
              (const char (*)[21])"duplicate talent_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)avatar);
      common::milog::MiLogStream::~MiLogStream(&v21);
      std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<BaseTalent>::shared_ptr(
        (std::shared_ptr<BaseTalent> *const)this,
        (std::shared_ptr<BaseTalent> *)(v4 + 64));
    }
  }
  std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v4 + 64));
  if ( v22 == (char *)v4 )
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
  return this;
};

// Line 213: range 000000001494D514-000000001494D66C
BaseTalentPtr __cdecl SkillDepot::delCoreProudSkill(SkillDepot *const this, Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseTalentPtr result; // rax
  std::shared_ptr<BaseTalent> __r; // [rsp+20h] [rbp-70h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 talent_ptr:220";
  *(_QWORD *)(v2 + 16) = SkillDepot::delCoreProudSkill;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<BaseTalent>((const std::shared_ptr<BaseTalent> *)&avatar->baseclass_0[56], 0LL) )
  {
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<BaseTalent>::shared_ptr(
      (std::shared_ptr<BaseTalent> *const)(v2 + 32),
      (const std::shared_ptr<BaseTalent> *)&avatar->baseclass_0[56]);
    std::shared_ptr<BaseTalent>::shared_ptr(&__r, 0LL);
    std::shared_ptr<BaseTalent>::operator=((std::shared_ptr<BaseTalent> *const)&avatar->baseclass_0[56], &__r);
    std::shared_ptr<BaseTalent>::~shared_ptr(&__r);
    std::shared_ptr<BaseTalent>::shared_ptr(
      (std::shared_ptr<BaseTalent> *const)this,
      (std::shared_ptr<BaseTalent> *)(v2 + 32));
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 32));
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 227: range 000000001494D66E-000000001494DA6B
// local variable allocation has failed, the output may be wrong!
BaseTalentPtr __cdecl SkillDepot::setCoreProudSkill(
        SkillDepot *const this,
        Avatar *avatar,
        uint32_t core_proud_skill_level)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  BaseTalentPtr result; // rax
  TalentComp *TalentComp; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  uint32_t core_proud_skill_levela; // [rsp+4h] [rbp-CCh]
  Avatar *avatara; // [rsp+8h] [rbp-C8h]
  std::shared_ptr<ProudSkill> v19; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  avatara = *(Avatar **)&core_proud_skill_level;
  core_proud_skill_levela = v3;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 23 core_proud_skill_id:234 64 16 14 talent_ptr:235";
  *(_QWORD *)(v4 + 16) = SkillDepot::setCoreProudSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( std::operator!=<BaseTalent>((const std::shared_ptr<BaseTalent> *)&avatar->baseclass_0[56], 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/talent/talent_comp.cpp",
      "setCoreProudSkill",
      230);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v20,
           (const char (*)[44])"core_proud_skill_ptr is not null. depot_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)avatar);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, avatara);
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    TalentComp = Avatar::getTalentComp(avatara);
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 48) = TalentComp::getCoreProudSkillId(
                             TalentComp,
                             *(_DWORD *)avatar->baseclass_0,
                             core_proud_skill_levela);
    common::tools::perf::make_shared<ProudSkill,Avatar &,unsigned int &>(
      (Avatar *)&v19,
      (unsigned int *)avatara,
      (Avatar *)(v4 + 48),
      (unsigned int *)avatara);
    std::static_pointer_cast<BaseTalent,ProudSkill>((const std::shared_ptr<ProudSkill> *)(v4 + 64));
    std::shared_ptr<ProudSkill>::~shared_ptr(&v19);
    v12 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12 + 8LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "setCoreProudSkill",
        238);
      v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v20,
              (const char (*)[34])"initMixins fails, proud_skill_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)avatar);
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<BaseTalent>::operator=(
        (std::shared_ptr<BaseTalent> *const)&avatar->baseclass_0[56],
        (const std::shared_ptr<BaseTalent> *)(v4 + 64));
      std::shared_ptr<BaseTalent>::shared_ptr(
        (std::shared_ptr<BaseTalent> *const)this,
        (std::shared_ptr<BaseTalent> *)(v4 + 64));
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v4 + 64));
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
  result._M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 248: range 000000001494DA6C-000000001494E0F5
SkillDepot *__fastcall SkillDepot::addSkillTalent(
        SkillDepot *const this,
        Avatar *avatar,
        unsigned int *skill_id,
        uint32_t skill_level,
        uint32_t extra_level,
        uint32_t a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  BaseTalent *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::shared_ptr<BaseTalent> *v27; // rax
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+30h] [rbp-E0h]
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v35; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-C0h] BYREF
  char v37[160]; // [rsp+70h] [rbp-A0h] BYREF

  v6 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 24 proud_skill_group_id:256 48 4 18 proud_skill_id:264 64 4 12 skill_id:247 80 4 15 skill"
                        "_level:247 96 16 14 talent_ptr:265";
  *(_QWORD *)(v6 + 16) = SkillDepot::addSkillTalent;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -234556924;
  v8[536862723] = -202178560;
  *(_DWORD *)(v6 + 64) = skill_level;
  *(_DWORD *)(v6 + 80) = extra_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              &v9->design_config.txt_config_mgr.avatar_skill_config_mgr,
                              *(_DWORD *)(v6 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( avatar_skill_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v6 + 32) = avatar_skill_config_ptr->proud_skill_group_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    proud_skill_config_ptr = AvatarTalentExcelConfigMgr::findProudSkillConfig(
                               &v14->design_config.txt_config_mgr.avatar_talent_config_mgr,
                               *(_DWORD *)(v6 + 32),
                               *(_DWORD *)(v6 + 80));
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( proud_skill_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v6 + 48) = proud_skill_config_ptr->proud_skill_id;
      common::tools::perf::make_shared<ProudSkill,Avatar &,unsigned int &>(
        (Avatar *)&v35,
        skill_id,
        (Avatar *)(v6 + 48),
        skill_id);
      std::static_pointer_cast<BaseTalent,ProudSkill>((const std::shared_ptr<ProudSkill> *)(v6 + 96));
      std::shared_ptr<ProudSkill>::~shared_ptr((std::shared_ptr<ProudSkill> *const)&v35);
      v21 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
      BaseTalent::setExtraLevel(v21, a6);
      v22 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8();
      v23 = *(_QWORD *)v22 + 8LL;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v23)(v22) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "addSkillTalent",
          269);
        v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v36,
                (const char (*)[34])"initMixins fails, proud_skill_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v6 + 48));
        v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)avatar);
        common::milog::MiLogStream::~MiLogStream(&v36);
        std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
      }
      else
      {
        v27 = std::map<unsigned int,std::shared_ptr<BaseTalent>>::operator[](
                (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)&avatar->baseclass_0[120],
                (const std::map<unsigned int,std::shared_ptr<BaseTalent>>::key_type *)(v6 + 64));
        std::shared_ptr<BaseTalent>::operator=(v27, (const std::shared_ptr<BaseTalent> *)(v6 + 96));
        std::shared_ptr<BaseTalent>::shared_ptr(
          (std::shared_ptr<BaseTalent> *const)this,
          (std::shared_ptr<BaseTalent> *)(v6 + 96));
      }
      std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v6 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "addSkillTalent",
        260);
      v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v36,
              (const char (*)[49])"findProudSkillConfig fail, proud_skill_group_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" level:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 80));
      v19 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v18, (const Avatar *)skill_id);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)avatar);
      common::milog::MiLogStream::~MiLogStream(&v36);
      std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "addSkillTalent",
      252);
    v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v36,
            (const char (*)[43])"findAvatarSkillExcelConfig fail, skill_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 64));
    v12 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, (const Avatar *)skill_id);
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)avatar);
    common::milog::MiLogStream::~MiLogStream(&v36);
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  if ( v37 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 279: range 000000001494E0F6-000000001494E2EC
SkillDepot *__fastcall SkillDepot::delSkillTalent(SkillDepot *const this, __int64 skill_id, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 skill_id:278 64 8 8 iter:281 96 16 18 old_talent_ptr:287";
  *(_QWORD *)(v3 + 16) = SkillDepot::delSkillTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BaseTalent>>::find(
                                                                                 (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(skill_id + 120),
                                                                                 (const std::map<unsigned int,std::shared_ptr<BaseTalent>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end((std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(skill_id + 120))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v3 + 64));
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 96), &v6->second);
    std::map<unsigned int,std::shared_ptr<BaseTalent>>::erase[abi:cxx11](
      (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(skill_id + 120),
      *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator *)(v3 + 64));
    std::shared_ptr<BaseTalent>::shared_ptr(
      (std::shared_ptr<BaseTalent> *const)this,
      (std::shared_ptr<BaseTalent> *)(v3 + 96));
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 96));
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 293: range 000000001494E2EE-000000001494E476
const SkillDepot *__fastcall SkillDepot::findSkillTalent(const SkillDepot *const this, __int64 skill_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 skill_id:292 64 8 8 iter:294";
  *(_QWORD *)(v3 + 16) = SkillDepot::findSkillTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BaseTalent>>::find(
                                                                                       (const std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(skill_id + 120),
                                                                                       (const std::map<unsigned int,std::shared_ptr<BaseTalent>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end((const std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(skill_id + 120))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v3 + 64));
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 304: range 000000001494E478-000000001494E7FE
SkillDepot *__fastcall SkillDepot::emplaceInherentProudSkill(
        SkillDepot *const this,
        Avatar *avatar,
        unsigned int *proud_skill_id,
        int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::shared_ptr<BaseTalent> *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::shared_ptr<ProudSkill> v20; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 18 proud_skill_id:303 64 16 14 talent_ptr:305";
  *(_QWORD *)(v4 + 16) = SkillDepot::emplaceInherentProudSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = a4;
  common::tools::perf::make_shared<ProudSkill,Avatar &,unsigned int &>(
    (Avatar *)&v20,
    proud_skill_id,
    (Avatar *)(v4 + 48),
    proud_skill_id);
  std::static_pointer_cast<BaseTalent,ProudSkill>((const std::shared_ptr<ProudSkill> *)(v4 + 64));
  std::shared_ptr<ProudSkill>::~shared_ptr(&v20);
  v7 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  v8 = *(_QWORD *)v7 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "emplaceInherentProudSkill",
      308);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v21,
            (const char (*)[34])"initMixins fails, proud_skill_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)avatar);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    v13 = std::map<unsigned int,std::shared_ptr<BaseTalent>>::emplace<unsigned int &,std::shared_ptr<BaseTalent>&>(
            (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)&avatar->baseclass_0[72],
            (unsigned int *)(v4 + 48),
            (std::shared_ptr<BaseTalent> *)(v4 + 64),
            (unsigned int *)&avatar->baseclass_0[72],
            v9);
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "emplaceInherentProudSkill",
        314);
      v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v21,
              (const char (*)[26])"duplicate proud_skill_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)avatar);
      common::milog::MiLogStream::~MiLogStream(&v21);
      std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<BaseTalent>::shared_ptr(
        (std::shared_ptr<BaseTalent> *const)this,
        (std::shared_ptr<BaseTalent> *)(v4 + 64));
    }
  }
  std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v4 + 64));
  if ( v22 == (char *)v4 )
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
  return this;
};

// Line 323: range 000000001494E800-000000001494EBFA
void __cdecl SkillDepot::getProtoProudSkillExtraLevels(
        const SkillDepot *const this,
        google::protobuf::Map<unsigned int,unsigned int> *extra_level_map)
{
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v2; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t ExtraLevel; // ebx
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::Map<unsigned int,unsigned int>::key_type *p_key; // rsi
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  char v11; // cl
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // ebx
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v17; // rsi
  unsigned int *v18; // rax
  uint32_t *v19; // rdx
  char v20; // cl
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v21; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t v25; // ebx
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v27; // rsi
  unsigned int *v28; // rax
  uint32_t *v29; // rdx
  char v30; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *__0; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr_0; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+58h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<BaseTalent> > __in; // [rsp+60h] [rbp-30h] BYREF

  __for_range = &this->proud_skill_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->proud_skill_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(&this->proud_skill_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseTalent>>::pair(&__in, v2);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(&__in);
    base_talent_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(&__in);
    if ( std::operator!=<BaseTalent>(base_talent_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
      if ( BaseTalent::getExtraLevel(v3) )
      {
        v5 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
        ExtraLevel = BaseTalent::getExtraLevel(v5);
        v7 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
        key = BaseTalent::getGroupId(v7);
        p_key = &key;
        v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](extra_level_map, &key);
        v10 = v9;
        v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
        if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
        {
          LOBYTE(p_key) = v11 != 0;
          __asan_report_store4(v9, p_key, (_BYTE)v9);
        }
        *v10 = ExtraLevel;
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseTalent>>::~pair(&__in);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  if ( std::operator!=<BaseTalent>(&this->core_proud_skill_ptr, 0LL) )
  {
    v12 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->core_proud_skill_ptr);
    if ( BaseTalent::getExtraLevel(v12) )
    {
      v14 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->core_proud_skill_ptr);
      v15 = BaseTalent::getExtraLevel(v14);
      v16 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->core_proud_skill_ptr);
      key = BaseTalent::getGroupId(v16);
      v17 = &key;
      v18 = google::protobuf::Map<unsigned int,unsigned int>::operator[](extra_level_map, &key);
      v19 = v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      {
        LOBYTE(v17) = v20 != 0;
        __asan_report_store4(v18, v17, (_BYTE)v18);
      }
      *v19 = v15;
    }
  }
  __for_range_0 = &this->skill_talent_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->skill_talent_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseTalent>>::pair(&__in, v21);
    __0 = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(&__in);
    base_talent_ptr_0 = std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(&__in);
    if ( std::operator!=<BaseTalent>(base_talent_ptr_0, 0LL) )
    {
      v22 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr_0);
      if ( BaseTalent::getExtraLevel(v22) )
      {
        v24 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr_0);
        v25 = BaseTalent::getExtraLevel(v24);
        v26 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr_0);
        key = BaseTalent::getGroupId(v26);
        v27 = &key;
        v28 = google::protobuf::Map<unsigned int,unsigned int>::operator[](extra_level_map, &key);
        v29 = v28;
        v30 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
        if ( v30 != 0 && (char)(((unsigned __int8)v28 & 7) + 3) >= v30 )
        {
          LOBYTE(v27) = v30 != 0;
          __asan_report_store4(v28, v27, (_BYTE)v28);
        }
        *v29 = v25;
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseTalent>>::~pair(&__in);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
};

// Line 346: range 000000001494EBFC-000000001494ED41
uint32_t __cdecl SkillDepot::getTotalLevelupCount(const SkillDepot *const this)
{
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t v2; // eax
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v3; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // eax
  uint32_t total_levelup_count; // [rsp+1Ch] [rbp-54h]
  uint32_t level; // [rsp+20h] [rbp-50h]
  uint32_t level_0; // [rsp+24h] [rbp-4Ch]
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+28h] [rbp-48h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+30h] [rbp-40h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_ptr; // [rsp+48h] [rbp-28h]
  std::pair<unsigned int const,std::shared_ptr<BaseTalent> > __in; // [rsp+50h] [rbp-20h] BYREF

  total_levelup_count = 0;
  if ( std::operator!=<BaseTalent>(&this->core_proud_skill_ptr, 0LL) )
  {
    v1 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->core_proud_skill_ptr);
    level = BaseTalent::getLevel(v1);
    if ( level )
      v2 = level - 1;
    else
      v2 = 0;
    total_levelup_count = v2;
  }
  __for_range = &this->proud_skill_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->proud_skill_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(&this->proud_skill_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseTalent>>::pair(&__in, v3);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(&__in);
    talent_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(&__in);
    if ( std::operator!=<BaseTalent>(talent_ptr, 0LL) )
    {
      v4 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)talent_ptr);
      level_0 = BaseTalent::getLevel(v4);
      if ( level_0 )
        v5 = level_0 - 1;
      else
        v5 = 0;
      total_levelup_count += v5;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseTalent>>::~pair(&__in);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  return total_levelup_count;
};

// Line 366: range 000000001494ED42-000000001494ED8A
void __cdecl SkillDepot::getUnlockedTalentIdVec(
        const SkillDepot *const this,
        std::vector<unsigned int> *unlocked_talent_id_vec)
{
  std::vector<unsigned int> __x; // [rsp+10h] [rbp-20h] BYREF

  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,std::shared_ptr<BaseTalent>>>(
    &__x,
    &this->unlocked_talent_map);
  std::vector<unsigned int>::operator=(unlocked_talent_id_vec, &__x);
  std::vector<unsigned int>::~vector(&__x);
};

// Line 372: range 0000000014A123C8-0000000014A12771
void __cdecl TalentComp::foreachInTalentMap<std::pair<unsigned long,unsigned int>>(
        TalentComp *const this,
        const std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *talent_map,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::_Base_ptr M_node; // r14
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::const_iterator v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  BaseTalent *v11; // rdx
  std::allocator<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> > > __a; // [rsp+2Fh] [rbp-101h] BYREF
  std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> > *v17; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> > >::type *talent_index; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> > >::type *base_talent_wtr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 19 base_talent_ptr:377 64 24 14 talent_vec:374";
  *(_QWORD *)(v3 + 16) = TalentComp::foreachInTalentMap<std::pair<unsigned long,unsigned int>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::allocator<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>::allocator(&__a);
  M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end(talent_map)._M_node;
  v7._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::begin(talent_map)._M_node;
  std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>::vector<std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>,void>(
    (std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >> *const)(v3 + 64),
    v7,
    (std::_Rb_tree_const_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >)M_node,
    &__a);
  std::allocator<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>::~allocator(&__a);
  __for_range = (std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >> *)(v3 + 64);
  __for_begin._M_current = std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>::begin((std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >> *const)(v3 + 64))._M_current;
  __for_end._M_current = std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>>(
            &__for_begin,
            &__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>>::operator*(&__for_begin);
    talent_index = std::get<0ul,std::pair<unsigned long,unsigned int> const,std::weak_ptr<BaseTalent>>(v17);
    base_talent_wtr = (std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> > >::type *)std::get<1ul,std::pair<unsigned long,unsigned int> const,std::weak_ptr<BaseTalent>>(v17);
    std::weak_ptr<BaseTalent>::lock((const std::weak_ptr<BaseTalent> *const)(v3 + 32));
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "foreachInTalentMap",
        380);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v20,
             (const char (*)[39])"base_talent_ptr is null, talent_index:");
      v9 = common::milog::MiLogStream::operator<<<unsigned long,unsigned int>(v8, talent_index);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v11 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::function<ForeachPolicy ()(BaseTalent &)>::operator()(func, v11);
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>>::operator++(&__for_begin);
  }
  std::vector<std::pair<std::pair const<unsigned long,unsigned int>,std::weak_ptr<BaseTalent>>>::~vector((std::vector<std::pair<const std::pair<long unsigned int,unsigned int>,std::weak_ptr<BaseTalent> >> *const)(v3 + 64));
  if ( v21 == (char *)v3 )
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
};

// Line 372: range 0000000014A12BFE-0000000014A12FA7
void __cdecl TalentComp::foreachInTalentMap<std::string>(
        TalentComp *const this,
        const std::map<std::string,std::shared_ptr<BaseTalent>> *talent_map,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >::_Base_ptr M_node; // r14
  std::map<std::string,std::shared_ptr<BaseTalent>>::const_iterator v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  BaseTalent *v11; // rdx
  std::allocator<std::pair<const std::string,std::weak_ptr<BaseTalent> > > __a; // [rsp+2Fh] [rbp-101h] BYREF
  std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<const std::string,std::weak_ptr<BaseTalent> > *v17; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<const std::string,std::weak_ptr<BaseTalent> > >::type *talent_index; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<const std::string,std::weak_ptr<BaseTalent> > >::type *base_talent_wtr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 19 base_talent_ptr:377 64 24 14 talent_vec:374";
  *(_QWORD *)(v3 + 16) = TalentComp::foreachInTalentMap<std::string>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::allocator<std::pair<std::string const,std::weak_ptr<BaseTalent>>>::allocator(&__a);
  M_node = std::map<std::string,std::shared_ptr<BaseTalent>>::end(talent_map)._M_node;
  v7._M_node = std::map<std::string,std::shared_ptr<BaseTalent>>::begin(talent_map)._M_node;
  std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>::vector<std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<BaseTalent>>>,void>(
    (std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >> *const)(v3 + 64),
    v7,
    (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >)M_node,
    &__a);
  std::allocator<std::pair<std::string const,std::weak_ptr<BaseTalent>>>::~allocator(&__a);
  __for_range = (std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >> *)(v3 + 64);
  __for_begin._M_current = std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>::begin((std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >> *const)(v3 + 64))._M_current;
  __for_end._M_current = std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<std::string const,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>>(
            &__for_begin,
            &__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<std::pair<std::string const,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>>::operator*(&__for_begin);
    talent_index = std::get<0ul,std::string const,std::weak_ptr<BaseTalent>>(v17);
    base_talent_wtr = (std::tuple_element<1,const std::pair<const std::string,std::weak_ptr<BaseTalent> > >::type *)std::get<1ul,std::string const,std::weak_ptr<BaseTalent>>(v17);
    std::weak_ptr<BaseTalent>::lock((const std::weak_ptr<BaseTalent> *const)(v3 + 32));
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "foreachInTalentMap",
        380);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v20,
             (const char (*)[39])"base_talent_ptr is null, talent_index:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, talent_index);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v11 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::function<ForeachPolicy ()(BaseTalent &)>::operator()(func, v11);
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<std::pair<std::string const,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>>::operator++(&__for_begin);
  }
  std::vector<std::pair<std::string const,std::weak_ptr<BaseTalent>>>::~vector((std::vector<std::pair<const std::string,std::weak_ptr<BaseTalent> >> *const)(v3 + 64));
  if ( v21 == (char *)v3 )
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
};

// Line 372: range 0000000014A127A6-0000000014A12B4F
void __cdecl TalentComp::foreachInTalentMap<unsigned int>(
        TalentComp *const this,
        const std::map<unsigned int,std::shared_ptr<BaseTalent>> *talent_map,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Base_ptr M_node; // r14
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  BaseTalent *v11; // rdx
  std::allocator<std::pair<unsigned int const,std::weak_ptr<BaseTalent> > > __a; // [rsp+2Fh] [rbp-101h] BYREF
  std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,std::weak_ptr<BaseTalent> > *v17; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<BaseTalent> > >::type *talent_index; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<BaseTalent> > >::type *base_talent_wtr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 19 base_talent_ptr:377 64 24 14 talent_vec:374";
  *(_QWORD *)(v3 + 16) = TalentComp::foreachInTalentMap<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::allocator<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>::allocator(&__a);
  M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(talent_map)._M_node;
  v7._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(talent_map)._M_node;
  std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>::vector<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>,void>(
    (std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >> *const)(v3 + 64),
    v7,
    (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >)M_node,
    &__a);
  std::allocator<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>::~allocator(&__a);
  __for_range = (std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >> *)(v3 + 64);
  __for_begin._M_current = std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>::begin((std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >> *const)(v3 + 64))._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int const,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>>(
            &__for_begin,
            &__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<std::pair<unsigned int const,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>>::operator*(&__for_begin);
    talent_index = std::get<0ul,unsigned int const,std::weak_ptr<BaseTalent>>(v17);
    base_talent_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<BaseTalent>>(v17);
    std::weak_ptr<BaseTalent>::lock((const std::weak_ptr<BaseTalent> *const)(v3 + 32));
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "foreachInTalentMap",
        380);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v20,
             (const char (*)[39])"base_talent_ptr is null, talent_index:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, talent_index);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v11 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::function<ForeachPolicy ()(BaseTalent &)>::operator()(func, v11);
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<std::pair<unsigned int const,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>>::operator++(&__for_begin);
  }
  std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent>>>::~vector((std::vector<std::pair<unsigned int const,std::weak_ptr<BaseTalent> >> *const)(v3 + 64));
  if ( v21 == (char *)v3 )
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
};

// Line 389: range 000000001494ED8C-000000001494F07F
int32_t __cdecl TalentComp::fromBin(TalentComp *const this, const proto::AvatarBin *bin)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rcx
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_reference v4; // rsi
  unsigned int first; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rcx
  const google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *__for_range; // [rsp+18h] [rbp-88h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_reference p_depot_id; // [rsp+20h] [rbp-80h]
  std::map<unsigned int,SkillDepot>::mapped_type *skill_depot; // [rsp+28h] [rbp-78h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator __for_end; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v14; // [rsp+70h] [rbp-30h] BYREF

  __for_range = proto::AvatarBin::depot_map(bin);
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::end(&__for_end, __for_range);
  while ( 1 )
  {
    if ( !google::protobuf::operator!=(&__for_begin, &__for_end) )
      return 0;
    p_depot_id = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator::operator*(&__for_begin);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,SkillDepot>,unsigned int>(
           &this->skill_depot_map_,
           &p_depot_id->first) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "fromBin",
        395);
      v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v14,
             (const char (*)[20])"duplicate depot_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &p_depot_id->first);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v3, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v14);
      goto LABEL_15;
    }
    v4 = p_depot_id;
    skill_depot = std::map<unsigned int,SkillDepot>::operator[](&this->skill_depot_map_, &p_depot_id->first);
    if ( *(_BYTE *)(((unsigned __int64)p_depot_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_depot_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    first = p_depot_id->first;
    v6 = *(_BYTE *)(((unsigned __int64)skill_depot >> 3) + 0x7FFF8000);
    if ( v6 != 0 && v6 <= 3 )
    {
      LOBYTE(v4) = v6 != 0;
      __asan_report_store4(skill_depot, v4, (_BYTE)skill_depot);
    }
    skill_depot->depot_id = first;
    if ( SkillDepot::fromBin(skill_depot, &p_depot_id->second) )
      break;
LABEL_15:
    google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/talent/talent_comp.cpp",
    "fromBin",
    403);
  v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v14,
         (const char (*)[25])"SkillDepot fromBin fails");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v14);
  return -1;
};

// Line 413: range 000000001494F080-000000001494F65E
int32_t __cdecl TalentComp::toBin(const TalentComp *const this, proto::AvatarBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  std::map<unsigned int,SkillDepot>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *depot_map_bin; // [rsp+20h] [rbp-E0h]
  const SkillDepot *skill_depot; // [rsp+28h] [rbp-D8h]
  proto::AvatarSkillDepotBin *depot_bin; // [rsp+30h] [rbp-D0h]
  const std::map<unsigned int,SkillDepot> *__for_range; // [rsp+38h] [rbp-C8h]
  const std::pair<unsigned int const,SkillDepot> *v18; // [rsp+40h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,SkillDepot> >::type *depot_id; // [rsp+48h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,SkillDepot> >::type *skill_depot_0; // [rsp+50h] [rbp-B0h]
  proto::AvatarSkillDepotBin *depot_bin_0; // [rsp+58h] [rbp-A8h]
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 cur_depot_id:417 64 8 8 iter:420";
  *(_QWORD *)(v2 + 16) = TalentComp::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  depot_map_bin = proto::AvatarBin::mutable_depot_map(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v2 + 48) )
  {
    *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                        &this->skill_depot_map_,
                                                                        (const std::map<unsigned int,SkillDepot>::key_type *)(v2 + 48));
    __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
           &__for_end) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "toBin",
        423);
      v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v22,
             (const char (*)[43])"getCurDepotTalentInfo fails, cur_depot_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_23;
    }
    skill_depot = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64))->second;
    depot_bin = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](
                  depot_map_bin,
                  (const google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::key_type *)(v2 + 48));
    if ( SkillDepot::toBin(skill_depot, 1, depot_bin) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "toBin",
        430);
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v22,
             (const char (*)[41])"SkillDepot toBin fails, skill_depot_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_23;
    }
  }
  __for_range = &this->skill_depot_map_;
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::begin(&this->skill_depot_map_);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(__for_range)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
            &__for_end) )
    {
      result = 0;
      goto LABEL_26;
    }
    v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
    depot_id = std::get<0ul,unsigned int const,SkillDepot>(v18);
    skill_depot_0 = (std::tuple_element<1,const std::pair<unsigned int const,SkillDepot> >::type *)std::get<1ul,unsigned int const,SkillDepot>(v18);
    if ( *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)depot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *depot_id != *(_DWORD *)(v2 + 48) )
    {
      depot_bin_0 = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](depot_map_bin, depot_id);
      if ( SkillDepot::toBin(skill_depot_0, 0, depot_bin_0) )
        break;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
  }
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/talent/talent_comp.cpp",
    "toBin",
    445);
  v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v22,
          (const char (*)[41])"SkillDepot toBin fails, skill_depot_id: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, depot_id);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" avatar:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
LABEL_23:
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v22);
  result = -1;
LABEL_26:
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
  return result;
};

// Line 455: range 000000001494F660-000000001494FB9E
int32_t __cdecl TalentComp::toSnapshot(const TalentComp *const this, proto::AvatarSnapshotBin *snapshot_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int> *v9; // r13
  int v10; // eax
  google::protobuf::RepeatedField<unsigned int> *v11; // r13
  int v12; // eax
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  proto::AvatarBin *bin; // [rsp+20h] [rbp-100h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *depot_map_bin; // [rsp+28h] [rbp-F8h]
  const SkillDepot *skill_depot; // [rsp+30h] [rbp-F0h]
  proto::AvatarSkillDepotBin *depot_bin; // [rsp+38h] [rbp-E8h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+48h] [rbp-D8h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v21; // [rsp+50h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+58h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *__0; // [rsp+60h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v24; // [rsp+68h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+70h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+78h] [rbp-A8h]
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+A0h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 cur_depot_id:458 64 8 8 iter:461";
  *(_QWORD *)(v2 + 16) = TalentComp::toSnapshot;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  bin = proto::AvatarSnapshotBin::mutable_avatar_bin(snapshot_bin);
  depot_map_bin = proto::AvatarBin::mutable_depot_map(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Avatar::getSkillDepotId(this->avatar_);
  if ( !*(_DWORD *)(v2 + 48) )
    goto LABEL_21;
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      (const std::map<unsigned int,SkillDepot>::key_type *)(v2 + 48));
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    skill_depot = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64))->second;
    depot_bin = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](
                  depot_map_bin,
                  (const google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::key_type *)(v2 + 48));
    v9 = proto::AvatarSkillDepotBin::mutable_talent_id_list(depot_bin);
    v10 = std::map<unsigned int,std::shared_ptr<BaseTalent>>::size(&skill_depot->unlocked_talent_map);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v9, v10);
    v11 = proto::AvatarSkillDepotBin::mutable_inherent_proud_skill_list(depot_bin);
    v12 = std::map<unsigned int,std::shared_ptr<BaseTalent>>::size(&skill_depot->proud_skill_map);
    google::protobuf::RepeatedField<unsigned int>::Reserve(v11, v12);
    __for_range = &skill_depot->unlocked_talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->unlocked_talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v24);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v24);
      if ( *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)talent_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarSkillDepotBin::add_talent_id_list(depot_bin, *talent_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    __for_range_0 = &skill_depot->proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v21);
      __0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v21);
      if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarSkillDepotBin::add_inherent_proud_skill_list(depot_bin, *proud_skill_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
LABEL_21:
    result = 0;
    goto LABEL_22;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/talent/talent_comp.cpp",
    "toSnapshot",
    464);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v27,
         (const char (*)[43])"getCurDepotTalentInfo fails, cur_depot_id:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" avatar:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v27);
  result = -1;
LABEL_22:
  if ( v28 == (char *)v2 )
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

// Line 485: range 000000001494FBA0-0000000014950083
int32_t __cdecl TalentComp::toClient(const TalentComp *const this, proto::SceneAvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v6; // rax
  uint32_t CoreProudSkillLevel; // edx
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-F4h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const SkillDepot *skill_depot; // [rsp+30h] [rbp-E0h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+38h] [rbp-D8h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+40h] [rbp-D0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_extra_level_map; // [rsp+48h] [rbp-C8h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_1; // [rsp+50h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v16; // [rsp+58h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *team_resonance_id; // [rsp+60h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+68h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v19; // [rsp+70h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+78h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr_0; // [rsp+80h] [rbp-90h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v22; // [rsp+88h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+90h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+98h] [rbp-78h]
  char v25[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:486";
  *(_QWORD *)(v2 + 16) = TalentComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v6->second;
    __for_range = &v6->second.unlocked_talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&v6->second.unlocked_talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v22);
      base_talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v22);
      if ( *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)talent_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneAvatarInfo::add_talent_id_list(avatar_info, *talent_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    CoreProudSkillLevel = SkillDepot::getCoreProudSkillLevel(skill_depot);
    proto::SceneAvatarInfo::set_core_proud_skill_level(avatar_info, CoreProudSkillLevel);
    __for_range_0 = &skill_depot->proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v19);
      base_talent_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v19);
      if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneAvatarInfo::add_inherent_proud_skill_list(avatar_info, *proud_skill_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    proto_extra_level_map = proto::SceneAvatarInfo::mutable_proud_skill_extra_level_map(avatar_info);
    SkillDepot::getProtoProudSkillExtraLevels(skill_depot, proto_extra_level_map);
    __for_range_1 = &this->team_resonance_talent_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->team_resonance_talent_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      team_resonance_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v16);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v16);
      if ( *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)team_resonance_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneAvatarInfo::add_team_resonance_list(avatar_info, *team_resonance_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v25 == (char *)v2 )
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

// Line 515: range 0000000014950084-0000000014950567
int32_t __cdecl TalentComp::toClient(const TalentComp *const this, proto::AvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v6; // rax
  uint32_t CoreProudSkillLevel; // edx
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-F4h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const SkillDepot *skill_depot; // [rsp+30h] [rbp-E0h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+38h] [rbp-D8h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+40h] [rbp-D0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_extra_level_map; // [rsp+48h] [rbp-C8h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_1; // [rsp+50h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v16; // [rsp+58h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *team_resonance_id; // [rsp+60h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+68h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v19; // [rsp+70h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+78h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+80h] [rbp-90h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v22; // [rsp+88h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+90h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_ptr; // [rsp+98h] [rbp-78h]
  char v25[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:516";
  *(_QWORD *)(v2 + 16) = TalentComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v6->second;
    __for_range = &v6->second.unlocked_talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&v6->second.unlocked_talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v22);
      talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v22);
      if ( *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)talent_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarInfo::add_talent_id_list(avatar_info, *talent_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    CoreProudSkillLevel = SkillDepot::getCoreProudSkillLevel(skill_depot);
    proto::AvatarInfo::set_core_proud_skill_level(avatar_info, CoreProudSkillLevel);
    __for_range_0 = &skill_depot->proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v19);
      base_talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v19);
      if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarInfo::add_inherent_proud_skill_list(avatar_info, *proud_skill_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    proto_extra_level_map = proto::AvatarInfo::mutable_proud_skill_extra_level_map(avatar_info);
    SkillDepot::getProtoProudSkillExtraLevels(skill_depot, proto_extra_level_map);
    __for_range_1 = &this->team_resonance_talent_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->team_resonance_talent_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      team_resonance_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v16);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v16);
      if ( *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)team_resonance_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarInfo::add_team_resonance_list(avatar_info, *team_resonance_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v25 == (char *)v2 )
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

// Line 545: range 0000000014950568-0000000014950893
int32_t __cdecl TalentComp::init(TalentComp *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t cur_depot_id; // [rsp+1Ch] [rbp-64h]
  std::map<unsigned int,SkillDepot>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,SkillDepot>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,SkillDepot> *__for_range; // [rsp+30h] [rbp-50h]
  std::pair<unsigned int const,SkillDepot> *__in; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,SkillDepot> >::type *depot_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,SkillDepot> >::type *skill_depot; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cur_depot_id = Avatar::getSkillDepotId(this->avatar_);
  __for_range = &this->skill_depot_map_;
  __for_begin._M_node = std::map<unsigned int,SkillDepot>::begin(&this->skill_depot_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator*(&__for_begin);
    depot_id = std::get<0ul,unsigned int const,SkillDepot>(__in);
    skill_depot = std::get<1ul,unsigned int const,SkillDepot>(__in);
    if ( SkillDepot::checkSkillDepot(skill_depot) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "init",
        553);
      v1 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v13,
             (const char (*)[34])"skill_depot check fail, depot_id:");
      v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, depot_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_8:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v2, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)depot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cur_depot_id == *depot_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( SkillDepot::initSkillDepot(skill_depot, this->avatar_) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "init",
          562);
        v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v13,
               (const char (*)[37])"initSkillDepot fail, skill_depot_id:");
        v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, depot_id);
        v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_8;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator++(&__for_begin);
  }
  if ( !TalentComp::checkOpenSkillDepot(this) )
    TalentComp::checkActiveProudSkill(this);
  return 0;
};

// Line 579: range 0000000014950894-0000000014950B30
int32_t __cdecl TalentComp::checkOpenSkillDepot(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  unsigned __int64 v9; // rax
  char v10; // dl
  char *v11; // rsi
  bool v12; // dl
  std::shared_ptr<Config> v13; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 depot_id:580";
  *(_QWORD *)(v1 + 16) = TalentComp::checkOpenSkillDepot;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 32) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v1 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    v6 = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
           &v5->design_config.txt_config_mgr.avatar_skill_config_mgr,
           *(_DWORD *)(v1 + 32)) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "checkOpenSkillDepot",
        588);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v14,
             (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
    else if ( common::tools::MiscUtils::isContains<std::map<unsigned int,SkillDepot>,unsigned int>(
                &this->skill_depot_map_,
                (const unsigned int *)(v1 + 32)) )
    {
      result = -1;
    }
    else
    {
      v8 = *(_DWORD *)(v1 + 32);
      v11 = (char *)(v1 + 32);
      v9 = (unsigned __int64)std::map<unsigned int,SkillDepot>::operator[](
                               &this->skill_depot_map_,
                               (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 32));
      v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v10 != 0;
      v12 = v10 != 0 && v10 <= 3;
      if ( v12 )
        v9 = __asan_report_store4(v9, v11, v12);
      *(_DWORD *)v9 = v8;
      result = 0;
    }
  }
  else
  {
    result = -1;
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 603: range 0000000014950B68-0000000014950BC9
int32_t __cdecl TalentComp::enableAllMyTalent(TalentComp *const this)
{
  TalentComp::enableAllMyTalent::<lambda(BaseTalent&)> v1; // si
  int32_t v2; // ebx
  std::function<ForeachPolicy(BaseTalent&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::enableAllMyTalent(void)::{lambda(BaseTalent &)#1},void,void>(
    &func,
    v1);
  v2 = TalentComp::foreachMyTalent(this, &func);
  std::function<ForeachPolicy ()(BaseTalent &)>::~function(&func);
  return v2;
};

// Line 604: range 0000000014950B32-0000000014950B67
ForeachPolicy __cdecl TalentComp::enableAllMyTalent(void)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::enableAllMyTalent::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  if ( !BaseTalent::getIsEnabled(base_talent) )
    BaseTalent::enable(base_talent);
  return 0;
};

// Line 616: range 0000000014950BFE-0000000014950C5F
int32_t __cdecl TalentComp::disableAllMyTalent(TalentComp *const this)
{
  TalentComp::disableAllMyTalent::<lambda(BaseTalent&)> v1; // si
  int32_t v2; // ebx
  std::function<ForeachPolicy(BaseTalent&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::disableAllMyTalent(void)::{lambda(BaseTalent &)#1},void,void>(
    &func,
    v1);
  v2 = TalentComp::foreachMyTalent(this, &func);
  std::function<ForeachPolicy ()(BaseTalent &)>::~function(&func);
  return v2;
};

// Line 617: range 0000000014950BCA-0000000014950BFC
ForeachPolicy __cdecl TalentComp::disableAllMyTalent(void)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::disableAllMyTalent::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  if ( BaseTalent::getIsEnabled(base_talent) )
    BaseTalent::disable(base_talent);
  return 0;
};

// Line 629: range 0000000014950C60-0000000014950DD4
int32_t __cdecl TalentComp::enableAllTeamTalent(TalentComp *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  BaseTalent *v5; // rax
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > *v9; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *talent_key; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *team_talent_ptr; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->team_talent_map_;
  __for_begin._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::begin(&this->team_talent_map_)._M_node;
  __for_end._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end(&this->team_talent_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    talent_key = std::get<0ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v9);
    team_talent_ptr = (std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v9);
    if ( std::operator==<BaseTalent>(0LL, team_talent_ptr) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "enableAllTeamTalent",
        634);
      v1 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v12,
             (const char (*)[34])"team_talent is null! avatar_guid:");
      v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, &talent_key->first);
      v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" talent_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &talent_key->second);
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    v5 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)team_talent_ptr);
    BaseTalent::enable(v5);
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 644: range 0000000014950DD6-0000000014950F4A
int32_t __cdecl TalentComp::disableAllTeamTalent(TalentComp *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  BaseTalent *v5; // rax
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > *v9; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *talent_key; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *team_talent_ptr; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->team_talent_map_;
  __for_begin._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::begin(&this->team_talent_map_)._M_node;
  __for_end._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end(&this->team_talent_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    talent_key = std::get<0ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v9);
    team_talent_ptr = (std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v9);
    if ( std::operator==<BaseTalent>(0LL, team_talent_ptr) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "disableAllTeamTalent",
        649);
      v1 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v12,
             (const char (*)[34])"team_talent is null! avatar_guid:");
      v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, &talent_key->first);
      v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" talent_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &talent_key->second);
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    v5 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)team_talent_ptr);
    BaseTalent::disable(v5);
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 659: range 0000000014950FBA-0000000014951422
int32_t __cdecl TalentComp::enableCurSkillDepot(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  AbilityComp *AbilityComp; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  SkillDepot *skill_depot; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 skill_depot_id:661 64 8 8 iter:662";
  *(_QWORD *)(v1 + 16) = TalentComp::enableCurSkillDepot;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  TalentComp::checkOpenSkillDepot(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 48) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 48));
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "enableCurSkillDepot",
      665);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"find skill_depot fail, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v5, (const char (*)[17])" skill_depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64))->second;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( SkillDepot::initSkillDepot(skill_depot, this->avatar_) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "enableCurSkillDepot",
        671);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v14,
             (const char (*)[37])"initSkillDepot fail. skill_depot_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityComp = Creature::getAbilityComp(this->avatar_);
      AbilityComp::addAllSkillDepotTargetAbility(AbilityComp);
      std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::enableCurSkillDepot(void)::{lambda(BaseTalent &)#1},void,void>(
        (std::function<ForeachPolicy(BaseTalent&)> *const)&v14,
        (TalentComp::enableCurSkillDepot::<lambda(BaseTalent&)>)this);
      TalentComp::foreachMyTalent(this, (const std::function<ForeachPolicy(BaseTalent&)> *)&v14);
      std::function<ForeachPolicy ()(BaseTalent &)>::~function((std::function<ForeachPolicy(BaseTalent&)> *const)&v14);
      TalentComp::checkActiveProudSkill(this);
      result = 0;
    }
  }
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 675: range 0000000014950F4C-0000000014950FB8
ForeachPolicy __cdecl TalentComp::enableCurSkillDepot(void)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::enableCurSkillDepot::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  if ( !BaseTalent::getIsEnabled(base_talent) )
  {
    BaseTalent::enable(base_talent);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TalentComp::tryEnableTeamTalent(__closure->__this, base_talent);
  }
  return 0;
};

// Line 690: range 000000001495148E-00000000149517A3
int32_t __cdecl TalentComp::disableCurSkillDepot(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v5; // rcx
  AbilityComp *AbilityComp; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  SkillDepot *skill_depot; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 skill_depot_id:691 64 8 8 iter:696";
  *(_QWORD *)(v1 + 16) = TalentComp::disableCurSkillDepot;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 48) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v1 + 48) )
  {
    *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                  &this->skill_depot_map_,
                                                                  (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 48));
    __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "disableCurSkillDepot",
        699);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v9,
             (const char (*)[28])"getCurDepotTalentInfo fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = -1;
    }
    else
    {
      std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::disableCurSkillDepot(void)::{lambda(BaseTalent &)#1},void,void>(
        (std::function<ForeachPolicy(BaseTalent&)> *const)&v9,
        (TalentComp::disableCurSkillDepot::<lambda(BaseTalent&)>)this);
      TalentComp::foreachMyTalent(this, (const std::function<ForeachPolicy(BaseTalent&)> *)&v9);
      std::function<ForeachPolicy ()(BaseTalent &)>::~function((std::function<ForeachPolicy(BaseTalent&)> *const)&v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityComp = Creature::getAbilityComp(this->avatar_);
      AbilityComp::removeAllSkillDepotTargetAbility(AbilityComp);
      skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64))->second;
      SkillDepot::clearSkillDepot(skill_depot);
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v1 )
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
  return result;
};

// Line 702: range 0000000014951424-000000001495148D
ForeachPolicy __cdecl TalentComp::disableCurSkillDepot(void)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::disableCurSkillDepot::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  if ( BaseTalent::getIsEnabled(base_talent) )
  {
    BaseTalent::disable(base_talent);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TalentComp::tryDisableTeamTalent(__closure->__this, base_talent);
  }
  return 0;
};

// Line 719: range 0000000014951FB4-00000000149526CB
void __cdecl TalentComp::onSceneTeamChange(TalentComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  BaseTalent *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  const std::shared_ptr<BaseTalent> *v19; // r8
  BaseTalent *v20; // rax
  TalentComp::onSceneTeamChange::<lambda(BaseTalent&)> v21; // [rsp-20h] [rbp-1B0h]
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+10h] [rbp-180h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+18h] [rbp-178h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+20h] [rbp-170h]
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+28h] [rbp-168h]
  const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > *v26; // [rsp+30h] [rbp-160h]
  std::tuple_element<0,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *talent_key_0; // [rsp+38h] [rbp-158h]
  std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr_0; // [rsp+40h] [rbp-150h]
  const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > *v29; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *talent_key; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+58h] [rbp-138h]
  TalentComp::onSceneTeamChange::<lambda(BaseTalent&)> __f; // [rsp+60h] [rbp-130h]
  std::function<ForeachPolicy(BaseTalent&)> func; // [rsp+80h] [rbp-110h] BYREF
  char v34[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 48 23 old_team_talent_map:720 112 48 23 add_team_talent_map:721";
  *(_QWORD *)(v1 + 16) = TalentComp::onSceneTeamChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::map((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 32));
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::map((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 112));
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::swap(
    (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 32),
    &this->team_talent_map_);
  __f.__old_team_talent_map = (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *)(v1 + 32);
  __f.__add_team_talent_map = (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *)(v1 + 112);
  __f.__this = this;
  v21.__this = this;
  v21.__add_team_talent_map = (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *)(v1 + 112);
  v21.__old_team_talent_map = (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *)(v1 + 32);
  std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::onSceneTeamChange(void)::{lambda(BaseTalent &)#1},void,void>(
    &func,
    v21);
  TalentComp::foreachTeamTalentFromOtherTeamAvatars(this, &func);
  std::function<ForeachPolicy ()(BaseTalent &)>::~function(&func);
  __for_range = (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *)(v1 + 32);
  __for_begin._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::begin((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 32))._M_node;
  __for_end._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 32))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v29 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    talent_key = std::get<0ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v29);
    base_talent_ptr = (std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v29);
    if ( std::operator==<BaseTalent>(0LL, base_talent_ptr) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "onSceneTeamChange",
        768);
      v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             (common::milog::MiLogStream *const)&func,
             (const char (*)[29])"talent is null. avatar_guid:");
      v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &talent_key->first);
      v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])" talent_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &talent_key->second);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/talent_comp.cpp",
        "onSceneTeamChange",
        771);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
             (common::milog::MiLogStream *const)&func,
             (const char (*)[6])" del:");
      v8 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
      v9 = operator<<(v7, v8);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])off_25512CE0);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func);
      v11 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
      BaseTalent::disable(v11);
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *)(v1 + 112);
  __for_begin._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::begin((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 112))._M_node;
  __for_end._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v26 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    talent_key_0 = std::get<0ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v26);
    base_talent_ptr_0 = (std::tuple_element<1,const std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,std::pair<unsigned long,unsigned int> const,std::shared_ptr<BaseTalent>>(v26);
    if ( std::operator==<BaseTalent>(0LL, base_talent_ptr_0) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "onSceneTeamChange",
        779);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&func,
              (const char (*)[29])"talent is null. avatar_guid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &talent_key_0->first);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" talent_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &talent_key_0->second);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/talent_comp.cpp",
        "onSceneTeamChange",
        782);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&func,
              (const char (*)[6])" new:");
      v16 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr_0);
      v17 = operator<<(v15, v16);
      v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])off_25512CE0);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v18, this->avatar_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func);
      std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::emplace<std::pair<unsigned long,unsigned int> const&,std::shared_ptr<BaseTalent> const&>(
        &this->team_talent_map_,
        talent_key_0,
        base_talent_ptr_0,
        (const std::pair<long unsigned int,unsigned int> *)&this->team_talent_map_,
        v19);
      v20 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr_0);
      BaseTalent::enable(v20);
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::~map((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 112));
  std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::~map((std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *const)(v1 + 32));
  if ( v34 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 725: range 00000000149517A4-0000000014951FB3
ForeachPolicy __cdecl TalentComp::onSceneTeamChange(void)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::onSceneTeamChange::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // r14
  __int64 this; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::pointer v11; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *p_this; // rdi
  __int64 v15; // rax
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *p_team_talent_map; // r14
  std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::pointer v17; // rax
  std::pair<long unsigned int,unsigned int> *v18; // rcx
  std::shared_ptr<BaseTalent> *v19; // r8
  unsigned __int64 v20; // rax
  void (__fastcall *v21)(unsigned __int64, BaseTalent *, _QWORD); // r8
  __int64 v22; // rax
  std::shared_ptr<BaseTalent> *v23; // r8
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdi
  __int64 v27; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >,bool> v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  ForeachPolicy result; // eax
  std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v34; // [rsp+20h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:739 64 16 14 talent_key:727 96 16 20 clone_talent_ptr:748";
  *(_QWORD *)(v2 + 16) = TalentComp::onSceneTeamChange(void)::{lambda(BaseTalent &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(std::pair<long unsigned int,unsigned int> *)(v2 + 64) = BaseTalent::getTalentKey(base_talent);
  v5 = *(_QWORD *)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)(this + 8) >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  if ( v5 != Avatar::getGuid(*(const Avatar *const *)(this + 8)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( common::tools::MiscUtils::isContains<std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>,std::pair<unsigned long,unsigned int>>(
           &__closure->__this->team_talent_map_,
           (const std::pair<long unsigned int,unsigned int> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        735);
      v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v34,
             (const char (*)[30])"duplicate talent from avatar:");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" talent_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 72));
      common::milog::MiLogStream::~MiLogStream(&v34);
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32) = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::find(__closure->__old_team_talent_map, (const std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::key_type *)(v2 + 64));
    __y._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end(__closure->__old_team_talent_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::_Self *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        742);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v34, (const char (*)[7])" same:");
      v11 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > > *const)(v2 + 32));
      v12 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11->second);
      v13 = operator<<(v10, v12);
      p_this = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])off_25512CE0);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      {
        p_this = (common::milog::MiLogStream *)&__closure->__this;
        __asan_report_load8();
      }
      v15 = (__int64)__closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000) )
      {
        p_this = (common::milog::MiLogStream *)(v15 + 8);
        v15 = __asan_report_load8();
      }
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(p_this, *(const Avatar **)(v15 + 8));
      common::milog::MiLogStream::~MiLogStream(&v34);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_team_talent_map = &__closure->__this->team_talent_map_;
      v17 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > > *const)(v2 + 32));
      std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::emplace<std::pair<unsigned long,unsigned int>&,std::shared_ptr<BaseTalent>&>(
        p_team_talent_map,
        (std::pair<long unsigned int,unsigned int> *)(v2 + 64),
        &v17->second,
        v18,
        v19);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::erase[abi:cxx11](
        __closure->__old_team_talent_map,
        *(std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32));
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)base_talent >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = (unsigned __int64)(base_talent->_vptr_BaseTalent + 2);
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    v21 = *(void (__fastcall **)(unsigned __int64, BaseTalent *, _QWORD))v20;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = (__int64)__closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8();
    v21(v2 + 96, base_talent, *(_QWORD *)(v22 + 8));
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        751);
      v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v34,
              (const char (*)[34])"clone_talent_ptr is null, talent:");
      v25 = operator<<(v24, base_talent);
      v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      {
        v26 = (common::milog::MiLogStream *)&__closure->__this;
        __asan_report_load8();
      }
      v27 = (__int64)__closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
      {
        v26 = (common::milog::MiLogStream *)(v27 + 8);
        v27 = __asan_report_load8();
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__add_team_talent_map >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v28 = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::emplace<std::pair<unsigned long,unsigned int>&,std::shared_ptr<BaseTalent>&>(
              __closure->__add_team_talent_map,
              (std::pair<long unsigned int,unsigned int> *)(v2 + 64),
              (std::shared_ptr<BaseTalent> *)(v2 + 96),
              (std::pair<long unsigned int,unsigned int> *)(v2 + 64),
              v23);
      if ( v28.second )
        goto LABEL_47;
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        757);
      v29 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v34,
              (const char (*)[44])"duplicate clone_talent_ptr is null, talent:");
      v30 = operator<<(v29, base_talent);
      v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      {
        v26 = (common::milog::MiLogStream *)&__closure->__this;
        __asan_report_load8();
      }
      v27 = (__int64)__closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
      {
        v26 = (common::milog::MiLogStream *)(v27 + 8);
        v27 = __asan_report_load8();
      }
    }
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v26, *(const Avatar **)(v27 + 8));
    common::milog::MiLogStream::~MiLogStream(&v34);
LABEL_47:
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 96));
  }
LABEL_48:
  result = FOREACH_CONTINUE;
  if ( v35 == (char *)v2 )
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

// Line 790: range 00000000149526CC-000000001495342B
__int64 __fastcall TalentComp::unlockTalent(TalentComp *const this, Player *player, __int32 talent_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // r15
  uint32_t v16; // r14d
  uint32_t SkillDepotId; // eax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v29; // rax
  __int64 v30; // rdx
  PlayerItemComp *v31; // rax
  PlayerItemComp *v32; // rax
  __int64 v33; // rdx
  common::milog::MiLogStream *v34; // rax
  __int64 result; // rax
  std::string v36; // [rsp+0h] [rbp-170h]
  char *v37; // [rsp+0h] [rbp-170h]
  Player *playera; // [rsp+10h] [rbp-160h]
  TalentComp *thisa; // [rsp+18h] [rbp-158h]
  unsigned int val; // [rsp+28h] [rbp-148h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-144h]
  const data::AvatarTalentExcelConfig *talent_config_ptr; // [rsp+30h] [rbp-140h]
  const SkillDepot *skill_depot; // [rsp+38h] [rbp-138h]
  std::string v44; // [rsp+40h] [rbp-130h] BYREF
  char v45[272]; // [rsp+60h] [rbp-110h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v36._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v36._M_string_length) = talent_id;
  v3 = (unsigned __int64)v45;
  v36._M_dataplus._M_p = v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 10 holder:791 48 4 13 talent_id:789 64 8 8 iter:820 96 8 10 reason:849 128 16 13 cost_ite"
                        "m:845 160 16 18 main_cost_item:848 192 16 18 vice_cost_item:858";
  *(_QWORD *)(v3 + 16) = TalentComp::unlockTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(v36._M_string_length);
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v44, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x645u, v36);
  std::string::~string(&v44);
  v7 = Player::getBasicComp(playera);
  if ( !PlayerBasicComp::isStateOpen(v7, 4u) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "unlockTalent",
      796);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           (common::milog::MiLogStream *const)&v44,
           (const char (*)[41])"OPEN_STATE_AVATAR_TALENT is locked. uid:");
    val = Player::getUid(playera);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
    v9 = 141;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Avatar::isFormal(thisa->avatar_) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "unlockTalent",
        802);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&v44,
              (const char (*)[30])"avatar is not formal, avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, thisa->avatar_);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      val = Player::getUid(playera);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
      v9 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 192));
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      talent_config_ptr = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
                            &v13->design_config.txt_config_mgr.avatar_talent_config_mgr,
                            *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
      if ( talent_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 192));
        p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->design_config.txt_config_mgr.avatar_skill_config_mgr;
        v16 = *(_DWORD *)(v3 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SkillDepotId = Avatar::getSkillDepotId(thisa->avatar_);
        v18 = !AvatarSkillExcelConfigMgr::isTalentExistInSkillDepot(p_avatar_skill_config_mgr, SkillDepotId, v16);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
        if ( v18 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "unlockTalent",
            816);
          v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)&v44,
                  (const char (*)[22])off_25513120);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])off_25513160);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Avatar::getSkillDepotId(thisa->avatar_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Avatar::getSkillDepotId(thisa->avatar_);
          *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                        &thisa->skill_depot_map_,
                                                                        &val);
          *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 96) = std::map<unsigned int,SkillDepot>::end(&thisa->skill_depot_map_);
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/talent/talent_comp.cpp",
              "unlockTalent",
              823);
            v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)&v44,
                    (const char (*)[28])"getCurDepotTalentInfo fails");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v22, thisa->avatar_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
            v9 = -1;
          }
          else
          {
            v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v3 + 64));
            skill_depot = &v23->second;
            if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>> const,unsigned int>(
                   &v23->second.unlocked_talent_map,
                   (const unsigned int *)(v3 + 48)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v44,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/talent/talent_comp.cpp",
                "unlockTalent",
                831);
              v24 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      (common::milog::MiLogStream *const)&v44,
                      (const char (*)[39])"talent is already unlocked, talent_id:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v3 + 48));
              if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v25, thisa->avatar_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
              v9 = 901;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&talent_config_ptr->prev_talent >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)talent_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&talent_config_ptr->prev_talent >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( talent_config_ptr->prev_talent
                && !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>> const,unsigned int>(
                      &skill_depot->unlocked_talent_map,
                      &talent_config_ptr->prev_talent) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/talent/talent_comp.cpp",
                  "unlockTalent",
                  840);
                v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        (common::milog::MiLogStream *const)&v44,
                        (const char (*)[45])"prev_talent_id not unlocked, prev_talent_id:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        &talent_config_ptr->prev_talent);
                if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v27, thisa->avatar_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
                v9 = 902;
              }
              else
              {
                *(_DWORD *)(v3 + 128) = 0;
                *(_DWORD *)(v3 + 132) = 0;
                *(_DWORD *)(v3 + 136) = 0;
                *(_DWORD *)(v3 + 140) = 0;
                *(_QWORD *)(v3 + 160) = 0LL;
                *(_QWORD *)(v3 + 168) = 0LL;
                if ( *(_BYTE *)(((unsigned __int64)&talent_config_ptr->main_cost_item_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&talent_config_ptr->main_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 160) = talent_config_ptr->main_cost_item_id;
                if ( *(_BYTE *)(((unsigned __int64)&talent_config_ptr->main_cost_item_count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)talent_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&talent_config_ptr->main_cost_item_count >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 164) = talent_config_ptr->main_cost_item_count;
                SubItemReason::SubItemReason((SubItemReason *const)(v3 + 96), ACTION_REASON_UNLOCK_TALENT);
                ItemComp = Player::getItemComp(playera);
                ret = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 160));
                if ( ret )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&talent_config_ptr->vice_cost_item_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&talent_config_ptr->vice_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( talent_config_ptr->vice_cost_item_id )
                  {
                    *(_QWORD *)(v3 + 192) = 0LL;
                    *(_QWORD *)(v3 + 200) = 0LL;
                    *(_DWORD *)(v3 + 192) = talent_config_ptr->vice_cost_item_id;
                    if ( *(_BYTE *)(((unsigned __int64)&talent_config_ptr->vice_cost_item_count >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)talent_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&talent_config_ptr->vice_cost_item_count >> 3)
                                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 196) = talent_config_ptr->vice_cost_item_count;
                    v31 = Player::getItemComp(playera);
                    ret = PlayerItemComp::checkSubItem(v31, (const ItemParam *)(v3 + 192));
                    if ( !ret )
                    {
                      v32 = Player::getItemComp(playera);
                      ret = PlayerItemComp::subItem(
                              v32,
                              (const ItemParam *)(v3 + 192),
                              (const SubItemReason *)(v3 + 96));
                      v33 = *(_QWORD *)(v3 + 200);
                      *(_QWORD *)(v3 + 128) = *(_QWORD *)(v3 + 192);
                      *(_QWORD *)(v3 + 136) = v33;
                    }
                  }
                }
                else
                {
                  v29 = Player::getItemComp(playera);
                  ret = PlayerItemComp::subItem(v29, (const ItemParam *)(v3 + 160), (const SubItemReason *)(v3 + 96));
                  v30 = *(_QWORD *)(v3 + 168);
                  *(_QWORD *)(v3 + 128) = *(_QWORD *)(v3 + 160);
                  *(_QWORD *)(v3 + 136) = v30;
                }
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v44,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/talent/talent_comp.cpp",
                    "unlockTalent",
                    869);
                  v34 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          (common::milog::MiLogStream *const)&v44,
                          (const char (*)[25])"subItem fail, talent_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
                  v9 = ret;
                }
                else
                {
                  v9 = TalentComp::internalAddTalent(thisa, playera, *(_DWORD *)(v3 + 48), *(ItemParam *)(v3 + 128));
                }
              }
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "unlockTalent",
          809);
        v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&v44,
                (const char (*)[46])"findAvatarTalentExcelConfig fails, talent_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
        v9 = -1;
      }
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v9;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 878: range 000000001495342C-0000000014953D49
int32_t __cdecl TalentComp::tryUnlockTalentForMirrorAvatar(TalentComp *const this, uint32_t count)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t *p_prev_talent; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  uint32_t counta; // [rsp+4h] [rbp-FCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *talent_vec; // [rsp+28h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::AvatarTalentExcelConfig *talent_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+70h] [rbp-90h] BYREF

  counta = count;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 18 skill_depot_id:889 48 4 13 talent_id:911 64 8 14 depot_iter:891";
  *(_QWORD *)(v2 + 16) = TalentComp::tryUnlockTalentForMirrorAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  if ( count )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    baseclass_0 = avatar->baseclass_0;
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
      baseclass_0 = (_QWORD *)__asan_report_load8();
    v8 = *baseclass_0 + 400LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Avatar *))v8)(avatar) == 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 32) = Avatar::getSkillDepotId(this->avatar_);
      *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                    &this->skill_depot_map_,
                                                                    (const std::map<unsigned int,SkillDepot>::key_type *)(v2 + 32));
      __for_end._M_current = (const unsigned int *)std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "tryUnlockTalentForMirrorAvatar",
          894);
        v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v29,
               (const char (*)[28])"getCurDepotTalentInfo fails");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
        avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                          &v10->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                          *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( avatar_skill_depot_config_ptr )
        {
          talent_vec = &avatar_skill_depot_config_ptr->talents;
          if ( std::vector<unsigned int>::empty(&avatar_skill_depot_config_ptr->talents) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/talent/talent_comp.cpp",
              "tryUnlockTalentForMirrorAvatar",
              908);
            v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v29,
                    (const char (*)[55])"talent_vec emtpy, can not unlock more, skill_depot_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v29);
            result = -1;
          }
          else
          {
            __for_range = talent_vec;
            __for_begin._M_current = std::vector<unsigned int>::begin(talent_vec)._M_current;
            __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 48) = *v13;
              if ( !counta )
                break;
              v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
              if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>>,unsigned int>(
                      &v14->second.unlocked_talent_map,
                      (const unsigned int *)(v2 + 48)) )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v28);
                v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
                talent_config_ptr = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
                                      &v15->design_config.txt_config_mgr.avatar_talent_config_mgr,
                                      *(_DWORD *)(v2 + 48));
                std::shared_ptr<Config>::~shared_ptr(&v28);
                if ( !talent_config_ptr )
                {
                  common::milog::MiLogStream::create(
                    &v29,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/talent/talent_comp.cpp",
                    "tryUnlockTalentForMirrorAvatar",
                    926);
                  v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                          &v29,
                          (const char (*)[46])"findAvatarTalentExcelConfig fails, talent_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v29);
                  result = -1;
                  goto LABEL_42;
                }
                if ( *(_BYTE *)(((unsigned __int64)&talent_config_ptr->prev_talent >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)talent_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&talent_config_ptr->prev_talent >> 3)
                                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( talent_config_ptr->prev_talent )
                {
                  p_prev_talent = &talent_config_ptr->prev_talent;
                  v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
                  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>>,unsigned int>(
                          &v18->second.unlocked_talent_map,
                          p_prev_talent) )
                  {
                    common::milog::MiLogStream::create(
                      &v29,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/talent/talent_comp.cpp",
                      "tryUnlockTalentForMirrorAvatar",
                      934);
                    v19 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            &v29,
                            (const char (*)[45])"prev_talent_id not unlocked, prev_talent_id:");
                    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v19,
                            &talent_config_ptr->prev_talent);
                    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
                    common::milog::MiLogStream::~MiLogStream(&v29);
                  }
                }
                TalentComp::forceUnlockTalent(this, *(_DWORD *)(v2 + 48));
                --counta;
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            result = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "tryUnlockTalentForMirrorAvatar",
            901);
          v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v29,
                  (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v29);
          result = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "tryUnlockTalentForMirrorAvatar",
        886);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v29,
        (const char (*)[50])"only mirror avatar can unlock talent without cost");
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/talent/talent_comp.cpp",
      "tryUnlockTalentForMirrorAvatar",
      881);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v29, (const char (*)[20])"count 0, do nothing");
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = -1;
  }
LABEL_42:
  if ( v30 == (char *)v2 )
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

// Line 945: range 0000000014953D4A-0000000014953DA2
int32_t __cdecl TalentComp::forceUnlockTalent(TalentComp *const this, uint32_t talent_id)
{
  uint32_t SkillDepotId; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SkillDepotId = Avatar::getSkillDepotId(this->avatar_);
  return TalentComp::forceUnlockTalent(this, SkillDepotId, talent_id);
};

// Line 950: range 0000000014953DA4-0000000014954485
__int64 __fastcall TalentComp::forceUnlockTalent(TalentComp *const this, uint32_t skill_depot_id, uint32_t talent_id)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r15
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 result; // rax
  uint32_t skill_depot_ida; // [rsp+8h] [rbp-108h]
  bool talent_ida; // [rsp+Ch] [rbp-104h]
  uint32_t talent_idb; // [rsp+Ch] [rbp-104h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+20h] [rbp-F0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF
  ItemParam v31; // 0:r8.16

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 18 skill_depot_id:949 48 4 13 talent_id:949 64 8 14 depot_iter:970 96 16 14 player_ptr:951";
  *(_QWORD *)(v3 + 16) = TalentComp::forceUnlockTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = skill_depot_id;
  *(_DWORD *)(v3 + 48) = talent_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v8 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v8)(v3 + 96, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "forceUnlockTalent",
      954);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v29,
           (const char (*)[24])"player is null, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v10 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    talent_ida = !AvatarSkillExcelConfigMgr::isTalentExistInSkillDepot(
                    &v11->design_config.txt_config_mgr.avatar_skill_config_mgr,
                    *(_DWORD *)(v3 + 32),
                    *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( talent_ida )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "forceUnlockTalent",
        960);
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v29, (const char (*)[22])off_25513120);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])off_25513160);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::getSkillDepotId(this->avatar_) == *(_DWORD *)(v3 + 32) )
      {
        talent_idb = *(_DWORD *)(v3 + 48);
        skill_depot_ida = *(_DWORD *)(v3 + 32);
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        *(_QWORD *)&v31.item_id = 0LL;
        *(_QWORD *)&v31.level = 0LL;
        v10 = TalentComp::internalAddTalent(this, v15, skill_depot_ida, talent_idb, v31);
      }
      else
      {
        *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      (const std::map<unsigned int,SkillDepot>::key_type *)(v3 + 32));
        __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "forceUnlockTalent",
            973);
          v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v29,
                  (const char (*)[28])"getCurDepotTalentInfo fails");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, this->avatar_);
          common::milog::MiLogStream::~MiLogStream(&v29);
          v10 = -1;
        }
        else
        {
          v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v3 + 64));
          skill_depot = &v17->second;
          if ( common::tools::MiscUtils::isContains<unsigned int>(
                 &v17->second.bin_talent_vec,
                 (const unsigned int *)(v3 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/talent/talent_comp.cpp",
              "forceUnlockTalent",
              980);
            v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v29,
                    (const char (*)[36])"talent already unlocked. talent_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v3 + 48));
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" avatar:");
            if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
            common::milog::MiLogStream::~MiLogStream(&v29);
            v10 = 0;
          }
          else
          {
            std::vector<unsigned int>::push_back(
              &skill_depot->bin_talent_vec,
              (const std::vector<unsigned int>::value_type *)(v3 + 48));
            v10 = 0;
          }
        }
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = v10;
  if ( v30 == (char *)v3 )
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

// Line 990: range 0000000014954486-0000000014954AD2
int32_t __cdecl TalentComp::forceUnlockAllTalent(TalentComp *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r12d
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  Player *v13; // r9
  int32_t result; // eax
  uint32_t talent_id; // [rsp+14h] [rbp-11Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  SkillDepot *skill_depot; // [rsp+38h] [rbp-F8h]
  const std::set<unsigned int> *talent_set_ptr; // [rsp+40h] [rbp-F0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+80h] [rbp-B0h] BYREF
  ItemParam v24; // 0:rcx.8,8:r8.8

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 12 depot_id:998 48 4 14 talent_id:1015 64 8 15 depot_iter:1000 96 16 14 player_ptr:991";
  *(_QWORD *)(v1 + 16) = TalentComp::forceUnlockAllTalent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v6 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v6)(v1 + 96, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "forceUnlockAllTalent",
      994);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v22,
           (const char (*)[24])"player is null, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 32) = Avatar::getSkillDepotId(this->avatar_);
    *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                  &this->skill_depot_map_,
                                                                  (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 32));
    __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "forceUnlockAllTalent",
        1003);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v22,
             (const char (*)[28])"getCurDepotTalentInfo fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = -1;
    }
    else
    {
      skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64))->second;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      talent_set_ptr = AvatarSkillExcelConfigMgr::findSkillDepotTalentSet(
                         &v10->design_config.txt_config_mgr.avatar_skill_config_mgr,
                         *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( talent_set_ptr )
      {
        __for_range = talent_set_ptr;
        __for_begin._M_node = std::set<unsigned int>::begin(talent_set_ptr)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v12;
          if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>>,unsigned int>(
                  &skill_depot->unlocked_talent_map,
                  (const unsigned int *)(v1 + 48)) )
          {
            talent_id = *(_DWORD *)(v1 + 48);
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            *(_QWORD *)&v24.item_id = 0LL;
            *(_QWORD *)&v24.level = 0LL;
            TalentComp::internalAddTalent(this, v13, talent_id, v24);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        v8 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "forceUnlockAllTalent",
          1011);
        v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v22,
                (const char (*)[40])"findSkillDepotTalentSet fail, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v8 = -1;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  result = v8;
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1028: range 0000000014954AD4-0000000014954EB6
int32_t __cdecl TalentComp::forceLockAllTalent(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  BaseTalent *v6; // rax
  Avatar *avatar; // r14
  int32_t result; // eax
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *talent_map; // [rsp+28h] [rbp-E8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *__in; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<proto::PlayerLogoutNotify> __r; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 iter:1029 64 16 15 notify_ptr:1044";
  *(_QWORD *)(v1 + 16) = TalentComp::forceLockAllTalent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "forceLockAllTalent",
      1032);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v18,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    talent_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 32))->second.unlocked_talent_map;
    __for_range = talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(__in);
      talent_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(__in);
      v6 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)talent_ptr);
      BaseTalent::disable(v6);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    std::map<unsigned int,std::shared_ptr<BaseTalent>>::clear(talent_map);
    common::tools::perf::make_shared<proto::PlayerLogoutNotify>();
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerLogoutNotify>(&__r);
    Avatar::sendMessage(avatar, (common::minet::ConstMessagePtr *)&__r);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    v5 = 0;
    std::shared_ptr<proto::PlayerLogoutNotify>::~shared_ptr((std::shared_ptr<proto::PlayerLogoutNotify> *const)(v1 + 64));
  }
  result = v5;
  if ( v19 == (char *)v1 )
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
  return result;
};

// Line 1051: range 0000000014954EB8-000000001495528A
int32_t __cdecl TalentComp::forceSetProudSkillLevelByGm(
        TalentComp *const this,
        Player *player,
        SkillType skill_type,
        uint32_t level)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r13
  SkillComp *v11; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r13
  SkillComp *SkillComp; // rdi
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+24h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:1052";
  *(_QWORD *)(v4 + 16) = TalentComp::forceSetProudSkillLevelByGm;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v4 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v4 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "forceSetProudSkillLevelByGm",
      1055);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v20,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  else if ( skill_type )
  {
    if ( skill_type < SKILL_NONE || (unsigned int)(skill_type - 1) > 2 )
    {
      result = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      v13 = level > ConstValueExcelConfigMgr::getActiveSkillMaxLevel(&v12->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( v13 )
      {
        result = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SkillComp = Avatar::getSkillComp(this->avatar_);
        result = SkillComp::forceSetSkillLevel(SkillComp, player, level, skill_type);
      }
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    v10 = level > ConstValueExcelConfigMgr::getActiveSkillMaxLevel(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( v10 )
    {
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = Avatar::getSkillComp(this->avatar_);
      result = SkillComp::forceSetAllSkillLevel(v11, player, level);
    }
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1082: range 000000001495528C-0000000014956616
__int64 __fastcall TalentComp::upgradeProudSkill(TalentComp *const this, Player *player, uint32_t proud_skill_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  uint32_t PromoteLevel; // ecx
  common::milog::MiLogStream *v34; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  bool v40; // [rsp+8h] [rbp-1A8h]
  uint32_t level; // [rsp+8h] [rbp-1A8h]
  uint32_t v42; // [rsp+8h] [rbp-1A8h]
  uint32_t v43; // [rsp+8h] [rbp-1A8h]
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-181h] BYREF
  unsigned int val; // [rsp+30h] [rbp-180h] BYREF
  int32_t ret; // [rsp+34h] [rbp-17Ch]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-178h] BYREF
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+40h] [rbp-170h]
  SkillDepot *skill_depot; // [rsp+48h] [rbp-168h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+50h] [rbp-160h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-158h]
  std::shared_ptr<AvatarSkillOrProudSkillLevelupEvent> __r; // [rsp+60h] [rbp-150h] BYREF
  std::shared_ptr<Config> v54; // [rsp+70h] [rbp-140h] BYREF
  std::vector<unsigned int> proud_skill_vec; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v56; // [rsp+A0h] [rbp-110h] BYREF
  char v57[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 13 depot_id:1097 48 4 19 proud_skill_id:1081 64 8 9 iter:1098 96 8 11 reason:1175 128 24 "
                        "19 item_param_vec:1158";
  *(_QWORD *)(v3 + 16) = TalentComp::upgradeProudSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = proud_skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Avatar::isFormal(this->avatar_) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "upgradeProudSkill",
      1085);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v56,
           (const char (*)[30])"avatar is not formal, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this->avatar_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_80;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v54);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
  proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
                             &v10->design_config.txt_config_mgr.avatar_talent_config_mgr,
                             *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v54);
  if ( !proud_skill_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "upgradeProudSkill",
      1093);
    v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v56,
            (const char (*)[49])"findProudSkillExcelConfig fails, proud_skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_80;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 32) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v3 + 32));
  *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 96) = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "upgradeProudSkill",
      1101);
    v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v56,
            (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = 910;
    goto LABEL_80;
  }
  skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v3 + 64))->second;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v54);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)proud_skill_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_group_id >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v40 = !AvatarSkillExcelConfigMgr::isProudSkillGroupExistInSkillDepot(
           p_avatar_skill_config_mgr,
           *(_DWORD *)(v3 + 32),
           proud_skill_config_ptr->proud_skill_group_id);
  std::shared_ptr<Config>::~shared_ptr(&v54);
  if ( v40 )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "upgradeProudSkill",
      1110);
    v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v56, (const char (*)[33])off_255138A0);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v14,
            &proud_skill_config_ptr->proud_skill_group_id);
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])off_25513160);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
    goto LABEL_80;
  }
  if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( proud_skill_config_ptr->proud_skill_type == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level = proud_skill_config_ptr->level;
    if ( level != SkillDepot::getCoreProudSkillLevel(skill_depot) + 1 )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "upgradeProudSkill",
        1120);
      v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v56,
              (const char (*)[32])"current core proud skill level:");
      val = SkillDepot::getCoreProudSkillLevel(skill_depot);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" target level:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &proud_skill_config_ptr->level);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v9 = 905;
      goto LABEL_80;
    }
    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v42 = proud_skill_config_ptr->level;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v54);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
    LOBYTE(v42) = v42 > ConstValueExcelConfigMgr::getCoreProudSkillMaxLevel(&v21->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v54);
    if ( (_BYTE)v42 )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "upgradeProudSkill",
        1126);
      v22 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v56,
              (const char (*)[32])"current core proud skill level:");
      val = SkillDepot::getCoreProudSkillLevel(skill_depot);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])off_25513980);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v24, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v9 = 907;
      goto LABEL_80;
    }
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( proud_skill_config_ptr->proud_skill_type == 2 )
  {
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>>,unsigned int>(
           &skill_depot->proud_skill_map,
           (const unsigned int *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "upgradeProudSkill",
        1135);
      v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v56,
              (const char (*)[41])"proud skill already got, proud_skill_id:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v26, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v9 = 905;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v43 = proud_skill_config_ptr->level;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v54);
      v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
      LOBYTE(v43) = v43 > ConstValueExcelConfigMgr::getInherentProudSkillMaxLevel(&v27->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v54);
      if ( !(_BYTE)v43 )
      {
LABEL_53:
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PromoteLevel = Avatar::getPromoteLevel(this->avatar_);
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->break_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->break_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( PromoteLevel >= proud_skill_config_ptr->break_level )
        {
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->coin_cost >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->coin_cost >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( proud_skill_config_ptr->coin_cost )
          {
            LODWORD(v54._M_ptr) = 202;
            HIDWORD(v54._M_ptr) = proud_skill_config_ptr->coin_cost;
            v54._M_refcount._M_pi = 0LL;
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v3 + 128),
              (std::vector<ItemParam>::value_type *)&v54);
          }
          __for_range = &proud_skill_config_ptr->cost_items;
          __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&proud_skill_config_ptr->cost_items)._M_current;
          *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 96) = std::vector<data::IdCountConfig>::end(&proud_skill_config_ptr->cost_items);
          while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                    &__for_begin,
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 96)) )
          {
            id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            LODWORD(v54._M_ptr) = id_count_config->id;
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            HIDWORD(v54._M_ptr) = id_count_config->count;
            v54._M_refcount._M_pi = 0LL;
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v3 + 128),
              (std::vector<ItemParam>::value_type *)&v54);
            __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
          }
          ItemComp = Player::getItemComp(player);
          ret = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v3 + 128));
          if ( ret )
          {
            v9 = ret;
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)(v3 + 96), ACTION_REASON_UPGRADE_PROUD_SKILL);
            v36 = Player::getItemComp(player);
            ret = PlayerItemComp::subItemBatch(
                    v36,
                    (const std::vector<ItemParam> *)(v3 + 128),
                    (const SubItemReason *)(v3 + 96));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/talent/talent_comp.cpp",
                "upgradeProudSkill",
                1179);
              v37 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v56,
                      (const char (*)[27])"subItemBatch fail, avatar:");
              if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v37, this->avatar_);
              common::milog::MiLogStream::~MiLogStream(&v56);
              v9 = ret;
            }
            else
            {
              val = *(_DWORD *)(v3 + 48);
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(
                &proud_skill_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
                &__a);
              ret = TalentComp::internalAddProudSkills(this, player, skill_depot, &proud_skill_vec);
              std::vector<unsigned int>::~vector(&proud_skill_vec);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( !ret )
              {
                EventComp = Player::getEventComp(player);
                common::tools::perf::make_shared<AvatarSkillOrProudSkillLevelupEvent>();
                std::shared_ptr<BaseEvent>::shared_ptr<AvatarSkillOrProudSkillLevelupEvent,void>(
                  (std::shared_ptr<BaseEvent> *const)&v54,
                  &__r);
                PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v54);
                std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v54);
                std::shared_ptr<AvatarSkillOrProudSkillLevelupEvent>::~shared_ptr(&__r);
              }
              v9 = 0;
            }
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "upgradeProudSkill",
            1153);
          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v56,
                  (const char (*)[16])"proud_skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v56);
          v9 = 110;
        }
        goto LABEL_80;
      }
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "upgradeProudSkill",
        1140);
      v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v56,
              (const char (*)[20])"target proud skill:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 48));
      v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])off_25510D20);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v30, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v9 = 907;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "upgradeProudSkill",
      1146);
    v31 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v56,
            (const char (*)[26])"invalid proud_skill_type:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v31,
            &proud_skill_config_ptr->proud_skill_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v32, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v9 = -1;
  }
LABEL_80:
  result = v9;
  if ( v57 == (char *)v3 )
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

// Line 1195: range 0000000014956618-0000000014956893
int32_t __cdecl TalentComp::forceUpgradeProudSkillVec(
        TalentComp *const this,
        Player *player,
        const std::vector<unsigned int> *proud_skill_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-A8h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 13 depot_id:1196 64 8 9 iter:1197";
  *(_QWORD *)(v3 + 16) = TalentComp::forceUpgradeProudSkillVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "forceUpgradeProudSkillVec",
      1200);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v11,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 910;
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v3 + 64))->second;
    result = TalentComp::internalAddProudSkills(this, player, skill_depot, proud_skill_vec);
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
  return result;
};

// Line 1210: range 0000000014956894-00000000149571F7
void __cdecl TalentComp::checkActiveProudSkill(TalentComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t PromoteLevel; // ecx
  char v12; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // ecx
  char v16; // al
  Player *v17; // rsi
  uint32_t proud_skill_group_id; // [rsp+18h] [rbp-158h]
  uint32_t proud_skill_group_id_0; // [rsp+1Ch] [rbp-154h]
  std::vector<data::ProudSkillOpenConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::vector<data::ProudSkillOpenConfig>::const_iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  SkillDepot *skill_depot; // [rsp+30h] [rbp-140h]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+38h] [rbp-138h]
  const std::vector<data::ProudSkillOpenConfig> *__for_range; // [rsp+40h] [rbp-130h]
  const data::ProudSkillOpenConfig *proud_skill_open_config; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-110h] BYREF
  char v28[240]; // [rsp+80h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 13 depot_id:1218 48 4 19 proud_skill_id:1251 64 8 9 iter:1219 96 16 15 player_ptr:1211 12"
                        "8 24 20 proud_skill_vec:1235";
  *(_QWORD *)(v1 + 16) = TalentComp::checkActiveProudSkill;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v6 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v6)(v1 + 96, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "checkActiveProudSkill",
      1214);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v27,
           (const char (*)[24])"getPlayer fail. avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 32) = Avatar::getSkillDepotId(this->avatar_);
    *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                  &this->skill_depot_map_,
                                                                  (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 32));
    __for_end._M_current = (const data::ProudSkillOpenConfig *)std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "checkActiveProudSkill",
        1222);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v27,
             (const char (*)[28])"getCurDepotTalentInfo fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64))->second;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
      avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                        &v9->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                        *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( avatar_skill_depot_config_ptr )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proud_skill_group_id = avatar_skill_depot_config_ptr->core_proud_skill_group_id;
        if ( !proud_skill_group_id || SkillDepot::getCoreProudSkillLevel(skill_depot) )
          goto LABEL_32;
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PromoteLevel = Avatar::getPromoteLevel(this->avatar_);
        if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_avatar_promote_level >> 3)
                      + 0x7FFF8000) != 0
          && (char)((((_BYTE)avatar_skill_depot_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_avatar_promote_level >> 3)
                                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( PromoteLevel < avatar_skill_depot_config_ptr->core_proud_avatar_promote_level )
LABEL_32:
          v12 = 0;
        else
          v12 = 1;
        if ( v12 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
          *(_DWORD *)(v1 + 48) = AvatarTalentExcelConfigMgr::findProudSkillId(
                                   &v13->design_config.txt_config_mgr.avatar_talent_config_mgr,
                                   proud_skill_group_id,
                                   1u);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v1 + 128),
            (const std::vector<unsigned int>::value_type *)(v1 + 48));
        }
        __for_range = &avatar_skill_depot_config_ptr->inherent_proud_skill_opens;
        __for_begin._M_current = std::vector<data::ProudSkillOpenConfig>::begin(&avatar_skill_depot_config_ptr->inherent_proud_skill_opens)._M_current;
        __for_end._M_current = std::vector<data::ProudSkillOpenConfig>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          proud_skill_open_config = __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proud_skill_group_id_0 = proud_skill_open_config->proud_skill_group_id;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
          *(_DWORD *)(v1 + 48) = AvatarTalentExcelConfigMgr::findProudSkillId(
                                   &v14->design_config.txt_config_mgr.avatar_talent_config_mgr,
                                   proud_skill_group_id_0,
                                   1u);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>>,unsigned int>(
                 &skill_depot->proud_skill_map,
                 (const unsigned int *)(v1 + 48)) )
          {
            goto LABEL_46;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = Avatar::getPromoteLevel(this->avatar_);
          if ( *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->need_avatar_promote_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)proud_skill_open_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->need_avatar_promote_level >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v15 >= proud_skill_open_config->need_avatar_promote_level )
            v16 = 1;
          else
LABEL_46:
            v16 = 0;
          if ( v16 )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v1 + 128),
              (const std::vector<unsigned int>::value_type *)(v1 + 48));
          __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>::operator++(&__for_begin);
        }
        if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 128)) )
        {
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          TalentComp::internalAddProudSkills(this, v17, skill_depot, (const std::vector<unsigned int> *)(v1 + 128));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "checkActiveProudSkill",
          1231);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v27,
                (const char (*)[48])"findAvatarSkillDepotExcelConfig fail, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1267: range 0000000014957246-00000000149572E6
// local variable allocation has failed, the output may be wrong!
std::map<data::FightPropType,float> *__cdecl TalentComp::getTalentCompProp(
        std::map<data::FightPropType,float> *retstr,
        TalentComp *const this)
{
  TalentComp *const v2; // rsi
  std::function<ForeachPolicy(BaseTalent&)> func; // [rsp+10h] [rbp-40h] BYREF

  std::map<data::FightPropType,float>::map(retstr);
  std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::getTalentCompProp(void)::{lambda(BaseTalent &)#1},void,void>(
    &func,
    *(TalentComp::getTalentCompProp::<lambda(BaseTalent&)> *)&retstr);
  TalentComp::foreachTalent(v2, &func);
  std::function<ForeachPolicy ()(BaseTalent &)>::~function(&func);
  return retstr;
};

// Line 1269: range 00000000149571F8-0000000014957245
ForeachPolicy __cdecl TalentComp::getTalentCompProp(void)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::getTalentCompProp::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BaseTalent::getProp(base_talent, __closure->__prop_map);
  return 0;
};

// Line 1279: range 00000000149572E8-00000000149575E7
void __cdecl TalentComp::getProtoTalents(
        TalentComp *const this,
        google::protobuf::RepeatedField<unsigned int> *proto_talents)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v6; // rax
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+14h] [rbp-CCh] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-B8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v12; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-90h] BYREF
  char v16[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1280";
  *(_QWORD *)(v2 + 16) = TalentComp::getProtoTalents;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getProtoTalents",
      1283);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v6->second;
    __for_range = &v6->second.unlocked_talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&v6->second.unlocked_talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v12);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v12);
      google::protobuf::RepeatedField<unsigned int>::Add(proto_talents, talent_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1296: range 00000000149575E8-00000000149578E7
void __cdecl TalentComp::getProtoProudSkills(
        TalentComp *const this,
        google::protobuf::RepeatedField<unsigned int> *proto_proud_skills)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v6; // rax
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+14h] [rbp-CCh] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-B8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v12; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-90h] BYREF
  char v16[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1297";
  *(_QWORD *)(v2 + 16) = TalentComp::getProtoProudSkills;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getProtoProudSkills",
      1300);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v6->second;
    __for_range = &v6->second.proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&v6->second.proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v12);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v12);
      google::protobuf::RepeatedField<unsigned int>::Add(proto_proud_skills, proud_skill_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1313: range 00000000149578E8-0000000014957C64
std::vector<unsigned int> *__cdecl TalentComp::getProudSkills(
        std::vector<unsigned int> *retstr,
        TalentComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v6; // rax
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-D8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v12; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *_; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 24 core_proud_skill_id:1328 64 8 9 iter:1315";
  *(_QWORD *)(v2 + 16) = TalentComp::getProudSkills;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v2 + 48));
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getProudSkills",
      1318);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
    skill_depot = &v6->second;
    __for_range = &v6->second.proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&v6->second.proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v12);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v12);
      std::vector<unsigned int>::push_back(retstr, proud_skill_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v2 + 48) = TalentComp::getCurCoreProudSkillId(this);
    if ( *(_DWORD *)(v2 + 48) )
      std::vector<unsigned int>::push_back(retstr, (const std::vector<unsigned int>::value_type *)(v2 + 48));
  }
  if ( v16 == (char *)v2 )
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

// Line 1339: range 0000000014957C66-0000000014957EAF
void __cdecl TalentComp::getProtoProudSkillExtraLevels(
        TalentComp *const this,
        google::protobuf::Map<unsigned int,unsigned int> *extra_level_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-A4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1340";
  *(_QWORD *)(v2 + 16) = TalentComp::getProtoProudSkillExtraLevels;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getProtoProudSkillExtraLevels",
      1343);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v9,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32))->second;
    SkillDepot::getProtoProudSkillExtraLevels(skill_depot, extra_level_map);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1353: range 0000000014957EB0-0000000014958235
int32_t __cdecl TalentComp::foreachTalent(
        TalentComp *const this,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1354";
  *(_QWORD *)(v2 + 16) = TalentComp::foreachTalent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v7 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v7)(v2 + 32, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "foreachTalent",
      1357);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v13,
           (const char (*)[23])"getPlayer fail, avatar");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = -1;
  }
  else
  {
    ret = TalentComp::foreachMyTalent(this, func);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "foreachTalent",
        1363);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v13,
              (const char (*)[30])"foreachMyTalent fail, avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v9 = ret;
    }
    else
    {
      TalentComp::foreachInTalentMap<std::pair<unsigned long,unsigned int>>(this, &this->team_talent_map_, func);
      TalentComp::foreachInTalentMap<unsigned int>(this, &this->team_resonance_talent_map_, func);
      v9 = 0;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v9;
  if ( v14 == (char *)v2 )
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

// Line 1373: range 0000000014958236-00000000149587D0
int32_t __cdecl TalentComp::foreachMyTalent(
        TalentComp *const this,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v8; // rax
  TalentComp *TalentComp; // rax
  BaseTalent *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  SkillDepot *skill_depot; // [rsp+18h] [rbp-C8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 19 skill_depot_id:1374 48 4 19 proud_skill_id:1396 64 8 9 iter:1381 96 16 15 talent_ptr:1399";
  *(_QWORD *)(v2 + 16) = TalentComp::foreachMyTalent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v2 + 32) )
  {
    *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                  &this->skill_depot_map_,
                                                                  (const std::map<unsigned int,SkillDepot>::key_type *)(v2 + 32));
    __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "foreachMyTalent",
        1384);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v16,
             (const char (*)[28])"getCurDepotTalentInfo fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = -1;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
      skill_depot = &v8->second;
      TalentComp::foreachInTalentMap<unsigned int>(this, &v8->second.unlocked_talent_map, func);
      TalentComp::foreachInTalentMap<unsigned int>(this, &skill_depot->proud_skill_map, func);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      TalentComp = Avatar::getTalentComp(this->avatar_);
      *(_DWORD *)(v2 + 48) = TalentComp::getCurCoreProudSkillId(TalentComp);
      if ( *(_DWORD *)(v2 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Avatar::getTalentComp(this->avatar_);
        TalentComp::getCurCoreProudSkill((TalentComp *const)(v2 + 96));
        if ( std::operator!=<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v2 + 96)) )
        {
          v10 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          std::function<ForeachPolicy ()(BaseTalent &)>::operator()(func, v10);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "foreachMyTalent",
            1406);
          v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v16,
                  (const char (*)[36])"talent_ptr is null. proud_skill_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v13, this->avatar_);
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 96));
      }
      TalentComp::foreachInTalentMap<unsigned int>(this, &skill_depot->skill_talent_map, func);
      TalentComp::foreachInTalentMap<std::string>(this, &this->dynamic_talent_map_, func);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/talent/talent_comp.cpp",
      "foreachMyTalent",
      1377);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v16,
           (const char (*)[29])"skill_depot_id is 0. avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0;
  }
  if ( v17 == (char *)v2 )
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

// Line 1420: range 00000000149589E6-0000000014958D7B
int32_t __cdecl TalentComp::foreachTeamTalentFromOtherTeamAvatars(
        TalentComp *const this,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r12d
  Player *v10; // rax
  uint64_t Guid; // rax
  Player *v12; // rax
  int32_t result; // eax
  PlayerAvatarComp *AvatarComp; // [rsp+8h] [rbp-B8h]
  PlayerAvatarComp *v15; // [rsp+8h] [rbp-B8h]
  Avatar *this_avatar; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1421";
  *(_QWORD *)(v2 + 16) = TalentComp::foreachTeamTalentFromOtherTeamAvatars;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v7 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v7)(v2 + 32, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "foreachTeamTalentFromOtherTeamAvatars",
      1424);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v17,
           (const char (*)[23])"getPlayer fail, avatar");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AvatarComp = Player::getAvatarComp(v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Guid = Avatar::getGuid(this->avatar_);
    if ( !PlayerAvatarComp::isMyAvatarInSceneTeam(AvatarComp, Guid) )
    {
      v9 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this_avatar = this->avatar_;
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v15 = Player::getAvatarComp(v12);
      std::function<ForeachPolicy ()(Avatar &)>::function<TalentComp::foreachTeamTalentFromOtherTeamAvatars(std::function const&<ForeachPolicy ()(BaseTalent &)>)::{lambda(Avatar &)#1},void,void>(
        (std::function<ForeachPolicy(Avatar&)> *const)&v17,
        (TalentComp::foreachTeamTalentFromOtherTeamAvatars::<lambda(Avatar&)>)__PAIR128__(
                                                                                (unsigned __int64)this_avatar,
                                                                                (unsigned __int64)func));
      v9 = PlayerAvatarComp::foreachMyAvatarInSceneTeam(v15, (std::function<ForeachPolicy(Avatar&)> *)&v17);
      std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v17);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v9;
  if ( v18 == (char *)v2 )
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

// Line 1434: range 00000000149588AC-00000000149589E4
ForeachPolicy __cdecl TalentComp::foreachTeamTalentFromOtherTeamAvatars(std::function<ForeachPolicy ()(BaseTalent &)> const&)::{lambda(Avatar &)#1}::operator()(
        const TalentComp::foreachTeamTalentFromOtherTeamAvatars::<lambda(Avatar&)> *const __closure,
        Avatar *other_avatar)
{
  uint64_t Guid; // rbx
  TalentComp *TalentComp; // r14
  const std::function<ForeachPolicy(BaseTalent&)> *v4; // r12
  std::function<ForeachPolicy(BaseTalent&)> func; // [rsp+10h] [rbp-40h] BYREF

  Guid = Avatar::getGuid(other_avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this_avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Guid != Avatar::getGuid(__closure->__this_avatar) )
  {
    TalentComp = Avatar::getTalentComp(other_avatar);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = __closure->__func;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this_avatar >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::foreachTeamTalentFromOtherTeamAvatars(std::function<ForeachPolicy ()(BaseTalent &)> const&)::{lambda(Avatar &)#1}::operator() const(Avatar &)::{lambda(BaseTalent &)#1},void,void>(
      &func,
      (TalentComp::foreachTeamTalentFromOtherTeamAvatars::<lambda(Avatar&)>::operator()::<lambda(BaseTalent&)>)__PAIR128__(__closure->__this_avatar, (unsigned __int64)v4));
    TalentComp::foreachMyTalent(TalentComp, &func);
    std::function<ForeachPolicy ()(BaseTalent &)>::~function(&func);
  }
  return 0;
};

// Line 1439: range 00000000149587D2-00000000149588AB
ForeachPolicy __cdecl TalentComp::foreachTeamTalentFromOtherTeamAvatars(std::function<ForeachPolicy ()(BaseTalent &)> const&)::{lambda(Avatar &)#1}::operator() const(Avatar &)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::foreachTeamTalentFromOtherTeamAvatars::<lambda(Avatar&)>::operator()::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *talent)
{
  unsigned __int64 v2; // rax
  unsigned __int8 (__fastcall *v3)(BaseTalent *, Avatar *); // rcx

  if ( *(_BYTE *)(((unsigned __int64)talent >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(talent->_vptr_BaseTalent + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(unsigned __int8 (__fastcall **)(BaseTalent *, Avatar *))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this_avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v3(talent, __closure->__this_avatar) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::function<ForeachPolicy ()(BaseTalent &)>::operator()(__closure->__func, talent);
  }
  return 0;
};

// Line 1454: range 0000000014958D7C-0000000014958F2B
uint32_t __cdecl TalentComp::getCurCoreProudSkillId(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t result; // eax
  uint32_t CoreProudSkillLevel; // edx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  SkillDepot *skill_depot; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 depot_id:1455 64 8 9 iter:1457";
  *(_QWORD *)(v1 + 16) = TalentComp::getCurCoreProudSkillId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 48) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 48));
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64))->second;
    CoreProudSkillLevel = SkillDepot::getCoreProudSkillLevel(skill_depot);
    result = TalentComp::getCoreProudSkillId(this, *(_DWORD *)(v1 + 48), CoreProudSkillLevel);
  }
  if ( v8 == (char *)v1 )
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
  return result;
};

// Line 1469: range 0000000014958F2C-00000000149590C4
uint32_t __cdecl TalentComp::getCurCoreProudSkillLevel(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  SkillDepot *skill_depot; // [rsp+18h] [rbp-88h]
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 depot_id:1470 64 8 9 iter:1472";
  *(_QWORD *)(v1 + 16) = TalentComp::getCurCoreProudSkillLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 48) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 48));
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64))->second;
    result = SkillDepot::getCoreProudSkillLevel(skill_depot);
  }
  if ( v7 == (char *)v1 )
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
  return result;
};

// Line 1484: range 00000000149590C6-000000001495936D
__int64 __fastcall TalentComp::getCoreProudSkillId(
        TalentComp *const this,
        uint32_t depot_id,
        uint32_t core_proud_skill_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t ProudSkillId; // r13d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 result; // rax
  uint32_t group_id; // [rsp+14h] [rbp-9Ch]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 depot_id:1483";
  *(_QWORD *)(v3 + 16) = TalentComp::getCoreProudSkillId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = depot_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    &v6->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                    *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( avatar_skill_depot_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    group_id = avatar_skill_depot_config_ptr->core_proud_skill_group_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    ProudSkillId = AvatarTalentExcelConfigMgr::findProudSkillId(
                     &v9->design_config.txt_config_mgr.avatar_talent_config_mgr,
                     group_id,
                     core_proud_skill_level);
    std::shared_ptr<Config>::~shared_ptr(&v14);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getCoreProudSkillId",
      1489);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v15,
           (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    ProudSkillId = 0;
  }
  result = ProudSkillId;
  if ( v16 == (char *)v3 )
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

// Line 1499: range 000000001495936E-00000000149595D6
BaseTalentPtr __cdecl TalentComp::getCurCoreProudSkill(TalentComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  BaseTalentPtr result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v7; // rax
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-A4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1500";
  *(_QWORD *)(v2 + 16) = TalentComp::getCurCoreProudSkill;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(*(const Avatar *const *)(v1 + 8));
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                (std::map<unsigned int,SkillDepot> *const)(v1 + 16),
                                                                &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end((std::map<unsigned int,SkillDepot> *const)(v1 + 16))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getCurCoreProudSkill",
      1503);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v11,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, *(const Avatar **)(v1 + 8));
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v7->second;
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, &v7->second.core_proud_skill_ptr);
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
  result._M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1513: range 00000000149595D8-000000001495973C
_BOOL8 __fastcall TalentComp::isProudSkillInGroupId(
        TalentComp *const this,
        uint32_t proud_skill_id,
        uint32_t proud_skill_group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  _BOOL8 result; // rax
  const std::set<unsigned int> *proud_skill_set_ptr; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-70h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 proud_skill_id:1512";
  *(_QWORD *)(v3 + 16) = TalentComp::isProudSkillInGroupId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proud_skill_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  proud_skill_set_ptr = AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId(
                          &v6->design_config.txt_config_mgr.avatar_talent_config_mgr,
                          proud_skill_group_id);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  result = proud_skill_set_ptr
        && common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             proud_skill_set_ptr,
             (const unsigned int *)(v3 + 32));
  if ( v11 == (char *)v3 )
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

// Line 1520: range 000000001495973E-0000000014959E1B
const data::BaseTalentConfig *__cdecl TalentComp::findProudSkillConfigByGroupId(
        TalentComp *const this,
        uint32_t proud_skill_group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  const data::BaseTalentConfig *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v7; // rax
  uint32_t CurCoreProudSkillId; // ecx
  unsigned __int64 v10; // rax
  __int64 (__fastcall **v11)(unsigned __int64); // rdx
  char v12; // al
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  char v14; // al
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-104h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  SkillDepot *skill_depot; // [rsp+30h] [rbp-F0h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+38h] [rbp-E8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v21; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *skill_id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr_0; // [rsp+58h] [rbp-C8h]
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+60h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v25; // [rsp+68h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+70h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+78h] [rbp-A8h]
  std::shared_ptr<Config> v28; // [rsp+80h] [rbp-A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-90h] BYREF
  char v30[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1521";
  *(_QWORD *)(v2 + 16) = TalentComp::findProudSkillConfigByGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "findProudSkillConfigByGroupId",
      1524);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v29,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v7->second;
    if ( std::operator!=<BaseTalent>(&v7->second.core_proud_skill_ptr, 0LL)
      && (CurCoreProudSkillId = TalentComp::getCurCoreProudSkillId(this),
          TalentComp::isProudSkillInGroupId(this, CurCoreProudSkillId, proud_skill_group_id)) )
    {
      v10 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_depot->core_proud_skill_ptr);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(__int64 (__fastcall ***)(unsigned __int64))v10;
      if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
        v10 = __asan_report_load8();
    }
    else
    {
      __for_range = &skill_depot->proud_skill_map;
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->proud_skill_map)._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
        proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v25);
        base_talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v25);
        if ( !std::operator!=<BaseTalent>(base_talent_ptr, 0LL) )
          goto LABEL_27;
        if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( TalentComp::isProudSkillInGroupId(this, *proud_skill_id, proud_skill_group_id) )
          v12 = 1;
        else
LABEL_27:
          v12 = 0;
        if ( v12 )
        {
          v10 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8();
          v11 = *(__int64 (__fastcall ***)(unsigned __int64))v10;
          if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
            v10 = __asan_report_load8();
          goto LABEL_51;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
      }
      __for_range_0 = &skill_depot->skill_talent_map;
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->skill_talent_map)._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(&__for_begin, &__for_end) )
        {
          result = 0LL;
          goto LABEL_54;
        }
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
        skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v21);
        base_talent_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v21);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.avatar_skill_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                             p_avatar_skill_config_mgr,
                             *skill_id);
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( !std::operator!=<BaseTalent>(base_talent_ptr_0, 0LL) || !skill_config_ptr )
          goto LABEL_45;
        if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( proud_skill_group_id == skill_config_ptr->proud_skill_group_id )
          v14 = 1;
        else
LABEL_45:
          v14 = 0;
        if ( v14 )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
      }
      v10 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr_0);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(__int64 (__fastcall ***)(unsigned __int64))v10;
      if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
        v10 = __asan_report_load8();
    }
LABEL_51:
    result = (const data::BaseTalentConfig *)(*v11)(v10);
  }
LABEL_54:
  if ( v30 == (char *)v2 )
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

// Line 1559: range 0000000014959E1C-000000001495A8AE
const TalentComp *__fastcall TalentComp::findTalent(
        const TalentComp *const this,
        __int64 talent_type,
        int talent_index,
        int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int>::size_type v11; // r14
  std::vector<unsigned int>::size_type v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::const_reference v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::pointer v19; // rax
  std::vector<data::ProudSkillOpenConfig>::size_type v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 v23; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t proud_skill_group_id; // [rsp+2Ch] [rbp-124h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const SkillDepot *skill_depot; // [rsp+38h] [rbp-118h]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+40h] [rbp-110h]
  const std::vector<data::ProudSkillOpenConfig> *proud_skill_vec; // [rsp+48h] [rbp-108h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+50h] [rbp-100h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v34; // [rsp+58h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+60h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_ptr; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v37; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 13 skill_id:1583 48 4 17 talent_index:1558 64 8 9 iter:1560 96 8 9 iter:1599";
  *(_QWORD *)(v4 + 16) = TalentComp::findTalent;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = a4;
  if ( *(_BYTE *)(((unsigned __int64)(talent_type + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 32) = Avatar::getSkillDepotId(*(const Avatar *const *)(talent_type + 8));
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v4 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                      (const std::map<unsigned int,SkillDepot> *const)(talent_type + 16),
                                                                      (const std::map<unsigned int,SkillDepot>::key_type *)(v4 + 32));
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end((const std::map<unsigned int,SkillDepot> *const)(talent_type + 16))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "findTalent",
      1563);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v38,
           (const char (*)[37])"getCurDepotTalentInfo fails, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)(talent_type + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_45:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, *(const Avatar **)(talent_type + 8));
    common::milog::MiLogStream::~MiLogStream(&v38);
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
    goto LABEL_54;
  }
  skill_depot = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v4 + 64))->second;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)skill_depot >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)skill_depot >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    skill_depot->depot_id);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( !avatar_skill_depot_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "findTalent",
      1572);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v38,
           (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &skill_depot->depot_id);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)(talent_type + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_45;
  }
  if ( talent_index == 3 )
  {
    *(_DWORD *)(v4 + 32) = 0;
    if ( !*(_DWORD *)(v4 + 48)
      || (v11 = *(unsigned int *)(v4 + 48), v11 > std::vector<unsigned int>::size(&avatar_skill_depot_config_ptr->skills)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = avatar_skill_depot_config_ptr->energy_skill;
    }
    else
    {
      v13 = (unsigned int)--*(_DWORD *)(v4 + 48);
      if ( v13 >= std::vector<unsigned int>::size(&avatar_skill_depot_config_ptr->skills) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "findTalent",
          1593);
        v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v38,
                (const char (*)[39])"talent_index is too big, talent_index:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 48));
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)(talent_type + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_45;
      }
      v16 = std::vector<unsigned int>::operator[](&avatar_skill_depot_config_ptr->skills, *(unsigned int *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = *v16;
    }
    *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::shared_ptr<BaseTalent>>::find(
                                                                                         &skill_depot->skill_talent_map,
                                                                                         (const std::map<unsigned int,std::shared_ptr<BaseTalent>>::key_type *)(v4 + 32));
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(&skill_depot->skill_talent_map)._M_node;
    if ( !std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)(v4 + 96),
            &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v4 + 96));
      std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, &v19->second);
      goto LABEL_54;
    }
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "findTalent",
      1602);
    v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v38,
            (const char (*)[27])"skill not found, skill_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)(talent_type + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_45;
  }
  if ( talent_index <= 3 )
  {
    if ( talent_index == 1 )
    {
      std::shared_ptr<BaseTalent>::shared_ptr(
        (std::shared_ptr<BaseTalent> *const)this,
        &skill_depot->core_proud_skill_ptr);
      goto LABEL_54;
    }
    if ( talent_index == 2 )
    {
      --*(_DWORD *)(v4 + 48);
      proud_skill_vec = &avatar_skill_depot_config_ptr->inherent_proud_skill_opens;
      v20 = *(unsigned int *)(v4 + 48);
      if ( v20 >= std::vector<data::ProudSkillOpenConfig>::size(&avatar_skill_depot_config_ptr->inherent_proud_skill_opens) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "findTalent",
          1618);
        v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v38,
                (const char (*)[39])"talent_index is too big, talent_index:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v4 + 48));
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)(talent_type + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_45;
      }
      v23 = (__int64)std::vector<data::ProudSkillOpenConfig>::operator[](proud_skill_vec, *(unsigned int *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        v23 = __asan_report_load4();
      }
      proud_skill_group_id = *(_DWORD *)(v23 + 8);
      __for_range = &skill_depot->proud_skill_map;
      *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->proud_skill_map);
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)(v4 + 96),
                &__for_end) )
      {
        v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v4 + 96));
        proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v34);
        proud_skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v34);
        v24 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)proud_skill_ptr);
        if ( proud_skill_group_id == BaseTalent::getGroupId(v24) )
        {
          std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, proud_skill_ptr);
          goto LABEL_54;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v4 + 96));
      }
    }
  }
  std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
LABEL_54:
  if ( v39 == (char *)v4 )
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
  return this;
};

// Line 1643: range 000000001495A8B0-000000001495A957
uint32_t __cdecl TalentComp::getTotalLevelupCount(const TalentComp *const this)
{
  uint32_t total_levelup_count; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,SkillDepot>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,SkillDepot>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,SkillDepot> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,SkillDepot> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,SkillDepot> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,SkillDepot> >::type *skill_depot; // [rsp+48h] [rbp-8h]

  total_levelup_count = 0;
  __for_range = &this->skill_depot_map_;
  __for_begin._M_node = std::map<unsigned int,SkillDepot>::begin(&this->skill_depot_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,SkillDepot>(v6);
    skill_depot = (std::tuple_element<1,const std::pair<unsigned int const,SkillDepot> >::type *)std::get<1ul,unsigned int const,SkillDepot>(v6);
    total_levelup_count += SkillDepot::getTotalLevelupCount(skill_depot);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator++(&__for_begin);
  }
  return total_levelup_count;
};

// Line 1654: range 000000001495A958-000000001495AB80
void __cdecl TalentComp::getCurSkillDepotAddTargetAbilities(
        const TalentComp *const this,
        TargetAbilityVec *target_ability_vec)
{
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rbx
  uint32_t SkillDepotId; // eax
  common::milog::MiLogStream *v4; // rbx
  int *v5; // r8
  int __args_0; // [rsp+10h] [rbp-70h] BYREF
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const data::AvatarSkillDepotExcelConfig *skill_depot_config_ptr; // [rsp+28h] [rbp-58h]
  const std::vector<std::string> *__for_range; // [rsp+30h] [rbp-50h]
  const std::string *ability_name; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SkillDepotId = Avatar::getSkillDepotId(this->avatar_);
  skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                             p_avatar_skill_config_mgr,
                             SkillDepotId);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( skill_depot_config_ptr )
  {
    __for_range = &skill_depot_config_ptr->extra_abilities;
    __for_begin._M_current = std::vector<std::string>::begin(&skill_depot_config_ptr->extra_abilities)._M_current;
    __for_end._M_current = std::vector<std::string>::end(&skill_depot_config_ptr->extra_abilities)._M_current;
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
    {
      ability_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
      if ( (unsigned __int8)std::string::empty(ability_name) != 1 )
      {
        val = 0;
        __args_0 = getStringHash(ability_name);
        std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<int,int>(
          target_ability_vec,
          &__args_0,
          (int *)&val,
          &__args_0,
          v5);
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getCurSkillDepotAddTargetAbilities",
      1658);
    v4 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v14,
           (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Avatar::getSkillDepotId(this->avatar_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
};

// Line 1672: range 000000001495ABFE-000000001495AC7C
void __cdecl TalentComp::getAllTargetAbilitiesFromTalentComp(
        TalentComp *const this,
        TargetAbilityVec *target_ability_vec,
        TargetAbilitySpecialMap *target_ability_special_map)
{
  std::function<ForeachPolicy(BaseTalent&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(BaseTalent &)>::function<TalentComp::getAllTargetAbilitiesFromTalentComp(std::vector<std::pair<unsigned int,unsigned int>> &,std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>> &)::{lambda(BaseTalent &)#1},void,void>(
    &func,
    (TalentComp::getAllTargetAbilitiesFromTalentComp::<lambda(BaseTalent&)>)__PAIR128__(
                                                                              (unsigned __int64)target_ability_special_map,
                                                                              (unsigned __int64)target_ability_vec));
  TalentComp::foreachTalent(this, &func);
  std::function<ForeachPolicy ()(BaseTalent &)>::~function(&func);
};

// Line 1673: range 000000001495AB82-000000001495ABFC
ForeachPolicy __cdecl TalentComp::getAllTargetAbilitiesFromTalentComp(std::vector<std::pair<unsigned int,unsigned int>> &,std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>> &)::{lambda(BaseTalent &)#1}::operator()(
        const TalentComp::getAllTargetAbilitiesFromTalentComp::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  TargetAbilitySpecialMap *target_ability_special_map; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_ability_special_map >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  target_ability_special_map = __closure->__target_ability_special_map;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BaseTalent::getTargetAbilitiesFromTalent(base_talent, __closure->__target_ability_vec, target_ability_special_map);
  return 0;
};

// Line 1682: range 000000001495AC7E-000000001495AE4D
// local variable allocation has failed, the output may be wrong!
BaseTalentPtr __cdecl TalentComp::findSkillTalent(const TalentComp *const this, uint32_t skill_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  BaseTalentPtr result; // rax
  int skill_ida; // [rsp+Ch] [rbp-A4h]
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+2Ch] [rbp-84h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+30h] [rbp-80h] BYREF
  const SkillDepot *skill_depot; // [rsp+38h] [rbp-78h]
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  skill_ida = v2;
  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:1683";
  *(_QWORD *)(v3 + 16) = TalentComp::findSkillTalent;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&skill_id + 8LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(*(const Avatar *const *)(*(_QWORD *)&skill_id + 8LL));
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v3 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                      (const std::map<unsigned int,SkillDepot> *const)(*(_QWORD *)&skill_id + 16LL),
                                                                      &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end((const std::map<unsigned int,SkillDepot> *const)(*(_QWORD *)&skill_id + 16LL))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 32),
         &__y) )
  {
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  }
  else
  {
    skill_depot = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v3 + 32))->second;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    SkillDepot::findSkillTalent((const SkillDepot *const)this, (__int64)skill_depot, skill_ida);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1694: range 000000001495AE4E-000000001495B44B
int32_t __cdecl TalentComp::setSkillTalent(TalentComp *const this, uint32_t skill_id, uint32_t skill_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  BaseTalent *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  BaseTalent *v15; // rdx
  common::milog::MiLogStream *v16; // rcx
  BaseTalent *v17; // rax
  BaseTalent *v18; // rdx
  int32_t result; // eax
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t old_extra_level; // [rsp+1Ch] [rbp-E4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 9 iter:1695 64 16 19 old_talent_ptr:1704 96 16 15 talent_ptr:1719";
  *(_QWORD *)(v3 + 16) = TalentComp::setSkillTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v3 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v3 + 32),
          &__y) )
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v3 + 32))->second;
    old_extra_level = 0;
    SkillDepot::delSkillTalent((SkillDepot *const)(v3 + 64), (__int64)skill_depot, skill_id);
    if ( std::operator!=<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v3 + 64)) )
    {
      v8 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      old_extra_level = BaseTalent::getExtraLevel(v8);
      v9 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( BaseTalent::getIsEnabled(v9) )
      {
        v10 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( BaseTalent::disable(v10) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "setSkillTalent",
            1712);
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v25,
                  (const char (*)[31])"talent disable failed, talent:");
          v12 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v13 = operator<<(v11, v12);
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v14, this->avatar_);
          common::milog::MiLogStream::~MiLogStream(&v25);
          v7 = -1;
LABEL_29:
          std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 64));
          goto LABEL_30;
        }
        v15 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        TalentComp::tryDisableTeamTalent(this, v15);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillDepot::addSkillTalent(
      (SkillDepot *const)(v3 + 96),
      (Avatar *)skill_depot,
      (unsigned int *)this->avatar_,
      skill_id,
      skill_level,
      old_extra_level);
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "setSkillTalent",
        1722);
      v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v25,
              (const char (*)[29])"addSkillTalent fail, avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isInited(this->avatar_) )
      {
        v17 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        BaseTalent::enable(v17);
        v18 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        TalentComp::tryEnableTeamTalent(this, v18);
      }
      v7 = 0;
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 96));
    goto LABEL_29;
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/talent/talent_comp.cpp",
    "setSkillTalent",
    1698);
  v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v25,
         (const char (*)[28])"getCurDepotTalentInfo fails");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v25);
  v7 = -1;
LABEL_30:
  result = v7;
  if ( v26 == (char *)v3 )
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

// Line 1737: range 000000001495B44C-000000001495B7FB
__int64 __fastcall TalentComp::removeSkillTalent(TalentComp *const this, uint32_t skill_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  BaseTalent *v9; // rax
  BaseTalent *v10; // rax
  __int64 result; // rax
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-E4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  SkillDepot *skill_depot; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 skill_id:1736 64 8 9 iter:1738 96 16 19 old_talent_ptr:1746";
  *(_QWORD *)(v2 + 16) = TalentComp::removeSkillTalent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "removeSkillTalent",
      1741);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = -1;
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64))->second;
    SkillDepot::delSkillTalent((SkillDepot *const)(v2 + 96), (__int64)skill_depot, *(_DWORD *)(v2 + 48));
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "removeSkillTalent",
        1749);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v15,
             (const char (*)[34])"skill talent not found. skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( BaseTalent::getIsEnabled(v8) )
      {
        v9 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        BaseTalent::disable(v9);
        v10 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        TalentComp::tryDisableTeamTalent(this, v10);
      }
      v6 = 0;
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 96));
  }
  result = v6;
  if ( v16 == (char *)v2 )
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

// Line 1762: range 000000001495B7FC-000000001495BA41
int32_t __cdecl TalentComp::getUnlockedTalentVec(
        const TalentComp *const this,
        std::vector<unsigned int> *unlocked_talent_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  SkillDepot *p_second; // rdx
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+14h] [rbp-9Ch] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 depot_iter:1763";
  *(_QWORD *)(v2 + 16) = TalentComp::getUnlockedTalentVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      &__x);
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "getUnlockedTalentVec",
      1766);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v10,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  else
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32))->second;
    SkillDepot::getUnlockedTalentIdVec(p_second, unlocked_talent_id_vec);
    result = 0;
  }
  if ( v11 == (char *)v2 )
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

// Line 1775: range 000000001495BA42-000000001495BB82
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TalentComp::internalAddTalent(
        TalentComp *const this,
        Player *player,
        uint32_t talent_id,
        ItemParam cost_item)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t SkillDepotId; // eax
  int32_t result; // eax
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 cost_item:1774";
  *(_QWORD *)(v4 + 16) = TalentComp::internalAddTalent;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  *(ItemParam *)(v4 + 32) = cost_item;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SkillDepotId = Avatar::getSkillDepotId(this->avatar_);
  result = TalentComp::internalAddTalent(this, player, SkillDepotId, talent_id, *(ItemParam *)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1780: range 000000001495BB84-000000001495C749
__int64 __fastcall TalentComp::internalAddTalent(
        TalentComp *const this,
        Player *player,
        __int32 skill_depot_id,
        __int32 talent_id,
        ItemParam cost_item)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r14d
  PlayerBasicComp *BasicComp; // rax
  int v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  uint64_t Guid; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  uint32_t Level; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v24; // rax
  google::protobuf::uint32 v25; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  Avatar *v29; // rdx
  _QWORD *v30; // rax
  unsigned __int64 v31; // rax
  uint64_t v32; // rax
  uint32_t v33; // eax
  BaseTalent *v34; // rax
  BaseTalent *v35; // rax
  __int64 result; // rax
  std::string v37; // [rsp+0h] [rbp-1D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+30h] [rbp-1A0h] BYREF
  SkillDepot *skill_depot; // [rsp+38h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-170h] BYREF
  char v43[336]; // [rsp+80h] [rbp-150h] BYREF

  *((_DWORD *)&v37._anon_0._M_allocated_capacity + 3) = skill_depot_id;
  *((_DWORD *)&v37._anon_0._M_allocated_capacity + 2) = talent_id;
  v37._M_dataplus._M_p = *(std::string::pointer *)&cost_item.item_id;
  v37._M_string_length = *(_QWORD *)&cost_item.level;
  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 1 11 holder:1789 48 4 19 skill_depot_id:1779 64 4 14 talent_id:1779 80 8 9 iter:1781 112 16"
                        " 15 talent_ptr:1790 144 16 26 active_talent_log_ptr:1806 176 16 14 cost_item:1779 208 48 11 notify:1818";
  *(_QWORD *)(v5 + 16) = TalentComp::internalAddTalent;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = *((_DWORD *)&v37._anon_0._M_allocated_capacity + 3);
  *(_DWORD *)(v5 + 64) = *((_DWORD *)&v37._anon_0._M_allocated_capacity + 2);
  *(_OWORD *)(v5 + 176) = *(_OWORD *)&v37._M_dataplus._M_p;
  *(std::map<unsigned int,SkillDepot>::iterator *)(v5 + 80) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v5 + 48));
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v5 + 80),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "internalAddTalent",
      1784);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v42,
           (const char (*)[41])"current skill depot not found, depot_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v10 = -1;
  }
  else
  {
    skill_depot = &std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v5 + 80))->second;
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v42, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0x649u, v37);
    std::string::~string(&v42);
    v12 = *(_DWORD *)(v5 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillDepot::emplaceTalent((SkillDepot *const)(v5 + 112), (Avatar *)skill_depot, (unsigned int *)this->avatar_, v12);
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v5 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "internalAddTalent",
        1793);
      v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v42,
              (const char (*)[32])"emplaceTalent fails, talent_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v14, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isFormal(this->avatar_) )
      {
        proto::AvatarUnlockTalentNotify::AvatarUnlockTalentNotify((proto::AvatarUnlockTalentNotify *const)(v5 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Guid = Avatar::getGuid(this->avatar_);
        proto::AvatarUnlockTalentNotify::set_avatar_guid((proto::AvatarUnlockTalentNotify *const)(v5 + 208), Guid);
        proto::AvatarUnlockTalentNotify::set_talent_id(
          (proto::AvatarUnlockTalentNotify *const)(v5 + 208),
          *(_DWORD *)(v5 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->avatar_);
        proto::AvatarUnlockTalentNotify::set_entity_id((proto::AvatarUnlockTalentNotify *const)(v5 + 208), EntityId);
        proto::AvatarUnlockTalentNotify::set_skill_depot_id(
          (proto::AvatarUnlockTalentNotify *const)(v5 + 208),
          *(_DWORD *)(v5 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Avatar::notifySceneTeam(this->avatar_, (const google::protobuf::Message *)(v5 + 208));
        common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarActiveTalent>();
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarId = Avatar::getAvatarId(this->avatar_);
        proto_log::PlayerLogBodyAvatarActiveTalent::set_avatar_id(v17, AvatarId);
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Level = Creature::getLevel(this->avatar_);
        proto_log::PlayerLogBodyAvatarActiveTalent::set_avatar_level(v19, Level);
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        avatar = this->avatar_;
        baseclass_0 = avatar->baseclass_0;
        if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
          baseclass_0 = (_QWORD *)__asan_report_load8();
        v24 = *baseclass_0 + 280LL;
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8();
        v25 = (*(__int64 (__fastcall **)(Avatar *))v24)(avatar);
        proto_log::PlayerLogBodyAvatarActiveTalent::set_element_type(v21, v25);
        v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        proto_log::PlayerLogBodyAvatarActiveTalent::set_talent_id(v26, *(_DWORD *)(v5 + 64));
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) != 0
          && (char)(((v5 - 80) & 7) + 3) >= *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyAvatarActiveTalent::set_cost_item_id(v27, *(_DWORD *)(v5 + 176));
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarActiveTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        if ( *(_BYTE *)(((v5 + 180) >> 3) + 0x7FFF8000) != 0
          && (char)(((v5 - 80 + 4) & 7) + 3) >= *(_BYTE *)(((v5 + 180) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyAvatarActiveTalent::set_cost_item_count(v28, *(_DWORD *)(v5 + 180));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarActiveTalent,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyAvatarActiveTalent> *)(v5 + 144));
        Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyAvatarActiveTalent>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarActiveTalent> *const)(v5 + 144));
        proto::AvatarUnlockTalentNotify::~AvatarUnlockTalentNotify((proto::AvatarUnlockTalentNotify *const)(v5 + 208));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v29 = this->avatar_;
        v30 = v29->baseclass_0;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          v30 = (_QWORD *)__asan_report_load8();
        v31 = *v30 + 400LL;
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v31 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(Avatar *))v31)(v29) == 3 )
        {
          proto::AvatarUnlockTalentNotify::AvatarUnlockTalentNotify((proto::AvatarUnlockTalentNotify *const)(v5 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v32 = Avatar::getGuid(this->avatar_);
          proto::AvatarUnlockTalentNotify::set_avatar_guid((proto::AvatarUnlockTalentNotify *const)(v5 + 208), v32);
          proto::AvatarUnlockTalentNotify::set_talent_id(
            (proto::AvatarUnlockTalentNotify *const)(v5 + 208),
            *(_DWORD *)(v5 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v33 = Entity::getEntityId((const Entity *const)this->avatar_);
          proto::AvatarUnlockTalentNotify::set_entity_id((proto::AvatarUnlockTalentNotify *const)(v5 + 208), v33);
          proto::AvatarUnlockTalentNotify::set_skill_depot_id(
            (proto::AvatarUnlockTalentNotify *const)(v5 + 208),
            *(_DWORD *)(v5 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Avatar::notifySceneTeam(this->avatar_, (const google::protobuf::Message *)(v5 + 208));
          proto::AvatarUnlockTalentNotify::~AvatarUnlockTalentNotify((proto::AvatarUnlockTalentNotify *const)(v5 + 208));
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isInited(this->avatar_) )
      {
        v34 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        BaseTalent::enable(v34);
        v35 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        TalentComp::tryEnableTeamTalent(this, v35);
      }
      v10 = 0;
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v5 + 112));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  }
  result = v10;
  if ( v43 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1838: range 000000001495C74A-000000001495D68C
int32_t __cdecl TalentComp::internalAddProudSkills(
        TalentComp *const this,
        Player *player,
        SkillDepot *skill_depot,
        const std::vector<unsigned int> *proud_skill_vec)
{
  int32_t v4; // r14d
  unsigned __int64 p_M_node_count; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  BaseTalent *v13; // rax
  BaseTalent *v14; // rdx
  common::milog::MiLogStream *v15; // rcx
  int v16; // ecx
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  BaseTalent *v21; // rax
  BaseTalent *v22; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r15
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r15
  uint32_t Level; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r15
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v30; // rax
  google::protobuf::uint32 v31; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rcx
  uint64_t Guid; // rax
  uint32_t EntityId; // eax
  google::protobuf::RepeatedField<unsigned int> *v37; // rdx
  common::milog::MiLogStream *v38; // rdx
  int32_t result; // eax
  std::string v40; // [rsp+0h] [rbp-1B0h]
  std::size_t *v41; // [rsp+8h] [rbp-1A8h]
  const std::vector<unsigned int> *proud_skill_veca; // [rsp+10h] [rbp-1A0h]
  Avatar *skill_depota; // [rsp+18h] [rbp-198h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-170h]
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+48h] [rbp-168h]
  SkillDepot v48; // [rsp+50h] [rbp-160h] BYREF

  *(&v40._anon_0._M_allocated_capacity + 1) = (std::string::size_type)skill_depot;
  v40._anon_0._M_allocated_capacity = (std::string::size_type)proud_skill_vec;
  p_M_node_count = (unsigned __int64)&v48.unlocked_talent_map._M_t._M_impl._M_node_count;
  v40._M_string_length = (std::string::size_type)&v48.unlocked_talent_map._M_t._M_impl._M_node_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      p_M_node_count = v6;
  }
  *(_QWORD *)p_M_node_count = 1102416563LL;
  *(_QWORD *)(p_M_node_count + 8) = "6 32 1 11 holder:1839 48 4 19 proud_skill_id:1841 64 16 15 talent_ptr:1850 96 16 32 "
                                    "upgrade_proud_skill_log_ptr:1893 128 16 19 old_talent_ptr:1853 160 64 11 notify:1906";
  *(_QWORD *)(p_M_node_count + 16) = TalentComp::internalAddProudSkills;
  v7 = (_DWORD *)(p_M_node_count >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862727] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](
    (std::string *)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
    BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(p_M_node_count + 32), 0x648u, v40);
  std::string::~string(&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header);
  __for_range = proud_skill_veca;
  __for_begin._M_current = std::vector<unsigned int>::begin(proud_skill_veca)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(proud_skill_veca)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(p_M_node_count + 48) = *v9;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_node_count + 96));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
    proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
                               &v10->design_config.txt_config_mgr.avatar_talent_config_mgr,
                               *(_DWORD *)(p_M_node_count + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_node_count + 96));
    if ( !proud_skill_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "internalAddProudSkills",
        1846);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
              (const char (*)[43])"findProudSkillExcelConfig, proud_skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v11,
        (const unsigned int *)(p_M_node_count + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header);
      v4 = -1;
      goto LABEL_80;
    }
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)(p_M_node_count + 64), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( proud_skill_config_ptr->proud_skill_type == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SkillDepot::delCoreProudSkill((SkillDepot *const)(p_M_node_count + 128), skill_depota);
      if ( std::operator!=<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(p_M_node_count + 128)) )
      {
        v12 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 128));
        if ( BaseTalent::getIsEnabled(v12) )
        {
          v13 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 128));
          BaseTalent::disable(v13);
          v14 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 128));
          TalentComp::tryDisableTeamTalent(this, v14);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( !Avatar::isInited(this->avatar_) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_comp.cpp",
            "internalAddProudSkills",
            1863);
          v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  (common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
                  (const char (*)[53])"core proud skill is not null in avatar init. avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, this->avatar_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SkillDepot::setCoreProudSkill(&v48, skill_depota, (uint32_t)this->avatar_);
      std::shared_ptr<BaseTalent>::operator=(
        (std::shared_ptr<BaseTalent> *const)(p_M_node_count + 64),
        (std::shared_ptr<BaseTalent> *)&v48);
      std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)&v48);
      std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(p_M_node_count + 128));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( proud_skill_config_ptr->proud_skill_type != 2 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "internalAddProudSkills",
          1874);
        v17 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                (common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
                (const char (*)[53])"proud_skill is not core or inherent, proud_skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v17,
          (const unsigned int *)(p_M_node_count + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header);
        v4 = -1;
        v18 = 0;
        goto LABEL_65;
      }
      v16 = *(_DWORD *)(p_M_node_count + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SkillDepot::emplaceInherentProudSkill(
        (SkillDepot *const)(p_M_node_count + 128),
        skill_depota,
        (unsigned int *)this->avatar_,
        v16);
      std::shared_ptr<BaseTalent>::operator=(
        (std::shared_ptr<BaseTalent> *const)(p_M_node_count + 64),
        (std::shared_ptr<BaseTalent> *)(p_M_node_count + 128));
      std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(p_M_node_count + 128));
    }
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(p_M_node_count + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "internalAddProudSkills",
        1880);
      v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
              (const char (*)[43])"emplace proud skill fails, proud_skill_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v19,
              (const unsigned int *)(p_M_node_count + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header);
      v4 = -1;
      v18 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isInited(this->avatar_) )
      {
        v21 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 64));
        BaseTalent::enable(v21);
        v22 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 64));
        TalentComp::tryEnableTeamTalent(this, v22);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isFormal(this->avatar_) )
      {
        common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarUpgradeProudSkill>();
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarId = Avatar::getAvatarId(this->avatar_);
        proto_log::PlayerLogBodyAvatarUpgradeProudSkill::set_avatar_id(v23, AvatarId);
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Level = Creature::getLevel(this->avatar_);
        proto_log::PlayerLogBodyAvatarUpgradeProudSkill::set_avatar_level(v25, Level);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        avatar = this->avatar_;
        baseclass_0 = avatar->baseclass_0;
        if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
          baseclass_0 = (_QWORD *)__asan_report_load8();
        v30 = *baseclass_0 + 280LL;
        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8();
        v31 = (*(__int64 (__fastcall **)(Avatar *))v30)(avatar);
        proto_log::PlayerLogBodyAvatarUpgradeProudSkill::set_element_type(v27, v31);
        v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyAvatarUpgradeProudSkill::set_proud_skill_type(
          v32,
          proud_skill_config_ptr->proud_skill_type);
        v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)proud_skill_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_group_id >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyAvatarUpgradeProudSkill::set_proud_skill_group_id(
          v33,
          proud_skill_config_ptr->proud_skill_group_id);
        v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_node_count + 96));
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyAvatarUpgradeProudSkill::set_proud_skill_level(v34, proud_skill_config_ptr->level);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(p_M_node_count + 128),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeProudSkill,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&v48,
          (const std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeProudSkill> *)(p_M_node_count + 96));
        Player::printStatLog(player, (MessagePtr *)&v48, (MessagePtr *)(p_M_node_count + 128), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v48);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(p_M_node_count + 128));
        std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeProudSkill>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeProudSkill> *const)(p_M_node_count + 96));
      }
      v18 = 1;
    }
LABEL_65:
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(p_M_node_count + 64));
    if ( v18 != 1 )
      goto LABEL_80;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Avatar::isInited(this->avatar_) )
  {
    proto::ProudSkillChangeNotify::ProudSkillChangeNotify((proto::ProudSkillChangeNotify *const)(p_M_node_count + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Guid = Avatar::getGuid(this->avatar_);
    proto::ProudSkillChangeNotify::set_avatar_guid((proto::ProudSkillChangeNotify *const)(p_M_node_count + 160), Guid);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EntityId = Entity::getEntityId((const Entity *const)this->avatar_);
    proto::ProudSkillChangeNotify::set_entity_id((proto::ProudSkillChangeNotify *const)(p_M_node_count + 160), EntityId);
    if ( *(_BYTE *)(((unsigned __int64)skill_depota >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)skill_depota >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ProudSkillChangeNotify::set_skill_depot_id(
      (proto::ProudSkillChangeNotify *const)(p_M_node_count + 160),
      *(_DWORD *)skill_depota->baseclass_0);
    v37 = proto::ProudSkillChangeNotify::mutable_proud_skill_list((proto::ProudSkillChangeNotify *const)(p_M_node_count + 160));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(proud_skill_veca, v37);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Avatar::notifySceneTeam(this->avatar_, (const google::protobuf::Message *)(p_M_node_count + 160));
    proto::ProudSkillChangeNotify::~ProudSkillChangeNotify((proto::ProudSkillChangeNotify *const)(p_M_node_count + 160));
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/talent/talent_comp.cpp",
    "internalAddProudSkills",
    1914);
  v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header,
          (const char (*)[17])off_25514C00);
  common::milog::MiLogStream::operator<<<unsigned int>(v38, proud_skill_veca);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48.unlocked_talent_map._M_t._M_impl.std::_Rb_tree_header);
  v4 = 0;
LABEL_80:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(p_M_node_count + 32));
  result = v4;
  if ( v41 == (std::size_t *)p_M_node_count )
  {
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_M_node_count >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((p_M_node_count >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)p_M_node_count = 1172321806LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_node_count >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1920: range 000000001495D7F2-000000001495DCA7
int32_t __cdecl TalentComp::foreachValidTeamAvatar(
        TalentComp *const this,
        BaseTalent *base_talent,
        const std::function<ForeachPolicy(Avatar&)> *func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  Player *v11; // rax
  PlayerAvatarComp *AvatarComp; // r14
  uint64_t Guid; // rsi
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerAvatarComp *v18; // r14
  int32_t result; // eax
  TalentComp::foreachValidTeamAvatar::<lambda(Avatar&)> v20; // [rsp-20h] [rbp-F0h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-90h] BYREF
  char v24[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 player_ptr:1922";
  *(_QWORD *)(v3 + 16) = TalentComp::foreachValidTeamAvatar;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v8 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v8)(v3 + 32, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "foreachValidTeamAvatar",
      1925);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v23,
           (const char (*)[23])"getPlayer fail, avatar");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v10 = -1;
    goto LABEL_27;
  }
  v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  AvatarComp = Player::getAvatarComp(v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Guid = Avatar::getGuid(this->avatar_);
  if ( !PlayerAvatarComp::isMyAvatarInSceneTeam(AvatarComp, Guid) )
  {
    v10 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)base_talent >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(base_talent->_vptr_BaseTalent + 4);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(BaseTalent *))v14)(base_talent) != 1 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "foreachValidTeamAvatar",
        1937);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v23,
              (const char (*)[35])"talent is not team talent. talent:");
      v16 = operator<<(v15, base_talent);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_13;
    }
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v18 = Player::getAvatarComp(v17);
    v20.__this = this;
    v20.__func = func;
    v20.__base_talent = base_talent;
    std::function<ForeachPolicy ()(Avatar &)>::function<TalentComp::foreachValidTeamAvatar(BaseTalent &,std::function<ForeachPolicy ()(Avatar &)> const&)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v23,
      v20);
    v10 = PlayerAvatarComp::foreachMyAvatarInSceneTeam(v18, (std::function<ForeachPolicy(Avatar&)> *)&v23);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v23);
  }
LABEL_27:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  result = v10;
  if ( v24 == (char *)v3 )
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

// Line 1941: range 000000001495D68E-000000001495D7F0
ForeachPolicy __cdecl TalentComp::foreachValidTeamAvatar(BaseTalent &,std::function<ForeachPolicy ()(Avatar &)> const&)::{lambda(Avatar &)#1}::operator()(
        const TalentComp::foreachValidTeamAvatar::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  __int64 this; // rax
  uint64_t Guid; // rbx
  BaseTalent *base_talent; // rdx
  _QWORD *p_vptr_BaseTalent; // rax
  unsigned __int64 v7; // rax

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)(this + 8) >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  Guid = Avatar::getGuid(*(const Avatar *const *)(this + 8));
  if ( Guid == Avatar::getGuid(avatar) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  base_talent = __closure->__base_talent;
  p_vptr_BaseTalent = &__closure->__base_talent->_vptr_BaseTalent;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__base_talent >> 3) + 0x7FFF8000) )
    p_vptr_BaseTalent = (_QWORD *)__asan_report_load8();
  v7 = *p_vptr_BaseTalent + 24LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( !(*(unsigned __int8 (__fastcall **)(BaseTalent *, Avatar *))v7)(base_talent, avatar) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__func >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return std::function<ForeachPolicy ()(Avatar &)>::operator()(__closure->__func, avatar);
};

// Line 1957: range 000000001495E15C-000000001495E227
void __cdecl TalentComp::tryEnableTeamTalent(TalentComp *const this, BaseTalent *base_talent)
{
  unsigned __int64 v2; // rax
  std::function<ForeachPolicy(Avatar&)> func; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)base_talent >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(base_talent->_vptr_BaseTalent + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BaseTalent *))v2)(base_talent) == 1 )
  {
    std::function<ForeachPolicy ()(Avatar &)>::function<TalentComp::tryEnableTeamTalent(BaseTalent &)::{lambda(Avatar &)#1},void,void>(
      &func,
      (TalentComp::tryEnableTeamTalent::<lambda(Avatar&)>)base_talent);
    TalentComp::foreachValidTeamAvatar(this, base_talent, &func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&func);
  }
};

// Line 1962: range 000000001495DCA8-000000001495E15A
ForeachPolicy __cdecl TalentComp::tryEnableTeamTalent(BaseTalent &)::{lambda(Avatar &)#1}::operator()(
        const TalentComp::tryEnableTeamTalent::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  TalentComp *TalentComp; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  BaseTalent *base_talent; // rcx
  _QWORD *p_vptr_BaseTalent; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  BaseTalent *v17; // rax
  std::shared_ptr<BaseTalent> *v18; // r8
  ForeachPolicy result; // eax
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *team_talent_map; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 talent_key:1964 64 16 15 talent_ptr:1971";
  *(_QWORD *)(v2 + 16) = TalentComp::tryEnableTeamTalent(BaseTalent &)::{lambda(Avatar &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(std::pair<long unsigned int,unsigned int> *)(v2 + 32) = BaseTalent::getTalentKey(__closure->__base_talent);
  TalentComp = Avatar::getTalentComp(avatar);
  team_talent_map = TalentComp::getTeamTalentMap(TalentComp);
  if ( common::tools::MiscUtils::isContains<std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>,std::pair<unsigned long,unsigned int>>(
         team_talent_map,
         (const std::pair<long unsigned int,unsigned int> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "operator()",
      1968);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v21,
           (const char (*)[33])"avatar already have team talent:");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = operator<<(v6, __closure->__base_talent);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, avatar);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    base_talent = __closure->__base_talent;
    p_vptr_BaseTalent = &__closure->__base_talent->_vptr_BaseTalent;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__base_talent >> 3) + 0x7FFF8000) )
      p_vptr_BaseTalent = (_QWORD *)__asan_report_load8();
    v11 = *p_vptr_BaseTalent + 16LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, BaseTalent *, Avatar *))v11)(v2 + 64, base_talent, avatar);
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        1974);
      v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v21,
              (const char (*)[27])"clone talent fail. talent:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, __closure->__base_talent);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        1977);
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v21, (const char (*)[15])"enable talent:");
      v14 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v15 = operator<<(v13, v14);
      v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v15, (const char (*)[5])off_25512CE0);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, avatar);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v17 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BaseTalent::enable(v17);
      std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::emplace<std::pair<unsigned long,unsigned int>&,std::shared_ptr<BaseTalent>&>(
        team_talent_map,
        (std::pair<long unsigned int,unsigned int> *)(v2 + 32),
        (std::shared_ptr<BaseTalent> *)(v2 + 64),
        (std::pair<long unsigned int,unsigned int> *)(v2 + 32),
        v18);
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 64));
  }
  result = FOREACH_CONTINUE;
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
  return result;
};

// Line 1985: range 000000001495E6C6-000000001495E791
void __cdecl TalentComp::tryDisableTeamTalent(TalentComp *const this, BaseTalent *base_talent)
{
  unsigned __int64 v2; // rax
  std::function<ForeachPolicy(Avatar&)> func; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)base_talent >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(base_talent->_vptr_BaseTalent + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BaseTalent *))v2)(base_talent) == 1 )
  {
    std::function<ForeachPolicy ()(Avatar &)>::function<TalentComp::tryDisableTeamTalent(BaseTalent &)::{lambda(Avatar &)#1},void,void>(
      &func,
      (TalentComp::tryDisableTeamTalent::<lambda(Avatar&)>)base_talent);
    TalentComp::foreachValidTeamAvatar(this, base_talent, &func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&func);
  }
};

// Line 1990: range 000000001495E228-000000001495E6C5
ForeachPolicy __cdecl TalentComp::tryDisableTeamTalent(BaseTalent &)::{lambda(Avatar &)#1}::operator()(
        const TalentComp::tryDisableTeamTalent::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  TalentComp *TalentComp; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::pointer v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  BaseTalent *v17; // rax
  ForeachPolicy result; // eax
  std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::_Self __y; // [rsp+10h] [rbp-E0h] BYREF
  std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>> *team_talent_map; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 9 iter:1994 64 16 15 talent_key:1992 96 16 15 talent_ptr:2000";
  *(_QWORD *)(v2 + 16) = TalentComp::tryDisableTeamTalent(BaseTalent &)::{lambda(Avatar &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(std::pair<long unsigned int,unsigned int> *)(v2 + 64) = BaseTalent::getTalentKey(__closure->__base_talent);
  TalentComp = Avatar::getTalentComp(avatar);
  team_talent_map = TalentComp::getTeamTalentMap(TalentComp);
  *(std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32) = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::find(team_talent_map, (const std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::key_type *)(v2 + 64));
  __y._M_node = std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::end(team_talent_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > >::_Self *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "operator()",
      1997);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v21,
           (const char (*)[32])"avatar do not have team talent:");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = operator<<(v6, __closure->__base_talent);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, avatar);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent> > > *const)(v2 + 32));
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 96), &v9->second);
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        2003);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v21,
              (const char (*)[29])"team talent is null. talent:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = operator<<(v10, __closure->__base_talent);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" avatar:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, avatar);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/talent_comp.cpp",
        "operator()",
        2006);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v21, (const char (*)[16])"disable talent:");
      v14 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v15 = operator<<(v13, v14);
      v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v15, (const char (*)[5])off_25512CE0);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, avatar);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v17 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BaseTalent::disable(v17);
      std::map<std::pair<unsigned long,unsigned int>,std::shared_ptr<BaseTalent>>::erase[abi:cxx11](
        team_talent_map,
        *(std::map<std::pair<long unsigned int,unsigned int>,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32));
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 96));
  }
  result = FOREACH_CONTINUE;
  if ( v22 == (char *)v2 )
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

// Line 2015: range 000000001495E792-000000001495EBD8
int32_t __cdecl TalentComp::foreachTeamResonanceTalent(
        TalentComp *const this,
        const std::function<ForeachPolicy(BaseTalent&)> *func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::size_type v6; // rax
  const std::shared_ptr<BaseTalent> *v7; // r8
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int v10; // r14d
  BaseTalent *v11; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-110h]
  std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *__for_range_0; // [rsp+38h] [rbp-108h]
  std::pair<unsigned int,std::weak_ptr<BaseTalent> > *__in; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int,std::weak_ptr<BaseTalent> > >::type *team_resonance_id_0; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int,std::weak_ptr<BaseTalent> > >::type *base_talent_wtr; // [rsp+50h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v20; // [rsp+58h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *team_resonance_id; // [rsp+60h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+68h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 20 base_talent_ptr:2024 64 24 15 talent_vec:2016";
  *(_QWORD *)(v3 + 16) = TalentComp::foreachTeamResonanceTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>::vector((std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *const)(v3 + 64));
  v6 = std::map<unsigned int,std::shared_ptr<BaseTalent>>::size(&this->team_resonance_talent_map_);
  std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>::reserve(
    (std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *const)(v3 + 64),
    v6);
  __for_range = &this->team_resonance_talent_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&this->team_resonance_talent_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(&this->team_resonance_talent_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    team_resonance_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v20);
    base_talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v20);
    std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>::emplace_back<unsigned int const&,std::shared_ptr<BaseTalent> const&>(
      (std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *const)(v3 + 64),
      team_resonance_id,
      base_talent_ptr,
      team_resonance_id,
      v7);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *)(v3 + 64);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Base_ptr)std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>::begin((std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *const)(v3 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Base_ptr)std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<BaseTalent> >*,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<BaseTalent> >*,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> > *)&__for_end) )
  {
    __in = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<BaseTalent> >*,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> > *const)&__for_begin);
    team_resonance_id_0 = std::get<0ul,unsigned int,std::weak_ptr<BaseTalent>>(__in);
    base_talent_wtr = std::get<1ul,unsigned int,std::weak_ptr<BaseTalent>>(__in);
    std::weak_ptr<BaseTalent>::lock((const std::weak_ptr<BaseTalent> *const)(v3 + 32));
    if ( std::operator==<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/talent/talent_comp.cpp",
        "foreachTeamResonanceTalent",
        2027);
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v23,
             (const char (*)[44])"base_talent_ptr is null, team_resonance_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, team_resonance_id_0);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(BaseTalent &)>::operator()(func, v11) )
      {
        v2 = -1;
        v10 = 1;
      }
      else
      {
        v10 = 2;
      }
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 32));
    if ( v10 && v10 != 2 )
      goto LABEL_20;
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<BaseTalent>> *,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::weak_ptr<BaseTalent> >*,std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_20:
  std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent>>>::~vector((std::vector<std::pair<unsigned int,std::weak_ptr<BaseTalent> >> *const)(v3 + 64));
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 2040: range 000000001495EBDA-000000001495F62C
bool __cdecl TalentComp::refreshTeamResonanceTalents(
        TalentComp *const this,
        const std::vector<unsigned int> *team_resonance_id_vec,
        proto::TeamResonanceChangeNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t EntityId; // eax
  uint64_t Guid; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::pointer v9; // rax
  unsigned int *v10; // rcx
  std::shared_ptr<BaseTalent> *v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  std::shared_ptr<BaseTalent> *v14; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  BaseTalent *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  BaseTalent *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  const google::protobuf::RepeatedField<unsigned int> *v29; // rax
  const google::protobuf::RepeatedField<unsigned int> *v30; // rax
  proto::AvatarTeamResonanceInfo *v32; // rax
  bool v33; // r14
  bool result; // al
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-1E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-1D8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end_0; // [rsp+30h] [rbp-1D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1C8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v41; // [rsp+48h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *team_resonance_id; // [rsp+50h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_ptr; // [rsp+58h] [rbp-1A8h]
  std::shared_ptr<TeamResonance> v44; // [rsp+60h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-190h] BYREF
  char v46[368]; // [rsp+90h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 22 team_resonance_id:2048 64 8 9 iter:2050 96 16 15 talent_ptr:2060 128 48 27 old_team_re"
                        "sonance_map:2045 208 80 15 proto_info:2041";
  *(_QWORD *)(v3 + 16) = TalentComp::refreshTeamResonanceTalents;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862729] = -202116109;
  proto::AvatarTeamResonanceInfo::AvatarTeamResonanceInfo((proto::AvatarTeamResonanceInfo *const)(v3 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->avatar_);
  proto::AvatarTeamResonanceInfo::set_entity_id((proto::AvatarTeamResonanceInfo *const)(v3 + 208), EntityId);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Guid = Avatar::getGuid(this->avatar_);
  proto::AvatarTeamResonanceInfo::set_avatar_guid((proto::AvatarTeamResonanceInfo *const)(v3 + 208), Guid);
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::map((std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128));
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::swap(
    (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128),
    &this->team_resonance_talent_map_);
  __for_range = team_resonance_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(team_resonance_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(team_resonance_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v8;
    *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BaseTalent>>::find(
                                                                                   (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128),
                                                                                   (const std::map<unsigned int,std::shared_ptr<BaseTalent>>::key_type *)(v3 + 48));
    __for_end_0._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end((std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128))._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)(v3 + 64),
           &__for_end_0) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v3 + 64));
      std::map<unsigned int,std::shared_ptr<BaseTalent>>::emplace<unsigned int &,std::shared_ptr<BaseTalent>&>(
        &this->team_resonance_talent_map_,
        (unsigned int *)(v3 + 48),
        &v9->second,
        v10,
        v11);
      std::map<unsigned int,std::shared_ptr<BaseTalent>>::erase[abi:cxx11](
        (std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128),
        *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator *)(v3 + 64));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<TeamResonance,Avatar &,unsigned int &>(
        (Avatar *)&v44,
        (unsigned int *)this->avatar_,
        (Avatar *)(v3 + 48),
        (unsigned int *)this->avatar_);
      std::static_pointer_cast<BaseTalent,TeamResonance>((const std::shared_ptr<TeamResonance> *)(v3 + 96));
      std::shared_ptr<TeamResonance>::~shared_ptr(&v44);
      v12 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v13 = *(_QWORD *)v12 + 8LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "refreshTeamResonanceTalents",
          2063);
        v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v45,
                (const char (*)[37])"initMixins fails, team_resonance_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        std::map<unsigned int,std::shared_ptr<BaseTalent>>::emplace<unsigned int &,std::shared_ptr<BaseTalent>&>(
          &this->team_resonance_talent_map_,
          (unsigned int *)(v3 + 48),
          (std::shared_ptr<BaseTalent> *)(v3 + 96),
          (unsigned int *)&this->team_resonance_talent_map_,
          v14);
        v18 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        BaseTalent::enable(v18);
        proto::AvatarTeamResonanceInfo::add_add_team_resonance_id_list(
          (proto::AvatarTeamResonanceInfo *const)(v3 + 208),
          *(_DWORD *)(v3 + 48));
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/talent/talent_comp.cpp",
          "refreshTeamResonanceTalents",
          2070);
        v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v45, (const char (*)[20])off_25515160);
        v20 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v21 = operator<<(v19, v20);
        v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])off_255151A0);
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v17, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v45);
      std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 96));
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::map<unsigned int,std::shared_ptr<BaseTalent>> *)(v3 + 128);
  *(std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin((std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128));
  __for_end_0._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)(v3 + 64),
            &__for_end_0) )
  {
    v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v3 + 64));
    team_resonance_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v41);
    talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v41);
    if ( std::operator==<BaseTalent>(0LL, talent_ptr) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "refreshTeamResonanceTalents",
        2078);
      v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v45,
              (const char (*)[35])"talent is null. team_resonance_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, team_resonance_id);
      v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v25 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)talent_ptr);
      BaseTalent::disable(v25);
      if ( *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)team_resonance_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::AvatarTeamResonanceInfo::add_del_team_resonance_id_list(
        (proto::AvatarTeamResonanceInfo *const)(v3 + 208),
        *team_resonance_id);
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/talent_comp.cpp",
        "refreshTeamResonanceTalents",
        2084);
      v26 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v45, (const char (*)[20])off_25515240);
      v27 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)talent_ptr);
      v28 = operator<<(v26, v27);
      v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" from ");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v24, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v45);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > > *const)(v3 + 64));
  }
  v29 = proto::AvatarTeamResonanceInfo::add_team_resonance_id_list((const proto::AvatarTeamResonanceInfo *const)(v3 + 208));
  if ( !google::protobuf::RepeatedField<unsigned int>::empty(v29)
    || (v30 = proto::AvatarTeamResonanceInfo::del_team_resonance_id_list((const proto::AvatarTeamResonanceInfo *const)(v3 + 208)),
        !google::protobuf::RepeatedField<unsigned int>::empty(v30)) )
  {
    v32 = proto::TeamResonanceChangeNotify::add_info_list(notify);
    proto::AvatarTeamResonanceInfo::Swap((proto::AvatarTeamResonanceInfo *const)(v3 + 208), v32);
    v33 = 1;
  }
  else
  {
    v33 = 0;
  }
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::~map((std::map<unsigned int,std::shared_ptr<BaseTalent>> *const)(v3 + 128));
  proto::AvatarTeamResonanceInfo::~AvatarTeamResonanceInfo((proto::AvatarTeamResonanceInfo *const)(v3 + 208));
  result = v33;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2098: range 000000001495F62E-000000001495FB30
bool __cdecl TalentComp::clearTeamResonanceTalents(TalentComp *const this, proto::TeamResonanceChangeNotify *notify)
{
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  uint32_t EntityId; // eax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  BaseTalent *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool result; // al
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  proto::AvatarTeamResonanceInfo *proto_info; // [rsp+28h] [rbp-F8h]
  std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v20; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *team_resonance_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_ptr; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,std::shared_ptr<BaseTalent>> *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,std::shared_ptr<BaseTalent>> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 27 old_team_resonance_map:2104";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)TalentComp::clearTeamResonanceTalents;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( std::map<unsigned int,std::shared_ptr<BaseTalent>>::empty(&this->team_resonance_talent_map_) )
  {
    v5 = 0;
  }
  else
  {
    std::map<unsigned int,std::shared_ptr<BaseTalent>>::map(v2 + 1);
    std::map<unsigned int,std::shared_ptr<BaseTalent>>::swap(v2 + 1, &this->team_resonance_talent_map_);
    proto_info = proto::TeamResonanceChangeNotify::add_info_list(notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EntityId = Entity::getEntityId((const Entity *const)this->avatar_);
    proto::AvatarTeamResonanceInfo::set_entity_id(proto_info, EntityId);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Guid = Avatar::getGuid(this->avatar_);
    proto::AvatarTeamResonanceInfo::set_avatar_guid(proto_info, Guid);
    __for_range = v2 + 1;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(v2 + 1)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(v2 + 1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      team_resonance_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v20);
      talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v20);
      if ( std::operator==<BaseTalent>(0LL, talent_ptr) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/talent_comp.cpp",
          "clearTeamResonanceTalents",
          2115);
        v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v23,
               (const char (*)[35])"talent is null. team_resonance_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, team_resonance_id);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        v11 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)talent_ptr);
        BaseTalent::disable(v11);
        if ( *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)team_resonance_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::AvatarTeamResonanceInfo::add_del_team_resonance_id_list(proto_info, *team_resonance_id);
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/talent/talent_comp.cpp",
          "clearTeamResonanceTalents",
          2121);
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v23, (const char (*)[20])off_25515240);
        v13 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)talent_ptr);
        v14 = operator<<(v12, v13);
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" from ");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    v5 = 1;
    std::map<unsigned int,std::shared_ptr<BaseTalent>>::~map(v2 + 1);
  }
  result = v5;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2128: range 000000001495FB32-000000001495FF0C
int32_t __cdecl TalentComp::toShowAvatarInfo(const TalentComp *const this, proto::ShowAvatarInfo *show_avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v6; // rax
  uint32_t CoreProudSkillLevel; // edx
  std::map<unsigned int,SkillDepot>::key_type __x; // [rsp+1Ch] [rbp-D4h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const SkillDepot *skill_depot; // [rsp+30h] [rbp-C0h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+38h] [rbp-B8h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_0; // [rsp+40h] [rbp-B0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_extra_level_map; // [rsp+48h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v15; // [rsp+50h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *proud_skill_id; // [rsp+58h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr_0; // [rsp+60h] [rbp-90h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v18; // [rsp+68h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *talent_id; // [rsp+70h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+78h] [rbp-78h]
  char v21[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:2129";
  *(_QWORD *)(v2 + 16) = TalentComp::toShowAvatarInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 32) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      &__x);
  __for_end._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 32));
    skill_depot = &v6->second;
    __for_range = &v6->second.unlocked_talent_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&v6->second.unlocked_talent_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      talent_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v18);
      base_talent_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v18);
      if ( *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)talent_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ShowAvatarInfo::add_talent_id_list(show_avatar_info, *talent_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    CoreProudSkillLevel = SkillDepot::getCoreProudSkillLevel(skill_depot);
    proto::ShowAvatarInfo::set_core_proud_skill_level(show_avatar_info, CoreProudSkillLevel);
    __for_range_0 = &skill_depot->proud_skill_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(&skill_depot->proud_skill_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v15);
      base_talent_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v15);
      if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ShowAvatarInfo::add_inherent_proud_skill_list(show_avatar_info, *proud_skill_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
    }
    proto_extra_level_map = proto::ShowAvatarInfo::mutable_proud_skill_extra_level_map(show_avatar_info);
    SkillDepot::getProtoProudSkillExtraLevels(skill_depot, proto_extra_level_map);
    result = 0;
  }
  if ( v21 == (char *)v2 )
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

// Line 2150: range 000000001495FF0E-0000000014960277
int32_t __cdecl TalentComp::addDynamicTalent(TalentComp *const this, const std::string *open_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  std::shared_ptr<BaseTalent> *v9; // rax
  BaseTalent *v10; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<DynamicTalent> v13; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 iter:2151 64 16 15 talent_ptr:2156";
  *(_QWORD *)(v2 + 16) = TalentComp::addDynamicTalent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(std::map<std::string,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32) = std::map<std::string,std::shared_ptr<BaseTalent>>::find(
                                                                                &this->dynamic_talent_map_,
                                                                                open_config);
  __y._M_node = std::map<std::string,std::shared_ptr<BaseTalent>>::end(&this->dynamic_talent_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >::_Self *)(v2 + 32),
         &__y) )
  {
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::perf::make_shared<DynamicTalent,Avatar &,std::string const&>(
      (Avatar *)&v13,
      (const std::string *)this->avatar_,
      (Avatar *)open_config,
      (const std::string *)this->avatar_);
    std::static_pointer_cast<BaseTalent,DynamicTalent>((const std::shared_ptr<DynamicTalent> *)(v2 + 64));
    std::shared_ptr<DynamicTalent>::~shared_ptr(&v13);
    v6 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(_QWORD *)v6 + 8LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "addDynamicTalent",
        2159);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v14,
             (const char (*)[31])"initMixins fails, open_config:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, open_config);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = -1;
    }
    else
    {
      v9 = std::map<std::string,std::shared_ptr<BaseTalent>>::operator[](&this->dynamic_talent_map_, open_config);
      std::shared_ptr<BaseTalent>::operator=(v9, (const std::shared_ptr<BaseTalent> *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isInited(this->avatar_) )
      {
        v10 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BaseTalent::enable(v10);
      }
      v5 = 0;
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 64));
  }
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 2172: range 0000000014960278-000000001496047C
int32_t __cdecl TalentComp::removeDynamicTalent(TalentComp *const this, const std::string *open_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >::pointer v5; // rax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BaseTalent *v7; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 iter:2173 64 16 19 old_talent_ptr:2178";
  *(_QWORD *)(v2 + 16) = TalentComp::removeDynamicTalent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(std::map<std::string,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32) = std::map<std::string,std::shared_ptr<BaseTalent>>::find(
                                                                                &this->dynamic_talent_map_,
                                                                                open_config);
  __y._M_node = std::map<std::string,std::shared_ptr<BaseTalent>>::end(&this->dynamic_talent_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > >::_Self *)(v2 + 32),
          &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseTalent>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<BaseTalent> > > *const)(v2 + 32));
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 64), &v5->second);
    std::map<std::string,std::shared_ptr<BaseTalent>>::erase[abi:cxx11](
      &this->dynamic_talent_map_,
      *(std::map<std::string,std::shared_ptr<BaseTalent>>::iterator *)(v2 + 32));
    if ( std::operator!=<BaseTalent>((const std::shared_ptr<BaseTalent> *)(v2 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( BaseTalent::getIsEnabled(v6) )
      {
        v7 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BaseTalent::disable(v7);
      }
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v2 + 64));
  }
  result = 0;
  if ( v10 == (char *)v2 )
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

// Line 2192: range 000000001496047E-0000000014960569
void __cdecl TalentComp::clearAllDynamicTalents(TalentComp *const this)
{
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  BaseTalent *v2; // rax
  std::map<std::string,std::shared_ptr<BaseTalent>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::string,std::shared_ptr<BaseTalent>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::string,std::shared_ptr<BaseTalent>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<const std::string,std::shared_ptr<BaseTalent> > *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<BaseTalent> > >::type *open_config; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<BaseTalent> > >::type *base_talent_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->dynamic_talent_map_;
  __for_begin._M_node = std::map<std::string,std::shared_ptr<BaseTalent>>::begin(&this->dynamic_talent_map_)._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<BaseTalent>>::end(&this->dynamic_talent_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    open_config = std::get<0ul,std::string const,std::shared_ptr<BaseTalent>>(v6);
    base_talent_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,std::string const,std::shared_ptr<BaseTalent>>(v6);
    if ( std::operator!=<BaseTalent>(base_talent_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
      if ( BaseTalent::getIsEnabled(v1) )
      {
        v2 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_talent_ptr);
        BaseTalent::disable(v2);
      }
    }
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  std::map<std::string,std::shared_ptr<BaseTalent>>::clear(&this->dynamic_talent_map_);
};

// Line 2208: range 000000001496056A-0000000014960B36
void __cdecl TalentComp::initDynamicTalents(TalentComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rcx
  Player *v9; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  std::vector<std::string>::iterator __for_begin; // [rsp+10h] [rbp-160h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-150h]
  const std::string *open_config; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-130h] BYREF
  char v17[272]; // [rsp+60h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 15 avatar_ptr:2209 64 16 15 player_ptr:2217 96 24 23 target_ability_vec:2215 160 24 22 t"
                        "arget_talent_vec:2216";
  *(_QWORD *)(v1 + 16) = TalentComp::initDynamicTalents;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Avatar>((Avatar *)(v1 + 32));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "initDynamicTalents",
      2212);
    v4 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v16, (const char (*)[13])off_25515520);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 96));
    std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    baseclass_0 = avatar->baseclass_0;
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
      baseclass_0 = (_QWORD *)__asan_report_load8();
    v7 = *baseclass_0 + 152LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Avatar *))v7)(v1 + 64, avatar);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "initDynamicTalents",
        2220);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v16,
             (const char (*)[24])"player is null, avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      AbilityGroupComp = Player::getAbilityGroupComp(v9);
      std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v1 + 32));
      PlayerAbilityGroupComp::getAllTargetAbilitiesAndTalentsFromAbilityGroup(
        AbilityGroupComp,
        (TargetAbilityVec *)(v1 + 96),
        (TargetTalentVec *)(v1 + 160),
        &p_avatar_ptr);
      std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
      __for_range = (std::vector<std::string> *)(v1 + 160);
      __for_begin._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v1 + 160))._M_current;
      __for_end._M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v1 + 160))._M_current;
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        open_config = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
        TalentComp::addDynamicTalent(this, open_config);
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 160));
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 96));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2231: range 0000000014960B38-0000000014960FA4
bool __cdecl TalentComp::isTalentAllUnlock(TalentComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  bool result; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v9; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+28h] [rbp-C8h]
  const std::vector<unsigned int> *talent_vec; // [rsp+30h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+70h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 19 skill_depot_id:2232 48 4 14 talent_id:2253 64 8 15 depot_iter:2234";
  *(_QWORD *)(v1 + 16) = TalentComp::isTalentAllUnlock;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 32) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::iterator *)(v1 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                &this->skill_depot_map_,
                                                                (const std::map<unsigned int,SkillDepot>::key_type *)(v1 + 32));
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v1 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "isTalentAllUnlock",
      2237);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v16,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                      &v6->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                      *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( avatar_skill_depot_config_ptr )
    {
      talent_vec = &avatar_skill_depot_config_ptr->talents;
      if ( std::vector<unsigned int>::empty(&avatar_skill_depot_config_ptr->talents) )
      {
        result = 1;
      }
      else
      {
        __for_range = talent_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(talent_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v8;
          v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v1 + 64));
          if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>>,unsigned int>(
                  &v9->second.unlocked_talent_map,
                  (const unsigned int *)(v1 + 48)) )
          {
            result = 0;
            goto LABEL_22;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        result = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "isTalentAllUnlock",
        2244);
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v16,
             (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0;
    }
  }
LABEL_22:
  if ( v17 == (char *)v1 )
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
  return result;
};

// Line 2264: range 0000000014960FA6-000000001496131F
bool __fastcall TalentComp::isTalentUnlock(const TalentComp *const this, uint32_t talent_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  bool result; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::pointer v9; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self __y; // [rsp+10h] [rbp-C0h] BYREF
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "3 32 4 19 skill_depot_id:2265 48 4 14 talent_id:2263 64 8 15 depot_iter:2267";
  *(_QWORD *)(v2 + 16) = TalentComp::isTalentUnlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = talent_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,SkillDepot>::const_iterator *)(v2 + 64) = std::map<unsigned int,SkillDepot>::find(
                                                                      &this->skill_depot_map_,
                                                                      (const std::map<unsigned int,SkillDepot>::key_type *)(v2 + 32));
  __y._M_node = std::map<unsigned int,SkillDepot>::end(&this->skill_depot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_comp.cpp",
      "isTalentUnlock",
      2270);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v13,
           (const char (*)[28])"getCurDepotTalentInfo fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                      &v7->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                      *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( avatar_skill_depot_config_ptr )
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SkillDepot> > *const)(v2 + 64));
      result = common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseTalent>> const,unsigned int>(
                 &v9->second.unlocked_talent_map,
                 (const unsigned int *)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_comp.cpp",
        "isTalentUnlock",
        2277);
      v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v13,
             (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0;
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
  return result;
};
