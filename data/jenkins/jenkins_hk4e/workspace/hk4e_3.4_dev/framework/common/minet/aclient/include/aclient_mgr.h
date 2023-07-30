// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aclient/include/aclient_mgr.h

// Line 55: range 000000000C83A04A-000000000C83A490
void __cdecl common::minet::AClientMgr<DispatchConnect>::AClientMgr(
        common::minet::AClientMgr<DispatchConnect> *const this)
{
  int (**v1)(...); // rdx
  __int64 v2; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::AClientBase::AClientBase(this);
  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<DispatchConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::atomic(&this->status_, STATUS_UN_INIT_3);
  v2 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v2 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v2;
  }
  boost::thread_group::thread_group(&this->ioc_thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->keep_alive_sec_);
  }
  this->keep_alive_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->timeout_sec_);
  }
  this->timeout_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recv_buf_len_);
  }
  this->recv_buf_len_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cut_packet_);
  this->is_cut_packet_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_async_send_);
  }
  this->is_async_send_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cache_packet_max_num_);
  }
  this->cache_packet_max_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_send_packet_len_);
  }
  this->max_send_packet_len_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->thread_num_);
  }
  this->thread_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reconnect_min_interval_);
  }
  this->reconnect_min_interval_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reconnect_max_interval_);
  }
  this->reconnect_max_interval_ = 0;
  std::shared_mutex::shared_mutex(&this->shared_mu_);
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<DispatchConnect>>>>::Data::Data(&this->conn_map_.m_flat_tree.m_data);
};

// Line 55: range 000000000C8398BA-000000000C839D00
void __cdecl common::minet::AClientMgr<GameserverConnect>::AClientMgr(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  int (**v1)(...); // rdx
  __int64 v2; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::AClientBase::AClientBase(this);
  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<GameserverConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::atomic(&this->status_, STATUS_UN_INIT_0);
  v2 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v2 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v2;
  }
  boost::thread_group::thread_group(&this->ioc_thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->keep_alive_sec_);
  }
  this->keep_alive_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->timeout_sec_);
  }
  this->timeout_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recv_buf_len_);
  }
  this->recv_buf_len_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cut_packet_);
  this->is_cut_packet_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_async_send_);
  }
  this->is_async_send_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cache_packet_max_num_);
  }
  this->cache_packet_max_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_send_packet_len_);
  }
  this->max_send_packet_len_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->thread_num_);
  }
  this->thread_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reconnect_min_interval_);
  }
  this->reconnect_min_interval_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reconnect_max_interval_);
  }
  this->reconnect_max_interval_ = 0;
  std::shared_mutex::shared_mutex(&this->shared_mu_);
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GameserverConnect>>>>::Data::Data(&this->conn_map_.m_flat_tree.m_data);
};

// Line 55: range 000000000C83A7DA-000000000C83AC20
void __cdecl common::minet::AClientMgr<PathfindingserverConnect>::AClientMgr(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  int (**v1)(...); // rdx
  __int64 v2; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::AClientBase::AClientBase(this);
  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<PathfindingserverConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::atomic(&this->status_, STATUS_UN_INIT_1);
  v2 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v2 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v2;
  }
  boost::thread_group::thread_group(&this->ioc_thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->keep_alive_sec_);
  }
  this->keep_alive_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->timeout_sec_);
  }
  this->timeout_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recv_buf_len_);
  }
  this->recv_buf_len_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cut_packet_);
  this->is_cut_packet_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_async_send_);
  }
  this->is_async_send_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cache_packet_max_num_);
  }
  this->cache_packet_max_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_send_packet_len_);
  }
  this->max_send_packet_len_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->thread_num_);
  }
  this->thread_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reconnect_min_interval_);
  }
  this->reconnect_min_interval_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reconnect_max_interval_);
  }
  this->reconnect_max_interval_ = 0;
  std::shared_mutex::shared_mutex(&this->shared_mu_);
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<PathfindingserverConnect>>>>::Data::Data(&this->conn_map_.m_flat_tree.m_data);
};

// Line 55: range 000000000C83AF6A-000000000C83B3B0
void __cdecl common::minet::AClientMgr<TothemoonserverConnect>::AClientMgr(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  int (**v1)(...); // rdx
  __int64 v2; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::AClientBase::AClientBase(this);
  v1 = (int (**)(...))(&`vtable for'common::minet::AClientMgr<TothemoonserverConnect> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
  std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::atomic(&this->status_, STATUS_UN_INIT_2);
  v2 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v2 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v2;
  }
  boost::thread_group::thread_group(&this->ioc_thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->keep_alive_sec_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->keep_alive_sec_);
  }
  this->keep_alive_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 98) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->timeout_sec_);
  }
  this->timeout_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recv_buf_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recv_buf_len_);
  }
  this->recv_buf_len_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_cut_packet_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cut_packet_);
  this->is_cut_packet_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_send_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_async_send_);
  }
  this->is_async_send_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cache_packet_max_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cache_packet_max_num_);
  }
  this->cache_packet_max_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_send_packet_len_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_send_packet_len_);
  }
  this->max_send_packet_len_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->thread_num_);
  }
  this->thread_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reconnect_min_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reconnect_min_interval_);
  }
  this->reconnect_min_interval_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reconnect_max_interval_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reconnect_max_interval_);
  }
  this->reconnect_max_interval_ = 0;
  std::shared_mutex::shared_mutex(&this->shared_mu_);
  boost::container::dtl::flat_tree<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>,boost::container::dtl::select1st<unsigned int>,std::less<unsigned int>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<TothemoonserverConnect>>>>::Data::Data(&this->conn_map_.m_flat_tree.m_data);
};

// Line 74: range 000000000C7BBFB6-000000000C7BBFD9
bool __cdecl common::minet::AClientMgr<GameserverConnect>::isRun(
        common::minet::AClientMgr<GameserverConnect> *const this)
{
  return std::atomic<common::minet::AClientMgr<GameserverConnect>::Status>::operator common::minet::AClientMgr<GameserverConnect>::Status(&this->status_) == STATUS_START;
};

// Line 85: range 000000000C85F79A-000000000C85F7BD
bool __cdecl common::minet::AClientMgr<DispatchConnect>::isRun(common::minet::AClientMgr<DispatchConnect> *const this)
{
  return std::atomic<common::minet::AClientMgr<DispatchConnect>::Status>::operator common::minet::AClientMgr<DispatchConnect>::Status(&this->status_) == STATUS_START_2;
};

// Line 85: range 000000000C7BBFDA-000000000C7BBFFD
bool __cdecl common::minet::AClientMgr<PathfindingserverConnect>::isRun(
        common::minet::AClientMgr<PathfindingserverConnect> *const this)
{
  return std::atomic<common::minet::AClientMgr<PathfindingserverConnect>::Status>::operator common::minet::AClientMgr<PathfindingserverConnect>::Status(&this->status_) == STATUS_START_0;
};

// Line 85: range 000000000C7CFAF6-000000000C7CFB19
bool __cdecl common::minet::AClientMgr<TothemoonserverConnect>::isRun(
        common::minet::AClientMgr<TothemoonserverConnect> *const this)
{
  return std::atomic<common::minet::AClientMgr<TothemoonserverConnect>::Status>::operator common::minet::AClientMgr<TothemoonserverConnect>::Status(&this->status_) == STATUS_START_1;
};
