// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_mgr.cpp

// Line 32: range 000000001458D146-000000001458D4AB
int32_t __cdecl HomeSaveWaitData::sendToDb(HomeSaveWaitData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  uint32_t Now; // edi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  proto::HomeData *home_data; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 6 req:33";
  *(_QWORD *)(v1 + 16) = HomeSaveWaitData::sendToDb;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::SaveHomeDataReq::SaveHomeDataReq((proto::SaveHomeDataReq *const)(v1 + 32));
  home_data = proto::SaveHomeDataReq::mutable_home_data((proto::SaveHomeDataReq *const)(v1 + 32));
  proto::HomeData::CopyFrom(home_data, &this->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (unsigned int)Home::sendSaveHomeDataReq(this->home_uid, (proto::SaveHomeDataReq *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "sendToDb",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v13,
           (const char (*)[27])"saveToDb failed, home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->home_uid);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) )
    {
      Now = (_DWORD)this + 52;
      __asan_report_store4(&this->last_save_time);
    }
    this->last_save_time = Now;
    if ( *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ++this->try_save_count;
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_mgr.cpp",
      "sendToDb",
      44);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v13,
           (const char (*)[56])"[DATA_VERSION] save to db from save wait, data_version:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->data_version);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->home_uid);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = 0;
  }
  proto::SaveHomeDataReq::~SaveHomeDataReq((proto::SaveHomeDataReq *const)(v1 + 32));
  result = v5;
  if ( v14 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 49: range 000000001458D4AC-000000001458D6B6
void __fastcall SaveHomeQueue::enqueueSaveHome(SaveHomeQueue *const this, uint32_t home_uid, uint32_t save_timeout)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false>::pointer v6; // rdx
  char v7; // al
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 home_uid:48 64 8 7 iter:51";
  *(_QWORD *)(v3 + 16) = SaveHomeQueue::enqueueSaveHome;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = home_uid;
  *(std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::find(
                                                                                       &this->save_info_map_,
                                                                                       (const std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::end(&this->save_info_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false> *)(v3 + 64),
          &__y) )
    goto LABEL_9;
  v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v6->second.save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second.save_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( save_timeout > v6->second.save_timeout )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  if ( !v7 )
  {
    std::unordered_set<unsigned int>::insert(
      &this->need_save_home_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
    SaveHomeQueue::SaveInfo::SaveInfo((SaveHomeQueue::SaveInfo *const)&__y, *(_DWORD *)(v3 + 48), save_timeout);
    std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::insert_or_assign<SaveHomeQueue::SaveInfo>(
      &this->save_info_map_,
      (const std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::key_type *)(v3 + 48),
      (SaveHomeQueue::SaveInfo *)&__y);
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
};

// Line 61: range 000000001458D6B8-000000001458D7A0
void __fastcall SaveHomeQueue::removeSaveHome(SaveHomeQueue *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 home_uid:60";
  *(_QWORD *)(v2 + 16) = SaveHomeQueue::removeSaveHome;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = home_uid;
  std::unordered_set<unsigned int>::erase(
    &this->need_save_home_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::erase(
    &this->save_info_map_,
    (const std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 67: range 000000001458D7A2-000000001458E450
__int64 __fastcall SaveHomeQueue::sendSaveProto(
        SaveHomeQueue *const this,
        uint32_t allow_cost_time_ms,
        uint32_t hard_limit_cost_time_ms)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::pair<unsigned int const,SaveHomeQueue::SaveInfo> *n; // rax
  unsigned int *v8; // r8
  std::priority_queue<SaveHomeQueue::SaveInfo>::const_reference v9; // rdx
  char v10; // al
  std::priority_queue<SaveHomeQueue::SaveInfo>::const_reference v11; // rax
  _QWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int v16; // r15d
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 v22; // rax
  int v23; // r14d
  uint32_t v24; // ecx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __int64 result; // rax
  std::allocator<char> v44; // [rsp+22h] [rbp-1FEh] BYREF
  std::allocator<char> __a; // [rsp+23h] [rbp-1FDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-1FCh] BYREF
  std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo> *__for_range; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,SaveHomeQueue::SaveInfo> >::type *home_uid; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,std::pair<unsigned int const,SaveHomeQueue::SaveInfo> >::type *save_info; // [rsp+38h] [rbp-1E8h]
  std::pair<unsigned int const,SaveHomeQueue::SaveInfo> __in; // [rsp+44h] [rbp-1DCh] BYREF
  std::string title; // [rsp+50h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v52; // [rsp+70h] [rbp-1B0h] BYREF
  char v53[400]; // [rsp+90h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 48 4 13 begin_time:70 64 4 19 time_ms_from_now:84 80 4 12 home_uid:105 96 4 21 allow_cost_tim"
                        "e_ms:66 112 4 26 hard_limit_cost_time_ms:66 128 8 11 old_size:85 160 8 12 new_size:128 192 8 13 "
                        "save_info:102 224 16 8 timer:83 256 16 13 timer_user:88 288 32 18 save_info_queue:77";
  *(_QWORD *)(v4 + 16) = SaveHomeQueue::sendSaveProto;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 96) = allow_cost_time_ms;
  *(_DWORD *)(v4 + 112) = hard_limit_cost_time_ms;
  *(_DWORD *)(v4 + 48) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->last_send_proto_time_ == *(_DWORD *)(v4 + 48) )
  {
    v3 = 0;
  }
  else
  {
    std::priority_queue<SaveHomeQueue::SaveInfo>::priority_queue<std::vector<SaveHomeQueue::SaveInfo>,void>((std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
    __for_range = &this->save_info_map_;
    *(std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::iterator *)(v4 + 160) = std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::begin(&this->save_info_map_);
    *(std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::iterator *)(v4 + 192) = std::unordered_map<unsigned int,SaveHomeQueue::SaveInfo>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false> *)(v4 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false> *)(v4 + 192)) )
    {
      n = std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false> *const)(v4 + 160));
      if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&n->second.save_timeout + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.save_timeout + 3) >> 3)
                                                       + 0x7FFF8000) )
      {
        n = (std::pair<unsigned int const,SaveHomeQueue::SaveInfo> *)__asan_report_load_n(n, 12LL);
      }
      __in = *n;
      home_uid = std::get<0ul,unsigned int const,SaveHomeQueue::SaveInfo>(&__in);
      save_info = std::get<1ul,unsigned int const,SaveHomeQueue::SaveInfo>(&__in);
      std::priority_queue<SaveHomeQueue::SaveInfo>::emplace<unsigned int &,unsigned int &>(
        (std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288),
        (unsigned int *)save_info,
        &save_info->save_timeout,
        (unsigned int *)save_info,
        v8);
      std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,SaveHomeQueue::SaveInfo>,false,false> *const)(v4 + 160));
    }
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 224));
    *(_DWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 128) = std::priority_queue<SaveHomeQueue::SaveInfo>::size((const std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
    do
    {
      if ( std::priority_queue<SaveHomeQueue::SaveInfo>::empty((const std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288)) )
        break;
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 256));
      if ( *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 96) )
        goto LABEL_20;
      v9 = std::priority_queue<SaveHomeQueue::SaveInfo>::top((const std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
      if ( *(_BYTE *)(((unsigned __int64)&v9->save_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->save_timeout >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v9->save_timeout <= *(_DWORD *)(v4 + 48) )
LABEL_20:
        v10 = 0;
      else
        v10 = 1;
      if ( v10 )
      {
        v3 = 0;
      }
      else if ( *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 112) )
      {
        v11 = std::priority_queue<SaveHomeQueue::SaveInfo>::top((const std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
        v12 = v11;
        if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v11->save_timeout + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->save_timeout + 3) >> 3)
                                                          + 0x7FFF8000) )
        {
          __asan_report_load_n(v11, 8LL);
        }
        *(_QWORD *)(v4 + 192) = *v12;
        *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 192);
        std::priority_queue<SaveHomeQueue::SaveInfo>::pop((std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
        SaveHomeQueue::removeSaveHome(this, *(_DWORD *)(v4 + 80));
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_mgr.cpp",
          "sendSaveProto",
          113);
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v52,
                (const char (*)[26])"send save proto home_uid:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v4 + 80));
        v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                v14,
                (const char (*)[32])", save at (now - LastSaveTime):");
        v16 = *(_DWORD *)(v4 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->home_mgr_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = v16 - HomeMgr::getHomeLastSaveTime(this->home_mgr_, *(_DWORD *)(v4 + 80));
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v17,
                (const char (*)[26])", save at (timeout - now)");
        *(_QWORD *)(v4 + 160) = *(unsigned int *)(v4 + 196) - (unsigned __int64)*(unsigned int *)(v4 + 48);
        v19 = common::milog::MiLogStream::operator<<<long,(long *)0>(v18, (const __int64 *)(v4 + 160));
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", now:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v52);
        if ( *(_BYTE *)(((unsigned __int64)&this->home_mgr_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( HomeMgr::saveHomeToDb(this->home_mgr_, *(_DWORD *)(v4 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_mgr.cpp",
            "sendSaveProto",
            120);
          v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v52,
                  (const char (*)[31])"saveHomeToDb failed, home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v3 = 1;
        }
        else
        {
          *(_DWORD *)(v4 + 64) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 224))
                               / 1000;
          LODWORD(v22) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 256));
          common::milog::MiLog::writeLog(
            &common::milog::MiLogDefault::default_log_obj_,
            0xBu,
            "|%s|%u|%u|%s|%d|%s|%d",
            "timer",
            *(unsigned int *)(v4 + 80),
            0LL,
            "timerSaveHomeToDb",
            0LL,
            "RET_SUCC",
            v22);
          v23 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 256));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "timerSaveHomeToDb", &__a);
          std::allocator<char>::allocator(&v44);
          std::string::basic_string<std::allocator<char>>(&title, "timer", &v44);
          CmdReport::addCmdRecord(*(_DWORD *)(v4 + 80), &title, (const std::string *)&v52, v23, 1u);
          std::string::~string(&title);
          std::allocator<char>::~allocator(&v44);
          std::string::~string(&v52);
          std::allocator<char>::~allocator(&__a);
          v3 = 2;
        }
      }
      else
      {
        v3 = 0;
      }
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 256));
    }
    while ( v3 );
    *(_QWORD *)(v4 + 160) = std::priority_queue<SaveHomeQueue::SaveInfo>::size((const std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
    if ( *(_QWORD *)(v4 + 128) != *(_QWORD *)(v4 + 160) )
    {
      v24 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_send_proto_time_);
      }
      this->last_send_proto_time_ = v24;
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_mgr.cpp",
        "sendSaveProto",
        133);
      v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v52,
              (const char (*)[20])"save_time_cost_ms: ");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 64));
      v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])", save_num: ");
      *(_QWORD *)(v4 + 192) = *(_QWORD *)(v4 + 128) - *(_QWORD *)(v4 + 160);
      v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v27,
              (const unsigned __int64 *)(v4 + 192));
      v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])", old_size: ");
      v30 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v29,
              (const unsigned __int64 *)(v4 + 128));
      v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])", new_size:");
      v32 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v31,
              (const unsigned __int64 *)(v4 + 160));
      v33 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v32,
              (const char (*)[22])", allow_cost_time_ms:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 96));
      v35 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v34,
              (const char (*)[27])", hard_limit_cost_time_ms:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v52);
      if ( (unsigned int)(2 * *(_DWORD *)(v4 + 96)) < *(_DWORD *)(v4 + 64) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "sendSaveProto",
          140);
        v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v52,
                (const char (*)[20])"save time cost(ms):");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v4 + 64));
        v38 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v37,
                (const char (*)[45])" more than 2 * allow value, allow_value(ms):");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
      if ( *(_DWORD *)(v4 + 64) > *(_DWORD *)(v4 + 112) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_mgr.cpp",
          "sendSaveProto",
          146);
        v39 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v52,
                (const char (*)[20])"save time cost(ms):");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v4 + 64));
        v41 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v40,
                (const char (*)[33])" more than hard_limit_value(ms):");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
    }
    LOBYTE(v3) = *(_QWORD *)(v4 + 128) != *(_QWORD *)(v4 + 160);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 224));
    std::priority_queue<SaveHomeQueue::SaveInfo>::~priority_queue((std::priority_queue<SaveHomeQueue::SaveInfo> *const)(v4 + 288));
  }
  result = v3;
  if ( v53 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 155: range 000000001458E452-000000001458E7CA
HomeMgr *__fastcall HomeMgr::createHome(HomeMgr *const this, uint32_t home_uid, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  _BYTE *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  Home *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 home_uid:154 64 16 12 home_ptr:162";
  *(_QWORD *)(v3 + 16) = HomeMgr::createHome;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  v6 = ZTWN11ThreadLocal17is_in_work_threadE();
  v7 = (_BYTE *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v6);
  if ( *v7 != 1 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "createHome",
      158);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])off_2540BC40);
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)this, 0LL);
  }
  else
  {
    common::tools::perf::make_shared<Home,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 48));
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "createHome",
        165);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v13,
             (const char (*)[29])"createHome failed, home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)this, 0LL);
    }
    else
    {
      v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Home::constructHome(v9) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_mgr.cpp",
          "createHome",
          171);
        v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v13,
                (const char (*)[32])"constructHome failed, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v13);
        std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)this, (std::shared_ptr<Home> *)(v3 + 64));
      }
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 64));
  }
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
  return this;
};

// Line 180: range 000000001458E7CC-000000001458E94C
HomeMgr *__fastcall HomeMgr::findOnlineHome(
        HomeMgr *const this,
        std::unordered_map<unsigned int,std::shared_ptr<Home>> *home_uid,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 home_uid:179 64 8 6 it:181";
  *(_QWORD *)(v3 + 16) = HomeMgr::findOnlineHome;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Home>>::find(
                                                                                     home_uid,
                                                                                     (const std::unordered_map<unsigned int,std::shared_ptr<Home>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(home_uid)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)this, &v6->second);
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

// Line 191: range 000000001458E94E-000000001458EDA4
int32_t __cdecl HomeMgr::addOnlineHome(HomeMgr *const this, HomePtr *p_home_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::shared_ptr<Home> *v9; // rdx
  GameserverService *v10; // rax
  GameserverService *v11; // r14
  unsigned int v12; // eax
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> __x; // [rsp+10h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 home_uid:200";
  *(_QWORD *)(v2 + 16) = HomeMgr::addOnlineHome;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<Home>(0LL, p_home_ptr)
    || (v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr),
        !Home::getHomeUid(v5)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_mgr.cpp",
      "addOnlineHome",
      195);
    common::milog::MiLogStream::operator()(&v16, off_2540BD80);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    *(_DWORD *)(v2 + 32) = Home::getHomeUid(v8);
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::find(
                   &this->online_home_map_,
                   (const std::unordered_map<unsigned int,std::shared_ptr<Home>>::key_type *)(v2 + 32))._M_cur;
    __x._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(&this->online_home_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(&__x, &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_mgr.cpp",
        "addOnlineHome",
        203);
      common::milog::MiLogStream::operator()(&v16, "home home_uid=%u is already in HomeMgr", *(unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = -1;
    }
    else
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::find(&this->save_wait_home_map_, (const std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::key_type *)(v2 + 32))._M_cur;
      __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::end(&this->save_wait_home_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false> *)&__x,
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false> *)&__y) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "addOnlineHome",
          210);
        common::milog::MiLogStream::operator()(
          &v16,
          "home home_uid=%u is already in save_wait map",
          *(unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = -1;
      }
      else
      {
        v9 = std::unordered_map<unsigned int,std::shared_ptr<Home>>::operator[](
               &this->online_home_map_,
               (const std::unordered_map<unsigned int,std::shared_ptr<Home>>::key_type *)(v2 + 32));
        std::shared_ptr<Home>::operator=(v9, p_home_ptr);
        v10 = ServiceBox::findService<GameserverService>();
        GameserverService::updateHomeOnlineStatus(v10, *(_DWORD *)(v2 + 32), HomeOnlineStatusInfo_StatusType_ONLINE);
        v11 = ServiceBox::findService<GameserverService>();
        v12 = std::unordered_map<unsigned int,std::shared_ptr<Home>>::size(&this->online_home_map_);
        GameserverService::updateOnlineHomeNum(v11, v12);
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/home/home_mgr.cpp",
          "addOnlineHome",
          219);
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v16, (const char (*)[26])off_2540BE80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = 0;
      }
    }
  }
  if ( v17 == (char *)v2 )
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

// Line 226: range 000000001458EDA6-000000001458EE38
int32_t __cdecl HomeMgr::getOnlineHomeUidVec(HomeMgr *const this, std::vector<unsigned int> *home_uid_vec)
{
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Home>> *__for_range; // [rsp+20h] [rbp-10h]
  std::pair<unsigned int const,std::shared_ptr<Home> > *p; // [rsp+28h] [rbp-8h]

  std::vector<unsigned int>::clear(home_uid_vec);
  __for_range = &this->online_home_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::begin(&this->online_home_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(&this->online_home_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(&__for_begin, &__for_end) )
  {
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator*(&__for_begin);
    std::vector<unsigned int>::push_back(home_uid_vec, &p->first);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 235: range 000000001458EE3A-000000001458F66D
__int64 __fastcall HomeMgr::mvOnlineHomeToSaveWait(HomeMgr *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // r14d
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint64_t LoadRand; // r14
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Home *v15; // rax
  uint32_t DataVersion; // r14d
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Home *v18; // rax
  uint32_t LastSaveTime; // r14d
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  uint32_t *p_last_save_time; // rax
  Home *v22; // r14
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::shared_ptr<HomeSaveWaitData> *v25; // r8
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  GameserverService *v30; // rax
  GameserverService *v31; // r14
  unsigned int v32; // eax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  __int64 result; // rax
  int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> __y; // [rsp+18h] [rbp-128h] BYREF
  std::shared_ptr<HomeSession> v40; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v41; // [rsp+30h] [rbp-110h] BYREF
  char v42[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 home_uid:234 64 8 6 it:236 96 16 12 home_ptr:243 128 16 12 save_ptr:249 160 16 9 timer:276";
  *(_QWORD *)(v2 + 16) = HomeMgr::mvOnlineHomeToSaveWait;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = home_uid;
  *(std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Home>>::find(
                                                                                     &this->online_home_map_,
                                                                                     (const std::unordered_map<unsigned int,std::shared_ptr<Home>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(&this->online_home_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_mgr.cpp",
      "mvOnlineHomeToSaveWait",
      239);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v41, (const char (*)[21])off_2540BF80);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v6 = -1;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false> *const)(v2 + 64));
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 96), &v7->second);
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_mgr.cpp",
        "mvOnlineHomeToSaveWait",
        246);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v41,
             (const char (*)[27])"home_ptr is null,home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v6 = -1;
    }
    else
    {
      common::tools::perf::make_shared<HomeSaveWaitData>();
      if ( std::operator==<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "mvOnlineHomeToSaveWait",
          252);
        v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v41,
               (const char (*)[32])"home_data_ptr is null,home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        v6 = -1;
      }
      else
      {
        v10 = *(_DWORD *)(v2 + 48);
        v11 = (unsigned __int64)std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) <= 3 )
          v11 = __asan_report_store4(v11);
        *(_DWORD *)v11 = v10;
        v12 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LoadRand = Home::getLoadRand(v12);
        v14 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v14->load_rand >> 3) + 0x7FFF8000) )
          v14 = (std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v14->load_rand);
        v14->load_rand = LoadRand;
        v15 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        DataVersion = Home::getDataVersion(v15);
        v17 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v17->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->data_version);
        }
        v17->data_version = DataVersion;
        v18 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LastSaveTime = Home::getLastSaveTime(v18);
        v20 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        p_last_save_time = &v20->last_save_time;
        if ( *(_BYTE *)(((unsigned __int64)p_last_save_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_last_save_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_save_time >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_store4(p_last_save_time);
        }
        v20->last_save_time = LastSaveTime;
        v22 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v23 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( Home::toBin(v22, &v23->bin_data) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_mgr.cpp",
            "mvOnlineHomeToSaveWait",
            263);
          v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v41,
                  (const char (*)[28])"home tobin failed,home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v6 = -1;
        }
        else
        {
          std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          Home::unbindHomeSession((Home *const)&v40);
          std::shared_ptr<HomeSession>::~shared_ptr(&v40);
          std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::emplace<unsigned int &,std::shared_ptr<HomeSaveWaitData>&>(
            &this->save_wait_home_map_,
            (unsigned int *)(v2 + 48),
            (std::shared_ptr<HomeSaveWaitData> *)(v2 + 128),
            (unsigned int *)&this->save_wait_home_map_,
            v25);
          std::unordered_map<unsigned int,std::shared_ptr<Home>>::erase(
            &this->online_home_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<Home>>::key_type *)(v2 + 48));
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
          std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 96));
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_mgr.cpp",
            "mvOnlineHomeToSaveWait",
            278);
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v41,
                  (const char (*)[14])"destroy home:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v2 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])" cost:");
          val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160));
          v29 = common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &val);
          common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v29, (const char (*)[3])"us");
          common::milog::MiLogStream::~MiLogStream(&v41);
          v30 = ServiceBox::findService<GameserverService>();
          GameserverService::updateHomeOnlineStatus(v30, *(_DWORD *)(v2 + 48), HomeOnlineStatusInfo_StatusType_OFFLINE);
          v31 = ServiceBox::findService<GameserverService>();
          v32 = std::unordered_map<unsigned int,std::shared_ptr<Home>>::size(&this->online_home_map_);
          GameserverService::updateOnlineHomeNum(v31, v32);
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_mgr.cpp",
            "mvOnlineHomeToSaveWait",
            300);
          v33 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v41,
                  (const char (*)[53])"[HOME][LOGOUT] home move to save wait, data_version:");
          v34 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v34->data_version);
          v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v35, (const char (*)[12])", home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v6 = 0;
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
        }
      }
      std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v2 + 128));
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
  }
  result = v6;
  if ( v42 == (char *)v2 )
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
  return result;
};

// Line 306: range 000000001458F66E-000000001458FDF5
__int64 __fastcall HomeMgr::checkSaveCoolDown(HomeMgr *const this, uint32_t home_uid)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r15d
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  time_t v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 v22; // r15
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 result; // rax
  double home_timer_save_time_interval; // [rsp+8h] [rbp-138h]
  double v27; // [rsp+8h] [rbp-138h]
  uint32_t last_save_time; // [rsp+24h] [rbp-11Ch]
  __int64 val; // [rsp+28h] [rbp-118h] BYREF
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<Config> v31; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 try_count:308 64 4 13 next_time:331 80 4 12 home_uid:305 96 16 12 home_ptr:309 128 16 12 save_ptr:317";
  *(_QWORD *)(v3 + 16) = HomeMgr::checkSaveCoolDown;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 80) = home_uid;
  last_save_time = 0;
  *(_DWORD *)(v3 + 48) = 0;
  HomeMgr::findOnlineHome((HomeMgr *const)(v3 + 96), &this->online_home_map_, *(_DWORD *)(v3 + 80));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "checkSaveCoolDown",
      312);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v32,
           (const char (*)[30])"home is not nullptr,home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v2 = 0;
  }
  else
  {
    HomeMgr::findSaveWaitHome((HomeMgr *const)(v3 + 128), (uint32_t)this);
    if ( std::operator!=<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(v3 + 128), 0LL) )
    {
      v7 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      last_save_time = v7->last_save_time;
      v8 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v8->try_save_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->try_save_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = v8->try_save_count;
      v9 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "checkSaveCoolDown",
        325);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v32,
              (const char (*)[27])"find home failed,home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v32);
      v2 = 1;
      v9 = 0;
    }
    std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v3 + 128));
    if ( v9 == 1 )
    {
      if ( *(_DWORD *)(v3 + 48) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        if ( *(_BYTE *)(((unsigned __int64)&v11->home_timer_save_time_interval >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->home_timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        home_timer_save_time_interval = (double)(int)v11->home_timer_save_time_interval;
        *(_DWORD *)(v3 + 64) = (int)(std::pow<double,unsigned int>(1.5, *(_DWORD *)(v3 + 48) - 1)
                                   * home_timer_save_time_interval);
        std::shared_ptr<Config>::~shared_ptr(&v30);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
        if ( *(_BYTE *)(((unsigned __int64)&v12->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v13 = v12->home_save_timeout_max_cooldown_expo < *(_DWORD *)(v3 + 48);
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( v13 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v31);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
          if ( *(_BYTE *)(((unsigned __int64)&v14->home_timer_save_time_interval >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v14->home_timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v27 = (double)(int)v14->home_timer_save_time_interval;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 128));
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v15->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v15->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 64) = (int)(std::pow<int,unsigned int>(2, v15->home_save_timeout_max_cooldown_expo - 1) * v27);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
          std::shared_ptr<Config>::~shared_ptr(&v31);
        }
        v16 = *(_DWORD *)(v3 + 64) + last_save_time;
        if ( v16 <= common::tools::TimeUtils::getNow() )
        {
          v2 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_mgr.cpp",
            "checkSaveCoolDown",
            339);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v32,
                  (const char (*)[22])"[SAVE]try_save_count:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])",delay time:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 64));
          v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])",time left:");
          v22 = *(_DWORD *)(v3 + 64) + last_save_time;
          val = v22 - common::tools::TimeUtils::getNow();
          v23 = common::milog::MiLogStream::operator<<<long,(long *)0>(v21, &val);
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])",home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v32);
          v2 = 0;
        }
      }
      else
      {
        v2 = 1;
      }
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 96));
  result = v2;
  if ( v33 == (char *)v3 )
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
  return result;
};

// Line 348: range 000000001458FDF6-000000001459005C
__int64 __fastcall HomeMgr::saveHomeToDb(HomeMgr *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Home *v5; // rax
  unsigned int v6; // r14d
  HomeSaveWaitData *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 home_uid:347 64 16 12 home_ptr:349 96 16 12 save_ptr:354";
  *(_QWORD *)(v2 + 16) = HomeMgr::saveHomeToDb;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = home_uid;
  HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 64), &this->online_home_map_, *(_DWORD *)(v2 + 48));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = Home::saveToDb(v5);
  }
  else
  {
    HomeMgr::findSaveWaitHome((HomeMgr *const)(v2 + 96), (uint32_t)this);
    if ( std::operator!=<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(v2 + 96), 0LL) )
    {
      v7 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v6 = HomeSaveWaitData::sendToDb(v7);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "saveHomeToDb",
        359);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v10,
             (const char (*)[32])"cannot find home info,home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v10);
      v6 = -1;
    }
    std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v2 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
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

// Line 364: range 000000001459005E-00000000145902F8
__int64 __fastcall HomeMgr::getHomeLastSaveTime(HomeMgr *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Home *v5; // rax
  uint32_t LastSaveTime; // r14d
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 home_uid:363 64 16 12 home_ptr:365 96 16 12 save_ptr:370";
  *(_QWORD *)(v2 + 16) = HomeMgr::getHomeLastSaveTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = home_uid;
  HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 64), &this->online_home_map_, *(_DWORD *)(v2 + 48));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LastSaveTime = Home::getLastSaveTime(v5);
  }
  else
  {
    HomeMgr::findSaveWaitHome((HomeMgr *const)(v2 + 96), (uint32_t)this);
    if ( std::operator!=<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(v2 + 96), 0LL) )
    {
      v7 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      LastSaveTime = v7->last_save_time;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "getHomeLastSaveTime",
        375);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v10,
             (const char (*)[32])"cannot find home info,home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v10);
      LastSaveTime = 0;
    }
    std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v2 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = LastSaveTime;
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

// Line 401: range 00000000145902FA-00000000145906FC
int32_t __cdecl HomeMgr::stopAllOnlineHomeAndMoveToSaveWait(HomeMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false>::pointer v5; // rax
  Home *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t *v9; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-130h] BYREF
  char v14[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 12 home_uid:406 64 8 6 it:404 96 16 12 home_ptr:407 128 56 12 home_set:403";
  *(_QWORD *)(v1 + 16) = HomeMgr::stopAllOnlineHomeAndMoveToSaveWait;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  *(std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Home>>::begin(&this->online_home_map_);
  while ( 1 )
  {
    __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(&this->online_home_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> *)(v1 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false> *)&__for_end) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = v4->first;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false> *const)(v1 + 64));
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 96), &v5->second);
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( Home::stop(v6) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "stopAllOnlineHomeAndMoveToSaveWait",
        413);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v13, (const char (*)[10])"home_uid:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" stop failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::unordered_set<unsigned int>::insert(
      (std::unordered_set<unsigned int> *const)(v1 + 128),
      (const std::unordered_set<unsigned int>::value_type *)(v1 + 48));
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 96));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home> >,false,false> *const)(v1 + 64),
      0);
  }
  __for_range = (std::unordered_set<unsigned int> *)(v1 + 128);
  *(std::unordered_set<unsigned int>::iterator *)(v1 + 64) = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v1 + 128));
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v1 + 64),
            &__for_end) )
  {
    v9 = (uint32_t *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    HomeMgr::mvOnlineHomeToSaveWait(this, *v9);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v1 + 64));
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  result = 0;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 428: range 00000000145906FE-0000000014590886
HomeMgr *__fastcall HomeMgr::findSaveWaitHome(
        HomeMgr *const this,
        std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *home_uid,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 home_uid:427 64 8 6 it:429";
  *(_QWORD *)(v3 + 16) = HomeMgr::findSaveWaitHome;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::find(
                                                                                                 home_uid + 1,
                                                                                                 (const std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::end(home_uid + 1)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<HomeSaveWaitData>::shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false,false> *const)(v3 + 64));
    std::shared_ptr<HomeSaveWaitData>::shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)this, &v6->second);
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

// Line 439: range 0000000014590888-000000001459096D
__int64 __fastcall HomeMgr::delSaveWaitHome(HomeMgr *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 home_uid:438";
  *(_QWORD *)(v2 + 16) = HomeMgr::delSaveWaitHome;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = home_uid;
  if ( std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::erase(
         &this->save_wait_home_map_,
         (const std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::key_type *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  if ( v6 == (char *)v2 )
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

// Line 449: range 000000001459096E-0000000014590E4B
__int64 __fastcall HomeMgr::checkSaveWaitHome(
        HomeMgr *const this,
        uint32_t home_save_timeout_after_send_proto,
        uint32_t check_interval)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t now; // [rsp+1Ch] [rbp-104h]
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *__for_range; // [rsp+30h] [rbp-F0h]
  std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> > *p; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<HomeSaveWaitData> p_save_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 22 save_timeout_count:457 64 4 38 home_save_timeout_after_send_proto:448 80 4 18 check_in"
                        "terval:448 96 16 12 save_ptr:460";
  *(_QWORD *)(v3 + 16) = HomeMgr::checkSaveWaitHome;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 64) = home_save_timeout_after_send_proto;
  *(_DWORD *)(v3 + 80) = check_interval;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now > this->last_check_save_wait_time_ + *(_DWORD *)(v3 + 80) )
  {
    *(_DWORD *)(v3 + 48) = 0;
    __for_range = &this->save_wait_home_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::begin(&this->save_wait_home_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::end(&this->save_wait_home_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData>>,false>(
              &__for_begin,
              &__for_end) )
    {
      p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData>>,false,false>::operator*(&__for_begin);
      std::shared_ptr<HomeSaveWaitData>::shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v3 + 96), &p->second);
      if ( std::operator!=<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(v3 + 96), 0LL) )
      {
        v7 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v7 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( now >= v7->last_save_time + *(_DWORD *)(v3 + 64) )
        {
          ++*(_DWORD *)(v3 + 48);
          v8 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( (unsigned __int8)HomeMgr::checkSaveCoolDown(this, v8->home_uid) )
          {
            std::shared_ptr<HomeSaveWaitData>::shared_ptr(
              &p_save_ptr,
              (const std::shared_ptr<HomeSaveWaitData> *)(v3 + 96));
            HomeMgr::enqueueSaveHome(this, &p_save_ptr, now);
            std::shared_ptr<HomeSaveWaitData>::~shared_ptr(&p_save_ptr);
          }
        }
      }
      std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v3 + 96));
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData>>,false,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_check_save_wait_time_);
    }
    this->last_check_save_wait_time_ = now;
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_mgr.cpp",
        "checkSaveWaitHome",
        477);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v23,
             (const char (*)[20])"save_wait_home_num:");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSaveWaitData> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::size(&this->save_wait_home_map_);
      v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v9,
              (const unsigned __int64 *)&__for_end);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])", save_timeout_count:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              v12,
              (const char (*)[38])", home_save_timeout_after_send_proto:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v14,
              (const char (*)[18])", check_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
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

// Line 487: range 0000000014590E4C-0000000014590E65
uint32_t __cdecl HomeMgr::getOnlineHomeNum(HomeMgr *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<Home>>::size(&this->online_home_map_);
};

// Line 492: range 0000000014590E66-0000000014590E83
uint32_t __cdecl HomeMgr::getSaveWaitHomeNum(HomeMgr *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::size(&this->save_wait_home_map_);
};

// Line 497: range 0000000014590E84-00000000145911CD
int32_t __cdecl HomeMgr::foreachHome(HomeMgr *const this, std::function<ForeachPolicy(Home&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::size_type v6; // rax
  int v7; // r14d
  Home *v8; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Home>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<Home>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<Home> *online_home_wtr; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<Home> > *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Home> > >::type *online_home_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Home> > >::type *online_home_ptr; // [rsp+58h] [rbp-B8h]
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 19 online_home_ptr:507 64 24 19 online_home_vec:499";
  *(_QWORD *)(v3 + 16) = HomeMgr::foreachHome;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Home>>::vector((std::vector<std::weak_ptr<Home>> *const)(v3 + 64));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Home>>::size(&this->online_home_map_);
  std::vector<std::weak_ptr<Home>>::reserve((std::vector<std::weak_ptr<Home>> *const)(v3 + 64), v6);
  __for_range = &this->online_home_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::begin(&this->online_home_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(&this->online_home_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator*(&__for_begin);
    online_home_id = std::get<0ul,unsigned int const,std::shared_ptr<Home>>(__in);
    online_home_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Home>>(__in);
    std::vector<std::weak_ptr<Home>>::emplace_back<std::shared_ptr<Home> &>(
      (std::vector<std::weak_ptr<Home>> *const)(v3 + 64),
      online_home_ptr,
      online_home_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Home>> *)(v3 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false>::__node_type *)std::vector<std::weak_ptr<Home>>::begin((std::vector<std::weak_ptr<Home>> *const)(v3 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Home> >,false>::__node_type *)std::vector<std::weak_ptr<Home>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Home> *,std::vector<std::weak_ptr<Home>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Home>*,std::vector<std::weak_ptr<Home>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Home>*,std::vector<std::weak_ptr<Home>> > *)&__for_end) )
  {
    online_home_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Home> *,std::vector<std::weak_ptr<Home>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Home>*,std::vector<std::weak_ptr<Home>> > *const)&__for_begin);
    std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v3 + 32));
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(Home &)>::operator()(p_func, v8) )
      {
        v2 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
    if ( v7 && v7 != 2 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Home> *,std::vector<std::weak_ptr<Home>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Home>*,std::vector<std::weak_ptr<Home>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_18:
  std::vector<std::weak_ptr<Home>>::~vector((std::vector<std::weak_ptr<Home>> *const)(v3 + 64));
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 522: range 00000000145911CE-0000000014591282
int32_t __cdecl HomeMgr::init(HomeMgr *const this)
{
  HomeMgr **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  uint64_t NowMs; // rdx
  HomeMgr *v5; // [rsp+18h] [rbp-58h] BYREF
  void (*__f[2])(HomeMgr *, unsigned __int64); // [rsp+20h] [rbp-50h] BYREF
  std::_Bind<void (HomeMgr::*(HomeMgr*,std::_Placeholder<1>))(long unsigned int)> __args_0; // [rsp+30h] [rbp-40h] BYREF

  v5 = this;
  __f[0] = (void (*)(HomeMgr *, unsigned __int64))HomeMgr::onDailyRefreshTimer;
  __f[1] = 0LL;
  std::bind<void (HomeMgr::*)(unsigned long),HomeMgr*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (HomeMgr::*)(long unsigned int),HomeMgr*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  common::tools::perf::make_shared<UnixTimer,std::_Bind<void (HomeMgr::*)(unsigned long) ()(HomeMgr*,std::_Placeholder<1>)>>(
    &__args_0,
    (std::_Bind<void (HomeMgr::*(HomeMgr*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<UnixTimer>::operator=(&this->daily_refresh_timer_ptr_, (std::shared_ptr<UnixTimer> *)&__args_0);
  std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
  NowMs = common::tools::TimeUtils::getNowMs();
  HomeMgr::onDailyRefreshTimer(this, NowMs);
  return 0;
};

// Line 529: range 0000000014591284-00000000145912E3
void __cdecl HomeMgr::destroy(HomeMgr *const this)
{
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax

  std::unordered_map<unsigned int,std::shared_ptr<Home>>::clear(&this->online_home_map_);
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>>::clear(&this->save_wait_home_map_);
  if ( std::operator!=<UnixTimer>(&this->daily_refresh_timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->daily_refresh_timer_ptr_);
    common::tools::MiTimer::cancel(v1);
  }
};

// Line 539: range 00000000145912E4-00000000145913ED
void __cdecl HomeMgr::enqueueSaveHome(HomeMgr *const this, HomePtr *p_home_ptr)
{
  Home *v2; // rax
  uint32_t LastSaveTime; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  uint32_t v5; // r12d
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t HomeUid; // eax
  std::shared_ptr<Config> v8[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( !std::operator==<Home>(0LL, p_home_ptr) )
  {
    v2 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    LastSaveTime = Home::getLastSaveTime(v2);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v8);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
    if ( *(_BYTE *)(((unsigned __int64)&v4->home_max_save_time_interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->home_max_save_time_interval >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = v4->home_max_save_time_interval + LastSaveTime;
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    HomeUid = Home::getHomeUid(v6);
    SaveHomeQueue::enqueueSaveHome(&this->save_home_queue_, HomeUid, v5);
    std::shared_ptr<Config>::~shared_ptr(v8);
  }
};

// Line 550: range 00000000145913EE-0000000014591474
void __cdecl HomeMgr::enqueueSaveHome(HomeMgr *const this, HomeSaveWaitDataPtr *p_save_ptr, uint32_t save_timeout)
{
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( !std::operator==<HomeSaveWaitData>(0LL, p_save_ptr) )
  {
    v3 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    SaveHomeQueue::enqueueSaveHome(&this->save_home_queue_, v3->home_uid, save_timeout);
  }
};

// Line 559: range 0000000014591476-00000000145914D5
void __cdecl HomeMgr::enqueueSaveHome(HomeMgr *const this, HomePtr *p_home_ptr, uint32_t save_timeout)
{
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t HomeUid; // eax

  if ( !std::operator==<Home>(0LL, p_home_ptr) )
  {
    v3 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    HomeUid = Home::getHomeUid(v3);
    SaveHomeQueue::enqueueSaveHome(&this->save_home_queue_, HomeUid, save_timeout);
  }
};

// Line 568: range 00000000145914D6-0000000014591501
bool __cdecl HomeMgr::sendSaveProto(HomeMgr *const this, uint32_t allow_cost_time_ms, uint32_t hard_limit_cost_time_ms)
{
  return SaveHomeQueue::sendSaveProto(&this->save_home_queue_, allow_cost_time_ms, hard_limit_cost_time_ms);
};

// Line 573: range 0000000014591648-0000000014591821
void __cdecl HomeMgr::onReloadConfig(HomeMgr *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::shared_ptr<Config> v5; // [rsp+10h] [rbp-D0h] BYREF
  std::function<ForeachPolicy(Home&)> p_func; // [rsp+20h] [rbp-C0h] BYREF
  char v7[160]; // [rsp+40h] [rbp-A0h] BYREF

  v1 = (std::set<unsigned int> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 29 closed_home_module_id_set:574";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)HomeMgr::onReloadConfig;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  FeatureSwitchMgr::getAllClosedHomeModule(v1 + 1, &v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  std::function<ForeachPolicy ()(Home &)>::function<HomeMgr::onReloadConfig(void)::{lambda(Home &)#1},void,void>(
    &p_func,
    (HomeMgr::onReloadConfig::<lambda(Home&)>)&v1[1]);
  HomeMgr::foreachHome(this, &p_func);
  std::function<ForeachPolicy ()(Home &)>::~function(&p_func);
  std::set<unsigned int>::~set(v1 + 1);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 575: range 0000000014591502-0000000014591647
ForeachPolicy __cdecl HomeMgr::onReloadConfig(void)::{lambda(Home &)#1}::operator()(
        const HomeMgr::onReloadConfig::<lambda(Home&)> *const __closure,
        Home *home)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HomeSceneComp *SceneComp; // rax
  ForeachPolicy result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 cur_module_id:577";
  *(_QWORD *)(v2 + 16) = HomeMgr::onReloadConfig(void)::{lambda(Home &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Home::getCurModuleId(home);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __y._M_node = std::set<unsigned int>::end(__closure->__closed_home_module_id_set)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  __closure->__closed_home_module_id_set,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    SceneComp = Home::getSceneComp(home);
    HomeSceneComp::onCurModuleIdClosed(SceneComp);
  }
  result = FOREACH_CONTINUE;
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

// Line 588: range 0000000014591822-0000000014591F9D
void __cdecl HomeMgr::onDailyRefreshTimer(HomeMgr *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  Home *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t time_offset_sec; // [rsp+10h] [rbp-130h]
  uint32_t cur_refresh_day; // [rsp+14h] [rbp-12Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-110h] BYREF
  char v24[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 7 now:589 64 4 21 next_refresh_time:619 80 4 12 interval:626 96 16 12 home_ptr:602 128 24"
                        " 16 home_uid_vec:597";
  *(_QWORD *)(v2 + 16) = HomeMgr::onDailyRefreshTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = now_ms / 0x3E8;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  cur_refresh_day = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v2 + 48), time_offset_sec);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cur_refresh_day != this->last_refresh_day_ )
  {
    this->last_refresh_day_ = cur_refresh_day;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    HomeMgr::getOnlineHomeUidVec(this, (std::vector<unsigned int> *)(v2 + 128));
    __for_range = (std::vector<unsigned int> *)(v2 + 128);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 80) = *v6;
      HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 96), &this->online_home_map_, *(_DWORD *)(v2 + 80));
      if ( std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "onDailyRefreshTimer",
          605);
        v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v23,
               (const char (*)[31])"findOnlineHome fail, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Home::onDailyRefresh(v8);
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  }
  if ( std::operator==<UnixTimer>(0LL, &this->daily_refresh_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "onDailyRefreshTimer",
      615);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v23,
      (const char (*)[33])"daily_refresh_timer_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    *(_DWORD *)(v2 + 64) = common::tools::TimeUtils::getDailyStartTime(cur_refresh_day + 1, time_offset_sec);
    if ( *(_DWORD *)(v2 + 64) > *(_DWORD *)(v2 + 48) )
    {
      *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 64) - *(_DWORD *)(v2 + 48) + 10;
      v12 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->daily_refresh_timer_ptr_);
      common::tools::MiTimer::cancel(v12);
      v13 = (unsigned __int64)std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->daily_refresh_timer_ptr_);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      v14 = *(_QWORD *)v13 + 16LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v14)(
             v13,
             *(unsigned int *)(v2 + 80),
             0LL,
             "./src/home/home_mgr.cpp",
             "onDailyRefreshTimer",
             628LL,
             0LL,
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "onDailyRefreshTimer",
          630);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v23,
          (const char (*)[21])" start timer failed!");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_mgr.cpp",
        "onDailyRefreshTimer",
        632);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v23, (const char (*)[5])"now:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "onDailyRefreshTimer",
        622);
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v23,
             (const char (*)[19])"next_refresh_time:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" now:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v2 )
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

// Line 637: range 0000000014591F9E-0000000014592728
int32_t __cdecl HomeMgr::asyncQueryHomeStatus(common::minet::PacketPtr *p_packet_ptr, std::any *p_context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v6; // r14d
  std::size_t v7; // r14
  const std::type_info *v8; // rax
  const char *v9; // r14
  const std::type_info *v10; // rax
  const char *v11; // rax
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t v25; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  int32_t result; // eax
  proto::HomeStatusType val; // [rsp+14h] [rbp-13Ch] BYREF
  unsigned __int64 rand; // [rsp+18h] [rbp-138h] BYREF
  const proto::TryEnterHomeReq *req; // [rsp+20h] [rbp-130h]
  std::any __any; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 12 is_exist:650 64 4 7 uid:638 80 4 12 home_uid:640 96 16 11 req_ptr:639 128 16 19 status_data_ptr:642";
  *(_QWORD *)(v2 + 16) = HomeMgr::asyncQueryHomeStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 64) = common::minet::Packet::getUserId(v5);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TryEnterHomeReq>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::TryEnterHomeReq const>(
         (const std::shared_ptr<const proto::TryEnterHomeReq> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_mgr.cpp",
      "asyncQueryHomeStatus",
      639);
    common::milog::MiLogStream::operator()(&v35, off_2540CC00);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v6 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::TryEnterHomeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TryEnterHomeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 80) = proto::TryEnterHomeReq::target_uid(req);
    v7 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::HomeStatusRedisData>);
    v8 = std::any::type(p_context);
    if ( v7 == std::type_info::hash_code(v8) )
    {
      std::shared_ptr<proto::HomeStatusRedisData>::shared_ptr(
        (std::shared_ptr<proto::HomeStatusRedisData> *const)(v2 + 128),
        0LL);
      std::any_cast<std::shared_ptr<proto::HomeStatusRedisData>>(&__any);
      std::shared_ptr<proto::HomeStatusRedisData>::operator=(
        (std::shared_ptr<proto::HomeStatusRedisData> *const)(v2 + 128),
        (std::shared_ptr<proto::HomeStatusRedisData> *)&__any);
      std::shared_ptr<proto::HomeStatusRedisData>::~shared_ptr((std::shared_ptr<proto::HomeStatusRedisData> *const)&__any);
      if ( std::operator==<proto::HomeStatusRedisData>(
             (const std::shared_ptr<proto::HomeStatusRedisData> *)(v2 + 128),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_mgr.cpp",
          "asyncQueryHomeStatus",
          645);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v35,
          (const char (*)[24])"status_data_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v6 = -1;
      }
      else
      {
        *(_BYTE *)(v2 + 48) = 0;
        v12 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( RedisOpHome::getHomeStatus(*(_DWORD *)(v2 + 80), v12, (bool *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_mgr.cpp",
            "asyncQueryHomeStatus",
            653);
          v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v35,
                  (const char (*)[27])"getHomeStatus failed, uid:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 64));
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v35);
          v6 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_mgr.cpp",
            "asyncQueryHomeStatus",
            657);
          v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v34,
                  (const char (*)[38])"[HOME] asyncQueryHomeStatus succ uid:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 64));
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" home_uid:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 80));
          v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" status:");
          v21 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = proto::HomeStatusRedisData::status(v21);
          v22 = common::milog::MiLogStream::operator<<<proto::HomeStatusType,(proto::HomeStatusType*)0>(v20, &val);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" gs_app_id:");
          v24 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v25 = proto::HomeStatusRedisData::gameserver_id(v24);
          common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v35, v25);
          v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v35);
          v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" load_rand:");
          v28 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          rand = proto::HomeStatusRedisData::load_rand(v28);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, &rand);
          std::string::~string(&v35);
          common::milog::MiLogStream::~MiLogStream(&v34);
          v6 = 0;
        }
      }
      std::shared_ptr<proto::HomeStatusRedisData>::~shared_ptr((std::shared_ptr<proto::HomeStatusRedisData> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "asyncQueryHomeStatus",
        642);
      v9 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::HomeStatusRedisData>);
      v10 = std::any::type(p_context);
      v11 = std::type_info::name(v10);
      common::milog::MiLogStream::operator()(&v35, off_2540CC40, v11, v9);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v6 = -1;
    }
  }
  std::shared_ptr<proto::TryEnterHomeReq const>::~shared_ptr((std::shared_ptr<const proto::TryEnterHomeReq> *const)(v2 + 96));
  result = v6;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 667: range 000000001459272A-0000000014592FE7
__int64 __fastcall HomeMgr::asyncQueryHomeStatusCallback(
        const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  std::size_t v12; // r14
  const std::type_info *v13; // rax
  const char *v14; // r14
  const std::type_info *v15; // rax
  const char *v16; // rax
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // rax
  PlayerHomeComp *v19; // r14
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *v22; // rax
  PlayerHomeComp *HomeComp; // r14
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  Player *v31; // rax
  PlayerHomeComp *v32; // rax
  __int64 result; // rax
  proto::HomeStatusType val; // [rsp+28h] [rbp-138h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-134h]
  const proto::TryEnterHomeReq *req; // [rsp+30h] [rbp-130h]
  std::any __any; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-110h] BYREF
  char v40[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 uid:668 64 4 12 home_uid:677 80 4 11 retcode:666 96 16 14 player_ptr:669 128 16 11 req_"
                        "ptr:676 160 16 19 status_data_ptr:688";
  *(_QWORD *)(v3 + 16) = HomeMgr::asyncQueryHomeStatusCallback;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 80) = retcode;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
  *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v6);
  v7 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 96), GameThreadLocal + 16);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_mgr.cpp",
      "asyncQueryHomeStatusCallback",
      672);
    v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v39,
           (const char (*)[45])"[HOME] player offline in Callback func. uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v10 = -1;
    goto LABEL_24;
  }
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TryEnterHomeReq>((common::minet::Packet *const)(v3 + 128));
  if ( !std::operator==<proto::TryEnterHomeReq const>(
          (const std::shared_ptr<const proto::TryEnterHomeReq> *)(v3 + 128),
          0LL) )
  {
    req = std::__shared_ptr_access<proto::TryEnterHomeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TryEnterHomeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    *(_DWORD *)(v3 + 64) = proto::TryEnterHomeReq::target_uid(req);
    ret = 0;
    if ( *(_DWORD *)(v3 + 80) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_mgr.cpp",
        "asyncQueryHomeStatusCallback",
        683);
      v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v39,
              (const char (*)[46])"[HOME] asyncQueryHomeStatus failed. task ret=");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v39);
      ret = *(_DWORD *)(v3 + 80);
    }
    else
    {
      v12 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::HomeStatusRedisData>);
      v13 = std::any::type(p_context);
      if ( v12 != std::type_info::hash_code(v13) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_mgr.cpp",
          "asyncQueryHomeStatusCallback",
          688);
        v14 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::HomeStatusRedisData>);
        v15 = std::any::type(p_context);
        v16 = std::type_info::name(v15);
        common::milog::MiLogStream::operator()(&v39, off_2540CC40, v16, v14);
        common::milog::MiLogStream::~MiLogStream(&v39);
        v10 = -1;
        goto LABEL_23;
      }
      std::shared_ptr<proto::HomeStatusRedisData>::shared_ptr(
        (std::shared_ptr<proto::HomeStatusRedisData> *const)(v3 + 160),
        0LL);
      std::any_cast<std::shared_ptr<proto::HomeStatusRedisData>>(&__any);
      std::shared_ptr<proto::HomeStatusRedisData>::operator=(
        (std::shared_ptr<proto::HomeStatusRedisData> *const)(v3 + 160),
        (std::shared_ptr<proto::HomeStatusRedisData> *)&__any);
      std::shared_ptr<proto::HomeStatusRedisData>::~shared_ptr((std::shared_ptr<proto::HomeStatusRedisData> *const)&__any);
      if ( std::operator==<proto::HomeStatusRedisData>(
             (const std::shared_ptr<proto::HomeStatusRedisData> *)(v3 + 160),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_mgr.cpp",
          "asyncQueryHomeStatusCallback",
          691);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v39,
          (const char (*)[24])"status_data_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v39);
        ret = -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( proto::HomeStatusRedisData::status(v17) )
        {
          v21 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( proto::HomeStatusRedisData::status(v21) == HOME_STATUS_ONLINE )
          {
            v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            HomeComp = Player::getHomeComp(v22);
            v24 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            ret = PlayerHomeComp::onAsyncQueryHomeStatusOnline(HomeComp, *(_DWORD *)(v3 + 64), v24);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_mgr.cpp",
              "asyncQueryHomeStatusCallback",
              706);
            v25 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v39,
                    (const char (*)[23])"[HOME] invalid status:");
            v26 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            val = proto::HomeStatusRedisData::status(v26);
            v27 = common::milog::MiLogStream::operator<<<proto::HomeStatusType,(proto::HomeStatusType*)0>(v25, &val);
            v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v3 + 48));
            v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" home_uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v39);
            ret = -1;
          }
        }
        else
        {
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v19 = Player::getHomeComp(v18);
          v20 = std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::HomeStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          ret = PlayerHomeComp::onAsyncQueryHomeStatusOffline(v19, *(_DWORD *)(v3 + 64), v20);
        }
      }
      std::shared_ptr<proto::HomeStatusRedisData>::~shared_ptr((std::shared_ptr<proto::HomeStatusRedisData> *const)(v3 + 160));
    }
    if ( ret )
    {
      v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v32 = Player::getHomeComp(v31);
      PlayerHomeComp::sendTryEnterHomeRsp(v32, ret, *(_DWORD *)(v3 + 64));
    }
    v10 = ret;
    goto LABEL_23;
  }
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/home/home_mgr.cpp",
    "asyncQueryHomeStatusCallback",
    676);
  common::milog::MiLogStream::operator()(&v39, off_2540CC00);
  common::milog::MiLogStream::~MiLogStream(&v39);
  v10 = -1;
LABEL_23:
  std::shared_ptr<proto::TryEnterHomeReq const>::~shared_ptr((std::shared_ptr<const proto::TryEnterHomeReq> *const)(v3 + 128));
LABEL_24:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = v10;
  if ( v40 == (char *)v3 )
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

// Line 727: range 0000000014592FE8-000000001459315D
uint64_t __cdecl doGenLoadRand()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  GameserverApp *v3; // rax
  uint32_t v4; // ecx
  __int16 v5; // cx
  int Now; // ecx
  uint64_t result; // rax
  LoadRandData *data; // [rsp+8h] [rbp-68h]
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v0 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 8 13 load_rand:731";
  *(_QWORD *)(v0 + 16) = doGenLoadRand;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116352;
  std::__atomic_base<unsigned int>::operator++(&doGenLoadRand(void)::seq);
  *(_QWORD *)(v0 + 32) = 0LL;
  data = (LoadRandData *)(v0 + 32);
  v3 = Singleton<GameserverApp>::instance();
  v4 = AppBase::getAppId((AppBase *const)v3) >> 16;
  if ( *(_BYTE *)(((v0 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v0 + 32);
  *(_WORD *)data = v4;
  v5 = std::__atomic_base<unsigned int>::operator unsigned int(&doGenLoadRand(void)::seq);
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    __asan_report_store8(data);
  *(_WORD *)(v0 + 34) = v5;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    __asan_report_store8(data);
  *(_DWORD *)(v0 + 36) = Now;
  result = *(_QWORD *)(v0 + 32);
  if ( v9 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 743: range 000000001459315E-000000001459352B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl HomeMgr::modifyHomeStatus(
        uint32_t target_uid,
        uint64_t last_load_rand,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint64_t Rand; // r14
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v11; // r14
  const std::_Placeholder<2> *v12; // r9
  const std::_Placeholder<2> *v13; // r8
  int32_t result; // eax
  AsyncTaskFunc v15; // [rsp+0h] [rbp-120h]
  AsyncTaskCallbackFunc v16; // [rsp+20h] [rbp-100h] OVERLAPPED BYREF
  std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>))(std::shared_ptr<common::minet::Packet>,std::any,int)> p___f; // [rsp+40h] [rbp-E0h] BYREF
  std::shared_ptr<common::minet::Packet> v18; // [rsp+50h] [rbp-D0h] BYREF
  std::any context; // [rsp+60h] [rbp-C0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v20; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream packet_ptr; // [rsp+90h] [rbp-90h] BYREF
  char v22[112]; // [rsp+B0h] [rbp-70h] BYREF

  HIDWORD(v15._M_invoker) = target_uid;
  v15._M_manager = (std::_Function_base::_Manager_type)last_load_rand;
  *(_QWORD *)&v15._M_functor._M_pod_data[8] = p_packet_ptr;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 context_ptr:744";
  *(_QWORD *)(v3 + 16) = HomeMgr::modifyHomeStatus;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ModifyHomeStatusContext>();
  if ( std::operator==<ModifyHomeStatusContext>((const std::shared_ptr<ModifyHomeStatusContext> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_mgr.cpp",
      "modifyHomeStatus",
      747);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      &packet_ptr,
      (const char (*)[20])"context_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&packet_ptr);
    v6 = -1;
  }
  else
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) <= 3 )
      v7 = __asan_report_store4(v7);
    *(_DWORD *)v7 = target_uid;
    v8 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->last_load_rand >> 3) + 0x7FFF8000) )
      v8 = (std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v8->last_load_rand);
    v8->last_load_rand = last_load_rand;
    Rand = doGenLoadRand();
    v10 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->new_load_rand >> 3) + 0x7FFF8000) )
      v10 = (std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v10->new_load_rand);
    v10->new_load_rand = Rand;
    v11 = ServiceBox::findService<GameserverService>();
    std::any::any<std::shared_ptr<ModifyHomeStatusContext> &,std::shared_ptr<ModifyHomeStatusContext>,std::any::_Manager_external<std::shared_ptr<ModifyHomeStatusContext>>,true,true>(
      &context,
      (std::shared_ptr<ModifyHomeStatusContext> *)(v3 + 32));
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &v18,
      *(const std::shared_ptr<common::minet::Packet> **)&v15._M_functor._M_pod_data[8]);
    std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any,int),std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
      (int (*)(std::shared_ptr<common::minet::Packet>, std::any, int))&p___f,
      (const std::_Placeholder<1> *)HomeMgr::asyncModifyHomeStatusCallback,
      (const std::_Placeholder<2> *)&std::placeholders::_1,
      (const std::_Placeholder<3> *)&std::placeholders::_2,
      (const std::_Placeholder<1> *)&std::placeholders::_3,
      v12,
      (const std::_Placeholder<3> *)v15._M_functor._M_unused._M_object);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
      (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
      &p___f);
    std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any),std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
      (int (*)(std::shared_ptr<common::minet::Packet>, std::any))&v16._M_manager,
      (const std::_Placeholder<1> *)HomeMgr::asyncModifyHomeStatus,
      (const std::_Placeholder<2> *)&std::placeholders::_1,
      (const std::_Placeholder<1> *)&std::placeholders::_2,
      v13);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any) ()(std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
      &v20,
      (std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>))(std::shared_ptr<common::minet::Packet>,std::any)> *)&v16._M_manager);
    *(_DWORD *)&v16._M_functor._M_pod_data[12] = ServiceBase::pushAsyncTask(
                                                   v11,
                                                   v15,
                                                   v16,
                                                   (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v20),
                                                   (std::any)__PAIR128__(&context, &v18));
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v20);
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v18);
    std::any::~any(&context);
    v6 = *(_DWORD *)&v16._M_functor._M_pod_data[12];
  }
  std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v3 + 32));
  result = v6;
  if ( v22 == (char *)v3 )
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

// Line 764: range 000000001459352C-0000000014593B0D
int32_t __cdecl HomeMgr::asyncModifyHomeStatus(common::minet::PacketPtr *p_packet_ptr, std::any *p_context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::size_t v5; // r14
  const std::type_info *v6; // rax
  const char *v7; // rbx
  const std::type_info *v8; // rax
  const char *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GameserverApp *v12; // rax
  uint32_t AppId; // eax
  __int64 v14; // rax
  proto::HomeStatusRedisData *p_cur_status_data; // r14
  __int64 v16; // rax
  int32_t result; // eax
  uint32_t home_uid; // [rsp+14h] [rbp-10Ch]
  std::any __any; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 15 context_ptr:765 80 40 12 new_data:778";
  *(_QWORD *)(v2 + 16) = HomeMgr::asyncModifyHomeStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
  v6 = std::any::type(p_context);
  if ( v5 == std::type_info::hash_code(v6) )
  {
    std::shared_ptr<ModifyHomeStatusContext>::shared_ptr(
      (std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 48),
      0LL);
    std::any_cast<std::shared_ptr<ModifyHomeStatusContext>>(&__any);
    std::shared_ptr<ModifyHomeStatusContext>::operator=(
      (std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 48),
      (std::shared_ptr<ModifyHomeStatusContext> *)&__any);
    std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)&__any);
    if ( std::operator==<ModifyHomeStatusContext>((const std::shared_ptr<ModifyHomeStatusContext> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "asyncModifyHomeStatus",
        768);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v20, (const char (*)[20])"context_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v10 = -1;
    }
    else if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "asyncModifyHomeStatus",
        773);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"packet_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v10 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      home_uid = v11->home_uid;
      proto::HomeStatusRedisData::HomeStatusRedisData((proto::HomeStatusRedisData *const)(v2 + 80));
      proto::HomeStatusRedisData::set_status((proto::HomeStatusRedisData *const)(v2 + 80), HOME_STATUS_ONLINE);
      v12 = Singleton<GameserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v12);
      proto::HomeStatusRedisData::set_gameserver_id((proto::HomeStatusRedisData *const)(v2 + 80), AppId);
      v14 = (__int64)std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)(v14 + 16) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8();
      proto::HomeStatusRedisData::set_load_rand((proto::HomeStatusRedisData *const)(v2 + 80), *(_QWORD *)(v14 + 16));
      p_cur_status_data = &std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48))->cur_status_data;
      v16 = (__int64)std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      v10 = RedisOpHome::compareAndModifyHomeStatus(
              home_uid,
              *(_QWORD *)(v16 + 8),
              (const proto::HomeStatusRedisData *)(v2 + 80),
              p_cur_status_data);
      proto::HomeStatusRedisData::~HomeStatusRedisData((proto::HomeStatusRedisData *const)(v2 + 80));
    }
    std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "asyncModifyHomeStatus",
      765);
    v7 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
    v8 = std::any::type(p_context);
    v9 = std::type_info::name(v8);
    common::milog::MiLogStream::operator()(&v20, off_2540CC40, v9, v7);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v10 = -1;
  }
  result = v10;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 787: range 0000000014593B0E-0000000014594A80
__int64 __fastcall HomeMgr::asyncModifyHomeStatusCallback(
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::size_t v7; // r14
  const std::type_info *v8; // rax
  const char *v9; // rbx
  const std::type_info *v10; // rax
  const char *v11; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  GameserverService *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  HomeSession *v17; // rdi
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdi
  common::milog::MiLogStream *v22; // r14
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  HomeSession *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  google::protobuf::uint32 v30; // r14d
  GameserverApp *v31; // rax
  common::milog::MiLogStream *v32; // rax
  HomeSession *v33; // r14
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint64_t rand; // r15
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t v37; // eax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  HomeSession *v49; // r14
  __int64 v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  GameserverService *v56; // rax
  HomeSession *v57; // rax
  common::milog::MiLogStream *v58; // rax
  GameserverService *v59; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  uint64_t v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  unsigned __int64 v69; // [rsp+28h] [rbp-138h] BYREF
  const proto::ServerTryEnterHomeReq *req; // [rsp+38h] [rbp-128h]
  std::any __any; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v72; // [rsp+50h] [rbp-110h] BYREF
  char v73[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 7 ret:801 64 4 12 home_uid:802 80 4 11 retcode:786 96 16 15 context_ptr:788 128 16 11 req"
                        "_ptr:799 160 16 15 session_ptr:861";
  *(_QWORD *)(v4 + 16) = HomeMgr::asyncModifyHomeStatusCallback;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 80) = retcode;
  v7 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
  v8 = std::any::type(p_context);
  if ( v7 != std::type_info::hash_code(v8) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "asyncModifyHomeStatusCallback",
      788);
    v9 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
    v10 = std::any::type(p_context);
    v11 = std::type_info::name(v10);
    common::milog::MiLogStream::operator()(&v72, off_2540CC40, v11, v9);
    common::milog::MiLogStream::~MiLogStream(&v72);
    v3 = -1;
    goto LABEL_43;
  }
  std::shared_ptr<ModifyHomeStatusContext>::shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v4 + 96), 0LL);
  std::any_cast<std::shared_ptr<ModifyHomeStatusContext>>(&__any);
  std::shared_ptr<ModifyHomeStatusContext>::operator=(
    (std::shared_ptr<ModifyHomeStatusContext> *const)(v4 + 96),
    (std::shared_ptr<ModifyHomeStatusContext> *)&__any);
  std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)&__any);
  if ( !std::operator==<ModifyHomeStatusContext>((const std::shared_ptr<ModifyHomeStatusContext> *)(v4 + 96), 0LL) )
  {
    if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "asyncModifyHomeStatusCallback",
        796);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v72, (const char (*)[19])"packet_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v72);
      v3 = -1;
      goto LABEL_42;
    }
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::ServerTryEnterHomeReq>((common::minet::Packet *const)(v4 + 128));
    if ( std::operator==<proto::ServerTryEnterHomeReq const>(
           (const std::shared_ptr<const proto::ServerTryEnterHomeReq> *)(v4 + 128),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_mgr.cpp",
        "asyncModifyHomeStatusCallback",
        799);
      common::milog::MiLogStream::operator()(&v72, off_2540D2C0);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v3 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::ServerTryEnterHomeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ServerTryEnterHomeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      *(_DWORD *)(v4 + 48) = 0;
      v12 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = v12->home_uid;
      if ( !*(_DWORD *)(v4 + 80) || *(_DWORD *)(v4 + 80) == 5001 )
      {
        v14 = ServiceBox::findService<GameserverService>();
        GameserverService::findHomeSession((GameserverService *const)(v4 + 160), (__int64)v14, *(_DWORD *)(v4 + 64));
        if ( std::operator==<HomeSession>((const std::shared_ptr<HomeSession> *)(v4 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_mgr.cpp",
            "asyncModifyHomeStatusCallback",
            816);
          v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v72,
                  (const char (*)[30])"[HOME] not found session uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v72);
          *(_DWORD *)(v4 + 48) = -1;
          v16 = 0;
        }
        else
        {
          v17 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          ThreadIndex = HomeSession::getThreadIndex(v17);
          v19 = ZTWN11ThreadLocal17work_thread_indexE(v17, 0LL);
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            __asan_report_load4();
          if ( ThreadIndex == *(_DWORD *)v19 )
          {
            if ( *(_DWORD *)(v4 + 80) == 5001 )
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/home/home_mgr.cpp",
                "asyncModifyHomeStatusCallback",
                831);
              v27 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      &v72,
                      (const char (*)[66])"[HOME] asyncModifyHomeStatus retcode:RET_REDIS_MODIFIED home_uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v4 + 64));
              common::milog::MiLogStream::~MiLogStream(&v72);
              v28 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              if ( proto::HomeStatusRedisData::status(&v28->cur_status_data) == HOME_STATUS_ONLINE )
              {
                v29 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                v30 = proto::HomeStatusRedisData::gameserver_id(&v29->cur_status_data);
                v31 = Singleton<GameserverApp>::instance();
                if ( v30 == AppBase::getAppId((AppBase *const)v31) )
                {
                  common::milog::MiLogStream::create(
                    &v72,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/home/home_mgr.cpp",
                    "asyncModifyHomeStatusCallback",
                    836);
                  v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          &v72,
                          (const char (*)[40])"[HOME] gameserver_id is same. home_uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v4 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v72);
                  *(_DWORD *)(v4 + 48) = -1;
                  v16 = 0;
                }
                else
                {
                  v33 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                  v34 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  rand = proto::HomeStatusRedisData::load_rand(&v34->cur_status_data);
                  v36 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  v37 = proto::HomeStatusRedisData::gameserver_id(&v36->cur_status_data);
                  HomeSession::onModifyHomeStatusModifyed(v33, v37, rand);
                  v3 = 0;
                  v16 = 1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v72,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/home/home_mgr.cpp",
                  "asyncModifyHomeStatusCallback",
                  847);
                v38 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v72,
                        (const char (*)[23])"[HOME] invalid status:");
                v39 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                val = proto::HomeStatusRedisData::status(&v39->cur_status_data);
                v40 = common::milog::MiLogStream::operator<<<proto::HomeStatusType,(proto::HomeStatusType*)0>(
                        v38,
                        (const proto::HomeStatusType *)&val);
                v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v40,
                        (const char (*)[11])" home_uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v4 + 64));
                common::milog::MiLogStream::~MiLogStream(&v72);
                *(_DWORD *)(v4 + 48) = -1;
                v16 = 0;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/home/home_mgr.cpp",
                "asyncModifyHomeStatusCallback",
                853);
              v42 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v72,
                      (const char (*)[30])"[HOME] modify home home_uid: ");
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v42,
                      (const unsigned int *)(v4 + 64));
              v44 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v43,
                      (const char (*)[17])" load_rand from ");
              v45 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              v46 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v44, &v45->last_load_rand);
              v47 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v46, (const char (*)[5])off_25407FC0);
              v48 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v47, &v48->new_load_rand);
              common::milog::MiLogStream::~MiLogStream(&v72);
              v49 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              v50 = (__int64)std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              if ( *(_BYTE *)(((unsigned __int64)(v50 + 16) >> 3) + 0x7FFF8000) )
                v50 = __asan_report_load8();
              HomeSession::onModifyHomeStatusSuccess(v49, *(_QWORD *)(v50 + 16));
              v16 = 2;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_mgr.cpp",
              "asyncModifyHomeStatusCallback",
              822);
            v20 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v72,
                    (const char (*)[55])"[HOME][SESSION] session is in another thread, home_uid");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v4 + 64));
            v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v21,
                    (const char (*)[14])" this thread:");
            v23 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v21, " this thread:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
            v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v24,
                    (const char (*)[17])" another thread:");
            v26 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            val = HomeSession::getThreadIndex(v26);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
            common::milog::MiLogStream::~MiLogStream(&v72);
            *(_DWORD *)(v4 + 48) = -1;
            v16 = 0;
          }
        }
        std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v4 + 160));
        if ( v16 && v16 != 2 )
          goto LABEL_41;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "asyncModifyHomeStatusCallback",
          807);
        v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v72,
                (const char (*)[45])"compareAndModifyHomeStatus failed, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v72);
        *(_DWORD *)(v4 + 48) = -1;
      }
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "asyncModifyHomeStatusCallback",
          860);
        v51 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v72,
                (const char (*)[43])"asyncModifyHomeStatusCallback failed. ret:");
        v52 = common::milog::MiLogStream::operator<<<int,(int *)0>(v51, (const int *)(v4 + 48));
        v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v52, (const char (*)[10])" retcode:");
        v54 = common::milog::MiLogStream::operator<<<int,(int *)0>(v53, (const int *)(v4 + 80));
        v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v54, (const char (*)[11])" home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v72);
        v56 = ServiceBox::findService<GameserverService>();
        GameserverService::findHomeSession((GameserverService *const)(v4 + 160), (__int64)v56, *(_DWORD *)(v4 + 64));
        if ( std::operator!=<HomeSession>((const std::shared_ptr<HomeSession> *)(v4 + 160), 0LL) )
        {
          v57 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          HomeSession::processTryEnterPlayerMap(v57, *(_DWORD *)(v4 + 48));
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_mgr.cpp",
            "asyncModifyHomeStatusCallback",
            866);
          v58 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v72,
                  (const char (*)[58])"send ServerTryEnterHomeRsp to all wait players, home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v72);
          v59 = ServiceBox::findService<GameserverService>();
          GameserverService::removeHomeSession(v59, *(_DWORD *)(v4 + 64));
        }
        if ( !*(_DWORD *)(v4 + 80) )
        {
          v60 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v61 = proto::HomeStatusRedisData::load_rand(&v60->cur_status_data);
          HomeMgr::cleanHomeStatus(*(_DWORD *)(v4 + 64), v61);
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_mgr.cpp",
            "asyncModifyHomeStatusCallback",
            874);
          v62 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v72,
                  (const char (*)[27])"cleanHomeStatus, home_uid:");
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v62,
                  (const unsigned int *)(v4 + 64));
          v64 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v63, (const char (*)[12])" load_rand:");
          v65 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v69 = proto::HomeStatusRedisData::load_rand(&v65->cur_status_data);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v64, &v69);
          common::milog::MiLogStream::~MiLogStream(&v72);
        }
        std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v4 + 160));
      }
      v3 = *(_DWORD *)(v4 + 48);
    }
LABEL_41:
    std::shared_ptr<proto::ServerTryEnterHomeReq const>::~shared_ptr((std::shared_ptr<const proto::ServerTryEnterHomeReq> *const)(v4 + 128));
    goto LABEL_42;
  }
  common::milog::MiLogStream::create(
    &v72,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_mgr.cpp",
    "asyncModifyHomeStatusCallback",
    791);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v72, (const char (*)[20])"context_ptr is null");
  common::milog::MiLogStream::~MiLogStream(&v72);
  v3 = -1;
LABEL_42:
  std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v4 + 96));
LABEL_43:
  result = v3;
  if ( v73 == (char *)v4 )
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

// Line 881: range 0000000014594A82-0000000014594F57
int32_t __cdecl HomeMgr::cleanHomeStatus(uint32_t home_uid, uint64_t last_load_rand)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rax
  GameserverService *v11; // r14
  const std::_Placeholder<2> *v12; // r9
  const std::_Placeholder<2> *v13; // r8
  int32_t result; // eax
  AsyncTaskFunc last_load_randa; // [rsp+0h] [rbp-130h]
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  AsyncTaskCallbackFunc v17; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<common::minet::Packet> v18; // [rsp+40h] [rbp-F0h] BYREF
  std::any context; // [rsp+50h] [rbp-E0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v20; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream packet_ptr; // [rsp+80h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+A0h] [rbp-90h] BYREF

  *(_DWORD *)&last_load_randa._M_functor._M_pod_data[12] = home_uid;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 context_ptr:883 64 16 14 packet_ptr:893";
  *(_QWORD *)(v2 + 16) = HomeMgr::cleanHomeStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::perf::make_shared<ModifyHomeStatusContext>();
  if ( std::operator==<ModifyHomeStatusContext>((const std::shared_ptr<ModifyHomeStatusContext> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_mgr.cpp",
      "cleanHomeStatus",
      886);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      &packet_ptr,
      (const char (*)[20])"context_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&packet_ptr);
    v5 = -1;
  }
  else
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) <= 3 )
      v6 = __asan_report_store4(v6);
    *(_DWORD *)v6 = home_uid;
    v7 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v7->last_load_rand >> 3) + 0x7FFF8000) )
      v7 = (std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v7->last_load_rand);
    v7->last_load_rand = last_load_rand;
    v8 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->new_load_rand >> 3) + 0x7FFF8000) )
      v8 = (std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v8->new_load_rand);
    v8->new_load_rand = 0LL;
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "cleanHomeStatus",
        896);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &packet_ptr,
        (const char (*)[35])"PacketUtils::createPacket() failed");
      common::milog::MiLogStream::~MiLogStream(&packet_ptr);
      v5 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::minet::Packet::setUserId(v9, home_uid);
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::minet::Packet::setHomeUserId(v10, home_uid);
      v11 = ServiceBox::findService<GameserverService>();
      std::any::any<std::shared_ptr<ModifyHomeStatusContext> &,std::shared_ptr<ModifyHomeStatusContext>,std::any::_Manager_external<std::shared_ptr<ModifyHomeStatusContext>>,true,true>(
        &context,
        (std::shared_ptr<ModifyHomeStatusContext> *)(v2 + 32));
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v18,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
      std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any,int),std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
        (int (*)(std::shared_ptr<common::minet::Packet>, std::any, int))&v17._M_manager,
        (const std::_Placeholder<1> *)HomeMgr::asyncDelHomeStatusCallback,
        (const std::_Placeholder<2> *)&std::placeholders::_1,
        (const std::_Placeholder<3> *)&std::placeholders::_2,
        (const std::_Placeholder<1> *)&std::placeholders::_3,
        v12,
        (const std::_Placeholder<3> *)last_load_rand);
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
        (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
        (std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>))(std::shared_ptr<common::minet::Packet>,std::any,int)> *)&v17._M_manager);
      std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any),std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
        (int (*)(std::shared_ptr<common::minet::Packet>, std::any))&v17,
        (const std::_Placeholder<1> *)HomeMgr::asyncDelHomeStatus,
        (const std::_Placeholder<2> *)&std::placeholders::_1,
        (const std::_Placeholder<1> *)&std::placeholders::_2,
        v13);
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any) ()(std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
        &v20,
        (std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>))(std::shared_ptr<common::minet::Packet>,std::any)> *)&v17);
      ret = ServiceBase::pushAsyncTask(
              v11,
              last_load_randa,
              v17,
              (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v20),
              (std::any)__PAIR128__(&context, &v18));
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v20);
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v18);
      std::any::~any(&context);
      v5 = ret;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  }
  std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 32));
  result = v5;
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

// Line 913: range 0000000014594F58-000000001459545C
int32_t __cdecl HomeMgr::asyncDelHomeStatus(common::minet::PacketPtr *p_packet_ptr, std::any *p_context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::size_t v5; // r14
  const std::type_info *v6; // rax
  const char *v7; // rbx
  const std::type_info *v8; // rax
  const char *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  std::any __any; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 home_uid:921 64 16 15 context_ptr:915";
  *(_QWORD *)(v2 + 16) = HomeMgr::asyncDelHomeStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  v5 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
  v6 = std::any::type(p_context);
  if ( v5 == std::type_info::hash_code(v6) )
  {
    std::shared_ptr<ModifyHomeStatusContext>::shared_ptr(
      (std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 64),
      0LL);
    std::any_cast<std::shared_ptr<ModifyHomeStatusContext>>(&__any);
    std::shared_ptr<ModifyHomeStatusContext>::operator=(
      (std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 64),
      (std::shared_ptr<ModifyHomeStatusContext> *)&__any);
    std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)&__any);
    if ( std::operator==<ModifyHomeStatusContext>((const std::shared_ptr<ModifyHomeStatusContext> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "asyncDelHomeStatus",
        918);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v16, (const char (*)[20])"context_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = v11->home_uid;
      v12 = (__int64)std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      if ( RedisOpHome::compareAndDeleteHomeStatus(*(_DWORD *)(v2 + 48), *(_QWORD *)(v12 + 8)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "asyncDelHomeStatus",
          927);
        v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v16,
                (const char (*)[44])"compareAndDeleteHomeStatus fails, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v16);
        v10 = -1;
      }
      else
      {
        v10 = 0;
      }
    }
    std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "asyncDelHomeStatus",
      915);
    v7 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
    v8 = std::any::type(p_context);
    v9 = std::type_info::name(v8);
    common::milog::MiLogStream::operator()(&v16, off_2540CC40, v9, v7);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  result = v10;
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

// Line 935: range 000000001459545E-00000000145959CF
__int64 __fastcall HomeMgr::asyncDelHomeStatusCallback(
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::size_t v6; // r14
  const std::type_info *v7; // rax
  const char *v8; // rbx
  const std::type_info *v9; // rax
  const char *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  std::any __any; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 home_uid:943 48 4 11 retcode:934 64 16 15 context_ptr:937";
  *(_QWORD *)(v3 + 16) = HomeMgr::asyncDelHomeStatusCallback;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = retcode;
  v6 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
  v7 = std::any::type(p_context);
  if ( v6 == std::type_info::hash_code(v7) )
  {
    std::shared_ptr<ModifyHomeStatusContext>::shared_ptr(
      (std::shared_ptr<ModifyHomeStatusContext> *const)(v3 + 64),
      0LL);
    std::any_cast<std::shared_ptr<ModifyHomeStatusContext>>(&__any);
    std::shared_ptr<ModifyHomeStatusContext>::operator=(
      (std::shared_ptr<ModifyHomeStatusContext> *const)(v3 + 64),
      (std::shared_ptr<ModifyHomeStatusContext> *)&__any);
    std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)&__any);
    if ( std::operator==<ModifyHomeStatusContext>((const std::shared_ptr<ModifyHomeStatusContext> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_mgr.cpp",
        "asyncDelHomeStatusCallback",
        940);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v21, (const char (*)[20])"context_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v11 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ModifyHomeStatusContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = v12->home_uid;
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_mgr.cpp",
          "asyncDelHomeStatusCallback",
          947);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v21,
                (const char (*)[18])"[HOME] home_uid: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v14,
                (const char (*)[41])" compareAndDeleteHomeStatus fails, ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
        v11 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/home/home_mgr.cpp",
          "asyncDelHomeStatusCallback",
          950);
        v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v21,
                (const char (*)[18])"[HOME] home_uid: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v17,
          (const char (*)[28])" offline and del redis succ");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v11 = 0;
      }
    }
    std::shared_ptr<ModifyHomeStatusContext>::~shared_ptr((std::shared_ptr<ModifyHomeStatusContext> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_mgr.cpp",
      "asyncDelHomeStatusCallback",
      937);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<ModifyHomeStatusContext>);
    v9 = std::any::type(p_context);
    v10 = std::type_info::name(v9);
    common::milog::MiLogStream::operator()(&v21, off_2540CC40, v10, v8);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v11 = -1;
  }
  result = v11;
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
