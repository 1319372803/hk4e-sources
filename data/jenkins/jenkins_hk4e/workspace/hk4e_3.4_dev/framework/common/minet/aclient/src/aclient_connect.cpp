// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aclient/src/aclient_connect.cpp

// Line 26: range 00000000153A93F6-00000000153AA16F
common::milog::MiLogStream *__fastcall common::minet::operator<<(
        common::milog::MiLogStream *stream,
        const common::minet::AClientConnect *connect)
{
  unsigned __int64 v2; // r12
  common::milog::MilogStringStream *ostr; // r13
  common::milog::MilogStringStream **p_ostr; // rdi
  uint32_t *p_cur; // rdi
  char *cur; // rdi
  size_t v8; // rbp
  char v9; // al
  common::milog::MilogStringStream **v10; // rdi
  char *v11; // rdi
  size_t v12; // rbp
  uint16_t *p_server_port; // rdi
  char *v14; // rdi
  size_t v15; // rbp
  char v16; // al
  char *v17; // rdi
  void *v18; // rdi
  size_t v19; // rbp

  p_ostr = &stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)p_ostr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_ostr);
    goto LABEL_23;
  }
  v2 = (unsigned __int64)connect;
  ostr = stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_cur = (uint32_t *)ostr;
    __asan_report_load8(ostr);
    goto LABEL_24;
  }
  p_cur = (uint32_t *)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_cur);
LABEL_25:
    __asan_report_load4(p_cur);
    goto LABEL_26;
  }
  cur = ostr->buffer_.cur_;
  v8 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)cur;
  if ( v8 > 0xE )
    v8 = 15LL;
  memcpy(cur, "[target_app_id:", v8);
  ostr->buffer_.cur_ += v8;
  p_cur = &connect->target_app_id_;
  v9 = *(_BYTE *)(((unsigned __int64)&connect->target_app_id_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_25;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(stream->ostr_, connect->target_app_id_);
  ostr = stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v10 = (common::milog::MilogStringStream **)ostr;
    __asan_report_load8(ostr);
    goto LABEL_27;
  }
  v10 = (common::milog::MilogStringStream **)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(v10);
LABEL_28:
    __asan_report_load8(v10);
    goto LABEL_29;
  }
  v11 = ostr->buffer_.cur_;
  v12 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)v11;
  if ( v12 > 3 )
    v12 = 4LL;
  memcpy(v11, ",ip:", v12);
  ostr->buffer_.cur_ += v12;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(stream->ostr_, connect->server_ip_);
  v10 = &stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)&stream->ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  ostr = stream->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)ostr >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    p_server_port = (uint16_t *)ostr;
    __asan_report_load8(ostr);
    goto LABEL_30;
  }
  p_server_port = (uint16_t *)&ostr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&ostr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_server_port);
LABEL_31:
    __asan_report_load2(p_server_port);
    goto LABEL_32;
  }
  v14 = ostr->buffer_.cur_;
  v15 = LODWORD(ostr->buffer_.data_) + 0x4000 - (int)v14;
  if ( v15 > 5 )
    v15 = 6LL;
  memcpy(v14, ",port:", v15);
  ostr->buffer_.cur_ += v15;
  p_server_port = &connect->server_port_;
  v16 = *(_BYTE *)(((unsigned __int64)&connect->server_port_ >> 3) + 0x7FFF8000);
  if ( v16 && v16 <= 1 )
    goto LABEL_31;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(stream->ostr_, connect->server_port_);
  v2 = (unsigned __int64)stream->ostr_;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (char *)v2;
    __asan_report_load8(v2);
    goto LABEL_33;
  }
  v17 = (char *)(v2 + 8);
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(v17);
    JUMPOUT(0x153A9685LL);
  }
  v18 = *(void **)(v2 + 8);
  v19 = *(_DWORD *)v2 + 0x4000 - (_DWORD)v18 != 0LL;
  memcpy(v18, "]", v19);
  *(_QWORD *)(v2 + 8) += v19;
  return stream;
};

// Line 34: range 00000000153B07EC-00000000153B11CA
void __fastcall common::minet::AClientConnect::AClientConnect(
        common::minet::AClientConnect *const this,
        boost::asio::io_context *ioc)
{
  char *p_wait_send_queue; // rbp
  boost::asio::ip::tcp::socket *p_sock; // r12
  boost::asio::io_context *v4; // r13
  common::minet::AClientConnect *v5; // rbx
  char v6; // dl
  char v7; // al
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *v8; // rax
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::protocol_type *p_protocol; // rdi
  char v10; // al
  boost::asio::executor::impl_base *impl; // rdi
  int (**vptr_impl_base)(...); // rax
  __int64 p_implementation_executor; // rax
  boost::asio::executor::impl_base *p_has_native_impl; // rdi
  unsigned __int64 v15; // rdx
  int (**p_implementation)(...); // rdi
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // dl
  char v21; // al
  std::atomic<bool> *p_is_sending; // rdi
  char v23; // al
  char v24; // al
  void *p_M_finish; // rdi
  char v26; // al
  char v27; // dl
  char v28; // al
  char v29; // dl
  char v30; // dl
  char v31; // al
  std::mutex *p_target_app_id; // rdi
  char v33; // al
  char v34; // dl
  char v35; // al
  char v36; // al
  char v37; // dl
  __int64 v38; // r13
  struct _Unwind_Exception *i; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  boost::asio::executor v41; // [rsp+8h] [rbp-30h] BYREF

  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AClientConnect> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  v4 = ioc;
  this->_M_weak_this._M_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->_M_weak_this._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
LABEL_14:
    __asan_report_store4(this);
LABEL_15:
    __asan_report_store1(this);
    goto LABEL_16;
  }
  this->_vptr_AClientConnect = (int (**)(...))(&`vtable for'common::minet::AClientConnect + 2);
  this = (common::minet::AClientConnect *const)((char *)this + 24);
  v6 = *(_BYTE *)(((unsigned __int64)&v5->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 24) & 7) + 3) >= v6 && v6 )
    goto LABEL_14;
  v5->status_._M_i = STATUS_UN_INIT;
  this = (common::minet::AClientConnect *const)&v5->is_stop_;
  v7 = *(_BYTE *)(((unsigned __int64)&v5->is_stop_ >> 3) + 0x7FFF8000);
  if ( v7 <= (((unsigned __int8)v5 + 28) & 7) && v7 )
    goto LABEL_15;
  v5->is_stop_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v5->io_ctx_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  v5->io_ctx_ = ioc;
  p_sock = &v5->sock_;
  if ( !*(_BYTE *)(((unsigned __int64)ioc >> 3) + 0x7FFF8000) )
  {
    v8 = boost::asio::detail::service_registry::use_service<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
           ioc->service_registry_,
           ioc);
    goto LABEL_18;
  }
LABEL_17:
  v8 = (boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *)__asan_report_load8(v4);
LABEL_18:
  if ( *(_BYTE *)(((unsigned __int64)p_sock >> 3) + 0x7FFF8000) )
  {
    p_protocol = (boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::protocol_type *)p_sock;
    __asan_report_store8();
  }
  else
  {
    v5->sock_.impl_.service_ = v8;
    p_protocol = &p_sock->impl_.implementation_.protocol_;
    v10 = *(_BYTE *)(((unsigned __int64)&p_sock->impl_.implementation_.protocol_ >> 3) + 0x7FFF8000);
    if ( !v10 || v10 > 3 )
    {
      p_sock->impl_.implementation_.protocol_.family_ = 2;
      ioc = v4;
      boost::asio::executor::executor<boost::asio::io_context::executor_type>(
        &v41,
        (boost::asio::io_context::executor_type)v4);
      goto LABEL_24;
    }
  }
  __asan_report_store4(p_protocol);
LABEL_24:
  impl = v41.impl_;
  if ( !v41.impl_ )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)v41.impl_ >> 3) + 0x7FFF8000) )
  {
    vptr_impl_base = (int (**)(...))__asan_report_load8(v41.impl_);
    goto LABEL_58;
  }
  vptr_impl_base = v41.impl_->_vptr_impl_base;
  if ( *(_BYTE *)(((unsigned __int64)v41.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_implementation_executor = __asan_report_load8(vptr_impl_base);
    goto LABEL_59;
  }
  impl = (boost::asio::executor::impl_base *)((__int64 (*)(void))*vptr_impl_base)();
LABEL_28:
  p_implementation_executor = (__int64)&p_sock->impl_.implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&p_sock->impl_.implementation_executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    p_has_native_impl = (boost::asio::executor::impl_base *)p_implementation_executor;
    __asan_report_store8();
    goto LABEL_60;
  }
  p_sock->impl_.implementation_executor_.executor_.impl_ = impl;
  p_has_native_impl = (boost::asio::executor::impl_base *)&p_sock->impl_.implementation_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&p_sock->impl_.implementation_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_60:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_61;
  }
  p_sock->impl_.implementation_executor_.has_native_impl_ = 1;
  p_has_native_impl = v41.impl_;
  if ( v41.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v41.impl_ >> 3) + 0x7FFF8000) )
    {
      v15 = (unsigned __int64)(v41.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))v41.impl_->_vptr_impl_base + 1))();
        goto LABEL_34;
      }
LABEL_62:
      p_implementation = (int (**)(...))v15;
      __asan_report_load8(v15);
LABEL_63:
      __asan_report_store4(p_implementation);
LABEL_64:
      __asan_report_store1(p_implementation);
      goto LABEL_65;
    }
LABEL_61:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_62;
  }
LABEL_34:
  p_implementation = (int (**)(...))&p_sock->impl_.implementation_;
  v17 = *(_BYTE *)(((unsigned __int64)&p_sock->impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
    goto LABEL_63;
  p_sock->impl_.implementation_.socket_ = -1;
  p_implementation = (int (**)(...))&p_sock->impl_.implementation_.state_;
  v18 = *(_BYTE *)(((unsigned __int64)&p_sock->impl_.implementation_.state_ >> 3) + 0x7FFF8000);
  if ( v18 <= (((unsigned __int8)p_sock + 12) & 7) && v18 )
    goto LABEL_64;
  p_sock->impl_.implementation_.state_ = 0;
  p_implementation = (int (**)(...))v5->server_ip_;
  if ( *(_WORD *)(((unsigned __int64)v5->server_ip_ >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_implementation, ioc);
LABEL_66:
    __asan_report_store2(p_implementation);
LABEL_67:
    __asan_report_store4(p_implementation);
    goto LABEL_68;
  }
  *(_QWORD *)v5->server_ip_ = 0LL;
  *(_QWORD *)&v5->server_ip_[8] = 0LL;
  p_implementation = (int (**)(...))&v5->server_port_;
  v19 = *(_BYTE *)(((unsigned __int64)&v5->server_port_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 1 )
    goto LABEL_66;
  v5->server_port_ = 0;
  p_implementation = (int (**)(...))&v5->server_ip_int_;
  v20 = *(_BYTE *)(((unsigned __int64)&v5->server_ip_int_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 108) & 7) + 3) >= v20 && v20 )
    goto LABEL_67;
  v5->server_ip_int_ = 0;
  p_implementation = (int (**)(...))&v5->recv_buf_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->recv_buf_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_implementation);
    goto LABEL_70;
  }
  v5->recv_buf_ = 0LL;
  p_implementation = (int (**)(...))&v5->recv_buf_len_;
  v21 = *(_BYTE *)(((unsigned __int64)&v5->recv_buf_len_ >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_69;
  v5->recv_buf_len_ = 0;
  p_wait_send_queue = (char *)&v5->wait_send_queue_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8();
    goto LABEL_71;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_map = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_map_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_start._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_start._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_store8();
    goto LABEL_75;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_start._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8();
    goto LABEL_76;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_start._M_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_store8();
    goto LABEL_77;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_store8();
    goto LABEL_78;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_first = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8();
    goto LABEL_79;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_last = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_store8();
    goto LABEL_80;
  }
  v5->wait_send_queue_.queue_.c._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<std::string>::_M_initialize_map(&v5->wait_send_queue_.queue_.c, 0LL);
LABEL_80:
  p_is_sending = (std::atomic<bool> *)(p_wait_send_queue + 80);
  v23 = *(_BYTE *)(((unsigned __int64)(p_wait_send_queue + 80) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
  {
    __asan_report_store4(p_is_sending);
LABEL_104:
    __asan_report_store_n(p_is_sending, 40LL);
LABEL_105:
    __asan_report_store1(p_is_sending);
    goto LABEL_106;
  }
  *((_DWORD *)p_wait_send_queue + 20) = 0;
  p_is_sending = (std::atomic<bool> *)(p_wait_send_queue + 88);
  if ( *(_BYTE *)(((unsigned __int64)(p_wait_send_queue + 127) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(p_wait_send_queue + 127) >> 3) + 0x7FFF8000) <= (((unsigned __int8)p_wait_send_queue
                                                                                      + 127) & 7)
    || *(char *)(((unsigned __int64)(p_wait_send_queue + 88) >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_104;
  }
  *((_QWORD *)p_wait_send_queue + 11) = 0LL;
  *((_QWORD *)p_wait_send_queue + 12) = 0LL;
  *((_QWORD *)p_wait_send_queue + 13) = 0LL;
  *((_QWORD *)p_wait_send_queue + 14) = 0LL;
  *((_QWORD *)p_wait_send_queue + 15) = 0LL;
  p_is_sending = &v5->is_sending_;
  v24 = *(_BYTE *)(((unsigned __int64)&v5->is_sending_ >> 3) + 0x7FFF8000);
  if ( v24 <= ((unsigned __int8)v5 & 7) && v24 )
    goto LABEL_105;
  v5->is_sending_._M_base._M_i = 0;
  p_wait_send_queue = (char *)&v5->send_str_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->send_str_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    p_M_finish = p_wait_send_queue;
    __asan_report_store8();
    goto LABEL_107;
  }
  v5->send_str_vec_._M_impl._M_start = 0LL;
  p_M_finish = &v5->send_str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v5->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_store8();
    goto LABEL_108;
  }
  v5->send_str_vec_._M_impl._M_finish = 0LL;
  p_M_finish = &v5->send_str_vec_._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&v5->send_str_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_store8();
LABEL_109:
    __asan_report_store4(p_M_finish);
LABEL_110:
    __asan_report_store4(p_M_finish);
    goto LABEL_111;
  }
  v5->send_str_vec_._M_impl._M_end_of_storage = 0LL;
  p_M_finish = &v5->cache_packet_max_num_;
  v26 = *(_BYTE *)(((unsigned __int64)&v5->cache_packet_max_num_ >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 3 )
    goto LABEL_109;
  v5->cache_packet_max_num_ = 0;
  p_M_finish = &v5->max_send_packet_len_;
  v27 = *(_BYTE *)(((unsigned __int64)&v5->max_send_packet_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 36) & 7) + 3) >= v27 && v27 )
    goto LABEL_110;
  v5->max_send_packet_len_ = 0;
  p_M_finish = &v5->is_cut_packet_;
  if ( *(char *)(((unsigned __int64)&v5->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_111:
    __asan_report_store1(p_M_finish);
LABEL_112:
    __asan_report_store1(p_M_finish);
LABEL_113:
    __asan_report_store2(p_M_finish);
LABEL_114:
    __asan_report_store2(p_M_finish);
LABEL_115:
    __asan_report_store4(p_M_finish);
    goto LABEL_116;
  }
  v5->is_cut_packet_ = 0;
  p_M_finish = &v5->is_async_send_;
  v28 = *(_BYTE *)(((unsigned __int64)&v5->is_async_send_ >> 3) + 0x7FFF8000);
  if ( v28 <= (((unsigned __int8)v5 + 41) & 7) && v28 )
    goto LABEL_112;
  v5->is_async_send_ = 0;
  p_M_finish = &v5->keep_alive_sec_;
  v29 = *(_BYTE *)(((unsigned __int64)&v5->keep_alive_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 42) & 7) + 1) >= v29 && v29 )
    goto LABEL_113;
  v5->keep_alive_sec_ = 0;
  p_M_finish = &v5->timeout_sec_;
  v30 = *(_BYTE *)(((unsigned __int64)&v5->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 44) & 7) + 1) >= v30 && v30 )
    goto LABEL_114;
  v5->timeout_sec_ = 0;
  p_M_finish = &v5->last_alive_time_;
  v31 = *(_BYTE *)(((unsigned __int64)&v5->last_alive_time_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_115;
  v5->last_alive_time_ = 0;
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
    &v5->keep_alive_dt_.impl_,
    v4,
    0LL);
LABEL_116:
  p_target_app_id = (std::mutex *)&v5->target_app_id_;
  v33 = *(_BYTE *)(((unsigned __int64)&v5->target_app_id_ >> 3) + 0x7FFF8000);
  if ( v33 && v33 <= 3 )
  {
    __asan_report_store4(p_target_app_id);
LABEL_130:
    __asan_report_store4(p_target_app_id);
LABEL_131:
    __asan_report_store4(p_target_app_id);
LABEL_132:
    __asan_report_store_n(p_target_app_id, 40LL);
LABEL_133:
    __asan_report_store4(p_target_app_id);
    goto LABEL_134;
  }
  v5->target_app_id_ = 0;
  p_target_app_id = (std::mutex *)&v5->self_app_id_;
  v34 = *(_BYTE *)(((unsigned __int64)&v5->self_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 - 116) & 7) + 3) >= v34 && v34 )
    goto LABEL_130;
  v5->self_app_id_ = 0;
  p_target_app_id = (std::mutex *)&v5->rtt_;
  v35 = *(_BYTE *)(((unsigned __int64)&v5->rtt_ >> 3) + 0x7FFF8000);
  if ( v35 && v35 <= 3 )
    goto LABEL_131;
  v5->rtt_ = 0;
  p_target_app_id = &v5->send_mu_;
  if ( *(_BYTE *)((((unsigned __int64)&v5->send_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v5->send_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v5
                                                                                                  - 65) & 7)
    || *(char *)(((unsigned __int64)&v5->send_mu_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_132;
  }
  v5->send_mu_._M_mutex.__align = 0LL;
  *(&v5->send_mu_._M_mutex.__align + 1) = 0LL;
  *(&v5->send_mu_._M_mutex.__align + 2) = 0LL;
  v5->send_mu_._M_mutex.__data.__list.__prev = 0LL;
  v5->send_mu_._M_mutex.__data.__list.__next = 0LL;
  p_target_app_id = (std::mutex *)&v5->reconnect_min_interval_;
  v36 = *(_BYTE *)(((unsigned __int64)&v5->reconnect_min_interval_ >> 3) + 0x7FFF8000);
  if ( v36 && v36 <= 3 )
    goto LABEL_133;
  v5->reconnect_min_interval_ = 0;
  p_target_app_id = (std::mutex *)&v5->reconnect_max_interval_;
  v37 = *(_BYTE *)(((unsigned __int64)&v5->reconnect_max_interval_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 - 60) & 7) + 3) >= v37 && v37 )
  {
LABEL_134:
    v38 = __asan_report_store4(p_target_app_id);
    std::vector<std::string>::~vector((std::vector<std::string> *const)p_wait_send_queue);
    std::deque<std::string>::~deque((std::deque<std::string>_0 *const)&v5->wait_send_queue_);
    for ( i = (struct _Unwind_Exception *)v38;
          ;
          i = (struct _Unwind_Exception *)__asan_report_load8(&v5->_M_weak_this._M_refcount) )
    {
      boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl(&p_sock->impl_);
      if ( !*(_BYTE *)(((unsigned __int64)&v5->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
        break;
    }
    M_pi = v5->_M_weak_this._M_refcount._M_pi;
    if ( M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(M_pi);
    __asan_handle_no_return(M_pi);
    _Unwind_Resume(i);
  }
  v5->reconnect_max_interval_ = 0;
};

// Line 38: range 00000000153A7B04-00000000153A8567
void __fastcall common::minet::AClientConnect::~AClientConnect(common::minet::AClientConnect *const this)
{
  unsigned __int64 service; // rsi
  unsigned __int64 p_keep_alive_dt; // r14
  unsigned __int64 v4; // r13
  _DWORD *v5; // r12
  bool *p_might_have_pending_waits; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  boost::asio::detail::epoll_reactor *v10; // rdi
  unsigned __int64 v11; // rdi
  boost::asio::detail::timer_queue_base **v12; // rdi
  boost::asio::detail::timer_queue_base *v13; // rax
  int (**v14)(...); // rax
  unsigned __int64 p_send_str_vec; // r15
  std::vector<std::string> *v16; // rdi
  std::_Vector_base<std::string>::pointer M_start; // rdi
  void *p_M_finish; // rdi
  __int64 M_cur; // rsi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v21; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer M_node; // rdx
  __m128i v23; // rax
  char v24; // al
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  volatile signed __int32 *p_M_weak_count; // rax
  char v30; // cl
  signed __int32 M_weak_count; // eax
  char *v32; // rdi
  char v33; // dl
  char v34; // al
  char *v35; // rdi
  __int64 v36; // rax
  boost::asio::execution_context::service::key *p_key; // rdi
  __int64 v38; // rax
  boost::asio::execution_context::service::key *v39; // rax
  char v40; // cl
  unsigned __int64 v41; // rdx
  std::deque<std::string>::iterator v42; // [rsp-20h] [rbp-198h]
  unsigned __int64 p_implementation; // [rsp+0h] [rbp-178h]
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *reactor; // [rsp+8h] [rbp-170h]
  boost::asio::detail::reactive_socket_service_base *v45; // [rsp+18h] [rbp-160h]
  __m128i v46; // [rsp+20h] [rbp-158h] BYREF
  __m128i v47; // [rsp+30h] [rbp-148h]
  __int64 v48; // [rsp+40h] [rbp-138h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v49; // [rsp+48h] [rbp-130h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_last; // [rsp+50h] [rbp-128h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer v51; // [rsp+58h] [rbp-120h]
  char v52[280]; // [rsp+60h] [rbp-118h] BYREF

  v4 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(224LL);
    if ( v9 )
      v4 = v9;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 10 ignored_ec 64 16 16 descriptors_lock 96 32 6 __last 160 32 7 __first";
  *(_QWORD *)(v4 + 16) = common::minet::AClientConnect::~AClientConnect;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_15;
  }
  this->_vptr_AClientConnect = (int (**)(...))(&`vtable for'common::minet::AClientConnect + 2);
  common::minet::AClientConnect::final(this);
  p_keep_alive_dt = (unsigned __int64)&this->keep_alive_dt_;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_might_have_pending_waits = (bool *)p_keep_alive_dt;
    __asan_report_load8(p_keep_alive_dt);
    goto LABEL_16;
  }
  service = (unsigned __int64)this->keep_alive_dt_.impl_.service_;
  p_implementation = (unsigned __int64)&this->keep_alive_dt_.impl_.implementation_;
  p_might_have_pending_waits = &this->keep_alive_dt_.impl_.implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&this->keep_alive_dt_.impl_.implementation_.might_have_pending_waits >> 3)
               + 0x7FFF8000) < 0 )
  {
LABEL_16:
    __asan_report_load1(p_might_have_pending_waits);
    goto LABEL_17;
  }
  if ( !this->keep_alive_dt_.impl_.implementation_.might_have_pending_waits )
    goto LABEL_6;
LABEL_17:
  v7 = service + 104;
  if ( *(_BYTE *)(((service + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
    goto LABEL_21;
  }
  v10 = *(boost::asio::detail::epoll_reactor **)(service + 104);
  service += 40LL;
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    v10,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)service,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(p_implementation + 16),
    0xFFFFFFFFFFFFFFFFLL);
  v7 = p_implementation + 8;
  if ( *(char *)(((p_implementation + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_21:
    __asan_report_store1(v7);
    goto LABEL_22;
  }
  *(_BYTE *)(p_implementation + 8) = 0;
LABEL_6:
  v7 = p_keep_alive_dt + 64;
  if ( *(_BYTE *)(((p_keep_alive_dt + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v7);
    goto LABEL_23;
  }
  v7 = *(_QWORD *)(p_keep_alive_dt + 64);
  if ( v7 )
  {
    if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v8 = *(_QWORD *)v7 + 8LL;
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7, service);
        goto LABEL_11;
      }
LABEL_24:
      v11 = v8;
      __asan_report_load8(v8);
      goto LABEL_25;
    }
LABEL_23:
    __asan_report_load8(v7);
    goto LABEL_24;
  }
LABEL_11:
  p_keep_alive_dt += 24LL;
  while ( 1 )
  {
    v11 = p_keep_alive_dt;
    if ( *(_BYTE *)((p_keep_alive_dt >> 3) + 0x7FFF8000) )
    {
LABEL_25:
      __asan_report_load8(v11);
LABEL_26:
      __asan_report_load8(v11);
LABEL_27:
      *(_QWORD *)(p_keep_alive_dt + 8) = 0LL;
      goto LABEL_28;
    }
    service = *(_QWORD *)p_keep_alive_dt;
    if ( !*(_QWORD *)p_keep_alive_dt )
      goto LABEL_37;
    v11 = *(_QWORD *)p_keep_alive_dt;
    if ( *(_BYTE *)((service >> 3) + 0x7FFF8000) )
      goto LABEL_26;
    v14 = *(int (***)(...))service;
    *(_QWORD *)p_keep_alive_dt = *(_QWORD *)service;
    if ( !v14 )
      break;
LABEL_28:
    *(_QWORD *)service = 0LL;
    v12 = (boost::asio::detail::timer_queue_base **)(service + 8);
    if ( *(_BYTE *)(((service + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_36;
    v13 = *(boost::asio::detail::timer_queue_base **)(service + 8);
    *(_DWORD *)(v4 + 64) = 0;
    *(_BYTE *)(v4 + 68) = 0;
    *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    ((void (__fastcall *)(_QWORD, unsigned __int64, unsigned __int64, _QWORD))v13)(0LL, service, v4 + 64, 0LL);
  }
  v12 = (boost::asio::detail::timer_queue_base **)(p_keep_alive_dt + 8);
  if ( !*(_BYTE *)(((p_keep_alive_dt + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  __asan_report_store8();
LABEL_36:
  __asan_report_load8(v12);
LABEL_37:
  p_send_str_vec = (unsigned __int64)&this->send_str_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->send_str_vec_._M_impl._M_finish);
    goto LABEL_41;
  }
  p_implementation = (unsigned __int64)this->send_str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)((p_send_str_vec >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    v16 = &this->send_str_vec_;
    __asan_report_load8(&this->send_str_vec_);
    goto LABEL_42;
  }
  for ( p_keep_alive_dt = (unsigned __int64)this->send_str_vec_._M_impl._M_start;
        p_implementation != p_keep_alive_dt;
        p_keep_alive_dt += 32LL )
  {
    v16 = (std::vector<std::string> *)p_keep_alive_dt;
    if ( *(_BYTE *)((p_keep_alive_dt >> 3) + 0x7FFF8000) )
    {
LABEL_42:
      __asan_report_load8(v16);
LABEL_43:
      operator delete(v16);
      continue;
    }
    v16 = *(std::vector<std::string> **)p_keep_alive_dt;
    if ( *(_QWORD *)p_keep_alive_dt != p_keep_alive_dt + 16 )
      goto LABEL_43;
  }
  if ( *(_BYTE *)((p_send_str_vec >> 3) + 0x7FFF8000) )
  {
    p_M_finish = &this->send_str_vec_;
    __asan_report_load8(&this->send_str_vec_);
LABEL_75:
    __asan_report_load_n(p_M_finish, 32LL);
LABEL_76:
    M_cur = 32LL;
    __asan_report_load_n(p_M_finish, 32LL);
    goto LABEL_77;
  }
  M_start = this->send_str_vec_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  p_keep_alive_dt = (unsigned __int64)&this->wait_send_queue_;
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 49) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_75;
  }
  v46 = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish);
  v47 = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last);
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 81) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_76;
  }
  M_cur = (__int64)this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur;
  M_first = this->wait_send_queue_.queue_.c._M_impl._M_start._M_first;
  v48 = M_cur;
  v49 = M_first;
  M_node = this->wait_send_queue_.queue_.c._M_impl._M_start._M_node;
  M_last = this->wait_send_queue_.queue_.c._M_impl._M_start._M_last;
  v21 = M_last;
  v51 = M_node;
  *(_QWORD *)(v4 + 160) = M_cur;
  *(_QWORD *)(v4 + 168) = M_first;
  *(_QWORD *)(v4 + 176) = v21;
  *(_QWORD *)(v4 + 184) = M_node;
  *(__m128i *)(v4 + 96) = _mm_load_si128(&v46);
  v23 = v47;
  *(__m128i *)(v4 + 112) = v47;
  *(__m128i *)&v42._M_last = v23;
  *(_OWORD *)&v42._M_cur = *(_OWORD *)(v4 + 96);
  std::deque<std::string>::_M_destroy_data_aux(
    &this->wait_send_queue_.queue_.c,
    *(std::deque<std::string>::iterator *)(v4 + 160),
    v42);
  std::_Deque_base<std::string>::~_Deque_base(&this->wait_send_queue_.queue_.c);
  p_keep_alive_dt = (unsigned __int64)&this->sock_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sock_ >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8(p_keep_alive_dt);
LABEL_78:
    __asan_report_load4(p_send_str_vec);
    goto LABEL_79;
  }
  reactor = this->sock_.impl_.service_;
  p_implementation = (unsigned __int64)&reactor->boost::asio::detail::reactive_socket_service_base;
  p_send_str_vec = (unsigned __int64)&this->sock_.impl_.implementation_;
  v24 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_78;
  M_cur = (unsigned int)this->sock_.impl_.implementation_.socket_;
  if ( (_DWORD)M_cur == -1 )
    goto LABEL_60;
LABEL_79:
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
    v32 = (char *)p_implementation;
    __asan_report_load8(p_implementation);
LABEL_106:
    __asan_report_load1(v32);
LABEL_107:
    __asan_report_load4(p_send_str_vec);
    goto LABEL_108;
  }
  v32 = (char *)(p_send_str_vec + 4);
  v33 = *(_BYTE *)(((p_send_str_vec + 4) >> 3) + 0x7FFF8000);
  if ( v33 <= (char)((p_send_str_vec + 4) & 7) && v33 )
    goto LABEL_106;
  boost::asio::detail::epoll_reactor::deregister_descriptor(
    reactor->reactor_,
    M_cur,
    (boost::asio::detail::epoll_reactor::per_descriptor_data *)(p_send_str_vec + 8),
    ((*(_BYTE *)(p_send_str_vec + 4) >> 6) ^ 1) & 1);
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  M_cur = p_send_str_vec + 4;
  v34 = *(_BYTE *)((p_send_str_vec >> 3) + 0x7FFF8000);
  if ( v34 && v34 <= 3 )
    goto LABEL_107;
  boost::asio::detail::socket_ops::close(
    *(_DWORD *)(p_keep_alive_dt + 8),
    (boost::asio::detail::socket_ops::state_type *)M_cur,
    1,
    (boost::system::error_code *)(v4 + 32));
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    v35 = (char *)p_implementation;
    __asan_report_load8(p_implementation);
    goto LABEL_109;
  }
  reactor = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *)reactor->reactor_;
  v35 = (char *)(p_send_str_vec + 8);
  if ( *(_BYTE *)(((p_send_str_vec + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(v35);
    goto LABEL_110;
  }
  p_implementation = *(_QWORD *)(p_send_str_vec + 8);
  if ( !p_implementation )
    goto LABEL_60;
  M_cur = (__int64)&reactor[2].boost::asio::detail::reactive_socket_service_base;
  v45 = &reactor[2].boost::asio::detail::reactive_socket_service_base;
  v35 = (char *)&reactor[3].boost::asio::detail::reactive_socket_service_base;
  if ( *(char *)(((unsigned __int64)&reactor[3].boost::asio::detail::reactive_socket_service_base >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_110:
    v36 = __asan_report_load1(v35);
    goto LABEL_111;
  }
  v36 = (__int64)reactor;
  if ( !LOBYTE(reactor[3].reactor_) )
  {
    *(_BYTE *)(v4 + 72) = 0;
    goto LABEL_90;
  }
LABEL_111:
  pthread_mutex_lock((pthread_mutex_t *)(v36 + 144));
  *(_BYTE *)(v4 + 72) = 1;
LABEL_90:
  if ( *(_BYTE *)(((unsigned __int64)&reactor[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&reactor[4]);
  }
  else
  {
    M_cur = p_implementation;
    if ( (int (**)(...))p_implementation != reactor[4]._vptr_service )
      goto LABEL_92;
  }
  p_key = (boost::asio::execution_context::service::key *)(M_cur + 24);
  if ( *(_BYTE *)(((unsigned __int64)(M_cur + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_key);
LABEL_116:
    __asan_report_load8(p_key);
LABEL_117:
    __asan_report_load8(p_key);
    goto LABEL_118;
  }
  reactor[4]._vptr_service = *(int (***)(...))(p_implementation + 24);
LABEL_92:
  p_key = (boost::asio::execution_context::service::key *)(p_implementation + 32);
  if ( *(_BYTE *)(((p_implementation + 32) >> 3) + 0x7FFF8000) )
    goto LABEL_116;
  v38 = *(_QWORD *)(p_implementation + 32);
  if ( !v38 )
    goto LABEL_97;
  p_key = (boost::asio::execution_context::service::key *)(p_implementation + 24);
  if ( *(_BYTE *)(((p_implementation + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_117;
  p_key = (boost::asio::execution_context::service::key *)(v38 + 24);
  if ( *(_BYTE *)(((unsigned __int64)(v38 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_store8();
LABEL_119:
    __asan_report_load8(p_key);
LABEL_120:
    __asan_report_store8();
    goto LABEL_121;
  }
  *(_QWORD *)(v38 + 24) = *(_QWORD *)(p_implementation + 24);
LABEL_97:
  p_key = (boost::asio::execution_context::service::key *)(p_implementation + 24);
  if ( *(_BYTE *)(((p_implementation + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_119;
  v39 = *(boost::asio::execution_context::service::key **)(p_implementation + 24);
  if ( !v39 )
    goto LABEL_101;
  p_key = v39 + 2;
  if ( *(_BYTE *)(((unsigned __int64)&v39[2] >> 3) + 0x7FFF8000) )
    goto LABEL_120;
  v39[2].type_info_ = *(const std::type_info **)(p_implementation + 32);
LABEL_101:
  p_key = &reactor[4].key_;
  if ( !*(_BYTE *)(((unsigned __int64)&reactor[4].key_ >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(p_implementation + 24) = reactor[4].key_.type_info_;
    *(_QWORD *)(p_implementation + 32) = 0LL;
    reactor[4].key_.type_info_ = (const std::type_info *)p_implementation;
    if ( !*(_BYTE *)(v4 + 72) )
      goto LABEL_103;
    goto LABEL_122;
  }
LABEL_121:
  __asan_report_load8(p_key);
LABEL_122:
  pthread_mutex_unlock((pthread_mutex_t *)&v45[1]);
LABEL_103:
  v25 = p_send_str_vec + 8;
  if ( *(_BYTE *)(((p_send_str_vec + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_124:
    __asan_report_load8(v25);
LABEL_125:
    __asan_report_load8(v25);
    goto LABEL_126;
  }
  *(_QWORD *)(p_send_str_vec + 8) = 0LL;
LABEL_60:
  v25 = p_keep_alive_dt + 32;
  if ( *(_BYTE *)(((p_keep_alive_dt + 32) >> 3) + 0x7FFF8000) )
    goto LABEL_124;
  v25 = *(_QWORD *)(p_keep_alive_dt + 32);
  if ( !v25 )
    goto LABEL_65;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_125;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)v26;
    __asan_report_load8(v26);
LABEL_127:
    p_M_weak_count = (volatile signed __int32 *)__asan_report_load8(p_M_refcount);
    goto LABEL_128;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_65:
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_127;
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_72;
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v30 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v30 || !v30 )
    {
      M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
      goto LABEL_71;
    }
LABEL_128:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_M_weak_count;
    __asan_report_store4(p_M_weak_count);
  }
  v40 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v40 && v40 )
  {
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)M_pi + 12);
    __asan_report_load4(M_pi);
LABEL_133:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
    }
    else
    {
      v41 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
      if ( !*(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))M_pi->_vptr__Sp_counted_base + 3))();
        goto LABEL_72;
      }
    }
    __asan_report_load8(v41);
    goto LABEL_138;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_71:
  if ( M_weak_count == 1 )
    goto LABEL_133;
LABEL_72:
  if ( v52 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    return;
  }
LABEL_138:
  *(_QWORD *)v4 = 1172321806LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
};

// Line 38: range 00000000153A856C-00000000153A8583
void __fastcall common::minet::AClientConnect::~AClientConnect(common::minet::AClientConnect *const this)
{
  common::minet::AClientConnect::~AClientConnect(this);
  operator delete(this, 0x1C8uLL);
};

// Line 103: range 00000000153A6C38-00000000153A6E5D
int32_t __fastcall common::minet::AClientConnect::final(common::minet::AClientConnect *const this)
{
  unsigned __int64 p_recv_buf; // rdi
  char *recv_buf; // rdi
  char v4; // al
  char v5; // dl

  p_recv_buf = (unsigned __int64)&this->recv_buf_;
  if ( *(_BYTE *)((p_recv_buf >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_recv_buf);
    goto LABEL_11;
  }
  recv_buf = this->recv_buf_;
  if ( recv_buf )
  {
    operator delete[](recv_buf);
    p_recv_buf = (unsigned __int64)&this->recv_buf_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
    {
      this->recv_buf_ = 0LL;
      p_recv_buf = (unsigned __int64)&this->recv_buf_len_;
      v4 = *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000);
      if ( !v4 || v4 > 3 )
      {
        this->recv_buf_len_ = 0;
        goto LABEL_7;
      }
LABEL_12:
      __asan_report_store4(p_recv_buf);
      goto LABEL_13;
    }
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
LABEL_7:
  p_recv_buf = (unsigned __int64)&this->status_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v5 && v5 )
  {
LABEL_13:
    __asan_report_store4(p_recv_buf);
    JUMPOUT(0x153A6CE3LL);
  }
  this->status_._M_i = STATUS_UN_INIT;
  _mm_mfence();
  return 0;
};

// Line 134: range 00000000153A92D0-00000000153A93F5
int32_t __fastcall common::minet::AClientConnect::blockStart(
        common::minet::AClientConnect *const this,
        uint32_t wait_time_ms)
{
  unsigned int i; // ebx
  unsigned int v3; // r12d
  int32_t v4; // r13d
  common::minet::AClientConnect *v5; // rbp
  int (**vptr_AClientConnect)(...); // rax
  char v7; // dl
  common::milog::MiLogStream v9[2]; // [rsp+0h] [rbp-48h] BYREF

  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  v3 = wait_time_ms;
  vptr_AClientConnect = this->_vptr_AClientConnect;
  this = (common::minet::AClientConnect *const)(this->_vptr_AClientConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(this);
    goto LABEL_7;
  }
  v4 = vptr_AClientConnect[2](v5);
  if ( !v4 )
  {
    for ( i = 0; i < v3; i += 3 )
    {
      v7 = *(_BYTE *)(((unsigned __int64)&v5->status_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v5 + 24) & 7) + 3) >= v7 && v7 )
      {
        __asan_report_load4(&v5->status_);
        break;
      }
LABEL_7:
      if ( v5->status_._M_i == STATUS_CONNECT )
        return v4;
      usleep(0xBB8u);
    }
    common::milog::MiLogStream::MiLogStream(
      v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "blockStart",
      153);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v9[0].ostr_, "client wait ");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v9[0].ostr_, v3);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v9[0].ostr_, "ms");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v9[0].ostr_, " still not connected");
    common::milog::MiLogStream::~MiLogStream(v9);
    return 1;
  }
  return v4;
};

// Line 455: range 00000000153B11D0-00000000153B820D
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::AClientConnect::keepAliveHandler(
        common::minet::AClientConnect *const this,
        boost::system::error_code *ec,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  _DWORD *v7; // r12
  bool *p_is_cut_packet; // rdi
  char v9; // al
  __int64 v10; // rax
  std::atomic<common::minet::AClientConnect::Status> *p_status; // r14
  char v12; // dl
  void *p_keep_alive_sec; // rdi
  char v14; // dl
  char v15; // dl
  void *p_M_refcount; // rdi
  char v17; // dl
  uint16_t keep_alive_sec; // r14
  char v19; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // rdi
  common::minet::AClientConnect *v22; // rdi
  int v23; // eax
  void *p_timeout_sec; // rdi
  char v25; // dl
  uint16_t timeout_sec; // r14
  char v27; // al
  time_t v28; // r14
  char v29; // dl
  __int64 v30; // r14
  time_t v31; // r9
  char v32; // al
  char v33; // al
  std::shared_ptr<common::minet::AClientConnect> v34; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rdi
  _BYTE v37[49]; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v38; // [rsp+50h] [rbp-110h] BYREF
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AClientConnect,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AClientConnect> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> > handler; // [rsp+80h] [rbp-E0h] BYREF
  char v40[144]; // [rsp+D0h] [rbp-90h] BYREF

  *(_QWORD *)&v37[16] = ec;
  *(_QWORD *)&v37[24] = v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      *(_QWORD *)&v37[24] = v10;
  }
  v5 = *(_QWORD *)&v37[24];
  v6 = *(_QWORD *)&v37[24] + 96LL;
  **(_QWORD **)&v37[24] = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 12 self_ptr:485 64 16 2 ec";
  *(_QWORD *)(v5 + 16) = common::minet::AClientConnect::keepAliveHandler;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  p_is_cut_packet = &this->is_cut_packet_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_is_cut_packet);
LABEL_12:
    __asan_report_load4(a3);
    goto LABEL_13;
  }
  if ( (*(_QWORD *)&this->is_cut_packet_ & 0xFFFFFFFF0000LL) == 0 )
    goto LABEL_7;
  v9 = *(_BYTE *)((a3 >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_12;
  if ( *(_DWORD *)a3 )
    goto LABEL_7;
LABEL_13:
  p_status = &this->status_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v12 && v12 )
  {
    p_keep_alive_sec = &this->status_;
    __asan_report_load4(&this->status_);
LABEL_34:
    __asan_report_load2(p_keep_alive_sec);
    goto LABEL_35;
  }
  if ( this->status_._M_i != STATUS_CONNECT )
    goto LABEL_19;
  p_keep_alive_sec = &this->keep_alive_sec_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 42) & 7) + 1) >= v14 && v14 )
    goto LABEL_34;
  if ( !this->keep_alive_sec_ )
    goto LABEL_19;
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v22 = this;
    __asan_report_load8(this);
  }
  else
  {
    v22 = (common::minet::AClientConnect *)(this->_vptr_AClientConnect + 7);
    if ( !*(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)&v37[8] = *((_QWORD *)this->_vptr_AClientConnect + 7);
      *(_QWORD *)v37 = &v38;
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v38,
        *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&v37[16]);
      ec = (boost::system::error_code *)&v38;
      v23 = (*(__int64 (__fastcall **)(common::minet::AClientConnect *const, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))&v37[8])(
              this,
              &v38);
      goto LABEL_40;
    }
  }
  v23 = __asan_report_load8(v22);
LABEL_40:
  *(_DWORD *)&v37[8] = v23;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v38);
  if ( *(_DWORD *)&v37[8] )
  {
    *(_QWORD *)&v37[8] = &v37[48];
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v37[48],
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "keepAliveHandler",
      466);
    ec = (boost::system::error_code *)"call onKeepAlive failed.";
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&v37[48], "call onKeepAlive failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37[48]);
  }
LABEL_19:
  v15 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_status & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(&this->status_);
    goto LABEL_43;
  }
  if ( this->status_._M_i == STATUS_CONNECT )
  {
LABEL_43:
    p_timeout_sec = &this->timeout_sec_;
    v25 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 44) & 7) + 1) >= v25 && v25 )
    {
      __asan_report_load2(p_timeout_sec);
    }
    else
    {
      timeout_sec = this->timeout_sec_;
      if ( !timeout_sec )
        goto LABEL_22;
      p_timeout_sec = &this->last_alive_time_;
      v27 = *(_BYTE *)(((unsigned __int64)&this->last_alive_time_ >> 3) + 0x7FFF8000);
      if ( !v27 || v27 > 3 )
      {
        v28 = this->last_alive_time_ + timeout_sec;
        if ( v28 >= time(0LL) )
          goto LABEL_22;
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::close(&this->sock_);
        ec = (boost::system::error_code *)&common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)&v37[48],
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/aclient_connect.cpp",
          "keepAliveHandler",
          476);
        p_timeout_sec = &this->timeout_sec_;
        v29 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 44) & 7) + 1) < v29 || !v29 )
        {
          v30 = this->timeout_sec_;
          v31 = time(0LL);
          p_timeout_sec = &this->last_alive_time_;
          v32 = *(_BYTE *)(((unsigned __int64)&this->last_alive_time_ >> 3) + 0x7FFF8000);
          if ( !v32 || v32 > 3 )
          {
            p_timeout_sec = &this->server_port_;
            v33 = *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000);
            if ( !v33 || v33 > 1 )
            {
              ec = (boost::system::error_code *)"[NETWORK][ECS]connect to %s:%u timeout with last_alive_time=%u, cur_time"
                                                "=%lu, timeout_sec=%u.";
              common::milog::MiLogStream::operator()(
                (common::milog::MiLogStream *const)&v37[48],
                "[NETWORK][ECS]connect to %s:%u timeout with last_alive_time=%u, cur_time=%lu, timeout_sec=%u.",
                this->server_ip_,
                this->server_port_,
                this->last_alive_time_,
                v31,
                v30);
LABEL_61:
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37[48]);
              goto LABEL_22;
            }
LABEL_60:
            __asan_report_load2(p_timeout_sec);
            goto LABEL_61;
          }
LABEL_59:
          __asan_report_load4(p_timeout_sec);
          goto LABEL_60;
        }
LABEL_58:
        __asan_report_load2(p_timeout_sec);
        goto LABEL_59;
      }
    }
    __asan_report_load4(p_timeout_sec);
    goto LABEL_58;
  }
LABEL_22:
  p_M_refcount = &this->keep_alive_sec_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 42) & 7) + 1) >= v17 && v17 )
  {
    __asan_report_load2(p_M_refcount);
    goto LABEL_63;
  }
  keep_alive_sec = this->keep_alive_sec_;
  if ( keep_alive_sec )
    goto LABEL_28;
  p_M_refcount = &this->timeout_sec_;
  v19 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 44) & 7) + 1) >= v19 && v19 )
  {
LABEL_63:
    __asan_report_load2(p_M_refcount);
    goto LABEL_64;
  }
  keep_alive_sec = this->timeout_sec_;
LABEL_28:
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_M_refcount);
LABEL_65:
    __asan_report_load8(p_M_refcount);
    goto LABEL_66;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v6 - 56) = M_pi;
  if ( !M_pi )
    goto LABEL_67;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(M_pi);
  p_M_refcount = &this->std::enable_shared_from_this<common::minet::AClientConnect>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AClientConnect> >> 3)
                + 0x7FFF8000) )
    goto LABEL_65;
  *(_QWORD *)(v6 - 64) = this->_M_weak_this._M_ptr;
  ec = (boost::system::error_code *)&this->keep_alive_dt_;
  *(_QWORD *)&v37[40] = 1000000LL * keep_alive_sec;
  *(_DWORD *)(v6 - 32) = 0;
  *(_BYTE *)(v6 - 28) = 0;
  *(_QWORD *)(v6 - 24) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ec;
    __asan_report_load8(ec);
LABEL_67:
    __asan_handle_no_return(M_pi);
    std::__throw_bad_weak_ptr();
  }
  service = this->keep_alive_dt_.impl_.service_;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_from_now(
    service,
    &this->keep_alive_dt_.impl_.implementation_,
    (const boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::duration_type *)&v37[40],
    (boost::system::error_code *)(v6 - 32));
  if ( *(_DWORD *)(v6 - 32) )
  {
    __asan_handle_no_return(service);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v6 - 32), "expires_from_now");
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v38,
    *(const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > **)&v37[16]);
  *(_QWORD *)&v37[16] = v6 - 32;
  std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2> *const)(v6 - 32),
    (const std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2> *)(v6 - 64));
  v34._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v6 - 32);
  v34._M_ptr = 0LL;
  boost::bind<void,common::minet::AClientConnect,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&,std::shared_ptr<common::minet::AClientConnect>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::arg<1> (*)(void)>(
    &handler,
    (void (*)(common::minet::AClientConnect *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >, const boost::system::error_code *))common::minet::AClientConnect::keepAliveHandler,
    v34,
    *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)v37,
    (boost::arg<1> (*)(void))&v38);
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_dt_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->keep_alive_dt_);
  else
    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AClientConnect,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AClientConnect>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
      this->keep_alive_dt_.impl_.service_,
      &this->keep_alive_dt_.impl_.implementation_,
      &handler,
      &this->keep_alive_dt_.impl_.implementation_executor_);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler.l_.a2_.t_);
  if ( handler.l_.a1_.t_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(handler.l_.a1_.t_._M_refcount._M_pi);
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 - 24);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v38);
  v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 - 56);
  if ( v36 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v36);
LABEL_7:
  if ( v40 == *(char **)&v37[24] )
  {
    *((_QWORD *)v7 + 268431360) = 0LL;
    v7[536862722] = 0;
  }
  else
  {
    **(_QWORD **)&v37[24] = 1172321806LL;
    *((_QWORD *)v7 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v7[536862722] = -168430091;
  }
};

// Line 494: range 00000000153A86C8-00000000153A895D
__int64 __fastcall common::minet::AClientConnect::onConnect(
        common::minet::AClientConnect *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *a2)
{
  common::tools::SafeQueue<std::string > *p_wait_send_queue; // rbx
  std::mutex *p_queue_mu; // r13
  std::mutex *v5; // rdi
  int v6; // r14d
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // rax
  char v9; // al
  char v10; // al
  common::minet::AClientConnect *v11; // rdi
  void (__fastcall *v12)(common::minet::AClientConnect *const, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r13
  struct _Unwind_Exception *v13; // rbx
  common::milog::MiLogStream v15; // [rsp+0h] [rbp-78h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v16; // [rsp+20h] [rbp-58h] BYREF

  p_wait_send_queue = &this->wait_send_queue_;
  p_queue_mu = &this->wait_send_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v5 = &this->wait_send_queue_.queue_mu_;
    v6 = pthread_mutex_lock(&v5->_M_mutex);
    if ( v6 )
    {
      __asan_handle_no_return(v5);
      std::__throw_system_error(v6);
    }
  }
  while ( 1 )
  {
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_5:
      __asan_report_load8(p_M_finish);
LABEL_6:
      __asan_report_load8(p_M_finish);
LABEL_7:
      __asan_report_load8(p_M_finish);
      goto LABEL_8;
    }
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_5;
    if ( p_wait_send_queue->queue_.c._M_impl._M_finish._M_cur == p_wait_send_queue->queue_.c._M_impl._M_start._M_cur )
      break;
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    M_cur = p_wait_send_queue->queue_.c._M_impl._M_start._M_cur;
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_start._M_last;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    if ( M_cur == p_wait_send_queue->queue_.c._M_impl._M_start._M_last - 1 )
      goto LABEL_22;
    p_M_finish = p_wait_send_queue->queue_.c._M_impl._M_start._M_cur;
    if ( !*(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
    {
      p_M_finish = M_cur->_M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_cur->_M_dataplus._M_p == &M_cur->_anon_0 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_8:
    __asan_report_load8(p_M_finish);
LABEL_9:
    operator delete(p_M_finish);
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_wait_send_queue->queue_.c._M_impl._M_start);
LABEL_22:
      std::deque<std::string>::_M_pop_front_aux(&p_wait_send_queue->queue_.c);
    }
    else
    {
      ++p_wait_send_queue->queue_.c._M_impl._M_start._M_cur;
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
  if ( v9 <= ((unsigned __int8)this & 7) && v9 )
  {
    __asan_report_load1(&this->is_sending_);
    goto LABEL_30;
  }
  if ( this->is_sending_._M_base._M_i )
  {
    common::milog::MiLogStream::MiLogStream(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aclient_connect.cpp",
      "onConnect",
      499);
    common::milog::MiLogStream::operator()(&v15, "is_sending_ is still true!!!, and force to false");
LABEL_30:
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
    if ( v10 > ((unsigned __int8)this & 7) || !v10 )
    {
      this->is_sending_._M_base._M_i = 0;
      _mm_mfence();
      goto LABEL_33;
    }
    __asan_report_store1(&this->is_sending_);
LABEL_37:
    v11 = this;
    __asan_report_load8(this);
    goto LABEL_38;
  }
LABEL_33:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  v11 = (common::minet::AClientConnect *)(this->_vptr_AClientConnect + 7);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v13 = (struct _Unwind_Exception *)__asan_report_load8(v11);
    common::milog::MiLogStream::~MiLogStream(&v15);
    __asan_handle_no_return(&v15);
    _Unwind_Resume(v13);
  }
  v12 = (void (__fastcall *)(common::minet::AClientConnect *const, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))*((_QWORD *)this->_vptr_AClientConnect + 7);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v16,
    a2);
  v12(this, &v16);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v16);
  return 0LL;
};

// Line 510: range 00000000153A8584-00000000153A86C6
__int64 __fastcall common::minet::AClientConnect::onDisconnect(common::minet::AClientConnect *const this)
{
  common::tools::SafeQueue<std::string > *p_wait_send_queue; // rbx
  std::mutex *p_queue_mu; // rbp
  std::mutex *v3; // rdi
  int v4; // r12d
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // rax

  p_wait_send_queue = &this->wait_send_queue_;
  p_queue_mu = &this->wait_send_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v3 = &this->wait_send_queue_.queue_mu_;
    v4 = pthread_mutex_lock(&v3->_M_mutex);
    if ( v4 )
    {
      __asan_handle_no_return(v3);
      std::__throw_system_error(v4);
    }
  }
  while ( 1 )
  {
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_5:
      __asan_report_load8(p_M_finish);
LABEL_6:
      __asan_report_load8(p_M_finish);
LABEL_7:
      __asan_report_load8(p_M_finish);
      goto LABEL_8;
    }
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_5;
    if ( p_wait_send_queue->queue_.c._M_impl._M_finish._M_cur == p_wait_send_queue->queue_.c._M_impl._M_start._M_cur )
      break;
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    M_cur = p_wait_send_queue->queue_.c._M_impl._M_start._M_cur;
    p_M_finish = &p_wait_send_queue->queue_.c._M_impl._M_start._M_last;
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    if ( M_cur == p_wait_send_queue->queue_.c._M_impl._M_start._M_last - 1 )
      goto LABEL_22;
    p_M_finish = p_wait_send_queue->queue_.c._M_impl._M_start._M_cur;
    if ( !*(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
    {
      p_M_finish = M_cur->_M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_cur->_M_dataplus._M_p == &M_cur->_anon_0 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_8:
    __asan_report_load8(p_M_finish);
LABEL_9:
    operator delete(p_M_finish);
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)&p_wait_send_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_wait_send_queue->queue_.c._M_impl._M_start);
LABEL_22:
      std::deque<std::string>::_M_pop_front_aux(&p_wait_send_queue->queue_.c);
    }
    else
    {
      ++p_wait_send_queue->queue_.c._M_impl._M_start._M_cur;
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  return 0LL;
};

// Line 518: range 00000000153A6E5E-00000000153A7123
__int64 __fastcall common::minet::AClientConnect::onKeepAlive(common::minet::AClientConnect *const this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  uint32_t *p_self_app_id; // rdi
  char v6; // cl
  char v7; // cl
  volatile signed __int32 *p_M_use_count; // rdi
  void (__fastcall *v9)(common::minet::AClientConnect *const, __int64 *); // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rax
  char v11; // cl
  __int64 v12; // rax
  unsigned int v13; // ebp
  char v14; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // [rsp+8h] [rbp-90h]
  common::milog::MiLogStream v19; // [rsp+10h] [rbp-88h] BYREF
  char v20[104]; // [rsp+30h] [rbp-68h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v2 = v12;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:519";
  *(_QWORD *)(v2 + 16) = common::minet::AClientConnect::onKeepAlive;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  v4 = *(_QWORD *)(v2 + 32);
  if ( !v4 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "onKeepAlive",
      522);
    common::milog::MiLogStream::operator()(&v19, "createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v13 = -1;
    goto LABEL_30;
  }
  p_self_app_id = &this->self_app_id_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->self_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 116) & 7) + 3) >= v6 && v6 )
  {
    __asan_report_load4(p_self_app_id);
LABEL_19:
    __asan_report_store4(p_self_app_id);
    goto LABEL_20;
  }
  p_self_app_id = (uint32_t *)(v4 + 244);
  v7 = *(_BYTE *)(((unsigned __int64)(v4 + 244) >> 3) + 0x7FFF8000);
  if ( (char)(((v4 - 12) & 7) + 3) >= v7 && v7 )
    goto LABEL_19;
  *(_DWORD *)(v4 + 244) = this->self_app_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_M_use_count = (volatile signed __int32 *)this;
    __asan_report_load8(this);
    goto LABEL_21;
  }
  p_M_use_count = (volatile signed __int32 *)(this->_vptr_AClientConnect + 12);
  if ( *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_M_use_count);
LABEL_22:
    v10 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_23;
  }
  v9 = (void (__fastcall *)(common::minet::AClientConnect *const, __int64 *))*((_QWORD *)this->_vptr_AClientConnect + 12);
  v17 = *(_QWORD *)(v2 + 32);
  v10 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 40);
  v18 = v10;
  if ( !v10 )
    goto LABEL_14;
  p_M_use_count = &v10->_M_use_count;
  if ( &_pthread_key_create )
  {
    v11 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v11 || !v11 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_14;
    }
    goto LABEL_22;
  }
LABEL_23:
  v14 = *(_BYTE *)(((unsigned __int64)&v10->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v10 + 8) & 7) + 3) >= v14 && v14 )
  {
    __asan_report_load4(&v10->_M_use_count);
    goto LABEL_27;
  }
  ++v10->_M_use_count;
LABEL_14:
  v9(this, &v17);
LABEL_27:
  if ( v18 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v18);
  v13 = 0;
LABEL_30:
  v15 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 40);
  if ( v15 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v15);
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 534: range 00000000153A6098-00000000153A609D
bool __fastcall common::minet::AClientConnect::isOverLoad(common::minet::AClientConnect *const this)
{
  return 0;
};

// Line 541: range 00000000153A609E-00000000153A60B0
bool __fastcall common::minet::AClientConnect::isPacketBegin(
        common::minet::AClientConnect *const this,
        char *data,
        uint32_t len)
{
  return common::minet::Packet::isPacketBegin(data, len);
};

// Line 547: range 00000000153A60B2-00000000153A60C4
uint32_t __fastcall common::minet::AClientConnect::getPacketLen(
        common::minet::AClientConnect *const this,
        char *data,
        uint32_t len)
{
  return common::minet::Packet::getPacketLen(data, len);
};

// Line 553: range 00000000153A60C6-00000000153A60D3
uint32_t __fastcall common::minet::AClientConnect::minPacketLen(common::minet::AClientConnect *const this)
{
  return common::minet::Packet::getMinPacketLen();
};

// Line 563: range 00000000153AA174-00000000153AB6A7
int32_t __fastcall common::minet::AClientConnect::send(
        common::minet::AClientConnect *const this,
        const char *buf,
        uint32_t len)
{
  unsigned __int64 v3; // r14
  _DWORD *v4; // r13
  bool *p_is_async_send; // rdi
  char v6; // al
  std::atomic<common::minet::AClientConnect::Status> *p_status; // rbx
  char v8; // dl
  void *p_max_send_packet_len; // rdi
  char v10; // dl
  int v11; // ebx
  uint32_t v12; // r15d
  __int64 v13; // rdx
  bool v14; // si
  void *p_state; // rdi
  char v16; // dl
  char v17; // al
  unsigned __int64 server_ip; // rbx
  const boost::system::detail::system_error_category *v19; // rdx
  ssize_t v20; // rax
  __int64 v21; // rax
  char v22; // dl
  char v23; // dl
  char v24; // cl
  int v25; // eax
  char v26; // dl
  int v27; // eax
  char v28; // cl
  bool v29; // zf
  bool v30; // sf
  char v31; // of
  char v32; // dl
  __int64 id; // rax
  char v34; // al
  char v36; // al
  char v37; // al
  char v38; // al
  __int64 v39; // [rsp+0h] [rbp-1A0h]
  __int64 v40; // [rsp+8h] [rbp-198h]
  __int64 v41; // [rsp+10h] [rbp-190h]
  __int64 v42; // [rsp+18h] [rbp-188h]
  __int64 v43; // [rsp+20h] [rbp-180h]
  __int64 v44; // [rsp+28h] [rbp-178h]
  __int64 v45; // [rsp+30h] [rbp-170h]
  __int64 v46; // [rsp+40h] [rbp-160h]
  uint32_t retry_times; // [rsp+50h] [rbp-150h]
  boost::asio::detail::socket_ops::state_type state; // [rsp+57h] [rbp-149h]
  boost::asio::detail::socket_type w_len; // [rsp+60h] [rbp-140h]
  unsigned int w_lena; // [rsp+60h] [rbp-140h]
  common::milog::MiLogStream v54; // [rsp+70h] [rbp-130h] BYREF
  char v55[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_2(224LL);
    if ( v21 )
      v3 = v21;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 3 fds 64 24 4 bufs 128 56 3 msg";
  *(_QWORD *)(v3 + 16) = common::minet::AClientConnect::send;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  p_is_async_send = &this->is_async_send_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)this + 41) & 7) && v6 )
  {
    __asan_report_load1(p_is_async_send);
    goto LABEL_27;
  }
  if ( this->is_async_send_ )
  {
LABEL_27:
    common::milog::MiLogStream::MiLogStream(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aclient_connect.cpp",
      "send",
      566);
    common::milog::MiLogStream::operator()(&v54, "is_async_send_ is true, Cannot use sync send!!!");
    common::milog::MiLogStream::~MiLogStream(&v54);
    v12 = -1;
    goto LABEL_98;
  }
  p_status = &this->status_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(&this->status_);
LABEL_29:
    common::milog::MiLogStream::MiLogStream(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "send",
      571);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v54.ostr_, "status=");
    v22 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_status & 7) + 3) < v22 || !v22 )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v54.ostr_, this->status_._M_i);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v54.ostr_, ", can not send data now.");
      common::milog::MiLogStream::~MiLogStream(&v54);
      v12 = -1;
      goto LABEL_98;
    }
    p_max_send_packet_len = &this->status_;
    __asan_report_load4(p_status);
LABEL_33:
    __asan_report_load4(p_max_send_packet_len);
LABEL_34:
    common::milog::MiLogStream::MiLogStream(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aclient_connect.cpp",
      "send",
      580);
    v23 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v23 && v23 )
      __asan_report_load4(&this->max_send_packet_len_);
    else
      common::milog::MiLogStream::operator()(
        &v54,
        "send len=%u, too long for max_send_packet_len_=%u",
        len,
        this->max_send_packet_len_);
    common::milog::MiLogStream::~MiLogStream(&v54);
    v12 = -1;
    goto LABEL_98;
  }
  if ( this->status_._M_i != STATUS_CONNECT )
    goto LABEL_29;
  if ( len == 0 || buf == 0LL )
  {
    v12 = 0;
    goto LABEL_98;
  }
  p_max_send_packet_len = &this->max_send_packet_len_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v10 && v10 )
    goto LABEL_33;
  if ( this->max_send_packet_len_ < len )
    goto LABEL_34;
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
        goto LABEL_96;
      v13 = len - v12;
      *(_QWORD *)(v3 + 64) = &buf[v12];
      *(_QWORD *)(v3 + 72) = v13;
      *(_QWORD *)(v3 + 80) = v13;
      v14 = v13 == 0;
      p_state = &this->sock_.impl_.implementation_.state_;
      v16 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_.state_ >> 3) + 0x7FFF8000);
      if ( v16 <= (((unsigned __int8)this + 52) & 7) && v16 )
      {
        __asan_report_load1(p_state);
LABEL_41:
        __asan_report_load4(p_state);
LABEL_42:
        server_ip = v43 & 0xFFFFFF0000000000LL | 0x100000009LL;
        v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
        LODWORD(v20) = 0;
        goto LABEL_53;
      }
      state = this->sock_.impl_.implementation_.state_;
      p_state = &this->sock_.impl_.implementation_;
      v17 = *(_BYTE *)(((unsigned __int64)&this->sock_.impl_.implementation_ >> 3) + 0x7FFF8000);
      if ( v17 && v17 <= 3 )
        goto LABEL_41;
      w_len = this->sock_.impl_.implementation_.socket_;
      if ( w_len == -1 )
        goto LABEL_42;
      if ( !v14 || (state & 0x10) == 0 )
      {
        while ( 1 )
        {
          server_ip = (unsigned __int64)__errno_location();
          v32 = *(_BYTE *)((server_ip >> 3) + 0x7FFF8000);
          if ( (char)((server_ip & 7) + 3) >= v32 && v32 )
          {
            v20 = __asan_report_store4(server_ip);
          }
          else
          {
            *(_DWORD *)server_ip = 0;
            *(_QWORD *)(v3 + 128) = 0LL;
            *(_QWORD *)(v3 + 136) = 0LL;
            *(_QWORD *)(v3 + 160) = 0LL;
            *(_QWORD *)(v3 + 168) = 0LL;
            *(_QWORD *)(v3 + 176) = 0LL;
            *(_QWORD *)(v3 + 144) = v3 + 64;
            *(_QWORD *)(v3 + 152) = 1LL;
            v20 = sendmsg(w_len, (const struct msghdr *)(v3 + 128), 0x4000);
          }
          v24 = *(_BYTE *)((server_ip >> 3) + 0x7FFF8000);
          if ( (char)((server_ip & 7) + 3) >= v24 && v24 )
          {
            v25 = __asan_report_load4(server_ip);
          }
          else
          {
            server_ip = ((unsigned __int64)(*(_DWORD *)server_ip != 0) << 32) | *(unsigned int *)server_ip | v46 & 0xFFFFFF0000000000LL;
            v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
            if ( v20 >= 0 )
              server_ip = v45 & 0xFFFFFF0000000000LL;
            if ( v20 >= 0 )
              goto LABEL_53;
            if ( (state & 1) != 0 )
            {
              LODWORD(v20) = 0;
              goto LABEL_53;
            }
            v25 = server_ip;
            if ( (_DWORD)server_ip != 11 )
              goto LABEL_51;
          }
          if ( !*(_BYTE *)(((unsigned __int64)&v19->id_ >> 3) + 0x7FFF8000) )
          {
            if ( v19->id_ == 0x8FAFD21E25C5E09BLL )
              goto LABEL_60;
LABEL_51:
            if ( v25 != 11 )
            {
              LODWORD(v20) = 0;
              goto LABEL_53;
            }
            goto LABEL_64;
          }
          __asan_report_load8(&v19->id_);
LABEL_64:
          if ( *(_BYTE *)(((unsigned __int64)&v19->id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(&v19->id_);
            server_ip = v39 & 0xFFFFFF0000000000LL | 0x100000009LL;
            v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
            v27 = w_len;
            goto LABEL_73;
          }
          if ( v19->id_ != 0x8FAFD21E25C5E09BLL )
          {
            LODWORD(v20) = 0;
            goto LABEL_53;
          }
LABEL_60:
          *(_DWORD *)(v3 + 32) = w_len;
          *(_WORD *)(v3 + 36) = 4;
          *(_WORD *)(v3 + 38) = 0;
          server_ip = (unsigned __int64)__errno_location();
          v26 = *(_BYTE *)((server_ip >> 3) + 0x7FFF8000);
          if ( (char)((server_ip & 7) + 3) >= v26 && v26 )
          {
            v27 = __asan_report_store4(server_ip);
          }
          else
          {
            *(_DWORD *)server_ip = 0;
            v27 = poll((struct pollfd *)(v3 + 32), 1uLL, -1);
          }
          v28 = *(_BYTE *)((server_ip >> 3) + 0x7FFF8000);
          if ( (char)((server_ip & 7) + 3) >= v28 && v28 )
          {
            v27 = __asan_report_load4(server_ip);
LABEL_78:
            if ( !(v30 ^ v31 | v29) )
            {
              server_ip = v40 & 0xFFFFFF0000000000LL;
              v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
            }
            goto LABEL_73;
          }
          server_ip = ((unsigned __int64)(*(_DWORD *)server_ip != 0) << 32) | *(unsigned int *)server_ip | v44 & 0xFFFFFF0000000000LL;
          v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
          v31 = 0;
          v29 = v27 == 0;
          v30 = v27 < 0;
          if ( v27 )
            goto LABEL_78;
          server_ip = v42 & 0xFFFFFF0000000000LL;
LABEL_73:
          if ( v27 < 0 )
          {
            LODWORD(v20) = 0;
            goto LABEL_53;
          }
        }
      }
      server_ip = v41 & 0xFFFFFF0000000000LL;
      v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
      LODWORD(v20) = 0;
LABEL_53:
      w_lena = v20;
      if ( (_DWORD)server_ip || (int)v20 <= 0 )
        break;
      v12 += v20;
      if ( v12 < len )
      {
        common::milog::MiLogStream::MiLogStream(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/aclient_connect.cpp",
          "send",
          630);
        v38 = *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000);
        if ( v38 && v38 <= 1 )
          __asan_report_load2(&this->server_port_);
        else
          common::milog::MiLogStream::operator()(
            &v54,
            "server=%s:%u, len=%u, total_w_len=%d, w_len=%d",
            this->server_ip_,
            this->server_port_,
            len,
            v12,
            w_lena);
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
    }
    if ( (_DWORD)server_ip != 11 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&v19->id_ >> 3) + 0x7FFF8000) )
    {
      id = __asan_report_load8(&v19->id_);
    }
    else
    {
      id = v19->id_;
      if ( !id )
      {
        id = v19 == &boost::system::detail::cat_holder<void>::system_category_instance;
        goto LABEL_87;
      }
    }
    LOBYTE(id) = id == 0x8FAFD21E25C5E09BLL;
LABEL_87:
    if ( !(_BYTE)id )
      break;
    ++retry_times;
    common::milog::MiLogStream::MiLogStream(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/aclient_connect.cpp",
      "send",
      611);
    v36 = *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000);
    if ( v36 && v36 <= 1 )
    {
      __asan_report_load2(&this->server_port_);
    }
    else
    {
      server_ip = (unsigned __int64)this->server_ip_;
      common::milog::MiLogStream::operator()(
        &v54,
        "server=%s:%u send buffer is full, retry_times=%u",
        this->server_ip_,
        this->server_port_,
        retry_times);
    }
    common::milog::MiLogStream::~MiLogStream(&v54);
    if ( retry_times > 2 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/aclient_connect.cpp",
        "send",
        614);
      v37 = *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000);
      if ( !v37 || v37 > 1 )
      {
        common::milog::MiLogStream::operator()(
          &v54,
          "server=%s:%u send buffer is full after 3 retry, skip this packet",
          (const char *)server_ip,
          this->server_port_);
        goto LABEL_95;
      }
      goto LABEL_94;
    }
    usleep(0x3E8u);
  }
  common::milog::MiLogStream::MiLogStream(
    &v54,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aclient_connect.cpp",
    "send",
    605);
  v34 = *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000);
  if ( v34 && v34 <= 1 )
  {
LABEL_94:
    __asan_report_load2(&this->server_port_);
    goto LABEL_95;
  }
  common::milog::MiLogStream::operator()(
    &v54,
    "server=%s:%u, send failed with w_len=%d, ec=%d",
    this->server_ip_,
    this->server_port_,
    w_lena,
    (unsigned int)server_ip);
LABEL_95:
  common::milog::MiLogStream::~MiLogStream(&v54);
LABEL_96:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->send_mu_._M_mutex);
LABEL_98:
  if ( v55 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v12;
};

// Line 647: range 00000000153AB6AC-00000000153ABC49
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::minet::AClientConnect::sendPacket(
        common::minet::AClientConnect *const this,
        common::minet::PacketPtr packet_ptr)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  char v5; // dl
  int32_t v6; // eax
  __int64 v7; // rax
  unsigned int v8; // r14d
  char v9; // dl
  unsigned __int64 v10; // rdx
  char v11; // cl
  char v12; // al
  int32_t v13; // eax
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  char v15; // dl
  char v16; // dl
  char v17; // dl
  char *v18; // rdi
  unsigned int v20; // ebp
  int (**vptr_Packet)(...); // rax
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v22; // rdi
  char v23; // dl
  char v24; // cl
  common::milog::MiLogStream v25; // [rsp+10h] [rbp-B8h] BYREF
  char v26[152]; // [rsp+30h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v3 = v7;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 12 send_str:659";
  *(_QWORD *)(v3 + 16) = common::minet::AClientConnect::sendPacket;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_11;
  }
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_11:
    common::milog::MiLogStream::MiLogStream(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "sendPacket",
      650);
    common::milog::MiLogStream::operator()(&v25, "packet is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v8 = -1;
    goto LABEL_45;
  }
  v5 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v5 && v5 )
  {
    __asan_report_load4(&this->status_);
  }
  else if ( this->status_._M_i == STATUS_CONNECT )
  {
    *(_QWORD *)(v3 + 32) = v3 + 48;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_BYTE *)(v3 + 48) = 0;
    v6 = common::minet::Packet::serializeToString(
           (const common::minet::Packet *const)packet_ptr._M_ptr->_vptr_Packet,
           (std::string *)(v3 + 32));
    goto LABEL_17;
  }
  common::milog::MiLogStream::MiLogStream(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/aclient_connect.cpp",
    "sendPacket",
    655);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v25.ostr_,
    "connect is not ready, can not send now,state:");
  v9 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) < v9 || !v9 )
  {
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v25.ostr_, this->status_._M_i);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v8 = -1;
    goto LABEL_45;
  }
  v6 = __asan_report_load4(&this->status_);
LABEL_17:
  v8 = v6;
  if ( v6 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "sendPacket",
      662);
    if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = packet_ptr._M_ptr;
      __asan_report_load8(packet_ptr._M_ptr);
    }
    else
    {
      M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(packet_ptr._M_ptr->_vptr_Packet
                                                                                                  + 1);
      v15 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( !v15 || v15 > 1 )
      {
        common::milog::MiLogStream::operator()(
          &v25,
          "serializeToString cmd_id=%u failed",
          *((unsigned __int16 *)packet_ptr._M_ptr->_vptr_Packet + 4));
LABEL_58:
        common::milog::MiLogStream::~MiLogStream(&v25);
        v8 = -1;
        goto LABEL_43;
      }
    }
    goto LABEL_30;
  }
  v10 = *(_QWORD *)(v3 + 40);
  v11 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(&this->max_send_packet_len_);
LABEL_32:
    common::milog::MiLogStream::MiLogStream(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aclient_connect.cpp",
      "sendPacket",
      667);
    v16 = *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(&this->max_send_packet_len_);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(packet_ptr._M_ptr->_vptr_Packet
                                                                                                  + 1);
      v17 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( !v17 || v17 > 1 )
      {
        common::milog::MiLogStream::operator()(
          &v25,
          "packet cmd_id: %u, serializeToString len=%lu, too long for max_send_packet_len_=%u",
          *((unsigned __int16 *)packet_ptr._M_ptr->_vptr_Packet + 4),
          *(_QWORD *)(v3 + 40),
          this->max_send_packet_len_);
        goto LABEL_58;
      }
      goto LABEL_30;
    }
    M_ptr = packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
LABEL_30:
    __asan_report_load2(M_ptr);
    goto LABEL_58;
  }
  if ( this->max_send_packet_len_ < v10 )
    goto LABEL_32;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000);
  if ( v12 <= (((unsigned __int8)this + 41) & 7) && v12 )
  {
    v13 = __asan_report_load1(&this->is_async_send_);
    goto LABEL_42;
  }
  if ( this->is_async_send_ )
  {
    v13 = common::minet::AClientConnect::asyncSendString(this, (std::string *)(v3 + 32));
LABEL_42:
    v8 = v13;
    goto LABEL_43;
  }
  v20 = common::minet::AClientConnect::send(this, *(const char **)(v3 + 32), v10);
  if ( *(_DWORD *)(v3 + 40) != v20 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/aclient_connect.cpp",
      "sendPacket",
      682);
    if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      v22 = packet_ptr._M_ptr;
      __asan_report_load8(packet_ptr._M_ptr);
    }
    else
    {
      vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
      v22 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(packet_ptr._M_ptr->_vptr_Packet
                                                                                                + 1);
      v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
      if ( !v23 || v23 > 1 )
      {
        v22 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)vptr_Packet
                                                                                                  + 212);
        v24 = *(_BYTE *)((((unsigned __int64)vptr_Packet + 212) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)vptr_Packet - 44) & 7) + 3) < v24 || !v24 )
        {
          common::milog::MiLogStream::operator()(
            &v25,
            "send packet failed with user_id=%u, cmd_id=%u, len=%lu, send_len=%d",
            *((unsigned int *)vptr_Packet + 53),
            *((unsigned __int16 *)vptr_Packet + 4),
            *(_QWORD *)(v3 + 40),
            v20);
          goto LABEL_58;
        }
LABEL_57:
        __asan_report_load4(v22);
        goto LABEL_58;
      }
    }
    __asan_report_load2(v22);
    goto LABEL_57;
  }
LABEL_43:
  v18 = *(char **)(v3 + 32);
  if ( v18 != (char *)(v3 + 48) )
    operator delete(v18);
LABEL_45:
  if ( v26 == (char *)v3 )
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
  return v8;
};

// Line 713: range 00000000153A7126-00000000153A717B
void __fastcall common::minet::AClientConnect::asyncSendString(std::string &&)::{lambda(void)#1}::~basic_string(
        common::minet::AClientConnect::asyncSendString::<lambda()> *const this)
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

// Line 734: range 00000000153ABC4E-00000000153ACA93
void __fastcall common::minet::AClientConnect::asyncSendFrontString(common::minet::AClientConnect *const this)
{
  unsigned __int64 v2; // r15
  _DWORD *v3; // rbp
  void *p_status; // rdi
  char v5; // dl
  char v6; // al
  __int64 v7; // rax
  char *v8; // rdi
  char v9; // al
  char v10; // al
  unsigned __int64 p_wait_send_queue; // r14
  std::_Deque_base<std::string>::iterator *p_M_finish; // rdi
  std::string *v13; // rax
  std::size_t v14; // rax
  void *p_M_map_size; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v17; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer M_node; // rdx
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v19; // rsi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v20; // rdi
  __int128 v21; // rax
  char v22; // al
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::string *v25; // rdx
  char **v26; // rcx
  unsigned __int64 *v27; // r8
  char v28; // al
  char *v29; // rdi
  char v30; // al
  char *v31; // rdi
  void **v32; // rax
  std::string *v33; // rsi
  std::_Vector_base<std::string>::pointer M_start; // rdi
  std::_Vector_base<std::string>::pointer *v35; // rax
  unsigned __int64 p_M_string_length; // rdi
  __int64 v37; // r12
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  const __m128i *v40; // rsi
  const __m128i *v41; // rcx
  const __m128i *v42; // rdx
  unsigned __int64 v43; // rax
  std::size_t v44; // rcx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rdi
  void *v47; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v48; // rdi
  std::deque<std::string>::iterator v49; // [rsp-20h] [rbp-338h]
  std::_Vector_base<std::string>::pointer p_is_sending; // [rsp+0h] [rbp-318h]
  int v51; // [rsp+1Ch] [rbp-2FCh]
  char *v52; // [rsp+20h] [rbp-2F8h] BYREF
  unsigned __int64 v53; // [rsp+28h] [rbp-2F0h] BYREF
  boost::system::error_code ec; // [rsp+30h] [rbp-2E8h] BYREF
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // [rsp+40h] [rbp-2D8h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v56; // [rsp+48h] [rbp-2D0h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_last; // [rsp+50h] [rbp-2C8h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer v58; // [rsp+58h] [rbp-2C0h]
  boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<const boost::asio::const_buffer*,std::vector<boost::asio::const_buffer> >,boost::asio::detail::transfer_all_t,common::minet::AClientConnect::asyncSendFrontString()::<lambda(const boost::system::error_code&,size_t)> > v59; // [rsp+60h] [rbp-2B8h] BYREF
  char v60[600]; // [rsp+C0h] [rbp-258h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(544LL);
    if ( v7 )
      v2 = v7;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 16 11 handler:758 80 16 8 handler2 112 24 19 send_buffer_vec:769 176 32 9 __pos:733 240 32 "
                        "6 __last 304 32 7 __first 368 32 5 __tmp 432 80 13 str_queue:748";
  *(_QWORD *)(v2 + 16) = common::minet::AClientConnect::asyncSendFrontString;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862728] = -219021312;
  v3[536862729] = 62194;
  v3[536862730] = -219021312;
  v3[536862731] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862736] = -202116109;
  p_status = &this->status_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v5 && v5 )
  {
    __asan_report_load4(p_status);
LABEL_11:
    __asan_report_load4(p_status);
    goto LABEL_12;
  }
  if ( this->status_._M_i == STATUS_CONNECT )
    goto LABEL_20;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v2 + 304),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aclient_connect.cpp",
    "asyncSendFrontString",
    737);
  p_status = &this->target_app_id_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_11;
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v2 + 368), this->target_app_id_);
LABEL_12:
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)(v2 + 304),
    "target_app_id: %s status_ is not STATUS_START, Stop asyncSend request",
    *(const char **)(v2 + 368));
  v8 = *(char **)(v2 + 368);
  if ( v8 != (char *)(v2 + 384) )
    operator delete(v8);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
  if ( v9 > ((unsigned __int8)this & 7) || !v9 )
  {
    this->is_sending_._M_base._M_i = 0;
    _mm_mfence();
    goto LABEL_17;
  }
  __asan_report_store1(&this->is_sending_);
LABEL_20:
  p_is_sending = (std::_Vector_base<std::string>::pointer)&this->is_sending_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_sending_ >> 3) + 0x7FFF8000);
  if ( v10 <= ((unsigned __int8)this & 7) && v10 )
  {
    __asan_report_load1(p_is_sending);
LABEL_51:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/aclient_connect.cpp",
      "asyncSendFrontString",
      744);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 + 328),
      "is_sending is true, should not happen, target_app_id:");
    v28 = *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000);
    if ( v28 && v28 <= 3 )
      __asan_report_load4(&this->target_app_id_);
    else
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v2 + 368), this->target_app_id_);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 + 328),
      *(const char **)(v2 + 368));
    v29 = *(char **)(v2 + 368);
    if ( v29 != (char *)(v2 + 384) )
      operator delete(v29);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    goto LABEL_17;
  }
  if ( this->is_sending_._M_base._M_i )
    goto LABEL_51;
  *(_QWORD *)(v2 + 432) = 0LL;
  *(_QWORD *)(v2 + 440) = 0LL;
  *(_QWORD *)(v2 + 448) = 0LL;
  *(_QWORD *)(v2 + 456) = 0LL;
  *(_QWORD *)(v2 + 464) = 0LL;
  *(_QWORD *)(v2 + 472) = 0LL;
  *(_QWORD *)(v2 + 480) = 0LL;
  *(_QWORD *)(v2 + 488) = 0LL;
  *(_QWORD *)(v2 + 496) = 0LL;
  *(_QWORD *)(v2 + 504) = 0LL;
  std::_Deque_base<std::string>::_M_initialize_map((std::_Deque_base<std::string> *const)(v2 + 432), 0LL);
  p_wait_send_queue = (unsigned __int64)&this->wait_send_queue_;
  if ( &_pthread_key_create )
  {
    v51 = pthread_mutex_lock(&this->wait_send_queue_.queue_mu_._M_mutex);
    if ( v51 )
    {
      __asan_handle_no_return(&this->wait_send_queue_.queue_mu_);
      std::__throw_system_error(v51);
    }
  }
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_60;
  }
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(p_M_finish);
LABEL_61:
    __asan_report_load_n(p_M_finish, 32LL);
LABEL_62:
    __asan_report_load_n(p_M_finish, 32LL);
    goto LABEL_63;
  }
  if ( this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur == this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur )
    goto LABEL_42;
  *(__m128i *)(v2 + 368) = _mm_load_si128((const __m128i *)(v2 + 448));
  *(__m128i *)(v2 + 384) = _mm_load_si128((const __m128i *)(v2 + 464));
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 81) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_61;
  }
  *(__m128i *)(v2 + 448) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start);
  *(__m128i *)(v2 + 464) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last);
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur = _mm_load_si128((const __m128i *)(v2 + 368));
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_last = _mm_load_si128((const __m128i *)(v2 + 384));
  *(__m128i *)(v2 + 368) = _mm_load_si128((const __m128i *)(v2 + 480));
  *(__m128i *)(v2 + 384) = _mm_load_si128((const __m128i *)(v2 + 496));
  p_M_finish = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 49) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_62;
  }
  *(__m128i *)(v2 + 480) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish);
  *(__m128i *)(v2 + 496) = _mm_loadu_si128((const __m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last);
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v2 + 368));
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v2 + 384));
  v13 = *(std::string **)(v2 + 432);
  if ( *(_BYTE *)((p_wait_send_queue >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    p_M_map_size = &this->wait_send_queue_;
    __asan_report_load8(&this->wait_send_queue_);
    goto LABEL_64;
  }
  *(_QWORD *)(v2 + 432) = this->wait_send_queue_.queue_.c._M_impl._M_map;
  this->wait_send_queue_.queue_.c._M_impl._M_map = v13;
  v14 = *(_QWORD *)(v2 + 440);
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_M_map_size);
LABEL_65:
    __asan_report_load_n(p_M_map_size, 32LL);
LABEL_66:
    __asan_report_load_n(p_M_map_size, 32LL);
    goto LABEL_67;
  }
  *(_QWORD *)(v2 + 440) = this->wait_send_queue_.queue_.c._M_impl._M_map_size;
  this->wait_send_queue_.queue_.c._M_impl._M_map_size = v14;
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 81) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_65;
  }
  M_first = this->wait_send_queue_.queue_.c._M_impl._M_start._M_first;
  M_cur = this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur;
  v56 = M_first;
  M_node = this->wait_send_queue_.queue_.c._M_impl._M_start._M_node;
  M_last = this->wait_send_queue_.queue_.c._M_impl._M_start._M_last;
  v17 = M_last;
  v58 = M_node;
  *(_QWORD *)(v2 + 176) = M_cur;
  *(_QWORD *)(v2 + 184) = M_first;
  *(_QWORD *)(v2 + 192) = v17;
  *(_QWORD *)(v2 + 200) = M_node;
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 49) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_66;
  }
  v19 = this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur;
  v20 = this->wait_send_queue_.queue_.c._M_impl._M_finish._M_first;
  *(_QWORD *)(v2 + 368) = v19;
  *(_QWORD *)(v2 + 376) = v20;
  v21 = *(_OWORD *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last;
  *(_OWORD *)(v2 + 384) = v21;
  *(__m128i *)(v2 + 304) = _mm_load_si128((const __m128i *)(v2 + 176));
  *(__m128i *)(v2 + 320) = _mm_load_si128((const __m128i *)(v2 + 192));
  *(_QWORD *)(v2 + 240) = v19;
  *(_QWORD *)(v2 + 248) = v20;
  *(_OWORD *)(v2 + 256) = v21;
  *(_OWORD *)&v49._M_last = v21;
  *(_OWORD *)&v49._M_cur = *(_OWORD *)(v2 + 240);
  std::deque<std::string>::_M_destroy_data_aux(
    &this->wait_send_queue_.queue_.c,
    *(std::deque<std::string>::iterator *)(v2 + 304),
    v49);
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_M_map_size);
LABEL_68:
    __asan_report_store_n(p_M_map_size, 32LL);
LABEL_69:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v2 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/aclient_connect.cpp",
      "asyncSendFrontString",
      753);
    v30 = *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000);
    if ( v30 && v30 <= 3 )
      __asan_report_load4(&this->target_app_id_);
    else
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v2 + 304), this->target_app_id_);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 240),
      "target_app_id: %s wait_send_queue_ empty",
      *(const char **)(v2 + 304));
    v31 = *(char **)(v2 + 304);
    if ( v31 != (char *)(v2 + 320) )
      operator delete(v31);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    std::deque<std::string>::~deque((std::deque<std::string>_0 *const)(v2 + 432));
    goto LABEL_17;
  }
  std::_Deque_base<std::string>::_M_destroy_nodes(
    &this->wait_send_queue_.queue_.c,
    (std::_Deque_base<std::string>::_Map_pointer)(*(_QWORD *)(v2 + 200) + 8LL),
    (std::_Deque_base<std::string>::_Map_pointer)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node->_M_string_length);
  p_M_map_size = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 49) & 7)
    || *(char *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_68;
  }
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v2 + 176));
  *(__m128i *)&this->wait_send_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v2 + 192));
LABEL_42:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->wait_send_queue_.queue_mu_._M_mutex);
  if ( *(_QWORD *)(v2 + 480) == *(_QWORD *)(v2 + 448) )
    goto LABEL_69;
  v22 = *(_BYTE *)(((unsigned __int64)p_is_sending >> 3) + 0x7FFF8000);
  if ( v22 <= ((unsigned __int8)this & 7) && v22 )
  {
    p_M_refcount = &this->is_sending_;
    __asan_report_store1(p_is_sending);
    goto LABEL_77;
  }
  this->is_sending_._M_base._M_i = 1;
  _mm_mfence();
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8(p_M_refcount);
    goto LABEL_78;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v2 + 56) = M_pi;
  if ( !M_pi )
    goto LABEL_81;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(M_pi);
LABEL_78:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&this->std::enable_shared_from_this<common::minet::AClientConnect>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::AClientConnect> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
LABEL_81:
    __asan_handle_no_return(M_pi);
    std::__throw_bad_weak_ptr();
  }
  *(_QWORD *)(v2 + 48) = this->_M_weak_this._M_ptr;
  while ( 1 )
  {
    v33 = *(std::string **)(v2 + 448);
    if ( *(std::string **)(v2 + 480) == v33 )
      break;
    std::vector<std::string>::emplace_back<std::string>(&this->send_str_vec_, v33, v25);
    v32 = *(void ***)(v2 + 448);
    if ( v32 == (void **)(*(_QWORD *)(v2 + 464) - 32LL) )
    {
LABEL_90:
      std::deque<std::string>::_M_pop_front_aux((std::deque<std::string> *const)(v2 + 432));
    }
    else
    {
      v25 = (std::string *)((unsigned __int64)v32 >> 3);
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(*(_QWORD *)(v2 + 448));
        goto LABEL_90;
      }
      if ( *v32 != v32 + 2 )
        operator delete(*v32);
      *(_QWORD *)(v2 + 448) += 32LL;
    }
  }
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_ >> 3) + 0x7FFF8000) )
  {
    v35 = (std::_Vector_base<std::string>::pointer *)__asan_report_load8(&this->send_str_vec_);
    goto LABEL_95;
  }
  M_start = this->send_str_vec_._M_impl._M_start;
  v35 = &this->send_str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    p_M_string_length = (unsigned __int64)v35;
    __asan_report_load8(v35);
    goto LABEL_96;
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
LABEL_96:
      __asan_report_load8(p_M_string_length);
LABEL_97:
      __asan_report_load8(p_M_string_length);
      goto LABEL_98;
    }
    v53 = *(_QWORD *)(p_wait_send_queue + 8);
    p_M_string_length = p_wait_send_queue;
    if ( *(_BYTE *)((p_wait_send_queue >> 3) + 0x7FFF8000) )
      goto LABEL_97;
    v52 = *(char **)p_wait_send_queue;
    std::vector<boost::asio::const_buffer>::emplace_back<char *,unsigned long>(
      (std::vector<boost::asio::const_buffer> *const)(v2 + 112),
      &v52,
      &v53,
      v26,
      v27);
LABEL_98:
    M_start = (std::_Vector_base<std::string>::pointer)(p_wait_send_queue + 32);
  }
  std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 80),
    (const std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2> *)(v2 + 48));
  v59.stream_ = &this->sock_;
  v37 = *(_QWORD *)(v2 + 120) - *(_QWORD *)(v2 + 112);
  memset(&v59.buffers_, 0, 24);
  v38 = v37 >> 4;
  if ( v37 >> 4 )
  {
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(v38);
      std::__throw_bad_alloc();
    }
    v39 = operator new(16 * v38);
  }
  else
  {
    v39 = 0LL;
  }
  v59.buffers_.buffers_._M_impl._M_start = (std::_Vector_base<boost::asio::const_buffer>::pointer)v39;
  v59.buffers_.buffers_._M_impl._M_finish = (std::_Vector_base<boost::asio::const_buffer>::pointer)v39;
  v59.buffers_.buffers_._M_impl._M_end_of_storage = (std::_Vector_base<boost::asio::const_buffer>::pointer)(v39 + v37);
  v40 = *(const __m128i **)(v2 + 120);
  v41 = *(const __m128i **)(v2 + 112);
  while ( 1 )
  {
    v42 = v41;
    if ( v40 == v41 )
      break;
    if ( *(_WORD *)((v39 >> 3) + 0x7FFF8000) )
    {
      v39 = __asan_report_store16(v39, v40);
    }
    else if ( *(_WORD *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
    {
      v39 = __asan_report_load16(v41);
      break;
    }
    *(__m128i *)v39 = _mm_loadu_si128(v42);
    v41 = v42 + 1;
    v39 += 16LL;
  }
  v59.buffers_.buffers_._M_impl._M_finish = (std::_Vector_base<boost::asio::const_buffer>::pointer)v39;
  memset(&v59.buffers_.total_consumed_, 0, 24);
  v43 = *(_QWORD *)(v2 + 112);
  v44 = 0LL;
  while ( *(_QWORD *)(v2 + 120) != v43 )
  {
    if ( *(_WORD *)((v43 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(v43);
      break;
    }
    v44 += *(_QWORD *)(v43 + 8);
    v43 += 16LL;
  }
  v59.buffers_.total_size_ = v44;
  v59.start_ = 0;
  v59.handler_.__self_ptr._M_ptr = *(std::__shared_ptr<common::minet::AClientConnect,(__gnu_cxx::_Lock_policy)2>::element_type **)(v2 + 80);
  v45 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 88);
  *(_QWORD *)(v2 + 88) = 0LL;
  v59.handler_.__self_ptr._M_refcount._M_pi = v45;
  *(_QWORD *)(v2 + 80) = 0LL;
  ec.val_ = 0;
  ec.failed_ = 0;
  ec.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AClientConnect::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::operator()(
    &v59,
    &ec,
    0LL,
    1);
  boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AClientConnect::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::~write_op(&v59);
  v46 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 88);
  if ( v46 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46);
  v47 = *(void **)(v2 + 112);
  if ( v47 )
    operator delete(v47);
  v48 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 56);
  if ( v48 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v48);
  std::deque<std::string>::~deque((std::deque<std::string>_0 *const)(v2 + 432));
LABEL_17:
  if ( v60 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 779: range 00000000153AD192-00000000153AD4C4
void __fastcall common::minet::AClientConnect::handleAsyncSend(
        common::minet::AClientConnect *const this,
        const boost::system::error_code *ec,
        size_t bytes)
{
  std::string *M_start; // r13
  std::_Vector_base<std::string>::pointer M_finish; // r14
  unsigned __int64 i; // rbp
  std::atomic<bool> *p_is_sending; // rdi
  char v8; // al
  char v9; // al
  const boost::system::error_code *v10; // rdi
  const boost::system::error_code *v11; // rdi
  char v12; // al
  const char *v13; // r12
  char v14; // al
  std::vector<std::string> *p_send_str_vec; // rdi
  pthread_mutex_t *p_M_finish; // rdi
  std::_Deque_base<std::string>::iterator *p_M_start; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // r12
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer v19; // rbp
  struct _Unwind_Exception *v20; // rbx
  common::milog::MiLogStream v21; // [rsp+0h] [rbp-88h] BYREF
  std::string v22; // [rsp+20h] [rbp-68h] BYREF
  void *v23; // [rsp+40h] [rbp-48h] BYREF
  char v24[56]; // [rsp+50h] [rbp-38h] BYREF

  i = (unsigned __int64)ec;
  p_is_sending = &this->is_sending_;
  v8 = *(_BYTE *)(((unsigned __int64)p_is_sending >> 3) + 0x7FFF8000);
  if ( v8 <= ((unsigned __int8)p_is_sending & 7) && v8 )
  {
    __asan_report_store1(p_is_sending);
LABEL_13:
    v10 = ec;
    __asan_report_load4(ec);
LABEL_14:
    __asan_report_load8(v10);
    goto LABEL_15;
  }
  this->is_sending_._M_base._M_i = 0;
  _mm_mfence();
  v9 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_13;
  if ( !ec->val_ )
    goto LABEL_27;
  ec = (const boost::system::error_code *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/aclient_connect.cpp",
    "handleAsyncSend",
    783);
  v10 = (const boost::system::error_code *)(i + 8);
  if ( *(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  ec = *(const boost::system::error_code **)(i + 8);
  if ( *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v11 = ec;
    __asan_report_load8(ec);
    goto LABEL_16;
  }
  v11 = (const boost::system::error_code *)(*(_QWORD *)&ec->val_ + 32LL);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v11);
    goto LABEL_17;
  }
  v12 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
  if ( !v12 || v12 > 3 )
  {
    (*(void (__fastcall **)(void **, const boost::system::error_code *, _QWORD))(*(_QWORD *)&ec->val_ + 32LL))(
      &v23,
      ec,
      *(unsigned int *)i);
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load4(i);
LABEL_18:
  v13 = (const char *)v23;
  i = *(unsigned int *)i;
  v14 = *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    __asan_report_load4(&this->target_app_id_);
  else
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v22, this->target_app_id_);
  common::milog::MiLogStream::operator()(
    &v21,
    "[NETWORK][ECS] target_app_id: %s handleAsyncSend ec %u message: %s",
    v22._M_dataplus._M_p,
    (unsigned int)i,
    v13);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v22._M_dataplus._M_p != &v22._anon_0 )
    operator delete(v22._M_dataplus._M_p);
  if ( v23 != v24 )
    operator delete(v23);
  common::milog::MiLogStream::~MiLogStream(&v21);
LABEL_27:
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_ >> 3) + 0x7FFF8000) )
  {
    p_send_str_vec = &this->send_str_vec_;
    __asan_report_load8(&this->send_str_vec_);
    goto LABEL_32;
  }
  M_start = this->send_str_vec_._M_impl._M_start;
  p_send_str_vec = (std::vector<std::string> *)&this->send_str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_send_str_vec);
    goto LABEL_33;
  }
  M_finish = this->send_str_vec_._M_impl._M_finish;
  if ( M_start != M_finish )
  {
    for ( i = (unsigned __int64)this->send_str_vec_._M_impl._M_start; ; i += 32LL )
    {
      if ( M_finish == (std::_Vector_base<std::string>::pointer)i )
      {
        p_M_finish = (pthread_mutex_t *)&this->send_str_vec_._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&this->send_str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          this->send_str_vec_._M_impl._M_finish = M_start;
          goto LABEL_42;
        }
        __asan_report_store8();
LABEL_52:
        __asan_handle_no_return(p_M_finish);
        std::__throw_system_error(i);
      }
      p_send_str_vec = (std::vector<std::string> *)i;
      if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
        break;
      p_send_str_vec = *(std::vector<std::string> **)i;
      if ( *(_QWORD *)i != i + 16 )
        goto LABEL_34;
LABEL_35:
      ;
    }
LABEL_33:
    __asan_report_load8(p_send_str_vec);
LABEL_34:
    operator delete(p_send_str_vec);
    goto LABEL_35;
  }
LABEL_42:
  p_M_finish = &this->wait_send_queue_.queue_mu_._M_mutex;
  if ( &_pthread_key_create )
  {
    LODWORD(i) = pthread_mutex_lock(p_M_finish);
    if ( (_DWORD)i )
      goto LABEL_52;
  }
  p_M_start = &this->wait_send_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_start);
LABEL_54:
    v20 = (struct _Unwind_Exception *)__asan_report_load8(p_M_start);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v22._M_dataplus._M_p != &v22._anon_0 )
      operator delete(v22._M_dataplus._M_p);
    if ( v23 != v24 )
      operator delete(v23);
    common::milog::MiLogStream::~MiLogStream(&v21);
    __asan_handle_no_return(&v21);
    _Unwind_Resume(v20);
  }
  M_cur = this->wait_send_queue_.queue_.c._M_impl._M_finish._M_cur;
  p_M_start = &this->wait_send_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_send_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  v19 = this->wait_send_queue_.queue_.c._M_impl._M_start._M_cur;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->wait_send_queue_.queue_mu_._M_mutex);
  if ( M_cur != v19 )
    common::minet::AClientConnect::asyncSendFrontString(this);
};

// Line 795: range 00000000153B8249-00000000153B8260
void __cdecl GLOBAL__sub_I_aclient_connect_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 795: range 00000000153A60D4-00000000153A63A3
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/aclient_connect.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ = 1;
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
    if ( !`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ )
    {
      `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
        &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
        &_dso_handle);
    }
    if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
    {
      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
      if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) )
      {
        v2 = (_BYTE *)__asan_report_store8();
LABEL_29:
        *v2 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
LABEL_18:
        if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
        {
          `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
            &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            &_dso_handle);
        }
        if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero )
        {
          `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = 1;
          if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                        + 0x7FFF8000) )
          {
            v3 = (_BYTE *)__asan_report_store8();
            goto LABEL_31;
          }
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits
                                                                              + 9;
        }
        v3 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id[0] )
        {
LABEL_24:
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
LABEL_31:
        *v3 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
        goto LABEL_24;
      }
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
    }
    v2 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
    if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] )
      goto LABEL_18;
    goto LABEL_29;
  }
};
