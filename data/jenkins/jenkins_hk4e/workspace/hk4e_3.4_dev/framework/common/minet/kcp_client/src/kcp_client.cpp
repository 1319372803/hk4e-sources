// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_client/src/kcp_client.cpp

// Line 17: range 0000000000AB0454-0000000000AB0B8A
void __fastcall common::minet::kcp_client::kcp_client(
        common::minet::kcp_client *const this,
        const common::minet::KcpClientInitParams *param)
{
  _DWORD *p_send_queue; // rbp
  common::minet::kcp_client *v3; // rbx
  char v4; // dl
  char v5; // al
  char v6; // dl
  const common::minet::KcpClientInitParams *p_connection_timeout_time; // rdi
  char v8; // al
  char v9; // al
  char *v10; // rdi
  char v11; // al
  KcpSocket *p_udp_socket; // rdi
  char v13; // al
  char v14; // al
  char v15; // al

  v3 = this;
  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v4 && v4 )
  {
    __asan_report_store4(this);
    goto LABEL_30;
  }
  this->state_._M_i = KCP_CLIENT_STATE_NONE;
  this = (common::minet::kcp_client *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v3->connect_start_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
LABEL_31:
    __asan_report_store4(this);
LABEL_32:
    __asan_report_store4(this);
    goto LABEL_33;
  }
  v3->connect_start_time_ = 0LL;
  this = (common::minet::kcp_client *const)&v3->connect_token_;
  v5 = *(_BYTE *)(((unsigned __int64)&v3->connect_token_ >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_31;
  v3->connect_token_ = 0;
  this = (common::minet::kcp_client *const)&v3->connect_data_;
  v6 = *(_BYTE *)(((unsigned __int64)&v3->connect_data_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 20) & 7) + 3) >= v6 && v6 )
    goto LABEL_32;
  v3->connect_data_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v3->last_send_connect_msg_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  v3->last_send_connect_msg_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    p_connection_timeout_time = param;
    __asan_report_load8(param);
    goto LABEL_35;
  }
  p_connection_timeout_time = (const common::minet::KcpClientInitParams *)&v3->connection_timeout_time_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->connection_timeout_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  v3->connection_timeout_time_ = param->connection_timeout_time;
  p_connection_timeout_time = (const common::minet::KcpClientInitParams *)&v3->last_recv_msg_time_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->last_recv_msg_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    goto LABEL_37;
  }
  v3->last_recv_msg_time_ = 0LL;
  p_connection_timeout_time = (const common::minet::KcpClientInitParams *)&v3->last_server_ip_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->last_server_ip_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  v3->last_server_ip_._M_dataplus._M_p = v3->last_server_ip_._anon_0._M_local_buf;
  p_connection_timeout_time = (const common::minet::KcpClientInitParams *)&v3->last_server_ip_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->last_server_ip_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
LABEL_39:
    __asan_report_store1(p_connection_timeout_time);
LABEL_40:
    __asan_report_store4(p_connection_timeout_time);
    goto LABEL_41;
  }
  v3->last_server_ip_._M_string_length = 0LL;
  p_connection_timeout_time = (const common::minet::KcpClientInitParams *)&v3->last_server_ip_._anon_0;
  v8 = *(_BYTE *)(((unsigned __int64)&v3->last_server_ip_._anon_0 >> 3) + 0x7FFF8000);
  if ( v8 <= (((unsigned __int8)v3 + 64) & 7) && v8 )
    goto LABEL_39;
  v3->last_server_ip_._anon_0._M_local_buf[0] = 0;
  p_connection_timeout_time = (const common::minet::KcpClientInitParams *)&v3->last_server_port_;
  v9 = *(_BYTE *)(((unsigned __int64)&v3->last_server_port_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_40;
  v3->last_server_port_ = 0;
  p_send_queue = &v3->send_queue_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    goto LABEL_42;
  }
  v3->send_queue_.queue_.c._M_impl._M_map = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  v3->send_queue_.queue_.c._M_impl._M_map_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8();
    goto LABEL_44;
  }
  v3->send_queue_.queue_.c._M_impl._M_start._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  v3->send_queue_.queue_.c._M_impl._M_start._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  v3->send_queue_.queue_.c._M_impl._M_start._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  v3->send_queue_.queue_.c._M_impl._M_start._M_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  v3->send_queue_.queue_.c._M_impl._M_finish._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  v3->send_queue_.queue_.c._M_impl._M_finish._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
    goto LABEL_50;
  }
  v3->send_queue_.queue_.c._M_impl._M_finish._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
    goto LABEL_51;
  }
  v3->send_queue_.queue_.c._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<common::minet::KcpPacket *>::_M_initialize_map(&v3->send_queue_.queue_.c, 0LL);
LABEL_51:
  v10 = (char *)(p_send_queue + 20);
  v11 = *(_BYTE *)(((unsigned __int64)(p_send_queue + 20) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
  {
    __asan_report_store4(v10);
LABEL_67:
    __asan_report_store_n(v10, 40LL);
    goto LABEL_68;
  }
  p_send_queue[20] = 0;
  v10 = (char *)(p_send_queue + 22);
  if ( *(_BYTE *)((((unsigned __int64)p_send_queue + 127) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)p_send_queue + 127) >> 3) + 0x7FFF8000) <= (((unsigned __int8)p_send_queue + 127) & 7)
    || *(char *)(((unsigned __int64)(p_send_queue + 22) >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_67;
  }
  *((_QWORD *)p_send_queue + 11) = 0LL;
  *((_QWORD *)p_send_queue + 12) = 0LL;
  *((_QWORD *)p_send_queue + 13) = 0LL;
  *((_QWORD *)p_send_queue + 14) = 0LL;
  *((_QWORD *)p_send_queue + 15) = 0LL;
  p_send_queue = &v3->recv_queue_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
    goto LABEL_69;
  }
  v3->recv_queue_.queue_.c._M_impl._M_map = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  v3->recv_queue_.queue_.c._M_impl._M_map_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8();
    goto LABEL_71;
  }
  v3->recv_queue_.queue_.c._M_impl._M_start._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  v3->recv_queue_.queue_.c._M_impl._M_start._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  v3->recv_queue_.queue_.c._M_impl._M_start._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  v3->recv_queue_.queue_.c._M_impl._M_start._M_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_store8();
    goto LABEL_75;
  }
  v3->recv_queue_.queue_.c._M_impl._M_finish._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8();
    goto LABEL_76;
  }
  v3->recv_queue_.queue_.c._M_impl._M_finish._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_store8();
    goto LABEL_77;
  }
  v3->recv_queue_.queue_.c._M_impl._M_finish._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->recv_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_store8();
    goto LABEL_78;
  }
  v3->recv_queue_.queue_.c._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<common::minet::KcpEvent>::_M_initialize_map(&v3->recv_queue_.queue_.c, 0LL);
LABEL_78:
  p_udp_socket = p_send_queue + 20;
  v13 = *(_BYTE *)(((unsigned __int64)(p_send_queue + 20) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(p_udp_socket);
LABEL_89:
    __asan_report_store_n(p_udp_socket, 40LL);
LABEL_90:
    __asan_report_store4(p_udp_socket);
LABEL_91:
    __asan_report_store4(p_udp_socket);
    goto LABEL_92;
  }
  p_send_queue[20] = 0;
  p_udp_socket = p_send_queue + 22;
  if ( *(_BYTE *)((((unsigned __int64)p_send_queue + 127) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)p_send_queue + 127) >> 3) + 0x7FFF8000) <= (((unsigned __int8)p_send_queue + 127) & 7)
    || *(char *)(((unsigned __int64)(p_send_queue + 22) >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_89;
  }
  *((_QWORD *)p_send_queue + 11) = 0LL;
  *((_QWORD *)p_send_queue + 12) = 0LL;
  *((_QWORD *)p_send_queue + 13) = 0LL;
  *((_QWORD *)p_send_queue + 14) = 0LL;
  *((_QWORD *)p_send_queue + 15) = 0LL;
  p_udp_socket = &v3->udp_socket_;
  v14 = *(_BYTE *)(((unsigned __int64)&v3->udp_socket_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_90;
  v3->udp_socket_ = -1;
  p_udp_socket = (KcpSocket *)((char *)&loc_6001E0 + (_QWORD)v3);
  v15 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)v3) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_91;
  *(_DWORD *)((char *)&loc_6001E0 + (_QWORD)v3) = 0;
  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)v3) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  *(_QWORD *)((char *)&loc_6001E8 + (_QWORD)v3) = 0LL;
  kcp_socket_initialize();
LABEL_93:
  memset(&v3->servaddr_, 0, sizeof(v3->servaddr_));
  common::minet::kcp_client::start(v3);
};

// Line 36: range 0000000000AAFD3E-0000000000AB0451
void __fastcall common::minet::kcp_client::~kcp_client(common::minet::kcp_client *const this)
{
  std::string *p_last_server_ip; // rdi
  common::minet::kcp_client *M_p; // rdi

  common::minet::kcp_client::stop(this);
  common::minet::kcp_client::clean(this);
  kcp_socket_deinitialize();
  std::_Deque_base<common::minet::KcpEvent>::~_Deque_base(&this->recv_queue_.queue_.c);
  std::_Deque_base<common::minet::KcpPacket *>::~_Deque_base(&this->send_queue_.queue_.c);
  p_last_server_ip = &this->last_server_ip_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_server_ip >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_last_server_ip);
    common::minet::kcp_client::do_send_msg_in_queue((common::minet::kcp_client *const)p_last_server_ip);
  }
  else
  {
    M_p = (common::minet::kcp_client *)this->last_server_ip_._M_dataplus._M_p;
    if ( M_p != (common::minet::kcp_client *)&this->last_server_ip_._anon_0 )
      operator delete(M_p);
  }
};

// Line 44: range 0000000000AAF8F0-0000000000AAFD3B
void __fastcall common::minet::kcp_client::clean(common::minet::kcp_client *const this)
{
  unsigned __int64 M_last; // rsi
  common::minet::KcpPacket *i; // r12
  __int64 v4; // rax
  char v5; // r15
  int v6; // r15d
  void *p_M_finish; // rdi
  std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Elt_pointer M_cur; // rax
  std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Elt_pointer v9; // rax
  std::_Deque_iterator<common::minet::KcpEvent,common::minet::KcpEvent&,common::minet::KcpEvent*>::_Elt_pointer v10; // r8
  std::_Deque_base<common::minet::KcpEvent>::iterator *p_M_last; // rdi
  char v12; // bl
  common::minet::KcpPacket *v13; // rdi
  int v14; // r12d
  std::_Deque_base<common::minet::KcpEvent>::iterator *p_M_start; // rdi
  const __m128i *v16; // rax
  char *v17; // rdi
  ikcpcb *v18; // rdi
  char v19; // al
  unsigned __int64 v20; // [rsp+8h] [rbp-B0h]
  _DWORD *v21; // [rsp+10h] [rbp-A8h]
  char v22[152]; // [rsp+20h] [rbp-98h] BYREF

  v20 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v20 = v4;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "1 32 24 6 evt:50";
  M_last = (unsigned __int64)common::minet::kcp_client::clean;
  *(_QWORD *)(v20 + 16) = common::minet::kcp_client::clean;
  v21 = (_DWORD *)(v20 >> 3);
  v21[536862720] = -235802127;
  v21[536862721] = -218103808;
  v21[536862722] = -202116109;
  for ( i = 0LL; ; common::minet::kcp_client::kcp_packet_destroy(i) )
  {
    if ( &_pthread_key_create )
    {
      v6 = pthread_mutex_lock(&this->send_queue_.queue_mu_._M_mutex);
      if ( v6 )
      {
        __asan_handle_no_return(&this->send_queue_.queue_mu_);
        std::__throw_system_error(v6);
      }
    }
    p_M_finish = &this->send_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_7:
      __asan_report_load8(p_M_finish);
LABEL_8:
      __asan_report_load8(p_M_finish);
LABEL_9:
      __asan_report_load8(p_M_finish);
LABEL_10:
      __asan_report_load8(p_M_finish);
LABEL_11:
      std::deque<common::minet::KcpPacket *>::_M_pop_front_aux(&this->send_queue_.queue_.c);
      v5 = 1;
      goto LABEL_13;
    }
    p_M_finish = &this->send_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    M_cur = this->send_queue_.queue_.c._M_impl._M_start._M_cur;
    if ( this->send_queue_.queue_.c._M_impl._M_finish._M_cur == M_cur )
    {
      v5 = 0;
    }
    else
    {
      p_M_finish = this->send_queue_.queue_.c._M_impl._M_start._M_cur;
      if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
        goto LABEL_8;
      i = *M_cur;
      p_M_finish = &this->send_queue_.queue_.c._M_impl._M_start;
      if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
        goto LABEL_9;
      v9 = this->send_queue_.queue_.c._M_impl._M_start._M_cur;
      p_M_finish = &this->send_queue_.queue_.c._M_impl._M_start._M_last;
      if ( *(_BYTE *)(((unsigned __int64)&this->send_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      M_last = (unsigned __int64)this->send_queue_.queue_.c._M_impl._M_start._M_last;
      if ( v9 == (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Elt_pointer)(M_last - 8) )
        goto LABEL_11;
      this->send_queue_.queue_.c._M_impl._M_start._M_cur = v9 + 1;
      v5 = 1;
    }
LABEL_13:
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->send_queue_.queue_mu_._M_mutex);
    if ( !v5 )
      break;
  }
  while ( 1 )
  {
    if ( &_pthread_key_create )
    {
      v14 = pthread_mutex_lock(&this->recv_queue_.queue_mu_._M_mutex);
      if ( v14 )
      {
        __asan_handle_no_return(&this->recv_queue_.queue_mu_);
        std::__throw_system_error(v14);
      }
    }
    p_M_start = &this->recv_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_start);
LABEL_29:
      __asan_report_load8(p_M_start);
LABEL_30:
      M_last = 24LL;
      p_M_last = (std::_Deque_base<common::minet::KcpEvent>::iterator *)v10;
      __asan_report_load_n(v10, 24LL);
LABEL_31:
      __asan_report_load8(p_M_last);
LABEL_32:
      __asan_report_load8(p_M_last);
LABEL_33:
      std::deque<common::minet::KcpEvent>::_M_pop_front_aux(&this->recv_queue_.queue_.c);
      v12 = 1;
      goto LABEL_35;
    }
    p_M_start = &this->recv_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    v16 = (const __m128i *)this->recv_queue_.queue_.c._M_impl._M_start._M_cur;
    if ( (const __m128i *)this->recv_queue_.queue_.c._M_impl._M_finish._M_cur == v16 )
    {
      v12 = v5;
    }
    else
    {
      v10 = this->recv_queue_.queue_.c._M_impl._M_start._M_cur;
      M_last = *(unsigned __int8 *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( *(_BYTE *)((((unsigned __int64)v16[1].m128i_u64 + 7) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)v16[1].m128i_u64 + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v16 + 23) & 7)
        || (M_last & 0x80u) != 0LL )
      {
        goto LABEL_30;
      }
      *(__m128i *)(v20 + 32) = _mm_loadu_si128(v16);
      *(_QWORD *)(v20 + 48) = v16[1].m128i_i64[0];
      p_M_last = &this->recv_queue_.queue_.c._M_impl._M_start;
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
        goto LABEL_31;
      p_M_last = (std::_Deque_base<common::minet::KcpEvent>::iterator *)&this->recv_queue_.queue_.c._M_impl._M_start._M_last;
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
        goto LABEL_32;
      if ( this->recv_queue_.queue_.c._M_impl._M_start._M_cur == this->recv_queue_.queue_.c._M_impl._M_start._M_last - 1 )
        goto LABEL_33;
      ++this->recv_queue_.queue_.c._M_impl._M_start._M_cur;
      v12 = 1;
    }
LABEL_35:
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->recv_queue_.queue_mu_._M_mutex);
    if ( !v12 )
      break;
    v13 = *(common::minet::KcpPacket **)(v20 + 48);
    if ( v13 )
      common::minet::kcp_client::kcp_packet_destroy(v13);
  }
  v17 = (char *)&loc_6001E8 + (_QWORD)this;
  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v17);
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_store4(v17);
    goto LABEL_62;
  }
  v18 = *(ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this);
  if ( !v18 )
    goto LABEL_57;
  ikcp_release(v18);
  v17 = (char *)&loc_6001E8 + (_QWORD)this;
  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
    goto LABEL_60;
  *(_QWORD *)((char *)&loc_6001E8 + (_QWORD)this) = 0LL;
  v17 = (char *)&loc_6001E0 + (_QWORD)this;
  v19 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)this) >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_61;
  *(_DWORD *)((char *)&loc_6001E0 + (_QWORD)this) = 0;
LABEL_57:
  M_last = v20;
  if ( v22 == (char *)v20 )
  {
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v20 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_62:
  *(_QWORD *)M_last = 1172321806LL;
  *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v20 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 68: range 0000000000AAF1C8-0000000000AAF287
int __fastcall common::minet::kcp_client::connect(
        common::minet::kcp_client *const this,
        const std::string *host,
        uint32_t port,
        uint32_t token,
        uint32_t data)
{
  common::milog::MiLogStream v8[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)host >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(host);
  }
  else if ( !kcp_socket_set_host_port(&this->servaddr_, host->_M_dataplus._M_p, port) )
  {
    return common::minet::kcp_client::connect(this, &this->servaddr_, token, data);
  }
  common::milog::MiLogStream::MiLogStream(
    v8,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/kcp_client.cpp",
    "connect",
    71);
  common::milog::MiLogStream::operator()(v8, "kcp_socket_set_host_port failed");
  common::milog::MiLogStream::~MiLogStream(v8);
  return -1;
};

// Line 79: range 0000000000AAEF08-0000000000AAF1C2
int __fastcall common::minet::kcp_client::connect(
        common::minet::kcp_client *const this,
        const KcpAddress *addr,
        uint32_t token,
        uint32_t data)
{
  int M_i; // ebx
  const KcpAddress *v5; // rax
  char v6; // r8
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-38h] BYREF

  v5 = addr;
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v6 && v6 )
  {
    __asan_report_load4(this);
    goto LABEL_11;
  }
  M_i = this->state_._M_i;
  if ( M_i != 4 && M_i != 1 )
  {
LABEL_11:
    common::milog::MiLogStream::MiLogStream(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "connect",
      83);
    common::milog::MiLogStream::operator()(
      &v8,
      "call network_thread not runging or disconnect first. state:%d",
      (unsigned int)M_i);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  if ( *(_BYTE *)((((unsigned __int64)&this->servaddr_.addr.__ss_align + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->servaddr_.addr.__ss_align + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 33) & 7)
    || *(char *)(((unsigned __int64)&this->servaddr_ >> 3) + 0x7FFF8000) < 0 )
  {
    v5 = (const KcpAddress *)__asan_report_store_n(&this->servaddr_, 128LL);
LABEL_13:
    __asan_report_load_n(v5, 128LL);
    goto LABEL_14;
  }
  if ( *(_BYTE *)((((unsigned __int64)&addr->addr.__ss_align + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&addr->addr.__ss_align + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)addr + 127) & 7)
    || *(char *)(((unsigned __int64)addr >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_13;
  }
  *(__m128i *)&this->servaddr_.addr.ss_family = _mm_loadu_si128((const __m128i *)addr);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[14] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[14]);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[30] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[30]);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[46] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[46]);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[62] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[62]);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[78] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[78]);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[94] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[94]);
  *(__m128i *)&this->servaddr_.addr.__ss_padding[110] = _mm_loadu_si128((const __m128i *)&addr->addr.__ss_padding[110]);
  M_i = common::minet::kcp_client::connect_async(this, addr, token, data);
  if ( M_i < 0 )
  {
LABEL_14:
    common::milog::MiLogStream::MiLogStream(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "connect",
      91);
    common::milog::MiLogStream::operator()(&v8, "connect_async failed, ret:%d", (unsigned int)M_i);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return M_i;
  }
  common::milog::MiLogStream::MiLogStream(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_client.cpp",
    "connect",
    95);
  common::milog::MiLogStream::operator()(&v8, " connect start");
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0;
};

// Line 101: range 0000000000AAF28C-0000000000AAF39F
int __fastcall common::minet::kcp_client::reconnect(
        common::minet::kcp_client *const this,
        uint32_t token,
        uint32_t data)
{
  char v4; // dl
  unsigned int v5; // ebx
  common::milog::MiLogStream v7; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v4 && v4 )
  {
    __asan_report_load4(this);
    goto LABEL_6;
  }
  if ( this->state_._M_i != KCP_CLIENT_STATE_DISCONNECTED )
  {
LABEL_6:
    common::milog::MiLogStream::MiLogStream(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "reconnect",
      104);
    common::milog::MiLogStream::operator()(&v7, "should call disconnect first");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  v5 = common::minet::kcp_client::connect(this, &this->servaddr_, token, data);
  common::milog::MiLogStream::MiLogStream(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_client.cpp",
    "reconnect",
    110);
  common::milog::MiLogStream::operator()(&v7, " reconnect start, ret:%d", v5);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return v5;
};

// Line 115: range 0000000000AB18B8-0000000000AB19D9
void __fastcall common::minet::kcp_client::disconnect(
        common::minet::kcp_client *const this,
        uint32_t token,
        uint32_t data)
{
  char v5; // dl
  common::minet::kcp_client::KcpClientState M_i; // esi
  common::milog::MiLogStream v7[2]; // [rsp+0h] [rbp-48h] BYREF

  common::milog::MiLogStream::MiLogStream(
    v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_client.cpp",
    "disconnect",
    116);
  common::milog::MiLogStream::operator()(v7, " enter disconnect token:%u, data:%u", token, data);
  common::milog::MiLogStream::~MiLogStream(v7);
  v5 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v5 && v5 )
  {
    __asan_report_load4(this);
  }
  else
  {
    M_i = this->state_._M_i;
    this->state_._M_i = KCP_CLIENT_STATE_DISCONNECTED;
    _mm_mfence();
    common::minet::kcp_client::do_disconnect(this, M_i, token, data);
    common::milog::MiLogStream::MiLogStream(
      v7,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/kcp_client.cpp",
      "disconnect",
      123);
    common::milog::MiLogStream::operator()(v7, " disconnect token:%u, data:%u", token, data);
  }
  common::milog::MiLogStream::~MiLogStream(v7);
};

// Line 140: range 0000000000AB0B8C-0000000000AB0E70
int __fastcall common::minet::kcp_client::send_packet(
        common::minet::kcp_client *const this,
        common::minet::KcpPacket *kcp_packet)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r13
  common::tools::SafeQueue<common::minet::KcpPacket*> *p_send_queue; // rbx
  std::mutex *p_queue_mu; // r12
  std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *p_M_node; // rdi
  char v7; // dl
  uint32_t max_size; // edx
  std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Elt_pointer M_cur; // rdi
  __int64 p_M_last; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  int v14; // [rsp+Ch] [rbp-7Ch]
  char v15[120]; // [rsp+10h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      v2 = v13;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 kcp_packet:139";
  *(_QWORD *)(v2 + 16) = common::minet::kcp_client::send_packet;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = kcp_packet;
  if ( kcp_packet )
  {
    p_send_queue = &this->send_queue_;
    p_queue_mu = &this->send_queue_.queue_mu_;
    if ( &_pthread_key_create )
    {
      v14 = pthread_mutex_lock(&p_queue_mu->_M_mutex);
      if ( v14 )
      {
        __asan_handle_no_return(p_queue_mu);
        std::__throw_system_error(v14);
      }
    }
    p_M_node = &this->send_queue_.queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_node);
    }
    else
    {
      p_M_node = &p_send_queue->queue_.c._M_impl._M_start._M_node;
      if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      {
        p_M_node = (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *)&p_send_queue->queue_.c._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          p_M_node = (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *)&p_send_queue->queue_.c._M_impl._M_finish._M_first;
          if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
          {
            p_M_node = (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *)&p_send_queue->queue_.c._M_impl._M_start._M_last;
            if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
            {
              p_M_node = (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *)&p_send_queue->queue_.c._M_impl._M_start;
              if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
              {
                p_M_node = (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *)&p_send_queue->max_size_;
                v7 = *(_BYTE *)(((unsigned __int64)&p_send_queue->max_size_ >> 3) + 0x7FFF8000);
                if ( !v7 || v7 > 3 )
                {
                  max_size = p_send_queue->max_size_;
                  if ( max_size
                    && p_send_queue->queue_.c._M_impl._M_start._M_last
                     - p_send_queue->queue_.c._M_impl._M_start._M_cur
                     + ((p_send_queue->queue_.c._M_impl._M_finish._M_node
                       - p_send_queue->queue_.c._M_impl._M_start._M_node
                       - 1) << 6)
                     + p_send_queue->queue_.c._M_impl._M_finish._M_cur
                     - p_send_queue->queue_.c._M_impl._M_finish._M_first >= (unsigned __int64)max_size )
                  {
LABEL_20:
                    if ( &_pthread_key_create )
                      pthread_mutex_unlock(&p_queue_mu->_M_mutex);
                    goto LABEL_22;
                  }
                  p_M_node = (std::_Deque_iterator<common::minet::KcpPacket*,common::minet::KcpPacket*&,common::minet::KcpPacket**>::_Map_pointer *)&p_send_queue->queue_.c._M_impl._M_finish;
                  if ( !*(_BYTE *)(((unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
                  {
                    M_cur = p_send_queue->queue_.c._M_impl._M_finish._M_cur;
                    p_M_last = (__int64)&p_send_queue->queue_.c._M_impl._M_finish._M_last;
                    v11 = (unsigned __int64)&p_send_queue->queue_.c._M_impl._M_finish._M_last >> 3;
                    if ( !*(_BYTE *)(v11 + 0x7FFF8000) )
                    {
                      if ( M_cur == p_send_queue->queue_.c._M_impl._M_finish._M_last - 1 )
                      {
LABEL_38:
                        std::deque<common::minet::KcpPacket *>::_M_push_back_aux<common::minet::KcpPacket * const&>(
                          &p_send_queue->queue_.c,
                          (common::minet::KcpPacket *const *)(v2 + 32),
                          (common::minet::KcpPacket *const *)v11);
                        goto LABEL_20;
                      }
                      if ( !*(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
                      {
                        *M_cur = *(common::minet::KcpPacket **)(v2 + 32);
                        ++p_send_queue->queue_.c._M_impl._M_finish._M_cur;
                        goto LABEL_20;
                      }
LABEL_37:
                      __asan_report_store8();
                      goto LABEL_38;
                    }
LABEL_36:
                    __asan_report_load8(p_M_last);
                    goto LABEL_37;
                  }
LABEL_35:
                  p_M_last = __asan_report_load8(p_M_node);
                  goto LABEL_36;
                }
LABEL_34:
                __asan_report_load4(p_M_node);
                goto LABEL_35;
              }
LABEL_33:
              __asan_report_load8(p_M_node);
              goto LABEL_34;
            }
LABEL_32:
            __asan_report_load8(p_M_node);
            goto LABEL_33;
          }
LABEL_31:
          __asan_report_load8(p_M_node);
          goto LABEL_32;
        }
LABEL_30:
        __asan_report_load8(p_M_node);
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_M_node);
    goto LABEL_30;
  }
LABEL_22:
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 151: range 0000000000AAF71A-0000000000AAF8ED
bool __fastcall common::minet::kcp_client::try_deque_event(
        common::minet::kcp_client *const this,
        common::minet::KcpEvent *event)
{
  common::tools::SafeQueue<common::minet::KcpEvent> *p_recv_queue; // rbx
  std::mutex *p_queue_mu; // rbp
  std::mutex *v4; // rdi
  int v5; // r13d
  std::_Deque_base<common::minet::KcpEvent>::iterator *p_M_finish; // rdi
  const __m128i *M_cur; // rdi
  bool v8; // bl

  p_recv_queue = &this->recv_queue_;
  p_queue_mu = &this->recv_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v4 = &this->recv_queue_.queue_mu_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  p_M_finish = &p_recv_queue->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_19;
  }
  p_M_finish = &p_recv_queue->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_M_finish);
    goto LABEL_20;
  }
  M_cur = (const __m128i *)p_recv_queue->queue_.c._M_impl._M_start._M_cur;
  if ( (const __m128i *)p_recv_queue->queue_.c._M_impl._M_finish._M_cur != M_cur )
  {
    if ( (*(_BYTE *)((((unsigned __int64)&event->packet + 7) >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&event->packet + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)event + 23) & 7))
      && *(char *)(((unsigned __int64)event >> 3) + 0x7FFF8000) >= 0 )
    {
      if ( (*(_BYTE *)((((unsigned __int64)M_cur[1].m128i_u64 + 7) >> 3) + 0x7FFF8000) == 0
         || *(_BYTE *)((((unsigned __int64)M_cur[1].m128i_u64 + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)M_cur + 23) & 7))
        && *(char *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) >= 0 )
      {
        *(__m128i *)&event->type = _mm_loadu_si128(M_cur);
        event->packet = (common::minet::KcpPacket *)M_cur[1].m128i_i64[0];
        M_cur = (const __m128i *)&p_recv_queue->queue_.c._M_impl._M_start;
        if ( !*(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
        {
          M_cur = (const __m128i *)&p_recv_queue->queue_.c._M_impl._M_start._M_last;
          if ( !*(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
          {
            if ( p_recv_queue->queue_.c._M_impl._M_start._M_cur != p_recv_queue->queue_.c._M_impl._M_start._M_last - 1 )
            {
              ++p_recv_queue->queue_.c._M_impl._M_start._M_cur;
              v8 = 1;
              goto LABEL_14;
            }
            goto LABEL_24;
          }
LABEL_23:
          __asan_report_load8(M_cur);
LABEL_24:
          std::deque<common::minet::KcpEvent>::_M_pop_front_aux(&p_recv_queue->queue_.c);
          v8 = 1;
          goto LABEL_14;
        }
LABEL_22:
        __asan_report_load8(M_cur);
        goto LABEL_23;
      }
LABEL_21:
      __asan_report_load_n(M_cur, 24LL);
      goto LABEL_22;
    }
LABEL_20:
    M_cur = (const __m128i *)event;
    __asan_report_store_n(event, 24LL);
    goto LABEL_21;
  }
  v8 = 0;
LABEL_14:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  return v8;
};

// Line 166: range 0000000000AAE570-0000000000AAE5AE
int __fastcall common::minet::kcp_client::get_pktloss(common::minet::kcp_client *const this)
{
  const ikcpcb *v1; // rdi

  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8((char *)&loc_6001E8 + (_QWORD)this);
  }
  else
  {
    v1 = *(const ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this);
    if ( v1 )
      return ikcp_pktloss(v1);
  }
  return 0;
};

// Line 171: range 0000000000AAE5B0-0000000000AAE5EE
int __fastcall common::minet::kcp_client::get_rx_bandwidth(common::minet::kcp_client *const this)
{
  const ikcpcb *v1; // rdi

  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8((char *)&loc_6001E8 + (_QWORD)this);
  }
  else
  {
    v1 = *(const ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this);
    if ( v1 )
      return ikcp_rx_bandwidth(v1);
  }
  return 0;
};

// Line 176: range 0000000000AAE5F0-0000000000AAE62E
int __fastcall common::minet::kcp_client::get_tx_bandwidth(common::minet::kcp_client *const this)
{
  const ikcpcb *v1; // rdi

  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8((char *)&loc_6001E8 + (_QWORD)this);
  }
  else
  {
    v1 = *(const ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this);
    if ( v1 )
      return ikcp_tx_bandwidth(v1);
  }
  return 0;
};

// Line 181: range 0000000000AAE630-0000000000AAEB4E
common::minet::KcpPacket *__fastcall common::minet::kcp_client::kcp_packet_create(const char *data, int length)
{
  common::minet::KcpPacket *v2; // rax
  common::minet::KcpPacket *v3; // rbx
  common::minet::KcpPacket *p_data_len; // rdi
  char v5; // al
  common::minet::KcpPacket *result; // rax
  common::minet::KcpPacket *v7; // rbp

  v2 = (common::minet::KcpPacket *)malloc(0x10uLL);
  v3 = v2;
  if ( !v2 )
    return v3;
  if ( length <= 0 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      v2->data = 0LL;
      goto LABEL_5;
    }
    __asan_report_store8();
  }
  v7 = (common::minet::KcpPacket *)malloc(length);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_15;
  }
  v3->data = (char *)v7;
  if ( !v7 )
  {
LABEL_15:
    free(v3);
    return v7;
  }
  if ( data )
    memcpy(v7, data, length);
LABEL_5:
  p_data_len = (common::minet::KcpPacket *)&v3->data_len;
  v5 = *(_BYTE *)(((unsigned __int64)&v3->data_len >> 3) + 0x7FFF8000);
  if ( !v5 || v5 > 3 )
  {
    v3->data_len = length;
    return v3;
  }
  __asan_report_store4(p_data_len);
  common::minet::kcp_client::kcp_packet_destroy(p_data_len);
  return result;
};

// Line 249: range 0000000000AAEDE2-0000000000AAEF06
int __fastcall common::minet::kcp_client::connect_async(
        common::minet::kcp_client *const this,
        const KcpAddress *addr,
        uint32_t token,
        uint32_t data)
{
  unsigned __int64 p_udp_socket; // rdi
  char v8; // al
  int result; // eax
  char v10; // al
  char v11; // dl
  char v12; // dl
  uint64_t NowMs; // rax
  uint64_t v14; // rax

  p_udp_socket = (unsigned __int64)&this->udp_socket_;
  v8 = *(_BYTE *)((p_udp_socket >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_udp_socket);
LABEL_16:
    __asan_report_store4(p_udp_socket);
LABEL_17:
    __asan_report_store4(p_udp_socket);
LABEL_18:
    __asan_report_store4(this);
    goto LABEL_19;
  }
  if ( this->udp_socket_ != -1 )
    return -2001;
  result = common::minet::kcp_client::init_udp_connect(this);
  if ( result < 0 )
    return result;
  p_udp_socket = (unsigned __int64)&this->connect_token_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_16;
  this->connect_token_ = token;
  p_udp_socket = (unsigned __int64)&this->connect_data_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->connect_data_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 20) & 7) + 3) >= v11 && v11 )
    goto LABEL_17;
  this->connect_data_ = data;
  v12 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v12 && v12 )
    goto LABEL_18;
  this->state_._M_i = KCP_CLIENT_STATE_CONNECTING;
  _mm_mfence();
  NowMs = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_start_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  this->connect_start_time_ = NowMs;
  v14 = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_msg_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
    return -2001;
  }
  this->last_recv_msg_time_ = v14;
  return 0;
};

// Line 280: range 0000000000AB1F5A-0000000000AB2326
void __fastcall common::minet::kcp_client::update(common::minet::kcp_client *const this)
{
  common::milog::MilogStringStream *v1; // r12
  common::milog::MilogStringStream *ostr; // r13
  uint64_t NowMs; // rbp
  char v5; // dl
  uint64_t *p_last_recv_msg_time; // rdi
  uint64_t last_recv_msg_time; // rax
  char **p_cur; // rdi
  char *cur; // rdi
  size_t v10; // r12
  void *v11; // rdi
  char *v12; // rdi
  size_t v13; // rbp
  char *p_connect_token; // rdi
  char *v15; // rdi
  size_t v16; // rbp
  char v17; // dl
  char v18; // al
  char v19; // dl
  struct _Unwind_Exception *v20; // rbx
  common::milog::MiLogStream v21[2]; // [rsp+0h] [rbp-48h] BYREF

  NowMs = common::tools::TimeUtils::getNowMs();
  v5 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v5 && v5 )
  {
    __asan_report_load4(this);
    goto LABEL_7;
  }
  if ( this->state_._M_i == KCP_CLIENT_STATE_CONNECTING )
  {
LABEL_7:
    common::minet::kcp_client::do_asio_kcp_connect(this, NowMs);
    return;
  }
  if ( this->state_._M_i != KCP_CLIENT_STATE_CONNECTED )
    return;
  common::minet::kcp_client::do_send_msg_in_queue(this);
  if ( common::minet::kcp_client::do_recv_udp_packet_in_loop(this) )
  {
    common::milog::MiLogStream::MiLogStream(
      v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "update",
      295);
    common::milog::MiLogStream::operator()(v21, "do_recv_udp_packet_in_loop failed");
    common::milog::MiLogStream::~MiLogStream(v21);
    return;
  }
  p_last_recv_msg_time = (uint64_t *)((char *)&loc_6001E8 + (_QWORD)this);
  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_last_recv_msg_time);
    goto LABEL_36;
  }
  ikcp_update(*(ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this), NowMs);
  p_last_recv_msg_time = &this->last_recv_msg_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_msg_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_last_recv_msg_time);
    goto LABEL_37;
  }
  last_recv_msg_time = this->last_recv_msg_time_;
  if ( last_recv_msg_time >= NowMs )
    return;
  p_last_recv_msg_time = &this->connection_timeout_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->connection_timeout_time_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_last_recv_msg_time);
    goto LABEL_38;
  }
  if ( NowMs - last_recv_msg_time > this->connection_timeout_time_ )
  {
    common::milog::MiLogStream::MiLogStream(
      v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/kcp_client.cpp",
      "update",
      305);
    ostr = v21[0].ostr_;
    if ( !*(_BYTE *)(((unsigned __int64)v21[0].ostr_ >> 3) + 0x7FFF8000) )
    {
      v1 = (common::milog::MilogStringStream *)(v21[0].ostr_->buffer_.data_ + 0x4000);
      p_cur = &v21[0].ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v21[0].ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v21[0].ostr_->buffer_.cur_;
        v10 = (int)v1 - (int)cur;
        if ( v10 > 0x18 )
          v10 = 25LL;
        memcpy(cur, "client timeout, cur_time:", v10);
        ostr->buffer_.cur_ += v10;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v21[0].ostr_, NowMs);
        v1 = v21[0].ostr_;
        if ( !*(_BYTE *)(((unsigned __int64)v21[0].ostr_ >> 3) + 0x7FFF8000) )
        {
          v11 = &v21[0].ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v21[0].ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            v12 = v21[0].ostr_->buffer_.cur_;
            v13 = (size_t)&v21[0].ostr_->buffer_.data_[-(int)v12 + 0x4000];
            if ( v13 > 0x13 )
              v13 = 20LL;
            memcpy(v12, " last_recv_msg_time:", v13);
            v1->buffer_.cur_ += v13;
            v11 = &this->last_recv_msg_time_;
            if ( !*(_BYTE *)(((unsigned __int64)&this->last_recv_msg_time_ >> 3) + 0x7FFF8000) )
            {
              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                v21[0].ostr_,
                this->last_recv_msg_time_);
              v1 = v21[0].ostr_;
              if ( !*(_BYTE *)(((unsigned __int64)v21[0].ostr_ >> 3) + 0x7FFF8000) )
              {
                p_connect_token = (char *)&v21[0].ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v21[0].ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v15 = v21[0].ostr_->buffer_.cur_;
                  v16 = (size_t)&v21[0].ostr_->buffer_.data_[-(int)v15 + 0x4000];
                  if ( v16 > 5 )
                    v16 = 6LL;
                  memcpy(v15, " conv:", v16);
                  v1->buffer_.cur_ += v16;
                  p_connect_token = (char *)&loc_6001E0 + (_QWORD)this;
                  v17 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)this) >> 3) + 0x7FFF8000);
                  if ( (char)((((__int64)&loc_6001E0 + (_QWORD)this) & 7) + 3) < v17 || !v17 )
                  {
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v21[0].ostr_,
                      *(_DWORD *)((char *)&loc_6001E0 + (_QWORD)this));
                    common::milog::MiLogStream::~MiLogStream(v21);
                    p_connect_token = (char *)&this->connect_token_;
                    v18 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
                    if ( !v18 || v18 > 3 )
                    {
                      v19 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
                      if ( (char)(((unsigned __int8)this & 7) + 3) < v19 || !v19 )
                      {
                        common::minet::kcp_client::do_disconnect(this, this->state_._M_i, this->connect_token_, 0);
                        return;
                      }
LABEL_47:
                      v20 = (struct _Unwind_Exception *)__asan_report_load4(this);
                      common::milog::MiLogStream::~MiLogStream(v21);
                      __asan_handle_no_return(v21);
                      _Unwind_Resume(v20);
                    }
LABEL_46:
                    __asan_report_load4(p_connect_token);
                    goto LABEL_47;
                  }
LABEL_45:
                  __asan_report_load4(p_connect_token);
                  goto LABEL_46;
                }
LABEL_44:
                __asan_report_load8(p_connect_token);
                goto LABEL_45;
              }
LABEL_43:
              p_connect_token = (char *)v1;
              __asan_report_load8(v1);
              goto LABEL_44;
            }
LABEL_42:
            __asan_report_load8(v11);
            goto LABEL_43;
          }
LABEL_41:
          __asan_report_load8(v11);
          goto LABEL_42;
        }
LABEL_40:
        v11 = v1;
        __asan_report_load8(v1);
        goto LABEL_41;
      }
LABEL_39:
      __asan_report_load8(p_cur);
      goto LABEL_40;
    }
LABEL_38:
    p_cur = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_39;
  }
};

// Line 318: range 0000000000AB19DE-0000000000AB1AE3
void __fastcall common::minet::kcp_client::do_asio_kcp_connect(
        common::minet::kcp_client *const this,
        uint64_t cur_clock)
{
  uint32_t *p_connect_token; // rdi
  char v4; // al
  char v5; // dl
  void *p_connect_data; // rdi
  char v7; // dl
  char v8; // al

  if ( !common::minet::kcp_client::connect_timeout(this, cur_clock) )
  {
    if ( !common::minet::kcp_client::need_send_connect_packet(this, cur_clock) )
    {
LABEL_3:
      common::minet::kcp_client::try_recv_connect_back_packet(this);
      return;
    }
LABEL_17:
    common::minet::kcp_client::do_send_connect_packet(this, cur_clock);
    goto LABEL_3;
  }
  p_connect_token = &this->connect_token_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(p_connect_token);
LABEL_14:
    p_connect_data = this;
    __asan_report_load4(this);
LABEL_15:
    __asan_report_load4(p_connect_data);
LABEL_16:
    __asan_report_load4(p_connect_data);
    goto LABEL_17;
  }
  v5 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v5 && v5 )
    goto LABEL_14;
  common::minet::kcp_client::do_disconnect(this, this->state_._M_i, this->connect_token_, 0);
  p_connect_data = &this->connect_data_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->connect_data_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 20) & 7) + 3) >= v7 && v7 )
    goto LABEL_15;
  p_connect_data = &this->connect_token_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_16;
  common::minet::kcp_client::event_callback(this, eConnectFailed, this->connect_token_, this->connect_data_, 0LL);
};

// Line 358: range 0000000000AB1236-0000000000AB158D
void __fastcall common::minet::kcp_client::try_recv_connect_back_packet(common::minet::kcp_client *const this)
{
  int v1; // r12d
  unsigned __int64 v2; // rbp
  _DWORD *v3; // rbx
  char v4; // al
  __int64 v5; // rax
  common::minet::kcp_client::kcp_conv_t v6; // r14d
  uint32_t v7; // r12d
  char v8; // al
  uint64_t NowMs; // rax
  char v10; // dl
  struct _Unwind_Exception *v11; // rbx
  uint32_t v12; // [rsp+0h] [rbp-6A8h]
  uint32_t conv; // [rsp+Ch] [rbp-69Ch]
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-698h] BYREF
  char v15[1656]; // [rsp+30h] [rbp-678h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1600LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 buffer:360 64 1400 12 recv_buf:359";
  *(_QWORD *)(v2 + 16) = common::minet::kcp_client::try_recv_connect_back_packet;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862765] = -218103808;
  v3[536862766] = -202116109;
  v3[536862767] = -202116109;
  v3[536862768] = -202116109;
  v3[536862769] = -202116109;
  *(_QWORD *)(v2 + 32) = v2 + 64;
  *(_QWORD *)(v2 + 40) = 1400LL;
  v4 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(&this->udp_socket_);
    goto LABEL_11;
  }
  v1 = kcp_socket_receive(this->udp_socket_, 0LL, (KcpBuffer *)(v2 + 32), 1uLL);
  if ( v1 < 0 )
  {
LABEL_11:
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "try_recv_connect_back_packet",
      366);
    common::milog::MiLogStream::operator()(
      &v14,
      "try_recv_connect_back_packet recv error return with ret_recv:%d",
      (unsigned int)v1);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  if ( v1 > 0 && common::minet::KcpUtils::is_send_back_conv_packet((const char *)(v2 + 64), v1) )
  {
    v6 = v2 + 64;
    conv = common::minet::KcpUtils::grab_conv_from_control_packet((const char *)(v2 + 64), v1);
    v12 = common::minet::KcpUtils::grab_token_from_control_packet((const char *)(v2 + 64), v1);
    v7 = common::minet::KcpUtils::grab_data_from_control_packet((const char *)(v2 + 64), v1);
    v8 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
    if ( v8 && v8 <= 3 )
    {
      NowMs = __asan_report_store4(&this->connect_token_);
    }
    else
    {
      this->connect_token_ = v12;
      common::milog::MiLogStream::MiLogStream(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/kcp_client.cpp",
        "try_recv_connect_back_packet",
        377);
      NowMs = common::tools::TimeUtils::getNowMs();
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->connect_start_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->connect_start_time_);
    }
    else
    {
      v6 = conv;
      common::milog::MiLogStream::operator()(
        &v14,
        "connect succeed in %lu,  milliseconds conv:%u",
        NowMs - this->connect_start_time_,
        conv);
    }
    common::milog::MiLogStream::~MiLogStream(&v14);
    common::minet::kcp_client::init_kcp(this, v6, v12);
    v10 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)this & 7) + 3) >= v10 && v10 )
    {
      v11 = (struct _Unwind_Exception *)__asan_report_store4(this);
      common::milog::MiLogStream::~MiLogStream(&v14);
      __asan_handle_no_return(&v14);
      _Unwind_Resume(v11);
    }
    this->state_._M_i = KCP_CLIENT_STATE_CONNECTED;
    _mm_mfence();
    common::minet::kcp_client::event_callback(this, eConnect, v12, v7, 0LL);
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1600LL, v15);
  }
};

// Line 385: range 0000000000AAEB54-0000000000AAEDDC
int __fastcall common::minet::kcp_client::init_udp_connect(common::minet::kcp_client *const this)
{
  KcpAddress *p_servaddr; // rbp
  KcpSocket v3; // edi
  char v4; // al
  char v5; // al
  int *v7; // rdi
  char v8; // dl
  unsigned int v9; // ebp
  char *v10; // rax
  int *v11; // rax
  char v12; // cl
  unsigned int v13; // ebp
  char *v14; // rax
  int *v15; // rdi
  char v16; // dl
  unsigned int v17; // ebp
  char *v18; // rax
  common::milog::MiLogStream v19; // [rsp+0h] [rbp-38h] BYREF

  p_servaddr = &this->servaddr_;
  v3 = kcp_socket_create(&this->servaddr_, 2);
  v4 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_store4(&this->udp_socket_);
LABEL_10:
    v7 = __errno_location();
    v8 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v7 & 7) + 3) >= v8 && v8 )
    {
      __asan_report_load4(v7);
    }
    else
    {
      v9 = *v7;
      common::milog::MiLogStream::MiLogStream(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/kcp_client.cpp",
        "init_udp_connect",
        392);
      v10 = strerror(v9);
      common::milog::MiLogStream::operator()(&v19, "socket error return with errno: %d %s", v9, v10);
    }
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -2003;
  }
  this->udp_socket_ = v3;
  if ( v3 == -1 )
    goto LABEL_10;
  if ( kcp_socket_set_nonblocking(v3) < 0 )
  {
    v11 = __errno_location();
    v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v11 & 7) + 3) >= v12 && v12 )
    {
      __asan_report_load4(v11);
    }
    else
    {
      v13 = *v11;
      common::milog::MiLogStream::MiLogStream(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/kcp_client.cpp",
        "init_udp_connect",
        403);
      v14 = strerror(v13);
      common::milog::MiLogStream::operator()(
        &v19,
        "set socket non-blocking: fcntl error return with errno: %d %s",
        v13,
        v14);
    }
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -2004;
  }
  else
  {
    v5 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
    if ( v5 && v5 <= 3 )
    {
      __asan_report_load4(&this->udp_socket_);
    }
    else if ( kcp_socket_connect(this->udp_socket_, p_servaddr) >= 0 )
    {
      return 0;
    }
    v15 = __errno_location();
    v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(v15);
    }
    else
    {
      v17 = *v15;
      common::milog::MiLogStream::MiLogStream(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/kcp_client.cpp",
        "init_udp_connect",
        414);
      v18 = strerror(v17);
      common::milog::MiLogStream::operator()(&v19, "connect error return with errno: %d %s", v17, v18);
    }
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -2010;
  }
};

// Line 423: range 0000000000AB1D10-0000000000AB1F55
int __fastcall common::minet::kcp_client::do_recv_udp_packet_in_loop(common::minet::kcp_client *const this)
{
  unsigned int v1; // ebp
  unsigned __int64 v2; // rbx
  _DWORD *v3; // r13
  char v4; // al
  int v5; // eax
  __int64 v7; // rax
  char v8; // al
  char v9; // dl
  common::milog::MiLogStream v10; // [rsp+0h] [rbp-138h] BYREF
  char v11[280]; // [rsp+20h] [rbp-118h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v2 = v7;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 buffer:424 64 128 8 from:427";
  *(_QWORD *)(v2 + 16) = common::minet::kcp_client::do_recv_udp_packet_in_loop;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862726] = -202116109;
  *(_QWORD *)(v2 + 32) = this->recv_buf_;
  *(_QWORD *)(v2 + 40) = 0x200000LL;
  v4 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(&this->udp_socket_);
    goto LABEL_13;
  }
  v5 = kcp_socket_receive(this->udp_socket_, (KcpAddress *)(v2 + 64), (KcpBuffer *)(v2 + 32), 1uLL);
  v1 = v5;
  if ( v5 < 0 )
  {
LABEL_13:
    v8 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
    if ( v8 && v8 <= 3 )
    {
      __asan_report_load4(&this->connect_token_);
    }
    else
    {
      v9 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)this & 7) + 3) < v9 || !v9 )
      {
        common::minet::kcp_client::do_disconnect(this, this->state_._M_i, this->connect_token_, 0);
        common::milog::MiLogStream::MiLogStream(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/kcp_client.cpp",
          "do_recv_udp_packet_in_loop",
          432);
        common::milog::MiLogStream::operator()(&v10, "kcp_socket_receive failed, ret_recv:%d", v1);
LABEL_20:
        common::milog::MiLogStream::~MiLogStream(&v10);
        goto LABEL_7;
      }
    }
    __asan_report_load4(this);
    goto LABEL_20;
  }
  if ( v5 )
    v1 = common::minet::kcp_client::handle_udp_packet(this, this->recv_buf_, v5);
LABEL_7:
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v1;
};

// Line 443: range 0000000000AB1592-0000000000AB18B3
void __fastcall common::minet::kcp_client::do_disconnect(
        common::minet::kcp_client *const this,
        common::minet::kcp_client::KcpClientState old_state,
        uint32_t token,
        uint32_t data)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r14
  char v8; // al
  __int64 v9; // rax
  char v10; // dl
  KcpSocket *v11; // rdi
  char v12; // al
  char v13; // al
  KcpSocket *p_udp_socket; // rdi
  char v15; // al
  char v16; // al
  char *v17; // rdi
  char v19[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 10 buffer:450 64 32 18 disconnect_msg:449";
  *(_QWORD *)(v6 + 16) = common::minet::kcp_client::do_disconnect;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862723] = -202116109;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v6 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_client.cpp",
    "do_disconnect",
    444);
  v8 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)this) >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    __asan_report_load4((char *)&loc_6001E0 + (_QWORD)this);
  else
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v6 + 64),
      "do_disconnect: 4(KCP_CLIENT_STATE_DISCONNECTED) old_state:%d, token:%u, conv:%u",
      (unsigned int)old_state,
      token,
      *(unsigned int *)((char *)&loc_6001E0 + (_QWORD)this));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
  v10 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v10 && v10 )
  {
    __asan_report_store4(this);
  }
  else
  {
    this->state_._M_i = KCP_CLIENT_STATE_DISCONNECTED;
    _mm_mfence();
    if ( old_state != KCP_CLIENT_STATE_CONNECTED )
      goto LABEL_11;
  }
  p_udp_socket = (KcpSocket *)((char *)&loc_6001E0 + (_QWORD)this);
  v15 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)this) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
  {
    __asan_report_load4(p_udp_socket);
  }
  else
  {
    common::minet::KcpUtils::making_disconnect_packet[abi:cxx11](
      (std::string *)(v6 + 64),
      *(_DWORD *)((char *)&loc_6001E0 + (_QWORD)this),
      token,
      data);
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 64);
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 72);
    p_udp_socket = &this->udp_socket_;
    v16 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
    if ( !v16 || v16 > 3 )
    {
      kcp_socket_send(this->udp_socket_, &this->servaddr_, (KcpBuffer *)(v6 + 32), 1uLL);
      goto LABEL_26;
    }
  }
  __asan_report_load4(p_udp_socket);
LABEL_26:
  v17 = *(char **)(v6 + 64);
  if ( v17 != (char *)(v6 + 80) )
    operator delete(v17);
LABEL_11:
  common::minet::kcp_client::clean(this);
  v11 = &this->udp_socket_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    __asan_report_load4(v11);
  }
  else
  {
    kcp_socket_close(this->udp_socket_);
    v11 = &this->udp_socket_;
    v13 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
    if ( !v13 || v13 > 3 )
    {
      this->udp_socket_ = -1;
      if ( old_state != KCP_CLIENT_STATE_CONNECTED )
        goto LABEL_16;
      goto LABEL_30;
    }
  }
  __asan_report_store4(v11);
LABEL_30:
  common::minet::kcp_client::event_callback(this, eDisconnect, token, data, 0LL);
LABEL_16:
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 469: range 0000000000AAF63C-0000000000AAF659
int __fastcall common::minet::kcp_client::udp_output(const char *buf, int len, ikcpcb *kcp, void *user)
{
  common::minet::kcp_client::send_udp_package((common::minet::kcp_client *const)user, buf, len);
  return 0;
};

// Line 475: range 0000000000AAF3A4-0000000000AAF40A
void __fastcall common::minet::kcp_client::ikcp_write_log(const char *log, IKCPCB *kcp, void *user)
{
  _BYTE savedregs[56]; // [rsp+0h] [rbp+0h] BYREF

  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)savedregs,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/kcp_client.cpp",
    "ikcp_write_log",
    476);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)savedregs, log);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)savedregs);
};

// Line 480: range 0000000000AAF410-0000000000AAF636
void __fastcall common::minet::kcp_client::send_udp_package(
        common::minet::kcp_client *const this,
        const char *buf,
        int len)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  char v6; // al
  int v7; // eax
  unsigned int v8; // ebp
  __int64 v9; // rax
  int *v10; // rax
  char v11; // cl
  unsigned int v12; // r12d
  char *v13; // rax
  common::milog::MiLogStream v14; // [rsp+0h] [rbp-98h] BYREF
  char v15[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v4 = v9;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 10 buffer:481";
  *(_QWORD *)(v4 + 16) = common::minet::kcp_client::send_udp_package;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = buf;
  *(_QWORD *)(v4 + 40) = len;
  v6 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
    __asan_report_load4(&this->udp_socket_);
  }
  else
  {
    v7 = kcp_socket_send(this->udp_socket_, &this->servaddr_, (KcpBuffer *)(v4 + 32), 1uLL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( len != v7 )
      {
        common::milog::MiLogStream::MiLogStream(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/kcp_client.cpp",
          "send_udp_package",
          492);
        common::milog::MiLogStream::operator()(
          &v14,
          "send_udp_package error: not all packet send. %d in %d",
          v8,
          (unsigned int)len);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      goto LABEL_7;
    }
  }
  v10 = __errno_location();
  v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v10 & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(v10);
  }
  else
  {
    v12 = *v10;
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "send_udp_package",
      488);
    v13 = strerror(v12);
    common::milog::MiLogStream::operator()(&v14, "send_udp_package error with errno: %d, %s", v12, v13);
  }
  common::milog::MiLogStream::~MiLogStream(&v14);
LABEL_7:
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 515: range 0000000000AB1AE8-0000000000AB1D0B
int __fastcall common::minet::kcp_client::handle_udp_packet(
        common::minet::kcp_client *const this,
        const char *buf,
        int len)
{
  signed int v4; // ebp
  size_t v5; // r13
  uint32_t v6; // ebp
  char *v7; // rdi
  char v8; // al
  char v9; // al
  uint32_t v11; // ecx
  char v12; // dl
  common::minet::KcpPacket *v13; // r8
  char v14; // al
  struct _Unwind_Exception *v15; // rbx
  common::milog::MiLogStream v16[2]; // [rsp+0h] [rbp-48h] BYREF

  v4 = len;
  v5 = len;
  if ( common::minet::KcpUtils::is_disconnect_packet(buf, len) )
  {
    common::milog::MiLogStream::MiLogStream(
      v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "handle_udp_packet",
      518);
    common::milog::MiLogStream::operator()(v16, "recv disconnect packet");
    common::milog::MiLogStream::~MiLogStream(v16);
    v6 = common::minet::KcpUtils::grab_conv_from_control_packet(buf, v5);
    v7 = (char *)&loc_6001E0 + (_QWORD)this;
    v8 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)this) >> 3) + 0x7FFF8000);
    if ( v8 && v8 <= 3 )
    {
      __asan_report_load4(v7);
      goto LABEL_9;
    }
    if ( *(_DWORD *)((char *)&loc_6001E0 + (_QWORD)this) != v6 )
    {
      common::milog::MiLogStream::MiLogStream(
        v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/kcp_client.cpp",
        "handle_udp_packet",
        522);
      v7 = (char *)&loc_6001E0 + (_QWORD)this;
      v9 = *(_BYTE *)((((unsigned __int64)&loc_6001E0 + (unsigned __int64)this) >> 3) + 0x7FFF8000);
      if ( !v9 || v9 > 3 )
      {
        common::milog::MiLogStream::operator()(
          v16,
          "conv not match, ignore, conv_=%u conv=%u",
          *(unsigned int *)((char *)&loc_6001E0 + (_QWORD)this),
          v6);
LABEL_10:
        common::milog::MiLogStream::~MiLogStream(v16);
        return -1;
      }
LABEL_9:
      __asan_report_load4(v7);
      goto LABEL_10;
    }
    v4 = common::minet::KcpUtils::grab_token_from_control_packet(buf, v5);
    v11 = common::minet::KcpUtils::grab_data_from_control_packet(buf, v5);
    v12 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)this & 7) + 3) < v12 || !v12 )
    {
      common::minet::kcp_client::do_disconnect(this, this->state_._M_i, v4, v11);
      return -1;
    }
    __asan_report_load4(this);
  }
  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8((char *)&loc_6001E8 + (_QWORD)this);
    goto LABEL_20;
  }
  ikcp_input(*(ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this), buf, v4);
  while ( 1 )
  {
    v13 = common::minet::kcp_client::recv_udp_package_from_kcp(this);
    if ( !v13 )
      break;
LABEL_20:
    v14 = *(_BYTE *)(((unsigned __int64)&this->connect_token_ >> 3) + 0x7FFF8000);
    if ( v14 && v14 <= 3 )
    {
      v15 = (struct _Unwind_Exception *)__asan_report_load4(&this->connect_token_);
      common::milog::MiLogStream::~MiLogStream(v16);
      __asan_handle_no_return(v16);
      _Unwind_Resume(v15);
    }
    common::minet::kcp_client::event_callback(this, eRcvMsg, this->connect_token_, 0, v13);
  }
  return 0;
};

// Line 548: range 0000000000AAF65A-0000000000AAF715
common::minet::KcpPacket *__fastcall common::minet::kcp_client::recv_udp_package_from_kcp(
        common::minet::kcp_client *const this)
{
  int v1; // eax
  common::milog::MiLogStream v3; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)((((unsigned __int64)&loc_6001E8 + (unsigned __int64)this) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8((char *)&loc_6001E8 + (_QWORD)this);
    goto LABEL_6;
  }
  v1 = ikcp_recv(*(ikcpcb **)((char *)&loc_6001E8 + (_QWORD)this), (char *)&dword_400158 + (_QWORD)this, 0x200000);
  if ( v1 < 0 )
  {
    if ( v1 != -3 )
      return 0LL;
LABEL_6:
    common::milog::MiLogStream::MiLogStream(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_client.cpp",
      "recv_udp_package_from_kcp",
      552);
    common::milog::MiLogStream::operator()(&v3, "ikcp_recv failed. peeksize > len");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0LL;
  }
  return common::minet::kcp_client::kcp_packet_create((const char *)&dword_400158 + (_QWORD)this, v1);
};

// Line 561: range 0000000000AB0E76-0000000000AB1231
void __fastcall common::minet::kcp_client::event_callback(
        common::minet::kcp_client *const this,
        common::minet::eEventType event_type,
        uint32_t token,
        uint32_t data,
        common::minet::KcpPacket *packet)
{
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r13
  common::tools::SafeQueue<common::minet::KcpEvent> *p_recv_queue; // r14
  std::mutex *p_queue_mu; // rbp
  uint64_t *p_last_recv_msg_time; // rdi
  void *p_M_node; // rdi
  char v13; // al
  uint32_t max_size; // ecx
  unsigned __int64 M_cur; // rdi
  __int64 p_M_last; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  uint64_t NowMs; // rax
  char v22[152]; // [rsp+20h] [rbp-98h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(96LL);
    if ( v18 )
      v7 = v18;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 7 evt:562";
  *(_QWORD *)(v7 + 16) = common::minet::kcp_client::event_callback;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  *(_DWORD *)(v7 + 32) = event_type;
  *(_DWORD *)(v7 + 36) = token;
  *(_DWORD *)(v7 + 40) = data;
  *(_QWORD *)(v7 + 48) = packet;
  if ( event_type == eRcvMsg )
  {
    NowMs = common::tools::TimeUtils::getNowMs();
    p_last_recv_msg_time = &this->last_recv_msg_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_msg_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
      goto LABEL_30;
    }
    this->last_recv_msg_time_ = NowMs;
  }
  p_recv_queue = &this->recv_queue_;
  p_queue_mu = &this->recv_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    p_last_recv_msg_time = (uint64_t *)p_queue_mu;
    token = pthread_mutex_lock(&p_queue_mu->_M_mutex);
    if ( token )
    {
LABEL_30:
      __asan_handle_no_return(p_last_recv_msg_time);
      std::__throw_system_error(token);
    }
  }
  p_M_node = &p_recv_queue->queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_32;
  }
  p_M_node = &p_recv_queue->queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = &p_recv_queue->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = &p_recv_queue->queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = &p_recv_queue->queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
    goto LABEL_36;
  }
  p_M_node = &p_recv_queue->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_node);
LABEL_37:
    __asan_report_load4(p_M_node);
    goto LABEL_38;
  }
  p_M_node = &p_recv_queue->max_size_;
  v13 = *(_BYTE *)(((unsigned __int64)&p_recv_queue->max_size_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_37;
  max_size = p_recv_queue->max_size_;
  if ( !max_size
    || 0xAAAAAAAAAAAAAAABLL
     * (((char *)p_recv_queue->queue_.c._M_impl._M_start._M_last - (char *)p_recv_queue->queue_.c._M_impl._M_start._M_cur) >> 3)
     + 21 * (p_recv_queue->queue_.c._M_impl._M_finish._M_node - p_recv_queue->queue_.c._M_impl._M_start._M_node - 1)
     - 0x5555555555555555LL
     * (((char *)p_recv_queue->queue_.c._M_impl._M_finish._M_cur
       - (char *)p_recv_queue->queue_.c._M_impl._M_finish._M_first) >> 3) < max_size )
  {
    p_M_node = &p_recv_queue->queue_.c._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_cur = (unsigned __int64)p_recv_queue->queue_.c._M_impl._M_finish._M_cur;
      p_M_last = (__int64)&p_recv_queue->queue_.c._M_impl._M_finish._M_last;
      v17 = (unsigned __int64)&p_recv_queue->queue_.c._M_impl._M_finish._M_last >> 3;
      if ( !*(_BYTE *)(v17 + 0x7FFF8000) )
      {
        if ( (std::_Deque_iterator<common::minet::KcpEvent,common::minet::KcpEvent&,common::minet::KcpEvent*>::_Elt_pointer)M_cur == &p_recv_queue->queue_.c._M_impl._M_finish._M_last[-1] )
        {
LABEL_41:
          std::deque<common::minet::KcpEvent>::_M_push_back_aux<common::minet::KcpEvent const&>(
            &p_recv_queue->queue_.c,
            (const common::minet::KcpEvent *)(v7 + 32),
            (const common::minet::KcpEvent *)v17);
          goto LABEL_21;
        }
        if ( (*(_BYTE *)(((M_cur + 23) >> 3) + 0x7FFF8000) == 0
           || *(_BYTE *)(((M_cur + 23) >> 3) + 0x7FFF8000) > (unsigned __int8)((M_cur + 23) & 7))
          && *(char *)((M_cur >> 3) + 0x7FFF8000) >= 0 )
        {
          *(__m128i *)M_cur = _mm_load_si128((const __m128i *)(v7 + 32));
          *(_QWORD *)(M_cur + 16) = *(_QWORD *)(v7 + 48);
          ++p_recv_queue->queue_.c._M_impl._M_finish._M_cur;
          goto LABEL_21;
        }
LABEL_40:
        __asan_report_store_n(M_cur, 24LL);
        goto LABEL_41;
      }
LABEL_39:
      M_cur = p_M_last;
      __asan_report_load8(p_M_last);
      goto LABEL_40;
    }
LABEL_38:
    p_M_last = __asan_report_load8(p_M_node);
    goto LABEL_39;
  }
LABEL_21:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  if ( v22 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 575: range 0000000000AB232B-0000000000AB2342
void __cdecl GLOBAL__sub_I_kcp_client_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
