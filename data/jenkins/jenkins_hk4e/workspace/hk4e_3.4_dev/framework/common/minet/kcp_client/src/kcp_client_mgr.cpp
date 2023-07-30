// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_client/src/kcp_client_mgr.cpp

// Line 34: range 0000000000AAA85E-0000000000AAB2DC
volatile signed __int32 *__fastcall common::minet::KcpClientMgr::connect(
        unsigned __int64 a1,
        common::minet::KcpClientMgr *const this,
        const std::string *host,
        uint32_t port,
        uint32_t token,
        uint32_t data)
{
  std::string *p_client_mu; // r15
  unsigned __int64 v9; // r12
  volatile signed __int32 *v10; // rbx
  _DWORD *v11; // r13
  bool *v12; // rdi
  char v13; // al
  std::forward_iterator_tag v14; // cl
  char v15; // al
  char v16; // dl
  __int64 v17; // rax
  const std::shared_ptr<common::minet::kcp_client> *v19; // rcx
  __int64 *p_M_string_length; // rdi
  char v21; // al
  char v22; // dl
  unsigned __int64 v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  void *p_wheel; // rdi
  char v28; // al
  std::vector<std::shared_ptr<common::minet::kcp_client>> *v29; // rdi
  __int64 p_M_finish; // rax
  std::vector<std::shared_ptr<common::minet::kcp_client>>::iterator v31; // rsi
  __int64 p_M_end_of_storage; // rax
  __int64 v33; // rax
  volatile signed __int32 *v34; // rdx
  char v35; // cl
  __int64 v36; // rax
  char v37; // dl
  volatile signed __int32 *v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbp
  std::string *p_type; // rdi
  char v45; // dl
  signed __int32 i; // eax
  char v47; // dl
  __int64 v48; // rax
  char v49; // dl
  signed __int32 j; // eax
  char v51; // dl
  __int64 v52; // rax
  int hostb; // [rsp+8h] [rbp-120h]
  common::minet::kcp_client *p_anon_0; // [rsp+28h] [rbp-100h]
  std::string type; // [rsp+30h] [rbp-F8h] BYREF
  char v60[216]; // [rsp+50h] [rbp-D8h] BYREF

  v9 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(160LL);
    if ( v17 )
      v9 = v17;
  }
  v10 = (volatile signed __int32 *)(v9 + 160);
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "4 48 1 4 __a2 64 8 8 param:35 96 16 13 client_ptr:37 128 16 7 __guard";
  *(_QWORD *)(v9 + 16) = common::minet::KcpClientMgr::connect;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234753551;
  v11[536862722] = -218959360;
  v11[536862723] = -219021312;
  v11[536862724] = -202178560;
  *(_QWORD *)(v9 + 64) = 30000LL;
  v12 = &common::tools::perf::MemoryPerf::is_record;
  v13 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v13 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v13 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
LABEL_15:
    __asan_report_store4(v12);
LABEL_16:
    __asan_report_store4(v12);
    goto LABEL_17;
  }
  if ( !common::tools::perf::MemoryPerf::is_record )
  {
    *(_QWORD *)(v9 + 96) = 0LL;
    std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::minet::kcp_client,std::allocator<common::minet::kcp_client>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::minet::kcp_client,std::allocator<common::minet::kcp_client>,(__gnu_cxx::_Lock_policy)2> > *)(v9 + 48));
    p_client_mu = *(std::string **)(v9 + 136);
    p_M_string_length = (__int64 *)&p_client_mu->_M_string_length;
    v21 = *(_BYTE *)(((unsigned __int64)&p_client_mu->_M_string_length >> 3) + 0x7FFF8000);
    if ( v21 && v21 <= 3 )
    {
      __asan_report_store4(p_M_string_length);
    }
    else
    {
      LODWORD(p_client_mu->_M_string_length) = 1;
      p_M_string_length = (__int64 *)((char *)&p_client_mu->_M_string_length + 4);
      v22 = *(_BYTE *)((((unsigned __int64)&p_client_mu->_M_string_length + 4) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)p_client_mu + 12) & 7) + 3) < v22 || !v22 )
      {
        HIDWORD(p_client_mu->_M_string_length) = 1;
        if ( !*(_BYTE *)(((unsigned __int64)p_client_mu >> 3) + 0x7FFF8000) )
        {
          p_client_mu->_M_dataplus._M_p = (std::string::pointer)(&`vtable for'std::_Sp_counted_ptr_inplace<common::minet::kcp_client,std::allocator<common::minet::kcp_client>,(__gnu_cxx::_Lock_policy)2>
                                                               + 2);
          p_anon_0 = (common::minet::kcp_client *)&p_client_mu->_anon_0;
          common::minet::kcp_client::kcp_client(
            (common::minet::kcp_client *const)&p_client_mu->_anon_0,
            (const common::minet::KcpClientInitParams *)(v9 + 64));
LABEL_31:
          *(_QWORD *)(v9 + 136) = 0LL;
          *(_QWORD *)(v9 + 104) = p_client_mu;
          *(_QWORD *)(v9 + 96) = p_anon_0;
          goto LABEL_21;
        }
LABEL_30:
        __asan_report_store8();
        goto LABEL_31;
      }
    }
    __asan_report_store4(p_M_string_length);
    goto LABEL_30;
  }
  *(_QWORD *)(v9 + 96) = 0LL;
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::kcp_client,common::tools::perf::allocator<common::minet::kcp_client,common::minet::kcp_client>,(__gnu_cxx::_Lock_policy)2>,common::minet::kcp_client>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::kcp_client,common::tools::perf::allocator<common::minet::kcp_client,common::minet::kcp_client>,(__gnu_cxx::_Lock_policy)2>,common::minet::kcp_client> *)(v9 + 48));
  p_client_mu = *(std::string **)(v9 + 136);
  v12 = (bool *)&p_client_mu->_M_string_length;
  v15 = *(_BYTE *)(((unsigned __int64)&p_client_mu->_M_string_length >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_15;
  LODWORD(p_client_mu->_M_string_length) = 1;
  v12 = (bool *)&p_client_mu->_M_string_length + 4;
  v16 = *(_BYTE *)((((unsigned __int64)&p_client_mu->_M_string_length + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)p_client_mu + 12) & 7) + 3) >= v16 && v16 )
    goto LABEL_16;
  HIDWORD(p_client_mu->_M_string_length) = 1;
  if ( *(_BYTE *)(((unsigned __int64)p_client_mu >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
LABEL_18:
    common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &type, 0x6001F0uLL);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
      operator delete(type._M_dataplus._M_p);
    goto LABEL_20;
  }
  p_client_mu->_M_dataplus._M_p = (std::string::pointer)(&`vtable for'std::_Sp_counted_ptr_inplace<common::minet::kcp_client,common::tools::perf::allocator<common::minet::kcp_client,common::minet::kcp_client>,(__gnu_cxx::_Lock_policy)2>
                                                       + 2);
  p_anon_0 = (common::minet::kcp_client *)&p_client_mu->_anon_0;
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    type._M_dataplus._M_p = type._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&type, "N6common5minet10kcp_clientE", "", v14);
    goto LABEL_18;
  }
LABEL_20:
  common::minet::kcp_client::kcp_client(p_anon_0, (const common::minet::KcpClientInitParams *)(v9 + 64));
  *(_QWORD *)(v9 + 136) = 0LL;
  *(_QWORD *)(v9 + 104) = p_client_mu;
  *(_QWORD *)(v9 + 96) = p_anon_0;
LABEL_21:
  if ( !common::minet::kcp_client::connect(*(common::minet::kcp_client *const *)(v9 + 96), host, port, token, data) )
  {
LABEL_47:
    p_client_mu = (std::string *)&this->client_mu_;
    if ( &_pthread_key_create )
    {
      hostb = pthread_mutex_lock(&this->client_mu_._M_mutex);
      if ( hostb )
      {
        __asan_handle_no_return(&this->client_mu_);
        std::__throw_system_error(hostb);
      }
    }
    p_wheel = &this->wheel_;
    v28 = *(_BYTE *)(((unsigned __int64)&this->wheel_ >> 3) + 0x7FFF8000);
    if ( v28 && v28 <= 3 )
    {
      __asan_report_load4(p_wheel);
    }
    else
    {
      p_wheel = &this->kcp_client_mgr_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->kcp_client_mgr_vec_ >> 3) + 0x7FFF8000) )
      {
        v29 = &this->kcp_client_mgr_vec_._M_impl._M_start[this->wheel_];
        p_M_finish = (__int64)&v29->_M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&v29->_M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          v31._M_current = v29->_M_impl._M_finish;
          p_M_end_of_storage = (__int64)&v29->_M_impl._M_end_of_storage;
          if ( !*(_BYTE *)(((unsigned __int64)&v29->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
          {
            if ( v31._M_current == v29->_M_impl._M_end_of_storage )
              goto LABEL_81;
            if ( !*(_BYTE *)(((unsigned __int64)v31._M_current >> 3) + 0x7FFF8000) )
            {
              v31._M_current->_M_ptr = *(std::__shared_ptr<common::minet::kcp_client,(__gnu_cxx::_Lock_policy)2>::element_type **)(v9 + 96);
              v33 = *(_QWORD *)(v9 + 104);
              if ( !*(_BYTE *)(((unsigned __int64)&v31._M_current->_M_refcount >> 3) + 0x7FFF8000) )
              {
                v31._M_current->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v33;
                if ( !v33 )
                {
LABEL_62:
                  ++v29->_M_impl._M_finish;
                  goto LABEL_63;
                }
                v34 = (volatile signed __int32 *)(v33 + 8);
                if ( !&_pthread_key_create )
                  goto LABEL_77;
                v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v34 & 7) + 3) < v35 || !v35 )
                {
                  _InterlockedAdd(v34, 1u);
                  goto LABEL_62;
                }
LABEL_76:
                v29 = (std::vector<std::shared_ptr<common::minet::kcp_client>> *)v34;
                v33 = __asan_report_store4(v34);
LABEL_77:
                v31._M_current = (std::shared_ptr<common::minet::kcp_client> *)*(unsigned __int8 *)(((unsigned __int64)(v33 + 8) >> 3)
                                                                                                  + 0x7FFF8000);
                if ( (char)(((v33 + 8) & 7) + 3) < SLOBYTE(v31._M_current) || !LOBYTE(v31._M_current) )
                {
                  ++*(_DWORD *)(v33 + 8);
                  goto LABEL_62;
                }
                v29 = (std::vector<std::shared_ptr<common::minet::kcp_client>> *)(v33 + 8);
                __asan_report_load4(v33 + 8);
LABEL_81:
                std::vector<std::shared_ptr<common::minet::kcp_client>>::_M_realloc_insert<std::shared_ptr<common::minet::kcp_client> const&>(
                  v29,
                  v31,
                  (const std::shared_ptr<common::minet::kcp_client> *)(v9 + 96),
                  v19);
LABEL_63:
                if ( *(_BYTE *)(((unsigned __int64)&this->kcp_client_mgr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(&this->kcp_client_mgr_vec_._M_impl._M_finish);
                }
                else
                {
                  this->wheel_ = (this->wheel_ + 1)
                               % (0xAAAAAAAAAAAAAAABLL
                                * (((char *)this->kcp_client_mgr_vec_._M_impl._M_finish
                                  - (char *)this->kcp_client_mgr_vec_._M_impl._M_start) >> 3));
                  if ( &_pthread_key_create )
                    pthread_mutex_unlock(&this->client_mu_._M_mutex);
                  if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)a1 = *(_QWORD *)(v9 + 96);
                    v23 = a1 + 8;
                    if ( !*(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)(a1 + 8) = 0LL;
                      v36 = *(_QWORD *)(v9 + 104);
                      *(_QWORD *)(v9 + 104) = 0LL;
                      *(_QWORD *)(a1 + 8) = v36;
                      *(_QWORD *)(v9 + 96) = 0LL;
                      goto LABEL_36;
                    }
LABEL_84:
                    __asan_report_store8();
                    goto LABEL_85;
                  }
                }
                v23 = a1;
                __asan_report_store8();
                goto LABEL_84;
              }
LABEL_75:
              __asan_report_store8();
              goto LABEL_76;
            }
LABEL_74:
            __asan_report_store8();
            goto LABEL_75;
          }
LABEL_73:
          __asan_report_load8(p_M_end_of_storage);
          goto LABEL_74;
        }
LABEL_72:
        p_M_end_of_storage = __asan_report_load8(p_M_finish);
        goto LABEL_73;
      }
    }
    p_M_finish = __asan_report_load8(p_wheel);
    goto LABEL_72;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&type,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/kcp_client_mgr.cpp",
    "connect",
    40);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&type, "client connect failed");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&type);
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_46;
  }
  *(_QWORD *)a1 = 0LL;
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
LABEL_36:
  v10 = *(volatile signed __int32 **)(v9 + 104);
  if ( !v10 )
    goto LABEL_42;
  v23 = (unsigned __int64)(v10 + 2);
  if ( !&_pthread_key_create )
    goto LABEL_86;
  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
  if ( (char)((v23 & 7) + 3) < v24 || !v24 )
  {
    v25 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 0xFFFFFFFF);
    goto LABEL_41;
  }
LABEL_85:
  __asan_report_store4(v23);
LABEL_86:
  v37 = *(_BYTE *)(((unsigned __int64)(v10 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v10 + 2);
    goto LABEL_90;
  }
  v25 = *((_DWORD *)v10 + 2);
  *((_DWORD *)v10 + 2) = v25 - 1;
LABEL_41:
  if ( v25 != 1 )
    goto LABEL_42;
LABEL_90:
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    v38 = v10;
    __asan_report_load8(v10);
    goto LABEL_101;
  }
  v38 = (volatile signed __int32 *)(*(_QWORD *)v10 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(v38);
    goto LABEL_102;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
  v38 = v10 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_103;
  v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
    goto LABEL_96;
  }
LABEL_102:
  __asan_report_store4(v38);
LABEL_103:
  v42 = *(_BYTE *)(((unsigned __int64)(v10 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v10 + 3);
LABEL_107:
    v41 = (unsigned __int64)v10;
    __asan_report_load8(v10);
    goto LABEL_108;
  }
  v40 = *((_DWORD *)v10 + 3);
  *((_DWORD *)v10 + 3) = v40 - 1;
LABEL_96:
  if ( v40 != 1 )
    goto LABEL_42;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  v41 = *(_QWORD *)v10 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    p_type = &type;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&type);
    while ( 1 )
    {
      v10 = (volatile signed __int32 *)*((_QWORD *)v10 - 7);
      if ( !v10 )
        goto LABEL_140;
      p_type = (std::string *)(v10 + 2);
      if ( !&_pthread_key_create )
        goto LABEL_119;
      v45 = *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_type & 7) + 3) < v45 || !v45 )
        break;
      v43 = (struct _Unwind_Exception *)__asan_report_store4(p_type);
      if ( &_pthread_key_create )
      {
        p_type = p_client_mu;
        pthread_mutex_unlock((pthread_mutex_t *)p_client_mu);
      }
    }
    for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)p_type, 0xFFFFFFFF); ; *((_DWORD *)v10 + 2) = i - 1 )
    {
      if ( i != 1 )
        goto LABEL_140;
      if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8(v10);
LABEL_119:
      p_type = (std::string *)(v10 + 2);
      v47 = *(_BYTE *)(((unsigned __int64)(v10 + 2) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v47 && v47 )
        __asan_report_load4(p_type);
      i = *((_DWORD *)v10 + 2);
    }
    v48 = *(_QWORD *)v10;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v10 + 16LL) >> 3) + 0x7FFF8000) )
      v48 = __asan_report_load8(*(_QWORD *)v10 + 16LL);
    (*(void (__fastcall **)(volatile signed __int32 *))(v48 + 16))(v10);
    p_type = (std::string *)(v10 + 3);
    if ( !&_pthread_key_create )
      goto LABEL_133;
    v49 = *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_type & 7) + 3) >= v49 && v49 )
      __asan_report_store4(p_type);
    for ( j = _InterlockedExchangeAdd((volatile signed __int32 *)p_type, 0xFFFFFFFF); ; *((_DWORD *)v10 + 3) = j - 1 )
    {
      if ( j != 1 )
        goto LABEL_140;
      if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8(v10);
LABEL_133:
      p_type = (std::string *)(v10 + 3);
      v51 = *(_BYTE *)(((unsigned __int64)(v10 + 3) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v10 + 12) & 7) + 3) >= v51 && v51 )
        __asan_report_load4(p_type);
      j = *((_DWORD *)v10 + 3);
    }
    v52 = *(_QWORD *)v10;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v10 + 24LL) >> 3) + 0x7FFF8000) )
      v52 = __asan_report_load8(*(_QWORD *)v10 + 24LL);
    p_type = (std::string *)v10;
    (*(void (__fastcall **)(volatile signed __int32 *))(v52 + 24))(v10);
LABEL_140:
    __asan_handle_no_return(p_type);
    _Unwind_Resume(v43);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
LABEL_42:
  if ( v60 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8010) = -168430091;
  }
  return (volatile signed __int32 *)a1;
};

// Line 63: range 0000000000AA9D46-0000000000AAA46D
int32_t __fastcall common::minet::KcpClientMgr::final(common::minet::KcpClientMgr *const this)
{
  volatile signed __int32 *M_pi; // rbx
  unsigned __int64 v2; // rbp
  uint32_t v3; // esi
  std::_Vector_base<std::shared_ptr<common::minet::kcp_client>>::pointer v4; // r12
  std::_Vector_base<std::shared_ptr<common::minet::kcp_client>>::pointer v5; // r13
  std::_Vector_base<std::vector<std::shared_ptr<common::minet::kcp_client>>>::pointer M_finish; // r15
  unsigned __int64 p_kcp_client_mgr_vec; // rdi
  unsigned __int64 v9; // rax
  signed __int32 v10; // eax
  char v11; // cl
  char v12; // dl
  unsigned __int64 v13; // rdi
  volatile signed __int32 *v14; // rax
  char v15; // cl
  signed __int32 v16; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  std::vector<std::shared_ptr<common::minet::kcp_client>> *M_start; // [rsp+8h] [rbp-40h]

  p_kcp_client_mgr_vec = (unsigned __int64)&this->kcp_client_mgr_vec_;
  if ( *(_BYTE *)((p_kcp_client_mgr_vec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_kcp_client_mgr_vec);
  }
  else
  {
    M_start = this->kcp_client_mgr_vec_._M_impl._M_start;
    p_kcp_client_mgr_vec = (unsigned __int64)&this->kcp_client_mgr_vec_._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&this->kcp_client_mgr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_finish = this->kcp_client_mgr_vec_._M_impl._M_finish;
      if ( M_start != M_finish )
      {
        v2 = (unsigned __int64)this->kcp_client_mgr_vec_._M_impl._M_start;
        goto LABEL_47;
      }
      return 0;
    }
  }
  __asan_report_load8(p_kcp_client_mgr_vec);
LABEL_7:
  __asan_report_load8(p_kcp_client_mgr_vec);
LABEL_8:
  __asan_report_load8(p_kcp_client_mgr_vec);
LABEL_9:
  v9 = __asan_report_load8(p_kcp_client_mgr_vec);
LABEL_10:
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF);
LABEL_11:
  if ( v10 != 1 )
  {
LABEL_12:
    ++v4;
    goto LABEL_13;
  }
LABEL_24:
  v13 = (unsigned __int64)M_pi;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_35;
  }
  v13 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(v13);
    goto LABEL_36;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v14 = M_pi + 3;
  if ( !&_pthread_key_create )
    goto LABEL_37;
  v13 = (unsigned __int64)(M_pi + 3);
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) < v15 || !v15 )
  {
    v16 = _InterlockedExchangeAdd(v14, 0xFFFFFFFF);
    goto LABEL_30;
  }
LABEL_36:
  __asan_report_store4(v13);
LABEL_37:
  v17 = (unsigned __int64)(M_pi + 3);
  v18 = *(_BYTE *)(((unsigned __int64)(M_pi + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v17);
LABEL_41:
    __asan_report_load8(v17);
    goto LABEL_42;
  }
  v16 = *((_DWORD *)M_pi + 3);
  *((_DWORD *)M_pi + 3) = v16 - 1;
LABEL_30:
  if ( v16 != 1 )
    goto LABEL_12;
  v17 = (unsigned __int64)M_pi;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  v17 = *(_QWORD *)M_pi + 24LL;
  if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)M_pi + 24LL))(M_pi);
    goto LABEL_12;
  }
LABEL_42:
  __asan_report_load8(v17);
  while ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    if ( *(_QWORD *)v2 )
      operator delete(*(void **)v2);
    v2 += 24LL;
LABEL_47:
    if ( M_finish == (std::_Vector_base<std::vector<std::shared_ptr<common::minet::kcp_client>>>::pointer)v2 )
      goto LABEL_52;
    p_kcp_client_mgr_vec = v2 + 8;
    if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    v5 = *(std::_Vector_base<std::shared_ptr<common::minet::kcp_client>>::pointer *)(v2 + 8);
    p_kcp_client_mgr_vec = v2;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    v4 = *(std::_Vector_base<std::shared_ptr<common::minet::kcp_client>>::pointer *)v2;
LABEL_13:
    if ( v5 != v4 )
    {
      p_kcp_client_mgr_vec = (unsigned __int64)&v4->_M_refcount;
      if ( *(_BYTE *)(((unsigned __int64)&v4->_M_refcount >> 3) + 0x7FFF8000) )
        goto LABEL_9;
      M_pi = (volatile signed __int32 *)v4->_M_refcount._M_pi;
      if ( !M_pi )
        goto LABEL_12;
      v9 = (unsigned __int64)(M_pi + 2);
      if ( &_pthread_key_create )
      {
        v11 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
        if ( (char)((v9 & 7) + 3) >= v11 && v11 )
        {
          __asan_report_store4(M_pi + 2);
          goto LABEL_20;
        }
        goto LABEL_10;
      }
LABEL_20:
      v12 = *(_BYTE *)(((unsigned __int64)(M_pi + 2) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v12 || !v12 )
      {
        v10 = *((_DWORD *)M_pi + 2);
        *((_DWORD *)M_pi + 2) = v10 - 1;
        goto LABEL_11;
      }
      __asan_report_load4(M_pi + 2);
      goto LABEL_24;
    }
  }
  __asan_report_load8(v2);
LABEL_52:
  if ( !*(_BYTE *)(((unsigned __int64)&this->kcp_client_mgr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    this->kcp_client_mgr_vec_._M_impl._M_finish = M_start;
    return 0;
  }
  __asan_report_store8();
  return common::minet::KcpClientMgr::init(
           (common::minet::KcpClientMgr *const)&this->kcp_client_mgr_vec_._M_impl._M_finish,
           v3);
};

// Line 69: range 0000000000AAA46E-0000000000AAA85C
void __fastcall common::minet::KcpClientMgr::networkThread(
        common::minet::KcpClientMgr *const this,
        uint32_t thread_idx)
{
  __int64 i; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  common::minet::kcp_client *const *v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  signed __int32 v11; // eax
  char v12; // cl
  char v13; // dl
  unsigned __int64 v14; // rdi
  volatile signed __int32 *v15; // rax
  char v16; // cl
  signed __int32 v17; // eax
  unsigned __int64 v18; // rdi
  char v19; // dl
  void *v20; // rdi
  void *p_client_mu; // rdi
  char v22; // dl
  _DWORD *v23; // [rsp+8h] [rbp-B0h]
  char v24[152]; // [rsp+20h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 17 kcp_client_vec:72";
  *(_QWORD *)(v4 + 16) = common::minet::KcpClientMgr::networkThread;
  v23 = (_DWORD *)(v4 >> 3);
  v23[536862720] = -235802127;
  v23[536862721] = -218103808;
  v23[536862722] = -202116109;
LABEL_53:
  p_client_mu = this;
  v22 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(this);
    goto LABEL_6;
  }
  if ( this->state_._M_i == STATUS_START )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    if ( !&_pthread_key_create
      || (p_client_mu = &this->client_mu_, LODWORD(i) = pthread_mutex_lock(&this->client_mu_._M_mutex), !(_DWORD)i) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->kcp_client_mgr_vec_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->kcp_client_mgr_vec_);
      else
        std::vector<std::shared_ptr<common::minet::kcp_client>>::operator=(
          (std::vector<std::shared_ptr<common::minet::kcp_client>> *const)(v4 + 32),
          &this->kcp_client_mgr_vec_._M_impl._M_start[thread_idx]);
      if ( &_pthread_key_create )
        pthread_mutex_unlock(&this->client_mu_._M_mutex);
      v6 = *(_QWORD *)(v4 + 32);
      v7 = *(_QWORD *)(v4 + 40);
      while ( 1 )
      {
        v8 = (common::minet::kcp_client *const *)v6;
        if ( v7 == v6 )
          break;
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v6);
        else
          common::minet::kcp_client::update(*(common::minet::kcp_client *const *)v6);
        v6 = (unsigned __int64)(v8 + 2);
      }
      v9 = *(_QWORD *)(v4 + 40);
      for ( i = *(_QWORD *)(v4 + 32); ; i += 16LL )
      {
        if ( v9 == i )
        {
LABEL_51:
          v20 = *(void **)(v4 + 32);
          if ( v20 )
            operator delete(v20);
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
          break;
        v7 = *(_QWORD *)(i + 8);
        if ( !v7 )
          continue;
        v10 = v7 + 8;
        if ( &_pthread_key_create )
        {
          v12 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
          if ( (char)((v10 & 7) + 3) < v12 || !v12 )
            goto LABEL_18;
          __asan_report_store4(v7 + 8);
        }
        v13 = *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v7 + 8) & 7) + 3) >= v13 && v13 )
        {
          __asan_report_load4(v7 + 8);
          goto LABEL_32;
        }
        v11 = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v7 + 8) = v11 - 1;
LABEL_19:
        if ( v11 != 1 )
          continue;
LABEL_32:
        v14 = v7;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v7);
LABEL_43:
          __asan_report_load8(v14);
LABEL_44:
          __asan_report_store4(v14);
LABEL_45:
          v18 = v7 + 12;
          v19 = *(_BYTE *)(((v7 + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((v7 + 12) & 7) + 3) >= v19 && v19 )
          {
            __asan_report_load4(v18);
LABEL_49:
            __asan_report_load8(v18);
LABEL_50:
            __asan_report_load8(v18);
            goto LABEL_51;
          }
          v17 = *(_DWORD *)(v7 + 12);
          *(_DWORD *)(v7 + 12) = v17 - 1;
          goto LABEL_38;
        }
        v14 = *(_QWORD *)v7 + 16LL;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_43;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16LL))(v7);
        v15 = (volatile signed __int32 *)(v7 + 12);
        if ( !&_pthread_key_create )
          goto LABEL_45;
        v14 = v7 + 12;
        v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v15 & 7) + 3) >= v16 && v16 )
          goto LABEL_44;
        v17 = _InterlockedExchangeAdd(v15, 0xFFFFFFFF);
LABEL_38:
        if ( v17 == 1 )
        {
          v18 = v7;
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            goto LABEL_49;
          v18 = *(_QWORD *)v7 + 24LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            goto LABEL_50;
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 24LL))(v7);
        }
      }
      v10 = __asan_report_load8(i + 8);
LABEL_18:
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF);
      goto LABEL_19;
    }
LABEL_6:
    __asan_handle_no_return(p_client_mu);
    std::__throw_system_error(i);
  }
  if ( v24 == (char *)v4 )
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
};

// Line 83: range 0000000000AAB2E1-0000000000AAB2F8
void __cdecl GLOBAL__sub_I_kcp_client_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 83: range 0000000000AA9628-0000000000AA9D40
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/kcp_client_mgr.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8();
          JUMPOUT(0xAA96BBLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
