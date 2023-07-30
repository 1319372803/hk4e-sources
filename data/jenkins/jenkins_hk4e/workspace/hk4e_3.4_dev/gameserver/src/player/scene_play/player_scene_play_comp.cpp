// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/scene_play/player_scene_play_comp.cpp

// Line 27: range 0000000016D00D3C-0000000016D00E21
void __cdecl InviteInfo::clear(InviteInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->play_id = 0;
  std::vector<unsigned int>::clear(&this->agree_uid_vec);
  std::vector<unsigned int>::clear(&this->disagree_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deadline_time, v1, (_BYTE)this + 56);
  }
  this->deadline_time = 0;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_skip_match >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_skip_match >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_skip_match, v2, v3);
  this->is_skip_match = 0;
};

// Line 36: range 0000000016D00E22-0000000016D00FAA
void __fastcall InviteInfo::addAgreeUid(InviteInfo *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:35 64 8 7 iter:37";
  *(_QWORD *)(v2 + 16) = InviteInfo::addAgreeUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->agree_uid_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->agree_uid_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->agree_uid_vec)._M_current;
  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
         &__rhs) )
  {
    std::vector<unsigned int>::push_back(&this->agree_uid_vec, (const std::vector<unsigned int>::value_type *)(v2 + 48));
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

// Line 45: range 0000000016D00FAC-0000000016D01134
void __fastcall InviteInfo::addDisagreeUid(InviteInfo *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:44 64 8 7 iter:46";
  *(_QWORD *)(v2 + 16) = InviteInfo::addDisagreeUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->disagree_uid_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->disagree_uid_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->disagree_uid_vec)._M_current;
  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64),
         &__rhs) )
  {
    std::vector<unsigned int>::push_back(
      &this->disagree_uid_vec,
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

// Line 54: range 0000000016D01136-0000000016D0151A
int32_t __cdecl PlayerScenePlayComp::fromBin(
        PlayerScenePlayComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  BaseScenePlay *v6; // rax
  common::milog::MiLogStream *v7; // r14
  int v8; // r15d
  std::shared_ptr<BaseScenePlay> *v9; // rax
  unsigned int *v10; // rcx
  std::shared_ptr<BaseScenePlay> *v11; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> >,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  google::protobuf::RepeatedPtrField<proto::ScenePlayBin>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ScenePlayBin>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const proto::PlayerScenePlayCompBin *proto_comp; // [rsp+38h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::ScenePlayBin> *__for_range; // [rsp+40h] [rbp-C0h]
  const proto::ScenePlayBin *play_bin; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 play_id:60 64 16 11 play_ptr:61";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  proto_comp = proto::PlayerDataBin::scene_play_bin(player_data_bin);
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::clear(&this->play_map_);
  __for_range = proto::PlayerScenePlayCompBin::play_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ScenePlayBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ScenePlayBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ScenePlayBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    play_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ScenePlayBin const>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 48) = proto::ScenePlayBin::play_id(play_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    common::tools::perf::make_shared<BaseScenePlay,Player &,unsigned int &>(
      (Player *)(v3 + 64),
      (unsigned int *)this->player_,
      (Player *)(v3 + 48),
      (unsigned int *)this->player_);
    v6 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( BaseScenePlay::fromBin(v6, play_bin) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "fromBin",
        64);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v22,
             (const char (*)[34])"play_ptr fromBin failed, play_id:");
      val = proto::ScenePlayBin::play_id(play_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
      v8 = 0;
    }
    else
    {
      v9 = std::move<std::shared_ptr<BaseScenePlay> &>((std::shared_ptr<BaseScenePlay> *)(v3 + 64));
      v12 = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::emplace<unsigned int &,std::shared_ptr<BaseScenePlay>>(
              &this->play_map_,
              (unsigned int *)(v3 + 48),
              v9,
              v10,
              v11);
      if ( !v12.second )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/scene_play/player_scene_play_comp.cpp",
          "fromBin",
          70);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v22, (const char (*)[9])"play_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" duplicated");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v2 = -1;
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
    }
    std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 64));
    if ( v8 != 1 )
      goto LABEL_16;
    google::protobuf::internal::RepeatedPtrIterator<proto::ScenePlayBin const>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_16:
  result = v2;
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

// Line 79: range 0000000016D0151C-0000000016D016B1
int32_t __cdecl PlayerScenePlayComp::toBin(PlayerScenePlayComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  proto::PlayerScenePlayCompBin *proto_comp; // [rsp+20h] [rbp-60h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *v10; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_id; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+40h] [rbp-40h]
  proto::ScenePlayBin *play_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_scene_play_bin(player_data_bin);
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    play_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(v10);
    play_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(v10);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      play_bin = proto::PlayerScenePlayCompBin::add_play_list(proto_comp);
      v2 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::toBin(v2, play_bin) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/player_scene_play_comp.cpp",
          "toBin",
          88);
        v3 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v14, (const char (*)[9])"play_id:");
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, play_id);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v4, (const char (*)[14])" toBin failed");
        common::milog::MiLogStream::~MiLogStream(&v14);
        return -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 97: range 0000000016D016B2-0000000016D01773
int32_t __cdecl PlayerScenePlayComp::onLogin(PlayerScenePlayComp *const this, bool is_new_player)
{
  BaseScenePlay *v2; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v2 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      BaseScenePlay::onLogin(v2);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 110: range 0000000016D01774-0000000016D01830
int32_t __cdecl PlayerScenePlayComp::onLogout(PlayerScenePlayComp *const this)
{
  BaseScenePlay *v1; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v1 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      BaseScenePlay::onLogout(v1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 123: range 0000000016D01832-0000000016D01AEE
int32_t __cdecl PlayerScenePlayComp::notifyAllData(PlayerScenePlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<proto::ScenePlayInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  proto::ScenePlayInfo *v9; // rax
  Player *player; // r14
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-A0h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-88h]
  std::shared_ptr<proto::ScenePlayInfoListNotify> __r; // [rsp+40h] [rbp-80h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:125";
  *(_QWORD *)(v1 + 16) = PlayerScenePlayComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::ScenePlayInfoListNotify>();
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v4 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::getPhase(v4) == Activated
        || (v5 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr),
            BaseScenePlay::getPhase(v5) == Open) )
      {
        v7 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        v8 = std::__shared_ptr_access<proto::ScenePlayInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ScenePlayInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v9 = proto::ScenePlayInfoListNotify::add_play_info_list(v8);
        BaseScenePlay::fillScenePlayInfo(v7, v9);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ScenePlayInfoListNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::ScenePlayInfoListNotify>::~shared_ptr((std::shared_ptr<proto::ScenePlayInfoListNotify> *const)(v1 + 32));
  result = 0;
  if ( v19 == (char *)v1 )
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

// Line 141: range 0000000016D01AF0-0000000016D01D4B
bool __cdecl PlayerScenePlayComp::checkHasBattleWithDirectType(const PlayerScenePlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int v9; // r14d
  bool result; // al
  bool v11; // [rsp+7h] [rbp-A9h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *v15; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 battle_ptr:147";
  *(_QWORD *)(v1 + 16) = PlayerScenePlayComp::checkHasBattleWithDirectType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(v15);
    play_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(v15);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v4 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::getPhase(v4) == Open )
      {
        std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v1 + 32));
        if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v1 + 32))
          && (v6 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
              BaseScenePlayBattle::getState(v6))
          && (v7 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
              BaseScenePlayBattle::getType(v7) == Direct) )
        {
          v11 = 1;
          v9 = 0;
        }
        else
        {
          v9 = 1;
        }
        std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v1 + 32));
        if ( v9 != 1 )
          goto LABEL_22;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  v11 = 0;
LABEL_22:
  result = v11;
  if ( v18 == (char *)v1 )
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

// Line 161: range 0000000016D01D4C-0000000016D01ED4
PlayerScenePlayComp *__fastcall PlayerScenePlayComp::findScenePlayPtr(
        PlayerScenePlayComp *const this,
        __int64 play_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 play_id:160 64 8 8 iter:162";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::findScenePlayPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::find(
                                                                                              (std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(play_id + 32),
                                                                                              (const std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(play_id + 32))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> >,false,false> *const)(v3 + 64));
    std::shared_ptr<BaseScenePlay>::shared_ptr((std::shared_ptr<BaseScenePlay> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<BaseScenePlay>::shared_ptr((std::shared_ptr<BaseScenePlay> *const)this, 0LL);
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

// Line 172: range 0000000016D01ED6-0000000016D01FDA
// local variable allocation has failed, the output may be wrong!
BaseScenePlayPtr __cdecl PlayerScenePlayComp::findScenePlayPtrByType(
        PlayerScenePlayComp *const this,
        uint32_t play_type)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  BaseScenePlayPtr result; // rax
  uint32_t play_typea; // [rsp+Ch] [rbp-44h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+48h] [rbp-8h]

  play_typea = v2;
  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *)(*(_QWORD *)&play_type + 32LL);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(*(_QWORD *)&play_type + 32LL))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(*(_QWORD *)&play_type + 32LL))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v3 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( play_typea == BaseScenePlay::getPlayType(v3) )
      {
        std::shared_ptr<BaseScenePlay>::shared_ptr((std::shared_ptr<BaseScenePlay> *const)this, play_ptr);
        goto LABEL_11;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<BaseScenePlay>::shared_ptr((std::shared_ptr<BaseScenePlay> *const)this, 0LL);
LABEL_11:
  result._M_ptr = (std::__shared_ptr<BaseScenePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 185: range 0000000016D01FDC-0000000016D022E5
PlayerScenePlayComp *__fastcall PlayerScenePlayComp::createAndInitScenePlay(
        PlayerScenePlayComp *const this,
        __int64 play_id,
        const ScenePlaySourceInfo *source_info,
        const ScenePlaySourceInfo *a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  BaseScenePlay *v10; // rax
  std::shared_ptr<BaseScenePlay> *v11; // rax
  int v14; // [rsp+Ch] [rbp-C4h]
  std::shared_ptr<BaseScenePlay> __r; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v14 = (int)source_info;
  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 11 play_id:184 64 16 12 play_ptr:186";
  *(_QWORD *)(v4 + 16) = PlayerScenePlayComp::createAndInitScenePlay;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = v14;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v4 + 64), play_id, *(_DWORD *)(v4 + 48));
  if ( std::operator!=<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v4 + 64))
    && (v7 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
        BaseScenePlay::getPhase(v7) != Closed) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "createAndInitScenePlay",
      189);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v16,
           (const char (*)[49])"[SCENE_PLAY] scene play already exist, play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    std::shared_ptr<BaseScenePlay>::shared_ptr((std::shared_ptr<BaseScenePlay> *const)this, 0LL);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)(play_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(play_id + 24);
    common::tools::perf::make_shared<BaseScenePlay,Player &,unsigned int &>(
      (Player *)&__r,
      *(unsigned int **)(play_id + 24),
      (Player *)(v4 + 48),
      *(unsigned int **)(play_id + 24));
    std::shared_ptr<BaseScenePlay>::operator=((std::shared_ptr<BaseScenePlay> *const)(v4 + 64), &__r);
    std::shared_ptr<BaseScenePlay>::~shared_ptr(&__r);
    v10 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( BaseScenePlay::init(v10, a4) )
    {
      std::shared_ptr<BaseScenePlay>::shared_ptr((std::shared_ptr<BaseScenePlay> *const)this, 0LL);
    }
    else
    {
      v11 = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::operator[](
              (std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(play_id + 32),
              (const std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::key_type *)(v4 + 48));
      std::shared_ptr<BaseScenePlay>::operator=(v11, (const std::shared_ptr<BaseScenePlay> *)(v4 + 64));
      std::shared_ptr<BaseScenePlay>::shared_ptr(
        (std::shared_ptr<BaseScenePlay> *const)this,
        (std::shared_ptr<BaseScenePlay> *)(v4 + 64));
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v4 + 64));
  if ( v17 == (char *)v4 )
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

// Line 204: range 0000000016D022E6-0000000016D025C6
__int64 __fastcall PlayerScenePlayComp::activateScenePlay(PlayerScenePlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  BaseScenePlay *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 play_id:203 64 16 12 play_ptr:205";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::activateScenePlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "activateScenePlay",
      208);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v11,
           (const char (*)[47])"[SCENE_PLAY] findScenePlayPtr failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( BaseScenePlay::activate(v7) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "activateScenePlay",
        214);
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v11,
             (const char (*)[50])"[SCENE_PLAY] activate scene play failed, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerScenePlayComp *const))v9)(this);
      v6 = 0;
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 64));
  result = v6;
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
  return result;
};

// Line 224: range 0000000016D025C8-0000000016D028A8
__int64 __fastcall PlayerScenePlayComp::openScenePlay(PlayerScenePlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  BaseScenePlay *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 play_id:223 64 16 12 play_ptr:225";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::openScenePlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "openScenePlay",
      228);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v11,
           (const char (*)[47])"[SCENE_PLAY] findScenePlayPtr failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( BaseScenePlay::open(v7) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "openScenePlay",
        234);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v11,
             (const char (*)[46])"[SCENE_PLAY] open scene play failed, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerScenePlayComp *const))v9)(this);
      v6 = 0;
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 64));
  result = v6;
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
  return result;
};

// Line 244: range 0000000016D028AA-0000000016D02B8A
__int64 __fastcall PlayerScenePlayComp::closeScenePlay(PlayerScenePlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  BaseScenePlay *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 play_id:243 64 16 12 play_ptr:245";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::closeScenePlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "closeScenePlay",
      248);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v11,
           (const char (*)[47])"[SCENE_PLAY] findScenePlayPtr failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( BaseScenePlay::close(v7) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "closeScenePlay",
        254);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v11,
             (const char (*)[47])"[SCENE_PLAY] close scene play failed, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerScenePlayComp *const))v9)(this);
      v6 = 0;
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 64));
  result = v6;
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
  return result;
};

// Line 264: range 0000000016D02B8C-0000000016D02E1C
__int64 __fastcall PlayerScenePlayComp::enableScenePlayBattle(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        ScenePlayBattleType type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  BaseScenePlay *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 play_id:263 64 16 12 play_ptr:265";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::enableScenePlayBattle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "enableScenePlayBattle",
      268);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v12,
           (const char (*)[47])"[SCENE_PLAY] findScenePlayPtr failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( BaseScenePlay::enableBattle(v8, type) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "enableScenePlayBattle",
        274);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v12,
             (const char (*)[43])"[SCENE_PLAY] enableBattle failed, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      v7 = -1;
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 64));
  result = v7;
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
  return result;
};

// Line 282: range 0000000016D02E1E-0000000016D030B1
__int64 __fastcall PlayerScenePlayComp::stopScenePlayBattle(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        bool is_win)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  BaseScenePlay *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 play_id:281 64 16 12 play_ptr:283";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::stopScenePlayBattle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "stopScenePlayBattle",
      286);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v12,
           (const char (*)[47])"[SCENE_PLAY] findScenePlayPtr failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( BaseScenePlay::stopBattle(v8, is_win) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "stopScenePlayBattle",
        292);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v12,
             (const char (*)[41])"[SCENE_PLAY] stopBattle failed, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      v7 = -1;
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 64));
  result = v7;
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
  return result;
};

// Line 300: range 0000000016D030B2-0000000016D0330F
_BOOL8 __fastcall PlayerScenePlayComp::isScenePlayBattleEnabled(PlayerScenePlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  _BOOL4 v6; // r15d
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // al
  _BOOL8 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 play_id:299 64 16 12 play_ptr:301 96 16 14 battle_ptr:308";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::isScenePlayBattleEnabled;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "isScenePlayBattleEnabled",
      304);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v10,
           (const char (*)[47])"[SCENE_PLAY] findScenePlayPtr failed, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = 0;
  }
  else
  {
    std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v2 + 96));
    v8 = 0;
    if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 96)) )
    {
      v7 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( BaseScenePlayBattle::getState(v7) )
        v8 = 1;
    }
    v6 = v8;
    std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 96));
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 64));
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 318: range 0000000016D03310-0000000016D03528
bool __cdecl PlayerScenePlayComp::isAnyScenePlayBattleEnabled(PlayerScenePlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int v6; // r14d
  bool result; // al
  bool v8; // [rsp+7h] [rbp-A9h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 battle_ptr:323";
  *(_QWORD *)(v1 + 16) = PlayerScenePlayComp::isAnyScenePlayBattleEnabled;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v1 + 32));
      if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v1 + 32))
        && (v4 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
            BaseScenePlayBattle::getState(v4)) )
      {
        v8 = 1;
        v6 = 0;
      }
      else
      {
        v6 = 1;
      }
      std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v1 + 32));
      if ( v6 != 1 )
        goto LABEL_17;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_17:
  result = v8;
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

// Line 335: range 0000000016D0352A-0000000016D03645
bool __cdecl PlayerScenePlayComp::isScenePlayOpen(PlayerScenePlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 play_ptr:336";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::isScenePlayOpen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v2 + 32), (__int64)this, play_id);
  v6 = 0;
  if ( std::operator!=<BaseScenePlay>((const std::shared_ptr<BaseScenePlay> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( BaseScenePlay::getPhase(v5) == Open )
      v6 = 1;
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 32));
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

// Line 341: range 0000000016D03646-0000000016D041EF
std::tuple<int,unsigned int,std::vector<unsigned int> > *__fastcall PlayerScenePlayComp::checkInviteFlowCond(
        std::tuple<int,unsigned int,std::vector<unsigned int> > *retstr,
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        bool is_skip_match)
{
  unsigned __int64 p_invite_info; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isMpPlayClosed; // r14
  common::milog::MiLogStream *v9; // rax
  proto::Retcode *v10; // r8
  int *v11; // r9
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int *v15; // r8
  unsigned int *v16; // r9
  common::milog::MiLogStream *v17; // rax
  int *v18; // r8
  unsigned int *v19; // r9
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int *v24; // r8
  int *v25; // r9
  int v26; // ebx
  int *v27; // r8
  int *v28; // r9
  PlayerMatchComp *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int *v33; // r8
  unsigned int *v34; // r9
  int v35; // ebx
  std::vector<unsigned int> *v37; // [rsp+0h] [rbp-130h]
  proto::Retcode v40; // [rsp+20h] [rbp-110h] BYREF
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret_0; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *param_vec_0; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *param_vec; // [rsp+40h] [rbp-F0h]
  PlayerScenePlayComp v46; // [rsp+48h] [rbp-E8h] BYREF

  p_invite_info = (unsigned __int64)&v46.invite_info_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      p_invite_info = v5;
  }
  *(_QWORD *)p_invite_info = 1102416563LL;
  *(_QWORD *)(p_invite_info + 8) = "3 32 4 7 ret:342 48 4 13 wrong_uid:343 64 4 11 play_id:340";
  *(_QWORD *)(p_invite_info + 16) = PlayerScenePlayComp::checkInviteFlowCond;
  v6 = (_DWORD *)(p_invite_info >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(p_invite_info + 64) = play_id;
  *(_DWORD *)(p_invite_info + 32) = 0;
  *(_DWORD *)(p_invite_info + 48) = 0;
  if ( !(_BYTE)`guard variable for'PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec
    && __cxa_guard_acquire(&`guard variable for'PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec) )
  {
    std::vector<unsigned int>::vector(&PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec);
    __cxa_guard_release(&`guard variable for'PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec,
      &_dso_handle);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v46.std::enable_shared_from_this<PlayerCompBase>);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46.std::enable_shared_from_this<PlayerCompBase>);
  isMpPlayClosed = FeatureSwitchMgr::isMpPlayClosed(&v7->feature_switch_mgr, *(_DWORD *)(p_invite_info + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46.std::enable_shared_from_this<PlayerCompBase>);
  if ( isMpPlayClosed )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v46.play_map_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "checkInviteFlowCond",
      347);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count,
           (const char (*)[38])"[SCENE_PLAY] switch closed, play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v9,
      (const unsigned int *)(p_invite_info + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count);
    val = 0;
    v40 = RET_FEATURE_CLOSED;
    std::make_tuple<proto::Retcode,int,std::vector<unsigned int> &>(
      (std::tuple<proto::Retcode,int,std::vector<unsigned int> > *)&v46.play_map_._M_h._M_element_count,
      &v40,
      (int *)&val,
      &PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec,
      v10,
      v11,
      v37);
    std::tuple<int,unsigned int,std::vector<unsigned int>>::tuple<proto::Retcode,int,std::vector<unsigned int>,void,true>(
      retstr,
      (std::tuple<proto::Retcode,int,std::vector<unsigned int> > *)&v46.play_map_._M_h._M_element_count);
    std::tuple<proto::Retcode,int,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,int,std::vector<unsigned int> > *const)&v46.play_map_._M_h._M_element_count);
    goto LABEL_46;
  }
  PlayerScenePlayComp::checkScenePlayOpenForAllPlayer(&v46, (uint32_t)this);
  std::tie<int,unsigned int>(
    (int *)&v46.std::enable_shared_from_this<PlayerCompBase>,
    (unsigned int *)(p_invite_info + 32),
    (int *)(p_invite_info + 48),
    (unsigned int *)(p_invite_info + 32));
  std::tuple<int &,unsigned int &>::operator=<int,unsigned int>(
    (std::tuple<int&,unsigned int&> *const)&v46.std::enable_shared_from_this<PlayerCompBase>,
    (std::tuple<int,unsigned int> *)&v46);
  if ( *(_DWORD *)(p_invite_info + 32) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v46.play_map_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "checkInviteFlowCond",
      355);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            (common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count,
            (const char (*)[58])"[SCENE_PLAY] checkScenePlayOpenForAllPlayer failed, ret: ");
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(p_invite_info + 32));
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" wrong_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v14,
      (const unsigned int *)(p_invite_info + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int> > >::std::_Head_base<0,int,false>::_M_head_impl
                    + 3) >> 3)
                  + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int> > >::std::_Head_base<0,int,false>::_M_head_impl
                                                            + 3) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::make_tuple<int &,unsigned int &,std::vector<unsigned int> &>(
      retstr,
      (int *)(p_invite_info + 32),
      (unsigned int *)(p_invite_info + 48),
      &PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec,
      v15,
      v16,
      v37);
    goto LABEL_46;
  }
  if ( PlayerScenePlayComp::isScenePlayBattleEnabled(this, *(_DWORD *)(p_invite_info + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v46.play_map_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "checkInviteFlowCond",
      362);
    v17 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            (common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count,
            (const char (*)[61])"[SCENE_PLAY] scene play battle is already enabled, play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v17,
      (const unsigned int *)(p_invite_info + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v40 = RET_FAIL;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int> > >::std::_Head_base<0,int,false>::_M_head_impl
                    + 3) >> 3)
                  + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int> > >::std::_Head_base<0,int,false>::_M_head_impl
                                                            + 3) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::make_tuple<int,unsigned int,std::vector<unsigned int> &>(
      retstr,
      (int *)&v40,
      &val,
      &PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec,
      v18,
      v19,
      v37);
    goto LABEL_46;
  }
  if ( is_skip_match )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    MatchComp = Player::getMatchComp(this->player_);
    PlayerMatchComp::checkSkipMatchAvailability(
      (std::tuple<int,std::vector<unsigned int> > *)&v46.player_,
      MatchComp,
      *(_DWORD *)(p_invite_info + 64));
    ret = std::get<0ul,int,std::vector<unsigned int>>((std::tuple<int,std::vector<unsigned int> > *)&v46.player_);
    param_vec = std::get<1ul,int,std::vector<unsigned int>>((std::tuple<int,std::vector<unsigned int> > *)&v46.player_);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    if ( *ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v46.play_map_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "checkInviteFlowCond",
        372);
      v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count,
              (const char (*)[39])"[SCENE_PLAY] skip match invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" ,play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v23,
        (const unsigned int *)(p_invite_info + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count);
      val = 0;
      std::make_tuple<int &,int,std::vector<unsigned int> &>(
        (std::tuple<int,int,std::vector<unsigned int> > *)&v46.play_map_._M_h._M_element_count,
        ret,
        (int *)&val,
        param_vec,
        v24,
        v25,
        v37);
      std::tuple<int,unsigned int,std::vector<unsigned int>>::tuple<int,int,std::vector<unsigned int>,void,true>(
        retstr,
        (std::tuple<int,int,std::vector<unsigned int> > *)&v46.play_map_._M_h._M_element_count);
      std::tuple<int,int,std::vector<unsigned int>>::~tuple((std::tuple<int,int,std::vector<unsigned int> > *const)&v46.play_map_._M_h._M_element_count);
      v26 = 0;
    }
    else
    {
      v26 = 1;
    }
    std::tuple<int,std::vector<unsigned int>>::~tuple((std::tuple<int,std::vector<unsigned int> > *const)&v46.player_);
    if ( v26 == 1 )
    {
LABEL_45:
      val = 0;
      v40 = RET_SUCC;
      std::make_tuple<int,int,std::vector<unsigned int> &>(
        (std::tuple<int,int,std::vector<unsigned int> > *)&v46.play_map_._M_h._M_element_count,
        (int *)&v40,
        (int *)&val,
        &PlayerScenePlayComp::checkInviteFlowCond(unsigned int,bool)::default_param_vec,
        v27,
        v28,
        v37);
      std::tuple<int,unsigned int,std::vector<unsigned int>>::tuple<int,int,std::vector<unsigned int>,void,true>(
        retstr,
        (std::tuple<int,int,std::vector<unsigned int> > *)&v46.play_map_._M_h._M_element_count);
      std::tuple<int,int,std::vector<unsigned int>>::~tuple((std::tuple<int,int,std::vector<unsigned int> > *const)&v46.play_map_._M_h._M_element_count);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v29 = Player::getMatchComp(this->player_);
    PlayerMatchComp::checkMatchAvailability((std::tuple<int,std::vector<unsigned int> > *)&v46.player_, v29);
    ret_0 = std::get<0ul,int,std::vector<unsigned int>>((std::tuple<int,std::vector<unsigned int> > *)&v46.player_);
    param_vec_0 = std::get<1ul,int,std::vector<unsigned int>>((std::tuple<int,std::vector<unsigned int> > *)&v46.player_);
    if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret_0);
    }
    if ( *ret_0 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v46.play_map_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "checkInviteFlowCond",
        382);
      v30 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count,
              (const char (*)[34])"[SCENE_PLAY] match invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" ,play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v32,
        (const unsigned int *)(p_invite_info + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46.play_map_._M_h._M_element_count);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int> > >::std::_Head_base<0,int,false>::_M_head_impl
                      + 3) >> 3)
                    + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int> > >::std::_Head_base<0,int,false>::_M_head_impl
                                                              + 3) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      std::make_tuple<int &,unsigned int,std::vector<unsigned int> &>(retstr, ret_0, &val, param_vec_0, v33, v34, v37);
      v35 = 0;
    }
    else
    {
      v35 = 1;
    }
    std::tuple<int,std::vector<unsigned int>>::~tuple((std::tuple<int,std::vector<unsigned int> > *const)&v46.player_);
    if ( v35 == 1 )
      goto LABEL_45;
  }
LABEL_46:
  if ( &v46.invite_info_ == (InviteInfo *)p_invite_info )
  {
    *(_QWORD *)((p_invite_info >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_invite_info >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_invite_info = 1172321806LL;
    *(_QWORD *)((p_invite_info >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_invite_info >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 391: range 0000000016D043B0-0000000016D047FE
// local variable allocation has failed, the output may be wrong!
std::tuple<int,unsigned int> __cdecl PlayerScenePlayComp::checkScenePlayOpenForAllPlayer(
        PlayerScenePlayComp *const this,
        uint32_t play_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  World *v6; // r14
  PlayerScenePlayComp::checkScenePlayOpenForAllPlayer::<lambda(Player&)> v8; // [rsp-20h] [rbp-120h]
  uint32_t play_ida; // [rsp+Ch] [rbp-F4h]
  uint32_t owner_uid; // [rsp+24h] [rbp-DCh]
  std::tuple<int,int> __in; // [rsp+28h] [rbp-D8h] BYREF
  PlayerScenePlayComp::checkScenePlayOpenForAllPlayer::<lambda(Player&)> __f; // [rsp+30h] [rbp-D0h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+70h] [rbp-90h] BYREF

  play_ida = v2;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 wrong_uid:407 48 4 7 ret:408 64 16 13 world_ptr:392";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::checkScenePlayOpenForAllPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&play_id + 24LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&play_id + 24LL);
  Player::getSceneComp(*(Player *const *)(*(_QWORD *)&play_id + 24LL));
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "checkScenePlayOpenForAllPlayer",
      395);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v13,
      (const char (*)[27])"[SCENE_PLAY] world is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 32) = -1;
    std::make_tuple<int,int>((int *)&__in, (int *)(v3 + 32), (int *)(v3 + 48), (int *)(v3 + 32));
    std::tuple<int,unsigned int>::tuple<int,int,true>((std::tuple<int,unsigned int> *const)this, &__in);
  }
  else if ( !PlayerScenePlayComp::isScenePlayOpen(*(PlayerScenePlayComp *const *)&play_id, play_ida) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&play_id + 24LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&play_id + 24LL);
    *(_DWORD *)(v3 + 48) = Player::getUid(*(const Player *const *)(*(_QWORD *)&play_id + 24LL));
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
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&play_id + 24LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&play_id + 24LL);
    owner_uid = Player::getUid(*(const Player *const *)(*(_QWORD *)&play_id + 24LL));
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    v6 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    __f.__ret = (int32_t *)(v3 + 48);
    __f.__wrong_uid = (uint32_t *)(v3 + 32);
    *(_QWORD *)&__f.__play_id = __PAIR64__(owner_uid, play_ida);
    *(_QWORD *)&v8.__play_id = __PAIR64__(owner_uid, play_ida);
    v8.__wrong_uid = (uint32_t *)(v3 + 32);
    v8.__ret = (int32_t *)(v3 + 48);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerScenePlayComp::checkScenePlayOpenForAllPlayer(unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v13,
      v8);
    World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v13);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v13);
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
  if ( v14 == (char *)v3 )
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

// Line 409: range 0000000016D041F0-0000000016D043AF
ForeachPolicy __cdecl PlayerScenePlayComp::checkScenePlayOpenForAllPlayer(unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerScenePlayComp::checkScenePlayOpenForAllPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerScenePlayComp *ScenePlayComp; // rcx
  __int64 play_id; // rsi
  uint32_t *wrong_uid; // rbx
  uint32_t v7; // ecx
  char v8; // dl
  bool v9; // dl
  int32_t *ret; // rdx
  char v11; // cl

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__owner_uid);
  }
  if ( Uid == __closure->__owner_uid )
    return 0;
  ScenePlayComp = Player::getScenePlayComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__play_id);
  }
  play_id = __closure->__play_id;
  if ( PlayerScenePlayComp::isScenePlayOpen(ScenePlayComp, play_id) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__wrong_uid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__wrong_uid);
  wrong_uid = __closure->__wrong_uid;
  v7 = Player::getUid(player);
  v8 = *(_BYTE *)(((unsigned __int64)wrong_uid >> 3) + 0x7FFF8000);
  LOBYTE(play_id) = v8 != 0;
  v9 = v8 != 0 && (char)(((unsigned __int8)wrong_uid & 7) + 3) >= v8;
  if ( v9 )
    __asan_report_store4(wrong_uid, play_id, v9);
  *wrong_uid = v7;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  v11 = *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)(((__int64)__closure->__ret & 7) + 3) >= v11 )
  {
    LOBYTE(play_id) = v11 != 0;
    __asan_report_store4(__closure->__ret, play_id, (_BYTE)ret);
  }
  *ret = 1219;
  return 1;
};

// Line 428: range 0000000016D04912-0000000016D04F56
__int64 __fastcall PlayerScenePlayComp::startInviteFlow(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        bool is_skip_match)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rsi
  uint32_t v14; // ecx
  char v15; // al
  unsigned int *p_val; // rsi
  uint32_t v17; // ecx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 result; // rax
  PlayerScenePlayComp::startInviteFlow::<lambda(Player&)> v22; // [rsp-20h] [rbp-170h]
  common::milog::MiLogStream *v23; // [rsp+8h] [rbp-148h]
  World *v24; // [rsp+8h] [rbp-148h]
  unsigned int val; // [rsp+28h] [rbp-128h] BYREF
  uint32_t invite_cd; // [rsp+2Ch] [rbp-124h]
  std::shared_ptr<Config> v28; // [rsp+30h] [rbp-120h] BYREF
  PlayerScenePlayComp::startInviteFlow::<lambda(Player&)> __f; // [rsp+40h] [rbp-110h]
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 play_id:427 64 16 13 world_ptr:432 96 32 17 invite_notify:449";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::startInviteFlow;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = play_id;
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/scene_play/player_scene_play_comp.cpp",
    "startInviteFlow",
    429);
  v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v30,
          (const char (*)[35])"[SCENE_PLAY] startInviteFlow uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,play_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" ,is_skip_match: ");
  common::milog::MiLogStream::operator<<(v9, is_skip_match);
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "startInviteFlow",
      435);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v30,
      (const char (*)[27])"[SCENE_PLAY] world is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( World::getPlayerCount(v11) == 1 )
    {
      PlayerScenePlayComp::onInviteFlowEnd(this, *(_DWORD *)(v3 + 48), is_skip_match);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      invite_cd = ConstValueExcelConfigMgr::getInviteValidTimeSec(&v12->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v28);
      proto::ScenePlayOwnerInviteNotify::ScenePlayOwnerInviteNotify((proto::ScenePlayOwnerInviteNotify *const)(v3 + 96));
      proto::ScenePlayOwnerInviteNotify::set_play_id(
        (proto::ScenePlayOwnerInviteNotify *const)(v3 + 96),
        *(_DWORD *)(v3 + 48));
      proto::ScenePlayOwnerInviteNotify::set_invite_cd((proto::ScenePlayOwnerInviteNotify *const)(v3 + 96), invite_cd);
      v24 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      __f.__invite_notify = (proto::ScenePlayOwnerInviteNotify *)(v3 + 96);
      __f.__this = this;
      __f.__play_id = *(_DWORD *)(v3 + 48);
      *(_OWORD *)&v22.__this = __PAIR128__(*(unsigned __int64 *)&__f.__play_id, (unsigned __int64)this);
      v22.__invite_notify = (proto::ScenePlayOwnerInviteNotify *)(v3 + 96);
      std::function<ForeachPolicy ()(Player &)>::function<PlayerScenePlayComp::startInviteFlow(unsigned int,bool)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v30,
        v22);
      v13 = &v30;
      World::foreachPlayer(v24, (std::function<ForeachPolicy(Player&)> *)&v30);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v30);
      InviteInfo::clear(&this->invite_info_);
      v14 = *(_DWORD *)(v3 + 48);
      v15 = *(_BYTE *)(((unsigned __int64)&this->invite_info_ >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v13) = v15 != 0;
        __asan_report_store4(&this->invite_info_, v13, (_BYTE)this + 88);
      }
      this->invite_info_.play_id = v14;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      p_val = &val;
      std::vector<unsigned int>::operator=(
        &this->invite_info_.agree_uid_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val));
      v17 = common::tools::TimeUtils::getNow() + invite_cd + 5;
      v18 = *(_BYTE *)(((unsigned __int64)&this->invite_info_.deadline_time >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(p_val) = v18 != 0;
        __asan_report_store4(&this->invite_info_.deadline_time, p_val, (_BYTE)this - 112);
      }
      this->invite_info_.deadline_time = v17;
      v19 = ((_BYTE)this - 108) & 7;
      v20 = (*(_BYTE *)(((unsigned __int64)&this->invite_info_.is_skip_match >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->invite_info_.is_skip_match >> 3) + 0x7FFF8000));
      if ( (_BYTE)v20 )
        __asan_report_store1(&this->invite_info_.is_skip_match, v19, v20);
      this->invite_info_.is_skip_match = is_skip_match;
      proto::ScenePlayOwnerInviteNotify::~ScenePlayOwnerInviteNotify((proto::ScenePlayOwnerInviteNotify *const)(v3 + 96));
    }
    v10 = 0;
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 64));
  result = v10;
  if ( v31 == (char *)v3 )
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

// Line 452: range 0000000016D04800-0000000016D04911
ForeachPolicy __cdecl PlayerScenePlayComp::startInviteFlow(unsigned int,bool)::{lambda(Player &)#1}::operator()(
        const PlayerScenePlayComp::startInviteFlow::<lambda(Player&)> *const __closure,
        Player *player)
{
  proto::ScenePlayOwnerInviteNotify *invite_notify; // rbx
  PlayerScenePlayComp *this; // r12
  uint32_t Uid; // ecx
  bool isScenePlayRewardRemained; // al

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  invite_notify = __closure->__invite_notify;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__play_id);
  }
  isScenePlayRewardRemained = PlayerScenePlayComp::isScenePlayRewardRemained(this, __closure->__play_id, Uid);
  proto::ScenePlayOwnerInviteNotify::set_is_remain_reward(invite_notify, isScenePlayRewardRemained);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__invite_notify);
  return 0;
};

// Line 471: range 0000000016D04F58-0000000016D04FB1
int32_t __cdecl PlayerScenePlayComp::onInviteFlowEnd(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        bool is_skip_match)
{
  if ( is_skip_match )
    PlayerScenePlayComp::enableScenePlayBattle(this, play_id, Direct);
  else
    PlayerScenePlayComp::startScenePlayMatch(this, play_id);
  InviteInfo::clear(&this->invite_info_);
  return 0;
};

// Line 489: range 0000000016D04FB2-0000000016D05246
int32_t __cdecl PlayerScenePlayComp::startScenePlayMatch(PlayerScenePlayComp *const this, uint32_t play_id)
{
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v3; // rbx
  int32_t v4; // ebx
  PlayerMatchComp *v5; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret; // [rsp+20h] [rbp-80h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *_; // [rsp+28h] [rbp-78h]
  std::vector<unsigned int> p_match_param_vec; // [rsp+30h] [rbp-70h] BYREF
  std::tuple<int,std::vector<unsigned int> > __t; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v12; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
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
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "startScenePlayMatch",
      493);
    v3 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v12,
           (const char (*)[50])"[SCENE_PLAY] checkMatchAvailability failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    v4 = *ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = Player::getMatchComp(this->player_);
    memset(&p_match_param_vec, 0, sizeof(p_match_param_vec));
    std::vector<unsigned int>::vector(&p_match_param_vec);
    PlayerMatchComp::startMatch(v5, MATCH_TYPE_MP_PLAY, play_id, &p_match_param_vec);
    std::vector<unsigned int>::~vector(&p_match_param_vec);
    v4 = 0;
  }
  std::tuple<int,std::vector<unsigned int>>::~tuple(&__t);
  return v4;
};

// Line 503: range 0000000016D05248-0000000016D054EF
__int64 __fastcall PlayerScenePlayComp::onMatchSucc(PlayerScenePlayComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 play_id:502";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::onMatchSucc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = play_id;
  if ( !PlayerScenePlayComp::isScenePlayOpen(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "onMatchSucc",
      506);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v11,
           (const char (*)[40])"[SCENE_PLAY] scene play not open, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else if ( PlayerScenePlayComp::isScenePlayBattleEnabled(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "onMatchSucc",
      513);
    v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v11,
           (const char (*)[61])"[SCENE_PLAY] scene play battle is already enabled, play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
  }
  else
  {
    result = PlayerScenePlayComp::enableScenePlayBattle(this, *(_DWORD *)(v2 + 32), Match);
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

// Line 521: range 0000000016D054F0-0000000016D05D1F
__int64 __fastcall PlayerScenePlayComp::onGuestReplyInvite(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        uint32_t guest_uid,
        bool is_agree)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  World *v13; // rax
  uint32_t ReplyCount; // r14d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool v16; // al
  World *v17; // rax
  std::vector<unsigned int>::size_type v18; // r14
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-130h] BYREF
  uint32_t now; // [rsp+24h] [rbp-12Ch]
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-120h] BYREF
  char v27[272]; // [rsp+40h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 play_id:520 64 16 13 world_ptr:541 96 32 16 reply_notify:556 160 32 17 result_notify:575";
  *(_QWORD *)(v4 + 16) = PlayerScenePlayComp::onGuestReplyInvite;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = play_id;
  if ( !PlayerScenePlayComp::isScenePlayOpen(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "onGuestReplyInvite",
      524);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[40])"[SCENE_PLAY] scene play not open, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" ,play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    v10 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->invite_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->invite_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->invite_info_);
    }
    if ( this->invite_info_.play_id == *(_DWORD *)(v4 + 48) )
    {
      now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->invite_info_.deadline_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->invite_info_.deadline_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->invite_info_.deadline_time);
      }
      if ( now <= this->invite_info_.deadline_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v4 + 64));
        if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v4 + 64)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 160),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/player_scene_play_comp.cpp",
            "onGuestReplyInvite",
            544);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v4 + 160),
            (const char (*)[27])"[SCENE_PLAY] world is null");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
          v10 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
          match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                               &v11->design_config.txt_config_mgr.mp_play_config_mgr,
                               *(_DWORD *)(v4 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v26);
          if ( match_config_ptr )
          {
            proto::ScenePlayGuestReplyNotify::ScenePlayGuestReplyNotify((proto::ScenePlayGuestReplyNotify *const)(v4 + 96));
            proto::ScenePlayGuestReplyNotify::set_play_id(
              (proto::ScenePlayGuestReplyNotify *const)(v4 + 96),
              *(_DWORD *)(v4 + 48));
            proto::ScenePlayGuestReplyNotify::set_guest_uid(
              (proto::ScenePlayGuestReplyNotify *const)(v4 + 96),
              guest_uid);
            proto::ScenePlayGuestReplyNotify::set_is_agree((proto::ScenePlayGuestReplyNotify *const)(v4 + 96), is_agree);
            v13 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            World::notifyAllPlayer<proto::ScenePlayGuestReplyNotify>(
              v13,
              (const proto::ScenePlayGuestReplyNotify *)(v4 + 96),
              guest_uid);
            if ( is_agree )
              InviteInfo::addAgreeUid(&this->invite_info_, guest_uid);
            else
              InviteInfo::addDisagreeUid(&this->invite_info_, guest_uid);
            ReplyCount = InviteInfo::getReplyCount(&this->invite_info_);
            v15 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            if ( ReplyCount >= World::getPlayerCount(v15) )
            {
              proto::ScenePlayInviteResultNotify::ScenePlayInviteResultNotify((proto::ScenePlayInviteResultNotify *const)(v4 + 160));
              proto::ScenePlayInviteResultNotify::set_play_id(
                (proto::ScenePlayInviteResultNotify *const)(v4 + 160),
                *(_DWORD *)(v4 + 48));
              v16 = std::vector<unsigned int>::empty(&this->invite_info_.disagree_uid_vec);
              proto::ScenePlayInviteResultNotify::set_is_all_argee(
                (proto::ScenePlayInviteResultNotify *const)(v4 + 160),
                v16);
              v17 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              World::notifyAllPlayer<proto::ScenePlayInviteResultNotify>(
                v17,
                (const proto::ScenePlayInviteResultNotify *)(v4 + 160),
                0);
              proto::ScenePlayInviteResultNotify::~ScenePlayInviteResultNotify((proto::ScenePlayInviteResultNotify *const)(v4 + 160));
            }
            v18 = std::vector<unsigned int>::size(&this->invite_info_.agree_uid_vec);
            v19 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            if ( v18 >= World::getPlayerCount(v19) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->invite_info_.is_skip_match >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->invite_info_.is_skip_match >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&this->invite_info_.is_skip_match);
              }
              PlayerScenePlayComp::onInviteFlowEnd(this, *(_DWORD *)(v4 + 48), this->invite_info_.is_skip_match);
            }
            v10 = 0;
            proto::ScenePlayGuestReplyNotify::~ScenePlayGuestReplyNotify((proto::ScenePlayGuestReplyNotify *const)(v4 + 96));
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 160),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/player_scene_play_comp.cpp",
              "onGuestReplyInvite",
              551);
            v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    (common::milog::MiLogStream *const)(v4 + 160),
                    (const char (*)[52])"[SCENE_PLAY] findMpPlayExcelConfig failed, play_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
            v10 = -1;
          }
        }
        std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v4 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/scene_play/player_scene_play_comp.cpp",
          "onGuestReplyInvite",
          537);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v4 + 160),
          (const char (*)[28])"[SCENE_PLAY] invite expired");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
        v10 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "onGuestReplyInvite",
        530);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v4 + 160),
        (const char (*)[30])"[SCENE_PLAY] play_id mismatch");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
      v10 = -1;
    }
  }
  result = v10;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 591: range 0000000016D05D20-0000000016D05E5C
bool __cdecl PlayerScenePlayComp::isScenePlayRewardRemained(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        uint32_t player_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isRewardRemained; // r14
  bool result; // al
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 play_ptr:592";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::isScenePlayRewardRemained;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v3 + 32), (__int64)this, play_id);
  if ( std::operator!=<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isRewardRemained = BaseScenePlay::isRewardRemained(v6, player_uid);
  }
  else
  {
    isRewardRemained = 0;
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 32));
  result = isRewardRemained;
  if ( v10 == (char *)v3 )
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

// Line 602: range 0000000016D05E5E-0000000016D061A6
void __cdecl PlayerScenePlayComp::notifyScenePlayBattleInfoList(PlayerScenePlayComp *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<proto::ScenePlayBattleInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  proto::ScenePlayBattleInfo *v13; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-B0h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-98h]
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:603 64 16 14 battle_ptr:610";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::notifyScenePlayBattleInfoList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::perf::make_shared<proto::ScenePlayBattleInfoListNotify>();
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v5 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::getPhase(v5) == Activated
        || (v6 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr),
            BaseScenePlay::getPhase(v6) == Open) )
      {
        std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v2 + 64));
        if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 64)) )
        {
          v8 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( BaseScenePlayBattle::getState(v8) > SCENE_PLAY_BATTLE_INIT )
          {
            v9 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( BaseScenePlayBattle::getState(v9) <= SCENE_PLAY_BATTLE_START )
            {
              v11 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              v12 = std::__shared_ptr_access<proto::ScenePlayBattleInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ScenePlayBattleInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              v13 = proto::ScenePlayBattleInfoListNotify::add_battle_info_list(v12);
              BaseScenePlayBattle::fillBattleInfo(v11, v13);
            }
          }
        }
        std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 64));
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ScenePlayBattleInfoListNotify>((const std::shared_ptr<proto::ScenePlayBattleInfoListNotify> *)(v2 + 64));
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v2 + 64), 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 64));
  std::shared_ptr<proto::ScenePlayBattleInfoListNotify>::~shared_ptr((std::shared_ptr<proto::ScenePlayBattleInfoListNotify> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
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

// Line 623: range 0000000016D061A8-0000000016D0663F
int32_t __cdecl PlayerScenePlayComp::findNearestRebornPosRot(
        PlayerScenePlayComp *const this,
        uint32_t scene_id,
        const Vector3 *cur_pos,
        Vector3 *reborn_pos,
        Vector3 *reborn_rot)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BaseScenePlayBattle *v12; // rax
  int32_t result; // eax
  float Distance; // [rsp+4h] [rbp-10Ch]
  bool is_found; // [rsp+3Fh] [rbp-D1h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+40h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+48h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+50h] [rbp-C0h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+58h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+60h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+68h] [rbp-A8h]
  char v27[160]; // [rsp+70h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 12 7 pos:625 64 12 7 rot:625 96 16 14 battle_ptr:631";
  *(_QWORD *)(v5 + 16) = PlayerScenePlayComp::findNearestRebornPosRot;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -202178560;
  is_found = 0;
  Vector3::Vector3((Vector3 *const)(v5 + 32), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v5 + 64), 0.0, 0.0, 0.0);
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v8 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::getPhase(v8) == Open )
      {
        std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v5 + 96));
        if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v5 + 96)) )
        {
          v10 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( BaseScenePlayBattle::getState(v10) > SCENE_PLAY_BATTLE_INIT )
          {
            v11 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            if ( BaseScenePlayBattle::getState(v11) <= SCENE_PLAY_BATTLE_START )
            {
              v12 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              if ( !BaseScenePlayBattle::findRebornPosRot(v12, scene_id, (Vector3 *)(v5 + 32), (Vector3 *)(v5 + 64)) )
              {
                if ( !is_found
                  || (Distance = getDistance(cur_pos, (const Vector3 *)(v5 + 32)),
                      getDistance(cur_pos, reborn_pos) > Distance) )
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
        }
        std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v5 + 96));
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( is_found )
    result = 0;
  else
    result = -1;
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 651: range 0000000016D06640-0000000016D06856
void __cdecl PlayerScenePlayComp::fillServerLuaCallGroupSet(
        PlayerScenePlayComp *const this,
        std::set<unsigned int> *group_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  BaseScenePlayBattle *v7; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-80h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 battle_ptr:657";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::fillServerLuaCallGroupSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v5 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::getPhase(v5) == Open )
      {
        std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v2 + 32));
        if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32)) )
        {
          v7 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          BaseScenePlayBattle::fillServerLuaCallGroupSet(v7, group_id_set);
        }
        std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 32));
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 668: range 0000000016D06858-0000000016D06B80
__int64 __fastcall PlayerScenePlayComp::onOutofRegionNotify(
        PlayerScenePlayComp *const this,
        uint32_t play_id,
        Player *player)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  BaseScenePlayBattle *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 play_id:667 64 16 12 play_ptr:669 96 16 14 battle_ptr:675";
  *(_QWORD *)(v3 + 16) = PlayerScenePlayComp::onOutofRegionNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v3 + 64))
    || (v6 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
        BaseScenePlay::getPhase(v6) != Open) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/player_scene_play_comp.cpp",
      "onOutofRegionNotify",
      672);
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v15,
           (const char (*)[22])"[SCENE_PLAY] play_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" not Open");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = -1;
  }
  else
  {
    std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v3 + 96));
    if ( std::operator==<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/player_scene_play_comp.cpp",
        "onOutofRegionNotify",
        678);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v15,
              (const char (*)[43])"[SCENE_PLAY] findBattlePtr fails, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v10 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v10 = BaseScenePlayBattle::forcePlayerBackBornPos(v12, player);
    }
    std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v3 + 96));
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 64));
  result = v10;
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

// Line 685: range 0000000016D06B82-0000000016D06DE8
void __cdecl PlayerScenePlayComp::onMonsterHurt(
        PlayerScenePlayComp *const this,
        uint32_t attacker_uid,
        uint32_t group_id,
        uint32_t config_id,
        float damage_val)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r14d
  BaseScenePlayBattle *v10; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+48h] [rbp-78h]
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 14 battle_ptr:692";
  *(_QWORD *)(v5 + 16) = PlayerScenePlayComp::onMonsterHurt;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  __for_range = &this->play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( std::operator!=<BaseScenePlay>(0LL, play_ptr) )
    {
      v8 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( BaseScenePlay::getPhase(v8) == Open )
      {
        std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
        BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v5 + 32));
        if ( std::operator==<BaseScenePlayBattle>((const std::shared_ptr<BaseScenePlayBattle> *)(v5 + 32), 0LL) )
        {
          v9 = 0;
        }
        else
        {
          v10 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
          BaseScenePlayBattle::onMonsterHurt(v10, attacker_uid, group_id, config_id, damage_val);
          v9 = 1;
        }
        std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v5 + 32));
        if ( v9 != 1 )
          break;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 704: range 0000000016D06DEA-0000000016D0715F
void __cdecl PlayerScenePlayComp::onMonsterDie(
        PlayerScenePlayComp *const this,
        ChangeHpContext *context,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  BaseScenePlayBattle *v9; // rax
  uint32_t killer_uid; // [rsp+2Ch] [rbp-E4h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+58h] [rbp-B8h]
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 16 creature_ptr:709 64 16 14 avatar_ptr:710 96 16 14 battle_ptr:726";
  *(_QWORD *)(v4 + 16) = PlayerScenePlayComp::onMonsterDie;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( !std::operator==<Creature>(0LL, &context->attacker_ptr) )
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
    Creature::findTopOwnerOrSelf((Creature *const)(v4 + 32));
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 64));
    if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
    {
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      killer_uid = Avatar::getUid(v7);
      __for_range = &this->play_map_;
      __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin(&this->play_map_)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end(&this->play_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
                &__for_begin,
                &__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
        _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
        play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
        if ( !std::operator==<BaseScenePlay>(0LL, play_ptr) )
        {
          v8 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
          if ( BaseScenePlay::getPhase(v8) == Open )
          {
            std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
            BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v4 + 96));
            if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v4 + 96)) )
            {
              v9 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              BaseScenePlayBattle::onMonsterDie(v9, killer_uid, group_id, config_id);
            }
            std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v4 + 96));
          }
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 32));
  }
  if ( v19 == (char *)v4 )
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

// Line 735: range 0000000016D07160-0000000016D07372
BaseScenePlayBattlePtr __cdecl PlayerScenePlayComp::getCurScenePlayBattle(PlayerScenePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  BaseScenePlayBattlePtr result; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > *__in; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseScenePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 battle_ptr:742";
  *(_QWORD *)(v2 + 16) = PlayerScenePlayComp::getCurScenePlayBattle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>> *const)(v1 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseScenePlay>>(__in);
    if ( !std::operator==<BaseScenePlay>(0LL, play_ptr) )
    {
      std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v2 + 32));
      if ( std::operator!=<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32)) )
      {
        std::shared_ptr<BaseScenePlayBattle>::shared_ptr(
          (std::shared_ptr<BaseScenePlayBattle> *const)this,
          (std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32));
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 32));
      if ( v5 != 1 )
        goto LABEL_13;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseScenePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<BaseScenePlayBattle>::shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)this, 0LL);
LABEL_13:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
