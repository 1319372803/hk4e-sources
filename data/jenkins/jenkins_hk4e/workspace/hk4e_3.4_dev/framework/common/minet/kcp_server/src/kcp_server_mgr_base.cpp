// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/src/kcp_server_mgr_base.cpp

// Line 9: range 000000000CDFA68A-000000000CDFACB7
void __fastcall common::minet::KcpServerMgrBase::KcpServerMgrBase(common::minet::KcpServerMgrBase *const this)
{
  uint32_t *p_listen_port; // rdx
  char v2; // al
  uint32_t *p_recv_buf_len; // rdx
  char v4; // cl
  uint32_t *p_send_buf_len; // rdx
  char v6; // al
  uint32_t *p_timeout_sec; // rdx
  char v8; // cl
  uint32_t *p_max_conn_num; // rdx
  char v10; // al
  uint32_t *p_mtu; // rdx
  char v12; // cl
  uint32_t *p_wnd_size; // rdx
  char v14; // al
  uint32_t *p_kcp_log_mask; // rdx
  char v16; // cl
  uint32_t *p_wait_snd_check_interval; // rdx
  char v18; // al
  uint32_t *p_wait_snd_max; // rdx
  char v20; // cl
  std::_Rb_tree_header *v21; // rdx
  char v22; // al
  std::_Rb_tree_header *v23; // rax
  std::recursive_mutex *p_session_map_mu; // r8
  __int64 *v25; // rdx
  char v26; // al
  uint32_t *p_next_session_id; // rdx
  char v28; // al
  std::mutex *p_session_id_mu; // r8
  uint32_t *p_thread_num; // rdx
  char v31; // al
  common::minet::KcpServerMgrBase *p_M_end_of_storage; // rax
  common::minet::KcpServerMgrBase *v33; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::KcpServerMgrBase> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_46;
  }
  this->_M_weak_this._M_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  this->_M_weak_this._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
LABEL_48:
    __asan_report_store4(p_listen_port);
LABEL_49:
    __asan_report_store4(p_recv_buf_len);
LABEL_50:
    __asan_report_store4(p_send_buf_len);
LABEL_51:
    __asan_report_store4(p_timeout_sec);
LABEL_52:
    __asan_report_store4(p_max_conn_num);
LABEL_53:
    __asan_report_store4(p_mtu);
LABEL_54:
    __asan_report_store4(p_wnd_size);
LABEL_55:
    __asan_report_store4(p_kcp_log_mask);
    goto LABEL_56;
  }
  this->_vptr_KcpServerMgrBase = (int (**)(...))(&`vtable for'common::minet::KcpServerMgrBase + 2);
  p_listen_port = &this->listen_port_;
  v2 = *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000);
  if ( v2 && v2 <= 3 )
    goto LABEL_48;
  this->listen_port_ = 0;
  p_recv_buf_len = &this->recv_buf_len_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v4 && v4 )
    goto LABEL_49;
  this->recv_buf_len_ = 0;
  p_send_buf_len = &this->send_buf_len_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->send_buf_len_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_50;
  this->send_buf_len_ = 0;
  p_timeout_sec = &this->timeout_sec_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v8 && v8 )
    goto LABEL_51;
  this->timeout_sec_ = 0;
  p_max_conn_num = &this->max_conn_num_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_52;
  this->max_conn_num_ = 0;
  p_mtu = &this->mtu_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->mtu_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 44) & 7) + 3) >= v12 && v12 )
    goto LABEL_53;
  this->mtu_ = 0;
  p_wnd_size = &this->wnd_size_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->wnd_size_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_54;
  this->wnd_size_ = 256;
  p_kcp_log_mask = &this->kcp_log_mask_;
  v16 = *(_BYTE *)(((unsigned __int64)&this->kcp_log_mask_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 3) >= v16 && v16 )
    goto LABEL_55;
  this->kcp_log_mask_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
LABEL_57:
    __asan_report_store4(p_wait_snd_check_interval);
LABEL_58:
    __asan_report_store4(p_wait_snd_max);
LABEL_59:
    __asan_report_store4(v21);
    goto LABEL_60;
  }
  this->connect_limit_per_second_per_ip_ = 50.0;
  p_wait_snd_check_interval = &this->wait_snd_check_interval_;
  v18 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_57;
  this->wait_snd_check_interval_ = 0;
  p_wait_snd_max = &this->wait_snd_max_;
  v20 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v20 && v20 )
    goto LABEL_58;
  this->wait_snd_max_ = 10000;
  v21 = &this->session_map_._M_t._M_impl.std::_Rb_tree_header;
  v22 = *(_BYTE *)(((unsigned __int64)&this->session_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_59;
  this->session_map_._M_t._M_impl._M_header._M_color = _S_red;
  if ( *(_BYTE *)(((unsigned __int64)&this->session_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->session_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v23 = &this->session_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->session_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8();
    goto LABEL_62;
  }
  this->session_map_._M_t._M_impl._M_header._M_left = &v23->_M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->session_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8();
    goto LABEL_63;
  }
  this->session_map_._M_t._M_impl._M_header._M_right = &v23->_M_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->session_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_store8();
LABEL_64:
    __asan_report_store_n(p_session_map_mu, 40LL);
LABEL_65:
    __asan_report_store4(v25);
LABEL_66:
    __asan_report_store4(p_next_session_id);
LABEL_67:
    __asan_report_store_n(p_session_id_mu, 40LL);
LABEL_68:
    __asan_report_store4(p_thread_num);
    goto LABEL_69;
  }
  this->session_map_._M_t._M_impl._M_node_count = 0LL;
  p_session_map_mu = &this->session_map_mu_;
  if ( *(_BYTE *)((((unsigned __int64)&this->session_map_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->session_map_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 97) & 7)
    || *(char *)(((unsigned __int64)&this->session_map_mu_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_64;
  }
  *(_OWORD *)&this->session_map_mu_._M_mutex.__data.__lock = 0uLL;
  *((_OWORD *)&this->session_map_mu_._M_mutex.__align + 1) = 0uLL;
  this->session_map_mu_._M_mutex.__data.__list.__next = 0LL;
  v25 = &this->session_map_mu_._M_mutex.__align + 2;
  v26 = *(_BYTE *)(((unsigned __int64)(&this->session_map_mu_._M_mutex.__align + 2) >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 3 )
    goto LABEL_65;
  this->session_map_mu_._M_mutex.__data.__kind = 1;
  p_next_session_id = &this->next_session_id_;
  v28 = *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000);
  if ( v28 && v28 <= 3 )
    goto LABEL_66;
  this->next_session_id_ = 0;
  p_session_id_mu = &this->session_id_mu_;
  if ( *(_BYTE *)((((unsigned __int64)&this->session_id_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->session_id_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 49) & 7)
    || *(char *)(((unsigned __int64)&this->session_id_mu_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_67;
  }
  *(_OWORD *)&this->session_id_mu_._M_mutex.__data.__lock = 0uLL;
  *((_OWORD *)&this->session_id_mu_._M_mutex.__align + 1) = 0uLL;
  this->session_id_mu_._M_mutex.__data.__list.__next = 0LL;
  p_thread_num = &this->thread_num_;
  v31 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_68;
  this->thread_num_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  this->conn_mgr_vec_._M_impl._M_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    p_M_end_of_storage = (common::minet::KcpServerMgrBase *)__asan_report_store8();
    goto LABEL_71;
  }
  this->conn_mgr_vec_._M_impl._M_finish = 0LL;
  p_M_end_of_storage = (common::minet::KcpServerMgrBase *)&this->conn_mgr_vec_._M_impl._M_end_of_storage;
  if ( !*(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
    this->conn_mgr_vec_._M_impl._M_end_of_storage = 0LL;
    return;
  }
LABEL_71:
  v33 = p_M_end_of_storage;
  __asan_report_store8();
  common::minet::KcpServerMgrBase::stop(v33);
};

// Line 37: range 000000000CDFC976-000000000CDFE769
int32_t __fastcall common::minet::KcpServerMgrBase::init(
        common::minet::KcpServerMgrBase *const this,
        const common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  common::minet::KcpServerMgrBase *v3; // rbx
  __int64 v4; // rax
  unsigned __int16 v5; // ax
  std::forward_iterator_tag v6; // cl
  char v7; // dl
  unsigned int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  std::forward_iterator_tag v11; // cl
  char v12; // dl
  uint32_t v13; // eax
  std::forward_iterator_tag v14; // cl
  char v15; // dl
  unsigned int v16; // eax
  char v17; // cl
  unsigned int v18; // eax
  std::forward_iterator_tag v19; // cl
  char v20; // dl
  unsigned int v21; // eax
  char v22; // cl
  unsigned int v23; // eax
  std::forward_iterator_tag v24; // cl
  char v25; // dl
  int v26; // eax
  char v27; // cl
  std::forward_iterator_tag v28; // cl
  double v29; // xmm0_8
  unsigned int v30; // eax
  std::forward_iterator_tag v31; // cl
  char v32; // dl
  unsigned int v33; // eax
  uint32_t *p_wait_snd_max; // rdi
  char v35; // cl
  char v36; // al
  unsigned __int64 p_cur; // rdi
  char v38; // dl
  char v39; // al
  uint32_t i; // r12d
  common::milog::MilogStringStream *ostr; // r12
  char *cur; // rdi
  size_t v43; // rax
  size_t v44; // r15
  char v45; // dl
  int32_t result; // eax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v47; // r13
  _Atomic_word *v48; // rax
  char v49; // cl
  signed __int32 M_use_count; // eax
  common::minet::KcpConnMgrBase *v51; // rdi
  char v52; // cl
  uint32_t *v53; // rdx
  char v54; // al
  __int64 p_connect_limit_per_second_per_ip; // rax
  uint32_t *p_kcp_log_mask; // rdx
  char v57; // cl
  uint32_t *p_wnd_size; // rdx
  char v59; // al
  uint32_t *p_mtu; // rdx
  char v61; // cl
  uint32_t *p_max_conn_num; // rdx
  char v63; // al
  uint32_t *p_timeout_sec; // rdx
  char v65; // cl
  uint32_t *p_send_buf_len; // rdx
  char v67; // al
  uint32_t *p_recv_buf_len; // rdx
  uint32_t *p_listen_port; // rsi
  char v70; // al
  int32_t v71; // eax
  std::shared_ptr<common::minet::KcpConnMgrBase> *v72; // rdx
  char v73; // dl
  unsigned __int64 v74; // rdi
  volatile signed __int32 *p_M_weak_count; // rax
  char v76; // cl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v78; // rdi
  char v79; // dl
  void *p_wait_snd_check_interval; // rdi
  char v81; // dl
  char v82; // al
  __int64 wait_snd_check_interval; // r15
  double connect_limit_per_second_per_ip; // xmm0_8
  char v85; // dl
  __int64 kcp_log_mask; // r11
  char v87; // al
  __int64 wnd_size; // r10
  char v89; // dl
  __int64 mtu; // rsi
  char v91; // al
  __int64 max_conn_num; // rdx
  char v93; // cl
  __int64 timeout_sec; // r13
  char v95; // al
  __int64 thread_num; // r9
  char v97; // al
  __int64 send_buf_len; // r8
  char v99; // cl
  __int64 recv_buf_len; // rcx
  char v101; // al
  char v102; // dl
  char v103; // al
  char v104; // dl
  char v105; // al
  char v106; // dl
  char v107; // al
  char v108; // cl
  char v109; // al
  char v110; // al
  char v111; // cl
  char v112; // al
  unsigned __int64 v113; // r13
  volatile signed __int32 *v114; // rax
  char v115; // cl
  signed __int32 v116; // eax
  char v117; // al
  void (__fastcall *v118)(unsigned __int64, common::minet::KcpServerMgrBase *, std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **); // r8
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  char v121; // si
  int v122; // eax
  signed __int32 v123; // eax
  signed __int32 v124; // ett
  bool v125; // cl
  char v126; // dl
  unsigned __int64 v127; // rdi
  volatile signed __int32 *v128; // rax
  char v129; // cl
  signed __int32 v130; // eax
  unsigned __int64 v131; // rdi
  char v132; // dl
  std::enable_shared_from_this<common::minet::KcpServerMgrBase> *v133; // rdi
  char v134; // dl
  signed __int32 v135; // eax
  char v136; // dl
  volatile signed __int32 *v137; // rdi
  char v138; // dl
  signed __int32 M_ptr_high; // eax
  unsigned __int64 v140; // rdi
  char v141; // dl
  void *p_thread_num; // rdi
  char v143; // dl
  char v144; // al
  char v145; // dl
  char v146; // al
  char v147; // dl
  char v148; // al
  char v149; // dl
  char v150; // dl
  char v151; // dl
  char v152; // cl
  char v153; // dl
  _DWORD *v154; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v155; // [rsp+20h] [rbp-F0h]
  std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v157; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v158; // [rsp+40h] [rbp-D0h] BYREF
  std::string path; // [rsp+60h] [rbp-B0h] BYREF
  char v160[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = this;
  v155 = (unsigned __int64)v160;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v155 = v4;
  }
  *(_QWORD *)v155 = 1102416563LL;
  *(_QWORD *)(v155 + 8) = "2 48 4 7 __count 64 16 15 conn_mgr_ptr:65";
  *(_QWORD *)(v155 + 16) = common::minet::KcpServerMgrBase::init;
  v154 = (_DWORD *)(v155 >> 3);
  v154[536862720] = -235802127;
  v154[536862721] = -234556943;
  v154[536862722] = -202178560;
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_1A26C87A[-26], byte_1A26C87A, v2);
  v5 = common::tools::PTree::get<unsigned short>(pt, &path);
  v7 = *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_store4(&this->listen_port_);
  }
  else
  {
    this->listen_port_ = v5;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C8BA[-26], byte_1A26C8BA, v6);
  }
  v8 = common::tools::PTree::get<unsigned int>(pt, &path);
  v9 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_store4(&this->recv_buf_len_);
  }
  else
  {
    this->recv_buf_len_ = v8;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C8BA[-26], byte_1A26C8BA, (std::forward_iterator_tag)v9);
  }
  v10 = common::tools::PTree::get<unsigned int>(pt, &path);
  v12 = *(_BYTE *)(((unsigned __int64)&this->send_buf_len_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    __asan_report_store4(&this->send_buf_len_);
  }
  else
  {
    this->send_buf_len_ = v10;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C8F9[-25], byte_1A26C8F9, v11);
  }
  v13 = common::tools::PTree::get<unsigned short>(pt, &path);
  v15 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
  {
    __asan_report_store4(&this->thread_num_);
  }
  else
  {
    this->thread_num_ = v13;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C93A[-26], byte_1A26C93A, v14);
  }
  v16 = common::tools::PTree::get<unsigned int>(pt, &path);
  v17 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v17 && v17 )
  {
    __asan_report_store4(&this->timeout_sec_);
  }
  else
  {
    this->timeout_sec_ = v16;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C2BA[-26], byte_1A26C2BA, (std::forward_iterator_tag)v17);
  }
  v18 = common::tools::PTree::get<unsigned int>(pt, &path);
  v20 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
    __asan_report_store4(&this->max_conn_num_);
  }
  else
  {
    this->max_conn_num_ = v18;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C973[-19], byte_1A26C973, v19);
  }
  v21 = common::tools::PTree::get<unsigned int>(pt, &path);
  v22 = *(_BYTE *)(((unsigned __int64)&this->mtu_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 44) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_store4(&this->mtu_);
  }
  else
  {
    this->mtu_ = v21;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C9B7[-23], byte_1A26C9B7, (std::forward_iterator_tag)v22);
  }
  v23 = common::tools::PTree::get<unsigned int>(pt, &path);
  v25 = *(_BYTE *)(((unsigned __int64)&this->wnd_size_ >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
  {
    __asan_report_store4(&this->wnd_size_);
  }
  else
  {
    this->wnd_size_ = v23;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C9FA[-26], byte_1A26C9FA, v24);
  }
  v26 = common::tools::PTree::get<int>(pt, &path);
  v27 = *(_BYTE *)(((unsigned __int64)&this->kcp_log_mask_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_store4(&this->kcp_log_mask_);
  }
  else
  {
    this->kcp_log_mask_ = v26;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C26A[-42], byte_1A26C26A, (std::forward_iterator_tag)v27);
  }
  v29 = (double)(int)common::tools::PTree::get<unsigned int>(pt, &path);
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->connect_limit_per_second_per_ip_ = v29;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C304[-36], byte_1A26C304, v28);
  }
  v30 = common::tools::PTree::get<unsigned int>(pt, &path);
  v32 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( v32 && v32 <= 3 )
  {
    __asan_report_store4(&this->wait_snd_check_interval_);
  }
  else
  {
    this->wait_snd_check_interval_ = v30;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_1A26C35A[-26], byte_1A26C35A, v31);
  }
  v33 = common::tools::PTree::get<unsigned int>(pt, &path);
  p_wait_snd_max = &this->wait_snd_max_;
  v35 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 68) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_store4(p_wait_snd_max);
LABEL_83:
    __asan_report_load4(p_wait_snd_max);
LABEL_84:
    common::milog::MiLogStream::MiLogStream(
      &v158,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_server_mgr_base.cpp",
      "init",
      55);
    ostr = v158.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v158.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = (unsigned __int64)v158.ostr_;
      __asan_report_load8(v158.ostr_);
    }
    else
    {
      p_cur = (unsigned __int64)&v158.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v158.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v158.ostr_->buffer_.cur_;
        v43 = (size_t)&v158.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v43 > 0x13 )
          v43 = 20LL;
        v44 = v43;
        memcpy(cur, "invalid listen port:", v43);
        ostr->buffer_.cur_ += v44;
        p_cur = (unsigned __int64)&v3->listen_port_;
        v45 = *(_BYTE *)(((unsigned __int64)&v3->listen_port_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v3 + 24) & 7) + 3) < v45 || !v45 )
        {
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v158.ostr_, v3->listen_port_);
          common::milog::MiLogStream::~MiLogStream(&v158);
          result = 1;
          goto LABEL_297;
        }
        goto LABEL_93;
      }
    }
    __asan_report_load8(p_cur);
LABEL_93:
    __asan_report_load4(p_cur);
LABEL_94:
    __asan_report_load4(p_cur);
LABEL_95:
    __asan_report_load4(p_cur);
LABEL_96:
    __asan_report_load4(p_cur);
LABEL_97:
    __asan_report_load8(p_cur);
LABEL_98:
    __asan_report_load8(p_cur);
LABEL_99:
    __asan_report_load8(p_cur);
LABEL_100:
    __asan_report_load4(p_cur);
LABEL_101:
    __asan_handle_no_return(p_cur);
    std::__throw_bad_weak_ptr();
  }
  v3->wait_snd_max_ = v33;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  p_wait_snd_max = &v3->listen_port_;
  v36 = *(_BYTE *)(((unsigned __int64)&v3->listen_port_ >> 3) + 0x7FFF8000);
  if ( v36 && v36 <= 3 )
    goto LABEL_83;
  if ( v3->listen_port_ <= 0x63 )
    goto LABEL_84;
  p_cur = (unsigned __int64)&v3->recv_buf_len_;
  v38 = *(_BYTE *)(((unsigned __int64)&v3->recv_buf_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 28) & 7) + 3) >= v38 && v38 )
    goto LABEL_94;
  v3->recv_buf_len_ <<= 10;
  p_cur = (unsigned __int64)&v3->send_buf_len_;
  v39 = *(_BYTE *)(((unsigned __int64)&v3->send_buf_len_ >> 3) + 0x7FFF8000);
  if ( v39 && v39 <= 3 )
    goto LABEL_95;
  v3->send_buf_len_ <<= 10;
  for ( i = 0; ; ++i )
  {
    p_cur = (unsigned __int64)&v3->thread_num_;
    v117 = *(_BYTE *)(((unsigned __int64)&v3->thread_num_ >> 3) + 0x7FFF8000);
    if ( v117 && v117 <= 3 )
      goto LABEL_96;
    if ( v3->thread_num_ <= i )
      goto LABEL_323;
    p_cur = (unsigned __int64)v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      goto LABEL_97;
    p_cur = (unsigned __int64)(v3->_vptr_KcpServerMgrBase + 2);
    if ( *(_BYTE *)((p_cur >> 3) + 0x7FFF8000) )
      goto LABEL_98;
    v118 = (void (__fastcall *)(unsigned __int64, common::minet::KcpServerMgrBase *, std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **))*((_QWORD *)v3->_vptr_KcpServerMgrBase + 2);
    p_cur = (unsigned __int64)&v3->_M_weak_this._M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
      goto LABEL_99;
    M_pi = v3->_M_weak_this._M_refcount._M_pi;
    v157 = M_pi;
    if ( !M_pi )
      goto LABEL_103;
    p_M_use_count = &M_pi->_M_use_count;
    p_cur = (unsigned __int64)&M_pi->_M_use_count;
    v121 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v121 && v121 )
      goto LABEL_100;
    *(_DWORD *)(v155 + 48) = M_pi->_M_use_count;
    do
    {
      v122 = *(_DWORD *)(v155 + 48);
      if ( !v122 )
        goto LABEL_101;
      v124 = *(_DWORD *)(v155 + 48);
      v123 = _InterlockedCompareExchange(p_M_use_count, v122 + 1, v124);
      v125 = v124 == v123;
      if ( v124 != v123 )
        *(_DWORD *)(v155 + 48) = v123;
    }
    while ( !v125 );
    p_cur = (unsigned __int64)&v3->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
    if ( *(_BYTE *)(((unsigned __int64)&v3->std::enable_shared_from_this<common::minet::KcpServerMgrBase> >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8(p_cur);
LABEL_103:
      __asan_handle_no_return(p_cur);
      std::__throw_bad_weak_ptr();
    }
    M_ptr = v3->_M_weak_this._M_ptr;
    p_listen_port = (uint32_t *)v3;
    v118(v155 + 64, v3, &M_ptr);
    v47 = v157;
    if ( v157 )
    {
      v48 = &v157->_M_use_count;
      if ( &_pthread_key_create )
      {
        v49 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v48 & 7) + 3) < v49 || !v49 )
        {
          M_use_count = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
          goto LABEL_109;
        }
        __asan_report_store4(&v157->_M_use_count);
      }
      v73 = *(_BYTE *)(((unsigned __int64)&v47->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v47 + 8) & 7) + 3) >= v73 && v73 )
      {
        __asan_report_load4(&v47->_M_use_count);
        goto LABEL_138;
      }
      M_use_count = v47->_M_use_count;
      v47->_M_use_count = M_use_count - 1;
LABEL_109:
      if ( M_use_count != 1 )
        goto LABEL_110;
LABEL_138:
      v74 = (unsigned __int64)v47;
      if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v47);
      }
      else
      {
        v74 = (unsigned __int64)(v47->_vptr__Sp_counted_base + 2);
        if ( !*(_BYTE *)((v74 >> 3) + 0x7FFF8000) )
        {
          (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v47->_vptr__Sp_counted_base + 2))(v47);
          p_M_weak_count = &v47->_M_weak_count;
          if ( !&_pthread_key_create )
            goto LABEL_151;
          v74 = (unsigned __int64)&v47->_M_weak_count;
          v76 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v76 || !v76 )
          {
            M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
LABEL_144:
            if ( M_weak_count == 1 )
            {
              v78 = (unsigned __int64)v47;
              if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
                goto LABEL_155;
              v78 = (unsigned __int64)(v47->_vptr__Sp_counted_base + 3);
              if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
                goto LABEL_156;
              (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v47->_vptr__Sp_counted_base
               + 3))(v47);
            }
            goto LABEL_110;
          }
LABEL_150:
          __asan_report_store4(v74);
LABEL_151:
          v78 = (unsigned __int64)&v47->_M_weak_count;
          v79 = *(_BYTE *)(((unsigned __int64)&v47->_M_weak_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v47 + 12) & 7) + 3) >= v79 && v79 )
          {
            __asan_report_load4(v78);
LABEL_155:
            __asan_report_load8(v78);
LABEL_156:
            __asan_report_load8(v78);
LABEL_157:
            common::milog::MiLogStream::MiLogStream(
              (common::milog::MiLogStream *const)&path,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/kcp_server_mgr_base.cpp",
              "init",
              68);
            p_wait_snd_check_interval = &v3->wait_snd_max_;
            v81 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_max_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v3 + 68) & 7) + 3) >= v81 && v81 )
            {
              __asan_report_load4(p_wait_snd_check_interval);
            }
            else
            {
              p_wait_snd_check_interval = &v3->wait_snd_check_interval_;
              v82 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
              if ( !v82 || v82 > 3 )
              {
                wait_snd_check_interval = v3->wait_snd_check_interval_;
                p_wait_snd_check_interval = &v3->connect_limit_per_second_per_ip_;
                if ( !*(_BYTE *)(((unsigned __int64)&v3->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
                {
                  connect_limit_per_second_per_ip = v3->connect_limit_per_second_per_ip_;
                  p_wait_snd_check_interval = &v3->kcp_log_mask_;
                  v85 = *(_BYTE *)(((unsigned __int64)&v3->kcp_log_mask_ >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)v3 + 52) & 7) + 3) < v85 || !v85 )
                  {
                    kcp_log_mask = v3->kcp_log_mask_;
                    p_wait_snd_check_interval = &v3->wnd_size_;
                    v87 = *(_BYTE *)(((unsigned __int64)&v3->wnd_size_ >> 3) + 0x7FFF8000);
                    if ( !v87 || v87 > 3 )
                    {
                      wnd_size = v3->wnd_size_;
                      p_wait_snd_check_interval = &v3->mtu_;
                      v89 = *(_BYTE *)(((unsigned __int64)&v3->mtu_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v3 + 44) & 7) + 3) < v89 || !v89 )
                      {
                        mtu = v3->mtu_;
                        p_wait_snd_check_interval = &v3->max_conn_num_;
                        v91 = *(_BYTE *)(((unsigned __int64)&v3->max_conn_num_ >> 3) + 0x7FFF8000);
                        if ( !v91 || v91 > 3 )
                        {
                          max_conn_num = v3->max_conn_num_;
                          p_wait_snd_check_interval = &v3->timeout_sec_;
                          v93 = *(_BYTE *)(((unsigned __int64)&v3->timeout_sec_ >> 3) + 0x7FFF8000);
                          if ( (char)((((_BYTE)v3 + 36) & 7) + 3) < v93 || !v93 )
                          {
                            timeout_sec = v3->timeout_sec_;
                            p_wait_snd_check_interval = &v3->thread_num_;
                            v95 = *(_BYTE *)(((unsigned __int64)&v3->thread_num_ >> 3) + 0x7FFF8000);
                            if ( !v95 || v95 > 3 )
                            {
                              thread_num = v3->thread_num_;
                              p_wait_snd_check_interval = &v3->send_buf_len_;
                              v97 = *(_BYTE *)(((unsigned __int64)&v3->send_buf_len_ >> 3) + 0x7FFF8000);
                              if ( !v97 || v97 > 3 )
                              {
                                send_buf_len = v3->send_buf_len_;
                                p_wait_snd_check_interval = &v3->recv_buf_len_;
                                v99 = *(_BYTE *)(((unsigned __int64)&v3->recv_buf_len_ >> 3) + 0x7FFF8000);
                                if ( (char)((((_BYTE)v3 + 28) & 7) + 3) < v99 || !v99 )
                                {
                                  recv_buf_len = v3->recv_buf_len_;
                                  p_wait_snd_check_interval = &v3->listen_port_;
                                  v101 = *(_BYTE *)(((unsigned __int64)&v3->listen_port_ >> 3) + 0x7FFF8000);
                                  if ( !v101 || v101 > 3 )
                                  {
LABEL_180:
                                    common::milog::MiLogStream::operator()(
                                      (common::milog::MiLogStream *const)&path,
                                      "kcp_server init failed with listen_port=%u, recv_buf_len=%u, send_buf_len=%u, thre"
                                      "ad_num=%u, timeout_sec=%u, max_conn_num=%u, mtu=%u, wnd_size=%u, kcp_log_mask=%u, "
                                      "connect_limit_per_second_per_ip=%g, wait_snd_check_interval=%u, wait_snd_max=%u",
                                      v3->listen_port_,
                                      recv_buf_len,
                                      send_buf_len,
                                      thread_num,
                                      timeout_sec,
                                      max_conn_num,
                                      mtu,
                                      wnd_size,
                                      kcp_log_mask,
                                      connect_limit_per_second_per_ip,
                                      wait_snd_check_interval,
                                      v3->wait_snd_max_);
LABEL_193:
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&path);
                                    common::minet::KcpServerMgrBase::final(v3);
                                    goto LABEL_290;
                                  }
LABEL_192:
                                  __asan_report_load4(p_wait_snd_check_interval);
                                  goto LABEL_193;
                                }
LABEL_191:
                                __asan_report_load4(p_wait_snd_check_interval);
                                goto LABEL_192;
                              }
LABEL_190:
                              __asan_report_load4(p_wait_snd_check_interval);
                              goto LABEL_191;
                            }
LABEL_189:
                            __asan_report_load4(p_wait_snd_check_interval);
                            goto LABEL_190;
                          }
LABEL_188:
                          __asan_report_load4(p_wait_snd_check_interval);
                          goto LABEL_189;
                        }
LABEL_187:
                        __asan_report_load4(p_wait_snd_check_interval);
                        goto LABEL_188;
                      }
LABEL_186:
                      __asan_report_load4(p_wait_snd_check_interval);
                      goto LABEL_187;
                    }
LABEL_185:
                    __asan_report_load4(p_wait_snd_check_interval);
                    goto LABEL_186;
                  }
LABEL_184:
                  __asan_report_load4(p_wait_snd_check_interval);
                  goto LABEL_185;
                }
LABEL_183:
                __asan_report_load8(p_wait_snd_check_interval);
                goto LABEL_184;
              }
            }
            __asan_report_load4(p_wait_snd_check_interval);
            goto LABEL_183;
          }
          M_weak_count = v47->_M_weak_count;
          v47->_M_weak_count = M_weak_count - 1;
          goto LABEL_144;
        }
      }
      __asan_report_load8(v74);
      goto LABEL_150;
    }
LABEL_110:
    v51 = *(common::minet::KcpConnMgrBase **)(v155 + 64);
    if ( !v51 )
      goto LABEL_157;
    v52 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_max_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v3 + 68) & 7) + 3) >= v52 && v52 )
    {
      __asan_report_load4(&v3->wait_snd_max_);
LABEL_195:
      p_connect_limit_per_second_per_ip = __asan_report_load4(v53);
LABEL_196:
      __asan_report_load8(p_connect_limit_per_second_per_ip);
LABEL_197:
      __asan_report_load4(p_kcp_log_mask);
LABEL_198:
      __asan_report_load4(p_wnd_size);
LABEL_199:
      __asan_report_load4(p_mtu);
LABEL_200:
      __asan_report_load4(p_max_conn_num);
LABEL_201:
      __asan_report_load4(p_timeout_sec);
LABEL_202:
      __asan_report_load4(p_send_buf_len);
LABEL_203:
      __asan_report_load4(p_recv_buf_len);
      goto LABEL_204;
    }
    v53 = &v3->wait_snd_check_interval_;
    v54 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
    if ( v54 && v54 <= 3 )
      goto LABEL_195;
    p_connect_limit_per_second_per_ip = (__int64)&v3->connect_limit_per_second_per_ip_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
      goto LABEL_196;
    p_kcp_log_mask = &v3->kcp_log_mask_;
    v57 = *(_BYTE *)(((unsigned __int64)&v3->kcp_log_mask_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v3 + 52) & 7) + 3) >= v57 && v57 )
      goto LABEL_197;
    p_wnd_size = &v3->wnd_size_;
    v59 = *(_BYTE *)(((unsigned __int64)&v3->wnd_size_ >> 3) + 0x7FFF8000);
    if ( v59 && v59 <= 3 )
      goto LABEL_198;
    p_mtu = &v3->mtu_;
    v61 = *(_BYTE *)(((unsigned __int64)&v3->mtu_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v3 + 44) & 7) + 3) >= v61 && v61 )
      goto LABEL_199;
    p_max_conn_num = &v3->max_conn_num_;
    v63 = *(_BYTE *)(((unsigned __int64)&v3->max_conn_num_ >> 3) + 0x7FFF8000);
    if ( v63 && v63 <= 3 )
      goto LABEL_200;
    p_timeout_sec = &v3->timeout_sec_;
    v65 = *(_BYTE *)(((unsigned __int64)&v3->timeout_sec_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v3 + 36) & 7) + 3) >= v65 && v65 )
      goto LABEL_201;
    p_send_buf_len = &v3->send_buf_len_;
    v67 = *(_BYTE *)(((unsigned __int64)&v3->send_buf_len_ >> 3) + 0x7FFF8000);
    if ( v67 && v67 <= 3 )
      goto LABEL_202;
    p_recv_buf_len = &v3->recv_buf_len_;
    p_listen_port = (uint32_t *)*(unsigned __int8 *)(((unsigned __int64)&v3->recv_buf_len_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v3 + 28) & 7) + 3) >= (char)p_listen_port && (_BYTE)p_listen_port )
      goto LABEL_203;
    p_listen_port = &v3->listen_port_;
    v70 = *(_BYTE *)(((unsigned __int64)&v3->listen_port_ >> 3) + 0x7FFF8000);
    if ( !v70 || v70 > 3 )
    {
      v71 = common::minet::KcpConnMgrBase::init(
              v51,
              v3->listen_port_,
              v3->recv_buf_len_,
              v3->send_buf_len_,
              v3->timeout_sec_,
              v3->max_conn_num_,
              v3->mtu_,
              v3->wnd_size_,
              v3->kcp_log_mask_,
              v3->connect_limit_per_second_per_ip_,
              v3->wait_snd_check_interval_,
              v3->wait_snd_max_);
      goto LABEL_205;
    }
LABEL_204:
    v71 = __asan_report_load4(p_listen_port);
LABEL_205:
    if ( v71 )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&path,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/kcp_server_mgr_base.cpp",
        "init",
        76);
      p_wait_snd_check_interval = &v3->wait_snd_max_;
      v102 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_max_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 + 68) & 7) + 3) >= v102 && v102 )
      {
        __asan_report_load4(p_wait_snd_check_interval);
      }
      else
      {
        p_wait_snd_check_interval = &v3->wait_snd_check_interval_;
        v103 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
        if ( !v103 || v103 > 3 )
        {
          wait_snd_check_interval = v3->wait_snd_check_interval_;
          p_wait_snd_check_interval = &v3->connect_limit_per_second_per_ip_;
          if ( !*(_BYTE *)(((unsigned __int64)&v3->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
          {
            connect_limit_per_second_per_ip = v3->connect_limit_per_second_per_ip_;
            p_wait_snd_check_interval = &v3->kcp_log_mask_;
            v104 = *(_BYTE *)(((unsigned __int64)&v3->kcp_log_mask_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v3 + 52) & 7) + 3) < v104 || !v104 )
            {
              kcp_log_mask = v3->kcp_log_mask_;
              p_wait_snd_check_interval = &v3->wnd_size_;
              v105 = *(_BYTE *)(((unsigned __int64)&v3->wnd_size_ >> 3) + 0x7FFF8000);
              if ( !v105 || v105 > 3 )
              {
                wnd_size = v3->wnd_size_;
                p_wait_snd_check_interval = &v3->mtu_;
                v106 = *(_BYTE *)(((unsigned __int64)&v3->mtu_ >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v3 + 44) & 7) + 3) < v106 || !v106 )
                {
                  mtu = v3->mtu_;
                  p_wait_snd_check_interval = &v3->max_conn_num_;
                  v107 = *(_BYTE *)(((unsigned __int64)&v3->max_conn_num_ >> 3) + 0x7FFF8000);
                  if ( !v107 || v107 > 3 )
                  {
                    max_conn_num = v3->max_conn_num_;
                    p_wait_snd_check_interval = &v3->timeout_sec_;
                    v108 = *(_BYTE *)(((unsigned __int64)&v3->timeout_sec_ >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v3 + 36) & 7) + 3) < v108 || !v108 )
                    {
                      timeout_sec = v3->timeout_sec_;
                      p_wait_snd_check_interval = &v3->thread_num_;
                      v109 = *(_BYTE *)(((unsigned __int64)&v3->thread_num_ >> 3) + 0x7FFF8000);
                      if ( !v109 || v109 > 3 )
                      {
                        thread_num = v3->thread_num_;
                        p_wait_snd_check_interval = &v3->send_buf_len_;
                        v110 = *(_BYTE *)(((unsigned __int64)&v3->send_buf_len_ >> 3) + 0x7FFF8000);
                        if ( !v110 || v110 > 3 )
                        {
                          send_buf_len = v3->send_buf_len_;
                          p_wait_snd_check_interval = &v3->recv_buf_len_;
                          v111 = *(_BYTE *)(((unsigned __int64)&v3->recv_buf_len_ >> 3) + 0x7FFF8000);
                          if ( (char)((((_BYTE)v3 + 28) & 7) + 3) < v111 || !v111 )
                          {
                            recv_buf_len = v3->recv_buf_len_;
                            p_wait_snd_check_interval = &v3->listen_port_;
                            v112 = *(_BYTE *)(((unsigned __int64)&v3->listen_port_ >> 3) + 0x7FFF8000);
                            if ( !v112 || v112 > 3 )
                              goto LABEL_180;
                            goto LABEL_192;
                          }
                          goto LABEL_241;
                        }
LABEL_240:
                        __asan_report_load4(p_wait_snd_check_interval);
LABEL_241:
                        __asan_report_load4(p_wait_snd_check_interval);
                        goto LABEL_192;
                      }
LABEL_239:
                      __asan_report_load4(p_wait_snd_check_interval);
                      goto LABEL_240;
                    }
LABEL_238:
                    __asan_report_load4(p_wait_snd_check_interval);
                    goto LABEL_239;
                  }
LABEL_237:
                  __asan_report_load4(p_wait_snd_check_interval);
                  goto LABEL_238;
                }
LABEL_236:
                __asan_report_load4(p_wait_snd_check_interval);
                goto LABEL_237;
              }
LABEL_235:
              __asan_report_load4(p_wait_snd_check_interval);
              goto LABEL_236;
            }
LABEL_234:
            __asan_report_load4(p_wait_snd_check_interval);
            goto LABEL_235;
          }
LABEL_233:
          __asan_report_load8(p_wait_snd_check_interval);
          goto LABEL_234;
        }
      }
      __asan_report_load4(p_wait_snd_check_interval);
      goto LABEL_233;
    }
    std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>>::emplace_back<std::shared_ptr<common::minet::KcpConnMgrBase>>(
      &v3->conn_mgr_vec_,
      (std::shared_ptr<common::minet::KcpConnMgrBase> *)(v155 + 64),
      v72);
    v113 = *(_QWORD *)(v155 + 72);
    if ( !v113 )
      continue;
    v114 = (volatile signed __int32 *)(v113 + 8);
    if ( &_pthread_key_create )
    {
      v115 = *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v114 & 7) + 3) < v115 || !v115 )
      {
        v116 = _InterlockedExchangeAdd(v114, 0xFFFFFFFF);
        goto LABEL_248;
      }
      __asan_report_store4(v113 + 8);
    }
    v126 = *(_BYTE *)(((v113 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v113 + 8) & 7) + 3) >= v126 && v126 )
    {
      __asan_report_load4(v113 + 8);
      goto LABEL_271;
    }
    v116 = *(_DWORD *)(v113 + 8);
    *(_DWORD *)(v113 + 8) = v116 - 1;
LABEL_248:
    if ( v116 != 1 )
      continue;
LABEL_271:
    v127 = v113;
    if ( *(_BYTE *)((v113 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v113);
LABEL_282:
      __asan_report_load8(v127);
LABEL_283:
      __asan_report_store4(v127);
      goto LABEL_284;
    }
    v127 = *(_QWORD *)v113 + 16LL;
    if ( *(_BYTE *)((v127 >> 3) + 0x7FFF8000) )
      goto LABEL_282;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v113 + 16LL))(v113);
    v128 = (volatile signed __int32 *)(v113 + 12);
    if ( &_pthread_key_create )
    {
      v127 = v113 + 12;
      v129 = *(_BYTE *)(((unsigned __int64)v128 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v128 & 7) + 3) < v129 || !v129 )
      {
        v130 = _InterlockedExchangeAdd(v128, 0xFFFFFFFF);
        goto LABEL_277;
      }
      goto LABEL_283;
    }
LABEL_284:
    v131 = v113 + 12;
    v132 = *(_BYTE *)(((v113 + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((v113 + 12) & 7) + 3) >= v132 )
    {
      if ( v132 )
        break;
    }
    v130 = *(_DWORD *)(v113 + 12);
    *(_DWORD *)(v113 + 12) = v130 - 1;
LABEL_277:
    if ( v130 == 1 )
    {
      v131 = v113;
      if ( *(_BYTE *)((v113 >> 3) + 0x7FFF8000) )
        goto LABEL_288;
      v131 = *(_QWORD *)v113 + 24LL;
      if ( *(_BYTE *)((v131 >> 3) + 0x7FFF8000) )
        goto LABEL_289;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v113 + 24LL))(v113);
    }
  }
  __asan_report_load4(v131);
LABEL_288:
  __asan_report_load8(v131);
LABEL_289:
  __asan_report_load8(v131);
LABEL_290:
  v3 = *(common::minet::KcpServerMgrBase **)(v155 + 72);
  if ( !v3 )
    goto LABEL_296;
  v133 = &v3->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  if ( &_pthread_key_create )
  {
    v134 = *(_BYTE *)(((unsigned __int64)v133 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v133 & 7) + 3) < v134 || !v134 )
    {
      v135 = _InterlockedExchangeAdd((volatile signed __int32 *)v133, 0xFFFFFFFF);
      goto LABEL_295;
    }
    __asan_report_store4(v133);
  }
  v136 = *(_BYTE *)(((unsigned __int64)&v3->std::enable_shared_from_this<common::minet::KcpServerMgrBase> >> 3)
                  + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 8) & 7) + 3) >= v136 && v136 )
  {
    __asan_report_load4(&v3->std::enable_shared_from_this<common::minet::KcpServerMgrBase>);
  }
  else
  {
    v135 = (signed __int32)v3->_M_weak_this._M_ptr;
    LODWORD(v3->_M_weak_this._M_ptr) = v135 - 1;
LABEL_295:
    if ( v135 != 1 )
    {
LABEL_296:
      result = -1;
      goto LABEL_297;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    v137 = (volatile signed __int32 *)v3;
    __asan_report_load8(v3);
    goto LABEL_315;
  }
  v137 = (volatile signed __int32 *)(v3->_vptr_KcpServerMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000) )
  {
LABEL_315:
    __asan_report_load8(v137);
    goto LABEL_316;
  }
  (*((void (__fastcall **)(common::minet::KcpServerMgrBase *))v3->_vptr_KcpServerMgrBase + 2))(v3);
  v137 = (volatile signed __int32 *)&v3->_M_weak_this._M_ptr + 1;
  if ( &_pthread_key_create )
  {
    v138 = *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v137 & 7) + 3) < v138 || !v138 )
    {
      M_ptr_high = _InterlockedExchangeAdd(v137, 0xFFFFFFFF);
      goto LABEL_310;
    }
LABEL_316:
    __asan_report_store4(v137);
  }
  v141 = *(_BYTE *)((((unsigned __int64)&v3->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 12) & 7) + 3) >= v141 && v141 )
  {
    __asan_report_load4((char *)&v3->_M_weak_this._M_ptr + 4);
LABEL_321:
    v140 = (unsigned __int64)v3;
    __asan_report_load8(v3);
    goto LABEL_322;
  }
  M_ptr_high = HIDWORD(v3->_M_weak_this._M_ptr);
  HIDWORD(v3->_M_weak_this._M_ptr) = M_ptr_high - 1;
LABEL_310:
  if ( M_ptr_high != 1 )
    goto LABEL_296;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_321;
  v140 = (unsigned __int64)(v3->_vptr_KcpServerMgrBase + 3);
  if ( !*(_BYTE *)((v140 >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(common::minet::KcpServerMgrBase *))v3->_vptr_KcpServerMgrBase + 3))(v3);
    goto LABEL_296;
  }
LABEL_322:
  __asan_report_load8(v140);
LABEL_323:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&path,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_server_mgr_base.cpp",
    "init",
    85);
  p_thread_num = &v3->wait_snd_max_;
  v143 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 68) & 7) + 3) >= v143 && v143 )
  {
    __asan_report_load4(p_thread_num);
LABEL_348:
    __asan_report_load4(p_thread_num);
    goto LABEL_349;
  }
  p_thread_num = &v3->wait_snd_check_interval_;
  v144 = *(_BYTE *)(((unsigned __int64)&v3->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( v144 && v144 <= 3 )
    goto LABEL_348;
  p_thread_num = &v3->connect_limit_per_second_per_ip_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
LABEL_349:
    __asan_report_load8(p_thread_num);
LABEL_350:
    __asan_report_load4(p_thread_num);
LABEL_351:
    __asan_report_load4(p_thread_num);
LABEL_352:
    __asan_report_load4(p_thread_num);
LABEL_353:
    __asan_report_load4(p_thread_num);
LABEL_354:
    __asan_report_load4(p_thread_num);
LABEL_355:
    __asan_report_load4(p_thread_num);
LABEL_356:
    __asan_report_load4(p_thread_num);
LABEL_357:
    __asan_report_load4(p_thread_num);
LABEL_358:
    __asan_report_load4(p_thread_num);
    goto LABEL_359;
  }
  p_thread_num = &v3->kcp_log_mask_;
  v145 = *(_BYTE *)(((unsigned __int64)&v3->kcp_log_mask_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 52) & 7) + 3) >= v145 && v145 )
    goto LABEL_350;
  p_thread_num = &v3->wnd_size_;
  v146 = *(_BYTE *)(((unsigned __int64)&v3->wnd_size_ >> 3) + 0x7FFF8000);
  if ( v146 && v146 <= 3 )
    goto LABEL_351;
  p_thread_num = &v3->mtu_;
  v147 = *(_BYTE *)(((unsigned __int64)&v3->mtu_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 44) & 7) + 3) >= v147 && v147 )
    goto LABEL_352;
  p_thread_num = &v3->max_conn_num_;
  v148 = *(_BYTE *)(((unsigned __int64)&v3->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( v148 && v148 <= 3 )
    goto LABEL_353;
  p_thread_num = &v3->timeout_sec_;
  v149 = *(_BYTE *)(((unsigned __int64)&v3->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 36) & 7) + 3) >= v149 && v149 )
    goto LABEL_354;
  p_thread_num = &v3->thread_num_;
  v150 = *(_BYTE *)(((unsigned __int64)&v3->thread_num_ >> 3) + 0x7FFF8000);
  if ( v150 && v150 <= 3 )
    goto LABEL_355;
  p_thread_num = &v3->send_buf_len_;
  v151 = *(_BYTE *)(((unsigned __int64)&v3->send_buf_len_ >> 3) + 0x7FFF8000);
  if ( v151 && v151 <= 3 )
    goto LABEL_356;
  p_thread_num = &v3->recv_buf_len_;
  v152 = *(_BYTE *)(((unsigned __int64)&v3->recv_buf_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 28) & 7) + 3) >= v152 && v152 )
    goto LABEL_357;
  p_thread_num = &v3->listen_port_;
  v153 = *(_BYTE *)(((unsigned __int64)&v3->listen_port_ >> 3) + 0x7FFF8000);
  if ( v153 && v153 <= 3 )
    goto LABEL_358;
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&path,
    "kcp_server init succ with listen_port=%u, recv_buf_len=%u, send_buf_len=%u, thread_num=%u, timeout_sec=%u, max_conn_"
    "num=%u, mtu=%u, wnd_size=%u, kcp_log_mask=%u, connect_limit_per_second_per_ip=%g, wait_snd_check_interval=%u, wait_snd_max=%u",
    v3->listen_port_,
    v3->recv_buf_len_,
    v3->send_buf_len_,
    v3->thread_num_,
    v3->timeout_sec_,
    v3->max_conn_num_,
    v3->mtu_,
    v3->wnd_size_,
    v3->kcp_log_mask_,
    v3->connect_limit_per_second_per_ip_,
    v3->wait_snd_check_interval_,
    v3->wait_snd_max_);
LABEL_359:
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&path);
  result = 0;
LABEL_297:
  if ( v160 == (char *)v155 )
  {
    *(_QWORD *)((v155 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v155 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v155 = 1172321806LL;
    *(_QWORD *)((v155 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v155 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 99: range 000000000CDFC270-000000000CDFC7E1
int32_t __fastcall common::minet::KcpServerMgrBase::reload(
        common::minet::KcpServerMgrBase *const this,
        const common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer M_finish; // r12
  common::minet::KcpConnMgrBase *const *p_M_ptr; // rbp
  std::forward_iterator_tag v6; // cl
  double v7; // xmm0_8
  unsigned int v8; // eax
  std::forward_iterator_tag v9; // cl
  char v10; // dl
  unsigned int v11; // eax
  std::forward_iterator_tag v12; // cl
  char v13; // dl
  unsigned int v14; // eax
  void *p_wait_snd_max; // rdi
  char v16; // cl
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer M_start; // rax
  int v18; // eax
  char v19; // dl
  char v20; // al
  char v21; // al
  void *p_wait_snd_check_interval; // rdi
  char v24; // dl
  char v25; // al
  char v26; // al
  std::string v27; // [rsp+0h] [rbp-38h] BYREF

  p_M_ptr = (common::minet::KcpConnMgrBase *const *)pt;
  v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v27, &byte_1A26C26A[-42], byte_1A26C26A, v2);
  v7 = (double)(int)common::tools::PTree::get<unsigned int>(pt, &v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->connect_limit_per_second_per_ip_ = v7;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
      operator delete(v27._M_dataplus._M_p);
    v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v27, &byte_1A26C2BA[-26], byte_1A26C2BA, v6);
  }
  v8 = common::tools::PTree::get<unsigned int>(pt, &v27);
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(&this->max_conn_num_);
  }
  else
  {
    this->max_conn_num_ = v8;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
      operator delete(v27._M_dataplus._M_p);
    v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v27, &byte_1A26C304[-36], byte_1A26C304, v9);
  }
  v11 = common::tools::PTree::get<unsigned int>(pt, &v27);
  v13 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(&this->wait_snd_check_interval_);
  }
  else
  {
    this->wait_snd_check_interval_ = v11;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
      operator delete(v27._M_dataplus._M_p);
    v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v27, &byte_1A26C35A[-26], byte_1A26C35A, v12);
  }
  v14 = common::tools::PTree::get<unsigned int>(pt, &v27);
  p_wait_snd_max = &this->wait_snd_max_;
  v16 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_store4(p_wait_snd_max);
LABEL_26:
    __asan_report_load8(p_wait_snd_max);
    goto LABEL_27;
  }
  this->wait_snd_max_ = v14;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
    operator delete(v27._M_dataplus._M_p);
  p_wait_snd_max = &this->conn_mgr_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_ >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  M_start = this->conn_mgr_vec_._M_impl._M_start;
  p_wait_snd_max = &this->conn_mgr_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_wait_snd_max);
    goto LABEL_28;
  }
  M_finish = this->conn_mgr_vec_._M_impl._M_finish;
  while ( 1 )
  {
    p_M_ptr = &M_start->_M_ptr;
    if ( M_start == M_finish )
      break;
    p_wait_snd_max = M_start;
    if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
    {
LABEL_28:
      __asan_report_load8(p_wait_snd_max);
LABEL_29:
      __asan_report_load4(p_wait_snd_max);
LABEL_30:
      __asan_report_load4(p_wait_snd_max);
LABEL_31:
      __asan_report_load4(p_wait_snd_max);
LABEL_32:
      v18 = __asan_report_load8(p_wait_snd_max);
      goto LABEL_33;
    }
    p_wait_snd_max = &this->wait_snd_max_;
    v19 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v19 && v19 )
      goto LABEL_29;
    p_wait_snd_max = &this->wait_snd_check_interval_;
    v20 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
    if ( v20 && v20 <= 3 )
      goto LABEL_30;
    p_wait_snd_max = &this->max_conn_num_;
    v21 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
    if ( v21 && v21 <= 3 )
      goto LABEL_31;
    p_wait_snd_max = &this->connect_limit_per_second_per_ip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
      goto LABEL_32;
    v18 = common::minet::KcpConnMgrBase::reload(
            *p_M_ptr,
            this->connect_limit_per_second_per_ip_,
            this->max_conn_num_,
            this->wait_snd_check_interval_,
            this->wait_snd_max_);
LABEL_33:
    if ( v18 )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/kcp_server_mgr_base.cpp",
        "reload",
        112);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v27, "conn_mgr_ptr reload failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
      common::minet::KcpServerMgrBase::stop(this);
      return -1;
    }
    M_start = (std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer)(p_M_ptr + 2);
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v27,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_server_mgr_base.cpp",
    "reload",
    118);
  p_wait_snd_check_interval = &this->wait_snd_max_;
  v24 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(p_wait_snd_check_interval);
LABEL_55:
    __asan_report_load4(p_wait_snd_check_interval);
LABEL_56:
    __asan_report_load4(p_wait_snd_check_interval);
    goto LABEL_57;
  }
  p_wait_snd_check_interval = &this->wait_snd_check_interval_;
  v25 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_55;
  p_wait_snd_check_interval = &this->max_conn_num_;
  v26 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 3 )
    goto LABEL_56;
  p_wait_snd_check_interval = &this->connect_limit_per_second_per_ip_;
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(p_wait_snd_check_interval);
    goto LABEL_58;
  }
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&v27,
    "kcp_server reload succ with connect_limit_per_second_per_ip=%g max_conn_num=%u, wait_snd_check_interval=%u, wait_snd_max=%u",
    this->max_conn_num_,
    this->wait_snd_check_interval_,
    this->wait_snd_max_,
    this->connect_limit_per_second_per_ip_);
LABEL_58:
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
  return 0;
};

// Line 132: range 000000000CDFACB8-000000000CDFADB6
int32_t __fastcall common::minet::KcpServerMgrBase::start(common::minet::KcpServerMgrBase *const this)
{
  std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *p_conn_mgr_vec; // rdi
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer M_start; // rax
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer M_finish; // rbp
  std::shared_ptr<common::minet::KcpConnMgrBase> *v5; // rbx
  common::milog::MiLogStream v7; // [rsp+0h] [rbp-38h] BYREF

  p_conn_mgr_vec = &this->conn_mgr_vec_;
  if ( *(_BYTE *)(((unsigned __int64)p_conn_mgr_vec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_conn_mgr_vec);
  }
  else
  {
    M_start = this->conn_mgr_vec_._M_impl._M_start;
    p_conn_mgr_vec = (std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *)&this->conn_mgr_vec_._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_finish = this->conn_mgr_vec_._M_impl._M_finish;
      while ( 1 )
      {
        v5 = M_start;
        if ( M_start == M_finish )
          return 0;
        p_conn_mgr_vec = (std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *)M_start;
        if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
          goto LABEL_10;
        if ( common::minet::KcpConnMgrBase::start(M_start->_M_ptr) )
          goto LABEL_11;
        M_start = v5 + 1;
      }
    }
  }
  __asan_report_load8(p_conn_mgr_vec);
LABEL_10:
  __asan_report_load8(p_conn_mgr_vec);
LABEL_11:
  common::milog::MiLogStream::MiLogStream(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/kcp_server_mgr_base.cpp",
    "start",
    137);
  common::milog::MiLogStream::operator()(&v7, "conn_mgr_ptr start failed");
  common::milog::MiLogStream::~MiLogStream(&v7);
  common::minet::KcpServerMgrBase::stop(this);
  return -1;
};

// Line 155: range 000000000CDFADBC-000000000CDFB076
void __fastcall common::minet::KcpServerMgrBase::final(common::minet::KcpServerMgrBase *const this)
{
  unsigned __int64 M_pi; // rbx
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer i; // rbp
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer M_start; // r13
  std::shared_ptr<common::minet::KcpConnMgrBase> *M_finish; // r14
  std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *p_conn_mgr_vec; // r12
  std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *p_M_finish; // rdi
  unsigned __int64 v7; // rax
  signed __int32 v8; // eax
  char v9; // cl
  char v10; // dl
  unsigned __int64 v11; // rdi
  volatile signed __int32 *v12; // rax
  char v13; // cl
  signed __int32 v14; // eax
  unsigned __int64 v15; // rdi
  char v16; // dl

  p_conn_mgr_vec = &this->conn_mgr_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->conn_mgr_vec_ >> 3) + 0x7FFF8000) )
  {
    p_M_finish = &this->conn_mgr_vec_;
    __asan_report_load8(p_M_finish);
    goto LABEL_6;
  }
  M_start = this->conn_mgr_vec_._M_impl._M_start;
  p_M_finish = (std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *)&this->conn_mgr_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_conn_mgr_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(p_M_finish);
    goto LABEL_7;
  }
  M_finish = p_conn_mgr_vec->_M_impl._M_finish;
  if ( M_start == M_finish )
    return;
  for ( i = M_start; M_finish != i; ++i )
  {
    p_M_finish = (std::vector<std::shared_ptr<common::minet::KcpConnMgrBase>> *)&i->_M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)&i->_M_refcount >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      v7 = __asan_report_load8(p_M_finish);
LABEL_8:
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
      goto LABEL_9;
    }
    M_pi = (unsigned __int64)i->_M_refcount._M_pi;
    if ( !M_pi )
      continue;
    v7 = M_pi + 8;
    if ( &_pthread_key_create )
    {
      v9 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
      if ( (char)((v7 & 7) + 3) < v9 || !v9 )
        goto LABEL_8;
      __asan_report_store4(M_pi + 8);
    }
    v10 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v10 && v10 )
    {
      __asan_report_load4(M_pi + 8);
      goto LABEL_22;
    }
    v8 = *(_DWORD *)(M_pi + 8);
    *(_DWORD *)(M_pi + 8) = v8 - 1;
LABEL_9:
    if ( v8 != 1 )
      continue;
LABEL_22:
    v11 = M_pi;
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
LABEL_33:
      __asan_report_load8(v11);
LABEL_34:
      __asan_report_store4(v11);
LABEL_35:
      v15 = M_pi + 12;
      v16 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((M_pi + 12) & 7) + 3) >= v16 && v16 )
      {
        __asan_report_load4(v15);
LABEL_39:
        __asan_report_load8(v15);
LABEL_40:
        __asan_report_load8(v15);
        break;
      }
      v14 = *(_DWORD *)(M_pi + 12);
      *(_DWORD *)(M_pi + 12) = v14 - 1;
      goto LABEL_28;
    }
    v11 = *(_QWORD *)M_pi + 16LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      goto LABEL_33;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
    v12 = (volatile signed __int32 *)(M_pi + 12);
    if ( !&_pthread_key_create )
      goto LABEL_35;
    v11 = M_pi + 12;
    v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v12 & 7) + 3) >= v13 && v13 )
      goto LABEL_34;
    v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
LABEL_28:
    if ( v14 == 1 )
    {
      v15 = M_pi;
      if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
        goto LABEL_39;
      v15 = *(_QWORD *)M_pi + 24LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        goto LABEL_40;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&p_conn_mgr_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    common::minet::KcpServerMgrBase::isRun((common::minet::KcpServerMgrBase *const)&p_conn_mgr_vec->_M_impl._M_finish);
  }
  else
  {
    p_conn_mgr_vec->_M_impl._M_finish = M_start;
  }
};

// Line 160: range 000000000CDFBC1E-000000000CDFC26B
int32_t __fastcall common::minet::KcpServerMgrBase::disconnect(
        common::minet::KcpServerMgrBase *const this,
        uint32_t session_id,
        uint32_t data)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rax
  char v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // eax
  int v14; // ett
  bool v15; // cl
  common::minet::KcpConnMgrBase *v16; // rdi
  std::enable_shared_from_this<common::minet::KcpConnMgrBase> *v17; // rdi
  char v18; // cl
  __int64 v19; // rax
  int32_t v20; // r13d
  volatile signed __int32 *v21; // r14
  volatile signed __int32 *v22; // rdi
  char v23; // dl
  signed __int32 v24; // eax
  volatile signed __int32 *v25; // rdi
  char v26; // dl
  signed __int32 v27; // eax
  char v29; // dl
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  char v33; // dl
  char v34; // dl
  unsigned __int64 v35; // rdi
  char v36; // dl
  signed __int32 v37; // eax
  unsigned __int64 v38; // rdi
  char v39; // dl
  struct _Unwind_Exception *v40; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rdi
  common::milog::MiLogStream v43; // [rsp+10h] [rbp-D8h] BYREF
  char v44[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v4 = v19;
  }
  v5 = v4 + 128;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 __count 64 16 15 session_ptr:161 96 16 20 kcp_conn_mgr_ptr:168";
  *(_QWORD *)(v4 + 16) = common::minet::KcpServerMgrBase::disconnect;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  common::minet::KcpServerMgrBase::findSession(this, session_id);
  v7 = *(_QWORD *)(v4 + 64);
  if ( v7 )
  {
    v8 = v7 + 8;
    v9 = (volatile signed __int32 *)(v7 + 16);
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v9);
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 16);
      *(_QWORD *)(v4 + 104) = v10;
      if ( !v10 )
        goto LABEL_14;
      v9 = (volatile signed __int32 *)(v10 + 8);
      v11 = *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v10 + 8) & 7) + 3) < v11 || !v11 )
      {
        *(_DWORD *)(v4 + 48) = *(_DWORD *)(v10 + 8);
        while ( 1 )
        {
          v12 = *(_DWORD *)(v4 + 48);
          if ( !v12 )
            goto LABEL_27;
          v14 = *(_DWORD *)(v4 + 48);
          v13 = _InterlockedCompareExchange(v9, v12 + 1, v12);
          v15 = v14 == v13;
          if ( v14 != v13 )
            *(_DWORD *)(v4 + 48) = v13;
          if ( v15 )
            goto LABEL_12;
        }
      }
    }
    __asan_report_load4(v9);
LABEL_27:
    v15 = 0;
LABEL_12:
    if ( !v15 )
      *(_QWORD *)(v4 + 104) = 0LL;
LABEL_14:
    v16 = *(common::minet::KcpConnMgrBase **)(v4 + 104);
    if ( !v16 )
      goto LABEL_20;
    v17 = &v16->std::enable_shared_from_this<common::minet::KcpConnMgrBase>;
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v18 && v18 )
    {
      __asan_report_load4(v17);
    }
    else
    {
      if ( !LODWORD(v17->_M_weak_this._M_ptr) )
      {
LABEL_30:
        v16 = 0LL;
LABEL_20:
        *(_QWORD *)(v4 + 96) = v16;
        if ( v16 )
        {
          common::minet::KcpConnMgrBase::disconnect(v16, session_id, data);
          v20 = 0;
        }
        else
        {
          common::milog::MiLogStream::MiLogStream(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/kcp_server_mgr_base.cpp",
            "disconnect",
            171);
          common::milog::MiLogStream::operator()(&v43, "disconnect findSession failed, session_id=%u", session_id);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v20 = -1;
        }
        v21 = *(volatile signed __int32 **)(v4 + 104);
        if ( !v21 )
          goto LABEL_38;
        v22 = v21 + 2;
        if ( &_pthread_key_create )
        {
          v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v22 & 7) + 3) < v23 || !v23 )
          {
            v24 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
            goto LABEL_37;
          }
          __asan_report_store4(v22);
        }
        v29 = *(_BYTE *)(((unsigned __int64)(v21 + 2) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v21 + 8) & 7) + 3) >= v29 && v29 )
        {
          __asan_report_load4(v21 + 2);
          goto LABEL_52;
        }
        v24 = *((_DWORD *)v21 + 2);
        *((_DWORD *)v21 + 2) = v24 - 1;
LABEL_37:
        if ( v24 != 1 )
          goto LABEL_38;
LABEL_52:
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          v30 = v21;
          __asan_report_load8(v21);
        }
        else
        {
          v30 = (volatile signed __int32 *)(*(_QWORD *)v21 + 16LL);
          if ( !*(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
            v30 = v21 + 3;
            if ( !&_pthread_key_create )
              goto LABEL_65;
            v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
            {
              v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
              goto LABEL_58;
            }
LABEL_64:
            __asan_report_store4(v30);
LABEL_65:
            v33 = *(_BYTE *)(((unsigned __int64)(v21 + 3) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v21 + 12) & 7) + 3) >= v33 && v33 )
            {
              __asan_report_load4(v21 + 3);
              goto LABEL_69;
            }
            v32 = *((_DWORD *)v21 + 3);
            *((_DWORD *)v21 + 3) = v32 - 1;
LABEL_58:
            if ( v32 != 1 )
              goto LABEL_38;
            if ( !*(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              v25 = (volatile signed __int32 *)(*(_QWORD *)v21 + 24LL);
              if ( !*(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
                goto LABEL_38;
              }
LABEL_70:
              __asan_report_load8(v25);
              goto LABEL_71;
            }
LABEL_69:
            v25 = v21;
            __asan_report_load8(v21);
            goto LABEL_70;
          }
        }
        __asan_report_load8(v30);
        goto LABEL_64;
      }
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        v16 = *(common::minet::KcpConnMgrBase **)(v7 + 8);
        goto LABEL_20;
      }
    }
    __asan_report_load8(v8);
    goto LABEL_30;
  }
  common::milog::MiLogStream::MiLogStream(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/kcp_server_mgr_base.cpp",
    "disconnect",
    164);
  common::milog::MiLogStream::operator()(&v43, "disconnect findSession failed, session_id=%u", session_id);
  common::milog::MiLogStream::~MiLogStream(&v43);
  v20 = -1;
LABEL_38:
  v5 = *(_QWORD *)(v4 + 72);
  if ( !v5 )
    goto LABEL_44;
  v25 = (volatile signed __int32 *)(v5 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_72;
  v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
  {
    v27 = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
    goto LABEL_43;
  }
LABEL_71:
  __asan_report_store4(v25);
LABEL_72:
  v34 = *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(v5 + 8);
    goto LABEL_76;
  }
  v27 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v27 - 1;
LABEL_43:
  if ( v27 != 1 )
    goto LABEL_44;
LABEL_76:
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    v35 = v5;
    __asan_report_load8(v5);
    goto LABEL_87;
  }
  v35 = *(_QWORD *)v5 + 16LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(v35);
    goto LABEL_88;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  v35 = v5 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_89;
  v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
  if ( (char)((v35 & 7) + 3) < v36 || !v36 )
  {
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF);
    goto LABEL_82;
  }
LABEL_88:
  __asan_report_store4(v35);
LABEL_89:
  v39 = *(_BYTE *)(((v5 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 12) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(v5 + 12);
LABEL_93:
    v38 = v5;
    __asan_report_load8(v5);
LABEL_94:
    v40 = (struct _Unwind_Exception *)__asan_report_load8(v38);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v41 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 - 56);
    if ( v41 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v41);
    __asan_handle_no_return(v41);
    _Unwind_Resume(v40);
  }
  v37 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v37 - 1;
LABEL_82:
  if ( v37 != 1 )
    goto LABEL_44;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_93;
  v38 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    goto LABEL_94;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 24LL))(v5);
LABEL_44:
  if ( v44 == (char *)v4 )
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
  return v20;
};

// Line 192: range 000000000CDFB514-000000000CDFB7DC
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::minet::KcpServerMgrBase::addSession(
        common::minet::KcpServerMgrBase *const this,
        common::minet::KcpSessionPtr session_ptr,
        unsigned int *a3,
        std::shared_ptr<common::minet::KcpSession> *a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  int (**vptr_KcpSession)(...); // rax
  std::recursive_mutex *v8; // rdi
  char v9; // dl
  std::recursive_mutex *p_session_map_mu; // r15
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession> > >,bool> v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebp
  int v15; // [rsp+Ch] [rbp-9Ch]
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-98h] BYREF
  char v17[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v5 = v12;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 14 session_id:199";
  *(_QWORD *)(v5 + 16) = common::minet::KcpServerMgrBase::addSession;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)session_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(session_ptr._M_ptr);
    goto LABEL_12;
  }
  vptr_KcpSession = session_ptr._M_ptr->_vptr_KcpSession;
  if ( !session_ptr._M_ptr->_vptr_KcpSession )
  {
LABEL_12:
    common::milog::MiLogStream::MiLogStream(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_server_mgr_base.cpp",
      "addSession",
      195);
    common::milog::MiLogStream::operator()(&v16, "session_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v13 = -1;
    goto LABEL_20;
  }
  v8 = (std::recursive_mutex *)(vptr_KcpSession + 3);
  v9 = *(_BYTE *)(((unsigned __int64)(vptr_KcpSession + 3) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(v8);
    goto LABEL_14;
  }
  *(_DWORD *)(v5 + 32) = *((_DWORD *)vptr_KcpSession + 6);
  p_session_map_mu = &this->session_map_mu_;
  if ( &_pthread_key_create )
  {
    v8 = &this->session_map_mu_;
    v15 = pthread_mutex_lock(&this->session_map_mu_._M_mutex);
    if ( v15 )
    {
LABEL_14:
      __asan_handle_no_return(v8);
      std::__throw_system_error(v15);
    }
  }
  v11 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>>>::_M_emplace_unique<unsigned int &,std::shared_ptr<common::minet::KcpSession> &>(
          &this->session_map_._M_t,
          (unsigned int *)(v5 + 32),
          (std::shared_ptr<common::minet::KcpSession> *)session_ptr._M_ptr,
          a3,
          a4);
  if ( v11.second )
  {
    common::milog::MiLogStream::MiLogStream(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/kcp_server_mgr_base.cpp",
      "addSession",
      207);
    common::milog::MiLogStream::operator()(&v16, "add new session id=%u", *(unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v13 = 0;
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_server_mgr_base.cpp",
      "addSession",
      203);
    common::milog::MiLogStream::operator()(&v16, "duplicate session, session_id=%u", *(unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v13 = -1;
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_session_map_mu->_M_mutex);
LABEL_20:
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 212: range 000000000CDFC7E4-000000000CDFC974
void __fastcall common::minet::KcpServerMgrBase::delSession(
        common::minet::KcpServerMgrBase *const this,
        uint32_t session_id)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  int v5; // [rsp+Ch] [rbp-9Ch]
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-98h] BYREF
  char v7[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v2 = v4;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 session_id:211";
  *(_QWORD *)(v2 + 16) = common::minet::KcpServerMgrBase::delSession;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = session_id;
  if ( &_pthread_key_create )
  {
    v5 = pthread_mutex_lock(&this->session_map_mu_._M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(&this->session_map_mu_);
      std::__throw_system_error(v5);
    }
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>>>::erase(
    &this->session_map_._M_t,
    (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::MiLogStream(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_server_mgr_base.cpp",
    "delSession",
    215);
  common::milog::MiLogStream::operator()(&v6, "del session id=%u", *(unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->session_map_mu_._M_mutex);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 219: range 000000000CDFB7E2-000000000CDFBC19
unsigned __int64 __fastcall common::minet::KcpServerMgrBase::findSession(
        unsigned __int64 p_M_parent,
        common::minet::KcpServerMgrBase *const this,
        uint32_t session_id)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r14
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession> >,std::_Select1st<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession> > > >::iterator v7; // rax
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // rax
  __int64 v9; // rax
  std::_Rb_tree_node_base::_Base_ptr *v10; // rdi
  char v11; // dl
  __int64 v12; // rax
  volatile signed __int32 *v13; // rdi
  char v14; // cl
  signed __int32 v15; // eax
  signed __int32 v16; // eax
  int v17; // ett
  bool v18; // dl
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  char v21; // dl
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  char v24; // cl
  signed __int32 v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  char v29; // cl
  char v30; // cl
  int v31; // [rsp+1Ch] [rbp-9Ch]
  char v32[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = p_M_parent;
  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_1(96LL);
    if ( v27 )
      v5 = v27;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 7 __count 48 4 14 session_id:218 64 16 15 session_wtr:226";
  *(_QWORD *)(v5 + 16) = common::minet::KcpServerMgrBase::findSession;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = session_id;
  if ( &_pthread_key_create )
  {
    v31 = pthread_mutex_lock(&this->session_map_mu_._M_mutex);
    if ( v31 )
    {
      __asan_handle_no_return(&this->session_map_mu_);
      std::__throw_system_error(v31);
    }
  }
  v7._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::weak_ptr<common::minet::KcpSession>>>>::find(
                 &this->session_map_._M_t,
                 (const unsigned int *)(v5 + 48))._M_node;
  if ( (std::_Rb_tree_header *)v7._M_node != &this->session_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    p_M_parent = (unsigned __int64)&v7._M_node[1]._M_parent;
    if ( !*(_BYTE *)(((unsigned __int64)&v7._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v5 + 64) = v7._M_node[1]._M_parent;
      p_M_left = &v7._M_node[1]._M_left;
      if ( !*(_BYTE *)(((p_M_parent + 8) >> 3) + 0x7FFF8000) )
      {
        v9 = *(_QWORD *)(p_M_parent + 8);
        *(_QWORD *)(v5 + 72) = v9;
        if ( !v9 )
          goto LABEL_12;
        v10 = (std::_Rb_tree_node_base::_Base_ptr *)(v9 + 12);
        if ( !&_pthread_key_create )
          goto LABEL_54;
        v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v10 & 7) + 3) < v11 || !v11 )
        {
          _InterlockedAdd((volatile signed __int32 *)v10, 1u);
          goto LABEL_12;
        }
LABEL_53:
        v9 = __asan_report_store4(v10);
LABEL_54:
        v13 = (volatile signed __int32 *)(v9 + 12);
        v29 = *(_BYTE *)(((unsigned __int64)(v9 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v9 + 12) & 7) + 3) >= v29 && v29 )
        {
          __asan_report_load4(v13);
          goto LABEL_58;
        }
        ++*(_DWORD *)(v9 + 12);
LABEL_12:
        v12 = *(_QWORD *)(v5 + 72);
        v13 = (volatile signed __int32 *)(v3 + 8);
        if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v3 + 8) = v12;
          if ( !v12 )
            goto LABEL_23;
          v13 = (volatile signed __int32 *)(v12 + 8);
          v14 = *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000);
          if ( (char)(((v12 + 8) & 7) + 3) < v14 || !v14 )
          {
            *(_DWORD *)(v5 + 32) = *(_DWORD *)(v12 + 8);
            while ( 1 )
            {
              v15 = *(_DWORD *)(v5 + 32);
              if ( !v15 )
                goto LABEL_60;
              v17 = *(_DWORD *)(v5 + 32);
              v16 = _InterlockedCompareExchange(v13, v15 + 1, v15);
              v18 = v17 == v16;
              if ( v17 != v16 )
                *(_DWORD *)(v5 + 32) = v16;
              if ( v18 )
                goto LABEL_21;
            }
          }
LABEL_59:
          __asan_report_load4(v13);
LABEL_60:
          v18 = 0;
LABEL_21:
          if ( !v18 )
            *(_QWORD *)(v3 + 8) = 0LL;
LABEL_23:
          v19 = *(_QWORD *)(v3 + 8);
          if ( !v19 )
            goto LABEL_28;
          v20 = v19 + 8;
          v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
          if ( (char)((v20 & 7) + 3) >= v21 && v21 )
          {
            __asan_report_load4(v20);
          }
          else if ( *(_DWORD *)v20 )
          {
            v19 = *(_QWORD *)(v5 + 64);
            goto LABEL_28;
          }
          v19 = 0LL;
LABEL_28:
          if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          {
            v23 = __asan_report_store8();
          }
          else
          {
            *(_QWORD *)v3 = v19;
            v22 = *(_QWORD *)(v5 + 72);
            if ( !v22 )
              goto LABEL_44;
            v23 = v22 + 12;
            if ( !&_pthread_key_create )
              goto LABEL_65;
            v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
            if ( (char)((v23 & 7) + 3) < v24 || !v24 )
            {
              v25 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 0xFFFFFFFF);
              goto LABEL_34;
            }
          }
          v22 = v23;
          __asan_report_store4(v23);
LABEL_65:
          v30 = *(_BYTE *)(((v22 + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((v22 + 12) & 7) + 3) >= v30 && v30 )
          {
            v22 += 12LL;
            __asan_report_load4(v22);
            goto LABEL_69;
          }
          v25 = *(_DWORD *)(v22 + 12);
          *(_DWORD *)(v22 + 12) = v25 - 1;
LABEL_34:
          if ( v25 != 1 )
            goto LABEL_44;
          if ( !*(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          {
            v26 = *(_QWORD *)v22 + 24LL;
            if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            {
              (*(void (**)(void))(*(_QWORD *)v22 + 24LL))();
              goto LABEL_44;
            }
LABEL_70:
            __asan_report_load8(v26);
LABEL_71:
            *(_QWORD *)v5 = 1172321806LL;
            *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
            *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
            return v3;
          }
LABEL_69:
          __asan_report_load8(v22);
          goto LABEL_70;
        }
LABEL_58:
        __asan_report_store8();
        goto LABEL_59;
      }
LABEL_52:
      v10 = p_M_left;
      __asan_report_load8(p_M_left);
      goto LABEL_53;
    }
LABEL_51:
    p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)__asan_report_load8(p_M_parent);
    goto LABEL_52;
  }
  if ( *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_50;
  }
  *(_QWORD *)p_M_parent = 0LL;
  p_M_parent += 8LL;
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
    goto LABEL_51;
  }
  *(_QWORD *)(v3 + 8) = 0LL;
LABEL_44:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->session_map_mu_._M_mutex);
  if ( v32 != (char *)v5 )
    goto LABEL_71;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  return v3;
};

// Line 231: range 000000000CDFB078-000000000CDFB513
uint32_t __fastcall common::minet::KcpServerMgrBase::genNewSessionId(common::minet::KcpServerMgrBase *const this)
{
  std::mutex *p_session_id_mu; // r12
  std::mutex *v3; // rdi
  int v4; // ebp
  char v5; // al
  uint32_t v6; // eax
  uint32_t next_session_id; // ebx

  p_session_id_mu = &this->session_id_mu_;
  if ( &_pthread_key_create )
  {
    v3 = &this->session_id_mu_;
    v4 = pthread_mutex_lock(&v3->_M_mutex);
    if ( v4 )
    {
      __asan_handle_no_return(v3);
      std::__throw_system_error(v4);
    }
  }
  v5 = *(_BYTE *)(((unsigned __int64)&this->next_session_id_ >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    __asan_report_load4(&this->next_session_id_);
    JUMPOUT(0xCDFB10BLL);
  }
  v6 = this->next_session_id_ + 1;
  this->next_session_id_ = v6;
  if ( v6 <= 0x3E8 )
    this->next_session_id_ = 1001;
  next_session_id = this->next_session_id_;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_session_id_mu->_M_mutex);
  return next_session_id;
};

// Line 242: range 000000000CDFE76E-000000000CDFF7AE
// local variable allocation has failed, the output may be wrong!
common::minet::KcpServerMgrBase *__fastcall common::minet::KcpServerMgrBase::createConnMgr(
        common::minet::KcpServerMgrBase *const this,
        common::minet::KcpServerMgrBasePtr kcp_server_mgr_ptr)
{
  std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *p_type; // r15
  common::minet::KcpServerMgrBase *v3; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v5; // rbp
  std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // r13
  _DWORD *v7; // r14
  char v8; // al
  char v9; // al
  unsigned __int64 v10; // rdx
  void **p_vptr_KcpServerMgrBase; // rdi
  char v12; // al
  std::forward_iterator_tag v13; // cl
  size_t v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rax
  std::forward_iterator_tag v19; // cl
  char v20; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // r12
  _Atomic_word *v22; // rdi
  char v23; // dl
  signed __int32 M_use_count; // eax
  void *v25; // r12
  void **v26; // rdi
  char v27; // al
  char v28; // al
  __int64 v29; // rdx
  int (**vptr_KcpServerMgrBase)(...); // rax
  int (**v31)(...); // rdi
  int (*v32)(...); // rdx
  char v33; // si
  volatile signed __int32 *v34; // rdi
  char v35; // dl
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  char v38; // cl
  signed __int32 v39; // eax
  char v41; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v43; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v45; // rdi
  char v46; // dl
  std::forward_iterator_tag v47; // cl
  struct _Unwind_Exception *v48; // rbx
  void *M_p; // rdi
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer M_start; // r12
  char v51; // al
  const char *v52; // rbp
  char v53; // al
  __int64 v54; // rdx
  char v55; // dl
  char v56; // cl
  unsigned __int64 v57; // rdx
  std::string::size_type *v58; // rdi
  char v59; // al
  unsigned __int64 v60; // rdx
  volatile signed __int32 *v61; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v62; // rax
  char v63; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v64; // r12
  _Atomic_word *v65; // rdi
  char v66; // dl
  signed __int32 v67; // eax
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer v68; // rdi
  int (**v69)(...); // rax
  common::minet::KcpServerMgrBase *v70; // rdi
  int (*v71)(...); // rdx
  char v72; // si
  volatile signed __int32 *v73; // rdi
  char v74; // dl
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rax
  char v77; // cl
  signed __int32 v78; // eax
  char v79; // dl
  volatile signed __int32 *v80; // rdi
  char v81; // dl
  signed __int32 v82; // eax
  unsigned __int64 v83; // rdi
  char v84; // dl
  struct _Unwind_Exception *v85; // rbx
  std::_Vector_base<std::shared_ptr<common::minet::KcpConnMgrBase>>::pointer v86; // rdi
  char v87; // dl
  char v88; // cl
  unsigned __int64 v89; // rdx
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *s; // [rsp+0h] [rbp-E8h]
  common::minet::KcpConnMgrBase *p_M_refcount; // [rsp+10h] [rbp-D8h]
  std::enable_shared_from_this<common::minet::KcpServerMgrBase> *v92; // [rsp+18h] [rbp-D0h]
  common::minet::KcpServerMgrBasePtr kcp_server_ptr; // [rsp+20h] [rbp-C8h] BYREF
  std::string type; // [rsp+30h] [rbp-B8h] BYREF
  char v95[152]; // [rsp+50h] [rbp-98h] BYREF

  v3 = this;
  M_pi = kcp_server_mgr_ptr._M_refcount._M_pi;
  v5 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v5 = v16;
  }
  M_ptr = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v5 + 96);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v5 + 16) = common::minet::KcpServerMgrBase::createConnMgr;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  v8 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v8 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v8 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_store4(this);
LABEL_24:
    __asan_report_store4(this);
    goto LABEL_25;
  }
  if ( !common::tools::perf::MemoryPerf::is_record )
    goto LABEL_169;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  this->_vptr_KcpServerMgrBase = 0LL;
  v92 = &this->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpConnMgrBase,common::tools::perf::allocator<common::minet::KcpConnMgrBase,common::minet::KcpConnMgrBase>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpConnMgrBase>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpConnMgrBase,common::tools::perf::allocator<common::minet::KcpConnMgrBase,common::minet::KcpConnMgrBase>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpConnMgrBase> *)(v5 + 48));
  p_type = *(std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 72);
  this = (common::minet::KcpServerMgrBase *const)&p_type->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  v9 = *(_BYTE *)(((unsigned __int64)&p_type->std::enable_shared_from_this<common::minet::KcpServerMgrBase> >> 3)
                + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_23;
  LODWORD(p_type->_M_weak_this._M_ptr) = 1;
  this = (common::minet::KcpServerMgrBase *const)((char *)&p_type->_M_weak_this._M_ptr + 4);
  v10 = *(unsigned __int8 *)((((unsigned __int64)&p_type->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)p_type + 12) & 7) + 3) >= (char)v10 && (_BYTE)v10 )
    goto LABEL_24;
  HIDWORD(p_type->_M_weak_this._M_ptr) = 1;
  if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    p_vptr_KcpServerMgrBase = (void **)&p_type->_vptr_KcpServerMgrBase;
    __asan_report_store8();
LABEL_26:
    __asan_report_load8(p_vptr_KcpServerMgrBase);
    goto LABEL_27;
  }
  p_type->_vptr_KcpServerMgrBase = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr_inplace<common::minet::KcpConnMgrBase,common::tools::perf::allocator<common::minet::KcpConnMgrBase,common::minet::KcpConnMgrBase>,(__gnu_cxx::_Lock_policy)2>
                                                 + 2);
  p_M_refcount = (common::minet::KcpConnMgrBase *)&p_type->_M_weak_this._M_refcount;
  if ( !common::tools::perf::MemoryPerf::is_record )
    goto LABEL_32;
  p_vptr_KcpServerMgrBase = &`typeinfo for'common::minet::KcpConnMgrBase + 1;
  if ( *(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::KcpConnMgrBase + 1) >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  s = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)*(&`typeinfo for'common::minet::KcpConnMgrBase + 1);
  p_vptr_KcpServerMgrBase = (void **)&s->_M_pi;
  v12 = *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000);
  v13.gap0[0] = (unsigned __int8)s & 7;
  if ( v12 > ((unsigned __int8)s & 7) || !v12 )
  {
    if ( LOBYTE(s->_M_pi) != 42 )
      goto LABEL_16;
    goto LABEL_28;
  }
LABEL_27:
  __asan_report_load1(p_vptr_KcpServerMgrBase);
LABEL_28:
  s = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)((char *)s + 1);
LABEL_16:
  type._M_dataplus._M_p = type._anon_0._M_local_buf;
  if ( s )
  {
    v14 = strlen((const char *)s);
    v13.gap0[0] = (char)s;
    v15 = (__int64)s + v14;
  }
  else
  {
    v15 = -1LL;
  }
  std::string::_M_construct<char const*>(&type, (const char *)s, (const char *)v15, v13);
  common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &type, 0x100180uLL);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
    operator delete(type._M_dataplus._M_p);
LABEL_32:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_use_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_41;
  }
  kcp_server_ptr._M_ptr = (std::__shared_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  p_M_use_count = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_M_use_count);
LABEL_42:
    v18 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_43;
  }
  v18 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  kcp_server_ptr._M_refcount._M_pi = v18;
  if ( !v18 )
  {
LABEL_39:
    common::minet::KcpConnMgrBase::KcpConnMgrBase(
      p_M_refcount,
      (common::minet::KcpServerMgrBasePtr)__PAIR128__(v10, &kcp_server_ptr));
    goto LABEL_47;
  }
  p_M_use_count = &v18->_M_use_count;
  if ( &_pthread_key_create )
  {
    v10 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v10 || !(_BYTE)v10 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_39;
    }
    goto LABEL_42;
  }
LABEL_43:
  v20 = *(_BYTE *)(((unsigned __int64)&v18->_M_use_count >> 3) + 0x7FFF8000);
  v10 = (((_BYTE)v18 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v18 + 8) & 7) + 3) < v20 || !v20 )
  {
    ++v18->_M_use_count;
    goto LABEL_39;
  }
  __asan_report_load4(&v18->_M_use_count);
LABEL_47:
  v21 = kcp_server_ptr._M_refcount._M_pi;
  if ( !kcp_server_ptr._M_refcount._M_pi )
    goto LABEL_53;
  v22 = &kcp_server_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v22 & 7) + 3) < v23 || !v23 )
    {
      M_use_count = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
      goto LABEL_52;
    }
    __asan_report_store4(v22);
  }
  v41 = *(_BYTE *)(((unsigned __int64)&v21->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v21 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(&v21->_M_use_count);
    goto LABEL_100;
  }
  M_use_count = v21->_M_use_count;
  v21->_M_use_count = M_use_count - 1;
LABEL_52:
  if ( M_use_count != 1 )
    goto LABEL_53;
LABEL_100:
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v21;
    __asan_report_load8(v21);
    goto LABEL_111;
  }
  p_M_weak_count = (volatile signed __int32 *)(v21->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_112;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v21->_vptr__Sp_counted_base + 2))(v21);
  p_M_weak_count = &v21->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_113;
  v43 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v43 || !v43 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_106;
  }
LABEL_112:
  __asan_report_store4(p_M_weak_count);
LABEL_113:
  v46 = *(_BYTE *)(((unsigned __int64)&v21->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v21 + 12) & 7) + 3) >= v46 && v46 )
  {
    __asan_report_load4(&v21->_M_weak_count);
LABEL_117:
    v45 = (unsigned __int64)v21;
    __asan_report_load8(v21);
    goto LABEL_118;
  }
  M_weak_count = v21->_M_weak_count;
  v21->_M_weak_count = M_weak_count - 1;
LABEL_106:
  if ( M_weak_count != 1 )
    goto LABEL_53;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    goto LABEL_117;
  v45 = (unsigned __int64)(v21->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_load8(v45);
    goto LABEL_119;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v21->_vptr__Sp_counted_base + 3))(v21);
LABEL_53:
  *(_QWORD *)(v5 + 72) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    __asan_report_store8();
LABEL_120:
    v48 = (struct _Unwind_Exception *)__asan_report_store8();
    M_p = type._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
      operator delete(type._M_dataplus._M_p);
    while ( 1 )
    {
LABEL_122:
      M_start = M_ptr[-1].conn_mgr_vec_._M_impl._M_start;
      if ( !M_start )
        goto LABEL_146;
      v51 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
      if ( v51 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v51 )
        break;
      v48 = (struct _Unwind_Exception *)__asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
      M_p = kcp_server_ptr._M_refcount._M_pi;
      if ( kcp_server_ptr._M_refcount._M_pi )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(kcp_server_ptr._M_refcount._M_pi);
    }
    if ( common::tools::perf::MemoryPerf::is_record )
    {
      if ( *(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::KcpConnMgrBase + 1) >> 3) + 0x7FFF8000) )
        __asan_report_load8(&`typeinfo for'common::minet::KcpConnMgrBase + 1);
      v52 = (const char *)*(&`typeinfo for'common::minet::KcpConnMgrBase + 1);
      v53 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
      if ( v53 <= (*(_BYTE *)(&`typeinfo for'common::minet::KcpConnMgrBase + 1) & 7) && v53 )
        __asan_report_load1(*(&`typeinfo for'common::minet::KcpConnMgrBase + 1));
      if ( *v52 == 42 )
        ++v52;
      type._M_dataplus._M_p = type._anon_0._M_local_buf;
      if ( v52 )
        v54 = (__int64)&v52[strlen(v52)];
      else
        v54 = -1LL;
      std::string::_M_construct<char const*>(&type, v52, (const char *)v54, v47);
      common::tools::perf::MemoryPerfRecorder::deallocate(&common::tools::perf::MemoryPerf::recorder, &type);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
        operator delete(type._M_dataplus._M_p);
    }
    M_p = M_start;
    free(M_start);
LABEL_146:
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v48);
  }
  v3->_M_weak_this._M_ptr = p_type;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_120;
  v3->_vptr_KcpServerMgrBase = (int (**)(...))p_M_refcount;
  v25 = *(void **)(v5 + 72);
  if ( !v25 )
    goto LABEL_68;
  v26 = (void **)&common::tools::perf::MemoryPerf::is_record;
  v27 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v27 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v27 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
    goto LABEL_128;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    v26 = &`typeinfo for'common::minet::KcpConnMgrBase + 1;
    if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::KcpConnMgrBase + 1) >> 3) + 0x7FFF8000) )
    {
      M_ptr = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)*(&`typeinfo for'common::minet::KcpConnMgrBase + 1);
      v26 = (void **)&M_ptr->_vptr_KcpServerMgrBase;
      v28 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( v28 > (*(_BYTE *)(&`typeinfo for'common::minet::KcpConnMgrBase + 1) & 7) || !v28 )
      {
        if ( LOBYTE(M_ptr->_vptr_KcpServerMgrBase) != 42 )
          goto LABEL_63;
        goto LABEL_130;
      }
LABEL_129:
      __asan_report_load1(v26);
LABEL_130:
      M_ptr = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)M_ptr + 1);
LABEL_63:
      type._M_dataplus._M_p = type._anon_0._M_local_buf;
      if ( M_ptr )
        v29 = (__int64)M_ptr + strlen((const char *)M_ptr);
      else
        v29 = -1LL;
      p_type = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)&type;
      std::string::_M_construct<char const*>(&type, (const char *)M_ptr, (const char *)v29, v19);
      common::tools::perf::MemoryPerfRecorder::deallocate(&common::tools::perf::MemoryPerf::recorder, &type);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
        operator delete(type._M_dataplus._M_p);
      goto LABEL_67;
    }
LABEL_128:
    __asan_report_load8(v26);
    goto LABEL_129;
  }
LABEL_67:
  free(v25);
LABEL_68:
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    M_p = v3;
    v48 = (struct _Unwind_Exception *)__asan_report_load8(v3);
    goto LABEL_122;
  }
  vptr_KcpServerMgrBase = v3->_vptr_KcpServerMgrBase;
  if ( !v3->_vptr_KcpServerMgrBase || vptr_KcpServerMgrBase == (int (**)(...))-8LL )
    goto LABEL_92;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(vptr_KcpServerMgrBase + 1);
  v31 = vptr_KcpServerMgrBase + 2;
  if ( *(_BYTE *)(((unsigned __int64)(vptr_KcpServerMgrBase + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v31);
    goto LABEL_149;
  }
  v32 = vptr_KcpServerMgrBase[2];
  if ( !v32 )
    goto LABEL_76;
  v31 = (int (**)(...))((char *)v32 + 8);
  v33 = *(_BYTE *)((((unsigned __int64)v32 + 8) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v32 + 8) & 7) + 3) >= v33 && v33 )
  {
LABEL_149:
    __asan_report_load4(v31);
    goto LABEL_150;
  }
  if ( *((_DWORD *)v32 + 2) )
    goto LABEL_92;
LABEL_76:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_150:
    __asan_report_store8();
    goto LABEL_151;
  }
  vptr_KcpServerMgrBase[1] = (int (*)(...))vptr_KcpServerMgrBase;
  p_type = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(vptr_KcpServerMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    v34 = (volatile signed __int32 *)v92;
    __asan_report_load8(v92);
    goto LABEL_152;
  }
  M_ptr = v3->_M_weak_this._M_ptr;
  if ( !M_ptr )
    goto LABEL_83;
  v34 = (volatile signed __int32 *)&M_ptr->_M_weak_this._M_ptr + 1;
  if ( !&_pthread_key_create )
    goto LABEL_153;
  v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v34 & 7) + 3) < v35 || !v35 )
  {
    _InterlockedAdd(v34, 1u);
    goto LABEL_83;
  }
LABEL_152:
  __asan_report_store4(v34);
LABEL_153:
  v55 = *(_BYTE *)((((unsigned __int64)&M_ptr->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_ptr + 12) & 7) + 3) >= v55 && v55 )
  {
    __asan_report_load4((char *)&M_ptr->_M_weak_this._M_ptr + 4);
    goto LABEL_157;
  }
  ++HIDWORD(M_ptr->_M_weak_this._M_ptr);
LABEL_83:
  if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
  {
LABEL_157:
    v37 = __asan_report_load8(p_type);
    goto LABEL_158;
  }
  v36 = *(_QWORD *)&M_pi->_M_use_count;
  if ( !v36 )
    goto LABEL_90;
  v37 = v36 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_159;
  v38 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
  if ( (char)((v37 & 7) + 3) < v38 || !v38 )
  {
    v39 = _InterlockedExchangeAdd((volatile signed __int32 *)v37, 0xFFFFFFFF);
    goto LABEL_89;
  }
LABEL_158:
  v36 = v37;
  __asan_report_store4(v37);
LABEL_159:
  v56 = *(_BYTE *)(((v36 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v36 + 12) & 7) + 3) >= v56 && v56 )
  {
    v36 += 12LL;
    __asan_report_load4(v36);
    goto LABEL_163;
  }
  v39 = *(_DWORD *)(v36 + 12);
  *(_DWORD *)(v36 + 12) = v39 - 1;
LABEL_89:
  if ( v39 != 1 )
    goto LABEL_90;
LABEL_163:
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v36);
  }
  else
  {
    v57 = *(_QWORD *)v36 + 24LL;
    if ( !*(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
    {
      (*(void (**)(void))(*(_QWORD *)v36 + 24LL))();
LABEL_90:
      if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)&M_pi->_M_use_count = M_ptr;
        goto LABEL_92;
      }
      goto LABEL_168;
    }
  }
  __asan_report_load8(v57);
LABEL_168:
  __asan_report_store8();
LABEL_169:
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    v58 = (std::string::size_type *)v3;
    __asan_report_store8();
LABEL_184:
    __asan_report_store4(v58);
LABEL_185:
    __asan_report_store4(v58);
    goto LABEL_186;
  }
  v3->_vptr_KcpServerMgrBase = 0LL;
  p_M_refcount = (common::minet::KcpConnMgrBase *)&v3->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpConnMgrBase,std::allocator<common::minet::KcpConnMgrBase>,(__gnu_cxx::_Lock_policy)2>>>(
    (std::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpConnMgrBase,std::allocator<common::minet::KcpConnMgrBase>,(__gnu_cxx::_Lock_policy)2> > *)&M_ptr[-1].session_id_mu_._M_mutex.__align
  + 24);
  p_type = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_ptr[-1].conn_mgr_vec_._M_impl._M_start;
  v58 = (std::string::size_type *)&p_type->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  v59 = *(_BYTE *)(((unsigned __int64)&p_type->std::enable_shared_from_this<common::minet::KcpServerMgrBase> >> 3)
                 + 0x7FFF8000);
  if ( v59 && v59 <= 3 )
    goto LABEL_184;
  LODWORD(p_type->_M_weak_this._M_ptr) = 1;
  v58 = (std::string::size_type *)((char *)&p_type->_M_weak_this._M_ptr + 4);
  v60 = *(unsigned __int8 *)((((unsigned __int64)&p_type->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)p_type + 12) & 7) + 3) >= (char)v60 && (_BYTE)v60 )
    goto LABEL_185;
  HIDWORD(p_type->_M_weak_this._M_ptr) = 1;
  if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
  {
LABEL_186:
    __asan_report_store8();
    goto LABEL_187;
  }
  p_type->_vptr_KcpServerMgrBase = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr_inplace<common::minet::KcpConnMgrBase,std::allocator<common::minet::KcpConnMgrBase>,(__gnu_cxx::_Lock_policy)2>
                                                 + 2);
  s = &p_type->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_187:
    v61 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_188;
  }
  kcp_server_ptr._M_ptr = (std::__shared_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  v61 = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_188:
    __asan_report_load8(v61);
LABEL_189:
    v62 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v61);
    goto LABEL_190;
  }
  v62 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  kcp_server_ptr._M_refcount._M_pi = v62;
  if ( !v62 )
  {
LABEL_182:
    common::minet::KcpConnMgrBase::KcpConnMgrBase(
      (common::minet::KcpConnMgrBase *const)s,
      (common::minet::KcpServerMgrBasePtr)__PAIR128__(v60, &kcp_server_ptr));
    goto LABEL_194;
  }
  v61 = &v62->_M_use_count;
  if ( &_pthread_key_create )
  {
    v60 = *(unsigned __int8 *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v61 & 7) + 3) < (char)v60 || !(_BYTE)v60 )
    {
      _InterlockedAdd(v61, 1u);
      goto LABEL_182;
    }
    goto LABEL_189;
  }
LABEL_190:
  v63 = *(_BYTE *)(((unsigned __int64)&v62->_M_use_count >> 3) + 0x7FFF8000);
  v60 = (((_BYTE)v62 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v62 + 8) & 7) + 3) < v63 || !v63 )
  {
    ++v62->_M_use_count;
    goto LABEL_182;
  }
  __asan_report_load4(&v62->_M_use_count);
LABEL_194:
  v64 = kcp_server_ptr._M_refcount._M_pi;
  if ( !kcp_server_ptr._M_refcount._M_pi )
    goto LABEL_200;
  v65 = &kcp_server_ptr._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v66 = *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v65 & 7) + 3) < v66 || !v66 )
    {
      v67 = _InterlockedExchangeAdd(v65, 0xFFFFFFFF);
      goto LABEL_199;
    }
    __asan_report_store4(v65);
  }
  v79 = *(_BYTE *)(((unsigned __int64)&v64->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v64 + 8) & 7) + 3) >= v79 && v79 )
  {
    __asan_report_load4(&v64->_M_use_count);
    goto LABEL_233;
  }
  v67 = v64->_M_use_count;
  v64->_M_use_count = v67 - 1;
LABEL_199:
  if ( v67 != 1 )
    goto LABEL_200;
LABEL_233:
  if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
  {
    v80 = (volatile signed __int32 *)v64;
    __asan_report_load8(v64);
    goto LABEL_244;
  }
  v80 = (volatile signed __int32 *)(v64->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
  {
LABEL_244:
    __asan_report_load8(v80);
    goto LABEL_245;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v64->_vptr__Sp_counted_base + 2))(v64);
  v80 = &v64->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_246;
  v81 = *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v80 & 7) + 3) < v81 || !v81 )
  {
    v82 = _InterlockedExchangeAdd(v80, 0xFFFFFFFF);
    goto LABEL_239;
  }
LABEL_245:
  __asan_report_store4(v80);
LABEL_246:
  v84 = *(_BYTE *)(((unsigned __int64)&v64->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v64 + 12) & 7) + 3) >= v84 && v84 )
  {
    __asan_report_load4(&v64->_M_weak_count);
LABEL_250:
    v83 = (unsigned __int64)v64;
    __asan_report_load8(v64);
    goto LABEL_251;
  }
  v82 = v64->_M_weak_count;
  v64->_M_weak_count = v82 - 1;
LABEL_239:
  if ( v82 != 1 )
    goto LABEL_200;
  if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
    goto LABEL_250;
  v83 = (unsigned __int64)(v64->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v83 >> 3) + 0x7FFF8000) )
  {
LABEL_251:
    __asan_report_load8(v83);
    goto LABEL_252;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v64->_vptr__Sp_counted_base + 3))(v64);
LABEL_200:
  M_ptr[-1].conn_mgr_vec_._M_impl._M_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_252:
    __asan_report_store8();
LABEL_253:
    v85 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( kcp_server_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(kcp_server_ptr._M_refcount._M_pi);
    v86 = M_ptr[-1].conn_mgr_vec_._M_impl._M_start;
    if ( v86 )
      operator delete(v86);
    __asan_handle_no_return(v86);
    _Unwind_Resume(v85);
  }
  v3->_M_weak_this._M_ptr = p_type;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_253;
  v3->_vptr_KcpServerMgrBase = (int (**)(...))s;
  v68 = M_ptr[-1].conn_mgr_vec_._M_impl._M_start;
  if ( v68 )
    operator delete(v68);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    v70 = v3;
    __asan_report_load8(v3);
    goto LABEL_259;
  }
  v69 = v3->_vptr_KcpServerMgrBase;
  if ( v3->_vptr_KcpServerMgrBase && v69 != (int (**)(...))-8LL )
  {
    v64 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v69 + 1);
    v70 = (common::minet::KcpServerMgrBase *)(v69 + 2);
    if ( !*(_BYTE *)(((unsigned __int64)(v69 + 2) >> 3) + 0x7FFF8000) )
    {
      v71 = v69[2];
      if ( !v71 )
        goto LABEL_212;
      v70 = (common::minet::KcpServerMgrBase *)((char *)v71 + 8);
      v72 = *(_BYTE *)((((unsigned __int64)v71 + 8) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v71 + 8) & 7) + 3) < v72 || !v72 )
      {
        if ( *((_DWORD *)v71 + 2) )
          goto LABEL_92;
LABEL_212:
        if ( !*(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          v69[1] = (int (*)(...))v69;
          p_type = (std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v69 + 2);
          if ( !*(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
          {
            M_ptr = v3->_M_weak_this._M_ptr;
            if ( !M_ptr )
              goto LABEL_219;
            v73 = (volatile signed __int32 *)&M_ptr->_M_weak_this._M_ptr + 1;
            if ( !&_pthread_key_create )
              goto LABEL_264;
            v74 = *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)v73 & 7) + 3) < v74 || !v74 )
            {
              _InterlockedAdd(v73, 1u);
              goto LABEL_219;
            }
LABEL_263:
            __asan_report_store4(v73);
LABEL_264:
            v87 = *(_BYTE *)((((unsigned __int64)&M_ptr->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)M_ptr + 12) & 7) + 3) >= v87 && v87 )
            {
              __asan_report_load4((char *)&M_ptr->_M_weak_this._M_ptr + 4);
              goto LABEL_268;
            }
            ++HIDWORD(M_ptr->_M_weak_this._M_ptr);
LABEL_219:
            if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
            {
              v75 = *(_QWORD *)&v64->_M_use_count;
              if ( !v75 )
                goto LABEL_226;
              v76 = v75 + 12;
              if ( !&_pthread_key_create )
                goto LABEL_270;
              v77 = *(_BYTE *)((v76 >> 3) + 0x7FFF8000);
              if ( (char)((v76 & 7) + 3) < v77 || !v77 )
              {
                v78 = _InterlockedExchangeAdd((volatile signed __int32 *)v76, 0xFFFFFFFF);
                goto LABEL_225;
              }
LABEL_269:
              v75 = v76;
              __asan_report_store4(v76);
LABEL_270:
              v88 = *(_BYTE *)(((v75 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v75 + 12) & 7) + 3) >= v88 && v88 )
              {
                v75 += 12LL;
                __asan_report_load4(v75);
                goto LABEL_274;
              }
              v78 = *(_DWORD *)(v75 + 12);
              *(_DWORD *)(v75 + 12) = v78 - 1;
LABEL_225:
              if ( v78 != 1 )
                goto LABEL_226;
LABEL_274:
              if ( *(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v75);
              }
              else
              {
                v89 = *(_QWORD *)v75 + 24LL;
                if ( !*(_BYTE *)((v89 >> 3) + 0x7FFF8000) )
                {
                  (*(void (**)(void))(*(_QWORD *)v75 + 24LL))();
LABEL_226:
                  if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)&v64->_M_use_count = M_ptr;
                    goto LABEL_92;
                  }
LABEL_279:
                  __asan_report_store8();
                  goto LABEL_280;
                }
              }
              __asan_report_load8(v89);
              goto LABEL_279;
            }
LABEL_268:
            v76 = __asan_report_load8(p_type);
            goto LABEL_269;
          }
LABEL_262:
          v73 = (volatile signed __int32 *)p_M_refcount;
          __asan_report_load8(p_M_refcount);
          goto LABEL_263;
        }
LABEL_261:
        __asan_report_store8();
        goto LABEL_262;
      }
LABEL_260:
      __asan_report_load4(v70);
      goto LABEL_261;
    }
LABEL_259:
    __asan_report_load8(v70);
    goto LABEL_260;
  }
LABEL_92:
  if ( v95 != (char *)v5 )
  {
LABEL_280:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
    return v3;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  return v3;
};

// Line 257: range 000000000CDFF7B3-000000000CDFF7CA
void __cdecl GLOBAL__sub_I_kcp_server_mgr_base_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
