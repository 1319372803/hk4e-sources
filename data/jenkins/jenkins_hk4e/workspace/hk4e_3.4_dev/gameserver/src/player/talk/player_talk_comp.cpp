// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/talk/player_talk_comp.cpp

// Line 37: range 0000000016D227CC-0000000016D22A09
int32_t __cdecl PlayerTalkComp::fromBin(PlayerTalkComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-90h]
  const proto::PlayerTalkCompBin *proto_comp; // [rsp+28h] [rbp-88h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-80h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+40h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-68h]
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 talk_id:43";
  *(_QWORD *)(v2 + 16) = PlayerTalkComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::talk_bin(player_data_bin);
  __for_range = proto::PlayerTalkCompBin::npc_fisrt_met_id_list(proto_comp);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->npc_first_met_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  __for_range_0 = proto::PlayerTalkCompBin::finished_talk_id_list(proto_comp);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::set<unsigned int>::insert(&this->finished_talk_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 51: range 0000000016D22A0A-0000000016D22B92
int32_t __cdecl PlayerTalkComp::toBin(PlayerTalkComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  proto::PlayerTalkCompBin *proto_comp; // [rsp+28h] [rbp-18h]
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-10h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_talk_bin(player_data_bin);
  __for_range = &this->npc_first_met_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->npc_first_met_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->npc_first_met_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerTalkCompBin::add_npc_fisrt_met_id_list(proto_comp, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->finished_talk_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finished_talk_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::PlayerTalkCompBin::add_finished_talk_id_list(proto_comp, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 66: range 0000000016D22B94-0000000016D22E24
int32_t __cdecl PlayerTalkComp::notifyAllData(PlayerTalkComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-D0h]
  int32_t reta; // [rsp+10h] [rbp-D0h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 17 met_npc_notify:67";
  *(_QWORD *)(v1 + 16) = PlayerTalkComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::MetNpcIdListNotify::MetNpcIdListNotify((proto::MetNpcIdListNotify *const)(v1 + 48));
  __for_range = &this->npc_first_met_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->npc_first_met_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->npc_first_met_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::MetNpcIdListNotify::add_npc_first_met_id_list((proto::MetNpcIdListNotify *const)(v1 + 48), *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ret = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    reta = PlayerTalkComp::notifyFinishedTalkData(this);
    if ( reta )
      v6 = reta;
    else
      v6 = 0;
  }
  proto::MetNpcIdListNotify::~MetNpcIdListNotify((proto::MetNpcIdListNotify *const)(v1 + 48));
  result = v6;
  if ( v13 == (char *)v1 )
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

// Line 87: range 0000000016D22E26-0000000016D230F9
int32_t __cdecl PlayerTalkComp::notifyFinishedTalkData(PlayerTalkComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-F0h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 23 finished_talk_notify:88";
  *(_QWORD *)(v1 + 16) = PlayerTalkComp::notifyFinishedTalkData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::FinishedTalkIdListNotify::FinishedTalkIdListNotify((proto::FinishedTalkIdListNotify *const)(v1 + 48));
  __for_range = &this->finished_talk_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finished_talk_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->finished_talk_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::FinishedTalkIdListNotify::add_finished_talk_id_list((proto::FinishedTalkIdListNotify *const)(v1 + 48), *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ret = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "notifyFinishedTalkData",
      96);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v12,
      (const char (*)[31])"notifyFinishedTalkData failed.");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = ret;
  }
  else
  {
    v6 = 0;
  }
  proto::FinishedTalkIdListNotify::~FinishedTalkIdListNotify((proto::FinishedTalkIdListNotify *const)(v1 + 48));
  result = v6;
  if ( v13 == (char *)v1 )
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

// Line 108: range 0000000016D230FA-0000000016D236B6
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerTalkComp::onTalk(PlayerTalkComp *const this, uint32_t entity_id, uint32_t talk_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::string v19; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-C0h] BYREF
  std::string v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  v19._M_dataplus._M_p = (std::string::pointer)__PAIR64__(entity_id, talk_id);
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 10 holder:109 48 4 11 talk_id:107 64 16 13 event_ptr:124";
  *(_QWORD *)(v3 + 16) = PlayerTalkComp::onTalk;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = v19._M_dataplus._M_p;
  if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v19._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v19._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x3E9u, v19);
  std::string::~string(&v21);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  v8 = *(unsigned int *)(v3 + 48);
  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::QuestExcelConfigMgrBase::findTalkExcelConfig(
                                                                        &v7->design_config.txt_config_mgr.quest_config_mgr,
                                                                        v8);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( *(&v19._anon_0._M_allocated_capacity + 1) )
  {
    v11 = *(_DWORD *)(v3 + 48);
    v12 = *(_BYTE *)(((v19._M_string_length + 32) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(v8) = v12 != 0;
      __asan_report_store4(v19._M_string_length + 32, v8, LOBYTE(v19._M_string_length) + 32);
    }
    *(_DWORD *)(v19._M_string_length + 32) = v11;
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/talk/player_talk_comp.cpp",
      "onTalk",
      117);
    v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&v21,
            (const char (*)[27])"[TALK] talk , cur_talk_id:");
    HIDWORD(v19._anon_0._M_allocated_capacity) = PlayerTalkComp::getCurTalkId((const PlayerTalkComp *const)v19._M_string_length);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v13,
            (const unsigned int *)&v19._anon_0._M_allocated_capacity + 1);
    v15 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v14, (const char (*)[3])", ");
    if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v19._M_string_length + 24);
    operator<<(v15, *(const Player **)(v19._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
    if ( PlayerTalkComp::execTalk(
           (PlayerTalkComp *const)v19._M_string_length,
           HIDWORD(v19._M_dataplus._M_p),
           *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/talk/player_talk_comp.cpp",
        "onTalk",
        120);
      v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&v21,
              (const char (*)[33])"[TALK] execTalk failed, talk_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
      v10 = -1;
    }
    else
    {
      common::tools::perf::make_shared<CompleteTalkEvent,unsigned int &>(
        (unsigned int *)&v20,
        (unsigned int *)(v3 + 48));
      std::shared_ptr<BaseEvent>::shared_ptr<CompleteTalkEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v3 + 64),
        (std::shared_ptr<CompleteTalkEvent> *)&v20);
      std::shared_ptr<CompleteTalkEvent>::~shared_ptr((std::shared_ptr<CompleteTalkEvent> *const)&v20);
      if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v19._M_string_length + 24);
      EventComp = Player::getEventComp(*(Player *const *)(v19._M_string_length + 24));
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&v20,
        (const std::shared_ptr<BaseEvent> *)(v3 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v20);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v20);
      if ( *(_BYTE *)(((v19._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v19._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(v19._M_string_length + 32, &v20, LOBYTE(v19._M_string_length) + 32);
      }
      *(_DWORD *)(v19._M_string_length + 32) = 0;
      v10 = 0;
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "onTalk",
      113);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)&v21,
           (const char (*)[36])"findTalkExcelConfig fails, talk_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
    v10 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v10;
  if ( v22 == (char *)v3 )
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

// Line 132: range 0000000016D236B8-0000000016D26C24
__int64 __fastcall PlayerTalkComp::execTalk(PlayerTalkComp *const this, uint32_t entity_id, uint32_t talk_id)
{
  unsigned int v3; // r13d
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  const std::string *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // r13
  const std::string *v16; // rax
  const std::string *v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // r13
  const std::string *v20; // rax
  _BOOL4 v21; // r15d
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  _BOOL4 v26; // r15d
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  int v28; // eax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  common::milog::MiLogStream *v33; // rcx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  char *v35; // rsi
  int32_t v36; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  char v38; // cl
  _BOOL4 v39; // r15d
  __int64 v40; // rax
  char v41; // dl
  bool v42; // dl
  uint32_t v43; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  char v45; // cl
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v46; // rax
  _DWORD *v47; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v55; // rax
  _BOOL4 v56; // r15d
  uint32_t v57; // eax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r13
  uint32_t v61; // eax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  int v66; // r15d
  Group *v67; // rax
  int *v68; // r8
  unsigned int *v69; // r9
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rcx
  int v73; // r15d
  ParentQuest *v74; // rax
  common::milog::MiLogStream *v75; // rax
  const std::string *v76; // rax
  common::milog::MiLogStream *v77; // r13
  const std::string *v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  common::milog::MiLogStream *v81; // rax
  _BOOL4 v82; // r15d
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdx
  common::milog::MiLogStream *v85; // r13
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rdx
  _BOOL4 v88; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v89; // rax
  uint32_t *v90; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v91; // rax
  uint32_t *v92; // rdx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rax
  uint32_t ConfigId; // eax
  common::milog::MiLogStream *v98; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v102; // rax
  Gadget *v103; // rax
  common::milog::MiLogStream *v104; // rax
  _BOOL4 v105; // r15d
  common::milog::MiLogStream *v106; // rax
  int v107; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v108; // rax
  __int64 v109; // rsi
  uint32_t v110; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v111; // rdx
  char v112; // cl
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v113; // rax
  uint32_t AvatarId; // r15d
  __int64 v115; // rax
  char v116; // dl
  bool v117; // dl
  uint32_t Uid; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v119; // rdx
  char v120; // cl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v121; // rax
  common::milog::MiLogStream *v122; // rsi
  uint32_t v123; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v124; // rdx
  char v125; // cl
  int v126; // r15d
  __int64 v127; // rax
  char v128; // dl
  bool v129; // dl
  Group *v130; // rax
  const std::string *v131; // rax
  common::milog::MiLogStream *v132; // r13
  const std::string *v133; // rax
  std::vector<std::string>::const_reference v134; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v135; // rax
  common::milog::MiLogStream *v136; // rax
  _BOOL4 v137; // r15d
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v142; // rax
  int v143; // r15d
  const DummyPointScriptConfig *v144; // r15
  Scene *v145; // rax
  const std::string *v146; // rax
  common::milog::MiLogStream *v147; // r13
  const std::string *v148; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v149; // rax
  common::milog::MiLogStream *v150; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v151; // rax
  common::milog::MiLogStream *v152; // rax
  __int64 result; // rax
  const Vector3 *rot; // [rsp+10h] [rbp-340h]
  PlayerSceneComp *v155; // [rsp+18h] [rbp-338h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-311h] BYREF
  uint32_t set_value; // [rsp+40h] [rbp-310h]
  uint32_t set_value_0; // [rsp+44h] [rbp-30Ch]
  uint32_t config_id; // [rsp+48h] [rbp-308h]
  uint32_t group_id; // [rsp+4Ch] [rbp-304h]
  std::vector<data::TalkExec>::const_iterator __for_begin; // [rsp+50h] [rbp-300h] BYREF
  std::vector<data::TalkExec>::const_iterator __for_end; // [rsp+58h] [rbp-2F8h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+60h] [rbp-2F0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+68h] [rbp-2E8h] BYREF
  char *val; // [rsp+70h] [rbp-2E0h] BYREF
  const data::TalkExcelConfig *talk_config_ptr; // [rsp+78h] [rbp-2D8h]
  PlayerQuestComp *quest_comp; // [rsp+80h] [rbp-2D0h]
  const std::vector<data::TalkExec> *__for_range; // [rsp+88h] [rbp-2C8h]
  const data::TalkExec *talk_exec; // [rsp+90h] [rbp-2C0h]
  const data::TalkExcelConfig *talk_config_ptr_0; // [rsp+98h] [rbp-2B8h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+A0h] [rbp-2B0h]
  const DummyPointScriptConfig *dummy_point_config_ptr; // [rsp+A8h] [rbp-2A8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+B0h] [rbp-2A0h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+B8h] [rbp-298h]
  common::milog::MiLogStream v176; // [rsp+C0h] [rbp-290h] BYREF
  TransferReason p_reason; // [rsp+E0h] [rbp-270h] BYREF
  char v178[560]; // [rsp+120h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v178;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 32 4 12 quest_id:170 48 4 13 param_val:351 64 4 12 group_id:213 80 4 20 finished_talk_id:461 "
                        "96 4 13 entity_id:131 112 4 11 talk_id:131 128 16 17 cur_scene_ptr:139 160 16 13 quest_ptr:182 1"
                        "92 16 13 event_ptr:190 224 16 14 entity_ptr:357 256 16 14 gadget_ptr:368 288 16 19 owner_group_p"
                        "tr:387 320 16 14 avatar_ptr:393 352 16 13 group_ptr:247 384 24 16 group_id_vec:176 448 32 15 dummy_point:428";
  *(_QWORD *)(v4 + 16) = PlayerTalkComp::execTalk;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -219021312;
  v6[536862731] = -219021312;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862735] = -202116109;
  *(_DWORD *)(v4 + 96) = entity_id;
  *(_DWORD *)(v4 + 112) = talk_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 352));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
  talk_config_ptr = data::QuestExcelConfigMgrBase::findTalkExcelConfig(
                      &v7->design_config.txt_config_mgr.quest_config_mgr,
                      *(_DWORD *)(v4 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 352));
  if ( !talk_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v176,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "execTalk",
      136);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v176,
           (const char (*)[36])"findTalkExcelConfig fails, talk_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream(&v176);
    v3 = -1;
    goto LABEL_228;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v176,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "execTalk",
      142);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v176,
      (const char (*)[29])"[TALK] cur_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v176);
    v3 = -1;
    goto LABEL_227;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  quest_comp = Player::getQuestComp(this->player_);
  __for_range = &talk_config_ptr->finish_exec;
  __for_begin._M_current = std::vector<data::TalkExec>::begin(&talk_config_ptr->finish_exec)._M_current;
  __for_end._M_current = std::vector<data::TalkExec>::end(&talk_config_ptr->finish_exec)._M_current;
  while ( 2 )
  {
    if ( __gnu_cxx::operator!=<data::TalkExec const*,std::vector<data::TalkExec>>(&__for_begin, &__for_end) )
    {
      talk_exec = __gnu_cxx::__normal_iterator<data::TalkExec const*,std::vector<data::TalkExec>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&talk_exec->type);
      }
      switch ( talk_exec->type )
      {
        case TALK_EXEC_SET_GADGET_STATE:
          if ( std::vector<std::string>::size(&talk_exec->param) )
          {
            *(_DWORD *)(v4 + 48) = 0;
            v76 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v76, (unsigned int *)(v4 + 48), 1) )
            {
              common::milog::MiLogStream::create(
                &v176,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/talk/player_talk_comp.cpp",
                "execTalk",
                354);
              v77 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v176,
                      (const char (*)[25])"[TALK] strToNum failed, ");
              v78 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v77, v78);
              common::milog::MiLogStream::~MiLogStream(&v176);
              v3 = -1;
            }
            else
            {
              v79 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
                v79 = __asan_report_load8(v79);
              v80 = *(_QWORD *)v79 + 120LL;
              if ( *(_BYTE *)((v80 >> 3) + 0x7FFF8000) )
                v79 = __asan_report_load8(*(_QWORD *)v79 + 120LL);
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v80)(
                v4 + 224,
                v79,
                *(unsigned int *)(v4 + 96));
              if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v4 + 224)) )
              {
                common::milog::MiLogStream::create(
                  &v176,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/talk/player_talk_comp.cpp",
                  "execTalk",
                  360);
                v81 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v176,
                        (const char (*)[38])"[TALK] cannot find entity, entity_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v81,
                  (const unsigned int *)(v4 + 96));
                common::milog::MiLogStream::~MiLogStream(&v176);
                v3 = -1;
                v82 = 0;
              }
              else
              {
                v83 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                if ( *(_BYTE *)((v83 >> 3) + 0x7FFF8000) )
                  v83 = __asan_report_load8(v83);
                v84 = *(_QWORD *)v83 + 24LL;
                if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
                  v83 = __asan_report_load8(*(_QWORD *)v83 + 24LL);
                if ( (*(unsigned int (__fastcall **)(unsigned __int64))v84)(v83) == 4 )
                {
                  std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v4 + 256));
                  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 256)) )
                  {
                    common::milog::MiLogStream::create(
                      &v176,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/talk/player_talk_comp.cpp",
                      "execTalk",
                      371);
                    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v176,
                      (const char (*)[26])"[TALK] gadget_ptr is null");
                    common::milog::MiLogStream::~MiLogStream(&v176);
                    v3 = -1;
                    v88 = 0;
                  }
                  else if ( std::vector<unsigned int>::size(&talk_config_ptr->extra_load_mark_id) > 1 )
                  {
                    v89 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&talk_config_ptr->extra_load_mark_id, 0LL);
                    v90 = v89;
                    if ( *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v89 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v89);
                    }
                    config_id = *v90;
                    v91 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&talk_config_ptr->extra_load_mark_id, 1uLL);
                    v92 = v91;
                    if ( *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v91 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v91);
                    }
                    group_id = *v92;
                    v93 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                    GroupId = Entity::getGroupId((const Entity *const)v93);
                    if ( group_id != GroupId
                      || (v95 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256)),
                          ConfigId = Entity::getConfigId((const Entity *const)v95),
                          config_id != ConfigId) )
                    {
                      common::milog::MiLogStream::create(
                        &v176,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/talk/player_talk_comp.cpp",
                        "execTalk",
                        383);
                      v98 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                              &v176,
                              (const char (*)[63])"[TALK] gadget group_id & config_id not match, gadget_group_id:");
                      v99 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                      *(_DWORD *)(v4 + 64) = Entity::getGroupId((const Entity *const)v99);
                      v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v98,
                               (const unsigned int *)(v4 + 64));
                      v101 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                               v100,
                               (const char (*)[19])" gadget_config_id:");
                      v102 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                      *(_DWORD *)(v4 + 80) = Entity::getConfigId((const Entity *const)v102);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v101,
                        (const unsigned int *)(v4 + 80));
                      common::milog::MiLogStream::~MiLogStream(&v176);
                      v3 = -1;
                      v88 = 0;
                    }
                    else
                    {
                      v103 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                      Gadget::setGadgetTalkState(v103, *(_DWORD *)(v4 + 48));
                      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                      Entity::getGroup((const Entity *const)(v4 + 288));
                      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 288)) )
                      {
                        common::milog::MiLogStream::create(
                          &v176,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/talk/player_talk_comp.cpp",
                          "execTalk",
                          390);
                        v104 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                 &v176,
                                 (const char (*)[48])"[TALK] owner_group_ptr is null failed, talk_id:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v104,
                          (const unsigned int *)(v4 + 112));
                        common::milog::MiLogStream::~MiLogStream(&v176);
                        v3 = -1;
                        v105 = 0;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        Player::getAvatarComp(this->player_);
                        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v4 + 320));
                        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 320), 0LL) )
                        {
                          common::milog::MiLogStream::create(
                            &v176,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/talk/player_talk_comp.cpp",
                            "execTalk",
                            396);
                          v106 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                   &v176,
                                   (const char (*)[43])"[TALK] avatar_ptr is null failed, talk_id:");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v106,
                            (const unsigned int *)(v4 + 112));
                          common::milog::MiLogStream::~MiLogStream(&v176);
                          v3 = -1;
                          v107 = 0;
                        }
                        else
                        {
                          v108 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                          if ( Gadget::getGadgetTalkState(v108) )
                          {
                            EventUtil::createEvent((data::EventType)(v4 + 352));
                            v109 = 0LL;
                            if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v4 + 352), 0LL) )
                            {
                              v110 = *(_DWORD *)(v4 + 96);
                              v111 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                              v112 = *(_BYTE *)(((unsigned __int64)&v111->source_entity_id >> 3) + 0x7FFF8000);
                              if ( v112 != 0 && (char)((((_BYTE)v111 + 4) & 7) + 3) >= v112 )
                              {
                                LOBYTE(v109) = v112 != 0;
                                __asan_report_store4(&v111->source_entity_id, v109, (_BYTE)v111);
                              }
                              v111->source_entity_id = v110;
                              v113 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
                              AvatarId = Avatar::getAvatarId(v113);
                              v115 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                              v116 = *(_BYTE *)(((unsigned __int64)(v115 + 40) >> 3) + 0x7FFF8000);
                              LOBYTE(v109) = v116 != 0;
                              v117 = v116 != 0 && v116 <= 3;
                              if ( v117 )
                                v115 = __asan_report_store4(v115 + 40, v109, v117);
                              *(_DWORD *)(v115 + 40) = AvatarId;
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8(&this->player_);
                              Uid = Player::getUid(this->player_);
                              v119 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                              v120 = *(_BYTE *)(((unsigned __int64)&v119->uid >> 3) + 0x7FFF8000);
                              if ( v120 != 0 && (char)((((_BYTE)v119 + 60) & 7) + 3) >= v120 )
                              {
                                LOBYTE(v109) = v120 != 0;
                                __asan_report_store4(&v119->uid, v109, (_BYTE)v119);
                              }
                              v119->uid = Uid;
                              std::to_string((std::string *)&v176, *(_DWORD *)(v4 + 112));
                              v121 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                              v122 = &v176;
                              std::string::operator=(&v121->source_name, &v176);
                              std::string::~string(&v176);
                              v123 = config_id;
                              v124 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                              v125 = *(_BYTE *)(((unsigned __int64)&v124->param1 >> 3) + 0x7FFF8000);
                              if ( v125 != 0 && (char)((((_BYTE)v124 + 44) & 7) + 3) >= v125 )
                              {
                                LOBYTE(v122) = v125 != 0;
                                __asan_report_store4(&v124->param1, v122, (_BYTE)v124);
                              }
                              v124->param1 = v123;
                              v126 = *(_DWORD *)(v4 + 48);
                              v127 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                              v128 = *(_BYTE *)(((unsigned __int64)(v127 + 48) >> 3) + 0x7FFF8000);
                              LOBYTE(v122) = v128 != 0;
                              v129 = v128 != 0 && v128 <= 3;
                              if ( v129 )
                                v127 = __asan_report_store4(v127 + 48, v122, v129);
                              *(_DWORD *)(v127 + 48) = v126;
                              v130 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
                              Group::handleEvent(v130, (EventPtr *)(v4 + 352));
                            }
                            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 352));
                          }
                          v107 = 1;
                        }
                        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 320));
                        v105 = v107 != 0;
                      }
                      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 288));
                      v88 = v105;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v176,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/talk/player_talk_comp.cpp",
                      "execTalk",
                      376);
                    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v176,
                      (const char (*)[43])"[TALK] extra_load_mark_id size less than 2");
                    common::milog::MiLogStream::~MiLogStream(&v176);
                    v3 = -1;
                    v88 = 0;
                  }
                  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 256));
                  v82 = v88;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v176,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/talk/player_talk_comp.cpp",
                    "execTalk",
                    365);
                  v85 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                          &v176,
                          (const char (*)[71])"[TALK] TALK_EXEC_SET_GADGET_STATE entity type not gadget, entity_type:");
                  v86 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                  if ( *(_BYTE *)((v86 >> 3) + 0x7FFF8000) )
                    v86 = __asan_report_load8(v86);
                  v87 = *(_QWORD *)v86 + 24LL;
                  if ( *(_BYTE *)((v87 >> 3) + 0x7FFF8000) )
                    v86 = __asan_report_load8(*(_QWORD *)v86 + 24LL);
                  *(_DWORD *)(v4 + 80) = (*(__int64 (__fastcall **)(unsigned __int64))v87)(v86);
                  common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
                    v85,
                    (const proto::ProtEntityType *)(v4 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v176);
                  v3 = -1;
                  v82 = 0;
                }
              }
              std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 224));
              if ( v82 )
                goto LABEL_225;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              348);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v176,
              (const char (*)[30])"[TALK] param size less than 1");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
          }
          goto LABEL_227;
        case TALK_EXEC_SET_GAME_TIME:
          if ( std::vector<std::string>::size(&talk_exec->param) )
          {
            *(_DWORD *)(v4 + 80) = 0;
            v12 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
            common::tools::StringUtils::strToNum<float>(v12, (float *)(v4 + 80), 1);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::forceSetGameTime(BasicComp, (int)(float)(60.0 * *(float *)(v4 + 80)), 0, 1);
            goto LABEL_225;
          }
          common::milog::MiLogStream::create(
            &v176,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/talk/player_talk_comp.cpp",
            "execTalk",
            155);
          v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                 &v176,
                 (const char (*)[15])"invalid param:");
          v10 = common::milog::MiLogStream::operator<<<std::string>(v9, &talk_exec->param);
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v176);
          v3 = -1;
          goto LABEL_227;
        case TALK_EXEC_NOTIFY_GROUP_LUA:
          if ( std::vector<std::string>::size(&talk_exec->param) <= 1 )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              167);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v176,
              (const char (*)[23])"TalkExec config failed");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          *(_DWORD *)(v4 + 32) = 0;
          v14 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v14, (unsigned int *)(v4 + 32), 1) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              173);
            v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v176,
                    (const char (*)[24])" parse quest_id failed:");
            v16 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 384));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v176, ",", &__a);
          v17 = std::vector<std::string>::operator[](&talk_exec->param, 1uLL);
          v18 = common::tools::StringUtils::splitToList<unsigned int>(
                  v17,
                  (const std::string *)&v176,
                  (std::vector<unsigned int> *)(v4 + 384),
                  1) != 0;
          std::string::~string(&v176);
          std::allocator<char>::~allocator(&__a);
          if ( v18 )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              179);
            v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v176,
                    (const char (*)[26])" parse group_list failed:");
            v20 = std::vector<std::string>::operator[](&talk_exec->param, 1uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            v21 = 0;
            goto LABEL_89;
          }
          PlayerQuestComp::findQuest(
            (const PlayerQuestComp *const)(v4 + 160),
            (__int64)quest_comp,
            *(_DWORD *)(v4 + 32));
          if ( std::operator==<Quest>(0LL, (const std::shared_ptr<Quest> *)(v4 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              185);
            v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v176, (const char (*)[7])" talk:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v4 + 112));
            v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v23,
                    (const char (*)[22])" player has no quest:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v4 + 32));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v25, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v26 = 0;
LABEL_88:
            std::shared_ptr<Quest>::~shared_ptr((std::shared_ptr<Quest> *const)(v4 + 160));
            v21 = !v26;
LABEL_89:
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 384));
            if ( v21 )
              goto LABEL_225;
            goto LABEL_227;
          }
          v27 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          *(_DWORD *)(v4 + 48) = Quest::getState(v27);
          *(_QWORD *)(v4 + 192) = 0LL;
          *(_QWORD *)(v4 + 200) = 0LL;
          v28 = *(_DWORD *)(v4 + 48);
          if ( v28 == 2 )
          {
            EventUtil::createEvent((data::EventType)(v4 + 288));
            std::shared_ptr<Event>::operator=(
              (std::shared_ptr<Event> *const)(v4 + 192),
              (std::shared_ptr<Event> *)(v4 + 288));
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 288));
          }
          else
          {
            if ( v28 < 2 || (unsigned int)(v28 - 3) > 1 )
            {
              common::milog::MiLogStream::create(
                &v176,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/talk/player_talk_comp.cpp",
                "execTalk",
                201);
              v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      &v176,
                      (const char (*)[20])off_25F41580);
              v30 = common::milog::MiLogStream::operator<<<data::QuestState,(data::QuestState*)0>(
                      v29,
                      (const data::QuestState *)(v4 + 48));
              v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v30,
                      (const char (*)[12])" quest_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 32));
              common::milog::MiLogStream::~MiLogStream(&v176);
              v3 = -1;
              v32 = 0;
              goto LABEL_87;
            }
            EventUtil::createEvent((data::EventType)(v4 + 352));
            std::shared_ptr<Event>::operator=(
              (std::shared_ptr<Event> *const)(v4 + 192),
              (std::shared_ptr<Event> *)(v4 + 352));
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 352));
          }
          if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v4 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              206);
            v33 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v176,
                    (const char (*)[37])"createEvent EVENT_QUEST_FINISH fails");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v33, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            v32 = 0;
            goto LABEL_87;
          }
          std::to_string((std::string *)(v4 + 448), *(_DWORD *)(v4 + 32));
          v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v35 = (char *)(v4 + 448);
          std::string::operator=(&v34->source_name, v4 + 448);
          std::string::~string((void *)(v4 + 448));
          v36 = *(_DWORD *)(v4 + 32);
          v37 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v38 = *(_BYTE *)(((unsigned __int64)&v37->param1 >> 3) + 0x7FFF8000);
          if ( v38 != 0 && (char)((((_BYTE)v37 + 44) & 7) + 3) >= v38 )
          {
            LOBYTE(v35) = v38 != 0;
            __asan_report_store4(&v37->param1, v35, (_BYTE)v37);
          }
          v37->param1 = v36;
          v39 = *(_DWORD *)(v4 + 48) == 3;
          v40 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v41 = *(_BYTE *)(((unsigned __int64)(v40 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v35) = v41 != 0;
          v42 = v41 != 0 && v41 <= 3;
          if ( v42 )
            v40 = __asan_report_store4(v40 + 48, v35, v42);
          *(_DWORD *)(v40 + 48) = v39;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v43 = Player::getUid(this->player_);
          v44 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v45 = *(_BYTE *)(((unsigned __int64)&v44->uid >> 3) + 0x7FFF8000);
          if ( v45 != 0 && (char)((((_BYTE)v44 + 60) & 7) + 3) >= v45 )
          {
            LOBYTE(v35) = v45 != 0;
            __asan_report_store4(&v44->uid, v35, (_BYTE)v44);
          }
          v44->uid = v43;
          __for_range_0 = (std::vector<unsigned int> *)(v4 + 384);
          __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 384))._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
          break;
        case TALK_EXEC_SET_DAILY_TASK_VAR:
          PlayerQuestComp::execSetDailyTaskVar(quest_comp, *(_DWORD *)(v4 + 112), &talk_exec->param);
          goto LABEL_225;
        case TALK_EXEC_INC_DAILY_TASK_VAR:
          PlayerQuestComp::execIncDailyTaskVar(quest_comp, *(_DWORD *)(v4 + 112), &talk_exec->param);
          goto LABEL_225;
        case TALK_EXEC_DEC_DAILY_TASK_VAR:
          PlayerQuestComp::execDecDailyTaskVar(quest_comp, *(_DWORD *)(v4 + 112), &talk_exec->param);
          goto LABEL_225;
        case TALK_EXEC_SET_QUEST_VAR:
        case TALK_EXEC_INC_QUEST_VAR:
        case TALK_EXEC_DEC_QUEST_VAR:
          if ( std::vector<std::string>::size(&talk_exec->param) <= 2 )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              278);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v176,
              (const char (*)[20])"  param size not 3.");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          *(_DWORD *)(v4 + 48) = 0;
          *(_DWORD *)(v4 + 64) = 0;
          *(_DWORD *)(v4 + 80) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,int &,unsigned int &>(
                 &talk_exec->param,
                 (unsigned int *)(v4 + 48),
                 (int *)(v4 + 64),
                 (unsigned int *)(v4 + 80),
                 v68,
                 v69) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              286);
            v70 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v176,
                    (const char (*)[17])"param not valid:");
            common::milog::MiLogStream::operator<<<std::string>(v70, &talk_exec->param);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          PlayerQuestComp::findParentQuest(
            (const PlayerQuestComp *const)(v4 + 352),
            (__int64)quest_comp,
            *(_DWORD *)(v4 + 80));
          if ( std::operator==<ParentQuest>(0LL, (const std::shared_ptr<ParentQuest> *)(v4 + 352)) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              292);
            v71 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v176,
                    (const char (*)[27])"parent_quest_ptr is null, ");
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v71,
                    (const unsigned int *)(v4 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v72, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            v73 = 0;
          }
          else
          {
            v74 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
            set_value = ParentQuest::getQuestVar(v74, *(_DWORD *)(v4 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&talk_exec->type);
            }
            if ( talk_exec->type == TALK_EXEC_INC_QUEST_VAR )
            {
              set_value += *(_DWORD *)(v4 + 64);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&talk_exec->type);
              }
              if ( talk_exec->type == TALK_EXEC_SET_QUEST_VAR )
              {
                set_value = *(_DWORD *)(v4 + 64);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&talk_exec->type);
                }
                if ( talk_exec->type == TALK_EXEC_DEC_QUEST_VAR )
                  set_value -= *(_DWORD *)(v4 + 64);
              }
            }
            PlayerQuestComp::updateQuestVarByServer(
              quest_comp,
              *(_DWORD *)(v4 + 80),
              *(_DWORD *)(v4 + 48),
              set_value,
              1);
            v73 = 1;
          }
          std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v4 + 352));
          if ( !v73 )
            goto LABEL_227;
          goto LABEL_225;
        case TALK_EXEC_SET_QUEST_GLOBAL_VAR:
        case TALK_EXEC_INC_QUEST_GLOBAL_VAR:
        case TALK_EXEC_DEC_QUEST_GLOBAL_VAR:
          if ( std::vector<std::string>::size(&talk_exec->param) <= 1 )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              318);
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v176,
              (const char (*)[27])"param vec length must be 2");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          *(_DWORD *)(v4 + 64) = 0;
          *(_DWORD *)(v4 + 80) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,int &>(
                 &talk_exec->param,
                 (unsigned int *)(v4 + 64),
                 (int *)(v4 + 80),
                 (int *)&talk_exec->param) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              325);
            v75 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v176,
                    (const char (*)[17])"param not valid:");
            common::milog::MiLogStream::operator<<<std::string>(v75, &talk_exec->param);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          set_value_0 = PlayerQuestComp::getGlobalVarValue(quest_comp, *(_DWORD *)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&talk_exec->type);
          }
          if ( talk_exec->type == TALK_EXEC_INC_QUEST_GLOBAL_VAR )
          {
            set_value_0 += *(_DWORD *)(v4 + 80);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&talk_exec->type);
            }
            if ( talk_exec->type == TALK_EXEC_SET_QUEST_GLOBAL_VAR )
            {
              set_value_0 = *(_DWORD *)(v4 + 80);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&talk_exec->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&talk_exec->type);
              }
              if ( talk_exec->type == TALK_EXEC_DEC_QUEST_GLOBAL_VAR )
                set_value_0 -= *(_DWORD *)(v4 + 80);
            }
          }
          PlayerQuestComp::setGlobalVarValue(quest_comp, *(_DWORD *)(v4 + 64), set_value_0, 1);
          goto LABEL_225;
        case TALK_EXEC_TRANS_SCENE_DUMMY_POINT:
          if ( std::vector<std::string>::size(&talk_exec->param) <= 1 )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              419);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v176,
              (const char (*)[40])"[TALK] talk exec param size less than 2");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          *(_DWORD *)(v4 + 80) = 0;
          v131 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v131, (unsigned int *)(v4 + 80), 1) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              425);
            v132 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                     &v176,
                     (const char (*)[47])"[TALK] talk exec param strToNum failed, param:");
            v133 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v132, v133);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          v134 = std::vector<std::string>::operator[](&talk_exec->param, 1uLL);
          std::string::basic_string(v4 + 448, v134);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 352));
          v135 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
          scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(
                                      &v135->design_config.lua_config_mgr,
                                      *(_DWORD *)(v4 + 80));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 352));
          if ( scene_script_config_ptr )
          {
            std::string::basic_string(&v176, v4 + 448);
            dummy_point_config_ptr = SceneScriptConfig::findDummyPointScriptConfig(
                                       scene_script_config_ptr,
                                       (std::string *)&v176);
            std::string::~string(&v176);
            if ( dummy_point_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              SceneComp = (unsigned int)Player::getSceneComp(this->player_);
              PlayerSceneComp::findScene((const PlayerSceneComp *const)(v4 + 352), SceneComp);
              if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 352)) )
              {
                common::milog::MiLogStream::create(
                  &v176,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/talk/player_talk_comp.cpp",
                  "execTalk",
                  444);
                v142 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                         &v176,
                         (const char (*)[35])"[TALK] findScene failed, scene_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v142,
                  (const unsigned int *)(v4 + 80));
                common::milog::MiLogStream::~MiLogStream(&v176);
                v3 = -1;
                v143 = 0;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v155 = Player::getSceneComp(this->player_);
                TransferReason::TransferReason(&p_reason, ENTER_REASON_TALK_EXEC_TRANSFER);
                rot = &dummy_point_config_ptr->rot;
                v144 = dummy_point_config_ptr;
                v145 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                LOBYTE(v144) = PlayerSceneComp::jumpToScene(v155, v145, &v144->pos, rot, 0, &p_reason) != 0;
                TransferReason::~TransferReason(&p_reason);
                if ( (_BYTE)v144 )
                {
                  common::milog::MiLogStream::create(
                    &v176,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/talk/player_talk_comp.cpp",
                    "execTalk",
                    449);
                  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v176,
                    (const char (*)[26])"[TALK] jumpToScene failed");
                  common::milog::MiLogStream::~MiLogStream(&v176);
                  v3 = -1;
                  v143 = 0;
                }
                else
                {
                  v143 = 1;
                }
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 352));
              v137 = v143 != 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v176,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/talk/player_talk_comp.cpp",
                "execTalk",
                438);
              v138 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                       &v176,
                       (const char (*)[52])"[TALK] findDummyPointScriptConfig failed, scene_id:");
              v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v138,
                       (const unsigned int *)(v4 + 80));
              v140 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                       v139,
                       (const char (*)[15])", dummy_point:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v140, (const std::string *)(v4 + 448));
              common::milog::MiLogStream::~MiLogStream(&v176);
              v3 = -1;
              v137 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              432);
            v136 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                     &v176,
                     (const char (*)[47])"[TALK] findSceneScriptConfig failed, scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v136,
              (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            v137 = 0;
          }
          std::string::~string((void *)(v4 + 448));
          if ( !v137 )
            goto LABEL_227;
          goto LABEL_225;
        case TALK_EXEC_SAVE_TALK_ID:
          if ( !std::vector<std::string>::size(&talk_exec->param) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              458);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v176,
              (const char (*)[40])"[TALK] talk exec param size less than 1");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          *(_DWORD *)(v4 + 80) = 0;
          v146 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v146, (unsigned int *)(v4 + 80), 1) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              464);
            v147 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                     &v176,
                     (const char (*)[47])"[TALK] talk exec param strToNum failed, param:");
            v148 = std::vector<std::string>::operator[](&talk_exec->param, 0LL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v147, v148);
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 352));
          v149 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
          talk_config_ptr_0 = data::QuestExcelConfigMgrBase::findTalkExcelConfig(
                                &v149->design_config.txt_config_mgr.quest_config_mgr,
                                *(_DWORD *)(v4 + 80));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 352));
          if ( !talk_config_ptr_0 )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              470);
            v150 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                     &v176,
                     (const char (*)[43])"[TALK] findTalkExcelConfig fails, talk_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v150,
              (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            goto LABEL_227;
          }
          v151 = std::set<unsigned int>::insert(
                   &this->finished_talk_id_set_,
                   (const std::set<unsigned int>::value_type *)(v4 + 80));
          if ( !v151.second )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              476);
            v152 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     &v176,
                     (const char (*)[32])"[TALK] talk has been finished, ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v152,
              (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v176);
          }
          else
          {
            PlayerTalkComp::notifyFinishedTalkData(this);
          }
LABEL_225:
          __gnu_cxx::__normal_iterator<data::TalkExec const*,std::vector<data::TalkExec>>::operator++(&__for_begin);
          continue;
        default:
          goto LABEL_225;
      }
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v32 = 1;
          goto LABEL_87;
        }
        v46 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v47 = v46;
        if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v46);
        }
        *(_DWORD *)(v4 + 64) = *v47;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 224));
        v48 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        *(_DWORD *)(v4 + 80) = LuaConfigMgr::getSceneIdByGroupId(
                                 &v48->design_config.lua_config_mgr,
                                 *(_DWORD *)(v4 + 64));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 256));
        v49 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                             &v49->design_config.txt_config_mgr.scene_config_mgr,
                             *(_DWORD *)(v4 + 80));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 256));
        if ( !scene_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v176,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/talk/player_talk_comp.cpp",
            "execTalk",
            219);
          v50 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v176,
                  (const char (*)[40])"findSceneExcelConfig failed, scene_id: ");
          v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v50,
                  (const unsigned int *)(v4 + 80));
          v52 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v51, (const char (*)[9])" @group:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v176);
          v3 = -1;
LABEL_85:
          v32 = 0;
LABEL_87:
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 192));
          v26 = v32 == 0;
          goto LABEL_88;
        }
        *(_QWORD *)(v4 + 288) = 0LL;
        *(_QWORD *)(v4 + 296) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        if ( scene_config_ptr->type == SCENE_DUNGEON )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        if ( SceneExcelConfigMgr::isPlayerScene(scene_config_ptr->type) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v57 = (unsigned int)Player::getSceneComp(this->player_);
          PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v4 + 320), v57);
          std::shared_ptr<Scene>::operator=(
            (std::shared_ptr<Scene> *const)(v4 + 288),
            (std::shared_ptr<Scene> *)(v4 + 320));
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 320));
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 288), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v176,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "execTalk",
              237);
            v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v176,
                    (const char (*)[11])"findScene ");
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v58,
                    (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v59, (const char (*)[8])" failed");
            common::milog::MiLogStream::~MiLogStream(&v176);
            v3 = -1;
            v56 = 0;
            goto LABEL_83;
          }
          goto LABEL_79;
        }
        common::milog::MiLogStream::create(
          &v176,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/talk/player_talk_comp.cpp",
          "execTalk",
          243);
        v60 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v176,
                (const char (*)[20])"invalid scene_type:");
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        val = (char *)data::enumValToStr(scene_config_ptr->type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v60, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v176);
        v3 = -1;
        v56 = 0;
LABEL_83:
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 288));
        if ( !v56 )
          goto LABEL_85;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 352));
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v4 + 288), (std::shared_ptr<Scene> *)(v4 + 352));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 352));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 288), 0LL)
        || (v53 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288)),
            Scene::getSceneId(v53) != *(_DWORD *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v176,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/player_talk_comp.cpp",
          "execTalk",
          228);
        v55 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v176,
                (const char (*)[30])"getCurScene is not scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v176);
        v3 = -1;
        v56 = 0;
        goto LABEL_83;
      }
LABEL_79:
      v61 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
      Scene::findGroup((Scene *const)(v4 + 352), v61);
      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 352), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v176,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/player_talk_comp.cpp",
          "execTalk",
          250);
        v62 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v176, (const char (*)[11])"findGroup ");
        v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v62,
                (const unsigned int *)(v4 + 80));
        v64 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v63, (const char (*)[2])":");
        v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v64,
                (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v65, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v176);
        v3 = -1;
        v66 = 0;
      }
      else
      {
        v67 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
        Group::handleEvent(v67, (EventPtr *)(v4 + 192));
        v66 = 1;
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 352));
      v56 = v66 == 1;
      goto LABEL_83;
    }
    break;
  }
  v3 = 0;
LABEL_227:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
LABEL_228:
  result = v3;
  if ( v178 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 492: range 0000000016D26C26-0000000016D27169
__int64 __fastcall PlayerTalkComp::startBargain(PlayerTalkComp *const this, uint32_t bargain_id, uint32_t quest_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::pointer v9; // rax
  Bargain *v10; // rax
  int v11; // r15d
  Bargain *v12; // rax
  Bargain *v13; // rax
  std::shared_ptr<Bargain> *v14; // r8
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const data::BargainExcelConfig *config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 14 bargain_id:491 64 8 8 iter:501 96 16 15 bargain_ptr:520 128 16 15 bargain_ptr:504";
  *(_QWORD *)(v4 + 16) = PlayerTalkComp::startBargain;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = bargain_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 128));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  config_ptr = data::BargainExcelConfigMgrBase::findBargainExcelConfig(
                 &v7->design_config.txt_config_mgr.bargain_excel_config_mgr,
                 *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  if ( config_ptr )
  {
    *(std::map<unsigned int,std::shared_ptr<Bargain>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Bargain>>::find(
                                                                                &this->bargain_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Bargain>>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self *)(v4 + 64),
            &__y) )
      goto LABEL_25;
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > > *const)(v4 + 64));
    std::shared_ptr<Bargain>::shared_ptr((std::shared_ptr<Bargain> *const)(v4 + 128), &v9->second);
    if ( std::operator!=<Bargain>(0LL, (const std::shared_ptr<Bargain> *)(v4 + 128)) )
    {
      v10 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( Bargain::isStarted(v10) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/talk/player_talk_comp.cpp",
          "startBargain",
          509);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v19,
          (const char (*)[38])"[Bargain] bargain has already started");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        v12 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Bargain::activate(v12, quest_id);
      }
      v3 = 0;
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v4 + 128));
    if ( v11 == 1 )
    {
LABEL_25:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      toThisPtr<Player>((Player *)(v4 + 128));
      common::tools::perf::make_shared<Bargain,unsigned int &,std::shared_ptr<Player>>(
        (unsigned int *)(v4 + 96),
        (std::shared_ptr<Player> *)(v4 + 48),
        (unsigned int *)(v4 + 128),
        (std::shared_ptr<Player> *)(v4 + 48));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
      v13 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( Bargain::activate(v13, quest_id) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/player_talk_comp.cpp",
          "startBargain",
          523);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v19,
          (const char (*)[34])"[Bargain] bargain activate failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v3 = -1;
      }
      else
      {
        std::map<unsigned int,std::shared_ptr<Bargain>>::emplace<unsigned int &,std::shared_ptr<Bargain>&>(
          &this->bargain_map_,
          (unsigned int *)(v4 + 48),
          (std::shared_ptr<Bargain> *)(v4 + 96),
          (unsigned int *)&this->bargain_map_,
          v14);
        v3 = 0;
      }
      std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v4 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "startBargain",
      497);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v19,
           (const char (*)[37])"[Bargain] bargain config not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v3 = -1;
  }
  result = v3;
  if ( v20 == (char *)v4 )
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
  return result;
};

// Line 532: range 0000000016D2716A-0000000016D274E6
__int64 __fastcall PlayerTalkComp::stopBargain(PlayerTalkComp *const this, uint32_t bargain_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  Bargain *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 bargain_id:531 64 8 8 iter:533 96 16 15 bargain_ptr:541";
  *(_QWORD *)(v2 + 16) = PlayerTalkComp::stopBargain;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = bargain_id;
  *(std::map<unsigned int,std::shared_ptr<Bargain>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Bargain>>::find(
                                                                              &this->bargain_map_,
                                                                              (const std::map<unsigned int,std::shared_ptr<Bargain>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/talk/player_talk_comp.cpp",
      "stopBargain",
      537);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v13,
           (const char (*)[30])"[Bargain] bargain not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > > *const)(v2 + 64));
    std::shared_ptr<Bargain>::shared_ptr((std::shared_ptr<Bargain> *const)(v2 + 96), &v7->second);
    if ( std::operator==<Bargain>(0LL, (const std::shared_ptr<Bargain> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/talk/player_talk_comp.cpp",
        "stopBargain",
        544);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v13,
             (const char (*)[32])"[Bargain] bargain_ptr is null: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( Bargain::terminate(v9) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/player_talk_comp.cpp",
          "stopBargain",
          549);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v13,
                (const char (*)[36])"[Bargain] bargain terminate fails: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v13);
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v2 + 96));
  }
  result = v6;
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
  return result;
};

// Line 557: range 0000000016D274E8-0000000016D27842
__int64 __fastcall PlayerTalkComp::getBargainResult(
        PlayerTalkComp *const this,
        uint32_t bargain_id,
        proto::BargainResultType *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::pointer v7; // rax
  Bargain *v8; // rax
  __int64 v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 bargain_id:556 64 8 8 iter:558 96 16 15 bargain_ptr:565";
  *(_QWORD *)(v3 + 16) = PlayerTalkComp::getBargainResult;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = bargain_id;
  *(std::map<unsigned int,std::shared_ptr<Bargain>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Bargain>>::find(
                                                                              &this->bargain_map_,
                                                                              (const std::map<unsigned int,std::shared_ptr<Bargain>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "getBargainResult",
      561);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v12,
      (const char (*)[32])"[Bargain] bargain not activated");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = -1;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > > *const)(v3 + 64));
    std::shared_ptr<Bargain>::shared_ptr((std::shared_ptr<Bargain> *const)(v3 + 96), &v7->second);
    if ( std::operator==<Bargain>(0LL, (const std::shared_ptr<Bargain> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/talk/player_talk_comp.cpp",
        "getBargainResult",
        568);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v12,
        (const char (*)[30])"[Bargain] bargain_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( Bargain::getBargainResult(v8, result) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/player_talk_comp.cpp",
          "getBargainResult",
          574);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v12,
          (const char (*)[34])"[Bargain] getBargainResult failed");
        common::milog::MiLogStream::~MiLogStream(&v12);
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v3 + 96));
  }
  v9 = v6;
  if ( v13 == (char *)v3 )
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
  return v9;
};

// Line 581: range 0000000016D27844-0000000016D27FD5
int32_t __cdecl PlayerTalkComp::clientOfferPrice(
        PlayerTalkComp *const this,
        const proto::BargainOfferPriceReq *req,
        proto::BargainOfferPriceRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::pointer v10; // rax
  Bargain *v11; // rax
  Bargain *v12; // rax
  std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t CurMood; // edx
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t result; // eax
  char __args_0[5]; // [rsp+2Fh] [rbp-131h] BYREF
  unsigned int val; // [rsp+34h] [rbp-12Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self __y; // [rsp+38h] [rbp-128h] BYREF
  std::shared_ptr<BargainFinishEvent> __r; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-110h] BYREF
  char v28[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 14 bargain_id:584 48 4 9 price:585 64 4 10 result:610 80 4 16 result_param:611 96 8 8 ite"
                        "r:588 128 16 15 bargain_ptr:596 160 16 13 event_ptr:626";
  *(_QWORD *)(v3 + 16) = PlayerTalkComp::clientOfferPrice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  proto::BargainOfferPriceRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v3 + 32) = proto::BargainOfferPriceReq::bargain_id(req);
  *(_DWORD *)(v3 + 48) = proto::BargainOfferPriceReq::price(req);
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/talk/player_talk_comp.cpp",
    "clientOfferPrice",
    587);
  v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v27,
         (const char (*)[42])"[Bargain] client offer price with price: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v7, (const char (*)[4])" : ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v27);
  *(std::map<unsigned int,std::shared_ptr<Bargain>>::iterator *)(v3 + 96) = std::map<unsigned int,std::shared_ptr<Bargain>>::find(
                                                                              &this->bargain_map_,
                                                                              (const std::map<unsigned int,std::shared_ptr<Bargain>>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "clientOfferPrice",
      591);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v27,
      (const char (*)[32])"[Bargain] bargain not activated");
    common::milog::MiLogStream::~MiLogStream(&v27);
    proto::BargainOfferPriceRsp::set_retcode(rsp_0, 404);
    v9 = -1;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > > *const)(v3 + 96));
    std::shared_ptr<Bargain>::shared_ptr((std::shared_ptr<Bargain> *const)(v3 + 128), &v10->second);
    if ( std::operator==<Bargain>(0LL, (const std::shared_ptr<Bargain> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/talk/player_talk_comp.cpp",
        "clientOfferPrice",
        599);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v27,
        (const char (*)[30])"[Bargain] bargain_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v9 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Bargain::isFinish(v11) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/player_talk_comp.cpp",
          "clientOfferPrice",
          605);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v27,
          (const char (*)[27])"[Bargain] bargain finished");
        common::milog::MiLogStream::~MiLogStream(&v27);
        proto::BargainOfferPriceRsp::set_retcode(rsp_0, 405);
        v9 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( Bargain::offerPrice(
               v12,
               *(_DWORD *)(v3 + 48),
               (proto::BargainResultType *)(v3 + 64),
               (uint32_t *)(v3 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/talk/player_talk_comp.cpp",
            "clientOfferPrice",
            615);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v27,
            (const char (*)[36])"[Bargain] bargain offerPrice failed");
          common::milog::MiLogStream::~MiLogStream(&v27);
          v9 = -1;
        }
        else
        {
          proto::BargainOfferPriceRsp::set_retcode(rsp_0, 0);
          proto::BargainOfferPriceRsp::set_bargain_result(rsp_0, *(proto::BargainResultType *)(v3 + 64));
          v13 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          CurMood = Bargain::getCurMood(v13);
          proto::BargainOfferPriceRsp::set_cur_mood(rsp_0, CurMood);
          proto::BargainOfferPriceRsp::set_result_param(rsp_0, *(_DWORD *)(v3 + 80));
          if ( !*(_DWORD *)(v3 + 64) || *(_DWORD *)(v3 + 64) == 2 )
          {
            __args_0[0] = *(_DWORD *)(v3 + 64) == 0;
            common::tools::perf::make_shared<BargainFinishEvent,unsigned int &,bool>(
              (unsigned int *)&__r,
              (bool *)(v3 + 32),
              (unsigned int *)__args_0,
              (bool *)(v3 + 32));
            std::shared_ptr<BaseEvent>::shared_ptr<BargainFinishEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v3 + 160),
              &__r);
            std::shared_ptr<BargainFinishEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            EventComp = Player::getEventComp(this->player_);
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&__r,
              (const std::shared_ptr<BaseEvent> *)(v3 + 160));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
          }
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/talk/player_talk_comp.cpp",
            "clientOfferPrice",
            630);
          v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v27,
                  (const char (*)[42])"[Bargain] clientOfferPrice succ, result: ");
          v17 = common::milog::MiLogStream::operator<<<proto::BargainResultType,(proto::BargainResultType*)0>(
                  v16,
                  (const proto::BargainResultType *)(v3 + 64));
          v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])", cur_mood: ");
          *(_DWORD *)&__args_0[1] = proto::BargainOfferPriceRsp::cur_mood(rsp_0);
          v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)&__args_0[1]);
          v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v19,
                  (const char (*)[17])", result_param: ");
          val = proto::BargainOfferPriceRsp::result_param(rsp_0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v9 = 0;
        }
      }
    }
    std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v3 + 128));
  }
  result = v9;
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
  return result;
};

// Line 635: range 0000000016D27FD6-0000000016D28206
__int64 __fastcall PlayerTalkComp::getBargainSnapshot(
        PlayerTalkComp *const this,
        uint32_t bargain_id,
        proto::BargainSnapshot *snapshot)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::pointer v7; // rax
  Bargain *v8; // rax
  Bargain *v9; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 bargain_id:634 64 8 8 iter:636 96 16 15 bargain_ptr:642";
  *(_QWORD *)(v3 + 16) = PlayerTalkComp::getBargainSnapshot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = bargain_id;
  *(std::map<unsigned int,std::shared_ptr<Bargain>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Bargain>>::find(
                                                                              &this->bargain_map_,
                                                                              (const std::map<unsigned int,std::shared_ptr<Bargain>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = 404;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > > *const)(v3 + 64));
    std::shared_ptr<Bargain>::shared_ptr((std::shared_ptr<Bargain> *const)(v3 + 96), &v7->second);
    if ( std::operator==<Bargain>(0LL, (const std::shared_ptr<Bargain> *)(v3 + 96)) )
    {
      v6 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( Bargain::isFinish(v8) )
      {
        v6 = 405;
      }
      else
      {
        v9 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( Bargain::getBargainSnapshot(v9, snapshot) )
          v6 = -1;
        else
          v6 = 0;
      }
    }
    std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v3 + 96));
  }
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 662: range 0000000016D28208-0000000016D282EC
int32_t __cdecl PlayerTalkComp::getAllActivatedBargainData(
        PlayerTalkComp *const this,
        proto::GetAllActivatedBargainDataRsp *rsp_0)
{
  Bargain *v2; // rax
  Bargain *v3; // rax
  std::map<unsigned int,std::shared_ptr<Bargain>>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,std::shared_ptr<Bargain>>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Bargain>> *__for_range; // [rsp+28h] [rbp-28h]
  std::pair<unsigned int const,std::shared_ptr<Bargain> > *__in; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Bargain> > >::type *bargain_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Bargain> > >::type *bargain_ptr; // [rsp+40h] [rbp-10h]
  proto::BargainSnapshot *snapshot; // [rsp+48h] [rbp-8h]

  __for_range = &this->bargain_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::begin(&this->bargain_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator*(&__for_begin);
    bargain_id = std::get<0ul,unsigned int const,std::shared_ptr<Bargain>>(__in);
    bargain_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Bargain>>(__in);
    v2 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)bargain_ptr);
    if ( Bargain::isStarted(v2) )
    {
      snapshot = proto::GetAllActivatedBargainDataRsp::add_snapshot_list(rsp_0);
      v3 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)bargain_ptr);
      Bargain::getBargainSnapshot(v3, snapshot);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 675: range 0000000016D282EE-0000000016D287B5
__int64 __fastcall PlayerTalkComp::isPlayerItemLessThanBargainLimit(PlayerTalkComp *const this, uint32_t bargain_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t PackMaterialCount; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::pointer v8; // rax
  Bargain *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerItemComp *ItemComp; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  uint32_t *v13; // rdx
  __int64 result; // rax
  uint32_t item_id; // [rsp+1Ch] [rbp-E4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  const data::BargainExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 bargain_id:674 64 8 8 iter:683 96 16 15 bargain_ptr:689";
  *(_QWORD *)(v2 + 16) = PlayerTalkComp::isPlayerItemLessThanBargainLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = bargain_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  config_ptr = data::BargainExcelConfigMgrBase::findBargainExcelConfig(
                 &v5->design_config.txt_config_mgr.bargain_excel_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( config_ptr )
  {
    *(std::map<unsigned int,std::shared_ptr<Bargain>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Bargain>>::find(
                                                                                &this->bargain_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Bargain>>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,std::shared_ptr<Bargain>>::end(&this->bargain_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Self *)(v2 + 64),
           &__y) )
    {
      PackMaterialCount = 0;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > > *const)(v2 + 64));
      std::shared_ptr<Bargain>::shared_ptr((std::shared_ptr<Bargain> *const)(v2 + 96), &v8->second);
      if ( std::operator==<Bargain>(0LL, (const std::shared_ptr<Bargain> *)(v2 + 96)) )
      {
        PackMaterialCount = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Bargain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( Bargain::isFinish(v9) )
        {
          PackMaterialCount = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->item_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->item_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->item_id);
          }
          item_id = config_ptr->item_id;
          if ( std::vector<unsigned int>::size(&config_ptr->expected_value) == 2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ItemComp = Player::getItemComp(this->player_);
            PackMaterialCount = PlayerItemComp::getPackMaterialCount(ItemComp, item_id);
            v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config_ptr->expected_value, 1uLL);
            v13 = v12;
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v12);
            }
            LOBYTE(PackMaterialCount) = PackMaterialCount < *v13;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/talk/player_talk_comp.cpp",
              "isPlayerItemLessThanBargainLimit",
              703);
            v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v18,
                    (const char (*)[51])"[Bargain] config expected_value size should be 2: ");
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Bargain> > >::_Base_ptr)std::vector<unsigned int>::size(&config_ptr->expected_value);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)&__y);
            common::milog::MiLogStream::~MiLogStream(&v18);
            PackMaterialCount = 0;
          }
        }
      }
      std::shared_ptr<Bargain>::~shared_ptr((std::shared_ptr<Bargain> *const)(v2 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "isPlayerItemLessThanBargainLimit",
      679);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v18,
           (const char (*)[33])"[Bargain] bargain id not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    PackMaterialCount = 0;
  }
  result = PackMaterialCount;
  if ( v19 == (char *)v2 )
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

// Line 710: range 0000000016D287B6-0000000016D288A5
__int64 __fastcall PlayerTalkComp::tryAddFisrtMetNpc(PlayerTalkComp *const this, uint32_t npc_first_met_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 20 npc_first_met_id:709";
  *(_QWORD *)(v2 + 16) = PlayerTalkComp::tryAddFisrtMetNpc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = npc_first_met_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    v6 = std::set<unsigned int>::insert(
           &this->npc_first_met_id_set_,
           (const std::set<unsigned int>::value_type *)(v2 + 32));
    if ( !v6.second )
      result = 0xFFFFFFFFLL;
    else
      result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 723: range 0000000016D288A6-0000000016D289CD
void __cdecl PlayerTalkComp::checkAndAddAllNpcMetInQuest(PlayerTalkComp *const this)
{
  std::vector<unsigned int> *p_sub_quest_id_list; // rsi
  std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig> *npc_first_met_config_map; // [rsp+28h] [rbp-38h]
  const std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,data::NpcFirstMetExcelConfig> *v6; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::NpcFirstMetExcelConfig> >::type *npc_first_met_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::NpcFirstMetExcelConfig> >::type *npc_first_met_config; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v9; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  npc_first_met_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.npc_config_mgr.npc_first_met_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  __for_range = npc_first_met_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig>::begin(npc_first_met_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig>::end(npc_first_met_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false>::operator*(&__for_begin);
    npc_first_met_id = std::get<0ul,unsigned int const,data::NpcFirstMetExcelConfig>(v6);
    npc_first_met_config = (std::tuple_element<1,const std::pair<unsigned int const,data::NpcFirstMetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::NpcFirstMetExcelConfig>(v6);
    p_sub_quest_id_list = &npc_first_met_config->sub_quest_id_list;
    if ( *(_BYTE *)(((unsigned __int64)npc_first_met_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)npc_first_met_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_first_met_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(npc_first_met_id);
    }
    PlayerTalkComp::checkAndAddNpcMetInQuest(this, *npc_first_met_id, p_sub_quest_id_list);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 732: range 0000000016D289CE-0000000016D28AEA
void __cdecl PlayerTalkComp::checkAndAddNpcMetInQuest(
        PlayerTalkComp *const this,
        uint32_t npc_first_met_id,
        const std::vector<unsigned int> *sub_quest_id_list)
{
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-18h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+40h] [rbp-10h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  quest_comp = Player::getQuestComp(this->player_);
  __for_range = sub_quest_id_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(sub_quest_id_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(sub_quest_id_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( PlayerQuestComp::getQuestState(quest_comp, *v4) == QUEST_STATE_FINISHED )
    {
      PlayerTalkComp::tryAddFisrtMetNpc(this, npc_first_met_id);
      return;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
};

// Line 745: range 0000000016D28AEC-0000000016D28D6B
__int64 __fastcall PlayerTalkComp::addFinishedTalkByMuip(PlayerTalkComp *const this, uint32_t talk_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  const data::TalkExcelConfig *talk_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 talk_id:744";
  *(_QWORD *)(v2 + 16) = PlayerTalkComp::addFinishedTalkByMuip;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = talk_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  talk_config_ptr = data::QuestExcelConfigMgrBase::findTalkExcelConfig(
                      &v5->design_config.txt_config_mgr.quest_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( talk_config_ptr )
  {
    v8 = std::set<unsigned int>::insert(
           &this->finished_talk_id_set_,
           (const std::set<unsigned int>::value_type *)(v2 + 32));
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/talk/player_talk_comp.cpp",
        "addFinishedTalkByMuip",
        755);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v12,
             (const char (*)[32])"[TALK] talk has been finished, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 1LL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "addFinishedTalkByMuip",
      749);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v12,
           (const char (*)[43])"[TALK] findTalkExcelConfig fails, talk_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 1LL;
  }
  if ( v13 == (char *)v2 )
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

// Line 761: range 0000000016D28D6C-0000000016D28FEC
__int64 __fastcall PlayerTalkComp::delFinishedTalkByMuip(PlayerTalkComp *const this, uint32_t talk_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  const data::TalkExcelConfig *talk_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 talk_id:760";
  *(_QWORD *)(v2 + 16) = PlayerTalkComp::delFinishedTalkByMuip;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = talk_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  talk_config_ptr = data::QuestExcelConfigMgrBase::findTalkExcelConfig(
                      &v5->design_config.txt_config_mgr.quest_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( talk_config_ptr )
  {
    if ( std::set<unsigned int>::erase(
           &this->finished_talk_id_set_,
           (const std::set<unsigned int>::key_type *)(v2 + 32)) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/talk/player_talk_comp.cpp",
        "delFinishedTalkByMuip",
        771);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v11,
             (const char (*)[35])"[TALK] talk hasn't been finished, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 1LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/player_talk_comp.cpp",
      "delFinishedTalkByMuip",
      765);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v11,
           (const char (*)[43])"[TALK] findTalkExcelConfig fails, talk_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 1LL;
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

// Line 775: range 0000000016D40108-0000000016D4011C
void __cdecl GLOBAL__sub_I_merge_merge_music_game_activity_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 775: range 0000000016D3FBBE-0000000016D40107
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category **v2; // rdi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  __int64 misc_category; // rax
  const std::_V2::error_category *v7; // rax
  const std::_V2::error_category *v8; // rax
  const std::_V2::error_category *v9; // rax
  const std::_V2::error_category *v10; // rax
  const std::_V2::error_category *v11; // rax
  __int64 v12; // rsi
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  char v15; // dl
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  char v19; // dl
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  char v23; // dl
  __int64 v24; // rdx
  const char *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  char v28; // dl
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rdx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_music_game_activity.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      v2 = (const boost::system::error_category **)&boost::optional_ns::in_place_init_if;
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::system_category;
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   &std::__ioinit);
      }
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::netdb_category;
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  &std::__ioinit);
      }
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::addrinfo_category;
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     &std::__ioinit);
      }
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = (__int64)boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
      {
        v2 = (const boost::system::error_category **)boost::asio::error::misc_category;
        misc_category = __asan_report_store8(boost::asio::error::misc_category, &std::__ioinit);
      }
      boost::asio::error::misc_category[0] = misc_category;
      v7 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)v2);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v7);
      v8 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v8);
      v9 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v9);
      v10 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v10);
      v11 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v12 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v11);
      v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v15 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v12,
            v16);
        *v14 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v12 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v17 )
      {
        v18 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v12,
            v20);
        *v18 = 1;
        v12 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v21 )
      {
        v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v23 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v23 != 0;
        v24 = (v23 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v23);
        if ( (_BYTE)v24 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v12,
            v24);
        *v22 = 1;
        v25 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v12);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v25;
      }
      v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v26 )
      {
        v27 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v28 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v28 != 0;
        v29 = (v28 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v28);
        if ( (_BYTE)v29 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v12,
            v29);
        *v27 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v12 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v32);
        if ( (_BYTE)v33 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v12,
            v33);
        *v31 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};
