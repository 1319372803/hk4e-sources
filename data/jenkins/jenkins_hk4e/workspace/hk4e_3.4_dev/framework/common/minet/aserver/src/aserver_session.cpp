// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aserver/src/aserver_session.cpp

// Line 35: range 0000000014EC26AC-0000000014EC27E3
int32_t __fastcall common::minet::AServerSession::setRecvBuf(
        common::minet::AServerSession *const this,
        char *buf,
        uint32_t buf_len)
{
  char v3; // al
  struct _Unwind_Exception *v5; // rbx
  common::milog::MiLogStream v6; // [rsp+0h] [rbp-28h] BYREF

  if ( !buf )
  {
    common::milog::MiLogStream::MiLogStream(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "setRecvBuf",
      38);
    common::milog::MiLogStream::operator()(&v6, "can not set buf with nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->recv_buf_);
    goto LABEL_9;
  }
  if ( this->recv_buf_ )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "setRecvBuf",
      43);
    common::milog::MiLogStream::operator()(&v6, "can not set recv_buf again.");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 1;
  }
  this->recv_buf_ = buf;
  v3 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
  if ( v3 )
  {
    if ( v3 <= 3 )
    {
      v5 = (struct _Unwind_Exception *)__asan_report_store4(&this->recv_buf_len_, buf);
      common::milog::MiLogStream::~MiLogStream(&v6);
      __asan_handle_no_return(&v6);
      _Unwind_Resume(v5);
    }
  }
  this->recv_buf_len_ = buf_len;
  return 0;
};

// Line 58: range 0000000014EC526E-0000000014EC6877
int32_t __fastcall common::minet::AServerSession::init(
        common::minet::AServerSession *const this,
        uint32_t session_id,
        uint16_t keep_alive_sec,
        uint16_t timeout_sec,
        bool is_cut_packet,
        bool is_no_delay,
        uint32_t max_send_packet_len,
        bool is_async_send,
        uint32_t cache_packet_max_num,
        bool is_player_session)
{
  unsigned __int64 v11; // r14
  unsigned int socket; // r12d
  unsigned __int64 M_p; // rsi
  _DWORD *v14; // r15
  void *p_session_id; // rdi
  char v16; // dl
  __int64 v17; // rdx
  char v18; // al
  char v19; // dl
  char v20; // al
  __int64 v21; // rdx
  char v22; // al
  char v23; // al
  __int64 v24; // rdx
  char v25; // al
  char v26; // al
  char v27; // al
  unsigned __int64 p_implementation; // rdi
  char v29; // al
  unsigned __int64 v30; // r13
  char v31; // dl
  int v32; // eax
  char v33; // cl
  const boost::system::detail::system_error_category *v34; // rdx
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *v35; // rdi
  char v36; // al
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *v37; // r13
  char v38; // dl
  unsigned __int64 v39; // rcx
  char v40; // dl
  unsigned __int64 v41; // r13
  char v42; // dl
  __int64 v43; // rdi
  char v44; // dl
  unsigned int v45; // ecx
  __int64 v46; // rax
  void *p_status; // rdi
  char v48; // al
  char v49; // dl
  int32_t v50; // ecx
  char v51; // dl
  char v52; // al
  int v53; // eax
  unsigned __int64 v54; // r13
  char v55; // dl
  __int64 v56; // rdi
  char v57; // dl
  unsigned int v58; // ecx
  bool v59; // al
  bool v60; // cl
  unsigned __int64 v61; // r13
  unsigned __int64 p_ip_str; // rdi
  __int64 p_M_allocated_capacity; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdi
  char v66; // al
  __int64 v67; // rdx
  char v68; // al
  char v69; // dl
  unsigned __int64 v70; // rcx
  char v71; // dl
  uint16_t v72; // ax
  unsigned __int64 p_listen_port; // rdi
  char v74; // dl
  char v75; // al
  unsigned __int64 v76; // r12
  char v77; // dl
  unsigned __int64 v78; // rcx
  char v79; // dl
  uint16_t v80; // ax
  void *p_client_port; // rdi
  __int64 v82; // rsi
  char v83; // al
  std::string::size_type M_string_length; // rdi
  char *p_M_string_length; // rax
  unsigned __int64 v87; // rdi
  char v88; // al
  unsigned __int64 v89; // rdx
  char v90; // al
  unsigned __int64 v91; // rdx
  __int64 v92; // rdx
  char v93; // al
  struct _Unwind_Exception *v94; // rbx
  unsigned __int64 v95; // [rsp+0h] [rbp-278h]
  boost::asio::detail::socket_ops::state_type *ifindexa; // [rsp+8h] [rbp-270h]
  common::milog::MilogStringStream *ifindexb; // [rsp+8h] [rbp-270h]
  std::string::size_type M_allocated_capacity; // [rsp+28h] [rbp-250h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-239h] BYREF
  __int64 v104; // [rsp+40h] [rbp-238h]
  __int64 v105; // [rsp+48h] [rbp-230h]
  __m128i si128; // [rsp+60h] [rbp-218h]
  __int64 v107; // [rsp+70h] [rbp-208h]
  int v108; // [rsp+78h] [rbp-200h]
  _BYTE v109[24]; // [rsp+80h] [rbp-1F8h]
  unsigned int v110; // [rsp+98h] [rbp-1E0h]
  std::string v111; // [rsp+A0h] [rbp-1D8h] BYREF
  common::milog::MiLogStream cp; // [rsp+C0h] [rbp-1B8h] BYREF
  char v113[408]; // [rsp+E0h] [rbp-198h] BYREF

  v11 = session_id;
  socket = is_player_session;
  v95 = (unsigned __int64)v113;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v46 = __asan_stack_malloc_3(352LL);
    if ( v46 )
      v95 = v46;
  }
  *(_QWORD *)v95 = 1102416563LL;
  *(_QWORD *)(v95 + 8) = "6 48 4 11 tmp_addrlen 64 16 2 ec 96 16 2 ec 128 22 7 if_name 192 28 8 endpoint 256 63 8 addr_str";
  M_p = (unsigned __int64)common::minet::AServerSession::init;
  *(_QWORD *)(v95 + 16) = common::minet::AServerSession::init;
  v14 = (_DWORD *)(v95 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234556943;
  v14[536862722] = -219021312;
  v14[536862723] = -219021312;
  v14[536862724] = -234487808;
  v14[536862725] = -218959118;
  v14[536862726] = 0x4000000;
  v14[536862727] = -218959118;
  v14[536862729] = 117440512;
  v14[536862730] = -202116109;
  p_session_id = &this->session_id_;
  v16 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v16 && v16 )
  {
    __asan_report_store4(p_session_id, common::minet::AServerSession::init);
LABEL_60:
    __asan_report_store2(p_session_id);
LABEL_61:
    __asan_report_store2(p_session_id);
    goto LABEL_62;
  }
  this->session_id_ = v11;
  p_session_id = &this->keep_alive_sec_;
  v17 = *(unsigned __int8 *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 70) & 7) + 1) >= (char)v17 && (_BYTE)v17 )
    goto LABEL_60;
  this->keep_alive_sec_ = keep_alive_sec;
  p_session_id = &this->timeout_sec_;
  v18 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 1 )
    goto LABEL_61;
  this->timeout_sec_ = timeout_sec;
  p_session_id = &this->is_cut_packet_;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_62:
    __asan_report_store1(p_session_id, common::minet::AServerSession::init, v17);
LABEL_63:
    __asan_report_store4(p_session_id, common::minet::AServerSession::init);
LABEL_64:
    __asan_report_store1(p_session_id, common::minet::AServerSession::init, v21);
LABEL_65:
    __asan_report_store4(p_session_id, common::minet::AServerSession::init);
LABEL_66:
    __asan_report_store1(p_session_id, common::minet::AServerSession::init, v24);
LABEL_67:
    __asan_report_store4(p_session_id, common::minet::AServerSession::init);
LABEL_68:
    __asan_report_load4(p_session_id);
    goto LABEL_69;
  }
  this->is_cut_packet_ = is_cut_packet;
  p_session_id = &this->max_send_packet_len_;
  v19 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v19 && v19 )
    goto LABEL_63;
  this->max_send_packet_len_ = max_send_packet_len;
  p_session_id = &this->is_async_send_;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
  v21 = ((_BYTE)this - 63) & 7;
  if ( v20 <= (char)v21 && v20 )
    goto LABEL_64;
  this->is_async_send_ = is_async_send;
  p_session_id = &this->cache_packet_max_num_;
  v22 = *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_65;
  this->cache_packet_max_num_ = cache_packet_max_num;
  p_session_id = &this->is_player_session_;
  v23 = *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000);
  v24 = ((_BYTE)this - 62) & 7;
  if ( v23 <= (char)v24 && v23 )
    goto LABEL_66;
  this->is_player_session_ = is_player_session;
  p_session_id = &this->wait_send_queue_.max_size_;
  v25 = *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.max_size_ >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_67;
  this->wait_send_queue_.max_size_ = cache_packet_max_num;
  p_session_id = &this->status_;
  v26 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 3 )
    goto LABEL_68;
  if ( this->status_ )
  {
LABEL_69:
    common::milog::MiLogStream::MiLogStream(
      &cp,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "init",
      72);
    p_status = &this->status_;
    v48 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
    if ( v48 && v48 <= 3 )
    {
      __asan_report_load4(p_status);
    }
    else
    {
      p_status = &this->session_id_;
      v49 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 28) & 7) + 3) < v49 || !v49 )
      {
        common::milog::MiLogStream::operator()(
          &cp,
          "session_id=%u status=%u, can not init it now.",
          this->session_id_,
          (unsigned int)this->status_);
        goto LABEL_76;
      }
    }
    __asan_report_load4(p_status);
    goto LABEL_76;
  }
  if ( is_no_delay )
  {
    v27 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
    if ( v27 && v27 <= 3 )
    {
      __asan_report_load4(&this->sock_.impl_.implementation_);
    }
    else
    {
      socket = this->sock_.impl_.implementation_.socket_;
      *(_DWORD *)(v95 + 48) = 1;
      M_p = 6LL;
      if ( !setsockopt(socket, 6, 1, (const void *)(v95 + 48), 4u) )
        goto LABEL_26;
    }
    common::milog::MiLogStream::MiLogStream(
      &cp,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "init",
      83);
    v51 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v51 && v51 )
      __asan_report_load4(&this->session_id_);
    else
      common::milog::MiLogStream::operator()(
        &cp,
        "session_id=%u, set TCP_NODELAY for socket_fd=%d failed.",
        this->session_id_,
        socket);
LABEL_76:
    common::milog::MiLogStream::~MiLogStream(&cp);
    v50 = 1;
    goto LABEL_180;
  }
LABEL_26:
  *(_DWORD *)(v95 + 96) = 0;
  *(_BYTE *)(v95 + 100) = 0;
  *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
  ifindexa = &this->sock_.impl_.implementation_.state_;
  p_implementation = (unsigned __int64)&this->sock_.impl_.implementation_;
  v29 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
  {
    __asan_report_load4(p_implementation);
    goto LABEL_83;
  }
  v11 = (unsigned int)this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)v11 == -1 )
  {
LABEL_83:
    *(_QWORD *)(v95 + 96) = 0x100000009LL;
    *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_34;
  }
  v30 = (unsigned __int64)__errno_location();
  v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
  if ( (char)((v30 & 7) + 3) >= v31 && v31 )
  {
    __asan_report_store4(v30, M_p);
  }
  else
  {
    *(_DWORD *)v30 = 0;
    *(_DWORD *)(v95 + 48) = 1;
    M_p = 21537LL;
    p_implementation = (unsigned int)v11;
    v32 = ioctl(v11, 0x5421uLL, v95 + 48);
    v33 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
    if ( (char)((v30 & 7) + 3) < v33 || !v33 )
    {
      *(_QWORD *)(v95 + 96) = ((unsigned __int64)(*(_DWORD *)v30 != 0) << 32) | *(unsigned int *)v30;
      v34 = &boost::system::detail::cat_holder<void>::system_category_instance;
      *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
      if ( v32 < 0 )
        goto LABEL_34;
      goto LABEL_86;
    }
  }
  p_implementation = v30;
  __asan_report_load4(v30);
LABEL_86:
  *(_QWORD *)(v95 + 96) = 0LL;
  v52 = *(_BYTE *)(((unsigned __int64)ifindexa >> 3) + 0x7FFF8000);
  M_p = ((_BYTE)this - 20) & 7;
  if ( v52 <= (((unsigned __int8)this - 20) & 7) && v52 )
  {
    p_implementation = (unsigned __int64)&this->sock_.impl_.implementation_.state_;
    __asan_report_load1(ifindexa, M_p, v34);
LABEL_90:
    __asan_handle_no_return(p_implementation);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 96), "non_blocking");
  }
  *ifindexa |= 1u;
LABEL_34:
  if ( *(_DWORD *)(v95 + 96) )
    goto LABEL_90;
  *(_DWORD *)(v95 + 64) = 0;
  *(_BYTE *)(v95 + 68) = 0;
  *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v35 = &this->sock_.impl_.implementation_;
  *(_QWORD *)(v95 + 192) = 0LL;
  *(_QWORD *)(v95 + 200) = 0LL;
  *(_QWORD *)(v95 + 208) = 0LL;
  *(_DWORD *)(v95 + 216) = 0;
  *(_WORD *)(v95 + 192) = 2;
  v36 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v36 && v36 <= 3 )
  {
    __asan_report_load4(v35);
    goto LABEL_92;
  }
  v11 = (unsigned int)this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)v11 == -1 )
  {
LABEL_92:
    *(_QWORD *)(v95 + 64) = 0x100000009LL;
    *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v39 = 28LL;
    goto LABEL_44;
  }
  v37 = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *)__errno_location();
  v38 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v37 & 7) + 3) >= v38 && v38 )
  {
    __asan_report_store4(v37, M_p);
LABEL_94:
    v35 = v37;
    __asan_report_load4(v37);
    goto LABEL_95;
  }
  v37->socket_ = 0;
  *(_DWORD *)(v95 + 48) = 28;
  M_p = v95 + 192;
  v35 = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *)(unsigned int)v11;
  v11 = (unsigned int)getpeername(v11, (struct sockaddr *)(v95 + 192), (socklen_t *)(v95 + 48));
  v39 = *(unsigned int *)(v95 + 48);
  v40 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v37 & 7) + 3) >= v40 && v40 )
    goto LABEL_94;
  *(_QWORD *)(v95 + 64) = ((unsigned __int64)(v37->socket_ != 0) << 32) | (unsigned int)v37->socket_;
  *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !(_DWORD)v11 )
    *(_QWORD *)(v95 + 64) = 0LL;
LABEL_44:
  if ( (_DWORD)v11 )
  {
    *(_OWORD *)v109 = 2uLL;
    *(_QWORD *)&v109[16] = 0LL;
    v110 = 0;
    goto LABEL_46;
  }
LABEL_95:
  if ( v39 > 0x80 )
  {
    *(_QWORD *)(v95 + 96) = 0x100000016LL;
    *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
    __asan_handle_no_return(v35);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 96));
  }
  *(__m128i *)v109 = _mm_load_si128((const __m128i *)(v95 + 192));
  *(_QWORD *)&v109[16] = *(_QWORD *)(v95 + 208);
  v110 = *(_DWORD *)(v95 + 216);
LABEL_46:
  if ( *(_DWORD *)(v95 + 64) )
  {
    __asan_handle_no_return(v35);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 64), "remote_endpoint");
  }
  if ( *(_WORD *)v109 == 2 )
  {
    v53 = *(_DWORD *)&v109[4];
    *(_DWORD *)(v95 + 48) = *(_DWORD *)&v109[4];
    LODWORD(cp.log_) = 0;
    HIDWORD(cp.log_) = v53;
    memset(&cp.ostr_ptr_, 0, 24);
  }
  else
  {
    v104 = *(_QWORD *)&v109[8];
    v105 = *(_QWORD *)&v109[16];
    cp.log_ = (common::milog::MiLog *)1;
    cp.ostr_ptr_ = *(common::milog::MilogStringStreamPtr *)&v109[8];
    cp.ostr_ = (common::milog::MilogStringStream *)v110;
  }
  if ( LODWORD(cp.log_) != 1 )
  {
    *(_DWORD *)(v95 + 64) = 0;
    *(_BYTE *)(v95 + 68) = 0;
    *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v41 = (unsigned __int64)__errno_location();
    v42 = *(_BYTE *)((v41 >> 3) + 0x7FFF8000);
    if ( (char)((v41 & 7) + 3) >= v42 && v42 )
    {
      __asan_report_store4(v41, M_p);
    }
    else
    {
      *(_DWORD *)v41 = 0;
      v43 = 2LL;
      M_p = (unsigned __int64)inet_ntop(2, (char *)&cp.log_ + 4, (char *)(v95 + 96), 0x10u);
      v44 = *(_BYTE *)((v41 >> 3) + 0x7FFF8000);
      if ( (char)((v41 & 7) + 3) < v44 || !v44 )
      {
        v45 = *(_DWORD *)v41;
        *(_QWORD *)(v95 + 64) = ((unsigned __int64)(*(_DWORD *)v41 != 0) << 32) | *(unsigned int *)v41;
        *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
        if ( M_p )
        {
LABEL_55:
          if ( !M_p && *(_DWORD *)(v95 + 64) )
          {
            __asan_handle_no_return(v43);
            boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 64));
          }
          std::string::basic_string<std::allocator<char>>(&v111, (const char *)M_p, &__a);
          goto LABEL_136;
        }
LABEL_132:
        if ( !v45 )
          *(_QWORD *)(v95 + 64) = 0x100000016LL;
        goto LABEL_55;
      }
    }
    v43 = v41;
    __asan_report_load4(v41);
    goto LABEL_132;
  }
  *(_DWORD *)(v95 + 96) = 0;
  *(_BYTE *)(v95 + 100) = 0;
  *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
  ifindexb = cp.ostr_;
  v54 = (unsigned __int64)__errno_location();
  v55 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
  if ( (char)((v54 & 7) + 3) >= v55 && v55 )
  {
    __asan_report_store4(v54, M_p);
LABEL_118:
    v56 = v54;
    __asan_report_load4(v54);
LABEL_119:
    if ( !v58 )
      *(_QWORD *)(v95 + 96) = 0x100000016LL;
    goto LABEL_105;
  }
  *(_DWORD *)v54 = 0;
  v56 = 10LL;
  v11 = (unsigned __int64)inet_ntop(10, &cp.ostr_ptr_, (char *)(v95 + 256), 0x3Fu);
  v57 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
  if ( (char)((v54 & 7) + 3) >= v57 && v57 )
    goto LABEL_118;
  v58 = *(_DWORD *)v54;
  *(_QWORD *)(v95 + 96) = ((unsigned __int64)(*(_DWORD *)v54 != 0) << 32) | *(unsigned int *)v54;
  *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !v11 )
    goto LABEL_119;
LABEL_105:
  v59 = v11 != 0;
  if ( v11 && ifindexb )
  {
    *(_QWORD *)(v95 + 128) = 37LL;
    *(_QWORD *)(v95 + 136) = 0LL;
    *(_DWORD *)(v95 + 144) = 0;
    *(_WORD *)(v95 + 148) = 0;
    v60 = LOBYTE(cp.ostr_ptr_._M_ptr) == 0xFE && (BYTE1(cp.ostr_ptr_._M_ptr) & 0xC0) == 0x80 && v11 != 0;
    if ( LOBYTE(cp.ostr_ptr_._M_ptr) == 0xFF )
    {
      if ( (BYTE1(cp.ostr_ptr_._M_ptr) & 0xF) != 2 )
        v59 = 0;
    }
    else
    {
      v59 = 0;
    }
    if ( !v60 && !v59 || !if_indextoname((unsigned int)ifindexb, (char *)(v95 + 129)) )
      sprintf((char *)(v95 + 129), off_1AE4B700, ifindexb);
    v56 = v95 + 256;
    strcat((char *)(v95 + 256), (const char *)(v95 + 128));
  }
  if ( !v11 && *(_DWORD *)(v95 + 96) )
  {
    __asan_handle_no_return(v56);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 96));
  }
  M_p = v11;
  std::string::basic_string<std::allocator<char>>(&v111, (const char *)v11, &__a);
LABEL_136:
  LODWORD(v61) = (_DWORD)this + 296;
  if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
  {
    p_ip_str = (unsigned __int64)&this->ip_str_;
    __asan_report_load8(&this->ip_str_);
LABEL_184:
    if ( !v111._M_string_length )
      goto LABEL_187;
    if ( v111._M_string_length != 1 )
    {
      memcpy((void *)p_ip_str, (const void *)M_p, v111._M_string_length);
      goto LABEL_187;
    }
    v90 = *(_BYTE *)((M_p >> 3) + 0x7FFF8000);
    v91 = M_p & 7;
    if ( v90 <= (char)v91 && v90 )
    {
      p_ip_str = M_p;
      __asan_report_load1(M_p, M_p, v91);
    }
    else
    {
      v92 = *(unsigned __int8 *)M_p;
      v93 = *(_BYTE *)((p_ip_str >> 3) + 0x7FFF8000);
      if ( v93 > (char)(p_ip_str & 7) || !v93 )
      {
        *(_BYTE *)p_ip_str = v92;
LABEL_187:
        M_string_length = v111._M_string_length;
        p_M_string_length = (char *)&this->ip_str_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->ip_str_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->ip_str_._M_string_length = v111._M_string_length;
          v87 = (unsigned __int64)&this->ip_str_._M_dataplus._M_p[M_string_length];
          v88 = *(_BYTE *)((v87 >> 3) + 0x7FFF8000);
          v89 = v87 & 7;
          if ( v88 > (char)v89 || !v88 )
          {
            *(_BYTE *)v87 = 0;
            goto LABEL_145;
          }
          goto LABEL_199;
        }
LABEL_198:
        v87 = (unsigned __int64)p_M_string_length;
        __asan_report_store8(p_M_string_length, M_p);
LABEL_199:
        p_M_allocated_capacity = __asan_report_store1(v87, M_p, v89);
LABEL_200:
        __asan_report_load8(p_M_allocated_capacity);
        goto LABEL_201;
      }
    }
    p_M_string_length = (char *)__asan_report_store1(p_ip_str, M_p, v92);
    goto LABEL_198;
  }
  p_ip_str = (unsigned __int64)this->ip_str_._M_dataplus._M_p;
  M_p = (unsigned __int64)v111._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v111._M_dataplus._M_p == &v111._anon_0 )
    goto LABEL_184;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_ip_str != &this->ip_str_._anon_0 )
  {
    p_M_allocated_capacity = (__int64)&this->ip_str_._anon_0._M_allocated_capacity;
    if ( !*(_BYTE *)(((unsigned __int64)&this->ip_str_._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = this->ip_str_._anon_0._M_allocated_capacity;
      goto LABEL_141;
    }
    goto LABEL_200;
  }
LABEL_201:
  p_ip_str = 0LL;
LABEL_141:
  this->ip_str_._M_dataplus._M_p = (std::string::pointer)M_p;
  if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
    v64 = __asan_report_store8(&this->ip_str_._M_string_length, M_p);
    goto LABEL_203;
  }
  this->ip_str_._M_string_length = v111._M_string_length;
  v64 = (__int64)&this->ip_str_._anon_0._M_allocated_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_._anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_203:
    __asan_report_store8(v64, M_p);
    goto LABEL_204;
  }
  this->ip_str_._anon_0._M_allocated_capacity = v111._anon_0._M_allocated_capacity;
  if ( !p_ip_str )
  {
LABEL_204:
    v111._M_dataplus._M_p = v111._anon_0._M_local_buf;
    goto LABEL_145;
  }
  v111._M_dataplus._M_p = (std::string::pointer)p_ip_str;
  v111._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_145:
  v111._M_string_length = 0LL;
  v65 = (unsigned __int64)v111._M_dataplus._M_p;
  v66 = *(_BYTE *)(((unsigned __int64)v111._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v67 = (__int64)v111._M_dataplus._M_p & 7;
  if ( v66 <= (char)v67 && v66 )
  {
    __asan_report_store1(v111._M_dataplus._M_p, M_p, v67);
LABEL_206:
    __asan_report_load4(v65);
    goto LABEL_207;
  }
  *v111._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v111._M_dataplus._M_p != &v111._anon_0 )
    operator delete(v111._M_dataplus._M_p);
  *(_DWORD *)(v95 + 64) = 0;
  *(_BYTE *)(v95 + 68) = 0;
  *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v65 = (unsigned __int64)&this->sock_.impl_.implementation_;
  *(_QWORD *)(v95 + 192) = 0LL;
  *(_QWORD *)(v95 + 200) = 0LL;
  *(_QWORD *)(v95 + 208) = 0LL;
  *(_DWORD *)(v95 + 216) = 0;
  *(_WORD *)(v95 + 192) = 2;
  v68 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v68 && v68 <= 3 )
    goto LABEL_206;
  LODWORD(v11) = this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)v11 == -1 )
  {
LABEL_207:
    *(_QWORD *)(v95 + 64) = 0x100000009LL;
    *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v70 = 28LL;
    goto LABEL_158;
  }
  v61 = (unsigned __int64)__errno_location();
  v69 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
  if ( (char)((v61 & 7) + 3) >= v69 && v69 )
  {
    __asan_report_store4(v61, M_p);
LABEL_209:
    v65 = v61;
    __asan_report_load4(v61);
    goto LABEL_210;
  }
  *(_DWORD *)v61 = 0;
  *(_DWORD *)(v95 + 48) = 28;
  M_p = v95 + 192;
  v65 = (unsigned int)v11;
  LODWORD(v11) = getsockname(v11, (struct sockaddr *)(v95 + 192), (socklen_t *)(v95 + 48));
  v70 = *(unsigned int *)(v95 + 48);
  v71 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
  if ( (char)((v61 & 7) + 3) >= v71 && v71 )
    goto LABEL_209;
  *(_QWORD *)(v95 + 64) = ((unsigned __int64)(*(_DWORD *)v61 != 0) << 32) | *(unsigned int *)v61;
  *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !(_DWORD)v11 )
    *(_QWORD *)(v95 + 64) = 0LL;
LABEL_158:
  if ( (_DWORD)v11 )
  {
    si128 = (__m128i)2uLL;
    v107 = 0LL;
    v108 = 0;
    goto LABEL_160;
  }
LABEL_210:
  if ( v70 > 0x80 )
  {
    *(_QWORD *)(v95 + 96) = 0x100000016LL;
    *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
    __asan_handle_no_return(v65);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 96));
  }
  si128 = _mm_load_si128((const __m128i *)(v95 + 192));
  v107 = *(_QWORD *)(v95 + 208);
  v108 = *(_DWORD *)(v95 + 216);
LABEL_160:
  if ( *(_DWORD *)(v95 + 64) )
  {
    __asan_handle_no_return(v65);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 64), "local_endpoint");
  }
  v72 = __ROR2__(si128.m128i_i16[1], 8);
  p_listen_port = (unsigned __int64)&this->listen_port_;
  v74 = *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000);
  if ( v74 && v74 <= 1 )
  {
    __asan_report_store2(p_listen_port);
LABEL_215:
    __asan_report_load4(p_listen_port);
    goto LABEL_216;
  }
  this->listen_port_ = v72;
  *(_DWORD *)(v95 + 64) = 0;
  *(_BYTE *)(v95 + 68) = 0;
  *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_listen_port = (unsigned __int64)&this->sock_.impl_.implementation_;
  *(_QWORD *)(v95 + 192) = 0LL;
  *(_QWORD *)(v95 + 200) = 0LL;
  *(_QWORD *)(v95 + 208) = 0LL;
  *(_DWORD *)(v95 + 216) = 0;
  *(_WORD *)(v95 + 192) = 2;
  v75 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v75 && v75 <= 3 )
    goto LABEL_215;
  LODWORD(v61) = this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)v61 == -1 )
  {
LABEL_216:
    *(_QWORD *)(v95 + 64) = 0x100000009LL;
    *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v78 = 28LL;
    goto LABEL_172;
  }
  v76 = (unsigned __int64)__errno_location();
  v77 = *(_BYTE *)((v76 >> 3) + 0x7FFF8000);
  if ( (char)((v76 & 7) + 3) >= v77 && v77 )
  {
    __asan_report_store4(v76, M_p);
LABEL_218:
    p_listen_port = v76;
    __asan_report_load4(v76);
    goto LABEL_219;
  }
  *(_DWORD *)v76 = 0;
  *(_DWORD *)(v95 + 48) = 28;
  p_listen_port = (unsigned int)v61;
  LODWORD(v61) = getpeername(v61, (struct sockaddr *)(v95 + 192), (socklen_t *)(v95 + 48));
  v78 = *(unsigned int *)(v95 + 48);
  v79 = *(_BYTE *)((v76 >> 3) + 0x7FFF8000);
  if ( (char)((v76 & 7) + 3) >= v79 && v79 )
    goto LABEL_218;
  *(_QWORD *)(v95 + 64) = ((unsigned __int64)(*(_DWORD *)v76 != 0) << 32) | *(unsigned int *)v76;
  *(_QWORD *)(v95 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !(_DWORD)v61 )
    *(_QWORD *)(v95 + 64) = 0LL;
LABEL_172:
  if ( (_DWORD)v61 )
  {
    *(_OWORD *)v109 = 2uLL;
    *(_QWORD *)&v109[16] = 0LL;
    v110 = 0;
    goto LABEL_174;
  }
LABEL_219:
  if ( v78 > 0x80 )
  {
    *(_QWORD *)(v95 + 96) = 0x100000016LL;
    *(_QWORD *)(v95 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
    __asan_handle_no_return(p_listen_port);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 96));
  }
  *(__m128i *)v109 = _mm_load_si128((const __m128i *)(v95 + 192));
  *(_QWORD *)&v109[16] = *(_QWORD *)(v95 + 208);
  v110 = *(_DWORD *)(v95 + 216);
LABEL_174:
  v50 = *(_DWORD *)(v95 + 64);
  if ( v50 )
  {
    __asan_handle_no_return(p_listen_port);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v95 + 64), "remote_endpoint");
  }
  v80 = __ROR2__(*(_WORD *)&v109[2], 8);
  p_client_port = &this->client_port_;
  v82 = *(unsigned __int8 *)(((unsigned __int64)&this->client_port_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 14) & 7) + 1) >= (char)v82 && (_BYTE)v82 )
  {
    __asan_report_store2(p_client_port);
    goto LABEL_224;
  }
  this->client_port_ = v80;
  p_client_port = &this->status_;
  v83 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v83 && v83 <= 3 )
  {
LABEL_224:
    v94 = (struct _Unwind_Exception *)__asan_report_store4(p_client_port, v82);
    common::milog::MiLogStream::~MiLogStream(&cp);
    __asan_handle_no_return(&cp);
    _Unwind_Resume(v94);
  }
  this->status_ = STATUS_INIT_0;
LABEL_180:
  if ( v113 == (char *)v95 )
  {
    *(_QWORD *)((v95 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v95 = 1172321806LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v95 >> 3) + 0x7FFF8028) = -168430091;
  }
  return v50;
};

// Line 113: range 0000000014ED2518-0000000014ED2F17
int32_t __fastcall common::minet::AServerSession::start(common::minet::AServerSession *const this)
{
  unsigned __int64 v2; // r12
  _DWORD *v3; // r14
  char v4; // al
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 io_ctx; // rsi
  int v8; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  bool v11; // dl
  boost::context::stack_traits *p_M_use_count; // rdi
  boost::arg<1> v13; // r8
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  char v15; // dl
  std::shared_ptr<common::minet::AServerSession> v16; // rdx
  boost::asio::io_context **p_io_ctx; // rdi
  boost::asio::detail::strand_executor_service *v18; // rax
  __int64 v19; // rax
  void *p_status; // rdi
  char v21; // al
  char v22; // dl
  int32_t result; // eax
  char v24; // cl
  pthread_mutex_t *v25; // rbx
  unsigned __int64 v26; // rbp
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *v27; // rdi
  unsigned __int64 v28; // rax
  _Atomic_word *v29; // rdi
  char v30; // dl
  char v31; // cl
  unsigned __int64 p_list; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  pthread_mutex_t *v35; // r15
  __pthread_internal_list *prev; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 p_next; // rdi
  __pthread_internal_list *next; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _Atomic_word *v42; // rdi
  char v43; // dl
  void *v44; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rdi
  int v46; // eax
  struct _Unwind_Exception *v47; // rbx
  char v48; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v49; // rdi
  unsigned __int64 v50; // [rsp+8h] [rbp-150h]
  pthread_mutex_t *v51; // [rsp+10h] [rbp-148h]
  pthread_mutex_t *v52; // [rsp+18h] [rbp-140h]
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> salloc; // [rsp+28h] [rbp-130h] BYREF
  __int64 a1; // [rsp+30h] [rbp-128h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v55; // [rsp+38h] [rbp-120h]
  common::milog::MiLog *v56; // [rsp+40h] [rbp-118h]
  unsigned __int64 v57; // [rsp+48h] [rbp-110h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v58; // [rsp+50h] [rbp-108h]
  boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > > function; // [rsp+60h] [rbp-F8h] BYREF
  common::milog::MiLogStream v60; // [rsp+80h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v2 = v19;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 __count 64 16 12 self_ptr:121 96 16 2 ec";
  *(_QWORD *)(v2 + 16) = common::minet::AServerSession::start;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  v4 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(&this->status_);
    goto LABEL_26;
  }
  if ( this->status_ != STATUS_INIT_0 )
  {
LABEL_26:
    common::milog::MiLogStream::MiLogStream(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "start",
      116);
    p_status = &this->status_;
    v21 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
    if ( v21 && v21 <= 3 )
    {
      __asan_report_load4(p_status);
    }
    else
    {
      p_status = &this->session_id_;
      v22 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 28) & 7) + 3) < v22 || !v22 )
      {
        common::milog::MiLogStream::operator()(
          &v60,
          "session_id=%u status=%u, can not start it now.",
          this->session_id_,
          (unsigned int)this->status_);
LABEL_33:
        common::milog::MiLogStream::~MiLogStream(&v60);
        result = 1;
        goto LABEL_132;
      }
    }
    __asan_report_load4(p_status);
    goto LABEL_33;
  }
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
LABEL_35:
    __asan_report_load4(p_M_refcount);
LABEL_36:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v2 + 72) = M_pi;
  if ( !M_pi )
  {
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
  io_ctx = *(unsigned __int8 *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= (char)io_ctx && (_BYTE)io_ctx )
    goto LABEL_35;
  *(_DWORD *)(v2 + 48) = M_pi->_M_use_count;
  do
  {
    v8 = *(_DWORD *)(v2 + 48);
    if ( !v8 )
      goto LABEL_36;
    v10 = *(_DWORD *)(v2 + 48);
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v8 + 1, v10);
    v11 = v10 == v9;
    if ( v10 != v9 )
      *(_DWORD *)(v2 + 48) = v9;
  }
  while ( !v11 );
  p_M_use_count = (boost::context::stack_traits *)&this->std::enable_shared_from_this<common::minet::AServerSession>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AServerSession> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_use_count);
  }
  else
  {
    *(_QWORD *)(v2 + 64) = this->_M_weak_this._M_ptr;
    salloc.size_ = boost::context::stack_traits::default_size(p_M_use_count);
    a1 = *(_QWORD *)(v2 + 64);
    v14 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 72);
    v55 = v14;
    if ( !v14 )
      goto LABEL_20;
    p_M_use_count = (boost::context::stack_traits *)&v14->_M_use_count;
    if ( !&_pthread_key_create )
      goto LABEL_39;
    v15 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v15 || !v15 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count->gap0, 1u);
      goto LABEL_20;
    }
  }
  v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count, io_ctx);
LABEL_39:
  p_io_ctx = (boost::asio::io_context **)&v14->_M_use_count;
  v24 = *(_BYTE *)(((unsigned __int64)&v14->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(p_io_ctx);
    goto LABEL_43;
  }
  ++v14->_M_use_count;
LABEL_20:
  v16._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&a1;
  io_ctx = (unsigned __int64)common::minet::AServerSession::recvCoroutine;
  v16._M_ptr = 0LL;
  boost::bind<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,std::shared_ptr<common::minet::AServerSession>,boost::arg<1>>(
    &function,
    (void (*)(common::minet::AServerSession *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >))common::minet::AServerSession::recvCoroutine,
    v16,
    v13);
  p_io_ctx = &this->io_ctx_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_ctx_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_io_ctx);
    goto LABEL_44;
  }
  io_ctx = (unsigned __int64)this->io_ctx_;
  v56 = (common::milog::MiLog *)io_ctx;
  if ( !*(_BYTE *)((io_ctx >> 3) + 0x7FFF8000) )
  {
    v18 = boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_executor_service>(
            *(boost::asio::detail::service_registry *const *)io_ctx,
            (boost::asio::io_context *)io_ctx);
    goto LABEL_45;
  }
LABEL_44:
  v18 = (boost::asio::detail::strand_executor_service *)__asan_report_load8(io_ctx);
LABEL_45:
  v25 = (pthread_mutex_t *)v18;
  v26 = operator new(0x48uLL);
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 16);
  if ( *(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v27, io_ctx);
    goto LABEL_51;
  }
  *(_QWORD *)(v26 + 16) = 0LL;
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 24);
  if ( *(_BYTE *)(((v26 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8(v27, io_ctx);
    goto LABEL_52;
  }
  *(_QWORD *)(v26 + 24) = 0LL;
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 32);
  if ( *(_BYTE *)(((v26 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8(v27, io_ctx);
    goto LABEL_53;
  }
  *(_QWORD *)(v26 + 32) = 0LL;
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 40);
  if ( *(_BYTE *)(((v26 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    v28 = __asan_report_store8(v27, io_ctx);
    goto LABEL_54;
  }
  *(_QWORD *)(v26 + 40) = 0LL;
  v57 = v26;
  v28 = operator new(0x18uLL);
LABEL_54:
  v29 = (_Atomic_word *)(v28 + 8);
  v30 = *(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000);
  if ( v30 && v30 <= 3 )
  {
    __asan_report_store4(v29, io_ctx);
LABEL_82:
    v28 = __asan_report_store4(v29, io_ctx);
    goto LABEL_83;
  }
  *(_DWORD *)(v28 + 8) = 1;
  v29 = (_Atomic_word *)(v28 + 12);
  v31 = *(_BYTE *)(((v28 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v28 + 12) & 7) + 3) >= v31 && v31 )
    goto LABEL_82;
  *(_DWORD *)(v28 + 12) = 1;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    p_list = v28;
    __asan_report_store8(v28, io_ctx);
    goto LABEL_84;
  }
  *(_QWORD *)v28 = &`vtable for'std::_Sp_counted_ptr<boost::asio::detail::strand_executor_service::strand_impl *,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  p_list = v28 + 16;
  if ( *(_BYTE *)(((v28 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_store8(p_list, io_ctx);
    goto LABEL_85;
  }
  *(_QWORD *)(v28 + 16) = v26;
  v58 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v28;
  p_list = v57 + 8;
  v33 = *(unsigned __int8 *)(((v57 + 8) >> 3) + 0x7FFF8000);
  if ( (v33 & 0x80u) != 0LL )
  {
LABEL_85:
    __asan_report_store1(p_list, io_ctx, v33);
LABEL_86:
    __asan_report_store1(p_list, io_ctx, v34);
    goto LABEL_87;
  }
  *(_BYTE *)(v57 + 8) = 0;
  p_list = v57 + 9;
  v34 = *(unsigned __int8 *)(((v57 + 9) >> 3) + 0x7FFF8000);
  if ( (char)v34 <= (char)((v57 + 9) & 7) && (_BYTE)v34 )
    goto LABEL_86;
  *(_BYTE *)(v57 + 9) = 0;
  v35 = v25 + 1;
  pthread_mutex_lock(v25 + 1);
  p_list = (unsigned __int64)&v25[40].__data.__list;
  if ( *(_BYTE *)(((unsigned __int64)&v25[40].__data.__list >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(p_list);
LABEL_88:
    v44 = (void *)__asan_report_load8(p_list);
    __cxa_begin_catch(v44);
    if ( v26 )
    {
      boost::asio::detail::strand_executor_service::strand_impl::~strand_impl((boost::asio::detail::strand_executor_service::strand_impl *const)v26);
      v44 = (void *)v26;
      operator delete((void *)v26, 0x48uLL);
    }
    __asan_handle_no_return(v44);
    __cxa_rethrow();
  }
  prev = v25[40].__data.__list.__prev;
  v25[40].__data.__list.__prev = (__pthread_internal_list *)((char *)&prev->__prev + 1);
  v37 = (((v57 >> 3) + v57) ^ ((unsigned __int64)&prev[4 * (v57 >> 3) + 165902235 + 4 * v57].__next
                             + (((v57 >> 3) + v57) >> 2)
                             + 1))
      % 0xC1;
  v26 = v37;
  p_list = (unsigned __int64)&v25[2] + 8 * v37;
  if ( *(_BYTE *)((p_list >> 3) + 0x7FFF8000) )
    goto LABEL_88;
  if ( *(_QWORD *)&v25[2].__size[8 * v37] )
    goto LABEL_66;
  v50 = (unsigned __int64)&v25[2] + 8 * v37;
  v51 = (pthread_mutex_t *)operator new(0x28uLL);
  io_ctx = 0LL;
  v46 = pthread_mutex_init(v51, 0LL);
  *(_DWORD *)(v2 + 96) = v46;
  *(_BYTE *)(v2 + 100) = v46 != 0;
  *(_QWORD *)(v2 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v46 )
  {
    __asan_handle_no_return(v51);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v2 + 96), "mutex");
  }
  if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v50);
LABEL_108:
    p_next = v50;
    __asan_report_store8(v50, io_ctx);
    goto LABEL_109;
  }
  if ( *(_QWORD *)v50 )
  {
    v52 = *(pthread_mutex_t **)v50;
    pthread_mutex_destroy(*(pthread_mutex_t **)v50);
    io_ctx = 40LL;
    operator delete(v52, 0x28uLL);
  }
  if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
    goto LABEL_108;
  io_ctx = (unsigned __int64)v51;
  *(_QWORD *)v50 = v51;
LABEL_66:
  p_next = (unsigned __int64)&v25[2] + 8 * v26;
  if ( *(_BYTE *)((p_next >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(p_next);
    goto LABEL_110;
  }
  p_next = v57;
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8(p_next, io_ctx);
    goto LABEL_111;
  }
  *(_QWORD *)v57 = *(_QWORD *)&v25[2].__size[8 * v26];
  p_next = (unsigned __int64)&v25[40].__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)&v25[40].__data.__list.__next >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(p_next);
    goto LABEL_112;
  }
  p_next = v57 + 48;
  if ( *(_BYTE *)(((v57 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_store8(p_next, io_ctx);
    goto LABEL_113;
  }
  *(_QWORD *)(v57 + 48) = v25[40].__data.__list.__next;
  p_next = v57 + 56;
  if ( *(_BYTE *)(((v57 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    __asan_report_store8(p_next, io_ctx);
    goto LABEL_114;
  }
  *(_QWORD *)(v57 + 56) = 0LL;
  next = v25[40].__data.__list.__next;
  if ( !next )
    goto LABEL_74;
  p_next = (unsigned __int64)&next[3].__next;
  if ( *(_BYTE *)(((unsigned __int64)&next[3].__next >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_store8(p_next, io_ctx);
    goto LABEL_115;
  }
  next[3].__next = (__pthread_internal_list *)v57;
LABEL_74:
  v40 = v57;
  v25[40].__data.__list.__next = (__pthread_internal_list *)v57;
  p_next = v40 + 64;
  if ( *(_BYTE *)(((v40 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    v47 = (struct _Unwind_Exception *)__asan_report_store8(p_next, io_ctx);
    pthread_mutex_unlock(v35);
    if ( v58 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v58);
    if ( function.l_.a1_.t_._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(function.l_.a1_.t_._M_refcount._M_pi);
    if ( v55 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v55);
    v45 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 72);
    if ( v45 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v45);
    __asan_handle_no_return(v45);
    _Unwind_Resume(v47);
  }
  *(_QWORD *)(v40 + 64) = v25;
  pthread_mutex_unlock(v25 + 1);
  v60.log_ = v56;
  v60.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)v57;
  v41 = (__int64)v58;
  v60.ostr_ptr_._M_refcount._M_pi = v58;
  if ( v58 )
  {
    v42 = &v58->_M_use_count;
    if ( &_pthread_key_create )
    {
      v43 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v42 & 7) + 3) < v43 || !v43 )
      {
        _InterlockedAdd(v42, 1u);
        goto LABEL_80;
      }
      v41 = __asan_report_store4(v42, io_ctx);
    }
    v48 = *(_BYTE *)(((unsigned __int64)(v41 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v41 + 8) & 7) + 3) >= v48 && v48 )
    {
      __asan_report_load4(v41 + 8);
      goto LABEL_121;
    }
    ++*(_DWORD *)(v41 + 8);
  }
LABEL_80:
  v60.ostr_ = (common::milog::MilogStringStream *)boost::asio::detail::default_spawn_handler;
  boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
    (boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> > *)&v60,
    &function,
    &salloc,
    0LL);
LABEL_121:
  if ( v60.ostr_ptr_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v60.ostr_ptr_._M_refcount._M_pi);
  if ( v58 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v58);
  if ( function.l_.a1_.t_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(function.l_.a1_.t_._M_refcount._M_pi);
  if ( v55 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v55);
  v49 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 72);
  if ( v49 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49);
  result = 0;
LABEL_132:
  if ( v61 == (char *)v2 )
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

// Line 130: range 0000000014EC4CA8-0000000014EC5269
int32_t __fastcall common::minet::AServerSession::stop(common::minet::AServerSession *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  _DWORD *v4; // r13
  common::minet::AServerSession::Status *p_status; // rdi
  char v6; // al
  char v7; // al
  char v8; // dl
  __int64 v9; // rax
  int32_t result; // eax
  boost::asio::ip::tcp::socket *v11; // rdi
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *v12; // rcx
  __int64 v13; // rax
  char v14; // dl
  int (**v15)(...); // rdx
  int i; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int (**v19)(...); // r8
  unsigned __int64 v20; // rdi
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // rdi
  int (*v23)(...); // rdi
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-F0h]
  boost::asio::detail::reactor *reactor; // [rsp+10h] [rbp-E8h]
  __int64 p_has_native_impl; // [rsp+18h] [rbp-E0h]
  common::milog::MiLogStream v28; // [rsp+20h] [rbp-D8h] BYREF
  char v29[184]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)this;
  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v3 = v9;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 2 ec 64 16 15 descriptor_lock 96 16 3 ops";
  *(_QWORD *)(v3 + 16) = common::minet::AServerSession::stop;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  p_status = &this->status_;
  v6 = *(_BYTE *)(((v2 + 24) >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
    __asan_report_load4(p_status);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v2 + 24) != 2 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "stop",
      133);
    p_status = (common::minet::AServerSession::Status *)(v2 + 24);
    v7 = *(_BYTE *)(((v2 + 24) >> 3) + 0x7FFF8000);
    if ( !v7 || v7 > 3 )
    {
      p_status = (common::minet::AServerSession::Status *)(v2 + 28);
      v8 = *(_BYTE *)(((v2 + 28) >> 3) + 0x7FFF8000);
      if ( (char)(((v2 + 28) & 7) + 3) < v8 || !v8 )
      {
        common::milog::MiLogStream::operator()(
          &v28,
          "session_id=%u status=%u, can not stop it now.",
          *(unsigned int *)(v2 + 28),
          *(unsigned int *)(v2 + 24));
LABEL_15:
        common::milog::MiLogStream::~MiLogStream(&v28);
        result = 1;
        goto LABEL_16;
      }
LABEL_14:
      __asan_report_load4(p_status);
      goto LABEL_15;
    }
LABEL_13:
    __asan_report_load4(p_status);
    goto LABEL_14;
  }
  *(_DWORD *)(v2 + 24) = 3;
  v11 = (boost::asio::ip::tcp::socket *)(v2 + 224);
  *(_DWORD *)(v3 + 32) = 0;
  *(_BYTE *)(v3 + 36) = 0;
  *(_QWORD *)(v3 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_load8(v11);
LABEL_26:
    v13 = __asan_report_load4(v13);
    goto LABEL_27;
  }
  v12 = *(boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type **)(v2 + 224);
  v1 = (unsigned __int64)&v12->boost::asio::detail::reactive_socket_service_base;
  v13 = v2 + 232;
  v14 = *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_26;
  if ( *(_DWORD *)(v2 + 232) == -1 )
  {
    *(_QWORD *)(v3 + 32) = 0x100000009LL;
    *(_QWORD *)(v3 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_23;
  }
LABEL_27:
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v1);
    goto LABEL_35;
  }
  reactor = v12->reactor_;
  v2 = v13 + 8;
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(v2);
LABEL_36:
    v11 = (boost::asio::ip::tcp::socket *)v15;
    __asan_report_load1(v15, v1, v15);
    goto LABEL_37;
  }
  v11 = *(boost::asio::ip::tcp::socket **)(v13 + 8);
  if ( !v11 )
    goto LABEL_70;
  p_has_native_impl = (__int64)&v11->impl_.implementation_executor_.has_native_impl_;
  v15 = (int (**)(...))&v11[1].impl_.implementation_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&v11[1].impl_.implementation_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_36;
  if ( v11[1].impl_.implementation_executor_.has_native_impl_ )
  {
LABEL_37:
    pthread_mutex_lock((pthread_mutex_t *)&v11[1]);
    *(_BYTE *)(v3 + 72) = 1;
    goto LABEL_33;
  }
  *(_BYTE *)(v3 + 72) = 0;
LABEL_33:
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  for ( i = 0; i <= 2; ++i )
  {
    while ( 1 )
    {
      v22 = v2;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v2);
LABEL_39:
        __asan_report_load8(v22);
LABEL_40:
        __asan_report_store16();
LABEL_41:
        __asan_report_load8(v22);
        goto LABEL_42;
      }
      v15 = *(int (***)(...))v2;
      v22 = *(_QWORD *)v2 + 16 * (i + 7LL);
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        goto LABEL_39;
      v17 = (unsigned __int64)v15[2 * i + 14];
      if ( !v17 )
        break;
      v22 = v17 + 24;
      v1 = (v17 + 24) >> 3;
      if ( *(_WORD *)(v1 + 0x7FFF8000) )
        goto LABEL_40;
      *(_QWORD *)(v17 + 24) = v25 & 0xFFFFFF0000000000LL | 0x10000007DLL;
      *(_QWORD *)(v17 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
      v19 = *(int (***)(...))v2;
      v22 = *(_QWORD *)v2 + 16 * (i + 7LL);
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        goto LABEL_41;
      v18 = (unsigned __int64)v19[2 * i + 14];
      if ( v18 )
      {
        v22 = (unsigned __int64)v19[2 * i + 14];
        if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        {
          v23 = *(int (**)(...))v18;
          v1 = 16 * (i + 7LL);
          *(int (**)(...))((char *)v19 + v1) = *(int (**)(...))v18;
          if ( !v23 )
          {
            v20 = (unsigned __int64)&v19[2 * i + 15];
            v1 = v20 >> 3;
            if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8(v20, v1);
LABEL_59:
              __asan_report_store8(v20, v1);
              goto LABEL_60;
            }
LABEL_43:
            v1 = 16 * (i + 7LL);
            *(int (**)(...))((char *)v19 + v1 + 8) = 0LL;
          }
          *(_QWORD *)v18 = 0LL;
          goto LABEL_45;
        }
LABEL_42:
        v17 = __asan_report_load8(v22);
        goto LABEL_43;
      }
LABEL_45:
      v20 = v17;
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        goto LABEL_59;
      *(_QWORD *)v17 = 0LL;
      v21 = *(unsigned __int64 **)(v3 + 104);
      if ( !v21 )
        goto LABEL_61;
      v20 = *(_QWORD *)(v3 + 104);
      v1 = (unsigned __int64)v21 >> 3;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
LABEL_60:
        v17 = __asan_report_store8(v20, v1);
LABEL_61:
        *(_QWORD *)(v3 + 104) = v17;
        *(_QWORD *)(v3 + 96) = v17;
      }
      else
      {
        *v21 = v17;
        *(_QWORD *)(v3 + 104) = v17;
      }
    }
  }
  if ( *(_BYTE *)(v3 + 72) )
  {
    if ( *(char *)(((unsigned __int64)(p_has_native_impl + 48) >> 3) + 0x7FFF8000) < 0 )
    {
      v24 = __asan_report_load1(p_has_native_impl + 48, v1, v15);
    }
    else
    {
      v24 = p_has_native_impl;
      if ( !*(_BYTE *)(p_has_native_impl + 48) )
        goto LABEL_67;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(v24 + 8));
LABEL_67:
    *(_BYTE *)(v3 + 72) = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&reactor->scheduler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&reactor->scheduler_);
  }
  else
  {
    boost::asio::detail::scheduler::post_deferred_completions(
      reactor->scheduler_,
      (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v3 + 96));
    v11 = (boost::asio::ip::tcp::socket *)(v3 + 96);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v3 + 96));
    if ( !*(_BYTE *)(v3 + 72) )
      goto LABEL_70;
  }
  v11 = (boost::asio::ip::tcp::socket *)(p_has_native_impl + 8);
  pthread_mutex_unlock((pthread_mutex_t *)(p_has_native_impl + 8));
LABEL_70:
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_23:
  result = *(_DWORD *)(v3 + 32);
  if ( result )
  {
    __asan_handle_no_return(v11);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v3 + 32), "cancel");
  }
LABEL_16:
  if ( v29 == (char *)v3 )
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

// Line 145: range 0000000014EC386A-0000000014EC406F
void __fastcall common::minet::AServerSession::forceDisconnect(common::minet::AServerSession *const this)
{
  unsigned __int64 v1; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *v2; // r12
  unsigned __int64 socket; // r15
  unsigned __int64 v5; // r13
  _DWORD *v6; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *p_implementation; // rdi
  char v8; // al
  char v9; // dl
  int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // al
  char v15; // al
  boost::asio::detail::socket_ops::state_type *v16; // rdi
  char v17; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  boost::asio::detail::socket_ops::state_type *p_state; // rdi
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdx
  boost::asio::detail::epoll_reactor::per_descriptor_data *p_reactor_data; // rdi
  __int64 v25; // rax
  boost::asio::execution_context **p_owner; // rdi
  boost::asio::execution_context::service *v27; // rax
  boost::asio::execution_context *v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v30; // [rsp+18h] [rbp-E0h]
  common::milog::MiLogStream v31; // [rsp+20h] [rbp-D8h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-B8h] BYREF
  char v33[152]; // [rsp+60h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v5 = v13;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 6 ec:146 64 16 16 descriptors_lock";
  *(_QWORD *)(v5 + 16) = common::minet::AServerSession::forceDisconnect;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  *(_DWORD *)(v5 + 32) = 0;
  *(_BYTE *)(v5 + 36) = 0;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_implementation = &this->sock_.impl_.implementation_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_implementation);
    goto LABEL_18;
  }
  socket = (unsigned int)this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)socket == -1 )
  {
LABEL_18:
    *(_QWORD *)(v5 + 32) = 0x100000009LL;
    *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_11;
  }
  v2 = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *)__errno_location();
  v9 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v2 & 7) + 3) >= v9 && v9 )
  {
    __asan_report_store4(v2, v1);
LABEL_20:
    __asan_report_load4(v2);
LABEL_21:
    v12 = v1;
    __asan_report_load8(v1);
    goto LABEL_22;
  }
  v2->socket_ = 0;
  v1 = 2LL;
  v10 = shutdown(socket, 2);
  v11 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v2 & 7) + 3) >= v11 && v11 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 32) = ((unsigned __int64)(v2->socket_ != 0) << 32) | (unsigned int)v2->socket_;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !v10 )
    *(_QWORD *)(v5 + 32) = 0LL;
LABEL_11:
  if ( !*(_DWORD *)(v5 + 32) )
    goto LABEL_26;
  common::milog::MiLogStream::MiLogStream(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aserver_session.cpp",
    "forceDisconnect",
    150);
  v1 = *(_QWORD *)(v5 + 40);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    goto LABEL_21;
  v12 = *(_QWORD *)v1 + 32LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v12);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(common::milog::MiLogStream *, unsigned __int64, _QWORD))(*(_QWORD *)v1 + 32LL))(
    &v32,
    v1,
    *(unsigned int *)(v5 + 32));
LABEL_23:
  v1 = (unsigned __int64)"shutdown error: %s";
  common::milog::MiLogStream::operator()(&v31, "shutdown error: %s", (const char *)v32.log_);
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v32.log_ != &v32.ostr_ptr_._M_refcount )
    operator delete(v32.log_);
  common::milog::MiLogStream::~MiLogStream(&v31);
LABEL_26:
  if ( *(_BYTE *)(((unsigned __int64)&this->sock_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->sock_);
LABEL_40:
    __asan_report_load4(v2);
    goto LABEL_41;
  }
  socket = (unsigned __int64)this->sock_.impl_.service_;
  v29 = socket + 40;
  v2 = &this->sock_.impl_.implementation_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_40;
  v1 = (unsigned int)this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)v1 == -1 )
  {
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_31;
  }
LABEL_41:
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
    p_state = (boost::asio::detail::socket_ops::state_type *)v29;
    __asan_report_load8(v29);
LABEL_68:
    __asan_report_load1(p_state, v1, v21);
LABEL_69:
    __asan_report_load4(v2);
    goto LABEL_70;
  }
  p_state = &v2->state_;
  v21 = *(unsigned __int8 *)(((unsigned __int64)&v2->state_ >> 3) + 0x7FFF8000);
  if ( (char)v21 <= (((unsigned __int8)v2 + 4) & 7) && (_BYTE)v21 )
    goto LABEL_68;
  boost::asio::detail::epoll_reactor::deregister_descriptor(
    *(boost::asio::detail::epoll_reactor *const *)(socket + 40),
    v1,
    &v2->reactor_data_,
    ((v2->state_ >> 6) ^ 1) & 1);
  v1 = (unsigned __int64)&v2->state_;
  v22 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_69;
  boost::asio::detail::socket_ops::close(
    this->sock_.impl_.implementation_.socket_,
    (boost::asio::detail::socket_ops::state_type *)v1,
    0,
    (boost::system::error_code *)(v5 + 32));
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    p_reactor_data = (boost::asio::detail::epoll_reactor::per_descriptor_data *)v29;
    __asan_report_load8(v29);
    goto LABEL_71;
  }
  v29 = *(_QWORD *)(socket + 40);
  p_reactor_data = &v2->reactor_data_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->reactor_data_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_reactor_data);
LABEL_72:
    v25 = __asan_report_load1(p_reactor_data, v1, v23);
    goto LABEL_73;
  }
  socket = (unsigned __int64)v2->reactor_data_;
  if ( !socket )
    goto LABEL_31;
  v1 = v29 + 136;
  v30 = v29 + 136;
  p_reactor_data = (boost::asio::detail::epoll_reactor::per_descriptor_data *)(v29 + 184);
  if ( *(char *)(((v29 + 184) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_72;
  v25 = v29;
  if ( !*(_BYTE *)(v29 + 184) )
  {
    *(_BYTE *)(v5 + 72) = 0;
    goto LABEL_52;
  }
LABEL_73:
  pthread_mutex_lock((pthread_mutex_t *)(v25 + 144));
  *(_BYTE *)(v5 + 72) = 1;
LABEL_52:
  if ( *(_BYTE *)(((v29 + 192) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v29 + 192);
  }
  else if ( socket != *(_QWORD *)(v29 + 192) )
  {
    goto LABEL_54;
  }
  p_owner = (boost::asio::execution_context **)(socket + 24);
  if ( *(_BYTE *)(((socket + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_owner);
    goto LABEL_78;
  }
  v1 = v29;
  *(_QWORD *)(v29 + 192) = *(_QWORD *)(socket + 24);
LABEL_54:
  p_owner = (boost::asio::execution_context **)(socket + 32);
  if ( *(_BYTE *)(((socket + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_owner);
LABEL_79:
    __asan_report_load8(p_owner);
    goto LABEL_80;
  }
  v27 = *(boost::asio::execution_context::service **)(socket + 32);
  if ( !v27 )
    goto LABEL_59;
  p_owner = (boost::asio::execution_context **)(socket + 24);
  if ( *(_BYTE *)(((socket + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_79;
  p_owner = &v27->owner_;
  if ( *(_BYTE *)(((unsigned __int64)&v27->owner_ >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_store8(p_owner, v1);
    goto LABEL_81;
  }
  v27->owner_ = *(boost::asio::execution_context **)(socket + 24);
LABEL_59:
  p_owner = (boost::asio::execution_context **)(socket + 24);
  if ( *(_BYTE *)(((socket + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(p_owner);
    goto LABEL_82;
  }
  v28 = *(boost::asio::execution_context **)(socket + 24);
  if ( !v28 )
    goto LABEL_63;
  p_owner = (boost::asio::execution_context **)&v28[4];
  if ( *(_BYTE *)(((unsigned __int64)&v28[4] >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_store8(p_owner, v1);
    goto LABEL_83;
  }
  v28[4].service_registry_ = *(boost::asio::detail::service_registry **)(socket + 32);
LABEL_63:
  p_owner = (boost::asio::execution_context **)(v29 + 200);
  if ( *(_BYTE *)(((v29 + 200) >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_load8(p_owner);
    goto LABEL_84;
  }
  v1 = v29;
  *(_QWORD *)(socket + 24) = *(_QWORD *)(v29 + 200);
  *(_QWORD *)(socket + 32) = 0LL;
  *(_QWORD *)(v29 + 200) = socket;
  if ( *(_BYTE *)(v5 + 72) )
LABEL_84:
    pthread_mutex_unlock((pthread_mutex_t *)(v30 + 8));
  if ( *(_BYTE *)(((unsigned __int64)&v2->reactor_data_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&v2->reactor_data_, v1);
LABEL_86:
    v16 = (boost::asio::detail::socket_ops::state_type *)v2;
    __asan_report_store4(v2, v1);
LABEL_87:
    __asan_report_store1(v16, v1, v18);
LABEL_88:
    v19 = v1;
    __asan_report_load8(v1);
    goto LABEL_89;
  }
  v2->reactor_data_ = 0LL;
LABEL_31:
  v15 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_86;
  this->sock_.impl_.implementation_.socket_ = -1;
  v16 = &v2->state_;
  v17 = *(_BYTE *)(((unsigned __int64)&v2->state_ >> 3) + 0x7FFF8000);
  v18 = ((_BYTE)v2 + 4) & 7;
  if ( v17 <= (char)v18 && v17 )
    goto LABEL_87;
  v2->state_ = 0;
  if ( !*(_DWORD *)(v5 + 32) )
    goto LABEL_93;
  common::milog::MiLogStream::MiLogStream(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aserver_session.cpp",
    "forceDisconnect",
    155);
  v1 = *(_QWORD *)(v5 + 40);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    goto LABEL_88;
  v19 = *(_QWORD *)v1 + 32LL;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(v19);
    goto LABEL_90;
  }
  (*(void (__fastcall **)(common::milog::MiLogStream *, unsigned __int64, _QWORD))(*(_QWORD *)v1 + 32LL))(
    &v32,
    v1,
    *(unsigned int *)(v5 + 32));
LABEL_90:
  common::milog::MiLogStream::operator()(&v31, "close error: %s", (const char *)v32.log_);
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v32.log_ != &v32.ostr_ptr_._M_refcount )
    operator delete(v32.log_);
  common::milog::MiLogStream::~MiLogStream(&v31);
LABEL_93:
  common::milog::MiLogStream::MiLogStream(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/aserver_session.cpp",
    "forceDisconnect",
    157);
  common::milog::MiLogStream::operator()(&v32, "forceDisconnect session!");
  common::milog::MiLogStream::~MiLogStream(&v32);
  if ( v33 == (char *)v5 )
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

// Line 164: range 0000000014EC443A-0000000014EC4693
int32_t __fastcall common::minet::AServerSession::keepAlive(common::minet::AServerSession *const this)
{
  __int64 v1; // rsi
  common::minet::AServerSession *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  void (__fastcall *v5)(common::minet::AServerSession *, __int64 *); // rdx
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rax
  int32_t v9; // ebp
  char v10; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-98h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v14; // [rsp+8h] [rbp-90h]
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-88h] BYREF
  char v16[104]; // [rsp+30h] [rbp-68h] BYREF

  v2 = this;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v3 = v8;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 packet_ptr:165";
  *(_QWORD *)(v3 + 16) = common::minet::AServerSession::keepAlive;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( !*(_QWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "keepAlive",
      168);
    common::milog::MiLogStream::operator()(&v15, "createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v9 = -1;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_15;
  }
  this = (common::minet::AServerSession *const)(this->_vptr_AServerSession + 10);
  if ( *(_BYTE *)(((unsigned __int64)(v2->_vptr_AServerSession + 10) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(this);
LABEL_16:
    v6 = __asan_report_store4(this, v1);
    goto LABEL_17;
  }
  v5 = (void (__fastcall *)(common::minet::AServerSession *, __int64 *))*((_QWORD *)v2->_vptr_AServerSession + 10);
  v13 = *(_QWORD *)(v3 + 32);
  v6 = *(_QWORD *)(v3 + 40);
  v14 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v6;
  if ( !v6 )
    goto LABEL_10;
  this = (common::minet::AServerSession *const)(v6 + 8);
  if ( &_pthread_key_create )
  {
    v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)this & 7) + 3) < v7 || !v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)this, 1u);
      goto LABEL_10;
    }
    goto LABEL_16;
  }
LABEL_17:
  v10 = *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 8) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(v6 + 8);
    goto LABEL_21;
  }
  ++*(_DWORD *)(v6 + 8);
LABEL_10:
  v5(v2, &v13);
LABEL_21:
  if ( v14 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v14);
  v9 = 0;
LABEL_24:
  v11 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 40);
  if ( v11 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v11);
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v9;
};

// Line 179: range 0000000014ECC910-0000000014ECE654
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::AServerSession::keepAliveHandler(
        common::minet::AServerSession *const this,
        const boost::system::error_code *ec,
        __int64 timeout_sec)
{
  boost::asio::deadline_timer *p_keep_alive_dt; // r15
  __int64 v6; // r13
  const char *v7; // rsi
  _DWORD *v8; // r12
  uint16_t *p_timeout_sec; // rdi
  char v10; // al
  char v11; // al
  common::minet::AServerSession::Status *p_status; // rdi
  char v13; // al
  common::minet::AServerSession::Status status; // eax
  char v15; // al
  uint16_t *p_keep_alive_sec; // rdi
  char v17; // dl
  uint16_t keep_alive_sec; // ax
  char v19; // al
  boost::posix_time::ptime v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // dl
  common::minet::AServerSession *v24; // rdi
  void *p_last_alive_time; // rdi
  char v26; // al
  char v27; // dl
  char v28; // al
  time_t v29; // rax
  char v30; // cl
  char v31; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::shared_ptr<common::minet::AServerSession> v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rdi
  _BYTE v38[65]; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v39; // [rsp+60h] [rbp-110h] BYREF
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> > handler; // [rsp+90h] [rbp-E0h] BYREF
  char v41[144]; // [rsp+E0h] [rbp-90h] BYREF

  *(_QWORD *)&v38[24] = ec;
  *(_QWORD *)&v38[40] = v41;
  *(_QWORD *)&v38[32] = v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_1(96LL);
    if ( v22 )
      *(_QWORD *)&v38[40] = v22;
  }
  v6 = *(_QWORD *)&v38[40] + 96LL;
  **(_QWORD **)&v38[40] = 1102416563LL;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 8LL) = "2 32 16 12 self_ptr:218 64 16 2 ec";
  v7 = (const char *)common::minet::AServerSession::keepAliveHandler;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 16LL) = common::minet::AServerSession::keepAliveHandler;
  v8 = (_DWORD *)(*(_QWORD *)&v38[40] >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -202178560;
  p_timeout_sec = &this->timeout_sec_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_load4(p_timeout_sec);
LABEL_30:
    p_status = (common::minet::AServerSession::Status *)timeout_sec;
    __asan_report_load4(timeout_sec);
LABEL_31:
    __asan_report_load4(p_status);
    goto LABEL_32;
  }
  if ( !*(_DWORD *)&this->timeout_sec_ )
    goto LABEL_118;
  v11 = *(_BYTE *)(((unsigned __int64)timeout_sec >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_30;
  if ( *(_DWORD *)timeout_sec )
    goto LABEL_118;
  p_status = &this->status_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_31;
  status = this->status_;
  if ( status == STATUS_STOP )
  {
LABEL_32:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v38[64],
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/aserver_session.cpp",
      "keepAliveHandler",
      189);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v38[64],
      "keepAliveHandler over because of STATUS_STOP");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38[64]);
    goto LABEL_118;
  }
  if ( status == STATUS_START_0 )
  {
    v23 = *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 70) & 7) + 1) >= v23 && v23 )
    {
      __asan_report_load2(&this->keep_alive_sec_);
    }
    else
    {
      if ( !this->keep_alive_sec_ )
        goto LABEL_12;
      if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        v24 = (common::minet::AServerSession *)(this->_vptr_AServerSession + 2);
        if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          if ( !(*((unsigned int (__fastcall **)(common::minet::AServerSession *const))this->_vptr_AServerSession + 2))(this) )
            goto LABEL_12;
          timeout_sec = (__int64)&v38[64];
          common::milog::MiLogStream::MiLogStream(
            (common::milog::MiLogStream *const)&v38[64],
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/aserver_session.cpp",
            "keepAliveHandler",
            198);
          v7 = "call onKeepAlive failed.";
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&v38[64],
            "call onKeepAlive failed.");
LABEL_43:
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)timeout_sec);
          goto LABEL_12;
        }
LABEL_42:
        __asan_report_load8(v24);
        goto LABEL_43;
      }
    }
    v24 = this;
    __asan_report_load8(this);
    goto LABEL_42;
  }
LABEL_12:
  v15 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
  {
    __asan_report_load4(&this->status_);
    goto LABEL_45;
  }
  if ( this->status_ == STATUS_START_0 )
  {
LABEL_45:
    p_last_alive_time = &this->timeout_sec_;
    v26 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
    if ( v26 && v26 <= 1 )
    {
      __asan_report_load2(p_last_alive_time);
    }
    else
    {
      timeout_sec = this->timeout_sec_;
      if ( !(_WORD)timeout_sec )
        goto LABEL_15;
      p_last_alive_time = &this->last_alive_time_;
      v27 = *(_BYTE *)(((unsigned __int64)&this->last_alive_time_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this - 68) & 7) + 3) < v27 || !v27 )
      {
        timeout_sec = this->last_alive_time_ + (unsigned __int16)timeout_sec;
        if ( timeout_sec >= time(0LL) )
          goto LABEL_15;
        common::minet::AServerSession::stop(this);
        v7 = (const char *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&v38[64],
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/aserver_session.cpp",
          "keepAliveHandler",
          208);
        p_last_alive_time = &this->timeout_sec_;
        v28 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
        if ( !v28 || v28 > 1 )
        {
          timeout_sec = this->timeout_sec_;
          v29 = time(0LL);
          p_last_alive_time = &this->last_alive_time_;
          v30 = *(_BYTE *)(((unsigned __int64)&this->last_alive_time_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this - 68) & 7) + 3) < v30 || !v30 )
          {
            p_last_alive_time = &this->client_port_;
            v31 = *(_BYTE *)(((unsigned __int64)&this->client_port_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)this - 14) & 7) + 1) < v31 || !v31 )
            {
              p_last_alive_time = &this->ip_str_;
              if ( !*(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
              {
                p_last_alive_time = &this->session_id_;
                v7 = (const char *)*(unsigned __int8 *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)this + 28) & 7) + 3) < (char)v7 || !(_BYTE)v7 )
                {
                  v7 = "[NETWORK][ECS]session_id=%u to %s:%u timeout with last_alive_time=%u, cur_time=%lu, timeout_sec=%u.";
                  common::milog::MiLogStream::operator()(
                    (common::milog::MiLogStream *const)&v38[64],
                    "[NETWORK][ECS]session_id=%u to %s:%u timeout with last_alive_time=%u, cur_time=%lu, timeout_sec=%u.",
                    this->session_id_,
                    this->ip_str_._M_dataplus._M_p,
                    this->client_port_,
                    this->last_alive_time_,
                    v29,
                    timeout_sec);
LABEL_68:
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38[64]);
                  goto LABEL_15;
                }
LABEL_67:
                __asan_report_load4(p_last_alive_time);
                goto LABEL_68;
              }
LABEL_66:
              __asan_report_load8(p_last_alive_time);
              goto LABEL_67;
            }
LABEL_65:
            __asan_report_load2(p_last_alive_time);
            goto LABEL_66;
          }
LABEL_64:
          __asan_report_load4(p_last_alive_time);
          goto LABEL_65;
        }
LABEL_63:
        __asan_report_load2(p_last_alive_time);
        goto LABEL_64;
      }
    }
    __asan_report_load4(p_last_alive_time);
    goto LABEL_63;
  }
LABEL_15:
  p_keep_alive_sec = &this->keep_alive_sec_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 70) & 7) + 1) >= v17 && v17 )
  {
    __asan_report_load2(p_keep_alive_sec);
    goto LABEL_70;
  }
  keep_alive_sec = this->keep_alive_sec_;
  if ( keep_alive_sec )
    goto LABEL_21;
  p_keep_alive_sec = &this->timeout_sec_;
  v19 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 1 )
  {
LABEL_70:
    __asan_report_load2(p_keep_alive_sec);
    goto LABEL_71;
  }
  keep_alive_sec = this->timeout_sec_;
LABEL_21:
  p_keep_alive_dt = &this->keep_alive_dt_;
  *(_QWORD *)&v38[48] = 1000000LL * keep_alive_sec;
  *(_DWORD *)(*(_QWORD *)&v38[40] + 64LL) = 0;
  *(_BYTE *)(*(_QWORD *)&v38[40] + 68LL) = 0;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 72LL) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v20.time_.time_count_.value_ = __asan_report_load8(p_keep_alive_dt);
    goto LABEL_72;
  }
  *(_QWORD *)&v38[8] = this->keep_alive_dt_.impl_.service_;
  timeout_sec = (__int64)&this->keep_alive_dt_.impl_.implementation_;
  v20.time_.time_count_.value_ = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time((boost::date_time::microsec_clock<boost::posix_time::ptime>::time_converter)boost::date_time::c_time::gmtime).time_.time_count_.value_;
  *(_QWORD *)&v38[56] = *(_QWORD *)&v38[48];
  if ( v20.time_.time_count_.value_ != 0x8000000000000000LL && v20.time_.time_count_.value_ <= 0x7FFFFFFFFFFFFFFDLL )
  {
    v21 = *(_QWORD *)&v38[48];
    if ( *(_QWORD *)&v38[48] != 0x8000000000000000LL && *(__int64 *)&v38[48] <= 0x7FFFFFFFFFFFFFFDLL )
    {
      v20.time_.time_count_.value_ += *(_QWORD *)&v38[48];
      goto LABEL_87;
    }
  }
LABEL_72:
  v21 = *(_QWORD *)&v38[56];
  if ( v20.time_.time_count_.value_ != 0x8000000000000000LL
    && v20.time_.time_count_.value_ <= 0x7FFFFFFFFFFFFFFDLL
    && *(_QWORD *)&v38[56] != 0x8000000000000000LL
    && *(__int64 *)&v38[56] <= 0x7FFFFFFFFFFFFFFDLL )
  {
    goto LABEL_76;
  }
  if ( v20.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFELL || *(_QWORD *)&v38[56] == 0x7FFFFFFFFFFFFFFELL )
  {
    v20.time_.time_count_.value_ = 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( v20.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)&v38[56] == 0x8000000000000000LL
         || v20.time_.time_count_.value_ == 0x8000000000000000LL && *(_QWORD *)&v38[56] == 0x7FFFFFFFFFFFFFFFLL )
  {
    v20.time_.time_count_.value_ = 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( v20.time_.time_count_.value_ != 0x8000000000000000LL && v20.time_.time_count_.value_ != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( *(_QWORD *)&v38[56] == 0x7FFFFFFFFFFFFFFFLL )
    {
      v20.time_.time_count_.value_ = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      if ( *(_QWORD *)&v38[56] != 0x8000000000000000LL )
      {
LABEL_76:
        v20.time_.time_count_.value_ += *(_QWORD *)&v38[56];
        goto LABEL_87;
      }
      v20.time_.time_count_.value_ = 0x8000000000000000LL;
    }
  }
LABEL_87:
  *(boost::posix_time::ptime *)&v38[16] = v20;
  if ( *(char *)(((unsigned __int64)(timeout_sec + 8) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(timeout_sec + 8, v7, v21);
  }
  else if ( !*(_BYTE *)(timeout_sec + 8) )
  {
    *(_QWORD *)(*(_QWORD *)&v38[40] + 64LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)&v38[40] + 72LL) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_90;
  }
  v34 = *(_QWORD *)&v38[8] + 104LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v38[8] + 104LL) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v34);
    goto LABEL_106;
  }
  v7 = (const char *)(*(_QWORD *)&v38[8] + 40LL);
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    *(boost::asio::detail::epoll_reactor *const *)(*(_QWORD *)&v38[8] + 104LL),
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)(*(_QWORD *)&v38[8] + 40LL),
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(timeout_sec + 16),
    0xFFFFFFFFFFFFFFFFLL);
  v34 = timeout_sec + 8;
  if ( *(char *)(((unsigned __int64)(timeout_sec + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_106:
    __asan_report_store1(v34, v7, v35);
    goto LABEL_107;
  }
  *(_BYTE *)(timeout_sec + 8) = 0;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 64LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 72LL) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_90:
  if ( *(_BYTE *)(((unsigned __int64)timeout_sec >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)timeout_sec;
    __asan_report_store8(timeout_sec, v7);
    goto LABEL_108;
  }
  p_keep_alive_dt->impl_.implementation_.expiry.time_.time_count_.value_ = *(_QWORD *)&v38[16];
  *(_QWORD *)(*(_QWORD *)&v38[40] + 64LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 72LL) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_M_refcount);
LABEL_109:
    __asan_report_load8(p_M_refcount);
    goto LABEL_110;
  }
  p_M_refcount = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 40LL) = p_M_refcount;
  if ( !p_M_refcount )
    goto LABEL_111;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(p_M_refcount);
  p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->std::enable_shared_from_this<common::minet::AServerSession>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AServerSession> >> 3)
                + 0x7FFF8000) )
    goto LABEL_109;
  *(_QWORD *)(*(_QWORD *)&v38[40] + 32LL) = this->_M_weak_this._M_ptr;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v39,
    *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&v38[24]);
  std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *const)(*(_QWORD *)&v38[40] + 64LL),
    (const std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *)(*(_QWORD *)&v38[40] + 32LL));
  v33._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(*(_QWORD *)&v38[40] + 64LL);
  v33._M_ptr = 0LL;
  boost::bind<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&,std::shared_ptr<common::minet::AServerSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::arg<1> (*)(void)>(
    &handler,
    (void (*)(common::minet::AServerSession *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >, const boost::system::error_code *))common::minet::AServerSession::keepAliveHandler,
    v33,
    *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)v38,
    (boost::arg<1> (*)(void))&v39);
  p_M_refcount = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->keep_alive_dt_;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_load8(p_M_refcount);
LABEL_111:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    this->keep_alive_dt_.impl_.service_,
    &this->keep_alive_dt_.impl_.implementation_,
    &handler,
    &this->keep_alive_dt_.impl_.implementation_executor_);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler.l_.a2_.t_);
  if ( handler.l_.a1_.t_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(handler.l_.a1_.t_._M_refcount._M_pi);
  v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 - 24);
  if ( v36 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v36);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v39);
  v37 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 - 56);
  if ( v37 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v37);
LABEL_118:
  if ( *(_QWORD *)&v38[32] == *(_QWORD *)&v38[40] )
  {
    *((_QWORD *)v8 + 268431360) = 0LL;
    v8[536862722] = 0;
  }
  else
  {
    **(_QWORD **)&v38[40] = 1172321806LL;
    *((_QWORD *)v8 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v8[536862722] = -168430091;
  }
};

// Line 226: range 0000000014ECE65A-0000000014ED2512
void __fastcall common::minet::AServerSession::recvCoroutine(common::minet::AServerSession *const this, __int64 a2)
{
  unsigned __int64 ostr; // r13
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  const char *p_implementation; // rsi
  common::minet::AServerSession::Status *p_status; // rdi
  char v8; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_timeout_sec; // rdi
  char v10; // al
  char v11; // dl
  uint16_t keep_alive_sec; // ax
  char v13; // al
  std::shared_ptr<common::minet::AServerSession> v14; // rdx
  __int64 v15; // rax
  void *p_session_id; // rdi
  char v17; // al
  char v18; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  void *p_ip_str; // rdi
  char v22; // al
  char v23; // dl
  common::minet::AServerSession *v24; // rdi
  unsigned int v25; // eax
  unsigned __int64 v26; // r12
  char v27; // dl
  void *p_last_alive_time; // rdi
  char v29; // al
  uint32_t v30; // eax
  char v31; // cl
  __int64 v32; // rsi
  boost::asio::executor::impl_base *p_recv_buf_len; // rdi
  char v34; // dl
  char *socket; // rsi
  void *p_listen_port; // rdi
  char v37; // al
  char v38; // dl
  int (**vptr_impl_base)(...); // rax
  _Atomic_word *v40; // rdi
  bool v41; // cl
  std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rax
  boost::asio::executor::impl_base *impl; // rdi
  int (**v44)(...); // rax
  __int64 v45; // rax
  unsigned __int64 *v46; // rdi
  unsigned __int64 v47; // rax
  char v48; // al
  unsigned __int64 v49; // rdx
  __int64 v50; // rdx
  char v51; // cl
  unsigned __int64 v52; // rdi
  __int64 v53; // rdx
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // rdx
  char v57; // al
  int v58; // ecx
  char v59; // al
  char v60; // al
  char v61; // al
  char v62; // al
  char v63; // al
  char v64; // al
  __int64 v65; // rax
  __int64 (**v66)(void); // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rdi
  __int64 (**v69)(void); // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 (**v74)(void); // rax
  _QWORD *v75; // rdx
  __int64 (**v76)(void); // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rdi
  char v81; // al
  __int64 v82; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *exception; // rbx
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *v86; // rbx
  char v87; // al
  unsigned __int64 v88; // rdi
  char v89; // dl
  int v90; // eax
  char v91; // cl
  _QWORD *v92; // rcx
  const boost::system::detail::system_error_category *v93; // rdx
  unsigned __int64 v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  char *v97; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v98; // rdi
  signed __int8 v99; // cl
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v102; // rdi
  uint32_t v103; // eax
  void *p_is_cut_packet; // rdi
  char v105; // cl
  __int64 v106; // rdx
  unsigned __int64 p_recv_buf; // rdi
  __int64 (__fastcall *v108)(common::minet::AServerSession *const, const char *, _QWORD, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r12
  unsigned int v109; // eax
  char v110; // al
  unsigned __int64 v111; // rdi
  char v112; // al
  __int64 v113; // rdi
  __int64 v114; // rdx
  unsigned __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rdi
  __int64 v119; // rdi
  __int64 v120; // rax
  unsigned __int64 *v121; // rdx
  unsigned __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // rdi
  char v125; // cl
  __int64 v126; // rdx
  char v127; // cl
  char v128; // al
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rdi
  char v132; // cl
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  char v138; // cl
  struct _Unwind_Exception *v139; // rbp
  __int64 v140; // rdx
  __int64 v141; // r12
  unsigned __int64 *v142; // rax
  char v143; // cl
  __int64 v144; // rdx
  unsigned __int64 *v145; // rax
  __int64 v146; // rax
  unsigned __int64 v147; // rdi
  __int64 v148; // rdx
  __int64 v149; // rdx
  std::runtime_error *v150; // r14
  __int64 v151; // r12
  __int64 v152; // r13
  __int64 v153; // rax
  char *v154; // rdi
  char v155; // al
  __int64 v156; // rdx
  uint32_t *v157; // rdi
  char v158; // dl
  uint32_t *v159; // rsi
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char v162; // dl
  char v163; // al
  char v164; // al
  char v165; // dl
  char v166; // al
  char v167; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  signed __int32 v170; // eax
  signed __int32 v171; // eax
  int v172; // ett
  unsigned __int64 v173; // rax
  char v174; // cl
  unsigned int v175; // eax
  unsigned __int64 v176; // rdi
  unsigned int v177; // eax
  unsigned __int64 v178; // rdi
  unsigned int v179; // eax
  char v180; // al
  unsigned __int64 p_is_player_session; // rdi
  char v182; // al
  __int64 v183; // rdx
  __int64 (__fastcall *v184)(common::minet::AServerSession *const, const char *, _QWORD, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r14
  unsigned int v185; // eax
  void *v186; // rdi
  char v187; // dl
  void *v188; // rdi
  char v189; // dl
  char v190; // dl
  common::minet::AServerSession *v191; // rdi
  __int64 v192; // rax
  uint32_t *p_app_id; // rdi
  char v194; // dl
  char v195; // cl
  unsigned int v196; // edx
  common::minet::AServerSession *v197; // rdi
  __int64 v198; // rax
  volatile signed __int32 *v199; // rdx
  char v200; // cl
  unsigned int v201; // eax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *p_pimpl; // rdi
  __int64 v203; // rax
  __int64 v204; // rdx
  uint32_t *v205; // rdi
  char v206; // cl
  uint32_t v207; // edx
  char v208; // al
  __int64 v209; // rdx
  uint32_t *v210; // rdi
  char v211; // cl
  __int64 v212; // rcx
  char v213; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v214; // rdi
  __int64 v215; // rdx
  uint32_t *v216; // rdi
  char v217; // cl
  __int64 v218; // rcx
  char v219; // dl
  char v220; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v221; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v222; // rdi
  void *v223; // rdi
  char v224; // dl
  char v225; // dl
  char *recv_buf; // rdi
  common::minet::AServerSession *v227; // rdi
  __int64 (__fastcall *v228)(common::minet::AServerSession *const, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r12
  unsigned int v229; // eax
  unsigned __int64 v230; // rbp
  char v231; // dl
  char v232; // al
  char v233; // al
  char *v234; // rdi
  char v235; // al
  __int64 v236; // rdx
  void *p_keep_alive_dt; // rdi
  __int64 service; // rax
  __int64 v239; // rdx
  unsigned __int64 v240; // rdi
  char *v241; // rdi
  __int64 v242; // rdx
  char v243; // al
  __int64 v244; // rdx
  char *v245; // rdi
  unsigned __int64 v246; // rdi
  __int64 v247; // rax
  __int64 v248; // rax
  char *v249; // rdi
  __int64 v250; // rdx
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *px; // rdi
  char v252; // al
  char v253; // dl
  struct _Unwind_Exception *v254; // rbx
  __int64 *v255; // rbp
  __int64 v256; // rax
  const char *v257; // rcx
  char v258; // dl
  _BYTE n[48]; // [rsp+0h] [rbp-468h]
  unsigned int skip_byte_num_0; // [rsp+18h] [rbp-450h]
  unsigned __int64 v261; // [rsp+30h] [rbp-438h]
  unsigned __int64 v262; // [rsp+40h] [rbp-428h]
  unsigned __int64 v263; // [rsp+48h] [rbp-420h]
  _DWORD *v264; // [rsp+50h] [rbp-418h]
  common::milog::MiLogStream v265; // [rsp+60h] [rbp-408h] BYREF
  void *src; // [rsp+80h] [rbp-3E8h] BYREF
  unsigned __int64 v267; // [rsp+88h] [rbp-3E0h]
  char v268; // [rsp+90h] [rbp-3D8h] BYREF
  common::milog::MiLogStream v269; // [rsp+A0h] [rbp-3C8h] BYREF
  common::milog::MiLogStream v270; // [rsp+C0h] [rbp-3A8h] BYREF
  common::milog::MiLogStream v271; // [rsp+E0h] [rbp-388h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v272; // [rsp+100h] [rbp-368h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v273; // [rsp+130h] [rbp-338h] BYREF
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> > handler; // [rsp+160h] [rbp-308h] BYREF
  char v275[696]; // [rsp+1B0h] [rbp-2B8h] BYREF

  *(_QWORD *)&n[16] = a2;
  v263 = (unsigned __int64)v275;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_4(640LL);
    if ( v15 )
      v263 = v15;
  }
  *(_QWORD *)v263 = 1102416563LL;
  *(_QWORD *)(v263 + 8) = "11 48 4 12 info_len:248 64 4 3 arg 80 8 3 tmp 112 8 2 ex 144 12 2 ev 176 16 6 ec:251 208 16 2 "
                          "ec 240 16 16 descriptors_lock 272 24 1 p 336 104 10 t_info:247 480 120 10 completion";
  p_implementation = (const char *)common::minet::AServerSession::recvCoroutine;
  *(_QWORD *)(v263 + 16) = common::minet::AServerSession::recvCoroutine;
  v264 = (_DWORD *)(v263 >> 3);
  v264[536862720] = -235802127;
  v264[536862721] = -234556943;
  v264[536862722] = -234881024;
  v264[536862723] = -234881024;
  v264[536862724] = 0x4000000;
  v264[536862725] = 62194;
  v264[536862726] = 62194;
  v264[536862727] = 62194;
  v264[536862728] = 62194;
  v264[536862729] = -218959360;
  v264[536862730] = 62194;
  v264[536862733] = -234881024;
  v264[536862734] = -218959118;
  v264[536862738] = -218103808;
  v264[536862739] = -202116109;
  p_status = &this->status_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_status);
    goto LABEL_22;
  }
  if ( this->status_ != STATUS_INIT_0 )
  {
LABEL_22:
    common::milog::MiLogStream::MiLogStream(
      &v271,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "recvCoroutine",
      229);
    p_session_id = &this->status_;
    v17 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
    if ( v17 && v17 <= 3 )
    {
      __asan_report_load4(p_session_id);
    }
    else
    {
      p_session_id = &this->session_id_;
      v18 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 28) & 7) + 3) < v18 || !v18 )
      {
        common::milog::MiLogStream::operator()(
          &v271,
          "session_id=%u status=%u, can not do it now.",
          this->session_id_,
          (unsigned int)this->status_);
LABEL_29:
        common::milog::MiLogStream::~MiLogStream(&v271);
        goto LABEL_743;
      }
    }
    __asan_report_load4(p_session_id);
    goto LABEL_29;
  }
  p_timeout_sec = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->timeout_sec_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_load4(p_timeout_sec);
LABEL_31:
    __asan_report_load2(p_timeout_sec);
    goto LABEL_32;
  }
  if ( !*(_DWORD *)&this->timeout_sec_ )
    goto LABEL_41;
  p_timeout_sec = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->keep_alive_sec_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 70) & 7) + 1) >= v11 && v11 )
    goto LABEL_31;
  keep_alive_sec = this->keep_alive_sec_;
  if ( keep_alive_sec )
    goto LABEL_14;
  p_timeout_sec = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->timeout_sec_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 1 )
  {
LABEL_32:
    __asan_report_load2(p_timeout_sec);
    goto LABEL_33;
  }
  keep_alive_sec = this->timeout_sec_;
LABEL_14:
  *(_QWORD *)(v263 + 112) = 1000000LL * keep_alive_sec;
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_from_now(
    &this->keep_alive_dt_,
    (const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::duration_type *)(v263 + 112));
  p_timeout_sec = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_timeout_sec);
LABEL_34:
    __asan_report_load8(p_timeout_sec);
    goto LABEL_35;
  }
  p_timeout_sec = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v263 + 216) = p_timeout_sec;
  if ( !p_timeout_sec )
    goto LABEL_36;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(p_timeout_sec);
  p_timeout_sec = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->std::enable_shared_from_this<common::minet::AServerSession>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AServerSession> >> 3)
                + 0x7FFF8000) )
    goto LABEL_34;
  v3 = v263 + 640;
  *(_QWORD *)(v263 + 208) = this->_M_weak_this._M_ptr;
  ostr = (unsigned __int64)&v273;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v273,
    *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
  std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *const)(v263 + 240),
    (const std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *)(v263 + 208));
  v14._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v263 + 240);
  v14._M_ptr = 0LL;
  boost::bind<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&,std::shared_ptr<common::minet::AServerSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::arg<1> (*)(void)>(
    &handler,
    (void (*)(common::minet::AServerSession *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >, const boost::system::error_code *))common::minet::AServerSession::keepAliveHandler,
    v14,
    *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)n,
    (boost::arg<1> (*)(void))&v273);
  p_timeout_sec = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->keep_alive_dt_;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_timeout_sec);
LABEL_36:
    __asan_handle_no_return(p_timeout_sec);
    std::__throw_bad_weak_ptr();
  }
  p_implementation = (const char *)&this->keep_alive_dt_.impl_.implementation_;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    this->keep_alive_dt_.impl_.service_,
    &this->keep_alive_dt_.impl_.implementation_,
    &handler,
    &this->keep_alive_dt_.impl_.implementation_executor_);
  boost::_bi::storage2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>>::~storage2(&handler.l_);
  v19 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v263 + 248);
  if ( v19 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v19);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
  v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v263 + 216);
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
LABEL_41:
  *(_DWORD *)(v263 + 48) = 104;
  p_ip_str = &this->status_;
  v22 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
  {
    __asan_report_store4(p_ip_str, p_implementation);
    goto LABEL_48;
  }
  this->status_ = STATUS_START_0;
  *(_DWORD *)(v263 + 176) = 0;
  *(_BYTE *)(v263 + 180) = 0;
  *(_QWORD *)(v263 + 184) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v271,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/aserver_session.cpp",
    "recvCoroutine",
    257);
  p_ip_str = &this->ip_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_ip_str);
    goto LABEL_49;
  }
  p_ip_str = &this->session_id_;
  v23 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) < v23 || !v23 )
  {
    p_implementation = "accept new connect with session_id=%u, ip=%s";
    common::milog::MiLogStream::operator()(
      &v271,
      "accept new connect with session_id=%u, ip=%s",
      this->session_id_,
      this->ip_str_._M_dataplus._M_p);
    goto LABEL_50;
  }
LABEL_49:
  __asan_report_load4(p_ip_str);
LABEL_50:
  common::milog::MiLogStream::~MiLogStream(&v271);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v24 = this;
    __asan_report_load8(this);
  }
  else
  {
    v24 = (common::minet::AServerSession *)(this->_vptr_AServerSession + 3);
    if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      ostr = *((_QWORD *)this->_vptr_AServerSession + 3);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v273,
        *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
      p_implementation = (const char *)&v273;
      v25 = ((__int64 (__fastcall *)(common::minet::AServerSession *const, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))ostr)(
              this,
              &v273);
      goto LABEL_55;
    }
  }
  v25 = __asan_report_load8(v24);
LABEL_55:
  v26 = v25;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
  if ( (_DWORD)v26 )
  {
    p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v271,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "recvCoroutine",
      263);
    v27 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v27 && v27 )
    {
      __asan_report_load4(&this->session_id_);
    }
    else
    {
      p_implementation = "session_id=%u call onConnect failed.";
      common::milog::MiLogStream::operator()(&v271, "session_id=%u call onConnect failed.", this->session_id_);
    }
    common::milog::MiLogStream::~MiLogStream(&v271);
    p_last_alive_time = &this->status_;
    v29 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
    if ( v29 && v29 <= 3 )
    {
      __asan_report_store4(p_last_alive_time, p_implementation);
LABEL_67:
      __asan_report_store4(p_last_alive_time, p_implementation);
      goto LABEL_68;
    }
    this->status_ = STATUS_STOPPING_0;
  }
  v30 = time(0LL);
  p_last_alive_time = &this->last_alive_time_;
  v31 = *(_BYTE *)(((unsigned __int64)&this->last_alive_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v31 && v31 )
    goto LABEL_67;
  this->last_alive_time_ = v30;
  v4 = 0LL;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          p_last_alive_time = &this->status_;
          v163 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
          if ( v163 && v163 <= 3 )
          {
LABEL_68:
            __asan_report_load4(p_last_alive_time);
LABEL_69:
            __asan_report_load4(p_last_alive_time);
LABEL_70:
            __asan_report_store4(p_last_alive_time, p_implementation);
LABEL_71:
            __asan_report_load4(p_last_alive_time);
LABEL_72:
            common::milog::MiLogStream::MiLogStream(
              &v265,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/aserver_session.cpp",
              "recvCoroutine",
              283);
            v32 = (__int64)"recv_buf_ is full and packet incomplete, session_id:";
            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
              v265.ostr_,
              "recv_buf_ is full and packet incomplete, session_id:");
            p_recv_buf_len = (boost::asio::executor::impl_base *)&this->session_id_;
            v34 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)this + 28) & 7) + 3) < v34 || !v34 )
            {
              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v265.ostr_, this->session_id_);
              common::milog::MiLogStream::~MiLogStream(&v265);
              goto LABEL_75;
            }
            __asan_report_load4(p_recv_buf_len);
LABEL_82:
            __asan_report_load4(p_recv_buf_len);
LABEL_83:
            __asan_report_load8(p_recv_buf_len);
LABEL_84:
            vptr_impl_base = (int (**)(...))__asan_report_load8(p_recv_buf_len);
LABEL_85:
            v40 = (_Atomic_word *)vptr_impl_base;
            __asan_report_load8(vptr_impl_base);
            goto LABEL_86;
          }
          if ( this->status_ != STATUS_START_0 )
            goto LABEL_75;
          p_last_alive_time = &this->sock_.impl_.implementation_;
          v164 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
          if ( v164 && v164 <= 3 )
            goto LABEL_69;
          p_implementation = (const char *)6;
          if ( getsockopt(
                 this->sock_.impl_.implementation_.socket_,
                 6,
                 11,
                 (void *)(v263 + 336),
                 (socklen_t *)(v263 + 48))
            || *(_BYTE *)(v263 + 336) != 1 )
          {
            goto LABEL_75;
          }
          p_last_alive_time = &this->rtt_;
          v165 = *(_BYTE *)(((unsigned __int64)&this->rtt_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this - 12) & 7) + 3) >= v165 && v165 )
            goto LABEL_70;
          this->rtt_ = *(_DWORD *)(v263 + 404);
          p_last_alive_time = &this->recv_buf_len_;
          v166 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
          if ( v166 && v166 <= 3 )
            goto LABEL_71;
          if ( this->recv_buf_len_ == (_DWORD)v4 )
            goto LABEL_72;
          *(_QWORD *)n = &this->sock_;
          v32 = *(_QWORD *)&n[16];
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
            &v272,
            *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
          v272.ec_ = (boost::system::error_code *)(v263 + 176);
          p_recv_buf_len = (boost::asio::executor::impl_base *)&this->recv_buf_len_;
          v167 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
          if ( v167 && v167 <= 3 )
            goto LABEL_82;
          *(_QWORD *)&n[32] = (unsigned int)(this->recv_buf_len_ - v4);
          p_recv_buf_len = (boost::asio::executor::impl_base *)&this->recv_buf_;
          if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
            goto LABEL_83;
          ostr = (unsigned __int64)&this->recv_buf_[(unsigned int)v4];
          v273.coro_._M_ptr = v272.coro_._M_ptr;
          v273.coro_._M_refcount._M_pi = v272.coro_._M_refcount._M_pi;
          v272.coro_._M_refcount._M_pi = 0LL;
          v272.coro_._M_ptr = 0LL;
          v273.ca_ = v272.ca_;
          p_recv_buf_len = v272.handler_.executor_.impl_;
          if ( v272.handler_.executor_.impl_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)v272.handler_.executor_.impl_ >> 3) + 0x7FFF8000) )
              goto LABEL_84;
            vptr_impl_base = v272.handler_.executor_.impl_->_vptr_impl_base;
            if ( *(_BYTE *)(((unsigned __int64)v272.handler_.executor_.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
              goto LABEL_85;
            p_recv_buf_len = (boost::asio::executor::impl_base *)((__int64 (*)(void))*vptr_impl_base)();
          }
          v273.handler_.executor_.impl_ = p_recv_buf_len;
          v273.handler_.target_ = v272.handler_.target_;
          v273.ec_ = v272.ec_;
          M_pi = v273.coro_._M_refcount._M_pi;
          *(_QWORD *)(v263 + 488) = v273.coro_._M_refcount._M_pi;
          if ( !M_pi )
            goto LABEL_481;
          p_M_use_count = &M_pi->_M_use_count;
          v40 = &M_pi->_M_use_count;
          v32 = *(unsigned __int8 *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < (char)v32 || !(_BYTE)v32 )
          {
            *(_DWORD *)(v263 + 64) = M_pi->_M_use_count;
            while ( 1 )
            {
              v170 = *(_DWORD *)(v263 + 64);
              if ( !v170 )
                goto LABEL_87;
              v172 = *(_DWORD *)(v263 + 64);
              v171 = _InterlockedCompareExchange(p_M_use_count, v170 + 1, v170);
              v41 = v172 == v171;
              if ( v172 != v171 )
                *(_DWORD *)(v263 + 64) = v171;
              if ( v41 )
                goto LABEL_479;
            }
          }
LABEL_86:
          __asan_report_load4(v40);
LABEL_87:
          v41 = 0;
LABEL_479:
          if ( !v41 )
            *(_QWORD *)(v263 + 488) = 0LL;
LABEL_481:
          M_ptr = *(std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v263 + 488);
          if ( M_ptr )
          {
            v173 = (unsigned __int64)&M_ptr[1];
            v174 = *(_BYTE *)((v173 >> 3) + 0x7FFF8000);
            if ( (char)((v173 & 7) + 3) >= v174 && v174 )
            {
              __asan_report_load4(v173);
LABEL_89:
              M_ptr = 0LL;
              goto LABEL_90;
            }
            if ( !*(_DWORD *)v173 )
              goto LABEL_89;
            M_ptr = v273.coro_._M_ptr;
          }
LABEL_90:
          *(_QWORD *)(v263 + 480) = M_ptr;
          *(_QWORD *)(v263 + 496) = v273.ca_;
          impl = v273.handler_.executor_.impl_;
          if ( !v273.handler_.executor_.impl_ )
            goto LABEL_94;
          if ( *(_BYTE *)(((unsigned __int64)v273.handler_.executor_.impl_ >> 3) + 0x7FFF8000) )
          {
            v44 = (int (**)(...))__asan_report_load8(v273.handler_.executor_.impl_);
          }
          else
          {
            v44 = v273.handler_.executor_.impl_->_vptr_impl_base;
            if ( !*(_BYTE *)(((unsigned __int64)v273.handler_.executor_.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
            {
              impl = (boost::asio::executor::impl_base *)((__int64 (*)(void))*v44)();
LABEL_94:
              *(_QWORD *)(v263 + 504) = impl;
              *(_QWORD *)(v263 + 512) = v273.handler_.target_;
              *(_QWORD *)(v263 + 520) = 0LL;
              *(_QWORD *)(v263 + 528) = v273.ec_;
              *(_QWORD *)(v263 + 536) = 0LL;
              boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
              *(_QWORD *)(v263 + 544) = v263 + 480;
              *(_QWORD *)(v263 + 552) = *(_QWORD *)(v263 + 496);
              *(_QWORD *)(v263 + 560) = 2LL;
              *(_DWORD *)(v263 + 576) = 0;
              *(_BYTE *)(v263 + 580) = 0;
              *(_QWORD *)(v263 + 584) = &boost::system::detail::cat_holder<void>::system_category_instance;
              *(_QWORD *)(v263 + 520) = v263 + 560;
              v45 = *(_QWORD *)(v263 + 528);
              *(_QWORD *)(v263 + 568) = v45;
              if ( v45 )
                goto LABEL_95;
              goto LABEL_110;
            }
          }
          __asan_report_load8(v44);
LABEL_110:
          *(_QWORD *)(v263 + 528) = v263 + 576;
LABEL_95:
          *(_QWORD *)(v263 + 536) = v263 + 592;
          v46 = *(unsigned __int64 **)n;
          if ( *(_BYTE *)((*(_QWORD *)n >> 3) + 0x7FFF8000LL) )
          {
            __asan_report_load8(*(_QWORD *)n);
LABEL_112:
            __asan_report_load8(v46);
LABEL_113:
            __asan_report_load8(v46);
LABEL_114:
            __asan_report_load1(v46, v32, v49);
LABEL_115:
            __asan_report_store1(v46, v32, v50);
            goto LABEL_116;
          }
          *(_QWORD *)&n[40] = this->sock_.impl_.service_;
          v261 = *(_QWORD *)&n[40] + 40LL;
          *(_QWORD *)&n[8] = *(_QWORD *)n + 32LL;
          v3 = *(_QWORD *)n + 8LL;
          *(_QWORD *)(v263 + 280) = 0LL;
          *(_QWORD *)(v263 + 288) = 0LL;
          *(_QWORD *)(v263 + 272) = v263 + 480;
          v47 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                                    + __readfsqword(0));
          if ( v47 )
          {
            v46 = (unsigned __int64 *)(v47 + 8);
            if ( *(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000) )
              goto LABEL_112;
            v47 = *(_QWORD *)(v47 + 8);
          }
          if ( !v47 )
            goto LABEL_117;
          v46 = (unsigned __int64 *)v47;
          if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
            goto LABEL_113;
          v26 = *(_QWORD *)v47;
          if ( !*(_QWORD *)v47 )
            goto LABEL_117;
          *(_QWORD *)v47 = 0LL;
          v46 = (unsigned __int64 *)v26;
          v48 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
          v49 = v26 & 7;
          if ( v48 <= (char)v49 && v48 )
            goto LABEL_114;
          v50 = *(unsigned __int8 *)v26;
          if ( (unsigned __int8)v50 > 0x29u )
          {
            v46 = (unsigned __int64 *)(v26 + 168);
            v51 = *(_BYTE *)(((v26 + 168) >> 3) + 0x7FFF8000);
            v32 = ((_BYTE)v26 - 88) & 7;
            if ( v51 > (char)v32 || !v51 )
            {
              *(_BYTE *)(v26 + 168) = v50;
              goto LABEL_120;
            }
            goto LABEL_115;
          }
LABEL_116:
          operator delete((void *)v26);
LABEL_117:
          v26 = operator new(0xA9uLL);
          v52 = v26 + 168;
          v53 = *(unsigned __int8 *)(((v26 + 168) >> 3) + 0x7FFF8000);
          if ( (char)v53 <= (char)((v26 - 88) & 7) && (_BYTE)v53 )
          {
            __asan_report_store1(v52, v32, v53);
LABEL_181:
            __asan_report_load1(v52, v32, v55);
LABEL_182:
            __asan_report_load4(v52);
LABEL_183:
            __asan_report_store8(v52, v32);
LABEL_184:
            __asan_report_store8(v52, v32);
LABEL_185:
            __asan_report_store4(v52, v32);
LABEL_186:
            __asan_report_store4(v52, v32);
LABEL_187:
            __asan_report_store1(v52, v32, v56);
LABEL_188:
            __asan_report_store8(v52, v32);
LABEL_189:
            __asan_report_store8(v52, v32);
LABEL_190:
            __asan_report_store8(v52, v32);
LABEL_191:
            __asan_report_store4(v52, v32);
LABEL_192:
            __asan_report_store1(v52, v32, v56);
LABEL_193:
            __asan_report_store16();
LABEL_194:
            __asan_report_store4(v52, v32);
LABEL_195:
            __asan_report_store8(v52, v32);
LABEL_196:
            __asan_report_store8(v52, v32);
LABEL_197:
            __asan_report_store8(v52, v32);
LABEL_198:
            v66 = (__int64 (**)(void))__asan_report_load8(v52);
LABEL_199:
            v67 = __asan_report_load8(v66);
LABEL_200:
            v68 = v67;
            __asan_report_store8(v67, v32);
LABEL_201:
            __asan_report_store8(v68, v32);
LABEL_202:
            __asan_report_store8(v68, v32);
LABEL_203:
            __asan_report_store8(v68, v32);
LABEL_204:
            __asan_report_store8(v68, v32);
LABEL_205:
            __asan_report_load8(v68);
LABEL_206:
            v69 = (__int64 (**)(void))__asan_report_load8(v68);
LABEL_207:
            v70 = __asan_report_load8(v69);
LABEL_208:
            v72 = v70;
            __asan_report_store8(v70, v32);
LABEL_209:
            __asan_report_load1(v72, v32, v71);
LABEL_210:
            __asan_report_store1(v72, v32, v73);
LABEL_211:
            __asan_report_load8(v72);
LABEL_212:
            v74 = (__int64 (**)(void))__asan_report_load8(v72);
LABEL_213:
            __asan_report_load8(v74);
LABEL_214:
            *(_QWORD *)(v263 + 112) = &`vtable for'boost::asio::bad_executor + 2;
            exception = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
            if ( *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)exception
                                                                                           + 55) & 7)
              || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_store_n(exception, 56LL);
            }
            boost::exception_detail::enable_both<boost::asio::bad_executor>(
              exception,
              (const boost::asio::bad_executor *)(v263 + 112));
            __asan_handle_no_return(exception);
            _cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
              (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
          }
          *(_BYTE *)(v26 + 168) = 42;
LABEL_120:
          *(_QWORD *)(v263 + 280) = v26;
          v52 = v3 + 4;
          v54 = *(_BYTE *)(((v3 + 4) >> 3) + 0x7FFF8000);
          v55 = ((_BYTE)v3 + 4) & 7;
          if ( v54 <= (char)v55 && v54 )
            goto LABEL_181;
          v56 = *(unsigned __int8 *)(v3 + 4);
          v52 = v3;
          v57 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
          if ( v57 && v57 <= 3 )
            goto LABEL_182;
          v58 = *(_DWORD *)(*(_QWORD *)n + 8LL);
          v52 = v26;
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            goto LABEL_183;
          *(_QWORD *)v26 = 0LL;
          v52 = v26 + 8;
          if ( *(_BYTE *)(((v26 + 8) >> 3) + 0x7FFF8000) )
            goto LABEL_184;
          *(_QWORD *)(v26 + 8) = boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
          v52 = v26 + 16;
          v59 = *(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000);
          if ( v59 && v59 <= 3 )
            goto LABEL_185;
          *(_DWORD *)(v26 + 16) = 0;
          v52 = v26 + 24;
          v60 = *(_BYTE *)(((v26 + 24) >> 3) + 0x7FFF8000);
          if ( v60 && v60 <= 3 )
            goto LABEL_186;
          *(_DWORD *)(v26 + 24) = 0;
          v52 = v26 + 28;
          v61 = *(_BYTE *)(((v26 + 28) >> 3) + 0x7FFF8000);
          v32 = ((_BYTE)v26 + 28) & 7;
          if ( v61 <= (char)v32 && v61 )
            goto LABEL_187;
          *(_BYTE *)(v26 + 28) = 0;
          v52 = v26 + 32;
          if ( *(_BYTE *)(((v26 + 32) >> 3) + 0x7FFF8000) )
            goto LABEL_188;
          *(_QWORD *)(v26 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
          v52 = v26 + 40;
          if ( *(_BYTE *)(((v26 + 40) >> 3) + 0x7FFF8000) )
            goto LABEL_189;
          *(_QWORD *)(v26 + 40) = 0LL;
          v52 = v26 + 48;
          if ( *(_BYTE *)(((v26 + 48) >> 3) + 0x7FFF8000) )
            goto LABEL_190;
          *(_QWORD *)(v26 + 48) = boost::asio::detail::reactive_socket_recv_op_base<boost::asio::mutable_buffers_1>::do_perform;
          v52 = v26 + 56;
          v62 = *(_BYTE *)(((v26 + 56) >> 3) + 0x7FFF8000);
          if ( v62 && v62 <= 3 )
            goto LABEL_191;
          *(_DWORD *)(v26 + 56) = v58;
          v52 = v26 + 60;
          v63 = *(_BYTE *)(((v26 + 60) >> 3) + 0x7FFF8000);
          if ( v63 <= (char)((v26 + 60) & 7) && v63 )
            goto LABEL_192;
          *(_BYTE *)(v26 + 60) = v56;
          v52 = v26 + 64;
          if ( *(_WORD *)(((v26 + 64) >> 3) + 0x7FFF8000) )
            goto LABEL_193;
          *(_QWORD *)(v26 + 64) = ostr;
          *(_QWORD *)(v26 + 72) = *(_QWORD *)&n[32];
          v52 = v26 + 80;
          v64 = *(_BYTE *)(((v26 + 80) >> 3) + 0x7FFF8000);
          if ( v64 && v64 <= 3 )
            goto LABEL_194;
          *(_DWORD *)(v26 + 80) = 0;
          ostr = v26 + 88;
          v52 = v26 + 88;
          if ( *(_BYTE *)(((v26 + 88) >> 3) + 0x7FFF8000) )
            goto LABEL_195;
          *(_QWORD *)(v26 + 88) = *(_QWORD *)(v263 + 480);
          v52 = v26 + 96;
          if ( *(_BYTE *)(((v26 + 96) >> 3) + 0x7FFF8000) )
            goto LABEL_196;
          *(_QWORD *)(v26 + 96) = 0LL;
          v65 = *(_QWORD *)(v263 + 488);
          *(_QWORD *)(v263 + 488) = 0LL;
          *(_QWORD *)(v26 + 96) = v65;
          *(_QWORD *)(v263 + 480) = 0LL;
          v52 = v26 + 104;
          if ( *(_BYTE *)(((v26 + 104) >> 3) + 0x7FFF8000) )
            goto LABEL_197;
          *(_QWORD *)(v26 + 104) = *(_QWORD *)(v263 + 496);
          v52 = *(_QWORD *)(v263 + 504);
          if ( v52 )
          {
            if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
              goto LABEL_198;
            v66 = *(__int64 (***)(void))v52;
            if ( *(_BYTE *)((*(_QWORD *)v52 >> 3) + 0x7FFF8000LL) )
              goto LABEL_199;
            v52 = (*v66)();
          }
          v67 = v26 + 112;
          if ( *(_BYTE *)(((v26 + 112) >> 3) + 0x7FFF8000) )
            goto LABEL_200;
          *(_QWORD *)(v26 + 112) = v52;
          v68 = v26 + 120;
          if ( *(_BYTE *)(((v26 + 120) >> 3) + 0x7FFF8000) )
            goto LABEL_201;
          *(_QWORD *)(v26 + 120) = *(_QWORD *)(v263 + 512);
          v68 = v26 + 128;
          if ( *(_BYTE *)(((v26 + 128) >> 3) + 0x7FFF8000) )
            goto LABEL_202;
          *(_QWORD *)(v26 + 128) = *(_QWORD *)(v263 + 520);
          v68 = v26 + 136;
          if ( *(_BYTE *)(((v26 + 136) >> 3) + 0x7FFF8000) )
            goto LABEL_203;
          *(_QWORD *)(v26 + 136) = *(_QWORD *)(v263 + 528);
          v68 = v26 + 144;
          if ( *(_BYTE *)(((v26 + 144) >> 3) + 0x7FFF8000) )
            goto LABEL_204;
          *(_QWORD *)(v26 + 144) = *(_QWORD *)(v263 + 536);
          *(_QWORD *)&n[24] = v26 + 152;
          v68 = *(_QWORD *)&n[8];
          if ( *(_BYTE *)((*(_QWORD *)&n[8] >> 3) + 0x7FFF8000LL) )
            goto LABEL_205;
          v68 = *(_QWORD *)(*(_QWORD *)n + 32LL);
          if ( v68 )
          {
            if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
              goto LABEL_206;
            v69 = *(__int64 (***)(void))v68;
            if ( *(_BYTE *)((*(_QWORD *)v68 >> 3) + 0x7FFF8000LL) )
              goto LABEL_207;
            v68 = (*v69)();
          }
          v70 = v26 + 152;
          v71 = (v26 + 152) >> 3;
          if ( *(_BYTE *)(v71 + 0x7FFF8000) )
            goto LABEL_208;
          *(_QWORD *)(v26 + 152) = v68;
          v72 = *(_QWORD *)&n[8] + 8LL;
          if ( *(char *)(((unsigned __int64)(*(_QWORD *)&n[8] + 8LL) >> 3) + 0x7FFF8000) < 0 )
            goto LABEL_209;
          v73 = *(unsigned __int8 *)(*(_QWORD *)&n[8] + 8LL);
          v72 = v26 + 160;
          if ( *(char *)(((v26 + 160) >> 3) + 0x7FFF8000) < 0 )
            goto LABEL_210;
          *(_BYTE *)(v26 + 160) = v73;
          v72 = v26 + 112;
          if ( *(_BYTE *)(((v26 + 112) >> 3) + 0x7FFF8000) )
            goto LABEL_211;
          v72 = *(_QWORD *)(v26 + 112);
          if ( v72 )
          {
            if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
              goto LABEL_212;
            v74 = *(__int64 (***)(void))v72;
            if ( *(_BYTE *)((*(_QWORD *)v72 >> 3) + 0x7FFF8000LL) )
              goto LABEL_213;
            v72 = (*v74)();
          }
          *(_QWORD *)(v263 + 80) = v72;
          v75 = (_QWORD *)v72;
          if ( !v72 )
            goto LABEL_214;
          if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v72);
LABEL_219:
            __asan_report_load8(v72);
            goto LABEL_220;
          }
          v76 = *(__int64 (***)(void))v72;
          v72 = *(_QWORD *)v72 + 24LL;
          if ( *(_BYTE *)(((unsigned __int64)(*v75 + 24LL) >> 3) + 0x7FFF8000) )
            goto LABEL_219;
          ((void (__fastcall *)(_QWORD *))v76[3])(v75);
          v72 = v26 + 160;
          if ( *(char *)(((v26 + 160) >> 3) + 0x7FFF8000) >= 0 )
          {
            if ( *(_BYTE *)(v26 + 160) )
              goto LABEL_172;
            goto LABEL_221;
          }
LABEL_220:
          __asan_report_load1(v72, v32, v77);
LABEL_221:
          if ( *(_BYTE *)((*(_QWORD *)&n[24] >> 3) + 0x7FFF8000LL) )
          {
            __asan_report_load8(*(_QWORD *)&n[24]);
LABEL_227:
            *(_QWORD *)(v263 + 112) = &`vtable for'boost::asio::bad_executor + 2;
            v86 = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
            if ( *(_BYTE *)(((unsigned __int64)&v86->gap30[7] >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v86->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)v86 + 55) & 7)
              || *(char *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_store_n(v86, 56LL);
            }
            boost::exception_detail::enable_both<boost::asio::bad_executor>(
              v86,
              (const boost::asio::bad_executor *)(v263 + 112));
            __asan_handle_no_return(v86);
            _cxa_throw(
              v86,
              (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
              (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
          }
          v84 = **(_QWORD **)&n[24];
          if ( !**(_QWORD **)&n[24] )
            goto LABEL_227;
          if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v84);
LABEL_232:
            v78 = v85;
            __asan_report_load8(v85);
LABEL_233:
            __asan_report_load8(v78);
LABEL_234:
            v80 = v79;
            __asan_report_load8(v79);
LABEL_235:
            __asan_report_load1(v80, v32, v82);
            goto LABEL_236;
          }
          v85 = *(_QWORD *)v84 + 24LL;
          if ( *(_BYTE *)((v85 >> 3) + 0x7FFF8000) )
            goto LABEL_232;
          (*(void (**)(void))(*(_QWORD *)v84 + 24LL))();
LABEL_172:
          v78 = *(_QWORD *)(v263 + 80);
          if ( v78 )
          {
            if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
              goto LABEL_233;
            v79 = *(_QWORD *)v78 + 8LL;
            if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
              goto LABEL_234;
            (*(void (**)(void))(*(_QWORD *)v78 + 8LL))();
          }
          *(_QWORD *)(v263 + 288) = v26;
          v80 = v3 + 4;
          v81 = *(_BYTE *)(((v3 + 4) >> 3) + 0x7FFF8000);
          v82 = ((_BYTE)v3 + 4) & 7;
          if ( v81 <= (char)v82 && v81 )
            goto LABEL_235;
          if ( (*(_BYTE *)(v3 + 4) & 0x10) != 0 )
          {
            n[8] = *(_QWORD *)&n[32] == 0LL;
            goto LABEL_237;
          }
LABEL_236:
          n[8] = 0;
LABEL_237:
          if ( n[8] )
            goto LABEL_249;
          if ( (*(_BYTE *)(v3 + 4) & 3) != 0 )
            goto LABEL_288;
          *(_QWORD *)&n[24] = v26 + 24;
          v262 = v3 + 4;
          v87 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
          if ( v87 && v87 <= 3 )
          {
            __asan_report_load4(v3);
LABEL_278:
            v88 = v26 + 24;
            if ( !*(_WORD *)((*(_QWORD *)&n[24] >> 3) + 0x7FFF8000LL) )
            {
              **(_QWORD **)&n[24] = 0x100000009LL;
              *(_QWORD *)(v26 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
              goto LABEL_248;
            }
            __asan_report_store16();
LABEL_281:
            __asan_report_store4(v88, v32);
LABEL_282:
            __asan_report_load4(v88);
LABEL_283:
            __asan_report_store16();
            goto LABEL_284;
          }
          *(_DWORD *)&n[32] = *(_DWORD *)(*(_QWORD *)n + 8LL);
          if ( *(_DWORD *)&n[32] == -1 )
            goto LABEL_278;
          ostr = (unsigned __int64)__errno_location();
          v88 = ostr;
          v89 = *(_BYTE *)((ostr >> 3) + 0x7FFF8000);
          if ( (char)((ostr & 7) + 3) >= v89 && v89 )
            goto LABEL_281;
          *(_DWORD *)ostr = 0;
          *(_DWORD *)(v263 + 64) = 1;
          v32 = 21537LL;
          v90 = ioctl(*(int *)&n[32], 0x5421uLL, v263 + 64);
          v88 = ostr;
          v91 = *(_BYTE *)((ostr >> 3) + 0x7FFF8000);
          if ( (char)((ostr & 7) + 3) >= v91 && v91 )
            goto LABEL_282;
          if ( *(_WORD *)((*(_QWORD *)&n[24] >> 3) + 0x7FFF8000LL) )
            goto LABEL_283;
          v92 = (_QWORD *)(v26 + 24);
          **(_QWORD **)&n[24] = ((unsigned __int64)(*(_DWORD *)ostr != 0) << 32) | *(unsigned int *)ostr;
          v93 = &boost::system::detail::cat_holder<void>::system_category_instance;
          *(_QWORD *)(v26 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
          if ( v90 < 0 )
            goto LABEL_248;
LABEL_284:
          *v92 = 0LL;
          v110 = *(_BYTE *)((v262 >> 3) + 0x7FFF8000);
          if ( v110 <= (char)(v262 & 7) && v110 )
          {
            __asan_report_load1(v262, v32, v93);
LABEL_288:
            v111 = v261;
            if ( *(_BYTE *)((v261 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v261);
            }
            else
            {
              *(_QWORD *)&n[8] = *(_QWORD *)(*(_QWORD *)&n[40] + 40LL);
              ostr = v3 + 8;
              v111 = v3;
              v112 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
              if ( !v112 || v112 > 3 )
              {
                *(_DWORD *)&n[24] = *(_DWORD *)(*(_QWORD *)n + 8LL);
                v111 = v3 + 8;
                if ( !*(_BYTE *)((ostr >> 3) + 0x7FFF8000) )
                {
                  v113 = *(_QWORD *)(v3 + 8);
                  if ( v113 )
                  {
                    *(_QWORD *)n = v113 + 40;
                    *(_QWORD *)(v263 + 240) = v113 + 40;
                    v114 = v113 + 88;
                    if ( *(char *)(((unsigned __int64)(v113 + 88) >> 3) + 0x7FFF8000) >= 0 )
                    {
                      if ( !*(_BYTE *)(v113 + 88) )
                      {
                        *(_BYTE *)(v263 + 248) = 0;
                        goto LABEL_296;
                      }
LABEL_321:
                      pthread_mutex_lock((pthread_mutex_t *)(v113 + 48));
                      *(_BYTE *)(v263 + 248) = 1;
LABEL_296:
                      v115 = ostr;
                      if ( *(_BYTE *)((ostr >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(ostr);
                      }
                      else
                      {
                        v116 = *(_QWORD *)(v3 + 8);
                        v115 = v116 + 163;
                        v117 = *(unsigned __int8 *)(((unsigned __int64)(v116 + 163) >> 3) + 0x7FFF8000);
                        if ( (char)v117 > ((v116 - 93) & 7) || !(_BYTE)v117 )
                        {
                          if ( !*(_BYTE *)(v116 + 163) )
                          {
                            v118 = v116 + 112;
                            if ( !*(_BYTE *)(((unsigned __int64)(v116 + 112) >> 3) + 0x7FFF8000) )
                            {
                              if ( *(_QWORD *)(v116 + 112) )
                                goto LABEL_302;
LABEL_329:
                              if ( *(_BYTE *)(((unsigned __int64)(v116 + 144) >> 3) + 0x7FFF8000) )
                              {
                                v116 = __asan_report_load8(v116 + 144);
                              }
                              else if ( *(_QWORD *)(v116 + 144) )
                              {
                                v124 = v116 + 108;
                                v125 = *(_BYTE *)(((unsigned __int64)(v116 + 108) >> 3) + 0x7FFF8000);
                                if ( (char)(((v116 + 108) & 7) + 3) < v125 || !v125 )
                                {
                                  if ( *(_DWORD *)(v116 + 108) )
                                  {
                                    *(_DWORD *)(v263 + 144) = 0;
                                    *(_QWORD *)(v263 + 148) = 0LL;
                                    v126 = *(_QWORD *)(v3 + 8);
                                    v119 = v126 + 108;
                                    v127 = *(_BYTE *)(((unsigned __int64)(v126 + 108) >> 3) + 0x7FFF8000);
                                    if ( (char)(((v126 + 108) & 7) + 3) < v127 || !v127 )
                                    {
                                      *(_DWORD *)(v263 + 144) = *(_DWORD *)(v126 + 108);
                                      *(_QWORD *)(v263 + 148) = *(_QWORD *)(v3 + 8);
                                      v119 = *(_QWORD *)&n[8] + 112LL;
                                      v128 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 112LL) >> 3) + 0x7FFF8000);
                                      if ( !v128 || v128 > 3 )
                                      {
                                        v32 = 3LL;
                                        epoll_ctl(
                                          *(_DWORD *)(*(_QWORD *)&n[8] + 112LL),
                                          3,
                                          *(int *)&n[24],
                                          (struct epoll_event *)(v263 + 144));
                                        goto LABEL_302;
                                      }
LABEL_382:
                                      __asan_report_load4(v119);
                                      goto LABEL_383;
                                    }
LABEL_381:
                                    __asan_report_load4(v119);
                                    goto LABEL_382;
                                  }
LABEL_376:
                                  v119 = v26 + 24;
                                  if ( *(_WORD *)(((v26 + 24) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store16();
                                  }
                                  else
                                  {
                                    *(_QWORD *)(v26 + 24) = 0x10000005FLL;
                                    *(_QWORD *)(v26 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    v119 = *(_QWORD *)&n[8] + 40LL;
                                    if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 40LL) >> 3) + 0x7FFF8000) )
                                    {
LABEL_325:
                                      v32 = v26;
                                      boost::asio::detail::scheduler::post_immediate_completion(
                                        *(boost::asio::detail::scheduler *const *)(*(_QWORD *)&n[8] + 40LL),
                                        (boost::asio::detail::scheduler::operation *)v26,
                                        1);
                                      if ( *(_BYTE *)(v263 + 248) )
                                        pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)(v263 + 240) + 8LL));
                                      goto LABEL_252;
                                    }
                                  }
                                  __asan_report_load8(v119);
                                  goto LABEL_381;
                                }
                                goto LABEL_349;
                              }
                              v124 = v116 + 160;
                              v129 = *(unsigned __int8 *)(((unsigned __int64)(v116 + 160) >> 3) + 0x7FFF8000);
                              if ( (v129 & 0x80u) == 0LL )
                              {
                                if ( !*(_BYTE *)(v116 + 160) )
                                  goto LABEL_342;
                                goto LABEL_350;
                              }
                              __asan_report_load1(v124, v32, v129);
LABEL_349:
                              __asan_report_load4(v124);
LABEL_350:
                              if ( *(_BYTE *)(((v26 + 48) >> 3) + 0x7FFF8000) )
                                v133 = __asan_report_load8(v26 + 48);
                              else
                                v133 = (*(__int64 (__fastcall **)(unsigned __int64))(v26 + 48))(v26);
                              if ( v133 )
                              {
                                if ( v133 != 2 )
                                  goto LABEL_355;
                                v135 = ostr;
                                ostr >>= 3;
                                if ( *(_BYTE *)(ostr + 2147450880) )
                                {
                                  __asan_report_load8(v135);
                                }
                                else
                                {
                                  v137 = *(_QWORD *)(v3 + 8);
                                  v135 = v137 + 108;
                                  v138 = *(_BYTE *)(((unsigned __int64)(v137 + 108) >> 3) + 0x7FFF8000);
                                  v134 = (((_BYTE)v137 + 108) & 7u) + 3;
                                  if ( (char)(((v137 + 108) & 7) + 3) < v138 || !v138 )
                                  {
                                    if ( !*(_DWORD *)(v137 + 108) )
                                      goto LABEL_355;
                                    v135 = v137 + 160;
                                    v134 = *(unsigned __int8 *)(((unsigned __int64)(v137 + 160) >> 3) + 0x7FFF8000);
                                    if ( (v134 & 0x80u) == 0LL )
                                    {
                                      *(_BYTE *)(v137 + 160) = 0;
LABEL_355:
                                      if ( !*(_BYTE *)(v263 + 248) )
                                      {
LABEL_359:
                                        v131 = *(_QWORD *)&n[8] + 40LL;
                                        if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 40LL) >> 3) + 0x7FFF8000) )
                                          goto LABEL_325;
                                        __asan_report_load8(v131);
                                        goto LABEL_373;
                                      }
                                      v135 = *(_QWORD *)n + 48LL;
                                      if ( *(char *)(((unsigned __int64)(*(_QWORD *)n + 48LL) >> 3) + 0x7FFF8000) >= 0 )
                                      {
                                        v136 = *(_QWORD *)n;
                                        if ( !*(_BYTE *)(*(_QWORD *)n + 48LL) )
                                        {
LABEL_358:
                                          *(_BYTE *)(v263 + 248) = 0;
                                          goto LABEL_359;
                                        }
LABEL_371:
                                        pthread_mutex_unlock((pthread_mutex_t *)(v136 + 8));
                                        goto LABEL_358;
                                      }
LABEL_370:
                                      v136 = __asan_report_load1(v135, v32, v134);
                                      goto LABEL_371;
                                    }
LABEL_369:
                                    __asan_report_store1(v135, v32, v134);
                                    goto LABEL_370;
                                  }
                                }
                                __asan_report_load4(v135);
                                goto LABEL_369;
                              }
LABEL_342:
                              v130 = *(_QWORD *)(v3 + 8);
                              v131 = v130 + 108;
                              v132 = *(_BYTE *)(((unsigned __int64)(v130 + 108) >> 3) + 0x7FFF8000);
                              if ( (char)(((v130 + 108) & 7) + 3) < v132 || !v132 )
                              {
                                if ( *(_DWORD *)(v130 + 108) )
                                {
LABEL_302:
                                  v119 = ostr;
                                  ostr >>= 3;
                                  if ( !*(_BYTE *)(ostr + 2147450880) )
                                  {
                                    v120 = *(_QWORD *)(v3 + 8);
                                    v119 = v26;
                                    if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)v26 = 0LL;
                                      v119 = v120 + 120;
                                      if ( !*(_BYTE *)(((unsigned __int64)(v120 + 120) >> 3) + 0x7FFF8000) )
                                      {
                                        v121 = *(unsigned __int64 **)(v120 + 120);
                                        if ( !v121 )
                                        {
LABEL_387:
                                          *(_QWORD *)(v120 + 120) = v26;
                                          v122 = v120 + 112;
                                          if ( *(_BYTE *)(((unsigned __int64)(v120 + 112) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store8(v122, v32);
LABEL_390:
                                            __asan_report_load8(v122);
LABEL_391:
                                            v139 = (struct _Unwind_Exception *)__asan_report_store8(v122, v32);
                                            v141 = v140;
                                            if ( *(_BYTE *)(v263 + 248) )
                                              pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)n + 8LL));
                                            boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v263 + 272));
                                            goto LABEL_394;
                                          }
                                          *(_QWORD *)(v120 + 112) = v26;
                                          goto LABEL_308;
                                        }
                                        v119 = *(_QWORD *)(v120 + 120);
                                        if ( !*(_BYTE *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000) )
                                        {
                                          *v121 = v26;
                                          *(_QWORD *)(v120 + 120) = v26;
LABEL_308:
                                          v122 = *(_QWORD *)&n[8] + 40LL;
                                          if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 40LL) >> 3) + 0x7FFF8000) )
                                            goto LABEL_390;
                                          v122 = *(_QWORD *)(*(_QWORD *)&n[8] + 40LL) + 208LL;
                                          if ( *(_BYTE *)((v122 >> 3) + 0x7FFF8000) )
                                            goto LABEL_391;
                                          _InterlockedAdd64(
                                            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)&n[8] + 40LL) + 208LL),
                                            1uLL);
                                          if ( *(_BYTE *)(v263 + 248) )
                                            pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)n + 8LL));
                                          goto LABEL_252;
                                        }
LABEL_386:
                                        v120 = __asan_report_store8(v119, v32);
                                        goto LABEL_387;
                                      }
LABEL_385:
                                      __asan_report_load8(v119);
                                      goto LABEL_386;
                                    }
LABEL_384:
                                    __asan_report_store8(v119, v32);
                                    goto LABEL_385;
                                  }
LABEL_383:
                                  __asan_report_load8(v119);
                                  goto LABEL_384;
                                }
                                v131 = v26 + 24;
                                if ( !*(_WORD *)(((v26 + 24) >> 3) + 0x7FFF8000) )
                                {
                                  *(_QWORD *)(v26 + 24) = 0x10000005FLL;
                                  *(_QWORD *)(v26 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                  v131 = *(_QWORD *)&n[8] + 40LL;
                                  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 40LL) >> 3) + 0x7FFF8000) )
                                    goto LABEL_325;
                                  goto LABEL_375;
                                }
LABEL_374:
                                __asan_report_store16();
LABEL_375:
                                __asan_report_load8(v131);
                                goto LABEL_376;
                              }
LABEL_373:
                              __asan_report_load4(v131);
                              goto LABEL_374;
                            }
LABEL_328:
                            v116 = __asan_report_load8(v118);
                            goto LABEL_329;
                          }
LABEL_324:
                          v118 = *(_QWORD *)&n[8] + 40LL;
                          if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 40LL) >> 3) + 0x7FFF8000) )
                            goto LABEL_325;
                          __asan_report_load8(v118);
                          goto LABEL_328;
                        }
                      }
                      __asan_report_load1(v115, v32, v117);
                      goto LABEL_324;
                    }
LABEL_320:
                    v113 = v114;
                    __asan_report_load1(v114, v32, v114);
                    goto LABEL_321;
                  }
LABEL_315:
                  v123 = v26 + 24;
                  if ( *(_WORD *)(((v26 + 24) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store16();
                  }
                  else
                  {
                    *(_QWORD *)(v26 + 24) = 0x100000009LL;
                    *(_QWORD *)(v26 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
                    v123 = *(_QWORD *)&n[8] + 40LL;
                    if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&n[8] + 40LL) >> 3) + 0x7FFF8000) )
                    {
                      v32 = v26;
                      boost::asio::detail::scheduler::post_immediate_completion(
                        *(boost::asio::detail::scheduler *const *)(*(_QWORD *)&n[8] + 40LL),
                        (boost::asio::detail::scheduler::operation *)v26,
                        1);
                      goto LABEL_252;
                    }
                  }
                  __asan_report_load8(v123);
                  goto LABEL_320;
                }
LABEL_314:
                __asan_report_load8(v111);
                goto LABEL_315;
              }
            }
            __asan_report_load4(v111);
            goto LABEL_314;
          }
          *(_BYTE *)v262 |= 2u;
          n[8] = 1;
LABEL_248:
          if ( n[8] )
            goto LABEL_288;
LABEL_249:
          v94 = v261;
          if ( *(_BYTE *)((v261 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v261);
          }
          else
          {
            v95 = *(_QWORD *)(*(_QWORD *)&n[40] + 40LL);
            v94 = v95 + 40;
            if ( !*(_BYTE *)(((unsigned __int64)(v95 + 40) >> 3) + 0x7FFF8000) )
            {
              v32 = v26;
              boost::asio::detail::scheduler::post_immediate_completion(
                *(boost::asio::detail::scheduler *const *)(v95 + 40),
                (boost::asio::detail::scheduler::operation *)v26,
                1);
LABEL_252:
              *(_QWORD *)(v263 + 288) = 0LL;
              *(_QWORD *)(v263 + 280) = 0LL;
              v26 = 0LL;
              goto LABEL_253;
            }
          }
          __asan_report_load8(v94);
          __asan_report_load8(v94);
          v142 = (unsigned __int64 *)__asan_report_load8(v94);
          v97 = (char *)(v26 + 168);
          v143 = *(_BYTE *)(((v26 + 168) >> 3) + 0x7FFF8000);
          if ( v143 <= (char)((v26 - 88) & 7) && v143 )
          {
            __asan_report_load1(v97, v32, ((_DWORD)v26 + 168) & 7);
LABEL_402:
            __asan_report_store1(v97, v32, v144);
LABEL_403:
            __asan_report_store8(v97, v32);
LABEL_404:
            __asan_report_load8(v97);
LABEL_405:
            p_implementation = (const char *)8;
            __asan_report_store_n(v97, 8LL);
            goto LABEL_406;
          }
          v97 = (char *)v26;
          v144 = MEMORY[0x7FFF8000];
          if ( MEMORY[0x7FFF8000] < 0 )
            goto LABEL_402;
          MEMORY[0] = MEMORY[0xA8];
          *v142 = v26;
          *(_QWORD *)(v263 + 280) = 0LL;
LABEL_253:
          v96 = *(_QWORD *)(v263 + 544);
          v97 = (char *)v96;
          if ( *(_BYTE *)((v96 >> 3) + 0x7FFF8000) )
            goto LABEL_403;
          *(_QWORD *)v96 = 0LL;
          v97 = (char *)(v96 + 8);
          if ( *(_BYTE *)(((v96 + 8) >> 3) + 0x7FFF8000) )
            goto LABEL_404;
          v98 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v96 + 8);
          *(_QWORD *)(v96 + 8) = 0LL;
          if ( v98 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v98);
          v97 = (char *)(v263 + 560);
          v99 = *(_BYTE *)(((v263 + 560) >> 3) + 0x7FFF8000);
          p_implementation = (const char *)(((_BYTE)v263 + 48) & 7);
          LOBYTE(p_implementation) = v99 <= (signed __int8)p_implementation;
          if ( ((v99 != 0) & (unsigned __int8)p_implementation) != 0
            || *(_BYTE *)(((v263 + 567) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v263 + 567) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v263 + 55) & 7) )
          {
            goto LABEL_405;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v263 + 560), 0xFFFFFFFFFFFFFFFFLL) == 1 )
            goto LABEL_260;
LABEL_406:
          v145 = *(unsigned __int64 **)(v263 + 552);
          if ( *(_BYTE *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(*(_QWORD *)(v263 + 552));
          }
          else
          {
            v26 = *v145;
            p_implementation = (const char *)*v145;
            boost::context::fiber::resume((boost::context::fiber *const)(v263 + 112));
          }
          if ( v26 != v263 + 112 )
          {
            v146 = *(_QWORD *)(v263 + 112);
            *(_QWORD *)(v263 + 80) = v146;
            *(_QWORD *)(v263 + 112) = 0LL;
            v147 = v26;
            if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v26);
              goto LABEL_416;
            }
            v148 = *(_QWORD *)v26;
            *(_QWORD *)v26 = v146;
            *(_QWORD *)(v263 + 80) = v148;
            boost::context::fiber::~fiber((boost::context::fiber *const)(v263 + 80));
          }
          boost::context::fiber::~fiber((boost::context::fiber *const)(v263 + 112));
          v147 = v26 + 24;
          if ( !*(_BYTE *)(((v26 + 24) >> 3) + 0x7FFF8000) )
          {
            if ( !*(_QWORD *)(v26 + 24) )
            {
LABEL_260:
              if ( *(_QWORD *)(v263 + 568) )
                goto LABEL_261;
              goto LABEL_417;
            }
            std::__exception_ptr::exception_ptr::exception_ptr(
              (std::__exception_ptr::exception_ptr *)(v263 + 112),
              (const std::__exception_ptr::exception_ptr *)(v26 + 24));
            __asan_handle_no_return(v263 + 112);
            v139 = (struct _Unwind_Exception *)std::rethrow_exception((std::__exception_ptr::exception_ptr)(v263 + 112));
            v141 = v149;
            std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(v263 + 112));
LABEL_394:
            boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *const)(v263 + 480));
            boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v272);
            if ( v141 != 1 )
            {
              __asan_handle_no_return(&v272);
              _Unwind_Resume(v139);
            }
            v255 = (__int64 *)__cxa_begin_catch(v139);
            common::milog::MiLogStream::MiLogStream(
              &v271,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/aserver_session.cpp",
              "recvCoroutine",
              440);
            if ( *(_BYTE *)(((unsigned __int64)v255 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v255);
            v256 = *v255;
            if ( *(_BYTE *)(((unsigned __int64)(*v255 + 16) >> 3) + 0x7FFF8000) )
              v256 = __asan_report_load8(*v255 + 16);
            v257 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v256 + 16))(v255);
            v258 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v258 && v258 )
              __asan_report_load4(&this->session_id_);
            common::milog::MiLogStream::operator()(&v271, "session_id=%u catch exception %s.", this->session_id_, v257);
            common::milog::MiLogStream::~MiLogStream(&v271);
            __cxa_end_catch();
            goto LABEL_75;
          }
LABEL_416:
          __asan_report_load8(v147);
LABEL_417:
          if ( *(_DWORD *)(v263 + 576) )
          {
            v150 = (std::runtime_error *)__cxa_allocate_exception(0x40uLL);
            v151 = *(_QWORD *)(v263 + 576);
            v152 = *(_QWORD *)(v263 + 584);
            std::runtime_error::runtime_error(v150, byte_1AE4B540);
            if ( *(_BYTE *)(((unsigned __int64)v150 >> 3) + 0x7FFF8000) )
              __asan_report_store8(v150, byte_1AE4B540);
            *(_QWORD *)v150 = &`vtable for'boost::system::system_error + 2;
            if ( *(_WORD *)((((unsigned __int64)v150 + 16) >> 3) + 0x7FFF8000) )
              __asan_report_store16();
            *((_QWORD *)v150 + 2) = v151;
            *((_QWORD *)v150 + 3) = v152;
            v153 = (__int64)v150 + 48;
            if ( *(_BYTE *)((((unsigned __int64)v150 + 32) >> 3) + 0x7FFF8000) )
              v153 = __asan_report_store8((char *)v150 + 32, byte_1AE4B540);
            *((_QWORD *)v150 + 4) = v153;
            if ( *(_BYTE *)((((unsigned __int64)v150 + 40) >> 3) + 0x7FFF8000) )
              __asan_report_store8((char *)v150 + 40, byte_1AE4B540);
            *((_QWORD *)v150 + 5) = 0LL;
            v154 = (char *)v150 + 48;
            v155 = *(_BYTE *)((((unsigned __int64)v150 + 48) >> 3) + 0x7FFF8000);
            v156 = ((_BYTE)v150 + 48) & 7;
            if ( v155 <= (char)v156 && v155 )
              __asan_report_store1(v154, byte_1AE4B540, v156);
            *((_BYTE *)v150 + 48) = 0;
            __asan_handle_no_return(v154);
            _cxa_throw(
              v150,
              (struct type_info *)&`typeinfo for'boost::system::system_error,
              (void (__fastcall *)(void *))boost::system::system_error::~system_error);
          }
LABEL_261:
          v26 = *(_QWORD *)(v263 + 592);
          v100 = *(_QWORD *)(v263 + 504);
          if ( v100 )
          {
            if ( *(_BYTE *)((v100 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v100);
LABEL_431:
              __asan_report_load8(v101);
              goto LABEL_432;
            }
            v101 = *(_QWORD *)v100 + 8LL;
            if ( *(_BYTE *)((v101 >> 3) + 0x7FFF8000) )
              goto LABEL_431;
            (*(void (**)(void))(*(_QWORD *)v100 + 8LL))();
          }
          v102 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v263 + 488);
          if ( v102 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v102);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v272);
          if ( !*(_DWORD *)(v263 + 176) )
            break;
LABEL_432:
          common::milog::MiLogStream::MiLogStream(
            &v271,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/aserver_session.cpp",
            "recvCoroutine",
            291);
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
            v271.ostr_,
            "recv from session_id fails, session_id:");
          v157 = &this->session_id_;
          v158 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v158 && v158 )
          {
            __asan_report_load4(v157);
LABEL_438:
            __asan_report_load8(v157);
            goto LABEL_439;
          }
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v271.ostr_, this->session_id_);
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v271.ostr_, ", error:");
          v159 = *(uint32_t **)(v263 + 184);
          v157 = v159;
          if ( *(_BYTE *)(((unsigned __int64)v159 >> 3) + 0x7FFF8000) )
            goto LABEL_438;
          v157 = (uint32_t *)(*(_QWORD *)v159 + 32LL);
          if ( !*(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(void **, uint32_t *, _QWORD))(*(_QWORD *)v159 + 32LL))(
              &src,
              v159,
              *(unsigned int *)(v263 + 176));
            goto LABEL_440;
          }
LABEL_439:
          __asan_report_load8(v157);
LABEL_440:
          ostr = (unsigned __int64)v271.ostr_;
          p_implementation = (const char *)src;
          p_cur = v271.ostr_;
          if ( *(_BYTE *)(((unsigned __int64)v271.ostr_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v271.ostr_);
LABEL_448:
            __asan_report_load8(p_cur);
            goto LABEL_449;
          }
          v26 = (unsigned __int64)(v271.ostr_->buffer_.data_ + 0x4000);
          p_cur = (common::milog::MilogStringStream *)&v271.ostr_->buffer_.cur_;
          if ( *(_BYTE *)(((unsigned __int64)&v271.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            goto LABEL_448;
          cur = v271.ostr_->buffer_.cur_;
          v26 = (int)v26 - (int)cur;
          if ( v267 <= v26 )
            v26 = v267;
          memcpy(cur, src, v26);
          *(_QWORD *)(ostr + 8) += v26;
          if ( src != &v268 )
            operator delete(src);
          common::milog::MiLogStream::~MiLogStream(&v271);
        }
        if ( (_DWORD)v26 )
          break;
LABEL_449:
        common::milog::MiLogStream::MiLogStream(
          &v269,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/aserver_session.cpp",
          "recvCoroutine",
          296);
        p_implementation = "recv_data_len is 0, session_id:";
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          v269.ostr_,
          "recv_data_len is 0, session_id:");
        p_is_cut_packet = &this->session_id_;
        v162 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v162 && v162 )
        {
          __asan_report_load4(p_is_cut_packet);
LABEL_487:
          __asan_report_store4(p_is_cut_packet, p_implementation);
LABEL_488:
          __asan_report_load1(p_is_cut_packet, p_implementation, v106);
          goto LABEL_489;
        }
        p_implementation = (const char *)this->session_id_;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          v269.ostr_,
          (unsigned int)p_implementation);
        common::milog::MiLogStream::~MiLogStream(&v269);
      }
      v103 = time(0LL);
      p_is_cut_packet = &this->last_alive_time_;
      v105 = *(_BYTE *)(((unsigned __int64)&this->last_alive_time_ >> 3) + 0x7FFF8000);
      v106 = (((_BYTE)this - 68) & 7u) + 3;
      if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v105 && v105 )
        goto LABEL_487;
      this->last_alive_time_ = v103;
      *(_DWORD *)n = v4 + v26;
      p_is_cut_packet = &this->is_cut_packet_;
      if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_488;
      if ( this->is_cut_packet_ )
        break;
      p_recv_buf = (unsigned __int64)this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        goto LABEL_635;
      p_recv_buf = (unsigned __int64)(this->_vptr_AServerSession + 4);
      if ( *(_BYTE *)((p_recv_buf >> 3) + 0x7FFF8000) )
        goto LABEL_636;
      v108 = (__int64 (__fastcall *)(common::minet::AServerSession *const, const char *, _QWORD, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))*((_QWORD *)this->_vptr_AServerSession + 4);
      p_implementation = *(const char **)&n[16];
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v273,
        *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
      p_recv_buf = (unsigned __int64)&this->recv_buf_;
      if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
        goto LABEL_637;
      p_implementation = this->recv_buf_;
      v109 = v108(this, p_implementation, *(unsigned int *)n, &v273);
LABEL_638:
      v26 = v109;
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
      if ( (_DWORD)v26 )
      {
        if ( (_DWORD)v26 != 11 )
          goto LABEL_75;
        v4 = *(unsigned int *)n;
      }
    }
LABEL_489:
    v4 = *(unsigned int *)n;
    skip_byte_num_0 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v191 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(this);
LABEL_491:
            v175 = __asan_report_load8(v191);
            goto LABEL_492;
          }
          v191 = (common::minet::AServerSession *)(this->_vptr_AServerSession + 9);
          if ( *(_BYTE *)(((unsigned __int64)v191 >> 3) + 0x7FFF8000) )
            goto LABEL_491;
          v175 = (*((__int64 (__fastcall **)(common::minet::AServerSession *const))this->_vptr_AServerSession + 9))(this);
LABEL_492:
          if ( (unsigned int)v4 < v175 )
          {
            v3 = 0LL;
            goto LABEL_616;
          }
          v176 = (unsigned __int64)this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(this);
LABEL_498:
            __asan_report_load8(v176);
            goto LABEL_499;
          }
          v176 = (unsigned __int64)(this->_vptr_AServerSession + 7);
          if ( *(_BYTE *)((v176 >> 3) + 0x7FFF8000) )
            goto LABEL_498;
          v176 = (unsigned __int64)&this->recv_buf_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
          {
            ostr = (unsigned int)(*(_DWORD *)n - v4);
            p_implementation = &this->recv_buf_[ostr];
            v177 = (*((__int64 (__fastcall **)(common::minet::AServerSession *const, const char *, _QWORD))this->_vptr_AServerSession
                    + 7))(
                     this,
                     p_implementation,
                     (unsigned int)v4);
            goto LABEL_500;
          }
LABEL_499:
          v177 = __asan_report_load8(v176);
LABEL_500:
          v3 = v177;
          if ( (_BYTE)v177 )
            break;
          v4 = (unsigned int)(v4 - 1);
          ++skip_byte_num_0;
        }
        v178 = (unsigned __int64)this;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(this);
LABEL_507:
          __asan_report_load8(v178);
          goto LABEL_508;
        }
        v178 = (unsigned __int64)(this->_vptr_AServerSession + 8);
        if ( *(_BYTE *)((v178 >> 3) + 0x7FFF8000) )
          goto LABEL_507;
        v178 = (unsigned __int64)&this->recv_buf_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
        {
          p_implementation = &this->recv_buf_[ostr];
          v179 = (*((__int64 (__fastcall **)(common::minet::AServerSession *const, const char *, _QWORD))this->_vptr_AServerSession
                  + 8))(
                   this,
                   p_implementation,
                   (unsigned int)v4);
          goto LABEL_509;
        }
LABEL_508:
        v179 = __asan_report_load8(v178);
LABEL_509:
        v26 = v179;
        if ( v179 )
          break;
        p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          &v271,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/aserver_session.cpp",
          "recvCoroutine",
          333);
        v186 = &this->ip_str_;
        if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v186);
        }
        else
        {
          v186 = &this->session_id_;
          v187 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this + 28) & 7) + 3) < v187 || !v187 )
          {
            p_implementation = "pack len error, session_id=%u, ip=%s";
            common::milog::MiLogStream::operator()(
              &v271,
              "pack len error, session_id=%u, ip=%s",
              this->session_id_,
              this->ip_str_._M_dataplus._M_p);
            goto LABEL_527;
          }
        }
        __asan_report_load4(v186);
LABEL_527:
        common::milog::MiLogStream::~MiLogStream(&v271);
        v4 = (unsigned int)(v4 - 1);
      }
      v180 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
      if ( v180 && v180 <= 3 )
      {
        __asan_report_load4(&this->recv_buf_len_);
LABEL_529:
        p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          &v271,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/aserver_session.cpp",
          "recvCoroutine",
          341);
        v188 = &this->ip_str_;
        if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v188);
        }
        else
        {
          v188 = &this->session_id_;
          v189 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this + 28) & 7) + 3) < v189 || !v189 )
          {
            p_implementation = "recv too long packet with packet_len=%u from session_id=%u, ip=%s";
            common::milog::MiLogStream::operator()(
              &v271,
              "recv too long packet with packet_len=%u from session_id=%u, ip=%s",
              (unsigned int)v26,
              this->session_id_,
              this->ip_str_._M_dataplus._M_p);
LABEL_535:
            common::milog::MiLogStream::~MiLogStream(&v271);
            goto LABEL_616;
          }
        }
        __asan_report_load4(v188);
        goto LABEL_535;
      }
      if ( this->recv_buf_len_ <= (unsigned int)v26 )
        goto LABEL_529;
      if ( (unsigned int)v4 < (unsigned int)v26 )
      {
        p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          &v271,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/aserver_session.cpp",
          "recvCoroutine",
          349);
        v190 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v190 && v190 )
        {
          __asan_report_load4(&this->session_id_);
        }
        else
        {
          p_implementation = "session_id=%u get packet_len=%u, while remain_data_len=%u";
          common::milog::MiLogStream::operator()(
            &v271,
            "session_id=%u get packet_len=%u, while remain_data_len=%u",
            this->session_id_,
            (unsigned int)v26,
            (unsigned int)v4);
        }
        common::milog::MiLogStream::~MiLogStream(&v271);
        v3 = 0LL;
        goto LABEL_616;
      }
      p_is_player_session = (unsigned __int64)&this->is_player_session_;
      v182 = *(_BYTE *)(((unsigned __int64)&this->is_player_session_ >> 3) + 0x7FFF8000);
      v183 = ((_BYTE)this - 62) & 7;
      if ( v182 <= (char)v183 && v182 )
      {
        __asan_report_load1(p_is_player_session, p_implementation, v183);
LABEL_542:
        __asan_report_load8(p_is_player_session);
LABEL_543:
        __asan_report_load8(p_is_player_session);
        goto LABEL_544;
      }
      n[8] = this->is_player_session_;
      if ( !n[8] )
        break;
      p_is_player_session = (unsigned __int64)this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        goto LABEL_542;
      p_is_player_session = (unsigned __int64)(this->_vptr_AServerSession + 4);
      if ( *(_BYTE *)((p_is_player_session >> 3) + 0x7FFF8000) )
        goto LABEL_543;
      v184 = (__int64 (__fastcall *)(common::minet::AServerSession *const, const char *, _QWORD, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))*((_QWORD *)this->_vptr_AServerSession + 4);
      p_implementation = *(const char **)&n[16];
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v273,
        *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
      p_is_player_session = (unsigned __int64)&this->recv_buf_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
      {
        p_implementation = &this->recv_buf_[ostr];
        v185 = v184(this, p_implementation, (unsigned int)v26, &v273);
        goto LABEL_545;
      }
LABEL_544:
      v185 = __asan_report_load8(p_is_player_session);
LABEL_545:
      ostr = v185;
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
      if ( (_DWORD)ostr )
      {
        v3 = n[8];
        goto LABEL_616;
      }
LABEL_546:
      v4 = (unsigned int)(v4 - v26);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->recv_buf_);
    }
    else
    {
      p_implementation = &this->recv_buf_[ostr];
      common::minet::PacketUtils::createPacket(p_implementation, v26);
    }
    v192 = *(_QWORD *)(v263 + 208);
    if ( !v192 )
      goto LABEL_560;
    p_app_id = &this->app_id_;
    v194 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
    if ( v194 && v194 <= 3 )
    {
      __asan_report_load4(p_app_id);
LABEL_569:
      __asan_report_load4(p_app_id);
      goto LABEL_570;
    }
    if ( this->app_id_ )
      goto LABEL_560;
    p_app_id = (uint32_t *)(v192 + 244);
    v195 = *(_BYTE *)(((unsigned __int64)(v192 + 244) >> 3) + 0x7FFF8000);
    if ( (char)(((v192 - 12) & 7) + 3) >= v195 && v195 )
      goto LABEL_569;
    v196 = *(_DWORD *)(v192 + 244);
    if ( !v196 )
      goto LABEL_560;
LABEL_570:
    p_pimpl = (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *)&this->update_app_id_sig_._pimpl;
    if ( *(_BYTE *)(((unsigned __int64)&this->update_app_id_sig_._pimpl >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_pimpl);
LABEL_574:
      __asan_handle_no_return(p_pimpl);
      __assert_fail(
        "px != 0",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
        0x2D8u,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::signals"
        "2::detail::signal_impl<int(common::minet::AServerSession*, unsigned int), boost::signals2::optional_last_value<i"
        "nt>, int, std::less<int>, boost::function<int(common::minet::AServerSession*, unsigned int)>, boost::function<in"
        "t(const boost::signals2::connection&, common::minet::AServerSession*, unsigned int)>, boost::signals2::mutex>; t"
        "ypename boost::detail::sp_dereference<T>::type = boost::signals2::detail::signal_impl<int(common::minet::AServer"
        "Session*, unsigned int), boost::signals2::optional_last_value<int>, int, std::less<int>, boost::function<int(com"
        "mon::minet::AServerSession*, unsigned int)>, boost::function<int(const boost::signals2::connection&, common::min"
        "et::AServerSession*, unsigned int)>, boost::signals2::mutex>&]");
    }
    p_pimpl = this->update_app_id_sig_._pimpl.px;
    if ( !p_pimpl )
      goto LABEL_574;
    p_implementation = (const char *)this;
    v203 = (__int64)boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::operator()(
                      p_pimpl,
                      this,
                      v196);
    if ( !(_BYTE)v203 )
    {
      __asan_handle_no_return(p_pimpl);
      __assert_fail(
        "this->is_initialized()",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/optional.hpp",
        0x4B7u,
        "boost::optional<T>::reference_type boost::optional<T>::get() [with T = int; boost::optional<T>::reference_type = int&]");
    }
    ostr = v203 >> 32;
    *(_DWORD *)&n[8] = HIDWORD(v203);
    if ( !HIDWORD(v203) )
    {
      v204 = *(_QWORD *)(v263 + 208);
      v205 = (uint32_t *)(v204 + 244);
      v206 = *(_BYTE *)(((unsigned __int64)(v204 + 244) >> 3) + 0x7FFF8000);
      if ( (char)(((v204 - 12) & 7) + 3) >= v206 && v206 )
      {
        __asan_report_load4(v205);
      }
      else
      {
        v207 = *(_DWORD *)(v204 + 244);
        v205 = &this->app_id_;
        v208 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
        if ( !v208 || v208 > 3 )
        {
          this->app_id_ = v207;
          p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
          common::milog::MiLogStream::MiLogStream(
            &v271,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "src/aserver_session.cpp",
            "recvCoroutine",
            379);
LABEL_595:
          v215 = *(_QWORD *)(v263 + 208);
          v216 = (uint32_t *)(v215 + 244);
          v217 = *(_BYTE *)(((unsigned __int64)(v215 + 244) >> 3) + 0x7FFF8000);
          if ( (char)(((v215 - 12) & 7) + 3) >= v217 && v217 )
          {
            __asan_report_load4(v216);
          }
          else
          {
            v218 = *(unsigned int *)(v215 + 244);
            v216 = &this->session_id_;
            v219 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)this + 28) & 7) + 3) < v219 || !v219 )
            {
              p_implementation = "session_id=%u set app_id=%u succ sig_func_ret=%d";
              common::milog::MiLogStream::operator()(
                &v271,
                "session_id=%u set app_id=%u succ sig_func_ret=%d",
                this->session_id_,
                v218,
                0LL);
              goto LABEL_602;
            }
          }
          __asan_report_load4(v216);
LABEL_602:
          common::milog::MiLogStream::~MiLogStream(&v271);
LABEL_560:
          v197 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(this);
          }
          else
          {
            v197 = (common::minet::AServerSession *)(this->_vptr_AServerSession + 5);
            if ( !*(_BYTE *)(((unsigned __int64)v197 >> 3) + 0x7FFF8000) )
            {
              ostr = *((_QWORD *)this->_vptr_AServerSession + 5);
              p_implementation = *(const char **)&n[16];
              boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
                &v273,
                *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
              *(_QWORD *)(v263 + 240) = *(_QWORD *)(v263 + 208);
              v198 = *(_QWORD *)(v263 + 216);
              *(_QWORD *)(v263 + 248) = v198;
              if ( !v198 )
                goto LABEL_567;
              v199 = (volatile signed __int32 *)(v198 + 8);
              if ( &_pthread_key_create )
              {
                v197 = (common::minet::AServerSession *)(v198 + 8);
                v200 = *(_BYTE *)(((unsigned __int64)v199 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v199 & 7) + 3) < v200 || !v200 )
                {
                  _InterlockedAdd(v199, 1u);
                  goto LABEL_567;
                }
LABEL_605:
                v198 = __asan_report_store4(v197, p_implementation);
              }
              v220 = *(_BYTE *)(((unsigned __int64)(v198 + 8) >> 3) + 0x7FFF8000);
              if ( (char)(((v198 + 8) & 7) + 3) >= v220 && v220 )
              {
                v201 = __asan_report_load4(v198 + 8);
              }
              else
              {
                ++*(_DWORD *)(v198 + 8);
LABEL_567:
                p_implementation = (const char *)(v263 + 240);
                v201 = ((__int64 (__fastcall *)(common::minet::AServerSession *const, unsigned __int64, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))ostr)(
                         this,
                         v263 + 240,
                         &v273);
              }
              ostr = v201;
              v221 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v263 + 248);
              if ( v221 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v221);
              boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
              if ( (_DWORD)ostr )
                goto LABEL_591;
              v222 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v263 + 216);
              if ( v222 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v222);
              goto LABEL_546;
            }
          }
          __asan_report_load8(v197);
          goto LABEL_605;
        }
      }
      __asan_report_store4(v205, this);
      goto LABEL_595;
    }
    p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v271,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "recvCoroutine",
      372);
    v209 = *(_QWORD *)(v263 + 208);
    v210 = (uint32_t *)(v209 + 244);
    v211 = *(_BYTE *)(((unsigned __int64)(v209 + 244) >> 3) + 0x7FFF8000);
    if ( (char)(((v209 - 12) & 7) + 3) >= v211 && v211 )
    {
      __asan_report_load4(v210);
LABEL_589:
      __asan_report_load4(v210);
      goto LABEL_590;
    }
    v212 = *(unsigned int *)(v209 + 244);
    v210 = &this->session_id_;
    v213 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v213 && v213 )
      goto LABEL_589;
    p_implementation = "[NETWORK][ECS]session_id=%u set app_id=%u fail sig_func_ret=%d";
    common::milog::MiLogStream::operator()(
      &v271,
      "[NETWORK][ECS]session_id=%u set app_id=%u fail sig_func_ret=%d",
      this->session_id_,
      v212,
      *(unsigned int *)&n[8]);
LABEL_590:
    common::milog::MiLogStream::~MiLogStream(&v271);
LABEL_591:
    v214 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v263 + 216);
    if ( v214 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v214);
LABEL_616:
    if ( skip_byte_num_0 )
    {
      p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
      common::milog::MiLogStream::MiLogStream(
        &v271,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/aserver_session.cpp",
        "recvCoroutine",
        399);
      v223 = &this->ip_str_;
      if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v223);
      }
      else
      {
        v223 = &this->session_id_;
        v224 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 28) & 7) + 3) < v224 || !v224 )
        {
          p_implementation = "skip %u bytes from session_id=%u, ip=%s";
          common::milog::MiLogStream::operator()(
            &v271,
            "skip %u bytes from session_id=%u, ip=%s",
            skip_byte_num_0,
            this->session_id_,
            this->ip_str_._M_dataplus._M_p);
LABEL_627:
          common::milog::MiLogStream::~MiLogStream(&v271);
          goto LABEL_617;
        }
      }
      __asan_report_load4(v223);
      goto LABEL_627;
    }
LABEL_617:
    if ( (((_DWORD)v4 != 0) & ((unsigned __int8)v3 ^ 1)) == 0 )
      continue;
    p_implementation = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v271,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/aserver_session.cpp",
      "recvCoroutine",
      405);
    v225 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v225 && v225 )
    {
      __asan_report_load4(&this->session_id_);
    }
    else
    {
      p_implementation = "session_id=%u init recv_buf with remain_data_len=%u";
      common::milog::MiLogStream::operator()(
        &v271,
        "session_id=%u init recv_buf with remain_data_len=%u",
        this->session_id_,
        (unsigned int)v4);
    }
    common::milog::MiLogStream::~MiLogStream(&v271);
    p_recv_buf = (unsigned __int64)&this->recv_buf_;
    if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_recv_buf);
LABEL_635:
      __asan_report_load8(p_recv_buf);
LABEL_636:
      __asan_report_load8(p_recv_buf);
LABEL_637:
      v109 = __asan_report_load8(p_recv_buf);
      goto LABEL_638;
    }
    recv_buf = this->recv_buf_;
    p_implementation = &recv_buf[*(unsigned int *)n - (unsigned __int64)(unsigned int)v4];
    memmove(recv_buf, p_implementation, (unsigned int)v4);
  }
  while ( !(_BYTE)v3 );
LABEL_75:
  socket = (char *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v271,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/aserver_session.cpp",
    "recvCoroutine",
    442);
  p_listen_port = &this->listen_port_;
  v37 = *(_BYTE *)(((unsigned __int64)&this->listen_port_ >> 3) + 0x7FFF8000);
  if ( v37 && v37 <= 1 )
  {
    __asan_report_load2(p_listen_port);
    goto LABEL_642;
  }
  p_listen_port = &this->ip_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ip_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_642:
    __asan_report_load8(p_listen_port);
    goto LABEL_643;
  }
  p_listen_port = &this->session_id_;
  v38 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) < v38 || !v38 )
  {
    socket = "disconnect with session_id=%u, cleint_ip=%s. listen_port=%u";
    common::milog::MiLogStream::operator()(
      &v271,
      "disconnect with session_id=%u, cleint_ip=%s. listen_port=%u",
      this->session_id_,
      this->ip_str_._M_dataplus._M_p,
      this->listen_port_);
    goto LABEL_644;
  }
LABEL_643:
  __asan_report_load4(p_listen_port);
LABEL_644:
  common::milog::MiLogStream::~MiLogStream(&v271);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v227 = this;
    __asan_report_load8(this);
  }
  else
  {
    v227 = (common::minet::AServerSession *)(this->_vptr_AServerSession + 6);
    if ( !*(_BYTE *)(((unsigned __int64)v227 >> 3) + 0x7FFF8000) )
    {
      v228 = (__int64 (__fastcall *)(common::minet::AServerSession *const, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))*((_QWORD *)this->_vptr_AServerSession + 6);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v273,
        *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&n[16]);
      socket = (char *)&v273;
      v229 = v228(this, &v273);
      goto LABEL_649;
    }
  }
  v229 = __asan_report_load8(v227);
LABEL_649:
  v230 = v229;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v273);
  if ( (_DWORD)v230 )
  {
    socket = (char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v271,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "recvCoroutine",
      449);
    v231 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v231 && v231 )
    {
      __asan_report_load4(&this->session_id_);
    }
    else
    {
      socket = "session_id=%u call onDisconnect failed.";
      common::milog::MiLogStream::operator()(&v271, "session_id=%u call onDisconnect failed.", this->session_id_);
    }
    common::milog::MiLogStream::~MiLogStream(&v271);
  }
  *(_DWORD *)(v263 + 208) = 0;
  *(_BYTE *)(v263 + 212) = 0;
  *(_QWORD *)(v263 + 216) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->sock_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->sock_);
LABEL_674:
    __asan_report_load4(v230);
LABEL_675:
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      v241 = (char *)v3;
      __asan_report_load8(v3);
    }
    else
    {
      v241 = (char *)(v230 + 4);
      v242 = *(unsigned __int8 *)(((v230 + 4) >> 3) + 0x7FFF8000);
      if ( (char)v242 > (char)((v230 + 4) & 7) || !(_BYTE)v242 )
      {
        boost::asio::detail::epoll_reactor::deregister_descriptor(
          *(boost::asio::detail::epoll_reactor *const *)(ostr + 40),
          (boost::asio::detail::socket_type)socket,
          (boost::asio::detail::epoll_reactor::per_descriptor_data *)(v230 + 8),
          ((*(_BYTE *)(v230 + 4) >> 6) ^ 1) & 1);
        socket = (char *)(v230 + 4);
        v243 = *(_BYTE *)((v230 >> 3) + 0x7FFF8000);
        if ( !v243 || v243 > 3 )
        {
          boost::asio::detail::socket_ops::close(
            this->sock_.impl_.implementation_.socket_,
            (boost::asio::detail::socket_ops::state_type *)socket,
            0,
            (boost::system::error_code *)(v263 + 208));
          goto LABEL_684;
        }
LABEL_683:
        __asan_report_load4(v230);
LABEL_684:
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        {
          v245 = (char *)v3;
          __asan_report_load8(v3);
        }
        else
        {
          v3 = *(_QWORD *)(ostr + 40);
          v245 = (char *)(v230 + 8);
          if ( !*(_BYTE *)(((v230 + 8) >> 3) + 0x7FFF8000) )
          {
            ostr = *(_QWORD *)(v230 + 8);
            if ( !ostr )
              goto LABEL_660;
            v4 = v3 + 136;
            v245 = (char *)(v3 + 184);
            if ( *(char *)(((v3 + 184) >> 3) + 0x7FFF8000) >= 0 )
            {
              if ( !*(_BYTE *)(v3 + 184) )
              {
                *(_BYTE *)(v263 + 248) = 0;
                goto LABEL_690;
              }
LABEL_708:
              pthread_mutex_lock((pthread_mutex_t *)(v3 + 144));
              *(_BYTE *)(v263 + 248) = 1;
LABEL_690:
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v3 + 192);
              }
              else if ( ostr != *(_QWORD *)(v3 + 192) )
              {
                goto LABEL_692;
              }
              v246 = ostr + 24;
              if ( *(_BYTE *)(((ostr + 24) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v246);
                goto LABEL_713;
              }
              *(_QWORD *)(v3 + 192) = *(_QWORD *)(ostr + 24);
LABEL_692:
              v246 = ostr + 32;
              if ( !*(_BYTE *)(((ostr + 32) >> 3) + 0x7FFF8000) )
              {
                v247 = *(_QWORD *)(ostr + 32);
                if ( !v247 )
                  goto LABEL_697;
                v246 = ostr + 24;
                if ( !*(_BYTE *)(((ostr + 24) >> 3) + 0x7FFF8000) )
                {
                  v246 = v247 + 24;
                  if ( !*(_BYTE *)(((unsigned __int64)(v247 + 24) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v247 + 24) = *(_QWORD *)(ostr + 24);
LABEL_697:
                    v246 = ostr + 24;
                    if ( !*(_BYTE *)(((ostr + 24) >> 3) + 0x7FFF8000) )
                    {
                      v248 = *(_QWORD *)(ostr + 24);
                      if ( !v248 )
                        goto LABEL_701;
                      v246 = v248 + 32;
                      if ( !*(_BYTE *)(((unsigned __int64)(v248 + 32) >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)(v248 + 32) = *(_QWORD *)(ostr + 32);
LABEL_701:
                        v246 = v3 + 200;
                        if ( !*(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)(ostr + 24) = *(_QWORD *)(v3 + 200);
                          *(_QWORD *)(ostr + 32) = 0LL;
                          *(_QWORD *)(v3 + 200) = ostr;
                          if ( !*(_BYTE *)(v263 + 248) )
                          {
LABEL_703:
                            if ( !*(_BYTE *)(((v230 + 8) >> 3) + 0x7FFF8000) )
                            {
                              *(_QWORD *)(v230 + 8) = 0LL;
                              goto LABEL_660;
                            }
                            __asan_report_store8(v230 + 8, socket);
LABEL_721:
                            v234 = (char *)v230;
                            __asan_report_store4(v230, socket);
LABEL_722:
                            __asan_report_store1(v234, socket, v236);
LABEL_723:
                            __asan_handle_no_return(v234);
                            boost::asio::detail::do_throw_error(
                              (const boost::system::error_code *)(v263 + 208),
                              "close");
                          }
LABEL_719:
                          pthread_mutex_unlock((pthread_mutex_t *)(v4 + 8));
                          goto LABEL_703;
                        }
LABEL_718:
                        __asan_report_load8(v246);
                        goto LABEL_719;
                      }
LABEL_717:
                      __asan_report_store8(v246, socket);
                      goto LABEL_718;
                    }
LABEL_716:
                    __asan_report_load8(v246);
                    goto LABEL_717;
                  }
LABEL_715:
                  __asan_report_store8(v246, socket);
                  goto LABEL_716;
                }
LABEL_714:
                __asan_report_load8(v246);
                goto LABEL_715;
              }
LABEL_713:
              __asan_report_load8(v246);
              goto LABEL_714;
            }
LABEL_707:
            __asan_report_load1(v245, socket, v244);
            goto LABEL_708;
          }
        }
        __asan_report_load8(v245);
        goto LABEL_707;
      }
    }
    __asan_report_load1(v241, socket, v242);
    goto LABEL_683;
  }
  ostr = (unsigned __int64)this->sock_.impl_.service_;
  v3 = ostr + 40;
  v230 = (unsigned __int64)&this->sock_.impl_.implementation_;
  v232 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v232 && v232 <= 3 )
    goto LABEL_674;
  socket = (char *)(unsigned int)this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)socket != -1 )
    goto LABEL_675;
  socket = (char *)(v263 + 640);
  *(_QWORD *)(v263 + 208) = 0LL;
  *(_QWORD *)(v263 + 216) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_660:
  v233 = *(_BYTE *)((v230 >> 3) + 0x7FFF8000);
  if ( v233 && v233 <= 3 )
    goto LABEL_721;
  this->sock_.impl_.implementation_.socket_ = -1;
  v234 = (char *)(v230 + 4);
  v235 = *(_BYTE *)(((v230 + 4) >> 3) + 0x7FFF8000);
  v236 = ((_BYTE)v230 + 4) & 7;
  if ( v235 <= (char)v236 && v235 )
    goto LABEL_722;
  *(_BYTE *)(v230 + 4) = 0;
  if ( *(_DWORD *)(v263 + 208) )
    goto LABEL_723;
  p_keep_alive_dt = &this->keep_alive_dt_;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_keep_alive_dt);
    goto LABEL_725;
  }
  service = (__int64)this->keep_alive_dt_.impl_.service_;
  v230 = (unsigned __int64)&this->keep_alive_dt_.impl_.implementation_;
  p_keep_alive_dt = &this->keep_alive_dt_.impl_.implementation_.might_have_pending_waits;
  v239 = *(unsigned __int8 *)(((unsigned __int64)&this->keep_alive_dt_.impl_.implementation_.might_have_pending_waits >> 3)
                            + 0x7FFF8000);
  if ( (v239 & 0x80u) != 0LL )
  {
LABEL_725:
    service = __asan_report_load1(p_keep_alive_dt, socket, v239);
    goto LABEL_726;
  }
  if ( !this->keep_alive_dt_.impl_.implementation_.might_have_pending_waits )
  {
    socket = (char *)(v263 + 640);
    *(_QWORD *)(v263 + 176) = 0LL;
    *(_QWORD *)(v263 + 184) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_669;
  }
LABEL_726:
  v249 = (char *)(service + 104);
  if ( *(_BYTE *)(((unsigned __int64)(service + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v249);
    goto LABEL_730;
  }
  socket = (char *)(service + 40);
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    *(boost::asio::detail::epoll_reactor *const *)(service + 104),
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)(service + 40),
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(v230 + 16),
    0xFFFFFFFFFFFFFFFFLL);
  v249 = (char *)(v230 + 8);
  if ( *(char *)(((v230 + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_730:
    __asan_report_store1(v249, socket, v250);
    goto LABEL_731;
  }
  *(_BYTE *)(v230 + 8) = 0;
  *(_QWORD *)(v263 + 176) = 0LL;
  *(_QWORD *)(v263 + 184) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_669:
  if ( !*(_DWORD *)(v263 + 176) )
    goto LABEL_736;
  common::milog::MiLogStream::MiLogStream(
    &v270,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aserver_session.cpp",
    "recvCoroutine",
    462);
  socket = *(char **)(v263 + 184);
  if ( *(_BYTE *)(((unsigned __int64)socket >> 3) + 0x7FFF8000) )
  {
LABEL_731:
    v240 = (unsigned __int64)socket;
    __asan_report_load8(socket);
    goto LABEL_732;
  }
  v240 = *(_QWORD *)socket + 32LL;
  if ( !*(_BYTE *)((v240 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(common::milog::MiLogStream *, char *, _QWORD))(*(_QWORD *)socket + 32LL))(
      &v271,
      socket,
      *(unsigned int *)(v263 + 176));
    goto LABEL_733;
  }
LABEL_732:
  __asan_report_load8(v240);
LABEL_733:
  socket = "keep_alive_dt_.cancel ec: %s";
  common::milog::MiLogStream::operator()(&v270, "keep_alive_dt_.cancel ec: %s", (const char *)v271.log_);
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v271.log_ != &v271.ostr_ptr_._M_refcount )
    operator delete(v271.log_);
  common::milog::MiLogStream::~MiLogStream(&v270);
LABEL_736:
  px = (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *)&this->status_;
  v252 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v252 && v252 <= 3 )
  {
    __asan_report_store4(px, socket);
    goto LABEL_746;
  }
  this->status_ = STATUS_STOP;
  px = (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *)&this->release_sig_._pimpl;
  if ( *(_BYTE *)(((unsigned __int64)&this->release_sig_._pimpl >> 3) + 0x7FFF8000) )
  {
LABEL_746:
    __asan_report_load8(px);
LABEL_747:
    __asan_handle_no_return(px);
    __assert_fail(
      "px != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2D8u,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::signals2:"
      ":detail::signal_impl<int(common::minet::AServerSession*), boost::signals2::optional_last_value<int>, int, std::les"
      "s<int>, boost::function<int(common::minet::AServerSession*)>, boost::function<int(const boost::signals2::connectio"
      "n&, common::minet::AServerSession*)>, boost::signals2::mutex>; typename boost::detail::sp_dereference<T>::type = b"
      "oost::signals2::detail::signal_impl<int(common::minet::AServerSession*), boost::signals2::optional_last_value<int>"
      ", int, std::less<int>, boost::function<int(common::minet::AServerSession*)>, boost::function<int(const boost::sign"
      "als2::connection&, common::minet::AServerSession*)>, boost::signals2::mutex>&]");
  }
  px = this->release_sig_._pimpl.px;
  if ( !px )
    goto LABEL_747;
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::operator()(
    px,
    this);
  common::milog::MiLogStream::MiLogStream(
    &v271,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/aserver_session.cpp",
    "recvCoroutine",
    471);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v271.ostr_, "recvCoroutine session:");
  v253 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v253 && v253 )
  {
    v254 = (struct _Unwind_Exception *)__asan_report_load4(&this->session_id_);
    common::milog::MiLogStream::~MiLogStream(&v271);
    __asan_handle_no_return(&v271);
    _Unwind_Resume(v254);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v271.ostr_, this->session_id_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v271.ostr_, " over!");
  common::milog::MiLogStream::~MiLogStream(&v271);
LABEL_743:
  if ( v275 == (char *)v263 )
  {
    *(_QWORD *)((v263 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v263 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v263 = 1172321806LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v263 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 476: range 0000000014EC27E8-0000000014EC3462
int32_t __fastcall common::minet::AServerSession::send(
        common::minet::AServerSession *const this,
        const char *buf,
        uint32_t len)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r13
  bool *p_is_async_send; // rdi
  char v7; // al
  __int64 v8; // rdx
  char v9; // al
  char v10; // dl
  int v11; // ebx
  uint32_t v12; // r15d
  __int64 v13; // rdx
  void *p_state; // rdi
  __int64 v15; // rdx
  char v16; // al
  int *v17; // rbx
  const boost::system::detail::system_error_category *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  void *p_status; // rdi
  char v22; // al
  char v23; // dl
  char v24; // dl
  char v25; // cl
  int v26; // eax
  char v27; // dl
  int v28; // eax
  char v29; // cl
  bool v30; // zf
  bool v31; // sf
  char v32; // of
  char v33; // dl
  __int64 id; // rax
  char v35; // dl
  char v37; // dl
  char v38; // dl
  char v39; // dl
  const char *bufa; // [rsp+8h] [rbp-1A0h]
  boost::asio::detail::socket_type w_len; // [rsp+14h] [rbp-194h]
  unsigned int w_lena; // [rsp+14h] [rbp-194h]
  boost::asio::detail::socket_ops::state_type state; // [rsp+3Bh] [rbp-16Dh]
  uint32_t retry_times; // [rsp+3Ch] [rbp-16Ch]
  common::milog::MiLogStream v46; // [rsp+70h] [rbp-138h] BYREF
  char v47[280]; // [rsp+90h] [rbp-118h] BYREF

  bufa = buf;
  v4 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_2(224LL);
    if ( v20 )
      v4 = v20;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 3 fds 64 24 4 bufs 128 56 3 msg";
  *(_QWORD *)(v4 + 16) = common::minet::AServerSession::send;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  p_is_async_send = &this->is_async_send_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
  v8 = ((_BYTE)this - 63) & 7;
  if ( v7 <= (char)v8 && v7 )
  {
    __asan_report_load1(p_is_async_send, buf, v8);
    goto LABEL_27;
  }
  if ( this->is_async_send_ )
  {
LABEL_27:
    common::milog::MiLogStream::MiLogStream(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aserver_session.cpp",
      "send",
      479);
    common::milog::MiLogStream::operator()(&v46, "is_async_send_ is true, Cannot use sync send!!!");
    common::milog::MiLogStream::~MiLogStream(&v46);
    v12 = -1;
    goto LABEL_101;
  }
  v9 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(&this->status_);
    goto LABEL_29;
  }
  if ( this->status_ != STATUS_START_0 )
  {
LABEL_29:
    common::milog::MiLogStream::MiLogStream(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "send",
      484);
    p_status = &this->status_;
    v22 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
    if ( v22 && v22 <= 3 )
    {
      __asan_report_load4(p_status);
    }
    else
    {
      p_status = &this->session_id_;
      v23 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 28) & 7) + 3) < v23 || !v23 )
      {
        common::milog::MiLogStream::operator()(
          &v46,
          "session_id=%u status=%u, can not send msg to it now.",
          this->session_id_,
          (unsigned int)this->status_);
LABEL_36:
        common::milog::MiLogStream::~MiLogStream(&v46);
        v12 = -1;
        goto LABEL_101;
      }
    }
    __asan_report_load4(p_status);
    goto LABEL_36;
  }
  if ( len == 0 || buf == 0LL )
  {
    v12 = 0;
    goto LABEL_101;
  }
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(&this->max_send_packet_len_);
    goto LABEL_38;
  }
  if ( this->max_send_packet_len_ < len )
  {
LABEL_38:
    common::milog::MiLogStream::MiLogStream(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aserver_session.cpp",
      "send",
      493);
    v24 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v24 && v24 )
      __asan_report_load4(&this->max_send_packet_len_);
    else
      common::milog::MiLogStream::operator()(
        &v46,
        "send len=%u, too long for max_send_packet_len_=%u",
        len,
        this->max_send_packet_len_);
    goto LABEL_36;
  }
  if ( &_pthread_key_create )
  {
    v11 = pthread_mutex_lock(&this->send_mu_._M_mutex);
    if ( v11 )
    {
      __asan_handle_no_return(&this->send_mu_);
      std::__throw_system_error(v11);
    }
  }
  retry_times = 0;
  v12 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v12 >= len )
        goto LABEL_99;
      v13 = len - v12;
      *(_QWORD *)(v4 + 64) = &bufa[v12];
      *(_QWORD *)(v4 + 72) = v13;
      *(_QWORD *)(v4 + 80) = v13;
      LOBYTE(buf) = v13 == 0;
      p_state = &this->sock_.impl_.implementation_.state_;
      v15 = *(unsigned __int8 *)(((unsigned __int64)&this->sock_.impl_.implementation_.state_ >> 3) + 0x7FFF8000);
      if ( (char)v15 <= (((unsigned __int8)this - 20) & 7) && (_BYTE)v15 )
      {
        __asan_report_load1(p_state, buf, v15);
LABEL_44:
        __asan_report_load4(p_state);
LABEL_45:
        LODWORD(v17) = 9;
        v18 = &boost::system::detail::cat_holder<void>::system_category_instance;
        LODWORD(v19) = 0;
        goto LABEL_56;
      }
      state = this->sock_.impl_.implementation_.state_;
      p_state = &this->sock_.impl_.implementation_;
      v16 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
      if ( v16 && v16 <= 3 )
        goto LABEL_44;
      w_len = this->sock_.impl_.implementation_.socket_;
      if ( w_len == -1 )
        goto LABEL_45;
      if ( !(_BYTE)buf || (state & 0x10) == 0 )
      {
        while ( 1 )
        {
          v17 = __errno_location();
          v33 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v33 && v33 )
          {
            v19 = __asan_report_store4(v17, buf);
          }
          else
          {
            *v17 = 0;
            *(_QWORD *)(v4 + 128) = 0LL;
            *(_QWORD *)(v4 + 136) = 0LL;
            *(_QWORD *)(v4 + 160) = 0LL;
            *(_QWORD *)(v4 + 168) = 0LL;
            *(_QWORD *)(v4 + 176) = 0LL;
            *(_QWORD *)(v4 + 144) = v4 + 64;
            *(_QWORD *)(v4 + 152) = 1LL;
            buf = (const char *)(v4 + 128);
            v19 = sendmsg(w_len, (const struct msghdr *)(v4 + 128), 0x4000);
          }
          v25 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v25 && v25 )
          {
            v26 = __asan_report_load4(v17);
          }
          else
          {
            LODWORD(v17) = *v17;
            v18 = &boost::system::detail::cat_holder<void>::system_category_instance;
            if ( v19 >= 0 )
              LODWORD(v17) = 0;
            if ( v19 >= 0 )
              goto LABEL_56;
            if ( (state & 1) != 0 )
            {
              LODWORD(v19) = 0;
              goto LABEL_56;
            }
            v26 = (int)v17;
            if ( (_DWORD)v17 != 11 )
              goto LABEL_54;
          }
          if ( !*(_BYTE *)(((unsigned __int64)&v18->id_ >> 3) + 0x7FFF8000) )
          {
            if ( v18->id_ == 0x8FAFD21E25C5E09BLL )
              goto LABEL_63;
LABEL_54:
            if ( v26 != 11 )
            {
              LODWORD(v19) = 0;
              goto LABEL_56;
            }
            goto LABEL_67;
          }
          __asan_report_load8(&v18->id_);
LABEL_67:
          if ( *(_BYTE *)(((unsigned __int64)&v18->id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(&v18->id_);
            LODWORD(v17) = 9;
            v18 = &boost::system::detail::cat_holder<void>::system_category_instance;
            v28 = w_len;
            goto LABEL_76;
          }
          if ( v18->id_ != 0x8FAFD21E25C5E09BLL )
          {
            LODWORD(v19) = 0;
            goto LABEL_56;
          }
LABEL_63:
          *(_DWORD *)(v4 + 32) = w_len;
          *(_WORD *)(v4 + 36) = 4;
          *(_WORD *)(v4 + 38) = 0;
          v17 = __errno_location();
          v27 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v27 && v27 )
          {
            v28 = __asan_report_store4(v17, buf);
          }
          else
          {
            *v17 = 0;
            buf = (const char *)1;
            v28 = poll((struct pollfd *)(v4 + 32), 1uLL, -1);
          }
          v29 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v29 && v29 )
          {
            v28 = __asan_report_load4(v17);
LABEL_81:
            if ( !(v31 ^ v32 | v30) )
            {
              LODWORD(v17) = 0;
              v18 = &boost::system::detail::cat_holder<void>::system_category_instance;
            }
            goto LABEL_76;
          }
          LODWORD(v17) = *v17;
          v18 = &boost::system::detail::cat_holder<void>::system_category_instance;
          v32 = 0;
          v30 = v28 == 0;
          v31 = v28 < 0;
          if ( v28 )
            goto LABEL_81;
          LODWORD(v17) = 0;
LABEL_76:
          if ( v28 < 0 )
          {
            LODWORD(v19) = 0;
            goto LABEL_56;
          }
        }
      }
      LODWORD(v17) = 0;
      v18 = &boost::system::detail::cat_holder<void>::system_category_instance;
      LODWORD(v19) = 0;
LABEL_56:
      w_lena = v19;
      if ( (_DWORD)v17 || (int)v19 <= 0 )
        break;
      v12 += v19;
      if ( v12 < len )
      {
        buf = (const char *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/aserver_session.cpp",
          "send",
          544);
        v39 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v39 && v39 )
        {
          __asan_report_load4(&this->session_id_);
        }
        else
        {
          buf = "session_id=%u, len=%u, total_w_len=%d, w_len=%d";
          common::milog::MiLogStream::operator()(
            &v46,
            "session_id=%u, len=%u, total_w_len=%d, w_len=%d",
            this->session_id_,
            len,
            v12,
            w_lena);
        }
        common::milog::MiLogStream::~MiLogStream(&v46);
      }
    }
    if ( (_DWORD)v17 != 11 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&v18->id_ >> 3) + 0x7FFF8000) )
    {
      id = __asan_report_load8(&v18->id_);
    }
    else
    {
      id = v18->id_;
      if ( !id )
      {
        id = v18 == &boost::system::detail::cat_holder<void>::system_category_instance;
        goto LABEL_90;
      }
    }
    LOBYTE(id) = id == 0x8FAFD21E25C5E09BLL;
LABEL_90:
    if ( !(_BYTE)id )
      break;
    ++retry_times;
    buf = (const char *)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/aserver_session.cpp",
      "send",
      525);
    v37 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v37 && v37 )
    {
      __asan_report_load4(&this->session_id_);
    }
    else
    {
      LODWORD(v17) = retry_times;
      buf = "session_id=%u send buffer is full, retry_times=%u";
      common::milog::MiLogStream::operator()(
        &v46,
        "session_id=%u send buffer is full, retry_times=%u",
        this->session_id_,
        retry_times);
    }
    common::milog::MiLogStream::~MiLogStream(&v46);
    if ( (unsigned int)v17 > 2 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/aserver_session.cpp",
        "send",
        528);
      v38 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 28) & 7) + 3) < v38 || !v38 )
      {
        common::milog::MiLogStream::operator()(
          &v46,
          "session_id=%u send buffer is full after 3 retry, skip this packet",
          this->session_id_);
        goto LABEL_98;
      }
      goto LABEL_97;
    }
    usleep(0x3E8u);
  }
  common::milog::MiLogStream::MiLogStream(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aserver_session.cpp",
    "send",
    519);
  v35 = *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v35 && v35 )
  {
LABEL_97:
    __asan_report_load4(&this->session_id_);
    goto LABEL_98;
  }
  common::milog::MiLogStream::operator()(
    &v46,
    "session_id=%u, send failed with w_len=%d, ec=%d",
    this->session_id_,
    w_lena,
    (unsigned int)v17);
LABEL_98:
  common::milog::MiLogStream::~MiLogStream(&v46);
LABEL_99:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->send_mu_._M_mutex);
LABEL_101:
  if ( v47 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v12;
};

// Line 561: range 0000000014EC763A-0000000014EC7AD4
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::minet::AServerSession::sendPacket(
        common::minet::AServerSession *const this,
        common::minet::PacketPtr packet_ptr)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  int32_t v5; // eax
  __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rdx
  char v9; // cl
  char v10; // al
  unsigned int v11; // eax
  char v12; // dl
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  char v14; // dl
  char *v15; // rdi
  unsigned int v17; // r12d
  int (**vptr_Packet)(...); // rax
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v19; // rdi
  char v20; // dl
  char v21; // cl
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-B8h] BYREF
  char v23[152]; // [rsp+30h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v3 = v6;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 12 send_str:568";
  *(_QWORD *)(v3 + 16) = common::minet::AServerSession::sendPacket;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_8;
  }
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_8:
    common::milog::MiLogStream::MiLogStream(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "sendPacket",
      564);
    common::milog::MiLogStream::operator()(&v22, "packet is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = -1;
    goto LABEL_33;
  }
  *(_QWORD *)(v3 + 32) = v3 + 48;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_BYTE *)(v3 + 48) = 0;
  v5 = common::minet::Packet::serializeToString(
         (const common::minet::Packet *const)packet_ptr._M_ptr->_vptr_Packet,
         (std::string *)(v3 + 32));
  v7 = v5;
  if ( v5 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "sendPacket",
      571);
    common::milog::MiLogStream::operator()(&v22, "serializeToString fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = -1;
    goto LABEL_31;
  }
  v8 = *(_QWORD *)(v3 + 40);
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(&this->max_send_packet_len_);
    goto LABEL_19;
  }
  if ( this->max_send_packet_len_ < v8 )
  {
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "sendPacket",
      576);
    v12 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v12 && v12 )
    {
      __asan_report_load4(&this->max_send_packet_len_);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(packet_ptr._M_ptr->_vptr_Packet
                                                                                                  + 1);
      v14 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( !v14 || v14 > 1 )
      {
        common::milog::MiLogStream::operator()(
          &v22,
          "packet cmd_id: %u, serializeToString len=%lu, too long for max_send_packet_len_=%u",
          *((unsigned __int16 *)packet_ptr._M_ptr->_vptr_Packet + 4),
          *(_QWORD *)(v3 + 40),
          this->max_send_packet_len_);
LABEL_28:
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = -1;
        goto LABEL_31;
      }
LABEL_27:
      __asan_report_load2(M_ptr);
      goto LABEL_28;
    }
    M_ptr = packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_27;
  }
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
  if ( v10 <= (((unsigned __int8)this - 63) & 7) && v10 )
  {
    v11 = __asan_report_load1(&this->is_async_send_, v3 + 32, v8);
    goto LABEL_30;
  }
  if ( this->is_async_send_ )
  {
    v11 = common::minet::AServerSession::asyncSendString(this, (std::string *)(v3 + 32));
LABEL_30:
    v7 = v11;
    goto LABEL_31;
  }
  v17 = common::minet::AServerSession::send(this, *(const char **)(v3 + 32), v8);
  if ( *(_DWORD *)(v3 + 40) != v17 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "sendPacket",
      590);
    if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      v19 = packet_ptr._M_ptr;
      __asan_report_load8(packet_ptr._M_ptr);
    }
    else
    {
      vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
      v19 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(packet_ptr._M_ptr->_vptr_Packet
                                                                                                + 1);
      v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      if ( !v20 || v20 > 1 )
      {
        v19 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)vptr_Packet
                                                                                                  + 212);
        v21 = *(_BYTE *)((((unsigned __int64)vptr_Packet + 212) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)vptr_Packet - 44) & 7) + 3) < v21 || !v21 )
        {
          common::milog::MiLogStream::operator()(
            &v22,
            "send packet failed with user_id=%u, cmd_id=%u, len=%lu, send_len=%d",
            *((unsigned int *)vptr_Packet + 53),
            *((unsigned __int16 *)vptr_Packet + 4),
            *(_QWORD *)(v3 + 40),
            v17);
          goto LABEL_28;
        }
LABEL_45:
        __asan_report_load4(v19);
        goto LABEL_28;
      }
    }
    __asan_report_load2(v19);
    goto LABEL_45;
  }
LABEL_31:
  v15 = *(char **)(v3 + 32);
  if ( v15 != (char *)(v3 + 48) )
    operator delete(v15);
LABEL_33:
  if ( v23 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v7;
};

// Line 600: range 0000000014EC6DAE-0000000014EC7638
int32_t __fastcall common::minet::AServerSession::asyncSendString(
        common::minet::AServerSession *const this,
        std::string *send_str)
{
  std::string *v3; // rbp
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  void *p_M_node; // rdi
  std::string *v7; // rdx
  char v8; // al
  uint32_t max_size; // eax
  __int64 v10; // rax
  int32_t result; // eax
  std::_Deque_base<std::string>::iterator *p_M_finish; // rdi
  void *p_is_sending; // rdi
  char v14; // al
  __int64 v15; // rdx
  boost::asio::io_context *io_ctx; // rcx
  unsigned __int64 p_anon_0; // rax
  volatile signed __int32 *M_local_buf; // rdi
  char v19; // al
  __int64 v20; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v22; // si
  int v23; // eax
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  bool v26; // dl
  int v27; // r15d
  void *p_M_first; // rdi
  signed __int64 v29; // rbx
  char v30; // al
  unsigned __int64 v31; // [rsp+0h] [rbp-E8h]
  bool v32; // [rsp+0h] [rbp-E8h]
  common::milog::MiLogStream v33; // [rsp+20h] [rbp-C8h] BYREF
  common::minet::AServerSession::asyncSendString::<lambda()> handler; // [rsp+40h] [rbp-A8h] BYREF
  char v35[120]; // [rsp+70h] [rbp-78h] BYREF

  v3 = send_str;
  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v4 = v10;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 __count";
  *(_QWORD *)(v4 + 16) = common::minet::AServerSession::asyncSendString;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&send_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&send_str->_M_string_length);
    goto LABEL_20;
  }
  if ( !send_str->_M_string_length )
  {
LABEL_20:
    common::milog::MiLogStream::MiLogStream(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aserver_session.cpp",
      "asyncSendString",
      603);
    common::milog::MiLogStream::operator()(&v33, "send_str is empty!");
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = -1;
    goto LABEL_110;
  }
  if ( &_pthread_key_create )
  {
    LODWORD(v31) = pthread_mutex_lock(&this->wait_send_queue_.queue_mu_._M_mutex);
    if ( (_DWORD)v31 )
    {
      __asan_handle_no_return(&this->wait_send_queue_.queue_mu_);
      std::__throw_system_error(v31);
    }
  }
  p_M_node = &this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_23;
  }
  p_M_node = &this->wait_send_queue_.queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_node);
    goto LABEL_24;
  }
  p_M_node = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_node);
    goto LABEL_25;
  }
  p_M_node = &this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_M_node);
    goto LABEL_26;
  }
  p_M_node = &this->wait_send_queue_.queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_node);
    goto LABEL_27;
  }
  p_M_node = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_node);
LABEL_28:
    __asan_report_load4(p_M_node);
    goto LABEL_29;
  }
  v7 = (std::string *)(this->wait_send_queue_.queue_.c._M_impl._M_start._M_last
                     - this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur);
  v31 = (unsigned __int64)v7
      + 16
      * (((char *)this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node
        - (char *)this->wait_send_queue_.queue_.c._M_impl._M_start._M_node) >> 3)
      + this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur
      - this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first
      - 16;
  p_M_node = &this->wait_send_queue_.max_size_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.max_size_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_28;
  max_size = this->wait_send_queue_.max_size_;
  if ( max_size && v31 >= max_size )
    goto LABEL_67;
  std::deque<std::string>::emplace_back<std::string&>(&this->wait_send_queue_.queue_.c, send_str, v7);
LABEL_29:
  p_M_finish = (std::_Deque_base<std::string>::iterator *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_62;
  }
  p_M_finish = (std::_Deque_base<std::string>::iterator *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(p_M_finish);
    goto LABEL_63;
  }
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_finish);
    goto LABEL_64;
  }
  p_M_finish = (std::_Deque_base<std::string>::iterator *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first;
  send_str = (std::string *)((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first >> 3);
  if ( LOBYTE(send_str[67107840]._M_dataplus._M_p) )
  {
LABEL_64:
    __asan_report_load8(p_M_finish);
    goto LABEL_65;
  }
  p_M_finish = (std::_Deque_base<std::string>::iterator *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last;
  if ( !*(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
    p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_start;
    send_str = (std::string *)((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3);
    if ( !LOBYTE(send_str[67107840]._M_dataplus._M_p) )
    {
      v32 = v31 + 1 == this->wait_send_queue_.queue_.c._M_impl._M_start._M_last
                     - this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur
                     + 16
                     * ((((char *)this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node
                        - (char *)this->wait_send_queue_.queue_.c._M_impl._M_start._M_node) >> 3)
                      - 1)
                     + this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur
                     - this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first;
      goto LABEL_36;
    }
    goto LABEL_66;
  }
LABEL_65:
  __asan_report_load8(p_M_finish);
LABEL_66:
  __asan_report_load8(p_M_finish);
LABEL_67:
  v32 = 0;
LABEL_36:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->wait_send_queue_.queue_mu_._M_mutex);
  if ( !v32 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aserver_session.cpp",
      "asyncSendString",
      609);
    if ( &_pthread_key_create )
    {
      v27 = pthread_mutex_lock(&this->wait_send_queue_.queue_mu_._M_mutex);
      if ( v27 )
      {
        __asan_handle_no_return(&this->wait_send_queue_.queue_mu_);
        std::__throw_system_error(v27);
      }
    }
    p_M_first = &this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_first);
    }
    else
    {
      p_M_first = &this->wait_send_queue_.queue_.c._M_impl._M_start._M_node;
      if ( !*(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      {
        p_M_first = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          p_M_first = &this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first;
          if ( !*(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first >> 3)
                         + 0x7FFF8000) )
          {
            p_M_first = &this->wait_send_queue_.queue_.c._M_impl._M_start._M_last;
            if ( !*(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last >> 3)
                           + 0x7FFF8000) )
            {
              p_M_first = &this->wait_send_queue_.queue_.c._M_impl._M_start;
              if ( !*(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
              {
                v29 = 16
                    * ((((char *)this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node
                       - (char *)this->wait_send_queue_.queue_.c._M_impl._M_start._M_node) >> 3)
                     - 1)
                    + this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur
                    - this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first
                    + this->wait_send_queue_.queue_.c._M_impl._M_start._M_last
                    - this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur;
                if ( &_pthread_key_create )
                  pthread_mutex_unlock(&this->wait_send_queue_.queue_mu_._M_mutex);
                p_M_first = &this->cache_packet_max_num_;
                v30 = *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000);
                if ( !v30 || v30 > 3 )
                {
                  common::milog::MiLogStream::operator()(
                    &v33,
                    "unsend_packet_queue full %u!!!, now size:%lu",
                    this->cache_packet_max_num_,
                    v29);
LABEL_89:
                  common::milog::MiLogStream::~MiLogStream(&v33);
                  result = -1;
                  goto LABEL_110;
                }
LABEL_88:
                __asan_report_load4(p_M_first);
                goto LABEL_89;
              }
LABEL_87:
              __asan_report_load8(p_M_first);
              goto LABEL_88;
            }
LABEL_86:
            __asan_report_load8(p_M_first);
            goto LABEL_87;
          }
LABEL_85:
          __asan_report_load8(p_M_first);
          goto LABEL_86;
        }
LABEL_84:
        __asan_report_load8(p_M_first);
        goto LABEL_85;
      }
    }
    __asan_report_load8(p_M_first);
    goto LABEL_84;
  }
  p_is_sending = &this->is_sending_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
  v15 = ((_BYTE)this - 80) & 7;
  if ( v14 <= (char)v15 && v14 )
  {
    __asan_report_load1(p_is_sending, send_str, v15);
LABEL_91:
    __asan_report_load8(p_is_sending);
    goto LABEL_92;
  }
  if ( this->is_sending_._M_base._M_i )
  {
    result = 0;
    goto LABEL_110;
  }
  p_is_sending = &this->io_ctx_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_ctx_ >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  io_ctx = this->io_ctx_;
  handler.__data_str._M_dataplus._M_p = handler.__data_str._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    p_anon_0 = __asan_report_load8(v3);
    goto LABEL_93;
  }
  p_anon_0 = (unsigned __int64)&v3->_anon_0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3->_M_dataplus._M_p != &v3->_anon_0 )
  {
    handler.__data_str._M_dataplus._M_p = v3->_M_dataplus._M_p;
    M_local_buf = (volatile signed __int32 *)v3->_anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)&v3->_anon_0 >> 3) + 0x7FFF8000) )
    {
      handler.__data_str._anon_0._M_allocated_capacity = v3->_anon_0._M_allocated_capacity;
      goto LABEL_47;
    }
LABEL_97:
    __asan_report_load8(M_local_buf);
    goto LABEL_98;
  }
LABEL_93:
  M_local_buf = (volatile signed __int32 *)p_anon_0;
  send_str = (std::string *)*(unsigned __int8 *)((((unsigned __int64)&v3->_anon_0._M_allocated_capacity + 15) >> 3)
                                               + 0x7FFF8000);
  if ( *(_BYTE *)((p_anon_0 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((p_anon_0 >> 3) + 0x7FFF8000) <= (unsigned __int8)(p_anon_0 & 7)
    || (_BYTE)send_str != 0 && (char)send_str <= (((unsigned __int8)v3 + 31) & 7) )
  {
    send_str = (std::string *)16;
    __asan_report_load_n(p_anon_0, 16LL);
    goto LABEL_97;
  }
  handler.__data_str._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)&v3->_anon_0);
LABEL_47:
  M_local_buf = (volatile signed __int32 *)&v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(M_local_buf);
LABEL_99:
    __asan_report_store1(M_local_buf, send_str, v20);
    goto LABEL_100;
  }
  handler.__data_str._M_string_length = v3->_M_string_length;
  v3->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  v3->_M_string_length = 0LL;
  M_local_buf = (volatile signed __int32 *)v3->_anon_0._M_local_buf;
  v19 = *(_BYTE *)(((unsigned __int64)&v3->_anon_0 >> 3) + 0x7FFF8000);
  v20 = ((_BYTE)v3 + 16) & 7;
  if ( v19 <= (char)v20 && v19 )
    goto LABEL_99;
  v3->_anon_0._M_local_buf[0] = 0;
  M_local_buf = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(M_local_buf);
    goto LABEL_101;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  handler.__self._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_104;
  M_local_buf = &M_pi->_M_use_count;
  v22 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v22 && v22 )
  {
LABEL_101:
    __asan_report_load4(M_local_buf);
LABEL_102:
    __asan_handle_no_return(M_local_buf);
    std::__throw_bad_weak_ptr();
  }
  *(_DWORD *)(v4 + 32) = M_pi->_M_use_count;
  do
  {
    v23 = *(_DWORD *)(v4 + 32);
    if ( !v23 )
      goto LABEL_102;
    v25 = *(_DWORD *)(v4 + 32);
    v24 = _InterlockedCompareExchange(M_local_buf, v23 + 1, v25);
    v26 = v25 == v24;
    if ( v25 != v24 )
      *(_DWORD *)(v4 + 32) = v24;
  }
  while ( !v26 );
  M_local_buf = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::AServerSession>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AServerSession> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(M_local_buf);
LABEL_104:
    __asan_handle_no_return(M_local_buf);
    std::__throw_bad_weak_ptr();
  }
  handler.__self._M_ptr = this->_M_weak_this._M_ptr;
  boost::asio::io_context::post<common::minet::AServerSession::asyncSendString(std::string &&)::{lambda(void)#1}>(
    io_ctx,
    &handler);
  if ( handler.__self._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(handler.__self._M_refcount._M_pi);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)handler.__data_str._M_dataplus._M_p != &handler.__data_str._anon_0 )
    operator delete(handler.__data_str._M_dataplus._M_p);
  result = 0;
LABEL_110:
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 616: range 0000000014EC4696-0000000014EC46EB
void __fastcall common::minet::AServerSession::asyncSendString(std::string &&)::{lambda(void)#1}::~basic_string(
        common::minet::AServerSession::asyncSendString::<lambda()> *const this)
{
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi

  p_M_refcount = &this->__self._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_M_refcount);
  M_pi = this->__self._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->__data_str._M_dataplus._M_p != &this->__data_str._anon_0 )
    operator delete(this->__data_str._M_dataplus._M_p);
};

// Line 638: range 0000000014EC7ADA-0000000014EC8838
void __fastcall common::minet::AServerSession::asyncSendFrontString(common::minet::AServerSession *const this)
{
  __int64 v1; // rdx
  common::milog::MiLog *v2; // rsi
  unsigned __int64 v4; // r15
  _DWORD *v5; // rbp
  void *p_status; // rdi
  char v7; // al
  char v8; // al
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rdx
  char v12; // al
  unsigned __int64 p_wait_send_queue; // r14
  std::mutex *p_app_id; // rdi
  std::_Deque_base<std::string>::iterator *p_M_finish; // rdi
  unsigned __int64 v16; // rdx
  std::string *v17; // rax
  std::size_t v18; // rax
  void *p_M_map_size; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v21; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer M_node; // rdx
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v23; // rsi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v24; // rdi
  __int128 v25; // rax
  char v26; // al
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::string *v29; // rdx
  char **v30; // rcx
  unsigned __int64 *v31; // r8
  char v32; // dl
  char v33; // al
  void **v34; // rax
  std::string *v35; // rsi
  std::_Vector_base<std::string>::pointer M_start; // rdi
  std::_Vector_base<std::string>::pointer *v37; // rax
  unsigned __int64 p_M_string_length; // rdi
  __int64 v39; // r12
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rax
  const __m128i *v42; // rsi
  const __m128i *v43; // rcx
  const __m128i *v44; // rdx
  unsigned __int64 v45; // rax
  std::size_t v46; // rcx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v47; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rdi
  void *v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  std::deque<std::string>_0::iterator v51; // [rsp-20h] [rbp-338h]
  std::_Vector_base<std::string>::pointer p_is_sending; // [rsp+0h] [rbp-318h]
  int v53; // [rsp+1Ch] [rbp-2FCh]
  char *v54; // [rsp+20h] [rbp-2F8h] BYREF
  unsigned __int64 v55; // [rsp+28h] [rbp-2F0h] BYREF
  boost::system::error_code ec; // [rsp+30h] [rbp-2E8h] BYREF
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // [rsp+40h] [rbp-2D8h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v58; // [rsp+48h] [rbp-2D0h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_last; // [rsp+50h] [rbp-2C8h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer v60; // [rsp+58h] [rbp-2C0h]
  boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<const boost::asio::const_buffer*,std::vector<boost::asio::const_buffer> >,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString()::<lambda(const boost::system::error_code&,size_t)> > v61; // [rsp+60h] [rbp-2B8h] BYREF
  char v62[600]; // [rsp+C0h] [rbp-258h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_4(544LL);
    if ( v9 )
      v4 = v9;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 16 11 handler:665 80 16 8 handler2 112 24 19 send_buffer_vec:675 176 32 9 __pos:637 240 32 "
                        "6 __last 304 32 7 __first 368 32 5 __tmp 432 80 13 str_queue:652";
  *(_QWORD *)(v4 + 16) = common::minet::AServerSession::asyncSendFrontString;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862736] = -202116109;
  p_status = &this->status_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(p_status);
  }
  else
  {
    if ( this->status_ == STATUS_START_0 )
      goto LABEL_18;
    v2 = &common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v4 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aserver_session.cpp",
      "asyncSendFrontString",
      641);
    p_status = &this->app_id_;
    v8 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
    if ( !v8 || v8 > 3 )
    {
      v2 = (common::milog::MiLog *)"client: %d status_ is not STATUS_START, Stop asyncSend request";
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 368),
        "client: %d status_ is not STATUS_START, Stop asyncSend request",
        this->app_id_);
      goto LABEL_12;
    }
  }
  __asan_report_load4(p_status);
LABEL_12:
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 368));
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
  v11 = ((_BYTE)this - 80) & 7;
  if ( v10 > (char)v11 || !v10 )
  {
    this->is_sending_._M_base._M_i = 0;
    _mm_mfence();
    goto LABEL_15;
  }
  __asan_report_store1(&this->is_sending_, v2, v11);
LABEL_18:
  p_is_sending = (std::_Vector_base<std::string>::pointer)&this->is_sending_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
  if ( v12 <= (((unsigned __int8)this - 80) & 7) && v12 )
  {
    __asan_report_load1(p_is_sending, ((_DWORD)this + 176) & 7, v1);
LABEL_49:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v4 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aserver_session.cpp",
      "asyncSendFrontString",
      648);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v4 + 392),
      "is_sending is true, should not happen,app_id:");
    p_app_id = (std::mutex *)&this->app_id_;
    v32 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 96) & 7) + 3) < v32 || !v32 )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v4 + 392),
        this->app_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 368));
      goto LABEL_15;
    }
    __asan_report_load4(p_app_id);
LABEL_53:
    __asan_handle_no_return(p_app_id);
    std::__throw_system_error(v53);
  }
  if ( this->is_sending_._M_base._M_i )
    goto LABEL_49;
  *(_QWORD *)(v4 + 432) = 0LL;
  *(_QWORD *)(v4 + 440) = 0LL;
  *(_QWORD *)(v4 + 448) = 0LL;
  *(_QWORD *)(v4 + 456) = 0LL;
  *(_QWORD *)(v4 + 464) = 0LL;
  *(_QWORD *)(v4 + 472) = 0LL;
  *(_QWORD *)(v4 + 480) = 0LL;
  *(_QWORD *)(v4 + 488) = 0LL;
  *(_QWORD *)(v4 + 496) = 0LL;
  *(_QWORD *)(v4 + 504) = 0LL;
  std::_Deque_base<std::string>::_M_initialize_map((std::_Deque_base<std::string> *const)(v4 + 432), 0LL);
  p_wait_send_queue = (unsigned __int64)&this->wait_send_queue_;
  if ( &_pthread_key_create )
  {
    p_app_id = &this->wait_send_queue_.queue_mu_;
    v53 = pthread_mutex_lock(&this->wait_send_queue_.queue_mu_._M_mutex);
    if ( v53 )
      goto LABEL_53;
  }
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_55;
  }
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  v16 = (unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3;
  if ( *(_BYTE *)(v16 + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(p_M_finish);
LABEL_56:
    __asan_report_load_n(p_M_finish, 32LL);
LABEL_57:
    __asan_report_load_n(p_M_finish, 32LL);
    goto LABEL_58;
  }
  if ( this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur == this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur )
    goto LABEL_40;
  *(__m128i *)(v4 + 368) = _mm_load_si128((const __m128i *)(v4 + 448));
  *(__m128i *)(v4 + 384) = _mm_load_si128((const __m128i *)(v4 + 464));
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 95) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_56;
  }
  *(__m128i *)(v4 + 448) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start);
  *(__m128i *)(v4 + 464) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last);
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur = _mm_load_si128((const __m128i *)(v4 + 368));
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last = _mm_load_si128((const __m128i *)(v4 + 384));
  *(__m128i *)(v4 + 368) = _mm_load_si128((const __m128i *)(v4 + 480));
  *(__m128i *)(v4 + 384) = _mm_load_si128((const __m128i *)(v4 + 496));
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 127) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_57;
  }
  *(__m128i *)(v4 + 480) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish);
  *(__m128i *)(v4 + 496) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last);
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v4 + 368));
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v4 + 384));
  v17 = *(std::string **)(v4 + 432);
  if ( *(_BYTE *)((p_wait_send_queue >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_M_map_size = &this->wait_send_queue_;
    __asan_report_load8(&this->wait_send_queue_);
    goto LABEL_59;
  }
  *(_QWORD *)(v4 + 432) = this->wait_send_queue_.queue_.c._M_impl._M_map;
  this->wait_send_queue_.queue_.c._M_impl._M_map = v17;
  v18 = *(_QWORD *)(v4 + 440);
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_M_map_size);
LABEL_60:
    __asan_report_load_n(p_M_map_size, 32LL);
LABEL_61:
    __asan_report_load_n(p_M_map_size, 32LL);
    goto LABEL_62;
  }
  *(_QWORD *)(v4 + 440) = this->wait_send_queue_.queue_.c._M_impl._M_map_size;
  this->wait_send_queue_.queue_.c._M_impl._M_map_size = v18;
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 95) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_60;
  }
  M_first = this->wait_send_queue_.queue_.c._M_impl._M_start._M_first;
  M_cur = this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur;
  v58 = M_first;
  M_node = this->wait_send_queue_.queue_.c._M_impl._M_start._M_node;
  M_last = this->wait_send_queue_.queue_.c._M_impl._M_start._M_last;
  v21 = M_last;
  v60 = M_node;
  *(_QWORD *)(v4 + 176) = M_cur;
  *(_QWORD *)(v4 + 184) = M_first;
  *(_QWORD *)(v4 + 192) = v21;
  *(_QWORD *)(v4 + 200) = M_node;
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 127) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_61;
  }
  v23 = this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur;
  v24 = this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first;
  *(_QWORD *)(v4 + 368) = v23;
  *(_QWORD *)(v4 + 376) = v24;
  v25 = *(_OWORD *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last;
  *(_OWORD *)(v4 + 384) = v25;
  *(__m128i *)(v4 + 304) = _mm_load_si128((const __m128i *)(v4 + 176));
  *(__m128i *)(v4 + 320) = _mm_load_si128((const __m128i *)(v4 + 192));
  *(_QWORD *)(v4 + 240) = v23;
  *(_QWORD *)(v4 + 248) = v24;
  *(_OWORD *)(v4 + 256) = v25;
  *(_OWORD *)&v51._M_last = v25;
  *(_OWORD *)&v51._M_cur = *(_OWORD *)(v4 + 240);
  std::deque<std::string>::_M_destroy_data_aux(
    (std::deque<std::string>_0 *const)&this->wait_send_queue_,
    *(std::deque<std::string>_0::iterator *)(v4 + 304),
    v51);
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(p_M_map_size);
LABEL_63:
    __asan_report_store_n(p_M_map_size, 32LL);
LABEL_64:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v4 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/aserver_session.cpp",
      "asyncSendFrontString",
      657);
    v33 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
    if ( v33 && v33 <= 3 )
      __asan_report_load4(&this->app_id_);
    else
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 304),
        "client: %d wait_send_queue_ empty",
        this->app_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 304));
    std::deque<std::string>::~deque((std::deque<std::string>_0 *const)(v4 + 432));
    goto LABEL_15;
  }
  std::_Deque_base<std::string>::_M_destroy_nodes(
    (std::_Deque_base<std::string>_0 *const)&this->wait_send_queue_,
    (std::_Deque_base<std::string>::_Map_pointer_0)(*(_QWORD *)(v4 + 200) + 8LL),
    (std::_Deque_base<std::string>::_Map_pointer_0)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node->_M_string_length);
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  v16 = *(unsigned __int8 *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 127) & 7)
    || (v16 & 0x80u) != 0LL )
  {
    goto LABEL_63;
  }
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v4 + 176));
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v4 + 192));
LABEL_40:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->wait_send_queue_.queue_mu_._M_mutex);
  if ( *(_QWORD *)(v4 + 480) == *(_QWORD *)(v4 + 448) )
    goto LABEL_64;
  v26 = *(_BYTE *)(((unsigned __int64)p_is_sending >> 3) + 0x7FFF8000);
  if ( v26 <= (((unsigned __int8)this - 80) & 7) && v26 )
  {
    p_M_refcount = &this->is_sending_;
    __asan_report_store1(&this->is_sending_, ((_BYTE)this - 80) & 7, v16);
    goto LABEL_70;
  }
  this->is_sending_._M_base._M_i = 1;
  _mm_mfence();
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(p_M_refcount);
    goto LABEL_71;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v4 + 56) = M_pi;
  if ( !M_pi )
    goto LABEL_74;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(M_pi);
LABEL_71:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->std::enable_shared_from_this<common::minet::AServerSession>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AServerSession> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
LABEL_74:
    __asan_handle_no_return(M_pi);
    std::__throw_bad_weak_ptr();
  }
  *(_QWORD *)(v4 + 48) = this->_M_weak_this._M_ptr;
  while ( 1 )
  {
    v35 = *(std::string **)(v4 + 448);
    if ( *(std::string **)(v4 + 480) == v35 )
      break;
    std::vector<std::string>::emplace_back<std::string>(&this->send_str_vec_, v35, v29);
    v34 = *(void ***)(v4 + 448);
    if ( v34 == (void **)(*(_QWORD *)(v4 + 464) - 32LL) )
    {
LABEL_83:
      std::deque<std::string>::_M_pop_front_aux((std::deque<std::string> *const)(v4 + 432));
    }
    else
    {
      v29 = (std::string *)((unsigned __int64)v34 >> 3);
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(*(_QWORD *)(v4 + 448));
        goto LABEL_83;
      }
      if ( *v34 != v34 + 2 )
        operator delete(*v34);
      *(_QWORD *)(v4 + 448) += 32LL;
    }
  }
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 128) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_ >> 3) + 0x7FFF8000) )
  {
    v37 = (std::_Vector_base<std::string>::pointer *)__asan_report_load8(&this->send_str_vec_);
    goto LABEL_88;
  }
  M_start = this->send_str_vec_._M_impl._M_start;
  v37 = &this->send_str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    p_M_string_length = (unsigned __int64)v37;
    __asan_report_load8(v37);
    goto LABEL_89;
  }
  p_is_sending = this->send_str_vec_._M_impl._M_finish;
  while ( 1 )
  {
    p_wait_send_queue = (unsigned __int64)M_start;
    if ( p_is_sending == M_start )
      break;
    p_M_string_length = (unsigned __int64)&M_start->_M_string_length;
    if ( *(_BYTE *)((p_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_89:
      __asan_report_load8(p_M_string_length);
LABEL_90:
      __asan_report_load8(p_M_string_length);
      goto LABEL_91;
    }
    v55 = *(_QWORD *)(p_wait_send_queue + 8);
    p_M_string_length = p_wait_send_queue;
    if ( *(_BYTE *)((p_wait_send_queue >> 3) + 0x7FFF8000) )
      goto LABEL_90;
    v54 = *(char **)p_wait_send_queue;
    std::vector<boost::asio::const_buffer>::emplace_back<char *,unsigned long>(
      (std::vector<boost::asio::const_buffer> *const)(v4 + 112),
      &v54,
      &v55,
      v30,
      v31);
LABEL_91:
    M_start = (std::_Vector_base<std::string>::pointer)(p_wait_send_queue + 32);
  }
  std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 80),
    (const std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *)(v4 + 48));
  v61.stream_ = &this->sock_;
  v39 = *(_QWORD *)(v4 + 120) - *(_QWORD *)(v4 + 112);
  memset(&v61.buffers_, 0, 24);
  v40 = v39 >> 4;
  if ( v39 >> 4 )
  {
    if ( v40 > 0x7FFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(v40);
      std::__throw_bad_alloc();
    }
    v41 = operator new(16 * v40);
  }
  else
  {
    v41 = 0LL;
  }
  v61.buffers_.buffers_._M_impl._M_start = (std::_Vector_base<boost::asio::const_buffer>::pointer)v41;
  v61.buffers_.buffers_._M_impl._M_finish = (std::_Vector_base<boost::asio::const_buffer>::pointer)v41;
  v61.buffers_.buffers_._M_impl._M_end_of_storage = (std::_Vector_base<boost::asio::const_buffer>::pointer)(v41 + v39);
  v42 = *(const __m128i **)(v4 + 120);
  v43 = *(const __m128i **)(v4 + 112);
  while ( 1 )
  {
    v44 = v43;
    if ( v42 == v43 )
      break;
    if ( *(_WORD *)((v41 >> 3) + 0x7FFF8000) )
    {
      v41 = __asan_report_store16();
    }
    else if ( *(_WORD *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
    {
      v41 = __asan_report_load16(v43);
      break;
    }
    *(__m128i *)v41 = _mm_loadu_si128(v44);
    v43 = v44 + 1;
    v41 += 16LL;
  }
  v61.buffers_.buffers_._M_impl._M_finish = (std::_Vector_base<boost::asio::const_buffer>::pointer)v41;
  memset(&v61.buffers_.total_consumed_, 0, 24);
  v45 = *(_QWORD *)(v4 + 112);
  v46 = 0LL;
  while ( *(_QWORD *)(v4 + 120) != v45 )
  {
    if ( *(_WORD *)((v45 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(v45);
      break;
    }
    v46 += *(_QWORD *)(v45 + 8);
    v45 += 16LL;
  }
  v61.buffers_.total_size_ = v46;
  v61.start_ = 0;
  v61.handler_.__self_ptr._M_ptr = *(std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 80);
  v47 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 88);
  *(_QWORD *)(v4 + 88) = 0LL;
  v61.handler_.__self_ptr._M_refcount._M_pi = v47;
  *(_QWORD *)(v4 + 80) = 0LL;
  ec.val_ = 0;
  ec.failed_ = 0;
  ec.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::operator()(
    &v61,
    &ec,
    0LL,
    1);
  boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::~write_op(&v61);
  v48 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 88);
  if ( v48 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v48);
  v49 = *(void **)(v4 + 112);
  if ( v49 )
    operator delete(v49);
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 56);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  std::deque<std::string>::~deque((std::deque<std::string>_0 *const)(v4 + 432));
LABEL_15:
  if ( v62 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 685: range 0000000014EC8EEC-0000000014EC91D1
void __fastcall common::minet::AServerSession::handleAsyncSend(
        common::minet::AServerSession *const this,
        const boost::system::error_code *ec,
        size_t bytes)
{
  std::string *M_start; // r13
  std::_Vector_base<std::string>::pointer M_finish; // r14
  std::_Vector_base<std::string>::pointer i; // rbp
  std::atomic<bool> *p_is_sending; // rdi
  char v8; // al
  __int64 v9; // rdx
  char v10; // al
  const boost::system::error_code *p_M_string_length; // rdi
  const boost::system::error_code *v12; // rdi
  char v13; // al
  char v14; // al
  std::vector<std::string> *p_send_str_vec; // rdi
  pthread_mutex_t *p_M_finish; // rdi
  std::_Deque_base<std::string>::iterator *p_M_start; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // r12
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v19; // rbp
  struct _Unwind_Exception *v20; // rbx
  common::milog::MiLogStream v21; // [rsp+0h] [rbp-68h] BYREF
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  char v23[56]; // [rsp+30h] [rbp-38h] BYREF

  i = (std::_Vector_base<std::string>::pointer)ec;
  p_is_sending = &this->is_sending_;
  v8 = *(_BYTE *)(((unsigned __int64)p_is_sending >> 3) + 0x7FFF8000);
  v9 = (unsigned __int8)p_is_sending & 7;
  if ( v8 <= (char)v9 && v8 )
  {
    __asan_report_store1(p_is_sending, ec, v9);
LABEL_13:
    p_M_string_length = ec;
    __asan_report_load4(ec);
LABEL_14:
    __asan_report_load8(p_M_string_length);
    goto LABEL_15;
  }
  this->is_sending_._M_base._M_i = 0;
  _mm_mfence();
  v10 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_13;
  if ( !ec->val_ )
    goto LABEL_25;
  ec = (const boost::system::error_code *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aserver_session.cpp",
    "handleAsyncSend",
    689);
  p_M_string_length = (const boost::system::error_code *)&i->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&i->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  ec = (const boost::system::error_code *)i->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v12 = ec;
    __asan_report_load8(ec);
    goto LABEL_16;
  }
  v12 = (const boost::system::error_code *)(*(_QWORD *)&ec->val_ + 32LL);
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v12);
    goto LABEL_17;
  }
  v13 = *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000);
  if ( !v13 || v13 > 3 )
  {
    (*(void (__fastcall **)(void **, const boost::system::error_code *, _QWORD))(*(_QWORD *)&ec->val_ + 32LL))(
      &v22,
      ec,
      LODWORD(i->_M_dataplus._M_p));
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load4(i);
LABEL_18:
  v14 = *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
  {
    __asan_report_load4(&this->app_id_);
  }
  else
  {
    ec = (const boost::system::error_code *)"client: %d handleAsyncSend ec %u message: %s";
    common::milog::MiLogStream::operator()(
      &v21,
      "client: %d handleAsyncSend ec %u message: %s",
      this->app_id_,
      LODWORD(i->_M_dataplus._M_p),
      (const char *)v22);
  }
  if ( v22 != v23 )
    operator delete(v22);
  common::milog::MiLogStream::~MiLogStream(&v21);
LABEL_25:
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_ >> 3) + 0x7FFF8000) )
  {
    p_send_str_vec = &this->send_str_vec_;
    __asan_report_load8(&this->send_str_vec_);
    goto LABEL_30;
  }
  M_start = this->send_str_vec_._M_impl._M_start;
  p_send_str_vec = (std::vector<std::string> *)&this->send_str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_send_str_vec);
    goto LABEL_31;
  }
  M_finish = this->send_str_vec_._M_impl._M_finish;
  if ( M_start != M_finish )
  {
    for ( i = this->send_str_vec_._M_impl._M_start; ; ++i )
    {
      if ( M_finish == i )
      {
        p_M_finish = (pthread_mutex_t *)&this->send_str_vec_._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          this->send_str_vec_._M_impl._M_finish = M_start;
          goto LABEL_40;
        }
        __asan_report_store8(p_M_finish, ec);
LABEL_50:
        __asan_handle_no_return(p_M_finish);
        std::__throw_system_error((int)i);
      }
      p_send_str_vec = (std::vector<std::string> *)i;
      if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
        break;
      p_send_str_vec = (std::vector<std::string> *)i->_M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)i->_M_dataplus._M_p != &i->_anon_0 )
        goto LABEL_32;
LABEL_33:
      ;
    }
LABEL_31:
    __asan_report_load8(p_send_str_vec);
LABEL_32:
    operator delete(p_send_str_vec);
    goto LABEL_33;
  }
LABEL_40:
  p_M_finish = &this->wait_send_queue_.queue_mu_._M_mutex;
  if ( &_pthread_key_create )
  {
    LODWORD(i) = pthread_mutex_lock(p_M_finish);
    if ( (_DWORD)i )
      goto LABEL_50;
  }
  p_M_start = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_start);
LABEL_52:
    v20 = (struct _Unwind_Exception *)__asan_report_load8(p_M_start);
    if ( v22 != v23 )
      operator delete(v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    __asan_handle_no_return(&v21);
    _Unwind_Resume(v20);
  }
  M_cur = this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur;
  p_M_start = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    goto LABEL_52;
  v19 = this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->wait_send_queue_.queue_mu_._M_mutex);
  if ( M_cur != v19 )
    common::minet::AServerSession::asyncSendFrontString(this);
};

// Line 715: range 0000000014EC6CD6-0000000014EC6DAC
__int64 __fastcall common::minet::AServerSession::onDisconnect(common::minet::AServerSession *const this)
{
  common::milog::MilogStringStream *ostr; // rbp
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v5; // rbx
  struct _Unwind_Exception *v6; // rbx
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-38h] BYREF

  common::milog::MiLogStream::MiLogStream(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/aserver_session.cpp",
    "onDisconnect",
    716);
  ostr = v8.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v8.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v8.ostr_;
    __asan_report_load8(v8.ostr_);
LABEL_7:
    v6 = (struct _Unwind_Exception *)__asan_report_load8(p_cur);
    common::milog::MiLogStream::~MiLogStream(&v8);
    __asan_handle_no_return(&v8);
    _Unwind_Resume(v6);
  }
  p_cur = (common::milog::MilogStringStream *)&v8.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v8.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    goto LABEL_7;
  cur = v8.ostr_->buffer_.cur_;
  v5 = (size_t)&v8.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v5 > 0x13 )
    v5 = 20LL;
  memcpy(cur, "client disconnected:", v5);
  ostr->buffer_.cur_ += v5;
  common::minet::operator<<(&v8, this);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};

// Line 725: range 0000000014EC3538-0000000014EC36CE
bool __fastcall common::minet::AServerSession::isPacketBegin(
        common::minet::AServerSession *const this,
        char *data,
        uint32_t len)
{
  char isPacketBegin; // bp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  uint32_t *v8; // rax
  char v9; // cl
  uint32_t v10; // r14d
  size_t v11; // r15
  void *v12; // r12
  __int64 v14; // rax
  char v15[120]; // [rsp+10h] [rbp-78h] BYREF

  isPacketBegin = (char)this;
  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_0(64LL);
    if ( v14 )
      v5 = v14;
  }
  v6 = v5 + 64;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 7 len:724";
  *(_QWORD *)(v5 + 16) = common::minet::AServerSession::isPacketBegin;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = len;
  if ( *(_BYTE *)(((unsigned __int64)&this->xor_key_._M_string_length >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load8(&this->xor_key_._M_string_length);
    goto LABEL_15;
  }
  if ( !this->xor_key_._M_string_length )
  {
LABEL_15:
    isPacketBegin = common::minet::Packet::isPacketBegin(data, *(_DWORD *)(v6 - 32));
    goto LABEL_9;
  }
  if ( common::minet::AServerSession::isPacketBegin(char *,unsigned int)::head_magic_len < *(_DWORD *)(v5 + 32) )
    v8 = &common::minet::AServerSession::isPacketBegin(char *,unsigned int)::head_magic_len;
  else
    v8 = (uint32_t *)(v5 + 32);
  v9 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v8 & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(v8);
    goto LABEL_18;
  }
  v10 = *v8;
  v11 = *v8;
  v12 = malloc(v11);
  memcpy(v12, data, v11);
  common::minet::AServerSession::xorData(this, (char *)v12, v10);
  isPacketBegin = common::minet::Packet::isPacketBegin((const char *)v12, v10);
  free(v12);
LABEL_9:
  if ( v15 != (char *)v5 )
  {
LABEL_18:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return isPacketBegin;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  return isPacketBegin;
};

// Line 742: range 0000000014EC3468-0000000014EC3536
void __fastcall common::minet::AServerSession::xorData(
        common::minet::AServerSession *const this,
        char *data,
        uint32_t len)
{
  uint32_t v3; // r10d
  unsigned int M_string_length; // r8d
  uint32_t i; // ecx
  std::string *p_xor_key; // rax
  common::minet::AServerSession *v7; // rdx
  unsigned __int64 v8; // rax
  char vptr_AServerSession; // r9
  char v10; // al
  __int64 v11; // rdx

  v3 = len;
  if ( *(_BYTE *)(((unsigned __int64)&this->xor_key_._M_string_length >> 3) + 0x7FFF8000) )
  {
    p_xor_key = (std::string *)__asan_report_load8(&this->xor_key_._M_string_length);
    goto LABEL_5;
  }
  M_string_length = this->xor_key_._M_string_length;
  if ( M_string_length )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v3 )
        return;
      p_xor_key = &this->xor_key_;
      if ( *(_BYTE *)(((unsigned __int64)&this->xor_key_ >> 3) + 0x7FFF8000) )
        break;
      v7 = (common::minet::AServerSession *)&this->xor_key_._M_dataplus._M_p[i % M_string_length];
      v10 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( v10 <= ((unsigned __int8)v7 & 7) && v10 )
        goto LABEL_6;
      vptr_AServerSession = (char)v7->_vptr_AServerSession;
      v8 = (unsigned __int64)&data[i];
      v11 = *(unsigned __int8 *)((v8 >> 3) + 0x7FFF8000);
      if ( (char)v11 <= (char)(((_BYTE)data + i) & 7) && (_BYTE)v11 )
      {
        __asan_report_load1(v8, data, v11);
        return;
      }
LABEL_7:
      *(_BYTE *)v8 ^= vptr_AServerSession;
    }
LABEL_5:
    __asan_report_load8(p_xor_key);
LABEL_6:
    this = v7;
    v8 = __asan_report_load1(v7, data, v7);
    goto LABEL_7;
  }
};

// Line 758: range 0000000014EC36D0-0000000014EC3864
uint32_t __fastcall common::minet::AServerSession::getPacketLen(
        common::minet::AServerSession *const this,
        char *data,
        uint32_t len)
{
  uint32_t PacketLen; // ebp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v8; // rax
  uint32_t *p_MinPacketLen; // r13
  char v10; // dl
  uint32_t v11; // r15d
  void *v12; // r13
  size_t n; // [rsp+8h] [rbp-90h]
  uint32_t MinPacketLen; // [rsp+1Ch] [rbp-7Ch] BYREF
  char v15[120]; // [rsp+20h] [rbp-78h] BYREF

  PacketLen = (unsigned int)this;
  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 7 len:757";
  *(_QWORD *)(v5 + 16) = common::minet::AServerSession::getPacketLen;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = len;
  if ( *(_BYTE *)(((unsigned __int64)&this->xor_key_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->xor_key_._M_string_length);
  }
  else if ( !this->xor_key_._M_string_length )
  {
    PacketLen = common::minet::Packet::getPacketLen(data, *(_DWORD *)(v5 + 32));
    goto LABEL_5;
  }
  MinPacketLen = common::minet::Packet::getMinPacketLen();
  if ( MinPacketLen < *(_DWORD *)(v5 + 32) )
    p_MinPacketLen = &MinPacketLen;
  else
    p_MinPacketLen = (uint32_t *)(v5 + 32);
  v10 = *(_BYTE *)(((unsigned __int64)p_MinPacketLen >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_MinPacketLen & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(p_MinPacketLen);
    goto LABEL_18;
  }
  v11 = *p_MinPacketLen;
  n = *p_MinPacketLen;
  v12 = malloc(n);
  memcpy(v12, data, n);
  common::minet::AServerSession::xorData(this, (char *)v12, v11);
  PacketLen = common::minet::Packet::getPacketLen((const char *)v12, v11);
  free(v12);
LABEL_5:
  if ( v15 != (char *)v5 )
  {
LABEL_18:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return PacketLen;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  return PacketLen;
};

// Line 779: range 0000000014EC687C-0000000014EC6CD4
common::milog::MiLogStream *__fastcall common::minet::operator<<(
        common::milog::MiLogStream *stream,
        const common::minet::AServerSession *session)
{
  unsigned __int64 v2; // r12
  common::milog::MilogStringStream *ostr; // r13
  common::milog::MilogStringStream **p_ostr; // rdi
  uint32_t *p_cur; // rdi
  char *cur; // rdi
  size_t v8; // rbp
  char v9; // dl
  std::string *p_ip_str; // rdi
  char *v11; // rdi
  size_t v12; // rbp
  std::string::pointer M_p; // r14
  size_t v14; // rax
  common::milog::MilogStringStream *v15; // rdi
  char *v16; // rdi
  size_t v17; // rbp
  common::milog::MilogStringStream *v18; // rdi
  char *v19; // rdi
  size_t v20; // rbp
  char v21; // dl
  common::minet::AServerSession *v22; // rdi
  void *v23; // rdi
  size_t v24; // rbp
  common::milog::MiLogStream *result; // rax
  common::milog::MilogStringStream *v26; // rdi
  char *v27; // rdi
  size_t v28; // rbp
  boost::asio::yield_context v29; // [rsp+30h] [rbp+8h]

  p_ostr = &stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)p_ostr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_ostr);
    goto LABEL_29;
  }
  v2 = (unsigned __int64)session;
  ostr = stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    p_cur = (uint32_t *)ostr;
    __asan_report_load8(ostr);
    goto LABEL_30;
  }
  p_cur = (uint32_t *)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_cur);
LABEL_31:
    __asan_report_load4(p_cur);
    goto LABEL_32;
  }
  cur = ostr->buffer_.cur_;
  v8 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)cur;
  if ( v8 > 0xB )
    v8 = 12LL;
  memcpy(cur, "[session_id:", v8);
  ostr->buffer_.cur_ += v8;
  p_cur = &session->session_id_;
  v9 = *(_BYTE *)(((unsigned __int64)&session->session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)session + 28) & 7) + 3) >= v9 && v9 )
    goto LABEL_31;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(stream->ostr_, session->session_id_);
  ostr = stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_ip_str = (std::string *)ostr;
    __asan_report_load8(ostr);
    goto LABEL_33;
  }
  p_ip_str = (std::string *)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_ip_str);
LABEL_34:
    __asan_report_load8(p_ip_str);
    goto LABEL_35;
  }
  v11 = ostr->buffer_.cur_;
  v12 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)v11;
  if ( v12 > 3 )
    v12 = 4LL;
  memcpy(v11, ",ip:", v12);
  ostr->buffer_.cur_ += v12;
  p_ip_str = &session->ip_str_;
  if ( *(_BYTE *)(((unsigned __int64)&session->ip_str_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  M_p = session->ip_str_._M_dataplus._M_p;
  ostr = stream->ostr_;
  if ( !M_p )
    goto LABEL_37;
  v14 = strlen(session->ip_str_._M_dataplus._M_p);
  if ( !*(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
    v15 = (common::milog::MilogStringStream *)&ostr->buffer_.cur_;
    if ( !*(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
      v16 = ostr->buffer_.cur_;
      v17 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)v16;
      if ( v14 <= v17 )
        v17 = v14;
      memcpy(v16, M_p, v17);
      ostr->buffer_.cur_ += v17;
      goto LABEL_19;
    }
    goto LABEL_36;
  }
LABEL_35:
  v15 = ostr;
  __asan_report_load8(ostr);
LABEL_36:
  __asan_report_load8(v15);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
    v26 = ostr;
    __asan_report_load8(ostr);
    goto LABEL_43;
  }
  v26 = (common::milog::MilogStringStream *)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(v26);
    goto LABEL_44;
  }
  v27 = ostr->buffer_.cur_;
  v28 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)v27;
  if ( v28 > 5 )
    v28 = 6LL;
  memcpy(v27, "(null)", v28);
  ostr->buffer_.cur_ += v28;
LABEL_19:
  ostr = stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    v18 = ostr;
    __asan_report_load8(ostr);
    goto LABEL_45;
  }
  v18 = (common::milog::MilogStringStream *)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(v18);
LABEL_46:
    __asan_report_load2(v18);
    goto LABEL_47;
  }
  v19 = ostr->buffer_.cur_;
  v20 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)v19;
  if ( v20 > 5 )
    v20 = 6LL;
  memcpy(v19, ",port:", v20);
  ostr->buffer_.cur_ += v20;
  v18 = (common::milog::MilogStringStream *)(v2 + 498);
  v21 = *(_BYTE *)(((v2 + 498) >> 3) + 0x7FFF8000);
  if ( (char)(((v2 - 14) & 7) + 1) >= v21 && v21 )
    goto LABEL_46;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(stream->ostr_, *(_WORD *)(v2 + 498));
  v2 = (unsigned __int64)stream->ostr_;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v22 = (common::minet::AServerSession *)v2;
    __asan_report_load8(v2);
    goto LABEL_48;
  }
  v22 = (common::minet::AServerSession *)(v2 + 8);
  if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
    v23 = *(void **)(v2 + 8);
    v24 = *(_DWORD *)v2 + 0x4000 - (_DWORD)v23 != 0LL;
    memcpy(v23, "]", v24);
    *(_QWORD *)(v2 + 8) += v24;
    return stream;
  }
LABEL_48:
  __asan_report_load8(v22);
  LODWORD(result) = common::minet::AServerSession::onConnect(v22, v29);
  return result;
};

// Line 783: range 0000000014ED2F56-0000000014ED2F6D
void __cdecl GLOBAL__sub_I_aserver_session_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 783: range 0000000014EC1ED8-0000000014EC215C
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::ios_base::Init *v2; // rsi
  _BYTE *v3; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/aserver_session.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    v2 = &std::__ioinit;
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id )
    {
      `guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
        &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ )
    {
      `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
        &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id )
    {
      `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
        &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
    {
      `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
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
        v3 = (_BYTE *)__asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v2);
        goto LABEL_27;
      }
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
    }
    v3 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
    if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id[0] )
    {
LABEL_22:
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::strand_executor_service>::id )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::strand_executor_service>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_executor_service>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::strand_executor_service>::id,
          &_dso_handle);
      }
      goto LABEL_3;
    }
LABEL_27:
    *v3 = 1;
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
      &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
      &_dso_handle);
    goto LABEL_22;
  }
};
