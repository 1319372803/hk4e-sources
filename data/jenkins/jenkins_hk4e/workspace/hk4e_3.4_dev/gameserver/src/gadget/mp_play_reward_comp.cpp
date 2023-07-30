// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/mp_play_reward_comp.cpp

// Line 22: range 00000000145172EA-00000000145172FC
int32_t __cdecl MpPlayRewardComp::initByConfig(MpPlayRewardComp *const this, const GadgetParam *gadget_param)
{
  return 0;
};

// Line 27: range 00000000145172FE-00000000145176E1
int32_t __cdecl MpPlayRewardComp::toClient(const MpPlayRewardComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t ResinCost; // eax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::uint32 *v11; // rdx
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  proto::MpPlayRewardInfo *reward_info; // [rsp+30h] [rbp-C0h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-B0h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 mp_play_ptr:28";
  *(_QWORD *)(v2 + 16) = MpPlayRewardComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  MpPlayRewardComp::findMpPlayPtr((const MpPlayRewardComp *const)(v2 + 32));
  if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/mp_play_reward_comp.cpp",
      "toClient",
      31);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v21,
           (const char (*)[34])"findMpPlayPtr fails, mp_play_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->mp_play_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  else
  {
    reward_info = proto::SceneGadgetInfo::mutable_mp_play_reward(gadget_info);
    v7 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ResinCost = BaseMpPlay::getResinCost(v7);
    proto::MpPlayRewardInfo::set_resin(reward_info, ResinCost);
    v9 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    __for_range = BaseMpPlay::getRewardQualifyUidMap(v9);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,unsigned int>(v18);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MpPlayRewardInfo::add_qualify_uid_list(reward_info, *uid);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v10 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    __for_range_0 = BaseMpPlay::getRewardRemainUidVec(v10);
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin(__for_range_0)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v11 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MpPlayRewardInfo::add_remain_uid_list(reward_info, *v11);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    v6 = 0;
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 32));
  result = v6;
  if ( v22 == (char *)v2 )
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

// Line 48: range 00000000145176E2-00000000145178D0
int32_t __cdecl MpPlayRewardComp::interactCheck(
        MpPlayRewardComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  int32_t result; // eax
  int ret; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 mp_play_ptr:49";
  *(_QWORD *)(v3 + 16) = MpPlayRewardComp::interactCheck;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  MpPlayRewardComp::findMpPlayPtr((const MpPlayRewardComp *const)(v3 + 32));
  if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/mp_play_reward_comp.cpp",
      "interactCheck",
      52);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v11,
           (const char (*)[34])"findMpPlayPtr fails, mp_play_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->mp_play_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ret = BaseMpPlay::checkTakeReward(v8, player);
    if ( ret )
      v7 = ret;
    else
      v7 = 0;
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 32));
  result = v7;
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

// Line 64: range 00000000145178D2-0000000014517B69
int32_t __cdecl MpPlayRewardComp::interact(
        MpPlayRewardComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  BaseMpPlay *v9; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 mp_play_ptr:70";
  *(_QWORD *)(v3 + 16) = MpPlayRewardComp::interact;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(MpPlayRewardComp *const, Player *, const EntityInteractParam *))v6)(
          this,
          player,
          param);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    MpPlayRewardComp::findMpPlayPtr((const MpPlayRewardComp *const)(v3 + 32));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/mp_play_reward_comp.cpp",
        "interact",
        73);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v13,
             (const char (*)[34])"findMpPlayPtr fails, mp_play_id_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->mp_play_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v7 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = BaseMpPlay::takeReward(v9, player, (Entity *)this->gadget_);
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 32));
  }
  result = v7;
  if ( v14 == (char *)v3 )
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

// Line 81: range 0000000014517B6A-0000000014517F48
BaseMpPlayPtr __cdecl MpPlayRewardComp::findMpPlayPtr(const MpPlayRewardComp *const this)
{
  const MpPlayRewardComp *v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Player *v7; // rax
  uint32_t MpPlayComp; // esi
  BaseMpPlayPtr result; // rax
  const MpPlayRewardComp *thisa; // [rsp+0h] [rbp-B0h]
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  thisa = v1;
  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 scene_ptr:82 64 16 19 owner_player_ptr:88";
  *(_QWORD *)(v2 + 16) = MpPlayRewardComp::findMpPlayPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&v1->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/mp_play_reward_comp.cpp",
      "findMpPlayPtr",
      85);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v11,
           (const char (*)[25])"getScene fails, gadget_:");
    if ( *(_BYTE *)(((unsigned __int64)&v1->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, v1->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getOwnPlayer((const Scene *const)(v2 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/mp_play_reward_comp.cpp",
        "findMpPlayPtr",
        91);
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v11,
             (const char (*)[42])"scene_ptr->getOwnerPlayer fails, gadget_:");
      if ( *(_BYTE *)(((unsigned __int64)&v1->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, v1->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, 0LL);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      MpPlayComp = (unsigned int)Player::getMpPlayComp(v7);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this);
      PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)this, MpPlayComp);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
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
  result._M_ptr = (std::__shared_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
