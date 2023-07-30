// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/src/kcp_session.cpp

// Line 19: range 000000000CDF3B3E-000000000CDF4182
void __fastcall common::minet::KcpSession::KcpSession(
        common::minet::KcpSession *const this,
        const common::minet::KcpConnMgrBaseWtr *kcp_conn_mgr_wtr,
        uint32_t session_id,
        uint32_t token)
{
  common::tools::SafeQueue<std::shared_ptr<common::minet::KcpPacket> > *p_send_queue; // rbp
  common::minet::KcpConnMgrBaseWtr *p_kcp_conn_mgr_wtr; // rdi
  __int64 p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  common::minet::KcpConnMgrBaseWtr *p_M_weak_count; // rdi
  char v10; // si
  void *p_session_id; // rdi
  char v12; // al
  char v13; // dl
  char v14; // al
  char v15; // dl
  char v16; // al
  char v17; // dl
  char v18; // r8
  uint32_t *p_max_size; // rdi
  char v20; // al
  char v21; // dl
  char v22; // al
  struct _Unwind_Exception *v23; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_42;
  }
  this->_vptr_KcpSession = (int (**)(...))(&`vtable for'common::minet::KcpSession + 2);
  p_kcp_conn_mgr_wtr = &this->kcp_conn_mgr_wtr_;
  if ( *(_BYTE *)(((unsigned __int64)kcp_conn_mgr_wtr >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(kcp_conn_mgr_wtr);
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)p_kcp_conn_mgr_wtr >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    p_M_refcount = __asan_report_store8();
    goto LABEL_44;
  }
  this->kcp_conn_mgr_wtr_._M_ptr = kcp_conn_mgr_wtr->_M_ptr;
  p_M_refcount = (__int64)&kcp_conn_mgr_wtr->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&kcp_conn_mgr_wtr->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_refcount);
    goto LABEL_45;
  }
  M_pi = kcp_conn_mgr_wtr->_M_refcount._M_pi;
  kcp_conn_mgr_wtr = (const common::minet::KcpConnMgrBaseWtr *)&p_kcp_conn_mgr_wtr->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&p_kcp_conn_mgr_wtr->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    p_M_weak_count = (common::minet::KcpConnMgrBaseWtr *)kcp_conn_mgr_wtr;
    __asan_report_store8();
LABEL_46:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_weak_count);
    goto LABEL_47;
  }
  p_kcp_conn_mgr_wtr->_M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_11;
  p_M_weak_count = (common::minet::KcpConnMgrBaseWtr *)&M_pi->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v10 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v10 || !v10 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_weak_count, 1u);
      goto LABEL_11;
    }
    goto LABEL_46;
  }
LABEL_47:
  p_session_id = &M_pi->_M_weak_count;
  v18 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(p_session_id);
LABEL_51:
    __asan_report_store4(p_session_id);
LABEL_52:
    __asan_report_store4(p_session_id);
LABEL_53:
    __asan_report_store4(p_session_id);
LABEL_54:
    __asan_report_store4(p_session_id);
LABEL_55:
    __asan_report_store4(p_session_id);
    goto LABEL_56;
  }
  ++M_pi->_M_weak_count;
LABEL_11:
  p_session_id = &this->session_id_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_51;
  this->session_id_ = session_id;
  p_session_id = &this->token_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v13 && v13 )
    goto LABEL_52;
  this->token_ = token;
  p_session_id = &this->mtu_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->mtu_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_53;
  this->mtu_ = 1200;
  p_session_id = &this->wnd_size_;
  v15 = *(_BYTE *)(((unsigned __int64)&this->wnd_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v15 && v15 )
    goto LABEL_54;
  this->wnd_size_ = 256;
  p_session_id = &this->kcp_log_mask_;
  v16 = *(_BYTE *)(((unsigned __int64)&this->kcp_log_mask_ >> 3) + 0x7FFF8000);
  if ( v16 && v16 <= 3 )
    goto LABEL_55;
  this->kcp_log_mask_ = 0;
  p_session_id = &this->p_kcp_;
  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
LABEL_57:
    __asan_report_store_n(p_session_id, 28LL);
LABEL_58:
    __asan_report_store2(p_session_id);
    goto LABEL_59;
  }
  this->p_kcp_ = 0LL;
  p_session_id = &this->udp_remote_endpoint_;
  if ( *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 56) & 7)
    || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 83) & 7) )
  {
    goto LABEL_57;
  }
  *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.base.sa_family = 0LL;
  *(_QWORD *)this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr8 = 0LL;
  *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2] = 0LL;
  this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id = 0;
  p_session_id = &this->udp_remote_endpoint_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 56) & 7) + 1) >= v17 && v17 )
    goto LABEL_58;
  this->udp_remote_endpoint_.impl_.data_.base.sa_family = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_packet_recv_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->last_packet_recv_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->timeout_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_rtt_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8();
    goto LABEL_62;
  }
  this->last_check_rtt_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_wait_snd_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8();
    goto LABEL_63;
  }
  this->last_check_wait_snd_ms_ = 0LL;
  p_send_queue = &this->send_queue_;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_ >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_store8();
    goto LABEL_64;
  }
  this->send_queue_.queue_.c._M_impl._M_map = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_store8();
    goto LABEL_65;
  }
  this->send_queue_.queue_.c._M_impl._M_map_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store8();
    goto LABEL_66;
  }
  this->send_queue_.queue_.c._M_impl._M_start._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8();
    goto LABEL_67;
  }
  this->send_queue_.queue_.c._M_impl._M_start._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_store8();
    goto LABEL_68;
  }
  this->send_queue_.queue_.c._M_impl._M_start._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
    goto LABEL_69;
  }
  this->send_queue_.queue_.c._M_impl._M_start._M_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  this->send_queue_.queue_.c._M_impl._M_finish._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8();
    goto LABEL_71;
  }
  this->send_queue_.queue_.c._M_impl._M_finish._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  this->send_queue_.queue_.c._M_impl._M_finish._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  this->send_queue_.queue_.c._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<std::shared_ptr<common::minet::KcpPacket>>::_M_initialize_map(&this->send_queue_.queue_.c, 0LL);
LABEL_73:
  p_max_size = &p_send_queue->max_size_;
  v20 = *(_BYTE *)(((unsigned __int64)&p_send_queue->max_size_ >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
    __asan_report_store4(p_max_size);
LABEL_83:
    __asan_report_store_n(p_max_size, 40LL);
LABEL_84:
    __asan_report_load4(p_max_size);
    goto LABEL_85;
  }
  p_send_queue->max_size_ = 0;
  p_max_size = (uint32_t *)&p_send_queue->queue_mu_;
  if ( *(_BYTE *)((((unsigned __int64)&p_send_queue->queue_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&p_send_queue->queue_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) <= (((unsigned __int8)p_send_queue + 127) & 7)
    || *(char *)(((unsigned __int64)&p_send_queue->queue_mu_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_83;
  }
  p_send_queue->queue_mu_._M_mutex.__align = 0LL;
  *(&p_send_queue->queue_mu_._M_mutex.__align + 1) = 0LL;
  *(&p_send_queue->queue_mu_._M_mutex.__align + 2) = 0LL;
  p_send_queue->queue_mu_._M_mutex.__data.__list.__prev = 0LL;
  p_send_queue->queue_mu_._M_mutex.__data.__list.__next = 0LL;
  p_max_size = &this->token_;
  v21 = *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v21 && v21 )
    goto LABEL_84;
  p_max_size = &this->session_id_;
  v22 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
  {
LABEL_85:
    v23 = (struct _Unwind_Exception *)__asan_report_load4(p_max_size);
    std::deque<std::shared_ptr<common::minet::KcpPacket>>::~deque(&this->send_queue_.queue_.c);
    while ( *(_BYTE *)(((unsigned __int64)&this->kcp_conn_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
      v23 = (struct _Unwind_Exception *)__asan_report_load8(&this->kcp_conn_mgr_wtr_._M_refcount);
    v24 = this->kcp_conn_mgr_wtr_._M_refcount._M_pi;
    if ( v24 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v24);
    __asan_handle_no_return(v24);
    _Unwind_Resume(v23);
  }
  common::minet::KcpSession::init_kcp(this, this->session_id_, this->token_);
};

// Line 29: range 000000000CDF1694-000000000CDF19F5
void __fastcall common::minet::KcpSession::~KcpSession(common::minet::KcpSession *const this)
{
  common::minet::KcpSession *v1; // rbx
  unsigned __int64 v2; // r12
  _DWORD *v3; // r14
  __int64 M_cur; // rsi
  __int64 M_first; // rdi
  __int64 v6; // rax
  __int64 M_node; // rdx
  __m128i v8; // rax
  unsigned __int64 M_pi; // rdi
  unsigned __int64 v10; // rax
  char v11; // cl
  signed __int32 v12; // eax
  __int64 v13; // rax
  char v14; // cl
  unsigned __int64 v15; // rdx
  std::deque<std::shared_ptr<common::minet::KcpPacket>>::iterator v16; // [rsp-20h] [rbp-138h]
  __m128i v17; // [rsp+0h] [rbp-118h] BYREF
  __m128i v18; // [rsp+10h] [rbp-108h]
  __int64 v19; // [rsp+20h] [rbp-F8h]
  __int64 v20; // [rsp+28h] [rbp-F0h]
  std::_Deque_iterator<std::shared_ptr<common::minet::KcpPacket>,std::shared_ptr<common::minet::KcpPacket>&,std::shared_ptr<common::minet::KcpPacket>*>::_Elt_pointer M_last; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+38h] [rbp-E0h]
  char v23[216]; // [rsp+40h] [rbp-D8h] BYREF

  v1 = this;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(160LL);
    if ( v13 )
      v2 = v13;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 6 __last 96 32 7 __first";
  *(_QWORD *)(v2 + 16) = common::minet::KcpSession::~KcpSession;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_19:
    __asan_report_load_n(this, 32LL);
LABEL_20:
    M_cur = 32LL;
    __asan_report_load_n(this, 32LL);
    goto LABEL_21;
  }
  this->_vptr_KcpSession = (int (**)(...))(&`vtable for'common::minet::KcpSession + 2);
  common::minet::KcpSession::clean(this);
  this = (common::minet::KcpSession *const)((char *)this + 168);
  if ( *(_BYTE *)((((unsigned __int64)&v1->send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v1->send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v1 - 57) & 7)
    || *(char *)(((unsigned __int64)&v1->send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_19;
  }
  v17 = _mm_loadu_si128((const __m128i *)&v1->send_queue_.queue_.c._M_impl._M_finish);
  v18 = _mm_loadu_si128((const __m128i *)&v1->send_queue_.queue_.c._M_impl._M_finish._M_last);
  this = (common::minet::KcpSession *const)&v1->send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&v1->send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v1->send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v1 - 89) & 7)
    || *(char *)(((unsigned __int64)&v1->send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_20;
  }
  M_cur = (__int64)v1->send_queue_.queue_.c._M_impl._M_start._M_cur;
  M_first = (__int64)v1->send_queue_.queue_.c._M_impl._M_start._M_first;
  v19 = M_cur;
  v20 = M_first;
  M_node = (__int64)v1->send_queue_.queue_.c._M_impl._M_start._M_node;
  M_last = v1->send_queue_.queue_.c._M_impl._M_start._M_last;
  v6 = (__int64)M_last;
  v22 = M_node;
  *(_QWORD *)(v2 + 96) = M_cur;
  *(_QWORD *)(v2 + 104) = M_first;
  *(_QWORD *)(v2 + 112) = v6;
  *(_QWORD *)(v2 + 120) = M_node;
  *(__m128i *)(v2 + 32) = _mm_load_si128(&v17);
  v8 = v18;
  *(__m128i *)(v2 + 48) = v18;
  *(__m128i *)&v16._M_last = v8;
  *(_OWORD *)&v16._M_cur = *(_OWORD *)(v2 + 32);
  std::deque<std::shared_ptr<common::minet::KcpPacket>>::_M_destroy_data_aux(
    &v1->send_queue_.queue_.c,
    *(std::deque<std::shared_ptr<common::minet::KcpPacket>>::iterator *)(v2 + 96),
    v16);
  std::_Deque_base<std::shared_ptr<common::minet::KcpPacket>>::~_Deque_base(&v1->send_queue_.queue_.c);
  this = (common::minet::KcpSession *const)&v1->kcp_conn_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v1->kcp_conn_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v10 = __asan_report_load8(this);
    goto LABEL_22;
  }
  M_pi = (unsigned __int64)v1->kcp_conn_mgr_wtr_._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_14;
  v10 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_23;
  v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
  if ( (char)((v10 & 7) + 3) < v11 || !v11 )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF);
    goto LABEL_13;
  }
LABEL_22:
  M_pi = v10;
  __asan_report_store4(v10);
LABEL_23:
  v14 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v14 && v14 )
  {
    M_pi += 12LL;
    __asan_report_load4(M_pi);
    goto LABEL_27;
  }
  v12 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v12 - 1;
LABEL_13:
  if ( v12 != 1 )
    goto LABEL_14;
LABEL_27:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
    goto LABEL_31;
  }
  v15 = *(_QWORD *)M_pi + 24LL;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(v15);
    goto LABEL_32;
  }
  (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)M_pi + 24LL))(M_pi, M_cur);
LABEL_14:
  if ( v23 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    return;
  }
LABEL_32:
  *(_QWORD *)v2 = 1172321806LL;
  *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
};

// Line 29: range 000000000CDF19FA-000000000CDF1A11
void __fastcall common::minet::KcpSession::~KcpSession(common::minet::KcpSession *const this)
{
  common::minet::KcpSession::~KcpSession(this);
  operator delete(this, 0xF8uLL);
};

// Line 67: range 000000000CDF4974-000000000CDF5030
int32_t __fastcall common::minet::KcpSession::send(common::minet::KcpSession *const this, char *data, uint32_t len)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 M_cur; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  common::tools::SafeQueue<std::shared_ptr<common::minet::KcpPacket> > *p_send_queue; // rbx
  std::mutex *p_queue_mu; // r15
  std::mutex *v11; // rdi
  unsigned int v12; // eax
  void *p_M_node; // rdi
  unsigned __int64 v14; // rax
  char v15; // al
  uint32_t max_size; // eax
  std::_Deque_iterator<std::shared_ptr<common::minet::KcpPacket>,std::shared_ptr<common::minet::KcpPacket>&,std::shared_ptr<common::minet::KcpPacket>*>::_Elt_pointer v17; // rdi
  __int64 p_M_last; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  volatile signed __int32 *p_M_refcount; // rdx
  volatile signed __int32 *v22; // rdi
  char v23; // dl
  bool v24; // bl
  int32_t v25; // ebp
  unsigned __int64 v26; // rbx
  volatile signed __int32 *v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  uint32_t remote_port; // ebx
  char v32; // al
  char v33; // cl
  char v34; // dl
  unsigned __int64 v35; // rdi
  char v36; // dl
  signed __int32 v37; // eax
  unsigned __int64 v38; // rdi
  char v39; // dl
  struct _Unwind_Exception *v40; // rbx
  std::string::pointer M_p; // rdi
  common::milog::MiLogStream v42; // [rsp+10h] [rbp-B8h] BYREF
  std::string v43; // [rsp+30h] [rbp-98h] BYREF
  char v44[120]; // [rsp+50h] [rbp-78h] BYREF

  M_cur = (unsigned __int64)this;
  v6 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 17 kcp_packet_ptr:68";
  *(_QWORD *)(v6 + 16) = common::minet::KcpSession::send;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  v43._M_dataplus._M_p = v43._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v43, data, &data[len], v3);
  common::minet::KcpSession::kcp_packet_create(this, &v43);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p != &v43._anon_0 )
    operator delete(v43._M_dataplus._M_p);
  if ( *(_QWORD *)(v6 + 32) )
  {
    p_send_queue = &this->send_queue_;
    p_queue_mu = &this->send_queue_.queue_mu_;
    if ( &_pthread_key_create )
    {
      v11 = &this->send_queue_.queue_mu_;
      v12 = pthread_mutex_lock((pthread_mutex_t *)(M_cur + 208));
      M_cur = v12;
      if ( v12 )
      {
        __asan_handle_no_return(v11);
        std::__throw_system_error(M_cur);
      }
    }
    p_M_node = &p_send_queue->queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_node);
    }
    else
    {
      p_M_node = &p_send_queue->queue_.c._M_impl._M_start._M_node;
      if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      {
        p_M_node = &p_send_queue->queue_.c._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          M_cur = (unsigned __int64)p_send_queue->queue_.c._M_impl._M_finish._M_cur;
          p_M_node = &p_send_queue->queue_.c._M_impl._M_finish._M_first;
          if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
          {
            M_cur = (__int64)(M_cur - (unsigned __int64)p_send_queue->queue_.c._M_impl._M_finish._M_first) >> 4;
            v14 = 32
                * ((((char *)p_send_queue->queue_.c._M_impl._M_finish._M_node
                   - (char *)p_send_queue->queue_.c._M_impl._M_start._M_node) >> 3)
                 - 1)
                + M_cur;
            p_M_node = &p_send_queue->queue_.c._M_impl._M_start._M_last;
            if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
            {
              M_cur = (unsigned __int64)p_send_queue->queue_.c._M_impl._M_start._M_last;
              p_M_node = &p_send_queue->queue_.c._M_impl._M_start;
              if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
              {
                M_cur = v14 + ((__int64)(M_cur - (unsigned __int64)p_send_queue->queue_.c._M_impl._M_start._M_cur) >> 4);
                p_M_node = &p_send_queue->max_size_;
                v15 = *(_BYTE *)(((unsigned __int64)&p_send_queue->max_size_ >> 3) + 0x7FFF8000);
                if ( !v15 || v15 > 3 )
                {
                  max_size = p_send_queue->max_size_;
                  if ( max_size && M_cur >= max_size )
                  {
                    v24 = 0;
                    goto LABEL_32;
                  }
                  p_M_node = &p_send_queue->queue_.c._M_impl._M_finish;
                  if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
                  {
                    v17 = p_send_queue->queue_.c._M_impl._M_finish._M_cur;
                    p_M_last = (__int64)&p_send_queue->queue_.c._M_impl._M_finish._M_last;
                    v19 = (unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish._M_last >> 3;
                    if ( !*(_BYTE *)(v19 + 0x7FFF8000) )
                    {
                      if ( v17 == p_send_queue->queue_.c._M_impl._M_finish._M_last - 1 )
                        goto LABEL_69;
                      if ( !*(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                      {
                        v17->_M_ptr = *(std::__shared_ptr<common::minet::KcpPacket,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 32);
                        v20 = *(_QWORD *)(v6 + 40);
                        p_M_refcount = (volatile signed __int32 *)&v17->_M_refcount;
                        if ( !*(_BYTE *)(((unsigned __int64)&v17->_M_refcount >> 3) + 0x7FFF8000) )
                        {
                          v17->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v20;
                          if ( !v20 )
                          {
LABEL_30:
                            ++p_send_queue->queue_.c._M_impl._M_finish._M_cur;
LABEL_31:
                            v24 = M_cur + 1 == 32
                                             * ((((char *)p_send_queue->queue_.c._M_impl._M_finish._M_node
                                                - (char *)p_send_queue->queue_.c._M_impl._M_start._M_node) >> 3)
                                              - 1)
                                             + p_send_queue->queue_.c._M_impl._M_finish._M_cur
                                             - p_send_queue->queue_.c._M_impl._M_finish._M_first
                                             + p_send_queue->queue_.c._M_impl._M_start._M_last
                                             - p_send_queue->queue_.c._M_impl._M_start._M_cur;
LABEL_32:
                            if ( &_pthread_key_create )
                              pthread_mutex_unlock(&p_queue_mu->_M_mutex);
                            if ( v24 )
                              v25 = 0;
                            else
                              v25 = -1;
                            goto LABEL_36;
                          }
                          v22 = (volatile signed __int32 *)(v20 + 8);
                          if ( !&_pthread_key_create )
                            goto LABEL_65;
                          v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
                          if ( (char)(((unsigned __int8)v22 & 7) + 3) < v23 || !v23 )
                          {
                            _InterlockedAdd(v22, 1u);
                            goto LABEL_30;
                          }
LABEL_64:
                          v20 = __asan_report_store4(v22);
LABEL_65:
                          v33 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
                          if ( (char)(((v20 + 8) & 7) + 3) < v33 || !v33 )
                          {
                            ++*(_DWORD *)(v20 + 8);
                            goto LABEL_30;
                          }
                          __asan_report_load4(v20 + 8);
LABEL_69:
                          std::deque<std::shared_ptr<common::minet::KcpPacket>>::_M_push_back_aux<std::shared_ptr<common::minet::KcpPacket> const&>(
                            &p_send_queue->queue_.c,
                            (const std::shared_ptr<common::minet::KcpPacket> *)(v6 + 32),
                            (const std::shared_ptr<common::minet::KcpPacket> *)v19);
                          goto LABEL_31;
                        }
LABEL_63:
                        v22 = p_M_refcount;
                        __asan_report_store8();
                        goto LABEL_64;
                      }
LABEL_62:
                      __asan_report_store8();
                      goto LABEL_63;
                    }
LABEL_61:
                    __asan_report_load8(p_M_last);
                    goto LABEL_62;
                  }
LABEL_60:
                  p_M_last = __asan_report_load8(p_M_node);
                  goto LABEL_61;
                }
LABEL_59:
                __asan_report_load4(p_M_node);
                goto LABEL_60;
              }
LABEL_58:
              __asan_report_load8(p_M_node);
              goto LABEL_59;
            }
LABEL_57:
            __asan_report_load8(p_M_node);
            goto LABEL_58;
          }
LABEL_56:
          __asan_report_load8(p_M_node);
          goto LABEL_57;
        }
LABEL_55:
        __asan_report_load8(p_M_node);
        goto LABEL_56;
      }
    }
    __asan_report_load8(p_M_node);
    goto LABEL_55;
  }
  common::milog::MiLogStream::MiLogStream(
    &v42,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/kcp_session.cpp",
    "send",
    71);
  remote_port = common::minet::KcpSession::get_remote_port(this);
  common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v43, this);
  v32 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( v32 && v32 <= 3 )
    __asan_report_load4(&this->session_id_);
  else
    common::milog::MiLogStream::operator()(
      &v42,
      "kcp_packet_create failed, session_id=%u ip=%s port=%u",
      this->session_id_,
      v43._M_dataplus._M_p,
      remote_port);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p != &v43._anon_0 )
    operator delete(v43._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v42);
  v25 = -1;
LABEL_36:
  v26 = *(_QWORD *)(v6 + 40);
  if ( !v26 )
    goto LABEL_42;
  v27 = (volatile signed __int32 *)(v26 + 8);
  if ( &_pthread_key_create )
  {
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) < v28 || !v28 )
    {
      v29 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
      goto LABEL_41;
    }
    __asan_report_store4(v27);
  }
  v34 = *(_BYTE *)(((v26 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(v26 + 8);
    goto LABEL_77;
  }
  v29 = *(_DWORD *)(v26 + 8);
  *(_DWORD *)(v26 + 8) = v29 - 1;
LABEL_41:
  if ( v29 != 1 )
    goto LABEL_42;
LABEL_77:
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v35 = v26;
    __asan_report_load8(v26);
    goto LABEL_88;
  }
  v35 = *(_QWORD *)v26 + 16LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(v35);
    goto LABEL_89;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 16LL))(v26);
  v35 = v26 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_90;
  v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
  if ( (char)((v35 & 7) + 3) < v36 || !v36 )
  {
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF);
    goto LABEL_83;
  }
LABEL_89:
  __asan_report_store4(v35);
LABEL_90:
  v39 = *(_BYTE *)(((v26 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v26 + 12) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v26 + 12);
LABEL_94:
    v38 = v26;
    __asan_report_load8(v26);
LABEL_95:
    v40 = (struct _Unwind_Exception *)__asan_report_load8(v38);
    M_p = v43._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p != &v43._anon_0 )
      operator delete(v43._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v40);
  }
  v37 = *(_DWORD *)(v26 + 12);
  *(_DWORD *)(v26 + 12) = v37 - 1;
LABEL_83:
  if ( v37 != 1 )
    goto LABEL_42;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_94;
  v38 = *(_QWORD *)v26 + 24LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    goto LABEL_95;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 24LL))(v26);
LABEL_42:
  if ( v44 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v25;
};

// Line 88: range 000000000CDF207E-000000000CDF23F3
void __fastcall common::minet::KcpSession::recv_from_kcp(common::minet::KcpSession *const this)
{
  unsigned int i; // r12d
  uint32_t remote_port; // ebp
  char v4; // al
  int v5; // eax
  uint32_t v6; // ebp
  char v7; // al
  uint32_t v8; // eax
  uint32_t v9; // ebp
  char v10; // al
  unsigned int v11; // ebp
  uint64_t NowMs; // rax
  unsigned __int64 p_last_packet_recv_time; // rdi
  common::milog::MiLogStream v14; // [rsp+0h] [rbp-68h] BYREF
  std::string v15; // [rsp+20h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i > 0x32 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/kcp_session.cpp",
        "recv_from_kcp",
        95);
      remote_port = common::minet::KcpSession::get_remote_port(this);
      common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v15, this);
      v4 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
      if ( v4 && v4 <= 3 )
        __asan_report_load4(&this->session_id_);
      else
        common::milog::MiLogStream::operator()(
          &v14,
          "process more than 50 packets in one loop, session_id=%u ip=%s port=%u",
          this->session_id_,
          v15._M_dataplus._M_p,
          remote_port);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p != &v15._anon_0 )
        operator delete(v15._M_dataplus._M_p);
      goto LABEL_8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
      break;
    v5 = ikcp_recv(this->p_kcp_, &common::minet::KcpSession::recv_buf[__readfsqword(0)], 0x100000);
    v11 = v5;
    if ( v5 <= 0 )
      goto LABEL_10;
    NowMs = common::tools::TimeUtils::getNowMs();
    p_last_packet_recv_time = (unsigned __int64)&this->last_packet_recv_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_packet_recv_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
LABEL_19:
      __asan_report_load8(p_last_packet_recv_time);
LABEL_20:
      v8 = __asan_report_load8(p_last_packet_recv_time);
      goto LABEL_21;
    }
    this->last_packet_recv_time_ = NowMs;
    p_last_packet_recv_time = (unsigned __int64)this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    p_last_packet_recv_time = (unsigned __int64)(this->_vptr_KcpSession + 2);
    if ( *(_BYTE *)((p_last_packet_recv_time >> 3) + 0x7FFF8000) )
      goto LABEL_20;
    if ( !(*((unsigned int (__fastcall **)(common::minet::KcpSession *const, char *, _QWORD))this->_vptr_KcpSession + 2))(
            this,
            &common::minet::KcpSession::recv_buf[__readfsqword(0)],
            v11) )
      continue;
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/kcp_session.cpp",
      "recv_from_kcp",
      112);
    v8 = common::minet::KcpSession::get_remote_port(this);
LABEL_21:
    v9 = v8;
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v15, this);
    v10 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( v10 && v10 <= 3 )
      __asan_report_load4(&this->session_id_);
    else
      common::milog::MiLogStream::operator()(
        &v14,
        "session_id=%u onRecv failed, ip=%s port=%u",
        this->session_id_,
        v15._M_dataplus._M_p,
        v9);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p != &v15._anon_0 )
      operator delete(v15._M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  v5 = __asan_report_load8(&this->p_kcp_);
LABEL_10:
  if ( v5 == -3 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_session.cpp",
      "recv_from_kcp",
      103);
    v6 = common::minet::KcpSession::get_remote_port(this);
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v15, this);
    v7 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( v7 && v7 <= 3 )
      __asan_report_load4(&this->session_id_);
    else
      common::milog::MiLogStream::operator()(
        &v14,
        "recv_buf is less than the packet to recv, session_id=%u ip=%s port=%u",
        this->session_id_,
        v15._M_dataplus._M_p,
        v6);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p != &v15._anon_0 )
      operator delete(v15._M_dataplus._M_p);
LABEL_8:
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
};

// Line 121: range 000000000CDF0DC8-000000000CDF10F4
void __fastcall common::minet::KcpSession::set_udp_remote_endpoint(
        common::minet::KcpSession *const this,
        const boost::asio::ip::udp::endpoint *udp_remote_endpoint)
{
  const boost::asio::ip::udp::endpoint *v2; // rax

  v2 = udp_remote_endpoint;
  if ( *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 56) & 7)
    || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 83) & 7) )
  {
    v2 = (const boost::asio::ip::udp::endpoint *)__asan_report_store_n(&this->udp_remote_endpoint_, 28LL);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)udp_remote_endpoint >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)udp_remote_endpoint >> 3) + 0x7FFF8000) <= ((unsigned __int8)udp_remote_endpoint & 7)
    || *(_BYTE *)((((unsigned __int64)&udp_remote_endpoint->impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&udp_remote_endpoint->impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)udp_remote_endpoint + 27) & 7) )
  {
LABEL_7:
    __asan_report_load_n(v2, 28LL);
    JUMPOUT(0xCDF0EA3LL);
  }
  this->udp_remote_endpoint_.impl_.data_.base = (boost::asio::detail::socket_addr_type)_mm_loadu_si128((const __m128i *)udp_remote_endpoint);
  *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2] = *(_QWORD *)&udp_remote_endpoint->impl_.data_.v6.sin6_addr.__u6_addr32[2];
  this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id = udp_remote_endpoint->impl_.data_.v6.sin6_scope_id;
};

// Line 131: range 000000000CDF1A12-000000000CDF2078
std::string *__fastcall common::minet::KcpSession::get_remote_ip_str[abi:cxx11](
        std::string *retstr,
        common::minet::KcpSession *const this)
{
  const char *v2; // r15
  const char *v4; // r14
  unsigned __int64 v5; // r12
  _DWORD *v6; // rbx
  char v7; // dl
  in6_addr *p_sin6_addr; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // dl
  unsigned __int64 v12; // r14
  char v13; // dl
  __int64 v14; // rdi
  char v15; // dl
  unsigned int v16; // ecx
  const char *v17; // rdx
  __int64 v19; // rax
  char v20; // dl
  unsigned __int64 v21; // r15
  char v22; // dl
  __int64 v23; // rdi
  char v24; // dl
  unsigned int v25; // ecx
  bool v26; // al
  bool v27; // cl
  const char *v28; // rdx
  __int64 ifindex; // [rsp+8h] [rbp-190h]
  int v30; // [rsp+40h] [rbp-158h]
  in_addr_t cp; // [rsp+44h] [rbp-154h] BYREF
  __int64 v32; // [rsp+48h] [rbp-150h] BYREF
  __int64 v33; // [rsp+50h] [rbp-148h]
  __int64 sin6_scope_id; // [rsp+58h] [rbp-140h]
  char v35[312]; // [rsp+60h] [rbp-138h] BYREF

  v4 = (const char *)this;
  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_2(256LL);
    if ( v19 )
      v5 = v19;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 16 2 ec 64 16 8 addr_str 96 22 7 if_name 160 63 8 addr_str";
  *(_QWORD *)(v5 + 16) = common::minet::KcpSession::get_remote_ip_str[abi:cxx11];
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -234487808;
  v6[536862724] = -218959118;
  v6[536862726] = 117440512;
  v6[536862727] = -202116109;
  v7 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 56) & 7) + 1) >= v7 && v7 )
  {
    __asan_report_load2(&this->udp_remote_endpoint_);
  }
  else if ( this->udp_remote_endpoint_.impl_.data_.base.sa_family != 2 )
  {
    p_sin6_addr = &this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr;
    if ( (*(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) > (((unsigned __int8)this + 64) & 7))
      && (*(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                   + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                   + 0x7FFF8000) > (((unsigned __int8)this + 79) & 7)) )
    {
      v9 = *(_QWORD *)this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr8;
      v10 = *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2];
      p_sin6_addr = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
      v11 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 80) & 7) + 3) < v11 || !v11 )
      {
        v30 = 1;
        cp = 0;
        v32 = v9;
        v33 = v10;
        sin6_scope_id = this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
        goto LABEL_10;
      }
LABEL_32:
      __asan_report_load4(p_sin6_addr);
      goto LABEL_33;
    }
LABEL_31:
    __asan_report_load_n(p_sin6_addr, 16LL);
    goto LABEL_32;
  }
  p_sin6_addr = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo;
  v20 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v20 && v20 )
  {
    __asan_report_load4(p_sin6_addr);
    goto LABEL_31;
  }
  v30 = 0;
  cp = this->udp_remote_endpoint_.impl_.data_.v4.sin_addr.s_addr;
  v32 = 0LL;
  v33 = 0LL;
  sin6_scope_id = 0LL;
LABEL_10:
  if ( v30 != 1 )
  {
    *(_DWORD *)(v5 + 32) = 0;
    *(_BYTE *)(v5 + 36) = 0;
    *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v12 = (unsigned __int64)__errno_location();
    v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    if ( (char)((v12 & 7) + 3) >= v13 && v13 )
    {
      __asan_report_store4(v12);
    }
    else
    {
      *(_DWORD *)v12 = 0;
      v14 = 2LL;
      v2 = inet_ntop(2, &cp, (char *)(v5 + 64), 0x10u);
      v15 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
      if ( (char)((v12 & 7) + 3) < v15 || !v15 )
      {
        v16 = *(_DWORD *)v12;
        *(_QWORD *)(v5 + 32) = ((unsigned __int64)(*(_DWORD *)v12 != 0) << 32) | *(unsigned int *)v12;
        *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
        if ( v2 )
          goto LABEL_16;
        goto LABEL_70;
      }
    }
    v14 = v12;
    __asan_report_load4(v12);
LABEL_70:
    if ( !v16 )
      *(_QWORD *)(v5 + 32) = 0x100000016LL;
LABEL_16:
    if ( !v2 && *(_DWORD *)(v5 + 32) )
    {
      __asan_handle_no_return(v14);
      boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 32));
    }
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
      if ( v2 )
      {
        v17 = &v2[strlen(v2)];
LABEL_20:
        std::string::_M_construct<char const*>(retstr, v2, v17, (std::forward_iterator_tag)v16);
        goto LABEL_21;
      }
    }
    v17 = v2 - 1;
    goto LABEL_20;
  }
LABEL_33:
  *(_DWORD *)(v5 + 64) = 0;
  *(_BYTE *)(v5 + 68) = 0;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  ifindex = sin6_scope_id;
  v21 = (unsigned __int64)__errno_location();
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( (char)((v21 & 7) + 3) >= v22 && v22 )
  {
    __asan_report_store4(v21);
  }
  else
  {
    *(_DWORD *)v21 = 0;
    v23 = 10LL;
    v4 = inet_ntop(10, &v32, (char *)(v5 + 160), 0x3Fu);
    v24 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
    if ( (char)((v21 & 7) + 3) < v24 || !v24 )
    {
      v25 = *(_DWORD *)v21;
      *(_QWORD *)(v5 + 64) = ((unsigned __int64)(*(_DWORD *)v21 != 0) << 32) | *(unsigned int *)v21;
      *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
      if ( v4 )
        goto LABEL_38;
      goto LABEL_55;
    }
  }
  v23 = v21;
  __asan_report_load4(v21);
LABEL_55:
  if ( !v25 )
    *(_QWORD *)(v5 + 64) = 0x100000016LL;
LABEL_38:
  v26 = v4 != 0LL;
  if ( v4 && ifindex )
  {
    *(_QWORD *)(v5 + 96) = 37LL;
    *(_QWORD *)(v5 + 104) = 0LL;
    *(_DWORD *)(v5 + 112) = 0;
    *(_WORD *)(v5 + 116) = 0;
    v27 = (_BYTE)v32 == 0xFE && (BYTE1(v32) & 0xC0) == 0x80 && v4 != 0LL;
    if ( (_BYTE)v32 == 0xFF )
    {
      if ( (BYTE1(v32) & 0xF) != 2 )
        v26 = 0;
    }
    else
    {
      v26 = 0;
    }
    if ( !v27 && !v26 || !if_indextoname(ifindex, (char *)(v5 + 97)) )
      sprintf((char *)(v5 + 97), off_1A26AE20, ifindex);
    v23 = v5 + 160;
    strcat((char *)(v5 + 160), (const char *)(v5 + 96));
  }
  if ( !v4 && *(_DWORD *)(v5 + 64) )
  {
    __asan_handle_no_return(v23);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_67;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( !v4 )
  {
LABEL_67:
    v28 = v4 - 1;
    goto LABEL_52;
  }
  v28 = &v4[strlen(v4)];
LABEL_52:
  std::string::_M_construct<char const*>(retstr, v4, v28, (std::forward_iterator_tag)v25);
LABEL_21:
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 148: range 000000000CDF23F6-000000000CDF2708
void __fastcall common::minet::KcpSession::input(
        common::minet::KcpSession *const this,
        char *udp_data,
        size_t bytes_recvd,
        const boost::asio::ip::udp::endpoint *udp_remote_endpoint)
{
  unsigned int v4; // r12d
  boost::asio::ip::udp::endpoint *p_udp_remote_endpoint; // r8
  signed __int8 v8; // dl
  char v9; // al
  char v10; // di
  void *p_p_kcp; // rdi
  __int64 remote_port; // r13
  char v13; // al
  common::milog::MiLogStream v14; // [rsp+0h] [rbp-60h] BYREF
  std::string v15; // [rsp+20h] [rbp-40h] BYREF

  p_udp_remote_endpoint = &this->udp_remote_endpoint_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
  v9 = (_BYTE)this + 83;
  v10 = *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= ((unsigned __int8)p_udp_remote_endpoint & 7) || v10 != 0 && v10 <= (v9 & 7) )
  {
    __asan_report_store_n(p_udp_remote_endpoint, 28LL);
LABEL_9:
    p_p_kcp = (void *)udp_remote_endpoint;
    __asan_report_load_n(udp_remote_endpoint, 28LL);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)udp_remote_endpoint >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)udp_remote_endpoint >> 3) + 0x7FFF8000) <= ((unsigned __int8)udp_remote_endpoint & 7)
    || *(_BYTE *)((((unsigned __int64)&udp_remote_endpoint->impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&udp_remote_endpoint->impl_.data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)udp_remote_endpoint + 27) & 7) )
  {
    goto LABEL_9;
  }
  this->udp_remote_endpoint_.impl_.data_.base = (boost::asio::detail::socket_addr_type)_mm_loadu_si128((const __m128i *)udp_remote_endpoint);
  *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2] = *(_QWORD *)&udp_remote_endpoint->impl_.data_.v6.sin6_addr.__u6_addr32[2];
  this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id = udp_remote_endpoint->impl_.data_.v6.sin6_scope_id;
  p_p_kcp = &this->p_kcp_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
    v4 = ikcp_input(this->p_kcp_, udp_data, bytes_recvd);
    if ( !v4 )
      return;
    goto LABEL_11;
  }
LABEL_10:
  __asan_report_load8(p_p_kcp);
LABEL_11:
  common::milog::MiLogStream::MiLogStream(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/kcp_session.cpp",
    "input",
    154);
  remote_port = common::minet::KcpSession::get_remote_port(this);
  common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v15, this);
  v13 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    __asan_report_load4(&this->session_id_);
  else
    common::milog::MiLogStream::operator()(
      &v14,
      "ikcp_input failed, not a valid kcp packet, ret=%d session_id=%u bytes_recvd=%lu ip=%s port=%u",
      v4,
      this->session_id_,
      bytes_recvd,
      v15._M_dataplus._M_p,
      remote_port);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p != &v15._anon_0 )
    operator delete(v15._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v14);
};

// Line 174: range 000000000CDF11DE-000000000CDF122E
bool __fastcall common::minet::KcpSession::isWaitSndMax(
        common::minet::KcpSession *const this,
        uint64_t cur_clock,
        uint32_t check_interval,
        uint32_t wait_snd_max)
{
  if ( !check_interval )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_wait_snd_ms_ >> 3) + 0x7FFF8000) )
  {
    this = (common::minet::KcpSession *const)((char *)this + 112);
    __asan_report_load8(this);
  }
  else if ( this->last_check_wait_snd_ms_ + 1000 * check_interval > cur_clock )
  {
    return 0;
  }
  this->last_check_wait_snd_ms_ = cur_clock;
  return common::minet::KcpSession::getWaitSnd(this) > wait_snd_max;
};

// Line 189: range 000000000CDF10F6-000000000CDF112E
uint32_t __fastcall common::minet::KcpSession::getPktLoss(const common::minet::KcpSession *const this)
{
  ikcpcb *p_kcp; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->p_kcp_);
  }
  else
  {
    p_kcp = this->p_kcp_;
    if ( p_kcp )
      return ikcp_pktloss(p_kcp);
  }
  return 100;
};

// Line 194: range 000000000CDF1130-000000000CDF1168
uint32_t __fastcall common::minet::KcpSession::getRxBandwidth(const common::minet::KcpSession *const this)
{
  ikcpcb *p_kcp; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->p_kcp_);
  }
  else
  {
    p_kcp = this->p_kcp_;
    if ( p_kcp )
      return ikcp_rx_bandwidth(p_kcp);
  }
  return 0;
};

// Line 199: range 000000000CDF116A-000000000CDF11A2
uint32_t __fastcall common::minet::KcpSession::getTxBandwidth(const common::minet::KcpSession *const this)
{
  ikcpcb *p_kcp; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->p_kcp_);
  }
  else
  {
    p_kcp = this->p_kcp_;
    if ( p_kcp )
      return ikcp_tx_bandwidth(p_kcp);
  }
  return 0;
};

// Line 204: range 000000000CDF11A4-000000000CDF11DC
uint32_t __fastcall common::minet::KcpSession::getWaitSnd(const common::minet::KcpSession *const this)
{
  ikcpcb *p_kcp; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->p_kcp_);
  }
  else
  {
    p_kcp = this->p_kcp_;
    if ( p_kcp )
      return ikcp_waitsnd(p_kcp);
  }
  return 0;
};

// Line 209: range 000000000CDF1230-000000000CDF12C7
uint32_t __fastcall common::minet::KcpSession::getWaitRcv(const common::minet::KcpSession *const this)
{
  ikcpcb *p_kcp; // rdx
  ikcpcb **p_p_kcp; // rdi
  char v3; // cl
  char v4; // si

  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
    p_p_kcp = &this->p_kcp_;
    __asan_report_load8(p_p_kcp);
    goto LABEL_9;
  }
  p_kcp = this->p_kcp_;
  if ( p_kcp )
  {
    p_p_kcp = (ikcpcb **)&p_kcp->nrcv_buf;
    v3 = *(_BYTE *)(((unsigned __int64)&p_kcp->nrcv_buf >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)p_kcp - 124) & 7) + 3) < v3 || !v3 )
    {
      p_p_kcp = (ikcpcb **)&p_kcp->nrcv_que;
      v4 = *(_BYTE *)(((unsigned __int64)&p_kcp->nrcv_que >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)p_kcp - 116) & 7) + 3) < v4 || !v4 )
        return p_kcp->nrcv_que + p_kcp->nrcv_buf;
      goto LABEL_10;
    }
LABEL_9:
    __asan_report_load4(p_p_kcp);
LABEL_10:
    __asan_report_load4(p_p_kcp);
  }
  return 0;
};

// Line 215: range 000000000CDF12CA-000000000CDF168E
uint64_t __fastcall common::minet::KcpSession::getLastCheckRttMs(const common::minet::KcpSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_rtt_ms_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->last_check_rtt_ms_);
    JUMPOUT(0xCDF12EFLL);
  }
  return this->last_check_rtt_ms_;
};

// Line 230: range 000000000CDF270A-000000000CDF27F2
int __fastcall common::minet::KcpSession::onDisconnect(common::minet::KcpSession *const this, uint32_t data)
{
  uint32_t remote_port; // r12d
  uint32_t *p_session_id; // rdi
  char v5; // al
  common::milog::MiLogStream v7; // [rsp+0h] [rbp-58h] BYREF
  std::string v8; // [rsp+20h] [rbp-38h] BYREF

  common::milog::MiLogStream::MiLogStream(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_session.cpp",
    "onDisconnect",
    231);
  remote_port = common::minet::KcpSession::get_remote_port(this);
  common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v8, this);
  p_session_id = &this->session_id_;
  v5 = *(_BYTE *)(((unsigned __int64)p_session_id >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    __asan_report_load4(p_session_id);
  else
    common::milog::MiLogStream::operator()(
      &v7,
      "session_id=%u disconnect, data=%u, ip=%s port=%u",
      this->session_id_,
      data,
      v8._M_dataplus._M_p,
      remote_port);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    operator delete(v8._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return 0;
};

// Line 236: range 000000000CDF27F4-000000000CDF28DC
int __fastcall common::minet::KcpSession::onConnect(common::minet::KcpSession *const this, uint32_t data)
{
  uint32_t remote_port; // r12d
  uint32_t *p_session_id; // rdi
  char v5; // al
  common::milog::MiLogStream v7; // [rsp+0h] [rbp-58h] BYREF
  std::string v8; // [rsp+20h] [rbp-38h] BYREF

  common::milog::MiLogStream::MiLogStream(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_session.cpp",
    "onConnect",
    237);
  remote_port = common::minet::KcpSession::get_remote_port(this);
  common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v8, this);
  p_session_id = &this->session_id_;
  v5 = *(_BYTE *)(((unsigned __int64)p_session_id >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    __asan_report_load4(p_session_id);
  else
    common::milog::MiLogStream::operator()(
      &v7,
      "session_id=%u connect, data=%u, ip=%s port=%u",
      this->session_id_,
      data,
      v8._M_dataplus._M_p,
      remote_port);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    operator delete(v8._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return 0;
};

// Line 242: range 000000000CDF5036-000000000CDF5289
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::minet::KcpSession::sendPacket(
        common::minet::KcpSession *const this,
        common::minet::PacketPtr packet_ptr)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r13
  int32_t v4; // eax
  __int64 v5; // rax
  uint32_t remote_port; // r12d
  char v7; // al
  unsigned int v8; // r12d
  char *v9; // rdi
  common::milog::MiLogStream v11; // [rsp+0h] [rbp-D8h] BYREF
  std::string v12; // [rsp+20h] [rbp-B8h] BYREF
  char v13[152]; // [rsp+40h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 12 data_str:244";
  *(_QWORD *)(v2 + 16) = common::minet::KcpSession::sendPacket;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
  }
  else
  {
    common::minet::Packet::clearHeadForClient((common::minet::Packet *const)packet_ptr._M_ptr->_vptr_Packet);
    *(_QWORD *)(v2 + 32) = v2 + 48;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_BYTE *)(v2 + 48) = 0;
    if ( !*(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      v4 = common::minet::Packet::serializeToString(
             (const common::minet::Packet *const)packet_ptr._M_ptr->_vptr_Packet,
             (std::string *)(v2 + 32));
      goto LABEL_9;
    }
  }
  v4 = __asan_report_load8(packet_ptr._M_ptr);
LABEL_9:
  if ( v4 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/kcp_session.cpp",
      "sendPacket",
      247);
    remote_port = common::minet::KcpSession::get_remote_port(this);
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&v12, this);
    v7 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( v7 && v7 <= 3 )
      __asan_report_load4(&this->session_id_);
    else
      common::milog::MiLogStream::operator()(
        &v11,
        "serializeToString fails session_id=%u ip=%s port=%u",
        this->session_id_,
        v12._M_dataplus._M_p,
        remote_port);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
      operator delete(v12._M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  else
  {
    v8 = common::minet::KcpSession::send(this, *(char **)(v2 + 32), *(_DWORD *)(v2 + 40));
  }
  v9 = *(char **)(v2 + 32);
  if ( v9 != (char *)(v2 + 48) )
    operator delete(v9);
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v8;
};

// Line 254: range 000000000CDF4184-000000000CDF496E
volatile signed __int32 *__fastcall common::minet::KcpSession::kcp_packet_create(
        volatile signed __int32 *a1,
        common::minet::KcpSession *const this,
        const std::string *data)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r14
  bool *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // dl
  _QWORD *v13; // rdi
  char v14; // al
  uint32_t *v15; // rdi
  uint32_t *p_session_id; // rdx
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  char v21; // al
  unsigned __int64 v22; // rdx
  char v23; // cl
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  char v26; // dl
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rax
  char v29; // dl
  signed __int32 v30; // eax
  char v32; // dl
  unsigned __int64 v33; // rdi
  char v34; // dl
  signed __int32 v35; // eax
  unsigned __int64 v36; // rdi
  char v37; // dl
  struct _Unwind_Exception *v38; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v39; // rdi
  std::string v41; // [rsp+30h] [rbp-D8h] BYREF
  char v42[184]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v6 = v19;
  }
  v7 = v6 + 128;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 4 __a2 64 16 14 packet_ptr:255 96 16 7 __guard";
  *(_QWORD *)(v6 + 16) = common::minet::KcpSession::kcp_packet_create;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219021312;
  v8[536862723] = -202178560;
  v9 = &common::tools::perf::MemoryPerf::is_record;
  v10 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v10 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v10 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
    goto LABEL_27;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpPacket,common::tools::perf::allocator<common::minet::KcpPacket,common::minet::KcpPacket>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpPacket>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpPacket,common::tools::perf::allocator<common::minet::KcpPacket,common::minet::KcpPacket>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpPacket> *)(v6 + 48));
    v4 = *(_QWORD *)(v6 + 104);
    v9 = (bool *)(v4 + 8);
    v11 = *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000);
    if ( !v11 || v11 > 3 )
    {
      *(_DWORD *)(v4 + 8) = 1;
      v9 = (bool *)(v4 + 12);
      v12 = *(_BYTE *)(((v4 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v4 + 12) & 7) + 3) < v12 || !v12 )
      {
        *(_DWORD *)(v4 + 12) = 1;
        if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v4 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::KcpPacket,common::tools::perf::allocator<common::minet::KcpPacket,common::minet::KcpPacket>,(__gnu_cxx::_Lock_policy)2>
                        + 2;
          v3 = v4 + 16;
          if ( !common::tools::perf::MemoryPerf::is_record )
            goto LABEL_11;
          goto LABEL_30;
        }
LABEL_29:
        __asan_report_store8();
LABEL_30:
        v41._M_dataplus._M_p = v41._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v41, "N6common5minet9KcpPacketE", "", (std::forward_iterator_tag)&v41);
        common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &v41, 0x28uLL);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
          operator delete(v41._M_dataplus._M_p);
LABEL_11:
        if ( *(_BYTE *)(((v3 + 39) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v3 + 39) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v3 + 39) & 7)
          || *(char *)((v3 >> 3) + 0x7FFF8000) < 0 )
        {
          v13 = (_QWORD *)v3;
          __asan_report_store_n(v3, 40LL);
        }
        else
        {
          *(_QWORD *)(v4 + 16) = 0LL;
          *(_QWORD *)(v4 + 24) = 0LL;
          *(_QWORD *)(v3 + 16) = 0LL;
          *(_QWORD *)(v3 + 24) = 0LL;
          *(_QWORD *)(v3 + 32) = 0LL;
          v13 = (_QWORD *)(v3 + 8);
          if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v3 + 8) = v3 + 24;
            v13 = (_QWORD *)(v3 + 16);
            if ( !*(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v3 + 16) = 0LL;
              v13 = (_QWORD *)(v3 + 24);
              v14 = *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000);
              if ( v14 > (char)((v3 + 24) & 7) || !v14 )
              {
                *(_BYTE *)(v3 + 24) = 0;
                *(_QWORD *)(v6 + 104) = 0LL;
                *(_QWORD *)(v6 + 72) = v4;
                *(_QWORD *)(v6 + 64) = v3;
                goto LABEL_18;
              }
              goto LABEL_35;
            }
LABEL_34:
            __asan_report_store8();
LABEL_35:
            __asan_report_store1(v13);
            goto LABEL_36;
          }
        }
        __asan_report_store8();
        goto LABEL_34;
      }
LABEL_28:
      __asan_report_store4(v9);
      goto LABEL_29;
    }
LABEL_27:
    __asan_report_store4(v9);
    goto LABEL_28;
  }
LABEL_36:
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpPacket,std::allocator<common::minet::KcpPacket>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpPacket,std::allocator<common::minet::KcpPacket>,(__gnu_cxx::_Lock_policy)2> > *)(v6 + 48));
  v20 = *(_QWORD *)(v6 + 104);
  v21 = *(_BYTE *)(((v20 + 8) >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
  {
    __asan_report_store4(v20 + 8);
LABEL_49:
    __asan_report_store4(v22);
    goto LABEL_50;
  }
  *(_DWORD *)(v20 + 8) = 1;
  v22 = v20 + 12;
  v23 = *(_BYTE *)(((v20 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v20 + 12) & 7) + 3) >= v23 && v23 )
    goto LABEL_49;
  *(_DWORD *)(v20 + 12) = 1;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
LABEL_51:
    __asan_report_store_n(v24, 40LL);
    goto LABEL_52;
  }
  *(_QWORD *)v20 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::KcpPacket,std::allocator<common::minet::KcpPacket>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v24 = v20 + 16;
  if ( *(_BYTE *)(((v20 + 55) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v20 + 55) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v20 + 55) & 7)
    || *(char *)(((v20 + 16) >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_51;
  }
  *(_QWORD *)(v20 + 16) = 0LL;
  *(_QWORD *)(v20 + 24) = 0LL;
  *(_QWORD *)(v20 + 32) = 0LL;
  *(_QWORD *)(v20 + 40) = 0LL;
  *(_QWORD *)(v20 + 48) = 0LL;
  if ( *(_BYTE *)(((v20 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
    goto LABEL_53;
  }
  *(_QWORD *)(v20 + 24) = v20 + 40;
  if ( *(_BYTE *)(((v20 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    v25 = __asan_report_store8();
LABEL_54:
    __asan_report_store1(v25);
    goto LABEL_55;
  }
  *(_QWORD *)(v20 + 32) = 0LL;
  v25 = v20 + 40;
  v26 = *(_BYTE *)(((v20 + 40) >> 3) + 0x7FFF8000);
  if ( v26 <= (char)((v20 + 40) & 7) && v26 )
    goto LABEL_54;
  *(_BYTE *)(v20 + 40) = 0;
  *(_QWORD *)(v6 + 104) = 0LL;
  *(_QWORD *)(v6 + 72) = v20;
  *(_QWORD *)(v6 + 64) = v20 + 16;
LABEL_18:
  v15 = *(uint32_t **)(v6 + 64);
  if ( v15 )
  {
    p_session_id = &this->session_id_;
    v17 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( !v17 || v17 > 3 )
    {
      v18 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( !v18 || v18 > 3 )
      {
        *v15 = this->session_id_;
        std::string::_M_assign(*(_QWORD *)(v6 + 64) + 8LL, data);
        goto LABEL_62;
      }
LABEL_61:
      __asan_report_store4(v15);
LABEL_62:
      if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
      {
        v27 = a1;
        __asan_report_store8();
      }
      else
      {
        *(_QWORD *)a1 = *(_QWORD *)(v6 + 64);
        v27 = a1 + 2;
        if ( !*(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
        {
          v28 = *(_QWORD *)(v6 + 72);
          *(_QWORD *)(v6 + 72) = 0LL;
          *((_QWORD *)a1 + 1) = v28;
          goto LABEL_65;
        }
      }
      __asan_report_store8();
      goto LABEL_76;
    }
LABEL_60:
    v15 = p_session_id;
    __asan_report_load4(p_session_id);
    goto LABEL_61;
  }
LABEL_55:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v41,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/kcp_session.cpp",
    "kcp_packet_create",
    258);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v41, "make_shared<KcpPacket> failed");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41);
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)a1 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)(a1 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  *((_QWORD *)a1 + 1) = 0LL;
LABEL_65:
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_71;
  v27 = (volatile signed __int32 *)(v7 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v27 & 7) + 3) < v29 || !v29 )
  {
    v30 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
    goto LABEL_70;
  }
LABEL_76:
  __asan_report_store4(v27);
LABEL_77:
  v32 = *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v7 + 8) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v7 + 8);
    goto LABEL_81;
  }
  v30 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v30 - 1;
LABEL_70:
  if ( v30 != 1 )
    goto LABEL_71;
LABEL_81:
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    v33 = v7;
    __asan_report_load8(v7);
    goto LABEL_92;
  }
  v33 = *(_QWORD *)v7 + 16LL;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8(v33);
    goto LABEL_93;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16LL))(v7);
  v33 = v7 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_94;
  v34 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
  if ( (char)((v33 & 7) + 3) < v34 || !v34 )
  {
    v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v33, 0xFFFFFFFF);
    goto LABEL_87;
  }
LABEL_93:
  __asan_report_store4(v33);
LABEL_94:
  v37 = *(_BYTE *)(((v7 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v7 + 12) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v7 + 12);
LABEL_98:
    v36 = v7;
    __asan_report_load8(v7);
LABEL_99:
    v38 = (struct _Unwind_Exception *)__asan_report_load8(v36);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41);
    v39 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 - 56);
    if ( v39 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v39);
    __asan_handle_no_return(v39);
    _Unwind_Resume(v38);
  }
  v35 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 12) = v35 - 1;
LABEL_87:
  if ( v35 != 1 )
    goto LABEL_71;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    goto LABEL_98;
  v36 = *(_QWORD *)v7 + 24LL;
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 24LL))(v7);
LABEL_71:
  if ( v42 == (char *)v6 )
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
  return a1;
};

// Line 292: range 000000000CDF2DB0-000000000CDF2DCD
int __fastcall common::minet::KcpSession::udp_output(const char *buf, int len, ikcpcb *kcp, void *user)
{
  common::minet::KcpSession::send_udp_packet((common::minet::KcpSession *const)user, buf, len);
  return 0;
};

// Line 298: range 000000000CDF28DE-000000000CDF2DAB
void __fastcall common::minet::KcpSession::send_udp_packet(
        common::minet::KcpSession *const this,
        const char *buf,
        int len)
{
  unsigned __int64 v5; // rbp
  std::forward_iterator_tag v6; // cl
  _DWORD *v7; // r13
  common::minet::KcpConnMgrBaseWtr *p_kcp_conn_mgr_wtr; // rsi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // eax
  int v14; // ett
  bool v15; // dl
  std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  std::enable_shared_from_this<common::minet::KcpConnMgrBase> *v17; // rdi
  char v18; // dl
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  volatile signed __int32 *v21; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  uint32_t remote_port; // r14d
  char v25; // al
  char v26; // dl
  unsigned __int64 v27; // rdi
  char v28; // dl
  signed __int32 v29; // eax
  unsigned __int64 v30; // rdi
  char v31; // dl
  struct _Unwind_Exception *v32; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rdi
  common::milog::MiLogStream v35; // [rsp+10h] [rbp-D8h] BYREF
  std::string msg; // [rsp+30h] [rbp-B8h] BYREF
  char v37[152]; // [rsp+50h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(96LL);
    if ( v19 )
      v5 = v19;
  }
  v6.gap0[0] = v5 + 96;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 7 __count 64 16 7 ptr:299";
  *(_QWORD *)(v5 + 16) = common::minet::KcpSession::send_udp_packet;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  p_kcp_conn_mgr_wtr = &this->kcp_conn_mgr_wtr_;
  p_M_refcount = &this->kcp_conn_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->kcp_conn_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = this->kcp_conn_mgr_wtr_._M_refcount._M_pi;
    *(_QWORD *)(v5 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v11 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v11 || !v11 )
    {
      *(_DWORD *)(v5 + 48) = M_pi->_M_use_count;
      while ( 1 )
      {
        v12 = *(_DWORD *)(v5 + 48);
        if ( !v12 )
          goto LABEL_23;
        v14 = *(_DWORD *)(v5 + 48);
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v12 + 1, v12);
        v15 = v14 == v13;
        if ( v14 != v13 )
          *(_DWORD *)(v5 + 48) = v13;
        if ( v15 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_23:
  v15 = 0;
LABEL_11:
  if ( !v15 )
    *(_QWORD *)(v5 + 72) = 0LL;
LABEL_13:
  M_ptr = *(std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 72);
  if ( !M_ptr )
    goto LABEL_27;
  v17 = &M_ptr->std::enable_shared_from_this<common::minet::KcpConnMgrBase>;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v17);
LABEL_25:
    __asan_report_load8(&this->kcp_conn_mgr_wtr_);
    goto LABEL_26;
  }
  if ( LODWORD(v17->_M_weak_this._M_ptr) )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_kcp_conn_mgr_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = this->kcp_conn_mgr_wtr_._M_ptr;
      goto LABEL_27;
    }
    goto LABEL_25;
  }
LABEL_26:
  M_ptr = 0LL;
LABEL_27:
  *(_QWORD *)(v5 + 64) = M_ptr;
  if ( M_ptr )
  {
    msg._M_dataplus._M_p = msg._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&msg, buf, &buf[len], v6);
    common::minet::KcpConnMgrBase::send_udp_packet(M_ptr, &msg, &this->udp_remote_endpoint_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg._M_dataplus._M_p != &msg._anon_0 )
      operator delete(msg._M_dataplus._M_p);
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_session.cpp",
      "send_udp_packet",
      305);
    remote_port = common::minet::KcpSession::get_remote_port(this);
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11](&msg, this);
    v25 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( v25 && v25 <= 3 )
      __asan_report_load4(&this->session_id_);
    else
      common::milog::MiLogStream::operator()(
        &v35,
        "kcp_conn_mgr_wtr is nullptr, not a valid kcp packet sesion_id=%u ip=%s port=%u",
        this->session_id_,
        msg._M_dataplus._M_p,
        remote_port);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg._M_dataplus._M_p != &msg._anon_0 )
      operator delete(msg._M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  v20 = *(_QWORD *)(v5 + 72);
  if ( v20 )
  {
    v21 = (volatile signed __int32 *)(v20 + 8);
    if ( &_pthread_key_create )
    {
      v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v21 & 7) + 3) < v22 || !v22 )
      {
        v23 = _InterlockedExchangeAdd(v21, 0xFFFFFFFF);
        goto LABEL_35;
      }
      __asan_report_store4(v21);
    }
    v26 = *(_BYTE *)(((v20 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v20 + 8) & 7) + 3) >= v26 && v26 )
    {
      __asan_report_load4(v20 + 8);
      goto LABEL_50;
    }
    v23 = *(_DWORD *)(v20 + 8);
    *(_DWORD *)(v20 + 8) = v23 - 1;
LABEL_35:
    if ( v23 != 1 )
      goto LABEL_36;
LABEL_50:
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    {
      v27 = v20;
      __asan_report_load8(v20);
    }
    else
    {
      v27 = *(_QWORD *)v20 + 16LL;
      if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 16LL))(v20);
        v27 = v20 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_63;
        v28 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
        if ( (char)((v27 & 7) + 3) < v28 || !v28 )
        {
          v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v27, 0xFFFFFFFF);
          goto LABEL_56;
        }
LABEL_62:
        __asan_report_store4(v27);
LABEL_63:
        v31 = *(_BYTE *)(((v20 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v20 + 12) & 7) + 3) >= v31 && v31 )
        {
          __asan_report_load4(v20 + 12);
          goto LABEL_67;
        }
        v29 = *(_DWORD *)(v20 + 12);
        *(_DWORD *)(v20 + 12) = v29 - 1;
LABEL_56:
        if ( v29 != 1 )
          goto LABEL_36;
        if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        {
          v30 = *(_QWORD *)v20 + 24LL;
          if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 24LL))(v20);
            goto LABEL_36;
          }
LABEL_68:
          v32 = (struct _Unwind_Exception *)__asan_report_load8(v30);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg._M_dataplus._M_p != &msg._anon_0 )
            operator delete(msg._M_dataplus._M_p);
          v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 72);
          if ( v33 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v33);
          __asan_handle_no_return(v33);
          _Unwind_Resume(v32);
        }
LABEL_67:
        v30 = v20;
        __asan_report_load8(v20);
        goto LABEL_68;
      }
    }
    __asan_report_load8(v27);
    goto LABEL_62;
  }
LABEL_36:
  if ( v37 == (char *)v5 )
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
};

// Line 310: range 000000000CDF2DCE-000000000CDF3B39
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::KcpSession::send_kcp_packet(
        common::minet::KcpSession *const this,
        common::minet::KcpPacketPtr packet_ptr)
{
  int v2; // r14d
  unsigned __int64 v4; // r12
  char v5; // al
  uint32_t *p_session_id; // rdi
  char v7; // al
  uint32_t remote_port; // eax
  uint32_t v9; // r12d
  char v10; // al
  std::__shared_ptr<common::minet::KcpPacket,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  char v12; // al
  ikcpcb **p_p_kcp; // rdi
  uint32_t v14; // eax
  __int64 v15; // r13
  uint32_t *v16; // rdi
  char v17; // al
  common::milog::MiLogStream v18; // [rsp+0h] [rbp-60h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_10;
  }
  v4 = *(_QWORD *)&packet_ptr._M_ptr->session_id;
  if ( !*(_QWORD *)packet_ptr._M_ptr )
  {
LABEL_10:
    common::milog::MiLogStream::MiLogStream(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_session.cpp",
      "send_kcp_packet",
      313);
    common::milog::MiLogStream::operator()(&v19, "packet_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return;
  }
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    p_session_id = *(uint32_t **)&packet_ptr._M_ptr->session_id;
    __asan_report_load4(*(_QWORD *)packet_ptr._M_ptr);
LABEL_12:
    remote_port = __asan_report_load4(p_session_id);
    goto LABEL_13;
  }
  p_session_id = &this->session_id_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_12;
  if ( *(_DWORD *)v4 != this->session_id_ )
  {
    common::milog::MiLogStream::MiLogStream(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_session.cpp",
      "send_kcp_packet",
      319);
    remote_port = common::minet::KcpSession::get_remote_port(this);
LABEL_13:
    v9 = remote_port;
    common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)&v19, this);
    v10 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( v10 && v10 <= 3 )
    {
      __asan_report_load4(&this->session_id_);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = *(std::__shared_ptr<common::minet::KcpPacket,(__gnu_cxx::_Lock_policy)2>::element_type **)&packet_ptr._M_ptr->session_id;
      v12 = *(_BYTE *)((*(_QWORD *)packet_ptr._M_ptr >> 3) + 0x7FFF8000LL);
      if ( !v12 || v12 > 3 )
      {
        common::milog::MiLogStream::operator()(
          &v18,
          "packet session_id=%u and session id=%u not match, ip=%s port=%u",
          M_ptr->session_id,
          this->session_id_,
          (const char *)v19.log_,
          v9);
LABEL_22:
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v19.log_ != &v19.ostr_ptr_._M_refcount )
          operator delete(v19.log_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        return;
      }
LABEL_21:
      __asan_report_load4(M_ptr);
      goto LABEL_22;
    }
    M_ptr = packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_21;
  }
  p_p_kcp = (ikcpcb **)(v4 + 16);
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p_kcp);
    goto LABEL_32;
  }
  p_p_kcp = (ikcpcb **)(v4 + 8);
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_p_kcp);
    goto LABEL_33;
  }
  p_p_kcp = &this->p_kcp_;
  if ( *(_BYTE *)(((unsigned __int64)&this->p_kcp_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    v14 = __asan_report_load8(p_p_kcp);
    goto LABEL_34;
  }
  v2 = ikcp_send(this->p_kcp_, *(const char **)(v4 + 8), *(_QWORD *)(v4 + 16));
  if ( v2 >= 0 )
    return;
  common::milog::MiLogStream::MiLogStream(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/kcp_session.cpp",
    "send_kcp_packet",
    327);
  v14 = common::minet::KcpSession::get_remote_port(this);
LABEL_34:
  v15 = v14;
  common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)&v19, this);
  v16 = (uint32_t *)(v4 + 16);
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v16);
LABEL_39:
    __asan_report_load4(v16);
    goto LABEL_40;
  }
  v16 = &this->session_id_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
    goto LABEL_39;
  common::milog::MiLogStream::operator()(
    &v18,
    "ikcp_send failed, send_ret: %d, session_id=%u size=%lu ip=%s port=%u",
    (unsigned int)v2,
    this->session_id_,
    *(_QWORD *)(v4 + 16),
    (const char *)v19.log_,
    v15);
LABEL_40:
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v19.log_ != &v19.ostr_ptr_._M_refcount )
    operator delete(v19.log_);
  common::milog::MiLogStream::~MiLogStream(&v18);
};

// Line 333: range 000000000CDF083E-000000000CDF08DE
void __fastcall common::minet::KcpSession::kcp_log(const char *log, IKCPCB *kcp, void *user)
{
  char v3; // al
  common::milog::MiLogStream v4; // [rsp-38h] [rbp-38h] BYREF

  if ( kcp != 0LL && log != 0LL )
  {
    common::milog::MiLogStream::MiLogStream(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/kcp_session.cpp",
      "kcp_log",
      335);
    v3 = *(_BYTE *)(((unsigned __int64)kcp >> 3) + 0x7FFF8000);
    if ( v3 && v3 <= 3 )
      __asan_report_load4(kcp);
    else
      common::milog::MiLogStream::operator()(&v4, "[KCP] %s conv=%u", log, kcp->conv);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
};

// Line 338: range 000000000CDF528E-000000000CDF52A5
void __cdecl GLOBAL__sub_I_kcp_session_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 338: range 000000000CDF08E3-000000000CDF0DC3
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/kcp_session.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] )
      {
        `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_[0] )
      {
        `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_[0] = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id )
      {
        `guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ )
      {
        `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_[0] )
      {
        `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_[0] = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8();
          JUMPOUT(0xCDF0ADFLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
