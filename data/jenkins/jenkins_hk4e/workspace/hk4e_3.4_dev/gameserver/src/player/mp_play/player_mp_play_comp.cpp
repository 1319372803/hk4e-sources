// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mp_play/player_mp_play_comp.cpp

// Line 26: range 0000000016CBBB4E-0000000016CBBE4D
std::shared_ptr<BaseMpPlay> *__fastcall PlayerMpPlayComp::createMpPlayPtr(
        std::shared_ptr<BaseMpPlay> *player,
        unsigned int *play_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int *v8; // r8
  const data::MpPlayType *v9; // r9
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 play_id:25 64 16 11 play_ptr:34";
  *(_QWORD *)(v3 + 16) = PlayerMpPlayComp::createMpPlayPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                       &v6->design_config.txt_config_mgr.mp_play_config_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( match_config_ptr )
  {
    std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 64), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->play_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&match_config_ptr->play_type);
    }
    common::tools::perf::make_shared<BaseMpPlay,Player &,unsigned int &,data::MpPlayType const&>(
      (Player *)&v13,
      play_id,
      (const data::MpPlayType *)(v3 + 48),
      (Player *)&match_config_ptr->play_type,
      v8,
      v9);
    std::shared_ptr<BaseMpPlay>::operator=(
      (std::shared_ptr<BaseMpPlay> *const)(v3 + 64),
      (std::shared_ptr<BaseMpPlay> *)&v13);
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)&v13);
    std::shared_ptr<BaseMpPlay>::shared_ptr(player, (std::shared_ptr<BaseMpPlay> *)(v3 + 64));
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "createMpPlayPtr",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v14,
           (const char (*)[43])"findMpPlayMatchExcelConfig fails, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::shared_ptr<BaseMpPlay>::shared_ptr(player, 0LL);
  }
  if ( v15 == (char *)v3 )
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
  return player;
};

// Line 45: range 0000000016CBBE4E-0000000016CBC2FE
int32_t __cdecl PlayerMpPlayComp::fromBin(PlayerMpPlayComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  std::shared_ptr<BaseMpPlay> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int v6; // esi
  common::milog::MiLogStream *v7; // r14
  int v8; // r15d
  BaseMpPlay *v9; // rax
  common::milog::MiLogStream *v10; // r14
  unsigned int *v11; // rcx
  std::shared_ptr<BaseMpPlay> *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::remove_reference<std::shared_ptr<BaseMpPlay>&>::type *v17; // [rsp+8h] [rbp-D8h]
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::MpPlayBin>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::MpPlayBin>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  const proto::PlayerMpPlayCompBin *proto_comp; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::MpPlayBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::MpPlayBin *mp_play_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-90h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<BaseMpPlay> *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<BaseMpPlay> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 mp_play_ptr:50";
  v3[1]._M_ptr = (std::__shared_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerMpPlayComp::fromBin;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::mp_play_bin(player_data_bin);
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::clear(&this->mp_play_map_);
  __for_range = proto::PlayerMpPlayCompBin::mp_play_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MpPlayBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MpPlayBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MpPlayBin const>::operator!=(&__for_begin, &__for_end) )
  {
    mp_play_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MpPlayBin const>::operator*(&__for_begin);
    v6 = proto::MpPlayBin::mp_play_id(mp_play_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMpPlayComp::createMpPlayPtr(v3 + 2, (unsigned int *)this->player_, v6);
    if ( std::operator==<BaseMpPlay>(0LL, v3 + 2) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "fromBin",
        53);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v24,
             (const char (*)[24])"createMpPlayPtr fails, ");
      val = proto::MpPlayBin::mp_play_id(mp_play_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = -1;
      v8 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
      if ( BaseMpPlay::fromBin(v9, mp_play_bin) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "fromBin",
          58);
        v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v24,
                (const char (*)[37])"mp_play_ptr->fromBin fails, play_id:");
        val = proto::MpPlayBin::mp_play_id(mp_play_bin);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v2 = -1;
        v8 = 0;
      }
      else
      {
        v17 = std::move<std::shared_ptr<BaseMpPlay> &>(v3 + 2);
        val = proto::MpPlayBin::mp_play_id(mp_play_bin);
        v13 = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::emplace<unsigned int,std::shared_ptr<BaseMpPlay>>(
                &this->mp_play_map_,
                &val,
                v17,
                v11,
                v12);
        if ( !v13.second )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/mp_play/player_mp_play_comp.cpp",
            "fromBin",
            63);
          v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v24, (const char (*)[12])"mp_play_id:");
          val = proto::MpPlayBin::mp_play_id(mp_play_bin);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" duplicated");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v2 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr(v3 + 2);
    if ( v8 != 1 )
      goto LABEL_18;
    google::protobuf::internal::RepeatedPtrIterator<proto::MpPlayBin const>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_18:
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 71: range 0000000016CBC300-0000000016CBC495
int32_t __cdecl PlayerMpPlayComp::toBin(PlayerMpPlayComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  proto::PlayerMpPlayCompBin *proto_comp; // [rsp+20h] [rbp-60h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > *v10; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *mp_play_id; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *mp_play_ptr; // [rsp+40h] [rbp-40h]
  proto::MpPlayBin *mp_play_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_mp_play_bin(player_data_bin);
  __for_range = &this->mp_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::begin(&this->mp_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end(&this->mp_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator*(&__for_begin);
    mp_play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(v10);
    mp_play_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(v10);
    if ( std::operator!=<BaseMpPlay>(mp_play_ptr, 0LL) )
    {
      mp_play_bin = proto::PlayerMpPlayCompBin::add_mp_play_list(proto_comp);
      v2 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)mp_play_ptr);
      if ( BaseMpPlay::toBin(v2, mp_play_bin) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "toBin",
          80);
        v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v14, (const char (*)[12])"mp_play_id:");
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, mp_play_id);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" toBin fails");
        common::milog::MiLogStream::~MiLogStream(&v14);
        return -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 89: range 0000000016CBC496-0000000016CBC589
int32_t __cdecl PlayerMpPlayComp::onLogin(PlayerMpPlayComp *const this, bool is_new_player)
{
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  BaseMpPlay *v4; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->mp_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::begin(&this->mp_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end(&this->mp_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator*(&__for_begin);
    play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    if ( std::operator!=<BaseMpPlay>(play_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( !BaseMpPlay::isClose(v2) )
      {
        v4 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseMpPlay::onLogin(v4);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 101: range 0000000016CBC58A-0000000016CBC678
int32_t __cdecl PlayerMpPlayComp::onLogout(PlayerMpPlayComp *const this)
{
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  BaseMpPlay *v3; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->mp_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::begin(&this->mp_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end(&this->mp_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator*(&__for_begin);
    play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    if ( std::operator!=<BaseMpPlay>(play_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( !BaseMpPlay::isClose(v1) )
      {
        v3 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseMpPlay::onLogout(v3);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 113: range 0000000016CBC67A-0000000016CBC802
PlayerMpPlayComp *__fastcall PlayerMpPlayComp::findMpPlayPtr(PlayerMpPlayComp *const this, __int64 play_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 play_id:112 64 8 8 iter:114";
  *(_QWORD *)(v3 + 16) = PlayerMpPlayComp::findMpPlayPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::find(
                                                                                           (std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *const)(play_id + 32),
                                                                                           (const std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *const)(play_id + 32))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> >,false,false> *const)(v3 + 64));
    std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, 0LL);
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

// Line 124: range 0000000016CBC804-0000000016CBC908
// local variable allocation has failed, the output may be wrong!
BaseMpPlayPtr __cdecl PlayerMpPlayComp::findMpPlayPtrByType(PlayerMpPlayComp *const this, uint32_t play_type)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  BaseMpPlayPtr result; // rax
  uint32_t play_typea; // [rsp+Ch] [rbp-44h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_ptr; // [rsp+48h] [rbp-8h]

  play_typea = v2;
  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *)(*(_QWORD *)&play_type + 32LL);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *const)(*(_QWORD *)&play_type + 32LL))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *const)(*(_QWORD *)&play_type + 32LL))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator*(&__for_begin);
    play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    if ( std::operator!=<BaseMpPlay>(play_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( play_typea == BaseMpPlay::getPlayType(v3) )
      {
        std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, play_ptr);
        goto LABEL_11;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, 0LL);
LABEL_11:
  result._M_ptr = (std::__shared_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000016CBC90A-0000000016CBD222
__int64 __fastcall PlayerMpPlayComp::openMpPlay(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  int v27; // edx
  common::milog::MiLogStream *v28; // rax
  BaseMpPlay *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::shared_ptr<BaseMpPlay> *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  __int64 result; // rax
  unsigned int PlayId; // [rsp+10h] [rbp-E0h] BYREF
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v41; // [rsp+20h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 play_id:135 64 16 17 type_play_ptr:145 96 16 12 play_ptr:164";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::openMpPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                       &v5->design_config.txt_config_mgr.mp_play_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( !match_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "openMpPlay",
      140);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v41,
           (const char (*)[43])"findMpPlayMatchExcelConfig fails, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v7 = -1;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->play_type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&match_config_ptr->play_type);
  }
  PlayerMpPlayComp::findMpPlayPtrByType((PlayerMpPlayComp *const)(v2 + 64), (uint32_t)this);
  if ( !std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v2 + 64), 0LL) )
    goto LABEL_16;
  v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( BaseMpPlay::isClose(v8) )
  {
    v15 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    val = BaseMpPlay::getPlayId(v15);
    if ( !std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::erase(&this->mp_play_map_, &val) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "openMpPlay",
        159);
      v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v41,
              (const char (*)[19])"erase old play_id:");
      v17 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = BaseMpPlay::getPlayId(v17);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" type:");
      v20 = common::milog::MiLogStream::operator<<<data::MpPlayType,(data::MpPlayType*)0>(
              v19,
              &match_config_ptr->play_type);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v41);
    }
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "openMpPlay",
      161);
    v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v41,
            (const char (*)[19])"erase closed type:");
    v22 = common::milog::MiLogStream::operator<<<data::MpPlayType,(data::MpPlayType*)0>(
            v21,
            &match_config_ptr->play_type);
    v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" play_id:");
    v24 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    PlayId = BaseMpPlay::getPlayId(v24);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &PlayId);
    v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
LABEL_16:
    v27 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMpPlayComp::createMpPlayPtr((std::shared_ptr<BaseMpPlay> *)(v2 + 96), (unsigned int *)this->player_, v27);
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "openMpPlay",
        167);
      v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v41,
              (const char (*)[32])"createMpPlayPtr fails, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v7 = -1;
    }
    else
    {
      v29 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( BaseMpPlay::open(v29) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "openMpPlay",
          172);
        v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v41, (const char (*)[9])"play_id:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v2 + 48));
        v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v31,
                (const char (*)[18])" open fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v7 = -1;
      }
      else
      {
        v33 = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::operator[](
                &this->mp_play_map_,
                (const std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::key_type *)(v2 + 48));
        std::shared_ptr<BaseMpPlay>::operator=(v33, (const std::shared_ptr<BaseMpPlay> *)(v2 + 96));
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "openMpPlay",
          176);
        v34 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v41, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
        v36 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v35,
                (const char (*)[18])" open mp_play_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        v7 = 0;
      }
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 96));
    goto LABEL_28;
  }
  common::milog::MiLogStream::create(
    &v41,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mp_play/player_mp_play_comp.cpp",
    "openMpPlay",
    151);
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v41, (const char (*)[11])"play_type:");
  v10 = common::milog::MiLogStream::operator<<<data::MpPlayType,(data::MpPlayType*)0>(v9, &match_config_ptr->play_type);
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" play_id:");
  v12 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  val = BaseMpPlay::getPlayId(v12);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v13,
          (const char (*)[34])" not closed, cannot open play_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v41);
  v7 = -1;
LABEL_28:
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 64));
LABEL_29:
  result = v7;
  if ( v42 == (char *)v2 )
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

// Line 182: range 0000000016CBD224-0000000016CBD5EF
__int64 __fastcall PlayerMpPlayComp::closeMpPlay(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  BaseMpPlay *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 play_id:181 64 16 12 play_ptr:183";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::closeMpPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "closeMpPlay",
      186);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v16,
           (const char (*)[30])"findMpPlayPtr fails, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( BaseMpPlay::close(v7) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "closeMpPlay",
        191);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v16, (const char (*)[9])"play_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v9,
              (const char (*)[19])" close fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "closeMpPlay",
        194);
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v12,
              (const char (*)[19])" close mp_play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = 0;
    }
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 64));
  result = v6;
  if ( v17 == (char *)v2 )
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

// Line 199: range 0000000016CBD5F0-0000000016CBD70D
bool __cdecl PlayerMpPlayComp::isMpPlayOpen(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r15
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 play_ptr:200";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::isMpPlayOpen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v2 + 32), (__int64)this, play_id);
  v6 = 0;
  if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !BaseMpPlay::isClose(v5) )
      v6 = 1;
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 32));
  result = v6;
  if ( v8 == (char *)v2 )
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

// Line 208: range 0000000016CBD7EC-0000000016CBE135
__int64 __fastcall PlayerMpPlayComp::startInviteFlow(
        PlayerMpPlayComp *const this,
        uint32_t play_id,
        bool is_skip_match)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int started; // r14d
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  BaseMpPlay *v13; // rax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerMpPlayComp::InviteInfo *v22; // rsi
  uint32_t v23; // ecx
  char v24; // al
  uint32_t v25; // ecx
  char v26; // dl
  unsigned int *p_val; // rsi
  __int64 v28; // rdx
  __int64 result; // rax
  PlayerMpPlayComp::startInviteFlow::<lambda(Player&)> v30; // [rsp-20h] [rbp-1D0h]
  common::milog::MiLogStream *v31; // [rsp+8h] [rbp-1A8h]
  World *v32; // [rsp+8h] [rbp-1A8h]
  unsigned int val; // [rsp+24h] [rbp-18Ch] BYREF
  uint32_t cd; // [rsp+28h] [rbp-188h]
  uint32_t owner_uid; // [rsp+2Ch] [rbp-184h]
  std::shared_ptr<Config> v37; // [rsp+30h] [rbp-180h] BYREF
  PlayerMpPlayComp::startInviteFlow::<lambda(Player&)> __f; // [rsp+40h] [rbp-170h]
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-150h] BYREF
  PlayerMpPlayComp::InviteInfo v40; // [rsp+80h] [rbp-130h] BYREF
  char v41[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 play_id:207 64 16 13 world_ptr:211 96 16 12 play_ptr:217 128 32 10 notify:249";
  *(_QWORD *)(v3 + 16) = PlayerMpPlayComp::startInviteFlow;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = play_id;
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp_play/player_mp_play_comp.cpp",
    "startInviteFlow",
    209);
  v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v39,
         (const char (*)[25])"startInviteFlow play_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
  common::milog::MiLogStream::~MiLogStream(&v39);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "startInviteFlow",
      214);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v39, (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v39);
    started = -1;
  }
  else
  {
    PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v3 + 96), (__int64)this, *(_DWORD *)(v3 + 48));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 96))
      || (v9 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
          BaseMpPlay::isClose(v9)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "startInviteFlow",
        220);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v39,
              (const char (*)[23])"findMpPlayPtr play_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" fails or close");
      common::milog::MiLogStream::~MiLogStream(&v39);
      started = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      BaseMpPlay::tryRevertMiddleState(v13);
      v14 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( BaseMpPlay::getState(v14) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "startInviteFlow",
          228);
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v39, (const char (*)[7])"state:");
        v16 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        val = BaseMpPlay::getState(v16);
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)&val);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v17,
          (const char (*)[23])" startInviteFlow fails");
        common::milog::MiLogStream::~MiLogStream(&v39);
        started = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        if ( !PlayerMpComp::isInMpMode(MpComp)
          || (v19 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
              World::getPlayerCount(v19) <= 1) )
        {
          if ( is_skip_match )
            started = PlayerMpPlayComp::jumpMpPlay(this, *(_DWORD *)(v3 + 48));
          else
            started = PlayerMpPlayComp::startMpPlayMatch(this, *(_DWORD *)(v3 + 48));
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v37);
          v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
          cd = ConstValueExcelConfigMgr::getInviteValidTimeSec(&v21->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v37);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          owner_uid = Player::getUid(this->player_);
          proto::MpPlayOwnerInviteNotify::MpPlayOwnerInviteNotify((proto::MpPlayOwnerInviteNotify *const)(v3 + 128));
          proto::MpPlayOwnerInviteNotify::set_mp_play_id(
            (proto::MpPlayOwnerInviteNotify *const)(v3 + 128),
            *(_DWORD *)(v3 + 48));
          proto::MpPlayOwnerInviteNotify::set_cd((proto::MpPlayOwnerInviteNotify *const)(v3 + 128), cd);
          v32 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          __f.__notify = (proto::MpPlayOwnerInviteNotify *)(v3 + 128);
          __f.__play_ptr = (std::shared_ptr<BaseMpPlay> *)(v3 + 96);
          __f.__owner_uid = owner_uid;
          *(_QWORD *)&v30.__owner_uid = *(_QWORD *)&__f.__owner_uid;
          v30.__play_ptr = (std::shared_ptr<BaseMpPlay> *)(v3 + 96);
          v30.__notify = (proto::MpPlayOwnerInviteNotify *)(v3 + 128);
          std::function<ForeachPolicy ()(Player &)>::function<PlayerMpPlayComp::startInviteFlow(unsigned int,bool)::{lambda(Player &)#1},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v39,
            v30);
          World::foreachPlayer(v32, (std::function<ForeachPolicy(Player&)> *)&v39);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v39);
          memset(&v40, 0, sizeof(v40));
          PlayerMpPlayComp::InviteInfo::InviteInfo(&v40);
          v22 = &v40;
          PlayerMpPlayComp::InviteInfo::operator=(&this->invite_info_, &v40);
          PlayerMpPlayComp::InviteInfo::~InviteInfo(&v40);
          v23 = *(_DWORD *)(v3 + 48);
          v24 = *(_BYTE *)(((unsigned __int64)&this->invite_info_.mp_play_id >> 3) + 0x7FFF8000);
          if ( v24 != 0 && v24 <= 3 )
          {
            LOBYTE(v22) = v24 != 0;
            __asan_report_store4(&this->invite_info_.mp_play_id, v22, &this->invite_info_.mp_play_id);
          }
          this->invite_info_.mp_play_id = v23;
          val = owner_uid;
          p_val = &val;
          std::vector<unsigned int>::operator=(
            &this->invite_info_.agree_uid_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val));
          v25 = common::tools::TimeUtils::getNow() + cd + 5;
          v26 = *(_BYTE *)(((unsigned __int64)&this->invite_info_.deadline_time >> 3) + 0x7FFF8000);
          LOBYTE(p_val) = v26 != 0;
          v28 = (v26 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v26);
          if ( (_BYTE)v28 )
            __asan_report_store4(&this->invite_info_.deadline_time, p_val, v28);
          this->invite_info_.deadline_time = v25;
          if ( *(char *)(((unsigned __int64)&this->invite_info_.is_skip_match >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->invite_info_.is_skip_match, p_val, &this->invite_info_.is_skip_match);
          this->invite_info_.is_skip_match = is_skip_match;
          started = 0;
          proto::MpPlayOwnerInviteNotify::~MpPlayOwnerInviteNotify((proto::MpPlayOwnerInviteNotify *const)(v3 + 128));
        }
      }
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 96));
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 64));
  result = started;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 252: range 0000000016CBD70E-0000000016CBD7EB
ForeachPolicy __cdecl PlayerMpPlayComp::startInviteFlow(unsigned int,bool)::{lambda(Player &)#1}::operator()(
        const PlayerMpPlayComp::startInviteFlow::<lambda(Player&)> *const __closure,
        Player *player)
{
  proto::MpPlayOwnerInviteNotify *notify; // rbx
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // r12
  uint32_t Uid; // eax
  bool isRemainRewards; // al

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  notify = __closure->__notify;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__play_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__play_ptr);
  Uid = Player::getUid(player);
  isRemainRewards = BaseMpPlay::isRemainRewards(v3, Uid);
  proto::MpPlayOwnerInviteNotify::set_is_remain_reward(notify, isRemainRewards);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 270: range 0000000016CBE136-0000000016CBEDD0
__int64 __fastcall PlayerMpPlayComp::onGuestReply(
        PlayerMpPlayComp *const this,
        uint32_t play_id,
        uint32_t uid,
        bool is_agree)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  World *v22; // rax
  unsigned int *v23; // r14
  std::vector<unsigned int>::iterator v24; // rax
  std::vector<unsigned int>::size_type v25; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v31; // rax
  std::vector<unsigned int>::size_type v32; // r14
  unsigned __int64 v33; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  bool v35; // al
  World *v36; // rax
  __int64 result; // rax
  int val; // [rsp+2Ch] [rbp-184h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+30h] [rbp-180h] BYREF
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+38h] [rbp-178h]
  char v43[368]; // [rsp+40h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 7 now:276 64 4 11 play_id:269 80 4 7 uid:269 96 8 8 iter:340 128 16 13 world_ptr:282 160 "
                        "16 15 mp_play_ptr:294 192 32 10 notify:306 256 32 10 notify:350";
  *(_QWORD *)(v4 + 16) = PlayerMpPlayComp::onGuestReply;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 64) = play_id;
  *(_DWORD *)(v4 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invite_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->invite_info_.mp_play_id);
  }
  if ( this->invite_info_.mp_play_id != *(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "onGuestReply",
      273);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 256),
           (const char (*)[16])"replay play_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v8,
           (const char (*)[24])" but invite_mp_play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->invite_info_.mp_play_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    v10 = -1;
    goto LABEL_48;
  }
  *(_DWORD *)(v4 + 48) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_info_.deadline_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_info_.deadline_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->invite_info_.deadline_time);
  }
  if ( this->invite_info_.deadline_time < *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "onGuestReply",
      279);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
            (common::milog::MiLogStream *const)(v4 + 256),
            (const char (*)[5])"now:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" deadline_time:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->invite_info_.deadline_time);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    v10 = -1;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 128));
  if ( !std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v4 + 128)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 160));
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                         &v14->design_config.txt_config_mgr.mp_play_config_mgr,
                         *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
    if ( !match_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "onGuestReply",
        291);
      v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v4 + 256),
              (const char (*)[38])"findMpPlayExcelConfig fails, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      v10 = -1;
      goto LABEL_47;
    }
    PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v4 + 160), (__int64)this, *(_DWORD *)(v4 + 64));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v4 + 160))
      || (v16 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160)),
          BaseMpPlay::isClose(v16)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "onGuestReply",
        297);
      v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v4 + 256),
              (const char (*)[26])"play_id is close or null:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      v10 = -1;
LABEL_46:
      std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v4 + 160));
      goto LABEL_47;
    }
    v19 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( BaseMpPlay::getState(v19) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "onGuestReply",
        302);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)(v4 + 256),
              (const char (*)[11])"getState: ");
      v21 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      val = BaseMpPlay::getState(v21);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      v10 = -1;
      goto LABEL_46;
    }
    proto::MpPlayGuestReplyNotify::MpPlayGuestReplyNotify((proto::MpPlayGuestReplyNotify *const)(v4 + 192));
    proto::MpPlayGuestReplyNotify::set_mp_play_id(
      (proto::MpPlayGuestReplyNotify *const)(v4 + 192),
      *(_DWORD *)(v4 + 64));
    proto::MpPlayGuestReplyNotify::set_uid((proto::MpPlayGuestReplyNotify *const)(v4 + 192), *(_DWORD *)(v4 + 80));
    proto::MpPlayGuestReplyNotify::set_is_agree((proto::MpPlayGuestReplyNotify *const)(v4 + 192), is_agree);
    v22 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    World::notifyAllPlayer<proto::MpPlayGuestReplyNotify>(
      v22,
      (const proto::MpPlayGuestReplyNotify *)(v4 + 192),
      *(_DWORD *)(v4 + 80));
    if ( !is_agree )
    {
      M_current = std::vector<unsigned int>::end(&this->invite_info_.disagree_uid_vec)._M_current;
      v31._M_current = std::vector<unsigned int>::begin(&this->invite_info_.disagree_uid_vec)._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                               v31,
                                                                                               (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                               (const unsigned int *)(v4 + 80));
      __rhs._M_current = std::vector<unsigned int>::end(&this->invite_info_.disagree_uid_vec)._M_current;
      if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 96),
             &__rhs) )
      {
        std::vector<unsigned int>::push_back(
          &this->invite_info_.disagree_uid_vec,
          (const std::vector<unsigned int>::value_type *)(v4 + 80));
      }
      goto LABEL_43;
    }
    v23 = std::vector<unsigned int>::end(&this->invite_info_.agree_uid_vec)._M_current;
    v24._M_current = std::vector<unsigned int>::begin(&this->invite_info_.agree_uid_vec)._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                             v24,
                                                                                             (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v23,
                                                                                             (const unsigned int *)(v4 + 80));
    __rhs._M_current = std::vector<unsigned int>::end(&this->invite_info_.agree_uid_vec)._M_current;
    if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 96),
           &__rhs) )
    {
      std::vector<unsigned int>::push_back(
        &this->invite_info_.agree_uid_vec,
        (const std::vector<unsigned int>::value_type *)(v4 + 80));
    }
    v25 = std::vector<unsigned int>::size(&this->invite_info_.agree_uid_vec);
    v26 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( v25 >= World::getPlayerCount(v26) )
    {
      if ( *(char *)(((unsigned __int64)&this->invite_info_.is_skip_match >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->invite_info_.is_skip_match);
      if ( !this->invite_info_.is_skip_match )
      {
        if ( !PlayerMpPlayComp::startMpPlayMatch(this, *(_DWORD *)(v4 + 64)) )
          goto LABEL_43;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "onGuestReply",
          333);
        v28 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)(v4 + 256),
                (const char (*)[26])"startMpPlayMatch play_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v4 + 64));
        v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])" fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_36;
      }
      if ( PlayerMpPlayComp::jumpMpPlay(this, *(_DWORD *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "onGuestReply",
          325);
        v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)(v4 + 256),
                (const char (*)[27])"jump mp play failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_36:
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)&val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      }
    }
LABEL_43:
    v32 = std::vector<unsigned int>::size(&this->invite_info_.disagree_uid_vec);
    v33 = std::vector<unsigned int>::size(&this->invite_info_.agree_uid_vec) + v32;
    v34 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( v33 >= World::getPlayerCount(v34) )
    {
      proto::MpPlayInviteResultNotify::MpPlayInviteResultNotify((proto::MpPlayInviteResultNotify *const)(v4 + 256));
      proto::MpPlayInviteResultNotify::set_mp_play_id(
        (proto::MpPlayInviteResultNotify *const)(v4 + 256),
        *(_DWORD *)(v4 + 64));
      v35 = std::vector<unsigned int>::empty(&this->invite_info_.disagree_uid_vec);
      proto::MpPlayInviteResultNotify::set_all_argee((proto::MpPlayInviteResultNotify *const)(v4 + 256), v35);
      v36 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      World::notifyAllPlayer<proto::MpPlayInviteResultNotify>(
        v36,
        (const proto::MpPlayInviteResultNotify *)(v4 + 256),
        0);
      proto::MpPlayInviteResultNotify::~MpPlayInviteResultNotify((proto::MpPlayInviteResultNotify *const)(v4 + 256));
    }
    v10 = 0;
    proto::MpPlayGuestReplyNotify::~MpPlayGuestReplyNotify((proto::MpPlayGuestReplyNotify *const)(v4 + 192));
    goto LABEL_46;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mp_play/player_mp_play_comp.cpp",
    "onGuestReply",
    285);
  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
    (common::milog::MiLogStream *const)(v4 + 256),
    (const char (*)[18])"getCurWorld fails");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
  v10 = -1;
LABEL_47:
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 128));
LABEL_48:
  result = v10;
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
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
};

// Line 361: range 0000000016CBEDD2-0000000016CBF087
int32_t __cdecl PlayerMpPlayComp::startMpPlayMatch(PlayerMpPlayComp *const this, uint32_t play_id)
{
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // ebx
  PlayerMatchComp *v7; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret; // [rsp+20h] [rbp-80h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *_; // [rsp+28h] [rbp-78h]
  std::vector<unsigned int> p_match_param_vec; // [rsp+30h] [rbp-70h] BYREF
  std::tuple<int,std::vector<unsigned int> > __t; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v14; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MatchComp = Player::getMatchComp(this->player_);
  PlayerMatchComp::checkMatchAvailability(&__t, MatchComp);
  ret = std::get<0ul,int,std::vector<unsigned int>>(&__t);
  _ = std::get<1ul,int,std::vector<unsigned int>>(&__t);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(ret);
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "startMpPlayMatch",
      365);
    v3 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v14,
           (const char (*)[28])"checkMatchAvailability ret:");
    v4 = common::milog::MiLogStream::operator<<<int,(int *)0>(v3, ret);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    v6 = *ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getMatchComp(this->player_);
    memset(&p_match_param_vec, 0, sizeof(p_match_param_vec));
    std::vector<unsigned int>::vector(&p_match_param_vec);
    PlayerMatchComp::startMatch(v7, MATCH_TYPE_MP_PLAY, play_id, &p_match_param_vec);
    std::vector<unsigned int>::~vector(&p_match_param_vec);
    v6 = 0;
  }
  std::tuple<int,std::vector<unsigned int>>::~tuple(&__t);
  return v6;
};

// Line 373: range 0000000016CBF30E-0000000016CBF9BE
__int64 __fastcall PlayerMpPlayComp::transferPlayersToBornPos(
        PlayerMpPlayComp *const this,
        uint32_t play_id,
        bool is_force)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int v9; // r14d
  BaseMpPlay *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  World *v15; // r14
  __int64 result; // rax
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-160h] BYREF
  PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> p___f; // [rsp+30h] [rbp-140h] BYREF
  char v20[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 17 born_scene_id:380 48 4 11 play_id:372 64 12 12 born_pos:381 96 12 12 born_rot:381 128 "
                        "16 15 mp_play_ptr:375 160 16 18 born_scene_ptr:387 192 16 13 world_ptr:393";
  *(_QWORD *)(v3 + 16) = PlayerMpPlayComp::transferPlayersToBornPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp_play/player_mp_play_comp.cpp",
    "transferPlayersToBornPos",
    374);
  v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v18,
         (const char (*)[30])"transferPlayersToBornPos uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v18);
  PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v3 + 128), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 128))
    || (v7 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
        BaseMpPlay::isClose(v7)) )
  {
    v9 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = 0;
    Vector3::Vector3((Vector3 *const)(v3 + 64), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v3 + 96), 0.0, 0.0, 0.0);
    v10 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( BaseMpPlay::findBornScenePosRot(v10, (uint32_t *)(v3 + 32), (Vector3 *)(v3 + 64), (Vector3 *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "transferPlayersToBornPos",
        384);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v18,
              (const char (*)[39])"findBornScenePosRot fails, mp_play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 160), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "transferPlayersToBornPos",
          390);
        v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v18,
                (const char (*)[20])"findScene scene_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v18);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 192));
        if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mp_play/player_mp_play_comp.cpp",
            "transferPlayersToBornPos",
            396);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"getCurWorld fails");
          common::milog::MiLogStream::~MiLogStream(&v18);
          v9 = -1;
        }
        else
        {
          v15 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          p___f.__mp_play_ptr = (std::shared_ptr<BaseMpPlay> *)(v3 + 128);
          std::shared_ptr<Scene>::shared_ptr(&p___f.__born_scene_ptr, (const std::shared_ptr<Scene> *)(v3 + 160));
          p___f.__born_pos = (Vector3 *)(v3 + 64);
          p___f.__born_rot = (Vector3 *)(v3 + 96);
          p___f.__is_force = is_force;
          std::function<ForeachPolicy ()(Player &)>::function<PlayerMpPlayComp::transferPlayersToBornPos(unsigned int,bool)::{lambda(Player &)#1},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v18,
            &p___f);
          World::foreachPlayer(v15, (std::function<ForeachPolicy(Player&)> *)&v18);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v18);
          PlayerMpPlayComp::transferPlayersToBornPos(unsigned int,bool)::{lambda(Player &)#1}::~Player(&p___f);
          v9 = 0;
        }
        std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 192));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
    }
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 128));
  result = v9;
  if ( v20 == (char *)v3 )
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

// Line 400: range 0000000016CBF088-0000000016CBF2EC
ForeachPolicy __cdecl PlayerMpPlayComp::transferPlayersToBornPos(unsigned int,bool)::{lambda(Player &)#1}::operator()(
        const PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rcx
  char v3; // al
  PlayerSceneComp *SceneComp; // r13
  Vector3 *born_rot; // r12
  Vector3 *born_pos; // rbx
  Scene *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-60h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__mp_play_ptr);
  if ( !BaseMpPlay::isPlayerInBattleArea(v2, player, 0x50u) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&__closure->__is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__closure->__is_force);
  if ( !__closure->__is_force )
    v3 = 1;
  else
LABEL_8:
    v3 = 0;
  if ( v3 )
    return 0;
  SceneComp = Player::getSceneComp(player);
  TransferReason::TransferReason(&p_reason, ENTER_REASON_MP_PLAY);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  born_rot = __closure->__born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  born_pos = __closure->__born_pos;
  v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__born_scene_ptr);
  LOBYTE(born_pos) = PlayerSceneComp::jumpToScene(SceneComp, v8, born_pos, born_rot, 0, &p_reason) != 0;
  TransferReason::~TransferReason(&p_reason);
  if ( (_BYTE)born_pos )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "operator()",
      409);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v11,
           (const char (*)[24])"jumpToScene fails, uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  return 0;
};

// Line 400: range 0000000016D36D9E-0000000016D36F45
void __cdecl PlayerMpPlayComp::transferPlayersToBornPos(unsigned int,bool)::{lambda(Player &)#1}::Player(
        PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> *const this,
        PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> *a2)
{
  std::shared_ptr<BaseMpPlay> *mp_play_ptr; // rdx
  ScenePtr *p_born_scene_ptr; // rsi
  Vector3 *born_pos; // rdx
  Vector3 *born_rot; // rdx
  bool is_force; // cl
  char v7; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  mp_play_ptr = a2->__mp_play_ptr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__mp_play_ptr = mp_play_ptr;
  p_born_scene_ptr = &a2->__born_scene_ptr;
  std::shared_ptr<Scene>::shared_ptr(&this->__born_scene_ptr, &a2->__born_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  born_pos = a2->__born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_pos, p_born_scene_ptr);
  this->__born_pos = born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  born_rot = a2->__born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_rot, p_born_scene_ptr);
  this->__born_rot = born_rot;
  if ( *(char *)(((unsigned __int64)&a2->__is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_force);
  is_force = a2->__is_force;
  v7 = *(_BYTE *)(((unsigned __int64)&this->__is_force >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_born_scene_ptr) = v7 != 0;
    __asan_report_store1(&this->__is_force, p_born_scene_ptr, &this->__is_force);
  }
  this->__is_force = is_force;
};

// Line 400: range 0000000016D37010-0000000016D371B7
void __cdecl PlayerMpPlayComp::transferPlayersToBornPos(unsigned int,bool)::{lambda(Player &)#1}::Player(
        PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> *const this,
        const PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> *a2)
{
  std::shared_ptr<BaseMpPlay> *mp_play_ptr; // rdx
  ScenePtr *p_born_scene_ptr; // rsi
  Vector3 *born_pos; // rdx
  Vector3 *born_rot; // rdx
  bool is_force; // cl
  char v7; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  mp_play_ptr = a2->__mp_play_ptr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__mp_play_ptr = mp_play_ptr;
  p_born_scene_ptr = &a2->__born_scene_ptr;
  std::shared_ptr<Scene>::shared_ptr(&this->__born_scene_ptr, &a2->__born_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  born_pos = a2->__born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_pos, p_born_scene_ptr);
  this->__born_pos = born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  born_rot = a2->__born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_rot, p_born_scene_ptr);
  this->__born_rot = born_rot;
  if ( *(char *)(((unsigned __int64)&a2->__is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_force);
  is_force = a2->__is_force;
  v7 = *(_BYTE *)(((unsigned __int64)&this->__is_force >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_born_scene_ptr) = v7 != 0;
    __asan_report_store1(&this->__is_force, p_born_scene_ptr, &this->__is_force);
  }
  this->__is_force = is_force;
};

// Line 400: range 0000000016CBF2EE-0000000016CBF30C
void __cdecl PlayerMpPlayComp::transferPlayersToBornPos(unsigned int,bool)::{lambda(Player &)#1}::~Player(
        PlayerMpPlayComp::transferPlayersToBornPos::<lambda(Player&)> *const this)
{
  std::shared_ptr<Scene>::~shared_ptr(&this->__born_scene_ptr);
};

// Line 418: range 0000000016CBF9C0-0000000016CBFD5F
void __fastcall PlayerMpPlayComp::onMatchCancel(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r12
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  BaseMpPlay *v12; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 play_id:417 64 16 15 mp_play_ptr:424";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::onMatchCancel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "onMatchCancel",
      421);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v14,
           (const char (*)[30])"isInMyPlayerWorld fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v2 + 64))
      || (v7 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          BaseMpPlay::isClose(v7)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "onMatchCancel",
        427);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v14, (const char (*)[12])"mp_play_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])" not active, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v12 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BaseMpPlay::tryRevertMiddleState(v12);
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 64));
  }
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
};

// Line 436: range 0000000016CBFD60-0000000016CBFE96
int32_t __cdecl PlayerMpPlayComp::onMatchSucc(PlayerMpPlayComp *const this, uint32_t play_id)
{
  bool v2; // bl
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<BaseMpPlay> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)&__a, (__int64)this, play_id);
  v2 = std::operator==<BaseMpPlay>(0LL, &__a);
  std::shared_ptr<BaseMpPlay>::~shared_ptr(&__a);
  if ( v2 )
    return -1;
  if ( !PlayerMpPlayComp::jumpMpPlay(this, play_id) )
    return 0;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mp_play/player_mp_play_comp.cpp",
    "onMatchSucc",
    444);
  v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v7,
         (const char (*)[27])"jump mp play failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 452: range 0000000016CBFE98-0000000016CC0649
__int64 __fastcall PlayerMpPlayComp::jumpMpPlay(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int v7; // r14d
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // r14
  PlayerWorld *v20; // rax
  BaseMpPlay *v21; // rax
  __int64 result; // rax
  bool is_from_single_to_mp; // [rsp+1Bh] [rbp-D5h]
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 play_id:451 64 16 15 mp_play_ptr:459 96 16 13 world_ptr:472";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::jumpMpPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "jumpMpPlay",
      455);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v25,
           (const char (*)[30])"isInMyPlayerWorld fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v7 = -1;
  }
  else
  {
    PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v2 + 64))
      || (v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          BaseMpPlay::isClose(v8)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "jumpMpPlay",
        462);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"mp_play_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v11,
              (const char (*)[18])" not active, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v7 = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( BaseMpPlay::getState(v13) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/mp_play/player_mp_play_comp.cpp",
          "jumpMpPlay",
          468);
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v25,
                (const char (*)[32])"ignore MatchSucc, cur state is:");
        v15 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        val = BaseMpPlay::getState(v15);
        common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v7 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 96));
        if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mp_play/player_mp_play_comp.cpp",
            "jumpMpPlay",
            475);
          v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v25,
                  (const char (*)[21])"world is null, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          common::milog::MiLogStream::~MiLogStream(&v25);
          v7 = -1;
        }
        else
        {
          is_from_single_to_mp = 0;
          v17 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v18 = (unsigned __int64)(v17->_vptr_World + 23);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v18)(v17) != 1 )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/mp_play/player_mp_play_comp.cpp",
              "jumpMpPlay",
              482);
            v19 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v25,
                    (const char (*)[28])off_25F2A620);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::~MiLogStream(&v25);
            v20 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            PlayerWorld::setIsInMpMode(v20, 1);
            is_from_single_to_mp = 1;
          }
          if ( (unsigned int)PlayerMpPlayComp::transferPlayersToBornPos(
                               this,
                               *(_DWORD *)(v2 + 48),
                               is_from_single_to_mp) )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/mp_play/player_mp_play_comp.cpp",
              "jumpMpPlay",
              489);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v25,
              (const char (*)[31])"transferPlayersToBornPos fails");
            common::milog::MiLogStream::~MiLogStream(&v25);
            v7 = -1;
          }
          else
          {
            v21 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            BaseMpPlay::jumpMpPlay(v21);
            v7 = 0;
          }
        }
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
      }
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 64));
  }
  result = v7;
  if ( v26 == (char *)v2 )
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

// Line 499: range 0000000016CC064A-0000000016CC08DD
__int64 __fastcall PlayerMpPlayComp::onOutofRegionNotify(
        PlayerMpPlayComp *const this,
        uint32_t play_id,
        Player *player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  unsigned int v11; // r14d
  BaseMpPlay *v12; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 play_id:498 64 16 15 mp_play_ptr:500";
  *(_QWORD *)(v3 + 16) = PlayerMpPlayComp::onOutofRegionNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 64))
    || (v6 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
        BaseMpPlay::isClose(v6)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "onOutofRegionNotify",
      503);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v16, (const char (*)[12])"mp_play_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" not active, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v11 = -1;
  }
  else
  {
    v12 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v11 = BaseMpPlay::forcePlayerBackBornPos(v12, player);
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 64));
  result = v11;
  if ( v17 == (char *)v3 )
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

// Line 510: range 0000000016CC08DE-0000000016CC0CD2
int32_t __cdecl PlayerMpPlayComp::findNearestRebornPosRot(
        PlayerMpPlayComp *const this,
        uint32_t scene_id,
        const Vector3 *cur_pos,
        Vector3 *reborn_pos,
        Vector3 *reborn_rot)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  BaseMpPlay *v9; // rax
  int32_t result; // eax
  float Distance; // [rsp+4h] [rbp-ECh]
  bool is_found; // [rsp+3Fh] [rbp-B1h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_begin; // [rsp+40h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_end; // [rsp+48h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *__for_range; // [rsp+50h] [rbp-A0h]
  std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > *__in; // [rsp+58h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_id; // [rsp+60h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_ptr; // [rsp+68h] [rbp-88h]
  char v24[128]; // [rsp+70h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 7 pos:512 64 12 7 rot:512";
  *(_QWORD *)(v5 + 16) = PlayerMpPlayComp::findNearestRebornPosRot;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -202177536;
  is_found = 0;
  Vector3::Vector3((Vector3 *const)(v5 + 32), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v5 + 64), 0.0, 0.0, 0.0);
  __for_range = &this->mp_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::begin(&this->mp_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end(&this->mp_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator*(&__for_begin);
    play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    if ( std::operator!=<BaseMpPlay>(play_ptr, 0LL) )
    {
      v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( !BaseMpPlay::isClose(v8) )
      {
        v9 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        if ( !(unsigned int)BaseMpPlay::findRebornPosRot(v9, scene_id, v5 + 32, v5 + 64) )
        {
          if ( !is_found
            || (Distance = getDistance(cur_pos, (const Vector3 *)(v5 + 32)), getDistance(cur_pos, reborn_pos) > Distance) )
          {
            if ( ((unsigned __int8)reborn_pos & 7) >= *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)reborn_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_store_n(reborn_pos, 12LL);
            }
            *(_QWORD *)&reborn_pos->x = *(_QWORD *)(v5 + 32);
            reborn_pos->z = *(float *)(v5 + 40);
            if ( ((unsigned __int8)reborn_rot & 7) >= *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)reborn_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_store_n(reborn_rot, 12LL);
            }
            *(_QWORD *)&reborn_rot->x = *(_QWORD *)(v5 + 64);
            reborn_rot->z = *(float *)(v5 + 72);
          }
          is_found = 1;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator++(&__for_begin);
  }
  if ( is_found )
    result = 0;
  else
    result = -1;
  if ( v24 == (char *)v5 )
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

// Line 531: range 0000000016CC0E30-0000000016CC1231
// local variable allocation has failed, the output may be wrong!
std::tuple<int,unsigned int> __cdecl PlayerMpPlayComp::checkMpPlayOpenForAllPlayer(
        PlayerMpPlayComp *const this,
        uint32_t mp_play_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  World *v6; // r14
  PlayerMpPlayComp::checkMpPlayOpenForAllPlayer::<lambda(Player&)> v8; // [rsp-20h] [rbp-120h]
  uint32_t mp_play_ida; // [rsp+Ch] [rbp-F4h]
  std::tuple<int,int> __in; // [rsp+28h] [rbp-D8h] BYREF
  PlayerMpPlayComp::checkMpPlayOpenForAllPlayer::<lambda(Player&)> __f; // [rsp+30h] [rbp-D0h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+70h] [rbp-90h] BYREF

  mp_play_ida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 wrong_uid:546 48 4 7 ret:547 64 16 13 world_ptr:532";
  *(_QWORD *)(v3 + 16) = PlayerMpPlayComp::checkMpPlayOpenForAllPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&mp_play_id + 24LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(*(_QWORD *)&mp_play_id + 24LL));
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "checkMpPlayOpenForAllPlayer",
      535);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v12, (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 32) = -1;
    std::make_tuple<int,int>((int *)&__in, (int *)(v3 + 32), (int *)(v3 + 48), (int *)(v3 + 32));
    std::tuple<int,unsigned int>::tuple<int,int,true>((std::tuple<int,unsigned int> *const)this, &__in);
  }
  else if ( !PlayerMpPlayComp::isMpPlayOpen(*(PlayerMpPlayComp *const *)&mp_play_id, mp_play_ida) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&mp_play_id + 24LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(*(const Player *const *)(*(_QWORD *)&mp_play_id + 24LL));
    *(_DWORD *)(v3 + 32) = 1219;
    std::make_tuple<proto::Retcode,unsigned int>(
      (proto::Retcode *)&__in,
      (unsigned int *)(v3 + 32),
      (proto::Retcode *)(v3 + 48),
      (unsigned int *)(v3 + 32));
    std::tuple<int,unsigned int>::tuple<proto::Retcode,unsigned int,true>(
      (std::tuple<int,unsigned int> *const)this,
      (std::tuple<proto::Retcode,unsigned int> *)&__in);
  }
  else
  {
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    v6 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    __f.__ret = (int32_t *)(v3 + 48);
    __f.__wrong_uid = (uint32_t *)(v3 + 32);
    __f.__mp_play_id = mp_play_ida;
    *(_QWORD *)&v8.__mp_play_id = *(_QWORD *)&__f.__mp_play_id;
    v8.__wrong_uid = (uint32_t *)(v3 + 32);
    v8.__ret = (int32_t *)(v3 + 48);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMpPlayComp::checkMpPlayOpenForAllPlayer(unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v12,
      v8);
    World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v12);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v12);
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
      (unsigned int *)(v3 + 48),
      (int *)(v3 + 32),
      (unsigned int *)(v3 + 48));
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 64));
  if ( v13 == (char *)v3 )
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
  return (std::tuple<int,unsigned int>)this;
};

// Line 548: range 0000000016CC0CD4-0000000016CC0E2F
ForeachPolicy __cdecl PlayerMpPlayComp::checkMpPlayOpenForAllPlayer(unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerMpPlayComp::checkMpPlayOpenForAllPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerMpPlayComp *MpPlayComp; // rcx
  __int64 mp_play_id; // rsi
  uint32_t *wrong_uid; // rbx
  uint32_t Uid; // ecx
  char v6; // dl
  __int64 v7; // rdx
  int32_t *ret; // rdx
  char v9; // cl

  MpPlayComp = Player::getMpPlayComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__mp_play_id);
  }
  mp_play_id = __closure->__mp_play_id;
  if ( PlayerMpPlayComp::isMpPlayOpen(MpPlayComp, mp_play_id) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__wrong_uid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  wrong_uid = __closure->__wrong_uid;
  Uid = Player::getUid(player);
  v6 = *(_BYTE *)(((unsigned __int64)wrong_uid >> 3) + 0x7FFF8000);
  LOBYTE(mp_play_id) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)(((unsigned __int8)wrong_uid & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(wrong_uid, mp_play_id, v7);
  *wrong_uid = Uid;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ret = __closure->__ret;
  v9 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v9 )
  {
    LOBYTE(mp_play_id) = v9 != 0;
    __asan_report_store4(__closure->__ret, mp_play_id, ret);
  }
  *ret = 1219;
  return 1;
};

// Line 563: range 0000000016CC1232-0000000016CC1B3D
PlayerMpPlayComp *__fastcall PlayerMpPlayComp::checkInviteFlowCond(
        PlayerMpPlayComp *const this,
        __int64 play_id,
        int is_skip_match,
        char a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isMpPlayClosed; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // ebx
  PlayerMatchComp *v18; // rax
  int v19; // ebx
  int __args_1; // [rsp+20h] [rbp-110h] BYREF
  proto::Retcode __args_0; // [rsp+24h] [rbp-10Ch] BYREF
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret_0; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *param_vec_0; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *param_vec; // [rsp+40h] [rbp-F0h]
  proto::Retcode v29; // [rsp+48h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-E0h] BYREF
  std::tuple<int,std::vector<unsigned int> > __t; // [rsp+60h] [rbp-D0h] BYREF
  std::tuple<int,std::vector<unsigned int> > v32; // [rsp+80h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+A0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 7 ret:564 48 4 13 wrong_uid:565 64 4 11 play_id:562";
  *(_QWORD *)(v4 + 16) = PlayerMpPlayComp::checkInviteFlowCond;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = is_skip_match;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  isMpPlayClosed = FeatureSwitchMgr::isMpPlayClosed(&v7->feature_switch_mgr, *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( isMpPlayClosed )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "checkInviteFlowCond",
      569);
    v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           (common::milog::MiLogStream *const)&v32,
           (const char (*)[25])"switch closed, play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v32);
    __args_0 = RET_SUCC;
    __args_1 = 142;
    std::make_tuple<proto::Retcode,int>(&v29, &__args_1, &__args_0, &__args_1);
    std::tuple<int,unsigned int>::tuple<proto::Retcode,int,true>(
      (std::tuple<int,unsigned int> *const)this,
      (std::tuple<proto::Retcode,int> *)&v29);
    goto LABEL_39;
  }
  PlayerMpPlayComp::checkMpPlayOpenForAllPlayer((PlayerMpPlayComp *const)&v29, play_id);
  std::tie<int,unsigned int>((int *)&v30, (unsigned int *)(v4 + 32), (int *)(v4 + 48), (unsigned int *)(v4 + 32));
  std::tuple<int &,unsigned int &>::operator=<int,unsigned int>(
    (std::tuple<int&,unsigned int&> *const)&v30,
    (std::tuple<int,unsigned int> *)&v29);
  if ( *(_DWORD *)(v4 + 32) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v32,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "checkInviteFlowCond",
      577);
    v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)&v32,
            (const char (*)[42])"checkMpPlayOpenForAllPlayer failed, ret: ");
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" wrong_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v32);
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
      (unsigned int *)(v4 + 32),
      (int *)(v4 + 48),
      (unsigned int *)(v4 + 32));
    goto LABEL_39;
  }
  if ( a4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(play_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(*(Player *const *)(play_id + 24));
    PlayerMatchComp::checkSkipMatchAvailability(&__t, MatchComp, *(_DWORD *)(v4 + 64));
    ret = std::get<0ul,int,std::vector<unsigned int>>(&__t);
    param_vec = std::get<1ul,int,std::vector<unsigned int>>(&__t);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "checkInviteFlowCond",
        587);
      v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)&v32,
              (const char (*)[26])"skip match invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)(play_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __args_0 = Player::getUid(*(const Player *const *)(play_id + 24));
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)&__args_0);
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" ,play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v32);
      if ( *(_BYTE *)(((unsigned __int64)(play_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __args_0 = Player::getUid(*(const Player *const *)(play_id + 24));
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
      std::make_tuple<int &,unsigned int>((int *)this, (unsigned int *)ret, (int *)&__args_0, (unsigned int *)ret);
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
    std::tuple<int,std::vector<unsigned int>>::~tuple(&__t);
    if ( v17 == 1 )
    {
LABEL_38:
      __args_0 = RET_SUCC;
      __args_1 = 0;
      std::make_tuple<int,int>((int *)&v29, &__args_1, (int *)&__args_0, &__args_1);
      std::tuple<int,unsigned int>::tuple<int,int,true>(
        (std::tuple<int,unsigned int> *const)this,
        (std::tuple<int,int> *)&v29);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)(play_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = Player::getMatchComp(*(Player *const *)(play_id + 24));
    PlayerMatchComp::checkMatchAvailability(&v32, v18);
    ret_0 = std::get<0ul,int,std::vector<unsigned int>>(&v32);
    param_vec_0 = std::get<1ul,int,std::vector<unsigned int>>(&v32);
    if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret_0);
    }
    if ( *ret_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(play_id + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __args_0 = Player::getUid(*(const Player *const *)(play_id + 24));
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_PlayerCompBase + 7) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
      std::make_tuple<int &,unsigned int>((int *)this, (unsigned int *)ret_0, (int *)&__args_0, (unsigned int *)ret_0);
      v19 = 0;
    }
    else
    {
      v19 = 1;
    }
    std::tuple<int,std::vector<unsigned int>>::~tuple(&v32);
    if ( v19 == 1 )
      goto LABEL_38;
  }
LABEL_39:
  if ( v33 == (char *)v4 )
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

// Line 605: range 0000000016CC1B3E-0000000016CC1C37
bool __cdecl PlayerMpPlayComp::isAnyMpPlayBattleStarted(PlayerMpPlayComp *const this)
{
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseMpPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->mp_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::begin(&this->mp_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::end(&this->mp_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator*(&__for_begin);
    play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseMpPlay>>(__in);
    if ( std::operator!=<BaseMpPlay>(play_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( !BaseMpPlay::isClose(v1) )
      {
        v2 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        if ( BaseMpPlay::isBattleStarted(v2) )
          return 1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseMpPlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 618: range 0000000016CC1C38-0000000016CC1E73
__int64 __fastcall PlayerMpPlayComp::openMpPlayByGm(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 play_id:617";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::openMpPlayByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = play_id;
  if ( (unsigned int)PlayerMpPlayComp::openMpPlay(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "openMpPlayByGm",
      621);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v10,
           (const char (*)[23])"openMpPlay fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "openMpPlayByGm",
      624);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"openMpPlayByGm ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" succ.");
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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

// Line 629: range 0000000016CC1E74-0000000016CC20AF
__int64 __fastcall PlayerMpPlayComp::closeMpPlayByGm(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 play_id:628";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::closeMpPlayByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = play_id;
  if ( (unsigned int)PlayerMpPlayComp::closeMpPlay(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "closeMpPlayByGm",
      632);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v10,
           (const char (*)[24])"closeMpPlay fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "closeMpPlayByGm",
      635);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"closeMpPlayByGm ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" succ.");
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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

// Line 640: range 0000000016CC20B0-0000000016CC21B0
int32_t __cdecl PlayerMpPlayComp::clearByGm(PlayerMpPlayComp *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-70h] BYREF
  PlayerMpPlayComp::InviteInfo v3; // [rsp+30h] [rbp-50h] BYREF

  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::clear(&this->mp_play_map_);
  memset(&v3, 0, sizeof(v3));
  PlayerMpPlayComp::InviteInfo::InviteInfo(&v3);
  PlayerMpPlayComp::InviteInfo::operator=(&this->invite_info_, &v3);
  PlayerMpPlayComp::InviteInfo::~InviteInfo(&v3);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mp_play/player_mp_play_comp.cpp",
    "clearByGm",
    643);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v2, (const char (*)[11])"clearByGm!");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return 0;
};

// Line 649: range 0000000016CC21B2-0000000016CC24FE
__int64 __fastcall PlayerMpPlayComp::forceStartBattleByGm(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // r13
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 play_id:648";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::forceStartBattleByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = play_id;
  if ( !PlayerMpPlayComp::isMpPlayOpen(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "forceStartBattleByGm",
      652);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v11,
           (const char (*)[22])"isMpPlayOpen play_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "forceStartBattleByGm",
      656);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v11,
           (const char (*)[24])"onHostMatchSucc!!! uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    if ( PlayerMpPlayComp::onMatchSucc(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mp_play/player_mp_play_comp.cpp",
        "forceStartBattleByGm",
        659);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v11,
             (const char (*)[27])"onHostMatchSucc fails uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
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
  return result;
};

// Line 666: range 0000000016CC2500-0000000016CC268D
__int64 __fastcall PlayerMpPlayComp::forceMatchByGm(PlayerMpPlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 play_id:665";
  *(_QWORD *)(v2 + 16) = PlayerMpPlayComp::forceMatchByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = play_id;
  if ( !PlayerMpPlayComp::isMpPlayOpen(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/player_mp_play_comp.cpp",
      "forceMatchByGm",
      669);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v8,
           (const char (*)[22])"isMpPlayOpen play_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = PlayerMpPlayComp::startInviteFlow(this, *(_DWORD *)(v2 + 32), 0);
  }
  if ( v9 == (char *)v2 )
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
