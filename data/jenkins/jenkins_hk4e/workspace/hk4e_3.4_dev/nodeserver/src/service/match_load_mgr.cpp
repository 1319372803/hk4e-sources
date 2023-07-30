// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/match_load_mgr.cpp

// Line 18: range 0000000003858314-0000000003858327
void __cdecl MatchLoadMgr::onServiceSessionConnect(
        MatchLoadMgr *const this,
        uint32_t service_type,
        uint32_t service_app_id)
{
  ;
};

// Line 26: range 0000000003858328-000000000385847C
void __fastcall MatchLoadMgr::onServiceSessionDisconnect(
        MatchLoadMgr *const this,
        uint32_t service_type,
        uint32_t service_app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 service_app_id:25 64 8 7 lock:32";
  *(_QWORD *)(v3 + 16) = MatchLoadMgr::onServiceSessionDisconnect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = service_app_id;
  if ( service_type == 17 )
  {
    std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->mu_);
    std::map<unsigned int,std::map<unsigned int,unsigned int>>::erase(
      &this->workload_info_map_,
      (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  }
  if ( v7 == (char *)v3 )
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

// Line 37: range 000000000385847E-00000000038587CE
void __fastcall MatchLoadMgr::updateWorkloadInfo(
        MatchLoadMgr *const this,
        uint32_t matchserver_id,
        const proto::MatchserverWorkloadInfoNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned __int64 v9; // rax
  unsigned int v10; // r14d
  const unsigned int *v11; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  unsigned int *v13; // rdx
  char v14; // cl
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  std::map<unsigned int,unsigned int> *workload_info; // [rsp+28h] [rbp-108h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  const unsigned int *p_match_type; // [rsp+38h] [rbp-F8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 matchserver_id:36 64 8 7 lock:39";
  *(_QWORD *)(v3 + 16) = MatchLoadMgr::updateWorkloadInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = matchserver_id;
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/match_load_mgr.cpp",
    "updateWorkloadInfo",
    38);
  v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v22,
         (const char (*)[36])"updateWorkloadInfo matchserver_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" ,match_unit_num: ");
  val = proto::MatchserverWorkloadInfoNotify::match_unit_num(notify);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v22);
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->mu_);
  workload_info = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                    &this->workload_info_map_,
                    (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  __for_range = proto::MatchserverWorkloadInfoNotify::match_unit_map(notify);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_match_type = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v9 = (unsigned __int64)(p_match_type + 1);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v9);
    v10 = p_match_type[1];
    v11 = p_match_type;
    v12 = std::map<unsigned int,unsigned int>::operator[](workload_info, p_match_type);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(v11) = v14 != 0;
      __asan_report_store4(v12, v11);
    }
    *v13 = v10;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
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
};

// Line 48: range 00000000038587D0-0000000003858BFA
__int64 __fastcall MatchLoadMgr::chooseMatchServerId(MatchLoadMgr *const this, uint32_t match_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  int v10; // eax
  std::vector<unsigned int>::reference v11; // rax
  uint32_t *v12; // rdx
  __int64 result; // rax
  uint32_t matchserver_id; // [rsp+18h] [rbp-108h]
  uint32_t select_index; // [rsp+1Ch] [rbp-104h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-F0h]
  std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *__in; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *workload_info; // [rsp+48h] [rbp-D8h]
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 match_type:47 64 8 7 lock:53 96 24 16 candidate_vec:52";
  *(_QWORD *)(v2 + 16) = MatchLoadMgr::chooseMatchServerId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = match_type;
  matchserver_id = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64), &this->mu_);
  __for_range = &this->workload_info_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->workload_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->workload_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
    workload_info = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
    v5 = std::map<unsigned int,unsigned int>::operator[](
           workload_info,
           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    if ( *v6 <= 0x4E1Fu )
    {
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      matchserver_id = *id;
      break;
    }
    v7 = std::map<unsigned int,unsigned int>::operator[](
           workload_info,
           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    if ( *v8 <= 0x1869Fu )
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 96), id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  if ( !matchserver_id && !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 96)) )
  {
    v10 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 96));
    select_index = common::tools::RandomUtils::rand<unsigned int>(0, v10 - 1);
    v11 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 96), select_index);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    matchserver_id = *v12;
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  result = matchserver_id;
  if ( v22 == (char *)v2 )
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
