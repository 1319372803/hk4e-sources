// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/network/service_session_mgr.cpp

// Line 22: range 0000000003854A16-00000000038552B5
int32_t __cdecl ServiceSessionMgr::addSession(
        ServiceSessionMgr *const this,
        std::shared_ptr<ServiceSession> *p_session_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ServiceSession *v8; // rax
  const std::vector<unsigned int> *ServiceTypeVec; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::shared_ptr<ServiceSession> *v12; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  NodeserverService *v15; // rax
  NodeserverService *v16; // rax
  unsigned int v17; // r15d
  proto::ServiceType v18; // r14d
  const std::string *v19; // rax
  const char *v20; // rax
  unsigned int v21; // r14d
  std::vector<unsigned int>::size_type v22; // rax
  int32_t result; // eax
  uint32_t session_id; // [rsp+24h] [rbp-1ACh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-198h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-190h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *app_id_set; // [rsp+48h] [rbp-188h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v30; // [rsp+50h] [rbp-180h]
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::value_type *val; // [rsp+58h] [rbp-178h]
  char *v32; // [rsp+60h] [rbp-170h]
  char *v33; // [rsp+68h] [rbp-168h]
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void> v34; // [rsp+70h] [rbp-160h] BYREF
  char v35[304]; // [rsp+A0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 app_id:32 64 4 15 service_type:70 80 8 7 lock:54 112 24 19 service_type_vec:34 176 48 1"
                        "9 service_type_set:42";
  *(_QWORD *)(v2 + 16) = ServiceSessionMgr::addSession;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  if ( std::operator==<ServiceSession>(0LL, p_session_ptr) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v34.m_data.m_seq.m_holder.m_capacity,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/service_session_mgr.cpp",
      "addSession",
      26);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity,
      "session_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    session_id = common::minet::AServerSession::getSessionId(v6);
    v7 = std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::AServerSession::getAppId(v7);
    v8 = std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    ServiceTypeVec = ServiceSession::getServiceTypeVec(v8);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 112), ServiceTypeVec);
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v34.m_data.m_seq.m_holder.m_capacity,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/service_session_mgr.cpp",
        "addSession",
        37);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity,
        "service_type_vec is empty for app_id=%u",
        *(unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity);
      v5 = -1;
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 176));
      __for_range = (const std::vector<unsigned int> *)(v2 + 112);
      __for_begin._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(v2 + 112))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(v2 + 112))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v2 + 64) = *v11;
        if ( std::set<unsigned int>::count(
               (const std::set<unsigned int> *const)(v2 + 176),
               (const std::set<unsigned int>::key_type *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v34.m_data.m_seq.m_holder.m_capacity,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/service_session_mgr.cpp",
            "addSession",
            47);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity,
            "find repeat service_type=%u from app_id=%u",
            *(unsigned int *)(v2 + 64),
            *(unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity);
          v5 = -1;
          goto LABEL_24;
        }
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v2 + 176),
          (const std::set<unsigned int>::value_type *)(v2 + 64));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 80), &this->mu_);
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>,unsigned int>(
             &this->session_map_,
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v34.m_data.m_seq.m_holder.m_capacity,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/service_session_mgr.cpp",
          "addSession",
          59);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity,
          "skip repeat add for session_id=%u, app_id=%u",
          session_id,
          *(unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity);
        v5 = 0;
      }
      else
      {
        v12 = std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::operator[](
                &this->session_map_,
                (const std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::key_type *)(v2 + 48));
        std::shared_ptr<ServiceSession>::operator=(v12, p_session_ptr);
        __for_range_0 = (const std::vector<unsigned int> *)(v2 + 112);
        __for_begin._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(v2 + 112))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          *(_DWORD *)(v2 + 64) = *v14;
          app_id_set = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::operator[](
                         &this->type_to_app_ids_map_,
                         (const std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::key_type *)(v2 + 64));
          v30 = app_id_set;
          val = (boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::value_type *)app_id_set;
          v32 = (char *)(v2 + 48);
          v33 = (char *)(v2 + 48);
          boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::insert_unique(
            &v34,
            (const boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::value_type *)app_id_set);
          v15 = ServiceBox::findService<NodeserverService>();
          PlayerMgr::onServiceSessionConnect(&v15->player_mgr, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48));
          v16 = ServiceBox::findService<NodeserverService>();
          MatchLoadMgr::onServiceSessionConnect(&v16->match_load_mgr, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48));
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v34.m_data.m_seq.m_holder.m_capacity,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/network/service_session_mgr.cpp",
            "addSession",
            81);
          v17 = *(_DWORD *)(v2 + 48);
          v18 = *(_DWORD *)(v2 + 64);
          v19 = proto::ServiceType_Name[abi:cxx11](v18);
          v20 = (const char *)std::string::c_str(v19);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity,
            "add service_session with type=%s:%u id=%u succ",
            v20,
            (unsigned int)v18,
            v17);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v34.m_data.m_seq.m_holder.m_capacity,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/network/service_session_mgr.cpp",
          "addSession",
          84);
        v21 = *(_DWORD *)(v2 + 48);
        v22 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 112));
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity,
          "add %lu service type for session id=%u, app_id=%u",
          v22,
          session_id,
          v21);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34.m_data.m_seq.m_holder.m_capacity);
        v5 = 0;
      }
      std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 80));
LABEL_24:
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 176));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 112));
  }
  result = v5;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 91: range 00000000038552B6-0000000003855D65
__int64 __fastcall ServiceSessionMgr::delSession(ServiceSessionMgr *const this, __int64 app_id, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false,false>::pointer v7; // rax
  ServiceSession *v8; // rax
  const std::vector<unsigned int> *ServiceTypeVec; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v12; // r14
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v16; // rax
  __int64 v17; // rax
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v18; // rax
  __int64 v19; // rax
  boost::container::vec_iterator<unsigned int*,false> *v20; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *v21; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *v22; // rax
  NodeserverService *v23; // rax
  NodeserverService *v24; // rax
  const char *v25; // r15
  proto::ServiceType v26; // r14d
  const std::string *v27; // rax
  const char *v28; // rax
  __int64 result; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-2D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-2D0h] BYREF
  boost::container::vec_iterator<unsigned int*,false> p___last; // [rsp+38h] [rbp-2C8h] BYREF
  unsigned int __value; // [rsp+40h] [rbp-2C0h] BYREF
  boost::container::vec_iterator<unsigned int*,false> p___first; // [rsp+48h] [rbp-2B8h] BYREF
  char v35[8]; // [rsp+50h] [rbp-2B0h] BYREF
  unsigned int *m_ptr; // [rsp+58h] [rbp-2A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-2A0h] BYREF
  boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void> v38; // [rsp+68h] [rbp-298h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+80h] [rbp-280h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *app_id_vec; // [rsp+88h] [rbp-278h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v41; // [rsp+90h] [rbp-270h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v42; // [rsp+98h] [rbp-268h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v43; // [rsp+A0h] [rbp-260h]
  boost::container::vec_iterator<unsigned int*,false> *p_p___last; // [rsp+A8h] [rbp-258h]
  unsigned int *v45; // [rsp+B0h] [rbp-250h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v46; // [rsp+B8h] [rbp-248h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v47; // [rsp+C0h] [rbp-240h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v48; // [rsp+C8h] [rbp-238h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v49; // [rsp+D0h] [rbp-230h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v50; // [rsp+D8h] [rbp-228h]
  unsigned int *p_value; // [rsp+E0h] [rbp-220h]
  __int64 v52; // [rsp+E8h] [rbp-218h]
  char *v53; // [rsp+F0h] [rbp-210h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v54; // [rsp+F8h] [rbp-208h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v55; // [rsp+100h] [rbp-200h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v56; // [rsp+108h] [rbp-1F8h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // [rsp+110h] [rbp-1F0h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+118h] [rbp-1E8h]
  char *v59; // [rsp+120h] [rbp-1E0h]
  __int64 v60; // [rsp+128h] [rbp-1D8h]
  boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::const_iterator *p_first; // [rsp+130h] [rbp-1D0h]
  unsigned __int64 p_m_ptr; // [rsp+138h] [rbp-1C8h]
  __int64 *v63; // [rsp+140h] [rbp-1C0h]
  __int64 *v64; // [rsp+148h] [rbp-1B8h]
  __int64 *v65; // [rsp+150h] [rbp-1B0h]
  unsigned __int64 v66; // [rsp+158h] [rbp-1A8h]
  unsigned __int64 v67; // [rsp+160h] [rbp-1A0h]
  boost::container::vec_iterator<unsigned int*,false> *p_p___first; // [rsp+168h] [rbp-198h]
  common::milog::MiLogStream v69; // [rsp+170h] [rbp-190h] BYREF
  char v70[368]; // [rsp+190h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL, app_id, a3);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 16 service_type:115 48 4 9 app_id:90 64 8 7 lock:93 96 8 7 iter:96 128 8 8 iter:118 160 1"
                        "6 15 session_ptr:102 192 24 20 service_type_vec:112 256 32 14 app_id_str:131";
  *(_QWORD *)(v3 + 16) = ServiceSessionMgr::delSession;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = app_id;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->mu_);
  *(std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::find(
                                                                                               &this->session_map_,
                                                                                               (const std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::key_type *)(v3 + 48));
  v38.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::end(&this->session_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<ServiceSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false> *)(v3 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false> *)&v38.m_holder.m_capacity) )
  {
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/service_session_mgr.cpp",
      "delSession",
      99);
    common::milog::MiLogStream::operator()(&v69, "can not find app_id=%u, skip", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v69);
    v6 = 0;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false,false> *const)(v3 + 96));
    std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)(v3 + 160), &v7->second);
    if ( std::operator==<ServiceSession>(0LL, (const std::shared_ptr<ServiceSession> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/service_session_mgr.cpp",
        "delSession",
        107);
      common::milog::MiLogStream::operator()(&v69, "session is null");
      common::milog::MiLogStream::~MiLogStream(&v69);
      v6 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      ServiceTypeVec = ServiceSession::getServiceTypeVec(v8);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192), ServiceTypeVec);
      __for_range = (const std::vector<unsigned int> *)(v3 + 192);
      __for_begin._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(v3 + 192))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v3 + 32) = *v11;
        *(std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::find(&this->type_to_app_ids_map_, (const std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::key_type *)(v3 + 32));
        v38.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::end(&this->type_to_app_ids_map_)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)(v3 + 128),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)&v38.m_holder.m_capacity) )
        {
          app_id_vec = &std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v3 + 128))->second;
          v12 = app_id_vec;
          v54 = app_id_vec;
          v55 = app_id_vec;
          v56 = app_id_vec;
          v13 = app_id_vec;
          if ( *(_BYTE *)(((unsigned __int64)app_id_vec >> 3) + 0x7FFF8000) )
            v13 = (boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *)__asan_report_load8(app_id_vec);
          m_start = v13->m_data.m_seq.m_holder.m_start;
          if ( *(_BYTE *)(((unsigned __int64)&v55->m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
            __asan_report_load8(&v55->m_data.m_seq.m_holder.m_size);
          m_size = v55->m_data.m_seq.m_holder.m_size;
          if ( m_size )
            v14 = (__int64)&m_start[m_size];
          else
            v14 = (__int64)m_start;
          v59 = v35;
          v60 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            __asan_report_store8(v35, &v38.m_holder.m_capacity);
          *(_QWORD *)v59 = v60;
          v53 = v35;
          v15 = (__int64 *)v35;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            v15 = (__int64 *)__asan_report_load8(v35);
          v37 = *v15;
          v46 = app_id_vec;
          v47 = app_id_vec;
          v48 = app_id_vec;
          v16 = app_id_vec;
          if ( *(_BYTE *)(((unsigned __int64)app_id_vec >> 3) + 0x7FFF8000) )
            v16 = (boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *)__asan_report_load8(app_id_vec);
          v49 = v16->m_data.m_seq.m_holder.m_start;
          if ( *(_BYTE *)(((unsigned __int64)&v47->m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
            __asan_report_load8(&v47->m_data.m_seq.m_holder.m_size);
          v50 = v47->m_data.m_seq.m_holder.m_size;
          if ( v50 )
            v17 = (__int64)&v49[v50];
          else
            v17 = (__int64)v49;
          p_value = &__value;
          v52 = v17;
          if ( *(_BYTE *)(((unsigned __int64)&__value >> 3) + 0x7FFF8000) )
            __asan_report_store8(&__value, &v38.m_holder.m_capacity);
          *(_QWORD *)p_value = v52;
          v41 = app_id_vec;
          v42 = app_id_vec;
          v43 = app_id_vec;
          v18 = app_id_vec;
          if ( *(_BYTE *)(((unsigned __int64)app_id_vec >> 3) + 0x7FFF8000) )
            v18 = (boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *)__asan_report_load8(app_id_vec);
          v19 = (__int64)v18->m_data.m_seq.m_holder.m_start;
          p_p___last = &p___last;
          v45 = (unsigned int *)v19;
          if ( *(_BYTE *)(((unsigned __int64)&p___last >> 3) + 0x7FFF8000) )
            __asan_report_store8(&p___last, &v38.m_holder.m_capacity);
          p_p___last->m_ptr = v45;
          std::remove<boost::container::vec_iterator<unsigned int *,false>,unsigned int>(
            &p___first,
            &p___last,
            &__value);
          p_p___first = &p___first;
          v20 = &p___first;
          if ( *(_BYTE *)(((unsigned __int64)&p___first >> 3) + 0x7FFF8000) )
            v20 = (boost::container::vec_iterator<unsigned int*,false> *)__asan_report_load8(&p___first);
          m_ptr = v20->m_ptr;
          p_first = (boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::const_iterator *)v12;
          p_m_ptr = (unsigned __int64)&m_ptr;
          v63 = &v37;
          v64 = &v37;
          v65 = &v37;
          v21 = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *)&v37;
          if ( *(_BYTE *)(((unsigned __int64)&v37 >> 3) + 0x7FFF8000) )
            v21 = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *)__asan_report_load8(&v37);
          v38.m_holder.m_capacity = *v21;
          v66 = p_m_ptr;
          v67 = p_m_ptr;
          v22 = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *)p_m_ptr;
          if ( *(_BYTE *)((p_m_ptr >> 3) + 0x7FFF8000) )
            v22 = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *)__asan_report_load8(p_m_ptr);
          v38.m_holder.m_size = *v22;
          boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::erase(
            &v38,
            (boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::const_iterator *)v12,
            (boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::const_iterator *)&v38.m_holder.m_size);
        }
        v23 = ServiceBox::findService<NodeserverService>();
        PlayerMgr::onServiceSessionDisconnect(&v23->player_mgr, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
        v24 = ServiceBox::findService<NodeserverService>();
        MatchLoadMgr::onServiceSessionDisconnect(&v24->match_load_mgr, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v3 + 256), *(_DWORD *)(v3 + 48));
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/network/service_session_mgr.cpp",
          "delSession",
          132);
        v25 = (const char *)std::string::c_str(v3 + 256);
        v26 = *(_DWORD *)(v3 + 32);
        v27 = proto::ServiceType_Name[abi:cxx11](v26);
        v28 = (const char *)std::string::c_str(v27);
        common::milog::MiLogStream::operator()(
          &v69,
          "del service_session with type=%s:%u app_id=%s",
          v28,
          (unsigned int)v26,
          v25);
        common::milog::MiLogStream::~MiLogStream(&v69);
        std::string::~string((void *)(v3 + 256));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::erase(
        &this->session_map_,
        (const std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::key_type *)(v3 + 48));
      v6 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
    }
    std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)(v3 + 160));
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  result = v6;
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 143: range 0000000003855D66-0000000003855F4C
ServiceSessionMgr *__fastcall ServiceSessionMgr::findSessionByTypeAndAppId(
        ServiceSessionMgr *const this,
        __int64 service_type,
        uint32_t app_id,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false,false>::pointer v7; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v11[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 app_id:142 64 8 8 lock:145 96 8 10 s_iter:147";
  *(_QWORD *)(v4 + 16) = ServiceSessionMgr::findSessionByTypeAndAppId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = a4;
  std::lock_guard<std::mutex>::lock_guard(
    (std::lock_guard<std::mutex> *const)(v4 + 64),
    (std::lock_guard<std::mutex>::mutex_type *)service_type);
  *(std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::find(
                                                                                               (std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>> *const)(service_type + 40),
                                                                                               (const std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::end((std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>> *const)(service_type + 40))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<ServiceSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false> *)(v4 + 96),
         &__y) )
  {
    std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)this, 0LL);
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false,false> *const)(v4 + 96));
    std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)this, &v7->second);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 64));
  if ( v11 == (char *)v4 )
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

// Line 157: range 0000000003855F4E-0000000003856596
ServiceSessionMgr *__fastcall ServiceSessionMgr::findSessionByTypeAndOffset(
        ServiceSessionMgr *const this,
        __int64 service_type,
        uint32_t offset,
        unsigned int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::size_type v7; // rsi
  int v8; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v9; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *p_m_size; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v11; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *v12; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v13; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v15; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *v16; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rdx
  char v18; // cl
  __int64 v19; // rdx
  char v21; // [rsp+7h] [rbp-169h]
  int app_id; // [rsp+30h] [rbp-140h]
  uint32_t idx; // [rsp+34h] [rbp-13Ch]
  boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void> __y; // [rsp+38h] [rbp-138h] BYREF
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v28; // [rsp+50h] [rbp-120h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v29; // [rsp+58h] [rbp-118h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *p_second; // [rsp+60h] [rbp-110h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v31; // [rsp+68h] [rbp-108h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v32; // [rsp+70h] [rbp-100h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v33; // [rsp+78h] [rbp-F8h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v34; // [rsp+80h] [rbp-F0h]
  __int64 v35; // [rsp+88h] [rbp-E8h]
  boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::size_type n; // [rsp+90h] [rbp-E0h]
  __int64 v37; // [rsp+98h] [rbp-D8h]
  common::milog::MiLogStream v38; // [rsp+A0h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 9 <unknown> 48 4 16 service_type:156 64 8 8 lock:163 96 8 8 iter:166";
  *(_QWORD *)(v4 + 16) = ServiceSessionMgr::findSessionByTypeAndOffset;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = offset;
  app_id = 0;
  std::lock_guard<std::mutex>::lock_guard(
    (std::lock_guard<std::mutex> *const)(v4 + 64),
    (std::lock_guard<std::mutex>::mutex_type *)service_type);
  *(std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::find((std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>> *const)(service_type + 96), (const std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::key_type *)(v4 + 48));
  __y.m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::end((std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>> *const)(service_type + 96))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)(v4 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/service_session_mgr.cpp",
      "findSessionByTypeAndOffset",
      169);
    common::milog::MiLogStream::operator()(&v38, "can not find service_type=%u", *(unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v7 = 0LL;
    std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)this, 0LL);
    v8 = 0;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v4 + 96));
    __y.m_holder.m_size = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v9->second;
    __y.m_holder.m_capacity = (boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type)&v9->second;
    p_m_size = &v9->second.m_data.m_seq.m_holder.m_size;
    if ( *(_BYTE *)(((unsigned __int64)p_m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_m_size);
    if ( *(_QWORD *)(__y.m_holder.m_capacity + 8) )
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v4 + 96));
      p_second = &v11->second;
      v31 = &v11->second;
      v12 = &v11->second.m_data.m_seq.m_holder.m_size;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      idx = common::tools::HashUtils::jumpConsistentHash(a4, v31->m_data.m_seq.m_holder.m_size);
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v4 + 96));
      v28 = &v13->second;
      v29 = &v13->second;
      v14 = &v13->second.m_data.m_seq.m_holder.m_size;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v14);
      if ( idx < v29->m_data.m_seq.m_holder.m_size )
      {
        v34 = &std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v4 + 96))->second;
        v35 = idx;
        n = (boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::size_type)v34;
        v37 = idx;
        *(_BYTE *)(v4 + 32) = v21;
        v7 = n;
        boost::container::vector<unsigned int,boost::container::new_allocator<unsigned int>,void>::nth(&__y, n);
        if ( !__y.m_holder.m_start )
        {
          __asan_handle_no_return();
          __assert_fail(
            "!!m_ptr",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
            0x8Eu,
            "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>"
            "::operator*() const [with Pointer = unsigned int*; bool IsConst = false; boost::container::vec_iterator<Poin"
            "ter, IsConst>::reference = unsigned int&]");
        }
        m_start = __y.m_holder.m_start;
        v18 = *(_BYTE *)(((unsigned __int64)__y.m_holder.m_start >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v18 != 0;
        if ( v18 != 0 && (char)(((__int64)__y.m_holder.m_start & 7) + 3) >= v18 )
          __asan_report_load4(__y.m_holder.m_start);
        app_id = *m_start;
        v8 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/service_session_mgr.cpp",
          "findSessionByTypeAndOffset",
          184);
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v4 + 96));
        v32 = &v15->second;
        v33 = &v15->second;
        v16 = &v15->second.m_data.m_seq.m_holder.m_size;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16);
        common::milog::MiLogStream::operator()(
          &v38,
          "service_type=%u idx=%u exceed conn_size=%lu",
          *(unsigned int *)(v4 + 48),
          idx,
          v33->m_data.m_seq.m_holder.m_size);
        common::milog::MiLogStream::~MiLogStream(&v38);
        v7 = 0LL;
        std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)this, 0LL);
        v8 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/service_session_mgr.cpp",
        "findSessionByTypeAndOffset",
        176);
      common::milog::MiLogStream::operator()(&v38, "service_type=%u has no useable session", *(unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v7 = 0LL;
      std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)this, 0LL);
      v8 = 0;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 64));
  if ( v8 == 1 )
  {
    v19 = *(unsigned int *)(v4 + 48);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v7, v19);
    ServiceSessionMgr::findSessionByTypeAndAppId(this, service_type, v19, app_id);
  }
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

// Line 197: range 0000000003856598-0000000003856C09
void __fastcall ServiceSessionMgr::broadcastPacketByServiceType(
        ServiceSessionMgr *const this,
        common::minet::PacketPtr *p_packet_ptr,
        uint32_t service_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v6; // rax
  __int64 m_start; // rax
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v8; // rax
  __int64 v9; // rax
  unsigned int *m_ptr; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false,false>::pointer v11; // rax
  std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> __y; // [rsp+30h] [rbp-190h] BYREF
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *__for_range; // [rsp+38h] [rbp-188h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v21; // [rsp+40h] [rbp-180h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v22; // [rsp+48h] [rbp-178h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v23; // [rsp+50h] [rbp-170h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer v24; // [rsp+58h] [rbp-168h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_size; // [rsp+60h] [rbp-160h]
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::iterator *p_for_end; // [rsp+68h] [rbp-158h]
  unsigned int *v27; // [rsp+70h] [rbp-150h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v28; // [rsp+78h] [rbp-148h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v29; // [rsp+80h] [rbp-140h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v30; // [rsp+88h] [rbp-138h]
  boost::container::dtl::flat_tree<unsigned int,boost::move_detail::identity<unsigned int>,std::less<unsigned int>,void>::iterator *p_for_begin; // [rsp+90h] [rbp-130h]
  unsigned int *v32; // [rsp+98h] [rbp-128h]
  std::shared_ptr<common::minet::Packet> v33; // [rsp+A0h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-110h] BYREF
  char v35[240]; // [rsp+D0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 session_id:207 48 4 16 service_type:196 64 8 8 lock:199 96 8 8 iter:201 128 8 14 sessi"
                        "on_it:209 160 16 15 session_ptr:212";
  *(_QWORD *)(v3 + 16) = ServiceSessionMgr::broadcastPacketByServiceType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = service_type;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->mu_);
  *(std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::find(&this->type_to_app_ids_map_, (const std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::end(&this->type_to_app_ids_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/service_session_mgr.cpp",
      "broadcastPacketByServiceType",
      204);
    common::milog::MiLogStream::operator()(&v34, "can not find service_type=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v3 + 96))->second;
    v28 = __for_range;
    v29 = __for_range;
    v30 = __for_range;
    v6 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
      v6 = (boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    m_start = (__int64)v6->m_data.m_seq.m_holder.m_start;
    p_for_begin = &__for_begin;
    v32 = (unsigned int *)m_start;
    if ( *(_BYTE *)(((unsigned __int64)&__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_store8(&__for_begin, &__y);
    p_for_begin->m_ptr = v32;
    v21 = __for_range;
    v22 = __for_range;
    v23 = __for_range;
    v8 = __for_range;
    if ( *(_BYTE *)(((unsigned __int64)__for_range >> 3) + 0x7FFF8000) )
      v8 = (boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *)__asan_report_load8(__for_range);
    v24 = v8->m_data.m_seq.m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&v22->m_data.m_seq.m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v22->m_data.m_seq.m_holder.m_size);
    m_size = v22->m_data.m_seq.m_holder.m_size;
    if ( m_size )
      v9 = (__int64)&v24[m_size];
    else
      v9 = (__int64)v24;
    p_for_end = &__for_end;
    v27 = (unsigned int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)&__for_end >> 3) + 0x7FFF8000) )
      __asan_report_store8(&__for_end, &__y);
    p_for_end->m_ptr = v27;
    while ( __for_begin.m_ptr != __for_end.m_ptr )
    {
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return();
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x8Eu,
          "boost::container::vec_iterator<Pointer, IsConst>::reference boost::container::vec_iterator<Pointer, IsConst>::"
          "operator*() const [with Pointer = unsigned int*; bool IsConst = false; boost::container::vec_iterator<Pointer,"
          " IsConst>::reference = unsigned int&]");
      }
      m_ptr = __for_begin.m_ptr;
      if ( *(_BYTE *)(((unsigned __int64)__for_begin.m_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__for_begin.m_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin.m_ptr >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin.m_ptr);
      }
      *(_DWORD *)(v3 + 32) = *m_ptr;
      *(std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::find(
                                                                                                    &this->session_map_,
                                                                                                    (const std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::key_type *)(v3 + 32));
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::end(&this->session_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<ServiceSession>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false> *)(v3 + 128),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false> *)&__y) )
      {
        v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceSession> >,false,false> *const)(v3 + 128));
        std::shared_ptr<ServiceSession>::shared_ptr((std::shared_ptr<ServiceSession> *const)(v3 + 160), &v11->second);
        if ( std::operator!=<ServiceSession>((const std::shared_ptr<ServiceSession> *)(v3 + 160), 0LL) )
        {
          v12 = std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v12);
          v14 = (unsigned __int64)(v13->_vptr_AServerSession + 10);
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(v13->_vptr_AServerSession + 10);
          v15 = *(void (__fastcall **)(std::__shared_ptr_access<ServiceSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v33, p_packet_ptr);
          v15(v13, &v33);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v33);
        }
        std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)(v3 + 160));
      }
      if ( !__for_begin.m_ptr )
      {
        __asan_handle_no_return();
        __assert_fail(
          "!!m_ptr",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
          0x98u,
          "boost::container::vec_iterator<Pointer, IsConst>& boost::container::vec_iterator<Pointer, IsConst>::operator++"
          "() [with Pointer = unsigned int*; bool IsConst = false]");
      }
      ++__for_begin.m_ptr;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  if ( v35 == (char *)v3 )
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
};

// Line 223: range 0000000003856C0A-0000000003856EB7
int32_t __cdecl ServiceSessionMgr::getAllMultiserverServiceType(
        ServiceSessionMgr *const this,
        std::vector<unsigned int> *type_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v9; // rdx
  int32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v12[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:225 64 8 8 iter:227";
  *(_QWORD *)(v2 + 16) = ServiceSessionMgr::getAllMultiserverServiceType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::clear(type_vec);
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->mu_);
  *(std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::begin(&this->type_to_app_ids_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::end(&this->type_to_app_ids_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)(v2 + 64),
            &__y) )
      break;
    v5 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) <= 3 )
      v5 = __asan_report_load4(v5);
    if ( *(_DWORD *)v5 == 3 )
      goto LABEL_16;
    v6 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) <= 3 )
      v6 = __asan_report_load4(v6);
    if ( *(_DWORD *)v6 == 8 )
      goto LABEL_16;
    v7 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) <= 3 )
      v7 = __asan_report_load4(v7);
    if ( *(_DWORD *)v7 == 5 )
LABEL_16:
      v8 = 0;
    else
      v8 = 1;
    if ( v8 )
    {
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64));
      std::vector<unsigned int>::push_back(type_vec, &v9->first);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64),
      0);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
  result = 0;
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

// Line 239: range 0000000003856EB8-0000000003857106
void __cdecl ServiceSessionMgr::getSessionNumByCount(
        ServiceSessionMgr *const this,
        std::map<unsigned int,unsigned int> *num_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v5; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<unsigned int>,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type *p_m_size; // rax
  int m_size; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false>::pointer v8; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *p_second; // [rsp+20h] [rbp-A0h]
  boost::container::flat_set<unsigned int,std::less<unsigned int>,void> *v15; // [rsp+28h] [rbp-98h]
  char v16[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 lock:240 64 8 8 iter:241";
  *(_QWORD *)(v2 + 16) = ServiceSessionMgr::getSessionNumByCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->mu_);
  *(std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::begin(&this->type_to_app_ids_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::end(&this->type_to_app_ids_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false> *)(v2 + 64),
            &__y) )
      break;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64));
    p_second = &v5->second;
    v15 = &v5->second;
    p_m_size = &v5->second.m_data.m_seq.m_holder.m_size;
    if ( *(_BYTE *)(((unsigned __int64)p_m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_m_size);
    m_size = v15->m_data.m_seq.m_holder.m_size;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64));
    v9 = std::map<unsigned int,unsigned int>::operator[](num_map, &v8->first);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v9, v8);
    }
    *v10 = m_size;
    std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,boost::container::flat_set<unsigned int,std::less<unsigned int>,void> >,false,false> *const)(v2 + 64),
      0);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
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
};
